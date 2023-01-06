#ifdef __CLING__
#pragma cling optimize(0)
#endif
void variance_momentum_run3_FCNp()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Nov  1 10:50:59 2022) by ROOT version 6.26/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",515,72,1401,842);
   Canvas_1->Range(-187.5,-1.18125,1687.5,10.63125);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1F *NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5 = new TH1F("NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5","NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2",15,0,1500);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->SetBinContent(1,3);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->SetBinContent(2,3);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->SetBinContent(3,9);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->SetBinContent(4,5);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->SetBinContent(5,1);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->SetBinContent(8,1);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->SetBinContent(13,1);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->SetBinContent(16,3);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->SetEntries(26);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 26     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  307.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  231.1");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->SetLineColor(ci);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->GetXaxis()->SetLabelFont(42);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->GetXaxis()->SetTitleOffset(1);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->GetXaxis()->SetTitleFont(42);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->GetYaxis()->SetLabelFont(42);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->GetYaxis()->SetTitleFont(42);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->GetZaxis()->SetLabelFont(42);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->GetZaxis()->SetTitleOffset(1);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->GetZaxis()->SetTitleFont(42);
   NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2__5->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.935,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_8_pi0_momentum_all_err2");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
