void compare_r13(){
  TFile *file1 = new TFile("./processed_checkout_rootfiles/run1_data_bnb_merge.root"); double pot_1 = 4.47375e+19; // 4.42457e19 (with good cut)...
  TFile *file3 = new TFile("./processed_checkout_rootfiles/checkout_data_bnb_run3_1e19.root"); double pot_3 = 6.27737e+18;// 7.05836e18 (without good cut);

   // TFile *file1 = new TFile("./processed_checkout_rootfiles/checkout_data_extbnb_run1.root"); double pot_1 = 7.37133e+19;  // 7.73973e+19
   // TFile *file3 = new TFile("./processed_checkout_rootfiles/checkout_data_extbnb_run3.root"); double pot_3 = 2.95674e+20; // 3.15411e20 ...

  TH1F *h10 = new TH1F("h10","h10",15,0,1500);
  TH1F *h20 = new TH1F("h20","h20",15,0,1500);
  TGraphErrors *g1 = new TGraphErrors();
  TGraphErrors *g2 = new TGraphErrors();
  {
    TTree *T_eval = (TTree*)file1->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file1->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file1->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");

    //    T_eval->Project("h10","match_energy","T_BDTvars.numu_cc_flag>=0");
    T_eval->Project("h10","T_KINEvars.kine_reco_Enu","T_BDTvars.numu_cc_flag>=0");
    for (Int_t i=0;i!=h10->GetNbinsX();i++){
      g1->SetPoint(i, h10->GetBinCenter(i+1), h10->GetBinContent(i+1) * 5e19/pot_1);
      g1->SetPointError(i, 0, sqrt(h10->GetBinContent(i+1)) * 5e19/pot_1);
    }
  }


  {
    TTree *T_eval = (TTree*)file3->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file3->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file3->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");
    //    T_eval->Project("h20","match_energy","T_BDTvars.numu_cc_flag>=0");
    T_eval->Project("h20","T_KINEvars.kine_reco_Enu","T_BDTvars.numu_cc_flag>=0");
    for (Int_t i=0;i!=h20->GetNbinsX();i++){
      g2->SetPoint(i, h20->GetBinCenter(i+1), h20->GetBinContent(i+1) * 5e19/pot_3);
      g2->SetPointError(i, 0, sqrt(h20->GetBinContent(i+1)) * 5e19/pot_3);
    }
  }

  g1->Draw("A*");
  g2->Draw("*same");
  g1->SetMarkerColor(1);
  g1->SetMarkerStyle(20);
  g1->SetLineColor(1);
  g2->SetMarkerColor(2);
  g2->SetMarkerStyle(21);
  g2->SetLineColor(2);
}
