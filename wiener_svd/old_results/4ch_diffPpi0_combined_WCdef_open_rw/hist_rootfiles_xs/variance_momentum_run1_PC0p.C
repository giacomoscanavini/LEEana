#ifdef __CLING__
#pragma cling optimize(0)
#endif
void variance_momentum_PC0p()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Nov  1 10:50:01 2022) by ROOT version 6.26/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",515,72,1401,842);
   Canvas_1->Range(-187.5,-1.70625,1687.5,15.35625);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1F *NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2 = new TH1F("NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2","NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2",15,0,1500);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(1,9);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(2,13);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(3,11);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(4,6);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(5,7);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(6,3);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(7,3);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(8,2);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(10,1);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(13,1);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(15,1);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetBinContent(16,2);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetEntries(59);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 59     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  332.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  280.4");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->SetLineColor(ci);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->GetXaxis()->SetLabelFont(42);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->GetXaxis()->SetTitleOffset(1);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->GetXaxis()->SetTitleFont(42);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->GetYaxis()->SetLabelFont(42);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->GetYaxis()->SetTitleFont(42);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->GetZaxis()->SetLabelFont(42);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->GetZaxis()->SetTitleOffset(1);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->GetZaxis()->SetTitleFont(42);
   NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2__2->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.935,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_7_pi0_momentum_all_err2");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
