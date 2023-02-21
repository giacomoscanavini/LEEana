#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sun Jun  5 00:24:18 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-7.387029,1692.308,816.8499);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hmc__19->SetBinContent(3,18.38057);
   hmc__19->SetBinContent(4,123.759);
   hmc__19->SetBinContent(5,265.9851);
   hmc__19->SetBinContent(6,355.1314);
   hmc__19->SetBinContent(7,369.3515);
   hmc__19->SetBinContent(8,325.6635);
   hmc__19->SetBinContent(9,297.3157);
   hmc__19->SetBinContent(10,229.5107);
   hmc__19->SetBinContent(11,188.4933);
   hmc__19->SetBinContent(12,136.4703);
   hmc__19->SetBinContent(13,102.3822);
   hmc__19->SetBinContent(14,83.09233);
   hmc__19->SetBinContent(15,54.21477);
   hmc__19->SetBinContent(16,44.81942);
   hmc__19->SetBinContent(17,35.21712);
   hmc__19->SetBinContent(18,29.93476);
   hmc__19->SetBinContent(19,18.46378);
   hmc__19->SetBinContent(20,16.08291);
   hmc__19->SetBinContent(21,48.84295);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,0.3895343);
   hmc__19->SetBinError(3,5.886923);
   hmc__19->SetBinError(4,30.38055);
   hmc__19->SetBinError(5,60.71617);
   hmc__19->SetBinError(6,87.07666);
   hmc__19->SetBinError(7,90.54594);
   hmc__19->SetBinError(8,82.1481);
   hmc__19->SetBinError(9,75.30745);
   hmc__19->SetBinError(10,60.5703);
   hmc__19->SetBinError(11,51.59529);
   hmc__19->SetBinError(12,36.98022);
   hmc__19->SetBinError(13,30.89288);
   hmc__19->SetBinError(14,24.46605);
   hmc__19->SetBinError(15,20.235);
   hmc__19->SetBinError(16,15.99352);
   hmc__19->SetBinError(17,13.74382);
   hmc__19->SetBinError(18,11.15812);
   hmc__19->SetBinError(19,7.495708);
   hmc__19->SetBinError(20,8.558114);
   hmc__19->SetBinError(21,19.82668);
   hmc__19->SetMinimum(-7.387029);
   hmc__19->SetMaximum(775.6381);
   hmc__19->SetEntries(2712.362);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,0,1500);
   hs7_stack_7->SetMinimum(-6.289654e-09);
   hs7_stack_7->SetMaximum(387.819);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(3,0.1950248);
   hbadmatch_stack_1->SetBinContent(4,3.325363);
   hbadmatch_stack_1->SetBinContent(5,6.62064);
   hbadmatch_stack_1->SetBinContent(6,6.686856);
   hbadmatch_stack_1->SetBinContent(7,7.256668);
   hbadmatch_stack_1->SetBinContent(8,5.430781);
   hbadmatch_stack_1->SetBinContent(9,7.678593);
   hbadmatch_stack_1->SetBinContent(10,2.433235);
   hbadmatch_stack_1->SetBinContent(11,4.460041);
   hbadmatch_stack_1->SetBinContent(12,3.43348);
   hbadmatch_stack_1->SetBinContent(13,2.517519);
   hbadmatch_stack_1->SetBinContent(14,2.242721);
   hbadmatch_stack_1->SetBinContent(15,1.467217);
   hbadmatch_stack_1->SetBinContent(16,0.3934307);
   hbadmatch_stack_1->SetBinContent(17,0.3900497);
   hbadmatch_stack_1->SetBinContent(18,1.073786);
   hbadmatch_stack_1->SetBinContent(19,0.3917402);
   hbadmatch_stack_1->SetBinContent(20,0.6475976);
   hbadmatch_stack_1->SetBinContent(21,1.26712);
   hbadmatch_stack_1->SetBinError(3,0.1950249);
   hbadmatch_stack_1->SetBinError(4,1.059346);
   hbadmatch_stack_1->SetBinError(5,1.4323);
   hbadmatch_stack_1->SetBinError(6,2.220407);
   hbadmatch_stack_1->SetBinError(7,1.725871);
   hbadmatch_stack_1->SetBinError(8,1.149721);
   hbadmatch_stack_1->SetBinError(9,1.461391);
   hbadmatch_stack_1->SetBinError(10,0.7960006);
   hbadmatch_stack_1->SetBinError(11,1.087922);
   hbadmatch_stack_1->SetBinError(12,0.9894628);
   hbadmatch_stack_1->SetBinError(13,0.9138363);
   hbadmatch_stack_1->SetBinError(14,0.7731298);
   hbadmatch_stack_1->SetBinError(15,0.6214735);
   hbadmatch_stack_1->SetBinError(16,0.2781975);
   hbadmatch_stack_1->SetBinError(17,0.2758068);
   hbadmatch_stack_1->SetBinError(18,0.5557297);
   hbadmatch_stack_1->SetBinError(19,0.2770047);
   hbadmatch_stack_1->SetBinError(20,0.3768218);
   hbadmatch_stack_1->SetBinError(21,0.5883944);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1518;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hext_stack_2->SetBinContent(3,1.379791);
   hext_stack_2->SetBinContent(4,11.01401);
   hext_stack_2->SetBinContent(5,27.34406);
   hext_stack_2->SetBinContent(6,20.94946);
   hext_stack_2->SetBinContent(7,27.10904);
   hext_stack_2->SetBinContent(8,19.47033);
   hext_stack_2->SetBinContent(9,18.5937);
   hext_stack_2->SetBinContent(10,10.25707);
   hext_stack_2->SetBinContent(11,16.77695);
   hext_stack_2->SetBinContent(12,9.772676);
   hext_stack_2->SetBinContent(13,6.578966);
   hext_stack_2->SetBinContent(14,3.088388);
   hext_stack_2->SetBinContent(15,2.028585);
   hext_stack_2->SetBinContent(16,4.352847);
   hext_stack_2->SetBinContent(17,0.7309963);
   hext_stack_2->SetBinContent(18,2.599588);
   hext_stack_2->SetBinContent(19,0.973192);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,4.677244);
   hext_stack_2->SetBinError(3,0.6935586);
   hext_stack_2->SetBinError(4,2.188177);
   hext_stack_2->SetBinError(5,3.748719);
   hext_stack_2->SetBinError(6,3.054931);
   hext_stack_2->SetBinError(7,3.715716);
   hext_stack_2->SetBinError(8,3.087105);
   hext_stack_2->SetBinError(9,2.978624);
   hext_stack_2->SetBinError(10,2.232945);
   hext_stack_2->SetBinError(11,2.925613);
   hext_stack_2->SetBinError(12,2.212635);
   hext_stack_2->SetBinError(13,1.560451);
   hext_stack_2->SetBinError(14,1.096541);
   hext_stack_2->SetBinError(15,0.8315593);
   hext_stack_2->SetBinError(16,1.514272);
   hext_stack_2->SetBinError(17,0.5201503);
   hext_stack_2->SetBinError(18,0.9884288);
   hext_stack_2->SetBinError(19,0.5618727);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,1.54863);
   hext_stack_2->SetEntries(428);

   ci = 1519;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hdirt_stack_3->SetBinContent(3,0.4247338);
   hdirt_stack_3->SetBinContent(4,0.9220302);
   hdirt_stack_3->SetBinContent(5,2.746344);
   hdirt_stack_3->SetBinContent(6,2.581139);
   hdirt_stack_3->SetBinContent(7,1.759581);
   hdirt_stack_3->SetBinContent(8,1.39498);
   hdirt_stack_3->SetBinContent(9,0.4950385);
   hdirt_stack_3->SetBinContent(10,0.4377912);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinError(3,0.4247338);
   hdirt_stack_3->SetBinError(4,0.4185005);
   hdirt_stack_3->SetBinError(5,0.8276296);
   hdirt_stack_3->SetBinError(6,1.13844);
   hdirt_stack_3->SetBinError(7,0.6595295);
   hdirt_stack_3->SetBinError(8,0.5880834);
   hdirt_stack_3->SetBinError(9,0.2933304);
   hdirt_stack_3->SetBinError(10,0.3095651);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(19,0.3381872);
   hdirt_stack_3->SetEntries(50);

   ci = 1520;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   houtFV_stack_4->SetBinContent(3,1.91014);
   houtFV_stack_4->SetBinContent(4,9.476577);
   houtFV_stack_4->SetBinContent(5,13.33581);
   houtFV_stack_4->SetBinContent(6,17.62741);
   houtFV_stack_4->SetBinContent(7,12.84695);
   houtFV_stack_4->SetBinContent(8,13.83778);
   houtFV_stack_4->SetBinContent(9,7.037038);
   houtFV_stack_4->SetBinContent(10,5.138964);
   houtFV_stack_4->SetBinContent(11,2.014397);
   houtFV_stack_4->SetBinContent(12,3.077896);
   houtFV_stack_4->SetBinContent(13,2.756957);
   houtFV_stack_4->SetBinContent(14,1.853885);
   houtFV_stack_4->SetBinContent(15,1.322064);
   houtFV_stack_4->SetBinContent(16,0.5850745);
   houtFV_stack_4->SetBinContent(17,0.3917402);
   houtFV_stack_4->SetBinContent(18,0.1967154);
   houtFV_stack_4->SetBinContent(19,0.1967154);
   houtFV_stack_4->SetBinContent(20,0.3934307);
   houtFV_stack_4->SetBinContent(21,1.072095);
   houtFV_stack_4->SetBinError(3,0.707861);
   houtFV_stack_4->SetBinError(4,1.532169);
   houtFV_stack_4->SetBinError(5,1.92823);
   houtFV_stack_4->SetBinError(6,2.060759);
   houtFV_stack_4->SetBinError(7,1.771911);
   houtFV_stack_4->SetBinError(8,1.851692);
   houtFV_stack_4->SetBinError(9,1.355723);
   houtFV_stack_4->SetBinError(10,1.111156);
   houtFV_stack_4->SetBinError(11,0.6391279);
   houtFV_stack_4->SetBinError(12,0.9216738);
   houtFV_stack_4->SetBinError(13,0.778431);
   houtFV_stack_4->SetBinError(14,0.6789509);
   houtFV_stack_4->SetBinError(15,0.5554667);
   houtFV_stack_4->SetBinError(16,0.337793);
   houtFV_stack_4->SetBinError(17,0.2770047);
   houtFV_stack_4->SetBinError(18,0.1967154);
   houtFV_stack_4->SetBinError(19,0.1967154);
   houtFV_stack_4->SetBinError(20,0.2781975);
   houtFV_stack_4->SetBinError(21,0.5551335);
   houtFV_stack_4->SetEntries(411);

   ci = 1521;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4314539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.529604);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5845718);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9339901);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1797343);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2470656);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2081635);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3344153);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1121803);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1522;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(5,2.676752);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.231176);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.816916);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.826789);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.785608);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.26879);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6701043);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5703084);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.433053);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5618282);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3697874);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4408476);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3481013);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3419921);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1523;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(3,9.520077);
   hNCpi0inFVres_stack_7->SetBinContent(4,71.0795);
   hNCpi0inFVres_stack_7->SetBinContent(5,154.1328);
   hNCpi0inFVres_stack_7->SetBinContent(6,206.1265);
   hNCpi0inFVres_stack_7->SetBinContent(7,211.59);
   hNCpi0inFVres_stack_7->SetBinContent(8,175.0861);
   hNCpi0inFVres_stack_7->SetBinContent(9,136.5667);
   hNCpi0inFVres_stack_7->SetBinContent(10,106.4994);
   hNCpi0inFVres_stack_7->SetBinContent(11,74.00225);
   hNCpi0inFVres_stack_7->SetBinContent(12,51.65376);
   hNCpi0inFVres_stack_7->SetBinContent(13,34.43919);
   hNCpi0inFVres_stack_7->SetBinContent(14,24.45711);
   hNCpi0inFVres_stack_7->SetBinContent(15,16.34499);
   hNCpi0inFVres_stack_7->SetBinContent(16,13.18149);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.024027);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.851959);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.379492);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.49723);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.985855);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9830298);
   hNCpi0inFVres_stack_7->SetBinError(4,2.689541);
   hNCpi0inFVres_stack_7->SetBinError(5,4.072544);
   hNCpi0inFVres_stack_7->SetBinError(6,4.667152);
   hNCpi0inFVres_stack_7->SetBinError(7,4.801363);
   hNCpi0inFVres_stack_7->SetBinError(8,4.335987);
   hNCpi0inFVres_stack_7->SetBinError(9,3.845598);
   hNCpi0inFVres_stack_7->SetBinError(10,3.416385);
   hNCpi0inFVres_stack_7->SetBinError(11,2.854963);
   hNCpi0inFVres_stack_7->SetBinError(12,2.386355);
   hNCpi0inFVres_stack_7->SetBinError(13,1.895215);
   hNCpi0inFVres_stack_7->SetBinError(14,1.62677);
   hNCpi0inFVres_stack_7->SetBinError(15,1.372629);
   hNCpi0inFVres_stack_7->SetBinError(16,1.274078);
   hNCpi0inFVres_stack_7->SetBinError(17,1.016309);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6917159);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7324815);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5649948);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9137483);
   hNCpi0inFVres_stack_7->SetEntries(24019);

   ci = 1524;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.048998);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.230284);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.85972);
   hNCpi0inFVdis_stack_8->SetBinContent(6,26.70653);
   hNCpi0inFVdis_stack_8->SetBinContent(7,27.73087);
   hNCpi0inFVdis_stack_8->SetBinContent(8,28.81782);
   hNCpi0inFVdis_stack_8->SetBinContent(9,26.78194);
   hNCpi0inFVdis_stack_8->SetBinContent(10,21.02922);
   hNCpi0inFVdis_stack_8->SetBinContent(11,20.5936);
   hNCpi0inFVdis_stack_8->SetBinContent(12,14.89451);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.76496);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.286588);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.808048);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.364042);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.834438);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.940302);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.342448);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.942302);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.82025);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4852559);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9644771);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.36526);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.633713);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.671164);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.739948);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.643413);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.514065);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.470972);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.27283);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.072528);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.014914);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9364958);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6768326);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6301277);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5045878);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5192871);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5988815);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8503857);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1525;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1673999);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.06834073);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1526;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);

   ci = 1527;
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
   hs7->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hCCpi0inFV_stack_11->SetBinContent(3,0.7336084);
   hCCpi0inFV_stack_11->SetBinContent(4,3.216286);
   hCCpi0inFV_stack_11->SetBinContent(5,8.772759);
   hCCpi0inFV_stack_11->SetBinContent(6,22.852);
   hCCpi0inFV_stack_11->SetBinContent(7,31.59519);
   hCCpi0inFV_stack_11->SetBinContent(8,38.40731);
   hCCpi0inFV_stack_11->SetBinContent(9,53.42891);
   hCCpi0inFV_stack_11->SetBinContent(10,46.86341);
   hCCpi0inFV_stack_11->SetBinContent(11,36.76535);
   hCCpi0inFV_stack_11->SetBinContent(12,33.41405);
   hCCpi0inFV_stack_11->SetBinContent(13,28.61724);
   hCCpi0inFV_stack_11->SetBinContent(14,24.40714);
   hCCpi0inFV_stack_11->SetBinContent(15,17.48869);
   hCCpi0inFV_stack_11->SetBinContent(16,13.10568);
   hCCpi0inFV_stack_11->SetBinContent(17,15.59198);
   hCCpi0inFV_stack_11->SetBinContent(18,12.88915);
   hCCpi0inFV_stack_11->SetBinContent(19,6.314942);
   hCCpi0inFV_stack_11->SetBinContent(20,5.086469);
   hCCpi0inFV_stack_11->SetBinContent(21,15.15226);
   hCCpi0inFV_stack_11->SetBinError(3,0.4394482);
   hCCpi0inFV_stack_11->SetBinError(4,0.9615195);
   hCCpi0inFV_stack_11->SetBinError(5,1.47213);
   hCCpi0inFV_stack_11->SetBinError(6,2.472205);
   hCCpi0inFV_stack_11->SetBinError(7,2.708089);
   hCCpi0inFV_stack_11->SetBinError(8,3.116625);
   hCCpi0inFV_stack_11->SetBinError(9,3.648143);
   hCCpi0inFV_stack_11->SetBinError(10,3.445526);
   hCCpi0inFV_stack_11->SetBinError(11,3.022057);
   hCCpi0inFV_stack_11->SetBinError(12,2.885064);
   hCCpi0inFV_stack_11->SetBinError(13,2.720043);
   hCCpi0inFV_stack_11->SetBinError(14,2.567274);
   hCCpi0inFV_stack_11->SetBinError(15,2.024049);
   hCCpi0inFV_stack_11->SetBinError(16,1.777294);
   hCCpi0inFV_stack_11->SetBinError(17,2.013002);
   hCCpi0inFV_stack_11->SetBinError(18,1.861969);
   hCCpi0inFV_stack_11->SetBinError(19,1.177012);
   hCCpi0inFV_stack_11->SetBinError(20,1.092469);
   hCCpi0inFV_stack_11->SetBinError(21,1.952031);
   hCCpi0inFV_stack_11->SetEntries(1778);

   ci = 1528;
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
   hs7->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hNCinFV_stack_12->SetBinContent(3,0.9269427);
   hNCinFV_stack_12->SetBinContent(4,5.073553);
   hNCinFV_stack_12->SetBinContent(5,10.95534);
   hNCinFV_stack_12->SetBinContent(6,15.82818);
   hNCinFV_stack_12->SetBinContent(7,18.0592);
   hNCinFV_stack_12->SetBinContent(8,15.5514);
   hNCinFV_stack_12->SetBinContent(9,15.78);
   hNCinFV_stack_12->SetBinContent(10,12.86078);
   hNCinFV_stack_12->SetBinContent(11,10.3001);
   hNCinFV_stack_12->SetBinContent(12,6.932509);
   hNCinFV_stack_12->SetBinContent(13,5.811625);
   hNCinFV_stack_12->SetBinContent(14,4.591603);
   hNCinFV_stack_12->SetBinContent(15,4.049639);
   hNCinFV_stack_12->SetBinContent(16,4.061472);
   hNCinFV_stack_12->SetBinContent(17,2.535931);
   hNCinFV_stack_12->SetBinContent(18,2.199135);
   hNCinFV_stack_12->SetBinContent(19,1.26712);
   hNCinFV_stack_12->SetBinContent(20,0.9801958);
   hNCinFV_stack_12->SetBinContent(21,3.272921);
   hNCinFV_stack_12->SetBinError(3,0.4800908);
   hNCinFV_stack_12->SetBinError(4,1.177633);
   hNCinFV_stack_12->SetBinError(5,1.654813);
   hNCinFV_stack_12->SetBinError(6,1.97144);
   hNCinFV_stack_12->SetBinError(7,2.148709);
   hNCinFV_stack_12->SetBinError(8,1.933003);
   hNCinFV_stack_12->SetBinError(9,1.981638);
   hNCinFV_stack_12->SetBinError(10,1.777749);
   hNCinFV_stack_12->SetBinError(11,1.629726);
   hNCinFV_stack_12->SetBinError(12,1.360066);
   hNCinFV_stack_12->SetBinError(13,1.176135);
   hNCinFV_stack_12->SetBinError(14,1.09304);
   hNCinFV_stack_12->SetBinError(15,1.018986);
   hNCinFV_stack_12->SetBinError(16,1.021258);
   hNCinFV_stack_12->SetBinError(17,0.8325131);
   hNCinFV_stack_12->SetBinError(18,0.7607114);
   hNCinFV_stack_12->SetBinError(19,0.5883944);
   hNCinFV_stack_12->SetBinError(20,0.4383608);
   hNCinFV_stack_12->SetBinError(21,0.9420814);
   hNCinFV_stack_12->SetEntries(601);

   ci = 1529;
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
   hs7->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hnumuCCinFV_stack_13->SetBinContent(3,1.004434);
   hnumuCCinFV_stack_13->SetBinContent(4,8.655203);
   hnumuCCinFV_stack_13->SetBinContent(5,19.92666);
   hnumuCCinFV_stack_13->SetBinContent(6,32.63566);
   hnumuCCinFV_stack_13->SetBinContent(7,27.31528);
   hnumuCCinFV_stack_13->SetBinContent(8,24.17957);
   hnumuCCinFV_stack_13->SetBinContent(9,27.44271);
   hnumuCCinFV_stack_13->SetBinContent(10,21.07105);
   hnumuCCinFV_stack_13->SetBinContent(11,21.96568);
   hnumuCCinFV_stack_13->SetBinContent(12,12.5521);
   hnumuCCinFV_stack_13->SetBinContent(13,9.448112);
   hnumuCCinFV_stack_13->SetBinContent(14,11.6302);
   hnumuCCinFV_stack_13->SetBinContent(15,3.371011);
   hnumuCCinFV_stack_13->SetBinContent(16,4.399335);
   hnumuCCinFV_stack_13->SetBinContent(17,2.690063);
   hnumuCCinFV_stack_13->SetBinContent(18,2.425997);
   hnumuCCinFV_stack_13->SetBinContent(19,1.919763);
   hnumuCCinFV_stack_13->SetBinContent(20,2.161679);
   hnumuCCinFV_stack_13->SetBinContent(21,4.674177);
   hnumuCCinFV_stack_13->SetBinError(3,0.509987);
   hnumuCCinFV_stack_13->SetBinError(4,1.963947);
   hnumuCCinFV_stack_13->SetBinError(5,3.122721);
   hnumuCCinFV_stack_13->SetBinError(6,3.454149);
   hnumuCCinFV_stack_13->SetBinError(7,3.105294);
   hnumuCCinFV_stack_13->SetBinError(8,2.663131);
   hnumuCCinFV_stack_13->SetBinError(9,2.886138);
   hnumuCCinFV_stack_13->SetBinError(10,2.6312);
   hnumuCCinFV_stack_13->SetBinError(11,3.447665);
   hnumuCCinFV_stack_13->SetBinError(12,1.866455);
   hnumuCCinFV_stack_13->SetBinError(13,2.011977);
   hnumuCCinFV_stack_13->SetBinError(14,1.99583);
   hnumuCCinFV_stack_13->SetBinError(15,0.9323331);
   hnumuCCinFV_stack_13->SetBinError(16,1.069962);
   hnumuCCinFV_stack_13->SetBinError(17,0.8357148);
   hnumuCCinFV_stack_13->SetBinError(18,0.7938866);
   hnumuCCinFV_stack_13->SetBinError(19,0.7002683);
   hnumuCCinFV_stack_13->SetBinError(20,0.6980279);
   hnumuCCinFV_stack_13->SetBinError(21,1.148434);
   hnumuCCinFV_stack_13->SetEntries(929);

   ci = 1530;
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
   hs7->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hnueCCinFV_stack_14->SetBinContent(4,0.6089847);
   hnueCCinFV_stack_14->SetBinContent(5,0.8477485);
   hnueCCinFV_stack_14->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(7,0.5748039);
   hnueCCinFV_stack_14->SetBinContent(8,0.8950397);
   hnueCCinFV_stack_14->SetBinContent(9,0.791415);
   hnueCCinFV_stack_14->SetBinContent(10,1.233203);
   hnueCCinFV_stack_14->SetBinContent(11,0.7820846);
   hnueCCinFV_stack_14->SetBinContent(13,0.6803553);
   hnueCCinFV_stack_14->SetBinContent(14,0.6428206);
   hnueCCinFV_stack_14->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(18,0.7302274);
   hnueCCinFV_stack_14->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_14->SetBinContent(21,4.684214);
   hnueCCinFV_stack_14->SetBinError(4,0.4575996);
   hnueCCinFV_stack_14->SetBinError(5,0.4945047);
   hnueCCinFV_stack_14->SetBinError(6,0.1950249);
   hnueCCinFV_stack_14->SetBinError(7,0.4132436);
   hnueCCinFV_stack_14->SetBinError(8,0.450777);
   hnueCCinFV_stack_14->SetBinError(9,0.6263902);
   hnueCCinFV_stack_14->SetBinError(10,0.6276958);
   hnueCCinFV_stack_14->SetBinError(11,0.463181);
   hnueCCinFV_stack_14->SetBinError(13,0.4810838);
   hnueCCinFV_stack_14->SetBinError(14,0.3735155);
   hnueCCinFV_stack_14->SetBinError(15,0.1950249);
   hnueCCinFV_stack_14->SetBinError(16,0.1950249);
   hnueCCinFV_stack_14->SetBinError(18,0.4379386);
   hnueCCinFV_stack_14->SetBinError(19,0.3401776);
   hnueCCinFV_stack_14->SetBinError(20,0.2770047);
   hnueCCinFV_stack_14->SetBinError(21,1.117485);
   hnueCCinFV_stack_14->SetEntries(54);

   ci = 1531;
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
   hs7->Add(hnueCCinFV_stack_14,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);
   hmcerror__20->SetBinContent(3,18.38057);
   hmcerror__20->SetBinContent(4,123.759);
   hmcerror__20->SetBinContent(5,265.9851);
   hmcerror__20->SetBinContent(6,355.1314);
   hmcerror__20->SetBinContent(7,369.3515);
   hmcerror__20->SetBinContent(8,325.6635);
   hmcerror__20->SetBinContent(9,297.3157);
   hmcerror__20->SetBinContent(10,229.5107);
   hmcerror__20->SetBinContent(11,188.4933);
   hmcerror__20->SetBinContent(12,136.4703);
   hmcerror__20->SetBinContent(13,102.3822);
   hmcerror__20->SetBinContent(14,83.09233);
   hmcerror__20->SetBinContent(15,54.21477);
   hmcerror__20->SetBinContent(16,44.81942);
   hmcerror__20->SetBinContent(17,35.21712);
   hmcerror__20->SetBinContent(18,29.93476);
   hmcerror__20->SetBinContent(19,18.46378);
   hmcerror__20->SetBinContent(20,16.08291);
   hmcerror__20->SetBinContent(21,48.84295);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,0.3895343);
   hmcerror__20->SetBinError(3,5.886923);
   hmcerror__20->SetBinError(4,30.38055);
   hmcerror__20->SetBinError(5,60.71617);
   hmcerror__20->SetBinError(6,87.07666);
   hmcerror__20->SetBinError(7,90.54594);
   hmcerror__20->SetBinError(8,82.1481);
   hmcerror__20->SetBinError(9,75.30745);
   hmcerror__20->SetBinError(10,60.5703);
   hmcerror__20->SetBinError(11,51.59529);
   hmcerror__20->SetBinError(12,36.98022);
   hmcerror__20->SetBinError(13,30.89288);
   hmcerror__20->SetBinError(14,24.46605);
   hmcerror__20->SetBinError(15,20.235);
   hmcerror__20->SetBinError(16,15.99352);
   hmcerror__20->SetBinError(17,13.74382);
   hmcerror__20->SetBinError(18,11.15812);
   hmcerror__20->SetBinError(19,7.495708);
   hmcerror__20->SetBinError(20,8.558114);
   hmcerror__20->SetBinError(21,19.82668);
   hmcerror__20->SetEntries(2712.362);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[20] = {
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
   Double_t _fy3025[20] = {
   0,
   0,
   20,
   114,
   211,
   287,
   267,
   247,
   211,
   153,
   127,
   89,
   74,
   50,
   41,
   39,
   29,
   20,
   5,
   12};
   Double_t _felx3025[20] = {
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
   Double_t _fely3025[20] = {
   0,
   0,
   4.6266,
   10.67708,
   14.52584,
   16.94107,
   16.34013,
   15.71623,
   14.52584,
   12.36932,
   11.26943,
   9.5566,
   8.7275,
   7.2025,
   6.5384,
   6.3813,
   5.5285,
   4.6266,
   2.48995,
   3.64022};
   Double_t _fehx3025[20] = {
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
   Double_t _fehy3025[20] = {
   1.1478,
   1.1478,
   4.4133,
   10.67708,
   14.52584,
   16.94107,
   16.34013,
   15.71623,
   14.52584,
   12.36932,
   11.26943,
   9.3552,
   8.5253,
   6.9985,
   6.3331,
   6.1757,
   5.3201,
   4.4133,
   2.21064,
   3.4155};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1650);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(334.3352);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1996.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.6","F");

   ci = 1518;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 183.8","F");

   ci = 1519;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

   ci = 1520;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 94.0","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.3","F");

   ci = 1522;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

   ci = 1523;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1305.4","F");

   ci = 1524;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  240.0","F");

   ci = 1525;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1526;
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

   ci = 1527;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 399.6","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 137.8","F");

   ci = 1529;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 234.8","F");

   ci = 1530;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 9.1","F");

   ci = 1531;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_transferred_visible_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[20] = {
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
   Double_t _fy3026[20] = {
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
   Double_t _felx3026[20] = {
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
   Double_t _fely3026[20] = {
   0,
   0,
   0.3202798,
   0.2454816,
   0.228269,
   0.2451956,
   0.2451484,
   0.2522484,
   0.2532912,
   0.2639106,
   0.2737247,
   0.2709763,
   0.3017408,
   0.2944441,
   0.3732378,
   0.3568434,
   0.3902597,
   0.3727479,
   0.4059682,
   0.5321247};
   Double_t _fehx3026[20] = {
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
   Double_t _fehy3026[20] = {
   0,
   0,
   0.3202798,
   0.2454816,
   0.228269,
   0.2451956,
   0.2451484,
   0.2522484,
   0.2532912,
   0.2639106,
   0.2737247,
   0.2709763,
   0.3017408,
   0.2944441,
   0.3732378,
   0.3568434,
   0.3902597,
   0.3727479,
   0.4059682,
   0.5321247};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1650);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Transferred Visible Energy [MeV]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[20] = {
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
   Double_t _fy3027[20] = {
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
   Double_t _felx3027[20] = {
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
   Double_t _fely3027[20] = {
   0,
   0,
   0.2579971,
   0.2285964,
   0.2146815,
   0.2325027,
   0.2288909,
   0.2366083,
   0.2417074,
   0.247457,
   0.2325118,
   0.2383872,
   0.2351955,
   0.2347755,
   0.2566043,
   0.2292348,
   0.2554911,
   0.2395377,
   0.264124,
   0.2468542};
   Double_t _fehx3027[20] = {
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
   Double_t _fehy3027[20] = {
   0,
   0,
   0.2579971,
   0.2285964,
   0.2146815,
   0.2325027,
   0.2288909,
   0.2366083,
   0.2417074,
   0.247457,
   0.2325118,
   0.2383872,
   0.2351955,
   0.2347755,
   0.2566043,
   0.2292348,
   0.2554911,
   0.2395377,
   0.264124,
   0.2468542};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1650);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[20] = {
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
   Double_t _fy3028[20] = {
   10,
   10,
   1.088106,
   0.9211452,
   0.7932775,
   0.8081516,
   0.7228887,
   0.7584516,
   0.7096833,
   0.6666356,
   0.6737639,
   0.6521564,
   0.722782,
   0.6017403,
   0.7562515,
   0.8701584,
   0.8234631,
   0.6681197,
   0.2708005,
   0.7461336};
   Double_t _felx3028[20] = {
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
   Double_t _fely3028[20] = {
   0,
   0,
   0.2517115,
   0.08627315,
   0.05461148,
   0.04770368,
   0.04424007,
   0.04825912,
   0.04885662,
   0.05389429,
   0.05978688,
   0.07002695,
   0.08524432,
   0.08668068,
   0.1206018,
   0.142378,
   0.1569833,
   0.1545561,
   0.1348559,
   0.2263409};
   Double_t _fehx3028[20] = {
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
   Double_t _fehy3028[20] = {
   0,
   0,
   0.2401069,
   0.08627315,
   0.05461148,
   0.04770368,
   0.04424007,
   0.04825912,
   0.04885662,
   0.05389429,
   0.05978688,
   0.06855117,
   0.08326937,
   0.08422558,
   0.116815,
   0.1377907,
   0.1510657,
   0.1474306,
   0.1197285,
   0.2123683};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1650);
   Graph_Graph3028->SetMinimum(0.1223501);
   Graph_Graph3028->SetMaximum(10.98641);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_transferred_visible_all",20,0,1500);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
