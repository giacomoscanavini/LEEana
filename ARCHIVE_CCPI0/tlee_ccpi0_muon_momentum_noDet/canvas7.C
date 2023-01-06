#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Wed Sep 28 17:16:34 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-5.584314,1692.308,617.5076);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hmc__19->SetBinContent(1,17.16127);
   hmc__19->SetBinContent(2,75.06925);
   hmc__19->SetBinContent(3,216.2369);
   hmc__19->SetBinContent(4,274.1508);
   hmc__19->SetBinContent(5,279.2157);
   hmc__19->SetBinContent(6,220.2232);
   hmc__19->SetBinContent(7,164.2583);
   hmc__19->SetBinContent(8,122.26);
   hmc__19->SetBinContent(9,102.1331);
   hmc__19->SetBinContent(10,64.9558);
   hmc__19->SetBinContent(11,60.13012);
   hmc__19->SetBinContent(12,39.34296);
   hmc__19->SetBinContent(13,29.21987);
   hmc__19->SetBinContent(14,25.30979);
   hmc__19->SetBinContent(15,21.41727);
   hmc__19->SetBinContent(16,14.88265);
   hmc__19->SetBinContent(17,10.70247);
   hmc__19->SetBinContent(18,6.375335);
   hmc__19->SetBinContent(19,3.374355);
   hmc__19->SetBinContent(20,5.128497);
   hmc__19->SetBinContent(21,3.049808);
   hmc__19->SetBinContent(22,1.52047);
   hmc__19->SetBinContent(23,0.9785053);
   hmc__19->SetBinContent(24,1.412273);
   hmc__19->SetBinContent(25,0.5901461);
   hmc__19->SetBinContent(26,1.610679);
   hmc__19->SetBinError(1,4.567839);
   hmc__19->SetBinError(2,16.60564);
   hmc__19->SetBinError(3,50.3478);
   hmc__19->SetBinError(4,66.18411);
   hmc__19->SetBinError(5,66.984);
   hmc__19->SetBinError(6,58.79811);
   hmc__19->SetBinError(7,41.0266);
   hmc__19->SetBinError(8,29.90337);
   hmc__19->SetBinError(9,25.87573);
   hmc__19->SetBinError(10,18.25827);
   hmc__19->SetBinError(11,16.91995);
   hmc__19->SetBinError(12,10.18121);
   hmc__19->SetBinError(13,8.756096);
   hmc__19->SetBinError(14,7.089372);
   hmc__19->SetBinError(15,6.973557);
   hmc__19->SetBinError(16,5.416829);
   hmc__19->SetBinError(17,3.494481);
   hmc__19->SetBinError(18,2.509031);
   hmc__19->SetBinError(19,1.537598);
   hmc__19->SetBinError(20,2.305593);
   hmc__19->SetBinError(21,1.29486);
   hmc__19->SetBinError(22,0.9891426);
   hmc__19->SetBinError(23,0.762488);
   hmc__19->SetBinError(24,1.035807);
   hmc__19->SetBinError(25,0.5851254);
   hmc__19->SetBinError(26,1.041106);
   hmc__19->SetMinimum(-5.584314);
   hmc__19->SetMaximum(586.353);
   hmc__19->SetEntries(1759.741);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,0,1500);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(293.1765);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(2,0.1967445);
   hbadmatch_stack_1->SetBinContent(3,2.08462);
   hbadmatch_stack_1->SetBinContent(4,2.676016);
   hbadmatch_stack_1->SetBinContent(5,2.108968);
   hbadmatch_stack_1->SetBinContent(6,1.583291);
   hbadmatch_stack_1->SetBinContent(7,0.1967154);
   hbadmatch_stack_1->SetBinContent(8,0.6803553);
   hbadmatch_stack_1->SetBinContent(9,0.536893);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.7586916);
   hbadmatch_stack_1->SetBinError(4,0.7943593);
   hbadmatch_stack_1->SetBinError(5,0.7247663);
   hbadmatch_stack_1->SetBinError(6,0.7488553);
   hbadmatch_stack_1->SetBinError(7,0.1967154);
   hbadmatch_stack_1->SetBinError(8,0.4810838);
   hbadmatch_stack_1->SetBinError(9,0.3929602);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetEntries(43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(2,2.103607);
   hext_stack_2->SetBinContent(3,2.028585);
   hext_stack_2->SetBinContent(4,0.3243973);
   hext_stack_2->SetBinContent(5,4.677244);
   hext_stack_2->SetBinContent(6,0.973192);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(11,2.566457);
   hext_stack_2->SetBinError(2,0.9761052);
   hext_stack_2->SetBinError(3,0.8315593);
   hext_stack_2->SetBinError(4,0.3243973);
   hext_stack_2->SetBinError(5,1.54863);
   hext_stack_2->SetBinError(6,0.5618727);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(11,1.283228);
   hext_stack_2->SetEntries(30);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(2,0.9854792);
   houtFV_stack_4->SetBinContent(3,0.5352025);
   houtFV_stack_4->SetBinContent(4,0.1950248);
   houtFV_stack_4->SetBinContent(5,0.1967154);
   houtFV_stack_4->SetBinContent(7,0.8753801);
   houtFV_stack_4->SetBinContent(8,0.3401776);
   houtFV_stack_4->SetBinContent(10,0.1967154);
   houtFV_stack_4->SetBinError(2,0.5068962);
   houtFV_stack_4->SetBinError(3,0.3921167);
   houtFV_stack_4->SetBinError(4,0.1950249);
   houtFV_stack_4->SetBinError(5,0.1967154);
   houtFV_stack_4->SetBinError(7,0.5191111);
   houtFV_stack_4->SetBinError(8,0.3401776);
   houtFV_stack_4->SetBinError(10,0.1967154);
   houtFV_stack_4->SetEntries(13);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1021583);
   hNCpi0inFVqe_stack_6->SetEntries(2);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.5244642);
   hNCpi0inFVres_stack_7->SetBinContent(2,4.395671);
   hNCpi0inFVres_stack_7->SetBinContent(3,9.11429);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.880681);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.994711);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.892049);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.71003);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.586146);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.5991719);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.03620218);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.0470988);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.1213757);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.4978064);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(1,0.163982);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7324222);
   hNCpi0inFVres_stack_7->SetBinError(3,1.066845);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8538066);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8642317);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6408083);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6869155);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4687743);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4183547);
   hNCpi0inFVres_stack_7->SetBinError(10,0.03620218);
   hNCpi0inFVres_stack_7->SetBinError(11,0.0470988);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1213757);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4978064);
   hNCpi0inFVres_stack_7->SetBinError(14,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(660);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.576296);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.641925);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.397013);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.391667);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.964956);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.457152);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.337442);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.8227257);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.5036722);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.5562339);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.9034148);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1136578);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.08308727);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7759442);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7075135);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6523797);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8895639);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.655937);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7572158);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2961252);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2769322);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1770247);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.344593);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5850739);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.07003108);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.08308727);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02516554);
   hNCpi0inFVdis_stack_8->SetEntries(528);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,10.95738);
   hCCpi0inFV_stack_10->SetBinContent(2,41.96984);
   hCCpi0inFV_stack_10->SetBinContent(3,167.4311);
   hCCpi0inFV_stack_10->SetBinContent(4,218.2206);
   hCCpi0inFV_stack_10->SetBinContent(5,219.821);
   hCCpi0inFV_stack_10->SetBinContent(6,180.7102);
   hCCpi0inFV_stack_10->SetBinContent(7,141.1494);
   hCCpi0inFV_stack_10->SetBinContent(8,106.2735);
   hCCpi0inFV_stack_10->SetBinContent(9,90.56882);
   hCCpi0inFV_stack_10->SetBinContent(10,59.83194);
   hCCpi0inFV_stack_10->SetBinContent(11,51.96828);
   hCCpi0inFV_stack_10->SetBinContent(12,35.48816);
   hCCpi0inFV_stack_10->SetBinContent(13,26.67859);
   hCCpi0inFV_stack_10->SetBinContent(14,22.16379);
   hCCpi0inFV_stack_10->SetBinContent(15,19.33538);
   hCCpi0inFV_stack_10->SetBinContent(16,13.7294);
   hCCpi0inFV_stack_10->SetBinContent(17,9.477976);
   hCCpi0inFV_stack_10->SetBinContent(18,6.347435);
   hCCpi0inFV_stack_10->SetBinContent(19,3.17764);
   hCCpi0inFV_stack_10->SetBinContent(20,4.396579);
   hCCpi0inFV_stack_10->SetBinContent(21,2.684465);
   hCCpi0inFV_stack_10->SetBinContent(22,1.52047);
   hCCpi0inFV_stack_10->SetBinContent(23,0.9785053);
   hCCpi0inFV_stack_10->SetBinContent(24,1.412273);
   hCCpi0inFV_stack_10->SetBinContent(25,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(26,1.610679);
   hCCpi0inFV_stack_10->SetBinError(1,1.714192);
   hCCpi0inFV_stack_10->SetBinError(2,3.18725);
   hCCpi0inFV_stack_10->SetBinError(3,6.489016);
   hCCpi0inFV_stack_10->SetBinError(4,7.368187);
   hCCpi0inFV_stack_10->SetBinError(5,7.517108);
   hCCpi0inFV_stack_10->SetBinError(6,6.719768);
   hCCpi0inFV_stack_10->SetBinError(7,5.958239);
   hCCpi0inFV_stack_10->SetBinError(8,5.140261);
   hCCpi0inFV_stack_10->SetBinError(9,4.860647);
   hCCpi0inFV_stack_10->SetBinError(10,3.864599);
   hCCpi0inFV_stack_10->SetBinError(11,3.616528);
   hCCpi0inFV_stack_10->SetBinError(12,2.970471);
   hCCpi0inFV_stack_10->SetBinError(13,2.564065);
   hCCpi0inFV_stack_10->SetBinError(14,2.370151);
   hCCpi0inFV_stack_10->SetBinError(15,2.272685);
   hCCpi0inFV_stack_10->SetBinError(16,1.851275);
   hCCpi0inFV_stack_10->SetBinError(17,1.532385);
   hCCpi0inFV_stack_10->SetBinError(18,1.31745);
   hCCpi0inFV_stack_10->SetBinError(19,0.8775989);
   hCCpi0inFV_stack_10->SetBinError(20,1.075501);
   hCCpi0inFV_stack_10->SetBinError(21,0.8786858);
   hCCpi0inFV_stack_10->SetBinError(22,0.5898325);
   hCCpi0inFV_stack_10->SetBinError(23,0.4376048);
   hCCpi0inFV_stack_10->SetBinError(24,0.6510715);
   hCCpi0inFV_stack_10->SetBinError(25,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(26,0.6806271);
   hCCpi0inFV_stack_10->SetEntries(6147);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,1.462145);
   hNCinFV_stack_11->SetBinContent(2,1.662242);
   hNCinFV_stack_11->SetBinContent(3,4.248045);
   hNCinFV_stack_11->SetBinContent(4,4.733375);
   hNCinFV_stack_11->SetBinContent(5,2.055672);
   hNCinFV_stack_11->SetBinContent(6,1.715495);
   hNCinFV_stack_11->SetBinContent(7,0.536893);
   hNCinFV_stack_11->SetBinContent(8,0.536893);
   hNCinFV_stack_11->SetBinContent(10,0.3401776);
   hNCinFV_stack_11->SetBinContent(11,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.6198731);
   hNCinFV_stack_11->SetBinError(2,0.6513556);
   hNCinFV_stack_11->SetBinError(3,1.038119);
   hNCinFV_stack_11->SetBinError(4,1.12743);
   hNCinFV_stack_11->SetBinError(5,0.7082781);
   hNCinFV_stack_11->SetBinError(6,0.6212384);
   hNCinFV_stack_11->SetBinError(7,0.3929602);
   hNCinFV_stack_11->SetBinError(8,0.3929602);
   hNCinFV_stack_11->SetBinError(10,0.3401776);
   hNCinFV_stack_11->SetBinError(11,0.3401776);
   hNCinFV_stack_11->SetEntries(73);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,2.64099);
   hnumuCCinFV_stack_12->SetBinContent(2,18.722);
   hnumuCCinFV_stack_12->SetBinContent(3,23.95785);
   hnumuCCinFV_stack_12->SetBinContent(4,33.75154);
   hnumuCCinFV_stack_12->SetBinContent(5,40.00293);
   hnumuCCinFV_stack_12->SetBinContent(6,28.55158);
   hnumuCCinFV_stack_12->SetBinContent(7,16.72059);
   hnumuCCinFV_stack_12->SetBinContent(8,12.02022);
   hnumuCCinFV_stack_12->SetBinContent(9,9.600115);
   hnumuCCinFV_stack_12->SetBinContent(10,3.994535);
   hnumuCCinFV_stack_12->SetBinContent(11,4.107964);
   hnumuCCinFV_stack_12->SetBinContent(12,3.619767);
   hnumuCCinFV_stack_12->SetBinContent(13,1.960392);
   hnumuCCinFV_stack_12->SetBinContent(14,2.67181);
   hnumuCCinFV_stack_12->SetBinContent(15,2.053982);
   hnumuCCinFV_stack_12->SetBinContent(16,1.125349);
   hnumuCCinFV_stack_12->SetBinContent(17,1.196595);
   hnumuCCinFV_stack_12->SetBinContent(19,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(20,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(21,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,0.7892468);
   hnumuCCinFV_stack_12->SetBinError(2,2.649555);
   hnumuCCinFV_stack_12->SetBinError(3,2.479622);
   hnumuCCinFV_stack_12->SetBinError(4,2.9563);
   hnumuCCinFV_stack_12->SetBinError(5,3.262909);
   hnumuCCinFV_stack_12->SetBinError(6,2.771478);
   hnumuCCinFV_stack_12->SetBinError(7,2.122449);
   hnumuCCinFV_stack_12->SetBinError(8,1.709668);
   hnumuCCinFV_stack_12->SetBinError(9,1.587965);
   hnumuCCinFV_stack_12->SetBinError(10,0.9683418);
   hnumuCCinFV_stack_12->SetBinError(11,1.000995);
   hnumuCCinFV_stack_12->SetBinError(12,0.931668);
   hnumuCCinFV_stack_12->SetBinError(13,0.6199358);
   hnumuCCinFV_stack_12->SetBinError(14,0.8353833);
   hnumuCCinFV_stack_12->SetBinError(15,0.7078105);
   hnumuCCinFV_stack_12->SetBinError(16,0.5194673);
   hnumuCCinFV_stack_12->SetBinError(17,0.5483553);
   hnumuCCinFV_stack_12->SetBinError(19,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(20,0.438694);
   hnumuCCinFV_stack_12->SetBinError(21,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(25,0.1967154);
   hnumuCCinFV_stack_12->SetEntries(885);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(3,1.412273);
   hnueCCinFV_stack_13->SetBinContent(4,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(5,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.7319179);
   hnueCCinFV_stack_13->SetBinError(2,0.2770047);
   hnueCCinFV_stack_13->SetBinError(3,0.6510715);
   hnueCCinFV_stack_13->SetBinError(4,0.5191111);
   hnueCCinFV_stack_13->SetBinError(5,0.2781975);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.438694);
   hnueCCinFV_stack_13->SetEntries(16);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);
   hmcerror__20->SetBinContent(1,17.16127);
   hmcerror__20->SetBinContent(2,75.06925);
   hmcerror__20->SetBinContent(3,216.2369);
   hmcerror__20->SetBinContent(4,274.1508);
   hmcerror__20->SetBinContent(5,279.2157);
   hmcerror__20->SetBinContent(6,220.2232);
   hmcerror__20->SetBinContent(7,164.2583);
   hmcerror__20->SetBinContent(8,122.26);
   hmcerror__20->SetBinContent(9,102.1331);
   hmcerror__20->SetBinContent(10,64.9558);
   hmcerror__20->SetBinContent(11,60.13012);
   hmcerror__20->SetBinContent(12,39.34296);
   hmcerror__20->SetBinContent(13,29.21987);
   hmcerror__20->SetBinContent(14,25.30979);
   hmcerror__20->SetBinContent(15,21.41727);
   hmcerror__20->SetBinContent(16,14.88265);
   hmcerror__20->SetBinContent(17,10.70247);
   hmcerror__20->SetBinContent(18,6.375335);
   hmcerror__20->SetBinContent(19,3.374355);
   hmcerror__20->SetBinContent(20,5.128497);
   hmcerror__20->SetBinContent(21,3.049808);
   hmcerror__20->SetBinContent(22,1.52047);
   hmcerror__20->SetBinContent(23,0.9785053);
   hmcerror__20->SetBinContent(24,1.412273);
   hmcerror__20->SetBinContent(25,0.5901461);
   hmcerror__20->SetBinContent(26,1.610679);
   hmcerror__20->SetBinError(1,4.567839);
   hmcerror__20->SetBinError(2,16.60564);
   hmcerror__20->SetBinError(3,50.3478);
   hmcerror__20->SetBinError(4,66.18411);
   hmcerror__20->SetBinError(5,66.984);
   hmcerror__20->SetBinError(6,58.79811);
   hmcerror__20->SetBinError(7,41.0266);
   hmcerror__20->SetBinError(8,29.90337);
   hmcerror__20->SetBinError(9,25.87573);
   hmcerror__20->SetBinError(10,18.25827);
   hmcerror__20->SetBinError(11,16.91995);
   hmcerror__20->SetBinError(12,10.18121);
   hmcerror__20->SetBinError(13,8.756096);
   hmcerror__20->SetBinError(14,7.089372);
   hmcerror__20->SetBinError(15,6.973557);
   hmcerror__20->SetBinError(16,5.416829);
   hmcerror__20->SetBinError(17,3.494481);
   hmcerror__20->SetBinError(18,2.509031);
   hmcerror__20->SetBinError(19,1.537598);
   hmcerror__20->SetBinError(20,2.305593);
   hmcerror__20->SetBinError(21,1.29486);
   hmcerror__20->SetBinError(22,0.9891426);
   hmcerror__20->SetBinError(23,0.762488);
   hmcerror__20->SetBinError(24,1.035807);
   hmcerror__20->SetBinError(25,0.5851254);
   hmcerror__20->SetBinError(26,1.041106);
   hmcerror__20->SetEntries(1759.741);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[25] = {
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
   Double_t _fy3025[25] = {
   23,
   66,
   149,
   250,
   276,
   218,
   159,
   99,
   75,
   51,
   52,
   42,
   21,
   17,
   8,
   8,
   6,
   8,
   2,
   4,
   2,
   2,
   0,
   1,
   0};
   Double_t _felx3025[25] = {
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
   Double_t _fely3025[25] = {
   4.9457,
   8.2509,
   12.20656,
   15.81139,
   16.61325,
   14.76482,
   12.60952,
   10.0712,
   8.7852,
   7.2725,
   7.3419,
   6.6155,
   4.7354,
   4.2835,
   3.0307,
   3.0307,
   2.67925,
   3.0307,
   2,
   2.29683,
   2,
   2,
   0,
   1,
   0};
   Double_t _fehx3025[25] = {
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
   Double_t _fehy3025[25] = {
   4.7346,
   8.0483,
   12.20656,
   15.81139,
   16.61325,
   14.76482,
   12.60952,
   9.87,
   8.5831,
   7.0686,
   7.1381,
   6.4104,
   4.5229,
   4.0673,
   2.7896,
   2.7896,
   2.41858,
   2.7896,
   1.51917,
   1.98186,
   1.51917,
   1.51917,
   1.1478,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1650);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(321.8746);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=22.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1539.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.5","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 13.0","F");

   ci = 1513;
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

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 3.3","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.1","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  35.4","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  30.1","F");

   ci = 1519;
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

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1436.7","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 17.6","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 208.2","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.1","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_Np_bnb_12_muon_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[25] = {
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
   Double_t _fy3026[25] = {
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
   Double_t _felx3026[25] = {
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
   Double_t _fely3026[25] = {
   0.2661713,
   0.2212042,
   0.2328363,
   0.241415,
   0.2399006,
   0.2669933,
   0.2497688,
   0.2445883,
   0.2533531,
   0.2810875,
   0.281389,
   0.2587809,
   0.2996624,
   0.280104,
   0.3256044,
   0.3639694,
   0.3265116,
   0.3935528,
   0.4556718,
   0.449565,
   0.4245709,
   0.6505506,
   0.7792375,
   0.7334326,
   0.9914924};
   Double_t _fehx3026[25] = {
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
   Double_t _fehy3026[25] = {
   0.2661713,
   0.2212042,
   0.2328363,
   0.241415,
   0.2399006,
   0.2669933,
   0.2497688,
   0.2445883,
   0.2533531,
   0.2810875,
   0.281389,
   0.2587809,
   0.2996624,
   0.280104,
   0.3256044,
   0.3639694,
   0.3265116,
   0.3935528,
   0.4556718,
   0.449565,
   0.4245709,
   0.6505506,
   0.7792375,
   0.7334326,
   0.9914924};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1650);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Muon Momentum [MeV/c]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[25] = {
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
   Double_t _fy3027[25] = {
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
   Double_t _felx3027[25] = {
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
   Double_t _fely3027[25] = {
   0.2661713,
   0.2212042,
   0.2328363,
   0.241415,
   0.2399006,
   0.2669933,
   0.2497688,
   0.2445883,
   0.2533531,
   0.2810875,
   0.281389,
   0.2587809,
   0.2996624,
   0.280104,
   0.3256044,
   0.3639694,
   0.3265116,
   0.3935528,
   0.4556718,
   0.449565,
   0.4245709,
   0.6505506,
   0.7792375,
   0.7334326,
   0.9914924};
   Double_t _fehx3027[25] = {
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
   Double_t _fehy3027[25] = {
   0.2661713,
   0.2212042,
   0.2328363,
   0.241415,
   0.2399006,
   0.2669933,
   0.2497688,
   0.2445883,
   0.2533531,
   0.2810875,
   0.281389,
   0.2587809,
   0.2996624,
   0.280104,
   0.3256044,
   0.3639694,
   0.3265116,
   0.3935528,
   0.4556718,
   0.449565,
   0.4245709,
   0.6505506,
   0.7792375,
   0.7334326,
   0.9914924};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1650);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[25] = {
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
   Double_t _fy3028[25] = {
   1.340227,
   0.8791882,
   0.689059,
   0.9119069,
   0.9884831,
   0.989905,
   0.9679874,
   0.8097496,
   0.7343361,
   0.7851493,
   0.8647913,
   1.067535,
   0.718689,
   0.6716769,
   0.3735304,
   0.5375387,
   0.5606182,
   1.254836,
   0.5927059,
   0.7799557,
   0.655779,
   1.315383,
   0,
   0.7080784,
   0};
   Double_t _felx3028[25] = {
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
   Double_t _fely3028[25] = {
   0.2881896,
   0.1099105,
   0.05644991,
   0.05767406,
   0.05949969,
   0.06704482,
   0.0767664,
   0.08237525,
   0.0860172,
   0.1119607,
   0.1221002,
   0.1681495,
   0.1620609,
   0.1692428,
   0.1415073,
   0.2036398,
   0.2503394,
   0.4753789,
   0.5927059,
   0.4478564,
   0.655779,
   1.315383,
   0,
   0.7080784,
   0};
   Double_t _fehx3028[25] = {
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
   Double_t _fehy3028[25] = {
   0.2758886,
   0.1072117,
   0.05644991,
   0.05767406,
   0.05949969,
   0.06704482,
   0.0767664,
   0.08072958,
   0.08403841,
   0.1088217,
   0.1187109,
   0.1629364,
   0.1547885,
   0.1607007,
   0.13025,
   0.1874397,
   0.2259833,
   0.4375613,
   0.4502105,
   0.3864407,
   0.4981199,
   0.9991451,
   1.173014,
   0.9627812,
   1.944942};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1650);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(2.545981);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","CCpi0_FC_Np_bnb_12_muon_momentum_all",25,0,1500);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
