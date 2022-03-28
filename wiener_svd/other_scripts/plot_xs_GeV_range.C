// mean value in a bin
double get_mean_x(TGraph* gh, double low, double high, double threshold=0.11){ // 110MeV threshold for CCQE
  int N = 100;
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
  int N = 100;
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
void plot_xs_GeV_range(int option = 2){

  auto c1 = new TCanvas("c1","c1",800,600);

  // unfolded result
  auto uBxsec = TFile::Open("output.root");
  auto unfold = (TH1D*)uBxsec->Get("unf");
  auto absError = (TH1D*)uBxsec->Get("absError");
  auto smear    = (TH2D*)uBxsec->Get("smear"); // Ac from unfolding
  //auto cov      = (TH2D*)uBxsec->Get("unfcov");

  // real binning
  int nbins = unfold->GetNbinsX();
  std::cout << "nbins = " << nbins << std::endl;

  // Ppi0 variable
  double xbins[] = {0., 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.8, 1.0, 1.2, 1.4, 2.0};  // Bin separators - GeV
  double xcenter[nbins];                                            // Bin central values - MeV
  double xwidth[nbins];

  for (int i=0; i<nbins;i++) {
    xcenter[i] = xbins[i]*1000. + (xbins[i+1]-xbins[i])*1000./2.; // MeV
    //std::cout << xcenter[i] << std::endl;
    xwidth[i] = (xbins[i+1]-xbins[i]); // GeV
  }
  
  double NUCLEONS = 40.;
  double XS_FACTOR = 1000.;   // Cross section is in terms of 10e-36 cm^2/Ar if XS_FACTOR == 1., otherwise change axis
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

  // set assymetric error bar in x-axis
  auto flux = TFile::Open("../flux_info/gh_averaged_numu_flux.root");
  auto gh_flux = (TGraph*)flux->Get("gh_averaged_numu_flux");
  std::vector<double> x_v, y_v;
  std::vector<double> exl_v, exh_v;
  std::vector<double> eyl_v, eyh_v;
  for (int i=0; i<nbins; i++){
    double low = unfold1->GetBinLowEdge(i+1);
    double width = unfold1->GetBinWidth(i+1);
    double y = unfold1->GetBinContent(i+1);
    double ey = unfold1->GetBinError(i+1);
    // double x = get_mean_x(gh_flux, low, low+width); // Allows to pick central value in bin based on flux averaged center
    // double x = low + 0.5*width;                  // Allows to pick arithmetical central value in bin 
    double x = xcenter[i] / 1000.0;              // Allows to pick given central value in bin 

    x_v.push_back(x); 
    y_v.push_back(y/xwidth[i]/NUCLEONS * XS_FACTOR);               // 10e-36 cm^2 if XS_FACTOR == 1.
    
    exl_v.push_back(x-low); 
    exh_v.push_back(low+width-x); 
    eyl_v.push_back(ey / xwidth[i] / NUCLEONS * XS_FACTOR);            // 10e-36 cm^2 if XS_FACTOR == 1.
    eyh_v.push_back(ey / xwidth[i] / NUCLEONS * XS_FACTOR);            // 10e-36 cm^2 if XS_FACTOR == 1.
  
    std::cout << "X: " << x << " Y(CV): " << y/xwidth[i]/NUCLEONS * XS_FACTOR << " +- " << ey / xwidth[i] / NUCLEONS * XS_FACTOR << std::endl;
  }
  if (XS_FACTOR == 1.){         std::cout << "10^{-36} cm^{2} / delta_X / nucleon" << std::endl;}
  else if (XS_FACTOR == 100.){  std::cout << "10^{-38} cm^{2} / delta_X / nucleon" << std::endl;}
  else if (XS_FACTOR == 1000.){ std::cout << "10^{-39} cm^{2} / delta_X / nucleon" << std::endl;}

  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // CROSS SECTION WITH MC TRUTH CV (no smearing)
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  auto fmerge = TFile::Open("merge_xs.root");
  TVectorD * vec_signal = (TVectorD*)fmerge->Get("vec_signal");
  int nbin_true = vec_signal->GetNoElements();
  TH1D *htrue_signal = new TH1D("htrue_signal","htrue_signal",nbins, xbins);
  for(int i=0; i<nbins; i++) {
    htrue_signal->SetBinContent(i+1, (*vec_signal)(i));
  }
  // htrue_signal->Draw("same");
/*
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  // CROSS SECTION WITH ADDITIONAL MODELS
  ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  TFile *file1 = new TFile("../genie/xsec_graphs_v2_tune1.root");
  TFile *file2 = new TFile("../genie/xsec_graphs_v3_10a_02_11a.root");

  TGraph *g1 = (TGraph*)file1->Get("nu_e_Ar40/tot_cc");
  TGraph *g2 = (TGraph*)file2->Get("nu_e_Ar40/tot_cc");

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

  // double mc_weight[10] = {1.21993, 1.19518, 1.19197, 1.17844, 1.16532, 1.15571, 1.15111, 1.13284, 1.11594, 1.0744};
  // double mc_weight[10] = {1.5178, 1.26847, 1.21674, 1.18273, 1.15804, 1.14223, 1.13518, 1.11799, 1.10339, 1.0671}; // no spline
 
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
    // xsec2.push_back(flux_weighted_xsec2 * mc_weight[i] * 1.015);
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
  TVectorD v1(nbins), v2(nbins), v3(nbins);
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
      //y1[i] = Ac_v1(i) / x_v[i] /NUCLEONS*100.0;
      //y2[i] = Ac_v2(i) / x_v[i] /NUCLEONS*100.0;
      x3.push_back(x_v[i]);
      y3.push_back(Ac_v3(i) / xwidth[i] / NUCLEONS * XS_FACTOR);
    }
    
    // without Ac smearing
    // for (int i=0; i<nbins; i++) {
    //   x3.push_back(x1[i]);
    //   y3.push_back(v3(i));
    //   cout << x1[i] << " " << v3(i) << endl;
    // }
    // TVector Ac_add = m*v3 - v3; // additional uncertianty to add to data points
    // TVector Ac_add = m*unfold1_vd - unfold1_vd; // additional uncertianty to add to data points
    //TVector Ac_add1 = m*v1 - v1; // additional uncertianty to add to data points
    //TVector Ac_add2 = m*v2 - v2; // additional uncertianty to add to data points
    //TVector Ac_add3 = m*v3 - v3; // additional uncertianty to add to data points
    //TVector Ac_add4 = m*unfold1_vd - unfold1_vd; // additional uncertianty to add to data points
    // auto gr = new TGraphAsymmErrors(x_v.size(),x_v.data(),y_v.data(),exl_v.data(),exh_v.data(),eyl_v.data(),eyh_v.data());

    //auto g1_flux_weighted_smeared = new TGraph(nbins, x1, y1); // GENIE  v2
    //auto g2_flux_weighted_smeared = new TGraph(nbins, x2, y2); // v3
    auto g3_flux_weighted_smeared = new TGraph(nbins, x3.data(), y3.data()); // MC truth


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

    auto cov = (TH2D*)uBxsec->Get("unfcov");
    auto bias = (TH1D*)uBxsec->Get("bias");
    TMatrixD unfcov(nbins, nbins); // fill cov matrix
    for (int i=0; i<nbins; i++) {
      for (int j=0; j<nbins; j++) {
        unfcov(i,j) = cov->GetBinContent(i+1, j+1);
        // in the case that Ac smearing is not added,
        // use Ac-I diagnal term as additional uncer.
        double add=0;
        if (i==j) {
          // add = ( Ac_add1(i) * Ac_add1(i) + Ac_add2(i) * Ac_add2(i) +Ac_add3(i) * Ac_add3(i) + Ac_add4(i) * Ac_add4(i) )/4.;
          // unfcov(i,i) += add;
          // cout << "unfold1 # " << i+1 << " error: " << unfold1->GetBinError(i+1) << " add: " << add << endl;
          // unfold1->SetBinError(i+1, sqrt( unfcov(i,i) ) );
          // unfold1->SetBinError(i+1, 0);
          // cout << "cov diagonal # " << i << " " <<  sqrt(cov->GetBinContent(i+1, i+1)) << " bias: " << Ac_add(i) << endl;
          // cout << "sqrt(unfcov(i,i)= " << sqrt(unfcov(i,i)) << " unfErr= " << absError->GetBinContent(i+1) << endl;
        }
        unfcov(i,j) = (add + cov->GetBinContent(i+1, j+1)) / NUCLEONS / xwidth[i] / NUCLEONS / xwidth[j] * XS_FACTOR * XS_FACTOR;
      }
    }

    for(int i=0; i<nbins; i++) {
      // eyl_v[i] = sqrt(unfcov(i,i))/x_v.at(i) /NUCLEONS*100.0;
      // eyh_v[i] = sqrt(unfcov(i,i))/x_v.at(i) /NUCLEONS*100.0;
      eyl_v[i] = sqrt(unfcov(i,i));
      eyh_v[i] = sqrt(unfcov(i,i));
    }


    auto gr = new TGraphAsymmErrors(x_v.size(),x_v.data(),y_v.data(),exl_v.data(),exh_v.data(),eyl_v.data(),eyh_v.data());
    gr->GetXaxis()->SetTitle("P_{#pi^{0}} [GeV/c]");
    if (XS_FACTOR == 1.){         gr->GetYaxis()->SetTitle("#sigma (#times 10^{-36} cm^{2} / #Delta X / nucleon)");}
    else if (XS_FACTOR == 100.){  gr->GetYaxis()->SetTitle("#sigma (#times 10^{-38} cm^{2} / #Delta X / nucleon)");}
    else if (XS_FACTOR == 1000.){ gr->GetYaxis()->SetTitle("#sigma (#times 10^{-39} cm^{2} / #Delta X / nucleon)");}
    gr->SetMarkerColor(4);
    gr->SetMarkerStyle(21);
    gr->SetMarkerSize(1);
    gr->SetLineWidth(2);
    gr->SetLineColor(4);
    gr->GetXaxis()->SetLabelSize(0.035);
    gr->GetYaxis()->SetLabelSize(0.035);
    gr->GetXaxis()->SetTitleSize(0.035);
    gr->GetYaxis()->SetTitleSize(0.035);
    gr->GetXaxis()->SetRangeUser(xbins[0], xbins[nbins]);
    gr->GetYaxis()->SetRangeUser(0., 0.015 * (40./NUCLEONS) * XS_FACTOR);
    //gr->SetMaximum(1);
    gr->SetTitle("");
    gr->Draw("AP");

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
    
    g3_flux_weighted_smeared->SetLineWidth(2);
    g3_flux_weighted_smeared->SetLineStyle(1);
    g3_flux_weighted_smeared->SetLineColor(8);
    g3_flux_weighted_smeared->Draw("Lsame");







/*
    // MCC8 0.693 +/- 0.165 E-38cm2 per nucleon, flux avg 0.8 GeV (0.2 - 2GeV)
    double x_mcc8[] = {0.8};
    double y_mcc8[] = {0.693 / 0.8};
    double ex1_mcc8[] = {0.8 - 0.2};
    double ex2_mcc8[] = {2.0 - 0.8};
    double ey_mcc8[] = {0.165 / 0.8};

    auto gh_mcc8 = new TGraphAsymmErrors(1, x_mcc8, y_mcc8, ex1_mcc8, ex2_mcc8, ey_mcc8, ey_mcc8);
    gh_mcc8->SetLineColor(2);
    gh_mcc8->SetLineWidth(2);
    gh_mcc8->SetMarkerColor(2);
    gh_mcc8->SetMarkerStyle(20);
    gh_mcc8->Draw("Psame");
*/


  
    //double chi2_m1 = calc_GoF(matrix_pred1, matrix_data, unfcov);
    //double chi2_m2 = calc_GoF(matrix_pred2, matrix_data, unfcov);
    double chi2_m3 = calc_GoF(matrix_pred3, matrix_data, unfcov);

    //auto lg = new TLegend(0.11,0.7,0.5,0.89);
    auto lg = new TLegend(0.55, 0.75, 0.89, 0.89);
    lg->SetBorderSize(0);
    lg->SetNColumns(2);
    //lg->AddEntry(g1_flux_weighted_smeared, Form("GENIE v2, #chi^{2}/dof=%.1f/%d",chi2_m1,nbins),"lp");
    //lg->AddEntry(g2_flux_weighted_smeared, Form("GENIE v3, #chi^{2}/dof=%.1f/%d",chi2_m2,nbins),"lp");
    lg->AddEntry(g3_flux_weighted_smeared, Form("#muB Tuned, #chi^{2}/dof=%.1f/%d",chi2_m3,nbins), "l");
    //lg->AddEntry(gh_mcc8, "MCC8", "lpe");
    lg->AddEntry(gr, "BNB (open data)","lpe")->SetTextColor(4);
    lg->Draw();

    //c1->SaveAs("numuCC_xsDelta_2bin_Enu.pdf");
    //c1->SaveAs("numuCC_xsDelta_2bin_Enu.png");
    //c1->SaveAs("numuCC_xsDelta_2bin_Enu.C");
  }
}

