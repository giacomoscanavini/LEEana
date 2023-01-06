#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Sep 28 16:54:36 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",60,83,1200,900);
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
   pad1->Range(-230.7692,-15.74337,1692.308,1740.885);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hmc__7->SetBinContent(2,67.9157);
   hmc__7->SetBinContent(3,414.5897);
   hmc__7->SetBinContent(4,614.3666);
   hmc__7->SetBinContent(5,787.1685);
   hmc__7->SetBinContent(6,681.283);
   hmc__7->SetBinContent(7,525.1422);
   hmc__7->SetBinContent(8,408.6404);
   hmc__7->SetBinContent(9,302.566);
   hmc__7->SetBinContent(10,244.8648);
   hmc__7->SetBinContent(11,194.1465);
   hmc__7->SetBinContent(12,126.0251);
   hmc__7->SetBinContent(13,96.58471);
   hmc__7->SetBinContent(14,69.6543);
   hmc__7->SetBinContent(15,52.21355);
   hmc__7->SetBinContent(16,47.74107);
   hmc__7->SetBinContent(17,39.7843);
   hmc__7->SetBinContent(18,26.97646);
   hmc__7->SetBinContent(19,23.52307);
   hmc__7->SetBinContent(20,20.21636);
   hmc__7->SetBinContent(21,13.45695);
   hmc__7->SetBinContent(22,12.90344);
   hmc__7->SetBinContent(23,8.232473);
   hmc__7->SetBinContent(24,9.289869);
   hmc__7->SetBinContent(25,4.490169);
   hmc__7->SetBinContent(26,19.2496);
   hmc__7->SetBinError(1,0.3895343);
   hmc__7->SetBinError(2,14.57857);
   hmc__7->SetBinError(3,85.58627);
   hmc__7->SetBinError(4,138.1215);
   hmc__7->SetBinError(5,180.324);
   hmc__7->SetBinError(6,160.5278);
   hmc__7->SetBinError(7,127.9346);
   hmc__7->SetBinError(8,96.63203);
   hmc__7->SetBinError(9,73.64016);
   hmc__7->SetBinError(10,60.5477);
   hmc__7->SetBinError(11,46.53119);
   hmc__7->SetBinError(12,31.43148);
   hmc__7->SetBinError(13,22.95199);
   hmc__7->SetBinError(14,17.11544);
   hmc__7->SetBinError(15,13.60748);
   hmc__7->SetBinError(16,11.4952);
   hmc__7->SetBinError(17,9.737791);
   hmc__7->SetBinError(18,7.122877);
   hmc__7->SetBinError(19,5.396832);
   hmc__7->SetBinError(20,4.950148);
   hmc__7->SetBinError(21,3.812886);
   hmc__7->SetBinError(22,3.771094);
   hmc__7->SetBinError(23,2.427618);
   hmc__7->SetBinError(24,4.931);
   hmc__7->SetBinError(25,1.77922);
   hmc__7->SetBinError(26,4.853399);
   hmc__7->SetMinimum(-15.74337);
   hmc__7->SetMaximum(1653.054);
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
   hs3_stack_3->SetMinimum(-1.202048e-08);
   hs3_stack_3->SetMaximum(826.5269);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(2,1.123658);
   hbadmatch_stack_1->SetBinContent(3,3.067598);
   hbadmatch_stack_1->SetBinContent(4,3.911248);
   hbadmatch_stack_1->SetBinContent(5,3.068075);
   hbadmatch_stack_1->SetBinContent(6,2.449539);
   hbadmatch_stack_1->SetBinContent(7,2.398218);
   hbadmatch_stack_1->SetBinContent(8,0.3073375);
   hbadmatch_stack_1->SetBinContent(9,1.184408);
   hbadmatch_stack_1->SetBinContent(10,1.376319);
   hbadmatch_stack_1->SetBinContent(11,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(26,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.5188295);
   hbadmatch_stack_1->SetBinError(3,0.8763944);
   hbadmatch_stack_1->SetBinError(4,0.9814756);
   hbadmatch_stack_1->SetBinError(5,1.099074);
   hbadmatch_stack_1->SetBinError(6,0.850511);
   hbadmatch_stack_1->SetBinError(7,0.7827502);
   hbadmatch_stack_1->SetBinError(8,0.225686);
   hbadmatch_stack_1->SetBinError(9,0.5666328);
   hbadmatch_stack_1->SetBinError(10,0.6470723);
   hbadmatch_stack_1->SetBinError(11,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(26,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hext_stack_2->SetBinContent(2,4.054399);
   hext_stack_2->SetBinContent(3,21.7527);
   hext_stack_2->SetBinContent(4,19.94313);
   hext_stack_2->SetBinContent(5,24.84821);
   hext_stack_2->SetBinContent(6,14.36772);
   hext_stack_2->SetBinContent(7,7.20181);
   hext_stack_2->SetBinContent(8,4.53161);
   hext_stack_2->SetBinContent(9,6.527065);
   hext_stack_2->SetBinContent(10,8.291914);
   hext_stack_2->SetBinContent(11,3.939067);
   hext_stack_2->SetBinContent(12,0.7309963);
   hext_stack_2->SetBinContent(13,0.9660115);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(15,0.3243973);
   hext_stack_2->SetBinContent(16,2.890854);
   hext_stack_2->SetBinContent(17,1.048213);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinError(2,1.311223);
   hext_stack_2->SetBinError(3,3.193865);
   hext_stack_2->SetBinError(4,3.112328);
   hext_stack_2->SetBinError(5,3.540111);
   hext_stack_2->SetBinError(6,2.689595);
   hext_stack_2->SetBinError(7,1.76464);
   hext_stack_2->SetBinError(8,1.418025);
   hext_stack_2->SetBinError(9,1.836293);
   hext_stack_2->SetBinError(10,2.149865);
   hext_stack_2->SetBinError(11,1.526073);
   hext_stack_2->SetBinError(12,0.5201503);
   hext_stack_2->SetBinError(13,0.7189592);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(15,0.3243973);
   hext_stack_2->SetBinError(16,1.323597);
   hext_stack_2->SetBinError(17,0.7595995);
   hext_stack_2->SetBinError(20,0.5201503);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hdirt_stack_3->SetBinContent(2,0.2665913);
   hdirt_stack_3->SetBinContent(3,1.402112);
   hdirt_stack_3->SetBinContent(4,0.3569671);
   hdirt_stack_3->SetBinContent(5,0.6555186);
   hdirt_stack_3->SetBinContent(6,0.9390931);
   hdirt_stack_3->SetBinContent(7,1.206708);
   hdirt_stack_3->SetBinContent(8,0.2664809);
   hdirt_stack_3->SetBinContent(11,0.165896);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(22,2.407774e-08);
   hdirt_stack_3->SetBinError(2,0.2665913);
   hdirt_stack_3->SetBinError(3,0.55878);
   hdirt_stack_3->SetBinError(4,0.258803);
   hdirt_stack_3->SetBinError(5,0.406901);
   hdirt_stack_3->SetBinError(6,0.5551728);
   hdirt_stack_3->SetBinError(7,0.5217524);
   hdirt_stack_3->SetBinError(8,0.2664809);
   hdirt_stack_3->SetBinError(11,0.165896);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(22,2.407774e-08);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   houtFV_stack_4->SetBinContent(2,2.054373);
   houtFV_stack_4->SetBinContent(3,12.03736);
   houtFV_stack_4->SetBinContent(4,8.164137);
   houtFV_stack_4->SetBinContent(5,8.214588);
   houtFV_stack_4->SetBinContent(6,6.890372);
   houtFV_stack_4->SetBinContent(7,4.840676);
   houtFV_stack_4->SetBinContent(8,4.43128);
   houtFV_stack_4->SetBinContent(9,1.547316);
   houtFV_stack_4->SetBinContent(10,0.6232182);
   houtFV_stack_4->SetBinContent(11,4.001452);
   houtFV_stack_4->SetBinContent(12,0.7817899);
   houtFV_stack_4->SetBinContent(13,1.518779);
   houtFV_stack_4->SetBinContent(14,0.5901461);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinContent(18,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinError(2,0.7273384);
   houtFV_stack_4->SetBinError(3,1.718545);
   houtFV_stack_4->SetBinError(4,1.398138);
   houtFV_stack_4->SetBinError(5,1.541376);
   houtFV_stack_4->SetBinError(6,1.402339);
   houtFV_stack_4->SetBinError(7,1.150179);
   houtFV_stack_4->SetBinError(8,1.852596);
   houtFV_stack_4->SetBinError(9,0.5994864);
   houtFV_stack_4->SetBinError(10,0.360827);
   houtFV_stack_4->SetBinError(11,1.433361);
   houtFV_stack_4->SetBinError(12,0.3908977);
   houtFV_stack_4->SetBinError(13,0.5892709);
   houtFV_stack_4->SetBinError(14,0.340721);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetBinError(18,0.1950249);
   houtFV_stack_4->SetBinError(20,0.1950249);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.08770081);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06592986);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1389192);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2573834);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.122637);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1705113);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.55546);
   hNCpi0inFVres_stack_7->SetBinContent(3,9.25428);
   hNCpi0inFVres_stack_7->SetBinContent(4,10.78467);
   hNCpi0inFVres_stack_7->SetBinContent(5,9.918598);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.386842);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.306535);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.0779);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.4694115);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.3366079);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.5906657);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.1066337);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3531636);
   hNCpi0inFVres_stack_7->SetBinError(3,1.04031);
   hNCpi0inFVres_stack_7->SetBinError(4,1.201269);
   hNCpi0inFVres_stack_7->SetBinError(5,1.276802);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6843592);
   hNCpi0inFVres_stack_7->SetBinError(7,1.12113);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6825396);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1770894);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1388275);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2886701);
   hNCpi0inFVres_stack_7->SetBinError(12,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(13,0.07591249);
   hNCpi0inFVres_stack_7->SetBinError(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(15,0.02789998);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6944379);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.912334);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.468138);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.779706);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.635914);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.038673);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.839666);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.395727);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.3946233);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.253823);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1946706);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.195612);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.025203);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.376417);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9965164);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7657921);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4106822);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4459897);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.15038);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4150715);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02789998);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,34.16963);
   hCCpi0inFV_stack_10->SetBinContent(3,238.3905);
   hCCpi0inFV_stack_10->SetBinContent(4,439.1571);
   hCCpi0inFV_stack_10->SetBinContent(5,569.6193);
   hCCpi0inFV_stack_10->SetBinContent(6,514.4445);
   hCCpi0inFV_stack_10->SetBinContent(7,413.6235);
   hCCpi0inFV_stack_10->SetBinContent(8,334.0868);
   hCCpi0inFV_stack_10->SetBinContent(9,241.5703);
   hCCpi0inFV_stack_10->SetBinContent(10,191.6083);
   hCCpi0inFV_stack_10->SetBinContent(11,156.597);
   hCCpi0inFV_stack_10->SetBinContent(12,98.17816);
   hCCpi0inFV_stack_10->SetBinContent(13,78.453);
   hCCpi0inFV_stack_10->SetBinContent(14,56.66578);
   hCCpi0inFV_stack_10->SetBinContent(15,42.703);
   hCCpi0inFV_stack_10->SetBinContent(16,36.8295);
   hCCpi0inFV_stack_10->SetBinContent(17,32.47403);
   hCCpi0inFV_stack_10->SetBinContent(18,21.16962);
   hCCpi0inFV_stack_10->SetBinContent(19,18.01573);
   hCCpi0inFV_stack_10->SetBinContent(20,17.02964);
   hCCpi0inFV_stack_10->SetBinContent(21,11.71356);
   hCCpi0inFV_stack_10->SetBinContent(22,9.047137);
   hCCpi0inFV_stack_10->SetBinContent(23,5.6166);
   hCCpi0inFV_stack_10->SetBinContent(24,5.80547);
   hCCpi0inFV_stack_10->SetBinContent(25,3.953276);
   hCCpi0inFV_stack_10->SetBinContent(26,16.48396);
   hCCpi0inFV_stack_10->SetBinError(2,2.904782);
   hCCpi0inFV_stack_10->SetBinError(3,7.745422);
   hCCpi0inFV_stack_10->SetBinError(4,10.54228);
   hCCpi0inFV_stack_10->SetBinError(5,12.02255);
   hCCpi0inFV_stack_10->SetBinError(6,11.44494);
   hCCpi0inFV_stack_10->SetBinError(7,10.26401);
   hCCpi0inFV_stack_10->SetBinError(8,9.237758);
   hCCpi0inFV_stack_10->SetBinError(9,7.841742);
   hCCpi0inFV_stack_10->SetBinError(10,6.941886);
   hCCpi0inFV_stack_10->SetBinError(11,6.323812);
   hCCpi0inFV_stack_10->SetBinError(12,4.903357);
   hCCpi0inFV_stack_10->SetBinError(13,4.447124);
   hCCpi0inFV_stack_10->SetBinError(14,3.792662);
   hCCpi0inFV_stack_10->SetBinError(15,3.229388);
   hCCpi0inFV_stack_10->SetBinError(16,3.056126);
   hCCpi0inFV_stack_10->SetBinError(17,2.877081);
   hCCpi0inFV_stack_10->SetBinError(18,2.309402);
   hCCpi0inFV_stack_10->SetBinError(19,2.079037);
   hCCpi0inFV_stack_10->SetBinError(20,2.047352);
   hCCpi0inFV_stack_10->SetBinError(21,1.715351);
   hCCpi0inFV_stack_10->SetBinError(22,1.541619);
   hCCpi0inFV_stack_10->SetBinError(23,1.159853);
   hCCpi0inFV_stack_10->SetBinError(24,1.25669);
   hCCpi0inFV_stack_10->SetBinError(25,1.057809);
   hCCpi0inFV_stack_10->SetBinError(26,2.061668);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,6.255536);
   hNCinFV_stack_11->SetBinContent(4,5.775277);
   hNCinFV_stack_11->SetBinContent(5,5.325212);
   hNCinFV_stack_11->SetBinContent(6,2.249007);
   hNCinFV_stack_11->SetBinContent(7,1.802323);
   hNCinFV_stack_11->SetBinContent(8,0.536893);
   hNCinFV_stack_11->SetBinContent(9,0.5867651);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,1.322064);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,1.27266);
   hNCinFV_stack_11->SetBinError(4,1.195091);
   hNCinFV_stack_11->SetBinError(5,1.178071);
   hNCinFV_stack_11->SetBinError(6,0.7341869);
   hNCinFV_stack_11->SetBinError(7,0.7070809);
   hNCinFV_stack_11->SetBinError(8,0.3929602);
   hNCinFV_stack_11->SetBinError(9,0.3387718);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.5554667);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,22.71564);
   hnumuCCinFV_stack_12->SetBinContent(3,107.596);
   hnumuCCinFV_stack_12->SetBinContent(4,115.1734);
   hnumuCCinFV_stack_12->SetBinContent(5,154.6967);
   hnumuCCinFV_stack_12->SetBinContent(6,126.6512);
   hnumuCCinFV_stack_12->SetBinContent(7,84.52698);
   hnumuCCinFV_stack_12->SetBinContent(8,60.56242);
   hnumuCCinFV_stack_12->SetBinContent(9,49.08834);
   hnumuCCinFV_stack_12->SetBinContent(10,41.84037);
   hnumuCCinFV_stack_12->SetBinContent(11,25.54463);
   hnumuCCinFV_stack_12->SetBinContent(12,26.08284);
   hnumuCCinFV_stack_12->SetBinContent(13,15.00736);
   hnumuCCinFV_stack_12->SetBinContent(14,11.67801);
   hnumuCCinFV_stack_12->SetBinContent(15,8.425898);
   hnumuCCinFV_stack_12->SetBinContent(16,7.577204);
   hnumuCCinFV_stack_12->SetBinContent(17,6.206258);
   hnumuCCinFV_stack_12->SetBinContent(18,5.415097);
   hnumuCCinFV_stack_12->SetBinContent(19,5.507334);
   hnumuCCinFV_stack_12->SetBinContent(20,2.260701);
   hnumuCCinFV_stack_12->SetBinContent(21,1.518779);
   hnumuCCinFV_stack_12->SetBinContent(22,3.856305);
   hnumuCCinFV_stack_12->SetBinContent(23,2.615874);
   hnumuCCinFV_stack_12->SetBinContent(24,3.484399);
   hnumuCCinFV_stack_12->SetBinContent(25,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(26,2.42546);
   hnumuCCinFV_stack_12->SetBinError(2,2.758921);
   hnumuCCinFV_stack_12->SetBinError(3,5.55856);
   hnumuCCinFV_stack_12->SetBinError(4,5.510345);
   hnumuCCinFV_stack_12->SetBinError(5,8.261429);
   hnumuCCinFV_stack_12->SetBinError(6,6.240081);
   hnumuCCinFV_stack_12->SetBinError(7,5.012199);
   hnumuCCinFV_stack_12->SetBinError(8,4.415128);
   hnumuCCinFV_stack_12->SetBinError(9,3.671039);
   hnumuCCinFV_stack_12->SetBinError(10,3.252698);
   hnumuCCinFV_stack_12->SetBinError(11,2.735681);
   hnumuCCinFV_stack_12->SetBinError(12,2.809118);
   hnumuCCinFV_stack_12->SetBinError(13,1.923171);
   hnumuCCinFV_stack_12->SetBinError(14,1.754279);
   hnumuCCinFV_stack_12->SetBinError(15,1.47315);
   hnumuCCinFV_stack_12->SetBinError(16,1.423579);
   hnumuCCinFV_stack_12->SetBinError(17,1.265478);
   hnumuCCinFV_stack_12->SetBinError(18,1.940462);
   hnumuCCinFV_stack_12->SetBinError(19,1.219307);
   hnumuCCinFV_stack_12->SetBinError(20,0.7790431);
   hnumuCCinFV_stack_12->SetBinError(21,0.5892709);
   hnumuCCinFV_stack_12->SetBinError(22,1.000479);
   hnumuCCinFV_stack_12->SetBinError(23,0.8160661);
   hnumuCCinFV_stack_12->SetBinError(24,2.292531);
   hnumuCCinFV_stack_12->SetBinError(25,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(26,0.7989997);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(3,4.694604);
   hnueCCinFV_stack_13->SetBinContent(4,2.63261);
   hnueCCinFV_stack_13->SetBinContent(5,0.785171);
   hnueCCinFV_stack_13->SetBinContent(6,1.268811);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(2,0.5191111);
   hnueCCinFV_stack_13->SetBinError(3,1.153107);
   hnueCCinFV_stack_13->SetBinError(4,0.8207162);
   hnueCCinFV_stack_13->SetBinError(5,0.3925882);
   hnueCCinFV_stack_13->SetBinError(6,0.5889569);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);
   hmcerror__8->SetBinContent(2,67.9157);
   hmcerror__8->SetBinContent(3,414.5897);
   hmcerror__8->SetBinContent(4,614.3666);
   hmcerror__8->SetBinContent(5,787.1685);
   hmcerror__8->SetBinContent(6,681.283);
   hmcerror__8->SetBinContent(7,525.1422);
   hmcerror__8->SetBinContent(8,408.6404);
   hmcerror__8->SetBinContent(9,302.566);
   hmcerror__8->SetBinContent(10,244.8648);
   hmcerror__8->SetBinContent(11,194.1465);
   hmcerror__8->SetBinContent(12,126.0251);
   hmcerror__8->SetBinContent(13,96.58471);
   hmcerror__8->SetBinContent(14,69.6543);
   hmcerror__8->SetBinContent(15,52.21355);
   hmcerror__8->SetBinContent(16,47.74107);
   hmcerror__8->SetBinContent(17,39.7843);
   hmcerror__8->SetBinContent(18,26.97646);
   hmcerror__8->SetBinContent(19,23.52307);
   hmcerror__8->SetBinContent(20,20.21636);
   hmcerror__8->SetBinContent(21,13.45695);
   hmcerror__8->SetBinContent(22,12.90344);
   hmcerror__8->SetBinContent(23,8.232473);
   hmcerror__8->SetBinContent(24,9.289869);
   hmcerror__8->SetBinContent(25,4.490169);
   hmcerror__8->SetBinContent(26,19.2496);
   hmcerror__8->SetBinError(1,0.3895343);
   hmcerror__8->SetBinError(2,14.57857);
   hmcerror__8->SetBinError(3,85.58627);
   hmcerror__8->SetBinError(4,138.1215);
   hmcerror__8->SetBinError(5,180.324);
   hmcerror__8->SetBinError(6,160.5278);
   hmcerror__8->SetBinError(7,127.9346);
   hmcerror__8->SetBinError(8,96.63203);
   hmcerror__8->SetBinError(9,73.64016);
   hmcerror__8->SetBinError(10,60.5477);
   hmcerror__8->SetBinError(11,46.53119);
   hmcerror__8->SetBinError(12,31.43148);
   hmcerror__8->SetBinError(13,22.95199);
   hmcerror__8->SetBinError(14,17.11544);
   hmcerror__8->SetBinError(15,13.60748);
   hmcerror__8->SetBinError(16,11.4952);
   hmcerror__8->SetBinError(17,9.737791);
   hmcerror__8->SetBinError(18,7.122877);
   hmcerror__8->SetBinError(19,5.396832);
   hmcerror__8->SetBinError(20,4.950148);
   hmcerror__8->SetBinError(21,3.812886);
   hmcerror__8->SetBinError(22,3.771094);
   hmcerror__8->SetBinError(23,2.427618);
   hmcerror__8->SetBinError(24,4.931);
   hmcerror__8->SetBinError(25,1.77922);
   hmcerror__8->SetBinError(26,4.853399);
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
   0,
   67,
   385,
   598,
   708,
   680,
   534,
   342,
   259,
   199,
   164,
   142,
   106,
   57,
   51,
   30,
   26,
   21,
   20,
   12,
   13,
   8,
   9,
   6,
   6};
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
   0,
   8.3119,
   19.62142,
   24.45404,
   26.60827,
   26.07681,
   23.10844,
   18.49324,
   16.09348,
   14.10674,
   12.80625,
   11.91638,
   10.29563,
   7.679,
   7.2725,
   5.6197,
   5.2453,
   4.7354,
   4.6266,
   3.64022,
   3.77763,
   3.0307,
   3.19354,
   2.67925,
   2.67925};
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
   1.1478,
   8.1094,
   19.62142,
   24.45404,
   26.60827,
   26.07681,
   23.10844,
   18.49324,
   16.09348,
   14.10674,
   12.80625,
   11.91638,
   10.29563,
   7.4757,
   7.0686,
   5.4117,
   5.0358,
   4.5229,
   4.4133,
   3.4155,
   3.5552,
   2.7896,
   2.9582,
   2.41858,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1650);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(808.0691);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=26.3/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4443.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 122.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  45.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3570.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 24.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 888.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.7","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_bnb_12_Emuon_all");
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
   0,
   0.2146569,
   0.2064361,
   0.2248193,
   0.2290793,
   0.2356257,
   0.243619,
   0.2364721,
   0.2433854,
   0.24727,
   0.2396705,
   0.2494066,
   0.2376359,
   0.2457198,
   0.2606121,
   0.2407822,
   0.2447647,
   0.2640404,
   0.2294272,
   0.2448585,
   0.2833395,
   0.2922549,
   0.2948832,
   0.5307932,
   0.3962479};
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
   0,
   0.2146569,
   0.2064361,
   0.2248193,
   0.2290793,
   0.2356257,
   0.243619,
   0.2364721,
   0.2433854,
   0.24727,
   0.2396705,
   0.2494066,
   0.2376359,
   0.2457198,
   0.2606121,
   0.2407822,
   0.2447647,
   0.2640404,
   0.2294272,
   0.2448585,
   0.2833395,
   0.2922549,
   0.2948832,
   0.5307932,
   0.3962479};
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
   Graph_Graph3010->GetXaxis()->SetTitle("Muon Energy [MeV]");
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
   0,
   0.2146569,
   0.2064361,
   0.2248193,
   0.2290793,
   0.2356257,
   0.243619,
   0.2364721,
   0.2433854,
   0.24727,
   0.2396705,
   0.2494066,
   0.2376359,
   0.2457198,
   0.2606121,
   0.2407822,
   0.2447647,
   0.2640404,
   0.2294272,
   0.2448585,
   0.2833395,
   0.2922549,
   0.2948832,
   0.5307932,
   0.3962479};
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
   0,
   0.2146569,
   0.2064361,
   0.2248193,
   0.2290793,
   0.2356257,
   0.243619,
   0.2364721,
   0.2433854,
   0.24727,
   0.2396705,
   0.2494066,
   0.2376359,
   0.2457198,
   0.2606121,
   0.2407822,
   0.2447647,
   0.2640404,
   0.2294272,
   0.2448585,
   0.2833395,
   0.2922549,
   0.2948832,
   0.5307932,
   0.3962479};
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
   10,
   0.9865171,
   0.928629,
   0.9733601,
   0.8994263,
   0.9981168,
   1.016867,
   0.8369218,
   0.8560116,
   0.8126935,
   0.8447227,
   1.12676,
   1.097482,
   0.818327,
   0.9767579,
   0.6283897,
   0.6535242,
   0.7784564,
   0.8502293,
   0.5935786,
   0.9660433,
   0.6199896,
   1.093232,
   0.6458648,
   1.336253};
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
   0,
   0.1223855,
   0.04732732,
   0.03980366,
   0.03380251,
   0.03827603,
   0.04400416,
   0.04525555,
   0.05318997,
   0.05761031,
   0.06596176,
   0.0945556,
   0.1065969,
   0.1102444,
   0.1392838,
   0.1177121,
   0.1318435,
   0.1755382,
   0.1966835,
   0.180063,
   0.2807196,
   0.2348753,
   0.3879199,
   0.2884056,
   0.5966925};
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
   0,
   0.1194039,
   0.04732732,
   0.03980366,
   0.03380251,
   0.03827603,
   0.04400416,
   0.04525555,
   0.05318997,
   0.05761031,
   0.06596176,
   0.0945556,
   0.1065969,
   0.1073257,
   0.1353786,
   0.1133552,
   0.1265776,
   0.167661,
   0.1876159,
   0.1689473,
   0.2641906,
   0.2161904,
   0.3593331,
   0.260346,
   0.538639};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1650);
   Graph_Graph3012->SetMinimum(0.3217134);
   Graph_Graph3012->SetMaximum(10.96425);
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
   
   TH1F *hist__9 = new TH1F("hist__9","CCpi0_PC_bnb_12_Emuon_all",25,0,1500);

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
