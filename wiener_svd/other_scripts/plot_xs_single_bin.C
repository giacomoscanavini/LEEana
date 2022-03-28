// mean value in a bin
double get_mean_x(TGraph* gh, double low, double high, double threshold=0.11){ // 110MeV threshold for CCQE
  int N = 20;
  double sum_yx=0, sum_y=0;
  for (int i=0; i<=N; i++) {
    double x = low + (high-low)/(1.0*N) * i;
    double y = gh->Eval(x);
    if(x>threshold) {
      sum_yx += y*x;
      sum_y += y;
    }
  }
  // cout << "low: " << low << " high: " << high << " mean: " << sum_yx/sum_y << endl;
  return sum_yx/sum_y; // mean in x
}

// flux weighted xsec
double get_mean_sigma(TGraph* gh, TGraph* gx, double low, double high, double threshold=0.11){
  int N = 20;
  double sum_fxsec=0, sum_f=0;
  for (int i=0; i<=N; i++) {
    double x = low + (high-low)/(1.0*N) * i;
    double F = gh->Eval(x);
    double xsec = gx->Eval(x);
    if (x>threshold){
      sum_fxsec += F*xsec;
      sum_f += F;
    }
  }
  return sum_fxsec/sum_f;
}

// GoF
double calc_GoF(TMatrixD matrix_pred, TMatrixD matrix_data, TMatrixD cov){
  TMatrixD md = matrix_pred - matrix_data;
  TMatrixD mdT = matrix_pred - matrix_data;
  mdT.T();
  cov.Invert();
  auto mret = md * cov * mdT;
  cout << mret.GetNrows() << " x " << mret.GetNcols() << " chi2/NDF= " << mret(0,0) << "/" << md.GetNcols() << endl;
  return mret(0,0);
}

// main function
void plot_xs_single_bin(int option = 2){

  auto c1 = new TCanvas("c1","c1",800,600);

  // unfolded result
  auto uBxsec = TFile::Open("output.root");
  auto unfold   = (TH1D*)uBxsec->Get("unf");
  auto absError = (TH1D*)uBxsec->Get("absError");
  auto smear    = (TH2D*)uBxsec->Get("smear"); // Ac from unfolding
  auto cov      = (TH2D*)uBxsec->Get("unfcov");

  std::cout << "unfold nbins = " << unfold->GetNbinsX() << std::endl;

  // real binning
  int nbins = unfold->GetNbinsX();
  std::cout << "nbins = " << nbins << std::endl;

  double xbins[] = {0.275, 8}; // Bin separators - GeV
  //double xbins[] = {0., 4.0}; // Bin separators - GeV
  double xcenter[nbins];      // Bin central values - MeV

  for (int i=0; i<nbins;i++) {
    xcenter[i] = (xbins[i+1]-xbins[i])*1000./2.; // MeV
  }

  double XS_FACTOR = 100.;  // Cross section is in terms of 10e-36 cm^2/Ar if XS_FACTOR == 1., otherwise change axis
                      // 10e-38 cm^2/Ar if XS_FACTOR == 100.
                      // 10e-39 cm^2/Ar if XS_FACTOR == 1000.

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // CROSS SECTION WITH BNB DATA
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // Takes error bars from absError and creates new histogram with those error bars and CV from unfold
  TH1D* unfold1 = new TH1D("unfold_real","",nbins, xbins);
  TVectorD unfold1_vd(nbins);
  for(int i=0; i<nbins; i++) {
    unfold1->SetBinContent(i+1, unfold->GetBinContent(i+1));
    unfold1->SetBinError(i+1, absError->GetBinContent(i+1));
    unfold1_vd(i) = unfold->GetBinContent(i+1);
  }
  // unfold1->Draw("E");

  // set assymetric error bar in x-axis, symmetric in y-axis
  std::vector<double> x_v, y_v;
  std::vector<double> exl_v, exh_v;
  std::vector<double> eyl_v, eyh_v;
  for (int i=0; i<nbins; i++){
    double low = unfold1->GetBinLowEdge(i+1);
    double width = unfold1->GetBinWidth(i+1);
    double y = unfold1->GetBinContent(i+1);
    double ey = unfold1->GetBinError(i+1);
    double x = xcenter[i] / 1000.0;                     // Allows to pick given central value in bin 

    x_v.push_back(x); 
    y_v.push_back(y * XS_FACTOR);          // 10e-36 cm^2 if XS_FACTOR == 1.
    //exl_v.push_back(x-low); 
    //exh_v.push_back(low+width-x); 
    //exl_v.push_back(x - xbins[i]); 
    //exh_v.push_back(xbins[i+1] - x); 
    exl_v.push_back(0.01); 
    exh_v.push_back(0.01); 
    eyl_v.push_back(ey * XS_FACTOR);       // 10e-36 cm^2 if XS_FACTOR == 1.
    eyh_v.push_back(ey * XS_FACTOR);       // 10e-36 cm^2 if XS_FACTOR == 1.
  }

  auto gr = new TGraphAsymmErrors(x_v.size(),x_v.data(),y_v.data(),exl_v.data(),exh_v.data(),eyl_v.data(),eyh_v.data());
  gr->GetXaxis()->SetTitle("E_{#nu} [GeV]");
  //gr->GetXaxis()->SetTitle("P_{#pi^{0}} [GeV/c]");
  gr->GetYaxis()->SetTitle("#sigma_{CC} (#times 10^{-38} cm^{2} / Ar)");
  gr->SetMarkerColor(6);
  gr->SetMarkerStyle(21);
  gr->SetMarkerSize(1);
  gr->SetLineWidth(2);
  gr->SetLineColor(6);
  gr->GetXaxis()->SetLabelSize(0.035);
  gr->GetYaxis()->SetLabelSize(0.025);
  gr->GetXaxis()->SetTitleSize(0.035);
  gr->GetYaxis()->SetTitleSize(0.035);
  //gr->GetXaxis()->SetRangeUser(0., 4.35);
  gr->GetYaxis()->SetRangeUser(0., 0.03 * XS_FACTOR);
  gr->GetXaxis()->SetLimits(0.,xbins[1]);       // along X
  //gr->GetHistogram()->SetMaximum(20.);        // max along Y          
  //gr->GetHistogram()->SetMinimum(-20.);       // min along Y     
  gr->SetTitle("");
  gr->Draw("AP");
  //gr->Draw("AC*");

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // CROSS SECTION WITH MC TRUTH CV (no smearing)
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  auto fmerge = TFile::Open("merge_xs.root");
  TVectorD * vec_signal = (TVectorD*)fmerge->Get("vec_signal");
  int nbin_true = vec_signal->GetNoElements();
  TH1D *htrue_signal = new TH1D("htrue_signal","htrue_signal",nbins, xbins);
  for(int i=0; i<nbins; i++) {
    htrue_signal->SetBinContent(i+1, (*vec_signal)(i));
    //std::cout << "vec_signal[i] = " << (*vec_signal)(i) << std::endl;
  }
  //htrue_signal->Draw("same");
/*
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // CROSS SECTION WITH ADDITIONAL MODELS
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  TFile *file1 = new TFile("../genie/xsec_graphs_v2_tune1.root");
  TFile *file2 = new TFile("../genie/xsec_graphs_v3_10a_02_11a.root");

  TGraph *g1 = (TGraph*)file1->Get("nu_mu_Ar40/tot_cc");
  TGraph *g2 = (TGraph*)file2->Get("nu_mu_Ar40/tot_cc");

  // xsec model 
  // scale by 1/100
  int N1 = g1->GetN();
  double* X1 = g1->GetX();
  double* Y1 = g1->GetY();
  for (int i=0; i<N1; i++) { Y1[i] *= 0.01; }
  int N2 = g2->GetN();
  double* X2 = g2->GetX();
  double* Y2 = g2->GetY();
  for (int i=0; i<N2; i++) { Y2[i] *= 0.01; }
  g1 = new TGraph(N1,X1,Y1);
  g2 = new TGraph(N2,X2,Y2);
  if (option == 0){
    cout << "original GENIE" << endl;
    g1->Draw("Lsame");
    //g1->GetXaxis()->SetRangeUser(0,3);
    //g1->GetYaxis()->SetRangeUser(0,120);
    g2->Draw("Lsame");
    g1->SetLineColor(1);
    g2->SetLineColor(1);
    g1->SetLineWidth(2);
    g2->SetLineWidth(2);
    g1->SetLineStyle(2);
  }

  // xsec model + real binning + flux weighted
  std::vector<double> erg, xsec1, xsec2;
  for (int i=0; i<nbins; i++){
    double low = unfold1->GetBinLowEdge(i+1);
    double width = unfold1->GetBinWidth(i+1);
    double flux_weighted_xsec1 = get_mean_sigma(gh_flux, g1, low, low+width);
    double flux_weighted_xsec2 = get_mean_sigma(gh_flux, g2, low, low+width);
    double mean_e = get_mean_x(gh_flux, low, low+width);
    erg.push_back(mean_e);
    xsec1.push_back(flux_weighted_xsec1);
    xsec2.push_back(flux_weighted_xsec2);
  }
  auto g1_flux_weighted = new TGraph(erg.size(), erg.data(), xsec1.data());
  auto g2_flux_weighted = new TGraph(erg.size(), erg.data(), xsec2.data());
  if (option == 1){
    cout << "weighted GENIE" << endl;
    g1_flux_weighted->Draw("PLsame");
    //g1_flux_weighted->GetXaxis()->SetRangeUser(0,3);
    //g1_flux_weighted->GetYaxis()->SetRangeUser(0,120);
    g2_flux_weighted->Draw("PLsame");
    g1_flux_weighted->SetLineColor(1);
    g2_flux_weighted->SetLineColor(1);
    g1_flux_weighted->SetLineWidth(2);
    g2_flux_weighted->SetLineWidth(2);
    g1_flux_weighted->SetLineStyle(2);
    g1_flux_weighted->SetMarkerColor(1);
    g2_flux_weighted->SetMarkerColor(1);
    g1_flux_weighted->SetMarkerSize(1);
    g2_flux_weighted->SetMarkerSize(1);
  }
*/
  // xsec model + real binning + flux weighted + Ac smearing  
  //double* x1 = g1_flux_weighted->GetX();
  //double* y1 = g1_flux_weighted->GetY();
  //double* x2 = g2_flux_weighted->GetX();
  //double* y2 = g2_flux_weighted->GetY();
  vector<double> x3, y3;
  int nrows = smear->GetNbinsX();
  int ncols = smear->GetNbinsY();
  TMatrixD m(nrows, ncols);
  TVectorD v1(nbins), v2(nbins); 
  TVectorD v3(nbins);
  if (option == 2){
    for (int i=0; i<nrows; i++) {
      //v1(i) = y1[i];
      //v2(i) = y2[i];
      v3(i) = htrue_signal->GetBinContent(i+1);
      for (int j=0; j<ncols; j++) {
        m(i,j) = smear->GetBinContent(i+1, j+1);
        // if (i==j) m(i,j) = 1;
        // else m(i,j) = 0;
      }
    }

    // with Ac smearing
    //TVectorD Ac_v1 = m * v1;
    //TVectorD Ac_v2 = m * v2;
    TVectorD Ac_v3 = m * v3;
    for (int i=0; i<nbins; i++) {
      // y1[i] = Ac_v1(i);
      // y2[i] = Ac_v2(i);
      // x3.push_back(htrue_signal->GetBinCenter(i+1));
      x3.push_back(x_v[i]);
      y3.push_back(Ac_v3(i) * XS_FACTOR);
    }

  /*
    // ratio to total sigma
    double NT = 0; // total sigma
    for (int i=0; i<nbins; i++) {
      double dE = xbins[i+1] - xbins[i];
      NT += y3.at(i) * dE;
    }
    cout << "sigma: " << NT << endl;

    for (int i=0; i<nbins; i++) {
      // cout << "dsigma/dE: " << y3.at(i) << " dsigma/dE/sigma: " << y3.at(i) / NT << endl;
      cout << y3.at(i) << ", ";
    }
    cout << endl;
  */
  //    // without Ac smearing
  //    // for (int i=0; i<nbins; i++) {
  //    //   x3.push_back(x1[i]);
  //    //   y3.push_back(v3(i));
  //    //   cout << x1[i] << " " << v3(i) << endl;
  //    // }
  //    // TVector Ac_add = m*v3 - v3; // additional uncertianty to add to data points
  //    TVector Ac_add = m*unfold1_vd - unfold1_vd; // additional uncertianty to add to data points
  //    // auto gr = new TGraphAsymmErrors(x_v.size(),x_v.data(),y_v.data(),exl_v.data(),exh_v.data(),eyl_v.data(),eyh_v.data());
  //
    //auto g1_flux_weighted_smeared = new TGraph(nbins, x1, y1); // GENIE  v2
    //auto g2_flux_weighted_smeared = new TGraph(nbins, x2, y2); // v3
    auto g3_flux_weighted_smeared = new TGraph(nbins, x3.data(), y3.data()); // MC truth
  
    cout << "weighted smeared GENIE" << endl;
    //g1_flux_weighted_smeared->Draw("PLsame");
    //g1_flux_weighted_smeared->GetXaxis()->SetRangeUser(0,3);
    //g1_flux_weighted_smeared->GetYaxis()->SetRangeUser(0,120);
    //g2_flux_weighted_smeared->Draw("PLsame");
    //g1_flux_weighted_smeared->SetLineColor(1);
    //g2_flux_weighted_smeared->SetLineColor(1);
    //g1_flux_weighted_smeared->SetLineWidth(2);
    //g2_flux_weighted_smeared->SetLineWidth(2);
    //g1_flux_weighted_smeared->SetLineStyle(2);
    //g1_flux_weighted_smeared->SetMarkerColor(1);
    //g2_flux_weighted_smeared->SetMarkerColor(1);
    //g1_flux_weighted_smeared->SetMarkerSize(1);
    //g2_flux_weighted_smeared->SetMarkerSize(1);
    
    g3_flux_weighted_smeared->SetLineWidth(4);
    g3_flux_weighted_smeared->SetLineStyle(9);
    g3_flux_weighted_smeared->SetLineColor(46);
    g3_flux_weighted_smeared->Draw("Lsame");

    // plot CV GENIE
    TLine *line = new TLine(0., y3[0], xbins[1], y3[0]);
    line->SetLineWidth(4);
    line->SetLineStyle(9);
    line->SetLineColor(46);
    line->Draw("Lsame");
    
    // GOF (model+real bin+Ac vs. data)
    //TMatrixD matrix_pred1(1,nbins);
    //TMatrixD matrix_pred2(1,nbins);
    TMatrixD matrix_pred3(1,nbins);
    TMatrixD matrix_data(1,nbins);
    for(int i=0; i<nbins; i++){
      //matrix_pred1(0,i) = y1[i]; // GENIE v2
      //matrix_pred2(0,i) = y2[i]; // GENIE v3
      matrix_pred3(0,i) = y3[i]; // MC truth
      matrix_data(0,i) = y_v.at(i);
    }

    auto bias = (TH1D*)uBxsec->Get("bias");
    TMatrixD unfcov(nbins, nbins); // fill cov matrix
    for (int i=0; i<nbins; i++) {
      for (int j=0; j<nbins; j++) {
        unfcov(i,j) = cov->GetBinContent(i+1, j+1) *XS_FACTOR*XS_FACTOR;
        // in the case that Ac smearing is not added,
        // use Ac-I diagnal term as additional uncer.
        if (i==j) {
          // unfcov(i,i) += ( Ac_add(i) * Ac_add(i) );
          //   cout << "cov diagonal # " << i << " " <<  sqrt(cov->GetBinContent(i+1, i+1)) << " bias: " << Ac_add(i) << endl;
        }
      }
    }
  //
    //double chi2_m1 = calc_GoF(matrix_pred1, matrix_data, unfcov);
    //double chi2_m2 = calc_GoF(matrix_pred2, matrix_data, unfcov);
    double chi2_m3 = calc_GoF(matrix_pred3, matrix_data, unfcov);

/*  // gLEE X-SEC INTERNAL NOTE VALUES (Table 2): https://microboone-docdb.fnal.gov/cgi-bin/sso/RetrieveFile?docid=35576&filename=NCpi0_TechNote_xsec_rev.pdf&version=4
    double x_glee_2g0p[] = {0.5};  // Not relevant
    double y_glee_2g0p[] = {1.42};
    double ex_glee_2g0p[] = {0.001};  // Not relevant
    double ey_glee_2g0p[] = {0.20};
    auto g_glee_2g0p = new TGraphAsymmErrors(1, x_glee_2g0p, y_glee_2g0p, ex_glee_2g0p, ex_glee_2g0p, ey_glee_2g0p, ey_glee_2g0p);
    g_glee_2g0p->SetLineColor(8);
    g_glee_2g0p->SetLineWidth(2);
    g_glee_2g0p->SetMarkerColor(8);
    g_glee_2g0p->SetMarkerStyle(20);
    g_glee_2g0p->Draw("Psame");

    double x_glee_2g1p[] = {1.};  // Not relevant
    double y_glee_2g1p[] = {1.14};
    double ex_glee_2g1p[] = {0.001};  // Not relevant
    double ey_glee_2g1p[] = {0.19};
    auto g_glee_2g1p = new TGraphAsymmErrors(1, x_glee_2g1p, y_glee_2g1p, ex_glee_2g1p, ex_glee_2g1p, ey_glee_2g1p, ey_glee_2g1p);
    g_glee_2g1p->SetLineColor(9);
    g_glee_2g1p->SetLineWidth(2);
    g_glee_2g1p->SetMarkerColor(9);
    g_glee_2g1p->SetMarkerStyle(20);
    g_glee_2g1p->Draw("Psame");

    double x_glee_2gXp[] = {1.5};  // Not relevant
    double y_glee_2gXp[] = {1.25};
    double ex_glee_2gXp[] = {0.001};  // Not relevant
    double ey_glee_2gXp[] = {0.16};
    auto g_glee_2gXp = new TGraphAsymmErrors(1, x_glee_2gXp, y_glee_2gXp, ex_glee_2gXp, ex_glee_2gXp, ey_glee_2gXp, ey_glee_2gXp);
    g_glee_2gXp->SetLineColor(1);
    g_glee_2gXp->SetLineWidth(2);
    g_glee_2gXp->SetMarkerColor(1);
    g_glee_2gXp->SetMarkerStyle(20);
    g_glee_2gXp->Draw("Psame");
*/

    // gLEE X-SEC INTERNAL NOTE VALUES (Table 2): https://microboone-docdb.fnal.gov/cgi-bin/sso/RetrieveFile?docid=35576&filename=NCpi0_TechNote_xsec_rev.pdf&version=36863&filename=2022-01-31_NCpi0_paper_draft1.pdf&version=1
    double x_glee_2g0p[] = {0.15};  // Not relevant
    double y_glee_2g0p[] = {0.657};
    double ex_glee_2g0p[] = {0.001}; // Not relevant
    double ey_glee_2g0p[] = {0.1144};
    auto g_glee_2g0p = new TGraphAsymmErrors(1, x_glee_2g0p, y_glee_2g0p, ex_glee_2g0p, ex_glee_2g0p, ey_glee_2g0p, ey_glee_2g0p);
    g_glee_2g0p->SetLineColor(8);
    g_glee_2g0p->SetLineWidth(2);
    g_glee_2g0p->SetMarkerColor(8);
    g_glee_2g0p->SetMarkerStyle(20);
    g_glee_2g0p->Draw("Psame");

    double x_glee_2g1p[] = {0.3};  // Not relevant
    double y_glee_2g1p[] = {0.490};
    double ex_glee_2g1p[] = {0.001};  // Not relevant
    double ey_glee_2g1p[] = {0.0863};
    auto g_glee_2g1p = new TGraphAsymmErrors(1, x_glee_2g1p, y_glee_2g1p, ex_glee_2g1p, ex_glee_2g1p, ey_glee_2g1p, ey_glee_2g1p);
    g_glee_2g1p->SetLineColor(9);
    g_glee_2g1p->SetLineWidth(2);
    g_glee_2g1p->SetMarkerColor(9);
    g_glee_2g1p->SetMarkerStyle(20);
    g_glee_2g1p->Draw("Psame");

    double x_glee_2gXp[] = {0.45};  // Not relevant
    double y_glee_2gXp[] = {1.250};
    double ex_glee_2gXp[] = {0.001};  // Not relevant
    double ey_glee_2gXp[] = {0.1968};
    auto g_glee_2gXp = new TGraphAsymmErrors(1, x_glee_2gXp, y_glee_2gXp, ex_glee_2gXp, ex_glee_2gXp, ey_glee_2gXp, ey_glee_2gXp);
    g_glee_2gXp->SetLineColor(1);
    g_glee_2gXp->SetLineWidth(2);
    g_glee_2gXp->SetMarkerColor(1);
    g_glee_2gXp->SetMarkerStyle(20);
    g_glee_2gXp->Draw("Psame");



    double x_NCpi0BDT_Enu_2gXp[] = {0.6};  // Not relevant
    double y_NCpi0BDT_Enu_2gXp[] = {1.52};
    double ex_NCpi0BDT_Enu_2gXp[] = {0.001};  // Not relevant
    double ey_NCpi0BDT_Enu_2gXp[] = {0.37};
    auto g_NCpi0BDT_Enu_2gXp = new TGraphAsymmErrors(1, x_NCpi0BDT_Enu_2gXp, y_NCpi0BDT_Enu_2gXp, ex_NCpi0BDT_Enu_2gXp, ex_NCpi0BDT_Enu_2gXp, ey_NCpi0BDT_Enu_2gXp, ey_NCpi0BDT_Enu_2gXp);
    g_NCpi0BDT_Enu_2gXp->SetLineColor(2);
    g_NCpi0BDT_Enu_2gXp->SetLineWidth(2);
    g_NCpi0BDT_Enu_2gXp->SetMarkerColor(2);
    g_NCpi0BDT_Enu_2gXp->SetMarkerStyle(20);
    g_NCpi0BDT_Enu_2gXp->Draw("Psame");




    //auto lg = new TLegend(0.11,0.7,0.5,0.89);
    auto lg = new TLegend(0.55, 0.15, 0.89, 0.4);
    lg->AddEntry(gr, "BNB (open data)","lpe");
    //lg->AddEntry(g1_flux_weighted_smeared, Form("GENIE v2, #chi^{2}/dof=%.1f/%d",chi2_m1,nbins),"lp");
    //lg->AddEntry(g2_flux_weighted_smeared, Form("GENIE v3, #chi^{2}/dof=%.1f/%d",chi2_m2,nbins),"lp");
    lg->AddEntry(g3_flux_weighted_smeared, Form("MC Truth, #chi^{2}/ndf: %.1f/%d",chi2_m3,nbins), "l");
    lg->AddEntry(g_glee_2g0p, Form("gLEE 2#gamma 0p"), "l");
    lg->AddEntry(g_glee_2g1p, Form("gLEE 2#gamma 1p"), "l");
    lg->AddEntry(g_glee_2gXp, Form("gLEE semi-inclusive"), "l");
    lg->AddEntry(g_NCpi0BDT_Enu_2gXp, Form("WC NCpi0BDT_Enu_275_8000"), "l");
    lg->Draw();

    c1->Update();
    //c1->SaveAs("NCpi0BDT_xs_1bin_Enu_275_4000.pdf");
    //c1->SaveAs("NCpi0BDT_xs_1bin_Enu_275_4000.png");
    //c1->SaveAs("NCpi0BDT_xs_1bin_Enu_0p_275_8000.C");

  }



// NOTE: Make sure to remove the factor *100.0 to convert from 10e-36 to 10e-38



























//  // plot correlation 
//  auto c2 = new TCanvas("c2","c2",800,600);
//  c2->cd();
//  auto rho = (TH2D*)cov->Clone("rho"); // correlation coefficient
//  rho->SetTitle("Correlation Coefficient");
//  for (int i=0; i<rho->GetNbinsX(); i++) {
//    for (int j=0; j<rho->GetNbinsY(); j++) {
//      rho->SetBinContent(i+1, j+1, rho->GetBinContent(i+1,j+1)/ std::sqrt(cov->GetBinContent(i+1,i+1) * cov->GetBinContent(j+1,j+1)));
//    }
//  }
//  rho->Draw("colz");
//
//  // sigma / E plot
//  auto c3 = new TCanvas("c3","c3",800,600);
//  c3->cd();
//
//  auto gratio = new TGraphAsymmErrors();
//  // auto gratio_2 = new TGraphAsymmErrors();
//  for(int i=0; i<x_v.size(); i++){
//    double sigma_over_E = y_v.at(i) / x_v.at(i) / 40.0 * 100.0;
//    cout << x_v.at(i) << " " << sigma_over_E << endl;
//    gratio->SetPoint(i, x_v.at(i), y_v.at(i) / x_v.at(i) / 40.0 * (1e-36/1e-38)); // Ar40
//    gratio->SetPointEXhigh(i, exh_v.at(i));
//    gratio->SetPointEXlow(i, exl_v.at(i));
//    double e_add = smear->GetBinContent(i+1, i+1) - 1; // additional uncertainty from (Ac-I)
//    
//    gratio->SetPointEYhigh(i, eyh_v.at(i)/y_v.at(i));
//    gratio->SetPointEYlow(i, eyl_v.at(i)/y_v.at(i));
//  }
//
//  gratio->SetPoint(x_v.size(), 350, 0);// dummy point to expand the visible region for overlay
//
//  // additional uncertainty from (Ac-I)
//  
//  // auto smear = (TH2D*)uBxsec->Get("smear"); // Ac from unfolding
//  // int nrows = smear->GetNbinsX();
//  // int ncols = smear->GetNbinsY();
//
//
//  gratio->GetXaxis()->SetTitle("E_{#nu} [GeV]");
//  gratio->GetYaxis()->SetTitle("#sigma_{CC}/E_{#nu} (10^{-38} cm^{2} / GeV)");
//  gratio->SetMarkerColor(2);
//  gratio->SetMarkerStyle(21);
}