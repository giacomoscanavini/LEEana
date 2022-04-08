#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 14:48:27 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",242,172,1200,900);
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
   pad1->Range(-27.69231,-0.52,203.0769,43.81684);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hmc__1->SetBinContent(1,3.44713);
   hmc__1->SetBinContent(2,13.17866);
   hmc__1->SetBinContent(3,19.83369);
   hmc__1->SetBinContent(4,22.21776);
   hmc__1->SetBinContent(5,25.3222);
   hmc__1->SetBinContent(6,23.58171);
   hmc__1->SetBinContent(7,24.23466);
   hmc__1->SetBinContent(8,21.14893);
   hmc__1->SetBinContent(9,22.29891);
   hmc__1->SetBinContent(10,17.91974);
   hmc__1->SetBinContent(11,14.53417);
   hmc__1->SetBinContent(12,15.2005);
   hmc__1->SetBinContent(13,12.67829);
   hmc__1->SetBinContent(14,11.03623);
   hmc__1->SetBinContent(15,11.88618);
   hmc__1->SetBinContent(16,11.46343);
   hmc__1->SetBinContent(17,9.331964);
   hmc__1->SetBinContent(18,9.381886);
   hmc__1->SetBinContent(19,8.947895);
   hmc__1->SetBinContent(20,7.938999);
   hmc__1->SetBinContent(21,8.015297);
   hmc__1->SetBinContent(22,6.067327);
   hmc__1->SetBinContent(23,4.014271);
   hmc__1->SetBinContent(24,1.832878);
   hmc__1->SetBinError(1,1.561895);
   hmc__1->SetBinError(2,4.248645);
   hmc__1->SetBinError(3,5.884727);
   hmc__1->SetBinError(4,5.426111);
   hmc__1->SetBinError(5,7.241669);
   hmc__1->SetBinError(6,6.826922);
   hmc__1->SetBinError(7,6.890191);
   hmc__1->SetBinError(8,6.443274);
   hmc__1->SetBinError(9,6.133919);
   hmc__1->SetBinError(10,4.804413);
   hmc__1->SetBinError(11,5.079583);
   hmc__1->SetBinError(12,4.325294);
   hmc__1->SetBinError(13,3.642616);
   hmc__1->SetBinError(14,4.109178);
   hmc__1->SetBinError(15,4.500884);
   hmc__1->SetBinError(16,5.131051);
   hmc__1->SetBinError(17,3.247373);
   hmc__1->SetBinError(18,3.511291);
   hmc__1->SetBinError(19,3.633819);
   hmc__1->SetBinError(20,3.088375);
   hmc__1->SetBinError(21,2.944382);
   hmc__1->SetBinError(22,2.632753);
   hmc__1->SetBinError(23,2.067248);
   hmc__1->SetBinError(24,2.246999);
   hmc__1->SetBinError(25,0.125509);
   hmc__1->SetMinimum(-0.52);
   hmc__1->SetMaximum(41.6);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,180);
   hs1_stack_1->SetMinimum(-1.105156e-09);
   hs1_stack_1->SetMaximum(26.5883);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(2,0.4268006);
   hbadmatch_stack_1->SetBinContent(3,0.3899928);
   hbadmatch_stack_1->SetBinContent(4,0.5916939);
   hbadmatch_stack_1->SetBinContent(5,0.8727446);
   hbadmatch_stack_1->SetBinContent(6,0.3775878);
   hbadmatch_stack_1->SetBinContent(7,0.4048617);
   hbadmatch_stack_1->SetBinContent(8,0.5467551);
   hbadmatch_stack_1->SetBinContent(9,0.6671021);
   hbadmatch_stack_1->SetBinContent(10,0.4283392);
   hbadmatch_stack_1->SetBinContent(11,0.568501);
   hbadmatch_stack_1->SetBinContent(12,0.3137217);
   hbadmatch_stack_1->SetBinContent(13,0.2648078);
   hbadmatch_stack_1->SetBinContent(14,0.149413);
   hbadmatch_stack_1->SetBinContent(15,0.3160065);
   hbadmatch_stack_1->SetBinContent(16,0.2867162);
   hbadmatch_stack_1->SetBinContent(17,0.2246545);
   hbadmatch_stack_1->SetBinContent(18,0.2669274);
   hbadmatch_stack_1->SetBinContent(19,0.09317938);
   hbadmatch_stack_1->SetBinContent(20,0.288651);
   hbadmatch_stack_1->SetBinContent(22,0.0516566);
   hbadmatch_stack_1->SetBinContent(23,0.321373);
   hbadmatch_stack_1->SetBinError(2,0.1608885);
   hbadmatch_stack_1->SetBinError(3,0.1372586);
   hbadmatch_stack_1->SetBinError(4,0.1839421);
   hbadmatch_stack_1->SetBinError(5,0.3809058);
   hbadmatch_stack_1->SetBinError(6,0.1305479);
   hbadmatch_stack_1->SetBinError(7,0.1495046);
   hbadmatch_stack_1->SetBinError(8,0.1759705);
   hbadmatch_stack_1->SetBinError(9,0.1899264);
   hbadmatch_stack_1->SetBinError(10,0.176121);
   hbadmatch_stack_1->SetBinError(11,0.1802239);
   hbadmatch_stack_1->SetBinError(12,0.1344331);
   hbadmatch_stack_1->SetBinError(13,0.1120681);
   hbadmatch_stack_1->SetBinError(14,0.08945557);
   hbadmatch_stack_1->SetBinError(15,0.1417011);
   hbadmatch_stack_1->SetBinError(16,0.1178354);
   hbadmatch_stack_1->SetBinError(17,0.1096238);
   hbadmatch_stack_1->SetBinError(18,0.1193974);
   hbadmatch_stack_1->SetBinError(19,0.03531157);
   hbadmatch_stack_1->SetBinError(20,0.126152);
   hbadmatch_stack_1->SetBinError(22,0.03041164);
   hbadmatch_stack_1->SetBinError(23,0.2694617);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hext_stack_2->SetBinContent(1,0.2603984);
   hext_stack_2->SetBinContent(2,1.203833);
   hext_stack_2->SetBinContent(3,0.8793539);
   hext_stack_2->SetBinContent(4,1.68782);
   hext_stack_2->SetBinContent(5,2.545366);
   hext_stack_2->SetBinContent(6,1.3238);
   hext_stack_2->SetBinContent(7,1.847328);
   hext_stack_2->SetBinContent(8,1.61147);
   hext_stack_2->SetBinContent(9,1.57466);
   hext_stack_2->SetBinContent(10,2.459477);
   hext_stack_2->SetBinContent(11,0.7293842);
   hext_stack_2->SetBinContent(12,2.309507);
   hext_stack_2->SetBinContent(13,2.309507);
   hext_stack_2->SetBinContent(14,1.378343);
   hext_stack_2->SetBinContent(15,1.501041);
   hext_stack_2->SetBinContent(16,1.127482);
   hext_stack_2->SetBinContent(17,0.9802442);
   hext_stack_2->SetBinContent(18,0.2972079);
   hext_stack_2->SetBinContent(19,0.3585572);
   hext_stack_2->SetBinContent(20,0.6462268);
   hext_stack_2->SetBinContent(21,1.056595);
   hext_stack_2->SetBinContent(22,0.2603984);
   hext_stack_2->SetBinContent(23,0.2235888);
   hext_stack_2->SetBinContent(24,0.2235888);
   hext_stack_2->SetBinError(1,0.2009311);
   hext_stack_2->SetBinError(2,0.4479532);
   hext_stack_2->SetBinError(3,0.3497489);
   hext_stack_2->SetBinError(4,0.5300538);
   hext_stack_2->SetBinError(5,0.6634696);
   hext_stack_2->SetBinError(6,0.4061475);
   hext_stack_2->SetBinError(7,0.5318967);
   hext_stack_2->SetBinError(8,0.49279);
   hext_stack_2->SetBinError(9,0.4923315);
   hext_stack_2->SetBinError(10,0.662675);
   hext_stack_2->SetBinError(11,0.2886277);
   hext_stack_2->SetBinError(12,0.6325502);
   hext_stack_2->SetBinError(13,0.6325502);
   hext_stack_2->SetBinError(14,0.4898791);
   hext_stack_2->SetBinError(15,0.4914133);
   hext_stack_2->SetBinError(16,0.4031712);
   hext_stack_2->SetBinError(17,0.4009245);
   hext_stack_2->SetBinError(18,0.2020518);
   hext_stack_2->SetBinError(19,0.2039061);
   hext_stack_2->SetBinError(20,0.3456354);
   hext_stack_2->SetBinError(21,0.4459321);
   hext_stack_2->SetBinError(22,0.2009311);
   hext_stack_2->SetBinError(23,0.199804);
   hext_stack_2->SetBinError(24,0.199804);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hdirt_stack_3->SetBinContent(1,0.009731955);
   hdirt_stack_3->SetBinContent(2,0.1573902);
   hdirt_stack_3->SetBinContent(3,0.1490664);
   hdirt_stack_3->SetBinContent(4,0.1704212);
   hdirt_stack_3->SetBinContent(5,0.2958886);
   hdirt_stack_3->SetBinContent(6,0.1965355);
   hdirt_stack_3->SetBinContent(7,0.1938286);
   hdirt_stack_3->SetBinContent(8,0.2990943);
   hdirt_stack_3->SetBinContent(9,0.436673);
   hdirt_stack_3->SetBinContent(10,0.1858358);
   hdirt_stack_3->SetBinContent(11,0.3120961);
   hdirt_stack_3->SetBinContent(12,0.2660576);
   hdirt_stack_3->SetBinContent(13,0.2541765);
   hdirt_stack_3->SetBinContent(14,0.1448609);
   hdirt_stack_3->SetBinContent(15,0.216301);
   hdirt_stack_3->SetBinContent(16,0.09509665);
   hdirt_stack_3->SetBinContent(17,0.1850559);
   hdirt_stack_3->SetBinContent(18,0.2179344);
   hdirt_stack_3->SetBinContent(19,0.2809342);
   hdirt_stack_3->SetBinContent(20,0.08967613);
   hdirt_stack_3->SetBinContent(21,0.1839582);
   hdirt_stack_3->SetBinContent(22,0.14904);
   hdirt_stack_3->SetBinContent(23,0.01643923);
   hdirt_stack_3->SetBinContent(24,0.04420907);
   hdirt_stack_3->SetBinError(1,0.009731955);
   hdirt_stack_3->SetBinError(2,0.09070813);
   hdirt_stack_3->SetBinError(3,0.07744966);
   hdirt_stack_3->SetBinError(4,0.08167171);
   hdirt_stack_3->SetBinError(5,0.1117717);
   hdirt_stack_3->SetBinError(6,0.08033215);
   hdirt_stack_3->SetBinError(7,0.08000612);
   hdirt_stack_3->SetBinError(8,0.1123704);
   hdirt_stack_3->SetBinError(9,0.1296791);
   hdirt_stack_3->SetBinError(10,0.07320793);
   hdirt_stack_3->SetBinError(11,0.1172929);
   hdirt_stack_3->SetBinError(12,0.1124481);
   hdirt_stack_3->SetBinError(13,0.1002124);
   hdirt_stack_3->SetBinError(14,0.07938461);
   hdirt_stack_3->SetBinError(15,0.1008349);
   hdirt_stack_3->SetBinError(16,0.04886805);
   hdirt_stack_3->SetBinError(17,0.08879938);
   hdirt_stack_3->SetBinError(18,0.09030824);
   hdirt_stack_3->SetBinError(19,0.2080095);
   hdirt_stack_3->SetBinError(20,0.06253372);
   hdirt_stack_3->SetBinError(21,0.08031666);
   hdirt_stack_3->SetBinError(22,0.08199047);
   hdirt_stack_3->SetBinError(23,0.01162429);
   hdirt_stack_3->SetBinError(24,0.04420907);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,0.3530483);
   houtFV_stack_4->SetBinContent(2,1.209121);
   houtFV_stack_4->SetBinContent(3,2.493001);
   houtFV_stack_4->SetBinContent(4,3.020126);
   houtFV_stack_4->SetBinContent(5,2.886258);
   houtFV_stack_4->SetBinContent(6,3.733103);
   houtFV_stack_4->SetBinContent(7,2.795216);
   houtFV_stack_4->SetBinContent(8,2.246254);
   houtFV_stack_4->SetBinContent(9,2.540339);
   houtFV_stack_4->SetBinContent(10,1.764);
   houtFV_stack_4->SetBinContent(11,1.454176);
   houtFV_stack_4->SetBinContent(12,2.354749);
   houtFV_stack_4->SetBinContent(13,1.342744);
   houtFV_stack_4->SetBinContent(14,1.759721);
   houtFV_stack_4->SetBinContent(15,1.857332);
   houtFV_stack_4->SetBinContent(16,1.622793);
   houtFV_stack_4->SetBinContent(17,1.566877);
   houtFV_stack_4->SetBinContent(18,1.432173);
   houtFV_stack_4->SetBinContent(19,1.690954);
   houtFV_stack_4->SetBinContent(20,1.452494);
   houtFV_stack_4->SetBinContent(21,2.047073);
   houtFV_stack_4->SetBinContent(22,0.8720612);
   houtFV_stack_4->SetBinContent(23,0.7007119);
   houtFV_stack_4->SetBinContent(24,0.2241195);
   houtFV_stack_4->SetBinError(1,0.1294117);
   houtFV_stack_4->SetBinError(2,0.2560816);
   houtFV_stack_4->SetBinError(3,0.3704032);
   houtFV_stack_4->SetBinError(4,0.4030138);
   houtFV_stack_4->SetBinError(5,0.3984287);
   houtFV_stack_4->SetBinError(6,0.4604549);
   houtFV_stack_4->SetBinError(7,0.3920333);
   houtFV_stack_4->SetBinError(8,0.339603);
   houtFV_stack_4->SetBinError(9,0.3754529);
   houtFV_stack_4->SetBinError(10,0.3061062);
   houtFV_stack_4->SetBinError(11,0.265431);
   houtFV_stack_4->SetBinError(12,0.3645755);
   houtFV_stack_4->SetBinError(13,0.2727496);
   houtFV_stack_4->SetBinError(14,0.3173174);
   houtFV_stack_4->SetBinError(15,0.3185627);
   houtFV_stack_4->SetBinError(16,0.2952781);
   houtFV_stack_4->SetBinError(17,0.3001997);
   houtFV_stack_4->SetBinError(18,0.2760152);
   houtFV_stack_4->SetBinError(19,0.3077776);
   houtFV_stack_4->SetBinError(20,0.25948);
   houtFV_stack_4->SetBinError(21,0.3468854);
   houtFV_stack_4->SetBinError(22,0.2266371);
   houtFV_stack_4->SetBinError(23,0.194902);
   houtFV_stack_4->SetBinError(24,0.1095603);
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hNCpi0inFV_stack_5->SetBinContent(1,2.040222);
   hNCpi0inFV_stack_5->SetBinContent(2,6.089476);
   hNCpi0inFV_stack_5->SetBinContent(3,9.593502);
   hNCpi0inFV_stack_5->SetBinContent(4,10.33858);
   hNCpi0inFV_stack_5->SetBinContent(5,12.91346);
   hNCpi0inFV_stack_5->SetBinContent(6,11.52312);
   hNCpi0inFV_stack_5->SetBinContent(7,12.65467);
   hNCpi0inFV_stack_5->SetBinContent(8,11.00435);
   hNCpi0inFV_stack_5->SetBinContent(9,11.35378);
   hNCpi0inFV_stack_5->SetBinContent(10,7.884226);
   hNCpi0inFV_stack_5->SetBinContent(11,7.321236);
   hNCpi0inFV_stack_5->SetBinContent(12,6.769201);
   hNCpi0inFV_stack_5->SetBinContent(13,6.508626);
   hNCpi0inFV_stack_5->SetBinContent(14,4.648142);
   hNCpi0inFV_stack_5->SetBinContent(15,4.29652);
   hNCpi0inFV_stack_5->SetBinContent(16,5.634058);
   hNCpi0inFV_stack_5->SetBinContent(17,3.735324);
   hNCpi0inFV_stack_5->SetBinContent(18,5.211319);
   hNCpi0inFV_stack_5->SetBinContent(19,4.332976);
   hNCpi0inFV_stack_5->SetBinContent(20,3.727958);
   hNCpi0inFV_stack_5->SetBinContent(21,2.926303);
   hNCpi0inFV_stack_5->SetBinContent(22,2.663933);
   hNCpi0inFV_stack_5->SetBinContent(23,1.605292);
   hNCpi0inFV_stack_5->SetBinContent(24,0.7215645);
   hNCpi0inFV_stack_5->SetBinError(1,0.3260487);
   hNCpi0inFV_stack_5->SetBinError(2,0.5697199);
   hNCpi0inFV_stack_5->SetBinError(3,0.7243879);
   hNCpi0inFV_stack_5->SetBinError(4,0.7392106);
   hNCpi0inFV_stack_5->SetBinError(5,0.8428246);
   hNCpi0inFV_stack_5->SetBinError(6,0.7928462);
   hNCpi0inFV_stack_5->SetBinError(7,0.8317516);
   hNCpi0inFV_stack_5->SetBinError(8,0.7730702);
   hNCpi0inFV_stack_5->SetBinError(9,0.7953259);
   hNCpi0inFV_stack_5->SetBinError(10,0.6462064);
   hNCpi0inFV_stack_5->SetBinError(11,0.626189);
   hNCpi0inFV_stack_5->SetBinError(12,0.6081373);
   hNCpi0inFV_stack_5->SetBinError(13,0.5952429);
   hNCpi0inFV_stack_5->SetBinError(14,0.4921203);
   hNCpi0inFV_stack_5->SetBinError(15,0.4780724);
   hNCpi0inFV_stack_5->SetBinError(16,0.5591752);
   hNCpi0inFV_stack_5->SetBinError(17,0.4472779);
   hNCpi0inFV_stack_5->SetBinError(18,0.5375827);
   hNCpi0inFV_stack_5->SetBinError(19,0.481733);
   hNCpi0inFV_stack_5->SetBinError(20,0.4368268);
   hNCpi0inFV_stack_5->SetBinError(21,0.3952308);
   hNCpi0inFV_stack_5->SetBinError(22,0.3790993);
   hNCpi0inFV_stack_5->SetBinError(23,0.2958675);
   hNCpi0inFV_stack_5->SetBinError(24,0.1992144);
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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hCCpi0inFV_stack_6->SetBinContent(1,0.5484458);
   hCCpi0inFV_stack_6->SetBinContent(2,2.773026);
   hCCpi0inFV_stack_6->SetBinContent(3,4.240492);
   hCCpi0inFV_stack_6->SetBinContent(4,4.28377);
   hCCpi0inFV_stack_6->SetBinContent(5,4.050634);
   hCCpi0inFV_stack_6->SetBinContent(6,4.073628);
   hCCpi0inFV_stack_6->SetBinContent(7,3.527559);
   hCCpi0inFV_stack_6->SetBinContent(8,3.186001);
   hCCpi0inFV_stack_6->SetBinContent(9,3.372747);
   hCCpi0inFV_stack_6->SetBinContent(10,2.951803);
   hCCpi0inFV_stack_6->SetBinContent(11,2.9102);
   hCCpi0inFV_stack_6->SetBinContent(12,1.807501);
   hCCpi0inFV_stack_6->SetBinContent(13,1.337351);
   hCCpi0inFV_stack_6->SetBinContent(14,1.755638);
   hCCpi0inFV_stack_6->SetBinContent(15,2.232203);
   hCCpi0inFV_stack_6->SetBinContent(16,1.756546);
   hCCpi0inFV_stack_6->SetBinContent(17,1.346511);
   hCCpi0inFV_stack_6->SetBinContent(18,1.328269);
   hCCpi0inFV_stack_6->SetBinContent(19,1.453018);
   hCCpi0inFV_stack_6->SetBinContent(20,0.9225711);
   hCCpi0inFV_stack_6->SetBinContent(21,1.208054);
   hCCpi0inFV_stack_6->SetBinContent(22,1.420399);
   hCCpi0inFV_stack_6->SetBinContent(23,0.8309475);
   hCCpi0inFV_stack_6->SetBinContent(24,0.2241195);
   hCCpi0inFV_stack_6->SetBinError(1,0.1683246);
   hCCpi0inFV_stack_6->SetBinError(2,0.3854848);
   hCCpi0inFV_stack_6->SetBinError(3,0.4899647);
   hCCpi0inFV_stack_6->SetBinError(4,0.4779024);
   hCCpi0inFV_stack_6->SetBinError(5,0.4684087);
   hCCpi0inFV_stack_6->SetBinError(6,0.4719489);
   hCCpi0inFV_stack_6->SetBinError(7,0.4324862);
   hCCpi0inFV_stack_6->SetBinError(8,0.4143949);
   hCCpi0inFV_stack_6->SetBinError(9,0.4280655);
   hCCpi0inFV_stack_6->SetBinError(10,0.3956419);
   hCCpi0inFV_stack_6->SetBinError(11,0.3962376);
   hCCpi0inFV_stack_6->SetBinError(12,0.3052285);
   hCCpi0inFV_stack_6->SetBinError(13,0.2505612);
   hCCpi0inFV_stack_6->SetBinError(14,0.3140742);
   hCCpi0inFV_stack_6->SetBinError(15,0.3536053);
   hCCpi0inFV_stack_6->SetBinError(16,0.311641);
   hCCpi0inFV_stack_6->SetBinError(17,0.2626689);
   hCCpi0inFV_stack_6->SetBinError(18,0.2699987);
   hCCpi0inFV_stack_6->SetBinError(19,0.2782364);
   hCCpi0inFV_stack_6->SetBinError(20,0.2267846);
   hCCpi0inFV_stack_6->SetBinError(21,0.2533396);
   hCCpi0inFV_stack_6->SetBinError(22,0.2812933);
   hCCpi0inFV_stack_6->SetBinError(23,0.2202684);
   hCCpi0inFV_stack_6->SetBinError(24,0.1095603);
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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hNCinFV_stack_7->SetBinContent(1,0.06375098);
   hNCinFV_stack_7->SetBinContent(2,0.5466511);
   hNCinFV_stack_7->SetBinContent(3,0.7470649);
   hNCinFV_stack_7->SetBinContent(4,0.7725652);
   hNCinFV_stack_7->SetBinContent(5,0.845477);
   hNCinFV_stack_7->SetBinContent(6,0.9110227);
   hNCinFV_stack_7->SetBinContent(7,0.8837277);
   hNCinFV_stack_7->SetBinContent(8,0.6723584);
   hNCinFV_stack_7->SetBinContent(9,0.8964778);
   hNCinFV_stack_7->SetBinContent(10,0.6833139);
   hNCinFV_stack_7->SetBinContent(11,0.5010344);
   hNCinFV_stack_7->SetBinContent(12,0.5229454);
   hNCinFV_stack_7->SetBinContent(13,0.2860757);
   hNCinFV_stack_7->SetBinContent(14,0.5484458);
   hNCinFV_stack_7->SetBinContent(15,0.3990328);
   hNCinFV_stack_7->SetBinContent(16,0.4464442);
   hNCinFV_stack_7->SetBinContent(17,0.4482389);
   hNCinFV_stack_7->SetBinContent(18,0.3735324);
   hNCinFV_stack_7->SetBinContent(19,0.2368697);
   hNCinFV_stack_7->SetBinContent(20,0.3243263);
   hNCinFV_stack_7->SetBinContent(21,0.1384575);
   hNCinFV_stack_7->SetBinContent(22,0.3480321);
   hNCinFV_stack_7->SetBinContent(23,0.1621632);
   hNCinFV_stack_7->SetBinContent(24,0.1986191);
   hNCinFV_stack_7->SetBinError(1,0.0285103);
   hNCinFV_stack_7->SetBinError(2,0.1770845);
   hNCinFV_stack_7->SetBinError(3,0.2000287);
   hNCinFV_stack_7->SetBinError(4,0.2008398);
   hNCinFV_stack_7->SetBinError(5,0.2176316);
   hNCinFV_stack_7->SetBinError(6,0.2124867);
   hNCinFV_stack_7->SetBinError(7,0.2187492);
   hNCinFV_stack_7->SetBinError(8,0.1897639);
   hNCinFV_stack_7->SetBinError(9,0.2191205);
   hNCinFV_stack_7->SetBinError(10,0.1979865);
   hNCinFV_stack_7->SetBinError(11,0.1470762);
   hNCinFV_stack_7->SetBinError(12,0.167356);
   hNCinFV_stack_7->SetBinError(13,0.1258651);
   hNCinFV_stack_7->SetBinError(14,0.1683246);
   hNCinFV_stack_7->SetBinError(15,0.1425864);
   hNCinFV_stack_7->SetBinError(16,0.1644161);
   hNCinFV_stack_7->SetBinError(17,0.1549416);
   hNCinFV_stack_7->SetBinError(18,0.1414417);
   hNCinFV_stack_7->SetBinError(19,0.1102997);
   hNCinFV_stack_7->SetBinError(20,0.1277878);
   hNCinFV_stack_7->SetBinError(21,0.0693829);
   hNCinFV_stack_7->SetBinError(22,0.1402876);
   hNCinFV_stack_7->SetBinError(23,0.09035965);
   hNCinFV_stack_7->SetBinError(24,0.1080662);
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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hnumuCCinFV_stack_8->SetBinContent(1,0.1531102);
   hnumuCCinFV_stack_8->SetBinContent(2,0.6673883);
   hnumuCCinFV_stack_8->SetBinContent(3,0.7701464);
   hnumuCCinFV_stack_8->SetBinContent(4,1.082504);
   hnumuCCinFV_stack_8->SetBinContent(5,0.7884588);
   hnumuCCinFV_stack_8->SetBinContent(6,1.387608);
   hnumuCCinFV_stack_8->SetBinContent(7,1.737725);
   hnumuCCinFV_stack_8->SetBinContent(8,1.312689);
   hnumuCCinFV_stack_8->SetBinContent(9,1.255931);
   hnumuCCinFV_stack_8->SetBinContent(10,1.453058);
   hnumuCCinFV_stack_8->SetBinContent(11,0.7247965);
   hnumuCCinFV_stack_8->SetBinContent(12,0.8415325);
   hnumuCCinFV_stack_8->SetBinContent(13,0.3130437);
   hnumuCCinFV_stack_8->SetBinContent(14,0.6516647);
   hnumuCCinFV_stack_8->SetBinContent(15,1.048934);
   hnumuCCinFV_stack_8->SetBinContent(16,0.3987437);
   hnumuCCinFV_stack_8->SetBinContent(17,0.8450584);
   hnumuCCinFV_stack_8->SetBinContent(18,0.2417713);
   hnumuCCinFV_stack_8->SetBinContent(19,0.3769209);
   hnumuCCinFV_stack_8->SetBinContent(20,0.4092321);
   hnumuCCinFV_stack_8->SetBinContent(21,0.454857);
   hnumuCCinFV_stack_8->SetBinContent(22,0.2822877);
   hnumuCCinFV_stack_8->SetBinContent(23,0.09179889);
   hnumuCCinFV_stack_8->SetBinContent(24,0.1966576);
   hnumuCCinFV_stack_8->SetBinError(1,0.09005692);
   hnumuCCinFV_stack_8->SetBinError(2,0.1999476);
   hnumuCCinFV_stack_8->SetBinError(3,0.1969731);
   hnumuCCinFV_stack_8->SetBinError(4,0.2521189);
   hnumuCCinFV_stack_8->SetBinError(5,0.198764);
   hnumuCCinFV_stack_8->SetBinError(6,0.29015);
   hnumuCCinFV_stack_8->SetBinError(7,0.449241);
   hnumuCCinFV_stack_8->SetBinError(8,0.2914591);
   hnumuCCinFV_stack_8->SetBinError(9,0.3110955);
   hnumuCCinFV_stack_8->SetBinError(10,0.5381961);
   hnumuCCinFV_stack_8->SetBinError(11,0.2119307);
   hnumuCCinFV_stack_8->SetBinError(12,0.2729495);
   hnumuCCinFV_stack_8->SetBinError(13,0.1154759);
   hnumuCCinFV_stack_8->SetBinError(14,0.1900508);
   hnumuCCinFV_stack_8->SetBinError(15,0.449479);
   hnumuCCinFV_stack_8->SetBinError(16,0.152336);
   hnumuCCinFV_stack_8->SetBinError(17,0.2263432);
   hnumuCCinFV_stack_8->SetBinError(18,0.1108562);
   hnumuCCinFV_stack_8->SetBinError(19,0.1486722);
   hnumuCCinFV_stack_8->SetBinError(20,0.165647);
   hnumuCCinFV_stack_8->SetBinError(21,0.1555625);
   hnumuCCinFV_stack_8->SetBinError(22,0.1383806);
   hnumuCCinFV_stack_8->SetBinError(23,0.06545327);
   hnumuCCinFV_stack_8->SetBinError(24,0.1138816);
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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hnueCCinFV_stack_9->SetBinContent(1,0.01842236);
   hnueCCinFV_stack_9->SetBinContent(2,0.1049698);
   hnueCCinFV_stack_9->SetBinContent(3,0.5710686);
   hnueCCinFV_stack_9->SetBinContent(4,0.2702763);
   hnueCCinFV_stack_9->SetBinContent(5,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(6,0.05530259);
   hnueCCinFV_stack_9->SetBinContent(7,0.1897391);
   hnueCCinFV_stack_9->SetBinContent(8,0.269967);
   hnueCCinFV_stack_9->SetBinContent(9,0.2012009);
   hnueCCinFV_stack_9->SetBinContent(10,0.1096915);
   hnueCCinFV_stack_9->SetBinContent(11,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(12,0.01528837);
   hnueCCinFV_stack_9->SetBinContent(13,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(15,0.01880747);
   hnueCCinFV_stack_9->SetBinContent(16,0.09554926);
   hnueCCinFV_stack_9->SetBinContent(18,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(19,0.1244851);
   hnueCCinFV_stack_9->SetBinContent(20,0.07786438);
   hnueCCinFV_stack_9->SetBinContent(22,0.01951835);
   hnueCCinFV_stack_9->SetBinContent(23,0.06195629);
   hnueCCinFV_stack_9->SetBinError(1,0.01842236);
   hnueCCinFV_stack_9->SetBinError(2,0.06929791);
   hnueCCinFV_stack_9->SetBinError(3,0.4754393);
   hnueCCinFV_stack_9->SetBinError(4,0.1261279);
   hnueCCinFV_stack_9->SetBinError(5,0.08761943);
   hnueCCinFV_stack_9->SetBinError(6,0.03347174);
   hnueCCinFV_stack_9->SetBinError(7,0.1038466);
   hnueCCinFV_stack_9->SetBinError(8,0.1285731);
   hnueCCinFV_stack_9->SetBinError(9,0.1084012);
   hnueCCinFV_stack_9->SetBinError(10,0.07821272);
   hnueCCinFV_stack_9->SetBinError(11,0.0127502);
   hnueCCinFV_stack_9->SetBinError(12,0.01528837);
   hnueCCinFV_stack_9->SetBinError(13,0.06195629);
   hnueCCinFV_stack_9->SetBinError(15,0.01880747);
   hnueCCinFV_stack_9->SetBinError(16,0.08377501);
   hnueCCinFV_stack_9->SetBinError(18,0.0127502);
   hnueCCinFV_stack_9->SetBinError(19,0.1058189);
   hnueCCinFV_stack_9->SetBinError(20,0.063966);
   hnueCCinFV_stack_9->SetBinError(22,0.01951836);
   hnueCCinFV_stack_9->SetBinError(23,0.06195629);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);
   hmcerror__2->SetBinContent(1,3.44713);
   hmcerror__2->SetBinContent(2,13.17866);
   hmcerror__2->SetBinContent(3,19.83369);
   hmcerror__2->SetBinContent(4,22.21776);
   hmcerror__2->SetBinContent(5,25.3222);
   hmcerror__2->SetBinContent(6,23.58171);
   hmcerror__2->SetBinContent(7,24.23466);
   hmcerror__2->SetBinContent(8,21.14893);
   hmcerror__2->SetBinContent(9,22.29891);
   hmcerror__2->SetBinContent(10,17.91974);
   hmcerror__2->SetBinContent(11,14.53417);
   hmcerror__2->SetBinContent(12,15.2005);
   hmcerror__2->SetBinContent(13,12.67829);
   hmcerror__2->SetBinContent(14,11.03623);
   hmcerror__2->SetBinContent(15,11.88618);
   hmcerror__2->SetBinContent(16,11.46343);
   hmcerror__2->SetBinContent(17,9.331964);
   hmcerror__2->SetBinContent(18,9.381886);
   hmcerror__2->SetBinContent(19,8.947895);
   hmcerror__2->SetBinContent(20,7.938999);
   hmcerror__2->SetBinContent(21,8.015297);
   hmcerror__2->SetBinContent(22,6.067327);
   hmcerror__2->SetBinContent(23,4.014271);
   hmcerror__2->SetBinContent(24,1.832878);
   hmcerror__2->SetBinError(1,1.561895);
   hmcerror__2->SetBinError(2,4.248645);
   hmcerror__2->SetBinError(3,5.884727);
   hmcerror__2->SetBinError(4,5.426111);
   hmcerror__2->SetBinError(5,7.241669);
   hmcerror__2->SetBinError(6,6.826922);
   hmcerror__2->SetBinError(7,6.890191);
   hmcerror__2->SetBinError(8,6.443274);
   hmcerror__2->SetBinError(9,6.133919);
   hmcerror__2->SetBinError(10,4.804413);
   hmcerror__2->SetBinError(11,5.079583);
   hmcerror__2->SetBinError(12,4.325294);
   hmcerror__2->SetBinError(13,3.642616);
   hmcerror__2->SetBinError(14,4.109178);
   hmcerror__2->SetBinError(15,4.500884);
   hmcerror__2->SetBinError(16,5.131051);
   hmcerror__2->SetBinError(17,3.247373);
   hmcerror__2->SetBinError(18,3.511291);
   hmcerror__2->SetBinError(19,3.633819);
   hmcerror__2->SetBinError(20,3.088375);
   hmcerror__2->SetBinError(21,2.944382);
   hmcerror__2->SetBinError(22,2.632753);
   hmcerror__2->SetBinError(23,2.067248);
   hmcerror__2->SetBinError(24,2.246999);
   hmcerror__2->SetBinError(25,0.125509);
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
   
   Double_t _fx3001[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3001[24] = {
   4,
   10,
   26,
   19,
   21,
   23,
   22,
   13,
   16,
   9,
   18,
   14,
   19,
   11,
   14,
   8,
   17,
   7,
   13,
   7,
   9,
   3,
   2,
   1};
   Double_t _felx3001[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3001[24] = {
   2.29683,
   3.34883,
   5.2453,
   4.5151,
   4.7354,
   4.9457,
   4.8417,
   3.77763,
   4.1628,
   3.19354,
   4.4008,
   3.9102,
   4.5151,
   3.4975,
   3.9102,
   3.0307,
   4.2835,
   2.85954,
   3.77763,
   2.85954,
   3.19354,
   2.143368,
   2,
   1};
   Double_t _fehx3001[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3001[24] = {
   1.98186,
   3.1179,
   5.0358,
   4.3011,
   4.5229,
   4.7346,
   4.6299,
   3.5552,
   3.9454,
   2.9582,
   4.1858,
   3.6898,
   4.3011,
   3.27,
   3.6898,
   2.7896,
   4.0673,
   2.61053,
   3.5552,
   2.61053,
   2.9582,
   1.72422,
   1.51917,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,198);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(34.13938);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.94#pm0.05(data err)#pm0.19(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.42/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 306.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 7.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 28.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 43.4","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  155.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 53.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 17.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-27.72,-0.5333333,203.28,2.133333);
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
   
   Double_t _fx3002[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3002[24] = {
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
   Double_t _felx3002[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3002[24] = {
   0.4531,
   0.3223884,
   0.2967036,
   0.244224,
   0.2859811,
   0.2895007,
   0.2843114,
   0.3046619,
   0.2750771,
   0.2681072,
   0.3494924,
   0.2845494,
   0.2873113,
   0.3723354,
   0.3786654,
   0.4476017,
   0.3479839,
   0.3742629,
   0.4061088,
   0.3890132,
   0.3673453,
   0.4339231,
   0.5149747,
   1.22594};
   Double_t _fehx3002[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3002[24] = {
   0.4531,
   0.3223884,
   0.2967036,
   0.244224,
   0.2859811,
   0.2895007,
   0.2843114,
   0.3046619,
   0.2750771,
   0.2681072,
   0.3494924,
   0.2845494,
   0.2873113,
   0.3723354,
   0.3786654,
   0.4476017,
   0.3479839,
   0.3742629,
   0.4061088,
   0.3890132,
   0.3673453,
   0.4339231,
   0.5149747,
   1.22594};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,198);
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
   
   Double_t _fx3003[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3003[24] = {
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
   Double_t _felx3003[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3003[24] = {
   0.2444394,
   0.1858514,
   0.1860364,
   0.1852643,
   0.201191,
   0.1974167,
   0.1992129,
   0.1967714,
   0.2089909,
   0.1979928,
   0.2135303,
   0.1971072,
   0.1850409,
   0.2091719,
   0.2059368,
   0.1947047,
   0.2223781,
   0.2201753,
   0.2370357,
   0.2064168,
   0.1962704,
   0.2181138,
   0.2424828,
   0.3201073};
   Double_t _fehx3003[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3003[24] = {
   0.2444394,
   0.1858514,
   0.1860364,
   0.1852643,
   0.201191,
   0.1974167,
   0.1992129,
   0.1967714,
   0.2089909,
   0.1979928,
   0.2135303,
   0.1971072,
   0.1850409,
   0.2091719,
   0.2059368,
   0.1947047,
   0.2223781,
   0.2201753,
   0.2370357,
   0.2064168,
   0.1962704,
   0.2181138,
   0.2424828,
   0.3201073};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,198);
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
   
   Double_t _fx3004[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3004[24] = {
   1.160386,
   0.7588027,
   1.310901,
   0.8551716,
   0.829312,
   0.9753323,
   0.9077908,
   0.6146882,
   0.7175239,
   0.5022393,
   1.23846,
   0.9210222,
   1.498625,
   0.9967173,
   1.177839,
   0.6978714,
   1.821696,
   0.7461187,
   1.452856,
   0.8817232,
   1.122853,
   0.4944517,
   0.4982225,
   0.5455901};
   Double_t _felx3004[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3004[24] = {
   0.6663021,
   0.2541101,
   0.2644641,
   0.2032203,
   0.1870059,
   0.2097261,
   0.1997841,
   0.1786204,
   0.1866818,
   0.1782135,
   0.3027898,
   0.2572415,
   0.3561285,
   0.3169108,
   0.3289703,
   0.2643798,
   0.4590137,
   0.3047937,
   0.4221809,
   0.360189,
   0.3984307,
   0.353264,
   0.4982225,
   0.5455901};
   Double_t _fehx3004[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3004[24] = {
   0.5749304,
   0.2365871,
   0.2539013,
   0.1935883,
   0.1786141,
   0.2007743,
   0.1910446,
   0.168103,
   0.1769324,
   0.1650805,
   0.2879971,
   0.242742,
   0.3392493,
   0.2962969,
   0.3104278,
   0.2433478,
   0.4358461,
   0.2782522,
   0.3973225,
   0.3288236,
   0.3690693,
   0.2841812,
   0.3784423,
   0.7418443};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,198);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2.483296);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_10_kine_pio_costheta_low_all",24,0,180);

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
   TLine *line = new TLine(0,1,180,1);
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
