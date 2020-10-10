void plot_check_numuCCFC_Det(){
  TFile *file3 = new TFile("./hist_rootfiles/DetVar/WCP_checkout_prodgenie_bnb_nu_overlay_WCP_DetVar_LYDown_run3b.root"); Double_t pot_3 = 8.8408e+19;
  
  Double_t pot_data = 5.0e19;

  TH1F *h10 = new TH1F("h10","h10",25,0,2500);
  TH1F *h11 = new TH1F("h11","h11",25,0,2500);

  TH1F *h20 = new TH1F("h20","h20",25,0,2500);
  TH1F *h21 = new TH1F("h21","h21",25,0,2500);

  
  {
    TTree *T_eval = (TTree*)file3->Get("wcpselection/T_eval_cv");
    TTree *T_BDTvars = (TTree*)file3->Get("wcpselection/T_BDTvars_cv");
    TTree *T_KINEvars = (TTree*)file3->Get("wcpselection/T_KINEvars_cv");
    T_eval->AddFriend(T_BDTvars,"T_BDTvars_cv");
    T_eval->AddFriend(T_KINEvars,"T_KINEvars_cv");

    T_eval->Project("h10","T_KINEvars_cv.kine_reco_Enu","weight_cv*weight_spline*(T_BDTvars_cv.numu_cc_flag>=0 &&match_isFC==1 && (truth_nuEnergy <=400 ) && T_BDTvars_cv.numu_score>0.9 && T_BDTvars_cv.nue_score<=7 && !(T_KINEvars_cv.kine_pio_flag==1 && T_KINEvars_cv.kine_pio_vtx_dis < 9  && T_KINEvars_cv.kine_pio_energy_1 > 40 && T_KINEvars_cv.kine_pio_energy_2 > 25 && T_KINEvars_cv.kine_pio_dis_1 < 110 && T_KINEvars_cv.kine_pio_dis_2 < 120 && T_KINEvars_cv.kine_pio_angle > 0 && T_KINEvars_cv.kine_pio_angle < 174  && T_KINEvars_cv.kine_pio_mass > 22 && T_KINEvars_cv.kine_pio_mass < 300))");
    T_eval->Project("h11","T_KINEvars_cv.kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(T_BDTvars_cv.numu_cc_flag>=0 &&match_isFC==1 && (truth_nuEnergy <=400 ) && T_BDTvars_cv.numu_score>0.9 && T_BDTvars_cv.nue_score<= 7 && !(T_KINEvars_cv.kine_pio_flag==1 && T_KINEvars_cv.kine_pio_vtx_dis < 9  && T_KINEvars_cv.kine_pio_energy_1 > 40 && T_KINEvars_cv.kine_pio_energy_2 > 25 && T_KINEvars_cv.kine_pio_dis_1 < 110 && T_KINEvars_cv.kine_pio_dis_2 < 120 && T_KINEvars_cv.kine_pio_angle > 0 && T_KINEvars_cv.kine_pio_angle < 174  && T_KINEvars_cv.kine_pio_mass > 22 && T_KINEvars_cv.kine_pio_mass < 300))");
    h10->Scale(pot_data/(pot_3));
    h11->Scale(pow(pot_data/(pot_3),2));

    T_eval->Project("h20","T_KINEvars_cv.kine_reco_Enu","weight_cv*weight_spline*(T_BDTvars_cv.numu_cc_flag>=0 && match_isFC==1 && !(truth_nuEnergy <=400 ) && T_BDTvars_cv.numu_score>0.9 && T_BDTvars_cv.nue_score<=7 && !(T_KINEvars_cv.kine_pio_flag==1 && T_KINEvars_cv.kine_pio_vtx_dis < 9  && T_KINEvars_cv.kine_pio_energy_1 > 40 && T_KINEvars_cv.kine_pio_energy_2 > 25 && T_KINEvars_cv.kine_pio_dis_1 < 110 && T_KINEvars_cv.kine_pio_dis_2 < 120 && T_KINEvars_cv.kine_pio_angle > 0 && T_KINEvars_cv.kine_pio_angle < 174  && T_KINEvars_cv.kine_pio_mass > 22 && T_KINEvars_cv.kine_pio_mass < 300))");
    T_eval->Project("h21","T_KINEvars_cv.kine_reco_Enu","weight_cv*weight_cv*weight_spline*weight_spline*(T_BDTvars_cv.numu_cc_flag>=0  &&match_isFC==1 && !(truth_nuEnergy <=400 )&& T_BDTvars_cv.numu_score>0.9 && T_BDTvars_cv.nue_score<=7 && !(T_KINEvars_cv.kine_pio_flag==1 && T_KINEvars_cv.kine_pio_vtx_dis < 9  && T_KINEvars_cv.kine_pio_energy_1 > 40 && T_KINEvars_cv.kine_pio_energy_2 > 25 && T_KINEvars_cv.kine_pio_dis_1 < 110 && T_KINEvars_cv.kine_pio_dis_2 < 120 && T_KINEvars_cv.kine_pio_angle > 0 && T_KINEvars_cv.kine_pio_angle < 174  && T_KINEvars_cv.kine_pio_mass > 22 && T_KINEvars_cv.kine_pio_mass < 300))");
    h20->Scale(pot_data/(pot_3));
    h21->Scale(pow(pot_data/(pot_3),2));
  }

 

 
  h10->Add(h20); h11->Add(h21);
  // h10->Add(h30); h11->Add(h31);
  // h10->Add(h40); h11->Add(h41);
  // h10->Add(h50); h11->Add(h51);
  
  
  h10->Draw();

  for (Int_t i=0;i!=h10->GetNbinsX()+1;i++){
    std::cout << i << " " << h10->GetBinContent(i+1) << " " << sqrt(h11->GetBinContent(i+1)) << std::endl;
  }
  
}
