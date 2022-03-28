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
void plot_diff_xs_Ppi0_Nbin(){

  double xbins[] = {0., 0.1, 0.15, 0.2, 0.25, 0.3, 0.4, 0.5, 0.6, 0.8, 1.0, 1.5};  // Bin separators - GeV
  double NUCLEONS = 40.;
  double XS_FACTOR = 1000.;  // Cross section is in terms of 10e-36 cm^2/Ar if XS_FACTOR == 1., otherwise change axis
                                      // 1e-38 cm^2/Ar if XS_FACTOR == 100.
                                      // 1e-39 cm^2/Ar if XS_FACTOR == 1000.
                                      // 1e-40 cm^2/Ar if XS_FACTOR == 10000.

  XS_FACTOR = 1000./NUCLEONS;  // Only if you want XS normalized per nucleon
  
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
  double vec_CV_untouched[m];

  std::cout << "\nFractional Uncertainties -------------------------------------------- " << std::endl;
  for (int i=0;i<m;i++) {
    std::cout << "--- BIN " << i+1 << "(/" << m <<") --------- " << std::endl;
    double content = unf->GetBinContent(i+1) * XS_FACTOR;
    if (XS_FACTOR == 1.) std::cout << "CV = " << content << " [1e-36 cm^2 / GeV/c / Ar]" << std::endl;
    else if (XS_FACTOR == 100.) std::cout << "CV = " << content << " [1e-38 cm^2 / GeV/c / Ar]" << std::endl;
    else if (XS_FACTOR == 1000.) std::cout << "CV = " << content << " [1e-39 cm^2 / GeV/c / Ar]" << std::endl;
    else if (XS_FACTOR == 10000.) std::cout << "CV = " << content << " [1e-40 cm^2 / GeV/c / Ar]" << std::endl;

    else if (XS_FACTOR == 1./NUCLEONS) std::cout << "CV = " << content << " [1e-38 cm^2 / GeV/c / nucleon]" << std::endl;
    else if (XS_FACTOR == 100./NUCLEONS) std::cout << "CV = " << content << " [1e-38 cm^2 / GeV/c / nucleon]" << std::endl;
    else if (XS_FACTOR == 1000./NUCLEONS) std::cout << "CV = " << content << " [1e-39 cm^2 / GeV/c / nucleon]" << std::endl;
    else if (XS_FACTOR == 10000./NUCLEONS) std::cout << "CV = " << content << " [1e-40 cm^2 / GeV/c / nucleon]" << std::endl;

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
    vec_CV_untouched[i] = unf->GetBinContent(i+1);
  }
  std::cout << "--------------------- THE END ----------------------- \n" << std::endl;

  // Print info for plots happens at the end

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

  herr_frac_tot->GetYaxis()->SetRangeUser(0,1);

  herr_frac_tot->Draw();
  herr_frac_stat->Draw("same");
  herr_frac_mcstat->Draw("same");
  herr_frac_add->Draw("same");
  herr_frac_flux->Draw("same");
  herr_frac_det->Draw("same");
  herr_frac_xs->Draw("same");
  herr_frac_tot->Draw("same");    //force it to plot on top

  TLegend *le2 = new TLegend(0.61,0.6,0.75,0.89);
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

  double xcenter[nbins];
  for (int i=0; i<nbins;i++) {
    xcenter[i] = xbins[i] + (xbins[i+1]-xbins[i])/2.; // GeV
  }

  // set assymetric error bar in x-axis, symmetric in y-axis
  std::vector<double> x_v, y_v, y_v_untouched;
  std::vector<double> exl_v, exh_v;
  std::vector<double> eyl_stat_v, eyh_stat_v;
  std::vector<double> eyl_tot_v, eyh_tot_v;
  for (int i=0; i<nbins; i++){
    double x = xcenter[i];
    double ex = (xbins[i+1]-xbins[i])/2.;

    double y = vec_CV[i];
    double y_untouched = vec_CV_untouched[i];
    double ey_stat = vec_abs_stat[i];
    double ey_tot = vec_abs_tot[i];
    
    x_v.push_back(x);
    exl_v.push_back(ex);
    exh_v.push_back(ex);

    y_v.push_back(y);
    y_v_untouched.push_back(y_untouched);
    eyl_stat_v.push_back(ey_stat);
    eyh_stat_v.push_back(ey_stat);
    eyl_tot_v.push_back(ey_tot);
    eyh_tot_v.push_back(ey_tot);
  }

  auto gr_tot = new TGraphAsymmErrors(x_v.size(), x_v.data(), y_v.data(), exl_v.data(), exh_v.data(), eyl_tot_v.data(), eyh_tot_v.data());
  gr_tot->SetMarkerColor(6);
  //gr_tot->SetMarkerStyle(1);
  //gr_tot->SetMarkerSize(1);
  gr_tot->SetFillColor(kRed-7);
  gr_tot->SetFillStyle(3354);
  gStyle->SetHatchesSpacing(.35);
  gr_tot->SetLineWidth(0);
  //gr_tot->SetLineColor(6);
  if (XS_FACTOR == 1.) gr_tot->GetYaxis()->SetTitle("#frac{d #sigma}{d P_{#pi^{0}}} (10^{-36} cm^{2} / GeV/c / Ar)");
  else if (XS_FACTOR == 100.) gr_tot->GetYaxis()->SetTitle("#frac{d #sigma}{d P_{#pi^{0}}} (10^{-38} cm^{2} / GeV/c / Ar)");
  else if (XS_FACTOR == 1000.) gr_tot->GetYaxis()->SetTitle("#frac{d #sigma}{d P_{#pi^{0}}} (10^{-39} cm^{2} / GeV/c / Ar)");
  else if (XS_FACTOR == 10000.) gr_tot->GetYaxis()->SetTitle("#frac{d #sigma}{d P_{#pi^{0}}} (10^{-40} cm^{2} / GeV/c / Ar)"); 
  
  else if (XS_FACTOR == 1./NUCLEONS) gr_tot->GetYaxis()->SetTitle("#frac{d #sigma}{d P_{#pi^{0}}} (10^{-36} cm^{2} / GeV/c / nucleon)");
  else if (XS_FACTOR == 100./NUCLEONS) gr_tot->GetYaxis()->SetTitle("#frac{d #sigma}{d P_{#pi^{0}}} (10^{-38} cm^{2} / GeV/c / nucleon)");
  else if (XS_FACTOR == 1000./NUCLEONS) gr_tot->GetYaxis()->SetTitle("#frac{d #sigma}{d P_{#pi^{0}}} (10^{-39} cm^{2} / GeV/c / nucleon)");
  else if (XS_FACTOR == 10000./NUCLEONS) gr_tot->GetYaxis()->SetTitle("#frac{d #sigma}{d P_{#pi^{0}}} (10^{-40} cm^{2} / GeV/c / nucleon)");

  gr_tot->GetXaxis()->SetTitle("P_{#pi^{0}} [GeV/c]");
  gr_tot->GetXaxis()->SetLabelSize(0.035);
  gr_tot->GetYaxis()->SetLabelSize(0.025);
  gr_tot->GetXaxis()->SetTitleSize(0.035);
  gr_tot->GetYaxis()->SetTitleSize(0.035);
  gr_tot->GetYaxis()->SetRangeUser(0., 0.075 * XS_FACTOR);
  gr_tot->GetXaxis()->SetLimits(0., xbins[nbins]);  // along X
  //gr_tot->GetHistogram()->SetMaximum(20.);        // max along Y          
  //gr_tot->GetHistogram()->SetMinimum(-20.);       // min along Y     
  gr_tot->SetTitle("");
  gr_tot->Draw("a2");

  auto gr_stat = new TGraphAsymmErrors(x_v.size(), x_v.data(), y_v.data(), exl_v.data(), exh_v.data(), eyl_stat_v.data(), eyh_stat_v.data());
  gr_stat->SetMarkerColor(1);
  gr_stat->SetMarkerStyle(21);
  gr_stat->SetMarkerSize(1);
  gr_stat->SetLineWidth(2);
  gr_stat->SetLineColor(1);
  gr_stat->Draw("PSame");

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
  vector<double> x3, y3, y3_untouched;
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
    y3_untouched.push_back(Ac_v3(i));
  }
  
  // plot CV GENIE
  TH1D *h_genie = new TH1D("h_genie", "", nbins, xbins);
  for (int i=0; i<nbins; i++){
    h_genie->SetBinContent(i+1, y3[i]);
  }
  h_genie->SetLineColor(14);
  h_genie->SetLineWidth(2);
  h_genie->Draw("Same");

  
  // GOF (model+real bin+Ac vs. data)
  TMatrixD matrix_data(1,nbins);
  TMatrixD matrix_data_untouched(1,nbins);
  TMatrixD matrix_pred3(1,nbins);
  TMatrixD matrix_pred3_untouched(1,nbins);
  for(int i=0; i<nbins; i++){
    matrix_data(0,i) = y_v.at(i); // BNB
    matrix_data_untouched(0,i) = y_v_untouched.at(i); // BNB (no scaling)
    matrix_pred3(0,i) = y3[i];    // CV GENIE
    matrix_pred3_untouched(0,i) = y3_untouched[i];    // CV GENIE (no scaling)
  }

  auto bias = (TH1D*)uBxsec->Get("bias");
  TMatrixD unfcov(nbins, nbins); // fill cov matrix
  TMatrixD unfcov_untouched(nbins, nbins); // fill cov matrix (no scaling)
  for (int i=0; i<nbins; i++) {
    for (int j=0; j<nbins; j++) {
      unfcov(i,j) = cov->GetBinContent(i+1, j+1) *XS_FACTOR*XS_FACTOR;
      unfcov_untouched(i,j) = cov->GetBinContent(i+1, j+1);
      // in the case that Ac smearing is not added,
      // use Ac-I diagnal term as additional uncer.
      if (i==j) {
        // unfcov(i,i) += ( Ac_add(i) * Ac_add(i) );
        // cout << "cov diagonal # " << i << " " <<  sqrt(cov->GetBinContent(i+1, i+1)) << " bias: " << Ac_add(i) << endl;
      }
    }
  }

  //double chi2_m3 = calc_GoF(matrix_pred3, matrix_data, unfcov);
  double chi2_m3 = calc_GoF(matrix_pred3_untouched, matrix_data_untouched, unfcov_untouched);


  //////////////////////////////////////////////////////////////////////////////////////////////////////
  // Additional Plots
  //////////////////////////////////////////////////////////////////////////////////////////////////////
/*
  //---- Ppi0 opendata (0-1.5) GeV/c with (0.275-8) GeV
  double x_stat_open[] = {0.05, 0.125, 0.175, 0.225, 0.275, 0.35, 0.45, 0.55, 0.7, 0.9, 1.25};
  double y_stat_open[] = {0.433179, 0.888031, 0.923733, 0.792518, 0.665168, 0.553307, 0.392932, 0.2277, 0.120219, 0.0574528, 0.0273173};
  double ex_stat_open[] = {0.05, 0.025, 0.025, 0.025, 0.025, 0.05, 0.05, 0.05, 0.1, 0.1, 0.25};
  double ey_stat_open[] = {0.109549, 0.203124, 0.177369, 0.126622, 0.0974385, 0.084009, 0.0680652, 0.0520494, 0.0418076, 0.0300832, 0.0184502};
  double ey_tot_open[] = {0.137486, 0.258227, 0.231241, 0.169725, 0.132332, 0.113357, 0.0907848, 0.0687316, 0.054523, 0.0387996, 0.0236915};
  //auto g_tot_open = new TGraphAsymmErrors(1, x_stat_open, y_stat_open, ex_stat_open, ex_stat_open, ey_tot_open, ey_tot_open);
  //g_tot_open->Draw("same");
  //auto g_stat_open = new TGraphAsymmErrors(1, x_stat_open, y_stat_open, ex_stat_open, ex_stat_open, ey_stat_open, ey_stat_open);
  //g_stat_open->Draw("same");
  TH1D *h_open = new TH1D("h_genie", "", nbins, xbins);
  for (int i=0; i<nbins; i++){
    h_genie->SetBinContent(i+1, y3[i]);
  }
  h_genie->SetLineColor(14);
  h_genie->SetLineWidth(2);
  h_genie->Draw("Same");
*/
  //---- Ppi0 fake V (0-1.5) GeV/c with (0.275-8) GeV
  double x_stat_fakeV[] = {0.05, 0.125, 0.175, 0.225, 0.275, 0.35, 0.45, 0.55, 0.7, 0.9, 1.25};
  double y_stat_fakeV[] = {0.583298, 1.24588, 1.40396, 1.32696, 1.18668, 1.00483, 0.686543, 0.347731, 0.138038, 0.0392671, 0.00774993};
  double ex_stat_fakeV[] = {0.05, 0.025, 0.025, 0.025, 0.025, 0.05, 0.05, 0.05, 0.1, 0.1, 0.25};
  double ey_stat_fakeV[] = {0.0414473, 0.0735296, 0.0605913, 0.0440943, 0.0387845, 0.0355533, 0.0266609, 0.0176658, 0.0140145, 0.0107612, 0.00681312};
  double ey_tot_fakeV[] = {0.105016, 0.189891, 0.162275, 0.117866, 0.0993511, 0.0890362, 0.067083, 0.0462926, 0.037575, 0.0285599, 0.0179827};
  //auto g_tot_fakeV = new TGraphAsymmErrors(1, x_stat_fakeV, y_stat_fakeV, ex_stat_fakeV, ex_stat_fakeV, ey_tot_fakeV, ey_tot_fakeV);
  //g_tot_fakeV->Draw("same");
  //auto g_stat_fakeV = new TGraphAsymmErrors(1, x_stat_fakeV, y_stat_fakeV, ex_stat_fakeV, ex_stat_fakeV, ey_stat_fakeV, ey_stat_fakeV);
  //g_stat_fakeV->Draw("same");
  TH1D *h_fakeV = new TH1D("h_fakeV", "", nbins, xbins);
  for (int i=0; i<nbins; i++){
    h_fakeV->SetBinContent(i+1, y_stat_fakeV[i]);
  }
  h_fakeV->SetLineColor(kBlue-9);
  h_fakeV->SetLineWidth(2);
  //h_fakeV->Draw("Same");

  //---- Ppi0 fake VII (0-1.5) GeV/c with (0.275-8) GeV
  double x_stat_fakeVII[] = {0.05, 0.125, 0.175, 0.225, 0.275, 0.35, 0.45, 0.55, 0.7, 0.9, 1.25};
  double y_stat_fakeVII[] = {0.780686, 1.61693, 1.72077, 1.50435, 1.28274, 1.05857, 0.716264, 0.388346, 0.182722, 0.0726269, 0.0295034};
  double ex_stat_fakeVII[] = {0.05, 0.025, 0.025, 0.025, 0.025, 0.05, 0.05, 0.05, 0.1, 0.1, 0.25};
  double ey_stat_fakeVII[] = {0.0563649, 0.101977, 0.0850782, 0.0604874, 0.0516091, 0.0472278, 0.0353034, 0.0245436, 0.0203319, 0.0152704, 0.0096371};
  double ey_tot_fakeVII[] = {0.103908, 0.190621, 0.163562, 0.117695, 0.0976592, 0.0870048, 0.065087, 0.0467687, 0.0392436, 0.029221, 0.0183445};
  //auto g_tot_fakeVII = new TGraphAsymmErrors(1, x_stat_fakeVII, y_stat_fakeVII, ex_stat_fakeVII, ex_stat_fakeVII, ey_tot_fakeVII, ey_tot_fakeVII);
  //g_tot_fakeVII->Draw("same");
  //auto g_stat_fakeVII = new TGraphAsymmErrors(1, x_stat_fakeVII, y_stat_fakeVII, ex_stat_fakeVII, ex_stat_fakeVII, ey_stat_fakeVII, ey_stat_fakeVII);
  //g_stat_fakeVII->Draw("same");
  TH1D *h_fakeVII = new TH1D("h_fakeVII", "", nbins, xbins);
  for (int i=0; i<nbins; i++){
    h_fakeVII->SetBinContent(i+1, y_stat_fakeVII[i]);
  }
  h_fakeVII->SetLineColor(kMagenta-9);
  h_fakeVII->SetLineWidth(2);
  //h_fakeVII->Draw("Same");





  //////////////////////////////////////////////////////////////////////////////////////////////////////
  // Legend and Save
  //////////////////////////////////////////////////////////////////////////////////////////////////////
  //auto lg = new TLegend(0.11,0.7,0.5,0.89);
  auto lg = new TLegend(0.5, 0.69, 0.89, 0.89);
  lg->AddEntry(gr_stat, "NC#pi^{0} (Stat. only)","lpe");
  lg->AddEntry(gr_tot, "NC#pi^{0} (Total)","f");
  lg->AddEntry(h_genie, Form("GENIE v3 [#chi^{2}/ndf: %.1f/%d]",chi2_m3,nbins), "l");
  //lg->AddEntry(h_fakeV, Form("Fake data V"), "l");
  //lg->AddEntry(h_fakeVII, Form("Fake data VII"), "l");
  lg->Draw();

  c1->Update();
  gPad->RedrawAxis();

  //c1->SaveAs("numuCC_xs_1bin_Enu.pdf");
  //c1->SaveAs("ncpio_xs_diff_p.png");
  //c1->SaveAs("numuCC_xs_1bin_Enu.C");

  //c1->SaveAs("ncpio_xs_diff_P_err.png");
  c2->SaveAs("ncpio_xs_diff_P_Ar.png");

  std::cout << "\n--------------------- Template for importing into plot ----------------------- " << std::endl;
  std::cout << "double x_STAT_NAME[] = {";
  for (int i=0; i<nbins; i++){
    if (i==0) std::cout << x_v[i];
    else std::cout << ", " << x_v[i];
  }
  std::cout << "};" << std::endl;
  std::cout << "double y_STAT_NAME[] = {";
  for (int i=0; i<nbins; i++){
    if (i==0) std::cout << y_v[i];
    else std::cout << ", " << y_v[i];
  }
  std::cout << "};" << std::endl;
  std::cout << "double ex_STAT_NAME[] = {";
  for (int i=0; i<nbins; i++){
    if (i==0) std::cout << exl_v[i];
    else std::cout << ", " << exl_v[i];
  }
  std::cout << "};" << std::endl;
  std::cout << "double ey_STAT_NAME[] = {";
  for (int i=0; i<nbins; i++){
    if (i==0) std::cout << eyl_stat_v[i];
    else std::cout << ", " << eyl_stat_v[i];
  }
  std::cout << "};" << std::endl;
  std::cout << "double ey_TOT_NAME[] = {";
  for (int i=0; i<nbins; i++){
    if (i==0) std::cout << eyl_tot_v[i];
    else std::cout << ", " << eyl_tot_v[i];
  }
  std::cout << "};" << std::endl;
  std::cout << "auto g_TOT_NAME = new TGraphAsymmErrors(1, x_STAT_NAME, y_STAT_NAME, ex_STAT_NAME, ex_STAT_NAME, ey_TOT_NAME, ey_TOT_NAME);" << std::endl;
  std::cout << "g_TOT_NAME->Draw(\"Psame\");" << std::endl;  
  std::cout << "auto g_STAT_NAME = new TGraphAsymmErrors(1, x_STAT_NAME, y_STAT_NAME, ex_STAT_NAME, ex_STAT_NAME, ey_STAT_NAME, ey_STAT_NAME);" << std::endl;
  std::cout << "g_STAT_NAME->Draw(\"Psame\");" << std::endl;
}