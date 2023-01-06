#ifdef __CLING__
#pragma cling optimize(0)
#endif
void variance_momentum_FCNp()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Nov  1 10:49:43 2022) by ROOT version 6.26/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",515,72,1401,842);
   Canvas_1->Range(-187.5,-4.2,1687.5,37.8);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1F *NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1 = new TH1F("NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1","NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2",15,0,1500);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(1,9);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(2,32);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(3,24);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(4,20);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(5,10);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(6,7);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(7,6);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(8,4);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(9,4);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(10,2);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(12,1);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(13,2);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(14,1);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetBinContent(16,8);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetEntries(130);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 130    ");
   ptstats_LaTex = ptstats->AddText("Mean  =    361");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  266.6");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->SetLineColor(ci);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->GetXaxis()->SetLabelFont(42);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->GetXaxis()->SetTitleOffset(1);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->GetXaxis()->SetTitleFont(42);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->GetYaxis()->SetLabelFont(42);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->GetYaxis()->SetTitleFont(42);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->GetZaxis()->SetLabelFont(42);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->GetZaxis()->SetTitleOffset(1);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->GetZaxis()->SetTitleFont(42);
   NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.935,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_7_pi0_momentum_all_err2");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
