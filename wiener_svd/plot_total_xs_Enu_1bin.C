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
void plot_total_xs_Enu_1bin(){

  double xbins[] = {0.275, 8}; // Bin separators - GeV
  double XS_FACTOR = 100.;  // Cross section is in terms of 10e-36 cm^2/Ar if XS_FACTOR == 1., otherwise change axis
                            // 1e-38 cm^2/Ar if XS_FACTOR == 100.
                            // 1e-39 cm^2/Ar if XS_FACTOR == 1000.
                            // 1e-40 cm^2/Ar if XS_FACTOR == 10000.

  bool flux_flag = true;
  
  //////////////////////////////////////////////////////////////////////////////////////////////////////
  // Extract fractional uncertainties
  //////////////////////////////////////////////////////////////////////////////////////////////////////
  auto c1 = new TCanvas("c1","c1",800,600);
  c1->cd();

  TFile *file_wiener  = new TFile("wiener.root");
  TH2D *hcov_stat     = (TH2D*)file_wiener->Get("hcov_stat");
  TH2D *hcov_mcstat   = (TH2D*)file_wiener->Get("hcov_mcstat");
  TH2D *hcov_add      = (TH2D*)file_wiener->Get("hcov_add");
  TH2D *hcov_flux     = (TH2D*)file_wiener->Get("hcov_flux");
  TH2D *hcov_det      = (TH2D*)file_wiener->Get("hcov_det");
  TH2D *hcov_xs       = (TH2D*)file_wiener->Get("hcov_xs");
  TH2D *hcov_tot      = (TH2D*)file_wiener->Get("hcov_tot");

  TFile* file_output  = new TFile("output.root");
  TMatrixD* covRotation   = (TMatrixD*)file_output->Get("covRotation");
  TMatrixD* covRotation_t = (TMatrixD*)file_output->Get("covRotation_t");
  TH1D* unf               = (TH1D*)file_output->Get("unf");

  int n = hcov_tot->GetNbinsX();  //row,column = 288 x 288
  int m = covRotation->GetNrows();  //row,column = 36  x 288
  TMatrixD mcov_stat(n,n);
  TMatrixD mcov_mcstat(n,n);
  TMatrixD mcov_add(n,n);
  TMatrixD mcov_flux(n,n);
  TMatrixD mcov_det(n,n);
  TMatrixD mcov_xs(n,n);
  TMatrixD mcov_tot(n,n);

  for (int i=0;i<n;i++) {
    for (int j=0;j<n;j++) {
      mcov_stat(i,j)   = hcov_stat->GetBinContent(  i+1,j+1);
      mcov_mcstat(i,j) = hcov_mcstat->GetBinContent(i+1,j+1);
      mcov_add(i,j)    = hcov_add->GetBinContent(   i+1,j+1);
      mcov_flux(i,j)   = hcov_flux->GetBinContent(  i+1,j+1);
      mcov_det(i,j)    = hcov_det->GetBinContent(   i+1,j+1);
      mcov_xs(i,j)     = hcov_xs->GetBinContent(    i+1,j+1);
      mcov_tot(i,j)    = hcov_tot->GetBinContent(   i+1,j+1);
    }
  }

  //std::cout << "cR     r,c = " << covRotation->GetNrows()   << ", " << covRotation->GetNcols() << std::endl;
  //std::cout << "cR_t   r,c = " << covRotation_t->GetNrows() << ", " << covRotation_t->GetNcols() << std::endl;
  //std::cout << "c_stat r,c = " << mcov_stat.GetNrows()     << ", " << mcov_stat.GetNcols() << std::endl;

  TMatrixD mcov_stat_rot   = (*covRotation) * mcov_stat   * (*covRotation_t);
  TMatrixD mcov_mcstat_rot = (*covRotation) * mcov_mcstat * (*covRotation_t);
  TMatrixD mcov_add_rot    = (*covRotation) * mcov_add    * (*covRotation_t);
  TMatrixD mcov_flux_rot   = (*covRotation) * mcov_flux   * (*covRotation_t);
  TMatrixD mcov_det_rot    = (*covRotation) * mcov_det    * (*covRotation_t);
  TMatrixD mcov_xs_rot     = (*covRotation) * mcov_xs     * (*covRotation_t);
  TMatrixD mcov_tot_rot    = (*covRotation) * mcov_tot    * (*covRotation_t);

  TH1D* herr_frac_stat   = new TH1D("herr_frac_stat",  "herr_frac_stat",  m,0.5,m+0.5);
  TH1D* herr_frac_mcstat = new TH1D("herr_frac_mcstat","herr_frac_mcstat",m,0.5,m+0.5);
  TH1D* herr_frac_add    = new TH1D("herr_frac_add",   "herr_frac_add",   m,0.5,m+0.5);
  TH1D* herr_frac_flux   = new TH1D("herr_frac_flux",  "herr_frac_flux",  m,0.5,m+0.5);
  TH1D* herr_frac_det    = new TH1D("herr_frac_det",   "herr_frac_det",   m,0.5,m+0.5);
  TH1D* herr_frac_xs     = new TH1D("herr_frac_xs",    "herr_frac_xs",    m,0.5,m+0.5);
  TH1D* herr_frac_tot    = new TH1D("herr_frac_tot",   "herr_frac_tot",   m,0.5,m+0.5);

  double vec_abs_stat[m];
  double vec_abs_syst[m];
  double vec_abs_tot[m];
  double vec_CV[m];

  std::cout << "\nFractional Uncertainties -------------------------------------------- " << std::endl;
  for (int i=0;i<m;i++) {
    std::cout << "--- BIN " << i+1 << "(/" << m <<") --------- " << std::endl;
    double content = unf->GetBinContent(i+1) * XS_FACTOR;
    if (XS_FACTOR == 1.) std::cout << "CV = " << content << " [1e-36 cm^2/Ar]" << std::endl;
    else if (XS_FACTOR == 100.) std::cout << "CV = " << content << " [1e-38 cm^2/Ar]" << std::endl;
    else if (XS_FACTOR == 1000.) std::cout << "CV = " << content << " [1e-39 cm^2/Ar]" << std::endl;
    else if (XS_FACTOR == 10000.) std::cout << "CV = " << content << " [1e-40 cm^2/Ar]" << std::endl;

    double abs_stat =   TMath::Sqrt(mcov_stat_rot(i,i)) * XS_FACTOR;
    double abs_mcstat = TMath::Sqrt(mcov_mcstat_rot(i,i)) * XS_FACTOR;
    double abs_add =    TMath::Sqrt(mcov_add_rot(i,i)) * XS_FACTOR;
    double abs_flux =   TMath::Sqrt(mcov_flux_rot(i,i)) * XS_FACTOR;
    double abs_det =    TMath::Sqrt(mcov_det_rot(i,i)) * XS_FACTOR;
    double abs_xs =     TMath::Sqrt(mcov_xs_rot(i,i)) * XS_FACTOR;
    double abs_tot =    TMath::Sqrt(mcov_tot_rot(i,i)) * XS_FACTOR;

    double abs_syst = TMath::Sqrt( abs_mcstat*abs_mcstat + abs_add*abs_add + abs_flux*abs_flux + abs_det*abs_det + abs_xs*abs_xs );
    double abs_stat_syst = TMath::Sqrt( abs_stat*abs_stat + abs_syst*abs_syst );

    double frac_stat = abs_stat     / content;
    double frac_mcstat = abs_mcstat / content;
    double frac_add = abs_add       / content;
    double frac_flux = abs_flux     / content;
    double frac_det = abs_det       / content;
    double frac_xs = abs_xs         / content;
    double frac_tot = abs_tot       / content;

    double frac_syst = abs_syst / content;
    double frac_stat_syst = abs_stat_syst / content;

    std::cout << "Err_stat = " << abs_stat << "(" << 100.*frac_stat << "%)" << std::endl;
    std::cout << "Err_mcstat = " << abs_mcstat << "(" << 100.*frac_mcstat << "%)" << std::endl;
    std::cout << "Err_dirt = " << abs_add << "(" << 100.*frac_add << "%)" << std::endl;
    std::cout << "Err_flux = " << abs_flux << "(" << 100.*frac_flux << "%)" << std::endl;
    std::cout << "Err_det = " << abs_det << "(" << 100.*frac_det << "%)" << std::endl;
    std::cout << "Err_xs = " << abs_xs << "(" << 100.*frac_xs << "%)" << std::endl;
    std::cout << "Err_tot = " << abs_tot << "(" << 100.*frac_tot << "%)" << std::endl;
    std::cout << "Err_syst = " << abs_syst << "(" << 100.*frac_syst << "%)" << std::endl;
    std::cout << "Err_stat_syst = " << abs_stat_syst << "(" << 100.*frac_stat_syst << "%)" << std::endl;

    herr_frac_stat->SetBinContent(i+1,  frac_stat);
    herr_frac_mcstat->SetBinContent(i+1,frac_mcstat);
    herr_frac_add->SetBinContent(i+1,   frac_add);
    herr_frac_flux->SetBinContent(i+1,  frac_flux);
    herr_frac_det->SetBinContent(i+1,   frac_det);
    herr_frac_xs->SetBinContent(i+1,    frac_xs);
    herr_frac_tot->SetBinContent(i+1,   frac_tot);

    vec_abs_stat[i] = abs_stat;
    vec_abs_syst[i] = abs_syst;
    vec_abs_tot[i] = abs_tot;
    vec_CV[i] = content;
  }
  std::cout << "--------------------- THE END ----------------------- \n" << std::endl;

  herr_frac_stat->SetTitle("Stat");
  herr_frac_mcstat->SetTitle("MCstat");
  herr_frac_add->SetTitle("Dirt");
  herr_frac_flux->SetTitle("Flux");
  herr_frac_det->SetTitle("Det");
  herr_frac_xs->SetTitle("XS");
  if(m == 1){
    herr_frac_tot->SetTitle("Fractional Uncertainties");
  }
  else herr_frac_tot->SetTitle("Unfolded Fractional Uncertainties");
  herr_frac_tot->SetXTitle("Bin #");

  herr_frac_tot->GetXaxis()->SetLabelSize(0.04);
  herr_frac_tot->GetYaxis()->SetLabelSize(0.04);
  herr_frac_tot->GetXaxis()->SetTitleSize(0.04);
  herr_frac_tot->GetYaxis()->SetTitleSize(0.04);

  herr_frac_stat->SetLineColor(9);
  herr_frac_mcstat->SetLineColor(8);
  herr_frac_add->SetLineColor(3);
  herr_frac_flux->SetLineColor(2);
  herr_frac_det->SetLineColor(6);
  herr_frac_xs->SetLineColor(4);
  herr_frac_tot->SetLineColor(1);

  herr_frac_stat->SetLineWidth(2);
  herr_frac_mcstat->SetLineWidth(2);
  herr_frac_add->SetLineWidth(2);
  herr_frac_flux->SetLineWidth(2);
  herr_frac_det->SetLineWidth(2);
  herr_frac_xs->SetLineWidth(2);
  herr_frac_tot->SetLineWidth(2);

  herr_frac_tot->GetYaxis()->SetRangeUser(0,0.5);

  herr_frac_tot->Draw();
  herr_frac_stat->Draw("same");
  herr_frac_mcstat->Draw("same");
  herr_frac_add->Draw("same");
  herr_frac_flux->Draw("same");
  herr_frac_det->Draw("same");
  herr_frac_xs->Draw("same");
  herr_frac_tot->Draw("same");    //force it to plot on top

  TLegend *le2 = new TLegend(0.75,0.6,0.89,0.89);
  le2->AddEntry(herr_frac_stat,"Stat.","l");
  le2->AddEntry(herr_frac_mcstat,"MC stat.","l");
  le2->AddEntry(herr_frac_add,"Dirt","l");
  le2->AddEntry(herr_frac_flux,"Flux","l");
  le2->AddEntry(herr_frac_det,"Det.","l");
  le2->AddEntry(herr_frac_xs,"Xs","l");
  le2->AddEntry(herr_frac_tot,"Total","l");
  le2->Draw();


  //////////////////////////////////////////////////////////////////////////////////////////////////////
  // Extract unfolded results
  //////////////////////////////////////////////////////////////////////////////////////////////////////
  auto c2 = new TCanvas("c2","c2",800,600);
  c2->cd();

  std::cout << "\nCross Section -------------------------------------------- " << std::endl;
  auto uBxsec = TFile::Open("output.root");
  auto unfold   = (TH1D*)uBxsec->Get("unf");
  auto absError = (TH1D*)uBxsec->Get("absError");
  auto smear    = (TH2D*)uBxsec->Get("smear"); // Ac from unfolding
  auto cov      = (TH2D*)uBxsec->Get("unfcov");

  int nbins = unfold->GetNbinsX();
  std::cout << "nbins = " << nbins << std::endl;

  // X-axis is using arithmetical center for the bins
  double xcenter[nbins];
  for (int i=0; i<nbins;i++) {
    xcenter[i] = xbins[i] + (xbins[i+1]-xbins[i])/2.; // GeV
  }

  // X-axis is using flux weighted center for the bins
  // NCpi0 case, needs all these fluxes - Xiangpan's files
  TFile *file_flux = new TFile("../flux_info/file_result_unit_per_POT_GeV_cm2.root");
  TH1D *h1_flux = (TH1D*)file_flux->Get("h1_numu_norm_flux"); // numu     /POT/GeV/cm2
  TH1D *h2_flux = (TH1D*)file_flux->Get("h1_numu_bar_flux");  // numu-bar /POT/GeV/cm2
  TH1D *h3_flux = (TH1D*)file_flux->Get("h1_nue_norm_flux");  // nue      /POT/GeV/cm2
  TH1D *h4_flux = (TH1D*)file_flux->Get("h1_nue_bar_flux");   // nue-bar  /POT/GeV/cm2

  int nbins_flux = h1_flux->GetNbinsX();
  double x_flux[nbins_flux];
  double y_flux[nbins_flux];

  double y1_flux[nbins_flux];
  double y2_flux[nbins_flux];
  double y3_flux[nbins_flux];
  double y4_flux[nbins_flux];

  for (int i=0; i<nbins_flux; i++){
    x_flux[i] = h1_flux->GetBinCenter(i+1);
    
    y1_flux[i] = h1_flux->GetBinContent(i+1);
    y2_flux[i] = h2_flux->GetBinContent(i+1);
    y3_flux[i] = h3_flux->GetBinContent(i+1);
    y4_flux[i] = h4_flux->GetBinContent(i+1);

    y_flux[i] = y1_flux[i] + y2_flux[i] + y3_flux[i] + y4_flux[i];
  }

  TGraph* g_flux = new TGraph(nbins_flux, x_flux, y_flux);

  double xcenter_flux[nbins];
  double exl_flux[nbins];
  double exh_flux[nbins];
  for (int i=0; i<nbins; i++){
    double low = unfold->GetBinLowEdge(i+1);
    double width = unfold->GetBinWidth(i+1);
    double x = get_mean_x(g_flux, low, low+width);
    xcenter_flux[i] = x;
    exl_flux[i] = x-xbins[0]; 
    exh_flux[i] = xbins[1]-x;
  }

  // set assymetric error bar in x-axis, symmetric in y-axis
  std::vector<double> x_v, y_v;
  std::vector<double> exl_v, exh_v;
  std::vector<double> eyl_stat_v, eyh_stat_v;
  std::vector<double> eyl_tot_v, eyh_tot_v;
  for (int i=0; i<nbins; i++){
    double x = xcenter[i];
    double ex = (xbins[i+1]-xbins[i])/2.;

    double y = vec_CV[i];
    double ey_stat = vec_abs_stat[i];
    double ey_tot = vec_abs_tot[i];
  
    if(flux_flag==false){
      x_v.push_back(x);
      exl_v.push_back(ex);
      exh_v.push_back(ex);
    }
    else if(flux_flag==true){
      x_v.push_back(xcenter_flux[i]);
      exl_v.push_back(exl_flux[i]);
      exh_v.push_back(exh_flux[i]);
    }

    y_v.push_back(y);
    eyl_stat_v.push_back(ey_stat);
    eyh_stat_v.push_back(ey_stat);
    eyl_tot_v.push_back(ey_tot);
    eyh_tot_v.push_back(ey_tot);
  }
  std::cout << "Bin central value: " << x_v[0] << std::endl;

  auto gr_tot = new TGraphAsymmErrors(x_v.size(), x_v.data(), y_v.data(), exl_v.data(), exh_v.data(), eyl_tot_v.data(), eyh_tot_v.data());
  gr_tot->SetMarkerStyle(1);
  gr_tot->SetMarkerSize(1);
  gr_tot->SetLineWidth(2);
  gr_tot->SetMarkerColor(6);
  gr_tot->SetLineColor(6);
  if (XS_FACTOR == 1.) gr_tot->GetYaxis()->SetTitle("#sigma (10^{-36} cm^{2} / Ar)");
  else if (XS_FACTOR == 100.) gr_tot->GetYaxis()->SetTitle("#sigma (10^{-38} cm^{2} / Ar)");
  else if (XS_FACTOR == 1000.) gr_tot->GetYaxis()->SetTitle("#sigma (10^{-39} cm^{2} / Ar)");
  else if (XS_FACTOR == 10000.) gr_tot->GetYaxis()->SetTitle("#sigma (10^{-40} cm^{2} / Ar)");
  gr_tot->GetXaxis()->SetTitle("E_{#nu} [GeV]");
  //gr_tot->GetXaxis()->SetTitle("P_{#pi^{0}} [GeV/c]");
  gr_tot->GetXaxis()->SetLabelSize(0.035);
  gr_tot->GetYaxis()->SetLabelSize(0.025);
  gr_tot->GetXaxis()->SetTitleSize(0.035);
  gr_tot->GetYaxis()->SetTitleSize(0.035);
  gr_tot->GetYaxis()->SetRangeUser(0., 0.02 * XS_FACTOR);
  gr_tot->GetXaxis()->SetLimits(0.,xbins[1]+0.51);  // along X
  //gr_tot->GetHistogram()->SetMaximum(20.);   // max along Y          
  //gr_tot->GetHistogram()->SetMinimum(-20.);  // min along Y     
  gr_tot->SetTitle("");
  gr_tot->Draw("AP");

  auto gr_stat = new TGraphAsymmErrors(x_v.size(), x_v.data(), y_v.data(), exl_v.data(), exh_v.data(), eyl_stat_v.data(), eyh_stat_v.data());
  gr_stat->SetMarkerStyle(21);
  gr_stat->SetMarkerSize(1);
  gr_stat->SetLineWidth(2);
  gr_stat->SetMarkerColor(12);
  gr_stat->SetLineColor(12);
  gr_stat->Draw("Psame");

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
  vector<double> x3, y3;
  int nrows = smear->GetNbinsX();
  int ncols = smear->GetNbinsY();
  TMatrixD M(nrows, ncols);
  TVectorD v3(nbins);
  for (int i=0; i<nrows; i++) {
    v3(i) = htrue_signal->GetBinContent(i+1);
    for (int j=0; j<ncols; j++) {
      M(i,j) = smear->GetBinContent(i+1, j+1);
    }
  }
  TVectorD Ac_v3 = M * v3;
  for (int i=0; i<nbins; i++) {
    x3.push_back(x_v[i]);
    y3.push_back(Ac_v3(i) * XS_FACTOR);

    std::cout << "GENIE CV: " << y3[0] << std::endl;
  }
  // plot CV GENIE
  TLine *line = new TLine(xbins[0], y3[0], xbins[1], y3[0]);
  line->SetLineWidth(3);
  line->SetLineStyle(9);
  line->SetLineColor(3);
  line->Draw("Psame");
  
  // GOF (model+real bin+Ac vs. data)
  TMatrixD matrix_data(1,nbins);
  TMatrixD matrix_pred3(1,nbins);
  for(int i=0; i<nbins; i++){
    matrix_data(0,i) = y_v.at(i); // BNB
    matrix_pred3(0,i) = y3[i];    // CV GENIE
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
        // cout << "cov diagonal # " << i << " " <<  sqrt(cov->GetBinContent(i+1, i+1)) << " bias: " << Ac_add(i) << endl;
      }
    }
  }

  double chi2_m3 = calc_GoF(matrix_pred3, matrix_data, unfcov);


  //////////////////////////////////////////////////////////////////////////////////////////////////////
  // Additional Plots
  //////////////////////////////////////////////////////////////////////////////////////////////////////
/*
  // gLEE X-SEC INTERNAL NOTE VALUES (Table 2): https://microboone-docdb.fnal.gov/cgi-bin/sso/RetrieveFile?docid=35576&filename=NCpi0_TechNote_xsec_rev.pdf&version=4
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
  double x_glee_2g0p[] = {1.2};  // Not relevant
  double y_glee_2g0p[] = {0.657};
  double ex_glee_2g0p[] = {0.001}; // Not relevant
  double ey_glee_2g0p[] = {0.1144};
  auto g_glee_2g0p = new TGraphAsymmErrors(1, x_glee_2g0p, y_glee_2g0p, ex_glee_2g0p, ex_glee_2g0p, ey_glee_2g0p, ey_glee_2g0p);
  g_glee_2g0p->SetMarkerStyle(33);
  g_glee_2g0p->SetMarkerSize(1);
  g_glee_2g0p->SetLineWidth(2);
  g_glee_2g0p->SetMarkerColor(kBlue-9);
  g_glee_2g0p->SetLineColor(kBlue-9);
  //g_glee_2g0p->Draw("Psame");

  // gLEE X-SEC INTERNAL NOTE VALUES (Table 2): https://microboone-docdb.fnal.gov/cgi-bin/sso/RetrieveFile?docid=35576&filename=NCpi0_TechNote_xsec_rev.pdf&version=36863&filename=2022-01-31_NCpi0_paper_draft1.pdf&version=1
  double x_glee_2g1p[] = {1.4};  // Not relevant
  double y_glee_2g1p[] = {0.490};
  double ex_glee_2g1p[] = {0.001};  // Not relevant
  double ey_glee_2g1p[] = {0.0863};
  auto g_glee_2g1p = new TGraphAsymmErrors(1, x_glee_2g1p, y_glee_2g1p, ex_glee_2g1p, ex_glee_2g1p, ey_glee_2g1p, ey_glee_2g1p);
  g_glee_2g1p->SetMarkerStyle(33);
  g_glee_2g1p->SetMarkerSize(1);
  g_glee_2g1p->SetLineWidth(2);
  g_glee_2g1p->SetMarkerColor(kBlue-7);
  g_glee_2g1p->SetLineColor(kBlue-7);
  //g_glee_2g1p->Draw("Psame");
  
  // gLEE X-SEC INTERNAL NOTE VALUES (Table 2): https://microboone-docdb.fnal.gov/cgi-bin/sso/RetrieveFile?docid=35576&filename=NCpi0_TechNote_xsec_rev.pdf&version=36863&filename=2022-01-31_NCpi0_paper_draft1.pdf&version=1
  double x_glee_2gXp[] = {4};  // Not relevant
  double y_glee_2gXp[] = {1.250};
  double ex_glee_2gXp[] = {0.001};  // Not relevant
  double ey_glee_2gXp[] = {0.1968};
  auto g_glee_2gXp = new TGraphAsymmErrors(1, x_glee_2gXp, y_glee_2gXp, ex_glee_2gXp, ex_glee_2gXp, ey_glee_2gXp, ey_glee_2gXp);
  g_glee_2gXp->SetMarkerStyle(8);
  g_glee_2gXp->SetMarkerSize(1);
  g_glee_2gXp->SetLineWidth(2);
  g_glee_2gXp->SetMarkerColor(kBlue);
  g_glee_2gXp->SetLineColor(kBlue);
  g_glee_2gXp->Draw("Psame");
/*
  //---- Enu opendata (0.275-8) GeV
  double x_stat_Enu_open[] = {1.4};        // Not relevant
  double y_stat_Enu_open[] = {1.42076};
  double ex_stat_Enu_open[] = {0.001};   // Not relevant
  double ey_stat_Enu_open[] = {0.192882};
  double ey_tot_Enu_open[] = {0.294367};
  auto g_tot_Enu_open = new TGraphAsymmErrors(1, x_stat_Enu_open, y_stat_Enu_open, ex_stat_Enu_open, ex_stat_Enu_open, ey_tot_Enu_open, ey_tot_Enu_open);
  g_tot_Enu_open->SetMarkerStyle(1);
  g_tot_Enu_open->SetLineWidth(2);
  g_tot_Enu_open->SetMarkerColor(kMagenta);
  g_tot_Enu_open->SetLineColor(kMagenta);
  g_tot_Enu_open->Draw("Psame");
  auto g_stat_Enu_open = new TGraphAsymmErrors(1, x_stat_Enu_open, y_stat_Enu_open, ex_stat_Enu_open, ex_stat_Enu_open, ey_stat_Enu_open, ey_stat_Enu_open);
  g_stat_Enu_open->SetMarkerStyle(29);
  g_stat_Enu_open->SetMarkerSize(1);
  g_stat_Enu_open->SetLineWidth(2);
  g_stat_Enu_open->SetMarkerColor(1);
  g_stat_Enu_open->SetLineColor(1);
  g_stat_Enu_open->Draw("Psame");
*/

  //---- Ppi0 opendata (0-1.5) GeV/c with (0.275-8) GeV
  double x_stat_Ppi0_open[] = {6};        // Not relevant
  double y_stat_Ppi0_open[] = {1.39172};
  double ex_stat_Ppi0_open[] = {0.001};   // Not relevant
  double ey_stat_Ppi0_open[] = {0.192259};
  double ey_tot_Ppi0_open[] = {0.290566};
  auto g_tot_Ppi0_open = new TGraphAsymmErrors(1, x_stat_Ppi0_open, y_stat_Ppi0_open, ex_stat_Ppi0_open, ex_stat_Ppi0_open, ey_tot_Ppi0_open, ey_tot_Ppi0_open);
  g_tot_Ppi0_open->SetMarkerStyle(1);
  g_tot_Ppi0_open->SetLineWidth(2);
  g_tot_Ppi0_open->SetMarkerColor(kRed+1);
  g_tot_Ppi0_open->SetLineColor(kRed+1);
  g_tot_Ppi0_open->Draw("Psame");
  auto g_stat_Ppi0_open = new TGraphAsymmErrors(1, x_stat_Ppi0_open, y_stat_Ppi0_open, ex_stat_Ppi0_open, ex_stat_Ppi0_open, ey_stat_Ppi0_open, ey_stat_Ppi0_open);
  g_stat_Ppi0_open->SetMarkerStyle(34);
  g_stat_Ppi0_open->SetMarkerSize(1.5);
  g_stat_Ppi0_open->SetLineWidth(2);
  g_stat_Ppi0_open->SetMarkerColor(kRed);
  g_stat_Ppi0_open->SetLineColor(kRed);
  g_stat_Ppi0_open->Draw("Psame");




  //---- Enu fake V (0.275-8) GeV
  double x_stat_Enu_fakeV[] = {2.0};        // Not relevant
  double y_stat_Enu_fakeV[] = {2.25965};
  double ex_stat_Enu_fakeV[] = {0.001};   // Not relevant
  double ey_stat_Enu_fakeV[] = {0.0672617};
  double ey_tot_Enu_fakeV[] = {0.220189};
  auto g_tot_Enu_fakeV = new TGraphAsymmErrors(1, x_stat_Enu_fakeV, y_stat_Enu_fakeV, ex_stat_Enu_fakeV, ex_stat_Enu_fakeV, ey_tot_Enu_fakeV, ey_tot_Enu_fakeV);
  g_tot_Enu_fakeV->SetMarkerStyle(1);
  g_tot_Enu_fakeV->SetLineWidth(2);
  g_tot_Enu_fakeV->SetMarkerColor(kRed-9);
  g_tot_Enu_fakeV->SetLineColor(kRed-9);
  //g_tot_Enu_fakeV->Draw("Psame");
  auto g_stat_Enu_fakeV = new TGraphAsymmErrors(1, x_stat_Enu_fakeV, y_stat_Enu_fakeV, ex_stat_Enu_fakeV, ex_stat_Enu_fakeV, ey_stat_Enu_fakeV, ey_stat_Enu_fakeV);
  g_stat_Enu_fakeV->SetMarkerStyle(22);
  g_stat_Enu_fakeV->SetMarkerSize(1.2);
  g_stat_Enu_fakeV->SetLineWidth(2);
  g_stat_Enu_fakeV->SetMarkerColor(kRed-9);
  g_stat_Enu_fakeV->SetLineColor(kRed-9);
  //g_stat_Enu_fakeV->Draw("Psame");

  //---- Ppi0 fake V (0-1.5) GeV/c with (0.275-8) GeV
  double x_stat_Ppi0_fakeV[] = {2.6};        // Not relevant
  double y_stat_Ppi0_fakeV[] = {2.24786};
  double ex_stat_Ppi0_fakeV[] = {0.001};   // Not relevant
  double ey_stat_Ppi0_fakeV[] = {0.0673333};
  double ey_tot_Ppi0_fakeV[] = {0.215355};
  auto g_tot_Ppi0_fakeV = new TGraphAsymmErrors(1, x_stat_Ppi0_fakeV, y_stat_Ppi0_fakeV, ex_stat_Ppi0_fakeV, ex_stat_Ppi0_fakeV, ey_tot_Ppi0_fakeV, ey_tot_Ppi0_fakeV);
  g_tot_Ppi0_fakeV->SetMarkerStyle(1);
  g_tot_Ppi0_fakeV->SetLineWidth(2);
  g_tot_Ppi0_fakeV->SetMarkerColor(kRed-9);
  g_tot_Ppi0_fakeV->SetLineColor(kRed-9);
  //g_tot_Ppi0_fakeV->Draw("Psame");
  auto g_stat_Ppi0_fakeV = new TGraphAsymmErrors(1, x_stat_Ppi0_fakeV, y_stat_Ppi0_fakeV, ex_stat_Ppi0_fakeV, ex_stat_Ppi0_fakeV, ey_stat_Ppi0_fakeV, ey_stat_Ppi0_fakeV);
  g_stat_Ppi0_fakeV->SetMarkerStyle(21);
  g_stat_Ppi0_fakeV->SetMarkerSize(1.0);
  g_stat_Ppi0_fakeV->SetLineWidth(2);
  g_stat_Ppi0_fakeV->SetMarkerColor(kRed-9);
  g_stat_Ppi0_fakeV->SetLineColor(kRed-9);
  //g_stat_Ppi0_fakeV->Draw("Psame");




  //---- Enu fake VII (0.275-8) GeV
  double x_stat_Enu_fakeVII[] = {2.2};        // Not relevant
  double y_stat_Enu_fakeVII[] = {2.60329};
  double ex_stat_Enu_fakeVII[] = {0.001};   // Not relevant
  double ey_stat_Enu_fakeVII[] = {0.0908923};
  double ey_tot_Enu_fakeVII[] = {0.213885};
  auto g_tot_Enu_fakeVII = new TGraphAsymmErrors(1, x_stat_Enu_fakeVII, y_stat_Enu_fakeVII, ex_stat_Enu_fakeVII, ex_stat_Enu_fakeVII, ey_tot_Enu_fakeVII, ey_tot_Enu_fakeVII);
  g_tot_Enu_fakeVII->SetMarkerStyle(1);
  g_tot_Enu_fakeVII->SetLineWidth(2);
  g_tot_Enu_fakeVII->SetMarkerColor(kRed-4);
  g_tot_Enu_fakeVII->SetLineColor(kRed-4);
  //g_tot_Enu_fakeVII->Draw("Psame");
  auto g_stat_Enu_fakeVII = new TGraphAsymmErrors(1, x_stat_Enu_fakeVII, y_stat_Enu_fakeVII, ex_stat_Enu_fakeVII, ex_stat_Enu_fakeVII, ey_stat_Enu_fakeVII, ey_stat_Enu_fakeVII);
  g_stat_Enu_fakeVII->SetMarkerStyle(23);
  g_stat_Enu_fakeVII->SetMarkerSize(1.2);
  g_stat_Enu_fakeVII->SetLineWidth(2);
  g_stat_Enu_fakeVII->SetMarkerColor(kRed-4);
  g_stat_Enu_fakeVII->SetLineColor(kRed-4);
  //g_stat_Enu_fakeVII->Draw("Psame");

  //---- Ppi0 fake VII (0-1.5) GeV/c with (0.275-8) GeV
  double x_stat_Ppi0_fakeVII[] = {2.8};        // Not relevant
  double y_stat_Ppi0_fakeVII[] = {2.59765};
  double ex_stat_Ppi0_fakeVII[] = {0.001};   // Not relevant
  double ey_stat_Ppi0_fakeVII[] = {0.090724};
  double ey_tot_Ppi0_fakeVII[] = {0.210166};
  auto g_tot_Ppi0_fakeVII = new TGraphAsymmErrors(1, x_stat_Ppi0_fakeVII, y_stat_Ppi0_fakeVII, ex_stat_Ppi0_fakeVII, ex_stat_Ppi0_fakeVII, ey_tot_Ppi0_fakeVII, ey_tot_Ppi0_fakeVII);
  g_tot_Ppi0_fakeVII->SetMarkerStyle(1);
  g_tot_Ppi0_fakeVII->SetLineWidth(2);
  g_tot_Ppi0_fakeVII->SetMarkerColor(kRed-4);
  g_tot_Ppi0_fakeVII->SetLineColor(kRed-4);
  //g_tot_Ppi0_fakeVII->Draw("Psame");
  auto g_stat_Ppi0_fakeVII = new TGraphAsymmErrors(1, x_stat_Ppi0_fakeVII, y_stat_Ppi0_fakeVII, ex_stat_Ppi0_fakeVII, ex_stat_Ppi0_fakeVII, ey_stat_Ppi0_fakeVII, ey_stat_Ppi0_fakeVII);
  g_stat_Ppi0_fakeVII->SetMarkerStyle(33);
  g_stat_Ppi0_fakeVII->SetMarkerSize(1.4);
  g_stat_Ppi0_fakeVII->SetLineWidth(2);
  g_stat_Ppi0_fakeVII->SetMarkerColor(kRed-4);
  g_stat_Ppi0_fakeVII->SetLineColor(kRed-4);
  //g_stat_Ppi0_fakeVII->Draw("Psame");

  //////////////////////////////////////////////////////////////////////////////////////////////////////
  // Extract flux
  //////////////////////////////////////////////////////////////////////////////////////////////////////
  // NCpi0 case, needs all these fluxes - Xiangpan's files
  double y_hist[nbins_flux];
  
  TH1D *h_flux = new TH1D("h_flux", "", nbins_flux, 0., xbins[1]);

  for (int i=0; i<nbins_flux; i++){
    y_hist[i] = y1_flux[i]+y2_flux[i]+y3_flux[i]+y4_flux[i];
    h_flux->SetBinContent(i, y_hist[i]*2e9);
  }
  h_flux->SetLineColor(13);
  h_flux->SetFillColor(17);
  h_flux->SetLineWidth(2);
  //h_flux->SetMarkerColor(16);
  //h_flux->SetMarkerStyle(16);
  h_flux->Draw("Same");


  //////////////////////////////////////////////////////////////////////////////////////////////////////
  // Legend and Save
  //////////////////////////////////////////////////////////////////////////////////////////////////////
  //auto lg = new TLegend(0.11,0.7,0.5,0.89);
  auto lg = new TLegend(0.5, 0.12, 0.89, 0.42);
  lg->AddEntry(gr_stat, "NC#pi^{0} (Stat. only)","lp");
  lg->AddEntry(gr_tot, "NC#pi^{0} (Total)","lp");
  lg->AddEntry(line, Form("GENIE v3 [#chi^{2}/ndf: %.1f/%d]",chi2_m3,nbins), "l");
  //lg->AddEntry(g_glee_2g0p, Form("gLEE 2#gamma 0p"), "lp");
  //lg->AddEntry(g_glee_2g1p, Form("gLEE 2#gamma 1p"), "lp");
  lg->AddEntry(g_glee_2gXp, Form("gLEE Semi-inclusive"), "lp");
  //lg->AddEntry(g_stat_Enu_open, Form(""), "lp");
  //lg->AddEntry(g_stat_Enu_fakeV, Form("Fake data V (E_{#nu})"), "lp");
  //lg->AddEntry(g_stat_Enu_fakeVII, Form("Fake data VII (E_{#nu})"), "lp");
  lg->AddEntry(g_stat_Ppi0_open, Form("NC#pi^{0} (P_{#pi^{0}})"), "lp");
  //lg->AddEntry(g_stat_Ppi0_fakeV, Form("Fake data V (P_{#pi^{0}})"), "lp");
  //lg->AddEntry(g_stat_Ppi0_fakeVII, Form("Fake data VII (P_{#pi^{0}})"), "lp");
  lg->AddEntry(h_flux, Form("MicroBooNE Flux"), "f");
  //lg->AddEntry(g_NCpi0BDT_Enu_2gXp, Form("WC NCpi0BDT_Enu_275_8000"), "l");
  lg->Draw();

  c2->Update();
  gPad->RedrawAxis();

  //c1->SaveAs("NCpi0BDT_xs_1bin_Enu_275_4000.pdf");
  //c1->SaveAs("ncpio_xs_total_E.png");
  //c1->SaveAs("NCpi0BDT_xs_1bin_Enu_0p_275_8000.C");

  //c1->SaveAs("ncpio_xs_total_Ppio_err.png");
  //c2->SaveAs("ncpio_xs_total_Enu.png");

  std::cout << "--------------------- Template for importing into plot ----------------------- " << std::endl;
  std::cout << "double x_STAT_NAME[] = {3};        // Not relevant" << std::endl;
  std::cout << "double y_STAT_NAME[] = {" << vec_CV[0] << "};" << std::endl;
  std::cout << "double ex_STAT_NAME[] = {0.001};   // Not relevant" << std::endl;
  std::cout << "double ey_STAT_NAME[] = {" << vec_abs_stat[0] << "};" << std::endl;
  std::cout << "double ey_TOT_NAME[] = {" << vec_abs_tot[0] << "};" << std::endl;
  std::cout << "auto g_TOT_NAME = new TGraphAsymmErrors(1, x_STAT_NAME, y_STAT_NAME, ex_STAT_NAME, ex_STAT_NAME, ey_TOT_NAME, ey_TOT_NAME);" << std::endl;
  std::cout << "g_TOT_NAME->Draw(\"Psame\");" << std::endl;  
  std::cout << "auto g_STAT_NAME = new TGraphAsymmErrors(1, x_STAT_NAME, y_STAT_NAME, ex_STAT_NAME, ex_STAT_NAME, ey_STAT_NAME, ey_STAT_NAME);" << std::endl;
  std::cout << "g_STAT_NAME->Draw(\"Psame\");\n" << std::endl;

  /*
  TFile *file_ext1 = new TFile("hist_rootfiles_xs/checkout_data_extbnb_run1.root");   
    TH1D *h_ext1_FC = (TH1D*)file_ext1->Get("BG_NCpi0BDT_FC_ext_5_kine_reco_Enu_all");
    TH1D *h_ext1_FC_err = (TH1D*)file_ext1->Get("BG_NCpi0BDT_FC_ext_5_kine_reco_Enu_all_err2"); 
    TH1D *h_ext1_PC = (TH1D*)file_ext1->Get("BG_NCpi0BDT_PC_ext_5_kine_reco_Enu_all");
    TH1D *h_ext1_PC_err = (TH1D*)file_ext1->Get("BG_NCpi0BDT_PC_ext_5_kine_reco_Enu_all_err2"); 
  TFile *file_ext3 = new TFile("hist_rootfiles_xs/checkout_data_extbnb_run3.root");     
    TH1D *h_ext3_FC = (TH1D*)file_ext3->Get("BG_NCpi0BDT_FC_ext_6_kine_reco_Enu_all");
    TH1D *h_ext3_FC_err = (TH1D*)file_ext3->Get("BG_NCpi0BDT_FC_ext_6_kine_reco_Enu_all_err2");
    TH1D *h_ext3_PC = (TH1D*)file_ext3->Get("BG_NCpi0BDT_PC_ext_6_kine_reco_Enu_all");
    TH1D *h_ext3_PC_err = (TH1D*)file_ext3->Get("BG_NCpi0BDT_PC_ext_6_kine_reco_Enu_all_err2");

  TFile *file_nu1 = new TFile("hist_rootfiles_xs/checkout_prodgenie_bnb_nu_overlay_run1.root"); 
    TH1D *h_nu1_FC = (TH1D*)file_nu1->Get("NCpi0BDT_background_Enu_FC_overlay_3_kine_reco_Enu_all");
    TH1D *h_nu1_FC_err = (TH1D*)file_nu1->Get("NCpi0BDT_background_Enu_FC_overlay_3_kine_reco_Enu_all_err2");
    TH1D *h_nu1_PC = (TH1D*)file_nu1->Get("NCpi0BDT_background_Enu_PC_overlay_3_kine_reco_Enu_all");
    TH1D *h_nu1_PC_err = (TH1D*)file_nu1->Get("NCpi0BDT_background_Enu_PC_overlay_3_kine_reco_Enu_all_err2");
  TFile *file_nu3 = new TFile("hist_rootfiles_xs/checkout_prodgenie_bnb_nu_overlay_run3.root");  
    TH1D *h_nu3_FC = (TH1D*)file_nu3->Get("NCpi0BDT_background_Enu_FC_overlay_4_kine_reco_Enu_all");
    TH1D *h_nu3_FC_err = (TH1D*)file_nu3->Get("NCpi0BDT_background_Enu_FC_overlay_4_kine_reco_Enu_all_err2");
    TH1D *h_nu3_PC = (TH1D*)file_nu3->Get("NCpi0BDT_background_Enu_PC_overlay_4_kine_reco_Enu_all");
    TH1D *h_nu3_PC_err = (TH1D*)file_nu3->Get("NCpi0BDT_background_Enu_PC_overlay_4_kine_reco_Enu_all_err2");

  TFile *file_dirt1 = new TFile("hist_rootfiles_xs/checkout_prodgenie_dirt_overlay_run1.root");
    TH1D *h_dirt1_FC = (TH1D*)file_dirt1->Get("BG_NCpi0BDT_FC_dirt_7_kine_reco_Enu_all");
    TH1D *h_dirt1_FC_err = (TH1D*)file_dirt1->Get("BG_NCpi0BDT_FC_dirt_7_kine_reco_Enu_all_err2");
    TH1D *h_dirt1_PC = (TH1D*)file_dirt1->Get("BG_NCpi0BDT_PC_dirt_7_kine_reco_Enu_all");
    TH1D *h_dirt1_PC_err = (TH1D*)file_dirt1->Get("BG_NCpi0BDT_PC_dirt_7_kine_reco_Enu_all_err2");
  TFile *file_dirt3 = new TFile("hist_rootfiles_xs/checkout_prodgenie_dirt_overlay_run3.root");
    TH1D *h_dirt3_FC = (TH1D*)file_dirt3->Get("BG_NCpi0BDT_FC_dirt_8_kine_reco_Enu_all");
    TH1D *h_dirt3_FC_err = (TH1D*)file_dirt3->Get("BG_NCpi0BDT_FC_dirt_8_kine_reco_Enu_all_err2");
    TH1D *h_dirt3_PC = (TH1D*)file_dirt3->Get("BG_NCpi0BDT_PC_dirt_8_kine_reco_Enu_all");
    TH1D *h_dirt3_PC_err = (TH1D*)file_dirt3->Get("BG_NCpi0BDT_PC_dirt_8_kine_reco_Enu_all_err2");

  TFile *file_nc1 = new TFile("hist_rootfiles_xs/checkout_prodgenie_nc_pi0_overlay_run1.root");
    TH1D *h_nc1_FC = (TH1D*)file_nc1->Get("NCpi0BDT_signal_Enu_FC_overlay_9_kine_reco_Enu_all");
    TH1D *h_nc1_FC_err = (TH1D*)file_nc1->Get("NCpi0BDT_signal_Enu_FC_overlay_9_kine_reco_Enu_all_err2");
    TH1D *h_nc1_PC = (TH1D*)file_nc1->Get("NCpi0BDT_signal_Enu_PC_overlay_9_kine_reco_Enu_all");
    TH1D *h_nc1_PC_err = (TH1D*)file_nc1->Get("NCpi0BDT_signal_Enu_PC_overlay_9_kine_reco_Enu_all_err2");
  TFile *file_nc3 = new TFile("hist_rootfiles_xs/checkout_prodgenie_nc_pi0_overlay_run3.root");
    TH1D *h_nc3_FC = (TH1D*)file_nc3->Get("NCpi0BDT_signal_Enu_FC_overlay_10_kine_reco_Enu_all");
    TH1D *h_nc3_FC_err = (TH1D*)file_nc3->Get("NCpi0BDT_signal_Enu_FC_overlay_10_kine_reco_Enu_all_err2");
    TH1D *h_nc3_PC = (TH1D*)file_nc3->Get("NCpi0BDT_signal_Enu_PC_overlay_10_kine_reco_Enu_all");
    TH1D *h_nc3_PC_err = (TH1D*)file_nc3->Get("NCpi0BDT_signal_Enu_PC_overlay_10_kine_reco_Enu_all_err2");

  TFile *file_bnb1 = new TFile("hist_rootfiles_xs/run1_data_bnb.root");
    TH1D *h_bnb1_FC = (TH1D*)file_bnb1->Get("NCpi0BDT_FC_bnb_11_kine_reco_Enu_all");
    TH1D *h_bnb1_FC_err = (TH1D*)file_bnb1->Get("NCpi0BDT_FC_bnb_11_kine_reco_Enu_all_err2");
    TH1D *h_bnb1_PC = (TH1D*)file_bnb1->Get("NCpi0BDT_PC_bnb_11_kine_reco_Enu_all");
    TH1D *h_bnb1_PC_err = (TH1D*)file_bnb1->Get("NCpi0BDT_PC_bnb_11_kine_reco_Enu_all_err2");
  TFile *file_bnb3 = new TFile("hist_rootfiles_xs/run3_data_bnb.root");
    TH1D *h_bnb3_FC = (TH1D*)file_bnb3->Get("NCpi0BDT_FC_bnb_12_kine_reco_Enu_all");
    TH1D *h_bnb3_FC_err = (TH1D*)file_bnb3->Get("NCpi0BDT_FC_bnb_12_kine_reco_Enu_all_err2");
    TH1D *h_bnb3_PC = (TH1D*)file_bnb3->Get("NCpi0BDT_PC_bnb_12_kine_reco_Enu_all");
    TH1D *h_bnb3_PC_err = (TH1D*)file_bnb3->Get("NCpi0BDT_PC_bnb_12_kine_reco_Enu_all_err2");

  int nbins_ext1 = h_ext1_FC->GetNbinsX();
  std::vector<double> v_bnb, v_bnb_err; double y_bnb, y_bnb_err;
  std::vector<double> v_ext, v_ext_err; double y_ext, y_ext_err;
  std::vector<double> v_bkg, v_bkg_err; double y_bkg, y_bkg_err;
  std::vector<double> v_num, v_num_err; double y_num, y_num_err;

  for (int i=0; i<nbins_ext1; i++){
    v_bnb.push_back(h_bnb1_FC->GetBinContent(i+1)); v_bnb_err.push_back(h_bnb1_FC_err->GetBinContent(i+1));
    v_bnb.push_back(h_bnb1_PC->GetBinContent(i+1)); v_bnb_err.push_back(h_bnb1_PC_err->GetBinContent(i+1));
    v_bnb.push_back(h_bnb3_FC->GetBinContent(i+1)); v_bnb_err.push_back(h_bnb3_FC_err->GetBinContent(i+1));
    v_bnb.push_back(h_bnb3_PC->GetBinContent(i+1)); v_bnb_err.push_back(h_bnb3_PC_err->GetBinContent(i+1));

    v_ext.push_back(h_ext1_FC->GetBinContent(i+1)); v_ext_err.push_back(h_ext1_FC_err->GetBinContent(i+1));
    v_ext.push_back(h_ext1_PC->GetBinContent(i+1)); v_ext_err.push_back(h_ext1_PC_err->GetBinContent(i+1));
    v_ext.push_back(h_ext3_FC->GetBinContent(i+1)); v_ext_err.push_back(h_ext3_FC_err->GetBinContent(i+1));
    v_ext.push_back(h_ext3_PC->GetBinContent(i+1)); v_ext_err.push_back(h_ext3_PC_err->GetBinContent(i+1));
    
    v_bkg.push_back(h_nu1_FC->GetBinContent(i+1)); v_bkg_err.push_back(h_nu1_FC_err->GetBinContent(i+1));
    v_bkg.push_back(h_nu1_PC->GetBinContent(i+1)); v_bkg_err.push_back(h_nu1_PC_err->GetBinContent(i+1));
    v_bkg.push_back(h_nu3_FC->GetBinContent(i+1)); v_bkg_err.push_back(h_nu3_FC_err->GetBinContent(i+1));
    v_bkg.push_back(h_nu3_PC->GetBinContent(i+1)); v_bkg_err.push_back(h_nu3_PC_err->GetBinContent(i+1));

    v_bkg.push_back(h_dirt1_FC->GetBinContent(i+1)); v_bkg_err.push_back(h_dirt1_FC_err->GetBinContent(i+1));
    v_bkg.push_back(h_dirt1_PC->GetBinContent(i+1)); v_bkg_err.push_back(h_dirt1_PC_err->GetBinContent(i+1));
    v_bkg.push_back(h_dirt3_FC->GetBinContent(i+1)); v_bkg_err.push_back(h_dirt3_FC_err->GetBinContent(i+1));
    v_bkg.push_back(h_dirt3_PC->GetBinContent(i+1)); v_bkg_err.push_back(h_dirt3_PC_err->GetBinContent(i+1));
  }

  std::cout << "\n-------------- Table for Cross Section -----------------" << std::endl;
  for(int i=0; i<v_bnb.size(); i++) y_bnb += v_bnb[i];
  for(int i=0; i<v_bnb_err.size(); i++){
    y_bnb_err += v_bnb_err[i];
  }
  y_bnb_err = TMath::Sqrt(y_bnb_err);
  std::cout << "BNB data: " << y_bnb << " +- " << y_bnb_err << std::endl;
  
  for(int i=0; i<v_ext.size(); i++) y_ext += v_ext[i];
  for(int i=0; i<v_ext_err.size(); i++){
    y_ext_err += v_ext_err[i];
  }
  y_ext_err = TMath::Sqrt(y_ext_err);
  std::cout << "EXT data: " << y_ext << " +- " << y_ext_err << std::endl;

  for(int i=0; i<v_bkg.size(); i++) y_bkg += v_bkg[i];
  for(int i=0; i<v_bkg_err.size(); i++){
    y_bkg_err += v_bkg_err[i];
  }
  y_bkg_err = TMath::Sqrt(y_bkg_err);
  std::cout << "BKG MC: " << y_bkg << " +- " << y_bkg_err << std::endl;
  
  y_num = y_bnb - y_ext - y_bkg;
  y_num_err = TMath::Sqrt(pow(y_bnb_err, 2) + pow(y_ext_err, 2) + pow(y_bkg_err, 2));
  std::cout << "Numerator: " << y_num << " +- " << y_num_err << std::endl;
  */
} 