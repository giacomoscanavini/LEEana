#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Mon Jan 16 03:24:35 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-2.947259,1353.846,325.9048);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hmc__25->SetBinContent(1,45.29935);
   hmc__25->SetBinContent(2,147.363);
   hmc__25->SetBinContent(3,119.752);
   hmc__25->SetBinContent(4,96.62717);
   hmc__25->SetBinContent(5,60.8036);
   hmc__25->SetBinContent(6,31.03275);
   hmc__25->SetBinContent(7,24.10473);
   hmc__25->SetBinContent(8,12.119);
   hmc__25->SetBinContent(9,9.580336);
   hmc__25->SetBinContent(10,7.016255);
   hmc__25->SetBinContent(11,6.87272);
   hmc__25->SetBinContent(12,5.564474);
   hmc__25->SetBinContent(13,44.40105);
   hmc__25->SetBinError(1,18.97082);
   hmc__25->SetBinError(2,50.11444);
   hmc__25->SetBinError(3,36.79637);
   hmc__25->SetBinError(4,33.41293);
   hmc__25->SetBinError(5,20.41149);
   hmc__25->SetBinError(6,14.13119);
   hmc__25->SetBinError(7,19.64894);
   hmc__25->SetBinError(8,9.460088);
   hmc__25->SetBinError(9,7.443572);
   hmc__25->SetBinError(10,6.73405);
   hmc__25->SetBinError(11,7.477063);
   hmc__25->SetBinError(12,6.257514);
   hmc__25->SetBinError(13,22.64173);
   hmc__25->SetMinimum(-2.947259);
   hmc__25->SetMaximum(309.4622);
   hmc__25->SetEntries(597.4116);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",12,0,1200);
   hs9_stack_9->SetMinimum(-1.166102e-08);
   hs9_stack_9->SetMaximum(154.7311);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,4.003263);
   hbadmatch_stack_1->SetBinContent(2,6.125598);
   hbadmatch_stack_1->SetBinContent(3,5.662013);
   hbadmatch_stack_1->SetBinContent(4,0.8269954);
   hbadmatch_stack_1->SetBinContent(5,2.929765);
   hbadmatch_stack_1->SetBinContent(6,1.834729);
   hbadmatch_stack_1->SetBinContent(7,1.18131);
   hbadmatch_stack_1->SetBinContent(8,0.2741253);
   hbadmatch_stack_1->SetBinContent(9,0.4459144);
   hbadmatch_stack_1->SetBinContent(10,0.2333977);
   hbadmatch_stack_1->SetBinContent(13,0.493706);
   hbadmatch_stack_1->SetBinError(1,1.265176);
   hbadmatch_stack_1->SetBinError(2,1.452491);
   hbadmatch_stack_1->SetBinError(3,1.416045);
   hbadmatch_stack_1->SetBinError(4,0.4831271);
   hbadmatch_stack_1->SetBinError(5,1.075928);
   hbadmatch_stack_1->SetBinError(6,0.8474959);
   hbadmatch_stack_1->SetBinError(7,0.6938864);
   hbadmatch_stack_1->SetBinError(8,0.2741253);
   hbadmatch_stack_1->SetBinError(9,0.4459143);
   hbadmatch_stack_1->SetBinError(10,0.2333977);
   hbadmatch_stack_1->SetBinError(13,0.3496211);
   hbadmatch_stack_1->SetEntries(75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,7.961599);
   houtFV_stack_4->SetBinContent(2,27.11126);
   houtFV_stack_4->SetBinContent(3,23.61544);
   houtFV_stack_4->SetBinContent(4,12.64663);
   houtFV_stack_4->SetBinContent(5,12.10483);
   houtFV_stack_4->SetBinContent(6,5.713562);
   houtFV_stack_4->SetBinContent(7,4.755184);
   houtFV_stack_4->SetBinContent(8,3.301305);
   houtFV_stack_4->SetBinContent(9,2.717248);
   houtFV_stack_4->SetBinContent(10,2.271334);
   houtFV_stack_4->SetBinContent(11,1.726253);
   houtFV_stack_4->SetBinContent(12,1.846301);
   houtFV_stack_4->SetBinContent(13,9.833817);
   houtFV_stack_4->SetBinError(1,1.614018);
   houtFV_stack_4->SetBinError(2,3.013733);
   houtFV_stack_4->SetBinError(3,2.918866);
   houtFV_stack_4->SetBinError(4,2.050752);
   houtFV_stack_4->SetBinError(5,2.138737);
   houtFV_stack_4->SetBinError(6,1.315096);
   houtFV_stack_4->SetBinError(7,1.331615);
   houtFV_stack_4->SetBinError(8,1.163778);
   houtFV_stack_4->SetBinError(9,1.006606);
   houtFV_stack_4->SetBinError(10,0.9024504);
   houtFV_stack_4->SetBinError(11,0.8359618);
   houtFV_stack_4->SetBinError(12,0.7250425);
   houtFV_stack_4->SetBinError(13,1.856331);
   houtFV_stack_4->SetEntries(375);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.256225);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.5786553);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2562251);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04681417);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3653685);
   hNCpi0inFVcoh_stack_5->SetEntries(14);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2979235);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3310261);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6779631);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1046797);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3698398);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05733541);
   hNCpi0inFVqe_stack_6->SetEntries(32);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,8.418852);
   hNCpi0inFVres_stack_7->SetBinContent(2,35.0253);
   hNCpi0inFVres_stack_7->SetBinContent(3,31.52758);
   hNCpi0inFVres_stack_7->SetBinContent(4,30.05259);
   hNCpi0inFVres_stack_7->SetBinContent(5,15.81408);
   hNCpi0inFVres_stack_7->SetBinContent(6,9.915785);
   hNCpi0inFVres_stack_7->SetBinContent(7,6.268463);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.671042);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.943178);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.7527642);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.5872512);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.6203538);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.028149);
   hNCpi0inFVres_stack_7->SetBinError(1,1.143564);
   hNCpi0inFVres_stack_7->SetBinError(2,2.259232);
   hNCpi0inFVres_stack_7->SetBinError(3,2.11514);
   hNCpi0inFVres_stack_7->SetBinError(4,2.183577);
   hNCpi0inFVres_stack_7->SetBinError(5,1.457476);
   hNCpi0inFVres_stack_7->SetBinError(6,1.236446);
   hNCpi0inFVres_stack_7->SetBinError(7,1.00393);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4118919);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5917534);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2865101);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2767835);
   hNCpi0inFVres_stack_7->SetBinError(12,0.278756);
   hNCpi0inFVres_stack_7->SetBinError(13,1.028149);
   hNCpi0inFVres_stack_7->SetEntries(2461);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.894557);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.541879);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.227158);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.805419);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.589712);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.125882);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.364916);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.4879434);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.5872512);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.4548407);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.777271);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6117579);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.695942);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6624461);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9796722);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.126184);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.094148);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6795927);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4918139);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.649078);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2707799);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.2767835);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2687489);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3742577);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.366865);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6574649);
   hNCpi0inFVdis_stack_8->SetEntries(570);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04681417);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,10.47504);
   hCCpi0inFV_stack_10->SetBinContent(2,30.57812);
   hCCpi0inFV_stack_10->SetBinContent(3,25.91277);
   hCCpi0inFV_stack_10->SetBinContent(4,23.06285);
   hCCpi0inFV_stack_10->SetBinContent(5,12.77794);
   hCCpi0inFV_stack_10->SetBinContent(6,4.866227);
   hCCpi0inFV_stack_10->SetBinContent(7,3.842475);
   hCCpi0inFV_stack_10->SetBinContent(8,2.759011);
   hCCpi0inFV_stack_10->SetBinContent(9,1.358624);
   hCCpi0inFV_stack_10->SetBinContent(10,1.633784);
   hCCpi0inFV_stack_10->SetBinContent(11,1.337743);
   hCCpi0inFV_stack_10->SetBinContent(12,0.9335909);
   hCCpi0inFV_stack_10->SetBinContent(13,7.613072);
   hCCpi0inFV_stack_10->SetBinError(1,1.743892);
   hCCpi0inFV_stack_10->SetBinError(2,3.3238);
   hCCpi0inFV_stack_10->SetBinError(3,2.98986);
   hCCpi0inFV_stack_10->SetBinError(4,2.906284);
   hCCpi0inFV_stack_10->SetBinError(5,2.075823);
   hCCpi0inFV_stack_10->SetBinError(6,1.276933);
   hCCpi0inFV_stack_10->SetBinError(7,1.210541);
   hCCpi0inFV_stack_10->SetBinError(8,0.9129486);
   hCCpi0inFV_stack_10->SetBinError(9,0.7117782);
   hCCpi0inFV_stack_10->SetBinError(10,0.6175123);
   hCCpi0inFV_stack_10->SetBinError(11,0.7723463);
   hCCpi0inFV_stack_10->SetBinError(12,0.4667954);
   hCCpi0inFV_stack_10->SetBinError(13,1.610101);
   hCCpi0inFV_stack_10->SetEntries(411);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,5.516922);
   hNCinFV_stack_11->SetBinContent(2,10.6356);
   hNCinFV_stack_11->SetBinContent(3,4.542668);
   hNCinFV_stack_11->SetBinContent(4,4.796947);
   hNCinFV_stack_11->SetBinContent(5,2.971527);
   hNCinFV_stack_11->SetBinContent(6,2.079698);
   hNCinFV_stack_11->SetBinContent(7,1.379505);
   hNCinFV_stack_11->SetBinContent(8,1.146108);
   hNCinFV_stack_11->SetBinContent(9,0.6793121);
   hNCinFV_stack_11->SetBinContent(11,1.146108);
   hNCinFV_stack_11->SetBinContent(13,2.058817);
   hNCinFV_stack_11->SetBinError(1,1.392986);
   hNCinFV_stack_11->SetBinError(2,1.999638);
   hNCinFV_stack_11->SetBinError(3,1.276258);
   hNCinFV_stack_11->SetBinError(4,1.262306);
   hNCinFV_stack_11->SetBinError(5,0.9888581);
   hNCinFV_stack_11->SetBinError(6,0.7616831);
   hNCinFV_stack_11->SetBinError(7,0.6455522);
   hNCinFV_stack_11->SetBinError(8,0.601883);
   hNCinFV_stack_11->SetBinError(9,0.5033032);
   hNCinFV_stack_11->SetBinError(11,0.601883);
   hNCinFV_stack_11->SetBinError(13,0.8185668);
   hNCinFV_stack_11->SetEntries(119);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,5.664989);
   hnumuCCinFV_stack_12->SetBinContent(2,30.94796);
   hnumuCCinFV_stack_12->SetBinContent(3,20.00638);
   hnumuCCinFV_stack_12->SetBinContent(4,16.07347);
   hnumuCCinFV_stack_12->SetBinContent(5,10.10363);
   hnumuCCinFV_stack_12->SetBinContent(6,4.430659);
   hnumuCCinFV_stack_12->SetBinContent(7,3.800761);
   hnumuCCinFV_stack_12->SetBinContent(8,2.446361);
   hnumuCCinFV_stack_12->SetBinContent(9,1.615411);
   hnumuCCinFV_stack_12->SetBinContent(10,1.637033);
   hnumuCCinFV_stack_12->SetBinContent(11,1.264991);
   hnumuCCinFV_stack_12->SetBinContent(12,1.519368);
   hnumuCCinFV_stack_12->SetBinContent(13,11.92104);
   hnumuCCinFV_stack_12->SetBinError(1,1.355468);
   hnumuCCinFV_stack_12->SetBinError(2,3.689119);
   hnumuCCinFV_stack_12->SetBinError(3,2.982374);
   hnumuCCinFV_stack_12->SetBinError(4,2.507508);
   hnumuCCinFV_stack_12->SetBinError(5,2.269675);
   hnumuCCinFV_stack_12->SetBinError(6,1.291198);
   hnumuCCinFV_stack_12->SetBinError(7,1.164788);
   hnumuCCinFV_stack_12->SetBinError(8,0.912735);
   hnumuCCinFV_stack_12->SetBinError(9,0.6609778);
   hnumuCCinFV_stack_12->SetBinError(10,0.779399);
   hnumuCCinFV_stack_12->SetBinError(11,0.7667499);
   hnumuCCinFV_stack_12->SetBinError(12,0.8278616);
   hnumuCCinFV_stack_12->SetBinError(13,2.376983);
   hnumuCCinFV_stack_12->SetEntries(327);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(3,0.2575838);
   hnueCCinFV_stack_13->SetBinContent(4,2.329187);
   hnueCCinFV_stack_13->SetBinContent(5,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(7,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(9,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(13,3.078552);
   hnueCCinFV_stack_13->SetBinError(3,0.2575838);
   hnueCCinFV_stack_13->SetBinError(4,1.891415);
   hnueCCinFV_stack_13->SetBinError(5,0.4459143);
   hnueCCinFV_stack_13->SetBinError(7,0.4459143);
   hnueCCinFV_stack_13->SetBinError(9,0.2333977);
   hnueCCinFV_stack_13->SetBinError(13,1.599762);
   hnueCCinFV_stack_13->SetEntries(13);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hmcerror__26->SetBinContent(1,45.29935);
   hmcerror__26->SetBinContent(2,147.363);
   hmcerror__26->SetBinContent(3,119.752);
   hmcerror__26->SetBinContent(4,96.62717);
   hmcerror__26->SetBinContent(5,60.8036);
   hmcerror__26->SetBinContent(6,31.03275);
   hmcerror__26->SetBinContent(7,24.10473);
   hmcerror__26->SetBinContent(8,12.119);
   hmcerror__26->SetBinContent(9,9.580336);
   hmcerror__26->SetBinContent(10,7.016255);
   hmcerror__26->SetBinContent(11,6.87272);
   hmcerror__26->SetBinContent(12,5.564474);
   hmcerror__26->SetBinContent(13,44.40105);
   hmcerror__26->SetBinError(1,18.97082);
   hmcerror__26->SetBinError(2,50.11444);
   hmcerror__26->SetBinError(3,36.79637);
   hmcerror__26->SetBinError(4,33.41293);
   hmcerror__26->SetBinError(5,20.41149);
   hmcerror__26->SetBinError(6,14.13119);
   hmcerror__26->SetBinError(7,19.64894);
   hmcerror__26->SetBinError(8,9.460088);
   hmcerror__26->SetBinError(9,7.443572);
   hmcerror__26->SetBinError(10,6.73405);
   hmcerror__26->SetBinError(11,7.477063);
   hmcerror__26->SetBinError(12,6.257514);
   hmcerror__26->SetBinError(13,22.64173);
   hmcerror__26->SetEntries(597.4116);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3033[12] = {
   41,
   113,
   89,
   63,
   41,
   30,
   13,
   9,
   6,
   6,
   3,
   6};
   Double_t _felx3033[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3033[12] = {
   6.5384,
   10.63015,
   9.5566,
   8.0648,
   6.5384,
   5.6197,
   3.77763,
   3.19354,
   2.67925,
   2.67925,
   2.143368,
   2.67925};
   Double_t _fehx3033[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3033[12] = {
   6.3331,
   10.63015,
   9.3552,
   7.862,
   6.3331,
   5.4117,
   3.5552,
   2.9582,
   2.41858,
   2.41858,
   1.72422,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1320);
   Graph_Graph3033->SetMinimum(0.7709688);
   Graph_Graph3033->SetMaximum(135.9075);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.19","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.17e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=1.8/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 420.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.5","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 105.8","F");

   ci = 1541;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.6","F");

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.4","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  142.6","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.5","F");

   ci = 1545;
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

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 119.5","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.9","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 99.5","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.7","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3034[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3034[12] = {
   1,
   1,
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
   Double_t _felx3034[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3034[12] = {
   0.4187878,
   0.3400748,
   0.3072714,
   0.3457923,
   0.3356955,
   0.4553638,
   0.8151486,
   0.7806,
   0.7769636,
   0.9597784,
   1.087934,
   1.124547};
   Double_t _fehx3034[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3034[12] = {
   0.4187878,
   0.3400748,
   0.3072714,
   0.3457923,
   0.3356955,
   0.4553638,
   0.8151486,
   0.7806,
   0.7769636,
   0.9597784,
   1.087934,
   1.124547};
   grae = new TGraphAsymmErrors(12,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1320);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3035[12] = {
   1,
   1,
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
   Double_t _felx3035[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3035[12] = {
   0.2072086,
   0.2186629,
   0.2342851,
   0.2406353,
   0.2331939,
   0.2358676,
   0.233693,
   0.2544297,
   0.3009991,
   0.2895529,
   0.2964522,
   0.3406567};
   Double_t _fehx3035[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3035[12] = {
   0.2072086,
   0.2186629,
   0.2342851,
   0.2406353,
   0.2331939,
   0.2358676,
   0.233693,
   0.2544297,
   0.3009991,
   0.2895529,
   0.2964522,
   0.3406567};
   grae = new TGraphAsymmErrors(12,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1320);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3036[12] = {
   0.9050902,
   0.7668141,
   0.7432027,
   0.6519905,
   0.6743021,
   0.9667208,
   0.5393132,
   0.7426357,
   0.6262829,
   0.855157,
   0.4365084,
   1.078269};
   Double_t _felx3036[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3036[12] = {
   0.1443376,
   0.07213581,
   0.07980327,
   0.08346306,
   0.1075331,
   0.1810894,
   0.1567174,
   0.2635152,
   0.2796614,
   0.3818632,
   0.3118661,
   0.481492};
   Double_t _fehx3036[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3036[12] = {
   0.1398055,
   0.07213581,
   0.07812146,
   0.08136428,
   0.1041567,
   0.1743868,
   0.1474897,
   0.2440961,
   0.2524525,
   0.3447109,
   0.2508788,
   0.4346466};
   grae = new TGraphAsymmErrors(12,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1320);
   Graph_Graph3036->SetMinimum(0.1121781);
   Graph_Graph3036->SetMaximum(1.651743);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_6_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
   TLine *line = new TLine(0,1,1200,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
