#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Tue Apr 19 22:39:48 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
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
   pad1->Range(-27.69231,-0.36,203.0769,30.33474);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hmc__1->SetBinContent(1,2.615278);
   hmc__1->SetBinContent(2,7.754367);
   hmc__1->SetBinContent(3,12.03399);
   hmc__1->SetBinContent(4,13.88573);
   hmc__1->SetBinContent(5,14.99635);
   hmc__1->SetBinContent(6,13.83455);
   hmc__1->SetBinContent(7,15.62043);
   hmc__1->SetBinContent(8,13.79253);
   hmc__1->SetBinContent(9,14.00171);
   hmc__1->SetBinContent(10,12.58216);
   hmc__1->SetBinContent(11,11.11426);
   hmc__1->SetBinContent(12,11.52598);
   hmc__1->SetBinContent(13,9.079617);
   hmc__1->SetBinContent(14,7.260781);
   hmc__1->SetBinContent(15,7.261545);
   hmc__1->SetBinContent(16,7.679151);
   hmc__1->SetBinContent(17,6.558329);
   hmc__1->SetBinContent(18,4.952258);
   hmc__1->SetBinContent(19,5.576861);
   hmc__1->SetBinContent(20,5.245004);
   hmc__1->SetBinContent(21,3.593624);
   hmc__1->SetBinContent(22,3.479427);
   hmc__1->SetBinContent(23,2.590075);
   hmc__1->SetBinContent(24,0.7220936);
   hmc__1->SetBinError(1,1.312842);
   hmc__1->SetBinError(2,2.589178);
   hmc__1->SetBinError(3,3.53887);
   hmc__1->SetBinError(4,4.193868);
   hmc__1->SetBinError(5,3.898726);
   hmc__1->SetBinError(6,4.808053);
   hmc__1->SetBinError(7,5.405492);
   hmc__1->SetBinError(8,4.848703);
   hmc__1->SetBinError(9,3.928681);
   hmc__1->SetBinError(10,3.845107);
   hmc__1->SetBinError(11,3.097112);
   hmc__1->SetBinError(12,3.30453);
   hmc__1->SetBinError(13,3.360855);
   hmc__1->SetBinError(14,2.421713);
   hmc__1->SetBinError(15,2.238653);
   hmc__1->SetBinError(16,2.478721);
   hmc__1->SetBinError(17,2.234533);
   hmc__1->SetBinError(18,1.913033);
   hmc__1->SetBinError(19,2.170776);
   hmc__1->SetBinError(20,2.054577);
   hmc__1->SetBinError(21,1.690158);
   hmc__1->SetBinError(22,2.380032);
   hmc__1->SetBinError(23,1.316984);
   hmc__1->SetBinError(24,0.6656172);
   hmc__1->SetBinError(25,0.0853624);
   hmc__1->SetMinimum(-0.36);
   hmc__1->SetMaximum(28.8);
   hmc__1->SetEntries(204.2995);
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
   hs1_stack_1->SetMinimum(-1.1539e-09);
   hs1_stack_1->SetMaximum(16.40145);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(2,0.09293021);
   hbadmatch_stack_1->SetBinContent(3,0.2611299);
   hbadmatch_stack_1->SetBinContent(4,0.1544514);
   hbadmatch_stack_1->SetBinContent(5,0.2085324);
   hbadmatch_stack_1->SetBinContent(6,0.226951);
   hbadmatch_stack_1->SetBinContent(7,0.2223299);
   hbadmatch_stack_1->SetBinContent(8,0.2141725);
   hbadmatch_stack_1->SetBinContent(9,0.09871541);
   hbadmatch_stack_1->SetBinContent(10,0.2708693);
   hbadmatch_stack_1->SetBinContent(11,0.242395);
   hbadmatch_stack_1->SetBinContent(12,0.625765);
   hbadmatch_stack_1->SetBinContent(13,0.1967177);
   hbadmatch_stack_1->SetBinContent(14,0.1427303);
   hbadmatch_stack_1->SetBinContent(15,0.2583455);
   hbadmatch_stack_1->SetBinContent(16,0.1610706);
   hbadmatch_stack_1->SetBinContent(17,0.1212077);
   hbadmatch_stack_1->SetBinContent(18,0.05947029);
   hbadmatch_stack_1->SetBinContent(19,0.1165088);
   hbadmatch_stack_1->SetBinContent(20,0.1437304);
   hbadmatch_stack_1->SetBinContent(21,0.1045878);
   hbadmatch_stack_1->SetBinContent(22,0.02601037);
   hbadmatch_stack_1->SetBinContent(23,0.05080017);
   hbadmatch_stack_1->SetBinError(2,0.06020841);
   hbadmatch_stack_1->SetBinError(3,0.1026789);
   hbadmatch_stack_1->SetBinError(4,0.074767);
   hbadmatch_stack_1->SetBinError(5,0.08672559);
   hbadmatch_stack_1->SetBinError(6,0.08977661);
   hbadmatch_stack_1->SetBinError(7,0.08129704);
   hbadmatch_stack_1->SetBinError(8,0.08670796);
   hbadmatch_stack_1->SetBinError(9,0.04808476);
   hbadmatch_stack_1->SetBinError(10,0.09974696);
   hbadmatch_stack_1->SetBinError(11,0.09740089);
   hbadmatch_stack_1->SetBinError(12,0.2735257);
   hbadmatch_stack_1->SetBinError(13,0.09049711);
   hbadmatch_stack_1->SetBinError(14,0.06424043);
   hbadmatch_stack_1->SetBinError(15,0.1010071);
   hbadmatch_stack_1->SetBinError(16,0.07500338);
   hbadmatch_stack_1->SetBinError(17,0.06798496);
   hbadmatch_stack_1->SetBinError(18,0.04387805);
   hbadmatch_stack_1->SetBinError(19,0.06587831);
   hbadmatch_stack_1->SetBinError(20,0.07399436);
   hbadmatch_stack_1->SetBinError(21,0.0613266);
   hbadmatch_stack_1->SetBinError(22,0.01501709);
   hbadmatch_stack_1->SetBinError(23,0.04301293);
   hbadmatch_stack_1->SetEntries(162);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hext_stack_2->SetBinContent(1,0.01668698);
   hext_stack_2->SetBinContent(2,0.1603831);
   hext_stack_2->SetBinContent(3,0.1854136);
   hext_stack_2->SetBinContent(4,0.616502);
   hext_stack_2->SetBinContent(5,1.478679);
   hext_stack_2->SetBinContent(6,0.4644624);
   hext_stack_2->SetBinContent(7,1.445305);
   hext_stack_2->SetBinContent(8,0.5562408);
   hext_stack_2->SetBinContent(9,1.064277);
   hext_stack_2->SetBinContent(10,0.7499979);
   hext_stack_2->SetBinContent(11,0.9038943);
   hext_stack_2->SetBinContent(12,1.139369);
   hext_stack_2->SetBinContent(13,0.7351677);
   hext_stack_2->SetBinContent(14,0.5145233);
   hext_stack_2->SetBinContent(15,0.2855355);
   hext_stack_2->SetBinContent(16,0.9205813);
   hext_stack_2->SetBinContent(17,0.7268242);
   hext_stack_2->SetBinContent(18,0.2957358);
   hext_stack_2->SetBinContent(19,0.05840443);
   hext_stack_2->SetBinContent(20,0.2187876);
   hext_stack_2->SetBinContent(21,0.1687266);
   hext_stack_2->SetBinContent(22,0.1520396);
   hext_stack_2->SetBinContent(23,0.02503047);
   hext_stack_2->SetBinContent(24,0.00834349);
   hext_stack_2->SetBinError(1,0.01179948);
   hext_stack_2->SetBinError(2,0.1361219);
   hext_stack_2->SetBinError(3,0.1368869);
   hext_stack_2->SetBinError(4,0.27186);
   hext_stack_2->SetBinError(5,0.4292407);
   hext_stack_2->SetBinError(6,0.2354747);
   hext_stack_2->SetBinError(7,0.4289162);
   hext_stack_2->SetBinError(8,0.2370951);
   hext_stack_2->SetBinError(9,0.3594676);
   hext_stack_2->SetBinError(10,0.2739009);
   hext_stack_2->SetBinError(11,0.3326977);
   hext_stack_2->SetBinError(12,0.360338);
   hext_stack_2->SetBinError(13,0.3034617);
   hext_stack_2->SetBinError(14,0.2363599);
   hext_stack_2->SetBinError(15,0.1399049);
   hext_stack_2->SetBinError(16,0.3329069);
   hext_stack_2->SetBinError(17,0.303347);
   hext_stack_2->SetBinError(18,0.1919623);
   hext_stack_2->SetBinError(19,0.0220748);
   hext_stack_2->SetBinError(20,0.1379002);
   hext_stack_2->SetBinError(21,0.1363774);
   hext_stack_2->SetBinError(22,0.135866);
   hext_stack_2->SetBinError(23,0.01445135);
   hext_stack_2->SetBinError(24,0.00834349);
   hext_stack_2->SetEntries(312);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hdirt_stack_3->SetBinContent(1,0.03965534);
   hdirt_stack_3->SetBinContent(2,0.030062);
   hdirt_stack_3->SetBinContent(3,0.1081655);
   hdirt_stack_3->SetBinContent(4,0.01117867);
   hdirt_stack_3->SetBinContent(5,0.05833723);
   hdirt_stack_3->SetBinContent(6,0.06019312);
   hdirt_stack_3->SetBinContent(7,0.030062);
   hdirt_stack_3->SetBinContent(8,0.03817172);
   hdirt_stack_3->SetBinContent(9,0.08415639);
   hdirt_stack_3->SetBinContent(10,0.03596426);
   hdirt_stack_3->SetBinContent(11,0.01117867);
   hdirt_stack_3->SetBinContent(12,0.005589334);
   hdirt_stack_3->SetBinContent(13,0.005589334);
   hdirt_stack_3->SetBinContent(14,0.2682675);
   hdirt_stack_3->SetBinContent(15,0.06012401);
   hdirt_stack_3->SetBinContent(16,0.06681406);
   hdirt_stack_3->SetBinContent(17,0.005589334);
   hdirt_stack_3->SetBinContent(18,0.005589334);
   hdirt_stack_3->SetBinContent(19,0.030062);
   hdirt_stack_3->SetBinContent(20,0.00565458);
   hdirt_stack_3->SetBinContent(21,0.0480008);
   hdirt_stack_3->SetBinContent(23,0.06012401);
   hdirt_stack_3->SetBinError(1,0.0345215);
   hdirt_stack_3->SetBinError(2,0.030062);
   hdirt_stack_3->SetBinError(3,0.05432226);
   hdirt_stack_3->SetBinError(4,0.007904511);
   hdirt_stack_3->SetBinError(5,0.03681021);
   hdirt_stack_3->SetBinError(6,0.03296565);
   hdirt_stack_3->SetBinError(7,0.030062);
   hdirt_stack_3->SetBinError(8,0.03817172);
   hdirt_stack_3->SetBinError(9,0.04710244);
   hdirt_stack_3->SetBinError(10,0.03596426);
   hdirt_stack_3->SetBinError(11,0.007904511);
   hdirt_stack_3->SetBinError(12,0.005589334);
   hdirt_stack_3->SetBinError(13,0.005589334);
   hdirt_stack_3->SetBinError(14,0.2070431);
   hdirt_stack_3->SetBinError(15,0.04251409);
   hdirt_stack_3->SetBinError(16,0.04303725);
   hdirt_stack_3->SetBinError(17,0.005589334);
   hdirt_stack_3->SetBinError(18,0.005589334);
   hdirt_stack_3->SetBinError(19,0.030062);
   hdirt_stack_3->SetBinError(20,0.005589714);
   hdirt_stack_3->SetBinError(21,0.03698059);
   hdirt_stack_3->SetBinError(23,0.04251409);
   hdirt_stack_3->SetEntries(54);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,0.07270387);
   houtFV_stack_4->SetBinContent(2,0.3890611);
   houtFV_stack_4->SetBinContent(3,0.5967169);
   houtFV_stack_4->SetBinContent(4,1.229132);
   houtFV_stack_4->SetBinContent(5,1.059812);
   houtFV_stack_4->SetBinContent(6,1.014924);
   houtFV_stack_4->SetBinContent(7,1.105456);
   houtFV_stack_4->SetBinContent(8,0.7299554);
   houtFV_stack_4->SetBinContent(9,0.7349741);
   houtFV_stack_4->SetBinContent(10,0.6089355);
   houtFV_stack_4->SetBinContent(11,0.5080017);
   houtFV_stack_4->SetBinContent(12,0.5241214);
   houtFV_stack_4->SetBinContent(13,0.5278147);
   houtFV_stack_4->SetBinContent(14,0.342257);
   houtFV_stack_4->SetBinContent(15,0.5512807);
   houtFV_stack_4->SetBinContent(16,0.4183011);
   houtFV_stack_4->SetBinContent(17,0.4311911);
   houtFV_stack_4->SetBinContent(18,0.3160873);
   houtFV_stack_4->SetBinContent(19,0.6244584);
   houtFV_stack_4->SetBinContent(20,0.2713411);
   houtFV_stack_4->SetBinContent(21,0.3819013);
   houtFV_stack_4->SetBinContent(22,0.4165507);
   houtFV_stack_4->SetBinContent(23,0.3952117);
   houtFV_stack_4->SetBinContent(24,0.1350603);
   houtFV_stack_4->SetBinError(1,0.0258009);
   houtFV_stack_4->SetBinError(2,0.1210395);
   houtFV_stack_4->SetBinError(3,0.138895);
   houtFV_stack_4->SetBinError(4,0.2165747);
   houtFV_stack_4->SetBinError(5,0.1970003);
   houtFV_stack_4->SetBinError(6,0.1995642);
   houtFV_stack_4->SetBinError(7,0.2080123);
   houtFV_stack_4->SetBinError(8,0.1658421);
   houtFV_stack_4->SetBinError(9,0.1743762);
   houtFV_stack_4->SetBinError(10,0.15036);
   houtFV_stack_4->SetBinError(11,0.1360188);
   houtFV_stack_4->SetBinError(12,0.1416);
   houtFV_stack_4->SetBinError(13,0.1367496);
   houtFV_stack_4->SetBinError(14,0.1150623);
   houtFV_stack_4->SetBinError(15,0.1473833);
   houtFV_stack_4->SetBinError(16,0.1317458);
   houtFV_stack_4->SetBinError(17,0.128162);
   houtFV_stack_4->SetBinError(18,0.1103551);
   houtFV_stack_4->SetBinError(19,0.1560595);
   houtFV_stack_4->SetBinError(20,0.09695825);
   houtFV_stack_4->SetBinError(21,0.1208464);
   houtFV_stack_4->SetBinError(22,0.1220815);
   houtFV_stack_4->SetBinError(23,0.1204459);
   houtFV_stack_4->SetBinError(24,0.07348465);
   houtFV_stack_4->SetEntries(494);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hNCpi0inFV_stack_5->SetBinContent(1,1.532675);
   hNCpi0inFV_stack_5->SetBinContent(2,4.746765);
   hNCpi0inFV_stack_5->SetBinContent(3,7.425495);
   hNCpi0inFV_stack_5->SetBinContent(4,7.731517);
   hNCpi0inFV_stack_5->SetBinContent(5,8.227186);
   hNCpi0inFV_stack_5->SetBinContent(6,8.155384);
   hNCpi0inFV_stack_5->SetBinContent(7,8.363467);
   hNCpi0inFV_stack_5->SetBinContent(8,8.436616);
   hNCpi0inFV_stack_5->SetBinContent(9,7.20511);
   hNCpi0inFV_stack_5->SetBinContent(10,6.701961);
   hNCpi0inFV_stack_5->SetBinContent(11,5.927404);
   hNCpi0inFV_stack_5->SetBinContent(12,5.70696);
   hNCpi0inFV_stack_5->SetBinContent(13,4.607916);
   hNCpi0inFV_stack_5->SetBinContent(14,3.925165);
   hNCpi0inFV_stack_5->SetBinContent(15,3.829794);
   hNCpi0inFV_stack_5->SetBinContent(16,3.446962);
   hNCpi0inFV_stack_5->SetBinContent(17,3.100135);
   hNCpi0inFV_stack_5->SetBinContent(18,2.880711);
   hNCpi0inFV_stack_5->SetBinContent(19,2.72709);
   hNCpi0inFV_stack_5->SetBinContent(20,2.749438);
   hNCpi0inFV_stack_5->SetBinContent(21,1.778006);
   hNCpi0inFV_stack_5->SetBinContent(22,1.572364);
   hNCpi0inFV_stack_5->SetBinContent(23,1.209313);
   hNCpi0inFV_stack_5->SetBinContent(24,0.2713411);
   hNCpi0inFV_stack_5->SetBinError(1,0.235751);
   hNCpi0inFV_stack_5->SetBinError(2,0.420099);
   hNCpi0inFV_stack_5->SetBinError(3,0.5197995);
   hNCpi0inFV_stack_5->SetBinError(4,0.5290492);
   hNCpi0inFV_stack_5->SetBinError(5,0.5500148);
   hNCpi0inFV_stack_5->SetBinError(6,0.5520082);
   hNCpi0inFV_stack_5->SetBinError(7,0.55364);
   hNCpi0inFV_stack_5->SetBinError(8,0.5592764);
   hNCpi0inFV_stack_5->SetBinError(9,0.5139627);
   hNCpi0inFV_stack_5->SetBinError(10,0.4984095);
   hNCpi0inFV_stack_5->SetBinError(11,0.4666455);
   hNCpi0inFV_stack_5->SetBinError(12,0.4553711);
   hNCpi0inFV_stack_5->SetBinError(13,0.4067083);
   hNCpi0inFV_stack_5->SetBinError(14,0.3700506);
   hNCpi0inFV_stack_5->SetBinError(15,0.3689316);
   hNCpi0inFV_stack_5->SetBinError(16,0.3526093);
   hNCpi0inFV_stack_5->SetBinError(17,0.3380925);
   hNCpi0inFV_stack_5->SetBinError(18,0.3201685);
   hNCpi0inFV_stack_5->SetBinError(19,0.3136186);
   hNCpi0inFV_stack_5->SetBinError(20,0.3205922);
   hNCpi0inFV_stack_5->SetBinError(21,0.2544679);
   hNCpi0inFV_stack_5->SetBinError(22,0.2452583);
   hNCpi0inFV_stack_5->SetBinError(23,0.2138378);
   hNCpi0inFV_stack_5->SetBinError(24,0.09695825);
   hNCpi0inFV_stack_5->SetEntries(4368);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hCCpi0inFV_stack_6->SetBinContent(1,0.6796056);
   hCCpi0inFV_stack_6->SetBinContent(2,1.255001);
   hCCpi0inFV_stack_6->SetBinContent(3,2.26132);
   hCCpi0inFV_stack_6->SetBinContent(4,2.16295);
   hCCpi0inFV_stack_6->SetBinContent(5,2.34859);
   hCCpi0inFV_stack_6->SetBinContent(6,2.425931);
   hCCpi0inFV_stack_6->SetBinContent(7,2.741318);
   hCCpi0inFV_stack_6->SetBinContent(8,1.857095);
   hCCpi0inFV_stack_6->SetBinContent(9,2.273113);
   hCCpi0inFV_stack_6->SetBinContent(10,1.895317);
   hCCpi0inFV_stack_6->SetBinContent(11,1.794126);
   hCCpi0inFV_stack_6->SetBinContent(12,1.608628);
   hCCpi0inFV_stack_6->SetBinContent(13,1.461688);
   hCCpi0inFV_stack_6->SetBinContent(14,1.041923);
   hCCpi0inFV_stack_6->SetBinContent(15,1.247616);
   hCCpi0inFV_stack_6->SetBinContent(16,1.479434);
   hCCpi0inFV_stack_6->SetBinContent(17,0.8551993);
   hCCpi0inFV_stack_6->SetBinContent(18,0.9218526);
   hCCpi0inFV_stack_6->SetBinContent(19,1.185385);
   hCCpi0inFV_stack_6->SetBinContent(20,1.198784);
   hCCpi0inFV_stack_6->SetBinContent(21,0.5588019);
   hCCpi0inFV_stack_6->SetBinContent(22,0.6517321);
   hCCpi0inFV_stack_6->SetBinContent(23,0.493015);
   hCCpi0inFV_stack_6->SetBinContent(24,0.1548933);
   hCCpi0inFV_stack_6->SetBinError(1,0.1536195);
   hCCpi0inFV_stack_6->SetBinError(2,0.2094922);
   hCCpi0inFV_stack_6->SetBinError(3,0.2819243);
   hCCpi0inFV_stack_6->SetBinError(4,0.2857111);
   hCCpi0inFV_stack_6->SetBinError(5,0.3024175);
   hCCpi0inFV_stack_6->SetBinError(6,0.2915581);
   hCCpi0inFV_stack_6->SetBinError(7,0.3193242);
   hCCpi0inFV_stack_6->SetBinError(8,0.2568144);
   hCCpi0inFV_stack_6->SetBinError(9,0.2870085);
   hCCpi0inFV_stack_6->SetBinError(10,0.2687309);
   hCCpi0inFV_stack_6->SetBinError(11,0.2574944);
   hCCpi0inFV_stack_6->SetBinError(12,0.2459315);
   hCCpi0inFV_stack_6->SetBinError(13,0.2372222);
   hCCpi0inFV_stack_6->SetBinError(14,0.2024864);
   hCCpi0inFV_stack_6->SetBinError(15,0.2184254);
   hCCpi0inFV_stack_6->SetBinError(16,0.2377532);
   hCCpi0inFV_stack_6->SetBinError(17,0.1811182);
   hCCpi0inFV_stack_6->SetBinError(18,0.186484);
   hCCpi0inFV_stack_6->SetBinError(19,0.2114277);
   hCCpi0inFV_stack_6->SetBinError(20,0.2149338);
   hCCpi0inFV_stack_6->SetBinError(21,0.1426577);
   hCCpi0inFV_stack_6->SetBinError(22,0.1548428);
   hCCpi0inFV_stack_6->SetBinError(23,0.135636);
   hCCpi0inFV_stack_6->SetBinError(24,0.08087251);
   hCCpi0inFV_stack_6->SetEntries(1314);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hNCinFV_stack_7->SetBinContent(1,0.04213005);
   hNCinFV_stack_7->SetBinContent(2,0.5080017);
   hNCinFV_stack_7->SetBinContent(3,0.6616228);
   hNCinFV_stack_7->SetBinContent(4,0.8549328);
   hNCinFV_stack_7->SetBinContent(5,0.7359921);
   hNCinFV_stack_7->SetBinContent(6,0.6529527);
   hNCinFV_stack_7->SetBinContent(7,0.5327915);
   hNCinFV_stack_7->SetBinContent(8,0.6170516);
   hNCinFV_stack_7->SetBinContent(9,0.7521119);
   hNCinFV_stack_7->SetBinContent(10,0.4311911);
   hNCinFV_stack_7->SetBinContent(11,0.2378812);
   hNCinFV_stack_7->SetBinContent(12,0.3221413);
   hNCinFV_stack_7->SetBinContent(13,0.3568218);
   hNCinFV_stack_7->SetBinContent(14,0.03468049);
   hNCinFV_stack_7->SetBinContent(15,0.3382609);
   hNCinFV_stack_7->SetBinContent(16,0.304801);
   hNCinFV_stack_7->SetBinContent(17,0.4138509);
   hNCinFV_stack_7->SetBinContent(18,0.2713411);
   hNCinFV_stack_7->SetBinContent(19,0.3469311);
   hNCinFV_stack_7->SetBinContent(20,0.1524005);
   hNCinFV_stack_7->SetBinContent(21,0.2043973);
   hNCinFV_stack_7->SetBinContent(22,0.3717209);
   hNCinFV_stack_7->SetBinContent(23,0.1945305);
   hNCinFV_stack_7->SetBinContent(24,0.03468049);
   hNCinFV_stack_7->SetBinError(1,0.04213005);
   hNCinFV_stack_7->SetBinError(2,0.1360188);
   hNCinFV_stack_7->SetBinError(3,0.150507);
   hNCinFV_stack_7->SetBinError(4,0.1771348);
   hNCinFV_stack_7->SetBinError(5,0.1659101);
   hNCinFV_stack_7->SetBinError(6,0.1502571);
   hNCinFV_stack_7->SetBinError(7,0.1418651);
   hNCinFV_stack_7->SetBinError(8,0.1538688);
   hNCinFV_stack_7->SetBinError(9,0.1705157);
   hNCinFV_stack_7->SetBinError(10,0.128162);
   hNCinFV_stack_7->SetBinError(11,0.08775609);
   hNCinFV_stack_7->SetBinError(12,0.1060708);
   hNCinFV_stack_7->SetBinError(13,0.1074788);
   hNCinFV_stack_7->SetBinError(14,0.01734025);
   hNCinFV_stack_7->SetBinError(15,0.113139);
   hNCinFV_stack_7->SetBinError(16,0.1053597);
   hNCinFV_stack_7->SetBinError(17,0.1275741);
   hNCinFV_stack_7->SetBinError(18,0.09695825);
   hNCinFV_stack_7->SetBinError(19,0.1134708);
   hNCinFV_stack_7->SetBinError(20,0.07450057);
   hNCinFV_stack_7->SetBinError(21,0.08603418);
   hNCinFV_stack_7->SetBinError(22,0.1204168);
   hNCinFV_stack_7->SetBinError(23,0.08558783);
   hNCinFV_stack_7->SetBinError(24,0.01734025);
   hNCinFV_stack_7->SetEntries(368);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hnumuCCinFV_stack_8->SetBinContent(1,0.1619265);
   hnumuCCinFV_stack_8->SetBinContent(2,0.3993988);
   hnumuCCinFV_stack_8->SetBinContent(3,0.4734053);
   hnumuCCinFV_stack_8->SetBinContent(4,1.066019);
   hnumuCCinFV_stack_8->SetBinContent(5,0.7949578);
   hnumuCCinFV_stack_8->SetBinContent(6,0.7829477);
   hnumuCCinFV_stack_8->SetBinContent(7,1.120229);
   hnumuCCinFV_stack_8->SetBinContent(8,1.343224);
   hnumuCCinFV_stack_8->SetBinContent(9,1.78925);
   hnumuCCinFV_stack_8->SetBinContent(10,1.837548);
   hnumuCCinFV_stack_8->SetBinContent(11,1.447251);
   hnumuCCinFV_stack_8->SetBinContent(12,1.593406);
   hnumuCCinFV_stack_8->SetBinContent(13,1.1371);
   hnumuCCinFV_stack_8->SetBinContent(14,0.9912342);
   hnumuCCinFV_stack_8->SetBinContent(15,0.6905881);
   hnumuCCinFV_stack_8->SetBinContent(16,0.8725161);
   hnumuCCinFV_stack_8->SetBinContent(17,0.9043317);
   hnumuCCinFV_stack_8->SetBinContent(18,0.1474106);
   hnumuCCinFV_stack_8->SetBinContent(19,0.4880222);
   hnumuCCinFV_stack_8->SetBinContent(20,0.4627374);
   hnumuCCinFV_stack_8->SetBinContent(21,0.3492024);
   hnumuCCinFV_stack_8->SetBinContent(22,0.2890096);
   hnumuCCinFV_stack_8->SetBinContent(23,0.1620493);
   hnumuCCinFV_stack_8->SetBinContent(24,0.117775);
   hnumuCCinFV_stack_8->SetBinError(1,0.07510712);
   hnumuCCinFV_stack_8->SetBinError(2,0.1214801);
   hnumuCCinFV_stack_8->SetBinError(3,0.1271753);
   hnumuCCinFV_stack_8->SetBinError(4,0.345955);
   hnumuCCinFV_stack_8->SetBinError(5,0.2269127);
   hnumuCCinFV_stack_8->SetBinError(6,0.1742308);
   hnumuCCinFV_stack_8->SetBinError(7,0.3018322);
   hnumuCCinFV_stack_8->SetBinError(8,0.2374434);
   hnumuCCinFV_stack_8->SetBinError(9,0.3216069);
   hnumuCCinFV_stack_8->SetBinError(10,0.3137568);
   hnumuCCinFV_stack_8->SetBinError(11,0.293587);
   hnumuCCinFV_stack_8->SetBinError(12,0.3634044);
   hnumuCCinFV_stack_8->SetBinError(13,0.2528103);
   hnumuCCinFV_stack_8->SetBinError(14,0.2020017);
   hnumuCCinFV_stack_8->SetBinError(15,0.1797202);
   hnumuCCinFV_stack_8->SetBinError(16,0.2102959);
   hnumuCCinFV_stack_8->SetBinError(17,0.3173108);
   hnumuCCinFV_stack_8->SetBinError(18,0.05773259);
   hnumuCCinFV_stack_8->SetBinError(19,0.144909);
   hnumuCCinFV_stack_8->SetBinError(20,0.1363993);
   hnumuCCinFV_stack_8->SetBinError(21,0.1224281);
   hnumuCCinFV_stack_8->SetBinError(22,0.1040106);
   hnumuCCinFV_stack_8->SetBinError(23,0.08035201);
   hnumuCCinFV_stack_8->SetBinError(24,0.06681349);
   hnumuCCinFV_stack_8->SetEntries(659);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hnueCCinFV_stack_9->SetBinContent(1,0.06989397);
   hnueCCinFV_stack_9->SetBinContent(2,0.1727644);
   hnueCCinFV_stack_9->SetBinContent(3,0.06072325);
   hnueCCinFV_stack_9->SetBinContent(4,0.0590433);
   hnueCCinFV_stack_9->SetBinContent(5,0.08426009);
   hnueCCinFV_stack_9->SetBinContent(6,0.05080017);
   hnueCCinFV_stack_9->SetBinContent(7,0.05947029);
   hnueCCinFV_stack_9->SetBinContent(10,0.05037564);
   hnueCCinFV_stack_9->SetBinContent(11,0.04213005);
   hnueCCinFV_stack_9->SetBinContent(13,0.05080017);
   hnueCCinFV_stack_9->SetBinContent(16,0.008670123);
   hnueCCinFV_stack_9->SetBinContent(18,0.05406032);
   hnueCCinFV_stack_9->SetBinContent(20,0.04213005);
   hnueCCinFV_stack_9->SetBinError(1,0.04510208);
   hnueCCinFV_stack_9->SetBinError(2,0.07587011);
   hnueCCinFV_stack_9->SetBinError(3,0.04414271);
   hnueCCinFV_stack_9->SetBinError(4,0.05111388);
   hnueCCinFV_stack_9->SetBinError(5,0.05958088);
   hnueCCinFV_stack_9->SetBinError(6,0.04301293);
   hnueCCinFV_stack_9->SetBinError(7,0.04387805);
   hnueCCinFV_stack_9->SetBinError(10,0.03523747);
   hnueCCinFV_stack_9->SetBinError(11,0.04213005);
   hnueCCinFV_stack_9->SetBinError(13,0.04301293);
   hnueCCinFV_stack_9->SetBinError(16,0.008670123);
   hnueCCinFV_stack_9->SetBinError(18,0.05405094);
   hnueCCinFV_stack_9->SetBinError(20,0.04213005);
   hnueCCinFV_stack_9->SetEntries(34);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hmcerror__2->SetBinContent(1,2.615278);
   hmcerror__2->SetBinContent(2,7.754367);
   hmcerror__2->SetBinContent(3,12.03399);
   hmcerror__2->SetBinContent(4,13.88573);
   hmcerror__2->SetBinContent(5,14.99635);
   hmcerror__2->SetBinContent(6,13.83455);
   hmcerror__2->SetBinContent(7,15.62043);
   hmcerror__2->SetBinContent(8,13.79253);
   hmcerror__2->SetBinContent(9,14.00171);
   hmcerror__2->SetBinContent(10,12.58216);
   hmcerror__2->SetBinContent(11,11.11426);
   hmcerror__2->SetBinContent(12,11.52598);
   hmcerror__2->SetBinContent(13,9.079617);
   hmcerror__2->SetBinContent(14,7.260781);
   hmcerror__2->SetBinContent(15,7.261545);
   hmcerror__2->SetBinContent(16,7.679151);
   hmcerror__2->SetBinContent(17,6.558329);
   hmcerror__2->SetBinContent(18,4.952258);
   hmcerror__2->SetBinContent(19,5.576861);
   hmcerror__2->SetBinContent(20,5.245004);
   hmcerror__2->SetBinContent(21,3.593624);
   hmcerror__2->SetBinContent(22,3.479427);
   hmcerror__2->SetBinContent(23,2.590075);
   hmcerror__2->SetBinContent(24,0.7220936);
   hmcerror__2->SetBinError(1,1.312842);
   hmcerror__2->SetBinError(2,2.589178);
   hmcerror__2->SetBinError(3,3.53887);
   hmcerror__2->SetBinError(4,4.193868);
   hmcerror__2->SetBinError(5,3.898726);
   hmcerror__2->SetBinError(6,4.808053);
   hmcerror__2->SetBinError(7,5.405492);
   hmcerror__2->SetBinError(8,4.848703);
   hmcerror__2->SetBinError(9,3.928681);
   hmcerror__2->SetBinError(10,3.845107);
   hmcerror__2->SetBinError(11,3.097112);
   hmcerror__2->SetBinError(12,3.30453);
   hmcerror__2->SetBinError(13,3.360855);
   hmcerror__2->SetBinError(14,2.421713);
   hmcerror__2->SetBinError(15,2.238653);
   hmcerror__2->SetBinError(16,2.478721);
   hmcerror__2->SetBinError(17,2.234533);
   hmcerror__2->SetBinError(18,1.913033);
   hmcerror__2->SetBinError(19,2.170776);
   hmcerror__2->SetBinError(20,2.054577);
   hmcerror__2->SetBinError(21,1.690158);
   hmcerror__2->SetBinError(22,2.380032);
   hmcerror__2->SetBinError(23,1.316984);
   hmcerror__2->SetBinError(24,0.6656172);
   hmcerror__2->SetBinError(25,0.0853624);
   hmcerror__2->SetEntries(204.2995);

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
   6,
   8,
   6,
   16,
   9,
   11,
   15,
   17,
   8,
   8,
   16,
   18,
   17,
   6,
   10,
   7,
   4,
   4,
   7,
   4,
   2,
   6,
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
   2.67925,
   3.0307,
   2.67925,
   4.1628,
   3.19354,
   3.4975,
   4.0385,
   4.2835,
   3.0307,
   3.0307,
   4.1628,
   4.4008,
   4.2835,
   2.67925,
   3.34883,
   2.85954,
   2.29683,
   2.29683,
   2.85954,
   2.29683,
   2,
   2.67925,
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
   2.41858,
   2.7896,
   2.41858,
   3.9454,
   2.9582,
   3.27,
   3.8197,
   4.0673,
   2.7896,
   2.7896,
   3.9454,
   4.1858,
   4.0673,
   2.41858,
   3.1179,
   2.61053,
   1.98186,
   1.98186,
   2.61053,
   1.98186,
   1.51917,
   2.41858,
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
   Graph_Graph3001->SetMaximum(24.40438);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.00#pm0.07(data err)#pm0.22(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 3.623e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=21.82/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 208.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 12.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 13.4","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  112.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 34.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 9.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 19.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all");
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
   0.5019895,
   0.3338994,
   0.2940728,
   0.3020273,
   0.2599784,
   0.3475396,
   0.3460527,
   0.3515457,
   0.2805858,
   0.3056,
   0.278661,
   0.2867027,
   0.3701539,
   0.3335334,
   0.3082888,
   0.3227858,
   0.3407168,
   0.3862952,
   0.3892469,
   0.3917209,
   0.4703214,
   0.68403,
   0.5084736,
   0.921788};
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
   0.5019895,
   0.3338994,
   0.2940728,
   0.3020273,
   0.2599784,
   0.3475396,
   0.3460527,
   0.3515457,
   0.2805858,
   0.3056,
   0.278661,
   0.2867027,
   0.3701539,
   0.3335334,
   0.3082888,
   0.3227858,
   0.3407168,
   0.3862952,
   0.3892469,
   0.3917209,
   0.4703214,
   0.68403,
   0.5084736,
   0.921788};
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
   Graph_Graph3002->GetXaxis()->SetTitle("Corrected Visible Energy [MeV]");
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
   0.2993507,
   0.2278397,
   0.2106854,
   0.2108524,
   0.2168761,
   0.2511306,
   0.2448505,
   0.2726995,
   0.2364187,
   0.2247252,
   0.2092022,
   0.2238423,
   0.2085653,
   0.2398814,
   0.2070448,
   0.2174548,
   0.217909,
   0.2377919,
   0.226023,
   0.2182038,
   0.2389473,
   0.2493814,
   0.2650872,
   0.3589886};
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
   0.2993507,
   0.2278397,
   0.2106854,
   0.2108524,
   0.2168761,
   0.2511306,
   0.2448505,
   0.2726995,
   0.2364187,
   0.2247252,
   0.2092022,
   0.2238423,
   0.2085653,
   0.2398814,
   0.2070448,
   0.2174548,
   0.217909,
   0.2377919,
   0.226023,
   0.2182038,
   0.2389473,
   0.2493814,
   0.2650872,
   0.3589886};
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
   2.294212,
   1.031677,
   0.4985877,
   1.152262,
   0.6001462,
   0.795111,
   0.9602809,
   1.232552,
   0.5713588,
   0.635821,
   1.439592,
   1.561689,
   1.872326,
   0.8263574,
   1.377117,
   0.9115592,
   0.6099114,
   0.8077124,
   1.255186,
   0.7626305,
   0.5565412,
   1.724422,
   0.7721785,
   1.384862};
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
   1.024461,
   0.3908378,
   0.2226402,
   0.2997899,
   0.2129545,
   0.2528092,
   0.2585396,
   0.3105667,
   0.2164521,
   0.2408728,
   0.3745458,
   0.3818157,
   0.471771,
   0.369003,
   0.4611732,
   0.3723771,
   0.3502157,
   0.4637945,
   0.5127508,
   0.4379082,
   0.5565412,
   0.7700262,
   0.7721785,
   1.384862};
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
   0.924789,
   0.3597457,
   0.200979,
   0.2841335,
   0.1972614,
   0.2363648,
   0.2445323,
   0.2948916,
   0.1992328,
   0.2217108,
   0.3549853,
   0.3631622,
   0.4479594,
   0.3331019,
   0.4293714,
   0.3399504,
   0.3021898,
   0.4001932,
   0.4681002,
   0.3778567,
   0.4227404,
   0.6951087,
   0.5865352,
   1.883011};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,198);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(3.59466);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_Np_bnb_10_kine_pio_costheta_high_all",24,0,180);

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
