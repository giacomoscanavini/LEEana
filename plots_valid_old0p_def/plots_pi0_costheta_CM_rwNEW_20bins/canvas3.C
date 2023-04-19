#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Fri Feb 17 23:12:05 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.1538462,-3.223553,1.128205,356.457);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmc__7->SetBinContent(1,80.73031);
   hmc__7->SetBinContent(2,74.00512);
   hmc__7->SetBinContent(3,70.14278);
   hmc__7->SetBinContent(4,67.27686);
   hmc__7->SetBinContent(5,72.1167);
   hmc__7->SetBinContent(6,75.14514);
   hmc__7->SetBinContent(7,73.39472);
   hmc__7->SetBinContent(8,65.05115);
   hmc__7->SetBinContent(9,72.7488);
   hmc__7->SetBinContent(10,76.62028);
   hmc__7->SetBinContent(11,82.48777);
   hmc__7->SetBinContent(12,73.07033);
   hmc__7->SetBinContent(13,84.89841);
   hmc__7->SetBinContent(14,80.85383);
   hmc__7->SetBinContent(15,84.90069);
   hmc__7->SetBinContent(16,89.29454);
   hmc__7->SetBinContent(17,91.57368);
   hmc__7->SetBinContent(18,95.00359);
   hmc__7->SetBinContent(19,114.5631);
   hmc__7->SetBinContent(20,161.1776);
   hmc__7->SetBinError(1,23.11466);
   hmc__7->SetBinError(2,28.32024);
   hmc__7->SetBinError(3,21.44877);
   hmc__7->SetBinError(4,24.60648);
   hmc__7->SetBinError(5,27.31555);
   hmc__7->SetBinError(6,23.26497);
   hmc__7->SetBinError(7,24.79918);
   hmc__7->SetBinError(8,23.37811);
   hmc__7->SetBinError(9,22.48218);
   hmc__7->SetBinError(10,25.46006);
   hmc__7->SetBinError(11,26.60841);
   hmc__7->SetBinError(12,22.24374);
   hmc__7->SetBinError(13,37.13488);
   hmc__7->SetBinError(14,29.1632);
   hmc__7->SetBinError(15,25.64301);
   hmc__7->SetBinError(16,47.91554);
   hmc__7->SetBinError(17,29.71317);
   hmc__7->SetBinError(18,34.04118);
   hmc__7->SetBinError(19,36.6502);
   hmc__7->SetBinError(20,40.05684);
   hmc__7->SetBinError(21,0.3895343);
   hmc__7->SetMinimum(-3.223553);
   hmc__7->SetMaximum(338.473);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,0,1);
   hs3_stack_3->SetMinimum(-6.289654e-09);
   hs3_stack_3->SetMaximum(169.2365);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hbadmatch_stack_1->SetBinContent(1,5.772284);
   hbadmatch_stack_1->SetBinContent(2,3.469034);
   hbadmatch_stack_1->SetBinContent(3,3.698236);
   hbadmatch_stack_1->SetBinContent(4,1.320373);
   hbadmatch_stack_1->SetBinContent(5,2.486059);
   hbadmatch_stack_1->SetBinContent(6,2.739468);
   hbadmatch_stack_1->SetBinContent(7,1.562739);
   hbadmatch_stack_1->SetBinContent(8,3.841645);
   hbadmatch_stack_1->SetBinContent(9,2.636964);
   hbadmatch_stack_1->SetBinContent(10,1.951889);
   hbadmatch_stack_1->SetBinContent(11,2.972322);
   hbadmatch_stack_1->SetBinContent(12,2.998682);
   hbadmatch_stack_1->SetBinContent(13,2.207989);
   hbadmatch_stack_1->SetBinContent(14,2.922469);
   hbadmatch_stack_1->SetBinContent(15,2.743142);
   hbadmatch_stack_1->SetBinContent(16,1.658284);
   hbadmatch_stack_1->SetBinContent(17,2.428185);
   hbadmatch_stack_1->SetBinContent(18,2.623511);
   hbadmatch_stack_1->SetBinContent(19,1.978044);
   hbadmatch_stack_1->SetBinContent(20,4.447381);
   hbadmatch_stack_1->SetBinError(1,1.571534);
   hbadmatch_stack_1->SetBinError(2,0.9222001);
   hbadmatch_stack_1->SetBinError(3,1.056694);
   hbadmatch_stack_1->SetBinError(4,0.5548703);
   hbadmatch_stack_1->SetBinError(5,0.8559962);
   hbadmatch_stack_1->SetBinError(6,0.8960075);
   hbadmatch_stack_1->SetBinError(7,0.604705);
   hbadmatch_stack_1->SetBinError(8,1.041665);
   hbadmatch_stack_1->SetBinError(9,0.8462794);
   hbadmatch_stack_1->SetBinError(10,0.7618679);
   hbadmatch_stack_1->SetBinError(11,1.063552);
   hbadmatch_stack_1->SetBinError(12,0.9296156);
   hbadmatch_stack_1->SetBinError(13,0.8424987);
   hbadmatch_stack_1->SetBinError(14,0.8316466);
   hbadmatch_stack_1->SetBinError(15,0.7739623);
   hbadmatch_stack_1->SetBinError(16,0.7618215);
   hbadmatch_stack_1->SetBinError(17,0.7870524);
   hbadmatch_stack_1->SetBinError(18,0.8181899);
   hbadmatch_stack_1->SetBinError(19,0.7683811);
   hbadmatch_stack_1->SetBinError(20,1.056936);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hext_stack_2->SetBinContent(1,14.92713);
   hext_stack_2->SetBinContent(2,12.27847);
   hext_stack_2->SetBinContent(3,8.358175);
   hext_stack_2->SetBinContent(4,8.503808);
   hext_stack_2->SetBinContent(5,11.68593);
   hext_stack_2->SetBinContent(6,10.35804);
   hext_stack_2->SetBinContent(7,8.346586);
   hext_stack_2->SetBinContent(8,6.165187);
   hext_stack_2->SetBinContent(9,9.991752);
   hext_stack_2->SetBinContent(10,15.74033);
   hext_stack_2->SetBinContent(11,13.37576);
   hext_stack_2->SetBinContent(12,11.65563);
   hext_stack_2->SetBinContent(13,16.42225);
   hext_stack_2->SetBinContent(14,14.94867);
   hext_stack_2->SetBinContent(15,12.8004);
   hext_stack_2->SetBinContent(16,21.25231);
   hext_stack_2->SetBinContent(17,17.0451);
   hext_stack_2->SetBinContent(18,24.24691);
   hext_stack_2->SetBinContent(19,21.4283);
   hext_stack_2->SetBinContent(20,28.0547);
   hext_stack_2->SetBinError(1,2.754178);
   hext_stack_2->SetBinError(2,2.42461);
   hext_stack_2->SetBinError(3,1.811782);
   hext_stack_2->SetBinError(4,1.915728);
   hext_stack_2->SetBinError(5,2.489345);
   hext_stack_2->SetBinError(6,2.186058);
   hext_stack_2->SetBinError(7,1.829927);
   hext_stack_2->SetBinError(8,1.571905);
   hext_stack_2->SetBinError(9,1.934591);
   hext_stack_2->SetBinError(10,2.813564);
   hext_stack_2->SetBinError(11,2.680578);
   hext_stack_2->SetBinError(12,2.280304);
   hext_stack_2->SetBinError(13,2.730738);
   hext_stack_2->SetBinError(14,2.642327);
   hext_stack_2->SetBinError(15,2.331193);
   hext_stack_2->SetBinError(16,3.168823);
   hext_stack_2->SetBinError(17,2.852346);
   hext_stack_2->SetBinError(18,3.354077);
   hext_stack_2->SetBinError(19,3.177348);
   hext_stack_2->SetBinError(20,3.576153);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hdirt_stack_3->SetBinContent(1,0.9559124);
   hdirt_stack_3->SetBinContent(2,0.3381872);
   hdirt_stack_3->SetBinContent(3,0.6345888);
   hdirt_stack_3->SetBinContent(4,1.328971);
   hdirt_stack_3->SetBinContent(5,0.63311);
   hdirt_stack_3->SetBinContent(6,1.070957);
   hdirt_stack_3->SetBinContent(7,0.4808991);
   hdirt_stack_3->SetBinContent(8,1.033342);
   hdirt_stack_3->SetBinContent(9,1.033342);
   hdirt_stack_3->SetBinContent(10,0.7431665);
   hdirt_stack_3->SetBinContent(11,1.580256);
   hdirt_stack_3->SetBinContent(12,1.8018);
   hdirt_stack_3->SetBinContent(13,0.5493491);
   hdirt_stack_3->SetBinContent(14,0.7329059);
   hdirt_stack_3->SetBinContent(15,0.7001346);
   hdirt_stack_3->SetBinContent(16,1.906377);
   hdirt_stack_3->SetBinContent(17,1.876863);
   hdirt_stack_3->SetBinContent(18,1.174613);
   hdirt_stack_3->SetBinContent(19,1.856325);
   hdirt_stack_3->SetBinContent(20,3.335283);
   hdirt_stack_3->SetBinError(1,0.5668782);
   hdirt_stack_3->SetBinError(2,0.3381872);
   hdirt_stack_3->SetBinError(3,0.398124);
   hdirt_stack_3->SetBinError(4,0.6335807);
   hdirt_stack_3->SetBinError(5,0.3242013);
   hdirt_stack_3->SetBinError(6,0.561574);
   hdirt_stack_3->SetBinError(7,0.3414105);
   hdirt_stack_3->SetBinError(8,0.5438016);
   hdirt_stack_3->SetBinError(9,0.5438016);
   hdirt_stack_3->SetBinError(10,0.4648968);
   hdirt_stack_3->SetBinError(11,0.6863214);
   hdirt_stack_3->SetBinError(12,0.6616433);
   hdirt_stack_3->SetBinError(13,0.3293557);
   hdirt_stack_3->SetBinError(14,0.377277);
   hdirt_stack_3->SetBinError(15,0.4057766);
   hdirt_stack_3->SetBinError(16,0.7163709);
   hdirt_stack_3->SetBinError(17,1.084937);
   hdirt_stack_3->SetBinError(18,0.545122);
   hdirt_stack_3->SetBinError(19,0.7561191);
   hdirt_stack_3->SetBinError(20,0.9646298);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   houtFV_stack_4->SetBinContent(1,14.75154);
   houtFV_stack_4->SetBinContent(2,13.23335);
   houtFV_stack_4->SetBinContent(3,11.4142);
   houtFV_stack_4->SetBinContent(4,13.03591);
   houtFV_stack_4->SetBinContent(5,13.39309);
   houtFV_stack_4->SetBinContent(6,14.00915);
   houtFV_stack_4->SetBinContent(7,15.16341);
   houtFV_stack_4->SetBinContent(8,12.19385);
   houtFV_stack_4->SetBinContent(9,12.87885);
   houtFV_stack_4->SetBinContent(10,13.92126);
   houtFV_stack_4->SetBinContent(11,17.01552);
   houtFV_stack_4->SetBinContent(12,14.63891);
   houtFV_stack_4->SetBinContent(13,19.25558);
   houtFV_stack_4->SetBinContent(14,14.28135);
   houtFV_stack_4->SetBinContent(15,19.07789);
   houtFV_stack_4->SetBinContent(16,15.69242);
   houtFV_stack_4->SetBinContent(17,18.16545);
   houtFV_stack_4->SetBinContent(18,16.9968);
   houtFV_stack_4->SetBinContent(19,25.28759);
   houtFV_stack_4->SetBinContent(20,30.60227);
   houtFV_stack_4->SetBinError(1,1.942099);
   houtFV_stack_4->SetBinError(2,1.835327);
   houtFV_stack_4->SetBinError(3,1.68731);
   houtFV_stack_4->SetBinError(4,1.791195);
   houtFV_stack_4->SetBinError(5,1.836854);
   houtFV_stack_4->SetBinError(6,1.934544);
   houtFV_stack_4->SetBinError(7,2.140248);
   houtFV_stack_4->SetBinError(8,1.780336);
   houtFV_stack_4->SetBinError(9,1.771236);
   houtFV_stack_4->SetBinError(10,1.930111);
   houtFV_stack_4->SetBinError(11,2.05693);
   houtFV_stack_4->SetBinError(12,1.924793);
   houtFV_stack_4->SetBinError(13,2.549038);
   houtFV_stack_4->SetBinError(14,1.858426);
   houtFV_stack_4->SetBinError(15,2.214854);
   houtFV_stack_4->SetBinError(16,2.076881);
   houtFV_stack_4->SetBinError(17,2.141794);
   houtFV_stack_4->SetBinError(18,2.044831);
   houtFV_stack_4->SetBinError(19,2.481257);
   houtFV_stack_4->SetBinError(20,2.790711);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.07449);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.9069222);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.5717859);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4042178);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.9052579);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.088108);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.4457358);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.613304);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.031308);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.906754);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.267126);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.718934);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4095739);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3610006);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2355051);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1342881);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.302967);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4181941);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1610816);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2517472);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3482878);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3123499);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2874755);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5653962);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.307068);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2032767);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,11.65609);
   hNCpi0inFVres_stack_7->SetBinContent(2,14.64008);
   hNCpi0inFVres_stack_7->SetBinContent(3,12.59109);
   hNCpi0inFVres_stack_7->SetBinContent(4,14.04206);
   hNCpi0inFVres_stack_7->SetBinContent(5,13.80558);
   hNCpi0inFVres_stack_7->SetBinContent(6,14.58312);
   hNCpi0inFVres_stack_7->SetBinContent(7,16.64874);
   hNCpi0inFVres_stack_7->SetBinContent(8,11.50231);
   hNCpi0inFVres_stack_7->SetBinContent(9,13.66374);
   hNCpi0inFVres_stack_7->SetBinContent(10,13.74761);
   hNCpi0inFVres_stack_7->SetBinContent(11,13.27331);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.09529);
   hNCpi0inFVres_stack_7->SetBinContent(13,11.64397);
   hNCpi0inFVres_stack_7->SetBinContent(14,13.63717);
   hNCpi0inFVres_stack_7->SetBinContent(15,13.68998);
   hNCpi0inFVres_stack_7->SetBinContent(16,15.72986);
   hNCpi0inFVres_stack_7->SetBinContent(17,15.29674);
   hNCpi0inFVres_stack_7->SetBinContent(18,13.32927);
   hNCpi0inFVres_stack_7->SetBinContent(19,17.87084);
   hNCpi0inFVres_stack_7->SetBinContent(20,20.70786);
   hNCpi0inFVres_stack_7->SetBinError(1,1.066158);
   hNCpi0inFVres_stack_7->SetBinError(2,1.239365);
   hNCpi0inFVres_stack_7->SetBinError(3,1.140417);
   hNCpi0inFVres_stack_7->SetBinError(4,1.2322);
   hNCpi0inFVres_stack_7->SetBinError(5,1.253184);
   hNCpi0inFVres_stack_7->SetBinError(6,1.262621);
   hNCpi0inFVres_stack_7->SetBinError(7,1.4117);
   hNCpi0inFVres_stack_7->SetBinError(8,1.067313);
   hNCpi0inFVres_stack_7->SetBinError(9,1.181952);
   hNCpi0inFVres_stack_7->SetBinError(10,1.196706);
   hNCpi0inFVres_stack_7->SetBinError(11,1.191164);
   hNCpi0inFVres_stack_7->SetBinError(12,1.191055);
   hNCpi0inFVres_stack_7->SetBinError(13,1.065519);
   hNCpi0inFVres_stack_7->SetBinError(14,1.170148);
   hNCpi0inFVres_stack_7->SetBinError(15,1.165872);
   hNCpi0inFVres_stack_7->SetBinError(16,1.322665);
   hNCpi0inFVres_stack_7->SetBinError(17,1.29561);
   hNCpi0inFVres_stack_7->SetBinError(18,1.143966);
   hNCpi0inFVres_stack_7->SetBinError(19,1.346578);
   hNCpi0inFVres_stack_7->SetBinError(20,1.453582);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.915562);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.23492);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.262156);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.900448);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.248538);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.88783);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.221629);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.440262);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.998766);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.03862);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.637642);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.346352);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.988556);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.584002);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.33631);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.847392);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.97261);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.017784);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.959824);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.526304);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5460186);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6112109);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6227759);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5340667);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6170205);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5745579);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5361274);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4825746);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5888321);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.562232);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6211591);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5864584);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6783168);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6136469);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7000592);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6462888);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.65417);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6587159);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.663377);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8574506);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hCCpi0inFV_stack_10->SetBinContent(1,14.18186);
   hCCpi0inFV_stack_10->SetBinContent(2,14.45276);
   hCCpi0inFV_stack_10->SetBinContent(3,16.85327);
   hCCpi0inFV_stack_10->SetBinContent(4,12.9285);
   hCCpi0inFV_stack_10->SetBinContent(5,14.45089);
   hCCpi0inFV_stack_10->SetBinContent(6,17.68251);
   hCCpi0inFV_stack_10->SetBinContent(7,15.71904);
   hCCpi0inFV_stack_10->SetBinContent(8,12.88919);
   hCCpi0inFV_stack_10->SetBinContent(9,14.1045);
   hCCpi0inFV_stack_10->SetBinContent(10,13.47613);
   hCCpi0inFV_stack_10->SetBinContent(11,16.23801);
   hCCpi0inFV_stack_10->SetBinContent(12,13.05076);
   hCCpi0inFV_stack_10->SetBinContent(13,15.00065);
   hCCpi0inFV_stack_10->SetBinContent(14,17.4164);
   hCCpi0inFV_stack_10->SetBinContent(15,14.95326);
   hCCpi0inFV_stack_10->SetBinContent(16,14.71957);
   hCCpi0inFV_stack_10->SetBinContent(17,14.61431);
   hCCpi0inFV_stack_10->SetBinContent(18,15.57522);
   hCCpi0inFV_stack_10->SetBinContent(19,19.98209);
   hCCpi0inFV_stack_10->SetBinContent(20,30.80697);
   hCCpi0inFV_stack_10->SetBinError(1,1.841678);
   hCCpi0inFV_stack_10->SetBinError(2,1.968002);
   hCCpi0inFV_stack_10->SetBinError(3,2.074315);
   hCCpi0inFV_stack_10->SetBinError(4,1.876561);
   hCCpi0inFV_stack_10->SetBinError(5,1.948912);
   hCCpi0inFV_stack_10->SetBinError(6,2.101327);
   hCCpi0inFV_stack_10->SetBinError(7,2.005666);
   hCCpi0inFV_stack_10->SetBinError(8,1.780983);
   hCCpi0inFV_stack_10->SetBinError(9,1.849261);
   hCCpi0inFV_stack_10->SetBinError(10,1.857639);
   hCCpi0inFV_stack_10->SetBinError(11,2.012534);
   hCCpi0inFV_stack_10->SetBinError(12,1.80994);
   hCCpi0inFV_stack_10->SetBinError(13,1.923344);
   hCCpi0inFV_stack_10->SetBinError(14,2.131064);
   hCCpi0inFV_stack_10->SetBinError(15,1.970949);
   hCCpi0inFV_stack_10->SetBinError(16,1.919499);
   hCCpi0inFV_stack_10->SetBinError(17,1.873664);
   hCCpi0inFV_stack_10->SetBinError(18,2.003876);
   hCCpi0inFV_stack_10->SetBinError(19,2.249492);
   hCCpi0inFV_stack_10->SetBinError(20,2.83942);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hNCinFV_stack_11->SetBinContent(1,4.643166);
   hNCinFV_stack_11->SetBinContent(2,4.681813);
   hNCinFV_stack_11->SetBinContent(3,3.17764);
   hNCinFV_stack_11->SetBinContent(4,4.048408);
   hNCinFV_stack_11->SetBinContent(5,3.225821);
   hNCinFV_stack_11->SetBinContent(6,2.055672);
   hNCinFV_stack_11->SetBinContent(7,3.272921);
   hNCinFV_stack_11->SetBinContent(8,3.166414);
   hNCinFV_stack_11->SetBinContent(9,5.268578);
   hNCinFV_stack_11->SetBinContent(10,2.837462);
   hNCinFV_stack_11->SetBinContent(11,3.967882);
   hNCinFV_stack_11->SetBinContent(12,1.908829);
   hNCinFV_stack_11->SetBinContent(13,3.767786);
   hNCinFV_stack_11->SetBinContent(14,4.049639);
   hNCinFV_stack_11->SetBinContent(15,3.66128);
   hNCinFV_stack_11->SetBinContent(16,2.690619);
   hNCinFV_stack_11->SetBinContent(17,1.322064);
   hNCinFV_stack_11->SetBinContent(18,4.198173);
   hNCinFV_stack_11->SetBinContent(19,4.246354);
   hNCinFV_stack_11->SetBinContent(20,7.270997);
   hNCinFV_stack_11->SetBinError(1,1.075057);
   hNCinFV_stack_11->SetBinError(2,1.14459);
   hNCinFV_stack_11->SetBinError(3,0.8775989);
   hNCinFV_stack_11->SetBinError(4,1.039639);
   hNCinFV_stack_11->SetBinError(5,0.854322);
   hNCinFV_stack_11->SetBinError(6,0.7082781);
   hNCinFV_stack_11->SetBinError(7,0.9420814);
   hNCinFV_stack_11->SetBinError(8,0.9819222);
   hNCinFV_stack_11->SetBinError(9,1.193672);
   hNCinFV_stack_11->SetBinError(10,0.8089864);
   hNCinFV_stack_11->SetBinError(11,0.9624406);
   hNCinFV_stack_11->SetBinError(12,0.6506224);
   hNCinFV_stack_11->SetBinError(13,0.9414194);
   hNCinFV_stack_11->SetBinError(14,1.018986);
   hNCinFV_stack_11->SetBinError(15,0.9812871);
   hNCinFV_stack_11->SetBinError(16,0.7590195);
   hNCinFV_stack_11->SetBinError(17,0.5554667);
   hNCinFV_stack_11->SetBinError(18,1.057044);
   hNCinFV_stack_11->SetBinError(19,1.0378);
   hNCinFV_stack_11->SetBinError(20,1.401727);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnumuCCinFV_stack_12->SetBinContent(1,10.28599);
   hnumuCCinFV_stack_12->SetBinContent(2,7.160517);
   hnumuCCinFV_stack_12->SetBinContent(3,9.762658);
   hnumuCCinFV_stack_12->SetBinContent(4,8.539382);
   hnumuCCinFV_stack_12->SetBinContent(5,8.295269);
   hnumuCCinFV_stack_12->SetBinContent(6,8.6839);
   hnumuCCinFV_stack_12->SetBinContent(7,7.960236);
   hnumuCCinFV_stack_12->SetBinContent(8,11.49842);
   hnumuCCinFV_stack_12->SetBinContent(9,9.544727);
   hnumuCCinFV_stack_12->SetBinContent(10,10.46473);
   hnumuCCinFV_stack_12->SetBinContent(11,9.798239);
   hnumuCCinFV_stack_12->SetBinContent(12,10.03019);
   hnumuCCinFV_stack_12->SetBinContent(13,10.14507);
   hnumuCCinFV_stack_12->SetBinContent(14,7.366797);
   hnumuCCinFV_stack_12->SetBinContent(15,12.40885);
   hnumuCCinFV_stack_12->SetBinContent(16,10.81633);
   hnumuCCinFV_stack_12->SetBinContent(17,15.34517);
   hnumuCCinFV_stack_12->SetBinContent(18,11.61263);
   hnumuCCinFV_stack_12->SetBinContent(19,13.959);
   hnumuCCinFV_stack_12->SetBinContent(20,20.67937);
   hnumuCCinFV_stack_12->SetBinError(1,1.797538);
   hnumuCCinFV_stack_12->SetBinError(2,1.305955);
   hnumuCCinFV_stack_12->SetBinError(3,1.630178);
   hnumuCCinFV_stack_12->SetBinError(4,1.499528);
   hnumuCCinFV_stack_12->SetBinError(5,1.807177);
   hnumuCCinFV_stack_12->SetBinError(6,1.477742);
   hnumuCCinFV_stack_12->SetBinError(7,1.381731);
   hnumuCCinFV_stack_12->SetBinError(8,2.47372);
   hnumuCCinFV_stack_12->SetBinError(9,1.66114);
   hnumuCCinFV_stack_12->SetBinError(10,2.110795);
   hnumuCCinFV_stack_12->SetBinError(11,1.780075);
   hnumuCCinFV_stack_12->SetBinError(12,1.797251);
   hnumuCCinFV_stack_12->SetBinError(13,1.736796);
   hnumuCCinFV_stack_12->SetBinError(14,1.388192);
   hnumuCCinFV_stack_12->SetBinError(15,2.081737);
   hnumuCCinFV_stack_12->SetBinError(16,1.800065);
   hnumuCCinFV_stack_12->SetBinError(17,2.331677);
   hnumuCCinFV_stack_12->SetBinError(18,2.046858);
   hnumuCCinFV_stack_12->SetBinError(19,2.871721);
   hnumuCCinFV_stack_12->SetBinError(20,2.611613);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(14,0.4634305);
   hnueCCinFV_stack_13->SetBinContent(16,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,2.643929);
   hnueCCinFV_stack_13->SetBinContent(20,5.720497);
   hnueCCinFV_stack_13->SetBinError(1,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.2758068);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.4394482);
   hnueCCinFV_stack_13->SetBinError(14,0.328346);
   hnueCCinFV_stack_13->SetBinError(16,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,1.334701);
   hnueCCinFV_stack_13->SetBinError(20,2.002438);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);
   hmcerror__8->SetBinContent(1,80.73031);
   hmcerror__8->SetBinContent(2,74.00512);
   hmcerror__8->SetBinContent(3,70.14278);
   hmcerror__8->SetBinContent(4,67.27686);
   hmcerror__8->SetBinContent(5,72.1167);
   hmcerror__8->SetBinContent(6,75.14514);
   hmcerror__8->SetBinContent(7,73.39472);
   hmcerror__8->SetBinContent(8,65.05115);
   hmcerror__8->SetBinContent(9,72.7488);
   hmcerror__8->SetBinContent(10,76.62028);
   hmcerror__8->SetBinContent(11,82.48777);
   hmcerror__8->SetBinContent(12,73.07033);
   hmcerror__8->SetBinContent(13,84.89841);
   hmcerror__8->SetBinContent(14,80.85383);
   hmcerror__8->SetBinContent(15,84.90069);
   hmcerror__8->SetBinContent(16,89.29454);
   hmcerror__8->SetBinContent(17,91.57368);
   hmcerror__8->SetBinContent(18,95.00359);
   hmcerror__8->SetBinContent(19,114.5631);
   hmcerror__8->SetBinContent(20,161.1776);
   hmcerror__8->SetBinError(1,23.11466);
   hmcerror__8->SetBinError(2,28.32024);
   hmcerror__8->SetBinError(3,21.44877);
   hmcerror__8->SetBinError(4,24.60648);
   hmcerror__8->SetBinError(5,27.31555);
   hmcerror__8->SetBinError(6,23.26497);
   hmcerror__8->SetBinError(7,24.79918);
   hmcerror__8->SetBinError(8,23.37811);
   hmcerror__8->SetBinError(9,22.48218);
   hmcerror__8->SetBinError(10,25.46006);
   hmcerror__8->SetBinError(11,26.60841);
   hmcerror__8->SetBinError(12,22.24374);
   hmcerror__8->SetBinError(13,37.13488);
   hmcerror__8->SetBinError(14,29.1632);
   hmcerror__8->SetBinError(15,25.64301);
   hmcerror__8->SetBinError(16,47.91554);
   hmcerror__8->SetBinError(17,29.71317);
   hmcerror__8->SetBinError(18,34.04118);
   hmcerror__8->SetBinError(19,36.6502);
   hmcerror__8->SetBinError(20,40.05684);
   hmcerror__8->SetBinError(21,0.3895343);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3009[20] = {
   77,
   61,
   64,
   65,
   72,
   62,
   80,
   57,
   68,
   49,
   72,
   61,
   61,
   68,
   71,
   80,
   87,
   68,
   112,
   135};
   Double_t _felx3009[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3009[20] = {
   8.8995,
   7.9383,
   8.1273,
   8.1893,
   8.6108,
   8.0018,
   9.0683,
   7.679,
   8.3726,
   7.1318,
   8.6108,
   7.9383,
   7.9383,
   8.3726,
   8.5518,
   9.0683,
   9.4503,
   8.3726,
   10.58301,
   11.61895};
   Double_t _fehx3009[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3009[20] = {
   8.6976,
   7.7354,
   7.9246,
   7.9866,
   8.4085,
   7.7989,
   8.8665,
   7.4757,
   8.1701,
   6.9277,
   8.4085,
   7.7354,
   7.7354,
   8.1701,
   8.3496,
   8.8665,
   9.2488,
   8.1701,
   10.58301,
   11.61895};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1.1);
   Graph_Graph3009->SetMinimum(31.39312);
   Graph_Graph3009->SetMaximum(157.094);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.1/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1470.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.5","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 287.6","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 325.0","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.8","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  285.2","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  71.4","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 319.1","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 73.5","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 214.4","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.154,-0.5333333,1.129333,2.133333);
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
   
   Double_t _fx3010[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3010[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3010[20] = {
   0.2863195,
   0.3826795,
   0.3057873,
   0.3657495,
   0.3787687,
   0.3096004,
   0.3378878,
   0.3593804,
   0.3090385,
   0.3322888,
   0.322574,
   0.3044154,
   0.4374038,
   0.3606904,
   0.3020353,
   0.536601,
   0.3244728,
   0.3583147,
   0.3199127,
   0.2485261};
   Double_t _fehx3010[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3010[20] = {
   0.2863195,
   0.3826795,
   0.3057873,
   0.3657495,
   0.3787687,
   0.3096004,
   0.3378878,
   0.3593804,
   0.3090385,
   0.3322888,
   0.322574,
   0.3044154,
   0.4374038,
   0.3606904,
   0.3020353,
   0.536601,
   0.3244728,
   0.3583147,
   0.3199127,
   0.2485261};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1.1);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} cos #theta_{CM}");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3011[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3011[20] = {
   0.1820809,
   0.2190367,
   0.1952238,
   0.2212345,
   0.2066086,
   0.207495,
   0.2194049,
   0.219996,
   0.1948468,
   0.1875855,
   0.1951982,
   0.1959828,
   0.1798531,
   0.1830612,
   0.1878389,
   0.1790353,
   0.1897702,
   0.1690845,
   0.169786,
   0.1610391};
   Double_t _fehx3011[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3011[20] = {
   0.1820809,
   0.2190367,
   0.1952238,
   0.2212345,
   0.2066086,
   0.207495,
   0.2194049,
   0.219996,
   0.1948468,
   0.1875855,
   0.1951982,
   0.1959828,
   0.1798531,
   0.1830612,
   0.1878389,
   0.1790353,
   0.1897702,
   0.1690845,
   0.169786,
   0.1610391};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1.1);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[20] = {
   0.025,
   0.075,
   0.125,
   0.175,
   0.225,
   0.275,
   0.325,
   0.375,
   0.425,
   0.475,
   0.525,
   0.575,
   0.625,
   0.675,
   0.725,
   0.775,
   0.825,
   0.875,
   0.925,
   0.975};
   Double_t _fy3012[20] = {
   0.953793,
   0.8242673,
   0.9124247,
   0.9661568,
   0.9983818,
   0.82507,
   1.089997,
   0.8762336,
   0.9347233,
   0.6395174,
   0.8728567,
   0.8348122,
   0.7185058,
   0.8410239,
   0.8362712,
   0.8959114,
   0.9500546,
   0.7157625,
   0.9776268,
   0.8375852};
   Double_t _felx3012[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fely3012[20] = {
   0.1102374,
   0.1072669,
   0.115868,
   0.1217254,
   0.1194009,
   0.1064846,
   0.1235552,
   0.1180456,
   0.1150892,
   0.0930798,
   0.1043888,
   0.1086392,
   0.09350352,
   0.1035523,
   0.1007271,
   0.1015549,
   0.1031989,
   0.08812931,
   0.09237705,
   0.07208786};
   Double_t _fehx3012[20] = {
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025,
   0.025};
   Double_t _fehy3012[20] = {
   0.1077365,
   0.1045252,
   0.1129781,
   0.1187124,
   0.1165957,
   0.1037845,
   0.1208057,
   0.1149203,
   0.1123056,
   0.09041601,
   0.1019363,
   0.1058624,
   0.09111361,
   0.1010478,
   0.09834549,
   0.09929498,
   0.1009984,
   0.08599781,
   0.09237705,
   0.07208786};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1.1);
   Graph_Graph3012->SetMinimum(0.4800011);
   Graph_Graph3012->SetMaximum(1.277239);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_pi0_costheta_CM_all",20,0,1);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,1,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
