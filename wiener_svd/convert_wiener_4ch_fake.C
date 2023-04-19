/*
  This is a revision of the original convert_wiener.C file in the Wire-Cell framework 
  It's meant to be used for the extraction of the differential cross section (in my case NCpi0 combined or 0p & Np)

  'int RW' is a numerical parameter passed to the script to determine whether or not the reweighting systematics should be included

  It works specifically for 4 reconstructed channels [FC0p, FCNp, PC0p, PCNp] (order must be kept in cov_input.txt)
  
  To run use: 
    root -l --web=off 'convert_wiener_4ch.C(0)'   (no reweighting)
*/
void convert_wiener_4ch_fake(int RW=0){


  gStyle->SetOptStat(0);
  
  TFile *file1 = new TFile("merge_xs.root");
  TMatrixD *mat_collapse = (TMatrixD*)file1->Get("mat_collapse"); // collapse
  TMatrixD *cov_mat_add = (TMatrixD*)file1->Get("cov_mat_add"); // additional uncertainties
  TVectorD *vec_signal = (TVectorD*)file1->Get("vec_signal"); // xs in pbar
  TMatrixD *mat_R = (TMatrixD*)file1->Get("mat_R"); // smearing matrix

  TH1F *hdata_obsch_1 = (TH1F*)file1->Get("hdata_obsch_1"); // BNB data FC 0p
  TH1F *hdata_obsch_2 = (TH1F*)file1->Get("hdata_obsch_2"); // BNB data FC Np
  TH1F *hdata_obsch_3 = (TH1F*)file1->Get("hdata_obsch_3"); // BNB data PC 0p
  TH1F *hdata_obsch_4 = (TH1F*)file1->Get("hdata_obsch_4"); // BNB data PC Np

  TH1F *hmc_obsch_1 = (TH1F*)file1->Get("hmc_obsch_1");   // Total pred FC 0p
  TH1F *hmc_obsch_2 = (TH1F*)file1->Get("hmc_obsch_2");   // Total pred FC Np
  TH1F *hmc_obsch_3 = (TH1F*)file1->Get("hmc_obsch_3");   // Total pred PC 0p
  TH1F *hmc_obsch_4 = (TH1F*)file1->Get("hmc_obsch_4");   // Total pred PC Np

  TH1F *histo_sig_1 = (TH1F*)file1->Get("histo_1"); // MC signal FC 0p
  TH1F *histo_sig_2 = (TH1F*)file1->Get("histo_2"); // MC signal FC Np
  TH1F *histo_sig_3 = (TH1F*)file1->Get("histo_3"); // MC signal PC 0p
  TH1F *histo_sig_4 = (TH1F*)file1->Get("histo_4"); // MC signal FC Np

  TH1F *histo_bkg_1 = (TH1F*)file1->Get("histo_5"); // MC bkg (dirt included) FC 0p
  TH1F *histo_bkg_2 = (TH1F*)file1->Get("histo_6"); // MC bkg (dirt included) FC Np
  TH1F *histo_bkg_3 = (TH1F*)file1->Get("histo_7"); // MC bkg (dirt included) PC 0p
  TH1F *histo_bkg_4 = (TH1F*)file1->Get("histo_8"); // MC bkg (dirt included) PC Np

  // Numbers for hist_ are given by the cov_sec in cov_input.txt
  // It's important to keep the given structure to make sure the subtractions from BNB measured events are approriate

  // Number of bins in reco space
  Int_t nbin_R = hdata_obsch_1->GetNbinsX() + 1 + hdata_obsch_2->GetNbinsX() + 1 + hdata_obsch_3->GetNbinsX() + 1 + hdata_obsch_4->GetNbinsX() + 1;

  // Number of bins in true space
  Int_t nbin_T = vec_signal->GetNoElements();

  TH1D *htrue_signal = new TH1D("htrue_signal","htrue_signal",nbin_T, 0.5, nbin_T+0.5);
  for(int i=0;i!=nbin_T;i++){
    htrue_signal->SetBinContent(i+1,(*vec_signal)(i));
  }

  // Export reco distributions for the new file 
  TH1D *hdata_bnb_N = new TH1D("hdata_bnb_N","hdata_bnb_N",nbin_R,0.5,nbin_R+0.5);
  TH1D *hsignal_N = new TH1D("hsignal_N","hsignal_N",nbin_R,0.5,nbin_R+0.5);
  TH1D *hbackground_N = new TH1D("hbackground_N","hbackground_N",nbin_R,0.5,nbin_R+0.5);
  for (Int_t i=0;i!=hdata_obsch_1->GetNbinsX()+1;i++){
    hdata_bnb_N->SetBinContent(i+1, hdata_obsch_1->GetBinContent(i+1) + hdata_obsch_2->GetBinContent(i+1) + hdata_obsch_3->GetBinContent(i+1) + hdata_obsch_4->GetBinContent(i+1));
    hsignal_N->SetBinContent(i+1, histo_sig_1->GetBinContent(i+1) + histo_sig_2->GetBinContent(i+1) + histo_sig_3->GetBinContent(i+1) + histo_sig_4->GetBinContent(i+1));
    hbackground_N->SetBinContent(i+1, histo_bkg_1->GetBinContent(i+1) + histo_bkg_2->GetBinContent(i+1) + histo_bkg_3->GetBinContent(i+1) + histo_bkg_4->GetBinContent(i+1));
  }

  // Cross section Numerator for data and prediction
  TH1D *hmeas = new TH1D("hmeas","hmeas",nbin_R,0.5, nbin_R+0.5);
  TH1D *hpred = new TH1D("hpred","hpred",nbin_R,0.5, nbin_R+0.5);
  for (Int_t i=0;i!=hdata_obsch_1->GetNbinsX()+1;i++){
    int A = i+1;
    int B = A + hdata_obsch_1->GetNbinsX() + 1;
    int C = B + hdata_obsch_2->GetNbinsX() + 1;
    int D = C + hdata_obsch_3->GetNbinsX() + 1;

    hmeas->SetBinContent(A, hdata_obsch_1->GetBinContent(i+1) - histo_bkg_1->GetBinContent(i+1)); //- histo_ext_1->GetBinContent(i+1));
    hmeas->SetBinContent(B, hdata_obsch_2->GetBinContent(i+1) - histo_bkg_2->GetBinContent(i+1)); //- histo_ext_2->GetBinContent(i+1));
    hmeas->SetBinContent(C, hdata_obsch_3->GetBinContent(i+1) - histo_bkg_3->GetBinContent(i+1)); //- histo_ext_3->GetBinContent(i+1));
    hmeas->SetBinContent(D, hdata_obsch_4->GetBinContent(i+1) - histo_bkg_4->GetBinContent(i+1)); //- histo_ext_4->GetBinContent(i+1));

    hpred->SetBinContent(A, hmc_obsch_1->GetBinContent(i+1));
    hpred->SetBinContent(B, hmc_obsch_2->GetBinContent(i+1));
    hpred->SetBinContent(C, hmc_obsch_3->GetBinContent(i+1));
    hpred->SetBinContent(D, hmc_obsch_4->GetBinContent(i+1));
  }
  

  // Create collapsed response matrix
  TMatrixD mat_collapse_T(mat_collapse->GetNcols(), mat_collapse->GetNrows()); 
  mat_collapse_T.Transpose(*mat_collapse);
  TMatrixD mat_R_collapse = (mat_collapse_T)*(*mat_R);

  TH2D* hR = new TH2D("hR","hR",nbin_R,0.5,nbin_R+0.5, nbin_T,0.5,nbin_T+0.5);
  for (Int_t i=0; i!=nbin_T; i++){
    for (Int_t j=0; j!=nbin_R; j++){
      hR->SetBinContent(j+1,i+1,mat_R_collapse(j,i));
    }
  }
  
  // Create cov matrix for:
  // MC statistical uncertainties 
  TH2D *hcov_mcstat = new TH2D("hcov_mcstat","hcov_mcstat",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  ifstream infile("mcstat/xs_tot.log");
  double temp, temp1, err2;
  infile >> temp >> temp;
  for (Int_t i=0;i!=nbin_R;i++){
    infile >> temp >> temp >> temp >> err2 >> temp;
    hcov_mcstat->SetBinContent(i+1,i+1,err2);
  }

  // Statistical uncertainties
  TH2D *hcov_stat = new TH2D("hcov_stat","hcov_stat",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  for (Int_t i=0;i!=hdata_obsch_1->GetNbinsX()+1;i++){
    double meas = hdata_obsch_1->GetBinContent(i+1);
    double pred = hmc_obsch_1->GetBinContent(i+1);
    double content;
    if (pred !=0){
        if (meas == 0) content = pred/2.;
        else content = 3./(1./meas+2./pred);
    }
    else content = 0;
    hcov_stat->SetBinContent(i+1,i+1,content);
  }
  for (Int_t i=0;i!=hdata_obsch_2->GetNbinsX()+1;i++){
    double meas = hdata_obsch_2->GetBinContent(i+1);
    double pred = hmc_obsch_2->GetBinContent(i+1);
    double content;
    if (pred !=0){
        if (meas == 0) content = pred/2.;
        else content = 3./(1./meas+2./pred);
    }
    else content = 0;
    hcov_stat->SetBinContent(hdata_obsch_1->GetNbinsX()+1+i+1,hdata_obsch_1->GetNbinsX()+1+i+1,content);
  }
  for (Int_t i=0;i!=hdata_obsch_3->GetNbinsX()+1;i++){
    double meas = hdata_obsch_3->GetBinContent(i+1);
    double pred = hmc_obsch_3->GetBinContent(i+1);
    double content;
    if (pred !=0){
      if (meas == 0){ content = pred/2.;
      }else{ content = 3./(1./meas+2./pred);
      }
    }else{ content = 0;
    }
    hcov_stat->SetBinContent(hdata_obsch_2->GetNbinsX()+1+hdata_obsch_1->GetNbinsX()+1+i+1,hdata_obsch_2->GetNbinsX()+1+hdata_obsch_1->GetNbinsX()+1+i+1,content);
  }
  for (Int_t i=0;i!=hdata_obsch_4->GetNbinsX()+1;i++){
    double meas = hdata_obsch_4->GetBinContent(i+1);
    double pred = hmc_obsch_4->GetBinContent(i+1);
    double content;
    if (pred !=0){
      if (meas == 0){ content = pred/2.;
      }else{ content = 3./(1./meas+2./pred);
      }
    }else{ content = 0;
    }
    hcov_stat->SetBinContent(hdata_obsch_3->GetNbinsX()+1+hdata_obsch_2->GetNbinsX()+1+hdata_obsch_1->GetNbinsX()+1+i+1,hdata_obsch_3->GetNbinsX()+1+hdata_obsch_2->GetNbinsX()+1+hdata_obsch_1->GetNbinsX()+1+i+1,content);
  }
  
  int nold = mat_collapse->GetNrows();
  std::cout << nold << std::endl;
  TVectorD vec_nominal(nold);
  int noffset = 0;
  for (Int_t i=0;i!=histo_sig_1->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_sig_1->GetBinContent(i+1);
  }
  noffset += histo_sig_1->GetNbinsX()+1;
  for (Int_t i=0;i!=histo_sig_2->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_sig_2->GetBinContent(i+1);
  }
  noffset += histo_sig_2->GetNbinsX()+1;
  for (Int_t i=0;i!=histo_sig_3->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_sig_3->GetBinContent(i+1);
  }
  noffset += histo_sig_3->GetNbinsX()+1;
  for (Int_t i=0;i!=histo_sig_4->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_sig_4->GetBinContent(i+1);
  }
  noffset += histo_sig_4->GetNbinsX()+1;
  for (Int_t i=0;i!=histo_bkg_1->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_bkg_1->GetBinContent(i+1);
  }
  noffset += histo_bkg_1->GetNbinsX()+1;
  for (Int_t i=0;i!=histo_bkg_2->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_bkg_2->GetBinContent(i+1);
  }
  noffset += histo_bkg_2->GetNbinsX()+1;
  for (Int_t i=0;i!=histo_bkg_3->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_bkg_3->GetBinContent(i+1);
  }
  noffset += histo_bkg_3->GetNbinsX()+1;
  for (Int_t i=0;i!=histo_bkg_4->GetNbinsX()+1;i++){ vec_nominal(noffset + i) = histo_bkg_4->GetBinContent(i+1);
  }


  // GEANT4 systematics 
  TH2D *hcov_geant4 = new TH2D("hcov_geant4","hcov_geant4",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
/*
  TMatrixD frac_geant4(nold,nold);
  for(Int_t i=14;i!=17;i++){
    TFile tmp_file(Form("./XsFlux/cov_%d.root",i));
    TMatrixD *tmp_matrix = (TMatrixD*)tmp_file.Get(Form("frac_cov_xf_mat_%d",i));
    frac_geant4 += *tmp_matrix;
  }
  for (Int_t i=0;i!=nold;i++){
    for (Int_t j=0;j!=nold;j++){
      frac_geant4(i,j) *= vec_nominal(i) * vec_nominal(j);
    }
  }
  TMatrixD mat_geant4 = mat_collapse_T * frac_geant4 * (*mat_collapse);
  for (Int_t i=0;i!=nbin_R;i++){
    for (Int_t j=0;j!=nbin_R;j++){
      hcov_geant4->SetBinContent(i+1,j+1,mat_geant4(i,j));
    }
  }
*/
  // GENIE systematics
  TH2D *hcov_genie = new TH2D("hcov_genie","hcov_genie",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  {
    TFile tmp_file("./XsFlux/cov_xs.root");   // cross section mode
    //TFile tmp_file("./XsFlux/cov_17.root"); // nominal 
    TMatrixD *frac_xs = (TMatrixD*)tmp_file.Get("frac_cov_xf_mat_17");
  
    for (Int_t i=0;i!=nold;i++){
      for (Int_t j=0;j!=nold;j++){
        (*frac_xs)(i,j) *= vec_nominal(i) * vec_nominal(j);
      }
    }
    TMatrixD mat_xs = mat_collapse_T * (*frac_xs) * (*mat_collapse);
    for (Int_t i=0;i!=nbin_R;i++){
      for (Int_t j=0;j!=nbin_R;j++){
        hcov_genie->SetBinContent(i+1,j+1,mat_xs(i,j));
      }
    }
  }

  vec_nominal.Draw();

  // Create Total covariance matrix
  TH2D *hcov_tot = new TH2D("hcov_tot","hcov_tot",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);               // All syst

  TH2D *hcov_add = new TH2D("hcov_add","hcov_add",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);               // NOT USED FOR FAKE DATA
  TH2D *hcov_det = new TH2D("hcov_det","hcov_det",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);               // NOT USED FOR FAKE DATA
  TH2D *hcov_flux = new TH2D("hcov_flux","hcov_flux",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);            // NOT USED FOR FAKE DATA
  TH2D *hcov_rw = new TH2D("hcov_rw","hcov_rw",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);                  // NOT USED FOR FAKE DATA
  TH2D *hcov_rw_cor = new TH2D("hcov_rw_cor","hcov_rw_cor",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);      // NOT USED FOR FAKE DATA
  TH2D *hcov_rw_tot = new TH2D("hcov_rw_tot","hcov_rw_tot",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);      // NOT USED FOR FAKE DATA
  
  // All syst
  hcov_tot->Add(hcov_stat);
  hcov_tot->Add(hcov_mcstat);
  //hcov_tot->Add(hcov_geant4); 
  hcov_tot->Add(hcov_genie);
  
  // Creates staked plots to visualize fractional uncertainties
  TH1F *h10 = new TH1F("h10","h10",nbin_R,0.5,nbin_R+0.5); // stat
  TH1F *h20 = new TH1F("h20","h10",nbin_R,0.5,nbin_R+0.5); // mcstat
  //TH1F *h59 = new TH1F("h59","h10",nbin_R,0.5,nbin_R+0.5); // geant4
  TH1F *h60 = new TH1F("h60","h10",nbin_R,0.5,nbin_R+0.5); // genie
  TH1F *h70 = new TH1F("h70","h10",nbin_R,0.5,nbin_R+0.5); // total
  
  for (Int_t i=0;i!=nbin_R;i++){
    if (hpred->GetBinContent(i+1)==0) continue;

    h10->SetBinContent(i+1,sqrt(hcov_stat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    h20->SetBinContent(i+1,sqrt(hcov_mcstat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    //h59->SetBinContent(i+1,sqrt(hcov_geant4->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    h60->SetBinContent(i+1,sqrt(hcov_genie->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    h70->SetBinContent(i+1,sqrt(hcov_tot->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
  }

  h70->Draw();
  h70->SetXTitle("Bin no");
  h70->SetTitle("Relative Uncertainties");
  h70->SetLineColor(1);
  h70->SetLineWidth(2);

  h10->Draw("same");  //stat
  h10->SetLineColor(9);
  h20->Draw("same");  // mcstat
  h20->SetLineColor(8);
  //h59->Draw("same"); // geant4
  //h59->SetLineColor(kBlue-7);
  h60->Draw("same"); // genie
  h60->SetLineColor(4);

  h10->SetLineWidth(2);
  h20->SetLineWidth(2);
  //h59->SetLineWidth(2);
  h60->SetLineWidth(2);

  h70->GetYaxis()->SetRangeUser(0,1.);

  TLegend *le1 = new TLegend(0.6,0.6,0.89,0.89);
  le1->AddEntry(h70,"Total","l");
  le1->AddEntry(h10,"Stat.","l");
  le1->AddEntry(h20,"MC stat.","l");
  //le1->AddEntry(h59,"Geant4","l");
  le1->AddEntry(h60,"Genie","l");
  le1->Draw();  

  TFile *file = new TFile("wiener.root","RECREATE");
  htrue_signal->SetDirectory(file);
  hmeas->SetDirectory(file);
  hpred->SetDirectory(file);
  hR->SetDirectory(file);

  hcov_stat->SetDirectory(file);
  hcov_mcstat->SetDirectory(file);
  hcov_add->SetDirectory(file);
  hcov_det->SetDirectory(file);
  hcov_flux->SetDirectory(file);
  //hcov_xs->SetDirectory(file);
  hcov_geant4->SetDirectory(file);
  hcov_genie->SetDirectory(file);
  hcov_rw->SetDirectory(file);
  hcov_rw_cor->SetDirectory(file);
  hcov_rw_tot->SetDirectory(file);
  hcov_tot->SetDirectory(file);
  file->Write();
  file->Close();
}