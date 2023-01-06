#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 23:31:31 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-4.119231,-6.14,3.957692,678.9547);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmc__1->SetBinContent(1,305.5378);
   hmc__1->SetBinContent(2,295.0023);
   hmc__1->SetBinContent(3,296.7011);
   hmc__1->SetBinContent(4,296.848);
   hmc__1->SetBinContent(5,244.2917);
   hmc__1->SetBinContent(6,240.1718);
   hmc__1->SetBinContent(7,269.8761);
   hmc__1->SetBinContent(8,239.9565);
   hmc__1->SetBinContent(9,250.3348);
   hmc__1->SetBinContent(10,262.1221);
   hmc__1->SetBinContent(11,272.4091);
   hmc__1->SetBinContent(12,281.4625);
   hmc__1->SetBinContent(13,262.7349);
   hmc__1->SetBinContent(14,273.8398);
   hmc__1->SetBinContent(15,279.1761);
   hmc__1->SetBinContent(16,289.2805);
   hmc__1->SetBinContent(17,260.5205);
   hmc__1->SetBinContent(18,255.0897);
   hmc__1->SetBinContent(19,259.2013);
   hmc__1->SetBinContent(20,247.4286);
   hmc__1->SetBinContent(21,264.1014);
   hmc__1->SetBinContent(22,289.2559);
   hmc__1->SetBinContent(23,272.7818);
   hmc__1->SetBinContent(24,289.2486);
   hmc__1->SetBinContent(25,281.7316);
   hmc__1->SetBinError(1,86.06687);
   hmc__1->SetBinError(2,85.52334);
   hmc__1->SetBinError(3,79.49704);
   hmc__1->SetBinError(4,78.42383);
   hmc__1->SetBinError(5,64.28957);
   hmc__1->SetBinError(6,58.73359);
   hmc__1->SetBinError(7,69.05972);
   hmc__1->SetBinError(8,64.1927);
   hmc__1->SetBinError(9,70.09274);
   hmc__1->SetBinError(10,69.50681);
   hmc__1->SetBinError(11,76.19871);
   hmc__1->SetBinError(12,79.14863);
   hmc__1->SetBinError(13,70.60275);
   hmc__1->SetBinError(14,78.35304);
   hmc__1->SetBinError(15,72.26901);
   hmc__1->SetBinError(16,75.42516);
   hmc__1->SetBinError(17,68.25512);
   hmc__1->SetBinError(18,65.39506);
   hmc__1->SetBinError(19,60.39773);
   hmc__1->SetBinError(20,62.42864);
   hmc__1->SetBinError(21,65.44011);
   hmc__1->SetBinError(22,72.23409);
   hmc__1->SetBinError(23,74.79543);
   hmc__1->SetBinError(24,79.50302);
   hmc__1->SetBinError(25,73.74197);
   hmc__1->SetBinError(26,0.3895343);
   hmc__1->SetMinimum(-6.14);
   hmc__1->SetMaximum(644.7);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,-3.15,3.15);
   hs1_stack_1->SetMinimum(-8.304323e-09);
   hs1_stack_1->SetMaximum(320.8147);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,7.221069);
   hbadmatch_stack_1->SetBinContent(2,6.968415);
   hbadmatch_stack_1->SetBinContent(3,7.694395);
   hbadmatch_stack_1->SetBinContent(4,7.83413);
   hbadmatch_stack_1->SetBinContent(5,9.144506);
   hbadmatch_stack_1->SetBinContent(6,5.692757);
   hbadmatch_stack_1->SetBinContent(7,9.287796);
   hbadmatch_stack_1->SetBinContent(8,7.484537);
   hbadmatch_stack_1->SetBinContent(9,6.913191);
   hbadmatch_stack_1->SetBinContent(10,4.42767);
   hbadmatch_stack_1->SetBinContent(11,6.500793);
   hbadmatch_stack_1->SetBinContent(12,6.492594);
   hbadmatch_stack_1->SetBinContent(13,4.601124);
   hbadmatch_stack_1->SetBinContent(14,6.335075);
   hbadmatch_stack_1->SetBinContent(15,7.420407);
   hbadmatch_stack_1->SetBinContent(16,8.953127);
   hbadmatch_stack_1->SetBinContent(17,6.48355);
   hbadmatch_stack_1->SetBinContent(18,10.95104);
   hbadmatch_stack_1->SetBinContent(19,6.49273);
   hbadmatch_stack_1->SetBinContent(20,5.93292);
   hbadmatch_stack_1->SetBinContent(21,8.417383);
   hbadmatch_stack_1->SetBinContent(22,6.136114);
   hbadmatch_stack_1->SetBinContent(23,6.490064);
   hbadmatch_stack_1->SetBinContent(24,6.359463);
   hbadmatch_stack_1->SetBinContent(25,3.225241);
   hbadmatch_stack_1->SetBinError(1,1.460726);
   hbadmatch_stack_1->SetBinError(2,1.333385);
   hbadmatch_stack_1->SetBinError(3,1.489099);
   hbadmatch_stack_1->SetBinError(4,1.418263);
   hbadmatch_stack_1->SetBinError(5,1.554609);
   hbadmatch_stack_1->SetBinError(6,1.256589);
   hbadmatch_stack_1->SetBinError(7,1.847736);
   hbadmatch_stack_1->SetBinError(8,1.703935);
   hbadmatch_stack_1->SetBinError(9,1.456051);
   hbadmatch_stack_1->SetBinError(10,1.202955);
   hbadmatch_stack_1->SetBinError(11,1.293706);
   hbadmatch_stack_1->SetBinError(12,1.289589);
   hbadmatch_stack_1->SetBinError(13,1.060738);
   hbadmatch_stack_1->SetBinError(14,1.986389);
   hbadmatch_stack_1->SetBinError(15,2.093352);
   hbadmatch_stack_1->SetBinError(16,1.804998);
   hbadmatch_stack_1->SetBinError(17,1.321303);
   hbadmatch_stack_1->SetBinError(18,2.524676);
   hbadmatch_stack_1->SetBinError(19,1.415329);
   hbadmatch_stack_1->SetBinError(20,1.254416);
   hbadmatch_stack_1->SetBinError(21,1.613879);
   hbadmatch_stack_1->SetBinError(22,1.33595);
   hbadmatch_stack_1->SetBinError(23,1.404931);
   hbadmatch_stack_1->SetBinError(24,1.424847);
   hbadmatch_stack_1->SetBinError(25,0.9897524);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,28.00444);
   hext_stack_2->SetBinContent(2,17.49919);
   hext_stack_2->SetBinContent(3,24.7473);
   hext_stack_2->SetBinContent(4,36.98546);
   hext_stack_2->SetBinContent(5,25.36579);
   hext_stack_2->SetBinContent(6,43.44191);
   hext_stack_2->SetBinContent(7,50.87597);
   hext_stack_2->SetBinContent(8,30.87778);
   hext_stack_2->SetBinContent(9,22.65087);
   hext_stack_2->SetBinContent(10,30.52183);
   hext_stack_2->SetBinContent(11,23.00563);
   hext_stack_2->SetBinContent(12,15.16498);
   hext_stack_2->SetBinContent(13,14.41521);
   hext_stack_2->SetBinContent(14,14.37767);
   hext_stack_2->SetBinContent(15,20.51697);
   hext_stack_2->SetBinContent(16,28.65606);
   hext_stack_2->SetBinContent(17,34.62807);
   hext_stack_2->SetBinContent(18,38.17773);
   hext_stack_2->SetBinContent(19,58.14839);
   hext_stack_2->SetBinContent(20,45.06673);
   hext_stack_2->SetBinContent(21,43.1766);
   hext_stack_2->SetBinContent(22,36.14473);
   hext_stack_2->SetBinContent(23,23.70186);
   hext_stack_2->SetBinContent(24,22.7562);
   hext_stack_2->SetBinContent(25,25.4308);
   hext_stack_2->SetBinError(1,3.767928);
   hext_stack_2->SetBinError(2,2.688701);
   hext_stack_2->SetBinError(3,3.377746);
   hext_stack_2->SetBinError(4,4.261313);
   hext_stack_2->SetBinError(5,3.25923);
   hext_stack_2->SetBinError(6,4.626509);
   hext_stack_2->SetBinError(7,5.010111);
   hext_stack_2->SetBinError(8,3.570417);
   hext_stack_2->SetBinError(9,3.202371);
   hext_stack_2->SetBinError(10,3.887696);
   hext_stack_2->SetBinError(11,3.166553);
   hext_stack_2->SetBinError(12,2.482964);
   hext_stack_2->SetBinError(13,2.482304);
   hext_stack_2->SetBinError(14,2.587739);
   hext_stack_2->SetBinError(15,2.8819);
   hext_stack_2->SetBinError(16,3.569456);
   hext_stack_2->SetBinError(17,4.150535);
   hext_stack_2->SetBinError(18,4.161896);
   hext_stack_2->SetBinError(19,5.323658);
   hext_stack_2->SetBinError(20,4.501557);
   hext_stack_2->SetBinError(21,4.490121);
   hext_stack_2->SetBinError(22,4.061374);
   hext_stack_2->SetBinError(23,3.23973);
   hext_stack_2->SetBinError(24,3.393159);
   hext_stack_2->SetBinError(25,3.570967);
   hext_stack_2->SetEntries(1757);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,1.165782);
   hdirt_stack_3->SetBinContent(2,2.946959);
   hdirt_stack_3->SetBinContent(3,3.145933);
   hdirt_stack_3->SetBinContent(4,2.328343);
   hdirt_stack_3->SetBinContent(5,3.619229);
   hdirt_stack_3->SetBinContent(6,2.973193);
   hdirt_stack_3->SetBinContent(7,3.318933);
   hdirt_stack_3->SetBinContent(8,2.485412);
   hdirt_stack_3->SetBinContent(9,1.007145);
   hdirt_stack_3->SetBinContent(10,2.835262);
   hdirt_stack_3->SetBinContent(11,3.430679);
   hdirt_stack_3->SetBinContent(12,1.761043);
   hdirt_stack_3->SetBinContent(13,2.664526);
   hdirt_stack_3->SetBinContent(14,1.410831);
   hdirt_stack_3->SetBinContent(15,2.579487);
   hdirt_stack_3->SetBinContent(16,4.18);
   hdirt_stack_3->SetBinContent(17,3.974605);
   hdirt_stack_3->SetBinContent(18,4.219921);
   hdirt_stack_3->SetBinContent(19,4.443388);
   hdirt_stack_3->SetBinContent(20,3.199105);
   hdirt_stack_3->SetBinContent(21,2.788732);
   hdirt_stack_3->SetBinContent(22,2.436897);
   hdirt_stack_3->SetBinContent(23,3.844801);
   hdirt_stack_3->SetBinContent(24,3.454516);
   hdirt_stack_3->SetBinContent(25,2.816322);
   hdirt_stack_3->SetBinError(1,0.5409003);
   hdirt_stack_3->SetBinError(2,0.8660902);
   hdirt_stack_3->SetBinError(3,0.8887919);
   hdirt_stack_3->SetBinError(4,0.8271101);
   hdirt_stack_3->SetBinError(5,0.9921527);
   hdirt_stack_3->SetBinError(6,0.8959003);
   hdirt_stack_3->SetBinError(7,0.8953751);
   hdirt_stack_3->SetBinError(8,0.9529058);
   hdirt_stack_3->SetBinError(9,0.4208208);
   hdirt_stack_3->SetBinError(10,1.171747);
   hdirt_stack_3->SetBinError(11,1.33059);
   hdirt_stack_3->SetBinError(12,0.6395778);
   hdirt_stack_3->SetBinError(13,0.8008228);
   hdirt_stack_3->SetBinError(14,0.5435184);
   hdirt_stack_3->SetBinError(15,0.9137084);
   hdirt_stack_3->SetBinError(16,1.052494);
   hdirt_stack_3->SetBinError(17,1.121746);
   hdirt_stack_3->SetBinError(18,1.107012);
   hdirt_stack_3->SetBinError(19,1.371812);
   hdirt_stack_3->SetBinError(20,0.9008224);
   hdirt_stack_3->SetBinError(21,0.7994717);
   hdirt_stack_3->SetBinError(22,0.7866737);
   hdirt_stack_3->SetBinError(23,1.054336);
   hdirt_stack_3->SetBinError(24,0.9870484);
   hdirt_stack_3->SetBinError(25,0.8883514);
   hdirt_stack_3->SetEntries(307);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,26.9667);
   houtFV_stack_4->SetBinContent(2,26.9691);
   houtFV_stack_4->SetBinContent(3,32.30392);
   houtFV_stack_4->SetBinContent(4,33.95638);
   houtFV_stack_4->SetBinContent(5,24.55607);
   houtFV_stack_4->SetBinContent(6,24.90231);
   houtFV_stack_4->SetBinContent(7,30.09473);
   houtFV_stack_4->SetBinContent(8,25.96929);
   houtFV_stack_4->SetBinContent(9,25.93956);
   houtFV_stack_4->SetBinContent(10,28.12156);
   houtFV_stack_4->SetBinContent(11,24.93564);
   houtFV_stack_4->SetBinContent(12,28.34371);
   houtFV_stack_4->SetBinContent(13,27.31275);
   houtFV_stack_4->SetBinContent(14,26.98495);
   houtFV_stack_4->SetBinContent(15,26.90035);
   houtFV_stack_4->SetBinContent(16,30.64273);
   houtFV_stack_4->SetBinContent(17,23.82829);
   houtFV_stack_4->SetBinContent(18,27.6178);
   houtFV_stack_4->SetBinContent(19,24.53285);
   houtFV_stack_4->SetBinContent(20,20.74328);
   houtFV_stack_4->SetBinContent(21,24.41165);
   houtFV_stack_4->SetBinContent(22,31.79771);
   houtFV_stack_4->SetBinContent(23,23.9757);
   houtFV_stack_4->SetBinContent(24,30.06352);
   houtFV_stack_4->SetBinContent(25,27.94144);
   houtFV_stack_4->SetBinError(1,2.560919);
   houtFV_stack_4->SetBinError(2,2.585493);
   houtFV_stack_4->SetBinError(3,2.859859);
   houtFV_stack_4->SetBinError(4,2.959627);
   houtFV_stack_4->SetBinError(5,2.524576);
   houtFV_stack_4->SetBinError(6,2.557745);
   houtFV_stack_4->SetBinError(7,2.732106);
   houtFV_stack_4->SetBinError(8,2.594547);
   houtFV_stack_4->SetBinError(9,2.527142);
   houtFV_stack_4->SetBinError(10,2.73827);
   houtFV_stack_4->SetBinError(11,2.511774);
   houtFV_stack_4->SetBinError(12,2.596476);
   houtFV_stack_4->SetBinError(13,2.588854);
   houtFV_stack_4->SetBinError(14,2.597582);
   houtFV_stack_4->SetBinError(15,2.558954);
   houtFV_stack_4->SetBinError(16,2.847899);
   houtFV_stack_4->SetBinError(17,2.444515);
   houtFV_stack_4->SetBinError(18,2.864089);
   houtFV_stack_4->SetBinError(19,2.539927);
   houtFV_stack_4->SetBinError(20,2.26931);
   houtFV_stack_4->SetBinError(21,2.446511);
   houtFV_stack_4->SetBinError(22,2.913762);
   houtFV_stack_4->SetBinError(23,2.406851);
   houtFV_stack_4->SetBinError(24,2.764999);
   houtFV_stack_4->SetBinError(25,2.706668);
   houtFV_stack_4->SetEntries(3094);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.106954);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.215302);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.896794);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.554018);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.47487);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.313963);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.679171);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.820544);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.355467);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,6.206803);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.745842);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,6.012883);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.12923);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.994656);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.651737);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.155948);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,5.000372);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.693362);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.092518);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,6.030496);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.503602);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.539927);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.119325);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.63565);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,4.68166);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6696828);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7546684);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8909736);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9531464);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5715771);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7628073);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7976126);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7223736);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6179753);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9765657);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8655173);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.079147);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.741064);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7369322);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6452616);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8300351);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.8188889);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6255196);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8131118);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.9430153);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.738454);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7378364);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7545488);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7894431);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9089674);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.514757);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7802489);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6980084);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6852109);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.126072);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6902305);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5241318);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6990894);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.9988705);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7196725);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.767167);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7530185);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5421379);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8668339);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.007718);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5911825);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.893371);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.9555869);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.717357);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6556314);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6983781);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.5928763);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.8547267);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.5370484);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.01252);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1338378);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2243635);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2119274);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1876779);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3837559);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2343179);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.221046);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2736724);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3093723);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2248541);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2175865);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.263642);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2038644);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2598512);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3000369);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1588611);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2534303);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3478328);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2472739);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2328074);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2190272);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.158339);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3345262);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1823322);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3387953);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,89.7059);
   hNCpi0inFVres_stack_7->SetBinContent(2,94.37532);
   hNCpi0inFVres_stack_7->SetBinContent(3,95.45094);
   hNCpi0inFVres_stack_7->SetBinContent(4,100.5823);
   hNCpi0inFVres_stack_7->SetBinContent(5,82.07418);
   hNCpi0inFVres_stack_7->SetBinContent(6,73.40668);
   hNCpi0inFVres_stack_7->SetBinContent(7,78.841);
   hNCpi0inFVres_stack_7->SetBinContent(8,82.32246);
   hNCpi0inFVres_stack_7->SetBinContent(9,84.75394);
   hNCpi0inFVres_stack_7->SetBinContent(10,88.18607);
   hNCpi0inFVres_stack_7->SetBinContent(11,91.47421);
   hNCpi0inFVres_stack_7->SetBinContent(12,85.44634);
   hNCpi0inFVres_stack_7->SetBinContent(13,80.96588);
   hNCpi0inFVres_stack_7->SetBinContent(14,88.34294);
   hNCpi0inFVres_stack_7->SetBinContent(15,90.76005);
   hNCpi0inFVres_stack_7->SetBinContent(16,96.20638);
   hNCpi0inFVres_stack_7->SetBinContent(17,83.83658);
   hNCpi0inFVres_stack_7->SetBinContent(18,78.90032);
   hNCpi0inFVres_stack_7->SetBinContent(19,74.97298);
   hNCpi0inFVres_stack_7->SetBinContent(20,78.45261);
   hNCpi0inFVres_stack_7->SetBinContent(21,83.96017);
   hNCpi0inFVres_stack_7->SetBinContent(22,99.57382);
   hNCpi0inFVres_stack_7->SetBinContent(23,92.27682);
   hNCpi0inFVres_stack_7->SetBinContent(24,91.43054);
   hNCpi0inFVres_stack_7->SetBinContent(25,85.86717);
   hNCpi0inFVres_stack_7->SetBinError(1,3.055738);
   hNCpi0inFVres_stack_7->SetBinError(2,3.168019);
   hNCpi0inFVres_stack_7->SetBinError(3,3.128402);
   hNCpi0inFVres_stack_7->SetBinError(4,3.427933);
   hNCpi0inFVres_stack_7->SetBinError(5,2.925912);
   hNCpi0inFVres_stack_7->SetBinError(6,2.604373);
   hNCpi0inFVres_stack_7->SetBinError(7,2.943404);
   hNCpi0inFVres_stack_7->SetBinError(8,2.973515);
   hNCpi0inFVres_stack_7->SetBinError(9,2.989476);
   hNCpi0inFVres_stack_7->SetBinError(10,3.05345);
   hNCpi0inFVres_stack_7->SetBinError(11,3.176166);
   hNCpi0inFVres_stack_7->SetBinError(12,2.95435);
   hNCpi0inFVres_stack_7->SetBinError(13,2.821811);
   hNCpi0inFVres_stack_7->SetBinError(14,3.080186);
   hNCpi0inFVres_stack_7->SetBinError(15,3.074407);
   hNCpi0inFVres_stack_7->SetBinError(16,3.31549);
   hNCpi0inFVres_stack_7->SetBinError(17,3.042833);
   hNCpi0inFVres_stack_7->SetBinError(18,2.748788);
   hNCpi0inFVres_stack_7->SetBinError(19,2.950348);
   hNCpi0inFVres_stack_7->SetBinError(20,2.909797);
   hNCpi0inFVres_stack_7->SetBinError(21,3.005027);
   hNCpi0inFVres_stack_7->SetBinError(22,3.347314);
   hNCpi0inFVres_stack_7->SetBinError(23,3.152887);
   hNCpi0inFVres_stack_7->SetBinError(24,3.058587);
   hNCpi0inFVres_stack_7->SetBinError(25,2.998213);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,21.61313);
   hNCpi0inFVdis_stack_8->SetBinContent(2,20.17476);
   hNCpi0inFVdis_stack_8->SetBinContent(3,20.86722);
   hNCpi0inFVdis_stack_8->SetBinContent(4,21.04351);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.19611);
   hNCpi0inFVdis_stack_8->SetBinContent(6,15.36556);
   hNCpi0inFVdis_stack_8->SetBinContent(7,15.5264);
   hNCpi0inFVdis_stack_8->SetBinContent(8,16.91241);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.09773);
   hNCpi0inFVdis_stack_8->SetBinContent(10,18.39628);
   hNCpi0inFVdis_stack_8->SetBinContent(11,22.50908);
   hNCpi0inFVdis_stack_8->SetBinContent(12,19.30259);
   hNCpi0inFVdis_stack_8->SetBinContent(13,18.00523);
   hNCpi0inFVdis_stack_8->SetBinContent(14,22.3259);
   hNCpi0inFVdis_stack_8->SetBinContent(15,19.33454);
   hNCpi0inFVdis_stack_8->SetBinContent(16,17.69091);
   hNCpi0inFVdis_stack_8->SetBinContent(17,18.50738);
   hNCpi0inFVdis_stack_8->SetBinContent(18,16.76484);
   hNCpi0inFVdis_stack_8->SetBinContent(19,14.61103);
   hNCpi0inFVdis_stack_8->SetBinContent(20,16.91029);
   hNCpi0inFVdis_stack_8->SetBinContent(21,18.40825);
   hNCpi0inFVdis_stack_8->SetBinContent(22,18.5524);
   hNCpi0inFVdis_stack_8->SetBinContent(23,19.90168);
   hNCpi0inFVdis_stack_8->SetBinContent(24,23.37287);
   hNCpi0inFVdis_stack_8->SetBinContent(25,20.93831);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.712737);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.620855);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.582426);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.494632);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.537145);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.410271);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.415654);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.408947);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.543295);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.353448);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.770976);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.538398);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.46524);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.611978);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.519348);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.434526);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.42356);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.344044);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.310419);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.457063);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.544452);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.45661);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.393257);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.661322);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.771291);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08723638);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05880569);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08918934);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.1474381);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.07005689);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1478583);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02275844);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1287352);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03914801);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04444386);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03996217);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.09317692);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.03510782);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1304081);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.01720841);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1115193);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,57.64484);
   hCCpi0inFV_stack_10->SetBinContent(2,52.17525);
   hCCpi0inFV_stack_10->SetBinContent(3,49.55733);
   hCCpi0inFV_stack_10->SetBinContent(4,50.71426);
   hCCpi0inFV_stack_10->SetBinContent(5,43.8513);
   hCCpi0inFV_stack_10->SetBinContent(6,30.78798);
   hCCpi0inFV_stack_10->SetBinContent(7,36.37944);
   hCCpi0inFV_stack_10->SetBinContent(8,36.07108);
   hCCpi0inFV_stack_10->SetBinContent(9,42.62897);
   hCCpi0inFV_stack_10->SetBinContent(10,41.5367);
   hCCpi0inFV_stack_10->SetBinContent(11,39.94587);
   hCCpi0inFV_stack_10->SetBinContent(12,50.0163);
   hCCpi0inFV_stack_10->SetBinContent(13,46.2168);
   hCCpi0inFV_stack_10->SetBinContent(14,46.99201);
   hCCpi0inFV_stack_10->SetBinContent(15,43.89552);
   hCCpi0inFV_stack_10->SetBinContent(16,48.48705);
   hCCpi0inFV_stack_10->SetBinContent(17,42.90089);
   hCCpi0inFV_stack_10->SetBinContent(18,34.97688);
   hCCpi0inFV_stack_10->SetBinContent(19,32.13326);
   hCCpi0inFV_stack_10->SetBinContent(20,37.44043);
   hCCpi0inFV_stack_10->SetBinContent(21,41.6002);
   hCCpi0inFV_stack_10->SetBinContent(22,46.9183);
   hCCpi0inFV_stack_10->SetBinContent(23,44.90646);
   hCCpi0inFV_stack_10->SetBinContent(24,49.93256);
   hCCpi0inFV_stack_10->SetBinContent(25,47.30753);
   hCCpi0inFV_stack_10->SetBinError(1,3.802909);
   hCCpi0inFV_stack_10->SetBinError(2,3.673097);
   hCCpi0inFV_stack_10->SetBinError(3,3.501727);
   hCCpi0inFV_stack_10->SetBinError(4,3.530173);
   hCCpi0inFV_stack_10->SetBinError(5,3.355862);
   hCCpi0inFV_stack_10->SetBinError(6,2.77975);
   hCCpi0inFV_stack_10->SetBinError(7,3.091866);
   hCCpi0inFV_stack_10->SetBinError(8,3.001071);
   hCCpi0inFV_stack_10->SetBinError(9,3.262315);
   hCCpi0inFV_stack_10->SetBinError(10,3.254576);
   hCCpi0inFV_stack_10->SetBinError(11,3.144906);
   hCCpi0inFV_stack_10->SetBinError(12,3.553301);
   hCCpi0inFV_stack_10->SetBinError(13,3.372111);
   hCCpi0inFV_stack_10->SetBinError(14,3.360632);
   hCCpi0inFV_stack_10->SetBinError(15,3.293951);
   hCCpi0inFV_stack_10->SetBinError(16,3.502515);
   hCCpi0inFV_stack_10->SetBinError(17,3.305532);
   hCCpi0inFV_stack_10->SetBinError(18,2.936517);
   hCCpi0inFV_stack_10->SetBinError(19,2.887814);
   hCCpi0inFV_stack_10->SetBinError(20,3.086212);
   hCCpi0inFV_stack_10->SetBinError(21,3.264017);
   hCCpi0inFV_stack_10->SetBinError(22,3.451877);
   hCCpi0inFV_stack_10->SetBinError(23,3.345752);
   hCCpi0inFV_stack_10->SetBinError(24,3.615117);
   hCCpi0inFV_stack_10->SetBinError(25,3.440319);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,19.66449);
   hNCinFV_stack_11->SetBinContent(2,23.37495);
   hNCinFV_stack_11->SetBinContent(3,29.01147);
   hNCinFV_stack_11->SetBinContent(4,17.63779);
   hNCinFV_stack_11->SetBinContent(5,20.69724);
   hNCinFV_stack_11->SetBinContent(6,18.23602);
   hNCinFV_stack_11->SetBinContent(7,16.84475);
   hNCinFV_stack_11->SetBinContent(8,17.46861);
   hNCinFV_stack_11->SetBinContent(9,21.60162);
   hNCinFV_stack_11->SetBinContent(10,16.77836);
   hNCinFV_stack_11->SetBinContent(11,18.84182);
   hNCinFV_stack_11->SetBinContent(12,22.94596);
   hNCinFV_stack_11->SetBinContent(13,22.52394);
   hNCinFV_stack_11->SetBinContent(14,20.9667);
   hNCinFV_stack_11->SetBinContent(15,26.35922);
   hNCinFV_stack_11->SetBinContent(16,21.93869);
   hNCinFV_stack_11->SetBinContent(17,20.26661);
   hNCinFV_stack_11->SetBinContent(18,18.18281);
   hNCinFV_stack_11->SetBinContent(19,15.98617);
   hNCinFV_stack_11->SetBinContent(20,16.5088);
   hNCinFV_stack_11->SetBinContent(21,19.83009);
   hNCinFV_stack_11->SetBinContent(22,22.36081);
   hNCinFV_stack_11->SetBinContent(23,25.98379);
   hNCinFV_stack_11->SetBinContent(24,26.11776);
   hNCinFV_stack_11->SetBinContent(25,15.11246);
   hNCinFV_stack_11->SetBinError(1,2.212583);
   hNCinFV_stack_11->SetBinError(2,2.573619);
   hNCinFV_stack_11->SetBinError(3,2.98997);
   hNCinFV_stack_11->SetBinError(4,2.120123);
   hNCinFV_stack_11->SetBinError(5,2.544955);
   hNCinFV_stack_11->SetBinError(6,2.405695);
   hNCinFV_stack_11->SetBinError(7,1.991105);
   hNCinFV_stack_11->SetBinError(8,2.251823);
   hNCinFV_stack_11->SetBinError(9,2.442116);
   hNCinFV_stack_11->SetBinError(10,2.235247);
   hNCinFV_stack_11->SetBinError(11,2.261242);
   hNCinFV_stack_11->SetBinError(12,2.584325);
   hNCinFV_stack_11->SetBinError(13,2.682161);
   hNCinFV_stack_11->SetBinError(14,2.444707);
   hNCinFV_stack_11->SetBinError(15,2.905252);
   hNCinFV_stack_11->SetBinError(16,2.547335);
   hNCinFV_stack_11->SetBinError(17,2.54696);
   hNCinFV_stack_11->SetBinError(18,2.301468);
   hNCinFV_stack_11->SetBinError(19,2.190679);
   hNCinFV_stack_11->SetBinError(20,2.096245);
   hNCinFV_stack_11->SetBinError(21,2.57754);
   hNCinFV_stack_11->SetBinError(22,2.679524);
   hNCinFV_stack_11->SetBinError(23,2.887682);
   hNCinFV_stack_11->SetBinError(24,2.887147);
   hNCinFV_stack_11->SetBinError(25,1.903127);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,47.1693);
   hnumuCCinFV_stack_12->SetBinContent(2,42.21201);
   hnumuCCinFV_stack_12->SetBinContent(3,25.46156);
   hnumuCCinFV_stack_12->SetBinContent(4,18.40689);
   hnumuCCinFV_stack_12->SetBinContent(5,11.28539);
   hnumuCCinFV_stack_12->SetBinContent(6,17.51113);
   hnumuCCinFV_stack_12->SetBinContent(7,21.88108);
   hnumuCCinFV_stack_12->SetBinContent(8,14.85568);
   hnumuCCinFV_stack_12->SetBinContent(9,19.82853);
   hnumuCCinFV_stack_12->SetBinContent(10,20.9735);
   hnumuCCinFV_stack_12->SetBinContent(11,34.60614);
   hnumuCCinFV_stack_12->SetBinContent(12,42.83245);
   hnumuCCinFV_stack_12->SetBinContent(13,38.77178);
   hnumuCCinFV_stack_12->SetBinContent(14,37.86487);
   hnumuCCinFV_stack_12->SetBinContent(15,34.20946);
   hnumuCCinFV_stack_12->SetBinContent(16,25.79255);
   hnumuCCinFV_stack_12->SetBinContent(17,18.43291);
   hnumuCCinFV_stack_12->SetBinContent(18,17.94309);
   hnumuCCinFV_stack_12->SetBinContent(19,19.32793);
   hnumuCCinFV_stack_12->SetBinContent(20,15.09309);
   hnumuCCinFV_stack_12->SetBinContent(21,13.86726);
   hnumuCCinFV_stack_12->SetBinContent(22,19.24436);
   hnumuCCinFV_stack_12->SetBinContent(23,24.38044);
   hnumuCCinFV_stack_12->SetBinContent(24,27.33628);
   hnumuCCinFV_stack_12->SetBinContent(25,44.47362);
   hnumuCCinFV_stack_12->SetBinError(1,3.736519);
   hnumuCCinFV_stack_12->SetBinError(2,4.388998);
   hnumuCCinFV_stack_12->SetBinError(3,2.675874);
   hnumuCCinFV_stack_12->SetBinError(4,2.390332);
   hnumuCCinFV_stack_12->SetBinError(5,1.74066);
   hnumuCCinFV_stack_12->SetBinError(6,2.218079);
   hnumuCCinFV_stack_12->SetBinError(7,3.025863);
   hnumuCCinFV_stack_12->SetBinError(8,2.117807);
   hnumuCCinFV_stack_12->SetBinError(9,2.794086);
   hnumuCCinFV_stack_12->SetBinError(10,2.523489);
   hnumuCCinFV_stack_12->SetBinError(11,3.657497);
   hnumuCCinFV_stack_12->SetBinError(12,4.504295);
   hnumuCCinFV_stack_12->SetBinError(13,3.409337);
   hnumuCCinFV_stack_12->SetBinError(14,3.371083);
   hnumuCCinFV_stack_12->SetBinError(15,3.583078);
   hnumuCCinFV_stack_12->SetBinError(16,2.573968);
   hnumuCCinFV_stack_12->SetBinError(17,2.590087);
   hnumuCCinFV_stack_12->SetBinError(18,2.311092);
   hnumuCCinFV_stack_12->SetBinError(19,2.746616);
   hnumuCCinFV_stack_12->SetBinError(20,1.890419);
   hnumuCCinFV_stack_12->SetBinError(21,1.992954);
   hnumuCCinFV_stack_12->SetBinError(22,2.564624);
   hnumuCCinFV_stack_12->SetBinError(23,2.962844);
   hnumuCCinFV_stack_12->SetBinError(24,2.818662);
   hnumuCCinFV_stack_12->SetBinError(25,3.938761);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.742208);
   hnueCCinFV_stack_13->SetBinContent(2,3.268586);
   hnueCCinFV_stack_13->SetBinContent(3,2.847967);
   hnueCCinFV_stack_13->SetBinContent(4,1.119741);
   hnueCCinFV_stack_13->SetBinContent(5,1.900914);
   hnueCCinFV_stack_13->SetBinContent(6,2.762814);
   hnueCCinFV_stack_13->SetBinContent(7,1.591313);
   hnueCCinFV_stack_13->SetBinContent(8,0.9895673);
   hnueCCinFV_stack_13->SetBinContent(9,1.500088);
   hnueCCinFV_stack_13->SetBinContent(10,3.329216);
   hnueCCinFV_stack_13->SetBinContent(11,1.6355);
   hnueCCinFV_stack_13->SetBinContent(12,2.353605);
   hnueCCinFV_stack_13->SetBinContent(13,2.560843);
   hnueCCinFV_stack_13->SetBinContent(14,2.245538);
   hnueCCinFV_stack_13->SetBinContent(15,2.522244);
   hnueCCinFV_stack_13->SetBinContent(16,0.8383607);
   hnueCCinFV_stack_13->SetBinContent(17,1.64015);
   hnueCCinFV_stack_13->SetBinContent(18,2.706305);
   hnueCCinFV_stack_13->SetBinContent(19,2.742686);
   hnueCCinFV_stack_13->SetBinContent(20,1.38455);
   hnueCCinFV_stack_13->SetBinContent(21,3.369064);
   hnueCCinFV_stack_13->SetBinContent(22,0.8101376);
   hnueCCinFV_stack_13->SetBinContent(23,1.323389);
   hnueCCinFV_stack_13->SetBinContent(24,3.234831);
   hnueCCinFV_stack_13->SetBinContent(25,2.795835);
   hnueCCinFV_stack_13->SetBinError(1,0.6924799);
   hnueCCinFV_stack_13->SetBinError(2,1.694822);
   hnueCCinFV_stack_13->SetBinError(3,0.9125326);
   hnueCCinFV_stack_13->SetBinError(4,0.5065677);
   hnueCCinFV_stack_13->SetBinError(5,0.7999884);
   hnueCCinFV_stack_13->SetBinError(6,1.664526);
   hnueCCinFV_stack_13->SetBinError(7,0.8435705);
   hnueCCinFV_stack_13->SetBinError(8,0.5149912);
   hnueCCinFV_stack_13->SetBinError(9,0.6322557);
   hnueCCinFV_stack_13->SetBinError(10,1.221185);
   hnueCCinFV_stack_13->SetBinError(11,0.6984236);
   hnueCCinFV_stack_13->SetBinError(12,0.7147047);
   hnueCCinFV_stack_13->SetBinError(13,0.8130205);
   hnueCCinFV_stack_13->SetBinError(14,0.9221938);
   hnueCCinFV_stack_13->SetBinError(15,0.9364031);
   hnueCCinFV_stack_13->SetBinError(16,0.4202826);
   hnueCCinFV_stack_13->SetBinError(17,0.6813581);
   hnueCCinFV_stack_13->SetBinError(18,1.249681);
   hnueCCinFV_stack_13->SetBinError(19,1.029529);
   hnueCCinFV_stack_13->SetBinError(20,0.6315958);
   hnueCCinFV_stack_13->SetBinError(21,1.476504);
   hnueCCinFV_stack_13->SetBinError(22,0.4436954);
   hnueCCinFV_stack_13->SetBinError(23,0.6125331);
   hnueCCinFV_stack_13->SetBinError(24,1.386729);
   hnueCCinFV_stack_13->SetBinError(25,1.025364);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmcerror__2->SetBinContent(1,305.5378);
   hmcerror__2->SetBinContent(2,295.0023);
   hmcerror__2->SetBinContent(3,296.7011);
   hmcerror__2->SetBinContent(4,296.848);
   hmcerror__2->SetBinContent(5,244.2917);
   hmcerror__2->SetBinContent(6,240.1718);
   hmcerror__2->SetBinContent(7,269.8761);
   hmcerror__2->SetBinContent(8,239.9565);
   hmcerror__2->SetBinContent(9,250.3348);
   hmcerror__2->SetBinContent(10,262.1221);
   hmcerror__2->SetBinContent(11,272.4091);
   hmcerror__2->SetBinContent(12,281.4625);
   hmcerror__2->SetBinContent(13,262.7349);
   hmcerror__2->SetBinContent(14,273.8398);
   hmcerror__2->SetBinContent(15,279.1761);
   hmcerror__2->SetBinContent(16,289.2805);
   hmcerror__2->SetBinContent(17,260.5205);
   hmcerror__2->SetBinContent(18,255.0897);
   hmcerror__2->SetBinContent(19,259.2013);
   hmcerror__2->SetBinContent(20,247.4286);
   hmcerror__2->SetBinContent(21,264.1014);
   hmcerror__2->SetBinContent(22,289.2559);
   hmcerror__2->SetBinContent(23,272.7818);
   hmcerror__2->SetBinContent(24,289.2486);
   hmcerror__2->SetBinContent(25,281.7316);
   hmcerror__2->SetBinError(1,86.06687);
   hmcerror__2->SetBinError(2,85.52334);
   hmcerror__2->SetBinError(3,79.49704);
   hmcerror__2->SetBinError(4,78.42383);
   hmcerror__2->SetBinError(5,64.28957);
   hmcerror__2->SetBinError(6,58.73359);
   hmcerror__2->SetBinError(7,69.05972);
   hmcerror__2->SetBinError(8,64.1927);
   hmcerror__2->SetBinError(9,70.09274);
   hmcerror__2->SetBinError(10,69.50681);
   hmcerror__2->SetBinError(11,76.19871);
   hmcerror__2->SetBinError(12,79.14863);
   hmcerror__2->SetBinError(13,70.60275);
   hmcerror__2->SetBinError(14,78.35304);
   hmcerror__2->SetBinError(15,72.26901);
   hmcerror__2->SetBinError(16,75.42516);
   hmcerror__2->SetBinError(17,68.25512);
   hmcerror__2->SetBinError(18,65.39506);
   hmcerror__2->SetBinError(19,60.39773);
   hmcerror__2->SetBinError(20,62.42864);
   hmcerror__2->SetBinError(21,65.44011);
   hmcerror__2->SetBinError(22,72.23409);
   hmcerror__2->SetBinError(23,74.79543);
   hmcerror__2->SetBinError(24,79.50302);
   hmcerror__2->SetBinError(25,73.74197);
   hmcerror__2->SetBinError(26,0.3895343);
   hmcerror__2->SetEntries(7381.09);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3001[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3001[25] = {
   307,
   285,
   280,
   271,
   268,
   253,
   247,
   225,
   234,
   239,
   244,
   249,
   276,
   281,
   291,
   272,
   257,
   223,
   249,
   228,
   246,
   252,
   254,
   259,
   254};
   Double_t _felx3001[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3001[25] = {
   17.52142,
   16.88194,
   16.7332,
   16.46208,
   16.37071,
   15.90597,
   15.71623,
   15,
   15.29706,
   15.45962,
   15.6205,
   15.77973,
   16.61325,
   16.76305,
   17.05872,
   16.49242,
   16.03122,
   14.93318,
   15.77973,
   15.09967,
   15.68439,
   15.87451,
   15.93738,
   16.09348,
   15.93738};
   Double_t _fehx3001[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3001[25] = {
   17.52142,
   16.88194,
   16.7332,
   16.46208,
   16.37071,
   15.90597,
   15.71623,
   15,
   15.29706,
   15.45962,
   15.6205,
   15.77973,
   16.61325,
   16.76305,
   17.05872,
   16.49242,
   16.03122,
   14.93318,
   15.77973,
   15.09967,
   15.68439,
   15.87451,
   15.93738,
   16.09348,
   15.93738};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-3.78,3.78);
   Graph_Graph3001->SetMinimum(196.4214);
   Graph_Graph3001->SetMaximum(336.1669);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6444.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 173.5","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 754.3","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 679.8","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  115.6","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.9","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2172.2","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  473.3","F");

   ci = 1441;
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

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1095.0","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 515.2","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3002[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3002[25] = {
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
   Double_t _felx3002[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3002[25] = {
   0.2816898,
   0.2899074,
   0.2679365,
   0.2641885,
   0.2631673,
   0.2445482,
   0.2558942,
   0.2675181,
   0.279996,
   0.2651695,
   0.2797217,
   0.2812048,
   0.2687224,
   0.2861273,
   0.2588653,
   0.2607337,
   0.2619952,
   0.2563611,
   0.2330148,
   0.2523097,
   0.247784,
   0.2497238,
   0.2741951,
   0.2748605,
   0.2617454};
   Double_t _fehx3002[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3002[25] = {
   0.2816898,
   0.2899074,
   0.2679365,
   0.2641885,
   0.2631673,
   0.2445482,
   0.2558942,
   0.2675181,
   0.279996,
   0.2651695,
   0.2797217,
   0.2812048,
   0.2687224,
   0.2861273,
   0.2588653,
   0.2607337,
   0.2619952,
   0.2563611,
   0.2330148,
   0.2523097,
   0.247784,
   0.2497238,
   0.2741951,
   0.2748605,
   0.2617454};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-3.78,3.78);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3003[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3003[25] = {
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
   Double_t _felx3003[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3003[25] = {
   0.2440119,
   0.2562533,
   0.247011,
   0.2396757,
   0.2464373,
   0.2240202,
   0.2300573,
   0.250059,
   0.2550354,
   0.2449755,
   0.2462975,
   0.2561779,
   0.241722,
   0.2482155,
   0.240836,
   0.2448736,
   0.2434219,
   0.2402075,
   0.2155512,
   0.2189636,
   0.2288793,
   0.2330937,
   0.2533747,
   0.245131,
   0.2455736};
   Double_t _fehx3003[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3003[25] = {
   0.2440119,
   0.2562533,
   0.247011,
   0.2396757,
   0.2464373,
   0.2240202,
   0.2300573,
   0.250059,
   0.2550354,
   0.2449755,
   0.2462975,
   0.2561779,
   0.241722,
   0.2482155,
   0.240836,
   0.2448736,
   0.2434219,
   0.2402075,
   0.2155512,
   0.2189636,
   0.2288793,
   0.2330937,
   0.2533747,
   0.245131,
   0.2455736};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-3.78,3.78);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3004[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3004[25] = {
   1.004786,
   0.9660941,
   0.9437108,
   0.9129252,
   1.097049,
   1.053413,
   0.9152348,
   0.93767,
   0.9347483,
   0.9117887,
   0.8957118,
   0.8846648,
   1.050488,
   1.026147,
   1.042353,
   0.940264,
   0.9864866,
   0.8742024,
   0.9606434,
   0.9214778,
   0.9314603,
   0.8712008,
   0.9311471,
   0.8954236,
   0.9015672};
   Double_t _felx3004[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3004[25] = {
   0.05734615,
   0.05722648,
   0.0563975,
   0.05545625,
   0.06701295,
   0.06622748,
   0.058235,
   0.06251133,
   0.06110641,
   0.05897871,
   0.05734207,
   0.05606336,
   0.06323197,
   0.06121483,
   0.0611038,
   0.05701188,
   0.06153535,
   0.05854092,
   0.0608783,
   0.06102636,
   0.05938774,
   0.05488049,
   0.05842536,
   0.05563892,
   0.05656936};
   Double_t _fehx3004[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3004[25] = {
   0.05734615,
   0.05722648,
   0.0563975,
   0.05545625,
   0.06701295,
   0.06622748,
   0.058235,
   0.06251133,
   0.06110641,
   0.05897871,
   0.05734207,
   0.05606336,
   0.06323197,
   0.06121483,
   0.0611038,
   0.05701188,
   0.06153535,
   0.05854092,
   0.0608783,
   0.06102636,
   0.05938774,
   0.05488049,
   0.05842536,
   0.05563892,
   0.05656936};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-3.78,3.78);
   Graph_Graph3004->SetMinimum(0.7808214);
   Graph_Graph3004->SetMaximum(1.198902);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
