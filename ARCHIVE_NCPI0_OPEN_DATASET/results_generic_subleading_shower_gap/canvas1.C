#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 00:21:49 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",112,135,1200,900);
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
   pad1->Range(-13.84615,-19.64,101.5385,1654.928);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_bnb_10_kine_pio_gap_low_all",18,0,90);
   hmc__1->SetBinContent(0,12593.05);
   hmc__1->SetBinContent(1,931.9343);
   hmc__1->SetBinContent(2,320.113);
   hmc__1->SetBinContent(3,327.312);
   hmc__1->SetBinContent(4,310.68);
   hmc__1->SetBinContent(5,294.5755);
   hmc__1->SetBinContent(6,258.4001);
   hmc__1->SetBinContent(7,242.0854);
   hmc__1->SetBinContent(8,222.294);
   hmc__1->SetBinContent(9,194.4442);
   hmc__1->SetBinContent(10,175.0313);
   hmc__1->SetBinContent(11,152.749);
   hmc__1->SetBinContent(12,142.0013);
   hmc__1->SetBinContent(13,132.1591);
   hmc__1->SetBinContent(14,116.6466);
   hmc__1->SetBinContent(15,101.9301);
   hmc__1->SetBinContent(16,98.88607);
   hmc__1->SetBinContent(17,98.91382);
   hmc__1->SetBinContent(18,87.54897);
   hmc__1->SetBinContent(19,1708.493);
   hmc__1->SetBinError(0,36.71901);
   hmc__1->SetBinError(1,145.3802);
   hmc__1->SetBinError(2,56.27172);
   hmc__1->SetBinError(3,55.32701);
   hmc__1->SetBinError(4,61.6493);
   hmc__1->SetBinError(5,47.93392);
   hmc__1->SetBinError(6,44.96398);
   hmc__1->SetBinError(7,39.98159);
   hmc__1->SetBinError(8,36.35308);
   hmc__1->SetBinError(9,31.50312);
   hmc__1->SetBinError(10,29.71822);
   hmc__1->SetBinError(11,25.81375);
   hmc__1->SetBinError(12,28.07666);
   hmc__1->SetBinError(13,22.44747);
   hmc__1->SetBinError(14,18.857);
   hmc__1->SetBinError(15,21.28213);
   hmc__1->SetBinError(16,19.34163);
   hmc__1->SetBinError(17,16.28407);
   hmc__1->SetBinError(18,16.85676);
   hmc__1->SetBinError(19,335.1553);
   hmc__1->SetMinimum(-19.64);
   hmc__1->SetMaximum(1571.2);
   hmc__1->SetEntries(16480.37);
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
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(978.531);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_10_kine_pio_gap_low_all",18,0,90);
   hbadmatch_stack_1->SetBinContent(0,363.7249);
   hbadmatch_stack_1->SetBinContent(1,25.2669);
   hbadmatch_stack_1->SetBinContent(2,5.587049);
   hbadmatch_stack_1->SetBinContent(3,4.817624);
   hbadmatch_stack_1->SetBinContent(4,5.086236);
   hbadmatch_stack_1->SetBinContent(5,4.999431);
   hbadmatch_stack_1->SetBinContent(6,4.619002);
   hbadmatch_stack_1->SetBinContent(7,2.774187);
   hbadmatch_stack_1->SetBinContent(8,3.88921);
   hbadmatch_stack_1->SetBinContent(9,4.532011);
   hbadmatch_stack_1->SetBinContent(10,3.91082);
   hbadmatch_stack_1->SetBinContent(11,4.231984);
   hbadmatch_stack_1->SetBinContent(12,3.739879);
   hbadmatch_stack_1->SetBinContent(13,3.354374);
   hbadmatch_stack_1->SetBinContent(14,3.616441);
   hbadmatch_stack_1->SetBinContent(15,2.60701);
   hbadmatch_stack_1->SetBinContent(16,2.715842);
   hbadmatch_stack_1->SetBinContent(17,2.510315);
   hbadmatch_stack_1->SetBinContent(18,2.796954);
   hbadmatch_stack_1->SetBinContent(19,45.87598);
   hbadmatch_stack_1->SetBinError(0,5.422098);
   hbadmatch_stack_1->SetBinError(1,1.381149);
   hbadmatch_stack_1->SetBinError(2,0.8381406);
   hbadmatch_stack_1->SetBinError(3,0.6282339);
   hbadmatch_stack_1->SetBinError(4,0.8294253);
   hbadmatch_stack_1->SetBinError(5,0.5487901);
   hbadmatch_stack_1->SetBinError(6,0.5666231);
   hbadmatch_stack_1->SetBinError(7,0.3725232);
   hbadmatch_stack_1->SetBinError(8,0.4625827);
   hbadmatch_stack_1->SetBinError(9,0.5336035);
   hbadmatch_stack_1->SetBinError(10,0.4861975);
   hbadmatch_stack_1->SetBinError(11,0.543598);
   hbadmatch_stack_1->SetBinError(12,0.6216667);
   hbadmatch_stack_1->SetBinError(13,0.4681105);
   hbadmatch_stack_1->SetBinError(14,0.4727381);
   hbadmatch_stack_1->SetBinError(15,0.3899668);
   hbadmatch_stack_1->SetBinError(16,0.4105603);
   hbadmatch_stack_1->SetBinError(17,0.3863168);
   hbadmatch_stack_1->SetBinError(18,0.4785686);
   hbadmatch_stack_1->SetBinError(19,2.412923);
   hbadmatch_stack_1->SetEntries(12616);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_10_kine_pio_gap_low_all",18,0,90);
   hext_stack_2->SetBinContent(0,1387.332);
   hext_stack_2->SetBinContent(1,144.8103);
   hext_stack_2->SetBinContent(2,35.43468);
   hext_stack_2->SetBinContent(3,39.84238);
   hext_stack_2->SetBinContent(4,39.81104);
   hext_stack_2->SetBinContent(5,42.91674);
   hext_stack_2->SetBinContent(6,32.05358);
   hext_stack_2->SetBinContent(7,32.52122);
   hext_stack_2->SetBinContent(8,30.46258);
   hext_stack_2->SetBinContent(9,26.50887);
   hext_stack_2->SetBinContent(10,20.49651);
   hext_stack_2->SetBinContent(11,20.56332);
   hext_stack_2->SetBinContent(12,18.79234);
   hext_stack_2->SetBinContent(13,17.05544);
   hext_stack_2->SetBinContent(14,14.48827);
   hext_stack_2->SetBinContent(15,11.05535);
   hext_stack_2->SetBinContent(16,14.05336);
   hext_stack_2->SetBinContent(17,11.88563);
   hext_stack_2->SetBinContent(18,10.53729);
   hext_stack_2->SetBinContent(19,207.3483);
   hext_stack_2->SetBinError(0,15.19935);
   hext_stack_2->SetBinError(1,4.899938);
   hext_stack_2->SetBinError(2,2.436628);
   hext_stack_2->SetBinError(3,2.587977);
   hext_stack_2->SetBinError(4,2.60223);
   hext_stack_2->SetBinError(5,2.707434);
   hext_stack_2->SetBinError(6,2.302351);
   hext_stack_2->SetBinError(7,2.343598);
   hext_stack_2->SetBinError(8,2.273712);
   hext_stack_2->SetBinError(9,2.101158);
   hext_stack_2->SetBinError(10,1.826823);
   hext_stack_2->SetBinError(11,1.847284);
   hext_stack_2->SetBinError(12,1.779792);
   hext_stack_2->SetBinError(13,1.698853);
   hext_stack_2->SetBinError(14,1.575697);
   hext_stack_2->SetBinError(15,1.344867);
   hext_stack_2->SetBinError(16,1.550202);
   hext_stack_2->SetBinError(17,1.389385);
   hext_stack_2->SetBinError(18,1.328583);
   hext_stack_2->SetBinError(19,5.868822);
   hext_stack_2->SetEntries(39405);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_10_kine_pio_gap_low_all",18,0,90);
   hdirt_stack_3->SetBinContent(0,486.1107);
   hdirt_stack_3->SetBinContent(1,27.16572);
   hdirt_stack_3->SetBinContent(2,4.898824);
   hdirt_stack_3->SetBinContent(3,6.118826);
   hdirt_stack_3->SetBinContent(4,4.979405);
   hdirt_stack_3->SetBinContent(5,4.183749);
   hdirt_stack_3->SetBinContent(6,4.338542);
   hdirt_stack_3->SetBinContent(7,4.115338);
   hdirt_stack_3->SetBinContent(8,3.538117);
   hdirt_stack_3->SetBinContent(9,3.44503);
   hdirt_stack_3->SetBinContent(10,3.08783);
   hdirt_stack_3->SetBinContent(11,2.265741);
   hdirt_stack_3->SetBinContent(12,2.509779);
   hdirt_stack_3->SetBinContent(13,2.233077);
   hdirt_stack_3->SetBinContent(14,2.429285);
   hdirt_stack_3->SetBinContent(15,2.022977);
   hdirt_stack_3->SetBinContent(16,1.57449);
   hdirt_stack_3->SetBinContent(17,1.746251);
   hdirt_stack_3->SetBinContent(18,1.333292);
   hdirt_stack_3->SetBinContent(19,44.69607);
   hdirt_stack_3->SetBinError(0,5.644722);
   hdirt_stack_3->SetBinError(1,1.443264);
   hdirt_stack_3->SetBinError(2,0.5763678);
   hdirt_stack_3->SetBinError(3,1.099811);
   hdirt_stack_3->SetBinError(4,0.5356236);
   hdirt_stack_3->SetBinError(5,0.4200074);
   hdirt_stack_3->SetBinError(6,0.5345128);
   hdirt_stack_3->SetBinError(7,0.4758477);
   hdirt_stack_3->SetBinError(8,0.4413815);
   hdirt_stack_3->SetBinError(9,0.5029353);
   hdirt_stack_3->SetBinError(10,0.3753917);
   hdirt_stack_3->SetBinError(11,0.3159378);
   hdirt_stack_3->SetBinError(12,0.3261073);
   hdirt_stack_3->SetBinError(13,0.3082104);
   hdirt_stack_3->SetBinError(14,0.3323175);
   hdirt_stack_3->SetBinError(15,0.5352835);
   hdirt_stack_3->SetBinError(16,0.2500048);
   hdirt_stack_3->SetBinError(17,0.3430273);
   hdirt_stack_3->SetBinError(18,0.24535);
   hdirt_stack_3->SetBinError(19,1.810683);
   hdirt_stack_3->SetEntries(20994);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_10_kine_pio_gap_low_all",18,0,90);
   houtFV_stack_4->SetBinContent(0,619.6235);
   houtFV_stack_4->SetBinContent(1,77.96725);
   houtFV_stack_4->SetBinContent(2,24.1667);
   houtFV_stack_4->SetBinContent(3,21.45967);
   houtFV_stack_4->SetBinContent(4,21.97991);
   houtFV_stack_4->SetBinContent(5,22.00234);
   houtFV_stack_4->SetBinContent(6,19.79288);
   houtFV_stack_4->SetBinContent(7,17.91175);
   houtFV_stack_4->SetBinContent(8,17.6144);
   houtFV_stack_4->SetBinContent(9,14.08115);
   houtFV_stack_4->SetBinContent(10,12.77377);
   houtFV_stack_4->SetBinContent(11,11.48227);
   houtFV_stack_4->SetBinContent(12,9.744547);
   houtFV_stack_4->SetBinContent(13,10.01925);
   houtFV_stack_4->SetBinContent(14,8.555851);
   houtFV_stack_4->SetBinContent(15,7.378753);
   houtFV_stack_4->SetBinContent(16,5.948832);
   houtFV_stack_4->SetBinContent(17,7.127211);
   houtFV_stack_4->SetBinContent(18,6.932687);
   houtFV_stack_4->SetBinContent(19,113.2933);
   houtFV_stack_4->SetBinError(0,7.303409);
   houtFV_stack_4->SetBinError(1,2.51561);
   houtFV_stack_4->SetBinError(2,1.18993);
   houtFV_stack_4->SetBinError(3,1.103747);
   houtFV_stack_4->SetBinError(4,1.137852);
   houtFV_stack_4->SetBinError(5,1.108852);
   houtFV_stack_4->SetBinError(6,1.142603);
   houtFV_stack_4->SetBinError(7,1.000624);
   houtFV_stack_4->SetBinError(8,1.164716);
   houtFV_stack_4->SetBinError(9,0.9021459);
   houtFV_stack_4->SetBinError(10,0.9399718);
   houtFV_stack_4->SetBinError(11,0.8075316);
   houtFV_stack_4->SetBinError(12,0.7511541);
   houtFV_stack_4->SetBinError(13,0.9937875);
   houtFV_stack_4->SetBinError(14,0.6944291);
   houtFV_stack_4->SetBinError(15,0.6570293);
   houtFV_stack_4->SetBinError(16,0.566831);
   houtFV_stack_4->SetBinError(17,0.6111859);
   houtFV_stack_4->SetBinError(18,0.7195529);
   houtFV_stack_4->SetBinError(19,2.884027);
   houtFV_stack_4->SetEntries(25917);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","generic_bnb_10_kine_pio_gap_low_all",18,0,90);
   hNCpi0inFV_stack_5->SetBinContent(0,106.31);
   hNCpi0inFV_stack_5->SetBinContent(1,100.8801);
   hNCpi0inFV_stack_5->SetBinContent(2,53.03102);
   hNCpi0inFV_stack_5->SetBinContent(3,47.32924);
   hNCpi0inFV_stack_5->SetBinContent(4,46.02898);
   hNCpi0inFV_stack_5->SetBinContent(5,38.67197);
   hNCpi0inFV_stack_5->SetBinContent(6,34.78054);
   hNCpi0inFV_stack_5->SetBinContent(7,29.59596);
   hNCpi0inFV_stack_5->SetBinContent(8,26.80725);
   hNCpi0inFV_stack_5->SetBinContent(9,22.20724);
   hNCpi0inFV_stack_5->SetBinContent(10,20.73124);
   hNCpi0inFV_stack_5->SetBinContent(11,16.0856);
   hNCpi0inFV_stack_5->SetBinContent(12,13.50195);
   hNCpi0inFV_stack_5->SetBinContent(13,11.992);
   hNCpi0inFV_stack_5->SetBinContent(14,9.464018);
   hNCpi0inFV_stack_5->SetBinContent(15,7.036955);
   hNCpi0inFV_stack_5->SetBinContent(16,7.46706);
   hNCpi0inFV_stack_5->SetBinContent(17,7.900566);
   hNCpi0inFV_stack_5->SetBinContent(18,6.665217);
   hNCpi0inFV_stack_5->SetBinContent(19,64.73522);
   hNCpi0inFV_stack_5->SetBinError(0,2.398533);
   hNCpi0inFV_stack_5->SetBinError(1,2.331765);
   hNCpi0inFV_stack_5->SetBinError(2,1.697149);
   hNCpi0inFV_stack_5->SetBinError(3,1.59959);
   hNCpi0inFV_stack_5->SetBinError(4,1.583473);
   hNCpi0inFV_stack_5->SetBinError(5,1.443803);
   hNCpi0inFV_stack_5->SetBinError(6,1.369786);
   hNCpi0inFV_stack_5->SetBinError(7,1.256799);
   hNCpi0inFV_stack_5->SetBinError(8,1.216115);
   hNCpi0inFV_stack_5->SetBinError(9,1.097303);
   hNCpi0inFV_stack_5->SetBinError(10,1.060673);
   hNCpi0inFV_stack_5->SetBinError(11,0.9292998);
   hNCpi0inFV_stack_5->SetBinError(12,0.857991);
   hNCpi0inFV_stack_5->SetBinError(13,0.8081078);
   hNCpi0inFV_stack_5->SetBinError(14,0.7104893);
   hNCpi0inFV_stack_5->SetBinError(15,0.6109377);
   hNCpi0inFV_stack_5->SetBinError(16,0.6373119);
   hNCpi0inFV_stack_5->SetBinError(17,0.6416336);
   hNCpi0inFV_stack_5->SetBinError(18,0.5917883);
   hNCpi0inFV_stack_5->SetBinError(19,1.852267);
   hNCpi0inFV_stack_5->SetEntries(17673);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","generic_bnb_10_kine_pio_gap_low_all",18,0,90);
   hCCpi0inFV_stack_6->SetBinContent(0,173.4352);
   hCCpi0inFV_stack_6->SetBinContent(1,221.6467);
   hCCpi0inFV_stack_6->SetBinContent(2,115.0076);
   hCCpi0inFV_stack_6->SetBinContent(3,113.2902);
   hCCpi0inFV_stack_6->SetBinContent(4,98.31792);
   hCCpi0inFV_stack_6->SetBinContent(5,85.45871);
   hCCpi0inFV_stack_6->SetBinContent(6,74.68377);
   hCCpi0inFV_stack_6->SetBinContent(7,64.09116);
   hCCpi0inFV_stack_6->SetBinContent(8,55.34966);
   hCCpi0inFV_stack_6->SetBinContent(9,43.01868);
   hCCpi0inFV_stack_6->SetBinContent(10,38.12082);
   hCCpi0inFV_stack_6->SetBinContent(11,32.62052);
   hCCpi0inFV_stack_6->SetBinContent(12,26.66916);
   hCCpi0inFV_stack_6->SetBinContent(13,22.27139);
   hCCpi0inFV_stack_6->SetBinContent(14,17.58501);
   hCCpi0inFV_stack_6->SetBinContent(15,16.16405);
   hCCpi0inFV_stack_6->SetBinContent(16,14.697);
   hCCpi0inFV_stack_6->SetBinContent(17,14.86664);
   hCCpi0inFV_stack_6->SetBinContent(18,13.46329);
   hCCpi0inFV_stack_6->SetBinContent(19,145.5975);
   hCCpi0inFV_stack_6->SetBinError(0,3.077649);
   hCCpi0inFV_stack_6->SetBinError(1,3.467724);
   hCCpi0inFV_stack_6->SetBinError(2,2.476991);
   hCCpi0inFV_stack_6->SetBinError(3,2.478718);
   hCCpi0inFV_stack_6->SetBinError(4,2.298754);
   hCCpi0inFV_stack_6->SetBinError(5,2.146493);
   hCCpi0inFV_stack_6->SetBinError(6,2.004687);
   hCCpi0inFV_stack_6->SetBinError(7,1.863244);
   hCCpi0inFV_stack_6->SetBinError(8,1.742998);
   hCCpi0inFV_stack_6->SetBinError(9,1.521465);
   hCCpi0inFV_stack_6->SetBinError(10,1.435813);
   hCCpi0inFV_stack_6->SetBinError(11,1.336858);
   hCCpi0inFV_stack_6->SetBinError(12,1.221681);
   hCCpi0inFV_stack_6->SetBinError(13,1.101337);
   hCCpi0inFV_stack_6->SetBinError(14,0.9643471);
   hCCpi0inFV_stack_6->SetBinError(15,0.9292323);
   hCCpi0inFV_stack_6->SetBinError(16,0.9002914);
   hCCpi0inFV_stack_6->SetBinError(17,0.9001086);
   hCCpi0inFV_stack_6->SetBinError(18,0.8559941);
   hCCpi0inFV_stack_6->SetBinError(19,2.796249);
   hCCpi0inFV_stack_6->SetEntries(36603);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","generic_bnb_10_kine_pio_gap_low_all",18,0,90);
   hNCinFV_stack_7->SetBinContent(0,899.4496);
   hNCinFV_stack_7->SetBinContent(1,27.8143);
   hNCinFV_stack_7->SetBinContent(2,10.40073);
   hNCinFV_stack_7->SetBinContent(3,11.30615);
   hNCinFV_stack_7->SetBinContent(4,10.83244);
   hNCinFV_stack_7->SetBinContent(5,12.72759);
   hNCinFV_stack_7->SetBinContent(6,9.78655);
   hNCinFV_stack_7->SetBinContent(7,10.82706);
   hNCinFV_stack_7->SetBinContent(8,10.22308);
   hNCinFV_stack_7->SetBinContent(9,8.272304);
   hNCinFV_stack_7->SetBinContent(10,8.328876);
   hNCinFV_stack_7->SetBinContent(11,7.182778);
   hNCinFV_stack_7->SetBinContent(12,6.251639);
   hNCinFV_stack_7->SetBinContent(13,6.996909);
   hNCinFV_stack_7->SetBinContent(14,6.310006);
   hNCinFV_stack_7->SetBinContent(15,6.446669);
   hNCinFV_stack_7->SetBinContent(16,5.400778);
   hNCinFV_stack_7->SetBinContent(17,4.916083);
   hNCinFV_stack_7->SetBinContent(18,3.899282);
   hNCinFV_stack_7->SetBinContent(19,70.04509);
   hNCinFV_stack_7->SetBinError(0,6.951107);
   hNCinFV_stack_7->SetBinError(1,1.213863);
   hNCinFV_stack_7->SetBinError(2,0.7560513);
   hNCinFV_stack_7->SetBinError(3,0.7806225);
   hNCinFV_stack_7->SetBinError(4,0.7616867);
   hNCinFV_stack_7->SetBinError(5,0.8359651);
   hNCinFV_stack_7->SetBinError(6,0.7239824);
   hNCinFV_stack_7->SetBinError(7,0.7676222);
   hNCinFV_stack_7->SetBinError(8,0.7434981);
   hNCinFV_stack_7->SetBinError(9,0.659337);
   hNCinFV_stack_7->SetBinError(10,0.6690598);
   hNCinFV_stack_7->SetBinError(11,0.6223332);
   hNCinFV_stack_7->SetBinError(12,0.5768411);
   hNCinFV_stack_7->SetBinError(13,0.6130114);
   hNCinFV_stack_7->SetBinError(14,0.585351);
   hNCinFV_stack_7->SetBinError(15,0.5920097);
   hNCinFV_stack_7->SetBinError(16,0.5426411);
   hNCinFV_stack_7->SetBinError(17,0.5166614);
   hNCinFV_stack_7->SetBinError(18,0.4529863);
   hNCinFV_stack_7->SetBinError(19,1.936911);
   hNCinFV_stack_7->SetEntries(30232);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","generic_bnb_10_kine_pio_gap_low_all",18,0,90);
   hnumuCCinFV_stack_8->SetBinContent(0,8531.197);
   hnumuCCinFV_stack_8->SetBinContent(1,302.2482);
   hnumuCCinFV_stack_8->SetBinContent(2,68.17286);
   hnumuCCinFV_stack_8->SetBinContent(3,80.50821);
   hnumuCCinFV_stack_8->SetBinContent(4,81.59426);
   hnumuCCinFV_stack_8->SetBinContent(5,81.46953);
   hnumuCCinFV_stack_8->SetBinContent(6,76.38741);
   hnumuCCinFV_stack_8->SetBinContent(7,78.27913);
   hnumuCCinFV_stack_8->SetBinContent(8,72.85883);
   hnumuCCinFV_stack_8->SetBinContent(9,70.80887);
   hnumuCCinFV_stack_8->SetBinContent(10,65.85669);
   hnumuCCinFV_stack_8->SetBinContent(11,57.06727);
   hnumuCCinFV_stack_8->SetBinContent(12,59.30568);
   hnumuCCinFV_stack_8->SetBinContent(13,57.19609);
   hnumuCCinFV_stack_8->SetBinContent(14,52.64991);
   hnumuCCinFV_stack_8->SetBinContent(15,47.81878);
   hnumuCCinFV_stack_8->SetBinContent(16,46.40234);
   hnumuCCinFV_stack_8->SetBinContent(17,46.25238);
   hnumuCCinFV_stack_8->SetBinContent(18,40.58691);
   hnumuCCinFV_stack_8->SetBinContent(19,993.1387);
   hnumuCCinFV_stack_8->SetBinError(0,30.59935);
   hnumuCCinFV_stack_8->SetBinError(1,5.062482);
   hnumuCCinFV_stack_8->SetBinError(2,2.236889);
   hnumuCCinFV_stack_8->SetBinError(3,2.567513);
   hnumuCCinFV_stack_8->SetBinError(4,2.643038);
   hnumuCCinFV_stack_8->SetBinError(5,2.795311);
   hnumuCCinFV_stack_8->SetBinError(6,2.673873);
   hnumuCCinFV_stack_8->SetBinError(7,2.86583);
   hnumuCCinFV_stack_8->SetBinError(8,2.633277);
   hnumuCCinFV_stack_8->SetBinError(9,2.78609);
   hnumuCCinFV_stack_8->SetBinError(10,2.501734);
   hnumuCCinFV_stack_8->SetBinError(11,2.199059);
   hnumuCCinFV_stack_8->SetBinError(12,2.519184);
   hnumuCCinFV_stack_8->SetBinError(13,2.430334);
   hnumuCCinFV_stack_8->SetBinError(14,2.11041);
   hnumuCCinFV_stack_8->SetBinError(15,2.050234);
   hnumuCCinFV_stack_8->SetBinError(16,1.930381);
   hnumuCCinFV_stack_8->SetBinError(17,2.070726);
   hnumuCCinFV_stack_8->SetBinError(18,1.853544);
   hnumuCCinFV_stack_8->SetBinError(19,10.03982);
   hnumuCCinFV_stack_8->SetEntries(241660);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","generic_bnb_10_kine_pio_gap_low_all",18,0,90);
   hnueCCinFV_stack_9->SetBinContent(0,25.86654);
   hnueCCinFV_stack_9->SetBinContent(1,4.13491);
   hnueCCinFV_stack_9->SetBinContent(2,3.413549);
   hnueCCinFV_stack_9->SetBinContent(3,2.639638);
   hnueCCinFV_stack_9->SetBinContent(4,2.049794);
   hnueCCinFV_stack_9->SetBinContent(5,2.145448);
   hnueCCinFV_stack_9->SetBinContent(6,1.957766);
   hnueCCinFV_stack_9->SetBinContent(7,1.969594);
   hnueCCinFV_stack_9->SetBinContent(8,1.550843);
   hnueCCinFV_stack_9->SetBinContent(9,1.570034);
   hnueCCinFV_stack_9->SetBinContent(10,1.724773);
   hnueCCinFV_stack_9->SetBinContent(11,1.249542);
   hnueCCinFV_stack_9->SetBinContent(12,1.486309);
   hnueCCinFV_stack_9->SetBinContent(13,1.040601);
   hnueCCinFV_stack_9->SetBinContent(14,1.547836);
   hnueCCinFV_stack_9->SetBinContent(15,1.399505);
   hnueCCinFV_stack_9->SetBinContent(16,0.6263647);
   hnueCCinFV_stack_9->SetBinContent(17,1.70874);
   hnueCCinFV_stack_9->SetBinContent(18,1.334041);
   hnueCCinFV_stack_9->SetBinContent(19,23.76279);
   hnueCCinFV_stack_9->SetBinError(0,1.673547);
   hnueCCinFV_stack_9->SetBinError(1,0.4902419);
   hnueCCinFV_stack_9->SetBinError(2,0.4558864);
   hnueCCinFV_stack_9->SetBinError(3,0.3883491);
   hnueCCinFV_stack_9->SetBinError(4,0.3373297);
   hnueCCinFV_stack_9->SetBinError(5,0.3642283);
   hnueCCinFV_stack_9->SetBinError(6,0.3419366);
   hnueCCinFV_stack_9->SetBinError(7,0.3330476);
   hnueCCinFV_stack_9->SetBinError(8,0.2888225);
   hnueCCinFV_stack_9->SetBinError(9,0.3111582);
   hnueCCinFV_stack_9->SetBinError(10,0.3201696);
   hnueCCinFV_stack_9->SetBinError(11,0.2639637);
   hnueCCinFV_stack_9->SetBinError(12,0.4041373);
   hnueCCinFV_stack_9->SetBinError(13,0.252373);
   hnueCCinFV_stack_9->SetBinError(14,0.3326572);
   hnueCCinFV_stack_9->SetBinError(15,0.2899392);
   hnueCCinFV_stack_9->SetBinError(16,0.1851547);
   hnueCCinFV_stack_9->SetBinError(17,0.3062446);
   hnueCCinFV_stack_9->SetBinError(18,0.2762422);
   hnueCCinFV_stack_9->SetBinError(19,1.637455);
   hnueCCinFV_stack_9->SetEntries(2003);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_bnb_10_kine_pio_gap_low_all",18,0,90);
   hmcerror__2->SetBinContent(0,12593.05);
   hmcerror__2->SetBinContent(1,931.9343);
   hmcerror__2->SetBinContent(2,320.113);
   hmcerror__2->SetBinContent(3,327.312);
   hmcerror__2->SetBinContent(4,310.68);
   hmcerror__2->SetBinContent(5,294.5755);
   hmcerror__2->SetBinContent(6,258.4001);
   hmcerror__2->SetBinContent(7,242.0854);
   hmcerror__2->SetBinContent(8,222.294);
   hmcerror__2->SetBinContent(9,194.4442);
   hmcerror__2->SetBinContent(10,175.0313);
   hmcerror__2->SetBinContent(11,152.749);
   hmcerror__2->SetBinContent(12,142.0013);
   hmcerror__2->SetBinContent(13,132.1591);
   hmcerror__2->SetBinContent(14,116.6466);
   hmcerror__2->SetBinContent(15,101.9301);
   hmcerror__2->SetBinContent(16,98.88607);
   hmcerror__2->SetBinContent(17,98.91382);
   hmcerror__2->SetBinContent(18,87.54897);
   hmcerror__2->SetBinContent(19,1708.493);
   hmcerror__2->SetBinError(0,36.71901);
   hmcerror__2->SetBinError(1,145.3802);
   hmcerror__2->SetBinError(2,56.27172);
   hmcerror__2->SetBinError(3,55.32701);
   hmcerror__2->SetBinError(4,61.6493);
   hmcerror__2->SetBinError(5,47.93392);
   hmcerror__2->SetBinError(6,44.96398);
   hmcerror__2->SetBinError(7,39.98159);
   hmcerror__2->SetBinError(8,36.35308);
   hmcerror__2->SetBinError(9,31.50312);
   hmcerror__2->SetBinError(10,29.71822);
   hmcerror__2->SetBinError(11,25.81375);
   hmcerror__2->SetBinError(12,28.07666);
   hmcerror__2->SetBinError(13,22.44747);
   hmcerror__2->SetBinError(14,18.857);
   hmcerror__2->SetBinError(15,21.28213);
   hmcerror__2->SetBinError(16,19.34163);
   hmcerror__2->SetBinError(17,16.28407);
   hmcerror__2->SetBinError(18,16.85676);
   hmcerror__2->SetBinError(19,335.1553);
   hmcerror__2->SetEntries(16480.37);

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
   982,
   338,
   290,
   302,
   234,
   247,
   240,
   172,
   189,
   168,
   147,
   141,
   116,
   113,
   103,
   76,
   90,
   80};
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
   31.33688,
   18.38478,
   17.02939,
   17.37815,
   15.29706,
   15.71623,
   15.49193,
   13.11488,
   13.74773,
   12.96148,
   12.12436,
   11.87434,
   10.77033,
   10.63015,
   10.14889,
   8.8425,
   9.6093,
   9.0683};
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
   31.33688,
   18.38478,
   17.02939,
   17.37815,
   15.29706,
   15.71623,
   15.49193,
   13.11488,
   13.74773,
   12.96148,
   12.12436,
   11.87434,
   10.77033,
   10.63015,
   10.14889,
   8.6406,
   9.4079,
   8.8665};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,99);
   Graph_Graph3001->SetMinimum(60.44175);
   Graph_Graph3001->SetMaximum(1107.955);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.96#pm0.02(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.01/18","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 4028.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 91.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 563.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 82.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 316.9","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  500.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 1067.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 167.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 1385.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 33.5","F");

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
   TText *pt_LaTex = pt->AddText("generic_bnb_10_kine_pio_gap_low_all");
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
   0.1559984,
   0.1757871,
   0.1690345,
   0.1984334,
   0.162722,
   0.1740092,
   0.1651549,
   0.1635361,
   0.1620163,
   0.169788,
   0.1689945,
   0.1977211,
   0.1698518,
   0.1616592,
   0.2087915,
   0.1955951,
   0.1646289,
   0.1925409};
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
   0.1559984,
   0.1757871,
   0.1690345,
   0.1984334,
   0.162722,
   0.1740092,
   0.1651549,
   0.1635361,
   0.1620163,
   0.169788,
   0.1689945,
   0.1977211,
   0.1698518,
   0.1616592,
   0.2087915,
   0.1955951,
   0.1646289,
   0.1925409};
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
   0.1437935,
   0.1712445,
   0.1645094,
   0.1597093,
   0.1572043,
   0.162826,
   0.155239,
   0.153796,
   0.1536059,
   0.1543774,
   0.1475612,
   0.1474335,
   0.1492591,
   0.1407682,
   0.1563346,
   0.144833,
   0.1394859,
   0.1426612};
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
   0.1437935,
   0.1712445,
   0.1645094,
   0.1597093,
   0.1572043,
   0.162826,
   0.155239,
   0.153796,
   0.1536059,
   0.1543774,
   0.1475612,
   0.1474335,
   0.1492591,
   0.1407682,
   0.1563346,
   0.144833,
   0.1394859,
   0.1426612};
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
   1.053722,
   1.055877,
   0.8860049,
   0.9720613,
   0.7943633,
   0.9558821,
   0.9913857,
   0.7737502,
   0.9720012,
   0.9598282,
   0.9623629,
   0.9929488,
   0.8777296,
   0.9687379,
   1.010497,
   0.7685612,
   0.909883,
   0.9137744};
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
   0.03362563,
   0.05743215,
   0.052028,
   0.05593584,
   0.05192916,
   0.06082132,
   0.06399367,
   0.0589979,
   0.07070269,
   0.07405235,
   0.07937436,
   0.08362137,
   0.08149515,
   0.09113119,
   0.09956721,
   0.08942109,
   0.09714821,
   0.1035798};
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
   0.03362563,
   0.05743215,
   0.052028,
   0.05593584,
   0.05192916,
   0.06082132,
   0.06399367,
   0.0589979,
   0.07070269,
   0.07405235,
   0.07937436,
   0.08362137,
   0.08149515,
   0.09113119,
   0.09956721,
   0.08737934,
   0.09511209,
   0.1012748};
   grae = new TGraphAsymmErrors(18,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,99);
   Graph_Graph3004->SetMinimum(0.6357232);
   Graph_Graph3004->SetMaximum(1.156726);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_bnb_10_kine_pio_gap_low_all",18,0,90);

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
