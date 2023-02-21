#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Mon Jan 16 04:37:11 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-9.749524,1.25641,1078.092);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hmc__13->SetBinContent(1,121.1925);
   hmc__13->SetBinContent(2,95.38524);
   hmc__13->SetBinContent(3,90.5912);
   hmc__13->SetBinContent(4,83.94011);
   hmc__13->SetBinContent(5,77.42951);
   hmc__13->SetBinContent(6,82.95779);
   hmc__13->SetBinContent(7,79.93544);
   hmc__13->SetBinContent(8,91.14505);
   hmc__13->SetBinContent(9,96.19736);
   hmc__13->SetBinContent(10,108.7971);
   hmc__13->SetBinContent(11,123.3062);
   hmc__13->SetBinContent(12,129.9824);
   hmc__13->SetBinContent(13,131.0994);
   hmc__13->SetBinContent(14,151.336);
   hmc__13->SetBinContent(15,166.8299);
   hmc__13->SetBinContent(16,196.7339);
   hmc__13->SetBinContent(17,247.7693);
   hmc__13->SetBinContent(18,265.0623);
   hmc__13->SetBinContent(19,328.0114);
   hmc__13->SetBinContent(20,487.4762);
   hmc__13->SetBinError(1,35.865);
   hmc__13->SetBinError(2,32.06972);
   hmc__13->SetBinError(3,29.90989);
   hmc__13->SetBinError(4,27.63965);
   hmc__13->SetBinError(5,23.16276);
   hmc__13->SetBinError(6,25.86403);
   hmc__13->SetBinError(7,32.60182);
   hmc__13->SetBinError(8,26.06346);
   hmc__13->SetBinError(9,30.13419);
   hmc__13->SetBinError(10,33.61884);
   hmc__13->SetBinError(11,36.53806);
   hmc__13->SetBinError(12,40.60792);
   hmc__13->SetBinError(13,39.74803);
   hmc__13->SetBinError(14,50.58267);
   hmc__13->SetBinError(15,52.68056);
   hmc__13->SetBinError(16,75.20761);
   hmc__13->SetBinError(17,78.95705);
   hmc__13->SetBinError(18,80.04105);
   hmc__13->SetBinError(19,104.5662);
   hmc__13->SetBinError(20,117.6943);
   hmc__13->SetBinError(21,0.4673072);
   hmc__13->SetMinimum(-9.749524);
   hmc__13->SetMaximum(1023.7);
   hmc__13->SetEntries(3116.394);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,-1,1);
   hs5_stack_5->SetMinimum(-1.232915e-08);
   hs5_stack_5->SetMaximum(511.85);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,5.312836);
   hbadmatch_stack_1->SetBinContent(2,1.94435);
   hbadmatch_stack_1->SetBinContent(3,2.976323);
   hbadmatch_stack_1->SetBinContent(4,1.633784);
   hbadmatch_stack_1->SetBinContent(5,2.271334);
   hbadmatch_stack_1->SetBinContent(6,2.717248);
   hbadmatch_stack_1->SetBinContent(7,1.922746);
   hbadmatch_stack_1->SetBinContent(8,3.377011);
   hbadmatch_stack_1->SetBinContent(9,3.336457);
   hbadmatch_stack_1->SetBinContent(10,3.312175);
   hbadmatch_stack_1->SetBinContent(11,5.305882);
   hbadmatch_stack_1->SetBinContent(12,8.118325);
   hbadmatch_stack_1->SetBinContent(13,2.961211);
   hbadmatch_stack_1->SetBinContent(14,4.388618);
   hbadmatch_stack_1->SetBinContent(15,3.593004);
   hbadmatch_stack_1->SetBinContent(16,4.486669);
   hbadmatch_stack_1->SetBinContent(17,7.252818);
   hbadmatch_stack_1->SetBinContent(18,6.51335);
   hbadmatch_stack_1->SetBinContent(19,4.875655);
   hbadmatch_stack_1->SetBinContent(20,7.224771);
   hbadmatch_stack_1->SetBinError(1,1.405912);
   hbadmatch_stack_1->SetBinError(2,0.8577802);
   hbadmatch_stack_1->SetBinError(3,1.039412);
   hbadmatch_stack_1->SetBinError(4,0.6175123);
   hbadmatch_stack_1->SetBinError(5,0.9024504);
   hbadmatch_stack_1->SetBinError(6,1.006606);
   hbadmatch_stack_1->SetBinError(7,0.742754);
   hbadmatch_stack_1->SetBinError(8,1.194021);
   hbadmatch_stack_1->SetBinError(9,1.187378);
   hbadmatch_stack_1->SetBinError(10,1.013366);
   hbadmatch_stack_1->SetBinError(11,1.392316);
   hbadmatch_stack_1->SetBinError(12,2.712767);
   hbadmatch_stack_1->SetBinError(13,0.9688657);
   hbadmatch_stack_1->SetBinError(14,1.228172);
   hbadmatch_stack_1->SetBinError(15,1.206329);
   hbadmatch_stack_1->SetBinError(16,1.364216);
   hbadmatch_stack_1->SetBinError(17,1.78428);
   hbadmatch_stack_1->SetBinError(18,1.677895);
   hbadmatch_stack_1->SetBinError(19,1.238096);
   hbadmatch_stack_1->SetBinError(20,1.553009);
   hbadmatch_stack_1->SetEntries(255);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,14.72404);
   houtFV_stack_4->SetBinContent(2,8.23527);
   houtFV_stack_4->SetBinContent(3,6.611873);
   houtFV_stack_4->SetBinContent(4,7.315112);
   houtFV_stack_4->SetBinContent(5,4.377879);
   houtFV_stack_4->SetBinContent(6,5.341779);
   houtFV_stack_4->SetBinContent(7,5.036871);
   houtFV_stack_4->SetBinContent(8,6.510836);
   houtFV_stack_4->SetBinContent(9,7.200153);
   houtFV_stack_4->SetBinContent(10,5.40607);
   houtFV_stack_4->SetBinContent(11,7.010484);
   houtFV_stack_4->SetBinContent(12,4.85507);
   houtFV_stack_4->SetBinContent(13,5.759032);
   houtFV_stack_4->SetBinContent(14,8.7);
   houtFV_stack_4->SetBinContent(15,11.75026);
   houtFV_stack_4->SetBinContent(16,11.23049);
   houtFV_stack_4->SetBinContent(17,16.18341);
   houtFV_stack_4->SetBinContent(18,16.60949);
   houtFV_stack_4->SetBinContent(19,19.82039);
   houtFV_stack_4->SetBinContent(20,31.20359);
   houtFV_stack_4->SetBinError(1,2.307443);
   houtFV_stack_4->SetBinError(2,1.637134);
   houtFV_stack_4->SetBinError(3,1.477878);
   houtFV_stack_4->SetBinError(4,1.674997);
   houtFV_stack_4->SetBinError(5,1.228424);
   houtFV_stack_4->SetBinError(6,1.319788);
   houtFV_stack_4->SetBinError(7,1.361083);
   houtFV_stack_4->SetBinError(8,1.509323);
   houtFV_stack_4->SetBinError(9,1.515755);
   houtFV_stack_4->SetBinError(10,1.294685);
   houtFV_stack_4->SetBinError(11,1.62464);
   houtFV_stack_4->SetBinError(12,1.233814);
   houtFV_stack_4->SetBinError(13,1.388053);
   houtFV_stack_4->SetBinError(14,1.803218);
   houtFV_stack_4->SetBinError(15,1.950849);
   houtFV_stack_4->SetBinError(16,2.003041);
   houtFV_stack_4->SetBinError(17,2.340135);
   houtFV_stack_4->SetBinError(18,2.317518);
   houtFV_stack_4->SetBinError(19,2.574149);
   houtFV_stack_4->SetBinError(20,3.405345);
   houtFV_stack_4->SetEntries(664);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.256225);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.6448606);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.4634366);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.514518);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04681417);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2562251);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3683554);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1238586);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5584938);
   hNCpi0inFVcoh_stack_5->SetEntries(81);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.9010857);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2979235);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2979235);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2317183);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5872512);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5541486);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4879434);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4879434);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.430334);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4879434);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4548407);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5541486);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4879434);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2979235);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.165907);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.132804);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.340015);
   hNCpi0inFVqe_stack_6->SetBinContent(18,2.340409);
   hNCpi0inFVqe_stack_6->SetBinContent(19,2.382107);
   hNCpi0inFVqe_stack_6->SetBinContent(20,3.382501);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4487059);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.08758128);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2767835);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2747969);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2707799);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2707799);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1193532);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2707799);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2687489);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2747969);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2707799);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4583702);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4571733);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3983681);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.6027615);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.5545559);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.7156511);
   hNCpi0inFVqe_stack_6->SetEntries(317);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,43.28723);
   hNCpi0inFVres_stack_7->SetBinContent(2,40.51649);
   hNCpi0inFVres_stack_7->SetBinContent(3,38.0914);
   hNCpi0inFVres_stack_7->SetBinContent(4,39.68764);
   hNCpi0inFVres_stack_7->SetBinContent(5,36.29911);
   hNCpi0inFVres_stack_7->SetBinContent(6,39.08704);
   hNCpi0inFVres_stack_7->SetBinContent(7,39.24524);
   hNCpi0inFVres_stack_7->SetBinContent(8,41.50225);
   hNCpi0inFVres_stack_7->SetBinContent(9,45.95867);
   hNCpi0inFVres_stack_7->SetBinContent(10,54.01942);
   hNCpi0inFVres_stack_7->SetBinContent(11,56.93118);
   hNCpi0inFVres_stack_7->SetBinContent(12,62.77662);
   hNCpi0inFVres_stack_7->SetBinContent(13,61.47483);
   hNCpi0inFVres_stack_7->SetBinContent(14,75.67164);
   hNCpi0inFVres_stack_7->SetBinContent(15,77.14188);
   hNCpi0inFVres_stack_7->SetBinContent(16,98.37447);
   hNCpi0inFVres_stack_7->SetBinContent(17,111.9045);
   hNCpi0inFVres_stack_7->SetBinContent(18,129.4275);
   hNCpi0inFVres_stack_7->SetBinContent(19,148.306);
   hNCpi0inFVres_stack_7->SetBinContent(20,181.4904);
   hNCpi0inFVres_stack_7->SetBinError(1,2.519822);
   hNCpi0inFVres_stack_7->SetBinError(2,2.443755);
   hNCpi0inFVres_stack_7->SetBinError(3,2.439022);
   hNCpi0inFVres_stack_7->SetBinError(4,2.484588);
   hNCpi0inFVres_stack_7->SetBinError(5,2.293607);
   hNCpi0inFVres_stack_7->SetBinError(6,2.350411);
   hNCpi0inFVres_stack_7->SetBinError(7,2.31477);
   hNCpi0inFVres_stack_7->SetBinError(8,2.415173);
   hNCpi0inFVres_stack_7->SetBinError(9,2.593026);
   hNCpi0inFVres_stack_7->SetBinError(10,2.901698);
   hNCpi0inFVres_stack_7->SetBinError(11,2.957181);
   hNCpi0inFVres_stack_7->SetBinError(12,3.148063);
   hNCpi0inFVres_stack_7->SetBinError(13,2.972904);
   hNCpi0inFVres_stack_7->SetBinError(14,3.396722);
   hNCpi0inFVres_stack_7->SetBinError(15,3.257991);
   hNCpi0inFVres_stack_7->SetBinError(16,3.858558);
   hNCpi0inFVres_stack_7->SetBinError(17,4.098312);
   hNCpi0inFVres_stack_7->SetBinError(18,4.44074);
   hNCpi0inFVres_stack_7->SetBinError(19,4.723157);
   hNCpi0inFVres_stack_7->SetBinError(20,5.21706);
   hNCpi0inFVres_stack_7->SetEntries(23471);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.915785);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.022114);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.137726);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.038419);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.905221);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.557397);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.450774);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.542273);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.8067);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.476461);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.062925);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.799779);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.50304);
   hNCpi0inFVdis_stack_8->SetBinContent(14,14.25698);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.44749);
   hNCpi0inFVdis_stack_8->SetBinContent(16,15.36656);
   hNCpi0inFVdis_stack_8->SetBinContent(17,19.96398);
   hNCpi0inFVdis_stack_8->SetBinContent(18,25.67829);
   hNCpi0inFVdis_stack_8->SetBinContent(19,32.61868);
   hNCpi0inFVdis_stack_8->SetBinContent(20,54.18018);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.236446);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8103729);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9896877);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9880255);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7500417);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9327374);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8336432);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.079065);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9841361);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.169109);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.016944);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.000698);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.267047);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.517026);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.314133);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.491228);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.749852);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.998586);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.176836);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.792187);
   hNCpi0inFVdis_stack_8->SetEntries(4539);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.09930784);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.3224303);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2893277);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.256225);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2317183);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.05733541);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.2604666);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.2583545);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.2562251);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.08758128);
   hNCpi0inFVmec_stack_9->SetEntries(28);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,17.46122);
   hCCpi0inFV_stack_10->SetBinContent(2,18.36231);
   hCCpi0inFV_stack_10->SetBinContent(3,15.4226);
   hCCpi0inFV_stack_10->SetBinContent(4,11.53641);
   hCCpi0inFV_stack_10->SetBinContent(5,11.57648);
   hCCpi0inFV_stack_10->SetBinContent(6,13.50894);
   hCCpi0inFV_stack_10->SetBinContent(7,11.90699);
   hCCpi0inFV_stack_10->SetBinContent(8,13.97965);
   hCCpi0inFV_stack_10->SetBinContent(9,11.08745);
   hCCpi0inFV_stack_10->SetBinContent(10,12.5379);
   hCCpi0inFV_stack_10->SetBinContent(11,18.09731);
   hCCpi0inFV_stack_10->SetBinContent(12,17.18953);
   hCCpi0inFV_stack_10->SetBinContent(13,21.20933);
   hCCpi0inFV_stack_10->SetBinContent(14,22.09555);
   hCCpi0inFV_stack_10->SetBinContent(15,22.47314);
   hCCpi0inFV_stack_10->SetBinContent(16,26.34153);
   hCCpi0inFV_stack_10->SetBinContent(17,44.76191);
   hCCpi0inFV_stack_10->SetBinContent(18,39.5479);
   hCCpi0inFV_stack_10->SetBinContent(19,51.29541);
   hCCpi0inFV_stack_10->SetBinContent(20,87.41299);
   hCCpi0inFV_stack_10->SetBinError(1,2.484127);
   hCCpi0inFV_stack_10->SetBinError(2,2.597997);
   hCCpi0inFV_stack_10->SetBinError(3,2.30701);
   hCCpi0inFV_stack_10->SetBinError(4,1.93964);
   hCCpi0inFV_stack_10->SetBinError(5,1.838579);
   hCCpi0inFV_stack_10->SetBinError(6,2.198684);
   hCCpi0inFV_stack_10->SetBinError(7,1.954858);
   hCCpi0inFV_stack_10->SetBinError(8,2.198921);
   hCCpi0inFV_stack_10->SetBinError(9,1.833177);
   hCCpi0inFV_stack_10->SetBinError(10,2.109971);
   hCCpi0inFV_stack_10->SetBinError(11,2.477901);
   hCCpi0inFV_stack_10->SetBinError(12,2.42338);
   hCCpi0inFV_stack_10->SetBinError(13,2.725254);
   hCCpi0inFV_stack_10->SetBinError(14,2.814846);
   hCCpi0inFV_stack_10->SetBinError(15,2.783662);
   hCCpi0inFV_stack_10->SetBinError(16,3.028479);
   hCCpi0inFV_stack_10->SetBinError(17,3.993854);
   hCCpi0inFV_stack_10->SetBinError(18,3.683958);
   hCCpi0inFV_stack_10->SetBinError(19,4.227857);
   hCCpi0inFV_stack_10->SetBinError(20,5.579284);
   hCCpi0inFV_stack_10->SetEntries(1566);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,13.22385);
   hNCinFV_stack_11->SetBinContent(2,8.681183);
   hNCinFV_stack_11->SetBinContent(3,7.789355);
   hNCinFV_stack_11->SetBinContent(4,5.943054);
   hNCinFV_stack_11->SetBinContent(5,9.339615);
   hNCinFV_stack_11->SetBinContent(6,7.089162);
   hNCinFV_stack_11->SetBinContent(7,6.237996);
   hNCinFV_stack_11->SetBinContent(8,3.438323);
   hNCinFV_stack_11->SetBinContent(9,7.855703);
   hNCinFV_stack_11->SetBinContent(10,7.514194);
   hNCinFV_stack_11->SetBinContent(11,5.667894);
   hNCinFV_stack_11->SetBinContent(12,9.106216);
   hNCinFV_stack_11->SetBinContent(13,9.593893);
   hNCinFV_stack_11->SetBinContent(14,7.98099);
   hNCinFV_stack_11->SetBinContent(15,14.28643);
   hNCinFV_stack_11->SetBinContent(16,13.2865);
   hNCinFV_stack_11->SetBinContent(17,15.72858);
   hNCinFV_stack_11->SetBinContent(18,19.8671);
   hNCinFV_stack_11->SetBinContent(19,37.35846);
   hNCinFV_stack_11->SetBinContent(20,60.24255);
   hNCinFV_stack_11->SetBinError(1,2.123177);
   hNCinFV_stack_11->SetBinError(2,1.696775);
   hNCinFV_stack_11->SetBinError(3,1.575236);
   hNCinFV_stack_11->SetBinError(4,1.398456);
   hNCinFV_stack_11->SetBinError(5,1.795063);
   hNCinFV_stack_11->SetBinError(6,1.522479);
   hNCinFV_stack_11->SetBinError(7,1.419135);
   hNCinFV_stack_11->SetBinError(8,1.042492);
   hNCinFV_stack_11->SetBinError(9,1.804153);
   hNCinFV_stack_11->SetBinError(10,1.61452);
   hNCinFV_stack_11->SetBinError(11,1.442563);
   hNCinFV_stack_11->SetBinError(12,1.779825);
   hNCinFV_stack_11->SetBinError(13,1.785171);
   hNCinFV_stack_11->SetBinError(14,1.647915);
   hNCinFV_stack_11->SetBinError(15,2.286855);
   hNCinFV_stack_11->SetBinError(16,2.058691);
   hNCinFV_stack_11->SetBinError(17,2.318787);
   hNCinFV_stack_11->SetBinError(18,2.574293);
   hNCinFV_stack_11->SetBinError(19,3.590126);
   hNCinFV_stack_11->SetBinError(20,4.621398);
   hNCinFV_stack_11->SetEntries(869);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,15.80036);
   hnumuCCinFV_stack_12->SetBinContent(2,10.73509);
   hnumuCCinFV_stack_12->SetBinContent(3,11.93704);
   hnumuCCinFV_stack_12->SetBinContent(4,10.22584);
   hnumuCCinFV_stack_12->SetBinContent(5,7.336902);
   hnumuCCinFV_stack_12->SetBinContent(6,8.344685);
   hnumuCCinFV_stack_12->SetBinContent(7,8.571761);
   hnumuCCinFV_stack_12->SetBinContent(8,14.20745);
   hnumuCCinFV_stack_12->SetBinContent(9,13.5219);
   hnumuCCinFV_stack_12->SetBinContent(10,17.04295);
   hnumuCCinFV_stack_12->SetBinContent(11,22.77572);
   hnumuCCinFV_stack_12->SetBinContent(12,19.25246);
   hnumuCCinFV_stack_12->SetBinContent(13,19.01085);
   hnumuCCinFV_stack_12->SetBinContent(14,16.38684);
   hnumuCCinFV_stack_12->SetBinContent(15,23.169);
   hnumuCCinFV_stack_12->SetBinContent(16,26.19242);
   hnumuCCinFV_stack_12->SetBinContent(17,29.5873);
   hnumuCCinFV_stack_12->SetBinContent(18,22.94091);
   hnumuCCinFV_stack_12->SetBinContent(19,29.27645);
   hnumuCCinFV_stack_12->SetBinContent(20,47.90745);
   hnumuCCinFV_stack_12->SetBinError(1,2.382254);
   hnumuCCinFV_stack_12->SetBinError(2,2.042475);
   hnumuCCinFV_stack_12->SetBinError(3,2.424439);
   hnumuCCinFV_stack_12->SetBinError(4,1.955678);
   hnumuCCinFV_stack_12->SetBinError(5,1.652209);
   hnumuCCinFV_stack_12->SetBinError(6,1.695942);
   hnumuCCinFV_stack_12->SetBinError(7,1.807434);
   hnumuCCinFV_stack_12->SetBinError(8,2.504674);
   hnumuCCinFV_stack_12->SetBinError(9,2.401715);
   hnumuCCinFV_stack_12->SetBinError(10,2.934635);
   hnumuCCinFV_stack_12->SetBinError(11,3.231658);
   hnumuCCinFV_stack_12->SetBinError(12,2.827168);
   hnumuCCinFV_stack_12->SetBinError(13,3.004237);
   hnumuCCinFV_stack_12->SetBinError(14,2.436906);
   hnumuCCinFV_stack_12->SetBinError(15,3.279091);
   hnumuCCinFV_stack_12->SetBinError(16,4.406044);
   hnumuCCinFV_stack_12->SetBinError(17,3.741133);
   hnumuCCinFV_stack_12->SetBinError(18,3.135451);
   hnumuCCinFV_stack_12->SetBinError(19,3.722132);
   hnumuCCinFV_stack_12->SetBinError(20,4.269176);
   hnumuCCinFV_stack_12->SetEntries(1129);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(2,0.5243112);
   hnueCCinFV_stack_13->SetBinContent(3,0.2938611);
   hnueCCinFV_stack_13->SetBinContent(4,0.2950345);
   hnueCCinFV_stack_13->SetBinContent(5,0.4463965);
   hnueCCinFV_stack_13->SetBinContent(6,0.7242924);
   hnueCCinFV_stack_13->SetBinContent(7,1.00891);
   hnueCCinFV_stack_13->SetBinContent(12,0.2971461);
   hnueCCinFV_stack_13->SetBinContent(14,1.235067);
   hnueCCinFV_stack_13->SetBinContent(15,0.7034981);
   hnueCCinFV_stack_13->SetBinContent(17,0.9805174);
   hnueCCinFV_stack_13->SetBinContent(18,1.426241);
   hnueCCinFV_stack_13->SetBinContent(19,1.358624);
   hnueCCinFV_stack_13->SetBinContent(20,11.68552);
   hnueCCinFV_stack_13->SetBinError(1,0.3300742);
   hnueCCinFV_stack_13->SetBinError(2,0.372968);
   hnueCCinFV_stack_13->SetBinError(3,0.2938611);
   hnueCCinFV_stack_13->SetBinError(4,0.2950345);
   hnueCCinFV_stack_13->SetBinError(5,0.4459146);
   hnueCCinFV_stack_13->SetBinError(6,0.5256747);
   hnueCCinFV_stack_13->SetBinError(7,0.7680269);
   hnueCCinFV_stack_13->SetBinError(12,0.2971461);
   hnueCCinFV_stack_13->SetBinError(14,0.7272377);
   hnueCCinFV_stack_13->SetBinError(15,0.514965);
   hnueCCinFV_stack_13->SetBinError(17,0.5865482);
   hnueCCinFV_stack_13->SetBinError(18,0.7367248);
   hnueCCinFV_stack_13->SetBinError(19,0.7117782);
   hnueCCinFV_stack_13->SetBinError(20,2.906933);
   hnueCCinFV_stack_13->SetEntries(57);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);
   hmcerror__14->SetBinContent(1,121.1925);
   hmcerror__14->SetBinContent(2,95.38524);
   hmcerror__14->SetBinContent(3,90.5912);
   hmcerror__14->SetBinContent(4,83.94011);
   hmcerror__14->SetBinContent(5,77.42951);
   hmcerror__14->SetBinContent(6,82.95779);
   hmcerror__14->SetBinContent(7,79.93544);
   hmcerror__14->SetBinContent(8,91.14505);
   hmcerror__14->SetBinContent(9,96.19736);
   hmcerror__14->SetBinContent(10,108.7971);
   hmcerror__14->SetBinContent(11,123.3062);
   hmcerror__14->SetBinContent(12,129.9824);
   hmcerror__14->SetBinContent(13,131.0994);
   hmcerror__14->SetBinContent(14,151.336);
   hmcerror__14->SetBinContent(15,166.8299);
   hmcerror__14->SetBinContent(16,196.7339);
   hmcerror__14->SetBinContent(17,247.7693);
   hmcerror__14->SetBinContent(18,265.0623);
   hmcerror__14->SetBinContent(19,328.0114);
   hmcerror__14->SetBinContent(20,487.4762);
   hmcerror__14->SetBinError(1,35.865);
   hmcerror__14->SetBinError(2,32.06972);
   hmcerror__14->SetBinError(3,29.90989);
   hmcerror__14->SetBinError(4,27.63965);
   hmcerror__14->SetBinError(5,23.16276);
   hmcerror__14->SetBinError(6,25.86403);
   hmcerror__14->SetBinError(7,32.60182);
   hmcerror__14->SetBinError(8,26.06346);
   hmcerror__14->SetBinError(9,30.13419);
   hmcerror__14->SetBinError(10,33.61884);
   hmcerror__14->SetBinError(11,36.53806);
   hmcerror__14->SetBinError(12,40.60792);
   hmcerror__14->SetBinError(13,39.74803);
   hmcerror__14->SetBinError(14,50.58267);
   hmcerror__14->SetBinError(15,52.68056);
   hmcerror__14->SetBinError(16,75.20761);
   hmcerror__14->SetBinError(17,78.95705);
   hmcerror__14->SetBinError(18,80.04105);
   hmcerror__14->SetBinError(19,104.5662);
   hmcerror__14->SetBinError(20,117.6943);
   hmcerror__14->SetBinError(21,0.4673072);
   hmcerror__14->SetEntries(3116.394);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3017[20] = {
   100,
   79,
   92,
   59,
   64,
   67,
   72,
   59,
   91,
   74,
   81,
   99,
   101,
   119,
   126,
   147,
   176,
   241,
   245,
   346};
   Double_t _felx3017[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3017[20] = {
   10.1212,
   9.0124,
   9.7138,
   7.8097,
   8.1273,
   8.3119,
   8.6108,
   7.8097,
   9.6617,
   8.7275,
   9.1239,
   10.0712,
   10.04988,
   10.90871,
   11.22497,
   12.12436,
   13.2665,
   15.52417,
   15.65248,
   18.60108};
   Double_t _fehx3017[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3017[20] = {
   9.92,
   8.8105,
   9.513,
   7.6066,
   7.9246,
   8.1094,
   8.4085,
   7.6066,
   9.46,
   8.5253,
   8.9221,
   9.87,
   10.04988,
   10.90871,
   11.22497,
   12.12436,
   13.2665,
   15.52417,
   15.65248,
   18.60108};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-1.2,1.2);
   Graph_Graph3017->SetMinimum(19.84922);
   Graph_Graph3017->SetMaximum(395.9422);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.77#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2438.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.5","F");

   ci = 1486;
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

   ci = 1487;
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

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.9","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.2","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.3","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1421.2","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  268.7","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.6","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 487.8","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 270.2","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 374.2","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 21.4","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_6_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3018[20] = {
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
   Double_t _felx3018[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3018[20] = {
   0.2959341,
   0.3362126,
   0.3301632,
   0.3292783,
   0.2991463,
   0.3117734,
   0.4078519,
   0.2859558,
   0.3132538,
   0.3090048,
   0.2963197,
   0.3124109,
   0.30319,
   0.3342407,
   0.3157741,
   0.3822809,
   0.3186717,
   0.3019707,
   0.3187883,
   0.2414359};
   Double_t _fehx3018[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3018[20] = {
   0.2959341,
   0.3362126,
   0.3301632,
   0.3292783,
   0.2991463,
   0.3117734,
   0.4078519,
   0.2859558,
   0.3132538,
   0.3090048,
   0.2963197,
   0.3124109,
   0.30319,
   0.3342407,
   0.3157741,
   0.3822809,
   0.3186717,
   0.3019707,
   0.3187883,
   0.2414359};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-1.2,1.2);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3019[20] = {
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
   Double_t _felx3019[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3019[20] = {
   0.2305182,
   0.2283093,
   0.2320753,
   0.2362179,
   0.2412437,
   0.2221551,
   0.2360467,
   0.2191591,
   0.2393264,
   0.2446858,
   0.2422298,
   0.2486311,
   0.2676147,
   0.2869773,
   0.2914151,
   0.308194,
   0.2785299,
   0.2692541,
   0.2386035,
   0.2209684};
   Double_t _fehx3019[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3019[20] = {
   0.2305182,
   0.2283093,
   0.2320753,
   0.2362179,
   0.2412437,
   0.2221551,
   0.2360467,
   0.2191591,
   0.2393264,
   0.2446858,
   0.2422298,
   0.2486311,
   0.2676147,
   0.2869773,
   0.2914151,
   0.308194,
   0.2785299,
   0.2692541,
   0.2386035,
   0.2209684};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-1.2,1.2);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3020[20] = {
   0.8251334,
   0.8282204,
   1.015551,
   0.7028821,
   0.8265582,
   0.8076396,
   0.9007269,
   0.6473198,
   0.9459719,
   0.6801651,
   0.6569011,
   0.7616415,
   0.7704076,
   0.7863295,
   0.7552603,
   0.7472024,
   0.7103382,
   0.9092203,
   0.7469252,
   0.7097782};
   Double_t _felx3020[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3020[20] = {
   0.0835134,
   0.09448422,
   0.1072267,
   0.09303895,
   0.1049639,
   0.1001943,
   0.1077219,
   0.0856843,
   0.1004362,
   0.08021812,
   0.07399383,
   0.07748126,
   0.07665843,
   0.07208271,
   0.06728393,
   0.06162821,
   0.05354376,
   0.05856803,
   0.0477193,
   0.03815791};
   Double_t _fehx3020[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3020[20] = {
   0.08185323,
   0.09236754,
   0.1050102,
   0.09061937,
   0.102346,
   0.09775332,
   0.1051911,
   0.08345599,
   0.0983395,
   0.07835961,
   0.07235725,
   0.07593335,
   0.07665843,
   0.07208271,
   0.06728393,
   0.06162821,
   0.05354376,
   0.05856803,
   0.0477193,
   0.03815791};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-1.2,1.2);
   Graph_Graph3020->SetMinimum(0.505743);
   Graph_Graph3020->SetMaximum(1.176454);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_6_pi0_costheta_all",20,-1,1);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
