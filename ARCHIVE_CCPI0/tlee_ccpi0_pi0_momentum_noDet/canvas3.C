#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Sep 28 18:06:29 2022) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-17.34,1692.308,1917.439);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__7->SetBinContent(1,134.8406);
   hmc__7->SetBinContent(2,545.8496);
   hmc__7->SetBinContent(3,811.3525);
   hmc__7->SetBinContent(4,748.4133);
   hmc__7->SetBinContent(5,586.9277);
   hmc__7->SetBinContent(6,504.0199);
   hmc__7->SetBinContent(7,386.6386);
   hmc__7->SetBinContent(8,281.2821);
   hmc__7->SetBinContent(9,184.8772);
   hmc__7->SetBinContent(10,148.1685);
   hmc__7->SetBinContent(11,86.45127);
   hmc__7->SetBinContent(12,71.93429);
   hmc__7->SetBinContent(13,57.56454);
   hmc__7->SetBinContent(14,43.97629);
   hmc__7->SetBinContent(15,28.01019);
   hmc__7->SetBinContent(16,25.67529);
   hmc__7->SetBinContent(17,21.96025);
   hmc__7->SetBinContent(18,16.6605);
   hmc__7->SetBinContent(19,16.23636);
   hmc__7->SetBinContent(20,10.8349);
   hmc__7->SetBinContent(21,11.02225);
   hmc__7->SetBinContent(22,11.46154);
   hmc__7->SetBinContent(23,7.684229);
   hmc__7->SetBinContent(24,6.711306);
   hmc__7->SetBinContent(25,6.270525);
   hmc__7->SetBinContent(26,56.201);
   hmc__7->SetBinError(1,35.99895);
   hmc__7->SetBinError(2,119.8763);
   hmc__7->SetBinError(3,186.0689);
   hmc__7->SetBinError(4,188.4599);
   hmc__7->SetBinError(5,151.1288);
   hmc__7->SetBinError(6,129.798);
   hmc__7->SetBinError(7,93.68074);
   hmc__7->SetBinError(8,63.77731);
   hmc__7->SetBinError(9,42.81512);
   hmc__7->SetBinError(10,33.26332);
   hmc__7->SetBinError(11,19.3002);
   hmc__7->SetBinError(12,16.62458);
   hmc__7->SetBinError(13,13.8233);
   hmc__7->SetBinError(14,10.79706);
   hmc__7->SetBinError(15,6.570628);
   hmc__7->SetBinError(16,5.792766);
   hmc__7->SetBinError(17,4.904992);
   hmc__7->SetBinError(18,4.414129);
   hmc__7->SetBinError(19,4.109317);
   hmc__7->SetBinError(20,2.922487);
   hmc__7->SetBinError(21,2.83865);
   hmc__7->SetBinError(22,3.156149);
   hmc__7->SetBinError(23,2.512419);
   hmc__7->SetBinError(24,2.645885);
   hmc__7->SetBinError(25,1.864312);
   hmc__7->SetBinError(26,10.58233);
   hmc__7->SetMinimum(-17.34);
   hmc__7->SetMaximum(1820.7);
   hmc__7->SetEntries(4762.881);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,0,1500);
   hs3_stack_3->SetMinimum(-2.264013e-08);
   hs3_stack_3->SetMaximum(851.9201);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,0.5850745);
   hbadmatch_stack_1->SetBinContent(2,0.621793);
   hbadmatch_stack_1->SetBinContent(3,2.226431);
   hbadmatch_stack_1->SetBinContent(4,3.299653);
   hbadmatch_stack_1->SetBinContent(5,2.42336);
   hbadmatch_stack_1->SetBinContent(6,1.715469);
   hbadmatch_stack_1->SetBinContent(7,0.8350126);
   hbadmatch_stack_1->SetBinContent(8,1.661572);
   hbadmatch_stack_1->SetBinContent(9,1.657341);
   hbadmatch_stack_1->SetBinContent(10,1.125349);
   hbadmatch_stack_1->SetBinContent(11,0.6053587);
   hbadmatch_stack_1->SetBinContent(12,0.6803553);
   hbadmatch_stack_1->SetBinContent(13,0.5905072);
   hbadmatch_stack_1->SetBinContent(14,0.6803553);
   hbadmatch_stack_1->SetBinContent(17,0.4100147);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,0.305647);
   hbadmatch_stack_1->SetBinError(1,0.337793);
   hbadmatch_stack_1->SetBinError(2,0.3599211);
   hbadmatch_stack_1->SetBinError(3,0.7682865);
   hbadmatch_stack_1->SetBinError(4,1.112564);
   hbadmatch_stack_1->SetBinError(5,0.7178919);
   hbadmatch_stack_1->SetBinError(6,0.6683727);
   hbadmatch_stack_1->SetBinError(7,0.3957394);
   hbadmatch_stack_1->SetBinError(8,0.6732207);
   hbadmatch_stack_1->SetBinError(9,0.7603607);
   hbadmatch_stack_1->SetBinError(10,0.5194673);
   hbadmatch_stack_1->SetBinError(11,0.3498063);
   hbadmatch_stack_1->SetBinError(12,0.4810838);
   hbadmatch_stack_1->SetBinError(13,0.4409546);
   hbadmatch_stack_1->SetBinError(14,0.4810838);
   hbadmatch_stack_1->SetBinError(17,0.4100147);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.2242141);
   hbadmatch_stack_1->SetEntries(83);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,5.243836);
   hext_stack_2->SetBinContent(2,15.00492);
   hext_stack_2->SetBinContent(3,16.73947);
   hext_stack_2->SetBinContent(4,15.85566);
   hext_stack_2->SetBinContent(5,14.35613);
   hext_stack_2->SetBinContent(6,14.27116);
   hext_stack_2->SetBinContent(7,15.22999);
   hext_stack_2->SetBinContent(8,10.79494);
   hext_stack_2->SetBinContent(9,4.52443);
   hext_stack_2->SetBinContent(10,2.352983);
   hext_stack_2->SetBinContent(11,1.137595);
   hext_stack_2->SetBinContent(12,1.379791);
   hext_stack_2->SetBinContent(13,0.6416141);
   hext_stack_2->SetBinContent(14,0.9660115);
   hext_stack_2->SetBinContent(15,0.973192);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(26,1.704188);
   hext_stack_2->SetBinError(1,1.596444);
   hext_stack_2->SetBinError(2,2.740523);
   hext_stack_2->SetBinError(3,2.786281);
   hext_stack_2->SetBinError(4,2.703063);
   hext_stack_2->SetBinError(5,2.701851);
   hext_stack_2->SetBinError(6,2.752496);
   hext_stack_2->SetBinError(7,2.879989);
   hext_stack_2->SetBinError(8,2.437463);
   hext_stack_2->SetBinError(9,1.487279);
   hext_stack_2->SetBinError(10,0.8925942);
   hext_stack_2->SetBinError(11,0.6602113);
   hext_stack_2->SetBinError(12,0.6935586);
   hext_stack_2->SetBinError(13,0.6416141);
   hext_stack_2->SetBinError(14,0.7189592);
   hext_stack_2->SetBinError(15,0.5618727);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(26,0.7656743);
   hext_stack_2->SetEntries(271);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,0.3569671);
   hdirt_stack_3->SetBinContent(2,0.5228631);
   hdirt_stack_3->SetBinContent(3,0.7967575);
   hdirt_stack_3->SetBinContent(4,1.188298);
   hdirt_stack_3->SetBinContent(5,0.9993722);
   hdirt_stack_3->SetBinContent(6,0.5200806);
   hdirt_stack_3->SetBinContent(7,0.3381872);
   hdirt_stack_3->SetBinContent(8,0.3569671);
   hdirt_stack_3->SetBinContent(9,0.1545866);
   hdirt_stack_3->SetBinContent(26,0.2441834);
   hdirt_stack_3->SetBinError(1,0.258803);
   hdirt_stack_3->SetBinError(2,0.3074093);
   hdirt_stack_3->SetBinError(3,0.4646348);
   hdirt_stack_3->SetBinError(4,0.5545227);
   hdirt_stack_3->SetBinError(5,0.4775119);
   hdirt_stack_3->SetBinError(6,0.4061954);
   hdirt_stack_3->SetBinError(7,0.3381872);
   hdirt_stack_3->SetBinError(8,0.258803);
   hdirt_stack_3->SetBinError(9,0.1545866);
   hdirt_stack_3->SetBinError(26,0.2441834);
   hdirt_stack_3->SetEntries(27);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,1.176925);
   houtFV_stack_4->SetBinContent(2,7.526962);
   houtFV_stack_4->SetBinContent(3,8.088834);
   houtFV_stack_4->SetBinContent(4,8.030197);
   houtFV_stack_4->SetBinContent(5,7.231077);
   houtFV_stack_4->SetBinContent(6,5.251706);
   houtFV_stack_4->SetBinContent(7,3.424317);
   houtFV_stack_4->SetBinContent(8,4.42242);
   houtFV_stack_4->SetBinContent(9,1.907138);
   houtFV_stack_4->SetBinContent(10,3.624854);
   houtFV_stack_4->SetBinContent(11,0.6086679);
   houtFV_stack_4->SetBinContent(12,1.256551);
   houtFV_stack_4->SetBinContent(13,0.5352025);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.3917402);
   houtFV_stack_4->SetBinContent(18,0.7018039);
   houtFV_stack_4->SetBinContent(19,0.5352025);
   houtFV_stack_4->SetBinContent(22,0.3934307);
   houtFV_stack_4->SetBinContent(23,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.9801958);
   houtFV_stack_4->SetBinError(1,0.4804759);
   houtFV_stack_4->SetBinError(2,2.070894);
   houtFV_stack_4->SetBinError(3,1.394392);
   houtFV_stack_4->SetBinError(4,1.402645);
   houtFV_stack_4->SetBinError(5,1.383522);
   houtFV_stack_4->SetBinError(6,1.131374);
   houtFV_stack_4->SetBinError(7,1.219733);
   houtFV_stack_4->SetBinError(8,1.086997);
   houtFV_stack_4->SetBinError(9,0.6501133);
   houtFV_stack_4->SetBinError(10,1.281938);
   houtFV_stack_4->SetBinError(11,0.3515622);
   houtFV_stack_4->SetBinError(12,0.6221238);
   houtFV_stack_4->SetBinError(13,0.3921167);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(16,0.2770047);
   houtFV_stack_4->SetBinError(18,0.496482);
   houtFV_stack_4->SetBinError(19,0.3921167);
   houtFV_stack_4->SetBinError(22,0.2781975);
   houtFV_stack_4->SetBinError(23,0.1950249);
   houtFV_stack_4->SetBinError(26,0.4383608);
   houtFV_stack_4->SetEntries(234);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.01269218);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1274642);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1113119);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetEntries(5);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.051283);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.162116);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.194517);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.542719);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.490315);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.751159);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.188444);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.999541);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.655109);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.398132);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.137207);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.8308089);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.408346);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.9950757);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.3329142);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.170271);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.2044696);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2211295);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.5488481);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.01491798);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.04270907);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.5996543);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.253326);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.4978064);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.1804827);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2429348);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7100962);
   hNCpi0inFVres_stack_7->SetBinError(3,0.852567);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7959264);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7681035);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8502123);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5422664);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5401297);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7506033);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3127647);
   hNCpi0inFVres_stack_7->SetBinError(11,0.6658851);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4032768);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7048196);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4690266);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2578672);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1246343);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1051992);
   hNCpi0inFVres_stack_7->SetBinError(18,0.137326);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3114964);
   hNCpi0inFVres_stack_7->SetBinError(20,0.01491798);
   hNCpi0inFVres_stack_7->SetBinError(21,0.03067703);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5493525);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2038512);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4978064);
   hNCpi0inFVres_stack_7->SetBinError(26,0.07655344);
   hNCpi0inFVres_stack_7->SetEntries(949);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6713794);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.021293);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.768942);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.711725);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.976207);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.936937);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.349426);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.963273);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.210932);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.384853);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.757645);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.326697);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.8035493);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.8864369);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2098737);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6586314);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3386377);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.2767276);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.2504359);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6004407);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2762179);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.04620773);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.132768);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.454325);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2586874);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8754051);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7063436);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6619685);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9271118);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6014719);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.710247);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7645236);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4736592);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3282954);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7563251);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4750102);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2210923);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.33398);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.10411);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.351013);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1454637);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1364287);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1431726);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2138536);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2043998);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.03337039);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.767762);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.6222166);
   hNCpi0inFVdis_stack_8->SetEntries(773);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,98.21163);
   hCCpi0inFV_stack_10->SetBinContent(2,399.5746);
   hCCpi0inFV_stack_10->SetBinContent(3,615.2734);
   hCCpi0inFV_stack_10->SetBinContent(4,570.6364);
   hCCpi0inFV_stack_10->SetBinContent(5,445.6688);
   hCCpi0inFV_stack_10->SetBinContent(6,400.0045);
   hCCpi0inFV_stack_10->SetBinContent(7,303.5317);
   hCCpi0inFV_stack_10->SetBinContent(8,205.0331);
   hCCpi0inFV_stack_10->SetBinContent(9,132.9455);
   hCCpi0inFV_stack_10->SetBinContent(10,106.0778);
   hCCpi0inFV_stack_10->SetBinContent(11,58.6304);
   hCCpi0inFV_stack_10->SetBinContent(12,46.41861);
   hCCpi0inFV_stack_10->SetBinContent(13,39.57548);
   hCCpi0inFV_stack_10->SetBinContent(14,29.44441);
   hCCpi0inFV_stack_10->SetBinContent(15,17.49212);
   hCCpi0inFV_stack_10->SetBinContent(16,16.6072);
   hCCpi0inFV_stack_10->SetBinContent(17,12.77936);
   hCCpi0inFV_stack_10->SetBinContent(18,10.35167);
   hCCpi0inFV_stack_10->SetBinContent(19,10.32774);
   hCCpi0inFV_stack_10->SetBinContent(20,7.916736);
   hCCpi0inFV_stack_10->SetBinContent(21,8.739904);
   hCCpi0inFV_stack_10->SetBinContent(22,7.033944);
   hCCpi0inFV_stack_10->SetBinContent(23,5.273649);
   hCCpi0inFV_stack_10->SetBinContent(24,2.932743);
   hCCpi0inFV_stack_10->SetBinContent(25,4.687967);
   hCCpi0inFV_stack_10->SetBinContent(26,32.23594);
   hCCpi0inFV_stack_10->SetBinError(1,5.102867);
   hCCpi0inFV_stack_10->SetBinError(2,10.00731);
   hCCpi0inFV_stack_10->SetBinError(3,12.53229);
   hCCpi0inFV_stack_10->SetBinError(4,11.99455);
   hCCpi0inFV_stack_10->SetBinError(5,10.61342);
   hCCpi0inFV_stack_10->SetBinError(6,10.04893);
   hCCpi0inFV_stack_10->SetBinError(7,8.823263);
   hCCpi0inFV_stack_10->SetBinError(8,7.177851);
   hCCpi0inFV_stack_10->SetBinError(9,5.746393);
   hCCpi0inFV_stack_10->SetBinError(10,5.211065);
   hCCpi0inFV_stack_10->SetBinError(11,3.813163);
   hCCpi0inFV_stack_10->SetBinError(12,3.542232);
   hCCpi0inFV_stack_10->SetBinError(13,3.185685);
   hCCpi0inFV_stack_10->SetBinError(14,2.692472);
   hCCpi0inFV_stack_10->SetBinError(15,2.076416);
   hCCpi0inFV_stack_10->SetBinError(16,2.05832);
   hCCpi0inFV_stack_10->SetBinError(17,1.827626);
   hCCpi0inFV_stack_10->SetBinError(18,1.61772);
   hCCpi0inFV_stack_10->SetBinError(19,1.673652);
   hCCpi0inFV_stack_10->SetBinError(20,1.429428);
   hCCpi0inFV_stack_10->SetBinError(21,1.533535);
   hCCpi0inFV_stack_10->SetBinError(22,1.330841);
   hCCpi0inFV_stack_10->SetBinError(23,1.194504);
   hCCpi0inFV_stack_10->SetBinError(24,0.8785195);
   hCCpi0inFV_stack_10->SetBinError(25,1.055513);
   hCCpi0inFV_stack_10->SetBinError(26,2.758658);
   hCCpi0inFV_stack_10->SetEntries(15285);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,0.8753801);
   hNCinFV_stack_11->SetBinContent(2,2.784209);
   hNCinFV_stack_11->SetBinContent(3,3.712842);
   hNCinFV_stack_11->SetBinContent(4,2.105544);
   hNCinFV_stack_11->SetBinContent(5,4.256497);
   hNCinFV_stack_11->SetBinContent(6,1.465526);
   hNCinFV_stack_11->SetBinContent(7,2.342597);
   hNCinFV_stack_11->SetBinContent(8,0.7868615);
   hNCinFV_stack_11->SetBinContent(9,0.5884556);
   hNCinFV_stack_11->SetBinContent(10,1.858957);
   hNCinFV_stack_11->SetBinContent(11,0.5884556);
   hNCinFV_stack_11->SetBinContent(14,0.3934307);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinContent(18,0.3401776);
   hNCinFV_stack_11->SetBinContent(19,0.1967154);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.3401776);
   hNCinFV_stack_11->SetBinContent(22,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,0.1967154);
   hNCinFV_stack_11->SetBinContent(25,0.1967154);
   hNCinFV_stack_11->SetBinContent(26,0.6803553);
   hNCinFV_stack_11->SetBinError(1,0.5191111);
   hNCinFV_stack_11->SetBinError(2,0.8323376);
   hNCinFV_stack_11->SetBinError(3,0.9612155);
   hNCinFV_stack_11->SetBinError(4,0.6797106);
   hNCinFV_stack_11->SetBinError(5,1.039712);
   hNCinFV_stack_11->SetBinError(6,0.6209405);
   hNCinFV_stack_11->SetBinError(7,0.8097566);
   hNCinFV_stack_11->SetBinError(8,0.3934307);
   hNCinFV_stack_11->SetBinError(9,0.3397478);
   hNCinFV_stack_11->SetBinError(10,0.6804124);
   hNCinFV_stack_11->SetBinError(11,0.3397478);
   hNCinFV_stack_11->SetBinError(14,0.2781975);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetBinError(18,0.3401776);
   hNCinFV_stack_11->SetBinError(19,0.1967154);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.3401776);
   hNCinFV_stack_11->SetBinError(22,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.1967154);
   hNCinFV_stack_11->SetBinError(25,0.1967154);
   hNCinFV_stack_11->SetBinError(26,0.4810838);
   hNCinFV_stack_11->SetEntries(106);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,26.64974);
   hnumuCCinFV_stack_12->SetBinContent(2,110.4341);
   hnumuCCinFV_stack_12->SetBinContent(3,151.7379);
   hnumuCCinFV_stack_12->SetBinContent(4,136.1837);
   hnumuCCinFV_stack_12->SetBinContent(5,100.989);
   hnumuCCinFV_stack_12->SetBinContent(6,72.34347);
   hnumuCCinFV_stack_12->SetBinContent(7,53.2672);
   hnumuCCinFV_stack_12->SetBinContent(8,50.72804);
   hnumuCCinFV_stack_12->SetBinContent(9,37.10662);
   hnumuCCinFV_stack_12->SetBinContent(10,29.34387);
   hnumuCCinFV_stack_12->SetBinContent(11,19.35575);
   hnumuCCinFV_stack_12->SetBinContent(12,19.7013);
   hnumuCCinFV_stack_12->SetBinContent(13,13.81313);
   hnumuCCinFV_stack_12->SetBinContent(14,10.41385);
   hnumuCCinFV_stack_12->SetBinContent(15,7.942722);
   hnumuCCinFV_stack_12->SetBinContent(16,7.328027);
   hnumuCCinFV_stack_12->SetBinContent(17,7.834336);
   hnumuCCinFV_stack_12->SetBinContent(18,3.710988);
   hnumuCCinFV_stack_12->SetBinContent(19,4.05302);
   hnumuCCinFV_stack_12->SetBinContent(20,2.106086);
   hnumuCCinFV_stack_12->SetBinContent(21,1.62324);
   hnumuCCinFV_stack_12->SetBinContent(22,2.527016);
   hnumuCCinFV_stack_12->SetBinContent(23,1.713804);
   hnumuCCinFV_stack_12->SetBinContent(24,2.197444);
   hnumuCCinFV_stack_12->SetBinContent(25,0.8880365);
   hnumuCCinFV_stack_12->SetBinContent(26,17.00172);
   hnumuCCinFV_stack_12->SetBinError(1,2.627283);
   hnumuCCinFV_stack_12->SetBinError(2,6.33279);
   hnumuCCinFV_stack_12->SetBinError(3,7.127237);
   hnumuCCinFV_stack_12->SetBinError(4,7.446425);
   hnumuCCinFV_stack_12->SetBinError(5,5.544337);
   hnumuCCinFV_stack_12->SetBinError(6,4.548052);
   hnumuCCinFV_stack_12->SetBinError(7,3.73715);
   hnumuCCinFV_stack_12->SetBinError(8,3.782039);
   hnumuCCinFV_stack_12->SetBinError(9,3.242217);
   hnumuCCinFV_stack_12->SetBinError(10,2.69576);
   hnumuCCinFV_stack_12->SetBinError(11,2.151592);
   hnumuCCinFV_stack_12->SetBinError(12,3.079504);
   hnumuCCinFV_stack_12->SetBinError(13,1.861159);
   hnumuCCinFV_stack_12->SetBinError(14,1.674705);
   hnumuCCinFV_stack_12->SetBinError(15,1.484259);
   hnumuCCinFV_stack_12->SetBinError(16,1.441062);
   hnumuCCinFV_stack_12->SetBinError(17,1.525013);
   hnumuCCinFV_stack_12->SetBinError(18,0.9209004);
   hnumuCCinFV_stack_12->SetBinError(19,1.019635);
   hnumuCCinFV_stack_12->SetBinError(20,0.7239233);
   hnumuCCinFV_stack_12->SetBinError(21,0.5753748);
   hnumuCCinFV_stack_12->SetBinError(22,0.7833602);
   hnumuCCinFV_stack_12->SetBinError(23,0.6207051);
   hnumuCCinFV_stack_12->SetBinError(24,0.760276);
   hnumuCCinFV_stack_12->SetBinError(25,0.5274915);
   hnumuCCinFV_stack_12->SetBinError(26,2.072243);
   hnumuCCinFV_stack_12->SetEntries(3654);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,0.813428);
   hnueCCinFV_stack_13->SetBinContent(4,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(5,0.536893);
   hnueCCinFV_stack_13->SetBinContent(6,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(7,1.072095);
   hnueCCinFV_stack_13->SetBinContent(8,1.413964);
   hnueCCinFV_stack_13->SetBinContent(9,1.127039);
   hnueCCinFV_stack_13->SetBinContent(10,1.001686);
   hnueCCinFV_stack_13->SetBinContent(11,0.6301904);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.536893);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,1.413964);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.5045317);
   hnueCCinFV_stack_13->SetBinError(4,0.438694);
   hnueCCinFV_stack_13->SetBinError(5,0.3929602);
   hnueCCinFV_stack_13->SetBinError(6,0.438694);
   hnueCCinFV_stack_13->SetBinError(7,0.5551335);
   hnueCCinFV_stack_13->SetBinError(8,0.6515799);
   hnueCCinFV_stack_13->SetBinError(9,0.5201044);
   hnueCCinFV_stack_13->SetBinError(10,0.5147626);
   hnueCCinFV_stack_13->SetBinError(11,0.3654999);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,0.1950249);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.3929602);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.6515799);
   hnueCCinFV_stack_13->SetEntries(47);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__8->SetBinContent(1,134.8406);
   hmcerror__8->SetBinContent(2,545.8496);
   hmcerror__8->SetBinContent(3,811.3525);
   hmcerror__8->SetBinContent(4,748.4133);
   hmcerror__8->SetBinContent(5,586.9277);
   hmcerror__8->SetBinContent(6,504.0199);
   hmcerror__8->SetBinContent(7,386.6386);
   hmcerror__8->SetBinContent(8,281.2821);
   hmcerror__8->SetBinContent(9,184.8772);
   hmcerror__8->SetBinContent(10,148.1685);
   hmcerror__8->SetBinContent(11,86.45127);
   hmcerror__8->SetBinContent(12,71.93429);
   hmcerror__8->SetBinContent(13,57.56454);
   hmcerror__8->SetBinContent(14,43.97629);
   hmcerror__8->SetBinContent(15,28.01019);
   hmcerror__8->SetBinContent(16,25.67529);
   hmcerror__8->SetBinContent(17,21.96025);
   hmcerror__8->SetBinContent(18,16.6605);
   hmcerror__8->SetBinContent(19,16.23636);
   hmcerror__8->SetBinContent(20,10.8349);
   hmcerror__8->SetBinContent(21,11.02225);
   hmcerror__8->SetBinContent(22,11.46154);
   hmcerror__8->SetBinContent(23,7.684229);
   hmcerror__8->SetBinContent(24,6.711306);
   hmcerror__8->SetBinContent(25,6.270525);
   hmcerror__8->SetBinContent(26,56.201);
   hmcerror__8->SetBinError(1,35.99895);
   hmcerror__8->SetBinError(2,119.8763);
   hmcerror__8->SetBinError(3,186.0689);
   hmcerror__8->SetBinError(4,188.4599);
   hmcerror__8->SetBinError(5,151.1288);
   hmcerror__8->SetBinError(6,129.798);
   hmcerror__8->SetBinError(7,93.68074);
   hmcerror__8->SetBinError(8,63.77731);
   hmcerror__8->SetBinError(9,42.81512);
   hmcerror__8->SetBinError(10,33.26332);
   hmcerror__8->SetBinError(11,19.3002);
   hmcerror__8->SetBinError(12,16.62458);
   hmcerror__8->SetBinError(13,13.8233);
   hmcerror__8->SetBinError(14,10.79706);
   hmcerror__8->SetBinError(15,6.570628);
   hmcerror__8->SetBinError(16,5.792766);
   hmcerror__8->SetBinError(17,4.904992);
   hmcerror__8->SetBinError(18,4.414129);
   hmcerror__8->SetBinError(19,4.109317);
   hmcerror__8->SetBinError(20,2.922487);
   hmcerror__8->SetBinError(21,2.83865);
   hmcerror__8->SetBinError(22,3.156149);
   hmcerror__8->SetBinError(23,2.512419);
   hmcerror__8->SetBinError(24,2.645885);
   hmcerror__8->SetBinError(25,1.864312);
   hmcerror__8->SetBinError(26,10.58233);
   hmcerror__8->SetEntries(4762.881);

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
   
   Double_t _fx3009[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3009[25] = {
   119,
   603,
   867,
   692,
   513,
   385,
   289,
   219,
   186,
   130,
   90,
   85,
   45,
   29,
   17,
   25,
   16,
   21,
   15,
   10,
   10,
   8,
   7,
   7,
   8};
   Double_t _felx3009[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3009[25] = {
   10.90871,
   24.55606,
   29.44486,
   26.30589,
   22.6495,
   19.62142,
   17,
   14.79865,
   13.63818,
   11.40175,
   9.6093,
   9.3428,
   6.8416,
   5.5285,
   4.2835,
   5.1474,
   4.1628,
   4.7354,
   4.0385,
   3.34883,
   3.34883,
   3.0307,
   2.85954,
   2.85954,
   3.0307};
   Double_t _fehx3009[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3009[25] = {
   10.90871,
   24.55606,
   29.44486,
   26.30589,
   22.6495,
   19.62142,
   17,
   14.79865,
   13.63818,
   11.40175,
   9.4079,
   9.1411,
   6.637,
   5.3201,
   4.0673,
   4.9374,
   3.9454,
   4.5229,
   3.8197,
   3.1179,
   3.1179,
   2.7896,
   2.61053,
   2.61053,
   2.7896};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1650);
   Graph_Graph3009->SetMinimum(3.726414);
   Graph_Graph3009->SetMaximum(985.6753);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=42.4/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4396.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 19.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 120.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 55.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  45.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  43.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3555.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 24.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 874.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.3","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3010[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3010[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3010[25] = {
   0.266974,
   0.2196141,
   0.2293318,
   0.2518127,
   0.2574913,
   0.2575256,
   0.2422953,
   0.2267379,
   0.2315868,
   0.2244966,
   0.2232495,
   0.2311079,
   0.2401357,
   0.2455199,
   0.2345799,
   0.2256164,
   0.2233578,
   0.2649458,
   0.2530935,
   0.2697291,
   0.2575382,
   0.2753686,
   0.3269579,
   0.3942429,
   0.2973135};
   Double_t _fehx3010[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3010[25] = {
   0.266974,
   0.2196141,
   0.2293318,
   0.2518127,
   0.2574913,
   0.2575256,
   0.2422953,
   0.2267379,
   0.2315868,
   0.2244966,
   0.2232495,
   0.2311079,
   0.2401357,
   0.2455199,
   0.2345799,
   0.2256164,
   0.2233578,
   0.2649458,
   0.2530935,
   0.2697291,
   0.2575382,
   0.2753686,
   0.3269579,
   0.3942429,
   0.2973135};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1650);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3011[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3011[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3011[25] = {
   0.266974,
   0.2196141,
   0.2293318,
   0.2518127,
   0.2574913,
   0.2575256,
   0.2422953,
   0.2267379,
   0.2315868,
   0.2244966,
   0.2232495,
   0.2311079,
   0.2401357,
   0.2455199,
   0.2345799,
   0.2256164,
   0.2233578,
   0.2649458,
   0.2530935,
   0.2697291,
   0.2575382,
   0.2753686,
   0.3269579,
   0.3942429,
   0.2973135};
   Double_t _fehx3011[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3011[25] = {
   0.266974,
   0.2196141,
   0.2293318,
   0.2518127,
   0.2574913,
   0.2575256,
   0.2422953,
   0.2267379,
   0.2315868,
   0.2244966,
   0.2232495,
   0.2311079,
   0.2401357,
   0.2455199,
   0.2345799,
   0.2256164,
   0.2233578,
   0.2649458,
   0.2530935,
   0.2697291,
   0.2575382,
   0.2753686,
   0.3269579,
   0.3942429,
   0.2973135};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1650);
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
   
   Double_t _fx3012[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3012[25] = {
   0.8825233,
   1.1047,
   1.068586,
   0.9246228,
   0.8740429,
   0.7638588,
   0.747468,
   0.7785779,
   1.006073,
   0.8773795,
   1.041049,
   1.181634,
   0.7817312,
   0.6594463,
   0.606922,
   0.9736988,
   0.7285891,
   1.260467,
   0.9238524,
   0.9229439,
   0.9072558,
   0.6979863,
   0.9109567,
   1.043016,
   1.27581};
   Double_t _felx3012[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3012[25] = {
   0.08090078,
   0.04498686,
   0.03629109,
   0.03514889,
   0.03858994,
   0.03892985,
   0.0439687,
   0.05261142,
   0.07376887,
   0.07695128,
   0.1111528,
   0.1298796,
   0.1188509,
   0.1257155,
   0.1529265,
   0.2004807,
   0.1895607,
   0.2842292,
   0.2487319,
   0.3090782,
   0.3038246,
   0.2644234,
   0.372131,
   0.426078,
   0.4833248};
   Double_t _fehx3012[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3012[25] = {
   0.08090078,
   0.04498686,
   0.03629109,
   0.03514889,
   0.03858994,
   0.03892985,
   0.0439687,
   0.05261142,
   0.07376887,
   0.07695128,
   0.1088232,
   0.1270757,
   0.1152967,
   0.1209766,
   0.1452079,
   0.1923016,
   0.179661,
   0.2714745,
   0.2352559,
   0.2877647,
   0.2828733,
   0.2433878,
   0.3397257,
   0.388975,
   0.444875};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1650);
   Graph_Graph3012->SetMinimum(0.3048507);
   Graph_Graph3012->SetMaximum(1.849398);
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
   
   TH1F *hist__9 = new TH1F("hist__9","CCpi0_PC_bnb_12_pi0_momentum_all",25,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
