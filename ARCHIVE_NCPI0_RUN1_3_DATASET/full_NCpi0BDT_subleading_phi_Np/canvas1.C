#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Tue May 31 16:40:09 2022) by ROOT version 6.26/00
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
   pad1->Range(-4.119231,-3.8,3.957692,400.2);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__1->SetBinContent(1,152.4144);
   hmc__1->SetBinContent(2,156.65);
   hmc__1->SetBinContent(3,160.9834);
   hmc__1->SetBinContent(4,155.5356);
   hmc__1->SetBinContent(5,140.2882);
   hmc__1->SetBinContent(6,157.2893);
   hmc__1->SetBinContent(7,165.3377);
   hmc__1->SetBinContent(8,152.5523);
   hmc__1->SetBinContent(9,153.2214);
   hmc__1->SetBinContent(10,148.3695);
   hmc__1->SetBinContent(11,164.1573);
   hmc__1->SetBinContent(12,155.8988);
   hmc__1->SetBinContent(13,165.7321);
   hmc__1->SetBinContent(14,161.8438);
   hmc__1->SetBinContent(15,161.3791);
   hmc__1->SetBinContent(16,158.1065);
   hmc__1->SetBinContent(17,173.0948);
   hmc__1->SetBinContent(18,161.1114);
   hmc__1->SetBinContent(19,146.9317);
   hmc__1->SetBinContent(20,162.2401);
   hmc__1->SetBinContent(21,164.4818);
   hmc__1->SetBinContent(22,162.4915);
   hmc__1->SetBinContent(23,174.0595);
   hmc__1->SetBinContent(24,166.831);
   hmc__1->SetBinError(1,32.87507);
   hmc__1->SetBinError(2,33.20412);
   hmc__1->SetBinError(3,31.79166);
   hmc__1->SetBinError(4,32.27037);
   hmc__1->SetBinError(5,28.53689);
   hmc__1->SetBinError(6,28.67076);
   hmc__1->SetBinError(7,31.13069);
   hmc__1->SetBinError(8,31.17099);
   hmc__1->SetBinError(9,33.17482);
   hmc__1->SetBinError(10,31.42626);
   hmc__1->SetBinError(11,34.43186);
   hmc__1->SetBinError(12,33.30415);
   hmc__1->SetBinError(13,35.68575);
   hmc__1->SetBinError(14,37.22419);
   hmc__1->SetBinError(15,36.61141);
   hmc__1->SetBinError(16,32.31962);
   hmc__1->SetBinError(17,31.76903);
   hmc__1->SetBinError(18,31.3288);
   hmc__1->SetBinError(19,29.54733);
   hmc__1->SetBinError(20,31.55898);
   hmc__1->SetBinError(21,36.32454);
   hmc__1->SetBinError(22,35.56975);
   hmc__1->SetBinError(23,37.668);
   hmc__1->SetBinError(24,35.0246);
   hmc__1->SetBinError(25,0.4212968);
   hmc__1->SetMinimum(-3.8);
   hmc__1->SetMaximum(380);
   hmc__1->SetEntries(3775.136);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,-3.15,3.15);
   hs1_stack_1->SetMinimum(-9.112283e-11);
   hs1_stack_1->SetMaximum(182.7624);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.834061);
   hbadmatch_stack_1->SetBinContent(2,4.790404);
   hbadmatch_stack_1->SetBinContent(3,5.202322);
   hbadmatch_stack_1->SetBinContent(4,5.451106);
   hbadmatch_stack_1->SetBinContent(5,2.50184);
   hbadmatch_stack_1->SetBinContent(6,5.917688);
   hbadmatch_stack_1->SetBinContent(7,5.647208);
   hbadmatch_stack_1->SetBinContent(8,3.849086);
   hbadmatch_stack_1->SetBinContent(9,4.132573);
   hbadmatch_stack_1->SetBinContent(10,2.683902);
   hbadmatch_stack_1->SetBinContent(11,2.444031);
   hbadmatch_stack_1->SetBinContent(12,1.446131);
   hbadmatch_stack_1->SetBinContent(13,2.615484);
   hbadmatch_stack_1->SetBinContent(14,6.042536);
   hbadmatch_stack_1->SetBinContent(15,4.389359);
   hbadmatch_stack_1->SetBinContent(16,4.220803);
   hbadmatch_stack_1->SetBinContent(17,3.497009);
   hbadmatch_stack_1->SetBinContent(18,3.790231);
   hbadmatch_stack_1->SetBinContent(19,3.566673);
   hbadmatch_stack_1->SetBinContent(20,5.187275);
   hbadmatch_stack_1->SetBinContent(21,5.14601);
   hbadmatch_stack_1->SetBinContent(22,4.390615);
   hbadmatch_stack_1->SetBinContent(23,3.840859);
   hbadmatch_stack_1->SetBinContent(24,4.366155);
   hbadmatch_stack_1->SetBinError(1,1.028097);
   hbadmatch_stack_1->SetBinError(2,1.143145);
   hbadmatch_stack_1->SetBinError(3,1.176617);
   hbadmatch_stack_1->SetBinError(4,1.227532);
   hbadmatch_stack_1->SetBinError(5,0.7754384);
   hbadmatch_stack_1->SetBinError(6,1.273509);
   hbadmatch_stack_1->SetBinError(7,1.262601);
   hbadmatch_stack_1->SetBinError(8,1.103993);
   hbadmatch_stack_1->SetBinError(9,1.137817);
   hbadmatch_stack_1->SetBinError(10,1.214252);
   hbadmatch_stack_1->SetBinError(11,0.759648);
   hbadmatch_stack_1->SetBinError(12,0.5486399);
   hbadmatch_stack_1->SetBinError(13,0.8130536);
   hbadmatch_stack_1->SetBinError(14,1.997005);
   hbadmatch_stack_1->SetBinError(15,1.129631);
   hbadmatch_stack_1->SetBinError(16,1.164147);
   hbadmatch_stack_1->SetBinError(17,0.9684169);
   hbadmatch_stack_1->SetBinError(18,1.124792);
   hbadmatch_stack_1->SetBinError(19,0.9588925);
   hbadmatch_stack_1->SetBinError(20,1.431365);
   hbadmatch_stack_1->SetBinError(21,1.225378);
   hbadmatch_stack_1->SetBinError(22,1.109389);
   hbadmatch_stack_1->SetBinError(23,1.784759);
   hbadmatch_stack_1->SetBinError(24,1.029484);
   hbadmatch_stack_1->SetEntries(378);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,12.99076);
   hext_stack_2->SetBinContent(2,14.25081);
   hext_stack_2->SetBinContent(3,17.24981);
   hext_stack_2->SetBinContent(4,23.00399);
   hext_stack_2->SetBinContent(5,22.56149);
   hext_stack_2->SetBinContent(6,29.71146);
   hext_stack_2->SetBinContent(7,37.41366);
   hext_stack_2->SetBinContent(8,26.53646);
   hext_stack_2->SetBinContent(9,21.93865);
   hext_stack_2->SetBinContent(10,11.51718);
   hext_stack_2->SetBinContent(11,22.11899);
   hext_stack_2->SetBinContent(12,13.81108);
   hext_stack_2->SetBinContent(13,15.64377);
   hext_stack_2->SetBinContent(14,13.97548);
   hext_stack_2->SetBinContent(15,13.51263);
   hext_stack_2->SetBinContent(16,18.00393);
   hext_stack_2->SetBinContent(17,27.65969);
   hext_stack_2->SetBinContent(18,26.92593);
   hext_stack_2->SetBinContent(19,18.29084);
   hext_stack_2->SetBinContent(20,25.93396);
   hext_stack_2->SetBinContent(21,14.56525);
   hext_stack_2->SetBinContent(22,16.54912);
   hext_stack_2->SetBinContent(23,18.70022);
   hext_stack_2->SetBinContent(24,14.57961);
   hext_stack_2->SetBinError(1,2.255251);
   hext_stack_2->SetBinError(2,2.457978);
   hext_stack_2->SetBinError(3,2.717567);
   hext_stack_2->SetBinError(4,3.091215);
   hext_stack_2->SetBinError(5,3.224329);
   hext_stack_2->SetBinError(6,3.621713);
   hext_stack_2->SetBinError(7,4.048468);
   hext_stack_2->SetBinError(8,3.42333);
   hext_stack_2->SetBinError(9,3.117266);
   hext_stack_2->SetBinError(10,2.147353);
   hext_stack_2->SetBinError(11,3.35216);
   hext_stack_2->SetBinError(12,2.558518);
   hext_stack_2->SetBinError(13,2.873753);
   hext_stack_2->SetBinError(14,2.581897);
   hext_stack_2->SetBinError(15,2.443829);
   hext_stack_2->SetBinError(16,2.975564);
   hext_stack_2->SetBinError(17,3.543652);
   hext_stack_2->SetBinError(18,3.55292);
   hext_stack_2->SetBinError(19,2.85716);
   hext_stack_2->SetBinError(20,3.546099);
   hext_stack_2->SetBinError(21,2.585423);
   hext_stack_2->SetBinError(22,2.848099);
   hext_stack_2->SetBinError(23,2.827077);
   hext_stack_2->SetBinError(24,2.506394);
   hext_stack_2->SetEntries(1136);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.4356634);
   hdirt_stack_3->SetBinContent(2,1.730586);
   hdirt_stack_3->SetBinContent(3,2.400884);
   hdirt_stack_3->SetBinContent(4,3.685944);
   hdirt_stack_3->SetBinContent(5,1.39473);
   hdirt_stack_3->SetBinContent(6,3.177854);
   hdirt_stack_3->SetBinContent(7,2.047518);
   hdirt_stack_3->SetBinContent(8,2.864416);
   hdirt_stack_3->SetBinContent(9,2.501433);
   hdirt_stack_3->SetBinContent(10,3.232443);
   hdirt_stack_3->SetBinContent(11,2.475102);
   hdirt_stack_3->SetBinContent(12,1.033342);
   hdirt_stack_3->SetBinContent(13,2.432202);
   hdirt_stack_3->SetBinContent(14,2.56565);
   hdirt_stack_3->SetBinContent(15,1.752422);
   hdirt_stack_3->SetBinContent(16,2.238808);
   hdirt_stack_3->SetBinContent(17,2.675294);
   hdirt_stack_3->SetBinContent(18,2.38011);
   hdirt_stack_3->SetBinContent(19,2.870907);
   hdirt_stack_3->SetBinContent(20,3.906714);
   hdirt_stack_3->SetBinContent(21,3.389202);
   hdirt_stack_3->SetBinContent(22,1.714493);
   hdirt_stack_3->SetBinContent(23,2.123931);
   hdirt_stack_3->SetBinContent(24,2.023418);
   hdirt_stack_3->SetBinError(1,0.2521393);
   hdirt_stack_3->SetBinError(2,0.6970017);
   hdirt_stack_3->SetBinError(3,0.8265113);
   hdirt_stack_3->SetBinError(4,1.097235);
   hdirt_stack_3->SetBinError(5,0.5346675);
   hdirt_stack_3->SetBinError(6,0.9726444);
   hdirt_stack_3->SetBinError(7,0.6892039);
   hdirt_stack_3->SetBinError(8,0.8319813);
   hdirt_stack_3->SetBinError(9,0.8999524);
   hdirt_stack_3->SetBinError(10,1.28501);
   hdirt_stack_3->SetBinError(11,0.836509);
   hdirt_stack_3->SetBinError(12,0.5438016);
   hdirt_stack_3->SetBinError(13,0.8934416);
   hdirt_stack_3->SetBinError(14,0.823103);
   hdirt_stack_3->SetBinError(15,0.6508923);
   hdirt_stack_3->SetBinError(16,0.7033103);
   hdirt_stack_3->SetBinError(17,0.9099658);
   hdirt_stack_3->SetBinError(18,0.7619908);
   hdirt_stack_3->SetBinError(19,0.9047919);
   hdirt_stack_3->SetBinError(20,1.349791);
   hdirt_stack_3->SetBinError(21,0.9152322);
   hdirt_stack_3->SetBinError(22,0.6939301);
   hdirt_stack_3->SetBinError(23,0.7765693);
   hdirt_stack_3->SetBinError(24,0.6839632);
   hdirt_stack_3->SetEntries(238);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,21.72586);
   houtFV_stack_4->SetBinContent(2,20.62842);
   houtFV_stack_4->SetBinContent(3,21.66585);
   houtFV_stack_4->SetBinContent(4,19.5938);
   houtFV_stack_4->SetBinContent(5,18.68806);
   houtFV_stack_4->SetBinContent(6,17.46044);
   houtFV_stack_4->SetBinContent(7,15.97005);
   houtFV_stack_4->SetBinContent(8,16.90842);
   houtFV_stack_4->SetBinContent(9,19.44188);
   houtFV_stack_4->SetBinContent(10,22.72902);
   houtFV_stack_4->SetBinContent(11,23.61541);
   houtFV_stack_4->SetBinContent(12,21.34529);
   houtFV_stack_4->SetBinContent(13,19.83213);
   houtFV_stack_4->SetBinContent(14,20.29553);
   houtFV_stack_4->SetBinContent(15,23.58887);
   houtFV_stack_4->SetBinContent(16,24.62808);
   houtFV_stack_4->SetBinContent(17,20.60612);
   houtFV_stack_4->SetBinContent(18,21.41413);
   houtFV_stack_4->SetBinContent(19,18.01366);
   houtFV_stack_4->SetBinContent(20,21.69532);
   houtFV_stack_4->SetBinContent(21,23.00933);
   houtFV_stack_4->SetBinContent(22,23.40893);
   houtFV_stack_4->SetBinContent(23,22.08209);
   houtFV_stack_4->SetBinContent(24,27.51719);
   houtFV_stack_4->SetBinError(1,2.406224);
   houtFV_stack_4->SetBinError(2,2.199079);
   houtFV_stack_4->SetBinError(3,2.380749);
   houtFV_stack_4->SetBinError(4,2.230396);
   houtFV_stack_4->SetBinError(5,2.134389);
   houtFV_stack_4->SetBinError(6,2.075712);
   houtFV_stack_4->SetBinError(7,2.008144);
   houtFV_stack_4->SetBinError(8,2.029646);
   houtFV_stack_4->SetBinError(9,2.207931);
   houtFV_stack_4->SetBinError(10,2.449769);
   houtFV_stack_4->SetBinError(11,2.577948);
   houtFV_stack_4->SetBinError(12,2.349689);
   houtFV_stack_4->SetBinError(13,2.25588);
   houtFV_stack_4->SetBinError(14,2.24858);
   houtFV_stack_4->SetBinError(15,2.485584);
   houtFV_stack_4->SetBinError(16,2.500348);
   houtFV_stack_4->SetBinError(17,2.288642);
   houtFV_stack_4->SetBinError(18,2.376578);
   houtFV_stack_4->SetBinError(19,2.096326);
   houtFV_stack_4->SetBinError(20,2.287708);
   houtFV_stack_4->SetBinError(21,2.375941);
   houtFV_stack_4->SetBinError(22,2.375145);
   houtFV_stack_4->SetBinError(23,2.378865);
   houtFV_stack_4->SetBinError(24,2.859529);
   houtFV_stack_4->SetEntries(2163);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.087033);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.542315);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.156124);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.308242);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.283918);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.707724);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.124816);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.096828);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.97477);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.228118);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.51392);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.417602);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.811114);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.54506);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.733375);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.128056);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.252442);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.95716);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.046268);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.045684);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.059134);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.810946);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.799904);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.182528);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6401875);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5795598);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7053673);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6756815);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7804178);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6172829);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6133829);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6214197);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6482431);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7794198);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6175458);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6510892);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.775624);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6854986);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4489391);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6811796);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6745285);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.591195);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7592252);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6593065);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6395793);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7542106);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.8142222);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7018176);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,65.64398);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,68.82907);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,67.04414);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,62.05134);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,57.03577);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,59.81882);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,65.54264);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,59.74843);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,63.70641);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,56.88251);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,64.57814);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,62.17289);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,70.80501);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,68.74239);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,68.1955);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,64.70951);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,68.72611);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,61.97702);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,64.91061);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,64.13);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,63.10307);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,69.65161);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,73.5585);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,65.16202);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.655731);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.702498);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.663767);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.548676);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.3826);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.458891);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.677988);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.533577);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.605339);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.419733);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.645526);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.522582);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.770695);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.726562);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.660612);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.65799);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.708588);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.603017);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.642558);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.562939);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.553825);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.687538);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.855054);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.586309);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_7->SetBinContent(1,25.15654);
   hCCpi0inFV_stack_7->SetBinContent(2,25.05893);
   hCCpi0inFV_stack_7->SetBinContent(3,28.3867);
   hCCpi0inFV_stack_7->SetBinContent(4,20.92142);
   hCCpi0inFV_stack_7->SetBinContent(5,19.93463);
   hCCpi0inFV_stack_7->SetBinContent(6,22.43797);
   hCCpi0inFV_stack_7->SetBinContent(7,23.77491);
   hCCpi0inFV_stack_7->SetBinContent(8,22.17327);
   hCCpi0inFV_stack_7->SetBinContent(9,23.04679);
   hCCpi0inFV_stack_7->SetBinContent(10,30.30818);
   hCCpi0inFV_stack_7->SetBinContent(11,27.83824);
   hCCpi0inFV_stack_7->SetBinContent(12,34.2993);
   hCCpi0inFV_stack_7->SetBinContent(13,28.51521);
   hCCpi0inFV_stack_7->SetBinContent(14,26.7258);
   hCCpi0inFV_stack_7->SetBinContent(15,31.06952);
   hCCpi0inFV_stack_7->SetBinContent(16,22.90883);
   hCCpi0inFV_stack_7->SetBinContent(17,28.32642);
   hCCpi0inFV_stack_7->SetBinContent(18,24.67351);
   hCCpi0inFV_stack_7->SetBinContent(19,22.78198);
   hCCpi0inFV_stack_7->SetBinContent(20,19.75515);
   hCCpi0inFV_stack_7->SetBinContent(21,32.94909);
   hCCpi0inFV_stack_7->SetBinContent(22,28.00301);
   hCCpi0inFV_stack_7->SetBinContent(23,29.99857);
   hCCpi0inFV_stack_7->SetBinContent(24,27.95311);
   hCCpi0inFV_stack_7->SetBinError(1,2.555343);
   hCCpi0inFV_stack_7->SetBinError(2,2.509984);
   hCCpi0inFV_stack_7->SetBinError(3,2.635761);
   hCCpi0inFV_stack_7->SetBinError(4,2.254488);
   hCCpi0inFV_stack_7->SetBinError(5,2.179498);
   hCCpi0inFV_stack_7->SetBinError(6,2.270312);
   hCCpi0inFV_stack_7->SetBinError(7,2.478443);
   hCCpi0inFV_stack_7->SetBinError(8,2.383808);
   hCCpi0inFV_stack_7->SetBinError(9,2.356532);
   hCCpi0inFV_stack_7->SetBinError(10,2.808085);
   hCCpi0inFV_stack_7->SetBinError(11,2.706128);
   hCCpi0inFV_stack_7->SetBinError(12,2.955257);
   hCCpi0inFV_stack_7->SetBinError(13,2.660772);
   hCCpi0inFV_stack_7->SetBinError(14,2.619151);
   hCCpi0inFV_stack_7->SetBinError(15,2.778317);
   hCCpi0inFV_stack_7->SetBinError(16,2.345292);
   hCCpi0inFV_stack_7->SetBinError(17,2.63202);
   hCCpi0inFV_stack_7->SetBinError(18,2.521828);
   hCCpi0inFV_stack_7->SetBinError(19,2.398487);
   hCCpi0inFV_stack_7->SetBinError(20,2.261927);
   hCCpi0inFV_stack_7->SetBinError(21,2.896407);
   hCCpi0inFV_stack_7->SetBinError(22,2.69653);
   hCCpi0inFV_stack_7->SetBinError(23,2.74512);
   hCCpi0inFV_stack_7->SetBinError(24,2.641324);
   hCCpi0inFV_stack_7->SetEntries(2680);

   ci = 1440;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_8->SetBinContent(1,3.761024);
   hNCinFV_stack_8->SetBinContent(2,7.466022);
   hNCinFV_stack_8->SetBinContent(3,6.638824);
   hNCinFV_stack_8->SetBinContent(4,6.442108);
   hNCinFV_stack_8->SetBinContent(5,4.591603);
   hNCinFV_stack_8->SetBinContent(6,7.164615);
   hNCinFV_stack_8->SetBinContent(7,4.841572);
   hNCinFV_stack_8->SetBinContent(8,7.090579);
   hNCinFV_stack_8->SetBinContent(9,4.591603);
   hNCinFV_stack_8->SetBinContent(10,6.882638);
   hNCinFV_stack_8->SetBinContent(11,6.730722);
   hNCinFV_stack_8->SetBinContent(12,3.95943);
   hNCinFV_stack_8->SetBinContent(13,7.806199);
   hNCinFV_stack_8->SetBinContent(14,5.533153);
   hNCinFV_stack_8->SetBinContent(15,7.661047);
   hNCinFV_stack_8->SetBinContent(16,5.662008);
   hNCinFV_stack_8->SetBinContent(17,5.630124);
   hNCinFV_stack_8->SetBinContent(18,6.895554);
   hNCinFV_stack_8->SetBinContent(19,3.857995);
   hNCinFV_stack_8->SetBinContent(20,7.769243);
   hNCinFV_stack_8->SetBinContent(21,6.498742);
   hNCinFV_stack_8->SetBinContent(22,5.430027);
   hNCinFV_stack_8->SetBinContent(23,4.694729);
   hNCinFV_stack_8->SetBinContent(24,7.537262);
   hNCinFV_stack_8->SetBinError(1,0.9400115);
   hNCinFV_stack_8->SetBinError(2,1.415229);
   hNCinFV_stack_8->SetBinError(3,1.301185);
   hNCinFV_stack_8->SetBinError(4,1.286229);
   hNCinFV_stack_8->SetBinError(5,1.09304);
   hNCinFV_stack_8->SetBinError(6,1.379729);
   hNCinFV_stack_8->SetBinError(7,1.093209);
   hNCinFV_stack_8->SetBinError(8,1.316866);
   hNCinFV_stack_8->SetBinError(9,1.09304);
   hNCinFV_stack_8->SetBinError(10,1.374566);
   hNCinFV_stack_8->SetBinError(11,1.345026);
   hNCinFV_stack_8->SetBinError(12,0.9607189);
   hNCinFV_stack_8->SetBinError(13,1.455539);
   hNCinFV_stack_8->SetBinError(14,1.110206);
   hNCinFV_stack_8->SetBinError(15,1.428603);
   hNCinFV_stack_8->SetBinError(16,1.225662);
   hNCinFV_stack_8->SetBinError(17,1.162134);
   hNCinFV_stack_8->SetBinError(18,1.302345);
   hNCinFV_stack_8->SetBinError(19,1.00081);
   hNCinFV_stack_8->SetBinError(20,1.401755);
   hNCinFV_stack_8->SetBinError(21,1.271764);
   hNCinFV_stack_8->SetBinError(22,1.144786);
   hNCinFV_stack_8->SetBinError(23,1.056768);
   hNCinFV_stack_8->SetBinError(24,1.331617);
   hNCinFV_stack_8->SetEntries(615);

   ci = 1441;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_9->SetBinContent(1,12.27071);
   hnumuCCinFV_stack_9->SetBinContent(2,9.23642);
   hnumuCCinFV_stack_9->SetBinContent(3,8.020695);
   hnumuCCinFV_stack_9->SetBinContent(4,8.113708);
   hnumuCCinFV_stack_9->SetBinContent(5,7.013483);
   hnumuCCinFV_stack_9->SetBinContent(6,6.00759);
   hnumuCCinFV_stack_9->SetBinContent(7,6.165963);
   hnumuCCinFV_stack_9->SetBinContent(8,8.597129);
   hnumuCCinFV_stack_9->SetBinContent(9,7.44757);
   hnumuCCinFV_stack_9->SetBinContent(10,7.503654);
   hnumuCCinFV_stack_9->SetBinContent(11,10.21345);
   hnumuCCinFV_stack_9->SetBinContent(12,12.67138);
   hnumuCCinFV_stack_9->SetBinContent(13,11.06065);
   hnumuCCinFV_stack_9->SetBinContent(14,13.41823);
   hnumuCCinFV_stack_9->SetBinContent(15,7.364557);
   hnumuCCinFV_stack_9->SetBinContent(16,10.19116);
   hnumuCCinFV_stack_9->SetBinContent(17,8.043623);
   hnumuCCinFV_stack_9->SetBinContent(18,8.296392);
   hnumuCCinFV_stack_9->SetBinContent(19,6.297345);
   hnumuCCinFV_stack_9->SetBinContent(20,7.637936);
   hnumuCCinFV_stack_9->SetBinContent(21,11.14146);
   hnumuCCinFV_stack_9->SetBinContent(22,8.5279);
   hnumuCCinFV_stack_9->SetBinContent(23,11.36283);
   hnumuCCinFV_stack_9->SetBinContent(24,12.57994);
   hnumuCCinFV_stack_9->SetBinError(1,2.044397);
   hnumuCCinFV_stack_9->SetBinError(2,1.606329);
   hnumuCCinFV_stack_9->SetBinError(3,1.447487);
   hnumuCCinFV_stack_9->SetBinError(4,1.596919);
   hnumuCCinFV_stack_9->SetBinError(5,1.704511);
   hnumuCCinFV_stack_9->SetBinError(6,1.259241);
   hnumuCCinFV_stack_9->SetBinError(7,1.314735);
   hnumuCCinFV_stack_9->SetBinError(8,1.601797);
   hnumuCCinFV_stack_9->SetBinError(9,1.669687);
   hnumuCCinFV_stack_9->SetBinError(10,1.536982);
   hnumuCCinFV_stack_9->SetBinError(11,1.653384);
   hnumuCCinFV_stack_9->SetBinError(12,2.315342);
   hnumuCCinFV_stack_9->SetBinError(13,1.7719);
   hnumuCCinFV_stack_9->SetBinError(14,1.998847);
   hnumuCCinFV_stack_9->SetBinError(15,1.373771);
   hnumuCCinFV_stack_9->SetBinError(16,2.147274);
   hnumuCCinFV_stack_9->SetBinError(17,1.568944);
   hnumuCCinFV_stack_9->SetBinError(18,1.776278);
   hnumuCCinFV_stack_9->SetBinError(19,2.20046);
   hnumuCCinFV_stack_9->SetBinError(20,1.390087);
   hnumuCCinFV_stack_9->SetBinError(21,3.015884);
   hnumuCCinFV_stack_9->SetBinError(22,1.669767);
   hnumuCCinFV_stack_9->SetBinError(23,1.791033);
   hnumuCCinFV_stack_9->SetBinError(24,2.104469);
   hnumuCCinFV_stack_9->SetEntries(846);

   ci = 1442;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_10->SetBinContent(1,2.508753);
   hnueCCinFV_stack_10->SetBinContent(2,1.11703);
   hnueCCinFV_stack_10->SetBinContent(3,0.218026);
   hnueCCinFV_stack_10->SetBinContent(4,1.963927);
   hnueCCinFV_stack_10->SetBinContent(5,1.282706);
   hnueCCinFV_stack_10->SetBinContent(6,1.885115);
   hnueCCinFV_stack_10->SetBinContent(7,0.8093879);
   hnueCCinFV_stack_10->SetBinContent(8,0.6876913);
   hnueCCinFV_stack_10->SetBinContent(9,2.439669);
   hnueCCinFV_stack_10->SetBinContent(10,1.401863);
   hnueCCinFV_stack_10->SetBinContent(11,0.6293085);
   hnueCCinFV_stack_10->SetBinContent(12,1.74239);
   hnueCCinFV_stack_10->SetBinContent(13,2.210377);
   hnueCCinFV_stack_10->SetBinContent(15,1.111822);
   hnueCCinFV_stack_10->SetBinContent(16,1.415288);
   hnueCCinFV_stack_10->SetBinContent(17,3.677929);
   hnueCCinFV_stack_10->SetBinContent(18,0.8013275);
   hnueCCinFV_stack_10->SetBinContent(19,1.295415);
   hnueCCinFV_stack_10->SetBinContent(20,2.178747);
   hnueCCinFV_stack_10->SetBinContent(21,0.6205657);
   hnueCCinFV_stack_10->SetBinContent(22,0.00488893);
   hnueCCinFV_stack_10->SetBinContent(23,1.897839);
   hnueCCinFV_stack_10->SetBinContent(24,0.9297878);
   hnueCCinFV_stack_10->SetBinError(1,1.549207);
   hnueCCinFV_stack_10->SetBinError(2,0.5897007);
   hnueCCinFV_stack_10->SetBinError(3,0.2180157);
   hnueCCinFV_stack_10->SetBinError(4,1.200491);
   hnueCCinFV_stack_10->SetBinError(5,0.6598412);
   hnueCCinFV_stack_10->SetBinError(6,0.7660538);
   hnueCCinFV_stack_10->SetBinError(7,0.4746746);
   hnueCCinFV_stack_10->SetBinError(8,0.4006146);
   hnueCCinFV_stack_10->SetBinError(9,1.099958);
   hnueCCinFV_stack_10->SetBinError(10,0.8157702);
   hnueCCinFV_stack_10->SetBinError(11,0.4752197);
   hnueCCinFV_stack_10->SetBinError(12,0.7619955);
   hnueCCinFV_stack_10->SetBinError(13,0.9653382);
   hnueCCinFV_stack_10->SetBinError(15,0.5107116);
   hnueCCinFV_stack_10->SetBinError(16,0.6545221);
   hnueCCinFV_stack_10->SetBinError(17,1.528904);
   hnueCCinFV_stack_10->SetBinError(18,0.4937343);
   hnueCCinFV_stack_10->SetBinError(19,0.6340776);
   hnueCCinFV_stack_10->SetBinError(20,0.9061585);
   hnueCCinFV_stack_10->SetBinError(21,0.3591437);
   hnueCCinFV_stack_10->SetBinError(22,0.00488893);
   hnueCCinFV_stack_10->SetBinError(23,0.7857902);
   hnueCCinFV_stack_10->SetBinError(24,0.4708821);
   hnueCCinFV_stack_10->SetEntries(115);

   ci = 1443;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__2->SetBinContent(1,152.4144);
   hmcerror__2->SetBinContent(2,156.65);
   hmcerror__2->SetBinContent(3,160.9834);
   hmcerror__2->SetBinContent(4,155.5356);
   hmcerror__2->SetBinContent(5,140.2882);
   hmcerror__2->SetBinContent(6,157.2893);
   hmcerror__2->SetBinContent(7,165.3377);
   hmcerror__2->SetBinContent(8,152.5523);
   hmcerror__2->SetBinContent(9,153.2214);
   hmcerror__2->SetBinContent(10,148.3695);
   hmcerror__2->SetBinContent(11,164.1573);
   hmcerror__2->SetBinContent(12,155.8988);
   hmcerror__2->SetBinContent(13,165.7321);
   hmcerror__2->SetBinContent(14,161.8438);
   hmcerror__2->SetBinContent(15,161.3791);
   hmcerror__2->SetBinContent(16,158.1065);
   hmcerror__2->SetBinContent(17,173.0948);
   hmcerror__2->SetBinContent(18,161.1114);
   hmcerror__2->SetBinContent(19,146.9317);
   hmcerror__2->SetBinContent(20,162.2401);
   hmcerror__2->SetBinContent(21,164.4818);
   hmcerror__2->SetBinContent(22,162.4915);
   hmcerror__2->SetBinContent(23,174.0595);
   hmcerror__2->SetBinContent(24,166.831);
   hmcerror__2->SetBinError(1,32.87507);
   hmcerror__2->SetBinError(2,33.20412);
   hmcerror__2->SetBinError(3,31.79166);
   hmcerror__2->SetBinError(4,32.27037);
   hmcerror__2->SetBinError(5,28.53689);
   hmcerror__2->SetBinError(6,28.67076);
   hmcerror__2->SetBinError(7,31.13069);
   hmcerror__2->SetBinError(8,31.17099);
   hmcerror__2->SetBinError(9,33.17482);
   hmcerror__2->SetBinError(10,31.42626);
   hmcerror__2->SetBinError(11,34.43186);
   hmcerror__2->SetBinError(12,33.30415);
   hmcerror__2->SetBinError(13,35.68575);
   hmcerror__2->SetBinError(14,37.22419);
   hmcerror__2->SetBinError(15,36.61141);
   hmcerror__2->SetBinError(16,32.31962);
   hmcerror__2->SetBinError(17,31.76903);
   hmcerror__2->SetBinError(18,31.3288);
   hmcerror__2->SetBinError(19,29.54733);
   hmcerror__2->SetBinError(20,31.55898);
   hmcerror__2->SetBinError(21,36.32454);
   hmcerror__2->SetBinError(22,35.56975);
   hmcerror__2->SetBinError(23,37.668);
   hmcerror__2->SetBinError(24,35.0246);
   hmcerror__2->SetBinError(25,0.4212968);
   hmcerror__2->SetEntries(3775.136);

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
   
   Double_t _fx3001[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3001[24] = {
   179,
   135,
   156,
   145,
   150,
   134,
   160,
   175,
   153,
   160,
   140,
   169,
   185,
   173,
   148,
   173,
   176,
   142,
   156,
   154,
   151,
   190,
   164,
   155};
   Double_t _felx3001[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3001[24] = {
   13.37909,
   11.61895,
   12.49,
   12.04159,
   12.24745,
   11.57584,
   12.64911,
   13.22876,
   12.36932,
   12.64911,
   11.83216,
   13,
   13.60147,
   13.15295,
   12.16553,
   13.15295,
   13.2665,
   11.91638,
   12.49,
   12.40967,
   12.28821,
   13.78405,
   12.80625,
   12.4499};
   Double_t _fehx3001[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3001[24] = {
   13.37909,
   11.61895,
   12.49,
   12.04159,
   12.24745,
   11.57584,
   12.64911,
   13.22876,
   12.36932,
   12.64911,
   11.83216,
   13,
   13.60147,
   13.15295,
   12.16553,
   13.15295,
   13.2665,
   11.91638,
   12.49,
   12.40967,
   12.28821,
   13.78405,
   12.80625,
   12.4499};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-3.78,3.78);
   Graph_Graph3001->SetMinimum(114.2882);
   Graph_Graph3001->SetMaximum(211.92);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=22.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1556.7","F");

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 627.0","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 145.1","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 219.2","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1443;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all");
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
   
   Double_t _fx3002[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3002[24] = {
   0.2156954,
   0.2119638,
   0.1974841,
   0.207479,
   0.2034162,
   0.1822805,
   0.1882855,
   0.2043298,
   0.2165156,
   0.2118108,
   0.2097492,
   0.2136267,
   0.2153219,
   0.2300007,
   0.2268659,
   0.2044168,
   0.1835355,
   0.1944543,
   0.2010957,
   0.1945203,
   0.2208423,
   0.2189022,
   0.2164088,
   0.2099406};
   Double_t _fehx3002[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3002[24] = {
   0.2156954,
   0.2119638,
   0.1974841,
   0.207479,
   0.2034162,
   0.1822805,
   0.1882855,
   0.2043298,
   0.2165156,
   0.2118108,
   0.2097492,
   0.2136267,
   0.2153219,
   0.2300007,
   0.2268659,
   0.2044168,
   0.1835355,
   0.1944543,
   0.2010957,
   0.1945203,
   0.2208423,
   0.2189022,
   0.2164088,
   0.2099406};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
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
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
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
   
   Double_t _fx3003[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3003[24] = {
   0.1875447,
   0.1924588,
   0.1855849,
   0.1862685,
   0.1790783,
   0.1756606,
   0.1736464,
   0.1773158,
   0.1831107,
   0.1968119,
   0.1852607,
   0.1916133,
   0.1935925,
   0.1923681,
   0.2017184,
   0.1881576,
   0.1746797,
   0.1762456,
   0.1860708,
   0.1795287,
   0.1879149,
   0.194734,
   0.1890702,
   0.1839448};
   Double_t _fehx3003[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3003[24] = {
   0.1875447,
   0.1924588,
   0.1855849,
   0.1862685,
   0.1790783,
   0.1756606,
   0.1736464,
   0.1773158,
   0.1831107,
   0.1968119,
   0.1852607,
   0.1916133,
   0.1935925,
   0.1923681,
   0.2017184,
   0.1881576,
   0.1746797,
   0.1762456,
   0.1860708,
   0.1795287,
   0.1879149,
   0.194734,
   0.1890702,
   0.1839448};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
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
   
   Double_t _fx3004[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3004[24] = {
   1.17443,
   0.8617938,
   0.9690441,
   0.9322626,
   1.069227,
   0.8519336,
   0.9677162,
   1.147148,
   0.9985553,
   1.078389,
   0.8528404,
   1.084036,
   1.116259,
   1.068932,
   0.9170953,
   1.094199,
   1.016784,
   0.881378,
   1.061718,
   0.9492107,
   0.9180346,
   1.169292,
   0.9422067,
   0.9290838};
   Double_t _felx3004[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3004[24] = {
   0.08778101,
   0.0741714,
   0.07758562,
   0.07742019,
   0.08730204,
   0.07359585,
   0.07650469,
   0.0867162,
   0.08072841,
   0.08525412,
   0.07207817,
   0.08338742,
   0.082069,
   0.08126937,
   0.07538477,
   0.08319043,
   0.07664298,
   0.0739636,
   0.08500545,
   0.07648958,
   0.07470859,
   0.08482934,
   0.07357398,
   0.07462581};
   Double_t _fehx3004[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3004[24] = {
   0.08778101,
   0.0741714,
   0.07758562,
   0.07742019,
   0.08730204,
   0.07359585,
   0.07650469,
   0.0867162,
   0.08072841,
   0.08525412,
   0.07207817,
   0.08338742,
   0.082069,
   0.08126937,
   0.07538477,
   0.08319043,
   0.07664298,
   0.0739636,
   0.08500545,
   0.07648958,
   0.07470859,
   0.08482934,
   0.07357398,
   0.07462581};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-3.78,3.78);
   Graph_Graph3004->SetMinimum(0.7299504);
   Graph_Graph3004->SetMaximum(1.310598);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
