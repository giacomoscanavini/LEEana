#ifdef __CLING__
#pragma cling optimize(0)
#endif
void variance_momentum_run3_PCNp()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Nov  1 10:51:17 2022) by ROOT version 6.26/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",515,72,1401,842);
   Canvas_1->Range(-187.5,-0.13125,1687.5,1.18125);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1F *NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7 = new TH1F("NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7","NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2",15,0,1500);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->SetBinContent(1,1);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->SetBinContent(2,1);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->SetBinContent(3,1);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->SetBinContent(4,1);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->SetBinContent(5,1);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->SetBinContent(7,1);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->SetBinContent(11,1);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->SetEntries(7);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  427.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  321.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->SetLineColor(ci);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->GetXaxis()->SetLabelFont(42);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->GetXaxis()->SetTitleOffset(1);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->GetXaxis()->SetTitleFont(42);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->GetYaxis()->SetLabelFont(42);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->GetYaxis()->SetTitleFont(42);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->GetZaxis()->SetLabelFont(42);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->GetZaxis()->SetTitleOffset(1);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->GetZaxis()->SetTitleFont(42);
   NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2__7->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.935,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_8_pi0_momentum_all_err2");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
