#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Mon Mar 13 20:05:50 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",112,135,1200,900);
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
   pad1->Range(-169.2308,-1.46,1241.026,161.4453);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__22->SetBinContent(0,0.5884556);
   hmc__22->SetBinContent(1,43.34715);
   hmc__22->SetBinContent(2,36.64815);
   hmc__22->SetBinContent(3,39.00573);
   hmc__22->SetBinContent(4,43.17481);
   hmc__22->SetBinContent(5,32.65774);
   hmc__22->SetBinContent(6,36.56233);
   hmc__22->SetBinContent(7,40.55568);
   hmc__22->SetBinContent(8,50.60266);
   hmc__22->SetBinContent(9,40.50493);
   hmc__22->SetBinContent(10,30.8563);
   hmc__22->SetBinContent(11,37.07537);
   hmc__22->SetBinContent(12,32.62798);
   hmc__22->SetBinContent(13,33.65707);
   hmc__22->SetBinContent(14,34.70173);
   hmc__22->SetBinContent(15,36.56637);
   hmc__22->SetBinContent(16,36.17498);
   hmc__22->SetBinContent(17,28.40778);
   hmc__22->SetBinContent(18,24.99875);
   hmc__22->SetBinContent(19,33.37614);
   hmc__22->SetBinContent(20,35.445);
   hmc__22->SetBinContent(21,65.78552);
   hmc__22->SetBinContent(22,41.70936);
   hmc__22->SetBinContent(23,32.29847);
   hmc__22->SetBinContent(24,33.42371);
   hmc__22->SetBinContent(25,32.84897);
   hmc__22->SetBinContent(26,32.51753);
   hmc__22->SetBinContent(27,36.72235);
   hmc__22->SetBinContent(28,34.72923);
   hmc__22->SetBinContent(29,52.64282);
   hmc__22->SetBinContent(30,62.3809);
   hmc__22->SetBinContent(31,1.663867);
   hmc__22->SetBinError(0,0.3397478);
   hmc__22->SetBinError(1,19.47088);
   hmc__22->SetBinError(2,15.04725);
   hmc__22->SetBinError(3,22.74736);
   hmc__22->SetBinError(4,16.1737);
   hmc__22->SetBinError(5,14.0634);
   hmc__22->SetBinError(6,12.30625);
   hmc__22->SetBinError(7,19.67455);
   hmc__22->SetBinError(8,29.47753);
   hmc__22->SetBinError(9,17.19195);
   hmc__22->SetBinError(10,12.68966);
   hmc__22->SetBinError(11,15.09283);
   hmc__22->SetBinError(12,12.23422);
   hmc__22->SetBinError(13,14.52052);
   hmc__22->SetBinError(14,14.10579);
   hmc__22->SetBinError(15,15.51699);
   hmc__22->SetBinError(16,16.50332);
   hmc__22->SetBinError(17,13.87468);
   hmc__22->SetBinError(18,16.05195);
   hmc__22->SetBinError(19,12.90193);
   hmc__22->SetBinError(20,13.47544);
   hmc__22->SetBinError(21,19.87004);
   hmc__22->SetBinError(22,19.7751);
   hmc__22->SetBinError(23,19.4381);
   hmc__22->SetBinError(24,14.70142);
   hmc__22->SetBinError(25,15.16609);
   hmc__22->SetBinError(26,15.34084);
   hmc__22->SetBinError(27,14.30441);
   hmc__22->SetBinError(28,13.44089);
   hmc__22->SetBinError(29,18.46607);
   hmc__22->SetBinError(30,21.05095);
   hmc__22->SetBinError(31,5.152878);
   hmc__22->SetBinError(32,0.3895343);
   hmc__22->SetBinError(33,0.3895343);
   hmc__22->SetMinimum(-1.46);
   hmc__22->SetMaximum(153.3);
   hmc__22->SetEntries(1133.738);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",32,0,1100);
   hs8_stack_8->SetMinimum(-4.228303e-08);
   hs8_stack_8->SetMaximum(69.0748);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,1.123658);
   hbadmatch_stack_1->SetBinContent(2,2.145881);
   hbadmatch_stack_1->SetBinContent(3,1.780081);
   hbadmatch_stack_1->SetBinContent(4,2.000729);
   hbadmatch_stack_1->SetBinContent(5,0.536893);
   hbadmatch_stack_1->SetBinContent(6,1.212886);
   hbadmatch_stack_1->SetBinContent(7,1.532598);
   hbadmatch_stack_1->SetBinContent(8,2.194905);
   hbadmatch_stack_1->SetBinContent(9,0.3934307);
   hbadmatch_stack_1->SetBinContent(10,0.6731914);
   hbadmatch_stack_1->SetBinContent(11,1.399075);
   hbadmatch_stack_1->SetBinContent(12,0.8770706);
   hbadmatch_stack_1->SetBinContent(13,0.7336084);
   hbadmatch_stack_1->SetBinContent(14,2.2858);
   hbadmatch_stack_1->SetBinContent(15,2.00141);
   hbadmatch_stack_1->SetBinContent(16,0.8770706);
   hbadmatch_stack_1->SetBinContent(17,0.536893);
   hbadmatch_stack_1->SetBinContent(18,0.3917402);
   hbadmatch_stack_1->SetBinContent(19,0.8337198);
   hbadmatch_stack_1->SetBinContent(20,0.9117247);
   hbadmatch_stack_1->SetBinContent(21,1.827782);
   hbadmatch_stack_1->SetBinContent(22,2.254099);
   hbadmatch_stack_1->SetBinContent(23,0.3934307);
   hbadmatch_stack_1->SetBinContent(24,1.360711);
   hbadmatch_stack_1->SetBinContent(25,1.584931);
   hbadmatch_stack_1->SetBinContent(26,1.018135);
   hbadmatch_stack_1->SetBinContent(27,1.511945);
   hbadmatch_stack_1->SetBinContent(28,0.5843441);
   hbadmatch_stack_1->SetBinContent(29,1.707652);
   hbadmatch_stack_1->SetBinContent(30,2.496815);
   hbadmatch_stack_1->SetBinError(1,0.5188295);
   hbadmatch_stack_1->SetBinError(2,0.785499);
   hbadmatch_stack_1->SetBinError(3,0.7599674);
   hbadmatch_stack_1->SetBinError(4,0.7343859);
   hbadmatch_stack_1->SetBinError(5,0.3929602);
   hbadmatch_stack_1->SetBinError(6,0.5713452);
   hbadmatch_stack_1->SetBinError(7,0.6451565);
   hbadmatch_stack_1->SetBinError(8,1.190275);
   hbadmatch_stack_1->SetBinError(9,0.2781975);
   hbadmatch_stack_1->SetBinError(10,0.3949005);
   hbadmatch_stack_1->SetBinError(11,0.5848935);
   hbadmatch_stack_1->SetBinError(12,0.5197486);
   hbadmatch_stack_1->SetBinError(13,0.4394482);
   hbadmatch_stack_1->SetBinError(14,0.7447259);
   hbadmatch_stack_1->SetBinError(15,0.761689);
   hbadmatch_stack_1->SetBinError(16,0.5197486);
   hbadmatch_stack_1->SetBinError(17,0.3929602);
   hbadmatch_stack_1->SetBinError(18,0.2770047);
   hbadmatch_stack_1->SetBinError(19,0.4192291);
   hbadmatch_stack_1->SetBinError(20,0.5436217);
   hbadmatch_stack_1->SetBinError(21,0.8537835);
   hbadmatch_stack_1->SetBinError(22,0.7758848);
   hbadmatch_stack_1->SetBinError(23,0.2781975);
   hbadmatch_stack_1->SetBinError(24,0.6803552);
   hbadmatch_stack_1->SetBinError(25,0.7459064);
   hbadmatch_stack_1->SetBinError(26,0.4565059);
   hbadmatch_stack_1->SetBinError(27,0.637046);
   hbadmatch_stack_1->SetBinError(28,0.4187339);
   hbadmatch_stack_1->SetBinError(29,0.6664772);
   hbadmatch_stack_1->SetBinError(30,0.9044014);
   hbadmatch_stack_1->SetEntries(150);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,6.153597);
   hext_stack_2->SetBinContent(2,7.836244);
   hext_stack_2->SetBinContent(3,7.716561);
   hext_stack_2->SetBinContent(4,8.428787);
   hext_stack_2->SetBinContent(5,4.442228);
   hext_stack_2->SetBinContent(6,6.463634);
   hext_stack_2->SetBinContent(7,8.426016);
   hext_stack_2->SetBinContent(8,11.73783);
   hext_stack_2->SetBinContent(9,7.791582);
   hext_stack_2->SetBinContent(10,4.703194);
   hext_stack_2->SetBinContent(11,6.325181);
   hext_stack_2->SetBinContent(12,7.291193);
   hext_stack_2->SetBinContent(13,6.553016);
   hext_stack_2->SetBinContent(14,6.698648);
   hext_stack_2->SetBinContent(15,2.919576);
   hext_stack_2->SetBinContent(16,7.697792);
   hext_stack_2->SetBinContent(17,2.916804);
   hext_stack_2->SetBinContent(18,3.241202);
   hext_stack_2->SetBinContent(19,6.172367);
   hext_stack_2->SetBinContent(20,8.186592);
   hext_stack_2->SetBinContent(21,20.97981);
   hext_stack_2->SetBinContent(22,6.082985);
   hext_stack_2->SetBinContent(23,4.132192);
   hext_stack_2->SetBinContent(24,7.284012);
   hext_stack_2->SetBinContent(25,5.993603);
   hext_stack_2->SetBinContent(26,3.069618);
   hext_stack_2->SetBinContent(27,6.418972);
   hext_stack_2->SetBinContent(28,3.323403);
   hext_stack_2->SetBinContent(29,4.5432);
   hext_stack_2->SetBinContent(30,6.146417);
   hext_stack_2->SetBinContent(31,0.7309963);
   hext_stack_2->SetBinError(1,1.592785);
   hext_stack_2->SetBinError(2,1.930499);
   hext_stack_2->SetBinError(3,1.694369);
   hext_stack_2->SetBinError(4,1.846273);
   hext_stack_2->SetBinError(5,1.466939);
   hext_stack_2->SetBinError(6,1.744878);
   hext_stack_2->SetBinError(7,1.935212);
   hext_stack_2->SetBinError(8,2.293442);
   hext_stack_2->SetBinError(9,1.769795);
   hext_stack_2->SetBinError(10,1.389163);
   hext_stack_2->SetBinError(11,1.567144);
   hext_stack_2->SetBinError(12,1.724194);
   hext_stack_2->SetBinError(13,1.703963);
   hext_stack_2->SetBinError(14,1.814097);
   hext_stack_2->SetBinError(15,0.973192);
   hext_stack_2->SetBinError(16,1.771487);
   hext_stack_2->SetBinError(17,1.132884);
   hext_stack_2->SetBinError(18,1.178414);
   hext_stack_2->SetBinError(19,1.506547);
   hext_stack_2->SetBinError(20,1.834006);
   hext_stack_2->SetBinError(21,2.999874);
   hext_stack_2->SetBinError(22,1.552674);
   hext_stack_2->SetBinError(23,1.282292);
   hext_stack_2->SetBinError(24,1.781585);
   hext_stack_2->SetBinError(25,1.59747);
   hext_stack_2->SetBinError(26,1.212305);
   hext_stack_2->SetBinError(27,1.565232);
   hext_stack_2->SetBinError(28,1.20364);
   hext_stack_2->SetBinError(29,1.394531);
   hext_stack_2->SetBinError(30,1.65474);
   hext_stack_2->SetBinError(31,0.5201503);
   hext_stack_2->SetEntries(503);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,2.506663);
   hdirt_stack_3->SetBinContent(2,1.095335);
   hdirt_stack_3->SetBinContent(3,1.801193);
   hdirt_stack_3->SetBinContent(4,0.2964016);
   hdirt_stack_3->SetBinContent(5,1.134176);
   hdirt_stack_3->SetBinContent(6,1.195391);
   hdirt_stack_3->SetBinContent(7,0.6183072);
   hdirt_stack_3->SetBinContent(8,1.758391);
   hdirt_stack_3->SetBinContent(9,1.094478);
   hdirt_stack_3->SetBinContent(10,0.5852764);
   hdirt_stack_3->SetBinContent(11,0.8750882);
   hdirt_stack_3->SetBinContent(12,1.124462);
   hdirt_stack_3->SetBinContent(13,0.63311);
   hdirt_stack_3->SetBinContent(15,0.5758626);
   hdirt_stack_3->SetBinContent(16,1.165545);
   hdirt_stack_3->SetBinContent(18,0.6763744);
   hdirt_stack_3->SetBinContent(19,0.2256247);
   hdirt_stack_3->SetBinContent(21,1.493902);
   hdirt_stack_3->SetBinContent(22,0.2761429);
   hdirt_stack_3->SetBinContent(23,0.2188956);
   hdirt_stack_3->SetBinContent(26,0.6951543);
   hdirt_stack_3->SetBinContent(27,0.2188956);
   hdirt_stack_3->SetBinContent(28,0.4289006);
   hdirt_stack_3->SetBinContent(29,0.4762587);
   hdirt_stack_3->SetBinContent(30,0.2188956);
   hdirt_stack_3->SetBinError(1,0.7802581);
   hdirt_stack_3->SetBinError(2,0.5463329);
   hdirt_stack_3->SetBinError(3,1.038675);
   hdirt_stack_3->SetBinError(4,0.2100765);
   hdirt_stack_3->SetBinError(5,0.5936329);
   hdirt_stack_3->SetBinError(6,0.567433);
   hdirt_stack_3->SetBinError(7,0.4553555);
   hdirt_stack_3->SetBinError(8,0.7491291);
   hdirt_stack_3->SetBinError(9,0.4894654);
   hdirt_stack_3->SetBinError(10,0.4188361);
   hdirt_stack_3->SetBinError(11,0.540832);
   hdirt_stack_3->SetBinError(12,0.5926468);
   hdirt_stack_3->SetBinError(13,0.3242013);
   hdirt_stack_3->SetBinError(15,0.3389606);
   hdirt_stack_3->SetBinError(16,0.6016336);
   hdirt_stack_3->SetBinError(18,0.4782689);
   hdirt_stack_3->SetBinError(19,0.218999);
   hdirt_stack_3->SetBinError(21,0.631155);
   hdirt_stack_3->SetBinError(22,0.1952625);
   hdirt_stack_3->SetBinError(23,0.2188956);
   hdirt_stack_3->SetBinError(26,0.4258516);
   hdirt_stack_3->SetBinError(27,0.2188956);
   hdirt_stack_3->SetBinError(28,0.4289006);
   hdirt_stack_3->SetBinError(29,0.3652866);
   hdirt_stack_3->SetBinError(30,0.2188956);
   hdirt_stack_3->SetEntries(90);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,0.3917402);
   houtFV_stack_4->SetBinContent(1,16.85996);
   houtFV_stack_4->SetBinContent(2,7.883228);
   houtFV_stack_4->SetBinContent(3,8.290252);
   houtFV_stack_4->SetBinContent(4,9.948351);
   houtFV_stack_4->SetBinContent(5,7.533881);
   houtFV_stack_4->SetBinContent(6,9.357723);
   houtFV_stack_4->SetBinContent(7,7.97582);
   houtFV_stack_4->SetBinContent(8,11.11526);
   houtFV_stack_4->SetBinContent(9,6.741949);
   houtFV_stack_4->SetBinContent(10,6.01291);
   houtFV_stack_4->SetBinContent(11,8.552008);
   houtFV_stack_4->SetBinContent(12,7.420913);
   houtFV_stack_4->SetBinContent(13,7.080435);
   houtFV_stack_4->SetBinContent(14,6.270895);
   houtFV_stack_4->SetBinContent(15,10.52334);
   houtFV_stack_4->SetBinContent(16,7.243484);
   houtFV_stack_4->SetBinContent(17,7.086588);
   houtFV_stack_4->SetBinContent(18,4.327694);
   houtFV_stack_4->SetBinContent(19,8.779119);
   houtFV_stack_4->SetBinContent(20,7.907634);
   houtFV_stack_4->SetBinContent(21,13.20814);
   houtFV_stack_4->SetBinContent(22,7.079825);
   houtFV_stack_4->SetBinContent(23,8.463108);
   houtFV_stack_4->SetBinContent(24,7.39355);
   houtFV_stack_4->SetBinContent(25,8.702715);
   houtFV_stack_4->SetBinContent(26,6.044005);
   houtFV_stack_4->SetBinContent(27,7.955791);
   houtFV_stack_4->SetBinContent(28,5.888632);
   houtFV_stack_4->SetBinContent(29,6.406842);
   houtFV_stack_4->SetBinContent(30,7.085507);
   houtFV_stack_4->SetBinContent(31,0.536893);
   houtFV_stack_4->SetBinError(0,0.2770047);
   houtFV_stack_4->SetBinError(1,2.111001);
   houtFV_stack_4->SetBinError(2,1.403404);
   houtFV_stack_4->SetBinError(3,1.411627);
   houtFV_stack_4->SetBinError(4,1.819622);
   houtFV_stack_4->SetBinError(5,1.331119);
   houtFV_stack_4->SetBinError(6,1.602899);
   houtFV_stack_4->SetBinError(7,1.419088);
   houtFV_stack_4->SetBinError(8,1.75603);
   houtFV_stack_4->SetBinError(9,1.270868);
   houtFV_stack_4->SetBinError(10,1.281186);
   houtFV_stack_4->SetBinError(11,1.455636);
   houtFV_stack_4->SetBinError(12,1.353061);
   houtFV_stack_4->SetBinError(13,1.315357);
   houtFV_stack_4->SetBinError(14,1.32386);
   houtFV_stack_4->SetBinError(15,1.602729);
   houtFV_stack_4->SetBinError(16,1.43053);
   houtFV_stack_4->SetBinError(17,1.339704);
   houtFV_stack_4->SetBinError(18,1.054609);
   houtFV_stack_4->SetBinError(19,1.523741);
   houtFV_stack_4->SetBinError(20,1.428269);
   houtFV_stack_4->SetBinError(21,1.854298);
   houtFV_stack_4->SetBinError(22,1.338259);
   houtFV_stack_4->SetBinError(23,1.871147);
   houtFV_stack_4->SetBinError(24,1.377536);
   houtFV_stack_4->SetBinError(25,1.435631);
   houtFV_stack_4->SetBinError(26,1.279073);
   houtFV_stack_4->SetBinError(27,1.364255);
   houtFV_stack_4->SetBinError(28,1.25035);
   houtFV_stack_4->SetBinError(29,1.225304);
   houtFV_stack_4->SetBinError(30,1.316112);
   houtFV_stack_4->SetBinError(31,0.3929602);
   houtFV_stack_4->SetEntries(1038);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.6143043);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.654822);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6691039);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.7116223);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9484402);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.268958);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.198876);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.4314539);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.5719541);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.710622);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.599022);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.3763178);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,1.044758);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.98979);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3397083);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.267003);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2548204);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3533731);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3718002);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3923435);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3984141);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1797343);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2970212);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2699026);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.2640716);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.1313578);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.3093236);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.336735);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(29);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.86101);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.297863);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.912663);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.933084);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.867986);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.577528);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.067615);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.680151);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.066286);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.088114);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.294288);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.90876);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.420506);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.413704);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.63724);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.790087);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.949614);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.158195);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.762626);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.521896);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.78703);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.299696);
   hNCpi0inFVres_stack_7->SetBinContent(23,5.00591);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.568552);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.935828);
   hNCpi0inFVres_stack_7->SetBinContent(26,5.648282);
   hNCpi0inFVres_stack_7->SetBinContent(27,5.339382);
   hNCpi0inFVres_stack_7->SetBinContent(28,6.524967);
   hNCpi0inFVres_stack_7->SetBinContent(29,12.4931);
   hNCpi0inFVres_stack_7->SetBinContent(30,14.17707);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6517858);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7329236);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7786701);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6160733);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7443838);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7290188);
   hNCpi0inFVres_stack_7->SetBinError(7,0.829847);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5488618);
   hNCpi0inFVres_stack_7->SetBinError(9,0.84595);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7108631);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6195903);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7294195);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6679569);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8246714);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8670801);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5155876);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7439486);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7074787);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8915358);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7501136);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8281249);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7800438);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7132774);
   hNCpi0inFVres_stack_7->SetBinError(24,0.546018);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7166345);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8109893);
   hNCpi0inFVres_stack_7->SetBinError(27,0.7383028);
   hNCpi0inFVres_stack_7->SetBinError(28,0.7859254);
   hNCpi0inFVres_stack_7->SetBinError(29,1.142179);
   hNCpi0inFVres_stack_7->SetBinError(30,1.226739);
   hNCpi0inFVres_stack_7->SetBinError(31,0.03945654);
   hNCpi0inFVres_stack_7->SetEntries(3289);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.018522);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.892472);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.25434);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.328998);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.5573358);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.253676);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.170808);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.18509);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.29769);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.07249);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.7670858);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.283072);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.910994);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.022594);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.8228858);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.017522);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.26879);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.259084);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6412039);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.171472);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.673176);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.188498);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.463426);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.756212);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.031636);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.925108);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.715526);
   hNCpi0inFVdis_stack_8->SetBinContent(28,2.162094);
   hNCpi0inFVdis_stack_8->SetBinContent(29,3.71022);
   hNCpi0inFVdis_stack_8->SetBinContent(30,2.968369);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3652876);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3223657);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3078519);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.543399);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1704726);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3290372);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3538311);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3447308);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4171068);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2523897);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2468026);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3388471);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4871906);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4903757);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2499367);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2853243);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3481013);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5769244);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2532885);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3342211);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4146887);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4892497);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3743209);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4333528);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2056547);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4452399);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.4462588);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4943282);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.6624476);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.5367925);
   hNCpi0inFVdis_stack_8->SetEntries(856);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,5.859079);
   hCCpi0inFV_stack_10->SetBinContent(2,6.38539);
   hCCpi0inFV_stack_10->SetBinContent(3,8.619088);
   hCCpi0inFV_stack_10->SetBinContent(4,8.640887);
   hCCpi0inFV_stack_10->SetBinContent(5,6.875034);
   hCCpi0inFV_stack_10->SetBinContent(6,6.307983);
   hCCpi0inFV_stack_10->SetBinContent(7,5.545365);
   hCCpi0inFV_stack_10->SetBinContent(8,8.942774);
   hCCpi0inFV_stack_10->SetBinContent(9,8.40419);
   hCCpi0inFV_stack_10->SetBinContent(10,8.734833);
   hCCpi0inFV_stack_10->SetBinContent(11,7.470897);
   hCCpi0inFV_stack_10->SetBinContent(12,5.960158);
   hCCpi0inFV_stack_10->SetBinContent(13,6.931533);
   hCCpi0inFV_stack_10->SetBinContent(14,6.302027);
   hCCpi0inFV_stack_10->SetBinContent(15,6.700529);
   hCCpi0inFV_stack_10->SetBinContent(16,7.320868);
   hCCpi0inFV_stack_10->SetBinContent(17,5.380615);
   hCCpi0inFV_stack_10->SetBinContent(18,4.93009);
   hCCpi0inFV_stack_10->SetBinContent(19,5.989019);
   hCCpi0inFV_stack_10->SetBinContent(20,6.105311);
   hCCpi0inFV_stack_10->SetBinContent(21,9.355604);
   hCCpi0inFV_stack_10->SetBinContent(22,8.784546);
   hCCpi0inFV_stack_10->SetBinContent(23,6.531369);
   hCCpi0inFV_stack_10->SetBinContent(24,4.683119);
   hCCpi0inFV_stack_10->SetBinContent(25,6.313773);
   hCCpi0inFV_stack_10->SetBinContent(26,7.940596);
   hCCpi0inFV_stack_10->SetBinContent(27,7.827243);
   hCCpi0inFV_stack_10->SetBinContent(28,9.681454);
   hCCpi0inFV_stack_10->SetBinContent(29,12.64467);
   hCCpi0inFV_stack_10->SetBinContent(30,14.71605);
   hCCpi0inFV_stack_10->SetBinError(1,1.266049);
   hCCpi0inFV_stack_10->SetBinError(2,1.280652);
   hCCpi0inFV_stack_10->SetBinError(3,1.511604);
   hCCpi0inFV_stack_10->SetBinError(4,1.447297);
   hCCpi0inFV_stack_10->SetBinError(5,1.322181);
   hCCpi0inFV_stack_10->SetBinError(6,1.258702);
   hCCpi0inFV_stack_10->SetBinError(7,1.198666);
   hCCpi0inFV_stack_10->SetBinError(8,1.481367);
   hCCpi0inFV_stack_10->SetBinError(9,1.428065);
   hCCpi0inFV_stack_10->SetBinError(10,1.532887);
   hCCpi0inFV_stack_10->SetBinError(11,1.417382);
   hCCpi0inFV_stack_10->SetBinError(12,1.209257);
   hCCpi0inFV_stack_10->SetBinError(13,1.308263);
   hCCpi0inFV_stack_10->SetBinError(14,1.256458);
   hCCpi0inFV_stack_10->SetBinError(15,1.28766);
   hCCpi0inFV_stack_10->SetBinError(16,1.387511);
   hCCpi0inFV_stack_10->SetBinError(17,1.138299);
   hCCpi0inFV_stack_10->SetBinError(18,1.144463);
   hCCpi0inFV_stack_10->SetBinError(19,1.214173);
   hCCpi0inFV_stack_10->SetBinError(20,1.240963);
   hCCpi0inFV_stack_10->SetBinError(21,1.603407);
   hCCpi0inFV_stack_10->SetBinError(22,1.473771);
   hCCpi0inFV_stack_10->SetBinError(23,1.277095);
   hCCpi0inFV_stack_10->SetBinError(24,1.083145);
   hCCpi0inFV_stack_10->SetBinError(25,1.170856);
   hCCpi0inFV_stack_10->SetBinError(26,1.43307);
   hCCpi0inFV_stack_10->SetBinError(27,1.487364);
   hCCpi0inFV_stack_10->SetBinError(28,1.545817);
   hCCpi0inFV_stack_10->SetBinError(29,1.742736);
   hCCpi0inFV_stack_10->SetBinError(30,1.955797);
   hCCpi0inFV_stack_10->SetEntries(957);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(1,0.3934307);
   hNCinFV_stack_11->SetBinContent(2,0.9286332);
   hNCinFV_stack_11->SetBinContent(3,0.9801958);
   hNCinFV_stack_11->SetBinContent(4,1.125349);
   hNCinFV_stack_11->SetBinContent(5,1.320373);
   hNCinFV_stack_11->SetBinContent(6,0.536893);
   hNCinFV_stack_11->SetBinContent(7,1.413964);
   hNCinFV_stack_11->SetBinContent(8,0.9785053);
   hNCinFV_stack_11->SetBinContent(9,1.317452);
   hNCinFV_stack_11->SetBinContent(10,0.7319179);
   hNCinFV_stack_11->SetBinContent(11,2.877799);
   hNCinFV_stack_11->SetBinContent(12,0.5884556);
   hNCinFV_stack_11->SetBinContent(13,1.513708);
   hNCinFV_stack_11->SetBinContent(14,1.26712);
   hNCinFV_stack_11->SetBinContent(15,0.9818863);
   hNCinFV_stack_11->SetBinContent(16,1.91052);
   hNCinFV_stack_11->SetBinContent(17,1.56358);
   hNCinFV_stack_11->SetBinContent(18,1.268811);
   hNCinFV_stack_11->SetBinContent(19,0.5352025);
   hNCinFV_stack_11->SetBinContent(20,1.123658);
   hNCinFV_stack_11->SetBinContent(21,2.982615);
   hNCinFV_stack_11->SetBinContent(22,1.802323);
   hNCinFV_stack_11->SetBinContent(23,1.127039);
   hNCinFV_stack_11->SetBinContent(24,3.019571);
   hNCinFV_stack_11->SetBinContent(25,2.734337);
   hNCinFV_stack_11->SetBinContent(26,2.442341);
   hNCinFV_stack_11->SetBinContent(27,1.268811);
   hNCinFV_stack_11->SetBinContent(28,1.608988);
   hNCinFV_stack_11->SetBinContent(29,4.198173);
   hNCinFV_stack_11->SetBinContent(30,5.66539);
   hNCinFV_stack_11->SetBinContent(31,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.2781975);
   hNCinFV_stack_11->SetBinError(2,0.48078);
   hNCinFV_stack_11->SetBinError(3,0.4383608);
   hNCinFV_stack_11->SetBinError(4,0.5194673);
   hNCinFV_stack_11->SetBinError(5,0.5548703);
   hNCinFV_stack_11->SetBinError(6,0.3929602);
   hNCinFV_stack_11->SetBinError(7,0.6515799);
   hNCinFV_stack_11->SetBinError(8,0.4376048);
   hNCinFV_stack_11->SetBinError(9,0.5913855);
   hNCinFV_stack_11->SetBinError(10,0.438694);
   hNCinFV_stack_11->SetBinError(11,0.8997006);
   hNCinFV_stack_11->SetBinError(12,0.3397478);
   hNCinFV_stack_11->SetBinError(13,0.5875827);
   hNCinFV_stack_11->SetBinError(14,0.5883944);
   hNCinFV_stack_11->SetBinError(15,0.4391155);
   hNCinFV_stack_11->SetBinError(16,0.6511312);
   hNCinFV_stack_11->SetBinError(17,0.5528128);
   hNCinFV_stack_11->SetBinError(18,0.5889569);
   hNCinFV_stack_11->SetBinError(19,0.3921167);
   hNCinFV_stack_11->SetBinError(20,0.5188295);
   hNCinFV_stack_11->SetBinError(21,0.8556548);
   hNCinFV_stack_11->SetBinError(22,0.7070809);
   hNCinFV_stack_11->SetBinError(23,0.5201044);
   hNCinFV_stack_11->SetBinError(24,0.9411816);
   hNCinFV_stack_11->SetBinError(25,0.8558255);
   hNCinFV_stack_11->SetBinError(26,0.759212);
   hNCinFV_stack_11->SetBinError(27,0.5889569);
   hNCinFV_stack_11->SetBinError(28,0.6801404);
   hNCinFV_stack_11->SetBinError(29,1.057044);
   hNCinFV_stack_11->SetBinError(30,1.226202);
   hNCinFV_stack_11->SetBinError(31,0.3401776);
   hNCinFV_stack_11->SetEntries(213);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,5.348693);
   hnumuCCinFV_stack_12->SetBinContent(2,3.513002);
   hnumuCCinFV_stack_12->SetBinContent(3,2.483951);
   hnumuCCinFV_stack_12->SetBinContent(4,6.165154);
   hnumuCCinFV_stack_12->SetBinContent(5,3.971166);
   hnumuCCinFV_stack_12->SetBinContent(6,4.363998);
   hnumuCCinFV_stack_12->SetBinContent(7,6.758626);
   hnumuCCinFV_stack_12->SetBinContent(8,8.250907);
   hnumuCCinFV_stack_12->SetBinContent(9,6.923407);
   hnumuCCinFV_stack_12->SetBinContent(10,2.388558);
   hnumuCCinFV_stack_12->SetBinContent(11,4.011582);
   hnumuCCinFV_stack_12->SetBinContent(12,3.034392);
   hnumuCCinFV_stack_12->SetBinContent(13,2.935915);
   hnumuCCinFV_stack_12->SetBinContent(14,2.729314);
   hnumuCCinFV_stack_12->SetBinContent(15,3.838397);
   hnumuCCinFV_stack_12->SetBinContent(16,3.70205);
   hnumuCCinFV_stack_12->SetBinContent(17,3.535508);
   hnumuCCinFV_stack_12->SetBinContent(18,2.63396);
   hnumuCCinFV_stack_12->SetBinContent(19,3.154469);
   hnumuCCinFV_stack_12->SetBinContent(20,4.055285);
   hnumuCCinFV_stack_12->SetBinContent(21,6.2085);
   hnumuCCinFV_stack_12->SetBinContent(22,6.54565);
   hnumuCCinFV_stack_12->SetBinContent(23,4.313685);
   hnumuCCinFV_stack_12->SetBinContent(24,3.151862);
   hnumuCCinFV_stack_12->SetBinContent(25,0.9801958);
   hnumuCCinFV_stack_12->SetBinContent(26,3.023669);
   hnumuCCinFV_stack_12->SetBinContent(27,3.263943);
   hnumuCCinFV_stack_12->SetBinContent(28,3.700899);
   hnumuCCinFV_stack_12->SetBinContent(29,5.138773);
   hnumuCCinFV_stack_12->SetBinContent(30,7.389422);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,1.610015);
   hnumuCCinFV_stack_12->SetBinError(2,0.9319331);
   hnumuCCinFV_stack_12->SetBinError(3,0.8365906);
   hnumuCCinFV_stack_12->SetBinError(4,1.282116);
   hnumuCCinFV_stack_12->SetBinError(5,1.220182);
   hnumuCCinFV_stack_12->SetBinError(6,1.035976);
   hnumuCCinFV_stack_12->SetBinError(7,2.487996);
   hnumuCCinFV_stack_12->SetBinError(8,2.323991);
   hnumuCCinFV_stack_12->SetBinError(9,1.457725);
   hnumuCCinFV_stack_12->SetBinError(10,0.7738356);
   hnumuCCinFV_stack_12->SetBinError(11,1.048025);
   hnumuCCinFV_stack_12->SetBinError(12,0.9419186);
   hnumuCCinFV_stack_12->SetBinError(13,0.9145195);
   hnumuCCinFV_stack_12->SetBinError(14,0.8088958);
   hnumuCCinFV_stack_12->SetBinError(15,1.000093);
   hnumuCCinFV_stack_12->SetBinError(16,1.170151);
   hnumuCCinFV_stack_12->SetBinError(17,0.9770026);
   hnumuCCinFV_stack_12->SetBinError(18,0.7739403);
   hnumuCCinFV_stack_12->SetBinError(19,0.9440234);
   hnumuCCinFV_stack_12->SetBinError(20,1.08736);
   hnumuCCinFV_stack_12->SetBinError(21,1.253084);
   hnumuCCinFV_stack_12->SetBinError(22,1.434752);
   hnumuCCinFV_stack_12->SetBinError(23,1.441188);
   hnumuCCinFV_stack_12->SetBinError(24,0.8968853);
   hnumuCCinFV_stack_12->SetBinError(25,0.4383608);
   hnumuCCinFV_stack_12->SetBinError(26,0.8962997);
   hnumuCCinFV_stack_12->SetBinError(27,0.9526002);
   hnumuCCinFV_stack_12->SetBinError(28,1.05455);
   hnumuCCinFV_stack_12->SetBinError(29,1.156875);
   hnumuCCinFV_stack_12->SetBinError(30,1.432455);
   hnumuCCinFV_stack_12->SetEntries(501);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(7,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.7353273);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,1.157431);
   hnueCCinFV_stack_13->SetBinContent(17,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(19,0.1711909);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(24,0.9693075);
   hnueCCinFV_stack_13->SetBinContent(27,0.5749257);
   hnueCCinFV_stack_13->SetBinContent(28,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(30,0.4992645);
   hnueCCinFV_stack_13->SetBinError(7,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.5475369);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,1.157431);
   hnueCCinFV_stack_13->SetBinError(17,0.4972556);
   hnueCCinFV_stack_13->SetBinError(19,0.1711909);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.2179626);
   hnueCCinFV_stack_13->SetBinError(24,0.7767992);
   hnueCCinFV_stack_13->SetBinError(27,0.3359115);
   hnueCCinFV_stack_13->SetBinError(28,0.2781975);
   hnueCCinFV_stack_13->SetBinError(30,0.3608779);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__23->SetBinContent(0,0.5884556);
   hmcerror__23->SetBinContent(1,43.34715);
   hmcerror__23->SetBinContent(2,36.64815);
   hmcerror__23->SetBinContent(3,39.00573);
   hmcerror__23->SetBinContent(4,43.17481);
   hmcerror__23->SetBinContent(5,32.65774);
   hmcerror__23->SetBinContent(6,36.56233);
   hmcerror__23->SetBinContent(7,40.55568);
   hmcerror__23->SetBinContent(8,50.60266);
   hmcerror__23->SetBinContent(9,40.50493);
   hmcerror__23->SetBinContent(10,30.8563);
   hmcerror__23->SetBinContent(11,37.07537);
   hmcerror__23->SetBinContent(12,32.62798);
   hmcerror__23->SetBinContent(13,33.65707);
   hmcerror__23->SetBinContent(14,34.70173);
   hmcerror__23->SetBinContent(15,36.56637);
   hmcerror__23->SetBinContent(16,36.17498);
   hmcerror__23->SetBinContent(17,28.40778);
   hmcerror__23->SetBinContent(18,24.99875);
   hmcerror__23->SetBinContent(19,33.37614);
   hmcerror__23->SetBinContent(20,35.445);
   hmcerror__23->SetBinContent(21,65.78552);
   hmcerror__23->SetBinContent(22,41.70936);
   hmcerror__23->SetBinContent(23,32.29847);
   hmcerror__23->SetBinContent(24,33.42371);
   hmcerror__23->SetBinContent(25,32.84897);
   hmcerror__23->SetBinContent(26,32.51753);
   hmcerror__23->SetBinContent(27,36.72235);
   hmcerror__23->SetBinContent(28,34.72923);
   hmcerror__23->SetBinContent(29,52.64282);
   hmcerror__23->SetBinContent(30,62.3809);
   hmcerror__23->SetBinContent(31,1.663867);
   hmcerror__23->SetBinError(0,0.3397478);
   hmcerror__23->SetBinError(1,19.47088);
   hmcerror__23->SetBinError(2,15.04725);
   hmcerror__23->SetBinError(3,22.74736);
   hmcerror__23->SetBinError(4,16.1737);
   hmcerror__23->SetBinError(5,14.0634);
   hmcerror__23->SetBinError(6,12.30625);
   hmcerror__23->SetBinError(7,19.67455);
   hmcerror__23->SetBinError(8,29.47753);
   hmcerror__23->SetBinError(9,17.19195);
   hmcerror__23->SetBinError(10,12.68966);
   hmcerror__23->SetBinError(11,15.09283);
   hmcerror__23->SetBinError(12,12.23422);
   hmcerror__23->SetBinError(13,14.52052);
   hmcerror__23->SetBinError(14,14.10579);
   hmcerror__23->SetBinError(15,15.51699);
   hmcerror__23->SetBinError(16,16.50332);
   hmcerror__23->SetBinError(17,13.87468);
   hmcerror__23->SetBinError(18,16.05195);
   hmcerror__23->SetBinError(19,12.90193);
   hmcerror__23->SetBinError(20,13.47544);
   hmcerror__23->SetBinError(21,19.87004);
   hmcerror__23->SetBinError(22,19.7751);
   hmcerror__23->SetBinError(23,19.4381);
   hmcerror__23->SetBinError(24,14.70142);
   hmcerror__23->SetBinError(25,15.16609);
   hmcerror__23->SetBinError(26,15.34084);
   hmcerror__23->SetBinError(27,14.30441);
   hmcerror__23->SetBinError(28,13.44089);
   hmcerror__23->SetBinError(29,18.46607);
   hmcerror__23->SetBinError(30,21.05095);
   hmcerror__23->SetBinError(31,5.152878);
   hmcerror__23->SetBinError(32,0.3895343);
   hmcerror__23->SetBinError(33,0.3895343);
   hmcerror__23->SetEntries(1133.738);

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
   
   Double_t _fx3029[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3029[32] = {
   35,
   51,
   40,
   41,
   33,
   32,
   39,
   43,
   34,
   30,
   32,
   29,
   28,
   41,
   37,
   38,
   26,
   20,
   30,
   33,
   73,
   35,
   29,
   30,
   30,
   33,
   30,
   40,
   39,
   41,
   0,
   0};
   Double_t _felx3029[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3029[32] = {
   6.0548,
   7.2725,
   6.4604,
   6.5384,
   5.8847,
   5.7977,
   6.3813,
   6.6917,
   5.9703,
   5.6197,
   5.7977,
   5.5285,
   5.4358,
   6.5384,
   6.2203,
   6.3013,
   5.2453,
   4.6266,
   5.6197,
   5.8847,
   8.6693,
   6.0548,
   5.5285,
   5.6197,
   5.6197,
   5.8847,
   5.6197,
   6.4604,
   6.3813,
   6.5384,
   0,
   0};
   Double_t _fehx3029[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3029[32] = {
   5.8483,
   7.0686,
   6.2549,
   6.3331,
   5.6776,
   5.5904,
   6.1757,
   6.4868,
   5.7635,
   5.4117,
   5.5904,
   5.3201,
   5.2271,
   6.3331,
   6.0141,
   6.0955,
   5.0358,
   4.4133,
   5.4117,
   5.6776,
   8.4672,
   5.8483,
   5.3201,
   5.4117,
   5.4117,
   5.6776,
   5.4117,
   6.2549,
   6.1757,
   6.3331,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1210);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(89.61392);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.2/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1072.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 200.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 245.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  174.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 225.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 50.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 127.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3030[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3030[32] = {
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
   Double_t _felx3030[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3030[32] = {
   0.4491847,
   0.4105869,
   0.5831801,
   0.3746096,
   0.43063,
   0.3365828,
   0.4851245,
   0.5825291,
   0.4244408,
   0.4112502,
   0.4070852,
   0.374961,
   0.4314255,
   0.4064867,
   0.4243513,
   0.456208,
   0.4884111,
   0.6421103,
   0.3865616,
   0.3801789,
   0.3020427,
   0.4741166,
   0.6018273,
   0.4398501,
   0.4616916,
   0.4717714,
   0.3895286,
   0.3870194,
   0.3507805,
   0.3374583,
   3.096929,
   0};
   Double_t _fehx3030[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3030[32] = {
   0.4491847,
   0.4105869,
   0.5831801,
   0.3746096,
   0.43063,
   0.3365828,
   0.4851245,
   0.5825291,
   0.4244408,
   0.4112502,
   0.4070852,
   0.374961,
   0.4314255,
   0.4064867,
   0.4243513,
   0.456208,
   0.4884111,
   0.6421103,
   0.3865616,
   0.3801789,
   0.3020427,
   0.4741166,
   0.6018273,
   0.4398501,
   0.4616916,
   0.4717714,
   0.3895286,
   0.3870194,
   0.3507805,
   0.3374583,
   3.096929,
   0};
   grae = new TGraphAsymmErrors(32,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1210);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3031[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3031[32] = {
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
   Double_t _felx3031[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3031[32] = {
   0.18491,
   0.1840333,
   0.1773122,
   0.1740664,
   0.2001462,
   0.1673981,
   0.1902162,
   0.1747878,
   0.1818976,
   0.1970566,
   0.1832199,
   0.176105,
   0.1774616,
   0.1967862,
   0.2055217,
   0.2288317,
   0.2018969,
   0.205373,
   0.1907046,
   0.1900064,
   0.1505799,
   0.1918466,
   0.2077371,
   0.182404,
   0.1932773,
   0.2215829,
   0.1957749,
   0.222752,
   0.2000971,
   0.1895679,
   0.5343615,
   0};
   Double_t _fehx3031[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3031[32] = {
   0.18491,
   0.1840333,
   0.1773122,
   0.1740664,
   0.2001462,
   0.1673981,
   0.1902162,
   0.1747878,
   0.1818976,
   0.1970566,
   0.1832199,
   0.176105,
   0.1774616,
   0.1967862,
   0.2055217,
   0.2288317,
   0.2018969,
   0.205373,
   0.1907046,
   0.1900064,
   0.1505799,
   0.1918466,
   0.2077371,
   0.182404,
   0.1932773,
   0.2215829,
   0.1957749,
   0.222752,
   0.2000971,
   0.1895679,
   0.5343615,
   0};
   grae = new TGraphAsymmErrors(32,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1210);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3032[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3032[32] = {
   0.8074349,
   1.391612,
   1.02549,
   0.9496278,
   1.01048,
   0.8752177,
   0.9616409,
   0.8497576,
   0.8394039,
   0.9722486,
   0.8631067,
   0.8888078,
   0.8319203,
   1.181497,
   1.011859,
   1.05045,
   0.9152421,
   0.80004,
   0.8988457,
   0.9310198,
   1.109667,
   0.8391402,
   0.8978754,
   0.8975664,
   0.9132707,
   1.014837,
   0.8169411,
   1.151767,
   0.7408418,
   0.6572525,
   0,
   10};
   Double_t _felx3032[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3032[32] = {
   0.1396816,
   0.1984411,
   0.165627,
   0.1514401,
   0.1801931,
   0.1585703,
   0.1573466,
   0.1322401,
   0.1473969,
   0.1821249,
   0.156376,
   0.1694405,
   0.1615054,
   0.1884171,
   0.1701099,
   0.1741894,
   0.1846431,
   0.1850732,
   0.1683748,
   0.1660234,
   0.1317813,
   0.1451665,
   0.1711691,
   0.1681351,
   0.1710769,
   0.1809701,
   0.1530321,
   0.186022,
   0.1212188,
   0.1048141,
   0,
   0};
   Double_t _fehx3032[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3032[32] = {
   0.1349178,
   0.1928774,
   0.1603585,
   0.1466851,
   0.1738516,
   0.1529005,
   0.1522771,
   0.1281909,
   0.1422913,
   0.1753839,
   0.1507847,
   0.1630533,
   0.1553047,
   0.182501,
   0.1644708,
   0.1685004,
   0.1772683,
   0.1765408,
   0.1621428,
   0.1601805,
   0.1287092,
   0.1402155,
   0.1647168,
   0.161912,
   0.1647449,
   0.1746012,
   0.147368,
   0.1801048,
   0.1173132,
   0.1015231,
   0.6898388,
   0};
   grae = new TGraphAsymmErrors(32,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1210);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(11);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   TLine *line = new TLine(0,1,1100,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4 + Reweight","F");

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
