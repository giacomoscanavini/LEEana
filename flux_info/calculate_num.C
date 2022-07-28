void calculate_num(double init_E = 0., double final_E = 5, int nstep = 1000, double POT = 5.327e19, double init_difval=0, double final_difval=0){
  
  ///////////////////////////////////////////////////////////////////////////////////////
  // DETECTOR INFORMATION & POT
  ///////////////////////////////////////////////////////////////////////////////////////
  double density = 1.3836; //g/cm^3
  double density_gLEE = 1.3954; //g/cm^3
  double volume = 5.82515e7; //cm^3
  double m_mol = 39.95; //g/mol
  double m_mol_gLEE = 39.948; //g/mol
  double NA = 6.022e23; // N/mol

  double target_N = density * volume * NA/m_mol;
  std::cout << "Number of Target Argon: " << target_N << std::endl;

  double pb = 1e-36; // pbarn
  std::cout << "POT                   : " << POT << std::endl;

  ///////////////////////////////////////////////////////////////////////////////////////
  // FLUX FILES 
  ///////////////////////////////////////////////////////////////////////////////////////

  // NCpi0 case, needs all these fluxes - Xiangpan's files
  TFile *file = new TFile("file_result_unit_per_POT_GeV_cm2.root");
  TH1D *h1 = (TH1D*)file->Get("h1_numu_norm_flux"); // numu     /POT/GeV/cm2
  TH1D *h2 = (TH1D*)file->Get("h1_numu_bar_flux");  // numu-bar /POT/GeV/cm2
  TH1D *h3 = (TH1D*)file->Get("h1_nue_norm_flux");  // nue      /POT/GeV/cm2
  TH1D *h4 = (TH1D*)file->Get("h1_nue_bar_flux");   // nue-bar  /POT/GeV/cm2

  int nbins_1 = h1->GetNbinsX();
  int nbins_2 = h2->GetNbinsX();
  int nbins_3 = h3->GetNbinsX();
  int nbins_4 = h4->GetNbinsX();

  double x1_hist[nbins_1];
  double x2_hist[nbins_2];
  double x3_hist[nbins_3];
  double x4_hist[nbins_4];

  double y1_hist[nbins_1];
  double y2_hist[nbins_2];
  double y3_hist[nbins_3];
  double y4_hist[nbins_4];

  for (int i=0; i<nbins_1; i++){
    x1_hist[i] = h1->GetBinCenter(i+1);
    y1_hist[i] = h1->GetBinContent(i+1);
  }

  for (int i=0; i<nbins_2; i++){
    x2_hist[i] = h2->GetBinCenter(i+1);
    y2_hist[i] = h2->GetBinContent(i+1);
  }

  for (int i=0; i<nbins_3; i++){
    x3_hist[i] = h3->GetBinCenter(i+1);
    y3_hist[i] = h3->GetBinContent(i+1);
  }

  for (int i=0; i<nbins_4; i++){
    x4_hist[i] = h4->GetBinCenter(i+1);
    y4_hist[i] = h4->GetBinContent(i+1);
  }

  TGraph* g1 = new TGraph(nbins_1, x1_hist, y1_hist);
  TGraph* g2 = new TGraph(nbins_2, x2_hist, y2_hist);
  TGraph* g3 = new TGraph(nbins_3, x3_hist, y3_hist);
  TGraph* g4 = new TGraph(nbins_4, x4_hist, y4_hist);

  // CALCULATE TOTAL FLUX (NCpi0 case, need to sum all fluxes)
  double flux_sum = 0;
  for (Int_t i=0;i!=nstep;i++){
    double x = init_E + (final_E-init_E)*(i+0.5)/nstep;
    double flux_1 = g1->Eval(x)*(final_E-init_E)/nstep;
    double flux_2 = g2->Eval(x)*(final_E-init_E)/nstep;
    double flux_3 = g3->Eval(x)*(final_E-init_E)/nstep;
    double flux_4 = g4->Eval(x)*(final_E-init_E)/nstep;
    flux_sum += flux_1 + flux_2 + flux_3 + flux_4;
  }
  std::cout << "Flux                  : " << flux_sum << std::endl;

  std::cout << std::endl;
  double final_constant = flux_sum * POT * target_N * pb;

  if (final_difval!=init_difval) std::cout << "Final constant        : " << final_constant * (abs(final_difval - init_difval)) << std::endl;
  else std::cout << "Final constant        : " << final_constant << std::endl;

/*
  // CALCULATE TOTAL FLUX (numuCC case)
  TFile *file = new TFile("gh_averaged_numu_flux.root");
  TGraph *gflux = (TGraph*)file->Get("gh_averaged_numu_flux");          // numu/POT/GeV/cm2

  double flux_sum = 0;
  for (Int_t i=0;i!=nstep;i++){
    double x = init_E + (final_E-init_E)*(i+0.5)/nstep;
    flux_sum += gflux->Eval(x)*(final_E-init_E)/nstep;
  }
  std::cout << "Flux                  : " << flux_sum << std::endl;

  std::cout << std::endl;
  double final_constant = flux_sum * POT * target_N * pb;

  //if (final_difval!=init_difval and final_difval>0)
  //std::cout << "Final constant        : " << final_constant * (final_difval - init_difval) << std::endl;
  //else 
  std::cout << "Final constant        : " << final_constant << std::endl;
*/
}
