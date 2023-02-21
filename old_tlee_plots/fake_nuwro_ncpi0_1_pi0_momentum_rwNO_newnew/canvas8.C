#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Mon Jan 16 03:24:35 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-3.46,1353.846,382.6032);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hmc__22->SetBinContent(1,92.01968);
   hmc__22->SetBinContent(2,153.3591);
   hmc__22->SetBinContent(3,130.2969);
   hmc__22->SetBinContent(4,105.1171);
   hmc__22->SetBinContent(5,65.6405);
   hmc__22->SetBinContent(6,48.76221);
   hmc__22->SetBinContent(7,21.93759);
   hmc__22->SetBinContent(8,19.32014);
   hmc__22->SetBinContent(9,12.02857);
   hmc__22->SetBinContent(10,9.583231);
   hmc__22->SetBinContent(11,5.387175);
   hmc__22->SetBinContent(12,5.370986);
   hmc__22->SetBinContent(13,52.75453);
   hmc__22->SetBinError(1,32.58076);
   hmc__22->SetBinError(2,48.20617);
   hmc__22->SetBinError(3,42.41829);
   hmc__22->SetBinError(4,36.16986);
   hmc__22->SetBinError(5,35.58427);
   hmc__22->SetBinError(6,21.84127);
   hmc__22->SetBinError(7,11.23818);
   hmc__22->SetBinError(8,12.09619);
   hmc__22->SetBinError(9,9.901868);
   hmc__22->SetBinError(10,9.805652);
   hmc__22->SetBinError(11,4.881718);
   hmc__22->SetBinError(12,7.154472);
   hmc__22->SetBinError(13,22.10606);
   hmc__22->SetMinimum(-3.46);
   hmc__22->SetMaximum(363.3);
   hmc__22->SetEntries(705.3741);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",12,0,1200);
   hs8_stack_8->SetMinimum(-1.166102e-08);
   hs8_stack_8->SetMaximum(161.027);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,5.667894);
   hbadmatch_stack_1->SetBinContent(2,8.774502);
   hbadmatch_stack_1->SetBinContent(3,4.122723);
   hbadmatch_stack_1->SetBinContent(4,3.206171);
   hbadmatch_stack_1->SetBinContent(5,2.944813);
   hbadmatch_stack_1->SetBinContent(6,1.846301);
   hbadmatch_stack_1->SetBinContent(7,0.7154305);
   hbadmatch_stack_1->SetBinContent(8,0.7001932);
   hbadmatch_stack_1->SetBinContent(11,0.2333977);
   hbadmatch_stack_1->SetBinContent(12,0.7273345);
   hbadmatch_stack_1->SetBinContent(13,4.275815);
   hbadmatch_stack_1->SetBinError(1,1.442563);
   hbadmatch_stack_1->SetBinError(2,1.890919);
   hbadmatch_stack_1->SetBinError(3,1.201162);
   hbadmatch_stack_1->SetBinError(4,1.110865);
   hbadmatch_stack_1->SetBinError(5,1.260035);
   hbadmatch_stack_1->SetBinError(6,0.7250425);
   hbadmatch_stack_1->SetBinError(7,0.5210361);
   hbadmatch_stack_1->SetBinError(8,0.4042567);
   hbadmatch_stack_1->SetBinError(11,0.2333977);
   hbadmatch_stack_1->SetBinError(12,0.527292);
   hbadmatch_stack_1->SetBinError(13,1.301933);
   hbadmatch_stack_1->SetEntries(96);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,32.89095);
   houtFV_stack_4->SetBinContent(2,41.86815);
   houtFV_stack_4->SetBinContent(3,29.6602);
   houtFV_stack_4->SetBinContent(4,28.71049);
   houtFV_stack_4->SetBinContent(5,13.55064);
   houtFV_stack_4->SetBinContent(6,13.46414);
   houtFV_stack_4->SetBinContent(7,6.804614);
   houtFV_stack_4->SetBinContent(8,7.533703);
   houtFV_stack_4->SetBinContent(9,1.846301);
   houtFV_stack_4->SetBinContent(10,3.92138);
   houtFV_stack_4->SetBinContent(11,2.133304);
   houtFV_stack_4->SetBinContent(12,1.377036);
   houtFV_stack_4->SetBinContent(13,14.84639);
   houtFV_stack_4->SetBinError(1,3.386286);
   houtFV_stack_4->SetBinError(2,4.081153);
   houtFV_stack_4->SetBinError(3,3.18413);
   houtFV_stack_4->SetBinError(4,3.3513);
   houtFV_stack_4->SetBinError(5,2.164728);
   houtFV_stack_4->SetBinError(6,2.183045);
   houtFV_stack_4->SetBinError(7,1.540936);
   houtFV_stack_4->SetBinError(8,1.524519);
   houtFV_stack_4->SetBinError(9,0.7250425);
   houtFV_stack_4->SetBinError(10,1.185737);
   houtFV_stack_4->SetBinError(11,0.9833723);
   houtFV_stack_4->SetBinError(12,0.7120163);
   houtFV_stack_4->SetBinError(13,2.28334);
   houtFV_stack_4->SetEntries(633);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.777271);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.199403);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.728651);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.530035);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.174896);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.389029);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.6203538);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3886355);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.4217381);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.09930784);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.09930784);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1324105);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.8937706);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3742577);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6448437);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4782589);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4713352);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5981994);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5240789);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.278756);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2646402);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2667025);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.05733541);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05733541);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1720062);
   hNCpi0inFVcoh_stack_5->SetEntries(201);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.3224303);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1655131);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1324105);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1324105);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.256225);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2604666);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.0740197);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2562251);
   hNCpi0inFVqe_stack_6->SetEntries(20);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,12.87655);
   hNCpi0inFVres_stack_7->SetBinContent(2,23.26564);
   hNCpi0inFVres_stack_7->SetBinContent(3,26.21909);
   hNCpi0inFVres_stack_7->SetBinContent(4,19.04826);
   hNCpi0inFVres_stack_7->SetBinContent(5,14.90312);
   hNCpi0inFVres_stack_7->SetBinContent(6,9.229225);
   hNCpi0inFVres_stack_7->SetBinContent(7,4.747023);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.035564);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.720448);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.8275654);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.4965392);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.5210459);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.112826);
   hNCpi0inFVres_stack_7->SetBinError(1,1.403505);
   hNCpi0inFVres_stack_7->SetBinError(2,1.796787);
   hNCpi0inFVres_stack_7->SetBinError(3,1.870219);
   hNCpi0inFVres_stack_7->SetBinError(4,1.586551);
   hNCpi0inFVres_stack_7->SetBinError(5,1.486075);
   hNCpi0inFVres_stack_7->SetBinError(6,1.203704);
   hNCpi0inFVres_stack_7->SetBinError(7,0.853718);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6215568);
   hNCpi0inFVres_stack_7->SetBinError(9,0.700172);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1655131);
   hNCpi0inFVres_stack_7->SetBinError(11,0.1282059);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2727958);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8466856);
   hNCpi0inFVres_stack_7->SetEntries(2189);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.448313);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.773204);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.21046);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.069453);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.514911);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.812441);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.373118);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.099701);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.265214);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.1324105);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1324105);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.4217381);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.770743);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5565283);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8733864);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8626561);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8925678);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.718707);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5672543);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3997411);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4559733);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4619422);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.06620523);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.06620523);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2667025);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6144645);
   hNCpi0inFVdis_stack_8->SetEntries(563);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03310261);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,17.91069);
   hCCpi0inFV_stack_10->SetBinContent(2,38.14093);
   hCCpi0inFV_stack_10->SetBinContent(3,36.50331);
   hCCpi0inFV_stack_10->SetBinContent(4,30.23466);
   hCCpi0inFV_stack_10->SetBinContent(5,20.8079);
   hCCpi0inFV_stack_10->SetBinContent(6,11.86615);
   hCCpi0inFV_stack_10->SetBinContent(7,4.117635);
   hCCpi0inFV_stack_10->SetBinContent(8,2.759011);
   hCCpi0inFV_stack_10->SetBinContent(9,4.568765);
   hCCpi0inFV_stack_10->SetBinContent(10,1.592022);
   hCCpi0inFV_stack_10->SetBinContent(11,2.058817);
   hCCpi0inFV_stack_10->SetBinContent(12,0.9127098);
   hCCpi0inFV_stack_10->SetBinContent(13,11.54831);
   hCCpi0inFV_stack_10->SetBinError(1,2.410215);
   hCCpi0inFV_stack_10->SetBinError(2,3.639018);
   hCCpi0inFV_stack_10->SetBinError(3,3.586518);
   hCCpi0inFV_stack_10->SetBinError(4,3.255999);
   hCCpi0inFV_stack_10->SetBinError(5,2.700665);
   hCCpi0inFV_stack_10->SetBinError(6,2.050069);
   hCCpi0inFV_stack_10->SetBinError(7,1.157628);
   hCCpi0inFV_stack_10->SetBinError(8,0.9129486);
   hCCpi0inFV_stack_10->SetBinError(9,1.320174);
   hCCpi0inFV_stack_10->SetBinError(10,0.7490679);
   hCCpi0inFV_stack_10->SetBinError(11,0.8185668);
   hCCpi0inFV_stack_10->SetBinError(12,0.554787);
   hCCpi0inFV_stack_10->SetBinError(13,2.075172);
   hCCpi0inFV_stack_10->SetEntries(583);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,4.330152);
   hNCinFV_stack_11->SetBinContent(2,9.297853);
   hNCinFV_stack_11->SetBinContent(3,7.472433);
   hNCinFV_stack_11->SetBinContent(4,5.434497);
   hNCinFV_stack_11->SetBinContent(5,2.759011);
   hNCinFV_stack_11->SetBinContent(6,2.271334);
   hNCinFV_stack_11->SetBinContent(7,0.4667954);
   hNCinFV_stack_11->SetBinContent(8,0.9127098);
   hNCinFV_stack_11->SetBinContent(10,0.4667954);
   hNCinFV_stack_11->SetBinContent(12,0.2333977);
   hNCinFV_stack_11->SetBinContent(13,1.358624);
   hNCinFV_stack_11->SetBinError(1,1.218388);
   hNCinFV_stack_11->SetBinError(2,1.84446);
   hNCinFV_stack_11->SetBinError(3,1.669268);
   hNCinFV_stack_11->SetBinError(4,1.423556);
   hNCinFV_stack_11->SetBinError(5,0.9129486);
   hNCinFV_stack_11->SetBinError(6,0.9024504);
   hNCinFV_stack_11->SetBinError(7,0.3300742);
   hNCinFV_stack_11->SetBinError(8,0.554787);
   hNCinFV_stack_11->SetBinError(10,0.3300742);
   hNCinFV_stack_11->SetBinError(12,0.2333977);
   hNCinFV_stack_11->SetBinError(13,0.7117782);
   hNCinFV_stack_11->SetEntries(109);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,14.20307);
   hnumuCCinFV_stack_12->SetBinContent(2,23.40707);
   hnumuCCinFV_stack_12->SetBinContent(3,19.24759);
   hnumuCCinFV_stack_12->SetBinContent(4,11.11709);
   hnumuCCinFV_stack_12->SetBinContent(5,4.852798);
   hnumuCCinFV_stack_12->SetBinContent(6,5.58399);
   hnumuCCinFV_stack_12->SetBinContent(7,3.092624);
   hnumuCCinFV_stack_12->SetBinContent(8,2.890624);
   hnumuCCinFV_stack_12->SetBinContent(9,0.9498814);
   hnumuCCinFV_stack_12->SetBinContent(10,2.54375);
   hnumuCCinFV_stack_12->SetBinContent(11,0.2333977);
   hnumuCCinFV_stack_12->SetBinContent(12,1.045314);
   hnumuCCinFV_stack_12->SetBinContent(13,7.731858);
   hnumuCCinFV_stack_12->SetBinError(1,3.332472);
   hnumuCCinFV_stack_12->SetBinError(2,2.899508);
   hnumuCCinFV_stack_12->SetBinError(3,3.51058);
   hnumuCCinFV_stack_12->SetBinError(4,2.126704);
   hnumuCCinFV_stack_12->SetBinError(5,1.278834);
   hnumuCCinFV_stack_12->SetBinError(6,1.433057);
   hnumuCCinFV_stack_12->SetBinError(7,1.02239);
   hnumuCCinFV_stack_12->SetBinError(8,0.9490856);
   hnumuCCinFV_stack_12->SetBinError(9,0.5714209);
   hnumuCCinFV_stack_12->SetBinError(10,1.569829);
   hnumuCCinFV_stack_12->SetBinError(11,0.2333977);
   hnumuCCinFV_stack_12->SetBinError(12,0.6439977);
   hnumuCCinFV_stack_12->SetBinError(13,1.718525);
   hnumuCCinFV_stack_12->SetEntries(294);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.5923644);
   hnueCCinFV_stack_13->SetBinContent(2,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(4,0.7001932);
   hnueCCinFV_stack_13->SetBinContent(6,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(13,3.216196);
   hnueCCinFV_stack_13->SetBinError(1,0.4281724);
   hnueCCinFV_stack_13->SetBinError(2,0.3300742);
   hnueCCinFV_stack_13->SetBinError(4,0.4042567);
   hnueCCinFV_stack_13->SetBinError(6,0.2333977);
   hnueCCinFV_stack_13->SetBinError(13,1.403776);
   hnueCCinFV_stack_13->SetEntries(15);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);
   hmcerror__23->SetBinContent(1,92.01968);
   hmcerror__23->SetBinContent(2,153.3591);
   hmcerror__23->SetBinContent(3,130.2969);
   hmcerror__23->SetBinContent(4,105.1171);
   hmcerror__23->SetBinContent(5,65.6405);
   hmcerror__23->SetBinContent(6,48.76221);
   hmcerror__23->SetBinContent(7,21.93759);
   hmcerror__23->SetBinContent(8,19.32014);
   hmcerror__23->SetBinContent(9,12.02857);
   hmcerror__23->SetBinContent(10,9.583231);
   hmcerror__23->SetBinContent(11,5.387175);
   hmcerror__23->SetBinContent(12,5.370986);
   hmcerror__23->SetBinContent(13,52.75453);
   hmcerror__23->SetBinError(1,32.58076);
   hmcerror__23->SetBinError(2,48.20617);
   hmcerror__23->SetBinError(3,42.41829);
   hmcerror__23->SetBinError(4,36.16986);
   hmcerror__23->SetBinError(5,35.58427);
   hmcerror__23->SetBinError(6,21.84127);
   hmcerror__23->SetBinError(7,11.23818);
   hmcerror__23->SetBinError(8,12.09619);
   hmcerror__23->SetBinError(9,9.901868);
   hmcerror__23->SetBinError(10,9.805652);
   hmcerror__23->SetBinError(11,4.881718);
   hmcerror__23->SetBinError(12,7.154472);
   hmcerror__23->SetBinError(13,22.10606);
   hmcerror__23->SetEntries(705.3741);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[12] = {
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
   Double_t _fy3029[12] = {
   75,
   173,
   135,
   109,
   70,
   56,
   37,
   16,
   9,
   9,
   12,
   3};
   Double_t _felx3029[12] = {
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
   Double_t _fely3029[12] = {
   8.7852,
   13.15295,
   11.61895,
   10.44031,
   8.4925,
   7.6127,
   6.2203,
   4.1628,
   3.19354,
   3.19354,
   3.64022,
   2.143368};
   Double_t _fehx3029[12] = {
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
   Double_t _fehy3029[12] = {
   8.5831,
   13.15295,
   11.61895,
   10.44031,
   8.2902,
   7.4094,
   6.0141,
   3.9454,
   2.9582,
   2.9582,
   3.4155,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1320);
   Graph_Graph3029->SetMinimum(0.7709688);
   Graph_Graph3029->SetMaximum(204.6826);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 704.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 28.9","F");

   ci = 1525;
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

   ci = 1526;
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

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 183.8","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  11.6","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  117.9","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  29.3","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 171.5","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 33.6","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 89.2","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 2.0","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[12] = {
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
   Double_t _fy3030[12] = {
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
   Double_t _felx3030[12] = {
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
   Double_t _fely3030[12] = {
   0.3540629,
   0.3143353,
   0.3255511,
   0.3440913,
   0.5421085,
   0.4479139,
   0.5122795,
   0.626092,
   0.8231955,
   1.023209,
   0.906174,
   1.332059};
   Double_t _fehx3030[12] = {
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
   Double_t _fehy3030[12] = {
   0.3540629,
   0.3143353,
   0.3255511,
   0.3440913,
   0.5421085,
   0.4479139,
   0.5122795,
   0.626092,
   0.8231955,
   1.023209,
   0.906174,
   1.332059};
   grae = new TGraphAsymmErrors(12,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1320);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[12] = {
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
   Double_t _fy3031[12] = {
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
   Double_t _felx3031[12] = {
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
   Double_t _fely3031[12] = {
   0.2016003,
   0.1931612,
   0.2178487,
   0.2112711,
   0.2157844,
   0.2079582,
   0.2416897,
   0.2441475,
   0.274922,
   0.3411394,
   0.3518819,
   0.3506609};
   Double_t _fehx3031[12] = {
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
   Double_t _fehy3031[12] = {
   0.2016003,
   0.1931612,
   0.2178487,
   0.2112711,
   0.2157844,
   0.2079582,
   0.2416897,
   0.2441475,
   0.274922,
   0.3411394,
   0.3518819,
   0.3506609};
   grae = new TGraphAsymmErrors(12,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1320);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[12] = {
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
   Double_t _fy3032[12] = {
   0.815043,
   1.128072,
   1.036095,
   1.036939,
   1.066415,
   1.14843,
   1.686603,
   0.8281512,
   0.7482184,
   0.9391405,
   2.227513,
   0.5585566};
   Double_t _felx3032[12] = {
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
   Double_t _fely3032[12] = {
   0.09547088,
   0.08576569,
   0.0891729,
   0.09932076,
   0.129379,
   0.1561188,
   0.2835453,
   0.2154642,
   0.2654961,
   0.3332425,
   0.6757197,
   0.3990641};
   Double_t _fehx3032[12] = {
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
   Double_t _fehy3032[12] = {
   0.09327461,
   0.08576569,
   0.0891729,
   0.09932076,
   0.126297,
   0.1519496,
   0.2741459,
   0.2042117,
   0.2459311,
   0.308685,
   0.6340058,
   0.3210248};
   grae = new TGraphAsymmErrors(12,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1320);
   Graph_Graph3032->SetMinimum(0.1435432);
   Graph_Graph3032->SetMaximum(3.131721);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_6_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
