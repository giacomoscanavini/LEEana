#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Feb 18 15:55:16 2023) by ROOT version 6.26/00
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
   pad1->Range(0.2307692,-7.105156,6.641026,785.6807);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hmc__7->SetBinContent(4,340.3069);
   hmc__7->SetBinContent(5,355.2578);
   hmc__7->SetBinContent(6,283.8455);
   hmc__7->SetBinContent(7,204.5635);
   hmc__7->SetBinContent(8,154.8636);
   hmc__7->SetBinContent(9,129.2242);
   hmc__7->SetBinContent(10,82.24805);
   hmc__7->SetBinContent(11,54.85233);
   hmc__7->SetBinContent(12,34.11918);
   hmc__7->SetBinContent(13,21.06798);
   hmc__7->SetBinContent(14,10.77764);
   hmc__7->SetBinContent(15,8.033792);
   hmc__7->SetBinContent(16,3.689998);
   hmc__7->SetBinContent(17,1.744787);
   hmc__7->SetBinContent(18,0.334968);
   hmc__7->SetBinContent(19,0.125218);
   hmc__7->SetBinError(1,0.3895343);
   hmc__7->SetBinError(2,0.3895343);
   hmc__7->SetBinError(3,0.3895343);
   hmc__7->SetBinError(4,67.3249);
   hmc__7->SetBinError(5,73.75616);
   hmc__7->SetBinError(6,73.02938);
   hmc__7->SetBinError(7,55.5977);
   hmc__7->SetBinError(8,40.25281);
   hmc__7->SetBinError(9,38.37804);
   hmc__7->SetBinError(10,28.35158);
   hmc__7->SetBinError(11,21.09473);
   hmc__7->SetBinError(12,16.25232);
   hmc__7->SetBinError(13,9.646119);
   hmc__7->SetBinError(14,6.395395);
   hmc__7->SetBinError(15,4.821194);
   hmc__7->SetBinError(16,3.717023);
   hmc__7->SetBinError(17,2.631716);
   hmc__7->SetBinError(18,0.9332038);
   hmc__7->SetBinError(19,1.966094);
   hmc__7->SetBinError(20,0.3895343);
   hmc__7->SetBinError(21,0.3895343);
   hmc__7->SetMinimum(-7.105156);
   hmc__7->SetMaximum(746.0414);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,1,6);
   hs3_stack_3->SetMinimum(-6.289654e-09);
   hs3_stack_3->SetMaximum(373.0206);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,16.1102);
   hbadmatch_stack_1->SetBinContent(5,14.1744);
   hbadmatch_stack_1->SetBinContent(6,7.654502);
   hbadmatch_stack_1->SetBinContent(7,5.700986);
   hbadmatch_stack_1->SetBinContent(8,5.448737);
   hbadmatch_stack_1->SetBinContent(9,2.974989);
   hbadmatch_stack_1->SetBinContent(10,1.807397);
   hbadmatch_stack_1->SetBinContent(11,1.072095);
   hbadmatch_stack_1->SetBinContent(12,0.9303237);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinContent(15,0.1950248);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinError(4,2.215437);
   hbadmatch_stack_1->SetBinError(5,2.227724);
   hbadmatch_stack_1->SetBinError(6,1.441713);
   hbadmatch_stack_1->SetBinError(7,1.148773);
   hbadmatch_stack_1->SetBinError(8,1.208282);
   hbadmatch_stack_1->SetBinError(9,0.8455953);
   hbadmatch_stack_1->SetBinError(10,0.7084844);
   hbadmatch_stack_1->SetBinError(11,0.5551335);
   hbadmatch_stack_1->SetBinError(12,0.4814682);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetBinError(15,0.1950249);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,83.89484);
   hext_stack_2->SetBinContent(5,74.18282);
   hext_stack_2->SetBinContent(6,52.10849);
   hext_stack_2->SetBinContent(7,32.2388);
   hext_stack_2->SetBinContent(8,23.39346);
   hext_stack_2->SetBinContent(9,9.089171);
   hext_stack_2->SetBinContent(10,5.765768);
   hext_stack_2->SetBinContent(11,3.61467);
   hext_stack_2->SetBinContent(12,0.7309963);
   hext_stack_2->SetBinContent(15,2.566457);
   hext_stack_2->SetBinError(4,6.292672);
   hext_stack_2->SetBinError(5,5.946904);
   hext_stack_2->SetBinError(6,4.972256);
   hext_stack_2->SetBinError(7,3.673715);
   hext_stack_2->SetBinError(8,3.23414);
   hext_stack_2->SetBinError(9,1.88497);
   hext_stack_2->SetBinError(10,1.450642);
   hext_stack_2->SetBinError(11,1.491196);
   hext_stack_2->SetBinError(12,0.5201503);
   hext_stack_2->SetBinError(15,1.283228);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,4.298892);
   hdirt_stack_3->SetBinContent(5,7.551575);
   hdirt_stack_3->SetBinContent(6,4.959717);
   hdirt_stack_3->SetBinContent(7,1.590424);
   hdirt_stack_3->SetBinContent(8,3.231275);
   hdirt_stack_3->SetBinContent(9,1.406685);
   hdirt_stack_3->SetBinContent(10,0.5897411);
   hdirt_stack_3->SetBinContent(11,0.1380715);
   hdirt_stack_3->SetBinError(4,1.026049);
   hdirt_stack_3->SetBinError(5,1.615941);
   hdirt_stack_3->SetBinError(6,1.170748);
   hdirt_stack_3->SetBinError(7,0.6767614);
   hdirt_stack_3->SetBinError(8,1.012853);
   hdirt_stack_3->SetBinError(9,0.637752);
   hdirt_stack_3->SetBinError(10,0.458067);
   hdirt_stack_3->SetBinError(11,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,75.36268);
   houtFV_stack_4->SetBinContent(5,76.92039);
   houtFV_stack_4->SetBinContent(6,61.46359);
   houtFV_stack_4->SetBinContent(7,36.5518);
   houtFV_stack_4->SetBinContent(8,26.36537);
   houtFV_stack_4->SetBinContent(9,23.10466);
   houtFV_stack_4->SetBinContent(10,12.65906);
   houtFV_stack_4->SetBinContent(11,5.218478);
   houtFV_stack_4->SetBinContent(12,5.018065);
   houtFV_stack_4->SetBinContent(13,1.467217);
   houtFV_stack_4->SetBinContent(14,0.3401776);
   houtFV_stack_4->SetBinContent(15,0.536893);
   houtFV_stack_4->SetBinError(4,4.438403);
   houtFV_stack_4->SetBinError(5,4.572831);
   houtFV_stack_4->SetBinError(6,4.01096);
   houtFV_stack_4->SetBinError(7,3.016025);
   houtFV_stack_4->SetBinError(8,2.575413);
   houtFV_stack_4->SetBinError(9,2.403602);
   houtFV_stack_4->SetBinError(10,1.783566);
   houtFV_stack_4->SetBinError(11,1.151791);
   houtFV_stack_4->SetBinError(12,1.172957);
   houtFV_stack_4->SetBinError(13,0.6214735);
   houtFV_stack_4->SetBinError(14,0.3401776);
   houtFV_stack_4->SetBinError(15,0.3929602);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.367108);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.131034);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.297522);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.645444);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.976172);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.8501219);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7391858);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.078731);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.15719);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.044758);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.8079399);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4273996);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4464035);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3757913);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4516052);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3259676);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2770189);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2452205);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5545656);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3435999);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3093236);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2869115);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1012383);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,26.87793);
   hNCpi0inFVres_stack_7->SetBinContent(5,33.82455);
   hNCpi0inFVres_stack_7->SetBinContent(6,37.67795);
   hNCpi0inFVres_stack_7->SetBinContent(7,35.5567);
   hNCpi0inFVres_stack_7->SetBinContent(8,33.24148);
   hNCpi0inFVres_stack_7->SetBinContent(9,33.9674);
   hNCpi0inFVres_stack_7->SetBinContent(10,27.03237);
   hNCpi0inFVres_stack_7->SetBinContent(11,21.04217);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.7207);
   hNCpi0inFVres_stack_7->SetBinContent(13,9.259352);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.939068);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.21947);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.414194);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.074322);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.307068);
   hNCpi0inFVres_stack_7->SetBinError(4,1.654467);
   hNCpi0inFVres_stack_7->SetBinError(5,1.846868);
   hNCpi0inFVres_stack_7->SetBinError(6,2.034886);
   hNCpi0inFVres_stack_7->SetBinError(7,1.942493);
   hNCpi0inFVres_stack_7->SetBinError(8,1.836672);
   hNCpi0inFVres_stack_7->SetBinError(9,1.944463);
   hNCpi0inFVres_stack_7->SetBinError(10,1.649637);
   hNCpi0inFVres_stack_7->SetBinError(11,1.520862);
   hNCpi0inFVres_stack_7->SetBinError(12,1.157075);
   hNCpi0inFVres_stack_7->SetBinError(13,1.007858);
   hNCpi0inFVres_stack_7->SetBinError(14,0.775456);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5432788);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5508095);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3674124);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2032767);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.740037);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.82093);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.20746);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.048938);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.572062);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.934762);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.099091);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.779965);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.52413);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.979412);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.142908);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9406422);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.088408);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.04331);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9987094);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9396424);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9450117);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.917992);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6070574);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5176605);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4404792);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3527294);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.07381642);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1155977);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.02789998);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,56.35661);
   hCCpi0inFV_stack_10->SetBinContent(5,67.89784);
   hCCpi0inFV_stack_10->SetBinContent(6,53.22301);
   hCCpi0inFV_stack_10->SetBinContent(7,42.11127);
   hCCpi0inFV_stack_10->SetBinContent(8,30.61025);
   hCCpi0inFV_stack_10->SetBinContent(9,27.69774);
   hCCpi0inFV_stack_10->SetBinContent(10,15.34129);
   hCCpi0inFV_stack_10->SetBinContent(11,11.76663);
   hCCpi0inFV_stack_10->SetBinContent(12,5.602745);
   hCCpi0inFV_stack_10->SetBinContent(13,5.523881);
   hCCpi0inFV_stack_10->SetBinContent(14,1.787732);
   hCCpi0inFV_stack_10->SetBinContent(15,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(16,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(17,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(4,3.777814);
   hCCpi0inFV_stack_10->SetBinError(5,4.170897);
   hCCpi0inFV_stack_10->SetBinError(6,3.645212);
   hCCpi0inFV_stack_10->SetBinError(7,3.310492);
   hCCpi0inFV_stack_10->SetBinError(8,2.765674);
   hCCpi0inFV_stack_10->SetBinError(9,2.69377);
   hCCpi0inFV_stack_10->SetBinError(10,1.937405);
   hCCpi0inFV_stack_10->SetBinError(11,1.752457);
   hCCpi0inFV_stack_10->SetBinError(12,1.196703);
   hCCpi0inFV_stack_10->SetBinError(13,1.13577);
   hCCpi0inFV_stack_10->SetBinError(14,0.744729);
   hCCpi0inFV_stack_10->SetBinError(15,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(16,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(17,0.1967154);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,10.49897);
   hNCinFV_stack_11->SetBinContent(5,12.0627);
   hNCinFV_stack_11->SetBinContent(6,11.14022);
   hNCinFV_stack_11->SetBinContent(7,13.09107);
   hNCinFV_stack_11->SetBinContent(8,7.673963);
   hNCinFV_stack_11->SetBinContent(9,7.574219);
   hNCinFV_stack_11->SetBinContent(10,4.102892);
   hNCinFV_stack_11->SetBinContent(11,3.071134);
   hNCinFV_stack_11->SetBinContent(12,2.247316);
   hNCinFV_stack_11->SetBinContent(13,0.9269427);
   hNCinFV_stack_11->SetBinContent(14,0.536893);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.1950248);
   hNCinFV_stack_11->SetBinError(4,1.654855);
   hNCinFV_stack_11->SetBinError(5,1.788741);
   hNCinFV_stack_11->SetBinError(6,1.665073);
   hNCinFV_stack_11->SetBinError(7,1.830694);
   hNCinFV_stack_11->SetBinError(8,1.359257);
   hNCinFV_stack_11->SetBinError(9,1.388121);
   hNCinFV_stack_11->SetBinError(10,1.000002);
   hNCinFV_stack_11->SetBinError(11,0.9202356);
   hNCinFV_stack_11->SetBinError(12,0.7337357);
   hNCinFV_stack_11->SetBinError(13,0.4800908);
   hNCinFV_stack_11->SetBinError(14,0.3929602);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.1950249);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,53.54976);
   hnumuCCinFV_stack_12->SetBinContent(5,51.43417);
   hnumuCCinFV_stack_12->SetBinContent(6,41.79142);
   hnumuCCinFV_stack_12->SetBinContent(7,25.53155);
   hnumuCCinFV_stack_12->SetBinContent(8,15.41838);
   hnumuCCinFV_stack_12->SetBinContent(9,14.06536);
   hnumuCCinFV_stack_12->SetBinContent(10,6.323271);
   hnumuCCinFV_stack_12->SetBinContent(11,2.986683);
   hnumuCCinFV_stack_12->SetBinContent(12,1.93727);
   hnumuCCinFV_stack_12->SetBinContent(13,0.7827154);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(4,4.126);
   hnumuCCinFV_stack_12->SetBinError(5,3.908053);
   hnumuCCinFV_stack_12->SetBinError(6,3.834235);
   hnumuCCinFV_stack_12->SetBinError(7,3.389323);
   hnumuCCinFV_stack_12->SetBinError(8,1.985788);
   hnumuCCinFV_stack_12->SetBinError(9,2.871542);
   hnumuCCinFV_stack_12->SetBinError(10,1.343466);
   hnumuCCinFV_stack_12->SetBinError(11,0.8478097);
   hnumuCCinFV_stack_12->SetBinError(12,0.7601304);
   hnumuCCinFV_stack_12->SetBinError(13,0.4635153);
   hnumuCCinFV_stack_12->SetBinError(15,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(16,0.3401776);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,2.942814);
   hnueCCinFV_stack_13->SetBinContent(5,3.825108);
   hnueCCinFV_stack_13->SetBinContent(6,2.18216);
   hnueCCinFV_stack_13->SetBinContent(7,0.9381727);
   hnueCCinFV_stack_13->SetBinContent(8,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(9,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinError(4,1.671487);
   hnueCCinFV_stack_13->SetBinError(5,1.406388);
   hnueCCinFV_stack_13->SetBinError(6,0.8215264);
   hnueCCinFV_stack_13->SetBinError(7,0.7683121);
   hnueCCinFV_stack_13->SetBinError(8,0.4972556);
   hnueCCinFV_stack_13->SetBinError(9,0.2770047);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__8->SetBinContent(4,340.3069);
   hmcerror__8->SetBinContent(5,355.2578);
   hmcerror__8->SetBinContent(6,283.8455);
   hmcerror__8->SetBinContent(7,204.5635);
   hmcerror__8->SetBinContent(8,154.8636);
   hmcerror__8->SetBinContent(9,129.2242);
   hmcerror__8->SetBinContent(10,82.24805);
   hmcerror__8->SetBinContent(11,54.85233);
   hmcerror__8->SetBinContent(12,34.11918);
   hmcerror__8->SetBinContent(13,21.06798);
   hmcerror__8->SetBinContent(14,10.77764);
   hmcerror__8->SetBinContent(15,8.033792);
   hmcerror__8->SetBinContent(16,3.689998);
   hmcerror__8->SetBinContent(17,1.744787);
   hmcerror__8->SetBinContent(18,0.334968);
   hmcerror__8->SetBinContent(19,0.125218);
   hmcerror__8->SetBinError(1,0.3895343);
   hmcerror__8->SetBinError(2,0.3895343);
   hmcerror__8->SetBinError(3,0.3895343);
   hmcerror__8->SetBinError(4,67.3249);
   hmcerror__8->SetBinError(5,73.75616);
   hmcerror__8->SetBinError(6,73.02938);
   hmcerror__8->SetBinError(7,55.5977);
   hmcerror__8->SetBinError(8,40.25281);
   hmcerror__8->SetBinError(9,38.37804);
   hmcerror__8->SetBinError(10,28.35158);
   hmcerror__8->SetBinError(11,21.09473);
   hmcerror__8->SetBinError(12,16.25232);
   hmcerror__8->SetBinError(13,9.646119);
   hmcerror__8->SetBinError(14,6.395395);
   hmcerror__8->SetBinError(15,4.821194);
   hmcerror__8->SetBinError(16,3.717023);
   hmcerror__8->SetBinError(17,2.631716);
   hmcerror__8->SetBinError(18,0.9332038);
   hmcerror__8->SetBinError(19,1.966094);
   hmcerror__8->SetBinError(20,0.3895343);
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
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3009[20] = {
   0,
   0,
   0,
   294,
   308,
   275,
   178,
   133,
   96,
   78,
   41,
   22,
   19,
   14,
   5,
   3,
   1,
   1,
   2,
   0};
   Double_t _felx3009[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3009[20] = {
   0,
   0,
   0,
   17.14643,
   17.54993,
   16.58312,
   13.34166,
   11.53256,
   9.9196,
   8.9562,
   6.5384,
   4.8417,
   4.5151,
   3.9102,
   2.48995,
   2.143368,
   1,
   1,
   2,
   0};
   Double_t _fehx3009[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3009[20] = {
   1.1478,
   1.1478,
   1.1478,
   17.14643,
   17.54993,
   16.58312,
   13.34166,
   11.53256,
   9.718,
   8.7542,
   6.3331,
   4.6299,
   4.3011,
   3.6898,
   2.21064,
   1.72422,
   1.35971,
   1.35971,
   1.51917,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0.5,6.5);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(358.1049);
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.2046154,-0.5333333,6.666154,2.133333);
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
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
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
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3010[20] = {
   0,
   0,
   0,
   0.1978358,
   0.2076131,
   0.2572856,
   0.271787,
   0.2599243,
   0.2969879,
   0.3447082,
   0.3845732,
   0.4763397,
   0.4578569,
   0.5933945,
   0.6001144,
   1.007324,
   1.508331,
   2.785949,
   15.70137,
   0};
   Double_t _fehx3010[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3010[20] = {
   0,
   0,
   0,
   0.1978358,
   0.2076131,
   0.2572856,
   0.271787,
   0.2599243,
   0.2969879,
   0.3447082,
   0.3845732,
   0.4763397,
   0.4578569,
   0.5933945,
   0.6001144,
   1.007324,
   1.508331,
   2.785949,
   15.70137,
   0};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0.5,6.5);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
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
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
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
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3011[20] = {
   0,
   0,
   0,
   0.1430089,
   0.1575998,
   0.1769401,
   0.1890785,
   0.2079284,
   0.2323749,
   0.2609091,
   0.2590447,
   0.2765265,
   0.2584205,
   0.32145,
   0.2907221,
   0.4414304,
   0.4699893,
   1.277273,
   2.617096,
   0};
   Double_t _fehx3011[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3011[20] = {
   0,
   0,
   0,
   0.1430089,
   0.1575998,
   0.1769401,
   0.1890785,
   0.2079284,
   0.2323749,
   0.2609091,
   0.2590447,
   0.2765265,
   0.2584205,
   0.32145,
   0.2907221,
   0.4414304,
   0.4699893,
   1.277273,
   2.617096,
   0};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0.5,6.5);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(9,92);
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
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3012[20] = {
   10,
   10,
   10,
   0.8639261,
   0.866976,
   0.9688369,
   0.8701454,
   0.8588205,
   0.7428947,
   0.9483508,
   0.7474615,
   0.6447986,
   0.9018426,
   1.298985,
   0.6223711,
   0.8130086,
   0.5731358,
   2.98536,
   15.97215,
   10};
   Double_t _felx3012[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3012[20] = {
   0,
   0,
   0,
   0.05038519,
   0.04940054,
   0.05842306,
   0.06522016,
   0.07446918,
   0.07676269,
   0.1088926,
   0.1192001,
   0.1419055,
   0.214311,
   0.3628066,
   0.3099346,
   0.5808589,
   0.5731358,
   2.98536,
   15.97215,
   0};
   Double_t _fehx3012[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3012[20] = {
   0,
   0,
   0,
   0.05038519,
   0.04940054,
   0.05842306,
   0.06522016,
   0.07446918,
   0.07520261,
   0.1064366,
   0.1154573,
   0.1356979,
   0.2041534,
   0.3423569,
   0.2751677,
   0.4672686,
   0.7792985,
   4.059223,
   12.1322,
   0};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0.5,6.5);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(30.91479);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_nc_pio_score_all",20,1,6);

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
   TLine *line = new TLine(1,1,6,1);
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
