#ifdef __CLING__
#pragma cling optimize(0)
#endif
void NCpi0_truth_p_multi()
{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Jan 18 11:05:48 2023) by ROOT version 6.26/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",461,72,975,662);
   Canvas_1->Range(-0.625,-6728.007,5.625,60552.06);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1F *NCpi0_truth_8_p_multi_truth_all__1 = new TH1F("NCpi0_truth_8_p_multi_truth_all__1","NCpi0_truth_8_p_multi_truth_all",5,0,5);
   NCpi0_truth_8_p_multi_truth_all__1->SetBinContent(1,41561);
   NCpi0_truth_8_p_multi_truth_all__1->SetBinContent(2,51261);
   NCpi0_truth_8_p_multi_truth_all__1->SetBinContent(3,12173);
   NCpi0_truth_8_p_multi_truth_all__1->SetBinContent(4,3277);
   NCpi0_truth_8_p_multi_truth_all__1->SetBinContent(5,1417);
   NCpi0_truth_8_p_multi_truth_all__1->SetBinContent(6,974);
   NCpi0_truth_8_p_multi_truth_all__1->SetEntries(110663);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("NCpi0_truth_8_p_multi_truth_all");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 110663 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.8306");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.8348");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   NCpi0_truth_8_p_multi_truth_all__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(NCpi0_truth_8_p_multi_truth_all__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   NCpi0_truth_8_p_multi_truth_all__1->SetLineColor(ci);
   NCpi0_truth_8_p_multi_truth_all__1->GetXaxis()->SetLabelFont(42);
   NCpi0_truth_8_p_multi_truth_all__1->GetXaxis()->SetTitleOffset(1);
   NCpi0_truth_8_p_multi_truth_all__1->GetXaxis()->SetTitleFont(42);
   NCpi0_truth_8_p_multi_truth_all__1->GetYaxis()->SetLabelFont(42);
   NCpi0_truth_8_p_multi_truth_all__1->GetYaxis()->SetTitleFont(42);
   NCpi0_truth_8_p_multi_truth_all__1->GetZaxis()->SetLabelFont(42);
   NCpi0_truth_8_p_multi_truth_all__1->GetZaxis()->SetTitleOffset(1);
   NCpi0_truth_8_p_multi_truth_all__1->GetZaxis()->SetTitleFont(42);
   NCpi0_truth_8_p_multi_truth_all__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.2212436,0.9331818,0.7787564,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("NCpi0_truth_8_p_multi_truth_all");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
