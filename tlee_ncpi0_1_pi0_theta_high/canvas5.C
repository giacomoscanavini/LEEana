#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 22:48:01 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-4.517484,3.553846,499.5386);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmc__13->SetBinContent(1,49.66034);
   hmc__13->SetBinContent(2,122.7946);
   hmc__13->SetBinContent(3,176.2107);
   hmc__13->SetBinContent(4,203.466);
   hmc__13->SetBinContent(5,225.8742);
   hmc__13->SetBinContent(6,198.4609);
   hmc__13->SetBinContent(7,219.4326);
   hmc__13->SetBinContent(8,197.3078);
   hmc__13->SetBinContent(9,179.8509);
   hmc__13->SetBinContent(10,161.9283);
   hmc__13->SetBinContent(11,165.6293);
   hmc__13->SetBinContent(12,146.3548);
   hmc__13->SetBinContent(13,137.4726);
   hmc__13->SetBinContent(14,114.2141);
   hmc__13->SetBinContent(15,102.0424);
   hmc__13->SetBinContent(16,109.0526);
   hmc__13->SetBinContent(17,90.43568);
   hmc__13->SetBinContent(18,86.76614);
   hmc__13->SetBinContent(19,71.60135);
   hmc__13->SetBinContent(20,66.68935);
   hmc__13->SetBinContent(21,75.74393);
   hmc__13->SetBinContent(22,55.94435);
   hmc__13->SetBinContent(23,47.25803);
   hmc__13->SetBinContent(24,32.49952);
   hmc__13->SetBinContent(25,12.95543);
   hmc__13->SetBinError(1,18.66752);
   hmc__13->SetBinError(2,34.43647);
   hmc__13->SetBinError(3,52.76513);
   hmc__13->SetBinError(4,61.95496);
   hmc__13->SetBinError(5,67.91353);
   hmc__13->SetBinError(6,72.5139);
   hmc__13->SetBinError(7,81.46093);
   hmc__13->SetBinError(8,79.74913);
   hmc__13->SetBinError(9,72.59611);
   hmc__13->SetBinError(10,65.65743);
   hmc__13->SetBinError(11,60.31137);
   hmc__13->SetBinError(12,60.64483);
   hmc__13->SetBinError(13,54.33048);
   hmc__13->SetBinError(14,41.88405);
   hmc__13->SetBinError(15,47.58994);
   hmc__13->SetBinError(16,38.58019);
   hmc__13->SetBinError(17,36.10659);
   hmc__13->SetBinError(18,32.25286);
   hmc__13->SetBinError(19,31.43852);
   hmc__13->SetBinError(20,26.27637);
   hmc__13->SetBinError(21,27.64825);
   hmc__13->SetBinError(22,24.62182);
   hmc__13->SetBinError(23,26.34179);
   hmc__13->SetBinError(24,14.03396);
   hmc__13->SetBinError(25,8.460735);
   hmc__13->SetBinError(26,0.3895343);
   hmc__13->SetMinimum(-4.517484);
   hmc__13->SetMaximum(474.3358);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,0,3.15);
   hs5_stack_5->SetMinimum(-6.289654e-09);
   hs5_stack_5->SetMaximum(237.1679);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.3934307);
   hbadmatch_stack_1->SetBinContent(2,0.9269427);
   hbadmatch_stack_1->SetBinContent(3,3.989427);
   hbadmatch_stack_1->SetBinContent(4,3.455081);
   hbadmatch_stack_1->SetBinContent(5,2.272061);
   hbadmatch_stack_1->SetBinContent(6,5.856091);
   hbadmatch_stack_1->SetBinContent(7,3.607838);
   hbadmatch_stack_1->SetBinContent(8,5.032274);
   hbadmatch_stack_1->SetBinContent(9,2.003276);
   hbadmatch_stack_1->SetBinContent(10,2.866289);
   hbadmatch_stack_1->SetBinContent(11,8.779246);
   hbadmatch_stack_1->SetBinContent(12,7.659118);
   hbadmatch_stack_1->SetBinContent(13,3.517741);
   hbadmatch_stack_1->SetBinContent(14,3.647794);
   hbadmatch_stack_1->SetBinContent(15,4.860762);
   hbadmatch_stack_1->SetBinContent(16,2.112981);
   hbadmatch_stack_1->SetBinContent(17,1.72524);
   hbadmatch_stack_1->SetBinContent(18,2.985276);
   hbadmatch_stack_1->SetBinContent(19,2.005229);
   hbadmatch_stack_1->SetBinContent(20,1.70285);
   hbadmatch_stack_1->SetBinContent(21,2.096483);
   hbadmatch_stack_1->SetBinContent(22,1.98038);
   hbadmatch_stack_1->SetBinContent(23,0.8109735);
   hbadmatch_stack_1->SetBinContent(24,1.171911);
   hbadmatch_stack_1->SetBinContent(25,0.4161119);
   hbadmatch_stack_1->SetBinError(1,0.2781975);
   hbadmatch_stack_1->SetBinError(2,0.4800908);
   hbadmatch_stack_1->SetBinError(3,1.112877);
   hbadmatch_stack_1->SetBinError(4,0.9161079);
   hbadmatch_stack_1->SetBinError(5,0.7115502);
   hbadmatch_stack_1->SetBinError(6,1.274107);
   hbadmatch_stack_1->SetBinError(7,1.022319);
   hbadmatch_stack_1->SetBinError(8,1.157085);
   hbadmatch_stack_1->SetBinError(9,0.7223423);
   hbadmatch_stack_1->SetBinError(10,0.8405086);
   hbadmatch_stack_1->SetBinError(11,2.472425);
   hbadmatch_stack_1->SetBinError(12,1.841262);
   hbadmatch_stack_1->SetBinError(13,0.9194772);
   hbadmatch_stack_1->SetBinError(14,1.044228);
   hbadmatch_stack_1->SetBinError(15,1.154825);
   hbadmatch_stack_1->SetBinError(16,0.6689053);
   hbadmatch_stack_1->SetBinError(17,0.6459243);
   hbadmatch_stack_1->SetBinError(18,0.9805327);
   hbadmatch_stack_1->SetBinError(19,0.7560276);
   hbadmatch_stack_1->SetBinError(20,0.5802224);
   hbadmatch_stack_1->SetBinError(21,0.7486853);
   hbadmatch_stack_1->SetBinError(22,0.7296461);
   hbadmatch_stack_1->SetBinError(23,0.4762135);
   hbadmatch_stack_1->SetBinError(24,0.5108662);
   hbadmatch_stack_1->SetBinError(25,0.2946723);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,2.27519);
   hext_stack_2->SetBinContent(2,4.460999);
   hext_stack_2->SetBinContent(3,4.352847);
   hext_stack_2->SetBinContent(4,13.81549);
   hext_stack_2->SetBinContent(5,25.90524);
   hext_stack_2->SetBinContent(6,10.17487);
   hext_stack_2->SetBinContent(7,23.9285);
   hext_stack_2->SetBinContent(8,13.01665);
   hext_stack_2->SetBinContent(9,18.08613);
   hext_stack_2->SetBinContent(10,16.83162);
   hext_stack_2->SetBinContent(11,18.51868);
   hext_stack_2->SetBinContent(12,11.70029);
   hext_stack_2->SetBinContent(13,19.40249);
   hext_stack_2->SetBinContent(14,13.05854);
   hext_stack_2->SetBinContent(15,10.30456);
   hext_stack_2->SetBinContent(16,18.57493);
   hext_stack_2->SetBinContent(17,11.14806);
   hext_stack_2->SetBinContent(18,14.55524);
   hext_stack_2->SetBinContent(19,3.819384);
   hext_stack_2->SetBinContent(20,5.601365);
   hext_stack_2->SetBinContent(21,8.299094);
   hext_stack_2->SetBinContent(22,2.517386);
   hext_stack_2->SetBinContent(23,4.028449);
   hext_stack_2->SetBinContent(24,1.704188);
   hext_stack_2->SetBinContent(25,0.8131978);
   hext_stack_2->SetBinError(1,0.9336798);
   hext_stack_2->SetBinError(2,1.372818);
   hext_stack_2->SetBinError(3,1.514272);
   hext_stack_2->SetBinError(4,2.58479);
   hext_stack_2->SetBinError(5,3.657817);
   hext_stack_2->SetBinError(6,2.219449);
   hext_stack_2->SetBinError(7,3.616847);
   hext_stack_2->SetBinError(8,2.438871);
   hext_stack_2->SetBinError(9,2.985644);
   hext_stack_2->SetBinError(10,2.699246);
   hext_stack_2->SetBinError(11,2.934435);
   hext_stack_2->SetBinError(12,2.407163);
   hext_stack_2->SetBinError(13,3.011266);
   hext_stack_2->SetBinError(14,2.622797);
   hext_stack_2->SetBinError(15,1.978372);
   hext_stack_2->SetBinError(16,3.023158);
   hext_stack_2->SetBinError(17,2.289466);
   hext_stack_2->SetBinError(18,2.92444);
   hext_stack_2->SetBinError(19,1.213655);
   hext_stack_2->SetBinError(20,1.40861);
   hext_stack_2->SetBinError(21,2.102551);
   hext_stack_2->SetBinError(22,0.9575503);
   hext_stack_2->SetBinError(23,1.479117);
   hext_stack_2->SetBinError(24,0.7656743);
   hext_stack_2->SetBinError(25,0.5750177);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.375357);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,1.268733);
   hdirt_stack_3->SetBinContent(4,0.5758626);
   hdirt_stack_3->SetBinContent(5,1.503647);
   hdirt_stack_3->SetBinContent(6,0.8473874);
   hdirt_stack_3->SetBinContent(7,1.20968);
   hdirt_stack_3->SetBinContent(8,0.6763744);
   hdirt_stack_3->SetBinContent(9,0.7367156);
   hdirt_stack_3->SetBinContent(10,0.9868487);
   hdirt_stack_3->SetBinContent(11,0.6763744);
   hdirt_stack_3->SetBinContent(12,0.994874);
   hdirt_stack_3->SetBinContent(14,1.3681);
   hdirt_stack_3->SetBinContent(15,0.2761429);
   hdirt_stack_3->SetBinContent(16,1.352592);
   hdirt_stack_3->SetBinContent(17,0.5388689);
   hdirt_stack_3->SetBinContent(18,0.5570828);
   hdirt_stack_3->SetBinContent(19,0.623808);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(21,0.857241);
   hdirt_stack_3->SetBinContent(24,0.2761429);
   hdirt_stack_3->SetBinError(1,0.2690641);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.6214798);
   hdirt_stack_3->SetBinError(4,0.3389606);
   hdirt_stack_3->SetBinError(5,0.6468912);
   hdirt_stack_3->SetBinError(6,0.436573);
   hdirt_stack_3->SetBinError(7,0.5787653);
   hdirt_stack_3->SetBinError(8,0.4782689);
   hdirt_stack_3->SetBinError(9,0.3792013);
   hdirt_stack_3->SetBinError(10,0.5094861);
   hdirt_stack_3->SetBinError(11,0.4782689);
   hdirt_stack_3->SetBinError(12,0.5080516);
   hdirt_stack_3->SetBinError(14,0.9804616);
   hdirt_stack_3->SetBinError(15,0.1952625);
   hdirt_stack_3->SetBinError(16,0.5954647);
   hdirt_stack_3->SetBinError(17,0.4239131);
   hdirt_stack_3->SetBinError(18,0.4028472);
   hdirt_stack_3->SetBinError(19,0.4602927);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(21,0.4318147);
   hdirt_stack_3->SetBinError(24,0.1952625);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,3.423945);
   houtFV_stack_4->SetBinContent(2,6.369776);
   houtFV_stack_4->SetBinContent(3,12.99323);
   houtFV_stack_4->SetBinContent(4,13.77577);
   houtFV_stack_4->SetBinContent(5,18.94238);
   houtFV_stack_4->SetBinContent(6,12.24698);
   houtFV_stack_4->SetBinContent(7,14.98774);
   houtFV_stack_4->SetBinContent(8,13.23393);
   houtFV_stack_4->SetBinContent(9,8.544217);
   houtFV_stack_4->SetBinContent(10,8.216537);
   houtFV_stack_4->SetBinContent(11,7.785292);
   houtFV_stack_4->SetBinContent(12,8.120158);
   houtFV_stack_4->SetBinContent(13,6.123783);
   houtFV_stack_4->SetBinContent(14,6.766921);
   houtFV_stack_4->SetBinContent(15,5.21835);
   houtFV_stack_4->SetBinContent(16,7.639468);
   houtFV_stack_4->SetBinContent(17,6.350595);
   houtFV_stack_4->SetBinContent(18,4.945464);
   houtFV_stack_4->SetBinContent(19,6.054852);
   houtFV_stack_4->SetBinContent(20,5.015186);
   houtFV_stack_4->SetBinContent(21,6.371844);
   houtFV_stack_4->SetBinContent(22,5.105436);
   houtFV_stack_4->SetBinContent(23,8.316557);
   houtFV_stack_4->SetBinContent(24,4.767144);
   houtFV_stack_4->SetBinContent(25,1.75406);
   houtFV_stack_4->SetBinError(1,1.154001);
   houtFV_stack_4->SetBinError(2,1.217769);
   houtFV_stack_4->SetBinError(3,1.885255);
   houtFV_stack_4->SetBinError(4,2.018887);
   houtFV_stack_4->SetBinError(5,2.200045);
   houtFV_stack_4->SetBinError(6,1.66956);
   houtFV_stack_4->SetBinError(7,1.981733);
   houtFV_stack_4->SetBinError(8,1.746086);
   houtFV_stack_4->SetBinError(9,1.34846);
   houtFV_stack_4->SetBinError(10,1.450237);
   houtFV_stack_4->SetBinError(11,1.374008);
   houtFV_stack_4->SetBinError(12,1.379974);
   houtFV_stack_4->SetBinError(13,1.239119);
   houtFV_stack_4->SetBinError(14,1.327057);
   houtFV_stack_4->SetBinError(15,1.080714);
   houtFV_stack_4->SetBinError(16,1.33042);
   houtFV_stack_4->SetBinError(17,1.236668);
   houtFV_stack_4->SetBinError(18,1.052052);
   houtFV_stack_4->SetBinError(19,1.270085);
   houtFV_stack_4->SetBinError(20,1.015631);
   houtFV_stack_4->SetBinError(21,1.338712);
   houtFV_stack_4->SetBinError(22,1.198653);
   houtFV_stack_4->SetBinError(23,1.541703);
   houtFV_stack_4->SetBinError(24,1.065681);
   houtFV_stack_4->SetBinError(25,0.6347245);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3142446);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.572282);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6788278);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.01764);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5585147);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.07685162);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05370995);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4839541);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.5005742);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.1075194);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.08099589);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1318656);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4306071);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2359125);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3122975);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2220594);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.05442126);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.05370994);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2152982);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2799972);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.100147);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.05727274);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.01269218);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1709706);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3152069);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.8746945);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7968746);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9874114);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.275993);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.125292);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.9070249);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.249792);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5587739);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3376003);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3101732);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.7888267);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2244006);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3439232);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4845709);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2632061);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1246645);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2219442);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1549472);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6867306);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2584987);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2068098);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1156182);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1161401);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1323019);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.254178);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2395649);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2513243);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4000765);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2714935);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.292177);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06846283);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.197483);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1184695);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1002556);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3181672);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.08441798);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1455073);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.199433);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1220944);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.0471989);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1355684);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.0504635);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2902822);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1425842);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.0938146);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.08216112);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03635368);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,14.12858);
   hNCpi0inFVres_stack_7->SetBinContent(2,36.76659);
   hNCpi0inFVres_stack_7->SetBinContent(3,52.67008);
   hNCpi0inFVres_stack_7->SetBinContent(4,69.26118);
   hNCpi0inFVres_stack_7->SetBinContent(5,76.41927);
   hNCpi0inFVres_stack_7->SetBinContent(6,74.58135);
   hNCpi0inFVres_stack_7->SetBinContent(7,79.31916);
   hNCpi0inFVres_stack_7->SetBinContent(8,75.40125);
   hNCpi0inFVres_stack_7->SetBinContent(9,62.6942);
   hNCpi0inFVres_stack_7->SetBinContent(10,57.13287);
   hNCpi0inFVres_stack_7->SetBinContent(11,51.49837);
   hNCpi0inFVres_stack_7->SetBinContent(12,47.97479);
   hNCpi0inFVres_stack_7->SetBinContent(13,44.27639);
   hNCpi0inFVres_stack_7->SetBinContent(14,38.00442);
   hNCpi0inFVres_stack_7->SetBinContent(15,35.4998);
   hNCpi0inFVres_stack_7->SetBinContent(16,33.54015);
   hNCpi0inFVres_stack_7->SetBinContent(17,31.59085);
   hNCpi0inFVres_stack_7->SetBinContent(18,27.35198);
   hNCpi0inFVres_stack_7->SetBinContent(19,24.8154);
   hNCpi0inFVres_stack_7->SetBinContent(20,21.87411);
   hNCpi0inFVres_stack_7->SetBinContent(21,23.35222);
   hNCpi0inFVres_stack_7->SetBinContent(22,16.02589);
   hNCpi0inFVres_stack_7->SetBinContent(23,12.22947);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.455627);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.808773);
   hNCpi0inFVres_stack_7->SetBinError(1,1.461381);
   hNCpi0inFVres_stack_7->SetBinError(2,2.101746);
   hNCpi0inFVres_stack_7->SetBinError(3,2.285307);
   hNCpi0inFVres_stack_7->SetBinError(4,2.566825);
   hNCpi0inFVres_stack_7->SetBinError(5,2.769442);
   hNCpi0inFVres_stack_7->SetBinError(6,2.709693);
   hNCpi0inFVres_stack_7->SetBinError(7,2.749004);
   hNCpi0inFVres_stack_7->SetBinError(8,2.618433);
   hNCpi0inFVres_stack_7->SetBinError(9,2.327063);
   hNCpi0inFVres_stack_7->SetBinError(10,2.16749);
   hNCpi0inFVres_stack_7->SetBinError(11,2.073551);
   hNCpi0inFVres_stack_7->SetBinError(12,1.903002);
   hNCpi0inFVres_stack_7->SetBinError(13,1.995649);
   hNCpi0inFVres_stack_7->SetBinError(14,1.857785);
   hNCpi0inFVres_stack_7->SetBinError(15,1.692286);
   hNCpi0inFVres_stack_7->SetBinError(16,1.68866);
   hNCpi0inFVres_stack_7->SetBinError(17,1.7033);
   hNCpi0inFVres_stack_7->SetBinError(18,1.491406);
   hNCpi0inFVres_stack_7->SetBinError(19,1.43689);
   hNCpi0inFVres_stack_7->SetBinError(20,1.385701);
   hNCpi0inFVres_stack_7->SetBinError(21,1.552339);
   hNCpi0inFVres_stack_7->SetBinError(22,1.221377);
   hNCpi0inFVres_stack_7->SetBinError(23,1.151578);
   hNCpi0inFVres_stack_7->SetBinError(24,1.003339);
   hNCpi0inFVres_stack_7->SetBinError(25,0.5679527);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,7.886133);
   hNCpi0inFVdis_stack_8->SetBinContent(2,13.54029);
   hNCpi0inFVdis_stack_8->SetBinContent(3,19.32215);
   hNCpi0inFVdis_stack_8->SetBinContent(4,24.2307);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.88256);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.83647);
   hNCpi0inFVdis_stack_8->SetBinContent(7,15.14384);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.7962);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.99841);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.62062);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.34073);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.30079);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.236305);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.278628);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.115088);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.813306);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.637178);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.664385);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.687493);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.199554);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.454227);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.824383);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.833762);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.475036);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.380417);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.152441);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.347806);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.522591);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.98699);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.823784);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.338263);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.328889);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.166833);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.094591);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.074145);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.053062);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.069446);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7935087);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6616613);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6762034);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8794422);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8298212);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5634674);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7264537);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7771662);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5222728);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6797188);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.510412);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5710055);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1713478);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.09700586);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.2789693);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1459375);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02588351);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03723348);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02901978);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.06927638);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1736405);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1290034);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02577893);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02009868);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02632953);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02121135);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,9.21002);
   hCCpi0inFV_stack_10->SetBinContent(2,23.70507);
   hCCpi0inFV_stack_10->SetBinContent(3,35.68398);
   hCCpi0inFV_stack_10->SetBinContent(4,31.94483);
   hCCpi0inFV_stack_10->SetBinContent(5,27.56997);
   hCCpi0inFV_stack_10->SetBinContent(6,38.08254);
   hCCpi0inFV_stack_10->SetBinContent(7,37.79149);
   hCCpi0inFV_stack_10->SetBinContent(8,32.2049);
   hCCpi0inFV_stack_10->SetBinContent(9,36.02484);
   hCCpi0inFV_stack_10->SetBinContent(10,25.81816);
   hCCpi0inFV_stack_10->SetBinContent(11,27.67947);
   hCCpi0inFV_stack_10->SetBinContent(12,21.76425);
   hCCpi0inFV_stack_10->SetBinContent(13,22.77036);
   hCCpi0inFV_stack_10->SetBinContent(14,16.50828);
   hCCpi0inFV_stack_10->SetBinContent(15,17.05615);
   hCCpi0inFV_stack_10->SetBinContent(16,14.11446);
   hCCpi0inFV_stack_10->SetBinContent(17,16.32781);
   hCCpi0inFV_stack_10->SetBinContent(18,15.55363);
   hCCpi0inFV_stack_10->SetBinContent(19,12.35058);
   hCCpi0inFV_stack_10->SetBinContent(20,12.28889);
   hCCpi0inFV_stack_10->SetBinContent(21,15.46459);
   hCCpi0inFV_stack_10->SetBinContent(22,10.59262);
   hCCpi0inFV_stack_10->SetBinContent(23,7.333785);
   hCCpi0inFV_stack_10->SetBinContent(24,5.554255);
   hCCpi0inFV_stack_10->SetBinContent(25,2.497396);
   hCCpi0inFV_stack_10->SetBinError(1,1.612498);
   hCCpi0inFV_stack_10->SetBinError(2,2.45795);
   hCCpi0inFV_stack_10->SetBinError(3,3.040794);
   hCCpi0inFV_stack_10->SetBinError(4,2.844316);
   hCCpi0inFV_stack_10->SetBinError(5,2.535243);
   hCCpi0inFV_stack_10->SetBinError(6,3.166385);
   hCCpi0inFV_stack_10->SetBinError(7,3.109853);
   hCCpi0inFV_stack_10->SetBinError(8,2.920881);
   hCCpi0inFV_stack_10->SetBinError(9,3.070975);
   hCCpi0inFV_stack_10->SetBinError(10,2.517275);
   hCCpi0inFV_stack_10->SetBinError(11,2.636627);
   hCCpi0inFV_stack_10->SetBinError(12,2.340857);
   hCCpi0inFV_stack_10->SetBinError(13,2.324622);
   hCCpi0inFV_stack_10->SetBinError(14,2.040309);
   hCCpi0inFV_stack_10->SetBinError(15,2.069913);
   hCCpi0inFV_stack_10->SetBinError(16,1.834039);
   hCCpi0inFV_stack_10->SetBinError(17,2.006956);
   hCCpi0inFV_stack_10->SetBinError(18,1.897505);
   hCCpi0inFV_stack_10->SetBinError(19,1.737126);
   hCCpi0inFV_stack_10->SetBinError(20,1.792475);
   hCCpi0inFV_stack_10->SetBinError(21,1.954946);
   hCCpi0inFV_stack_10->SetBinError(22,1.635318);
   hCCpi0inFV_stack_10->SetBinError(23,1.316001);
   hCCpi0inFV_stack_10->SetBinError(24,1.238377);
   hCCpi0inFV_stack_10->SetBinError(25,0.7749536);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,4.083085);
   hNCinFV_stack_11->SetBinContent(2,17.47331);
   hNCinFV_stack_11->SetBinContent(3,25.4208);
   hNCinFV_stack_11->SetBinContent(4,25.45978);
   hNCinFV_stack_11->SetBinContent(5,27.89282);
   hNCinFV_stack_11->SetBinContent(6,20.71355);
   hNCinFV_stack_11->SetBinContent(7,17.45206);
   hNCinFV_stack_11->SetBinContent(8,16.98506);
   hNCinFV_stack_11->SetBinContent(9,14.81094);
   hNCinFV_stack_11->SetBinContent(10,9.856128);
   hNCinFV_stack_11->SetBinContent(11,12.47641);
   hNCinFV_stack_11->SetBinContent(12,10.98679);
   hNCinFV_stack_11->SetBinContent(13,6.825204);
   hNCinFV_stack_11->SetBinContent(14,7.053085);
   hNCinFV_stack_11->SetBinContent(15,4.922885);
   hNCinFV_stack_11->SetBinContent(16,10.97989);
   hNCinFV_stack_11->SetBinContent(17,6.680988);
   hNCinFV_stack_11->SetBinContent(18,6.763221);
   hNCinFV_stack_11->SetBinContent(19,6.255195);
   hNCinFV_stack_11->SetBinContent(20,6.419273);
   hNCinFV_stack_11->SetBinContent(21,4.926534);
   hNCinFV_stack_11->SetBinContent(22,7.017554);
   hNCinFV_stack_11->SetBinContent(23,5.52144);
   hNCinFV_stack_11->SetBinContent(24,4.298365);
   hNCinFV_stack_11->SetBinContent(25,2.140778);
   hNCinFV_stack_11->SetBinError(1,1.359664);
   hNCinFV_stack_11->SetBinError(2,2.331885);
   hNCinFV_stack_11->SetBinError(3,2.94017);
   hNCinFV_stack_11->SetBinError(4,2.968333);
   hNCinFV_stack_11->SetBinError(5,3.168687);
   hNCinFV_stack_11->SetBinError(6,2.608661);
   hNCinFV_stack_11->SetBinError(7,2.22231);
   hNCinFV_stack_11->SetBinError(8,2.33143);
   hNCinFV_stack_11->SetBinError(9,1.953749);
   hNCinFV_stack_11->SetBinError(10,1.553387);
   hNCinFV_stack_11->SetBinError(11,1.969855);
   hNCinFV_stack_11->SetBinError(12,1.854574);
   hNCinFV_stack_11->SetBinError(13,1.372152);
   hNCinFV_stack_11->SetBinError(14,1.253051);
   hNCinFV_stack_11->SetBinError(15,1.076096);
   hNCinFV_stack_11->SetBinError(16,1.976649);
   hNCinFV_stack_11->SetBinError(17,1.302786);
   hNCinFV_stack_11->SetBinError(18,1.24724);
   hNCinFV_stack_11->SetBinError(19,1.273636);
   hNCinFV_stack_11->SetBinError(20,1.229972);
   hNCinFV_stack_11->SetBinError(21,1.094478);
   hNCinFV_stack_11->SetBinError(22,1.355255);
   hNCinFV_stack_11->SetBinError(23,1.158372);
   hNCinFV_stack_11->SetBinError(24,1.198959);
   hNCinFV_stack_11->SetBinError(25,0.7493265);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.285394);
   hnumuCCinFV_stack_12->SetBinContent(2,12.11366);
   hnumuCCinFV_stack_12->SetBinContent(3,17.02179);
   hnumuCCinFV_stack_12->SetBinContent(4,17.99325);
   hnumuCCinFV_stack_12->SetBinContent(5,21.12613);
   hnumuCCinFV_stack_12->SetBinContent(6,17.02036);
   hnumuCCinFV_stack_12->SetBinContent(7,23.68004);
   hnumuCCinFV_stack_12->SetBinContent(8,25.74469);
   hnumuCCinFV_stack_12->SetBinContent(9,24.68409);
   hnumuCCinFV_stack_12->SetBinContent(10,28.26721);
   hnumuCCinFV_stack_12->SetBinContent(11,26.37085);
   hnumuCCinFV_stack_12->SetBinContent(12,26.25455);
   hnumuCCinFV_stack_12->SetBinContent(13,26.12551);
   hnumuCCinFV_stack_12->SetBinContent(14,21.05612);
   hnumuCCinFV_stack_12->SetBinContent(15,16.80077);
   hnumuCCinFV_stack_12->SetBinContent(16,13.88917);
   hnumuCCinFV_stack_12->SetBinContent(17,8.598091);
   hnumuCCinFV_stack_12->SetBinContent(18,9.265192);
   hnumuCCinFV_stack_12->SetBinContent(19,10.0163);
   hnumuCCinFV_stack_12->SetBinContent(20,8.047421);
   hnumuCCinFV_stack_12->SetBinContent(21,9.669005);
   hnumuCCinFV_stack_12->SetBinContent(22,7.425484);
   hnumuCCinFV_stack_12->SetBinContent(23,5.473333);
   hnumuCCinFV_stack_12->SetBinContent(24,3.668539);
   hnumuCCinFV_stack_12->SetBinContent(25,2.10834);
   hnumuCCinFV_stack_12->SetBinError(1,1.079576);
   hnumuCCinFV_stack_12->SetBinError(2,1.834501);
   hnumuCCinFV_stack_12->SetBinError(3,2.148893);
   hnumuCCinFV_stack_12->SetBinError(4,2.603651);
   hnumuCCinFV_stack_12->SetBinError(5,2.899446);
   hnumuCCinFV_stack_12->SetBinError(6,2.287315);
   hnumuCCinFV_stack_12->SetBinError(7,2.79633);
   hnumuCCinFV_stack_12->SetBinError(8,3.838502);
   hnumuCCinFV_stack_12->SetBinError(9,2.628456);
   hnumuCCinFV_stack_12->SetBinError(10,3.16337);
   hnumuCCinFV_stack_12->SetBinError(11,2.862379);
   hnumuCCinFV_stack_12->SetBinError(12,3.35782);
   hnumuCCinFV_stack_12->SetBinError(13,2.725322);
   hnumuCCinFV_stack_12->SetBinError(14,2.602744);
   hnumuCCinFV_stack_12->SetBinError(15,2.528621);
   hnumuCCinFV_stack_12->SetBinError(16,1.947208);
   hnumuCCinFV_stack_12->SetBinError(17,1.53086);
   hnumuCCinFV_stack_12->SetBinError(18,1.920657);
   hnumuCCinFV_stack_12->SetBinError(19,1.993974);
   hnumuCCinFV_stack_12->SetBinError(20,1.539445);
   hnumuCCinFV_stack_12->SetBinError(21,1.626151);
   hnumuCCinFV_stack_12->SetBinError(22,1.471619);
   hnumuCCinFV_stack_12->SetBinError(23,1.205681);
   hnumuCCinFV_stack_12->SetBinError(24,0.9512881);
   hnumuCCinFV_stack_12->SetBinError(25,0.7245515);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,3.113986);
   hnueCCinFV_stack_13->SetBinContent(2,5.370176);
   hnueCCinFV_stack_13->SetBinContent(3,1.918481);
   hnueCCinFV_stack_13->SetBinContent(4,1.042539);
   hnueCCinFV_stack_13->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(6,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(7,0.9873133);
   hnueCCinFV_stack_13->SetBinContent(8,0.7890683);
   hnueCCinFV_stack_13->SetBinContent(10,0.7442666);
   hnueCCinFV_stack_13->SetBinContent(11,1.166263);
   hnueCCinFV_stack_13->SetBinContent(12,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(16,0.5043085);
   hnueCCinFV_stack_13->SetBinContent(17,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(19,0.2505759);
   hnueCCinFV_stack_13->SetBinContent(20,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(21,0.4402164);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.3934307);
   hnueCCinFV_stack_13->SetBinError(1,0.9012873);
   hnueCCinFV_stack_13->SetBinError(2,2.153736);
   hnueCCinFV_stack_13->SetBinError(3,0.7092484);
   hnueCCinFV_stack_13->SetBinError(4,0.4674594);
   hnueCCinFV_stack_13->SetBinError(5,0.3921167);
   hnueCCinFV_stack_13->SetBinError(6,0.4379386);
   hnueCCinFV_stack_13->SetBinError(7,0.5074257);
   hnueCCinFV_stack_13->SetBinError(8,0.4671225);
   hnueCCinFV_stack_13->SetBinError(10,0.4496558);
   hnueCCinFV_stack_13->SetBinError(11,0.6101235);
   hnueCCinFV_stack_13->SetBinError(12,0.2504446);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.5946997);
   hnueCCinFV_stack_13->SetBinError(16,0.3566341);
   hnueCCinFV_stack_13->SetBinError(17,0.4132436);
   hnueCCinFV_stack_13->SetBinError(19,0.2502083);
   hnueCCinFV_stack_13->SetBinError(20,0.2476759);
   hnueCCinFV_stack_13->SetBinError(21,0.3132948);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.2781975);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);
   hmcerror__14->SetBinContent(1,49.66034);
   hmcerror__14->SetBinContent(2,122.7946);
   hmcerror__14->SetBinContent(3,176.2107);
   hmcerror__14->SetBinContent(4,203.466);
   hmcerror__14->SetBinContent(5,225.8742);
   hmcerror__14->SetBinContent(6,198.4609);
   hmcerror__14->SetBinContent(7,219.4326);
   hmcerror__14->SetBinContent(8,197.3078);
   hmcerror__14->SetBinContent(9,179.8509);
   hmcerror__14->SetBinContent(10,161.9283);
   hmcerror__14->SetBinContent(11,165.6293);
   hmcerror__14->SetBinContent(12,146.3548);
   hmcerror__14->SetBinContent(13,137.4726);
   hmcerror__14->SetBinContent(14,114.2141);
   hmcerror__14->SetBinContent(15,102.0424);
   hmcerror__14->SetBinContent(16,109.0526);
   hmcerror__14->SetBinContent(17,90.43568);
   hmcerror__14->SetBinContent(18,86.76614);
   hmcerror__14->SetBinContent(19,71.60135);
   hmcerror__14->SetBinContent(20,66.68935);
   hmcerror__14->SetBinContent(21,75.74393);
   hmcerror__14->SetBinContent(22,55.94435);
   hmcerror__14->SetBinContent(23,47.25803);
   hmcerror__14->SetBinContent(24,32.49952);
   hmcerror__14->SetBinContent(25,12.95543);
   hmcerror__14->SetBinError(1,18.66752);
   hmcerror__14->SetBinError(2,34.43647);
   hmcerror__14->SetBinError(3,52.76513);
   hmcerror__14->SetBinError(4,61.95496);
   hmcerror__14->SetBinError(5,67.91353);
   hmcerror__14->SetBinError(6,72.5139);
   hmcerror__14->SetBinError(7,81.46093);
   hmcerror__14->SetBinError(8,79.74913);
   hmcerror__14->SetBinError(9,72.59611);
   hmcerror__14->SetBinError(10,65.65743);
   hmcerror__14->SetBinError(11,60.31137);
   hmcerror__14->SetBinError(12,60.64483);
   hmcerror__14->SetBinError(13,54.33048);
   hmcerror__14->SetBinError(14,41.88405);
   hmcerror__14->SetBinError(15,47.58994);
   hmcerror__14->SetBinError(16,38.58019);
   hmcerror__14->SetBinError(17,36.10659);
   hmcerror__14->SetBinError(18,32.25286);
   hmcerror__14->SetBinError(19,31.43852);
   hmcerror__14->SetBinError(20,26.27637);
   hmcerror__14->SetBinError(21,27.64825);
   hmcerror__14->SetBinError(22,24.62182);
   hmcerror__14->SetBinError(23,26.34179);
   hmcerror__14->SetBinError(24,14.03396);
   hmcerror__14->SetBinError(25,8.460735);
   hmcerror__14->SetBinError(26,0.3895343);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3017[25] = {
   31,
   89,
   139,
   170,
   185,
   179,
   178,
   169,
   169,
   143,
   140,
   129,
   135,
   97,
   94,
   85,
   90,
   73,
   70,
   65,
   66,
   52,
   35,
   30,
   8};
   Double_t _felx3017[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3017[25] = {
   5.7094,
   9.5566,
   11.78983,
   13.0384,
   13.60147,
   13.37909,
   13.34166,
   13,
   13,
   11.95826,
   11.83216,
   11.35782,
   11.61895,
   9.9704,
   9.8173,
   9.3428,
   9.6093,
   8.6693,
   8.4925,
   8.1893,
   8.2509,
   7.3419,
   6.0548,
   5.6197,
   3.0307};
   Double_t _fehx3017[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3017[25] = {
   5.5017,
   9.3552,
   11.78983,
   13.0384,
   13.60147,
   13.37909,
   13.34166,
   13,
   13,
   11.95826,
   11.83216,
   11.35782,
   11.61895,
   9.769,
   9.616,
   9.1411,
   9.4079,
   8.4672,
   8.2902,
   7.9866,
   8.0483,
   7.1381,
   5.8483,
   5.4117,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,3.465);
   Graph_Graph3017->SetMinimum(4.47237);
   Graph_Graph3017->SetMaximum(217.9647);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.9","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.1","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1017.7","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  235.5","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 283.4","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3018[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3018[25] = {
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
   Double_t _felx3018[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3018[25] = {
   0.375904,
   0.2804396,
   0.2994433,
   0.3044978,
   0.3006697,
   0.3653814,
   0.3712344,
   0.4041863,
   0.4036462,
   0.4054723,
   0.3641347,
   0.4143686,
   0.3952094,
   0.3667154,
   0.4663741,
   0.3537761,
   0.3992516,
   0.3717218,
   0.4390772,
   0.3940115,
   0.3650226,
   0.4401126,
   0.5574035,
   0.4318204,
   0.6530649};
   Double_t _fehx3018[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3018[25] = {
   0.375904,
   0.2804396,
   0.2994433,
   0.3044978,
   0.3006697,
   0.3653814,
   0.3712344,
   0.4041863,
   0.4036462,
   0.4054723,
   0.3641347,
   0.4143686,
   0.3952094,
   0.3667154,
   0.4663741,
   0.3537761,
   0.3992516,
   0.3717218,
   0.4390772,
   0.3940115,
   0.3650226,
   0.4401126,
   0.5574035,
   0.4318204,
   0.6530649};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,3.465);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3019[25] = {
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
   Double_t _felx3019[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3019[25] = {
   0.2408948,
   0.2439154,
   0.2622417,
   0.2747884,
   0.2835543,
   0.3244842,
   0.3351735,
   0.3761348,
   0.3866962,
   0.38112,
   0.3447932,
   0.3923233,
   0.3564871,
   0.3461631,
   0.3757237,
   0.3259465,
   0.350215,
   0.3432097,
   0.3940333,
   0.3393554,
   0.2902586,
   0.3353397,
   0.2919569,
   0.299803,
   0.2892439};
   Double_t _fehx3019[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3019[25] = {
   0.2408948,
   0.2439154,
   0.2622417,
   0.2747884,
   0.2835543,
   0.3244842,
   0.3351735,
   0.3761348,
   0.3866962,
   0.38112,
   0.3447932,
   0.3923233,
   0.3564871,
   0.3461631,
   0.3757237,
   0.3259465,
   0.350215,
   0.3432097,
   0.3940333,
   0.3393554,
   0.2902586,
   0.3353397,
   0.2919569,
   0.299803,
   0.2892439};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,3.465);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3020[25] = {
   0.6242406,
   0.7247875,
   0.7888282,
   0.8355204,
   0.81904,
   0.901941,
   0.8111831,
   0.8565297,
   0.9396675,
   0.8831071,
   0.8452611,
   0.8814197,
   0.9820136,
   0.8492826,
   0.9211855,
   0.7794407,
   0.9951824,
   0.8413421,
   0.9776352,
   0.9746684,
   0.871357,
   0.9294951,
   0.7406148,
   0.9230906,
   0.6175018};
   Double_t _felx3020[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3020[25] = {
   0.114969,
   0.07782589,
   0.06690753,
   0.06408149,
   0.06021702,
   0.06741423,
   0.06080074,
   0.0658869,
   0.07228211,
   0.07384912,
   0.0714376,
   0.07760468,
   0.08451827,
   0.08729574,
   0.09620803,
   0.08567246,
   0.1062556,
   0.09991571,
   0.1186081,
   0.1227977,
   0.1089315,
   0.1312358,
   0.1281221,
   0.1729164,
   0.2339328};
   Double_t _fehx3020[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3020[25] = {
   0.1107866,
   0.07618575,
   0.06690753,
   0.06408149,
   0.06021702,
   0.06741423,
   0.06080074,
   0.0658869,
   0.07228211,
   0.07384912,
   0.0714376,
   0.07760468,
   0.08451827,
   0.08553238,
   0.09423532,
   0.08382289,
   0.1040286,
   0.09758646,
   0.1157827,
   0.1197583,
   0.1062567,
   0.1275929,
   0.1237525,
   0.1665163,
   0.2153229};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,3.465);
   Graph_Graph3020->SetMinimum(0.3120048);
   Graph_Graph3020->SetMaximum(1.170775);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_theta_high_all",25,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
   TLine *line = new TLine(0,1,3.15,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec. + Reweight","F");

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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
