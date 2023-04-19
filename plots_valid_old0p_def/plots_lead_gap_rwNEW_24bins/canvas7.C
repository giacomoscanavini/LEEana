#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 11:58:36 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
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
   pad1->Range(-13.84615,-11.40221,101.5385,1260.845);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__19->SetBinContent(1,570.1107);
   hmc__19->SetBinContent(2,312.9378);
   hmc__19->SetBinContent(3,281.909);
   hmc__19->SetBinContent(4,243.6101);
   hmc__19->SetBinContent(5,213.4592);
   hmc__19->SetBinContent(6,187.3071);
   hmc__19->SetBinContent(7,152.5876);
   hmc__19->SetBinContent(8,126.3842);
   hmc__19->SetBinContent(9,100.6787);
   hmc__19->SetBinContent(10,88.62439);
   hmc__19->SetBinContent(11,80.96138);
   hmc__19->SetBinContent(12,77.01311);
   hmc__19->SetBinContent(13,55.32803);
   hmc__19->SetBinContent(14,46.24279);
   hmc__19->SetBinContent(15,39.52125);
   hmc__19->SetBinContent(16,29.92436);
   hmc__19->SetBinContent(17,21.59657);
   hmc__19->SetBinContent(18,22.20679);
   hmc__19->SetBinContent(19,23.68991);
   hmc__19->SetBinContent(20,20.2104);
   hmc__19->SetBinContent(21,15.8874);
   hmc__19->SetBinContent(22,13.27938);
   hmc__19->SetBinContent(23,11.59127);
   hmc__19->SetBinContent(24,8.553455);
   hmc__19->SetBinContent(25,99.03355);
   hmc__19->SetBinError(1,180.3661);
   hmc__19->SetBinError(2,121.2236);
   hmc__19->SetBinError(3,106.5928);
   hmc__19->SetBinError(4,97.90096);
   hmc__19->SetBinError(5,81.91939);
   hmc__19->SetBinError(6,69.54174);
   hmc__19->SetBinError(7,57.60221);
   hmc__19->SetBinError(8,47.70511);
   hmc__19->SetBinError(9,40.74768);
   hmc__19->SetBinError(10,37.68395);
   hmc__19->SetBinError(11,30.24226);
   hmc__19->SetBinError(12,29.16386);
   hmc__19->SetBinError(13,22.31227);
   hmc__19->SetBinError(14,21.73407);
   hmc__19->SetBinError(15,26.2421);
   hmc__19->SetBinError(16,14.06365);
   hmc__19->SetBinError(17,9.496545);
   hmc__19->SetBinError(18,11.23135);
   hmc__19->SetBinError(19,11.67792);
   hmc__19->SetBinError(20,13.94231);
   hmc__19->SetBinError(21,12.74688);
   hmc__19->SetBinError(22,7.837205);
   hmc__19->SetBinError(23,8.87703);
   hmc__19->SetBinError(24,8.088298);
   hmc__19->SetBinError(25,34.19267);
   hmc__19->SetMinimum(-11.40221);
   hmc__19->SetMaximum(1197.232);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,0,90);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(598.6163);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,6.659425);
   hbadmatch_stack_1->SetBinContent(2,3.249379);
   hbadmatch_stack_1->SetBinContent(3,3.717914);
   hbadmatch_stack_1->SetBinContent(4,4.661658);
   hbadmatch_stack_1->SetBinContent(5,3.350842);
   hbadmatch_stack_1->SetBinContent(6,2.288105);
   hbadmatch_stack_1->SetBinContent(7,3.183529);
   hbadmatch_stack_1->SetBinContent(8,1.924116);
   hbadmatch_stack_1->SetBinContent(9,2.462568);
   hbadmatch_stack_1->SetBinContent(10,2.753088);
   hbadmatch_stack_1->SetBinContent(11,2.768936);
   hbadmatch_stack_1->SetBinContent(12,3.909649);
   hbadmatch_stack_1->SetBinContent(14,1.286221);
   hbadmatch_stack_1->SetBinContent(15,1.76675);
   hbadmatch_stack_1->SetBinContent(16,1.174717);
   hbadmatch_stack_1->SetBinContent(17,0.5901461);
   hbadmatch_stack_1->SetBinContent(18,1.22488);
   hbadmatch_stack_1->SetBinContent(19,0.5791276);
   hbadmatch_stack_1->SetBinContent(20,1.642413);
   hbadmatch_stack_1->SetBinContent(21,0.9835768);
   hbadmatch_stack_1->SetBinContent(22,0.9286332);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,6.41276);
   hbadmatch_stack_1->SetBinError(1,1.352798);
   hbadmatch_stack_1->SetBinError(2,0.9433345);
   hbadmatch_stack_1->SetBinError(3,0.9622484);
   hbadmatch_stack_1->SetBinError(4,1.105687);
   hbadmatch_stack_1->SetBinError(5,0.9303334);
   hbadmatch_stack_1->SetBinError(6,0.7456077);
   hbadmatch_stack_1->SetBinError(7,0.9138232);
   hbadmatch_stack_1->SetBinError(8,0.7620777);
   hbadmatch_stack_1->SetBinError(9,1.276595);
   hbadmatch_stack_1->SetBinError(10,0.8952328);
   hbadmatch_stack_1->SetBinError(11,1.03808);
   hbadmatch_stack_1->SetBinError(12,2.067189);
   hbadmatch_stack_1->SetBinError(14,0.66147);
   hbadmatch_stack_1->SetBinError(15,0.6393198);
   hbadmatch_stack_1->SetBinError(16,0.615548);
   hbadmatch_stack_1->SetBinError(17,0.340721);
   hbadmatch_stack_1->SetBinError(18,0.5650252);
   hbadmatch_stack_1->SetBinError(19,0.4300419);
   hbadmatch_stack_1->SetBinError(20,0.7752115);
   hbadmatch_stack_1->SetBinError(21,0.4398689);
   hbadmatch_stack_1->SetBinError(22,0.48078);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,1.335839);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,56.07231);
   hext_stack_2->SetBinContent(2,9.133833);
   hext_stack_2->SetBinContent(3,13.28202);
   hext_stack_2->SetBinContent(4,7.862194);
   hext_stack_2->SetBinContent(5,7.455595);
   hext_stack_2->SetBinContent(6,11.0256);
   hext_stack_2->SetBinContent(7,11.24185);
   hext_stack_2->SetBinContent(8,7.090887);
   hext_stack_2->SetBinContent(9,7.119609);
   hext_stack_2->SetBinContent(10,4.435048);
   hext_stack_2->SetBinContent(11,6.049854);
   hext_stack_2->SetBinContent(12,11.59655);
   hext_stack_2->SetBinContent(13,8.534109);
   hext_stack_2->SetBinContent(14,3.565599);
   hext_stack_2->SetBinContent(15,1.78639);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,1.055394);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(19,1.78639);
   hext_stack_2->SetBinContent(20,1.461993);
   hext_stack_2->SetBinContent(22,1.704188);
   hext_stack_2->SetBinContent(23,2.973055);
   hext_stack_2->SetBinContent(24,0.6416141);
   hext_stack_2->SetBinContent(25,11.905);
   hext_stack_2->SetBinError(1,5.359285);
   hext_stack_2->SetBinError(2,2.036605);
   hext_stack_2->SetBinError(3,2.420966);
   hext_stack_2->SetBinError(4,1.805088);
   hext_stack_2->SetBinError(5,1.758699);
   hext_stack_2->SetBinError(6,2.173025);
   hext_stack_2->SetBinError(7,2.288157);
   hext_stack_2->SetBinError(8,1.96435);
   hext_stack_2->SetBinError(9,1.747532);
   hext_stack_2->SetBinError(10,1.533985);
   hext_stack_2->SetBinError(11,1.75513);
   hext_stack_2->SetBinError(12,2.517529);
   hext_stack_2->SetBinError(13,2.160339);
   hext_stack_2->SetBinError(14,1.22225);
   hext_stack_2->SetBinError(15,0.8039566);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.6130171);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(19,0.8039566);
   hext_stack_2->SetBinError(20,0.7356036);
   hext_stack_2->SetBinError(22,0.7656743);
   hext_stack_2->SetBinError(23,1.346105);
   hext_stack_2->SetBinError(24,0.6416141);
   hext_stack_2->SetBinError(25,2.245825);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,2.903982);
   hdirt_stack_3->SetBinContent(2,0.5570828);
   hdirt_stack_3->SetBinContent(3,0.4950385);
   hdirt_stack_3->SetBinContent(4,0.3840755);
   hdirt_stack_3->SetBinContent(5,0.7148321);
   hdirt_stack_3->SetBinContent(6,0.7759784);
   hdirt_stack_3->SetBinContent(7,0.4403464);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.6998254);
   hdirt_stack_3->SetBinContent(12,0.5570828);
   hdirt_stack_3->SetBinContent(14,0.3942141);
   hdirt_stack_3->SetBinContent(15,0.3569671);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(25,2.263315);
   hdirt_stack_3->SetBinError(1,1.197387);
   hdirt_stack_3->SetBinError(2,0.4028472);
   hdirt_stack_3->SetBinError(3,0.2933304);
   hdirt_stack_3->SetBinError(4,0.2742256);
   hdirt_stack_3->SetBinError(5,0.3615969);
   hdirt_stack_3->SetBinError(6,0.458477);
   hdirt_stack_3->SetBinError(7,0.3095757);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.4055767);
   hdirt_stack_3->SetBinError(12,0.4028472);
   hdirt_stack_3->SetBinError(14,0.2804494);
   hdirt_stack_3->SetBinError(15,0.258803);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(25,0.7647694);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,16.12048);
   houtFV_stack_4->SetBinContent(2,4.733057);
   houtFV_stack_4->SetBinContent(3,6.153689);
   houtFV_stack_4->SetBinContent(4,3.894595);
   houtFV_stack_4->SetBinContent(5,8.696477);
   houtFV_stack_4->SetBinContent(6,8.072838);
   houtFV_stack_4->SetBinContent(7,5.271501);
   houtFV_stack_4->SetBinContent(8,5.977857);
   houtFV_stack_4->SetBinContent(9,2.692309);
   houtFV_stack_4->SetBinContent(10,4.7924);
   houtFV_stack_4->SetBinContent(11,4.588223);
   houtFV_stack_4->SetBinContent(12,2.249007);
   houtFV_stack_4->SetBinContent(13,2.199135);
   houtFV_stack_4->SetBinContent(14,2.689456);
   houtFV_stack_4->SetBinContent(15,1.463836);
   houtFV_stack_4->SetBinContent(16,2.567337);
   houtFV_stack_4->SetBinContent(17,0.7319179);
   houtFV_stack_4->SetBinContent(18,1.26543);
   houtFV_stack_4->SetBinContent(19,1.610059);
   houtFV_stack_4->SetBinContent(20,1.316992);
   houtFV_stack_4->SetBinContent(21,0.536893);
   houtFV_stack_4->SetBinContent(22,1.073786);
   houtFV_stack_4->SetBinContent(23,0.3917402);
   houtFV_stack_4->SetBinContent(24,0.7782435);
   houtFV_stack_4->SetBinContent(25,5.204369);
   houtFV_stack_4->SetBinError(1,1.965045);
   houtFV_stack_4->SetBinError(2,1.064913);
   houtFV_stack_4->SetBinError(3,1.287876);
   houtFV_stack_4->SetBinError(4,0.9380744);
   houtFV_stack_4->SetBinError(5,1.481689);
   houtFV_stack_4->SetBinError(6,1.437548);
   houtFV_stack_4->SetBinError(7,1.140405);
   houtFV_stack_4->SetBinError(8,1.292188);
   houtFV_stack_4->SetBinError(9,0.7594556);
   houtFV_stack_4->SetBinError(10,1.047726);
   houtFV_stack_4->SetBinError(11,1.092434);
   houtFV_stack_4->SetBinError(12,0.7341869);
   houtFV_stack_4->SetBinError(13,0.7607114);
   houtFV_stack_4->SetBinError(14,0.7979182);
   houtFV_stack_4->SetBinError(15,0.620407);
   houtFV_stack_4->SetBinError(16,0.8864454);
   houtFV_stack_4->SetBinError(17,0.438694);
   houtFV_stack_4->SetBinError(18,0.5878314);
   houtFV_stack_4->SetBinError(19,0.6468955);
   houtFV_stack_4->SetBinError(20,0.5536755);
   houtFV_stack_4->SetBinError(21,0.3929602);
   houtFV_stack_4->SetBinError(22,0.5557297);
   houtFV_stack_4->SetBinError(23,0.2770047);
   houtFV_stack_4->SetBinError(24,0.4417092);
   houtFV_stack_4->SetBinError(25,1.088276);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.895712);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5151539);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4378204);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1861173);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.27203);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.190162);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.241554);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.812676);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.421908);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9491041);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9904539);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.087772);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9069222);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9484402);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4571013);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.52716);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3269608);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4193552);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3635961);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3531893);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.316066);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3307091);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3610006);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3718002);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.06834073);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,247.5433);
   hNCpi0inFVres_stack_7->SetBinContent(2,161.5983);
   hNCpi0inFVres_stack_7->SetBinContent(3,140.5862);
   hNCpi0inFVres_stack_7->SetBinContent(4,128.5552);
   hNCpi0inFVres_stack_7->SetBinContent(5,105.4702);
   hNCpi0inFVres_stack_7->SetBinContent(6,86.33075);
   hNCpi0inFVres_stack_7->SetBinContent(7,76.20818);
   hNCpi0inFVres_stack_7->SetBinContent(8,57.34105);
   hNCpi0inFVres_stack_7->SetBinContent(9,48.74548);
   hNCpi0inFVres_stack_7->SetBinContent(10,42.24292);
   hNCpi0inFVres_stack_7->SetBinContent(11,35.04637);
   hNCpi0inFVres_stack_7->SetBinContent(12,30.80256);
   hNCpi0inFVres_stack_7->SetBinContent(13,22.84222);
   hNCpi0inFVres_stack_7->SetBinContent(14,19.66128);
   hNCpi0inFVres_stack_7->SetBinContent(15,17.96054);
   hNCpi0inFVres_stack_7->SetBinContent(16,12.70385);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.358334);
   hNCpi0inFVres_stack_7->SetBinContent(18,9.563924);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.05268);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.363313);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.789615);
   hNCpi0inFVres_stack_7->SetBinContent(22,5.229446);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.249866);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.036044);
   hNCpi0inFVres_stack_7->SetBinContent(25,26.03962);
   hNCpi0inFVres_stack_7->SetBinError(1,5.189153);
   hNCpi0inFVres_stack_7->SetBinError(2,4.175704);
   hNCpi0inFVres_stack_7->SetBinError(3,3.869368);
   hNCpi0inFVres_stack_7->SetBinError(4,3.73742);
   hNCpi0inFVres_stack_7->SetBinError(5,3.376113);
   hNCpi0inFVres_stack_7->SetBinError(6,3.010459);
   hNCpi0inFVres_stack_7->SetBinError(7,2.856974);
   hNCpi0inFVres_stack_7->SetBinError(8,2.481528);
   hNCpi0inFVres_stack_7->SetBinError(9,2.273884);
   hNCpi0inFVres_stack_7->SetBinError(10,2.117618);
   hNCpi0inFVres_stack_7->SetBinError(11,1.95486);
   hNCpi0inFVres_stack_7->SetBinError(12,1.844602);
   hNCpi0inFVres_stack_7->SetBinError(13,1.545717);
   hNCpi0inFVres_stack_7->SetBinError(14,1.445841);
   hNCpi0inFVres_stack_7->SetBinError(15,1.408272);
   hNCpi0inFVres_stack_7->SetBinError(16,1.115312);
   hNCpi0inFVres_stack_7->SetBinError(17,1.031398);
   hNCpi0inFVres_stack_7->SetBinError(18,0.9996506);
   hNCpi0inFVres_stack_7->SetBinError(19,1.087871);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9503169);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8560882);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7619119);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5947511);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4635137);
   hNCpi0inFVres_stack_7->SetBinError(25,1.721339);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,52.10045);
   hNCpi0inFVdis_stack_8->SetBinContent(2,25.90892);
   hNCpi0inFVdis_stack_8->SetBinContent(3,24.90234);
   hNCpi0inFVdis_stack_8->SetBinContent(4,25.12423);
   hNCpi0inFVdis_stack_8->SetBinContent(5,19.66028);
   hNCpi0inFVdis_stack_8->SetBinContent(6,17.24243);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.67104);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.71598);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.967398);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.860104);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.161188);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.455222);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.505622);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.290384);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.415106);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.999598);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.28224);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.909994);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.81118);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.8921356);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.54563);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.8350078);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.059208);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.132783);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.293795);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.698061);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.604385);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.701858);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.477484);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.317948);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.056808);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.178902);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9936629);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8321883);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7155928);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8294557);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7807085);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.556433);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6050773);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6049706);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3091135);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4304992);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.412414);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1959638);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3696997);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2526469);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3494035);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6426646);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,69.67871);
   hCCpi0inFV_stack_10->SetBinContent(2,39.90821);
   hCCpi0inFV_stack_10->SetBinContent(3,40.5607);
   hCCpi0inFV_stack_10->SetBinContent(4,33.81225);
   hCCpi0inFV_stack_10->SetBinContent(5,28.00154);
   hCCpi0inFV_stack_10->SetBinContent(6,30.91822);
   hCCpi0inFV_stack_10->SetBinContent(7,22.7527);
   hCCpi0inFV_stack_10->SetBinContent(8,17.31238);
   hCCpi0inFV_stack_10->SetBinContent(9,13.39707);
   hCCpi0inFV_stack_10->SetBinContent(10,12.77171);
   hCCpi0inFV_stack_10->SetBinContent(11,11.46981);
   hCCpi0inFV_stack_10->SetBinContent(12,9.568185);
   hCCpi0inFV_stack_10->SetBinContent(13,6.570572);
   hCCpi0inFV_stack_10->SetBinContent(14,7.721062);
   hCCpi0inFV_stack_10->SetBinContent(15,5.521938);
   hCCpi0inFV_stack_10->SetBinContent(16,4.682207);
   hCCpi0inFV_stack_10->SetBinContent(17,3.08574);
   hCCpi0inFV_stack_10->SetBinContent(18,3.424464);
   hCCpi0inFV_stack_10->SetBinContent(19,2.050601);
   hCCpi0inFV_stack_10->SetBinContent(20,3.174252);
   hCCpi0inFV_stack_10->SetBinContent(21,2.529802);
   hCCpi0inFV_stack_10->SetBinContent(22,0.9785053);
   hCCpi0inFV_stack_10->SetBinContent(23,0.6803553);
   hCCpi0inFV_stack_10->SetBinContent(24,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(25,11.89312);
   hCCpi0inFV_stack_10->SetBinError(1,4.216562);
   hCCpi0inFV_stack_10->SetBinError(2,3.155985);
   hCCpi0inFV_stack_10->SetBinError(3,3.287281);
   hCCpi0inFV_stack_10->SetBinError(4,2.884117);
   hCCpi0inFV_stack_10->SetBinError(5,2.595306);
   hCCpi0inFV_stack_10->SetBinError(6,2.814906);
   hCCpi0inFV_stack_10->SetBinError(7,2.365451);
   hCCpi0inFV_stack_10->SetBinError(8,2.083695);
   hCCpi0inFV_stack_10->SetBinError(9,1.765271);
   hCCpi0inFV_stack_10->SetBinError(10,1.785622);
   hCCpi0inFV_stack_10->SetBinError(11,1.716225);
   hCCpi0inFV_stack_10->SetBinError(12,1.569572);
   hCCpi0inFV_stack_10->SetBinError(13,1.238989);
   hCCpi0inFV_stack_10->SetBinError(14,1.416061);
   hCCpi0inFV_stack_10->SetBinError(15,1.194382);
   hCCpi0inFV_stack_10->SetBinError(16,1.082762);
   hCCpi0inFV_stack_10->SetBinError(17,0.8088057);
   hCCpi0inFV_stack_10->SetBinError(18,0.9643114);
   hCCpi0inFV_stack_10->SetBinError(19,0.7068742);
   hCCpi0inFV_stack_10->SetBinError(20,0.9617822);
   hCCpi0inFV_stack_10->SetBinError(21,0.7838799);
   hCCpi0inFV_stack_10->SetBinError(22,0.4376048);
   hCCpi0inFV_stack_10->SetBinError(23,0.4810838);
   hCCpi0inFV_stack_10->SetBinError(24,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(25,1.768579);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,49.69275);
   hNCinFV_stack_11->SetBinContent(2,28.97927);
   hNCinFV_stack_11->SetBinContent(3,22.8224);
   hNCinFV_stack_11->SetBinContent(4,17.83737);
   hNCinFV_stack_11->SetBinContent(5,16.37522);
   hNCinFV_stack_11->SetBinContent(6,14.07465);
   hNCinFV_stack_11->SetBinContent(7,11.62217);
   hNCinFV_stack_11->SetBinContent(8,9.087926);
   hNCinFV_stack_11->SetBinContent(9,8.551033);
   hNCinFV_stack_11->SetBinContent(10,7.270997);
   hNCinFV_stack_11->SetBinContent(11,9.213401);
   hNCinFV_stack_11->SetBinContent(12,4.985034);
   hNCinFV_stack_11->SetBinContent(13,4.74122);
   hNCinFV_stack_11->SetBinContent(14,2.980925);
   hNCinFV_stack_11->SetBinContent(15,3.414692);
   hNCinFV_stack_11->SetBinContent(16,2.39585);
   hNCinFV_stack_11->SetBinContent(17,2.392469);
   hNCinFV_stack_11->SetBinContent(18,2.892406);
   hNCinFV_stack_11->SetBinContent(19,1.855576);
   hNCinFV_stack_11->SetBinContent(20,2.390778);
   hNCinFV_stack_11->SetBinContent(21,2.145881);
   hNCinFV_stack_11->SetBinContent(22,0.785171);
   hNCinFV_stack_11->SetBinContent(23,0.3934307);
   hNCinFV_stack_11->SetBinContent(24,1.413964);
   hNCinFV_stack_11->SetBinContent(25,12.35747);
   hNCinFV_stack_11->SetBinError(1,3.527088);
   hNCinFV_stack_11->SetBinError(2,2.683718);
   hNCinFV_stack_11->SetBinError(3,2.387748);
   hNCinFV_stack_11->SetBinError(4,2.104569);
   hNCinFV_stack_11->SetBinError(5,2.011211);
   hNCinFV_stack_11->SetBinError(6,1.882798);
   hNCinFV_stack_11->SetBinError(7,1.721787);
   hNCinFV_stack_11->SetBinError(8,1.50736);
   hNCinFV_stack_11->SetBinError(9,1.455238);
   hNCinFV_stack_11->SetBinError(10,1.401727);
   hNCinFV_stack_11->SetBinError(11,1.593895);
   hNCinFV_stack_11->SetBinError(12,1.127887);
   hNCinFV_stack_11->SetBinError(13,1.037199);
   hNCinFV_stack_11->SetBinError(14,0.8552677);
   hNCinFV_stack_11->SetBinError(15,0.9817734);
   hNCinFV_stack_11->SetBinError(16,0.7857345);
   hNCinFV_stack_11->SetBinError(17,0.7848912);
   hNCinFV_stack_11->SetBinError(18,0.7853625);
   hNCinFV_stack_11->SetBinError(19,0.6794384);
   hNCinFV_stack_11->SetBinError(20,0.7844693);
   hNCinFV_stack_11->SetBinError(21,0.785499);
   hNCinFV_stack_11->SetBinError(22,0.3925882);
   hNCinFV_stack_11->SetBinError(23,0.2781975);
   hNCinFV_stack_11->SetBinError(24,0.6515799);
   hNCinFV_stack_11->SetBinError(25,1.777168);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,57.61266);
   hnumuCCinFV_stack_12->SetBinContent(2,34.84222);
   hnumuCCinFV_stack_12->SetBinContent(3,26.37056);
   hnumuCCinFV_stack_12->SetBinContent(4,18.81055);
   hnumuCCinFV_stack_12->SetBinContent(5,21.56151);
   hnumuCCinFV_stack_12->SetBinContent(6,15.29449);
   hnumuCCinFV_stack_12->SetBinContent(7,8.899548);
   hnumuCCinFV_stack_12->SetBinContent(8,12.76336);
   hnumuCCinFV_stack_12->SetBinContent(9,7.584458);
   hnumuCCinFV_stack_12->SetBinContent(10,6.197204);
   hnumuCCinFV_stack_12->SetBinContent(11,4.931633);
   hnumuCCinFV_stack_12->SetBinContent(12,5.849372);
   hnumuCCinFV_stack_12->SetBinContent(13,4.126819);
   hnumuCCinFV_stack_12->SetBinContent(14,4.569952);
   hnumuCCinFV_stack_12->SetBinContent(15,3.305428);
   hnumuCCinFV_stack_12->SetBinContent(16,2.895388);
   hnumuCCinFV_stack_12->SetBinContent(17,3.100327);
   hnumuCCinFV_stack_12->SetBinContent(18,1.322123);
   hnumuCCinFV_stack_12->SetBinContent(19,3.540746);
   hnumuCCinFV_stack_12->SetBinContent(20,1.88482);
   hnumuCCinFV_stack_12->SetBinContent(21,2.105182);
   hnumuCCinFV_stack_12->SetBinContent(22,1.660944);
   hnumuCCinFV_stack_12->SetBinContent(23,2.345908);
   hnumuCCinFV_stack_12->SetBinContent(24,1.599188);
   hnumuCCinFV_stack_12->SetBinContent(25,17.21221);
   hnumuCCinFV_stack_12->SetBinError(1,4.510033);
   hnumuCCinFV_stack_12->SetBinError(2,3.647865);
   hnumuCCinFV_stack_12->SetBinError(3,3.684501);
   hnumuCCinFV_stack_12->SetBinError(4,2.206764);
   hnumuCCinFV_stack_12->SetBinError(5,2.935148);
   hnumuCCinFV_stack_12->SetBinError(6,2.497225);
   hnumuCCinFV_stack_12->SetBinError(7,1.526558);
   hnumuCCinFV_stack_12->SetBinError(8,2.094327);
   hnumuCCinFV_stack_12->SetBinError(9,1.410936);
   hnumuCCinFV_stack_12->SetBinError(10,1.275071);
   hnumuCCinFV_stack_12->SetBinError(11,1.076756);
   hnumuCCinFV_stack_12->SetBinError(12,1.281671);
   hnumuCCinFV_stack_12->SetBinError(13,1.004138);
   hnumuCCinFV_stack_12->SetBinError(14,1.105772);
   hnumuCCinFV_stack_12->SetBinError(15,0.9417225);
   hnumuCCinFV_stack_12->SetBinError(16,0.8729573);
   hnumuCCinFV_stack_12->SetBinError(17,0.9300388);
   hnumuCCinFV_stack_12->SetBinError(18,0.6086926);
   hnumuCCinFV_stack_12->SetBinError(19,1.038377);
   hnumuCCinFV_stack_12->SetBinError(20,0.7365376);
   hnumuCCinFV_stack_12->SetBinError(21,0.7663816);
   hnumuCCinFV_stack_12->SetBinError(22,0.7742255);
   hnumuCCinFV_stack_12->SetBinError(23,0.8584242);
   hnumuCCinFV_stack_12->SetBinError(24,0.7087962);
   hnumuCCinFV_stack_12->SetBinError(25,2.241914);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,7.475195);
   hnueCCinFV_stack_13->SetBinContent(2,1.432998);
   hnueCCinFV_stack_13->SetBinContent(3,1.526145);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.4436897);
   hnueCCinFV_stack_13->SetBinContent(8,0.6106752);
   hnueCCinFV_stack_13->SetBinContent(9,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(12,0.5938826);
   hnueCCinFV_stack_13->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(23,0.2451916);
   hnueCCinFV_stack_13->SetBinContent(25,0.3897057);
   hnueCCinFV_stack_13->SetBinError(1,1.389716);
   hnueCCinFV_stack_13->SetBinError(2,0.7703599);
   hnueCCinFV_stack_13->SetBinError(3,0.6425621);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.3160204);
   hnueCCinFV_stack_13->SetBinError(8,0.4583227);
   hnueCCinFV_stack_13->SetBinError(9,0.3401776);
   hnueCCinFV_stack_13->SetBinError(12,0.4243666);
   hnueCCinFV_stack_13->SetBinError(13,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.1950249);
   hnueCCinFV_stack_13->SetBinError(23,0.2451916);
   hnueCCinFV_stack_13->SetBinError(25,0.3893381);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__20->SetBinContent(1,570.1107);
   hmcerror__20->SetBinContent(2,312.9378);
   hmcerror__20->SetBinContent(3,281.909);
   hmcerror__20->SetBinContent(4,243.6101);
   hmcerror__20->SetBinContent(5,213.4592);
   hmcerror__20->SetBinContent(6,187.3071);
   hmcerror__20->SetBinContent(7,152.5876);
   hmcerror__20->SetBinContent(8,126.3842);
   hmcerror__20->SetBinContent(9,100.6787);
   hmcerror__20->SetBinContent(10,88.62439);
   hmcerror__20->SetBinContent(11,80.96138);
   hmcerror__20->SetBinContent(12,77.01311);
   hmcerror__20->SetBinContent(13,55.32803);
   hmcerror__20->SetBinContent(14,46.24279);
   hmcerror__20->SetBinContent(15,39.52125);
   hmcerror__20->SetBinContent(16,29.92436);
   hmcerror__20->SetBinContent(17,21.59657);
   hmcerror__20->SetBinContent(18,22.20679);
   hmcerror__20->SetBinContent(19,23.68991);
   hmcerror__20->SetBinContent(20,20.2104);
   hmcerror__20->SetBinContent(21,15.8874);
   hmcerror__20->SetBinContent(22,13.27938);
   hmcerror__20->SetBinContent(23,11.59127);
   hmcerror__20->SetBinContent(24,8.553455);
   hmcerror__20->SetBinContent(25,99.03355);
   hmcerror__20->SetBinError(1,180.3661);
   hmcerror__20->SetBinError(2,121.2236);
   hmcerror__20->SetBinError(3,106.5928);
   hmcerror__20->SetBinError(4,97.90096);
   hmcerror__20->SetBinError(5,81.91939);
   hmcerror__20->SetBinError(6,69.54174);
   hmcerror__20->SetBinError(7,57.60221);
   hmcerror__20->SetBinError(8,47.70511);
   hmcerror__20->SetBinError(9,40.74768);
   hmcerror__20->SetBinError(10,37.68395);
   hmcerror__20->SetBinError(11,30.24226);
   hmcerror__20->SetBinError(12,29.16386);
   hmcerror__20->SetBinError(13,22.31227);
   hmcerror__20->SetBinError(14,21.73407);
   hmcerror__20->SetBinError(15,26.2421);
   hmcerror__20->SetBinError(16,14.06365);
   hmcerror__20->SetBinError(17,9.496545);
   hmcerror__20->SetBinError(18,11.23135);
   hmcerror__20->SetBinError(19,11.67792);
   hmcerror__20->SetBinError(20,13.94231);
   hmcerror__20->SetBinError(21,12.74688);
   hmcerror__20->SetBinError(22,7.837205);
   hmcerror__20->SetBinError(23,8.87703);
   hmcerror__20->SetBinError(24,8.088298);
   hmcerror__20->SetBinError(25,34.19267);
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
   
   Double_t _fx3025[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3025[24] = {
   375,
   206,
   224,
   178,
   154,
   138,
   129,
   95,
   67,
   59,
   58,
   66,
   40,
   31,
   28,
   37,
   14,
   22,
   14,
   13,
   14,
   6,
   5,
   3};
   Double_t _felx3025[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3025[24] = {
   19.36492,
   14.3527,
   14.96663,
   13.34166,
   12.40967,
   11.74734,
   11.35782,
   9.8686,
   8.3119,
   7.8097,
   7.7446,
   8.2509,
   6.4604,
   5.7094,
   5.4358,
   6.2203,
   3.9102,
   4.8417,
   3.9102,
   3.77763,
   3.9102,
   2.67925,
   2.48995,
   2.143368};
   Double_t _fehx3025[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3025[24] = {
   19.36492,
   14.3527,
   14.96663,
   13.34166,
   12.40967,
   11.74734,
   11.35782,
   9.667,
   8.1094,
   7.6066,
   7.5415,
   8.0483,
   6.2549,
   5.5017,
   5.2271,
   6.0141,
   3.6898,
   4.6299,
   3.6898,
   3.5552,
   3.6898,
   2.41858,
   2.21064,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,99);
   Graph_Graph3025->SetMinimum(0.7709688);
   Graph_Graph3025->SetMaximum(433.7157);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.1/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1976.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 51.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 176.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 89.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1286.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  241.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 371.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 228.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 253.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3026[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3026[24] = {
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
   Double_t _felx3026[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3026[24] = {
   0.3163703,
   0.3873729,
   0.3781109,
   0.4018755,
   0.3837707,
   0.3712712,
   0.3775027,
   0.377461,
   0.40473,
   0.4252097,
   0.3735393,
   0.3786869,
   0.4032724,
   0.4699991,
   0.6639997,
   0.4699734,
   0.4397247,
   0.505762,
   0.4929492,
   0.6898586,
   0.8023263,
   0.5901785,
   0.7658375,
   0.9456176};
   Double_t _fehx3026[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3026[24] = {
   0.3163703,
   0.3873729,
   0.3781109,
   0.4018755,
   0.3837707,
   0.3712712,
   0.3775027,
   0.377461,
   0.40473,
   0.4252097,
   0.3735393,
   0.3786869,
   0.4032724,
   0.4699991,
   0.6639997,
   0.4699734,
   0.4397247,
   0.505762,
   0.4929492,
   0.6898586,
   0.8023263,
   0.5901785,
   0.7658375,
   0.9456176};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,99);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
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
   
   Double_t _fx3027[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3027[24] = {
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
   Double_t _felx3027[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3027[24] = {
   0.3061306,
   0.3723473,
   0.3622304,
   0.3795356,
   0.3668067,
   0.3467568,
   0.3481174,
   0.3446355,
   0.3398623,
   0.3467725,
   0.3346597,
   0.3071213,
   0.3167612,
   0.310303,
   0.3345639,
   0.3481485,
   0.3179911,
   0.3415345,
   0.2909401,
   0.3042511,
   0.3293524,
   0.3048087,
   0.277668,
   0.3109819};
   Double_t _fehx3027[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3027[24] = {
   0.3061306,
   0.3723473,
   0.3622304,
   0.3795356,
   0.3668067,
   0.3467568,
   0.3481174,
   0.3446355,
   0.3398623,
   0.3467725,
   0.3346597,
   0.3071213,
   0.3167612,
   0.310303,
   0.3345639,
   0.3481485,
   0.3179911,
   0.3415345,
   0.2909401,
   0.3042511,
   0.3293524,
   0.3048087,
   0.277668,
   0.3109819};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,99);
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
   
   Double_t _fx3028[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3028[24] = {
   0.657767,
   0.6582777,
   0.7945827,
   0.7306757,
   0.7214494,
   0.7367579,
   0.8454163,
   0.7516762,
   0.6654835,
   0.665731,
   0.716391,
   0.856997,
   0.7229609,
   0.6703748,
   0.7084797,
   1.236451,
   0.6482512,
   0.9906881,
   0.5909688,
   0.6432333,
   0.8812013,
   0.4518283,
   0.4313591,
   0.3507354};
   Double_t _felx3028[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3028[24] = {
   0.03396694,
   0.04586438,
   0.05309029,
   0.05476646,
   0.05813605,
   0.06271699,
   0.07443475,
   0.07808413,
   0.08255869,
   0.08812134,
   0.09565795,
   0.1071363,
   0.1167654,
   0.1234657,
   0.1375412,
   0.2078675,
   0.1810566,
   0.2180279,
   0.1650576,
   0.1869152,
   0.2461195,
   0.2017602,
   0.2148125,
   0.250585};
   Double_t _fehx3028[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3028[24] = {
   0.03396694,
   0.04586438,
   0.05309029,
   0.05476646,
   0.05813605,
   0.06271699,
   0.07443475,
   0.07648899,
   0.08054734,
   0.08582965,
   0.09314935,
   0.1045056,
   0.1130512,
   0.1189742,
   0.1322605,
   0.2009768,
   0.1708512,
   0.2084903,
   0.155754,
   0.1759095,
   0.2322469,
   0.1821305,
   0.1907159,
   0.2015817};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,99);
   Graph_Graph3028->SetMinimum(0.09013536);
   Graph_Graph3028->SetMaximum(1.571155);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",24,0,90);

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
   TLine *line = new TLine(0,1,90,1);
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
