/*
  This is a revision of the original convert_wiener.C file in the Wire-Cell framework 
  It's meant to be used for the extraction of the differential cross section (in my case NCpi0 combined or 0p & Np)

  'int RW' is a numerical parameter passed to the script to determine whether or not the reweighting systematics should be included

  It works specifically for 4 reconstructed channels [FC0p, FCNp, PC0p, PCNp] (order must be kept in cov_input.txt)

  nbin_mom: 12 bins in reco space for momentum (overflow not considered)
  nbin_cos: 4 bins in reco space for costheta (overflow doesn't exist)
  
  To run use: 
    root -l --web=off 'convert_2D_wiener_4ch.C(1,12,4)'   (yes reweighting, nbin_mom, nbin_cos)
    root -l --web=off 'convert_2D_wiener_4ch.C(0,12,4)'   (no reweighting, nbin_mom, nbin_cos)
*/
void convert_2D_wiener_4ch_fake(int RW=1, int nbin_mom=12, int nbin_cos=4){
  gStyle->SetOptStat(0);
  
  TFile *file1 = new TFile("merge_xs.root");
  TMatrixD *mat_collapse = (TMatrixD*)file1->Get("mat_collapse"); // collapse
  TMatrixD *cov_mat_add = (TMatrixD*)file1->Get("cov_mat_add"); // additional uncertainties
  TVectorD *vec_signal = (TVectorD*)file1->Get("vec_signal"); // xs in pbar
  TMatrixD *mat_R = (TMatrixD*)file1->Get("mat_R"); // smearing matrix

  //std::cout << "mat_R      row,col    = " << mat_R->GetNrows() << ", " << mat_R->GetNcols() << std::endl;       //(6 x n_E_reco x n_theta_reco) x (n_E_true x n_theta_true)
  //std::cout << "collapse   row,col    = " << mat_collapse->GetNrows() << ", " << mat_collapse->GetNcols() << std::endl;   //(6 x n_E_reco x n_theta_reco) x (2 x n_E_reco x n_theta_reco)
  //std::cout << "additional row,col    = " << cov_mat_add->GetNrows() << ", " << cov_mat_add->GetNcols() << std::endl;     //(6 x n_E_reco x n_theta_reco) x (6 x n_E_reco x n_theta_reco)
  //std::cout << "signal vec row        = " << vec_signal->GetNrows() << std::endl;             //n_E_true x n_theta_true

  // Number of bins in reco space (momentum)
  Int_t nbin_momR = mat_R->GetNrows()/nbin_cos/3/4;  // Keep in mind: nbin_mom(+1 overflow) * nbin_cos(no overflow) * (sig,bkg,ext) * (FC0p,FCNp,PC0p,PCNp)
  std::cout << "nbin_mom (from matrix) = " << nbin_momR << " nbin_mom (no overflow) = " << nbin_mom << std::endl;
  nbin_mom = nbin_momR; // use bins with overflow
  
  Int_t nbin_histo = nbin_mom*nbin_cos; // 13 x 4 
  std::cout << "nbin_histo = " << nbin_histo << std::endl;

  // Numbers for hist_ are given by the cov_sec in cov_input.txt
  // It's important to keep the given structure to make sure the subtractions from BNB measured events are approriate
  TH1F *hdata_obsch_1 = new TH1F("hdata_obsch_1_merge", "hdata_obsch_1_merge", nbin_histo, 0, nbin_histo);   // BNB data FC 0p
  TH1F *hdata_obsch_2 = new TH1F("hdata_obsch_2_merge", "hdata_obsch_2_merge", nbin_histo, 0, nbin_histo);   // BNB data FC Np
  TH1F *hdata_obsch_3 = new TH1F("hdata_obsch_3_merge", "hdata_obsch_3_merge", nbin_histo, 0, nbin_histo);   // BNB data PC 0p
  TH1F *hdata_obsch_4 = new TH1F("hdata_obsch_4_merge", "hdata_obsch_4_merge", nbin_histo, 0, nbin_histo);   // BNB data PC Np

  TH1F *hmc_obsch_1 = new TH1F("hmc_obsch_1_merge", "hmc_obsch_1_merge", nbin_histo, 0, nbin_histo);     // Total pred FC 0p
  TH1F *hmc_obsch_2 = new TH1F("hmc_obsch_2_merge", "hmc_obsch_2_merge", nbin_histo, 0, nbin_histo);     // Total pred FC Np
  TH1F *hmc_obsch_3 = new TH1F("hmc_obsch_3_merge", "hmc_obsch_3_merge", nbin_histo, 0, nbin_histo);     // Total pred PC 0p
  TH1F *hmc_obsch_4 = new TH1F("hmc_obsch_4_merge", "hmc_obsch_4_merge", nbin_histo, 0, nbin_histo);     // Total pred PC Np

  TH1F *histo_sig_1 = new TH1F("histo_sig_1_merge", "histo_sig_1_merge", nbin_histo, 0, nbin_histo);     // MC signal FC 0p
  TH1F *histo_sig_2 = new TH1F("histo_sig_2_merge", "histo_sig_2_merge", nbin_histo, 0, nbin_histo);     // MC signal FC Np
  TH1F *histo_sig_3 = new TH1F("histo_sig_3_merge", "histo_sig_3_merge", nbin_histo, 0, nbin_histo);     // MC signal PC 0p
  TH1F *histo_sig_4 = new TH1F("histo_sig_4_merge", "histo_sig_4_merge", nbin_histo, 0, nbin_histo);     // MC signal FC Np

  TH1F *histo_bkg_1 = new TH1F("histo_bkg_1_merge", "histo_bkg_1_merge", nbin_histo, 0, nbin_histo);     // MC bkg (dirt included) FC 0p
  TH1F *histo_bkg_2 = new TH1F("histo_bkg_2_merge", "histo_bkg_2_merge", nbin_histo, 0, nbin_histo);     // MC bkg (dirt included) FC Np
  TH1F *histo_bkg_3 = new TH1F("histo_bkg_3_merge", "histo_bkg_3_merge", nbin_histo, 0, nbin_histo);     // MC bkg (dirt included) PC 0p
  TH1F *histo_bkg_4 = new TH1F("histo_bkg_4_merge", "histo_bkg_4_merge", nbin_histo, 0, nbin_histo);     // MC bkg (dirt included) PC Np

  //TH1F *histo_ext_1 = new TH1F("histo_ext_1_merge", "histo_ext_1_merge", nbin_histo, 0, nbin_histo);     // EXT FC 0p
  //TH1F *histo_ext_2 = new TH1F("histo_ext_2_merge", "histo_ext_2_merge", nbin_histo, 0, nbin_histo);     // EXT FC Np
  //TH1F *histo_ext_3 = new TH1F("histo_ext_3_merge", "histo_ext_3_merge", nbin_histo, 0, nbin_histo);     // EXT PC 0p
  //TH1F *histo_ext_4 = new TH1F("histo_ext_4_merge", "histo_ext_4_merge", nbin_histo, 0, nbin_histo);     // EXT PC Np

  for (int i=0;i<nbin_cos;i++) {
    int FC0p_index = i + 1 + 0*nbin_cos; // for i==0,1,2,3 --> 1  2  3  4   // changes with the number of costheta slices
    int FCNp_index = i + 1 + 1*nbin_cos; // for i==0,1,2,3 --> 5  6  7  8
    int PC0p_index = i + 1 + 2*nbin_cos; // for i==0,1,2,3 --> 9  10 11 12
    int PCNp_index = i + 1 + 3*nbin_cos; // for i==0,1,2,3 --> 13 14 15 16
    std::string FC0p_data_str = "hdata_obsch_" + std::to_string(FC0p_index); 
    std::string FCNp_data_str = "hdata_obsch_" + std::to_string(FCNp_index); 
    std::string PC0p_data_str = "hdata_obsch_" + std::to_string(PC0p_index); 
    std::string PCNp_data_str = "hdata_obsch_" + std::to_string(PCNp_index); 

    std::string FC0p_mc_str   = "hmc_obsch_" + std::to_string(FC0p_index);
    std::string FCNp_mc_str   = "hmc_obsch_" + std::to_string(FCNp_index);
    std::string PC0p_mc_str   = "hmc_obsch_" + std::to_string(PC0p_index);
    std::string PCNp_mc_str   = "hmc_obsch_" + std::to_string(PCNp_index);

    // Interpret histograms generated in previous step (4 thetas, 3 types, 4 channels)
    // 0,1,2 are counters for [sig, bkg, ext]
    // 4 is the number of channels [FC0p, FCNp, PC0p, PCNp]
    std::string histo_str_1 = "histo_" + std::to_string(FC0p_index + 0*4*nbin_cos);  // for i==0,1,2,3 --> 1  2  3  4   // changes with the number of costheta slices
    std::string histo_str_2 = "histo_" + std::to_string(FCNp_index + 0*4*nbin_cos);  // for i==0,1,2,3 --> 5  6  7  8 
    std::string histo_str_3 = "histo_" + std::to_string(PC0p_index + 0*4*nbin_cos);  // for i==0,1,2,3 --> 9  10 11 12
    std::string histo_str_4 = "histo_" + std::to_string(PCNp_index + 0*4*nbin_cos);  // for i==0,1,2,3 --> 13 14 15 16

    std::string histo_str_5 = "histo_" + std::to_string(FC0p_index + 1*4*nbin_cos);  // for i==0,1,2,3 --> 17 18 19 20  // changes with the number of costheta slices
    std::string histo_str_6 = "histo_" + std::to_string(FCNp_index + 1*4*nbin_cos);  // for i==0,1,2,3 --> 21 22 23 24
    std::string histo_str_7 = "histo_" + std::to_string(PC0p_index + 1*4*nbin_cos);  // for i==0,1,2,3 --> 25 26 27 28
    std::string histo_str_8 = "histo_" + std::to_string(PCNp_index + 1*4*nbin_cos);  // for i==0,1,2,3 --> 29 30 31 32

    std::string histo_str_9  = "histo_" + std::to_string(FC0p_index + 2*4*nbin_cos); // for i==0,1,2,3 --> 33 34 35 36  // changes with the number of costheta slices
    std::string histo_str_10 = "histo_" + std::to_string(FCNp_index + 2*4*nbin_cos); // for i==0,1,2,3 --> 37 38 39 40
    std::string histo_str_11 = "histo_" + std::to_string(PC0p_index + 2*4*nbin_cos); // for i==0,1,2,3 --> 41 42 43 44
    std::string histo_str_12 = "histo_" + std::to_string(PCNp_index + 2*4*nbin_cos); // for i==0,1,2,3 --> 45 46 47 48

    TH1F *hdata_obsch_1_tmp = (TH1F*)file1->Get(FC0p_data_str.c_str()); // BNB data FC 0p
    TH1F *hdata_obsch_2_tmp = (TH1F*)file1->Get(FCNp_data_str.c_str()); // BNB data FC Np
    TH1F *hdata_obsch_3_tmp = (TH1F*)file1->Get(PC0p_data_str.c_str()); // BNB data PC 0p
    TH1F *hdata_obsch_4_tmp = (TH1F*)file1->Get(PCNp_data_str.c_str()); // BNB data PC Np

    TH1F *hmc_obsch_1_tmp   = (TH1F*)file1->Get(FC0p_mc_str.c_str());   // Total pred FC 0p
    TH1F *hmc_obsch_2_tmp   = (TH1F*)file1->Get(FCNp_mc_str.c_str());   // Total pred FC Np
    TH1F *hmc_obsch_3_tmp   = (TH1F*)file1->Get(PC0p_mc_str.c_str());   // Total pred PC 0p
    TH1F *hmc_obsch_4_tmp   = (TH1F*)file1->Get(PCNp_mc_str.c_str());   // Total pred PC Np
    
    TH1F *histo_1_tmp       = (TH1F*)file1->Get(histo_str_1.c_str());   // MC signal FC 0p
    TH1F *histo_2_tmp       = (TH1F*)file1->Get(histo_str_2.c_str());   // MC signal FC Np
    TH1F *histo_3_tmp       = (TH1F*)file1->Get(histo_str_3.c_str());   // MC signal PC 0p
    TH1F *histo_4_tmp       = (TH1F*)file1->Get(histo_str_4.c_str());   // MC signal FC Np
    TH1F *histo_5_tmp       = (TH1F*)file1->Get(histo_str_5.c_str());   // MC bkg (dirt included) FC 0p
    TH1F *histo_6_tmp       = (TH1F*)file1->Get(histo_str_6.c_str());   // MC bkg (dirt included) FC Np
    TH1F *histo_7_tmp       = (TH1F*)file1->Get(histo_str_7.c_str());   // MC bkg (dirt included) PC 0p
    TH1F *histo_8_tmp       = (TH1F*)file1->Get(histo_str_8.c_str());   // MC bkg (dirt included) PC Np
    //TH1F *histo_9_tmp       = (TH1F*)file1->Get(histo_str_9.c_str());   // EXT FC 0p
    //TH1F *histo_10_tmp      = (TH1F*)file1->Get(histo_str_10.c_str());  // EXT FC Np
    //TH1F *histo_11_tmp      = (TH1F*)file1->Get(histo_str_11.c_str());  // EXT PC 0p
    //TH1F *histo_12_tmp      = (TH1F*)file1->Get(histo_str_12.c_str());  // EXT PC Np

    for (int j=0;j<nbin_mom;j++) {
      int index = i*nbin_mom+j+1;
      hdata_obsch_1->SetBinContent(index, hdata_obsch_1_tmp->GetBinContent(j+1)); // BNB data FC 0p
      hdata_obsch_2->SetBinContent(index, hdata_obsch_2_tmp->GetBinContent(j+1)); // BNB data FC Np
      hdata_obsch_3->SetBinContent(index, hdata_obsch_3_tmp->GetBinContent(j+1)); // BNB data PC 0p
      hdata_obsch_4->SetBinContent(index, hdata_obsch_4_tmp->GetBinContent(j+1)); // BNB data PC Np
      hmc_obsch_1->SetBinContent(index, hmc_obsch_1_tmp->GetBinContent(j+1));     // Total pred FC 0p
      hmc_obsch_2->SetBinContent(index, hmc_obsch_2_tmp->GetBinContent(j+1));     // Total pred FC Np
      hmc_obsch_3->SetBinContent(index, hmc_obsch_3_tmp->GetBinContent(j+1));     // Total pred PC 0p
      hmc_obsch_4->SetBinContent(index, hmc_obsch_4_tmp->GetBinContent(j+1));     // Total pred PC Np
      histo_sig_1->SetBinContent(index, histo_1_tmp->GetBinContent(j+1));         // MC signal FC 0p
      histo_sig_2->SetBinContent(index, histo_2_tmp->GetBinContent(j+1));         // MC signal FC Np
      histo_sig_3->SetBinContent(index, histo_3_tmp->GetBinContent(j+1));         // MC signal PC 0p
      histo_sig_4->SetBinContent(index, histo_4_tmp->GetBinContent(j+1));         // MC signal FC Np
      histo_bkg_1->SetBinContent(index, histo_5_tmp->GetBinContent(j+1));         // MC bkg (dirt included) FC 0p
      histo_bkg_2->SetBinContent(index, histo_6_tmp->GetBinContent(j+1));         // MC bkg (dirt included) FC Np
      histo_bkg_3->SetBinContent(index, histo_7_tmp->GetBinContent(j+1));         // MC bkg (dirt included) PC 0p
      histo_bkg_4->SetBinContent(index, histo_8_tmp->GetBinContent(j+1));         // MC bkg (dirt included) PC Np
      //histo_ext_1->SetBinContent(index, histo_9_tmp->GetBinContent(j+1));         // EXT FC 0p
      //histo_ext_2->SetBinContent(index, histo_10_tmp->GetBinContent(j+1));        // EXT FC Np
      //histo_ext_3->SetBinContent(index, histo_11_tmp->GetBinContent(j+1));        // EXT PC 0p
      //histo_ext_4->SetBinContent(index, histo_12_tmp->GetBinContent(j+1));        // EXT PC Np
      std::cout << "index, j+1 = " << index << ",  " << (j+1) << std::endl;
    }
  }

  std::cout << "hdata_obsch_1(bins) = " << hdata_obsch_1->GetNbinsX() << " (supposed to be (nbin_mom * nbin_cos)" << std::endl;
  // Number of bins in reco space
  //Int_t nbin_R = hdata_obsch_1->GetNbinsX() + 1 + hdata_obsch_2->GetNbinsX() + 1 + hdata_obsch_3->GetNbinsX() + 1 + hdata_obsch_4->GetNbinsX() + 1;
  // This method should include the overflow bins already
  Int_t nbin_R = hdata_obsch_1->GetNbinsX() + hdata_obsch_2->GetNbinsX() + hdata_obsch_3->GetNbinsX() + hdata_obsch_4->GetNbinsX();
  std::cout << "nbin_R = " << nbin_R << " [nbin_cos * 4 ch * nbin_mom]" << std::endl;

  // Number of bins in true space
  Int_t nbin_T = vec_signal->GetNoElements();

  TH1D *htrue_signal = new TH1D("htrue_signal","htrue_signal",nbin_T, 0.5, nbin_T+0.5);
  for(int i=0;i!=nbin_T;i++){
    htrue_signal->SetBinContent(i+1,(*vec_signal)(i));
  }

  // Cross section Numerator for data and prediction
  TH1D *hmeas = new TH1D("hmeas","hmeas",nbin_R,0.5, nbin_R+0.5);
  TH1D *hpred = new TH1D("hpred","hpred",nbin_R,0.5, nbin_R+0.5);
  /*
  for (int i=0;i<nbin_cos;i++) {
    for (int j=0;j<nbin_mom;j++) {
      int index = i*nbin_mom + j + 1;
      int FC0p_index = j+1+ i*4*nbin_mom;           //FC0p  1  2  3  4  5   21 22 23 24 25  41 42 43 44 45  ...
      int FCNp_index = FC0p_index + nbin_mom;       //FCNp  6  7  8  9  10  26 27 28 29 30  46 47 48 49 50  ...
      int PC0p_index = FCNp_index + nbin_mom;       //PC0p  11 12 13 14 15  31 32 33 34 35  51 52 53 54 55  ...
      int PCNp_index = PC0p_index + nbin_mom;       //PCNp  16 17 18 19 20  36 37 38 39 40  56 57 58 59 60  ...

      hmeas->SetBinContent(FC0p_index, hdata_obsch_1->GetBinContent(index) - histo_bkg_1->GetBinContent(index) - histo_ext_1->GetBinContent(index));
      hmeas->SetBinContent(FCNp_index, hdata_obsch_2->GetBinContent(index) - histo_bkg_2->GetBinContent(index) - histo_ext_2->GetBinContent(index));
      hmeas->SetBinContent(PC0p_index, hdata_obsch_3->GetBinContent(index) - histo_bkg_3->GetBinContent(index) - histo_ext_3->GetBinContent(index));
      hmeas->SetBinContent(PCNp_index, hdata_obsch_4->GetBinContent(index) - histo_bkg_4->GetBinContent(index) - histo_ext_4->GetBinContent(index));

      hpred->SetBinContent(FC0p_index, hmc_obsch_1->GetBinContent(index));
      hpred->SetBinContent(FCNp_index, hmc_obsch_2->GetBinContent(index));
      hpred->SetBinContent(PC0p_index, hmc_obsch_3->GetBinContent(index));
      hpred->SetBinContent(PCNp_index, hmc_obsch_4->GetBinContent(index));
    }
  }
  */
  for (Int_t i=0;i!=hdata_obsch_1->GetNbinsX()+1;i++){
    int A = i+1;
    int B = A + hdata_obsch_1->GetNbinsX();
    int C = B + hdata_obsch_2->GetNbinsX();
    int D = C + hdata_obsch_3->GetNbinsX();

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
  /*
  for (int i=0;i<nbin_cos;i++) {
    for (int j=0;j<nbin_mom;j++) {
      int index = i*nbin_mom+ j+1;
      int FC0p_index = j+1+ i*4*nbin_mom;           //FC0p  1  2  3  4  5   21 22 23 24 25  41 42 43 44 45  ...
      int FCNp_index = FC0p_index + nbin_mom;       //FCNp  6  7  8  9  10  26 27 28 29 30  46 47 48 49 50  ...
      int PC0p_index = FCNp_index + nbin_mom;       //PC0p  11 12 13 14 15  31 32 33 34 35  51 52 53 54 55  ...
      int PCNp_index = PC0p_index + nbin_mom;       //PCNp  16 17 18 19 20  36 37 38 39 40  56 57 58 59 60  ...

      double meas = hdata_obsch_1->GetBinContent(index);
      double pred = hmc_obsch_1->GetBinContent(index);
      double content;
      if (pred !=0){
          if (meas == 0) content = pred/2.;
          else content = 3./(1./meas+2./pred);
      }
      else content = 0;
      hcov_stat->SetBinContent(FC0p_index,FC0p_index,content);

      meas = hdata_obsch_2->GetBinContent(index);
      pred = hmc_obsch_2->GetBinContent(index);
      if (pred !=0){
          if (meas == 0) content = pred/2.;
          else content = 3./(1./meas+2./pred);
      }
      else content = 0;
      hcov_stat->SetBinContent(FCNp_index,FCNp_index,content);

      meas = hdata_obsch_3->GetBinContent(index);
      pred = hmc_obsch_3->GetBinContent(index);
      if (pred !=0){
          if (meas == 0) content = pred/2.;
          else content = 3./(1./meas+2./pred);
      }
      else content = 0;
      hcov_stat->SetBinContent(PC0p_index,PC0p_index,content);

      meas = hdata_obsch_4->GetBinContent(index);
      pred = hmc_obsch_4->GetBinContent(index);
      if (pred !=0){
          if (meas == 0) content = pred/2.;
          else content = 3./(1./meas+2./pred);
      }
      else content = 0;
      hcov_stat->SetBinContent(PCNp_index,PCNp_index,content);
    }
  }
  */
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
    hcov_stat->SetBinContent(hdata_obsch_1->GetNbinsX()+i+1,hdata_obsch_1->GetNbinsX()+i+1,content);
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
    hcov_stat->SetBinContent(hdata_obsch_2->GetNbinsX()+hdata_obsch_1->GetNbinsX()+i+1,hdata_obsch_2->GetNbinsX()+hdata_obsch_1->GetNbinsX()+i+1,content);
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
    hcov_stat->SetBinContent(hdata_obsch_3->GetNbinsX()+hdata_obsch_2->GetNbinsX()+hdata_obsch_1->GetNbinsX()+i+1,hdata_obsch_3->GetNbinsX()+hdata_obsch_2->GetNbinsX()+hdata_obsch_1->GetNbinsX()+i+1,content);
  }


  // Detector systematics
  TH2D *hcov_det = new TH2D("hcov_det","hcov_det",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  int nold = mat_collapse->GetNrows();
  std::cout << "nbin_collapse = " << nold << std::endl;
  TVectorD vec_nominal(nold);

  for (int i=0;i<nbin_cos;i++) {
    for (int j=0;j<nbin_mom;j++) {
      int index0 = i*nbin_mom + j;    // Used for histograms  
      int index1 = index0 + nbin_mom*nbin_cos*0;
      int index2 = index0 + nbin_mom*nbin_cos*1;
      int index3 = index0 + nbin_mom*nbin_cos*2;
      int index4 = index0 + nbin_mom*nbin_cos*3;
      int index5 = index0 + nbin_mom*nbin_cos*4;
      int index6 = index0 + nbin_mom*nbin_cos*5;
      int index7 = index0 + nbin_mom*nbin_cos*6;
      int index8 = index0 + nbin_mom*nbin_cos*7;
      //int index9 = index0 + nbin_mom*nbin_cos*8;
      //int index10 = index0 + nbin_mom*nbin_cos*9;
      //int index11 = index0 + nbin_mom*nbin_cos*10;
      //int index12 = index0 + nbin_mom*nbin_cos*11;
      /*
      int indexj = i*4*nbin_mom + j;  // Used for collapse matrix
      int index1 = indexj + nbin_mom*0; // sig FC0p 0  - 12 --> 52 --> 104 --> 156
      int index2 = indexj + nbin_mom*1; // sig FCNp 13 - 25
      int index3 = indexj + nbin_mom*2; // sig PC0p 26 - 38
      int index4 = indexj + nbin_mom*3; // sig PCNp 39 - 51
      indexj = 4*4*nbin_mom + indexj;
      int index5 = indexj + nbin_mom*0; // bkg FC0p 208 - 220 --> 260 --> 312 --> 364
      int index6 = indexj + nbin_mom*1; // bkg FCNp
      int index7 = indexj + nbin_mom*2; // bkg PC0p
      int index8 = indexj + nbin_mom*3; // bkg PCNp
      indexj = 4*4*nbin_mom + indexj;
      int index9 = indexj + nbin_mom*0;   // ext FC0p 416
      int index10 = indexj + nbin_mom*1;  // ext FCNp
      int index11 = indexj + nbin_mom*2;  // ext PC0p
      int index12 = indexj + nbin_mom*3;  // ext PCNp

      int indexj = i*12*nbin_mom + j;       
      int index1 = indexj + 0*nbin_mom;     // 0
      int index2 = indexj + 1*nbin_mom;     // 13
      int index3 = indexj + 2*nbin_mom;     // 26
      int index4 = indexj + 3*nbin_mom;     // 39
      int index5 = indexj + 4*nbin_mom;
      int index6 = indexj + 5*nbin_mom;
      int index7 = indexj + 6*nbin_mom;
      int index8 = indexj + 7*nbin_mom;
      int index9 = indexj + 8*nbin_mom;
      int index10 = indexj + 9*nbin_mom;
      int index11 = indexj + 10*nbin_mom;
      int index12 = indexj + 11*nbin_mom;
      */

      std::cout << "nbin_cos (i) = " << i << " nbin_mom (j) = " << j << std::endl;
      std::cout << "Indexes = " << index1 << " " << index2 << " " << index3 << " " << index4 << " " << index5 << " " << index6 << " " << index7 << " " << index8 << std::endl; //" " << index9 << " " << index10 << " " << index11 << " " << index12 << std::endl;

      vec_nominal(index1) = histo_sig_1->GetBinContent(index0+1);
      vec_nominal(index2) = histo_sig_2->GetBinContent(index0+1);
      vec_nominal(index3) = histo_sig_3->GetBinContent(index0+1);
      vec_nominal(index4) = histo_sig_4->GetBinContent(index0+1);
      vec_nominal(index5) = histo_bkg_1->GetBinContent(index0+1);
      vec_nominal(index6) = histo_bkg_2->GetBinContent(index0+1);
      vec_nominal(index7) = histo_bkg_3->GetBinContent(index0+1);
      vec_nominal(index8) = histo_bkg_4->GetBinContent(index0+1);
      //vec_nominal(index9) = histo_ext_1->GetBinContent(index0+1);
      //vec_nominal(index10) = histo_ext_2->GetBinContent(index0+1);
      //vec_nominal(index11) = histo_ext_3->GetBinContent(index0+1);
      //vec_nominal(index12) = histo_ext_4->GetBinContent(index0+1);
    }
  }

  std::map<int, TString> map_det_str;
  map_det_str[1] = "./DetVar/cov_LYDown.root";
  map_det_str[2] = "./DetVar/cov_LYRayleigh.root";
  map_det_str[3] = "./DetVar/cov_Recomb2.root";
  map_det_str[4] = "./DetVar/cov_SCE.root";
  // map_det_str[5] = "./DetVar/cov_WMdEdx.root";
  map_det_str[6] = "./DetVar/cov_WMThetaXZ.root";
  map_det_str[7] = "./DetVar/cov_WMThetaYZ.root";
  map_det_str[8] = "./DetVar/cov_WMX.root";
  map_det_str[9] = "./DetVar/cov_WMYZ.root";
  map_det_str[10] = "./DetVar/cov_LYatt.root";
  TMatrixD frac_det(nold,nold);
  for (auto it = map_det_str.begin(); it!=map_det_str.end(); it++){
    int idx = it->first;
    TFile tmp_file(it->second);
    TMatrixD *tmp_matrix = (TMatrixD*)tmp_file.Get(Form("frac_cov_det_mat_%d",idx));
    frac_det += (*tmp_matrix);
  }

  for (Int_t i=0;i!=nold;i++){
    for (Int_t j=0;j!=nold;j++){
      frac_det(i,j) *= vec_nominal(i) * vec_nominal(j);
    }
  }
  TMatrixD mat_det = mat_collapse_T * frac_det * (*mat_collapse);
  for (Int_t i=0;i!=nbin_R;i++){
    for (Int_t j=0;j!=nbin_R;j++){
      hcov_det->SetBinContent(i+1,j+1,mat_det(i,j));
    }
  }
  /*
  // Flux systematics
  TH2D *hcov_flux = new TH2D("hcov_flux","hcov_flux",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  TMatrixD frac_flux(nold,nold);
  for(Int_t i=1;i!=17;i++){
    TFile tmp_file(Form("./XsFlux/cov_%d.root",i));
    TMatrixD *tmp_matrix = (TMatrixD*)tmp_file.Get(Form("frac_cov_xf_mat_%d",i));
    frac_flux += *tmp_matrix;
  }
  for (Int_t i=0;i!=nold;i++){
    for (Int_t j=0;j!=nold;j++){
      frac_flux(i,j) *= vec_nominal(i) * vec_nominal(j);
    }
  }
  TMatrixD mat_flux = mat_collapse_T * frac_flux * (*mat_collapse);
  for (Int_t i=0;i!=nbin_R;i++){
    for (Int_t j=0;j!=nbin_R;j++){
      hcov_flux->SetBinContent(i+1,j+1,mat_flux(i,j));
    }
  }

  // Xs systematics
  TH2D *hcov_xs = new TH2D("hcov_xs","hcov_xs",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
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
        hcov_xs->SetBinContent(i+1,j+1,mat_xs(i,j));
      }
    }
  }
  */
  // Flux systematics
  TH2D *hcov_flux = new TH2D("hcov_flux","hcov_flux",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  TMatrixD frac_flux(nold,nold);
  for(Int_t i=1;i!=14;i++){
    TFile tmp_file(Form("./XsFlux/cov_%d.root",i));
    TMatrixD *tmp_matrix = (TMatrixD*)tmp_file.Get(Form("frac_cov_xf_mat_%d",i));
    frac_flux += *tmp_matrix;
  }
  for (Int_t i=0;i!=nold;i++){
    for (Int_t j=0;j!=nold;j++){
      frac_flux(i,j) *= vec_nominal(i) * vec_nominal(j);
    }
  }
  TMatrixD mat_flux = mat_collapse_T * frac_flux * (*mat_collapse);
  for (Int_t i=0;i!=nbin_R;i++){
    for (Int_t j=0;j!=nbin_R;j++){
      hcov_flux->SetBinContent(i+1,j+1,mat_flux(i,j));
    }
  }
  // GEANT4 systematics
  TH2D *hcov_geant4 = new TH2D("hcov_geant4","hcov_geant4",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
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

  // Additional systematic uncertainty (only applied to dirt for now)
  TH2D *hcov_add = new TH2D("hcov_add","hcov_add",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  TMatrixD mat_add = mat_collapse_T * (*cov_mat_add) * (*mat_collapse);
  for (Int_t i=0;i!=nbin_R;i++){
    hcov_add->SetBinContent(i+1,i+1,mat_add(i,i));
  }

  // RW uncor sys
  TH2D *hcov_rw = new TH2D("hcov_rw","hcov_rw",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  {
    if(RW==1){
      TFile tmp_file("./XsFlux/cov_rw.root");   // cross section mode
      TMatrixD *frac_rw = (TMatrixD*)tmp_file.Get("frac_cov_xf_mat_18");

      for (Int_t i=0;i!=nold;i++){
        for (Int_t j=0;j!=nold;j++){
          (*frac_rw)(i,j) *= vec_nominal(i) * vec_nominal(j);
        }
      }
      TMatrixD mat_rw = mat_collapse_T * (*frac_rw) * (*mat_collapse);
      for (Int_t i=0;i!=nbin_R;i++){
        for (Int_t j=0;j!=nbin_R;j++){
          hcov_rw->SetBinContent(i+1,j+1,mat_rw(i,j));
        }
      }
    }
  } 

  // RW cor sys
  TH2D *hcov_rw_cor = new TH2D("hcov_rw_cor","hcov_rw_cor",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  // RW cor tot
  TH2D *hcov_rw_tot = new TH2D("hcov_rw_tot","hcov_rw_tot",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);
  {
    if(RW==1){
      TFile tmp_file("./XsFlux/cov_rw_cor.root");   // cross section mode
      TMatrixD *frac_rw_cor = (TMatrixD*)tmp_file.Get("frac_cov_xf_mat_19");

      for (Int_t i=0;i!=nold;i++){
        for (Int_t j=0;j!=nold;j++){
          (*frac_rw_cor)(i,j) *= vec_nominal(i) * vec_nominal(j);
        }
      }
      TMatrixD mat_rw_cor = mat_collapse_T * (*frac_rw_cor) * (*mat_collapse);
      for (Int_t i=0;i!=nbin_R;i++){
        for (Int_t j=0;j!=nbin_R;j++){
          hcov_rw_cor->SetBinContent(i+1,j+1,mat_rw_cor(i,j));
        }
      }
      hcov_rw_tot->Add(hcov_rw);
      hcov_rw_tot->Add(hcov_rw_cor);
    }
  } 

  vec_nominal.Draw();

  // Create Total covariance matrix
  TH2D *hcov_tot = new TH2D("hcov_tot","hcov_tot",nbin_R,0.5,nbin_R+0.5,nbin_R,0.5,nbin_R+0.5);

  hcov_tot->Add(hcov_stat);
  hcov_tot->Add(hcov_mcstat);
  hcov_tot->Add(hcov_add);
  hcov_tot->Add(hcov_flux);
  //hcov_tot->Add(hcov_xs);
  hcov_tot->Add(hcov_geant4);
  hcov_tot->Add(hcov_genie);
  hcov_tot->Add(hcov_det);
  if(RW==1) hcov_tot->Add(hcov_rw);
  if(RW==1) hcov_tot->Add(hcov_rw_cor);

  // Creates staked plots to visualize fractional uncertainties
  TH1F *h10 = new TH1F("h10","h10",nbin_R,0.5,nbin_R+0.5); // stat
  TH1F *h20 = new TH1F("h20","h10",nbin_R,0.5,nbin_R+0.5); // mcstat
  TH1F *h30 = new TH1F("h30","h10",nbin_R,0.5,nbin_R+0.5); // add
  TH1F *h40 = new TH1F("h40","h10",nbin_R,0.5,nbin_R+0.5); // flux
  TH1F *h50 = new TH1F("h50","h10",nbin_R,0.5,nbin_R+0.5); // det
  //TH1F *h60 = new TH1F("h60","h10",nbin_R,0.5,nbin_R+0.5); // xs
  TH1F *h59 = new TH1F("h59","h10",nbin_R,0.5,nbin_R+0.5); // geant4
  TH1F *h60 = new TH1F("h60","h10",nbin_R,0.5,nbin_R+0.5); // genie
  TH1F *h61 = new TH1F("h61","h10",nbin_R,0.5,nbin_R+0.5); // rw
  TH1F *h62 = new TH1F("h62","h10",nbin_R,0.5,nbin_R+0.5); // rw_cor
  TH1F *h70 = new TH1F("h70","h10",nbin_R,0.5,nbin_R+0.5); // total
  
  for (Int_t i=0;i!=nbin_R;i++){
    if (hpred->GetBinContent(i+1)==0) continue;

    h10->SetBinContent(i+1,sqrt(hcov_stat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    h20->SetBinContent(i+1,sqrt(hcov_mcstat->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    h30->SetBinContent(i+1,sqrt(hcov_add->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    h40->SetBinContent(i+1,sqrt(hcov_flux->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    h50->SetBinContent(i+1,sqrt(hcov_det->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    //h60->SetBinContent(i+1,sqrt(hcov_xs->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    h59->SetBinContent(i+1,sqrt(hcov_geant4->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    h60->SetBinContent(i+1,sqrt(hcov_genie->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    if(RW==1) h61->SetBinContent(i+1,sqrt(hcov_rw->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
    if(RW==1) h62->SetBinContent(i+1,sqrt(hcov_rw_cor->GetBinContent(i+1,i+1))/hpred->GetBinContent(i+1));
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
  h30->Draw("same"); //dirt
  h30->SetLineColor(3);
  h40->Draw("same"); //flux
  h40->SetLineColor(2);
  h50->Draw("same"); //det
  h50->SetLineColor(6);
  //h60->Draw("same"); // xs
  //h60->SetLineColor(4);
  h59->Draw("same"); // geant4
  h59->SetLineColor(kBlue-7);
  h60->Draw("same"); // genie
  h60->SetLineColor(4);
  if(RW==1) h61->Draw("same"); // rw
  if(RW==1) h61->SetLineColor(kYellow+1);
  if(RW==1) h62->Draw("same"); // rw_cor
  if(RW==1) h62->SetLineColor(kYellow-7);

  h10->SetLineWidth(2);
  h20->SetLineWidth(2);
  h30->SetLineWidth(2);
  h40->SetLineWidth(2);
  h50->SetLineWidth(2);
  h59->SetLineWidth(2);
  h60->SetLineWidth(2);
  if(RW==1) h61->SetLineWidth(2);
  if(RW==1) h62->SetLineWidth(2);

  h70->GetYaxis()->SetRangeUser(0,1.);

  TLegend *le1 = new TLegend(0.6,0.6,0.89,0.89);
  le1->AddEntry(h70,"Total","l");
  le1->AddEntry(h10,"Stat.","l");
  le1->AddEntry(h20,"MC stat.","l");
  le1->AddEntry(h30,"Dirt","l");
  le1->AddEntry(h40,"Flux","l");
  le1->AddEntry(h50,"Det.","l");
  //le1->AddEntry(h60,"Xs","l");
  le1->AddEntry(h59,"Geant4","l");
  le1->AddEntry(h60,"Genie","l");
  if(RW==1) le1->AddEntry(h61,"RW","l");
  if(RW==1) le1->AddEntry(h62,"RW cor.","l");
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
  if(RW==1) hcov_rw->SetDirectory(file);
  if(RW==1) hcov_rw_cor->SetDirectory(file);
  if(RW==1) hcov_rw_tot->SetDirectory(file);
  hcov_tot->SetDirectory(file);
  file->Write();
  file->Close();
}