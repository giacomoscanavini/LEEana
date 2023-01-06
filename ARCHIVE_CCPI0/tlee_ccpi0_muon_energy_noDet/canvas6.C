#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Wed Sep 28 16:54:37 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-3.24,1692.308,358.2758);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hmc__16->SetBinContent(2,9.195059);
   hmc__16->SetBinContent(3,48.10212);
   hmc__16->SetBinContent(4,118.9676);
   hmc__16->SetBinContent(5,159.2596);
   hmc__16->SetBinContent(6,145.356);
   hmc__16->SetBinContent(7,109.4862);
   hmc__16->SetBinContent(8,81.23769);
   hmc__16->SetBinContent(9,60.63019);
   hmc__16->SetBinContent(10,54.55736);
   hmc__16->SetBinContent(11,39.15709);
   hmc__16->SetBinContent(12,26.67232);
   hmc__16->SetBinContent(13,22.21035);
   hmc__16->SetBinContent(14,19.5583);
   hmc__16->SetBinContent(15,14.6876);
   hmc__16->SetBinContent(16,9.264323);
   hmc__16->SetBinContent(17,10.4683);
   hmc__16->SetBinContent(18,6.578205);
   hmc__16->SetBinContent(19,6.503814);
   hmc__16->SetBinContent(20,4.776518);
   hmc__16->SetBinContent(21,3.382437);
   hmc__16->SetBinContent(22,1.855576);
   hmc__16->SetBinContent(23,1.318683);
   hmc__16->SetBinContent(24,0.9303237);
   hmc__16->SetBinContent(25,0.1967154);
   hmc__16->SetBinContent(26,1.417691);
   hmc__16->SetBinError(1,0.3895343);
   hmc__16->SetBinError(2,2.738336);
   hmc__16->SetBinError(3,10.44554);
   hmc__16->SetBinError(4,24.98729);
   hmc__16->SetBinError(5,33.70357);
   hmc__16->SetBinError(6,31.34521);
   hmc__16->SetBinError(7,21.77111);
   hmc__16->SetBinError(8,18.34318);
   hmc__16->SetBinError(9,14.2319);
   hmc__16->SetBinError(10,11.77378);
   hmc__16->SetBinError(11,10.07181);
   hmc__16->SetBinError(12,7.136941);
   hmc__16->SetBinError(13,6.035539);
   hmc__16->SetBinError(14,5.328879);
   hmc__16->SetBinError(15,5.128134);
   hmc__16->SetBinError(16,2.989886);
   hmc__16->SetBinError(17,3.585373);
   hmc__16->SetBinError(18,2.291178);
   hmc__16->SetBinError(19,2.766379);
   hmc__16->SetBinError(20,4.062763);
   hmc__16->SetBinError(21,3.007072);
   hmc__16->SetBinError(22,0.9560268);
   hmc__16->SetBinError(23,0.7812777);
   hmc__16->SetBinError(24,0.7326644);
   hmc__16->SetBinError(25,0.4456518);
   hmc__16->SetBinError(26,0.920156);
   hmc__16->SetMinimum(-3.24);
   hmc__16->SetMaximum(340.2);
   hmc__16->SetEntries(945.7007);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,0,1500);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(167.2226);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(3,0.9798808);
   hbadmatch_stack_1->SetBinContent(4,1.112127);
   hbadmatch_stack_1->SetBinContent(5,2.002419);
   hbadmatch_stack_1->SetBinContent(6,0.536893);
   hbadmatch_stack_1->SetBinContent(7,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,0.1950248);
   hbadmatch_stack_1->SetBinContent(13,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.5298193);
   hbadmatch_stack_1->SetBinError(4,0.5376709);
   hbadmatch_stack_1->SetBinError(5,0.7348366);
   hbadmatch_stack_1->SetBinError(6,0.3929602);
   hbadmatch_stack_1->SetBinError(7,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.1950249);
   hbadmatch_stack_1->SetBinError(13,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,1.461993);
   hext_stack_2->SetBinContent(4,1.137595);
   hext_stack_2->SetBinContent(5,2.103607);
   hext_stack_2->SetBinContent(6,1.37261);
   hext_stack_2->SetBinContent(7,1.861411);
   hext_stack_2->SetBinContent(10,0.7309963);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.7356036);
   hext_stack_2->SetBinError(4,0.6602113);
   hext_stack_2->SetBinError(5,0.9761052);
   hext_stack_2->SetBinError(6,0.8259691);
   hext_stack_2->SetBinError(7,0.9526997);
   hext_stack_2->SetBinError(10,0.5201503);
   hext_stack_2->SetEntries(22);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hdirt_stack_3->SetBinContent(5,0.2544535);
   hdirt_stack_3->SetBinContent(7,0.2574102);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinError(5,0.2544535);
   hdirt_stack_3->SetBinError(7,0.2574102);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetEntries(3);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   houtFV_stack_4->SetBinContent(3,0.3917402);
   houtFV_stack_4->SetBinContent(4,0.9139677);
   houtFV_stack_4->SetBinContent(5,1.512717);
   houtFV_stack_4->SetBinContent(6,0.2448018);
   houtFV_stack_4->SetBinContent(7,0.4975516);
   houtFV_stack_4->SetBinContent(8,0.1950248);
   houtFV_stack_4->SetBinContent(9,0.1950248);
   houtFV_stack_4->SetBinContent(11,0.1967154);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinError(3,0.2770047);
   houtFV_stack_4->SetBinError(4,0.4285151);
   houtFV_stack_4->SetBinError(5,0.6374642);
   houtFV_stack_4->SetBinError(6,0.2448018);
   houtFV_stack_4->SetBinError(7,0.3594432);
   houtFV_stack_4->SetBinError(8,0.1950249);
   houtFV_stack_4->SetBinError(9,0.1950249);
   houtFV_stack_4->SetBinError(11,0.1967154);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetEntries(20);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1588342);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1089254);
   hNCpi0inFVcoh_stack_5->SetEntries(6);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1873612);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1701121);
   hNCpi0inFVqe_stack_6->SetEntries(2);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.518012);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.645185);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.445983);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.611691);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.589863);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.969502);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.02967);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.7489991);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.5581318);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.8483279);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.119213);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.2478436);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1918306);
   hNCpi0inFVres_stack_7->SetBinError(3,0.6345174);
   hNCpi0inFVres_stack_7->SetBinError(4,0.6703894);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6506864);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5797773);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4837338);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3741304);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3106139);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2407401);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3840943);
   hNCpi0inFVres_stack_7->SetBinError(12,0.08429639);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2478436);
   hNCpi0inFVres_stack_7->SetBinError(18,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(20,0.01732447);
   hNCpi0inFVres_stack_7->SetEntries(461);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.2535015);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.524214);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.481266);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.645626);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.579246);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.393915);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.712656);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.63566);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.25791);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1436243);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2504359);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.3702674);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1308975);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.05785787);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.111398);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4068255);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7531854);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6556722);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7480529);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4980599);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6488503);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5025627);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1001333);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.08298634);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1431726);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3702674);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.09425787);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.05785787);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.097318);
   hNCpi0inFVdis_stack_8->SetEntries(335);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,5.435099);
   hCCpi0inFV_stack_10->SetBinContent(3,29.12274);
   hCCpi0inFV_stack_10->SetBinContent(4,81.84857);
   hCCpi0inFV_stack_10->SetBinContent(5,112.6823);
   hCCpi0inFV_stack_10->SetBinContent(6,103.0488);
   hCCpi0inFV_stack_10->SetBinContent(7,76.33136);
   hCCpi0inFV_stack_10->SetBinContent(8,68.66053);
   hCCpi0inFV_stack_10->SetBinContent(9,49.5269);
   hCCpi0inFV_stack_10->SetBinContent(10,44.19821);
   hCCpi0inFV_stack_10->SetBinContent(11,33.42572);
   hCCpi0inFV_stack_10->SetBinContent(12,21.69198);
   hCCpi0inFV_stack_10->SetBinContent(13,18.35833);
   hCCpi0inFV_stack_10->SetBinContent(14,15.81527);
   hCCpi0inFV_stack_10->SetBinContent(15,10.01994);
   hCCpi0inFV_stack_10->SetBinContent(16,7.180788);
   hCCpi0inFV_stack_10->SetBinContent(17,8.49778);
   hCCpi0inFV_stack_10->SetBinContent(18,6.353589);
   hCCpi0inFV_stack_10->SetBinContent(19,5.57349);
   hCCpi0inFV_stack_10->SetBinContent(20,1.467217);
   hCCpi0inFV_stack_10->SetBinContent(21,2.590875);
   hCCpi0inFV_stack_10->SetBinContent(22,1.515398);
   hCCpi0inFV_stack_10->SetBinContent(23,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(24,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(25,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(26,1.123658);
   hCCpi0inFV_stack_10->SetBinError(2,1.145653);
   hCCpi0inFV_stack_10->SetBinError(3,2.69803);
   hCCpi0inFV_stack_10->SetBinError(4,4.576563);
   hCCpi0inFV_stack_10->SetBinError(5,5.390491);
   hCCpi0inFV_stack_10->SetBinError(6,5.117675);
   hCCpi0inFV_stack_10->SetBinError(7,4.38604);
   hCCpi0inFV_stack_10->SetBinError(8,4.140217);
   hCCpi0inFV_stack_10->SetBinError(9,3.560212);
   hCCpi0inFV_stack_10->SetBinError(10,3.337238);
   hCCpi0inFV_stack_10->SetBinError(11,2.884335);
   hCCpi0inFV_stack_10->SetBinError(12,2.33013);
   hCCpi0inFV_stack_10->SetBinError(13,2.106782);
   hCCpi0inFV_stack_10->SetBinError(14,2.019878);
   hCCpi0inFV_stack_10->SetBinError(15,1.582595);
   hCCpi0inFV_stack_10->SetBinError(16,1.359959);
   hCCpi0inFV_stack_10->SetBinError(17,1.468347);
   hCCpi0inFV_stack_10->SetBinError(18,1.240845);
   hCCpi0inFV_stack_10->SetBinError(19,1.177947);
   hCCpi0inFV_stack_10->SetBinError(20,0.6214735);
   hCCpi0inFV_stack_10->SetBinError(21,0.8095761);
   hCCpi0inFV_stack_10->SetBinError(22,0.588146);
   hCCpi0inFV_stack_10->SetBinError(23,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(24,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(25,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(26,0.5188295);
   hCCpi0inFV_stack_10->SetEntries(3003);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(2,0.1950248);
   hNCinFV_stack_11->SetBinContent(3,0.785171);
   hNCinFV_stack_11->SetBinContent(4,2.247316);
   hNCinFV_stack_11->SetBinContent(5,2.642437);
   hNCinFV_stack_11->SetBinContent(6,2.392469);
   hNCinFV_stack_11->SetBinContent(7,0.9303237);
   hNCinFV_stack_11->SetBinContent(8,0.536893);
   hNCinFV_stack_11->SetBinContent(9,0.3401776);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(12,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.1950249);
   hNCinFV_stack_11->SetBinError(3,0.3925882);
   hNCinFV_stack_11->SetBinError(4,0.7337357);
   hNCinFV_stack_11->SetBinError(5,0.7851269);
   hNCinFV_stack_11->SetBinError(6,0.7848912);
   hNCinFV_stack_11->SetBinError(7,0.4814682);
   hNCinFV_stack_11->SetBinError(8,0.3929602);
   hNCinFV_stack_11->SetBinError(9,0.3401776);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(12,0.1967154);
   hNCinFV_stack_11->SetEntries(46);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,2.233501);
   hnumuCCinFV_stack_12->SetBinContent(3,10.60275);
   hnumuCCinFV_stack_12->SetBinContent(4,22.46841);
   hnumuCCinFV_stack_12->SetBinContent(5,29.45816);
   hnumuCCinFV_stack_12->SetBinContent(6,30.0561);
   hnumuCCinFV_stack_12->SetBinContent(7,24.85297);
   hnumuCCinFV_stack_12->SetBinContent(8,9.102918);
   hnumuCCinFV_stack_12->SetBinContent(9,7.850326);
   hnumuCCinFV_stack_12->SetBinContent(10,8.61539);
   hnumuCCinFV_stack_12->SetBinContent(11,4.542697);
   hnumuCCinFV_stack_12->SetBinContent(12,4.41397);
   hnumuCCinFV_stack_12->SetBinContent(13,3.28504);
   hnumuCCinFV_stack_12->SetBinContent(14,3.364295);
   hnumuCCinFV_stack_12->SetBinContent(15,4.639762);
   hnumuCCinFV_stack_12->SetBinContent(16,1.828962);
   hnumuCCinFV_stack_12->SetBinContent(17,1.942624);
   hnumuCCinFV_stack_12->SetBinContent(18,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(19,0.9303237);
   hnumuCCinFV_stack_12->SetBinContent(20,3.291977);
   hnumuCCinFV_stack_12->SetBinContent(21,0.5948468);
   hnumuCCinFV_stack_12->SetBinContent(22,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(26,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(2,0.7754466);
   hnumuCCinFV_stack_12->SetBinError(3,1.67504);
   hnumuCCinFV_stack_12->SetBinError(4,2.453168);
   hnumuCCinFV_stack_12->SetBinError(5,2.937675);
   hnumuCCinFV_stack_12->SetBinError(6,2.739184);
   hnumuCCinFV_stack_12->SetBinError(7,2.979018);
   hnumuCCinFV_stack_12->SetBinError(8,1.510648);
   hnumuCCinFV_stack_12->SetBinError(9,1.772447);
   hnumuCCinFV_stack_12->SetBinError(10,1.716787);
   hnumuCCinFV_stack_12->SetBinError(11,1.076902);
   hnumuCCinFV_stack_12->SetBinError(12,1.051858);
   hnumuCCinFV_stack_12->SetBinError(13,0.9180599);
   hnumuCCinFV_stack_12->SetBinError(14,0.9698353);
   hnumuCCinFV_stack_12->SetBinError(15,2.425536);
   hnumuCCinFV_stack_12->SetBinError(16,0.6752652);
   hnumuCCinFV_stack_12->SetBinError(17,0.6617158);
   hnumuCCinFV_stack_12->SetBinError(18,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(19,0.4814682);
   hnumuCCinFV_stack_12->SetBinError(20,2.410163);
   hnumuCCinFV_stack_12->SetBinError(21,0.3434878);
   hnumuCCinFV_stack_12->SetBinError(22,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(23,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(26,0.1967154);
   hnumuCCinFV_stack_12->SetEntries(711);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(3,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(4,1.268811);
   hnueCCinFV_stack_13->SetBinContent(6,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(7,0.1950248);
   hnueCCinFV_stack_13->SetBinError(2,0.1950249);
   hnueCCinFV_stack_13->SetBinError(3,0.3397478);
   hnueCCinFV_stack_13->SetBinError(4,0.5889569);
   hnueCCinFV_stack_13->SetBinError(6,0.3921167);
   hnueCCinFV_stack_13->SetBinError(7,0.1950249);
   hnueCCinFV_stack_13->SetEntries(12);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);
   hmcerror__17->SetBinContent(2,9.195059);
   hmcerror__17->SetBinContent(3,48.10212);
   hmcerror__17->SetBinContent(4,118.9676);
   hmcerror__17->SetBinContent(5,159.2596);
   hmcerror__17->SetBinContent(6,145.356);
   hmcerror__17->SetBinContent(7,109.4862);
   hmcerror__17->SetBinContent(8,81.23769);
   hmcerror__17->SetBinContent(9,60.63019);
   hmcerror__17->SetBinContent(10,54.55736);
   hmcerror__17->SetBinContent(11,39.15709);
   hmcerror__17->SetBinContent(12,26.67232);
   hmcerror__17->SetBinContent(13,22.21035);
   hmcerror__17->SetBinContent(14,19.5583);
   hmcerror__17->SetBinContent(15,14.6876);
   hmcerror__17->SetBinContent(16,9.264323);
   hmcerror__17->SetBinContent(17,10.4683);
   hmcerror__17->SetBinContent(18,6.578205);
   hmcerror__17->SetBinContent(19,6.503814);
   hmcerror__17->SetBinContent(20,4.776518);
   hmcerror__17->SetBinContent(21,3.382437);
   hmcerror__17->SetBinContent(22,1.855576);
   hmcerror__17->SetBinContent(23,1.318683);
   hmcerror__17->SetBinContent(24,0.9303237);
   hmcerror__17->SetBinContent(25,0.1967154);
   hmcerror__17->SetBinContent(26,1.417691);
   hmcerror__17->SetBinError(1,0.3895343);
   hmcerror__17->SetBinError(2,2.738336);
   hmcerror__17->SetBinError(3,10.44554);
   hmcerror__17->SetBinError(4,24.98729);
   hmcerror__17->SetBinError(5,33.70357);
   hmcerror__17->SetBinError(6,31.34521);
   hmcerror__17->SetBinError(7,21.77111);
   hmcerror__17->SetBinError(8,18.34318);
   hmcerror__17->SetBinError(9,14.2319);
   hmcerror__17->SetBinError(10,11.77378);
   hmcerror__17->SetBinError(11,10.07181);
   hmcerror__17->SetBinError(12,7.136941);
   hmcerror__17->SetBinError(13,6.035539);
   hmcerror__17->SetBinError(14,5.328879);
   hmcerror__17->SetBinError(15,5.128134);
   hmcerror__17->SetBinError(16,2.989886);
   hmcerror__17->SetBinError(17,3.585373);
   hmcerror__17->SetBinError(18,2.291178);
   hmcerror__17->SetBinError(19,2.766379);
   hmcerror__17->SetBinError(20,4.062763);
   hmcerror__17->SetBinError(21,3.007072);
   hmcerror__17->SetBinError(22,0.9560268);
   hmcerror__17->SetBinError(23,0.7812777);
   hmcerror__17->SetBinError(24,0.7326644);
   hmcerror__17->SetBinError(25,0.4456518);
   hmcerror__17->SetBinError(26,0.920156);
   hmcerror__17->SetEntries(945.7007);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[25] = {
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
   Double_t _fy3021[25] = {
   0,
   12,
   42,
   108,
   162,
   143,
   103,
   94,
   64,
   50,
   38,
   34,
   33,
   22,
   12,
   10,
   8,
   6,
   5,
   2,
   5,
   3,
   0,
   0,
   2};
   Double_t _felx3021[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3021[25] = {
   0,
   3.64022,
   6.6155,
   10.3923,
   12.72792,
   11.95826,
   10.14889,
   9.8173,
   8.1273,
   7.2025,
   6.3013,
   5.9703,
   5.8847,
   4.8417,
   3.64022,
   3.34883,
   3.0307,
   2.67925,
   2.48995,
   2,
   2.48995,
   2.143368,
   0,
   0,
   2};
   Double_t _fehx3021[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3021[25] = {
   1.1478,
   3.4155,
   6.4104,
   10.3923,
   12.72792,
   11.95826,
   10.14889,
   9.616,
   7.9246,
   6.9985,
   6.0955,
   5.7635,
   5.6776,
   4.6299,
   3.4155,
   3.1179,
   2.7896,
   2.41858,
   2.21064,
   1.51917,
   2.21064,
   1.72422,
   1.1478,
   1.1478,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1650);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(192.2007);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 958.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.4","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 9.0","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.6","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 4.3","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.2","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.2","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  21.4","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  19.5","F");

   ci = 1506;
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

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 705.4","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 10.5","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 175.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 2.8","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_0p_bnb_12_Emuon_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[25] = {
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
   Double_t _fy3022[25] = {
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
   Double_t _felx3022[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3022[25] = {
   0,
   0.2978052,
   0.2171535,
   0.2100343,
   0.2116266,
   0.2156444,
   0.1988481,
   0.2257964,
   0.234733,
   0.2158056,
   0.2572154,
   0.2675786,
   0.2717444,
   0.2724612,
   0.3491471,
   0.3227312,
   0.342498,
   0.3482984,
   0.4253472,
   0.85057,
   0.8890254,
   0.5152183,
   0.5924682,
   0.7875371,
   2.265465};
   Double_t _fehx3022[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3022[25] = {
   0,
   0.2978052,
   0.2171535,
   0.2100343,
   0.2116266,
   0.2156444,
   0.1988481,
   0.2257964,
   0.234733,
   0.2158056,
   0.2572154,
   0.2675786,
   0.2717444,
   0.2724612,
   0.3491471,
   0.3227312,
   0.342498,
   0.3482984,
   0.4253472,
   0.85057,
   0.8890254,
   0.5152183,
   0.5924682,
   0.7875371,
   2.265465};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1650);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Muon Energy [MeV]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[25] = {
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
   Double_t _fy3023[25] = {
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
   Double_t _felx3023[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3023[25] = {
   0,
   0.2978052,
   0.2171535,
   0.2100343,
   0.2116266,
   0.2156444,
   0.1988481,
   0.2257964,
   0.234733,
   0.2158056,
   0.2572154,
   0.2675786,
   0.2717444,
   0.2724612,
   0.3491471,
   0.3227312,
   0.342498,
   0.3482984,
   0.4253472,
   0.85057,
   0.8890254,
   0.5152183,
   0.5924682,
   0.7875371,
   2.265465};
   Double_t _fehx3023[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3023[25] = {
   0,
   0.2978052,
   0.2171535,
   0.2100343,
   0.2116266,
   0.2156444,
   0.1988481,
   0.2257964,
   0.234733,
   0.2158056,
   0.2572154,
   0.2675786,
   0.2717444,
   0.2724612,
   0.3491471,
   0.3227312,
   0.342498,
   0.3482984,
   0.4253472,
   0.85057,
   0.8890254,
   0.5152183,
   0.5924682,
   0.7875371,
   2.265465};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1650);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[25] = {
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
   Double_t _fy3024[25] = {
   10,
   1.305049,
   0.8731423,
   0.90781,
   1.017207,
   0.9837915,
   0.940758,
   1.157098,
   1.05558,
   0.9164667,
   0.9704501,
   1.27473,
   1.485794,
   1.124842,
   0.8170155,
   1.07941,
   0.7642117,
   0.912103,
   0.7687797,
   0.4187151,
   1.478224,
   1.616749,
   0,
   0,
   10.16697};
   Double_t _felx3024[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fely3024[25] = {
   0,
   0.3958887,
   0.1375303,
   0.08735406,
   0.07991935,
   0.08226878,
   0.09269564,
   0.1208466,
   0.1340471,
   0.132017,
   0.1609236,
   0.2238388,
   0.264953,
   0.2475521,
   0.247843,
   0.3614759,
   0.289512,
   0.407292,
   0.3828446,
   0.4187151,
   0.7361409,
   1.155096,
   0,
   0,
   10.16697};
   Double_t _fehx3024[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
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
   Double_t _fehy3024[25] = {
   0,
   0.3714495,
   0.1332665,
   0.08735406,
   0.07991935,
   0.08226878,
   0.09269564,
   0.1183687,
   0.1307039,
   0.1282778,
   0.1556679,
   0.2160855,
   0.2556285,
   0.236723,
   0.2325431,
   0.3365491,
   0.2664806,
   0.3676657,
   0.339899,
   0.3180497,
   0.6535643,
   0.9292101,
   0.870414,
   1.233764,
   7.722681};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1650);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(19.67862);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","CCpi0_FC_0p_bnb_12_Emuon_all",25,0,1500);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
