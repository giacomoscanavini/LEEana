#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Mon Jan 16 04:37:12 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-4.16,1.25641,460.0084);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(0);
   pad1->SetLeftMargin(0.12);
   pad1->SetTopMargin(0.05);
   pad1->SetBottomMargin(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hmc__22->SetBinContent(1,19.66484);
   hmc__22->SetBinContent(2,18.07638);
   hmc__22->SetBinContent(3,13.68978);
   hmc__22->SetBinContent(4,10.50007);
   hmc__22->SetBinContent(5,12.97924);
   hmc__22->SetBinContent(6,11.94084);
   hmc__22->SetBinContent(7,10.18032);
   hmc__22->SetBinContent(8,7.384177);
   hmc__22->SetBinContent(9,14.12358);
   hmc__22->SetBinContent(10,16.93224);
   hmc__22->SetBinContent(11,16.13987);
   hmc__22->SetBinContent(12,19.84778);
   hmc__22->SetBinContent(13,21.57932);
   hmc__22->SetBinContent(14,19.98924);
   hmc__22->SetBinContent(15,35.80608);
   hmc__22->SetBinContent(16,31.34454);
   hmc__22->SetBinContent(17,51.04267);
   hmc__22->SetBinContent(18,78.09604);
   hmc__22->SetBinContent(19,113.1763);
   hmc__22->SetBinContent(20,199.0844);
   hmc__22->SetBinError(1,13.89988);
   hmc__22->SetBinError(2,13.19126);
   hmc__22->SetBinError(3,13.15787);
   hmc__22->SetBinError(4,9.842509);
   hmc__22->SetBinError(5,12.58595);
   hmc__22->SetBinError(6,13.78962);
   hmc__22->SetBinError(7,7.772643);
   hmc__22->SetBinError(8,5.669901);
   hmc__22->SetBinError(9,10.39478);
   hmc__22->SetBinError(10,13.44756);
   hmc__22->SetBinError(11,10.71525);
   hmc__22->SetBinError(12,19.55034);
   hmc__22->SetBinError(13,13.19878);
   hmc__22->SetBinError(14,10.95221);
   hmc__22->SetBinError(15,16.60944);
   hmc__22->SetBinError(16,14.61334);
   hmc__22->SetBinError(17,27.72728);
   hmc__22->SetBinError(18,27.56882);
   hmc__22->SetBinError(19,36.27308);
   hmc__22->SetBinError(20,52.12337);
   hmc__22->SetBinError(21,0.4673072);
   hmc__22->SetMinimum(-4.16);
   hmc__22->SetMaximum(436.8);
   hmc__22->SetEntries(705.3741);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,-1,1);
   hs8_stack_8->SetMinimum(-1.166102e-08);
   hs8_stack_8->SetMaximum(209.0386);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.399875);
   hbadmatch_stack_1->SetBinContent(2,0.2896973);
   hbadmatch_stack_1->SetBinContent(3,1.571141);
   hbadmatch_stack_1->SetBinContent(4,1.195446);
   hbadmatch_stack_1->SetBinContent(5,0.9127098);
   hbadmatch_stack_1->SetBinContent(6,0.6793121);
   hbadmatch_stack_1->SetBinContent(9,2.542203);
   hbadmatch_stack_1->SetBinContent(10,0.5311704);
   hbadmatch_stack_1->SetBinContent(11,1.783657);
   hbadmatch_stack_1->SetBinContent(12,2.703839);
   hbadmatch_stack_1->SetBinContent(13,1.358624);
   hbadmatch_stack_1->SetBinContent(14,0.72232);
   hbadmatch_stack_1->SetBinContent(15,1.452004);
   hbadmatch_stack_1->SetBinContent(16,0.4667954);
   hbadmatch_stack_1->SetBinContent(17,2.717248);
   hbadmatch_stack_1->SetBinContent(18,3.304726);
   hbadmatch_stack_1->SetBinContent(19,3.39656);
   hbadmatch_stack_1->SetBinContent(20,6.187245);
   hbadmatch_stack_1->SetBinError(1,0.7263508);
   hbadmatch_stack_1->SetBinError(2,0.2896973);
   hbadmatch_stack_1->SetBinError(3,0.8068416);
   hbadmatch_stack_1->SetBinError(4,0.5352254);
   hbadmatch_stack_1->SetBinError(5,0.554787);
   hbadmatch_stack_1->SetBinError(6,0.5033032);
   hbadmatch_stack_1->SetBinError(9,1.028932);
   hbadmatch_stack_1->SetBinError(10,0.5311704);
   hbadmatch_stack_1->SetBinError(11,0.8918287);
   hbadmatch_stack_1->SetBinError(12,1.195504);
   hbadmatch_stack_1->SetBinError(13,0.7117782);
   hbadmatch_stack_1->SetBinError(14,0.5246329);
   hbadmatch_stack_1->SetBinError(15,0.7642565);
   hbadmatch_stack_1->SetBinError(16,0.3300742);
   hbadmatch_stack_1->SetBinError(17,1.006606);
   hbadmatch_stack_1->SetBinError(18,1.062189);
   hbadmatch_stack_1->SetBinError(19,1.12542);
   hbadmatch_stack_1->SetBinError(20,1.533203);
   hbadmatch_stack_1->SetEntries(96);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
   color = new TColor(ci, 1, 0.2, 0.2, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#ff3333");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);

   ci = 1526;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3005);

   ci = TColor::GetColor("#663300");
   hext_stack_2->SetLineColor(ci);
   hext_stack_2->GetXaxis()->SetLabelFont(42);
   hext_stack_2->GetXaxis()->SetTitleOffset(1);
   hext_stack_2->GetXaxis()->SetTitleFont(42);
   hext_stack_2->GetYaxis()->SetLabelFont(42);
   hext_stack_2->GetYaxis()->SetTitleFont(42);
   hext_stack_2->GetZaxis()->SetLabelFont(42);
   hext_stack_2->GetZaxis()->SetTitleOffset(1);
   hext_stack_2->GetZaxis()->SetTitleFont(42);
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);

   ci = 1527;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3004);

   ci = TColor::GetColor("#ff9933");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,7.312482);
   houtFV_stack_4->SetBinContent(2,7.816086);
   houtFV_stack_4->SetBinContent(3,5.051226);
   houtFV_stack_4->SetBinContent(4,4.880471);
   houtFV_stack_4->SetBinContent(5,5.263742);
   houtFV_stack_4->SetBinContent(6,6.216919);
   houtFV_stack_4->SetBinContent(7,4.075872);
   houtFV_stack_4->SetBinContent(8,3.078348);
   houtFV_stack_4->SetBinContent(9,4.006681);
   houtFV_stack_4->SetBinContent(10,4.542668);
   houtFV_stack_4->SetBinContent(11,4.867322);
   houtFV_stack_4->SetBinContent(12,7.762381);
   houtFV_stack_4->SetBinContent(13,5.647013);
   houtFV_stack_4->SetBinContent(14,6.834883);
   houtFV_stack_4->SetBinContent(15,11.01412);
   houtFV_stack_4->SetBinContent(16,8.35733);
   houtFV_stack_4->SetBinContent(17,14.81853);
   houtFV_stack_4->SetBinContent(18,23.19598);
   houtFV_stack_4->SetBinContent(19,28.58295);
   houtFV_stack_4->SetBinContent(20,35.28229);
   houtFV_stack_4->SetBinError(1,1.60234);
   houtFV_stack_4->SetBinError(2,1.611133);
   houtFV_stack_4->SetBinError(3,1.248199);
   houtFV_stack_4->SetBinError(4,1.11079);
   houtFV_stack_4->SetBinError(5,1.304748);
   houtFV_stack_4->SetBinError(6,2.142823);
   houtFV_stack_4->SetBinError(7,1.232836);
   houtFV_stack_4->SetBinError(8,1.016571);
   houtFV_stack_4->SetBinError(9,1.221627);
   houtFV_stack_4->SetBinError(10,1.276258);
   houtFV_stack_4->SetBinError(11,1.23656);
   houtFV_stack_4->SetBinError(12,1.66402);
   houtFV_stack_4->SetBinError(13,1.47339);
   houtFV_stack_4->SetBinError(14,1.534066);
   houtFV_stack_4->SetBinError(15,1.947842);
   houtFV_stack_4->SetBinError(16,1.732525);
   houtFV_stack_4->SetBinError(17,2.318287);
   houtFV_stack_4->SetBinError(18,3.012998);
   houtFV_stack_4->SetBinError(19,3.119419);
   houtFV_stack_4->SetBinError(20,3.540795);
   houtFV_stack_4->SetEntries(633);

   ci = 1528;
   color = new TColor(ci, 0.2, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3005);

   ci = TColor::GetColor("#339933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.256225);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.7441684);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.009383);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,9.147109);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04681417);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2562251);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04681417);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3727909);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5936023);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.154056);
   hNCpi0inFVcoh_stack_5->SetEntries(201);

   ci = 1529;
   color = new TColor(ci, 1, 0, 0, " ", 0.5);
   hNCpi0inFVcoh_stack_5->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   hNCpi0inFVcoh_stack_5->SetLineColor(ci);
   hNCpi0inFVcoh_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVcoh_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVcoh_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVcoh_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVcoh_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVcoh_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVcoh_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVcoh_stack_5->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.256225);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2893277);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1986157);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2562251);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.05733541);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.05733541);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2583545);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.08108451);
   hNCpi0inFVqe_stack_6->SetEntries(20);

   ci = 1530;
   color = new TColor(ci, 1, 1, 0, " ", 0.5);
   hNCpi0inFVqe_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   hNCpi0inFVqe_stack_6->SetLineColor(ci);
   hNCpi0inFVqe_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVqe_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVqe_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVqe_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVqe_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVqe_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVqe_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVqe_stack_6->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.448313);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.729044);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.207605);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.530035);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.563138);
   hNCpi0inFVres_stack_7->SetBinContent(6,0.9844825);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.596241);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.530035);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.307306);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.596634);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.391097);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.167974);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.945245);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.755619);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.393558);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.707392);
   hNCpi0inFVres_stack_7->SetBinContent(17,10.50304);
   hNCpi0inFVres_stack_7->SetBinContent(18,14.69719);
   hNCpi0inFVres_stack_7->SetBinContent(19,19.47);
   hNCpi0inFVres_stack_7->SetBinContent(20,32.47896);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5565283);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6582977);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3928282);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4713352);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4724962);
   hNCpi0inFVres_stack_7->SetBinError(6,0.2995972);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4736543);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4713352);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6018519);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6549601);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6747381);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6250728);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7285498);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8197252);
   hNCpi0inFVres_stack_7->SetBinError(15,0.9167926);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9824645);
   hNCpi0inFVres_stack_7->SetBinError(17,1.267047);
   hNCpi0inFVres_stack_7->SetBinError(18,1.424814);
   hNCpi0inFVres_stack_7->SetBinError(19,1.608811);
   hNCpi0inFVres_stack_7->SetBinError(20,2.135997);
   hNCpi0inFVres_stack_7->SetEntries(2189);

   ci = 1531;
   color = new TColor(ci, 0, 0.8, 0.4, " ", 0.5);
   hNCpi0inFVres_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#00cc66");
   hNCpi0inFVres_stack_7->SetLineColor(ci);
   hNCpi0inFVres_stack_7->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVres_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVres_stack_7->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVres_stack_7->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVres_stack_7->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVres_stack_7->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVres_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVres_stack_7->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.4879434);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4548407);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.1655131);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.2648209);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.7110658);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.1324105);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.4879434);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.3886355);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.2648209);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3555329);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.5541486);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1986157);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.7527642);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.7196617);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.042092);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.596241);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.472819);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.548014);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.963224);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.46301);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2707799);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2687489);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.0740197);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.09362833);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3713183);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.06620523);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2707799);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2646402);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.09362833);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2625617);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2747969);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.08108451);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2865101);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2845914);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3857915);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4736543);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6063865);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7194689);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9089904);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.279526);
   hNCpi0inFVdis_stack_8->SetEntries(563);

   ci = 1532;
   color = new TColor(ci, 1, 0.2, 1, " ", 0.5);
   hNCpi0inFVdis_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#ff33ff");
   hNCpi0inFVdis_stack_8->SetLineColor(ci);
   hNCpi0inFVdis_stack_8->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVdis_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVdis_stack_8->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVdis_stack_8->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVdis_stack_8->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVdis_stack_8->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVdis_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVdis_stack_8->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03310261);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
   color = new TColor(ci, 0.2, 1, 0.8, " ", 0.5);
   hNCpi0inFVmec_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#33ffcc");
   hNCpi0inFVmec_stack_9->SetLineColor(ci);
   hNCpi0inFVmec_stack_9->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVmec_stack_9->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVmec_stack_9->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVmec_stack_9->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVmec_stack_9->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVmec_stack_9->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVmec_stack_9->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVmec_stack_9->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,5.284623);
   hCCpi0inFV_stack_10->SetBinContent(2,3.481238);
   hCCpi0inFV_stack_10->SetBinContent(3,3.963586);
   hCCpi0inFV_stack_10->SetBinContent(4,1.146108);
   hCCpi0inFV_stack_10->SetBinContent(5,1.865182);
   hCCpi0inFV_stack_10->SetBinContent(6,1.592022);
   hCCpi0inFV_stack_10->SetBinContent(7,2.504732);
   hCCpi0inFV_stack_10->SetBinContent(8,0.7001932);
   hCCpi0inFV_stack_10->SetBinContent(9,3.184044);
   hCCpi0inFV_stack_10->SetBinContent(10,5.756635);
   hCCpi0inFV_stack_10->SetBinContent(11,3.225806);
   hCCpi0inFV_stack_10->SetBinContent(12,4.988582);
   hCCpi0inFV_stack_10->SetBinContent(13,4.542668);
   hCCpi0inFV_stack_10->SetBinContent(14,2.759011);
   hCCpi0inFV_stack_10->SetBinContent(15,9.408756);
   hCCpi0inFV_stack_10->SetBinContent(16,7.194696);
   hCCpi0inFV_stack_10->SetBinContent(17,10.13098);
   hCCpi0inFV_stack_10->SetBinContent(18,20.79242);
   hCCpi0inFV_stack_10->SetBinContent(19,33.2123);
   hCCpi0inFV_stack_10->SetBinContent(20,57.28732);
   hCCpi0inFV_stack_10->SetBinError(1,1.269833);
   hCCpi0inFV_stack_10->SetBinError(2,1.052931);
   hCCpi0inFV_stack_10->SetBinError(3,1.167344);
   hCCpi0inFV_stack_10->SetBinError(4,0.601883);
   hCCpi0inFV_stack_10->SetBinError(5,0.8587513);
   hCCpi0inFV_stack_10->SetBinError(6,0.7490679);
   hCCpi0inFV_stack_10->SetBinError(7,0.9321434);
   hCCpi0inFV_stack_10->SetBinError(8,0.4042567);
   hCCpi0inFV_stack_10->SetBinError(9,1.059342);
   hCCpi0inFV_stack_10->SetBinError(10,1.387567);
   hCCpi0inFV_stack_10->SetBinError(11,0.9707853);
   hCCpi0inFV_stack_10->SetBinError(12,1.351915);
   hCCpi0inFV_stack_10->SetBinError(13,1.276258);
   hCCpi0inFV_stack_10->SetBinError(14,0.9129486);
   hCCpi0inFV_stack_10->SetBinError(15,1.897648);
   hCCpi0inFV_stack_10->SetBinError(16,1.507091);
   hCCpi0inFV_stack_10->SetBinError(17,1.797609);
   hCCpi0inFV_stack_10->SetBinError(18,2.697632);
   hCCpi0inFV_stack_10->SetBinError(19,3.433307);
   hCCpi0inFV_stack_10->SetBinError(20,4.533079);
   hCCpi0inFV_stack_10->SetEntries(583);

   ci = 1534;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_10->SetLineColor(ci);
   hCCpi0inFV_stack_10->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_10->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_10->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_10->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_10->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(2,0.7001932);
   hNCinFV_stack_11->SetBinContent(3,0.9127098);
   hNCinFV_stack_11->SetBinContent(4,0.4459144);
   hNCinFV_stack_11->SetBinContent(7,0.6793121);
   hNCinFV_stack_11->SetBinContent(8,0.4459144);
   hNCinFV_stack_11->SetBinContent(9,0.2333977);
   hNCinFV_stack_11->SetBinContent(10,0.2333977);
   hNCinFV_stack_11->SetBinContent(11,0.4667954);
   hNCinFV_stack_11->SetBinContent(12,0.2333977);
   hNCinFV_stack_11->SetBinContent(13,1.379505);
   hNCinFV_stack_11->SetBinContent(14,0.2333977);
   hNCinFV_stack_11->SetBinContent(15,1.592022);
   hNCinFV_stack_11->SetBinContent(16,0.9127098);
   hNCinFV_stack_11->SetBinContent(17,2.250453);
   hNCinFV_stack_11->SetBinContent(18,3.629958);
   hNCinFV_stack_11->SetBinContent(19,5.22198);
   hNCinFV_stack_11->SetBinContent(20,15.43254);
   hNCinFV_stack_11->SetBinError(2,0.4042567);
   hNCinFV_stack_11->SetBinError(3,0.554787);
   hNCinFV_stack_11->SetBinError(4,0.4459143);
   hNCinFV_stack_11->SetBinError(7,0.5033032);
   hNCinFV_stack_11->SetBinError(8,0.4459143);
   hNCinFV_stack_11->SetBinError(9,0.2333977);
   hNCinFV_stack_11->SetBinError(10,0.2333977);
   hNCinFV_stack_11->SetBinError(11,0.3300742);
   hNCinFV_stack_11->SetBinError(12,0.2333977);
   hNCinFV_stack_11->SetBinError(13,0.6455522);
   hNCinFV_stack_11->SetBinError(14,0.2333977);
   hNCinFV_stack_11->SetBinError(15,0.7490679);
   hNCinFV_stack_11->SetBinError(16,0.554787);
   hNCinFV_stack_11->SetBinError(17,0.9509508);
   hNCinFV_stack_11->SetBinError(18,1.149367);
   hNCinFV_stack_11->SetBinError(19,1.371914);
   hNCinFV_stack_11->SetBinError(20,2.364734);
   hNCinFV_stack_11->SetEntries(109);

   ci = 1535;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_11->SetLineColor(ci);
   hNCinFV_stack_11->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_11->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_11->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_11->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_11->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,2.409174);
   hnumuCCinFV_stack_12->SetBinContent(2,1.871985);
   hnumuCCinFV_stack_12->SetBinContent(3,0.7848942);
   hnumuCCinFV_stack_12->SetBinContent(4,1.037273);
   hnumuCCinFV_stack_12->SetBinContent(5,2.271334);
   hnumuCCinFV_stack_12->SetBinContent(6,2.33569);
   hnumuCCinFV_stack_12->SetBinContent(7,0.8362184);
   hnumuCCinFV_stack_12->SetBinContent(8,1.241051);
   hnumuCCinFV_stack_12->SetBinContent(9,1.55202);
   hnumuCCinFV_stack_12->SetBinContent(10,2.916203);
   hnumuCCinFV_stack_12->SetBinContent(11,1.817938);
   hnumuCCinFV_stack_12->SetBinContent(12,0.7598865);
   hnumuCCinFV_stack_12->SetBinContent(13,3.953505);
   hnumuCCinFV_stack_12->SetBinContent(14,3.831938);
   hnumuCCinFV_stack_12->SetBinContent(15,4.41391);
   hnumuCCinFV_stack_12->SetBinContent(16,6.076277);
   hnumuCCinFV_stack_12->SetBinContent(17,7.783789);
   hnumuCCinFV_stack_12->SetBinContent(18,8.084281);
   hnumuCCinFV_stack_12->SetBinContent(19,14.79714);
   hnumuCCinFV_stack_12->SetBinContent(20,28.12455);
   hnumuCCinFV_stack_12->SetBinError(1,0.886588);
   hnumuCCinFV_stack_12->SetBinError(2,0.8775919);
   hnumuCCinFV_stack_12->SetBinError(3,0.4546302);
   hnumuCCinFV_stack_12->SetBinError(4,0.6351616);
   hnumuCCinFV_stack_12->SetBinError(5,0.9024504);
   hnumuCCinFV_stack_12->SetBinError(6,1.027287);
   hnumuCCinFV_stack_12->SetBinError(7,0.4863779);
   hnumuCCinFV_stack_12->SetBinError(8,0.6413281);
   hnumuCCinFV_stack_12->SetBinError(9,0.7124044);
   hnumuCCinFV_stack_12->SetBinError(10,1.100262);
   hnumuCCinFV_stack_12->SetBinError(11,0.8449639);
   hnumuCCinFV_stack_12->SetBinError(12,0.4414197);
   hnumuCCinFV_stack_12->SetBinError(13,1.244967);
   hnumuCCinFV_stack_12->SetBinError(14,1.269422);
   hnumuCCinFV_stack_12->SetBinError(15,1.328086);
   hnumuCCinFV_stack_12->SetBinError(16,1.664637);
   hnumuCCinFV_stack_12->SetBinError(17,1.729362);
   hnumuCCinFV_stack_12->SetBinError(18,1.631775);
   hnumuCCinFV_stack_12->SetBinError(19,3.292715);
   hnumuCCinFV_stack_12->SetBinError(20,4.08726);
   hnumuCCinFV_stack_12->SetEntries(294);

   ci = 1536;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_12->SetLineColor(ci);
   hnumuCCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(2,0.7001932);
   hnueCCinFV_stack_13->SetBinContent(5,0.3589667);
   hnueCCinFV_stack_13->SetBinContent(15,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(17,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(19,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(20,3.449594);
   hnueCCinFV_stack_13->SetBinError(2,0.4042567);
   hnueCCinFV_stack_13->SetBinError(5,0.3589667);
   hnueCCinFV_stack_13->SetBinError(15,0.2333977);
   hnueCCinFV_stack_13->SetBinError(17,0.2333977);
   hnueCCinFV_stack_13->SetBinError(19,0.2333977);
   hnueCCinFV_stack_13->SetBinError(20,1.423047);
   hnueCCinFV_stack_13->SetEntries(15);

   ci = 1537;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_13->SetLineColor(ci);
   hnueCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);
   hmcerror__23->SetBinContent(1,19.66484);
   hmcerror__23->SetBinContent(2,18.07638);
   hmcerror__23->SetBinContent(3,13.68978);
   hmcerror__23->SetBinContent(4,10.50007);
   hmcerror__23->SetBinContent(5,12.97924);
   hmcerror__23->SetBinContent(6,11.94084);
   hmcerror__23->SetBinContent(7,10.18032);
   hmcerror__23->SetBinContent(8,7.384177);
   hmcerror__23->SetBinContent(9,14.12358);
   hmcerror__23->SetBinContent(10,16.93224);
   hmcerror__23->SetBinContent(11,16.13987);
   hmcerror__23->SetBinContent(12,19.84778);
   hmcerror__23->SetBinContent(13,21.57932);
   hmcerror__23->SetBinContent(14,19.98924);
   hmcerror__23->SetBinContent(15,35.80608);
   hmcerror__23->SetBinContent(16,31.34454);
   hmcerror__23->SetBinContent(17,51.04267);
   hmcerror__23->SetBinContent(18,78.09604);
   hmcerror__23->SetBinContent(19,113.1763);
   hmcerror__23->SetBinContent(20,199.0844);
   hmcerror__23->SetBinError(1,13.89988);
   hmcerror__23->SetBinError(2,13.19126);
   hmcerror__23->SetBinError(3,13.15787);
   hmcerror__23->SetBinError(4,9.842509);
   hmcerror__23->SetBinError(5,12.58595);
   hmcerror__23->SetBinError(6,13.78962);
   hmcerror__23->SetBinError(7,7.772643);
   hmcerror__23->SetBinError(8,5.669901);
   hmcerror__23->SetBinError(9,10.39478);
   hmcerror__23->SetBinError(10,13.44756);
   hmcerror__23->SetBinError(11,10.71525);
   hmcerror__23->SetBinError(12,19.55034);
   hmcerror__23->SetBinError(13,13.19878);
   hmcerror__23->SetBinError(14,10.95221);
   hmcerror__23->SetBinError(15,16.60944);
   hmcerror__23->SetBinError(16,14.61334);
   hmcerror__23->SetBinError(17,27.72728);
   hmcerror__23->SetBinError(18,27.56882);
   hmcerror__23->SetBinError(19,36.27308);
   hmcerror__23->SetBinError(20,52.12337);
   hmcerror__23->SetBinError(21,0.4673072);
   hmcerror__23->SetEntries(705.3741);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3029[20] = {
   22,
   14,
   12,
   15,
   6,
   15,
   12,
   14,
   9,
   11,
   15,
   14,
   14,
   30,
   28,
   36,
   50,
   94,
   136,
   208};
   Double_t _felx3029[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3029[20] = {
   4.8417,
   3.9102,
   3.64022,
   4.0385,
   2.67925,
   4.0385,
   3.64022,
   3.9102,
   3.19354,
   3.4975,
   4.0385,
   3.9102,
   3.9102,
   5.6197,
   5.4358,
   6.1381,
   7.2025,
   9.8173,
   11.6619,
   14.42221};
   Double_t _fehx3029[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3029[20] = {
   4.6299,
   3.6898,
   3.4155,
   3.8197,
   2.41858,
   3.8197,
   3.4155,
   3.6898,
   2.9582,
   3.27,
   3.8197,
   3.6898,
   3.6898,
   5.4117,
   5.2271,
   5.9318,
   6.9985,
   9.616,
   11.6619,
   14.42221};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-1.2,1.2);
   Graph_Graph3029->SetMinimum(2.988675);
   Graph_Graph3029->SetMaximum(244.3324);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.17e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.5/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 755.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. Uncertainty","lf");

   ci = TColor::GetColor("#999999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 33.2","F");

   ci = 1525;
   color = new TColor(ci, 1, 0.2, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#ff3333");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

   ci = 1526;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3005);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

   ci = 1527;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 198.6","F");

   ci = 1528;
   color = new TColor(ci, 0.2, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3005);

   ci = TColor::GetColor("#339933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.5","F");

   ci = 1529;
   color = new TColor(ci, 1, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

   ci = 1530;
   color = new TColor(ci, 1, 1, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  124.0","F");

   ci = 1531;
   color = new TColor(ci, 0, 0.8, 0.4, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc66");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  32.0","F");

   ci = 1532;
   color = new TColor(ci, 1, 0.2, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff33ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1533;
   color = new TColor(ci, 0.2, 1, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#33ffcc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 183.0","F");

   ci = 1534;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#66ccff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 35.0","F");

   ci = 1535;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#999999");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 96.9","F");

   ci = 1536;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cccccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 5.2","F");

   ci = 1537;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#66ff00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0,0.95,1,1,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetLineWidth(2);
   pt->SetTextFont(132);
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(0);
   pad2->SetLeftMargin(0.12);
   pad2->SetTopMargin(0.05);
   pad2->SetBottomMargin(0.2);
   pad2->SetFrameLineWidth(2);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameLineWidth(2);
   pad2->SetFrameBorderMode(0);
   
   Double_t _fx3030[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3030[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3030[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3030[20] = {
   0.7068392,
   0.7297513,
   0.9611454,
   0.9373757,
   0.9696982,
   1.154829,
   0.763497,
   0.7678447,
   0.7359878,
   0.7941984,
   0.6638993,
   0.9850138,
   0.6116401,
   0.5479054,
   0.4638719,
   0.4662163,
   0.5432176,
   0.3530117,
   0.3205008,
   0.2618155};
   Double_t _fehx3030[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3030[20] = {
   0.7068392,
   0.7297513,
   0.9611454,
   0.9373757,
   0.9696982,
   1.154829,
   0.763497,
   0.7678447,
   0.7359878,
   0.7941984,
   0.6638993,
   0.9850138,
   0.6116401,
   0.5479054,
   0.4638719,
   0.4662163,
   0.5432176,
   0.3530117,
   0.3205008,
   0.2618155};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-1.2,1.2);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3031[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3031[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3031[20] = {
   0.2544139,
   0.2232485,
   0.2554117,
   0.3000554,
   0.2941489,
   0.2991605,
   0.2764482,
   0.3030876,
   0.2582036,
   0.2713291,
   0.2705115,
   0.251902,
   0.258196,
   0.2677329,
   0.2624915,
   0.2549392,
   0.2357356,
   0.2120146,
   0.2060682,
   0.1954883};
   Double_t _fehx3031[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3031[20] = {
   0.2544139,
   0.2232485,
   0.2554117,
   0.3000554,
   0.2941489,
   0.2991605,
   0.2764482,
   0.3030876,
   0.2582036,
   0.2713291,
   0.2705115,
   0.251902,
   0.258196,
   0.2677329,
   0.2624915,
   0.2549392,
   0.2357356,
   0.2120146,
   0.2060682,
   0.1954883};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-1.2,1.2);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3032[20] = {
   1.118748,
   0.7744914,
   0.8765665,
   1.428562,
   0.4622766,
   1.256193,
   1.178745,
   1.895946,
   0.6372324,
   0.6496483,
   0.9293758,
   0.7053686,
   0.6487691,
   1.500808,
   0.7819901,
   1.148525,
   0.9795726,
   1.203646,
   1.201665,
   1.044783};
   Double_t _felx3032[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3032[20] = {
   0.246211,
   0.2163154,
   0.2659079,
   0.3846165,
   0.2064258,
   0.3382092,
   0.3575743,
   0.5295377,
   0.2261141,
   0.2065586,
   0.2502189,
   0.1970094,
   0.1812012,
   0.2811363,
   0.1518122,
   0.1958267,
   0.1411074,
   0.125708,
   0.103042,
   0.07244269};
   Double_t _fehx3032[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3032[20] = {
   0.2354405,
   0.2041227,
   0.2494928,
   0.3637786,
   0.1863422,
   0.3198855,
   0.3355003,
   0.4996901,
   0.2094512,
   0.1931227,
   0.2366624,
   0.1859049,
   0.1709877,
   0.2707307,
   0.1459836,
   0.1892451,
   0.1371108,
   0.1231304,
   0.103042,
   0.07244269};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-1.2,1.2);
   Graph_Graph3032->SetMinimum(0.04187235);
   Graph_Graph3032->SetMaximum(2.609614);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_6_pi0_costheta_all",20,-1,1);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(-1,1,1,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.15,0.75,0.7,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Total Uncertainty","F");

   ci = TColor::GetColor("#ccccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

   ci = TColor::GetColor("#ffcccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   pad2->Modified();
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
