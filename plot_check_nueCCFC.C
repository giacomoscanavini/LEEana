void plot_check_nueCCFC(){
  TFile *file1 = new TFile("processed_files/checkout_run1_intrinsic_nue_POT1.2E23.root"); Double_t pot_1 = 5.695e+22;
  TFile *file2 = new TFile("processed_files/checkout_run1_intrinsic_nue_LowE_POT6.1E23.root"); Double_t pot_2 = 2.829e+23;
  TFile *file3 = new TFile("processed_files/checkout_run1_bnb_nu_POT1.2E21.root"); Double_t pot_3 = 5.926e+20;
  TFile *file4 = new TFile("processed_files/checkout_run1_bnb_nu_LowE_POT1.6E21.root"); Double_t pot_4 = 8.238e+20;
  TFile *file5 = new TFile("processed_files/checkout_run1_dirt_POT2.4E20.root");
  Double_t pot_5 = 2.442e+20;
  TFile *file6 = new TFile("processed_files/checkout_run1_extbnb_C1_gt10_wcp_v00_14_00_POT1.2E20.root");
  Double_t pot_6 = 6.000e+19;

  Double_t pot_data = 4.5e19;

  TH1F *h10 = new TH1F("h10","h10",25,0,2500);
  TH1F *h11 = new TH1F("h11","h11",25,0,2500);

  TH1F *h20 = new TH1F("h20","h20",25,0,2500);
  TH1F *h21 = new TH1F("h21","h21",25,0,2500);

  TH1F *h30 = new TH1F("h30","h30",25,0,2500);
  TH1F *h31 = new TH1F("h31","h31",25,0,2500);

  TH1F *h40 = new TH1F("h40","h40",25,0,2500);
  TH1F *h41 = new TH1F("h41","h41",25,0,2500);

  TH1F *h50 = new TH1F("h50","h50",25,0,2500);
  TH1F *h51 = new TH1F("h51","h51",25,0,2500);

  TH1F *h60 = new TH1F("h60","h60",25,0,2500);
  TH1F *h61 = new TH1F("h61","h61",25,0,2500);

  TH1F *h70 = new TH1F("h70","h70",25,0,2500);
  TH1F *h71 = new TH1F("h71","h71",25,0,2500);

  TH1F *h80 = new TH1F("h80","h80",25,0,2500);
  TH1F *h81 = new TH1F("h81","h81",25,0,2500);

  {
    TTree *T_eval = (TTree*)file1->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file1->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file1->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");

    T_eval->Project("h10","kine_reco_Enu","weight_cv*weight_spline*(1+1*weight_lee)*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && (truth_nuEnergy <=400 &&truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    T_eval->Project("h11","kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(1+1*weight_lee)*(1+1*weight_lee)*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && (truth_nuEnergy <=400 &&truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    h10->Scale(pot_data/(pot_1+pot_2));
    h11->Scale(pow(pot_data/(pot_1+pot_2),2));

    T_eval->Project("h20","kine_reco_Enu","weight_cv*weight_spline*(1+1*weight_lee)*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && !(truth_nuEnergy <=400 &&truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    T_eval->Project("h21","kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(1+1*weight_lee)*(1+1*weight_lee)*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && !(truth_nuEnergy <=400 &&truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    h20->Scale(pot_data/(pot_1));
    h21->Scale(pow(pot_data/(pot_1),2));
  }

  {
    TTree *T_eval = (TTree*)file2->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file2->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file2->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");

    T_eval->Project("h30","kine_reco_Enu","weight_cv*weight_spline*(1+1*weight_lee)*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && (truth_nuEnergy <=400 &&truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    T_eval->Project("h31","kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(1+1*weight_lee)*(1+1*weight_lee)*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && (truth_nuEnergy <=400 &&truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    h30->Scale(pot_data/(pot_1+pot_2));
    h31->Scale(pow(pot_data/(pot_1+pot_2),2));
  }

  {
    TTree *T_eval = (TTree*)file3->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file3->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file3->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");

    T_eval->Project("h40","kine_reco_Enu","weight_cv*weight_spline*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && (truth_nuEnergy <=400 ) && !(truth_isCC==1 && abs(truth_nuPdg)==12 && truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    T_eval->Project("h41","kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && (truth_nuEnergy <=400 )&& !(truth_isCC==1 && abs(truth_nuPdg)==12 && truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    h40->Scale(pot_data/(pot_3+pot_4));
    h41->Scale(pow(pot_data/(pot_3+pot_4),2));

    T_eval->Project("h50","kine_reco_Enu","weight_cv*weight_spline*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && !(truth_nuEnergy <=400 )&& !(truth_isCC==1 && abs(truth_nuPdg)==12 && truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    T_eval->Project("h51","kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && !(truth_nuEnergy <=400 )&& !(truth_isCC==1 && abs(truth_nuPdg)==12 && truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    h50->Scale(pot_data/(pot_3));
    h51->Scale(pow(pot_data/(pot_3),2));
  }

  {
    TTree *T_eval = (TTree*)file4->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file4->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file4->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");

    T_eval->Project("h60","kine_reco_Enu","weight_cv*weight_spline*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && (truth_nuEnergy <=400 )&& !(truth_isCC==1 && abs(truth_nuPdg)==12 && truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    T_eval->Project("h61","kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 && (truth_nuEnergy <=400 )&& !(truth_isCC==1 && abs(truth_nuPdg)==12 && truth_vtxX > -1 && truth_vtxX <= 254.3 &&  truth_vtxY >-115.0 && truth_vtxY<=117.0 && truth_vtxZ > 0.6 && truth_vtxZ <=1036.4))");
    h60->Scale(pot_data/(pot_3+pot_4));
    h61->Scale(pow(pot_data/(pot_3+pot_4),2));
  }

  {
    TTree *T_eval = (TTree*)file5->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file5->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file5->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");

    T_eval->Project("h70","kine_reco_Enu","weight_cv*weight_spline*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 )");
    T_eval->Project("h71","kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 )");
    h70->Scale(pot_data/(pot_5));
    h71->Scale(pow(pot_data/(pot_5),2));
  }

  {
    TTree *T_eval = (TTree*)file6->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file6->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file6->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");

    T_eval->Project("h80","kine_reco_Enu","(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 )");
    T_eval->Project("h81","kine_reco_Enu","(numu_cc_flag>=0 && nue_score>7 &&match_isFC==1 )");
    h80->Scale(pot_data/(pot_6));
    h81->Scale(pow(pot_data/(pot_6),2));
  }

  // h10->Add(h20);  h11->Add(h21);
  // h10->Add(h30);  h11->Add(h31);
  // h10->Add(h40);  h11->Add(h41);
  // h10->Add(h50);  h11->Add(h51);
  // h10->Add(h60);  h11->Add(h61);
  // h10->Add(h70);  h11->Add(h71);
  // h10->Add(h80);  h11->Add(h81);

  // h10->Draw();

  // for (Int_t i=0;i!=h10->GetNbinsX()+1;i++){
  //   std::cout << i << " " << h10->GetBinContent(i+1) << " " << sqrt(h11->GetBinContent(i+1)) << std::endl;
  // }

  std::cout << h10->GetBinContent(3) << " " << h11->GetBinContent(3) << std::endl;
  std::cout << h20->GetBinContent(3) << " " << h21->GetBinContent(3) << std::endl;
  std::cout << h30->GetBinContent(3) << " " << h31->GetBinContent(3) << std::endl;
  std::cout << h40->GetBinContent(3) << " " << h41->GetBinContent(3) << std::endl;
  std::cout << h50->GetBinContent(3) << " " << h51->GetBinContent(3) << std::endl;
  std::cout << h60->GetBinContent(3) << " " << h61->GetBinContent(3) << std::endl;
  std::cout << h70->GetBinContent(3) << " " << h71->GetBinContent(3) << std::endl;
  std::cout << h80->GetBinContent(3) << " " << h81->GetBinContent(3) << std::endl;
}
