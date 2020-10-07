void plot_check_numuCCFC(){
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

  {
    TTree *T_eval = (TTree*)file3->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file3->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file3->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");

    T_eval->Project("h10","kine_reco_Enu","weight_cv*weight_spline*(numu_cc_flag>=0 &&match_isFC==1 && (truth_nuEnergy <=400 ) && numu_score>0.9 && nue_score<=7 && !(kine_pio_flag==1 && kine_pio_vtx_dis < 9  && kine_pio_energy_1 > 40 && kine_pio_energy_2 > 25 && kine_pio_dis_1 < 110 && kine_pio_dis_2 < 120 && kine_pio_angle > 0 && kine_pio_angle < 174  && kine_pio_mass > 22 && kine_pio_mass < 300))");
    T_eval->Project("h11","kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(numu_cc_flag>=0 &&match_isFC==1 && (truth_nuEnergy <=400 ) && numu_score>0.9 && nue_score<= 7 && !(kine_pio_flag==1 && kine_pio_vtx_dis < 9  && kine_pio_energy_1 > 40 && kine_pio_energy_2 > 25 && kine_pio_dis_1 < 110 && kine_pio_dis_2 < 120 && kine_pio_angle > 0 && kine_pio_angle < 174  && kine_pio_mass > 22 && kine_pio_mass < 300))");
    h10->Scale(pot_data/(pot_3+pot_4));
    h11->Scale(pow(pot_data/(pot_3+pot_4),2));

    T_eval->Project("h20","kine_reco_Enu","weight_cv*weight_spline*(numu_cc_flag>=0 && match_isFC==1 && !(truth_nuEnergy <=400 ) && numu_score>0.9 && nue_score<=7 && !(kine_pio_flag==1 && kine_pio_vtx_dis < 9  && kine_pio_energy_1 > 40 && kine_pio_energy_2 > 25 && kine_pio_dis_1 < 110 && kine_pio_dis_2 < 120 && kine_pio_angle > 0 && kine_pio_angle < 174  && kine_pio_mass > 22 && kine_pio_mass < 300))");
    T_eval->Project("h21","kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(numu_cc_flag>=0  &&match_isFC==1 && !(truth_nuEnergy <=400 )&& numu_score>0.9 && nue_score<=7 && !(kine_pio_flag==1 && kine_pio_vtx_dis < 9  && kine_pio_energy_1 > 40 && kine_pio_energy_2 > 25 && kine_pio_dis_1 < 110 && kine_pio_dis_2 < 120 && kine_pio_angle > 0 && kine_pio_angle < 174  && kine_pio_mass > 22 && kine_pio_mass < 300))");
    h20->Scale(pot_data/(pot_3));
    h21->Scale(pow(pot_data/(pot_3),2));
  }

  {
    TTree *T_eval = (TTree*)file4->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file4->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file4->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");

    T_eval->Project("h30","kine_reco_Enu","weight_cv*weight_spline*(numu_cc_flag>=0 &&match_isFC==1 && (truth_nuEnergy <=400 ) && numu_score>0.9 && nue_score<=7 && !(kine_pio_flag==1 && kine_pio_vtx_dis < 9  && kine_pio_energy_1 > 40 && kine_pio_energy_2 > 25 && kine_pio_dis_1 < 110 && kine_pio_dis_2 < 120 && kine_pio_angle > 0 && kine_pio_angle < 174  && kine_pio_mass > 22 && kine_pio_mass < 300))");
    T_eval->Project("h31","kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(numu_cc_flag>=0 &&match_isFC==1 && (truth_nuEnergy <=400 ) && numu_score>0.9 && nue_score<= 7 && !(kine_pio_flag==1 && kine_pio_vtx_dis < 9  && kine_pio_energy_1 > 40 && kine_pio_energy_2 > 25 && kine_pio_dis_1 < 110 && kine_pio_dis_2 < 120 && kine_pio_angle > 0 && kine_pio_angle < 174  && kine_pio_mass > 22 && kine_pio_mass < 300))");
    h30->Scale(pot_data/(pot_3+pot_4));
    h31->Scale(pow(pot_data/(pot_3+pot_4),2));
  }

  {
     TTree *T_eval = (TTree*)file5->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file5->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file5->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");

    T_eval->Project("h40","kine_reco_Enu","weight_cv*weight_spline*(numu_cc_flag>=0 &&match_isFC==1  && numu_score>0.9 && nue_score<=7 && !(kine_pio_flag==1 && kine_pio_vtx_dis < 9  && kine_pio_energy_1 > 40 && kine_pio_energy_2 > 25 && kine_pio_dis_1 < 110 && kine_pio_dis_2 < 120 && kine_pio_angle > 0 && kine_pio_angle < 174  && kine_pio_mass > 22 && kine_pio_mass < 300))");
    T_eval->Project("h41","kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(numu_cc_flag>=0 &&match_isFC==1 && numu_score>0.9 && nue_score<= 7 && !(kine_pio_flag==1 && kine_pio_vtx_dis < 9  && kine_pio_energy_1 > 40 && kine_pio_energy_2 > 25 && kine_pio_dis_1 < 110 && kine_pio_dis_2 < 120 && kine_pio_angle > 0 && kine_pio_angle < 174  && kine_pio_mass > 22 && kine_pio_mass < 300))");

    h40->Scale(pot_data/(pot_5));
    h41->Scale(pow(pot_data/(pot_5),2));

    // for (Int_t i=0;i!=h40->GetNbinsX();i++){
    //   std::cout << i << " " << pow(h40->GetBinContent(i+1)*0.5,2) << std::endl;
    // }
  }

  {
    TTree *T_eval = (TTree*)file6->Get("wcpselection/T_eval");
    TTree *T_BDTvars = (TTree*)file6->Get("wcpselection/T_BDTvars");
    TTree *T_KINEvars = (TTree*)file6->Get("wcpselection/T_KINEvars");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars");

    T_eval->Project("h50","kine_reco_Enu","(numu_cc_flag>=0 &&match_isFC==1  && numu_score>0.9 && nue_score<=7 && !(kine_pio_flag==1 && kine_pio_vtx_dis < 9  && kine_pio_energy_1 > 40 && kine_pio_energy_2 > 25 && kine_pio_dis_1 < 110 && kine_pio_dis_2 < 120 && kine_pio_angle > 0 && kine_pio_angle < 174  && kine_pio_mass > 22 && kine_pio_mass < 300))");
    T_eval->Project("h51","kine_reco_Enu","(numu_cc_flag>=0 &&match_isFC==1 && numu_score>0.9 && nue_score<= 7 && !(kine_pio_flag==1 && kine_pio_vtx_dis < 9  && kine_pio_energy_1 > 40 && kine_pio_energy_2 > 25 && kine_pio_dis_1 < 110 && kine_pio_dis_2 < 120 && kine_pio_angle > 0 && kine_pio_angle < 174  && kine_pio_mass > 22 && kine_pio_mass < 300))");
    h50->Scale(pot_data/(pot_6));
    h51->Scale(pow(pot_data/(pot_6),2));
  }

  h10->Add(h20); h11->Add(h21);
  h10->Add(h30); h11->Add(h31);
  h10->Add(h40); h11->Add(h41);
  h10->Add(h50); h11->Add(h51);
  
  
  h10->Draw();

  for (Int_t i=0;i!=h10->GetNbinsX()+1;i++){
    std::cout << i << " " << h10->GetBinContent(i+1) << " " << sqrt(h11->GetBinContent(i+1)) << std::endl;
  }
  
}
