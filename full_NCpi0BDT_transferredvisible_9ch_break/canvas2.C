#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sun Jun  5 00:24:17 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-15.48311,1692.308,1712.106);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hmc__4->SetBinContent(2,10.25918);
   hmc__4->SetBinContent(3,275.1612);
   hmc__4->SetBinContent(4,622.9174);
   hmc__4->SetBinContent(5,751.6246);
   hmc__4->SetBinContent(6,774.1556);
   hmc__4->SetBinContent(7,704.4385);
   hmc__4->SetBinContent(8,567.5322);
   hmc__4->SetBinContent(9,480.67);
   hmc__4->SetBinContent(10,363.8396);
   hmc__4->SetBinContent(11,278.2089);
   hmc__4->SetBinContent(12,195.6436);
   hmc__4->SetBinContent(13,142.7536);
   hmc__4->SetBinContent(14,114.0314);
   hmc__4->SetBinContent(15,74.38314);
   hmc__4->SetBinContent(16,58.79988);
   hmc__4->SetBinContent(17,49.43299);
   hmc__4->SetBinContent(18,39.07507);
   hmc__4->SetBinContent(19,24.87795);
   hmc__4->SetBinContent(20,22.66933);
   hmc__4->SetBinContent(21,71.01456);
   hmc__4->SetBinError(1,0.3895343);
   hmc__4->SetBinError(2,3.943543);
   hmc__4->SetBinError(3,61.11922);
   hmc__4->SetBinError(4,142.2595);
   hmc__4->SetBinError(5,161.791);
   hmc__4->SetBinError(6,168.9931);
   hmc__4->SetBinError(7,154.4202);
   hmc__4->SetBinError(8,127.4815);
   hmc__4->SetBinError(9,110.0481);
   hmc__4->SetBinError(10,86.08106);
   hmc__4->SetBinError(11,67.16035);
   hmc__4->SetBinError(12,50.06716);
   hmc__4->SetBinError(13,38.03802);
   hmc__4->SetBinError(14,34.29263);
   hmc__4->SetBinError(15,24.49668);
   hmc__4->SetBinError(16,19.54783);
   hmc__4->SetBinError(17,16.54082);
   hmc__4->SetBinError(18,14.36688);
   hmc__4->SetBinError(19,8.826541);
   hmc__4->SetBinError(20,11.09692);
   hmc__4->SetBinError(21,23.20566);
   hmc__4->SetMinimum(-15.48311);
   hmc__4->SetMaximum(1625.727);
   hmc__4->SetEntries(5560.658);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,1500);
   hs2_stack_2->SetMinimum(-5.916779e-09);
   hs2_stack_2->SetMaximum(812.8634);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(2,1.130719);
   hbadmatch_stack_1->SetBinContent(3,8.102168);
   hbadmatch_stack_1->SetBinContent(4,20.84805);
   hbadmatch_stack_1->SetBinContent(5,14.39925);
   hbadmatch_stack_1->SetBinContent(6,13.94919);
   hbadmatch_stack_1->SetBinContent(7,13.86567);
   hbadmatch_stack_1->SetBinContent(8,10.94886);
   hbadmatch_stack_1->SetBinContent(9,10.21283);
   hbadmatch_stack_1->SetBinContent(10,4.974237);
   hbadmatch_stack_1->SetBinContent(11,8.515091);
   hbadmatch_stack_1->SetBinContent(12,4.394562);
   hbadmatch_stack_1->SetBinContent(13,3.102594);
   hbadmatch_stack_1->SetBinContent(14,3.018674);
   hbadmatch_stack_1->SetBinContent(15,1.467217);
   hbadmatch_stack_1->SetBinContent(16,0.5901461);
   hbadmatch_stack_1->SetBinContent(17,0.5850745);
   hbadmatch_stack_1->SetBinContent(18,1.270501);
   hbadmatch_stack_1->SetBinContent(19,0.3917402);
   hbadmatch_stack_1->SetBinContent(20,0.6475976);
   hbadmatch_stack_1->SetBinContent(21,1.660551);
   hbadmatch_stack_1->SetBinError(2,0.593451);
   hbadmatch_stack_1->SetBinError(3,1.480774);
   hbadmatch_stack_1->SetBinError(4,2.972509);
   hbadmatch_stack_1->SetBinError(5,2.073597);
   hbadmatch_stack_1->SetBinError(6,2.594034);
   hbadmatch_stack_1->SetBinError(7,2.139811);
   hbadmatch_stack_1->SetBinError(8,1.709758);
   hbadmatch_stack_1->SetBinError(9,1.681689);
   hbadmatch_stack_1->SetBinError(10,1.152685);
   hbadmatch_stack_1->SetBinError(11,2.165128);
   hbadmatch_stack_1->SetBinError(12,1.106298);
   hbadmatch_stack_1->SetBinError(13,0.9742694);
   hbadmatch_stack_1->SetBinError(14,0.8996095);
   hbadmatch_stack_1->SetBinError(15,0.6214735);
   hbadmatch_stack_1->SetBinError(16,0.340721);
   hbadmatch_stack_1->SetBinError(17,0.337793);
   hbadmatch_stack_1->SetBinError(18,0.5895188);
   hbadmatch_stack_1->SetBinError(19,0.2770047);
   hbadmatch_stack_1->SetBinError(20,0.3768218);
   hbadmatch_stack_1->SetBinError(21,0.650847);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1448;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hext_stack_2->SetBinContent(2,1.861411);
   hext_stack_2->SetBinContent(3,60.83459);
   hext_stack_2->SetBinContent(4,74.37159);
   hext_stack_2->SetBinContent(5,80.40262);
   hext_stack_2->SetBinContent(6,54.73409);
   hext_stack_2->SetBinContent(7,51.94131);
   hext_stack_2->SetBinContent(8,32.01418);
   hext_stack_2->SetBinContent(9,26.99654);
   hext_stack_2->SetBinContent(10,16.66445);
   hext_stack_2->SetBinContent(11,18.64554);
   hext_stack_2->SetBinContent(12,11.64127);
   hext_stack_2->SetBinContent(13,10.28302);
   hext_stack_2->SetBinContent(14,3.901586);
   hext_stack_2->SetBinContent(15,2.6702);
   hext_stack_2->SetBinContent(16,5.40824);
   hext_stack_2->SetBinContent(17,4.670063);
   hext_stack_2->SetBinContent(18,2.599588);
   hext_stack_2->SetBinContent(19,0.973192);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,5.001641);
   hext_stack_2->SetBinError(2,0.9526997);
   hext_stack_2->SetBinError(3,5.432637);
   hext_stack_2->SetBinError(4,5.763289);
   hext_stack_2->SetBinError(5,6.155784);
   hext_stack_2->SetBinError(6,4.888909);
   hext_stack_2->SetBinError(7,4.993944);
   hext_stack_2->SetBinError(8,3.914325);
   hext_stack_2->SetBinError(9,3.570631);
   hext_stack_2->SetBinError(10,2.738991);
   hext_stack_2->SetBinError(11,3.043953);
   hext_stack_2->SetBinError(12,2.366894);
   hext_stack_2->SetBinError(13,2.125455);
   hext_stack_2->SetBinError(14,1.238163);
   hext_stack_2->SetBinError(15,1.050314);
   hext_stack_2->SetBinError(16,1.63365);
   hext_stack_2->SetBinError(17,1.612283);
   hext_stack_2->SetBinError(18,0.9884288);
   hext_stack_2->SetBinError(19,0.5618727);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,1.582242);
   hext_stack_2->SetEntries(1085);

   ci = 1449;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hdirt_stack_3->SetBinContent(2,0.15957);
   hdirt_stack_3->SetBinContent(3,8.818816);
   hdirt_stack_3->SetBinContent(4,11.66504);
   hdirt_stack_3->SetBinContent(5,8.757062);
   hdirt_stack_3->SetBinContent(6,7.585689);
   hdirt_stack_3->SetBinContent(7,4.588651);
   hdirt_stack_3->SetBinContent(8,2.723244);
   hdirt_stack_3->SetBinContent(9,0.8332258);
   hdirt_stack_3->SetBinContent(10,2.350025);
   hdirt_stack_3->SetBinContent(11,0.7650349);
   hdirt_stack_3->SetBinContent(12,0.1482583);
   hdirt_stack_3->SetBinContent(14,0.5318602);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinError(2,0.15957);
   hdirt_stack_3->SetBinError(3,1.672649);
   hdirt_stack_3->SetBinError(4,1.692643);
   hdirt_stack_3->SetBinError(5,1.51004);
   hdirt_stack_3->SetBinError(6,1.630511);
   hdirt_stack_3->SetBinError(7,1.117121);
   hdirt_stack_3->SetBinError(8,0.7951718);
   hdirt_stack_3->SetBinError(9,0.4476755);
   hdirt_stack_3->SetBinError(10,1.235615);
   hdirt_stack_3->SetBinError(11,0.4832167);
   hdirt_stack_3->SetBinError(12,0.1482583);
   hdirt_stack_3->SetBinError(14,0.4172928);
   hdirt_stack_3->SetBinError(19,0.3381872);
   hdirt_stack_3->SetEntries(206);

   ci = 1450;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   houtFV_stack_4->SetBinContent(2,3.172568);
   houtFV_stack_4->SetBinContent(3,43.36771);
   houtFV_stack_4->SetBinContent(4,84.13721);
   houtFV_stack_4->SetBinContent(5,74.6172);
   houtFV_stack_4->SetBinContent(6,52.2062);
   houtFV_stack_4->SetBinContent(7,41.0491);
   houtFV_stack_4->SetBinContent(8,33.26569);
   houtFV_stack_4->SetBinContent(9,21.45906);
   houtFV_stack_4->SetBinContent(10,12.42035);
   houtFV_stack_4->SetBinContent(11,8.86811);
   houtFV_stack_4->SetBinContent(12,6.347435);
   houtFV_stack_4->SetBinContent(13,4.975842);
   houtFV_stack_4->SetBinContent(14,3.857995);
   houtFV_stack_4->SetBinContent(15,1.713804);
   houtFV_stack_4->SetBinContent(16,1.316992);
   houtFV_stack_4->SetBinContent(17,1.123658);
   houtFV_stack_4->SetBinContent(18,0.7336084);
   houtFV_stack_4->SetBinContent(19,0.3917402);
   houtFV_stack_4->SetBinContent(20,0.9303237);
   houtFV_stack_4->SetBinContent(21,1.268811);
   houtFV_stack_4->SetBinError(2,0.8764662);
   houtFV_stack_4->SetBinError(3,3.240633);
   houtFV_stack_4->SetBinError(4,4.587669);
   houtFV_stack_4->SetBinError(5,4.355704);
   houtFV_stack_4->SetBinError(6,3.585995);
   houtFV_stack_4->SetBinError(7,3.213956);
   houtFV_stack_4->SetBinError(8,2.893795);
   houtFV_stack_4->SetBinError(9,2.347668);
   houtFV_stack_4->SetBinError(10,1.751246);
   houtFV_stack_4->SetBinError(11,1.486972);
   houtFV_stack_4->SetBinError(12,1.31745);
   houtFV_stack_4->SetBinError(13,1.092153);
   houtFV_stack_4->SetBinError(14,1.00081);
   houtFV_stack_4->SetBinError(15,0.6207051);
   houtFV_stack_4->SetBinError(16,0.5536755);
   houtFV_stack_4->SetBinError(17,0.5188295);
   houtFV_stack_4->SetBinError(18,0.4394482);
   houtFV_stack_4->SetBinError(19,0.2770047);
   houtFV_stack_4->SetBinError(20,0.4814682);
   houtFV_stack_4->SetBinError(21,0.5889569);
   houtFV_stack_4->SetEntries(1712);

   ci = 1451;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.09442);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,11.75392);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,14.58311);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,14.65437);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,15.83947);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,9.509788);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.544827);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.529361);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.794256);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.799226);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.713862);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.7247357);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.8087721);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.9896218);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5636148);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.115545);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.204028);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.236797);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.391964);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.017977);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9320175);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5614814);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7118215);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4488676);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4007674);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.183661);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3187231);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2839569);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6697679);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.455544);
   hNCpi0inFVqe_stack_6->SetBinContent(5,4.09866);
   hNCpi0inFVqe_stack_6->SetBinContent(6,3.638633);
   hNCpi0inFVqe_stack_6->SetBinContent(7,3.500302);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.286976);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.148476);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.575858);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6139679);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.9348222);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.7529721);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6980042);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2268055);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5277748);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.6763533);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5416044);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.6117412);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4348468);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4870573);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4031079);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2233471);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3620771);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3162714);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3431282);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.023258);
   hNCpi0inFVres_stack_7->SetBinContent(3,97.23685);
   hNCpi0inFVres_stack_7->SetBinContent(4,295.0433);
   hNCpi0inFVres_stack_7->SetBinContent(5,390.2824);
   hNCpi0inFVres_stack_7->SetBinContent(6,401.8269);
   hNCpi0inFVres_stack_7->SetBinContent(7,351.3943);
   hNCpi0inFVres_stack_7->SetBinContent(8,273.7444);
   hNCpi0inFVres_stack_7->SetBinContent(9,202.4323);
   hNCpi0inFVres_stack_7->SetBinContent(10,145.9372);
   hNCpi0inFVres_stack_7->SetBinContent(11,98.29561);
   hNCpi0inFVres_stack_7->SetBinContent(12,69.31055);
   hNCpi0inFVres_stack_7->SetBinContent(13,42.0516);
   hNCpi0inFVres_stack_7->SetBinContent(14,30.21533);
   hNCpi0inFVres_stack_7->SetBinContent(15,21.53059);
   hNCpi0inFVres_stack_7->SetBinContent(16,15.4698);
   hNCpi0inFVres_stack_7->SetBinContent(17,10.8367);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.259585);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.99346);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.082634);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.352962);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4764196);
   hNCpi0inFVres_stack_7->SetBinError(3,3.167569);
   hNCpi0inFVres_stack_7->SetBinError(4,5.550127);
   hNCpi0inFVres_stack_7->SetBinError(5,6.477408);
   hNCpi0inFVres_stack_7->SetBinError(6,6.535237);
   hNCpi0inFVres_stack_7->SetBinError(7,6.177485);
   hNCpi0inFVres_stack_7->SetBinError(8,5.404117);
   hNCpi0inFVres_stack_7->SetBinError(9,4.670035);
   hNCpi0inFVres_stack_7->SetBinError(10,3.981679);
   hNCpi0inFVres_stack_7->SetBinError(11,3.262829);
   hNCpi0inFVres_stack_7->SetBinError(12,2.803247);
   hNCpi0inFVres_stack_7->SetBinError(13,2.06237);
   hNCpi0inFVres_stack_7->SetBinError(14,1.807945);
   hNCpi0inFVres_stack_7->SetBinError(15,1.55938);
   hNCpi0inFVres_stack_7->SetBinError(16,1.389212);
   hNCpi0inFVres_stack_7->SetBinError(17,1.099429);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7855127);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7657761);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6179137);
   hNCpi0inFVres_stack_7->SetBinError(21,1.008765);
   hNCpi0inFVres_stack_7->SetEntries(45534);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.7249039);
   hNCpi0inFVdis_stack_8->SetBinContent(3,20.34267);
   hNCpi0inFVdis_stack_8->SetBinContent(4,37.78721);
   hNCpi0inFVdis_stack_8->SetBinContent(5,48.56213);
   hNCpi0inFVdis_stack_8->SetBinContent(6,59.24986);
   hNCpi0inFVdis_stack_8->SetBinContent(7,52.45318);
   hNCpi0inFVdis_stack_8->SetBinContent(8,49.10269);
   hNCpi0inFVdis_stack_8->SetBinContent(9,45.7776);
   hNCpi0inFVdis_stack_8->SetBinContent(10,34.30286);
   hNCpi0inFVdis_stack_8->SetBinContent(11,30.91199);
   hNCpi0inFVdis_stack_8->SetBinContent(12,22.64859);
   hNCpi0inFVdis_stack_8->SetBinContent(13,14.20912);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.81072);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.899059);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.078568);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.448405);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.903024);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.541324);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.388038);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.883858);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2578571);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.4797);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.993566);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.265768);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.48615);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.294021);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.260824);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.199125);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.905848);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.807999);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.60214);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.207257);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.139308);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.036417);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7779615);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6685393);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6216809);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6545173);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6201664);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9344845);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.6556541);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2231999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.3009266);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.07891307);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1456;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hCCpi0inFV_stack_11->SetBinContent(2,0.3401776);
   hCCpi0inFV_stack_11->SetBinContent(3,6.940354);
   hCCpi0inFV_stack_11->SetBinContent(4,21.83821);
   hCCpi0inFV_stack_11->SetBinContent(5,42.49643);
   hCCpi0inFV_stack_11->SetBinContent(6,75.67136);
   hCCpi0inFV_stack_11->SetBinContent(7,92.73568);
   hCCpi0inFV_stack_11->SetBinContent(8,88.77306);
   hCCpi0inFV_stack_11->SetBinContent(9,99.77654);
   hCCpi0inFV_stack_11->SetBinContent(10,88.74194);
   hCCpi0inFV_stack_11->SetBinContent(11,62.50927);
   hCCpi0inFV_stack_11->SetBinContent(12,52.60874);
   hCCpi0inFV_stack_11->SetBinContent(13,42.10175);
   hCCpi0inFV_stack_11->SetBinContent(14,37.49821);
   hCCpi0inFV_stack_11->SetBinContent(15,25.87861);
   hCCpi0inFV_stack_11->SetBinContent(16,19.38239);
   hCCpi0inFV_stack_11->SetBinContent(17,21.46362);
   hCCpi0inFV_stack_11->SetBinContent(18,17.95932);
   hCCpi0inFV_stack_11->SetBinContent(19,9.294176);
   hCCpi0inFV_stack_11->SetBinContent(20,7.923931);
   hCCpi0inFV_stack_11->SetBinContent(21,24.76585);
   hCCpi0inFV_stack_11->SetBinError(2,0.3401776);
   hCCpi0inFV_stack_11->SetBinError(3,1.28626);
   hCCpi0inFV_stack_11->SetBinError(4,2.304176);
   hCCpi0inFV_stack_11->SetBinError(5,3.221068);
   hCCpi0inFV_stack_11->SetBinError(6,4.3323);
   hCCpi0inFV_stack_11->SetBinError(7,4.757412);
   hCCpi0inFV_stack_11->SetBinError(8,4.716365);
   hCCpi0inFV_stack_11->SetBinError(9,5.003969);
   hCCpi0inFV_stack_11->SetBinError(10,4.761568);
   hCCpi0inFV_stack_11->SetBinError(11,3.974916);
   hCCpi0inFV_stack_11->SetBinError(12,3.635156);
   hCCpi0inFV_stack_11->SetBinError(13,3.290512);
   hCCpi0inFV_stack_11->SetBinError(14,3.153147);
   hCCpi0inFV_stack_11->SetBinError(15,2.500525);
   hCCpi0inFV_stack_11->SetBinError(16,2.156715);
   hCCpi0inFV_stack_11->SetBinError(17,2.323745);
   hCCpi0inFV_stack_11->SetBinError(18,2.202821);
   hCCpi0inFV_stack_11->SetBinError(19,1.454709);
   hCCpi0inFV_stack_11->SetBinError(20,1.359393);
   hCCpi0inFV_stack_11->SetBinError(21,2.535936);
   hCCpi0inFV_stack_11->SetEntries(3599);

   ci = 1458;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hNCinFV_stack_12->SetBinContent(2,0.3934307);
   hNCinFV_stack_12->SetBinContent(3,12.51892);
   hNCinFV_stack_12->SetBinContent(4,27.08157);
   hNCinFV_stack_12->SetBinContent(5,28.93785);
   hNCinFV_stack_12->SetBinContent(6,35.08398);
   hNCinFV_stack_12->SetBinContent(7,35.06153);
   hNCinFV_stack_12->SetBinContent(8,25.93568);
   hNCinFV_stack_12->SetBinContent(9,22.9591);
   hNCinFV_stack_12->SetBinContent(10,21.90391);
   hNCinFV_stack_12->SetBinContent(11,14.20459);
   hNCinFV_stack_12->SetBinContent(12,9.181517);
   hNCinFV_stack_12->SetBinContent(13,8.689424);
   hNCinFV_stack_12->SetBinContent(14,6.445489);
   hNCinFV_stack_12->SetBinContent(15,4.83481);
   hNCinFV_stack_12->SetBinContent(16,4.79339);
   hNCinFV_stack_12->SetBinContent(17,3.126077);
   hNCinFV_stack_12->SetBinContent(18,2.592565);
   hNCinFV_stack_12->SetBinContent(19,2.000729);
   hNCinFV_stack_12->SetBinContent(20,1.320373);
   hNCinFV_stack_12->SetBinContent(21,4.199863);
   hNCinFV_stack_12->SetBinError(2,0.2781975);
   hNCinFV_stack_12->SetBinError(3,1.744709);
   hNCinFV_stack_12->SetBinError(4,2.705433);
   hNCinFV_stack_12->SetBinError(5,2.69171);
   hNCinFV_stack_12->SetBinError(6,2.922961);
   hNCinFV_stack_12->SetBinError(7,2.988593);
   hNCinFV_stack_12->SetBinError(8,2.562421);
   hNCinFV_stack_12->SetBinError(9,2.403272);
   hNCinFV_stack_12->SetBinError(10,2.339693);
   hNCinFV_stack_12->SetBinError(11,1.90175);
   hNCinFV_stack_12->SetBinError(12,1.545578);
   hNCinFV_stack_12->SetBinError(13,1.480795);
   hNCinFV_stack_12->SetBinError(14,1.286744);
   hNCinFV_stack_12->SetBinError(15,1.091997);
   hNCinFV_stack_12->SetBinError(16,1.111494);
   hNCinFV_stack_12->SetBinError(17,0.8995382);
   hNCinFV_stack_12->SetBinError(18,0.809985);
   hNCinFV_stack_12->SetBinError(19,0.7343859);
   hNCinFV_stack_12->SetBinError(20,0.5548703);
   hNCinFV_stack_12->SetBinError(21,1.057357);
   hNCinFV_stack_12->SetEntries(1151);

   ci = 1459;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hnumuCCinFV_stack_13->SetBinContent(2,0.300021);
   hnumuCCinFV_stack_13->SetBinContent(3,10.78929);
   hnumuCCinFV_stack_13->SetBinContent(4,32.95594);
   hnumuCCinFV_stack_13->SetBinContent(5,39.74748);
   hnumuCCinFV_stack_13->SetBinContent(6,53.38239);
   hnumuCCinFV_stack_13->SetBinContent(7,39.9029);
   hnumuCCinFV_stack_13->SetBinContent(8,35.44691);
   hnumuCCinFV_stack_13->SetBinContent(9,37.99308);
   hnumuCCinFV_stack_13->SetBinContent(10,29.04616);
   hnumuCCinFV_stack_13->SetBinContent(11,28.30563);
   hnumuCCinFV_stack_13->SetBinContent(12,16.60078);
   hnumuCCinFV_stack_13->SetBinContent(13,12.80155);
   hnumuCCinFV_stack_13->SetBinContent(14,13.7366);
   hnumuCCinFV_stack_13->SetBinContent(15,4.444797);
   hnumuCCinFV_stack_13->SetBinContent(16,4.936228);
   hnumuCCinFV_stack_13->SetBinContent(17,2.886779);
   hnumuCCinFV_stack_13->SetBinContent(18,2.622712);
   hnumuCCinFV_stack_13->SetBinContent(19,1.919763);
   hnumuCCinFV_stack_13->SetBinContent(20,2.55342);
   hnumuCCinFV_stack_13->SetBinContent(21,6.253008);
   hnumuCCinFV_stack_13->SetBinError(2,0.300021);
   hnumuCCinFV_stack_13->SetBinError(3,2.237597);
   hnumuCCinFV_stack_13->SetBinError(4,3.872219);
   hnumuCCinFV_stack_13->SetBinError(5,4.038732);
   hnumuCCinFV_stack_13->SetBinError(6,4.276);
   hnumuCCinFV_stack_13->SetBinError(7,3.780003);
   hnumuCCinFV_stack_13->SetBinError(8,3.197117);
   hnumuCCinFV_stack_13->SetBinError(9,3.344966);
   hnumuCCinFV_stack_13->SetBinError(10,2.974925);
   hnumuCCinFV_stack_13->SetBinError(11,3.703741);
   hnumuCCinFV_stack_13->SetBinError(12,2.259509);
   hnumuCCinFV_stack_13->SetBinError(13,2.263803);
   hnumuCCinFV_stack_13->SetBinError(14,2.126831);
   hnumuCCinFV_stack_13->SetBinError(15,1.085394);
   hnumuCCinFV_stack_13->SetBinError(16,1.13984);
   hnumuCCinFV_stack_13->SetBinError(17,0.8585547);
   hnumuCCinFV_stack_13->SetBinError(18,0.8178954);
   hnumuCCinFV_stack_13->SetBinError(19,0.7002683);
   hnumuCCinFV_stack_13->SetBinError(20,0.7509824);
   hnumuCCinFV_stack_13->SetBinError(21,1.301377);
   hnumuCCinFV_stack_13->SetEntries(1455);

   ci = 1460;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hnueCCinFV_stack_14->SetBinContent(3,2.36194);
   hnueCCinFV_stack_14->SetBinContent(4,2.728531);
   hnueCCinFV_stack_14->SetBinContent(5,4.084716);
   hnueCCinFV_stack_14->SetBinContent(6,1.837982);
   hnueCCinFV_stack_14->SetBinContent(7,1.883263);
   hnueCCinFV_stack_14->SetBinContent(8,3.599792);
   hnueCCinFV_stack_14->SetBinContent(9,2.536452);
   hnueCCinFV_stack_14->SetBinContent(10,2.393238);
   hnueCCinFV_stack_14->SetBinContent(11,2.779852);
   hnueCCinFV_stack_14->SetBinContent(13,2.071825);
   hnueCCinFV_stack_14->SetBinContent(14,1.592244);
   hnueCCinFV_stack_14->SetBinContent(15,0.9957811);
   hnueCCinFV_stack_14->SetBinContent(16,0.3920057);
   hnueCCinFV_stack_14->SetBinContent(18,0.9252522);
   hnueCCinFV_stack_14->SetBinContent(19,0.9499335);
   hnueCCinFV_stack_14->SetBinContent(20,1.001863);
   hnueCCinFV_stack_14->SetBinContent(21,9.610486);
   hnueCCinFV_stack_14->SetBinError(3,1.426612);
   hnueCCinFV_stack_14->SetBinError(4,0.9743588);
   hnueCCinFV_stack_14->SetBinError(5,1.13756);
   hnueCCinFV_stack_14->SetBinError(6,0.7341368);
   hnueCCinFV_stack_14->SetBinError(7,0.6799683);
   hnueCCinFV_stack_14->SetBinError(8,1.029584);
   hnueCCinFV_stack_14->SetBinError(9,0.9313133);
   hnueCCinFV_stack_14->SetBinError(10,0.930303);
   hnueCCinFV_stack_14->SetBinError(11,1.305757);
   hnueCCinFV_stack_14->SetBinError(13,0.8078256);
   hnueCCinFV_stack_14->SetBinError(14,0.6158529);
   hnueCCinFV_stack_14->SetBinError(15,0.5304175);
   hnueCCinFV_stack_14->SetBinError(16,0.2770049);
   hnueCCinFV_stack_14->SetBinError(18,0.4794006);
   hnueCCinFV_stack_14->SetBinError(19,0.4898809);
   hnueCCinFV_stack_14->SetBinError(20,0.5181917);
   hnueCCinFV_stack_14->SetBinError(21,2.25236);
   hnueCCinFV_stack_14->SetEntries(151);

   ci = 1461;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_14,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);
   hmcerror__5->SetBinContent(2,10.25918);
   hmcerror__5->SetBinContent(3,275.1612);
   hmcerror__5->SetBinContent(4,622.9174);
   hmcerror__5->SetBinContent(5,751.6246);
   hmcerror__5->SetBinContent(6,774.1556);
   hmcerror__5->SetBinContent(7,704.4385);
   hmcerror__5->SetBinContent(8,567.5322);
   hmcerror__5->SetBinContent(9,480.67);
   hmcerror__5->SetBinContent(10,363.8396);
   hmcerror__5->SetBinContent(11,278.2089);
   hmcerror__5->SetBinContent(12,195.6436);
   hmcerror__5->SetBinContent(13,142.7536);
   hmcerror__5->SetBinContent(14,114.0314);
   hmcerror__5->SetBinContent(15,74.38314);
   hmcerror__5->SetBinContent(16,58.79988);
   hmcerror__5->SetBinContent(17,49.43299);
   hmcerror__5->SetBinContent(18,39.07507);
   hmcerror__5->SetBinContent(19,24.87795);
   hmcerror__5->SetBinContent(20,22.66933);
   hmcerror__5->SetBinContent(21,71.01456);
   hmcerror__5->SetBinError(1,0.3895343);
   hmcerror__5->SetBinError(2,3.943543);
   hmcerror__5->SetBinError(3,61.11922);
   hmcerror__5->SetBinError(4,142.2595);
   hmcerror__5->SetBinError(5,161.791);
   hmcerror__5->SetBinError(6,168.9931);
   hmcerror__5->SetBinError(7,154.4202);
   hmcerror__5->SetBinError(8,127.4815);
   hmcerror__5->SetBinError(9,110.0481);
   hmcerror__5->SetBinError(10,86.08106);
   hmcerror__5->SetBinError(11,67.16035);
   hmcerror__5->SetBinError(12,50.06716);
   hmcerror__5->SetBinError(13,38.03802);
   hmcerror__5->SetBinError(14,34.29263);
   hmcerror__5->SetBinError(15,24.49668);
   hmcerror__5->SetBinError(16,19.54783);
   hmcerror__5->SetBinError(17,16.54082);
   hmcerror__5->SetBinError(18,14.36688);
   hmcerror__5->SetBinError(19,8.826541);
   hmcerror__5->SetBinError(20,11.09692);
   hmcerror__5->SetBinError(21,23.20566);
   hmcerror__5->SetEntries(5560.658);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3005[20] = {
   0,
   10,
   323,
   742,
   762,
   703,
   544,
   431,
   385,
   253,
   218,
   148,
   113,
   74,
   55,
   58,
   45,
   29,
   9,
   19};
   Double_t _felx3005[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3005[20] = {
   0,
   3.34883,
   17.9722,
   27.23968,
   27.60435,
   26.51415,
   23.32381,
   20.76054,
   19.62142,
   15.90597,
   14.76482,
   12.16553,
   10.63015,
   8.7275,
   7.546,
   7.7446,
   6.8416,
   5.5285,
   3.19354,
   4.5151};
   Double_t _fehx3005[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3005[20] = {
   1.1478,
   3.1179,
   17.9722,
   27.23968,
   27.60435,
   26.51415,
   23.32381,
   20.76054,
   19.62142,
   15.90597,
   14.76482,
   12.16553,
   10.63015,
   8.5253,
   7.3425,
   7.5415,
   6.637,
   5.3201,
   2.9582,
   4.3011};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1650);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(868.5648);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.18","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.37e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=20.8/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4921.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.4","F");

   ci = 1448;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 461.8","F");

   ci = 1449;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

   ci = 1450;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 396.0","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.7","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2462.0","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  459.1","F");

   ci = 1455;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1457;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 813.9","F");

   ci = 1458;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 267.1","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 370.4","F");

   ci = 1460;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 32.1","F");

   ci = 1461;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_transferred_visible_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3006[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3006[20] = {
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
   Double_t _felx3006[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3006[20] = {
   0,
   0.3843918,
   0.2221215,
   0.2283762,
   0.215255,
   0.2182934,
   0.2192104,
   0.2246242,
   0.2289472,
   0.2365907,
   0.2414026,
   0.25591,
   0.2664593,
   0.3007296,
   0.3293311,
   0.3324468,
   0.3346109,
   0.3676737,
   0.3547938,
   0.4895123};
   Double_t _fehx3006[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3006[20] = {
   0,
   0.3843918,
   0.2221215,
   0.2283762,
   0.215255,
   0.2182934,
   0.2192104,
   0.2246242,
   0.2289472,
   0.2365907,
   0.2414026,
   0.25591,
   0.2664593,
   0.3007296,
   0.3293311,
   0.3324468,
   0.3346109,
   0.3676737,
   0.3547938,
   0.4895123};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1650);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Transferred Visible Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3007[20] = {
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
   Double_t _felx3007[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3007[20] = {
   0,
   0.2359104,
   0.1650455,
   0.2020588,
   0.2074297,
   0.2140575,
   0.2138537,
   0.2205449,
   0.2248147,
   0.227512,
   0.2170756,
   0.221906,
   0.2191433,
   0.2258861,
   0.2372687,
   0.2160691,
   0.2271482,
   0.2351006,
   0.2505084,
   0.237422};
   Double_t _fehx3007[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3007[20] = {
   0,
   0.2359104,
   0.1650455,
   0.2020588,
   0.2074297,
   0.2140575,
   0.2138537,
   0.2205449,
   0.2248147,
   0.227512,
   0.2170756,
   0.221906,
   0.2191433,
   0.2258861,
   0.2372687,
   0.2160691,
   0.2271482,
   0.2351006,
   0.2505084,
   0.237422};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1650);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3008[20] = {
   10,
   0.974737,
   1.173857,
   1.191169,
   1.013804,
   0.9080862,
   0.7722462,
   0.7594282,
   0.8009653,
   0.6953614,
   0.7835838,
   0.7564774,
   0.791574,
   0.6489438,
   0.7394149,
   0.9863966,
   0.9103232,
   0.7421612,
   0.3617662,
   0.8381368};
   Double_t _felx3008[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3008[20] = {
   0,
   0.3264229,
   0.06531517,
   0.04372919,
   0.03672624,
   0.03424912,
   0.03310978,
   0.03658037,
   0.04082097,
   0.04371699,
   0.05307099,
   0.06218206,
   0.07446502,
   0.07653591,
   0.1014477,
   0.1317112,
   0.1384015,
   0.1414841,
   0.1283683,
   0.1991722};
   Double_t _fehx3008[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3008[20] = {
   0,
   0.3039133,
   0.06531517,
   0.04372919,
   0.03672624,
   0.03424912,
   0.03310978,
   0.03658037,
   0.04082097,
   0.04371699,
   0.05307099,
   0.06218206,
   0.07446502,
   0.07476271,
   0.09871188,
   0.1282571,
   0.1342626,
   0.1361507,
   0.1189085,
   0.1897321};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1650);
   Graph_Graph3008->SetMinimum(0.2100581);
   Graph_Graph3008->SetMaximum(10.97666);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_transferred_visible_all",20,0,1500);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
   TLine *line = new TLine(0,1,1500,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
