#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 15:55:17 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",34,57,1200,900);
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
   pad1->Range(0.2307692,-6.905969,6.641026,763.6548);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hmc__19->SetBinContent(4,273.382);
   hmc__19->SetBinContent(5,345.2985);
   hmc__19->SetBinContent(6,336.5934);
   hmc__19->SetBinContent(7,304.648);
   hmc__19->SetBinContent(8,275.9795);
   hmc__19->SetBinContent(9,267.074);
   hmc__19->SetBinContent(10,250.2503);
   hmc__19->SetBinContent(11,253.037);
   hmc__19->SetBinContent(12,219.3387);
   hmc__19->SetBinContent(13,165.7286);
   hmc__19->SetBinContent(14,88.22656);
   hmc__19->SetBinContent(15,38.20914);
   hmc__19->SetBinContent(16,15.44303);
   hmc__19->SetBinContent(17,6.406579);
   hmc__19->SetBinContent(18,2.292742);
   hmc__19->SetBinContent(19,0.3763178);
   hmc__19->SetBinContent(20,0.1115999);
   hmc__19->SetBinContent(21,0.2525153);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,0.3895343);
   hmc__19->SetBinError(3,0.3895343);
   hmc__19->SetBinError(4,68.81006);
   hmc__19->SetBinError(5,86.78593);
   hmc__19->SetBinError(6,100.9631);
   hmc__19->SetBinError(7,101.2762);
   hmc__19->SetBinError(8,98.45453);
   hmc__19->SetBinError(9,102.5639);
   hmc__19->SetBinError(10,108.6382);
   hmc__19->SetBinError(11,113.7691);
   hmc__19->SetBinError(12,107.6357);
   hmc__19->SetBinError(13,83.89071);
   hmc__19->SetBinError(14,47.33822);
   hmc__19->SetBinError(15,21.98088);
   hmc__19->SetBinError(16,9.850939);
   hmc__19->SetBinError(17,8.161141);
   hmc__19->SetBinError(18,2.454271);
   hmc__19->SetBinError(19,0.8783189);
   hmc__19->SetBinError(20,0.481994);
   hmc__19->SetBinError(21,1.8131);
   hmc__19->SetMinimum(-6.905969);
   hmc__19->SetMaximum(725.1268);
   hmc__19->SetEntries(2811.899);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,1,6);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(362.5634);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,6.967105);
   hbadmatch_stack_1->SetBinContent(5,10.2827);
   hbadmatch_stack_1->SetBinContent(6,9.41184);
   hbadmatch_stack_1->SetBinContent(7,7.679583);
   hbadmatch_stack_1->SetBinContent(8,6.53276);
   hbadmatch_stack_1->SetBinContent(9,4.342748);
   hbadmatch_stack_1->SetBinContent(10,3.917083);
   hbadmatch_stack_1->SetBinContent(11,2.449103);
   hbadmatch_stack_1->SetBinContent(12,3.739762);
   hbadmatch_stack_1->SetBinContent(13,2.195754);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinError(4,1.33989);
   hbadmatch_stack_1->SetBinError(5,1.711683);
   hbadmatch_stack_1->SetBinError(6,2.468283);
   hbadmatch_stack_1->SetBinError(7,1.551154);
   hbadmatch_stack_1->SetBinError(8,1.353757);
   hbadmatch_stack_1->SetBinError(9,1.028033);
   hbadmatch_stack_1->SetBinError(10,0.9772007);
   hbadmatch_stack_1->SetBinError(11,0.7609545);
   hbadmatch_stack_1->SetBinError(12,1.385176);
   hbadmatch_stack_1->SetBinError(13,0.7598403);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetEntries(226);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,27.60779);
   hext_stack_2->SetBinContent(5,38.8596);
   hext_stack_2->SetBinContent(6,26.57999);
   hext_stack_2->SetBinContent(7,24.16912);
   hext_stack_2->SetBinContent(8,16.76542);
   hext_stack_2->SetBinContent(9,16.10226);
   hext_stack_2->SetBinContent(10,13.56888);
   hext_stack_2->SetBinContent(11,14.58119);
   hext_stack_2->SetBinContent(12,3.737183);
   hext_stack_2->SetBinContent(13,4.752265);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinContent(15,0.7309963);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinError(4,3.673477);
   hext_stack_2->SetBinError(5,4.265275);
   hext_stack_2->SetBinError(6,3.622376);
   hext_stack_2->SetBinError(7,3.365244);
   hext_stack_2->SetBinError(8,2.700904);
   hext_stack_2->SetBinError(9,2.736205);
   hext_stack_2->SetBinError(10,2.54968);
   hext_stack_2->SetBinError(11,2.843215);
   hext_stack_2->SetBinError(12,1.188642);
   hext_stack_2->SetBinError(13,1.630811);
   hext_stack_2->SetBinError(14,0.4587671);
   hext_stack_2->SetBinError(15,0.5201503);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetEntries(428);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,1.450714);
   hdirt_stack_3->SetBinContent(5,1.265265);
   hdirt_stack_3->SetBinContent(6,0.8222938);
   hdirt_stack_3->SetBinContent(7,3.124076);
   hdirt_stack_3->SetBinContent(8,0.4247338);
   hdirt_stack_3->SetBinContent(9,1.046309);
   hdirt_stack_3->SetBinContent(10,1.050901);
   hdirt_stack_3->SetBinContent(11,0.7759784);
   hdirt_stack_3->SetBinContent(12,0.7759784);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.1446783);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinError(4,0.5790196);
   hdirt_stack_3->SetBinError(5,0.5234818);
   hdirt_stack_3->SetBinError(6,0.4387647);
   hdirt_stack_3->SetBinError(7,1.215131);
   hdirt_stack_3->SetBinError(8,0.4247338);
   hdirt_stack_3->SetBinError(9,0.4931741);
   hdirt_stack_3->SetBinError(10,0.4715906);
   hdirt_stack_3->SetBinError(11,0.458477);
   hdirt_stack_3->SetBinError(12,0.458477);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.1446783);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetEntries(50);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,13.95272);
   houtFV_stack_4->SetBinContent(5,16.57319);
   houtFV_stack_4->SetBinContent(6,12.87782);
   houtFV_stack_4->SetBinContent(7,12.245);
   houtFV_stack_4->SetBinContent(8,10.77544);
   houtFV_stack_4->SetBinContent(9,8.41223);
   houtFV_stack_4->SetBinContent(10,8.359389);
   houtFV_stack_4->SetBinContent(11,6.025188);
   houtFV_stack_4->SetBinContent(12,3.031017);
   houtFV_stack_4->SetBinContent(13,2.427892);
   houtFV_stack_4->SetBinContent(14,0.1950248);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinError(4,1.864696);
   houtFV_stack_4->SetBinError(5,2.073961);
   houtFV_stack_4->SetBinError(6,1.846883);
   houtFV_stack_4->SetBinError(7,1.750056);
   houtFV_stack_4->SetBinError(8,1.566181);
   houtFV_stack_4->SetBinError(9,1.415274);
   houtFV_stack_4->SetBinError(10,1.442569);
   houtFV_stack_4->SetBinError(11,1.221258);
   houtFV_stack_4->SetBinError(12,0.8679793);
   houtFV_stack_4->SetBinError(13,0.7944343);
   houtFV_stack_4->SetBinError(14,0.1950249);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetEntries(411);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.8918081);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.710622);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.6124718);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3426549);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2699026);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2100249);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.13029);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.003904);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.813012);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.46409);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.673176);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.36694);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.185754);
   hNCpi0inFVqe_stack_6->SetBinContent(11,2.148644);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.965794);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.43619);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.41147);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2725332);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.4913009);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3558418);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4146887);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3871841);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3245714);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.5195996);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4323036);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3547464);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(314);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVres_stack_7->SetBinContent(4,60.30079);
   hNCpi0inFVres_stack_7->SetBinContent(5,87.25529);
   hNCpi0inFVres_stack_7->SetBinContent(6,101.6346);
   hNCpi0inFVres_stack_7->SetBinContent(7,110.9164);
   hNCpi0inFVres_stack_7->SetBinContent(8,116.8102);
   hNCpi0inFVres_stack_7->SetBinContent(9,136.9685);
   hNCpi0inFVres_stack_7->SetBinContent(10,140.5894);
   hNCpi0inFVres_stack_7->SetBinContent(11,161.8356);
   hNCpi0inFVres_stack_7->SetBinContent(12,157.0127);
   hNCpi0inFVres_stack_7->SetBinContent(13,121.9318);
   hNCpi0inFVres_stack_7->SetBinContent(14,67.22229);
   hNCpi0inFVres_stack_7->SetBinContent(15,30.53152);
   hNCpi0inFVres_stack_7->SetBinContent(16,12.40975);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.936164);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.450472);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.3484178);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(4,2.560193);
   hNCpi0inFVres_stack_7->SetBinError(5,3.067315);
   hNCpi0inFVres_stack_7->SetBinError(6,3.259944);
   hNCpi0inFVres_stack_7->SetBinError(7,3.405751);
   hNCpi0inFVres_stack_7->SetBinError(8,3.556434);
   hNCpi0inFVres_stack_7->SetBinError(9,3.896466);
   hNCpi0inFVres_stack_7->SetBinError(10,3.879457);
   hNCpi0inFVres_stack_7->SetBinError(11,4.162454);
   hNCpi0inFVres_stack_7->SetBinError(12,4.141887);
   hNCpi0inFVres_stack_7->SetBinError(13,3.640938);
   hNCpi0inFVres_stack_7->SetBinError(14,2.706666);
   hNCpi0inFVres_stack_7->SetBinError(15,1.816536);
   hNCpi0inFVres_stack_7->SetBinError(16,1.22975);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7609749);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3456701);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1283607);
   hNCpi0inFVres_stack_7->SetBinError(20,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(21,0.03945654);
   hNCpi0inFVres_stack_7->SetEntries(24018);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVdis_stack_8->SetBinContent(4,17.98161);
   hNCpi0inFVdis_stack_8->SetBinContent(5,25.29494);
   hNCpi0inFVdis_stack_8->SetBinContent(6,25.66294);
   hNCpi0inFVdis_stack_8->SetBinContent(7,24.28954);
   hNCpi0inFVdis_stack_8->SetBinContent(8,22.61619);
   hNCpi0inFVdis_stack_8->SetBinContent(9,24.17344);
   hNCpi0inFVdis_stack_8->SetBinContent(10,27.27419);
   hNCpi0inFVdis_stack_8->SetBinContent(11,23.41998);
   hNCpi0inFVdis_stack_8->SetBinContent(12,24.52786);
   hNCpi0inFVdis_stack_8->SetBinContent(13,16.27157);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.351598);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.463856);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.743426);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.390768);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.340567);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.639817);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.585432);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.615225);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.503229);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.563327);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.730547);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.546032);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.665118);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.291247);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9306937);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7248253);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4471301);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2089417);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.4746361);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2806257);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1974492);
   hNCpi0inFVmec_stack_9->SetEntries(24);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_10->SetBinContent(4,49.3072);
   hCCpi0inFV_stack_10->SetBinContent(5,68.34489);
   hCCpi0inFV_stack_10->SetBinContent(6,57.72058);
   hCCpi0inFV_stack_10->SetBinContent(7,51.00634);
   hCCpi0inFV_stack_10->SetBinContent(8,45.58264);
   hCCpi0inFV_stack_10->SetBinContent(9,34.14907);
   hCCpi0inFV_stack_10->SetBinContent(10,25.38732);
   hCCpi0inFV_stack_10->SetBinContent(11,23.85979);
   hCCpi0inFV_stack_10->SetBinContent(12,13.10538);
   hCCpi0inFV_stack_10->SetBinContent(13,7.509051);
   hCCpi0inFV_stack_10->SetBinContent(14,5.222087);
   hCCpi0inFV_stack_10->SetBinContent(15,0.8770706);
   hCCpi0inFV_stack_10->SetBinContent(16,0.5877208);
   hCCpi0inFV_stack_10->SetBinContent(17,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(18,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(21,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(4,3.533627);
   hCCpi0inFV_stack_10->SetBinError(5,4.169329);
   hCCpi0inFV_stack_10->SetBinError(6,3.811234);
   hCCpi0inFV_stack_10->SetBinError(7,3.617441);
   hCCpi0inFV_stack_10->SetBinError(8,3.333614);
   hCCpi0inFV_stack_10->SetBinError(9,2.9533);
   hCCpi0inFV_stack_10->SetBinError(10,2.503891);
   hCCpi0inFV_stack_10->SetBinError(11,2.432822);
   hCCpi0inFV_stack_10->SetBinError(12,1.850413);
   hCCpi0inFV_stack_10->SetBinError(13,1.321491);
   hCCpi0inFV_stack_10->SetBinError(14,1.210714);
   hCCpi0inFV_stack_10->SetBinError(15,0.5197486);
   hCCpi0inFV_stack_10->SetBinError(16,0.3387731);
   hCCpi0inFV_stack_10->SetBinError(17,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(18,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(21,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(1641);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hNCinFV_stack_11->SetBinContent(4,30.38032);
   hNCinFV_stack_11->SetBinContent(5,36.25473);
   hNCinFV_stack_11->SetBinContent(6,39.92616);
   hNCinFV_stack_11->SetBinContent(7,31.79766);
   hNCinFV_stack_11->SetBinContent(8,30.57196);
   hNCinFV_stack_11->SetBinContent(9,24.97951);
   hNCinFV_stack_11->SetBinContent(10,15.53004);
   hNCinFV_stack_11->SetBinContent(11,10.4083);
   hNCinFV_stack_11->SetBinContent(12,9.324978);
   hNCinFV_stack_11->SetBinContent(13,6.745329);
   hNCinFV_stack_11->SetBinContent(14,3.966192);
   hNCinFV_stack_11->SetBinContent(15,0.3934307);
   hNCinFV_stack_11->SetBinContent(16,0.1967154);
   hNCinFV_stack_11->SetBinContent(17,0.1967154);
   hNCinFV_stack_11->SetBinError(4,2.796467);
   hNCinFV_stack_11->SetBinError(5,2.995086);
   hNCinFV_stack_11->SetBinError(6,3.15237);
   hNCinFV_stack_11->SetBinError(7,2.871604);
   hNCinFV_stack_11->SetBinError(8,2.803023);
   hNCinFV_stack_11->SetBinError(9,2.474744);
   hNCinFV_stack_11->SetBinError(10,1.981545);
   hNCinFV_stack_11->SetBinError(11,1.606243);
   hNCinFV_stack_11->SetBinError(12,1.570297);
   hNCinFV_stack_11->SetBinError(13,1.271389);
   hNCinFV_stack_11->SetBinError(14,0.9620965);
   hNCinFV_stack_11->SetBinError(15,0.2781975);
   hNCinFV_stack_11->SetBinError(16,0.1967154);
   hNCinFV_stack_11->SetBinError(17,0.1967154);
   hNCinFV_stack_11->SetEntries(1026);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_12->SetBinContent(4,61.32124);
   hnumuCCinFV_stack_12->SetBinContent(5,57.17284);
   hnumuCCinFV_stack_12->SetBinContent(6,55.27364);
   hnumuCCinFV_stack_12->SetBinContent(7,36.46404);
   hnumuCCinFV_stack_12->SetBinContent(8,22.48526);
   hnumuCCinFV_stack_12->SetBinContent(9,14.99753);
   hnumuCCinFV_stack_12->SetBinContent(10,11.93079);
   hnumuCCinFV_stack_12->SetBinContent(11,6.347929);
   hnumuCCinFV_stack_12->SetBinContent(12,1.38787);
   hnumuCCinFV_stack_12->SetBinContent(13,1.017251);
   hnumuCCinFV_stack_12->SetBinContent(14,1.792512);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1957112);
   hnumuCCinFV_stack_12->SetBinError(4,4.655861);
   hnumuCCinFV_stack_12->SetBinError(5,4.2375);
   hnumuCCinFV_stack_12->SetBinError(6,4.43336);
   hnumuCCinFV_stack_12->SetBinError(7,3.409654);
   hnumuCCinFV_stack_12->SetBinError(8,3.606054);
   hnumuCCinFV_stack_12->SetBinError(9,2.077057);
   hnumuCCinFV_stack_12->SetBinError(10,1.755322);
   hnumuCCinFV_stack_12->SetBinError(11,1.341962);
   hnumuCCinFV_stack_12->SetBinError(12,0.5786143);
   hnumuCCinFV_stack_12->SetBinError(13,0.4517528);
   hnumuCCinFV_stack_12->SetBinError(14,0.7595238);
   hnumuCCinFV_stack_12->SetBinError(15,0.1950261);
   hnumuCCinFV_stack_12->SetEntries(1066);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_13->SetBinContent(4,2.620197);
   hnueCCinFV_stack_13->SetBinContent(5,2.670643);
   hnueCCinFV_stack_13->SetBinContent(6,4.563568);
   hnueCCinFV_stack_13->SetBinContent(7,1.283291);
   hnueCCinFV_stack_13->SetBinContent(8,1.184277);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(13,0.2486649);
   hnueCCinFV_stack_13->SetBinError(4,0.9570154);
   hnueCCinFV_stack_13->SetBinError(5,0.8352231);
   hnueCCinFV_stack_13->SetBinError(6,1.144996);
   hnueCCinFV_stack_13->SetBinError(7,0.5274385);
   hnueCCinFV_stack_13->SetBinError(8,0.5445209);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(13,0.2486649);
   hnueCCinFV_stack_13->SetEntries(54);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);
   hmcerror__20->SetBinContent(4,273.382);
   hmcerror__20->SetBinContent(5,345.2985);
   hmcerror__20->SetBinContent(6,336.5934);
   hmcerror__20->SetBinContent(7,304.648);
   hmcerror__20->SetBinContent(8,275.9795);
   hmcerror__20->SetBinContent(9,267.074);
   hmcerror__20->SetBinContent(10,250.2503);
   hmcerror__20->SetBinContent(11,253.037);
   hmcerror__20->SetBinContent(12,219.3387);
   hmcerror__20->SetBinContent(13,165.7286);
   hmcerror__20->SetBinContent(14,88.22656);
   hmcerror__20->SetBinContent(15,38.20914);
   hmcerror__20->SetBinContent(16,15.44303);
   hmcerror__20->SetBinContent(17,6.406579);
   hmcerror__20->SetBinContent(18,2.292742);
   hmcerror__20->SetBinContent(19,0.3763178);
   hmcerror__20->SetBinContent(20,0.1115999);
   hmcerror__20->SetBinContent(21,0.2525153);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,0.3895343);
   hmcerror__20->SetBinError(3,0.3895343);
   hmcerror__20->SetBinError(4,68.81006);
   hmcerror__20->SetBinError(5,86.78593);
   hmcerror__20->SetBinError(6,100.9631);
   hmcerror__20->SetBinError(7,101.2762);
   hmcerror__20->SetBinError(8,98.45453);
   hmcerror__20->SetBinError(9,102.5639);
   hmcerror__20->SetBinError(10,108.6382);
   hmcerror__20->SetBinError(11,113.7691);
   hmcerror__20->SetBinError(12,107.6357);
   hmcerror__20->SetBinError(13,83.89071);
   hmcerror__20->SetBinError(14,47.33822);
   hmcerror__20->SetBinError(15,21.98088);
   hmcerror__20->SetBinError(16,9.850939);
   hmcerror__20->SetBinError(17,8.161141);
   hmcerror__20->SetBinError(18,2.454271);
   hmcerror__20->SetBinError(19,0.8783189);
   hmcerror__20->SetBinError(20,0.481994);
   hmcerror__20->SetBinError(21,1.8131);
   hmcerror__20->SetEntries(2811.899);

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
   
   Double_t _fx3025[20] = {
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
   Double_t _fy3025[20] = {
   0,
   0,
   0,
   184,
   269,
   245,
   227,
   204,
   201,
   170,
   171,
   149,
   125,
   55,
   18,
   8,
   6,
   4,
   0,
   0};
   Double_t _felx3025[20] = {
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
   Double_t _fely3025[20] = {
   0,
   0,
   0,
   13.56466,
   16.40122,
   15.65248,
   15.06652,
   14.28286,
   14.17745,
   13.0384,
   13.0767,
   12.20656,
   11.18034,
   7.546,
   4.4008,
   3.0307,
   2.67925,
   2.29683,
   0,
   0};
   Double_t _fehx3025[20] = {
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
   Double_t _fehy3025[20] = {
   1.1478,
   1.1478,
   1.1478,
   13.56466,
   16.40122,
   15.65248,
   15.06652,
   14.28286,
   14.17745,
   13.0384,
   13.0767,
   12.20656,
   11.18034,
   7.3425,
   4.1858,
   2.7896,
   2.41858,
   1.98186,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0.5,6.5);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(313.9413);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.2/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2036.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 95.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1312.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  246.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 240.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[20] = {
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
   Double_t _fy3026[20] = {
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
   Double_t _felx3026[20] = {
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
   Double_t _fely3026[20] = {
   0,
   0,
   0,
   0.2516993,
   0.251336,
   0.2999558,
   0.3324368,
   0.3567458,
   0.3840281,
   0.4341183,
   0.4496145,
   0.4907284,
   0.5061933,
   0.5365529,
   0.5752781,
   0.6378892,
   1.273869,
   1.070452,
   2.333982,
   4.318945};
   Double_t _fehx3026[20] = {
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
   Double_t _fehy3026[20] = {
   0,
   0,
   0,
   0.2516993,
   0.251336,
   0.2999558,
   0.3324368,
   0.3567458,
   0.3840281,
   0.4341183,
   0.4496145,
   0.4907284,
   0.5061933,
   0.5365529,
   0.5752781,
   0.6378892,
   1.273869,
   1.070452,
   2.333982,
   4.318945};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0.5,6.5);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("BDT Score");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3027[20] = {
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
   Double_t _fy3027[20] = {
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
   Double_t _felx3027[20] = {
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
   Double_t _fely3027[20] = {
   0,
   0,
   0,
   0.2118918,
   0.2284091,
   0.2486136,
   0.2864397,
   0.3215264,
   0.3537916,
   0.401477,
   0.4252109,
   0.4746802,
   0.4879187,
   0.5045758,
   0.4934861,
   0.4639211,
   0.464158,
   0.5020897,
   1.112686,
   2.448539};
   Double_t _fehx3027[20] = {
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
   Double_t _fehy3027[20] = {
   0,
   0,
   0,
   0.2118918,
   0.2284091,
   0.2486136,
   0.2864397,
   0.3215264,
   0.3537916,
   0.401477,
   0.4252109,
   0.4746802,
   0.4879187,
   0.5045758,
   0.4934861,
   0.4639211,
   0.464158,
   0.5020897,
   1.112686,
   2.448539};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0.5,6.5);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3028[20] = {
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
   Double_t _fy3028[20] = {
   10,
   10,
   10,
   0.6730508,
   0.7790362,
   0.7278813,
   0.7451221,
   0.7391853,
   0.7526003,
   0.6793199,
   0.6757906,
   0.6793148,
   0.7542452,
   0.623395,
   0.4710915,
   0.5180332,
   0.9365372,
   1.744636,
   0,
   0};
   Double_t _felx3028[20] = {
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
   Double_t _fely3028[20] = {
   0,
   0,
   0,
   0.04961796,
   0.04749868,
   0.04650263,
   0.04945549,
   0.05175332,
   0.05308433,
   0.05210146,
   0.051679,
   0.05565164,
   0.06746174,
   0.0855298,
   0.1151766,
   0.1962504,
   0.4182029,
   1.001783,
   0,
   0};
   Double_t _fehx3028[20] = {
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
   Double_t _fehy3028[20] = {
   0,
   0,
   0,
   0.04961796,
   0.04749868,
   0.04650263,
   0.04945549,
   0.05175332,
   0.05308433,
   0.05210146,
   0.051679,
   0.05565164,
   0.06746174,
   0.08322324,
   0.1095497,
   0.1806382,
   0.377515,
   0.8644059,
   3.050081,
   10.28495};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0.5,6.5);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(11.31345);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_nc_pio_score_all",20,1,6);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
