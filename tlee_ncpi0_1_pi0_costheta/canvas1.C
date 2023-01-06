#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 10:30:52 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-22.90005,1.25641,2532.264);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__1->SetBinContent(1,170.9618);
   hmc__1->SetBinContent(2,129.2725);
   hmc__1->SetBinContent(3,121.9698);
   hmc__1->SetBinContent(4,112.2328);
   hmc__1->SetBinContent(5,110.242);
   hmc__1->SetBinContent(6,112.5201);
   hmc__1->SetBinContent(7,124.3371);
   hmc__1->SetBinContent(8,108.3894);
   hmc__1->SetBinContent(9,107.8922);
   hmc__1->SetBinContent(10,120.1226);
   hmc__1->SetBinContent(11,137.1925);
   hmc__1->SetBinContent(12,143.317);
   hmc__1->SetBinContent(13,158.5412);
   hmc__1->SetBinContent(14,176.8509);
   hmc__1->SetBinContent(15,185.0621);
   hmc__1->SetBinContent(16,197.6598);
   hmc__1->SetBinContent(17,227.2165);
   hmc__1->SetBinContent(18,250.5547);
   hmc__1->SetBinContent(19,297.4116);
   hmc__1->SetBinContent(20,352.9261);
   hmc__1->SetBinContent(21,431.459);
   hmc__1->SetBinContent(22,477.8641);
   hmc__1->SetBinContent(23,595.4026);
   hmc__1->SetBinContent(24,784.7033);
   hmc__1->SetBinContent(25,1145.003);
   hmc__1->SetBinError(1,46.4321);
   hmc__1->SetBinError(2,37.98467);
   hmc__1->SetBinError(3,38.60154);
   hmc__1->SetBinError(4,35.1981);
   hmc__1->SetBinError(5,37.73346);
   hmc__1->SetBinError(6,36.28943);
   hmc__1->SetBinError(7,35.89944);
   hmc__1->SetBinError(8,34.07584);
   hmc__1->SetBinError(9,37.10473);
   hmc__1->SetBinError(10,41.77883);
   hmc__1->SetBinError(11,44.18297);
   hmc__1->SetBinError(12,45.74524);
   hmc__1->SetBinError(13,48.14682);
   hmc__1->SetBinError(14,51.17406);
   hmc__1->SetBinError(15,56.2965);
   hmc__1->SetBinError(16,61.98526);
   hmc__1->SetBinError(17,65.52924);
   hmc__1->SetBinError(18,76.04959);
   hmc__1->SetBinError(19,88.0012);
   hmc__1->SetBinError(20,102.7679);
   hmc__1->SetBinError(21,122.3026);
   hmc__1->SetBinError(22,134.222);
   hmc__1->SetBinError(23,153.9906);
   hmc__1->SetBinError(24,186.7064);
   hmc__1->SetBinError(25,263.7194);
   hmc__1->SetBinError(26,0.3895343);
   hmc__1->SetMinimum(-22.90005);
   hmc__1->SetMaximum(2404.506);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,-1,1);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(1202.253);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,6.375752);
   hbadmatch_stack_1->SetBinContent(2,2.984259);
   hbadmatch_stack_1->SetBinContent(3,4.561297);
   hbadmatch_stack_1->SetBinContent(4,4.071596);
   hbadmatch_stack_1->SetBinContent(5,2.729503);
   hbadmatch_stack_1->SetBinContent(6,2.833937);
   hbadmatch_stack_1->SetBinContent(7,4.912241);
   hbadmatch_stack_1->SetBinContent(8,2.48624);
   hbadmatch_stack_1->SetBinContent(9,3.226947);
   hbadmatch_stack_1->SetBinContent(10,3.233574);
   hbadmatch_stack_1->SetBinContent(11,5.472236);
   hbadmatch_stack_1->SetBinContent(12,5.42541);
   hbadmatch_stack_1->SetBinContent(13,2.001411);
   hbadmatch_stack_1->SetBinContent(14,11.2045);
   hbadmatch_stack_1->SetBinContent(15,9.114668);
   hbadmatch_stack_1->SetBinContent(16,5.244975);
   hbadmatch_stack_1->SetBinContent(17,6.85887);
   hbadmatch_stack_1->SetBinContent(18,3.937829);
   hbadmatch_stack_1->SetBinContent(19,6.721245);
   hbadmatch_stack_1->SetBinContent(20,9.887562);
   hbadmatch_stack_1->SetBinContent(21,9.402291);
   hbadmatch_stack_1->SetBinContent(22,12.46341);
   hbadmatch_stack_1->SetBinContent(23,11.86597);
   hbadmatch_stack_1->SetBinContent(24,14.01581);
   hbadmatch_stack_1->SetBinContent(25,22.42856);
   hbadmatch_stack_1->SetBinError(1,1.334104);
   hbadmatch_stack_1->SetBinError(2,0.9007844);
   hbadmatch_stack_1->SetBinError(3,1.874896);
   hbadmatch_stack_1->SetBinError(4,0.9853671);
   hbadmatch_stack_1->SetBinError(5,0.7411752);
   hbadmatch_stack_1->SetBinError(6,0.9094788);
   hbadmatch_stack_1->SetBinError(7,1.197572);
   hbadmatch_stack_1->SetBinError(8,0.7807579);
   hbadmatch_stack_1->SetBinError(9,0.8770282);
   hbadmatch_stack_1->SetBinError(10,0.9587746);
   hbadmatch_stack_1->SetBinError(11,1.29767);
   hbadmatch_stack_1->SetBinError(12,1.254544);
   hbadmatch_stack_1->SetBinError(13,0.6988333);
   hbadmatch_stack_1->SetBinError(14,2.408428);
   hbadmatch_stack_1->SetBinError(15,2.396059);
   hbadmatch_stack_1->SetBinError(16,1.487788);
   hbadmatch_stack_1->SetBinError(17,1.50809);
   hbadmatch_stack_1->SetBinError(18,1.107962);
   hbadmatch_stack_1->SetBinError(19,1.420573);
   hbadmatch_stack_1->SetBinError(20,1.666377);
   hbadmatch_stack_1->SetBinError(21,1.688682);
   hbadmatch_stack_1->SetBinError(22,1.89559);
   hbadmatch_stack_1->SetBinError(23,1.762088);
   hbadmatch_stack_1->SetBinError(24,1.94726);
   hbadmatch_stack_1->SetBinError(25,2.79508);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,20.58197);
   hext_stack_2->SetBinContent(2,14.39367);
   hext_stack_2->SetBinContent(3,12.53944);
   hext_stack_2->SetBinContent(4,11.14529);
   hext_stack_2->SetBinContent(5,11.89782);
   hext_stack_2->SetBinContent(6,14.12829);
   hext_stack_2->SetBinContent(7,23.8);
   hext_stack_2->SetBinContent(8,15.52686);
   hext_stack_2->SetBinContent(9,11.59938);
   hext_stack_2->SetBinContent(10,20.97258);
   hext_stack_2->SetBinContent(11,26.94747);
   hext_stack_2->SetBinContent(12,22.23709);
   hext_stack_2->SetBinContent(13,31.23405);
   hext_stack_2->SetBinContent(14,24.87976);
   hext_stack_2->SetBinContent(15,30.50747);
   hext_stack_2->SetBinContent(16,28.06629);
   hext_stack_2->SetBinContent(17,34.75776);
   hext_stack_2->SetBinContent(18,34.2546);
   hext_stack_2->SetBinContent(19,41.46523);
   hext_stack_2->SetBinContent(20,41.72179);
   hext_stack_2->SetBinContent(21,48.17824);
   hext_stack_2->SetBinContent(22,40.08386);
   hext_stack_2->SetBinContent(23,57.93497);
   hext_stack_2->SetBinContent(24,62.7678);
   hext_stack_2->SetBinContent(25,72.71647);
   hext_stack_2->SetBinError(1,3.23026);
   hext_stack_2->SetBinError(2,2.601045);
   hext_stack_2->SetBinError(3,2.378361);
   hext_stack_2->SetBinError(4,2.361774);
   hext_stack_2->SetBinError(5,2.290181);
   hext_stack_2->SetBinError(6,2.617719);
   hext_stack_2->SetBinError(7,3.457657);
   hext_stack_2->SetBinError(8,2.658231);
   hext_stack_2->SetBinError(9,2.161299);
   hext_stack_2->SetBinError(10,3.245128);
   hext_stack_2->SetBinError(11,3.466934);
   hext_stack_2->SetBinError(12,3.207968);
   hext_stack_2->SetBinError(13,3.956263);
   hext_stack_2->SetBinError(14,3.171883);
   hext_stack_2->SetBinError(15,3.93911);
   hext_stack_2->SetBinError(16,3.566902);
   hext_stack_2->SetBinError(17,4.026778);
   hext_stack_2->SetBinError(18,4.048695);
   hext_stack_2->SetBinError(19,4.447036);
   hext_stack_2->SetBinError(20,4.406685);
   hext_stack_2->SetBinError(21,4.760743);
   hext_stack_2->SetBinError(22,4.182493);
   hext_stack_2->SetBinError(23,5.11478);
   hext_stack_2->SetBinError(24,5.330025);
   hext_stack_2->SetBinError(25,5.775726);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,1.859947);
   hdirt_stack_3->SetBinContent(2,1.571755);
   hdirt_stack_3->SetBinContent(3,1.286685);
   hdirt_stack_3->SetBinContent(4,2.375425);
   hdirt_stack_3->SetBinContent(5,3.056999);
   hdirt_stack_3->SetBinContent(6,0.9178806);
   hdirt_stack_3->SetBinContent(7,2.040407);
   hdirt_stack_3->SetBinContent(8,1.20838);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,2.134555);
   hdirt_stack_3->SetBinContent(11,1.024993);
   hdirt_stack_3->SetBinContent(12,0.7724646);
   hdirt_stack_3->SetBinContent(13,1.669999);
   hdirt_stack_3->SetBinContent(14,1.175891);
   hdirt_stack_3->SetBinContent(15,4.217354);
   hdirt_stack_3->SetBinContent(16,2.895287);
   hdirt_stack_3->SetBinContent(17,1.749994);
   hdirt_stack_3->SetBinContent(18,2.622981);
   hdirt_stack_3->SetBinContent(19,3.673933);
   hdirt_stack_3->SetBinContent(20,3.706062);
   hdirt_stack_3->SetBinContent(21,5.442976);
   hdirt_stack_3->SetBinContent(22,7.867814);
   hdirt_stack_3->SetBinContent(23,4.710988);
   hdirt_stack_3->SetBinContent(24,6.352212);
   hdirt_stack_3->SetBinContent(25,8.258268);
   hdirt_stack_3->SetBinError(1,0.622822);
   hdirt_stack_3->SetBinError(2,0.5843581);
   hdirt_stack_3->SetBinError(3,0.5702957);
   hdirt_stack_3->SetBinError(4,0.8451927);
   hdirt_stack_3->SetBinError(5,1.224247);
   hdirt_stack_3->SetBinError(6,0.4460326);
   hdirt_stack_3->SetBinError(7,0.7567955);
   hdirt_stack_3->SetBinError(8,0.584084);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.786332);
   hdirt_stack_3->SetBinError(11,0.46088);
   hdirt_stack_3->SetBinError(12,0.3985935);
   hdirt_stack_3->SetBinError(13,0.7052886);
   hdirt_stack_3->SetBinError(14,0.4908689);
   hdirt_stack_3->SetBinError(15,1.365895);
   hdirt_stack_3->SetBinError(16,0.8888058);
   hdirt_stack_3->SetBinError(17,0.6953191);
   hdirt_stack_3->SetBinError(18,0.8593283);
   hdirt_stack_3->SetBinError(19,0.9860069);
   hdirt_stack_3->SetBinError(20,0.9251889);
   hdirt_stack_3->SetBinError(21,1.515482);
   hdirt_stack_3->SetBinError(22,1.487269);
   hdirt_stack_3->SetBinError(23,1.090446);
   hdirt_stack_3->SetBinError(24,1.398033);
   hdirt_stack_3->SetBinError(25,1.539562);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,23.01609);
   houtFV_stack_4->SetBinContent(2,15.91293);
   houtFV_stack_4->SetBinContent(3,14.89353);
   houtFV_stack_4->SetBinContent(4,14.4673);
   houtFV_stack_4->SetBinContent(5,14.05009);
   houtFV_stack_4->SetBinContent(6,13.21715);
   houtFV_stack_4->SetBinContent(7,13.98686);
   houtFV_stack_4->SetBinContent(8,11.30344);
   houtFV_stack_4->SetBinContent(9,14.5107);
   houtFV_stack_4->SetBinContent(10,10.31062);
   houtFV_stack_4->SetBinContent(11,12.81893);
   houtFV_stack_4->SetBinContent(12,14.73183);
   houtFV_stack_4->SetBinContent(13,15.64495);
   houtFV_stack_4->SetBinContent(14,16.71998);
   houtFV_stack_4->SetBinContent(15,17.48374);
   houtFV_stack_4->SetBinContent(16,16.11409);
   houtFV_stack_4->SetBinContent(17,22.14592);
   houtFV_stack_4->SetBinContent(18,27.33384);
   houtFV_stack_4->SetBinContent(19,30.68079);
   houtFV_stack_4->SetBinContent(20,37.22563);
   houtFV_stack_4->SetBinContent(21,46.17892);
   houtFV_stack_4->SetBinContent(22,54.24928);
   houtFV_stack_4->SetBinContent(23,63.72971);
   houtFV_stack_4->SetBinContent(24,72.21571);
   houtFV_stack_4->SetBinContent(25,86.86993);
   houtFV_stack_4->SetBinError(1,2.477252);
   houtFV_stack_4->SetBinError(2,2.002319);
   houtFV_stack_4->SetBinError(3,1.9772);
   houtFV_stack_4->SetBinError(4,1.841492);
   houtFV_stack_4->SetBinError(5,1.917837);
   houtFV_stack_4->SetBinError(6,1.781646);
   houtFV_stack_4->SetBinError(7,1.833059);
   houtFV_stack_4->SetBinError(8,2.060524);
   houtFV_stack_4->SetBinError(9,1.904213);
   houtFV_stack_4->SetBinError(10,1.570032);
   houtFV_stack_4->SetBinError(11,1.697632);
   houtFV_stack_4->SetBinError(12,1.896915);
   houtFV_stack_4->SetBinError(13,1.989123);
   houtFV_stack_4->SetBinError(14,2.061012);
   houtFV_stack_4->SetBinError(15,2.078325);
   houtFV_stack_4->SetBinError(16,2.023745);
   houtFV_stack_4->SetBinError(17,2.34403);
   houtFV_stack_4->SetBinError(18,2.594427);
   houtFV_stack_4->SetBinError(19,2.776637);
   houtFV_stack_4->SetBinError(20,3.166406);
   houtFV_stack_4->SetBinError(21,3.305432);
   houtFV_stack_4->SetBinError(22,3.85743);
   houtFV_stack_4->SetBinError(23,3.924673);
   houtFV_stack_4->SetBinError(24,4.234507);
   houtFV_stack_4->SetBinError(25,4.812417);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.556862);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.832658);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6169326);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4067726);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4884582);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3829027);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5372179);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4611463);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3242805);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4750292);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2487242);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3731599);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.06912473);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2162888);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.341581);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.8421998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5840256);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.8004737);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.18961);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.687491);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.004708);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,9.32672);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,21.77064);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,63.94727);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6366443);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5885671);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2237344);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1441729);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1828214);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2251062);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2222097);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2949348);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1720732);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2201277);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2047515);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2313363);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1268054);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.04959411);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.08903002);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1842154);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3946496);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2071292);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3806494);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5885959);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6611003);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6017383);
   hNCpi0inFVcoh_stack_5->SetBinError(23,1.153365);
   hNCpi0inFVcoh_stack_5->SetBinError(24,1.740845);
   hNCpi0inFVcoh_stack_5->SetBinError(25,2.971136);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.7348598);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5566646);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4101891);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1795284);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1259679);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3973781);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2613867);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1865496);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1652912);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2504964);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1650914);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.559589);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1274914);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8291763);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1940722);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3044873);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1674925);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3749673);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.8424131);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.8649342);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6915556);
   hNCpi0inFVqe_stack_6->SetBinContent(22,2.312278);
   hNCpi0inFVqe_stack_6->SetBinContent(23,2.836675);
   hNCpi0inFVqe_stack_6->SetBinContent(24,2.179381);
   hNCpi0inFVqe_stack_6->SetBinContent(25,3.16393);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2973458);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.174684);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1949916);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05873101);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05451039);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1510383);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1373904);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1271066);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06089272);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1206778);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05168982);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2461002);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.06037754);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2515102);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.08039634);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.146411);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.06333641);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1516292);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2345091);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2381134);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1783925);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.4787792);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.5784686);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.4400621);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.5193883);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,43.03185);
   hNCpi0inFVres_stack_7->SetBinContent(2,36.82408);
   hNCpi0inFVres_stack_7->SetBinContent(3,34.14576);
   hNCpi0inFVres_stack_7->SetBinContent(4,33.68495);
   hNCpi0inFVres_stack_7->SetBinContent(5,35.33533);
   hNCpi0inFVres_stack_7->SetBinContent(6,34.67212);
   hNCpi0inFVres_stack_7->SetBinContent(7,34.88035);
   hNCpi0inFVres_stack_7->SetBinContent(8,32.9824);
   hNCpi0inFVres_stack_7->SetBinContent(9,36.33409);
   hNCpi0inFVres_stack_7->SetBinContent(10,36.07177);
   hNCpi0inFVres_stack_7->SetBinContent(11,39.09703);
   hNCpi0inFVres_stack_7->SetBinContent(12,46.98164);
   hNCpi0inFVres_stack_7->SetBinContent(13,48.05772);
   hNCpi0inFVres_stack_7->SetBinContent(14,55.19814);
   hNCpi0inFVres_stack_7->SetBinContent(15,61.81613);
   hNCpi0inFVres_stack_7->SetBinContent(16,67.1101);
   hNCpi0inFVres_stack_7->SetBinContent(17,77.01003);
   hNCpi0inFVres_stack_7->SetBinContent(18,86.94398);
   hNCpi0inFVres_stack_7->SetBinContent(19,101.8565);
   hNCpi0inFVres_stack_7->SetBinContent(20,125.0407);
   hNCpi0inFVres_stack_7->SetBinContent(21,152.5667);
   hNCpi0inFVres_stack_7->SetBinContent(22,168.6081);
   hNCpi0inFVres_stack_7->SetBinContent(23,203.5347);
   hNCpi0inFVres_stack_7->SetBinContent(24,256.0732);
   hNCpi0inFVres_stack_7->SetBinContent(25,324.3087);
   hNCpi0inFVres_stack_7->SetBinError(1,2.187447);
   hNCpi0inFVres_stack_7->SetBinError(2,1.931486);
   hNCpi0inFVres_stack_7->SetBinError(3,1.842539);
   hNCpi0inFVres_stack_7->SetBinError(4,1.814207);
   hNCpi0inFVres_stack_7->SetBinError(5,1.889981);
   hNCpi0inFVres_stack_7->SetBinError(6,1.894237);
   hNCpi0inFVres_stack_7->SetBinError(7,1.87776);
   hNCpi0inFVres_stack_7->SetBinError(8,1.716648);
   hNCpi0inFVres_stack_7->SetBinError(9,1.934002);
   hNCpi0inFVres_stack_7->SetBinError(10,1.776678);
   hNCpi0inFVres_stack_7->SetBinError(11,1.858565);
   hNCpi0inFVres_stack_7->SetBinError(12,2.190822);
   hNCpi0inFVres_stack_7->SetBinError(13,2.183256);
   hNCpi0inFVres_stack_7->SetBinError(14,2.319273);
   hNCpi0inFVres_stack_7->SetBinError(15,2.498814);
   hNCpi0inFVres_stack_7->SetBinError(16,2.628037);
   hNCpi0inFVres_stack_7->SetBinError(17,2.875237);
   hNCpi0inFVres_stack_7->SetBinError(18,2.934815);
   hNCpi0inFVres_stack_7->SetBinError(19,3.291224);
   hNCpi0inFVres_stack_7->SetBinError(20,3.654966);
   hNCpi0inFVres_stack_7->SetBinError(21,4.0964);
   hNCpi0inFVres_stack_7->SetBinError(22,4.221363);
   hNCpi0inFVres_stack_7->SetBinError(23,4.728076);
   hNCpi0inFVres_stack_7->SetBinError(24,5.259576);
   hNCpi0inFVres_stack_7->SetBinError(25,6.185984);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.24643);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.010612);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.590707);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.324043);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.913714);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.299656);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.047872);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.916501);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.591275);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.199223);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.681498);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.759178);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.435285);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.731065);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.581619);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.22439);
   hNCpi0inFVdis_stack_8->SetBinContent(17,12.28863);
   hNCpi0inFVdis_stack_8->SetBinContent(18,12.31435);
   hNCpi0inFVdis_stack_8->SetBinContent(19,20.09331);
   hNCpi0inFVdis_stack_8->SetBinContent(20,21.4824);
   hNCpi0inFVdis_stack_8->SetBinContent(21,26.13614);
   hNCpi0inFVdis_stack_8->SetBinContent(22,35.67106);
   hNCpi0inFVdis_stack_8->SetBinContent(23,46.49511);
   hNCpi0inFVdis_stack_8->SetBinContent(24,68.37924);
   hNCpi0inFVdis_stack_8->SetBinContent(25,108.9149);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.169652);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9873751);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8458478);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7702529);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.044245);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7854804);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6392485);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8013672);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8595727);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.055067);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8797748);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7448301);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.922167);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9861303);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8928819);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.018823);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.06431);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.107261);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.475182);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.754186);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.670527);
   hNCpi0inFVdis_stack_8->SetBinError(22,2.114913);
   hNCpi0inFVdis_stack_8->SetBinError(23,2.205416);
   hNCpi0inFVdis_stack_8->SetBinError(24,3.115331);
   hNCpi0inFVdis_stack_8->SetBinError(25,3.846171);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.171235);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.03762904);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1500435);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.03613899);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1874616);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.3329607);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1304766);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02660775);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1330695);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02557584);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1200371);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1559521);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,28.98554);
   hCCpi0inFV_stack_10->SetBinContent(2,20.09621);
   hCCpi0inFV_stack_10->SetBinContent(3,23.79409);
   hCCpi0inFV_stack_10->SetBinContent(4,18.18792);
   hCCpi0inFV_stack_10->SetBinContent(5,15.03897);
   hCCpi0inFV_stack_10->SetBinContent(6,17.87548);
   hCCpi0inFV_stack_10->SetBinContent(7,19.78146);
   hCCpi0inFV_stack_10->SetBinContent(8,16.76938);
   hCCpi0inFV_stack_10->SetBinContent(9,16.79531);
   hCCpi0inFV_stack_10->SetBinContent(10,17.71346);
   hCCpi0inFV_stack_10->SetBinContent(11,17.88554);
   hCCpi0inFV_stack_10->SetBinContent(12,21.07649);
   hCCpi0inFV_stack_10->SetBinContent(13,21.9844);
   hCCpi0inFV_stack_10->SetBinContent(14,29.57491);
   hCCpi0inFV_stack_10->SetBinContent(15,22.09555);
   hCCpi0inFV_stack_10->SetBinContent(16,30.21474);
   hCCpi0inFV_stack_10->SetBinContent(17,33.42004);
   hCCpi0inFV_stack_10->SetBinContent(18,34.76988);
   hCCpi0inFV_stack_10->SetBinContent(19,42.28245);
   hCCpi0inFV_stack_10->SetBinContent(20,49.26797);
   hCCpi0inFV_stack_10->SetBinContent(21,71.40955);
   hCCpi0inFV_stack_10->SetBinContent(22,76.77219);
   hCCpi0inFV_stack_10->SetBinContent(23,102.0949);
   hCCpi0inFV_stack_10->SetBinContent(24,138.1231);
   hCCpi0inFV_stack_10->SetBinContent(25,209.0076);
   hCCpi0inFV_stack_10->SetBinError(1,2.661646);
   hCCpi0inFV_stack_10->SetBinError(2,2.257262);
   hCCpi0inFV_stack_10->SetBinError(3,2.41502);
   hCCpi0inFV_stack_10->SetBinError(4,2.170156);
   hCCpi0inFV_stack_10->SetBinError(5,1.911643);
   hCCpi0inFV_stack_10->SetBinError(6,2.008369);
   hCCpi0inFV_stack_10->SetBinError(7,2.237305);
   hCCpi0inFV_stack_10->SetBinError(8,1.998357);
   hCCpi0inFV_stack_10->SetBinError(9,2.033218);
   hCCpi0inFV_stack_10->SetBinError(10,2.141541);
   hCCpi0inFV_stack_10->SetBinError(11,2.028215);
   hCCpi0inFV_stack_10->SetBinError(12,2.285862);
   hCCpi0inFV_stack_10->SetBinError(13,2.317741);
   hCCpi0inFV_stack_10->SetBinError(14,2.720581);
   hCCpi0inFV_stack_10->SetBinError(15,2.347525);
   hCCpi0inFV_stack_10->SetBinError(16,2.827313);
   hCCpi0inFV_stack_10->SetBinError(17,2.905197);
   hCCpi0inFV_stack_10->SetBinError(18,2.960069);
   hCCpi0inFV_stack_10->SetBinError(19,3.278395);
   hCCpi0inFV_stack_10->SetBinError(20,3.515926);
   hCCpi0inFV_stack_10->SetBinError(21,4.31308);
   hCCpi0inFV_stack_10->SetBinError(22,4.385897);
   hCCpi0inFV_stack_10->SetBinError(23,5.090889);
   hCCpi0inFV_stack_10->SetBinError(24,5.909668);
   hCCpi0inFV_stack_10->SetBinError(25,7.287774);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,15.34031);
   hNCinFV_stack_11->SetBinContent(2,11.49841);
   hNCinFV_stack_11->SetBinContent(3,10.77692);
   hNCinFV_stack_11->SetBinContent(4,8.683918);
   hNCinFV_stack_11->SetBinContent(5,7.312513);
   hNCinFV_stack_11->SetBinContent(6,9.227087);
   hNCinFV_stack_11->SetBinContent(7,8.135935);
   hNCinFV_stack_11->SetBinContent(8,6.725032);
   hNCinFV_stack_11->SetBinContent(9,8.412774);
   hNCinFV_stack_11->SetBinContent(10,3.389729);
   hNCinFV_stack_11->SetBinContent(11,8.753078);
   hNCinFV_stack_11->SetBinContent(12,7.452484);
   hNCinFV_stack_11->SetBinContent(13,8.759573);
   hNCinFV_stack_11->SetBinContent(14,9.669239);
   hNCinFV_stack_11->SetBinContent(15,9.761353);
   hNCinFV_stack_11->SetBinContent(16,10.80475);
   hNCinFV_stack_11->SetBinContent(17,11.59506);
   hNCinFV_stack_11->SetBinContent(18,14.85702);
   hNCinFV_stack_11->SetBinContent(19,19.51498);
   hNCinFV_stack_11->SetBinContent(20,24.19283);
   hNCinFV_stack_11->SetBinContent(21,25.07711);
   hNCinFV_stack_11->SetBinContent(22,31.05777);
   hNCinFV_stack_11->SetBinContent(23,48.58331);
   hNCinFV_stack_11->SetBinContent(24,74.94654);
   hNCinFV_stack_11->SetBinContent(25,120.7132);
   hNCinFV_stack_11->SetBinError(1,2.025573);
   hNCinFV_stack_11->SetBinError(2,1.699343);
   hNCinFV_stack_11->SetBinError(3,1.744775);
   hNCinFV_stack_11->SetBinError(4,1.458154);
   hNCinFV_stack_11->SetBinError(5,1.428203);
   hNCinFV_stack_11->SetBinError(6,1.528012);
   hNCinFV_stack_11->SetBinError(7,1.634371);
   hNCinFV_stack_11->SetBinError(8,1.252117);
   hNCinFV_stack_11->SetBinError(9,1.549924);
   hNCinFV_stack_11->SetBinError(10,0.8263351);
   hNCinFV_stack_11->SetBinError(11,1.530788);
   hNCinFV_stack_11->SetBinError(12,1.397547);
   hNCinFV_stack_11->SetBinError(13,1.611657);
   hNCinFV_stack_11->SetBinError(14,1.643939);
   hNCinFV_stack_11->SetBinError(15,1.493473);
   hNCinFV_stack_11->SetBinError(16,1.730102);
   hNCinFV_stack_11->SetBinError(17,1.823014);
   hNCinFV_stack_11->SetBinError(18,2.18262);
   hNCinFV_stack_11->SetBinError(19,2.402793);
   hNCinFV_stack_11->SetBinError(20,2.611782);
   hNCinFV_stack_11->SetBinError(21,2.770893);
   hNCinFV_stack_11->SetBinError(22,2.887074);
   hNCinFV_stack_11->SetBinError(23,3.8266);
   hNCinFV_stack_11->SetBinError(24,4.751341);
   hNCinFV_stack_11->SetBinError(25,6.293582);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,16.77042);
   hnumuCCinFV_stack_12->SetBinContent(2,14.19467);
   hnumuCCinFV_stack_12->SetBinContent(3,11.10448);
   hnumuCCinFV_stack_12->SetBinContent(4,11.19252);
   hnumuCCinFV_stack_12->SetBinContent(5,10.43274);
   hnumuCCinFV_stack_12->SetBinContent(6,11.92514);
   hnumuCCinFV_stack_12->SetBinContent(7,9.928626);
   hnumuCCinFV_stack_12->SetBinContent(8,14.56782);
   hnumuCCinFV_stack_12->SetBinContent(9,8.868292);
   hnumuCCinFV_stack_12->SetBinContent(10,17.33396);
   hnumuCCinFV_stack_12->SetBinContent(11,15.87181);
   hnumuCCinFV_stack_12->SetBinContent(12,16.75261);
   hnumuCCinFV_stack_12->SetBinContent(13,21.30449);
   hnumuCCinFV_stack_12->SetBinContent(14,19.53884);
   hnumuCCinFV_stack_12->SetBinContent(15,20.38327);
   hnumuCCinFV_stack_12->SetBinContent(16,25.01379);
   hnumuCCinFV_stack_12->SetBinContent(17,25.70386);
   hnumuCCinFV_stack_12->SetBinContent(18,28.40593);
   hnumuCCinFV_stack_12->SetBinContent(19,28.64248);
   hnumuCCinFV_stack_12->SetBinContent(20,35.96596);
   hnumuCCinFV_stack_12->SetBinContent(21,41.55978);
   hnumuCCinFV_stack_12->SetBinContent(22,42.80315);
   hnumuCCinFV_stack_12->SetBinContent(23,40.70744);
   hnumuCCinFV_stack_12->SetBinContent(24,64.58308);
   hnumuCCinFV_stack_12->SetBinContent(25,100.2061);
   hnumuCCinFV_stack_12->SetBinError(1,2.087157);
   hnumuCCinFV_stack_12->SetBinError(2,2.016362);
   hnumuCCinFV_stack_12->SetBinError(3,1.744989);
   hnumuCCinFV_stack_12->SetBinError(4,2.031648);
   hnumuCCinFV_stack_12->SetBinError(5,1.683497);
   hnumuCCinFV_stack_12->SetBinError(6,2.106678);
   hnumuCCinFV_stack_12->SetBinError(7,1.81873);
   hnumuCCinFV_stack_12->SetBinError(8,2.232568);
   hnumuCCinFV_stack_12->SetBinError(9,1.563093);
   hnumuCCinFV_stack_12->SetBinError(10,2.7617);
   hnumuCCinFV_stack_12->SetBinError(11,2.20547);
   hnumuCCinFV_stack_12->SetBinError(12,2.565505);
   hnumuCCinFV_stack_12->SetBinError(13,2.692033);
   hnumuCCinFV_stack_12->SetBinError(14,2.362836);
   hnumuCCinFV_stack_12->SetBinError(15,2.753161);
   hnumuCCinFV_stack_12->SetBinError(16,2.921325);
   hnumuCCinFV_stack_12->SetBinError(17,2.895035);
   hnumuCCinFV_stack_12->SetBinError(18,3.165753);
   hnumuCCinFV_stack_12->SetBinError(19,2.799746);
   hnumuCCinFV_stack_12->SetBinError(20,4.669106);
   hnumuCCinFV_stack_12->SetBinError(21,3.685956);
   hnumuCCinFV_stack_12->SetBinError(22,3.608689);
   hnumuCCinFV_stack_12->SetBinError(23,3.440764);
   hnumuCCinFV_stack_12->SetBinError(24,4.796287);
   hnumuCCinFV_stack_12->SetBinError(25,5.729044);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.451077);
   hnueCCinFV_stack_13->SetBinContent(2,1.396617);
   hnueCCinFV_stack_13->SetBinContent(3,1.231439);
   hnueCCinFV_stack_13->SetBinContent(4,0.497884);
   hnueCCinFV_stack_13->SetBinContent(5,1.85986);
   hnueCCinFV_stack_13->SetBinContent(6,0.6430945);
   hnueCCinFV_stack_13->SetBinContent(7,1.006494);
   hnueCCinFV_stack_13->SetBinContent(8,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(9,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(11,1.226073);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.6905964);
   hnueCCinFV_stack_13->SetBinContent(16,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(17,0.5054118);
   hnueCCinFV_stack_13->SetBinContent(18,4.117669);
   hnueCCinFV_stack_13->SetBinContent(19,0.8038652);
   hnueCCinFV_stack_13->SetBinContent(20,1.230572);
   hnueCCinFV_stack_13->SetBinContent(21,2.110108);
   hnueCCinFV_stack_13->SetBinContent(22,1.917778);
   hnueCCinFV_stack_13->SetBinContent(23,3.546024);
   hnueCCinFV_stack_13->SetBinContent(24,3.109176);
   hnueCCinFV_stack_13->SetBinContent(25,24.1348);
   hnueCCinFV_stack_13->SetBinError(1,0.7092219);
   hnueCCinFV_stack_13->SetBinError(2,0.528252);
   hnueCCinFV_stack_13->SetBinError(3,0.5552317);
   hnueCCinFV_stack_13->SetBinError(4,0.3520617);
   hnueCCinFV_stack_13->SetBinError(5,1.1719);
   hnueCCinFV_stack_13->SetBinError(6,0.4552547);
   hnueCCinFV_stack_13->SetBinError(7,0.5976004);
   hnueCCinFV_stack_13->SetBinError(8,0.2556436);
   hnueCCinFV_stack_13->SetBinError(9,0.5946997);
   hnueCCinFV_stack_13->SetBinError(11,0.56795);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.4010541);
   hnueCCinFV_stack_13->SetBinError(16,0.2998007);
   hnueCCinFV_stack_13->SetBinError(17,0.3573868);
   hnueCCinFV_stack_13->SetBinError(18,1.585259);
   hnueCCinFV_stack_13->SetBinError(19,0.4023665);
   hnueCCinFV_stack_13->SetBinError(20,0.655428);
   hnueCCinFV_stack_13->SetBinError(21,0.7969378);
   hnueCCinFV_stack_13->SetBinError(22,0.7466958);
   hnueCCinFV_stack_13->SetBinError(23,1.091751);
   hnueCCinFV_stack_13->SetBinError(24,0.8517069);
   hnueCCinFV_stack_13->SetBinError(25,3.590721);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__2->SetBinContent(1,170.9618);
   hmcerror__2->SetBinContent(2,129.2725);
   hmcerror__2->SetBinContent(3,121.9698);
   hmcerror__2->SetBinContent(4,112.2328);
   hmcerror__2->SetBinContent(5,110.242);
   hmcerror__2->SetBinContent(6,112.5201);
   hmcerror__2->SetBinContent(7,124.3371);
   hmcerror__2->SetBinContent(8,108.3894);
   hmcerror__2->SetBinContent(9,107.8922);
   hmcerror__2->SetBinContent(10,120.1226);
   hmcerror__2->SetBinContent(11,137.1925);
   hmcerror__2->SetBinContent(12,143.317);
   hmcerror__2->SetBinContent(13,158.5412);
   hmcerror__2->SetBinContent(14,176.8509);
   hmcerror__2->SetBinContent(15,185.0621);
   hmcerror__2->SetBinContent(16,197.6598);
   hmcerror__2->SetBinContent(17,227.2165);
   hmcerror__2->SetBinContent(18,250.5547);
   hmcerror__2->SetBinContent(19,297.4116);
   hmcerror__2->SetBinContent(20,352.9261);
   hmcerror__2->SetBinContent(21,431.459);
   hmcerror__2->SetBinContent(22,477.8641);
   hmcerror__2->SetBinContent(23,595.4026);
   hmcerror__2->SetBinContent(24,784.7033);
   hmcerror__2->SetBinContent(25,1145.003);
   hmcerror__2->SetBinError(1,46.4321);
   hmcerror__2->SetBinError(2,37.98467);
   hmcerror__2->SetBinError(3,38.60154);
   hmcerror__2->SetBinError(4,35.1981);
   hmcerror__2->SetBinError(5,37.73346);
   hmcerror__2->SetBinError(6,36.28943);
   hmcerror__2->SetBinError(7,35.89944);
   hmcerror__2->SetBinError(8,34.07584);
   hmcerror__2->SetBinError(9,37.10473);
   hmcerror__2->SetBinError(10,41.77883);
   hmcerror__2->SetBinError(11,44.18297);
   hmcerror__2->SetBinError(12,45.74524);
   hmcerror__2->SetBinError(13,48.14682);
   hmcerror__2->SetBinError(14,51.17406);
   hmcerror__2->SetBinError(15,56.2965);
   hmcerror__2->SetBinError(16,61.98526);
   hmcerror__2->SetBinError(17,65.52924);
   hmcerror__2->SetBinError(18,76.04959);
   hmcerror__2->SetBinError(19,88.0012);
   hmcerror__2->SetBinError(20,102.7679);
   hmcerror__2->SetBinError(21,122.3026);
   hmcerror__2->SetBinError(22,134.222);
   hmcerror__2->SetBinError(23,153.9906);
   hmcerror__2->SetBinError(24,186.7064);
   hmcerror__2->SetBinError(25,263.7194);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3001[25] = {
   156,
   125,
   103,
   118,
   99,
   120,
   113,
   124,
   123,
   144,
   130,
   127,
   135,
   150,
   169,
   174,
   224,
   239,
   247,
   339,
   378,
   468,
   590,
   778,
   1071};
   Double_t _felx3001[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3001[25] = {
   12.49,
   11.18034,
   10.14889,
   10.86278,
   10.0712,
   10.95445,
   10.63015,
   11.13553,
   11.09054,
   12,
   11.40175,
   11.26943,
   11.61895,
   12.24745,
   13,
   13.19091,
   14.96663,
   15.45962,
   15.71623,
   18.41195,
   19.44222,
   21.63331,
   24.28992,
   27.89265,
   32.72614};
   Double_t _fehx3001[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3001[25] = {
   12.49,
   11.18034,
   10.14889,
   10.86278,
   9.87,
   10.95445,
   10.63015,
   11.13553,
   11.09054,
   12,
   11.40175,
   11.26943,
   11.61895,
   12.24745,
   13,
   13.19091,
   14.96663,
   15.45962,
   15.71623,
   18.41195,
   19.44222,
   21.63331,
   24.28992,
   27.89265,
   32.72614};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-1.2,1.2);
   Graph_Graph3001->SetMinimum(80.03592);
   Graph_Graph3001->SetMaximum(1205.206);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.2/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3002[25] = {
   0.2715934,
   0.293834,
   0.3164845,
   0.3136168,
   0.3422785,
   0.322515,
   0.2887267,
   0.3143836,
   0.3439056,
   0.3478015,
   0.322051,
   0.3191893,
   0.3036865,
   0.2893627,
   0.3042033,
   0.3135957,
   0.2884,
   0.3035249,
   0.2958903,
   0.2911881,
   0.2834628,
   0.2808789,
   0.2586327,
   0.2379324,
   0.2303221};
   Double_t _fehx3002[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3002[25] = {
   0.2715934,
   0.293834,
   0.3164845,
   0.3136168,
   0.3422785,
   0.322515,
   0.2887267,
   0.3143836,
   0.3439056,
   0.3478015,
   0.322051,
   0.3191893,
   0.3036865,
   0.2893627,
   0.3042033,
   0.3135957,
   0.2884,
   0.3035249,
   0.2958903,
   0.2911881,
   0.2834628,
   0.2808789,
   0.2586327,
   0.2379324,
   0.2303221};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-1.2,1.2);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} cos #theta");
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
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
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3003[25] = {
   0.2436317,
   0.2535912,
   0.2592265,
   0.2764637,
   0.2922875,
   0.2841622,
   0.2556132,
   0.2747154,
   0.2884944,
   0.2783415,
   0.2731613,
   0.2919817,
   0.2810292,
   0.2687249,
   0.2845318,
   0.288238,
   0.2727143,
   0.2886397,
   0.2863439,
   0.2765819,
   0.2662414,
   0.2638425,
   0.2424402,
   0.2276002,
   0.2117901};
   Double_t _fehx3003[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3003[25] = {
   0.2436317,
   0.2535912,
   0.2592265,
   0.2764637,
   0.2922875,
   0.2841622,
   0.2556132,
   0.2747154,
   0.2884944,
   0.2783415,
   0.2731613,
   0.2919817,
   0.2810292,
   0.2687249,
   0.2845318,
   0.288238,
   0.2727143,
   0.2886397,
   0.2863439,
   0.2765819,
   0.2662414,
   0.2638425,
   0.2424402,
   0.2276002,
   0.2117901};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-1.2,1.2);
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
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3004[25] = {
   0.9124844,
   0.9669494,
   0.8444716,
   1.051386,
   0.8980246,
   1.066476,
   0.9088199,
   1.144024,
   1.140027,
   1.198775,
   0.9475738,
   0.8861477,
   0.8515136,
   0.8481719,
   0.9132069,
   0.8803005,
   0.9858439,
   0.9538835,
   0.8304989,
   0.9605409,
   0.8760971,
   0.9793579,
   0.9909262,
   0.9914575,
   0.935369};
   Double_t _felx3004[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3004[25] = {
   0.07305722,
   0.08648658,
   0.08320826,
   0.0967879,
   0.0913554,
   0.09735548,
   0.08549458,
   0.1027363,
   0.1027928,
   0.09989791,
   0.08310772,
   0.07863289,
   0.07328662,
   0.06925295,
   0.07024668,
   0.06673541,
   0.06586946,
   0.06170159,
   0.05284338,
   0.05216942,
   0.04506157,
   0.04527083,
   0.04079578,
   0.03554547,
   0.02858171};
   Double_t _fehx3004[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3004[25] = {
   0.07305722,
   0.08648658,
   0.08320826,
   0.0967879,
   0.08953033,
   0.09735548,
   0.08549458,
   0.1027363,
   0.1027928,
   0.09989791,
   0.08310772,
   0.07863289,
   0.07328662,
   0.06925295,
   0.07024668,
   0.06673541,
   0.06586946,
   0.06170159,
   0.05284338,
   0.05216942,
   0.04506157,
   0.04527083,
   0.04079578,
   0.03554547,
   0.02858171};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0.7075224);
   Graph_Graph3004->SetMaximum(1.352414);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
