#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 15:23:41 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-3.063886,101.5385,258.1727);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);
   hmc__1->SetBinContent(1,153.1943);
   hmc__1->SetBinContent(2,29.60619);
   hmc__1->SetBinContent(3,26.74174);
   hmc__1->SetBinContent(4,22.7878);
   hmc__1->SetBinContent(5,19.01768);
   hmc__1->SetBinContent(6,15.45668);
   hmc__1->SetBinContent(7,9.618273);
   hmc__1->SetBinContent(8,8.989588);
   hmc__1->SetBinContent(9,7.97507);
   hmc__1->SetBinContent(10,6.203043);
   hmc__1->SetBinContent(11,4.353215);
   hmc__1->SetBinContent(12,2.707154);
   hmc__1->SetBinContent(13,2.772607);
   hmc__1->SetBinContent(14,3.002527);
   hmc__1->SetBinContent(15,1.432068);
   hmc__1->SetBinContent(16,1.851565);
   hmc__1->SetBinContent(17,1.234495);
   hmc__1->SetBinContent(18,0.6099218);
   hmc__1->SetBinContent(19,7.958766);
   hmc__1->SetBinError(1,32.26067);
   hmc__1->SetBinError(2,8.522589);
   hmc__1->SetBinError(3,8.601539);
   hmc__1->SetBinError(4,6.744103);
   hmc__1->SetBinError(5,6.627093);
   hmc__1->SetBinError(6,4.656521);
   hmc__1->SetBinError(7,3.721789);
   hmc__1->SetBinError(8,3.039212);
   hmc__1->SetBinError(9,3.067995);
   hmc__1->SetBinError(10,2.379294);
   hmc__1->SetBinError(11,2.670258);
   hmc__1->SetBinError(12,1.352958);
   hmc__1->SetBinError(13,1.593368);
   hmc__1->SetBinError(14,1.858457);
   hmc__1->SetBinError(15,1.008191);
   hmc__1->SetBinError(16,1.419824);
   hmc__1->SetBinError(17,1.054145);
   hmc__1->SetBinError(18,0.6363642);
   hmc__1->SetBinError(19,3.277479);
   hmc__1->SetMinimum(-3.063886);
   hmc__1->SetMaximum(245.1109);
   hmc__1->SetEntries(321.7148);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",18,0,90);
   hs1_stack_1->SetMinimum(-1.314769e-09);
   hs1_stack_1->SetMaximum(160.854);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);
   hbadmatch_stack_1->SetBinContent(1,3.161329);
   hbadmatch_stack_1->SetBinContent(2,0.3586811);
   hbadmatch_stack_1->SetBinContent(3,0.6646446);
   hbadmatch_stack_1->SetBinContent(4,0.7215367);
   hbadmatch_stack_1->SetBinContent(5,0.1898765);
   hbadmatch_stack_1->SetBinContent(6,0.3069094);
   hbadmatch_stack_1->SetBinContent(7,0.2496199);
   hbadmatch_stack_1->SetBinContent(8,0.1536454);
   hbadmatch_stack_1->SetBinContent(9,0.2522184);
   hbadmatch_stack_1->SetBinContent(10,0.2669752);
   hbadmatch_stack_1->SetBinContent(11,0.1749134);
   hbadmatch_stack_1->SetBinContent(12,0.06195629);
   hbadmatch_stack_1->SetBinContent(13,0.2157996);
   hbadmatch_stack_1->SetBinContent(14,0.2605754);
   hbadmatch_stack_1->SetBinContent(15,0.0151077);
   hbadmatch_stack_1->SetBinContent(16,0.1479878);
   hbadmatch_stack_1->SetBinContent(17,0.1770681);
   hbadmatch_stack_1->SetBinContent(18,0.06195629);
   hbadmatch_stack_1->SetBinContent(19,0.4106854);
   hbadmatch_stack_1->SetBinError(1,0.4792536);
   hbadmatch_stack_1->SetBinError(2,0.1354224);
   hbadmatch_stack_1->SetBinError(3,0.3635192);
   hbadmatch_stack_1->SetBinError(4,0.21109);
   hbadmatch_stack_1->SetBinError(5,0.1020071);
   hbadmatch_stack_1->SetBinError(6,0.1337327);
   hbadmatch_stack_1->SetBinError(7,0.1110342);
   hbadmatch_stack_1->SetBinError(8,0.07102578);
   hbadmatch_stack_1->SetBinError(9,0.1185023);
   hbadmatch_stack_1->SetBinError(10,0.1282335);
   hbadmatch_stack_1->SetBinError(11,0.09125478);
   hbadmatch_stack_1->SetBinError(12,0.06195629);
   hbadmatch_stack_1->SetBinError(13,0.1255106);
   hbadmatch_stack_1->SetBinError(14,0.1245668);
   hbadmatch_stack_1->SetBinError(15,0.0151077);
   hbadmatch_stack_1->SetBinError(16,0.09680545);
   hbadmatch_stack_1->SetBinError(17,0.09158069);
   hbadmatch_stack_1->SetBinError(18,0.06195629);
   hbadmatch_stack_1->SetBinError(19,0.1304151);
   hbadmatch_stack_1->SetEntries(208);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);
   hext_stack_2->SetBinContent(1,14.3233);
   hext_stack_2->SetBinContent(2,1.29926);
   hext_stack_2->SetBinContent(3,2.567174);
   hext_stack_2->SetBinContent(4,1.660549);
   hext_stack_2->SetBinContent(5,1.81325);
   hext_stack_2->SetBinContent(6,1.277452);
   hext_stack_2->SetBinContent(7,0.7689253);
   hext_stack_2->SetBinContent(8,0.5085269);
   hext_stack_2->SetBinContent(9,0.9188949);
   hext_stack_2->SetBinContent(10,0.6189556);
   hext_stack_2->SetBinContent(11,0.2603984);
   hext_stack_2->SetBinContent(12,0.4349078);
   hext_stack_2->SetBinContent(13,0.2358586);
   hext_stack_2->SetBinContent(14,0.833006);
   hext_stack_2->SetBinContent(16,0.04907941);
   hext_stack_2->SetBinContent(17,0.2358586);
   hext_stack_2->SetBinContent(18,0.01226985);
   hext_stack_2->SetBinContent(19,0.9775128);
   hext_stack_2->SetBinError(1,1.55127);
   hext_stack_2->SetBinError(2,0.4057767);
   hext_stack_2->SetBinError(3,0.6350443);
   hext_stack_2->SetBinError(4,0.4934006);
   hext_stack_2->SetBinError(5,0.5653974);
   hext_stack_2->SetBinError(6,0.4489603);
   hext_stack_2->SetBinError(7,0.3478065);
   hext_stack_2->SetBinError(8,0.2838944);
   hext_stack_2->SetBinError(9,0.3999846);
   hext_stack_2->SetBinError(10,0.2862708);
   hext_stack_2->SetBinError(11,0.2009311);
   hext_stack_2->SetBinError(12,0.282299);
   hext_stack_2->SetBinError(13,0.2001804);
   hext_stack_2->SetBinError(14,0.3986651);
   hext_stack_2->SetBinError(16,0.0245397);
   hext_stack_2->SetBinError(17,0.2001804);
   hext_stack_2->SetBinError(18,0.01226985);
   hext_stack_2->SetBinError(19,0.3514665);
   hext_stack_2->SetEntries(581);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);
   hdirt_stack_3->SetBinContent(1,2.313659);
   hdirt_stack_3->SetBinContent(2,0.5069597);
   hdirt_stack_3->SetBinContent(3,0.3039755);
   hdirt_stack_3->SetBinContent(4,0.4340904);
   hdirt_stack_3->SetBinContent(5,0.2085533);
   hdirt_stack_3->SetBinContent(6,0.1474678);
   hdirt_stack_3->SetBinContent(7,0.1158097);
   hdirt_stack_3->SetBinContent(8,0.01884466);
   hdirt_stack_3->SetBinContent(9,0.1587525);
   hdirt_stack_3->SetBinContent(10,0.01769789);
   hdirt_stack_3->SetBinContent(11,0.09663776);
   hdirt_stack_3->SetBinContent(12,0.05017984);
   hdirt_stack_3->SetBinContent(13,0.054442);
   hdirt_stack_3->SetBinContent(14,0.01781772);
   hdirt_stack_3->SetBinContent(17,0.05298468);
   hdirt_stack_3->SetBinContent(19,0.05242869);
   hdirt_stack_3->SetBinError(1,0.3579821);
   hdirt_stack_3->SetBinError(2,0.1484636);
   hdirt_stack_3->SetBinError(3,0.104542);
   hdirt_stack_3->SetBinError(4,0.1279232);
   hdirt_stack_3->SetBinError(5,0.08959634);
   hdirt_stack_3->SetBinError(6,0.06640005);
   hdirt_stack_3->SetBinError(7,0.06452876);
   hdirt_stack_3->SetBinError(8,0.01332545);
   hdirt_stack_3->SetBinError(9,0.08256626);
   hdirt_stack_3->SetBinError(10,0.01254591);
   hdirt_stack_3->SetBinError(11,0.06305907);
   hdirt_stack_3->SetBinError(12,0.05017984);
   hdirt_stack_3->SetBinError(13,0.04694754);
   hdirt_stack_3->SetBinError(14,0.01263668);
   hdirt_stack_3->SetBinError(17,0.05298468);
   hdirt_stack_3->SetBinError(19,0.0449667);
   hdirt_stack_3->SetEntries(170);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);
   houtFV_stack_4->SetBinContent(1,18.52639);
   houtFV_stack_4->SetBinContent(2,3.142093);
   houtFV_stack_4->SetBinContent(3,3.354473);
   houtFV_stack_4->SetBinContent(4,2.928679);
   houtFV_stack_4->SetBinContent(5,3.373238);
   houtFV_stack_4->SetBinContent(6,2.376063);
   houtFV_stack_4->SetBinContent(7,1.44872);
   houtFV_stack_4->SetBinContent(8,1.393923);
   houtFV_stack_4->SetBinContent(9,1.133348);
   houtFV_stack_4->SetBinContent(10,1.204606);
   houtFV_stack_4->SetBinContent(11,0.5836775);
   houtFV_stack_4->SetBinContent(12,0.3647319);
   houtFV_stack_4->SetBinContent(13,0.6734421);
   houtFV_stack_4->SetBinContent(14,0.1257073);
   houtFV_stack_4->SetBinContent(15,0.2472776);
   houtFV_stack_4->SetBinContent(16,0.5721515);
   houtFV_stack_4->SetBinContent(17,0.1778466);
   houtFV_stack_4->SetBinContent(18,0.149413);
   houtFV_stack_4->SetBinContent(19,1.642669);
   houtFV_stack_4->SetBinError(1,1.010941);
   houtFV_stack_4->SetBinError(2,0.4081014);
   houtFV_stack_4->SetBinError(3,0.4339355);
   houtFV_stack_4->SetBinError(4,0.3996387);
   houtFV_stack_4->SetBinError(5,0.4279243);
   houtFV_stack_4->SetBinError(6,0.361801);
   houtFV_stack_4->SetBinError(7,0.2857578);
   houtFV_stack_4->SetBinError(8,0.2751303);
   houtFV_stack_4->SetBinError(9,0.2453157);
   houtFV_stack_4->SetBinError(10,0.2592252);
   houtFV_stack_4->SetBinError(11,0.1669004);
   houtFV_stack_4->SetBinError(12,0.1368356);
   houtFV_stack_4->SetBinError(13,0.1992136);
   houtFV_stack_4->SetBinError(14,0.06820132);
   houtFV_stack_4->SetBinError(15,0.1164646);
   houtFV_stack_4->SetBinError(16,0.1780002);
   houtFV_stack_4->SetBinError(17,0.09171061);
   houtFV_stack_4->SetBinError(18,0.08945557);
   houtFV_stack_4->SetBinError(19,0.2927005);
   houtFV_stack_4->SetEntries(1136);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);
   hNCpi0inFV_stack_5->SetBinContent(1,75.09258);
   hNCpi0inFV_stack_5->SetBinContent(2,15.51044);
   hNCpi0inFV_stack_5->SetBinContent(3,13.31069);
   hNCpi0inFV_stack_5->SetBinContent(4,11.64344);
   hNCpi0inFV_stack_5->SetBinContent(5,8.640452);
   hNCpi0inFV_stack_5->SetBinContent(6,6.699878);
   hNCpi0inFV_stack_5->SetBinContent(7,4.524229);
   hNCpi0inFV_stack_5->SetBinContent(8,4.724831);
   hNCpi0inFV_stack_5->SetBinContent(9,3.323541);
   hNCpi0inFV_stack_5->SetBinContent(10,2.499975);
   hNCpi0inFV_stack_5->SetBinContent(11,1.880412);
   hNCpi0inFV_stack_5->SetBinContent(12,0.9984794);
   hNCpi0inFV_stack_5->SetBinContent(13,0.8108159);
   hNCpi0inFV_stack_5->SetBinContent(14,1.182554);
   hNCpi0inFV_stack_5->SetBinContent(15,0.945684);
   hNCpi0inFV_stack_5->SetBinContent(16,0.7343147);
   hNCpi0inFV_stack_5->SetBinContent(17,0.2988259);
   hNCpi0inFV_stack_5->SetBinContent(18,0.2733256);
   hNCpi0inFV_stack_5->SetBinContent(19,2.403358);
   hNCpi0inFV_stack_5->SetBinError(1,2.014678);
   hNCpi0inFV_stack_5->SetBinError(2,0.9170918);
   hNCpi0inFV_stack_5->SetBinError(3,0.8565687);
   hNCpi0inFV_stack_5->SetBinError(4,0.8014573);
   hNCpi0inFV_stack_5->SetBinError(5,0.6810347);
   hNCpi0inFV_stack_5->SetBinError(6,0.5972877);
   hNCpi0inFV_stack_5->SetBinError(7,0.4842574);
   hNCpi0inFV_stack_5->SetBinError(8,0.5142962);
   hNCpi0inFV_stack_5->SetBinError(9,0.42375);
   hNCpi0inFV_stack_5->SetBinError(10,0.3722595);
   hNCpi0inFV_stack_5->SetBinError(11,0.3165301);
   hNCpi0inFV_stack_5->SetBinError(12,0.2220683);
   hNCpi0inFV_stack_5->SetBinError(13,0.2020503);
   hNCpi0inFV_stack_5->SetBinError(14,0.2526971);
   hNCpi0inFV_stack_5->SetBinError(15,0.2273539);
   hNCpi0inFV_stack_5->SetBinError(16,0.199622);
   hNCpi0inFV_stack_5->SetBinError(17,0.1265093);
   hNCpi0inFV_stack_5->SetBinError(18,0.1252177);
   hNCpi0inFV_stack_5->SetBinError(19,0.3580494);
   hNCpi0inFV_stack_5->SetEntries(4048);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);
   hCCpi0inFV_stack_6->SetBinContent(1,24.5747);
   hCCpi0inFV_stack_6->SetBinContent(2,5.088118);
   hCCpi0inFV_stack_6->SetBinContent(3,3.782643);
   hCCpi0inFV_stack_6->SetBinContent(4,3.722623);
   hCCpi0inFV_stack_6->SetBinContent(5,3.329858);
   hCCpi0inFV_stack_6->SetBinContent(6,3.348003);
   hCCpi0inFV_stack_6->SetBinContent(7,1.50688);
   hCCpi0inFV_stack_6->SetBinContent(8,1.321011);
   hCCpi0inFV_stack_6->SetBinContent(9,1.639953);
   hCCpi0inFV_stack_6->SetBinContent(10,1.039972);
   hCCpi0inFV_stack_6->SetBinContent(11,0.9347284);
   hCCpi0inFV_stack_6->SetBinContent(12,0.6450633);
   hCCpi0inFV_stack_6->SetBinContent(13,0.4609891);
   hCCpi0inFV_stack_6->SetBinContent(14,0.2368697);
   hCCpi0inFV_stack_6->SetBinContent(15,0.1899758);
   hCCpi0inFV_stack_6->SetBinContent(16,0.149413);
   hCCpi0inFV_stack_6->SetBinContent(17,0.1986191);
   hCCpi0inFV_stack_6->SetBinContent(18,0.08745668);
   hCCpi0inFV_stack_6->SetBinContent(19,1.284555);
   hCCpi0inFV_stack_6->SetBinError(1,1.159108);
   hCCpi0inFV_stack_6->SetBinError(2,0.5218294);
   hCCpi0inFV_stack_6->SetBinError(3,0.4472588);
   hCCpi0inFV_stack_6->SetBinError(4,0.4505511);
   hCCpi0inFV_stack_6->SetBinError(5,0.4166408);
   hCCpi0inFV_stack_6->SetBinError(6,0.4312913);
   hCCpi0inFV_stack_6->SetBinError(7,0.2831705);
   hCCpi0inFV_stack_6->SetBinError(8,0.2620493);
   hCCpi0inFV_stack_6->SetBinError(9,0.3067194);
   hCCpi0inFV_stack_6->SetBinError(10,0.2277648);
   hCCpi0inFV_stack_6->SetBinError(11,0.2202306);
   hCCpi0inFV_stack_6->SetBinError(12,0.196751);
   hCCpi0inFV_stack_6->SetBinError(13,0.1554653);
   hCCpi0inFV_stack_6->SetBinError(14,0.1102997);
   hCCpi0inFV_stack_6->SetBinError(15,0.09248951);
   hCCpi0inFV_stack_6->SetBinError(16,0.08945557);
   hCCpi0inFV_stack_6->SetBinError(17,0.1080662);
   hCCpi0inFV_stack_6->SetBinError(18,0.06452687);
   hCCpi0inFV_stack_6->SetBinError(19,0.2552574);
   hCCpi0inFV_stack_6->SetEntries(1411);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);
   hNCinFV_stack_7->SetBinContent(1,5.863562);
   hNCinFV_stack_7->SetBinContent(2,1.282761);
   hNCinFV_stack_7->SetBinContent(3,1.056846);
   hNCinFV_stack_7->SetBinContent(4,0.4864895);
   hNCinFV_stack_7->SetBinContent(5,0.4864895);
   hNCinFV_stack_7->SetBinContent(6,0.4864895);
   hNCinFV_stack_7->SetBinContent(7,0.4609891);
   hNCinFV_stack_7->SetBinContent(8,0.3115761);
   hNCinFV_stack_7->SetBinContent(9,0.2751203);
   hNCinFV_stack_7->SetBinContent(10,0.1129571);
   hNCinFV_stack_7->SetBinContent(11,0.2113693);
   hNCinFV_stack_7->SetBinContent(12,0.07470649);
   hNCinFV_stack_7->SetBinContent(13,0.07470649);
   hNCinFV_stack_7->SetBinContent(14,0.1366628);
   hNCinFV_stack_7->SetBinContent(15,0.02550039);
   hNCinFV_stack_7->SetBinContent(16,0.1239126);
   hNCinFV_stack_7->SetBinContent(18,0.02550039);
   hNCinFV_stack_7->SetBinContent(19,0.4609891);
   hNCinFV_stack_7->SetBinError(1,0.5617856);
   hNCinFV_stack_7->SetBinError(2,0.261117);
   hNCinFV_stack_7->SetBinError(3,0.2433196);
   hNCinFV_stack_7->SetBinError(4,0.1565075);
   hNCinFV_stack_7->SetBinError(5,0.1565075);
   hNCinFV_stack_7->SetBinError(6,0.1565075);
   hNCinFV_stack_7->SetBinError(7,0.1554653);
   hNCinFV_stack_7->SetBinError(8,0.1271502);
   hNCinFV_stack_7->SetBinError(9,0.1124887);
   hNCinFV_stack_7->SetBinError(10,0.0669989);
   hNCinFV_stack_7->SetBinError(11,0.1088158);
   hNCinFV_stack_7->SetBinError(12,0.06325464);
   hNCinFV_stack_7->SetBinError(13,0.06325464);
   hNCinFV_stack_7->SetBinError(14,0.08854226);
   hNCinFV_stack_7->SetBinError(15,0.0180315);
   hNCinFV_stack_7->SetBinError(16,0.08761943);
   hNCinFV_stack_7->SetBinError(18,0.0180315);
   hNCinFV_stack_7->SetBinError(19,0.1554653);
   hNCinFV_stack_7->SetEntries(328);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);
   hnumuCCinFV_stack_8->SetBinContent(1,7.653371);
   hnumuCCinFV_stack_8->SetBinContent(2,2.355918);
   hnumuCCinFV_stack_8->SetBinContent(3,1.530132);
   hnumuCCinFV_stack_8->SetBinContent(4,1.16489);
   hnumuCCinFV_stack_8->SetBinContent(5,0.8756209);
   hnumuCCinFV_stack_8->SetBinContent(6,0.7524617);
   hnumuCCinFV_stack_8->SetBinContent(7,0.3927301);
   hnumuCCinFV_stack_8->SetBinContent(8,0.4952729);
   hnumuCCinFV_stack_8->SetBinContent(9,0.2112851);
   hnumuCCinFV_stack_8->SetBinContent(10,0.441904);
   hnumuCCinFV_stack_8->SetBinContent(11,0.1915593);
   hnumuCCinFV_stack_8->SetBinContent(12,0.07712854);
   hnumuCCinFV_stack_8->SetBinContent(13,0.246553);
   hnumuCCinFV_stack_8->SetBinContent(14,0.2093351);
   hnumuCCinFV_stack_8->SetBinContent(15,0.008522355);
   hnumuCCinFV_stack_8->SetBinContent(16,0.07470649);
   hnumuCCinFV_stack_8->SetBinContent(17,0.09329186);
   hnumuCCinFV_stack_8->SetBinContent(19,0.7112349);
   hnumuCCinFV_stack_8->SetBinError(1,0.8240093);
   hnumuCCinFV_stack_8->SetBinError(2,0.5536546);
   hnumuCCinFV_stack_8->SetBinError(3,0.3892755);
   hnumuCCinFV_stack_8->SetBinError(4,0.2699137);
   hnumuCCinFV_stack_8->SetBinError(5,0.2666118);
   hnumuCCinFV_stack_8->SetBinError(6,0.2200142);
   hnumuCCinFV_stack_8->SetBinError(7,0.1426666);
   hnumuCCinFV_stack_8->SetBinError(8,0.1730804);
   hnumuCCinFV_stack_8->SetBinError(9,0.1157939);
   hnumuCCinFV_stack_8->SetBinError(10,0.1711395);
   hnumuCCinFV_stack_8->SetBinError(11,0.1041795);
   hnumuCCinFV_stack_8->SetBinError(12,0.07712853);
   hnumuCCinFV_stack_8->SetBinError(13,0.1070479);
   hnumuCCinFV_stack_8->SetBinError(14,0.1145469);
   hnumuCCinFV_stack_8->SetBinError(15,0.008522355);
   hnumuCCinFV_stack_8->SetBinError(16,0.06325464);
   hnumuCCinFV_stack_8->SetBinError(17,0.06942982);
   hnumuCCinFV_stack_8->SetBinError(19,0.2059943);
   hnumuCCinFV_stack_8->SetEntries(413);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);
   hnueCCinFV_stack_9->SetBinContent(1,1.685433);
   hnueCCinFV_stack_9->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(3,0.1711613);
   hnueCCinFV_stack_9->SetBinContent(4,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(5,0.1003365);
   hnueCCinFV_stack_9->SetBinContent(6,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(7,0.1503703);
   hnueCCinFV_stack_9->SetBinContent(8,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(9,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(11,0.01951835);
   hnueCCinFV_stack_9->SetBinContent(19,0.01533201);
   hnueCCinFV_stack_9->SetBinError(1,0.5399349);
   hnueCCinFV_stack_9->SetBinError(2,0.06195629);
   hnueCCinFV_stack_9->SetBinError(3,0.09177425);
   hnueCCinFV_stack_9->SetBinError(4,0.0180315);
   hnueCCinFV_stack_9->SetBinError(5,0.08463596);
   hnueCCinFV_stack_9->SetBinError(6,0.06195629);
   hnueCCinFV_stack_9->SetBinError(7,0.09455366);
   hnueCCinFV_stack_9->SetBinError(8,0.06195629);
   hnueCCinFV_stack_9->SetBinError(9,0.06195629);
   hnueCCinFV_stack_9->SetBinError(11,0.01951836);
   hnueCCinFV_stack_9->SetBinError(19,0.01533201);
   hnueCCinFV_stack_9->SetEntries(51);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);
   hmcerror__2->SetBinContent(1,153.1943);
   hmcerror__2->SetBinContent(2,29.60619);
   hmcerror__2->SetBinContent(3,26.74174);
   hmcerror__2->SetBinContent(4,22.7878);
   hmcerror__2->SetBinContent(5,19.01768);
   hmcerror__2->SetBinContent(6,15.45668);
   hmcerror__2->SetBinContent(7,9.618273);
   hmcerror__2->SetBinContent(8,8.989588);
   hmcerror__2->SetBinContent(9,7.97507);
   hmcerror__2->SetBinContent(10,6.203043);
   hmcerror__2->SetBinContent(11,4.353215);
   hmcerror__2->SetBinContent(12,2.707154);
   hmcerror__2->SetBinContent(13,2.772607);
   hmcerror__2->SetBinContent(14,3.002527);
   hmcerror__2->SetBinContent(15,1.432068);
   hmcerror__2->SetBinContent(16,1.851565);
   hmcerror__2->SetBinContent(17,1.234495);
   hmcerror__2->SetBinContent(18,0.6099218);
   hmcerror__2->SetBinContent(19,7.958766);
   hmcerror__2->SetBinError(1,32.26067);
   hmcerror__2->SetBinError(2,8.522589);
   hmcerror__2->SetBinError(3,8.601539);
   hmcerror__2->SetBinError(4,6.744103);
   hmcerror__2->SetBinError(5,6.627093);
   hmcerror__2->SetBinError(6,4.656521);
   hmcerror__2->SetBinError(7,3.721789);
   hmcerror__2->SetBinError(8,3.039212);
   hmcerror__2->SetBinError(9,3.067995);
   hmcerror__2->SetBinError(10,2.379294);
   hmcerror__2->SetBinError(11,2.670258);
   hmcerror__2->SetBinError(12,1.352958);
   hmcerror__2->SetBinError(13,1.593368);
   hmcerror__2->SetBinError(14,1.858457);
   hmcerror__2->SetBinError(15,1.008191);
   hmcerror__2->SetBinError(16,1.419824);
   hmcerror__2->SetBinError(17,1.054145);
   hmcerror__2->SetBinError(18,0.6363642);
   hmcerror__2->SetBinError(19,3.277479);
   hmcerror__2->SetEntries(321.7148);

   ci = TColor::GetColor("#666666");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3001[18] = {
   143,
   27,
   22,
   21,
   22,
   11,
   12,
   7,
   9,
   7,
   2,
   4,
   5,
   2,
   2,
   3,
   0,
   0};
   Double_t _felx3001[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3001[18] = {
   11.95826,
   5.3414,
   4.8417,
   4.7354,
   4.8417,
   3.4975,
   3.64022,
   2.85954,
   3.19354,
   2.85954,
   2,
   2.29683,
   2.48995,
   2,
   2,
   2.143368,
   0,
   0};
   Double_t _fehx3001[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3001[18] = {
   11.95826,
   5.1322,
   4.6299,
   4.5229,
   4.6299,
   3.27,
   3.4155,
   2.61053,
   2.9582,
   2.61053,
   1.51917,
   1.98186,
   2.21064,
   1.51917,
   1.51917,
   1.72422,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,99);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(170.4541);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.94#pm0.05(data err)#pm0.20(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.68/18","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 299.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 7.4","F");

   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 27.8","F");

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 41.8","F");

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  153.1","F");

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 52.3","F");

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 11.5","F");

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 16.8","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.4","F");

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3002[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3002[18] = {
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
   Double_t _felx3002[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3002[18] = {
   0.2105866,
   0.2878651,
   0.3216522,
   0.2959523,
   0.3484702,
   0.3012627,
   0.3869499,
   0.3380814,
   0.3846982,
   0.3835688,
   0.6133991,
   0.4997714,
   0.5746824,
   0.6189642,
   0.7040106,
   0.7668237,
   0.8539077,
   1.043354};
   Double_t _fehx3002[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3002[18] = {
   0.2105866,
   0.2878651,
   0.3216522,
   0.2959523,
   0.3484702,
   0.3012627,
   0.3869499,
   0.3380814,
   0.3846982,
   0.3835688,
   0.6133991,
   0.4997714,
   0.5746824,
   0.6189642,
   0.7040106,
   0.7668237,
   0.8539077,
   1.043354};
   grae = new TGraphAsymmErrors(18,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,99);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3003[18] = {
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
   Double_t _felx3003[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3003[18] = {
   0.1841345,
   0.1991635,
   0.1830783,
   0.1914214,
   0.1877154,
   0.2140239,
   0.2011715,
   0.2087648,
   0.2022518,
   0.2114338,
   0.2323539,
   0.2830368,
   0.254192,
   0.2385504,
   0.3236384,
   0.296929,
   0.3511253,
   0.4673112};
   Double_t _fehx3003[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3003[18] = {
   0.1841345,
   0.1991635,
   0.1830783,
   0.1914214,
   0.1877154,
   0.2140239,
   0.2011715,
   0.2087648,
   0.2022518,
   0.2114338,
   0.2323539,
   0.2830368,
   0.254192,
   0.2385504,
   0.3236384,
   0.296929,
   0.3511253,
   0.4673112};
   grae = new TGraphAsymmErrors(18,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,99);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3004[18] = {
   0.933455,
   0.9119715,
   0.8226838,
   0.9215457,
   1.156819,
   0.7116664,
   1.247625,
   0.7786786,
   1.128517,
   1.128478,
   0.4594306,
   1.477567,
   1.803357,
   0.6661055,
   1.396582,
   1.620251,
   0,
   0};
   Double_t _felx3004[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3004[18] = {
   0.07805943,
   0.180415,
   0.181054,
   0.2078042,
   0.2545895,
   0.2262776,
   0.3784692,
   0.3180947,
   0.4004404,
   0.4609899,
   0.4594306,
   0.8484298,
   0.8980538,
   0.6661055,
   1.396582,
   1.157598,
   0,
   0};
   Double_t _fehx3004[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3004[18] = {
   0.07805943,
   0.1733489,
   0.1731338,
   0.198479,
   0.2434525,
   0.211559,
   0.3551053,
   0.2903949,
   0.3709309,
   0.4208467,
   0.3489766,
   0.7320825,
   0.7973146,
   0.5059638,
   1.060823,
   0.9312229,
   0.929773,
   1.881881};
   grae = new TGraphAsymmErrors(18,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,99);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2.860739);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_10_kine_pio_gap_high_all",18,0,90);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
   TLine *line = new TLine(0,1,90,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
