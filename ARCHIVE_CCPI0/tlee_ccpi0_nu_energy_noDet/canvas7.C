#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Wed Sep 28 17:41:26 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",242,172,1200,900);
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
   pad1->Range(-384.6154,-4.440906,2820.513,491.0707);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hmc__19->SetBinContent(4,0.3917402);
   hmc__19->SetBinContent(5,10.48276);
   hmc__19->SetBinContent(6,46.92827);
   hmc__19->SetBinContent(7,106.0331);
   hmc__19->SetBinContent(8,164.5324);
   hmc__19->SetBinContent(9,207.7106);
   hmc__19->SetBinContent(10,222.0453);
   hmc__19->SetBinContent(11,208.8904);
   hmc__19->SetBinContent(12,182.0114);
   hmc__19->SetBinContent(13,166.2881);
   hmc__19->SetBinContent(14,130.6154);
   hmc__19->SetBinContent(15,84.98544);
   hmc__19->SetBinContent(16,67.35194);
   hmc__19->SetBinContent(17,43.17045);
   hmc__19->SetBinContent(18,34.20695);
   hmc__19->SetBinContent(19,31.61965);
   hmc__19->SetBinContent(20,11.54054);
   hmc__19->SetBinContent(21,8.157116);
   hmc__19->SetBinContent(22,8.774618);
   hmc__19->SetBinContent(23,5.384393);
   hmc__19->SetBinContent(24,4.591603);
   hmc__19->SetBinContent(25,2.81549);
   hmc__19->SetBinContent(26,12.18175);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,0.3895343);
   hmc__19->SetBinError(3,0.3895343);
   hmc__19->SetBinError(4,0.5266023);
   hmc__19->SetBinError(5,4.298856);
   hmc__19->SetBinError(6,12.04657);
   hmc__19->SetBinError(7,31.3956);
   hmc__19->SetBinError(8,43.45547);
   hmc__19->SetBinError(9,56.30785);
   hmc__19->SetBinError(10,57.89938);
   hmc__19->SetBinError(11,52.06161);
   hmc__19->SetBinError(12,44.76793);
   hmc__19->SetBinError(13,39.4002);
   hmc__19->SetBinError(14,32.21404);
   hmc__19->SetBinError(15,22.21442);
   hmc__19->SetBinError(16,18.38997);
   hmc__19->SetBinError(17,11.35236);
   hmc__19->SetBinError(18,8.787998);
   hmc__19->SetBinError(19,9.00834);
   hmc__19->SetBinError(20,3.5035);
   hmc__19->SetBinError(21,2.515454);
   hmc__19->SetBinError(22,2.460422);
   hmc__19->SetBinError(23,2.042986);
   hmc__19->SetBinError(24,1.69446);
   hmc__19->SetBinError(25,1.168837);
   hmc__19->SetBinError(26,2.987502);
   hmc__19->SetMinimum(-4.440906);
   hmc__19->SetMaximum(466.2951);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,0,2500);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(233.1476);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hbadmatch_stack_1->SetBinContent(7,0.536893);
   hbadmatch_stack_1->SetBinContent(8,0.7688919);
   hbadmatch_stack_1->SetBinContent(9,0.9303237);
   hbadmatch_stack_1->SetBinContent(10,1.173602);
   hbadmatch_stack_1->SetBinContent(11,1.178516);
   hbadmatch_stack_1->SetBinContent(12,0.5901461);
   hbadmatch_stack_1->SetBinContent(13,0.536893);
   hbadmatch_stack_1->SetBinContent(14,0.7319179);
   hbadmatch_stack_1->SetBinContent(15,1.268811);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.7386202);
   hbadmatch_stack_1->SetBinContent(18,0.5867651);
   hbadmatch_stack_1->SetBinContent(19,0.8770706);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinError(7,0.3929602);
   hbadmatch_stack_1->SetBinError(8,0.4563346);
   hbadmatch_stack_1->SetBinError(9,0.4814682);
   hbadmatch_stack_1->SetBinError(10,0.5398962);
   hbadmatch_stack_1->SetBinError(11,0.5406829);
   hbadmatch_stack_1->SetBinError(12,0.340721);
   hbadmatch_stack_1->SetBinError(13,0.3929602);
   hbadmatch_stack_1->SetBinError(14,0.438694);
   hbadmatch_stack_1->SetBinError(15,0.5889569);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.5524716);
   hbadmatch_stack_1->SetBinError(18,0.3387718);
   hbadmatch_stack_1->SetBinError(19,0.5197486);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hext_stack_2->SetBinContent(7,0.3243973);
   hext_stack_2->SetBinContent(8,2.566457);
   hext_stack_2->SetBinContent(10,2.435184);
   hext_stack_2->SetBinContent(11,0.973192);
   hext_stack_2->SetBinContent(12,0.3243973);
   hext_stack_2->SetBinContent(13,1.697008);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinContent(18,2.890854);
   hext_stack_2->SetBinContent(19,0.7309963);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinError(7,0.3243973);
   hext_stack_2->SetBinError(8,1.283228);
   hext_stack_2->SetBinError(10,0.9256422);
   hext_stack_2->SetBinError(11,0.5618727);
   hext_stack_2->SetBinError(12,0.3243973);
   hext_stack_2->SetBinError(13,0.8873887);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(16,0.4065989);
   hext_stack_2->SetBinError(18,1.323597);
   hext_stack_2->SetBinError(19,0.5201503);
   hext_stack_2->SetBinError(22,0.3243973);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   houtFV_stack_4->SetBinContent(7,0.3401776);
   houtFV_stack_4->SetBinContent(8,0.5352025);
   houtFV_stack_4->SetBinContent(9,0.3401776);
   houtFV_stack_4->SetBinContent(11,0.3917402);
   houtFV_stack_4->SetBinContent(12,0.8753801);
   houtFV_stack_4->SetBinContent(13,0.6453016);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinError(7,0.3401776);
   houtFV_stack_4->SetBinError(8,0.3921167);
   houtFV_stack_4->SetBinError(9,0.3401776);
   houtFV_stack_4->SetBinError(11,0.2770047);
   houtFV_stack_4->SetBinError(12,0.5191111);
   houtFV_stack_4->SetBinError(13,0.3757964);
   houtFV_stack_4->SetBinError(15,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1021583);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVres_stack_7->SetBinContent(5,0.152043);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.394304);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.258375);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.105339);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.232678);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.376289);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.356224);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.890516);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.804018);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.515765);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.297259);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.573871);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.3526663);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.4359395);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.2155215);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1597216);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.2512681);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(5,0.08460498);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3060974);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4396237);
   hNCpi0inFVres_stack_7->SetBinError(8,0.468356);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4662343);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7135568);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7337363);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6295128);
   hNCpi0inFVres_stack_7->SetBinError(13,0.8936923);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8991688);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5049797);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7356331);
   hNCpi0inFVres_stack_7->SetBinError(17,0.143225);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2335409);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1196615);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1129693);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1994106);
   hNCpi0inFVres_stack_7->SetBinError(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(23,0.02789998);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.3020863);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.396376);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.819432);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.774484);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.488983);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.728126);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.885919);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.997535);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.716755);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.043882);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6752073);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.5051695);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.302255);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.9810082);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.7808721);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.2647179);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.362868);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1341685);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3174131);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4362641);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3903628);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6643287);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6580241);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5822299);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7964508);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8108052);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4995174);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2103569);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.226897);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.639949);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3912381);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3174996);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.118917);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2070706);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hCCpi0inFV_stack_10->SetBinContent(4,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(5,7.258894);
   hCCpi0inFV_stack_10->SetBinContent(6,35.14458);
   hCCpi0inFV_stack_10->SetBinContent(7,85.49802);
   hCCpi0inFV_stack_10->SetBinContent(8,131.181);
   hCCpi0inFV_stack_10->SetBinContent(9,175.4236);
   hCCpi0inFV_stack_10->SetBinContent(10,184.9456);
   hCCpi0inFV_stack_10->SetBinContent(11,176.0924);
   hCCpi0inFV_stack_10->SetBinContent(12,148.7797);
   hCCpi0inFV_stack_10->SetBinContent(13,130.9289);
   hCCpi0inFV_stack_10->SetBinContent(14,108.4258);
   hCCpi0inFV_stack_10->SetBinContent(15,69.0805);
   hCCpi0inFV_stack_10->SetBinContent(16,54.97581);
   hCCpi0inFV_stack_10->SetBinContent(17,36.25047);
   hCCpi0inFV_stack_10->SetBinContent(18,26.35208);
   hCCpi0inFV_stack_10->SetBinContent(19,25.3488);
   hCCpi0inFV_stack_10->SetBinContent(20,9.233079);
   hCCpi0inFV_stack_10->SetBinContent(21,6.108692);
   hCCpi0inFV_stack_10->SetBinContent(22,7.13707);
   hCCpi0inFV_stack_10->SetBinContent(23,4.39996);
   hCCpi0inFV_stack_10->SetBinContent(24,3.374355);
   hCCpi0inFV_stack_10->SetBinContent(25,2.447412);
   hCCpi0inFV_stack_10->SetBinContent(26,9.715029);
   hCCpi0inFV_stack_10->SetBinError(4,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(5,1.381296);
   hCCpi0inFV_stack_10->SetBinError(6,2.954743);
   hCCpi0inFV_stack_10->SetBinError(7,4.578041);
   hCCpi0inFV_stack_10->SetBinError(8,5.759595);
   hCCpi0inFV_stack_10->SetBinError(9,6.644595);
   hCCpi0inFV_stack_10->SetBinError(10,6.822935);
   hCCpi0inFV_stack_10->SetBinError(11,6.658545);
   hCCpi0inFV_stack_10->SetBinError(12,6.12382);
   hCCpi0inFV_stack_10->SetBinError(13,5.732613);
   hCCpi0inFV_stack_10->SetBinError(14,5.213457);
   hCCpi0inFV_stack_10->SetBinError(15,4.209729);
   hCCpi0inFV_stack_10->SetBinError(16,3.815222);
   hCCpi0inFV_stack_10->SetBinError(17,3.037828);
   hCCpi0inFV_stack_10->SetBinError(18,2.541);
   hCCpi0inFV_stack_10->SetBinError(19,2.566919);
   hCCpi0inFV_stack_10->SetBinError(20,1.532912);
   hCCpi0inFV_stack_10->SetBinError(21,1.241497);
   hCCpi0inFV_stack_10->SetBinError(22,1.301215);
   hCCpi0inFV_stack_10->SetBinError(23,1.076116);
   hCCpi0inFV_stack_10->SetBinError(24,0.8993757);
   hCCpi0inFV_stack_10->SetBinError(25,0.7605193);
   hCCpi0inFV_stack_10->SetBinError(26,1.594335);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCinFV_stack_11->SetBinContent(6,1.462145);
   hNCinFV_stack_11->SetBinContent(7,1.660551);
   hNCinFV_stack_11->SetBinContent(8,2.784209);
   hNCinFV_stack_11->SetBinContent(9,2.390778);
   hNCinFV_stack_11->SetBinContent(10,1.073786);
   hNCinFV_stack_11->SetBinContent(11,1.127039);
   hNCinFV_stack_11->SetBinContent(12,1.217248);
   hNCinFV_stack_11->SetBinContent(13,1.375317);
   hNCinFV_stack_11->SetBinContent(14,1.073786);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(16,0.3917402);
   hNCinFV_stack_11->SetBinContent(17,1.073786);
   hNCinFV_stack_11->SetBinContent(18,0.1967154);
   hNCinFV_stack_11->SetBinContent(20,0.1950248);
   hNCinFV_stack_11->SetBinContent(21,0.5884556);
   hNCinFV_stack_11->SetBinContent(24,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,0.3401776);
   hNCinFV_stack_11->SetBinError(6,0.6198731);
   hNCinFV_stack_11->SetBinError(7,0.650847);
   hNCinFV_stack_11->SetBinError(8,0.8323376);
   hNCinFV_stack_11->SetBinError(9,0.7844693);
   hNCinFV_stack_11->SetBinError(10,0.5557297);
   hNCinFV_stack_11->SetBinError(11,0.5201044);
   hNCinFV_stack_11->SetBinError(12,0.6211758);
   hNCinFV_stack_11->SetBinError(13,0.5198233);
   hNCinFV_stack_11->SetBinError(14,0.5557297);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(16,0.2770047);
   hNCinFV_stack_11->SetBinError(17,0.5557297);
   hNCinFV_stack_11->SetBinError(18,0.1967154);
   hNCinFV_stack_11->SetBinError(20,0.1950249);
   hNCinFV_stack_11->SetBinError(21,0.3397478);
   hNCinFV_stack_11->SetBinError(24,0.3401776);
   hNCinFV_stack_11->SetBinError(26,0.3401776);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hnumuCCinFV_stack_12->SetBinContent(4,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(5,3.071818);
   hnumuCCinFV_stack_12->SetBinContent(6,8.625152);
   hnumuCCinFV_stack_12->SetBinContent(7,13.67814);
   hnumuCCinFV_stack_12->SetBinContent(8,21.40382);
   hnumuCCinFV_stack_12->SetBinContent(9,23.42184);
   hnumuCCinFV_stack_12->SetBinContent(10,24.25297);
   hnumuCCinFV_stack_12->SetBinContent(11,21.04312);
   hnumuCCinFV_stack_12->SetBinContent(12,23.10787);
   hnumuCCinFV_stack_12->SetBinContent(13,23.30315);
   hnumuCCinFV_stack_12->SetBinContent(14,11.95165);
   hnumuCCinFV_stack_12->SetBinContent(15,9.758095);
   hnumuCCinFV_stack_12->SetBinContent(16,8.935278);
   hnumuCCinFV_stack_12->SetBinContent(17,3.712842);
   hnumuCCinFV_stack_12->SetBinContent(18,2.442341);
   hnumuCCinFV_stack_12->SetBinContent(19,3.126077);
   hnumuCCinFV_stack_12->SetBinContent(20,0.5867651);
   hnumuCCinFV_stack_12->SetBinContent(21,1.1529);
   hnumuCCinFV_stack_12->SetBinContent(22,1.020533);
   hnumuCCinFV_stack_12->SetBinContent(23,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(24,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(25,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(26,1.566961);
   hnumuCCinFV_stack_12->SetBinError(4,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(5,0.9162411);
   hnumuCCinFV_stack_12->SetBinError(6,1.859905);
   hnumuCCinFV_stack_12->SetBinError(7,1.976949);
   hnumuCCinFV_stack_12->SetBinError(8,2.440107);
   hnumuCCinFV_stack_12->SetBinError(9,2.4482);
   hnumuCCinFV_stack_12->SetBinError(10,2.494649);
   hnumuCCinFV_stack_12->SetBinError(11,2.358991);
   hnumuCCinFV_stack_12->SetBinError(12,2.40704);
   hnumuCCinFV_stack_12->SetBinError(13,2.496261);
   hnumuCCinFV_stack_12->SetBinError(14,1.773675);
   hnumuCCinFV_stack_12->SetBinError(15,1.619204);
   hnumuCCinFV_stack_12->SetBinError(16,1.584658);
   hnumuCCinFV_stack_12->SetBinError(17,0.9612155);
   hnumuCCinFV_stack_12->SetBinError(18,0.759212);
   hnumuCCinFV_stack_12->SetBinError(19,0.8995382);
   hnumuCCinFV_stack_12->SetBinError(20,0.3387718);
   hnumuCCinFV_stack_12->SetBinError(21,0.5384552);
   hnumuCCinFV_stack_12->SetBinError(22,0.5892049);
   hnumuCCinFV_stack_12->SetBinError(23,0.48078);
   hnumuCCinFV_stack_12->SetBinError(24,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(25,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(26,0.5540095);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(8,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(14,0.8753801);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.536893);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(20,0.5850745);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(8,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.3401776);
   hnueCCinFV_stack_13->SetBinError(14,0.5191111);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.3929602);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(20,0.337793);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);
   hmcerror__20->SetBinContent(4,0.3917402);
   hmcerror__20->SetBinContent(5,10.48276);
   hmcerror__20->SetBinContent(6,46.92827);
   hmcerror__20->SetBinContent(7,106.0331);
   hmcerror__20->SetBinContent(8,164.5324);
   hmcerror__20->SetBinContent(9,207.7106);
   hmcerror__20->SetBinContent(10,222.0453);
   hmcerror__20->SetBinContent(11,208.8904);
   hmcerror__20->SetBinContent(12,182.0114);
   hmcerror__20->SetBinContent(13,166.2881);
   hmcerror__20->SetBinContent(14,130.6154);
   hmcerror__20->SetBinContent(15,84.98544);
   hmcerror__20->SetBinContent(16,67.35194);
   hmcerror__20->SetBinContent(17,43.17045);
   hmcerror__20->SetBinContent(18,34.20695);
   hmcerror__20->SetBinContent(19,31.61965);
   hmcerror__20->SetBinContent(20,11.54054);
   hmcerror__20->SetBinContent(21,8.157116);
   hmcerror__20->SetBinContent(22,8.774618);
   hmcerror__20->SetBinContent(23,5.384393);
   hmcerror__20->SetBinContent(24,4.591603);
   hmcerror__20->SetBinContent(25,2.81549);
   hmcerror__20->SetBinContent(26,12.18175);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,0.3895343);
   hmcerror__20->SetBinError(3,0.3895343);
   hmcerror__20->SetBinError(4,0.5266023);
   hmcerror__20->SetBinError(5,4.298856);
   hmcerror__20->SetBinError(6,12.04657);
   hmcerror__20->SetBinError(7,31.3956);
   hmcerror__20->SetBinError(8,43.45547);
   hmcerror__20->SetBinError(9,56.30785);
   hmcerror__20->SetBinError(10,57.89938);
   hmcerror__20->SetBinError(11,52.06161);
   hmcerror__20->SetBinError(12,44.76793);
   hmcerror__20->SetBinError(13,39.4002);
   hmcerror__20->SetBinError(14,32.21404);
   hmcerror__20->SetBinError(15,22.21442);
   hmcerror__20->SetBinError(16,18.38997);
   hmcerror__20->SetBinError(17,11.35236);
   hmcerror__20->SetBinError(18,8.787998);
   hmcerror__20->SetBinError(19,9.00834);
   hmcerror__20->SetBinError(20,3.5035);
   hmcerror__20->SetBinError(21,2.515454);
   hmcerror__20->SetBinError(22,2.460422);
   hmcerror__20->SetBinError(23,2.042986);
   hmcerror__20->SetBinError(24,1.69446);
   hmcerror__20->SetBinError(25,1.168837);
   hmcerror__20->SetBinError(26,2.987502);
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3025[25] = {
   0,
   0,
   0,
   0,
   7,
   48,
   107,
   162,
   196,
   208,
   203,
   170,
   111,
   108,
   55,
   56,
   30,
   15,
   18,
   13,
   5,
   7,
   1,
   1,
   2};
   Double_t _felx3025[25] = {
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
   50,
   50,
   50};
   Double_t _fely3025[25] = {
   0,
   0,
   0,
   0,
   2.85954,
   7.0604,
   10.34408,
   12.72792,
   14,
   14.42221,
   14.24781,
   13.0384,
   10.53565,
   10.3923,
   7.546,
   7.6127,
   5.6197,
   4.0385,
   4.4008,
   3.77763,
   2.48995,
   2.85954,
   1,
   1,
   2};
   Double_t _fehx3025[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3025[25] = {
   1.1478,
   1.1478,
   1.1478,
   1.1478,
   2.61053,
   6.8561,
   10.34408,
   12.72792,
   14,
   14.42221,
   14.24781,
   13.0384,
   10.53565,
   10.3923,
   7.3425,
   7.4094,
   5.4117,
   3.8197,
   4.1858,
   3.5552,
   2.21064,
   2.61053,
   1.35971,
   1.35971,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,2750);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(244.6644);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1523.0","lp");
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  29.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1428.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 17.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 206.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.9","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_Np_bnb_12_cc_nu_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-385,-0.5333333,2823.333,2.133333);
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
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
   50,
   50,
   50};
   Double_t _fely3026[25] = {
   0,
   0,
   0,
   1.344264,
   0.4100884,
   0.2567018,
   0.2960924,
   0.2641149,
   0.2710879,
   0.2607548,
   0.2492294,
   0.2459623,
   0.2369393,
   0.2466327,
   0.2613909,
   0.2730429,
   0.2629661,
   0.2569068,
   0.2848969,
   0.303582,
   0.3083755,
   0.2804022,
   0.3794273,
   0.3690345,
   0.4151452};
   Double_t _fehx3026[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3026[25] = {
   0,
   0,
   0,
   1.344264,
   0.4100884,
   0.2567018,
   0.2960924,
   0.2641149,
   0.2710879,
   0.2607548,
   0.2492294,
   0.2459623,
   0.2369393,
   0.2466327,
   0.2613909,
   0.2730429,
   0.2629661,
   0.2569068,
   0.2848969,
   0.303582,
   0.3083755,
   0.2804022,
   0.3794273,
   0.3690345,
   0.4151452};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,2750);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Neutrino Energy [MeV]");
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
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
   50,
   50,
   50};
   Double_t _fely3027[25] = {
   0,
   0,
   0,
   1.344264,
   0.4100884,
   0.2567018,
   0.2960924,
   0.2641149,
   0.2710879,
   0.2607548,
   0.2492294,
   0.2459623,
   0.2369393,
   0.2466327,
   0.2613909,
   0.2730429,
   0.2629661,
   0.2569068,
   0.2848969,
   0.303582,
   0.3083755,
   0.2804022,
   0.3794273,
   0.3690345,
   0.4151452};
   Double_t _fehx3027[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3027[25] = {
   0,
   0,
   0,
   1.344264,
   0.4100884,
   0.2567018,
   0.2960924,
   0.2641149,
   0.2710879,
   0.2607548,
   0.2492294,
   0.2459623,
   0.2369393,
   0.2466327,
   0.2613909,
   0.2730429,
   0.2629661,
   0.2569068,
   0.2848969,
   0.303582,
   0.3083755,
   0.2804022,
   0.3794273,
   0.3690345,
   0.4151452};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,2750);
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3028[25] = {
   10,
   10,
   10,
   0,
   0.6677633,
   1.022838,
   1.009119,
   0.9846084,
   0.9436204,
   0.9367458,
   0.9718016,
   0.9340076,
   0.667516,
   0.8268548,
   0.6471697,
   0.8314534,
   0.6949198,
   0.4385074,
   0.5692663,
   1.126464,
   0.6129617,
   0.7977555,
   0.185722,
   0.2177889,
   0.7103559};
   Double_t _felx3028[25] = {
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
   50,
   50,
   50};
   Double_t _fely3028[25] = {
   0,
   0,
   0,
   0,
   0.2727851,
   0.1504509,
   0.09755519,
   0.07735814,
   0.06740146,
   0.06495164,
   0.0682071,
   0.07163511,
   0.06335782,
   0.07956414,
   0.08879168,
   0.1130287,
   0.1301747,
   0.1180608,
   0.1391793,
   0.3273357,
   0.3052488,
   0.3258877,
   0.185722,
   0.2177889,
   0.7103559};
   Double_t _fehx3028[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3028[25] = {
   0,
   0,
   0,
   2.930003,
   0.2490309,
   0.1460974,
   0.09755519,
   0.07735814,
   0.06740146,
   0.06495164,
   0.0682071,
   0.07163511,
   0.06335782,
   0.07956414,
   0.08639715,
   0.1100102,
   0.1253566,
   0.1116644,
   0.1323797,
   0.3080619,
   0.2710075,
   0.2975092,
   0.252528,
   0.2961297,
   0.5395757};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,2750);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(11);
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
   
   TH1F *hist__21 = new TH1F("hist__21","CCpi0_FC_Np_bnb_12_cc_nu_energy_all",25,0,2500);

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
   TLine *line = new TLine(0,1,2500,1);
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
