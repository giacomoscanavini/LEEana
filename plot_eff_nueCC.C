void plot_eff_nueCC(){
  TFile *file1 =  new TFile("./processed_checkout_rootfiles/checkout_prodgenie_bnb_intrinsic_nue_overlay_run1.root");

  TH1F *h10 = new TH1F("h10","h10",25,0,2500);
  TH1F *h11 = new TH1F("h11","h11",25,0,2500);
  TH1F *h12 = new TH1F("h12","h12",25,0,2500);

  TTree *T_eval = (TTree*)file1->Get("wcpselection/T_eval");
  TTree *T_BDTvars = (TTree*)file1->Get("wcpselection/T_BDTvars");
  TTree *T_KINEvars = (TTree*)file1->Get("wcpselection/T_KINEvars");
  T_eval->AddFriend(T_BDTvars,"T_BDTvars");
  T_eval->AddFriend(T_KINEvars,"T_KINEvars");

  T_eval->Project("h10","truth_nuEnergy","weight_cv*weight_spline*(abs(truth_nuPdg)==12 && truth_isCC==1 && truth_vtxInside==1)");
  T_eval->Project("h11","truth_nuEnergy","weight_cv*weight_spline*(abs(truth_nuPdg)==12 && truth_isCC==1 && truth_vtxInside==1 && T_BDTvars.numu_cc_flag>=0 && T_BDTvars.nue_score>7.0 && match_isFC==1)");
  T_eval->Project("h12","truth_nuEnergy","weight_cv*weight_spline*(abs(truth_nuPdg)==12 && truth_isCC==1 && truth_vtxInside==1 && T_BDTvars.numu_cc_flag>=0 && T_BDTvars.nue_score>7.0 )");
  
  TGraph *g1 = new TGraph();
  TGraph *g2 = new TGraph();
  for (Int_t i=0;i!=h10->GetNbinsX();i++){
    Double_t x = h10->GetBinCenter(i+1);
    Double_t y = h11->GetBinContent(i+1)/h10->GetBinContent(i+1);
    if (std::isnan(y)) y = 0;
    g1->SetPoint(i,x,y);
    y = h12->GetBinContent(i+1)/h10->GetBinContent(i+1);
    if (std::isnan(y)) y = 0;
    g2->SetPoint(i,x,y);
    
  }
  g1->Draw("AL*");
  g2->Draw("*Lsame");
  g1->SetMarkerColor(1);
  g2->SetMarkerColor(2);
  g1->SetMarkerStyle(20);
  g2->SetMarkerStyle(20);
  g1->SetLineColor(1);
  g2->SetLineColor(2);
  g1->GetYaxis()->SetRangeUser(0,1);

  g1->GetXaxis()->SetTitle("E^{#nu}_{true} (MeV)");
  g1->SetTitle("BNB #nu_{e}CC Efficiency");
  TLegend *le1 = new TLegend(0.6,0.6,0.89,0.89);
  le1->AddEntry(g1,"FC","lp");
  le1->AddEntry(g2,"FC+PC","lp");
  le1->Draw();
  
  
}
