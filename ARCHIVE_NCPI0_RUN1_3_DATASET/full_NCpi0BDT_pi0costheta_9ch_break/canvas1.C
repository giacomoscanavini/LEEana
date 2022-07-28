#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sun Jun  5 00:28:02 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-22.84495,1.25641,2526.17);
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
   hmc__1->SetBinContent(1,182.3726);
   hmc__1->SetBinContent(2,141.5844);
   hmc__1->SetBinContent(3,134.9303);
   hmc__1->SetBinContent(4,125.0808);
   hmc__1->SetBinContent(5,122.7974);
   hmc__1->SetBinContent(6,125.4037);
   hmc__1->SetBinContent(7,136.5294);
   hmc__1->SetBinContent(8,121.6734);
   hmc__1->SetBinContent(9,122.5317);
   hmc__1->SetBinContent(10,135.1806);
   hmc__1->SetBinContent(11,153.9102);
   hmc__1->SetBinContent(12,162.2203);
   hmc__1->SetBinContent(13,176.1872);
   hmc__1->SetBinContent(14,196.4164);
   hmc__1->SetBinContent(15,205.3737);
   hmc__1->SetBinContent(16,219.8671);
   hmc__1->SetBinContent(17,249.7223);
   hmc__1->SetBinContent(18,274.1346);
   hmc__1->SetBinContent(19,322.5549);
   hmc__1->SetBinContent(20,382.6628);
   hmc__1->SetBinContent(21,462.3211);
   hmc__1->SetBinContent(22,515.5724);
   hmc__1->SetBinContent(23,629.9107);
   hmc__1->SetBinContent(24,823.4131);
   hmc__1->SetBinContent(25,1142.247);
   hmc__1->SetBinError(1,37.39766);
   hmc__1->SetBinError(2,30.14087);
   hmc__1->SetBinError(3,28.04855);
   hmc__1->SetBinError(4,26.64553);
   hmc__1->SetBinError(5,26.38214);
   hmc__1->SetBinError(6,27.20954);
   hmc__1->SetBinError(7,26.12181);
   hmc__1->SetBinError(8,24.40427);
   hmc__1->SetBinError(9,26.48776);
   hmc__1->SetBinError(10,26.92482);
   hmc__1->SetBinError(11,30.21325);
   hmc__1->SetBinError(12,33.54956);
   hmc__1->SetBinError(13,36.89403);
   hmc__1->SetBinError(14,40.03401);
   hmc__1->SetBinError(15,45.40693);
   hmc__1->SetBinError(16,51.19563);
   hmc__1->SetBinError(17,59.649);
   hmc__1->SetBinError(18,68.70481);
   hmc__1->SetBinError(19,80.63298);
   hmc__1->SetBinError(20,93.53883);
   hmc__1->SetBinError(21,109.4406);
   hmc__1->SetBinError(22,117.833);
   hmc__1->SetBinError(23,132.1941);
   hmc__1->SetBinError(24,160.4818);
   hmc__1->SetBinError(25,225.4869);
   hmc__1->SetBinError(26,0.3895343);
   hmc__1->SetMinimum(-22.84495);
   hmc__1->SetMaximum(2398.72);
   hmc__1->SetEntries(7171.878);
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
   hs1_stack_1->SetMaximum(1199.36);
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
   hbadmatch_stack_1->SetBinContent(1,6.868618);
   hbadmatch_stack_1->SetBinContent(2,3.146648);
   hbadmatch_stack_1->SetBinContent(3,4.965662);
   hbadmatch_stack_1->SetBinContent(4,4.071596);
   hbadmatch_stack_1->SetBinContent(5,2.772929);
   hbadmatch_stack_1->SetBinContent(6,3.276906);
   hbadmatch_stack_1->SetBinContent(7,4.875147);
   hbadmatch_stack_1->SetBinContent(8,2.65743);
   hbadmatch_stack_1->SetBinContent(9,3.772153);
   hbadmatch_stack_1->SetBinContent(10,3.407796);
   hbadmatch_stack_1->SetBinContent(11,5.450988);
   hbadmatch_stack_1->SetBinContent(12,5.597202);
   hbadmatch_stack_1->SetBinContent(13,2.350541);
   hbadmatch_stack_1->SetBinContent(14,11.53122);
   hbadmatch_stack_1->SetBinContent(15,9.270813);
   hbadmatch_stack_1->SetBinContent(16,5.78988);
   hbadmatch_stack_1->SetBinContent(17,6.542396);
   hbadmatch_stack_1->SetBinContent(18,4.007742);
   hbadmatch_stack_1->SetBinContent(19,7.02905);
   hbadmatch_stack_1->SetBinContent(20,10.35064);
   hbadmatch_stack_1->SetBinContent(21,10.17325);
   hbadmatch_stack_1->SetBinContent(22,12.55204);
   hbadmatch_stack_1->SetBinContent(23,12.48694);
   hbadmatch_stack_1->SetBinContent(24,14.9926);
   hbadmatch_stack_1->SetBinContent(25,22.59325);
   hbadmatch_stack_1->SetBinError(1,1.390497);
   hbadmatch_stack_1->SetBinError(2,0.9463216);
   hbadmatch_stack_1->SetBinError(3,1.916514);
   hbadmatch_stack_1->SetBinError(4,0.9853671);
   hbadmatch_stack_1->SetBinError(5,0.741473);
   hbadmatch_stack_1->SetBinError(6,0.9839021);
   hbadmatch_stack_1->SetBinError(7,1.160801);
   hbadmatch_stack_1->SetBinError(8,0.8213384);
   hbadmatch_stack_1->SetBinError(9,0.9817732);
   hbadmatch_stack_1->SetBinError(10,0.9821661);
   hbadmatch_stack_1->SetBinError(11,1.248716);
   hbadmatch_stack_1->SetBinError(12,1.26037);
   hbadmatch_stack_1->SetBinError(13,0.7703237);
   hbadmatch_stack_1->SetBinError(14,2.400208);
   hbadmatch_stack_1->SetBinError(15,2.394392);
   hbadmatch_stack_1->SetBinError(16,1.570558);
   hbadmatch_stack_1->SetBinError(17,1.382667);
   hbadmatch_stack_1->SetBinError(18,1.010531);
   hbadmatch_stack_1->SetBinError(19,1.42159);
   hbadmatch_stack_1->SetBinError(20,1.70829);
   hbadmatch_stack_1->SetBinError(21,1.758311);
   hbadmatch_stack_1->SetBinError(22,1.866875);
   hbadmatch_stack_1->SetBinError(23,1.816194);
   hbadmatch_stack_1->SetBinError(24,2.02654);
   hbadmatch_stack_1->SetBinError(25,2.728939);
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
   houtFV_stack_4->SetBinContent(1,24.20541);
   houtFV_stack_4->SetBinContent(2,16.71045);
   houtFV_stack_4->SetBinContent(3,16.27304);
   houtFV_stack_4->SetBinContent(4,15.2744);
   houtFV_stack_4->SetBinContent(5,14.19794);
   houtFV_stack_4->SetBinContent(6,14.35808);
   houtFV_stack_4->SetBinContent(7,14.93371);
   houtFV_stack_4->SetBinContent(8,11.59141);
   houtFV_stack_4->SetBinContent(9,15.01741);
   houtFV_stack_4->SetBinContent(10,10.70174);
   houtFV_stack_4->SetBinContent(11,14.57043);
   houtFV_stack_4->SetBinContent(12,15.91117);
   houtFV_stack_4->SetBinContent(13,16.72046);
   houtFV_stack_4->SetBinContent(14,17.46971);
   houtFV_stack_4->SetBinContent(15,18.04394);
   houtFV_stack_4->SetBinContent(16,18.21376);
   houtFV_stack_4->SetBinContent(17,23.24609);
   houtFV_stack_4->SetBinContent(18,29.47061);
   houtFV_stack_4->SetBinContent(19,31.82714);
   houtFV_stack_4->SetBinContent(20,39.23423);
   houtFV_stack_4->SetBinContent(21,49.93755);
   houtFV_stack_4->SetBinContent(22,57.24178);
   houtFV_stack_4->SetBinContent(23,69.49303);
   houtFV_stack_4->SetBinContent(24,77.33925);
   houtFV_stack_4->SetBinContent(25,90.24903);
   houtFV_stack_4->SetBinError(1,2.509228);
   houtFV_stack_4->SetBinError(2,1.990981);
   houtFV_stack_4->SetBinError(3,2.082126);
   houtFV_stack_4->SetBinError(4,1.889454);
   houtFV_stack_4->SetBinError(5,1.865173);
   houtFV_stack_4->SetBinError(6,1.886821);
   houtFV_stack_4->SetBinError(7,1.91416);
   houtFV_stack_4->SetBinError(8,2.078416);
   houtFV_stack_4->SetBinError(9,1.949085);
   houtFV_stack_4->SetBinError(10,1.612259);
   houtFV_stack_4->SetBinError(11,1.86469);
   houtFV_stack_4->SetBinError(12,1.995189);
   houtFV_stack_4->SetBinError(13,2.045114);
   houtFV_stack_4->SetBinError(14,2.118528);
   houtFV_stack_4->SetBinError(15,2.110434);
   houtFV_stack_4->SetBinError(16,2.181705);
   houtFV_stack_4->SetBinError(17,2.396271);
   houtFV_stack_4->SetBinError(18,2.719995);
   houtFV_stack_4->SetBinError(19,2.817031);
   houtFV_stack_4->SetBinError(20,3.20261);
   houtFV_stack_4->SetBinError(21,3.484347);
   houtFV_stack_4->SetBinError(22,3.959487);
   houtFV_stack_4->SetBinError(23,4.169664);
   houtFV_stack_4->SetBinError(24,4.396306);
   houtFV_stack_4->SetBinError(25,4.830284);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.18933);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.562576);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.682722);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3763178);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.6971721);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.133034);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.218726);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.888573);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,7.963326);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,20.20417);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,59.77216);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5085583);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4699768);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2684567);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1313578);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3138005);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1658436);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3022172);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5507507);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5149596);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6000711);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.9382605);
   hNCpi0inFVcoh_stack_5->SetBinError(24,1.495876);
   hNCpi0inFVcoh_stack_5->SetBinError(25,2.514649);
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
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.088108);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7943219);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.488086);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.697004);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.142908);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6412039);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.36694);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.478708);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.9623858);
   hNCpi0inFVqe_stack_6->SetBinContent(22,2.997934);
   hNCpi0inFVqe_stack_6->SetBinContent(23,3.612902);
   hNCpi0inFVqe_stack_6->SetBinContent(24,2.77423);
   hNCpi0inFVqe_stack_6->SetBinContent(25,4.352752);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4181941);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2741946);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2304939);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2563433);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3527294);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2532885);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3871841);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4310268);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2576051);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.5722386);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.6552603);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.472179);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.6899322);
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
   hNCpi0inFVres_stack_7->SetBinContent(1,55.28739);
   hNCpi0inFVres_stack_7->SetBinContent(2,49.7851);
   hNCpi0inFVres_stack_7->SetBinContent(3,47.13194);
   hNCpi0inFVres_stack_7->SetBinContent(4,46.26686);
   hNCpi0inFVres_stack_7->SetBinContent(5,48.05237);
   hNCpi0inFVres_stack_7->SetBinContent(6,46.81241);
   hNCpi0inFVres_stack_7->SetBinContent(7,47.79321);
   hNCpi0inFVres_stack_7->SetBinContent(8,46.34576);
   hNCpi0inFVres_stack_7->SetBinContent(9,49.79006);
   hNCpi0inFVres_stack_7->SetBinContent(10,50.07437);
   hNCpi0inFVres_stack_7->SetBinContent(11,55.03413);
   hNCpi0inFVres_stack_7->SetBinContent(12,64.24218);
   hNCpi0inFVres_stack_7->SetBinContent(13,65.20235);
   hNCpi0inFVres_stack_7->SetBinContent(14,75.15428);
   hNCpi0inFVres_stack_7->SetBinContent(15,81.9071);
   hNCpi0inFVres_stack_7->SetBinContent(16,86.99553);
   hNCpi0inFVres_stack_7->SetBinContent(17,99.06217);
   hNCpi0inFVres_stack_7->SetBinContent(18,109.609);
   hNCpi0inFVres_stack_7->SetBinContent(19,129.0658);
   hNCpi0inFVres_stack_7->SetBinContent(20,156.9346);
   hNCpi0inFVres_stack_7->SetBinContent(21,185.24);
   hNCpi0inFVres_stack_7->SetBinContent(22,211.0554);
   hNCpi0inFVres_stack_7->SetBinContent(23,246.632);
   hNCpi0inFVres_stack_7->SetBinContent(24,319.5656);
   hNCpi0inFVres_stack_7->SetBinContent(25,382.4348);
   hNCpi0inFVres_stack_7->SetBinError(1,2.423309);
   hNCpi0inFVres_stack_7->SetBinError(2,2.310841);
   hNCpi0inFVres_stack_7->SetBinError(3,2.274968);
   hNCpi0inFVres_stack_7->SetBinError(4,2.230261);
   hNCpi0inFVres_stack_7->SetBinError(5,2.30603);
   hNCpi0inFVres_stack_7->SetBinError(6,2.251062);
   hNCpi0inFVres_stack_7->SetBinError(7,2.236404);
   hNCpi0inFVres_stack_7->SetBinError(8,2.186985);
   hNCpi0inFVres_stack_7->SetBinError(9,2.255869);
   hNCpi0inFVres_stack_7->SetBinError(10,2.233559);
   hNCpi0inFVres_stack_7->SetBinError(11,2.393452);
   hNCpi0inFVres_stack_7->SetBinError(12,2.655035);
   hNCpi0inFVres_stack_7->SetBinError(13,2.639364);
   hNCpi0inFVres_stack_7->SetBinError(14,2.886519);
   hNCpi0inFVres_stack_7->SetBinError(15,2.976818);
   hNCpi0inFVres_stack_7->SetBinError(16,3.023778);
   hNCpi0inFVres_stack_7->SetBinError(17,3.255464);
   hNCpi0inFVres_stack_7->SetBinError(18,3.341833);
   hNCpi0inFVres_stack_7->SetBinError(19,3.696467);
   hNCpi0inFVres_stack_7->SetBinError(20,4.133488);
   hNCpi0inFVres_stack_7->SetBinError(21,4.482913);
   hNCpi0inFVres_stack_7->SetBinError(22,4.77593);
   hNCpi0inFVres_stack_7->SetBinError(23,5.107816);
   hNCpi0inFVres_stack_7->SetBinError(24,5.917938);
   hNCpi0inFVres_stack_7->SetBinError(25,6.381009);
   hNCpi0inFVres_stack_7->SetEntries(50865);

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
   hNCpi0inFVdis_stack_8->SetBinContent(1,11.71656);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.521406);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.032408);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.227123);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.690142);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.944052);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.493907);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.17863);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.18719);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.843428);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.437042);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.091784);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.568748);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.938745);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.33325);
   hNCpi0inFVdis_stack_8->SetBinContent(16,14.69672);
   hNCpi0inFVdis_stack_8->SetBinContent(17,16.32638);
   hNCpi0inFVdis_stack_8->SetBinContent(18,16.19287);
   hNCpi0inFVdis_stack_8->SetBinContent(19,24.03312);
   hNCpi0inFVdis_stack_8->SetBinContent(20,23.8423);
   hNCpi0inFVdis_stack_8->SetBinContent(21,31.32003);
   hNCpi0inFVdis_stack_8->SetBinContent(22,40.14861);
   hNCpi0inFVdis_stack_8->SetBinContent(23,53.07182);
   hNCpi0inFVdis_stack_8->SetBinContent(24,71.90073);
   hNCpi0inFVdis_stack_8->SetBinContent(25,110.6543);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.154494);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.969207);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.907473);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.941228);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.030328);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8781189);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7566997);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8652824);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9343807);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.051362);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.974946);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9891153);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.040259);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.005377);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.046879);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.247737);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.327169);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.334384);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.601674);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.559713);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.821457);
   hNCpi0inFVdis_stack_8->SetBinError(22,2.105283);
   hNCpi0inFVdis_stack_8->SetBinError(23,2.377299);
   hNCpi0inFVdis_stack_8->SetBinError(24,2.747112);
   hNCpi0inFVdis_stack_8->SetBinError(25,3.413336);
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
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.488086);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.2304939);
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);

   ci = 1443;
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
   hs1->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,32.36497);
   hCCpi0inFV_stack_11->SetBinContent(2,21.46308);
   hCCpi0inFV_stack_11->SetBinContent(3,24.86787);
   hCCpi0inFV_stack_11->SetBinContent(4,19.26171);
   hCCpi0inFV_stack_11->SetBinContent(5,16.55775);
   hCCpi0inFV_stack_11->SetBinContent(6,19.00083);
   hCCpi0inFV_stack_11->SetBinContent(7,20.17489);
   hCCpi0inFV_stack_11->SetBinContent(8,18.03819);
   hCCpi0inFV_stack_11->SetBinContent(9,17.86909);
   hCCpi0inFV_stack_11->SetBinContent(10,19.46422);
   hCCpi0inFV_stack_11->SetBinContent(11,18.08057);
   hCCpi0inFV_stack_11->SetBinContent(12,21.8101);
   hCCpi0inFV_stack_11->SetBinContent(13,23.64495);
   hCCpi0inFV_stack_11->SetBinContent(14,30.84372);
   hCCpi0inFV_stack_11->SetBinContent(15,23.56108);
   hCCpi0inFV_stack_11->SetBinContent(16,32.8538);
   hCCpi0inFV_stack_11->SetBinContent(17,36.73945);
   hCCpi0inFV_stack_11->SetBinContent(18,36.63053);
   hCCpi0inFV_stack_11->SetBinContent(19,45.85352);
   hCCpi0inFV_stack_11->SetBinContent(20,52.14577);
   hCCpi0inFV_stack_11->SetBinContent(21,77.21672);
   hCCpi0inFV_stack_11->SetBinContent(22,82.39386);
   hCCpi0inFV_stack_11->SetBinContent(23,110.1888);
   hCCpi0inFV_stack_11->SetBinContent(24,154.8033);
   hCCpi0inFV_stack_11->SetBinContent(25,238.1439);
   hCCpi0inFV_stack_11->SetBinError(1,2.809844);
   hCCpi0inFV_stack_11->SetBinError(2,2.315629);
   hCCpi0inFV_stack_11->SetBinError(3,2.478135);
   hCCpi0inFV_stack_11->SetBinError(4,2.240181);
   hCCpi0inFV_stack_11->SetBinError(5,2.000405);
   hCCpi0inFV_stack_11->SetBinError(6,2.074462);
   hCCpi0inFV_stack_11->SetBinError(7,2.254535);
   hCCpi0inFV_stack_11->SetBinError(8,2.083339);
   hCCpi0inFV_stack_11->SetBinError(9,2.107798);
   hCCpi0inFV_stack_11->SetBinError(10,2.263879);
   hCCpi0inFV_stack_11->SetBinError(11,2.03757);
   hCCpi0inFV_stack_11->SetBinError(12,2.32772);
   hCCpi0inFV_stack_11->SetBinError(13,2.407389);
   hCCpi0inFV_stack_11->SetBinError(14,2.783601);
   hCCpi0inFV_stack_11->SetBinError(15,2.428259);
   hCCpi0inFV_stack_11->SetBinError(16,2.934076);
   hCCpi0inFV_stack_11->SetBinError(17,3.04741);
   hCCpi0inFV_stack_11->SetBinError(18,3.037372);
   hCCpi0inFV_stack_11->SetBinError(19,3.405209);
   hCCpi0inFV_stack_11->SetBinError(20,3.629214);
   hCCpi0inFV_stack_11->SetBinError(21,4.492504);
   hCCpi0inFV_stack_11->SetBinError(22,4.536887);
   hCCpi0inFV_stack_11->SetBinError(23,5.277622);
   hCCpi0inFV_stack_11->SetBinError(24,6.239539);
   hCCpi0inFV_stack_11->SetBinError(25,7.771506);
   hCCpi0inFV_stack_11->SetEntries(5105);

   ci = 1444;
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
   hs1->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,11.34031);
   hNCinFV_stack_12->SetBinContent(2,8.410952);
   hNCinFV_stack_12->SetBinContent(3,7.372432);
   hNCinFV_stack_12->SetBinContent(4,6.158564);
   hNCinFV_stack_12->SetBinContent(5,5.073553);
   hNCinFV_stack_12->SetBinContent(6,6.44887);
   hNCinFV_stack_12->SetBinContent(7,5.039978);
   hNCinFV_stack_12->SetBinContent(8,4.93009);
   hNCinFV_stack_12->SetBinContent(9,6.88418);
   hNCinFV_stack_12->SetBinContent(10,2.105544);
   hNCinFV_stack_12->SetBinContent(11,5.903524);
   hNCinFV_stack_12->SetBinContent(12,5.312296);
   hNCinFV_stack_12->SetBinContent(13,5.720333);
   hNCinFV_stack_12->SetBinContent(14,5.660318);
   hNCinFV_stack_12->SetBinContent(15,6.408533);
   hNCinFV_stack_12->SetBinContent(16,6.843991);
   hNCinFV_stack_12->SetBinContent(17,7.180788);
   hNCinFV_stack_12->SetBinContent(18,9.484738);
   hNCinFV_stack_12->SetBinContent(19,11.62555);
   hNCinFV_stack_12->SetBinContent(20,16.57363);
   hNCinFV_stack_12->SetBinContent(21,13.74063);
   hNCinFV_stack_12->SetBinContent(22,18.15956);
   hNCinFV_stack_12->SetBinContent(23,27.60057);
   hNCinFV_stack_12->SetBinContent(24,41.42188);
   hNCinFV_stack_12->SetBinContent(25,57.37965);
   hNCinFV_stack_12->SetBinError(1,1.677048);
   hNCinFV_stack_12->SetBinError(2,1.428992);
   hNCinFV_stack_12->SetBinError(3,1.373389);
   hNCinFV_stack_12->SetBinError(4,1.225423);
   hNCinFV_stack_12->SetBinError(5,1.177633);
   hNCinFV_stack_12->SetBinError(6,1.287259);
   hNCinFV_stack_12->SetBinError(7,1.111065);
   hNCinFV_stack_12->SetBinError(8,1.144463);
   hNCinFV_stack_12->SetBinError(9,1.31706);
   hNCinFV_stack_12->SetBinError(10,0.6797106);
   hNCinFV_stack_12->SetBinError(11,1.224461);
   hNCinFV_stack_12->SetBinError(12,1.25745);
   hNCinFV_stack_12->SetBinError(13,1.210746);
   hNCinFV_stack_12->SetBinError(14,1.225392);
   hNCinFV_stack_12->SetBinError(15,1.225574);
   hNCinFV_stack_12->SetBinError(16,1.317228);
   hNCinFV_stack_12->SetBinError(17,1.359959);
   hNCinFV_stack_12->SetBinError(18,1.533249);
   hNCinFV_stack_12->SetBinError(19,1.722172);
   hNCinFV_stack_12->SetBinError(20,2.020972);
   hNCinFV_stack_12->SetBinError(21,1.798118);
   hNCinFV_stack_12->SetBinError(22,2.176298);
   hNCinFV_stack_12->SetBinError(23,2.632641);
   hNCinFV_stack_12->SetBinError(24,3.236361);
   hNCinFV_stack_12->SetBinError(25,3.832895);
   hNCinFV_stack_12->SetEntries(1286);

   ci = 1445;
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
   hs1->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,13.39099);
   hnumuCCinFV_stack_13->SetBinContent(2,12.82781);
   hnumuCCinFV_stack_13->SetBinContent(3,10.03069);
   hnumuCCinFV_stack_13->SetBinContent(4,10.11873);
   hnumuCCinFV_stack_13->SetBinContent(5,8.913961);
   hnumuCCinFV_stack_13->SetBinContent(6,10.7998);
   hnumuCCinFV_stack_13->SetBinContent(7,9.535195);
   hnumuCCinFV_stack_13->SetBinContent(8,13.29901);
   hnumuCCinFV_stack_13->SetBinContent(9,7.794506);
   hnumuCCinFV_stack_13->SetBinContent(10,15.5832);
   hnumuCCinFV_stack_13->SetBinContent(11,15.67678);
   hnumuCCinFV_stack_13->SetBinContent(12,16.019);
   hnumuCCinFV_stack_13->SetBinContent(13,19.64394);
   hnumuCCinFV_stack_13->SetBinContent(14,18.27003);
   hnumuCCinFV_stack_13->SetBinContent(15,18.91774);
   hnumuCCinFV_stack_13->SetBinContent(16,22.37473);
   hnumuCCinFV_stack_13->SetBinContent(17,22.38445);
   hnumuCCinFV_stack_13->SetBinContent(18,26.54528);
   hnumuCCinFV_stack_13->SetBinContent(19,25.07141);
   hnumuCCinFV_stack_13->SetBinContent(20,33.08816);
   hnumuCCinFV_stack_13->SetBinContent(21,35.75262);
   hnumuCCinFV_stack_13->SetBinContent(22,37.18148);
   hnumuCCinFV_stack_13->SetBinContent(23,32.61345);
   hnumuCCinFV_stack_13->SetBinContent(24,47.90296);
   hnumuCCinFV_stack_13->SetBinContent(25,71.06987);
   hnumuCCinFV_stack_13->SetBinError(1,1.882913);
   hnumuCCinFV_stack_13->SetBinError(2,1.949054);
   hnumuCCinFV_stack_13->SetBinError(3,1.654132);
   hnumuCCinFV_stack_13->SetBinError(4,1.954164);
   hnumuCCinFV_stack_13->SetBinError(5,1.576998);
   hnumuCCinFV_stack_13->SetBinError(6,2.041629);
   hnumuCCinFV_stack_13->SetBinError(7,1.797328);
   hnumuCCinFV_stack_13->SetBinError(8,2.153483);
   hnumuCCinFV_stack_13->SetBinError(9,1.460966);
   hnumuCCinFV_stack_13->SetBinError(10,2.662336);
   hnumuCCinFV_stack_13->SetBinError(11,2.19683);
   hnumuCCinFV_stack_13->SetBinError(12,2.527588);
   hnumuCCinFV_stack_13->SetBinError(13,2.612172);
   hnumuCCinFV_stack_13->SetBinError(14,2.288258);
   hnumuCCinFV_stack_13->SetBinError(15,2.682225);
   hnumuCCinFV_stack_13->SetBinError(16,2.814078);
   hnumuCCinFV_stack_13->SetBinError(17,2.744938);
   hnumuCCinFV_stack_13->SetBinError(18,3.091661);
   hnumuCCinFV_stack_13->SetBinError(19,2.644051);
   hnumuCCinFV_stack_13->SetBinError(20,4.581604);
   hnumuCCinFV_stack_13->SetBinError(21,3.465016);
   hnumuCCinFV_stack_13->SetBinError(22,3.416928);
   hnumuCCinFV_stack_13->SetBinError(23,3.146858);
   hnumuCCinFV_stack_13->SetBinError(24,4.358519);
   hnumuCCinFV_stack_13->SetBinError(25,5.053442);
   hnumuCCinFV_stack_13->SetEntries(2136);

   ci = 1446;
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
   hs1->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(1,1.451077);
   hnueCCinFV_stack_14->SetBinContent(2,1.396617);
   hnueCCinFV_stack_14->SetBinContent(3,1.231439);
   hnueCCinFV_stack_14->SetBinContent(4,0.497884);
   hnueCCinFV_stack_14->SetBinContent(5,1.85986);
   hnueCCinFV_stack_14->SetBinContent(6,0.6430945);
   hnueCCinFV_stack_14->SetBinContent(7,1.006494);
   hnueCCinFV_stack_14->SetBinContent(8,0.2556436);
   hnueCCinFV_stack_14->SetBinContent(9,0.5946997);
   hnueCCinFV_stack_14->SetBinContent(11,1.226073);
   hnueCCinFV_stack_14->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(15,0.6905964);
   hnueCCinFV_stack_14->SetBinContent(16,0.2998007);
   hnueCCinFV_stack_14->SetBinContent(17,0.5054118);
   hnueCCinFV_stack_14->SetBinContent(18,4.117669);
   hnueCCinFV_stack_14->SetBinContent(19,0.8038652);
   hnueCCinFV_stack_14->SetBinContent(20,1.230572);
   hnueCCinFV_stack_14->SetBinContent(21,2.110108);
   hnueCCinFV_stack_14->SetBinContent(22,1.917778);
   hnueCCinFV_stack_14->SetBinContent(23,3.546024);
   hnueCCinFV_stack_14->SetBinContent(24,3.109176);
   hnueCCinFV_stack_14->SetBinContent(25,24.1348);
   hnueCCinFV_stack_14->SetBinError(1,0.7092219);
   hnueCCinFV_stack_14->SetBinError(2,0.528252);
   hnueCCinFV_stack_14->SetBinError(3,0.5552317);
   hnueCCinFV_stack_14->SetBinError(4,0.3520617);
   hnueCCinFV_stack_14->SetBinError(5,1.1719);
   hnueCCinFV_stack_14->SetBinError(6,0.4552547);
   hnueCCinFV_stack_14->SetBinError(7,0.5976004);
   hnueCCinFV_stack_14->SetBinError(8,0.2556436);
   hnueCCinFV_stack_14->SetBinError(9,0.5946997);
   hnueCCinFV_stack_14->SetBinError(11,0.56795);
   hnueCCinFV_stack_14->SetBinError(12,0.1950249);
   hnueCCinFV_stack_14->SetBinError(13,0.1950249);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(15,0.4010541);
   hnueCCinFV_stack_14->SetBinError(16,0.2998007);
   hnueCCinFV_stack_14->SetBinError(17,0.3573868);
   hnueCCinFV_stack_14->SetBinError(18,1.585259);
   hnueCCinFV_stack_14->SetBinError(19,0.4023665);
   hnueCCinFV_stack_14->SetBinError(20,0.655428);
   hnueCCinFV_stack_14->SetBinError(21,0.7969378);
   hnueCCinFV_stack_14->SetBinError(22,0.7466958);
   hnueCCinFV_stack_14->SetBinError(23,1.091751);
   hnueCCinFV_stack_14->SetBinError(24,0.8517069);
   hnueCCinFV_stack_14->SetBinError(25,3.590721);
   hnueCCinFV_stack_14->SetEntries(187);

   ci = 1447;
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
   hs1->Add(hnueCCinFV_stack_14,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__2->SetBinContent(1,182.3726);
   hmcerror__2->SetBinContent(2,141.5844);
   hmcerror__2->SetBinContent(3,134.9303);
   hmcerror__2->SetBinContent(4,125.0808);
   hmcerror__2->SetBinContent(5,122.7974);
   hmcerror__2->SetBinContent(6,125.4037);
   hmcerror__2->SetBinContent(7,136.5294);
   hmcerror__2->SetBinContent(8,121.6734);
   hmcerror__2->SetBinContent(9,122.5317);
   hmcerror__2->SetBinContent(10,135.1806);
   hmcerror__2->SetBinContent(11,153.9102);
   hmcerror__2->SetBinContent(12,162.2203);
   hmcerror__2->SetBinContent(13,176.1872);
   hmcerror__2->SetBinContent(14,196.4164);
   hmcerror__2->SetBinContent(15,205.3737);
   hmcerror__2->SetBinContent(16,219.8671);
   hmcerror__2->SetBinContent(17,249.7223);
   hmcerror__2->SetBinContent(18,274.1346);
   hmcerror__2->SetBinContent(19,322.5549);
   hmcerror__2->SetBinContent(20,382.6628);
   hmcerror__2->SetBinContent(21,462.3211);
   hmcerror__2->SetBinContent(22,515.5724);
   hmcerror__2->SetBinContent(23,629.9107);
   hmcerror__2->SetBinContent(24,823.4131);
   hmcerror__2->SetBinContent(25,1142.247);
   hmcerror__2->SetBinError(1,37.39766);
   hmcerror__2->SetBinError(2,30.14087);
   hmcerror__2->SetBinError(3,28.04855);
   hmcerror__2->SetBinError(4,26.64553);
   hmcerror__2->SetBinError(5,26.38214);
   hmcerror__2->SetBinError(6,27.20954);
   hmcerror__2->SetBinError(7,26.12181);
   hmcerror__2->SetBinError(8,24.40427);
   hmcerror__2->SetBinError(9,26.48776);
   hmcerror__2->SetBinError(10,26.92482);
   hmcerror__2->SetBinError(11,30.21325);
   hmcerror__2->SetBinError(12,33.54956);
   hmcerror__2->SetBinError(13,36.89403);
   hmcerror__2->SetBinError(14,40.03401);
   hmcerror__2->SetBinError(15,45.40693);
   hmcerror__2->SetBinError(16,51.19563);
   hmcerror__2->SetBinError(17,59.649);
   hmcerror__2->SetBinError(18,68.70481);
   hmcerror__2->SetBinError(19,80.63298);
   hmcerror__2->SetBinError(20,93.53883);
   hmcerror__2->SetBinError(21,109.4406);
   hmcerror__2->SetBinError(22,117.833);
   hmcerror__2->SetBinError(23,132.1941);
   hmcerror__2->SetBinError(24,160.4818);
   hmcerror__2->SetBinError(25,225.4869);
   hmcerror__2->SetBinError(26,0.3895343);
   hmcerror__2->SetEntries(7171.878);

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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.1/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 722.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2755.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  539.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1443;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 1194.0","F");

   ci = 1444;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 302.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 554.8","F");

   ci = 1446;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

   ci = 1447;
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
   0.2050618,
   0.2128827,
   0.2078743,
   0.2130265,
   0.2148428,
   0.2169756,
   0.1913273,
   0.2005719,
   0.2161707,
   0.1991767,
   0.1963044,
   0.2068148,
   0.2094024,
   0.2038221,
   0.2210942,
   0.232848,
   0.2388613,
   0.2506243,
   0.2499822,
   0.2444419,
   0.2367199,
   0.228548,
   0.2098617,
   0.1948982,
   0.1974064};
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
   0.2050618,
   0.2128827,
   0.2078743,
   0.2130265,
   0.2148428,
   0.2169756,
   0.1913273,
   0.2005719,
   0.2161707,
   0.1991767,
   0.1963044,
   0.2068148,
   0.2094024,
   0.2038221,
   0.2210942,
   0.232848,
   0.2388613,
   0.2506243,
   0.2499822,
   0.2444419,
   0.2367199,
   0.228548,
   0.2098617,
   0.1948982,
   0.1974064};
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
   0.1958905,
   0.1926916,
   0.1926428,
   0.2027408,
   0.2076097,
   0.2055439,
   0.1767594,
   0.1925829,
   0.2078802,
   0.1829638,
   0.1907933,
   0.1999805,
   0.2011028,
   0.1981587,
   0.2146736,
   0.2262642,
   0.2292197,
   0.242664,
   0.2459434,
   0.2409965,
   0.2338686,
   0.226046,
   0.2084515,
   0.1934056,
   0.1964142};
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
   0.1958905,
   0.1926916,
   0.1926428,
   0.2027408,
   0.2076097,
   0.2055439,
   0.1767594,
   0.1925829,
   0.2078802,
   0.1829638,
   0.1907933,
   0.1999805,
   0.2011028,
   0.1981587,
   0.2146736,
   0.2262642,
   0.2292197,
   0.242664,
   0.2459434,
   0.2409965,
   0.2338686,
   0.226046,
   0.2084515,
   0.1934056,
   0.1964142};
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
   0.8553916,
   0.8828658,
   0.763357,
   0.9433902,
   0.806206,
   0.9569095,
   0.8276603,
   1.019121,
   1.003822,
   1.065242,
   0.8446485,
   0.7828861,
   0.7662304,
   0.7636836,
   0.8228902,
   0.791387,
   0.8969963,
   0.8718345,
   0.7657612,
   0.8858974,
   0.8176135,
   0.907729,
   0.9366407,
   0.9448477,
   0.9376252};
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
   0.06848614,
   0.07896592,
   0.0752158,
   0.0868461,
   0.08201477,
   0.08735349,
   0.07785973,
   0.09151981,
   0.09051158,
   0.08877015,
   0.07408058,
   0.06946991,
   0.06594661,
   0.0623545,
   0.06329924,
   0.05999489,
   0.05993309,
   0.05639428,
   0.04872422,
   0.04811534,
   0.0420535,
   0.04195979,
   0.03856089,
   0.03387443,
   0.02865065};
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
   0.06848614,
   0.07896592,
   0.0752158,
   0.0868461,
   0.0803763,
   0.08735349,
   0.07785973,
   0.09151981,
   0.09051158,
   0.08877015,
   0.07408058,
   0.06946991,
   0.06594661,
   0.0623545,
   0.06329924,
   0.05999489,
   0.05993309,
   0.05639428,
   0.04872422,
   0.04811534,
   0.0420535,
   0.04195979,
   0.03856089,
   0.03387443,
   0.02865065};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-1.2,1.2);
   Graph_Graph3004->SetMinimum(0.6415541);
   Graph_Graph3004->SetMaximum(1.200599);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
