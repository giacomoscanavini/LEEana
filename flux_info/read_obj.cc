void read_obj()
{
  const double TPC_XY_area = (254.8+1.55)*(117.47+115.53);// cm2, DocDB-13804, 15522
  double binwidth = 0.05;// GeV, default binwidth = 0.01
  int rebinF = 5;// 
  double POT = 1;
  
  TString roostr = "";

  roostr = "h1_nue_norm_flux"; TH1D *h1_nue_norm_flux = new TH1D(roostr, roostr, 1000, 0, 10);
  roostr = "h1_numu_norm_flux"; TH1D *h1_numu_norm_flux = new TH1D(roostr, roostr, 1000, 0, 10);
  roostr = "h1_nue_bar_flux"; TH1D *h1_nue_bar_flux = new TH1D(roostr, roostr, 1000, 0, 10);
  roostr = "h1_numu_bar_flux"; TH1D *h1_numu_bar_flux = new TH1D(roostr, roostr, 1000, 0, 10);

  ///////

  TH1D *h1_temp;
  
  TFile *roofile = new TFile("total_flux_.root", "read");

  h1_temp = (TH1D*)roofile->Get("h1_POT");
  POT = h1_temp->GetBinContent(1);
  
  for(int idx=1; idx<=100; idx++) {
    
    roostr = TString::Format("h1_sub_XYplane_1_%03d",idx);
    h1_temp = (TH1D*)roofile->Get(roostr);
    h1_nue_norm_flux->Add( h1_temp );
     
    roostr = TString::Format("h1_sub_XYplane_2_%03d",idx);
    h1_temp = (TH1D*)roofile->Get(roostr);
    h1_numu_norm_flux->Add( h1_temp );
    
    roostr = TString::Format("h1_sub_XYplane_3_%03d",idx);
    h1_temp = (TH1D*)roofile->Get(roostr);
    h1_nue_bar_flux->Add( h1_temp );
     
    roostr = TString::Format("h1_sub_XYplane_4_%03d",idx);
    h1_temp = (TH1D*)roofile->Get(roostr);
    h1_numu_bar_flux->Add( h1_temp );
    
  }

  h1_nue_norm_flux->Rebin(rebinF);
  h1_numu_norm_flux->Rebin(rebinF);
  h1_nue_bar_flux->Rebin(rebinF);  
  h1_numu_bar_flux->Rebin(rebinF);
  
  h1_nue_norm_flux->Scale(1./POT/binwidth/TPC_XY_area/100);// 100 for the average of 100 planes
  h1_numu_norm_flux->Scale(1./POT/binwidth/TPC_XY_area/100);
  h1_nue_bar_flux->Scale(1./POT/binwidth/TPC_XY_area/100);
  h1_numu_bar_flux->Scale(1./POT/binwidth/TPC_XY_area/100);

  ///////////////////////////////

  roostr = "canv_flux";
  TCanvas *canv_flux = new TCanvas(roostr, roostr, 900, 650);;
  canv_flux->SetLogy();
  
  h1_numu_norm_flux->Draw("hist"); h1_numu_norm_flux->SetLineColor(kBlack);
  h1_numu_norm_flux->SetMinimum(5e-14);
  h1_numu_norm_flux->SetMaximum(2e-9);
  h1_numu_norm_flux->GetXaxis()->SetRangeUser(0,5);
  h1_numu_norm_flux->SetStats(0);
    
  h1_numu_bar_flux->Draw("same hist"); h1_numu_bar_flux->SetLineColor(kBlue);
  h1_nue_norm_flux->Draw("same hist"); h1_nue_norm_flux->SetLineColor(kRed);
  h1_nue_bar_flux->Draw("same hist"); h1_nue_bar_flux->SetLineColor(kOrange);
  
  h1_numu_norm_flux->Draw("same axis");
}
