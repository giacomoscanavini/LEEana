#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 16:37:55 2022) by ROOT version 6.26/00
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
   pad1->Range(-13.84615,-1.300341,101.5385,109.5709);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);
   hmc__1->SetBinContent(1,65.01706);
   hmc__1->SetBinContent(2,30.48676);
   hmc__1->SetBinContent(3,26.70864);
   hmc__1->SetBinContent(4,25.58888);
   hmc__1->SetBinContent(5,24.22559);
   hmc__1->SetBinContent(6,21.83365);
   hmc__1->SetBinContent(7,15.80796);
   hmc__1->SetBinContent(8,16.46657);
   hmc__1->SetBinContent(9,14.57898);
   hmc__1->SetBinContent(10,12.774);
   hmc__1->SetBinContent(11,8.739187);
   hmc__1->SetBinContent(12,7.268425);
   hmc__1->SetBinContent(13,7.807019);
   hmc__1->SetBinContent(14,5.828761);
   hmc__1->SetBinContent(15,4.120425);
   hmc__1->SetBinContent(16,4.530434);
   hmc__1->SetBinContent(17,3.97209);
   hmc__1->SetBinContent(18,2.764379);
   hmc__1->SetBinContent(19,26.9939);
   hmc__1->SetBinError(1,15.43224);
   hmc__1->SetBinError(2,7.490552);
   hmc__1->SetBinError(3,8.394317);
   hmc__1->SetBinError(4,7.055932);
   hmc__1->SetBinError(5,7.030633);
   hmc__1->SetBinError(6,6.47494);
   hmc__1->SetBinError(7,4.860612);
   hmc__1->SetBinError(8,4.785347);
   hmc__1->SetBinError(9,5.058825);
   hmc__1->SetBinError(10,3.740834);
   hmc__1->SetBinError(11,2.89158);
   hmc__1->SetBinError(12,2.545976);
   hmc__1->SetBinError(13,4.108395);
   hmc__1->SetBinError(14,3.441677);
   hmc__1->SetBinError(15,2.632079);
   hmc__1->SetBinError(16,2.571506);
   hmc__1->SetBinError(17,2.254185);
   hmc__1->SetBinError(18,1.907648);
   hmc__1->SetBinError(19,6.621184);
   hmc__1->SetMinimum(-1.300341);
   hmc__1->SetMaximum(104.0273);
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
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(68.26791);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);
   hbadmatch_stack_1->SetBinContent(1,2.013223);
   hbadmatch_stack_1->SetBinContent(2,0.3510656);
   hbadmatch_stack_1->SetBinContent(3,0.5742513);
   hbadmatch_stack_1->SetBinContent(4,0.3352548);
   hbadmatch_stack_1->SetBinContent(5,0.6197408);
   hbadmatch_stack_1->SetBinContent(6,0.524148);
   hbadmatch_stack_1->SetBinContent(7,0.3272633);
   hbadmatch_stack_1->SetBinContent(8,0.326587);
   hbadmatch_stack_1->SetBinContent(9,0.3508393);
   hbadmatch_stack_1->SetBinContent(10,0.2246545);
   hbadmatch_stack_1->SetBinContent(11,0.2346043);
   hbadmatch_stack_1->SetBinContent(12,0.08745668);
   hbadmatch_stack_1->SetBinContent(13,0.2009377);
   hbadmatch_stack_1->SetBinContent(14,0.2990946);
   hbadmatch_stack_1->SetBinContent(15,0.02911636);
   hbadmatch_stack_1->SetBinContent(16,0.2919684);
   hbadmatch_stack_1->SetBinContent(17,0.08745668);
   hbadmatch_stack_1->SetBinContent(18,0.08745668);
   hbadmatch_stack_1->SetBinContent(19,0.886367);
   hbadmatch_stack_1->SetBinError(1,0.4565466);
   hbadmatch_stack_1->SetBinError(2,0.1291819);
   hbadmatch_stack_1->SetBinError(3,0.1781629);
   hbadmatch_stack_1->SetBinError(4,0.1291697);
   hbadmatch_stack_1->SetBinError(5,0.1824554);
   hbadmatch_stack_1->SetBinError(6,0.2940987);
   hbadmatch_stack_1->SetBinError(7,0.1281142);
   hbadmatch_stack_1->SetBinError(8,0.1280332);
   hbadmatch_stack_1->SetBinError(9,0.1345064);
   hbadmatch_stack_1->SetBinError(10,0.1096238);
   hbadmatch_stack_1->SetBinError(11,0.1224256);
   hbadmatch_stack_1->SetBinError(12,0.06452687);
   hbadmatch_stack_1->SetBinError(13,0.1083643);
   hbadmatch_stack_1->SetBinError(14,0.1315463);
   hbadmatch_stack_1->SetBinError(15,0.02074654);
   hbadmatch_stack_1->SetBinError(16,0.1410707);
   hbadmatch_stack_1->SetBinError(17,0.06452687);
   hbadmatch_stack_1->SetBinError(18,0.06452687);
   hbadmatch_stack_1->SetBinError(19,0.2236977);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);
   hext_stack_2->SetBinContent(1,6.126863);
   hext_stack_2->SetBinContent(2,2.643525);
   hext_stack_2->SetBinContent(3,1.697359);
   hext_stack_2->SetBinContent(4,2.557636);
   hext_stack_2->SetBinContent(5,1.935949);
   hext_stack_2->SetBinContent(6,2.496286);
   hext_stack_2->SetBinContent(7,1.127482);
   hext_stack_2->SetBinContent(8,1.415152);
   hext_stack_2->SetBinContent(9,1.252912);
   hext_stack_2->SetBinContent(10,1.053863);
   hext_stack_2->SetBinContent(11,0.7198459);
   hext_stack_2->SetBinContent(12,0.1104287);
   hext_stack_2->SetBinContent(13,0.6707665);
   hext_stack_2->SetBinContent(14,0.9188949);
   hext_stack_2->SetBinContent(15,0.1104287);
   hext_stack_2->SetBinContent(16,0.707576);
   hext_stack_2->SetBinContent(17,0.2726682);
   hext_stack_2->SetBinContent(18,0.211319);
   hext_stack_2->SetBinContent(19,2.766223);
   hext_stack_2->SetBinError(1,0.9835922);
   hext_stack_2->SetBinError(2,0.6643767);
   hext_stack_2->SetBinError(3,0.4938581);
   hext_stack_2->SetBinError(4,0.6635831);
   hext_stack_2->SetBinError(5,0.5667272);
   hext_stack_2->SetBinError(6,0.6630156);
   hext_stack_2->SetBinError(7,0.4031712);
   hext_stack_2->SetBinError(8,0.4903398);
   hext_stack_2->SetBinError(9,0.4486249);
   hext_stack_2->SetBinError(10,0.4020494);
   hext_stack_2->SetBinError(11,0.3469397);
   hext_stack_2->SetBinError(12,0.03680956);
   hext_stack_2->SetBinError(13,0.3460707);
   hext_stack_2->SetBinError(14,0.3999846);
   hext_stack_2->SetBinError(15,0.03680956);
   hext_stack_2->SetBinError(16,0.3467226);
   hext_stack_2->SetBinError(17,0.2013053);
   hext_stack_2->SetBinError(18,0.1994269);
   hext_stack_2->SetBinError(19,0.6655087);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);
   hdirt_stack_3->SetBinContent(1,1.001801);
   hdirt_stack_3->SetBinContent(2,0.3074289);
   hdirt_stack_3->SetBinContent(3,0.323682);
   hdirt_stack_3->SetBinContent(4,0.4534151);
   hdirt_stack_3->SetBinContent(5,0.4230997);
   hdirt_stack_3->SetBinContent(6,0.3036903);
   hdirt_stack_3->SetBinContent(7,0.2665839);
   hdirt_stack_3->SetBinContent(8,0.2621169);
   hdirt_stack_3->SetBinContent(9,0.1496224);
   hdirt_stack_3->SetBinContent(10,0.1177172);
   hdirt_stack_3->SetBinContent(11,0.1039204);
   hdirt_stack_3->SetBinContent(12,0.1608262);
   hdirt_stack_3->SetBinContent(13,0.09663776);
   hdirt_stack_3->SetBinContent(14,0.05242869);
   hdirt_stack_3->SetBinContent(15,0.06010618);
   hdirt_stack_3->SetBinContent(16,0.09700783);
   hdirt_stack_3->SetBinContent(17,0.05242869);
   hdirt_stack_3->SetBinContent(19,0.3177884);
   hdirt_stack_3->SetBinError(1,0.1962751);
   hdirt_stack_3->SetBinError(2,0.1069325);
   hdirt_stack_3->SetBinError(3,0.1072436);
   hdirt_stack_3->SetBinError(4,0.2225619);
   hdirt_stack_3->SetBinError(5,0.1283723);
   hdirt_stack_3->SetBinError(6,0.1150769);
   hdirt_stack_3->SetBinError(7,0.1021196);
   hdirt_stack_3->SetBinError(8,0.1040865);
   hdirt_stack_3->SetBinError(9,0.08236396);
   hdirt_stack_3->SetBinError(10,0.06659703);
   hdirt_stack_3->SetBinError(11,0.06836224);
   hdirt_stack_3->SetBinError(12,0.0956651);
   hdirt_stack_3->SetBinError(13,0.06305907);
   hdirt_stack_3->SetBinError(14,0.0449667);
   hdirt_stack_3->SetBinError(15,0.05253359);
   hdirt_stack_3->SetBinError(16,0.06310837);
   hdirt_stack_3->SetBinError(17,0.0449667);
   hdirt_stack_3->SetBinError(19,0.1146347);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);
   houtFV_stack_4->SetBinContent(1,8.949446);
   houtFV_stack_4->SetBinContent(2,3.966171);
   houtFV_stack_4->SetBinContent(3,2.903507);
   houtFV_stack_4->SetBinContent(4,3.629464);
   houtFV_stack_4->SetBinContent(5,3.219473);
   houtFV_stack_4->SetBinContent(6,2.824301);
   houtFV_stack_4->SetBinContent(7,2.398443);
   houtFV_stack_4->SetBinContent(8,1.886492);
   houtFV_stack_4->SetBinContent(9,1.848808);
   houtFV_stack_4->SetBinContent(10,2.1038);
   houtFV_stack_4->SetBinContent(11,0.9388301);
   houtFV_stack_4->SetBinContent(12,1.37415);
   houtFV_stack_4->SetBinContent(13,0.7725652);
   houtFV_stack_4->SetBinContent(14,0.6489442);
   houtFV_stack_4->SetBinContent(15,0.9074333);
   houtFV_stack_4->SetBinContent(16,0.6705637);
   houtFV_stack_4->SetBinContent(17,0.3638246);
   houtFV_stack_4->SetBinContent(18,0.1129571);
   houtFV_stack_4->SetBinContent(19,3.899274);
   houtFV_stack_4->SetBinError(1,0.6975874);
   houtFV_stack_4->SetBinError(2,0.4699252);
   houtFV_stack_4->SetBinError(3,0.3867325);
   houtFV_stack_4->SetBinError(4,0.4487118);
   houtFV_stack_4->SetBinError(5,0.4273317);
   houtFV_stack_4->SetBinError(6,0.3935821);
   houtFV_stack_4->SetBinError(7,0.3726134);
   houtFV_stack_4->SetBinError(8,0.3119038);
   houtFV_stack_4->SetBinError(9,0.3087466);
   houtFV_stack_4->SetBinError(10,0.346787);
   houtFV_stack_4->SetBinError(11,0.2273656);
   houtFV_stack_4->SetBinError(12,0.2817872);
   houtFV_stack_4->SetBinError(13,0.2008398);
   houtFV_stack_4->SetBinError(14,0.1890576);
   houtFV_stack_4->SetBinError(15,0.2262788);
   houtFV_stack_4->SetBinError(16,0.1975755);
   houtFV_stack_4->SetBinError(17,0.1298107);
   houtFV_stack_4->SetBinError(18,0.0669989);
   houtFV_stack_4->SetBinError(19,0.4552076);
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);
   hNCpi0inFV_stack_5->SetBinContent(1,28.20817);
   hNCpi0inFV_stack_5->SetBinContent(2,16.2079);
   hNCpi0inFV_stack_5->SetBinContent(3,14.26356);
   hNCpi0inFV_stack_5->SetBinContent(4,13.42903);
   hNCpi0inFV_stack_5->SetBinContent(5,11.43247);
   hNCpi0inFV_stack_5->SetBinContent(6,9.505858);
   hNCpi0inFV_stack_5->SetBinContent(7,8.111564);
   hNCpi0inFV_stack_5->SetBinContent(8,8.310741);
   hNCpi0inFV_stack_5->SetBinContent(9,6.958659);
   hNCpi0inFV_stack_5->SetBinContent(10,6.268166);
   hNCpi0inFV_stack_5->SetBinContent(11,4.345726);
   hNCpi0inFV_stack_5->SetBinContent(12,3.449249);
   hNCpi0inFV_stack_5->SetBinContent(13,3.768191);
   hNCpi0inFV_stack_5->SetBinContent(14,2.647593);
   hNCpi0inFV_stack_5->SetBinContent(15,2.117282);
   hNCpi0inFV_stack_5->SetBinContent(16,1.915074);
   hNCpi0inFV_stack_5->SetBinContent(17,1.882207);
   hNCpi0inFV_stack_5->SetBinContent(18,1.368423);
   hNCpi0inFV_stack_5->SetBinContent(19,11.30797);
   hNCpi0inFV_stack_5->SetBinError(1,1.233364);
   hNCpi0inFV_stack_5->SetBinError(2,0.9463845);
   hNCpi0inFV_stack_5->SetBinError(3,0.879373);
   hNCpi0inFV_stack_5->SetBinError(4,0.8538862);
   hNCpi0inFV_stack_5->SetBinError(5,0.782459);
   hNCpi0inFV_stack_5->SetBinError(6,0.706563);
   hNCpi0inFV_stack_5->SetBinError(7,0.6631766);
   hNCpi0inFV_stack_5->SetBinError(8,0.6756891);
   hNCpi0inFV_stack_5->SetBinError(9,0.6126134);
   hNCpi0inFV_stack_5->SetBinError(10,0.5900843);
   hNCpi0inFV_stack_5->SetBinError(11,0.4819017);
   hNCpi0inFV_stack_5->SetBinError(12,0.4292033);
   hNCpi0inFV_stack_5->SetBinError(13,0.4578454);
   hNCpi0inFV_stack_5->SetBinError(14,0.3867883);
   hNCpi0inFV_stack_5->SetBinError(15,0.3351974);
   hNCpi0inFV_stack_5->SetBinError(16,0.3266963);
   hNCpi0inFV_stack_5->SetBinError(17,0.3117139);
   hNCpi0inFV_stack_5->SetBinError(18,0.2745388);
   hNCpi0inFV_stack_5->SetBinError(19,0.7755469);
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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);
   hCCpi0inFV_stack_6->SetBinContent(1,10.61623);
   hCCpi0inFV_stack_6->SetBinContent(2,4.33109);
   hCCpi0inFV_stack_6->SetBinContent(3,3.853011);
   hCCpi0inFV_stack_6->SetBinContent(4,4.008197);
   hCCpi0inFV_stack_6->SetBinContent(5,4.621203);
   hCCpi0inFV_stack_6->SetBinContent(6,4.602713);
   hCCpi0inFV_stack_6->SetBinContent(7,2.388237);
   hCCpi0inFV_stack_6->SetBinContent(8,2.850395);
   hCCpi0inFV_stack_6->SetBinContent(9,2.777271);
   hCCpi0inFV_stack_6->SetBinContent(10,2.179756);
   hCCpi0inFV_stack_6->SetBinContent(11,1.576931);
   hCCpi0inFV_stack_6->SetBinContent(12,1.380672);
   hCCpi0inFV_stack_6->SetBinContent(13,1.715993);
   hCCpi0inFV_stack_6->SetBinContent(14,0.5356956);
   hCCpi0inFV_stack_6->SetBinContent(15,0.326121);
   hCCpi0inFV_stack_6->SetBinContent(16,0.5721515);
   hCCpi0inFV_stack_6->SetBinContent(17,0.7835208);
   hCCpi0inFV_stack_6->SetBinContent(18,0.4227385);
   hCCpi0inFV_stack_6->SetBinContent(19,3.999504);
   hCCpi0inFV_stack_6->SetBinError(1,0.761885);
   hCCpi0inFV_stack_6->SetBinError(2,0.4864758);
   hCCpi0inFV_stack_6->SetBinError(3,0.4490034);
   hCCpi0inFV_stack_6->SetBinError(4,0.4583274);
   hCCpi0inFV_stack_6->SetBinError(5,0.4979641);
   hCCpi0inFV_stack_6->SetBinError(6,0.5037833);
   hCCpi0inFV_stack_6->SetBinError(7,0.3448724);
   hCCpi0inFV_stack_6->SetBinError(8,0.3978999);
   hCCpi0inFV_stack_6->SetBinError(9,0.3909236);
   hCCpi0inFV_stack_6->SetBinError(10,0.345378);
   hCCpi0inFV_stack_6->SetBinError(11,0.2917065);
   hCCpi0inFV_stack_6->SetBinError(12,0.2744788);
   hCCpi0inFV_stack_6->SetBinError(13,0.3150558);
   hCCpi0inFV_stack_6->SetBinError(14,0.167841);
   hCCpi0inFV_stack_6->SetBinError(15,0.1153429);
   hCCpi0inFV_stack_6->SetBinError(16,0.1780002);
   hCCpi0inFV_stack_6->SetBinError(17,0.2086263);
   hCCpi0inFV_stack_6->SetBinError(18,0.1538888);
   hCCpi0inFV_stack_6->SetBinError(19,0.4630357);
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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);
   hNCinFV_stack_7->SetBinContent(1,2.567316);
   hNCinFV_stack_7->SetBinContent(2,0.7598151);
   hNCinFV_stack_7->SetBinContent(3,1.133348);
   hNCinFV_stack_7->SetBinContent(4,0.5884911);
   hNCinFV_stack_7->SetBinContent(5,0.6121968);
   hNCinFV_stack_7->SetBinContent(6,0.6231523);
   hNCinFV_stack_7->SetBinContent(7,0.4864895);
   hNCinFV_stack_7->SetBinContent(8,0.6213576);
   hNCinFV_stack_7->SetBinContent(9,0.7197698);
   hNCinFV_stack_7->SetBinContent(10,0.4609891);
   hNCinFV_stack_7->SetBinContent(11,0.4227385);
   hNCinFV_stack_7->SetBinContent(12,0.2368697);
   hNCinFV_stack_7->SetBinContent(13,0.05100079);
   hNCinFV_stack_7->SetBinContent(14,0.4846948);
   hNCinFV_stack_7->SetBinContent(15,0.2113693);
   hNCinFV_stack_7->SetBinContent(16,0.08745668);
   hNCinFV_stack_7->SetBinContent(17,0.3225317);
   hNCinFV_stack_7->SetBinContent(18,0.02550039);
   hNCinFV_stack_7->SetBinContent(19,1.541541);
   hNCinFV_stack_7->SetBinError(1,0.3651554);
   hNCinFV_stack_7->SetBinError(2,0.2004347);
   hNCinFV_stack_7->SetBinError(3,0.2453157);
   hNCinFV_stack_7->SetBinError(4,0.1606087);
   hNCinFV_stack_7->SetBinError(5,0.1707221);
   hNCinFV_stack_7->SetBinError(6,0.1798175);
   hNCinFV_stack_7->SetBinError(7,0.1565075);
   hNCinFV_stack_7->SetBinError(8,0.1880427);
   hNCinFV_stack_7->SetBinError(9,0.2066691);
   hNCinFV_stack_7->SetBinError(10,0.1554653);
   hNCinFV_stack_7->SetBinError(11,0.1538888);
   hNCinFV_stack_7->SetBinError(12,0.1102997);
   hNCinFV_stack_7->SetBinError(13,0.02550039);
   hNCinFV_stack_7->SetBinError(14,0.1658926);
   hNCinFV_stack_7->SetBinError(15,0.1088158);
   hNCinFV_stack_7->SetBinError(16,0.06452687);
   hNCinFV_stack_7->SetBinError(17,0.139124);
   hNCinFV_stack_7->SetBinError(18,0.0180315);
   hNCinFV_stack_7->SetBinError(19,0.2944907);
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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);
   hnumuCCinFV_stack_8->SetBinContent(1,5.2898);
   hnumuCCinFV_stack_8->SetBinContent(2,1.682021);
   hnumuCCinFV_stack_8->SetBinContent(3,1.95993);
   hnumuCCinFV_stack_8->SetBinContent(4,0.496776);
   hnumuCCinFV_stack_8->SetBinContent(5,1.220971);
   hnumuCCinFV_stack_8->SetBinContent(6,0.7877714);
   hnumuCCinFV_stack_8->SetBinContent(7,0.6838481);
   hnumuCCinFV_stack_8->SetBinContent(8,0.7199958);
   hnumuCCinFV_stack_8->SetBinContent(9,0.4591401);
   hnumuCCinFV_stack_8->SetBinContent(10,0.2411371);
   hnumuCCinFV_stack_8->SetBinContent(11,0.3030771);
   hnumuCCinFV_stack_8->SetBinContent(12,0.3240173);
   hnumuCCinFV_stack_8->SetBinContent(13,0.4689711);
   hnumuCCinFV_stack_8->SetBinContent(14,0.2261474);
   hnumuCCinFV_stack_8->SetBinContent(15,0.2090407);
   hnumuCCinFV_stack_8->SetBinContent(16,0.1758854);
   hnumuCCinFV_stack_8->SetBinContent(17,0.1795978);
   hnumuCCinFV_stack_8->SetBinContent(18,0.5359844);
   hnumuCCinFV_stack_8->SetBinContent(19,1.521806);
   hnumuCCinFV_stack_8->SetBinError(1,0.6506981);
   hnumuCCinFV_stack_8->SetBinError(2,0.3535672);
   hnumuCCinFV_stack_8->SetBinError(3,0.5767123);
   hnumuCCinFV_stack_8->SetBinError(4,0.1618593);
   hnumuCCinFV_stack_8->SetBinError(5,0.2681202);
   hnumuCCinFV_stack_8->SetBinError(6,0.2179559);
   hnumuCCinFV_stack_8->SetBinError(7,0.1922853);
   hnumuCCinFV_stack_8->SetBinError(8,0.2120025);
   hnumuCCinFV_stack_8->SetBinError(9,0.1661427);
   hnumuCCinFV_stack_8->SetBinError(10,0.1200073);
   hnumuCCinFV_stack_8->SetBinError(11,0.1269702);
   hnumuCCinFV_stack_8->SetBinError(12,0.128638);
   hnumuCCinFV_stack_8->SetBinError(13,0.1753777);
   hnumuCCinFV_stack_8->SetBinError(14,0.1098147);
   hnumuCCinFV_stack_8->SetBinError(15,0.1011471);
   hnumuCCinFV_stack_8->SetBinError(16,0.09787006);
   hnumuCCinFV_stack_8->SetBinError(17,0.09969961);
   hnumuCCinFV_stack_8->SetBinError(18,0.4176562);
   hnumuCCinFV_stack_8->SetBinError(19,0.2914058);
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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);
   hnueCCinFV_stack_9->SetBinContent(1,0.2442116);
   hnueCCinFV_stack_9->SetBinContent(2,0.2377356);
   hnueCCinFV_stack_9->SetBinContent(4,0.09061458);
   hnueCCinFV_stack_9->SetBinContent(5,0.1404899);
   hnueCCinFV_stack_9->SetBinContent(6,0.1657281);
   hnueCCinFV_stack_9->SetBinContent(7,0.0180466);
   hnueCCinFV_stack_9->SetBinContent(8,0.07373609);
   hnueCCinFV_stack_9->SetBinContent(9,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(10,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(11,0.09351396);
   hnueCCinFV_stack_9->SetBinContent(12,0.1447554);
   hnueCCinFV_stack_9->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(14,0.01526697);
   hnueCCinFV_stack_9->SetBinContent(15,0.1495277);
   hnueCCinFV_stack_9->SetBinContent(16,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(17,0.02785392);
   hnueCCinFV_stack_9->SetBinContent(19,0.753421);
   hnueCCinFV_stack_9->SetBinError(1,0.115263);
   hnueCCinFV_stack_9->SetBinError(2,0.1202112);
   hnueCCinFV_stack_9->SetBinError(4,0.06522436);
   hnueCCinFV_stack_9->SetBinError(5,0.09403124);
   hnueCCinFV_stack_9->SetBinError(6,0.1208601);
   hnueCCinFV_stack_9->SetBinError(7,0.0180466);
   hnueCCinFV_stack_9->SetBinError(8,0.03346898);
   hnueCCinFV_stack_9->SetBinError(9,0.06195629);
   hnueCCinFV_stack_9->SetBinError(10,0.08761943);
   hnueCCinFV_stack_9->SetBinError(11,0.06599144);
   hnueCCinFV_stack_9->SetBinError(12,0.1034131);
   hnueCCinFV_stack_9->SetBinError(13,0.06195629);
   hnueCCinFV_stack_9->SetBinError(14,0.01526697);
   hnueCCinFV_stack_9->SetBinError(15,0.09470549);
   hnueCCinFV_stack_9->SetBinError(16,0.0127502);
   hnueCCinFV_stack_9->SetBinError(17,0.02785392);
   hnueCCinFV_stack_9->SetBinError(19,0.4846874);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);
   hmcerror__2->SetBinContent(1,65.01706);
   hmcerror__2->SetBinContent(2,30.48676);
   hmcerror__2->SetBinContent(3,26.70864);
   hmcerror__2->SetBinContent(4,25.58888);
   hmcerror__2->SetBinContent(5,24.22559);
   hmcerror__2->SetBinContent(6,21.83365);
   hmcerror__2->SetBinContent(7,15.80796);
   hmcerror__2->SetBinContent(8,16.46657);
   hmcerror__2->SetBinContent(9,14.57898);
   hmcerror__2->SetBinContent(10,12.774);
   hmcerror__2->SetBinContent(11,8.739187);
   hmcerror__2->SetBinContent(12,7.268425);
   hmcerror__2->SetBinContent(13,7.807019);
   hmcerror__2->SetBinContent(14,5.828761);
   hmcerror__2->SetBinContent(15,4.120425);
   hmcerror__2->SetBinContent(16,4.530434);
   hmcerror__2->SetBinContent(17,3.97209);
   hmcerror__2->SetBinContent(18,2.764379);
   hmcerror__2->SetBinContent(19,26.9939);
   hmcerror__2->SetBinError(1,15.43224);
   hmcerror__2->SetBinError(2,7.490552);
   hmcerror__2->SetBinError(3,8.394317);
   hmcerror__2->SetBinError(4,7.055932);
   hmcerror__2->SetBinError(5,7.030633);
   hmcerror__2->SetBinError(6,6.47494);
   hmcerror__2->SetBinError(7,4.860612);
   hmcerror__2->SetBinError(8,4.785347);
   hmcerror__2->SetBinError(9,5.058825);
   hmcerror__2->SetBinError(10,3.740834);
   hmcerror__2->SetBinError(11,2.89158);
   hmcerror__2->SetBinError(12,2.545976);
   hmcerror__2->SetBinError(13,4.108395);
   hmcerror__2->SetBinError(14,3.441677);
   hmcerror__2->SetBinError(15,2.632079);
   hmcerror__2->SetBinError(16,2.571506);
   hmcerror__2->SetBinError(17,2.254185);
   hmcerror__2->SetBinError(18,1.907648);
   hmcerror__2->SetBinError(19,6.621184);
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
   57,
   26,
   29,
   37,
   21,
   13,
   18,
   12,
   16,
   8,
   11,
   8,
   7,
   1,
   6,
   1,
   6,
   1};
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
   7.679,
   5.2453,
   5.5285,
   6.2203,
   4.7354,
   3.77763,
   4.4008,
   3.64022,
   4.1628,
   3.0307,
   3.4975,
   3.0307,
   2.85954,
   1,
   2.67925,
   1,
   2.67925,
   1};
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
   7.4757,
   5.0358,
   5.3201,
   6.0141,
   4.5229,
   3.5552,
   4.1858,
   3.4155,
   3.9454,
   2.7896,
   3.27,
   2.7896,
   2.61053,
   1.35971,
   2.41858,
   1.35971,
   2.41858,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,99);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(70.92327);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.93#pm0.06(data err)#pm0.20(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.61/18","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 278.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 7.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 26.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 39.5","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  144.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 49.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 10.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 16.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all");
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
   0.2373568,
   0.2456986,
   0.3142922,
   0.2757421,
   0.2902151,
   0.2965579,
   0.3074788,
   0.2906098,
   0.3469945,
   0.2928476,
   0.3308751,
   0.350279,
   0.5262437,
   0.5904647,
   0.6387883,
   0.567607,
   0.5675062,
   0.6900821};
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
   0.2373568,
   0.2456986,
   0.3142922,
   0.2757421,
   0.2902151,
   0.2965579,
   0.3074788,
   0.2906098,
   0.3469945,
   0.2928476,
   0.3308751,
   0.350279,
   0.5262437,
   0.5904647,
   0.6387883,
   0.567607,
   0.5675062,
   0.6900821};
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
   0.1898551,
   0.1924374,
   0.1967277,
   0.1973622,
   0.2007997,
   0.1915547,
   0.1981164,
   0.1861974,
   0.200037,
   0.1929386,
   0.2101549,
   0.199416,
   0.2098906,
   0.2106184,
   0.2668649,
   0.2203813,
   0.2369643,
   0.4304697};
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
   0.1898551,
   0.1924374,
   0.1967277,
   0.1973622,
   0.2007997,
   0.1915547,
   0.1981164,
   0.1861974,
   0.200037,
   0.1929386,
   0.2101549,
   0.199416,
   0.2098906,
   0.2106184,
   0.2668649,
   0.2203813,
   0.2369643,
   0.4304697};
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
   0.876693,
   0.8528294,
   1.085791,
   1.445941,
   0.8668519,
   0.5954113,
   1.138667,
   0.7287491,
   1.097471,
   0.6262723,
   1.258698,
   1.100651,
   0.896629,
   0.1715631,
   1.45616,
   0.2207294,
   1.51054,
   0.361745};
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
   0.1181075,
   0.1720518,
   0.2069929,
   0.2430861,
   0.195471,
   0.1730187,
   0.2783914,
   0.2210673,
   0.2855344,
   0.2372554,
   0.4002088,
   0.4169679,
   0.3662781,
   0.1715631,
   0.6502363,
   0.2207294,
   0.674519,
   0.361745};
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
   0.1149806,
   0.1651799,
   0.1991902,
   0.2350279,
   0.1866993,
   0.1628313,
   0.2647907,
   0.2074202,
   0.2706225,
   0.2183812,
   0.3741767,
   0.3837971,
   0.3343824,
   0.233276,
   0.5869734,
   0.300128,
   0.6088936,
   0.4918682};
   grae = new TGraphAsymmErrors(18,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,99);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2.331377);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_10_kine_pio_gap_low_all",18,0,90);

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
