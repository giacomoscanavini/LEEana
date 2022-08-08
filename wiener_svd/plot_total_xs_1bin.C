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
void plot_total_xs_1bin(){

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

  // Unfolded covariance matrices
  TMatrixD mcov_stat_rot   = (*covRotation) * mcov_stat   * (*covRotation_t);
  TMatrixD mcov_mcstat_rot = (*covRotation) * mcov_mcstat * (*covRotation_t);
  TMatrixD mcov_add_rot    = (*covRotation) * mcov_add    * (*covRotation_t);
  TMatrixD mcov_flux_rot   = (*covRotation) * mcov_flux   * (*covRotation_t);
  TMatrixD mcov_det_rot    = (*covRotation) * mcov_det    * (*covRotation_t);
  TMatrixD mcov_xs_rot     = (*covRotation) * mcov_xs     * (*covRotation_t);
  TMatrixD mcov_tot_rot    = (*covRotation) * mcov_tot    * (*covRotation_t);

  ofstream myfile;
  myfile.open ("values_unfolded.txt");

  myfile << " Stat. Cov. (reco space) \n[";
  for (int i=0;i<n;i++) {
    myfile << "[";
    for (int j=0;j<n;j++) {
      if(j<n-1) myfile << mcov_stat(i,j) << ", ";
      else myfile << mcov_stat(i,j);
    }
    if(i<n-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " MC Stat. Cov. (reco space) \n[";
  for (int i=0;i<n;i++) {
    myfile << "[";
    for (int j=0;j<n;j++) {
      if(j<n-1) myfile << mcov_mcstat(i,j) << ", ";
      else myfile << mcov_mcstat(i,j);
    }
    if(i<n-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " Dirt Cov. (reco space) \n[";
  for (int i=0;i<n;i++) {
    myfile << "[";
    for (int j=0;j<n;j++) {
      if(j<n-1) myfile << mcov_add(i,j) << ", ";
      else myfile << mcov_add(i,j);
    }
    if(i<n-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " Flux Cov. (reco space) \n[";
  for (int i=0;i<n;i++) {
    myfile << "[";
    for (int j=0;j<n;j++) {
      if(j<n-1) myfile << mcov_flux(i,j) << ", ";
      else myfile << mcov_flux(i,j);
    }
    if(i<n-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " Det. Cov. (reco space) \n[";
  for (int i=0;i<n;i++) {
    myfile << "[";
    for (int j=0;j<n;j++) {
      if(j<n-1) myfile << mcov_det(i,j) << ", ";
      else myfile << mcov_det(i,j);
    }
    if(i<n-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " XSec. Cov. (reco space) \n[";
  for (int i=0;i<n;i++) {
    myfile << "[";
    for (int j=0;j<n;j++) {
      if(j<n-1) myfile << mcov_xs(i,j) << ", ";
      else myfile << mcov_xs(i,j);
    }
    if(i<n-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " Tot. Cov. (reco space) \n[";
  for (int i=0;i<n;i++) {
    myfile << "[";
    for (int j=0;j<n;j++) {
      if(j<n-1) myfile << mcov_tot(i,j) << ", ";
      else myfile << mcov_tot(i,j);
    }
    if(i<n-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << "-------------------------------------------------------------------------------\n\n";

  myfile << " Stat. Cov. (unfolded space) \n[";
  for (int i=0;i<m;i++) {
    myfile << "[";
    for (int j=0;j<m;j++) {
      if(j<m-1) myfile << mcov_stat_rot(i,j) << ", ";
      else myfile << mcov_stat_rot(i,j);
    }
    if(i<m-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " MC Stat. Cov. (unfolded space) \n[";
  for (int i=0;i<m;i++) {
    myfile << "[";
    for (int j=0;j<m;j++) {
      if(j<m-1) myfile << mcov_mcstat_rot(i,j) << ", ";
      else myfile << mcov_mcstat_rot(i,j);
    }
    if(i<m-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " Dirt Cov. (unfolded space) \n[";
  for (int i=0;i<m;i++) {
    myfile << "[";
    for (int j=0;j<m;j++) {
      if(j<m-1) myfile << mcov_add_rot(i,j) << ", ";
      else myfile << mcov_add_rot(i,j);
    }
    if(i<m-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " Flux Cov. (unfolded space) \n[";
  for (int i=0;i<m;i++) {
    myfile << "[";
    for (int j=0;j<m;j++) {
      if(j<m-1) myfile << mcov_flux_rot(i,j) << ", ";
      else myfile << mcov_flux_rot(i,j);
    }
    if(i<m-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " Det. Cov. (unfolded space) \n[";
  for (int i=0;i<m;i++) {
    myfile << "[";
    for (int j=0;j<m;j++) {
      if(j<m-1) myfile << mcov_det_rot(i,j) << ", ";
      else myfile << mcov_det_rot(i,j);
    }
    if(i<m-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " XSec. Cov. (unfolded space) \n[";
  for (int i=0;i<m;i++) {
    myfile << "[";
    for (int j=0;j<m;j++) {
      if(j<m-1) myfile << mcov_xs_rot(i,j) << ", ";
      else myfile << mcov_xs_rot(i,j);
    }
    if(i<m-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile << " Tot. Cov. (unfolded space) \n[";
  for (int i=0;i<m;i++) {
    myfile << "[";
    for (int j=0;j<m;j++) {
      if(j<m-1) myfile << mcov_tot_rot(i,j) << ", ";
      else myfile << mcov_tot_rot(i,j);
    }
    if(i<m-1) myfile << "],\n";
    else myfile << "]";
  }
  myfile << "]\n\n";

  myfile.close();


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

  ofstream myfile2;
  myfile2.open ("import_frac_uncertainties.txt");

  double frac_err_stat[m];
  double frac_err_mcstat[m];
  double frac_err_dirt[m];
  double frac_err_flux[m];
  double frac_err_det[m];
  double frac_err_xs[m];

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

    std::cout << "\nvalues_other = [" << 100.*frac_stat << ", " << 100.*frac_mcstat << ", " << 100.*frac_add << ", " << 100.*frac_flux << ", " << 100.*frac_det << ", " << 100.*frac_xs << "]\n" << std::endl;

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

    frac_err_stat[i] = frac_stat;
    frac_err_mcstat[i] = frac_mcstat;
    frac_err_dirt[i] = frac_add;
    frac_err_flux[i] = frac_flux;
    frac_err_det[i] = frac_det;
    frac_err_xs[i] = frac_xs;
  }

  myfile2 << "frac_err_stat = [";
  for (int i=0;i<m;i++) {
    myfile2 << frac_err_stat[i] << "]\n";
  }
  myfile2 << "frac_err_mcstat = [";
  for (int i=0;i<m;i++) {
    myfile2 << frac_err_mcstat[i] << "]\n";
  }
  myfile2 << "frac_err_dirt = [";
  for (int i=0;i<m;i++) {
    myfile2 << frac_err_dirt[i] << "]\n";
  }
  myfile2 << "frac_err_flux = [";
  for (int i=0;i<m;i++) {
    myfile2 << frac_err_flux[i] << "]\n";
  }
  myfile2 << "frac_err_det = [";
  for (int i=0;i<m;i++) {
    myfile2 << frac_err_det[i] << "]\n";
  }
  myfile2 << "frac_err_xs = [";
  for (int i=0;i<m;i++) {
    myfile2 << frac_err_xs[i] << "]\n";
  }

  myfile2.close();
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

  herr_frac_tot->GetYaxis()->SetRangeUser(0,1);

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
  //std::cout << "Bin central value: " << x_v[0] << std::endl;

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
  }
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

  std::cout << "\n--------------------- Template for importing into plot ----------------------- " << std::endl;

  ofstream myfile3;
  myfile3.open ("import_xsec.txt");

  std::cout << "GENIE_y = [" << y3[0] << "]" << std::endl;                    myfile3 << "GENIE_y = [" << y3[0] << "]" << std::endl;
  std::cout << "y = [" << vec_CV[0] << "]" << std::endl;                      myfile3 << "y = [" << vec_CV[0] << "]" << std::endl;
  std::cout << "yerr_stat = [" << vec_abs_stat[0] << "]" << std::endl;        myfile3 << "yerr_stat = [" << vec_abs_stat[0] << "]" << std::endl;
  std::cout << "yerr_tot = [" << vec_abs_tot[0] << "]" << std::endl;          myfile3 << "yerr_tot = [" << vec_abs_tot[0] << "]" << std::endl;
  std::cout << "yerr_sys = [" << vec_abs_syst[0] << "]" << std::endl;         myfile3 << "yerr_sys = [" << vec_abs_syst[0] << "]" << std::endl;
  std::cout << "chi2 = '" << chi2_m3 << "'" << std::endl;                     myfile3 << "chi2 = '" << chi2_m3 << "'" << std::endl; 

  myfile3.close();
} 