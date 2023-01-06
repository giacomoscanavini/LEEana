#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Wed Sep 28 15:03:37 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
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
   pad1->Range(-276.9231,-3.56,2030.769,393.6611);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmc__16->SetBinContent(0,0.01732447);
   hmc__16->SetBinContent(1,2.187942);
   hmc__16->SetBinContent(2,28.9329);
   hmc__16->SetBinContent(3,82.53091);
   hmc__16->SetBinContent(4,134.2656);
   hmc__16->SetBinContent(5,138.8888);
   hmc__16->SetBinContent(6,120.0153);
   hmc__16->SetBinContent(7,113.2985);
   hmc__16->SetBinContent(8,86.52381);
   hmc__16->SetBinContent(9,61.41406);
   hmc__16->SetBinContent(10,45.68328);
   hmc__16->SetBinContent(11,39.38047);
   hmc__16->SetBinContent(12,26.02594);
   hmc__16->SetBinContent(13,21.02528);
   hmc__16->SetBinContent(14,17.23405);
   hmc__16->SetBinContent(15,10.73829);
   hmc__16->SetBinContent(16,8.515837);
   hmc__16->SetBinContent(17,4.743835);
   hmc__16->SetBinContent(18,3.467945);
   hmc__16->SetBinContent(19,3.010515);
   hmc__16->SetBinContent(20,2.223654);
   hmc__16->SetBinContent(21,5.645777);
   hmc__16->SetBinError(0,0.01732447);
   hmc__16->SetBinError(1,5.534287);
   hmc__16->SetBinError(2,15.90083);
   hmc__16->SetBinError(3,36.18312);
   hmc__16->SetBinError(4,53.23899);
   hmc__16->SetBinError(5,58.92432);
   hmc__16->SetBinError(6,45.01989);
   hmc__16->SetBinError(7,46.95995);
   hmc__16->SetBinError(8,36.79939);
   hmc__16->SetBinError(9,34.49844);
   hmc__16->SetBinError(10,29.43262);
   hmc__16->SetBinError(11,22.94142);
   hmc__16->SetBinError(12,22.38998);
   hmc__16->SetBinError(13,15.70544);
   hmc__16->SetBinError(14,15.06502);
   hmc__16->SetBinError(15,14.41491);
   hmc__16->SetBinError(16,10.70114);
   hmc__16->SetBinError(17,5.755248);
   hmc__16->SetBinError(18,5.667806);
   hmc__16->SetBinError(19,5.991276);
   hmc__16->SetBinError(20,8.077861);
   hmc__16->SetBinError(21,6.057175);
   hmc__16->SetMinimum(-3.56);
   hmc__16->SetMaximum(373.8);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,0,1800);
   hs6_stack_6->SetMinimum(-8.622479e-09);
   hs6_stack_6->SetMaximum(145.8332);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hbadmatch_stack_1->SetBinContent(2,0.7882675);
   hbadmatch_stack_1->SetBinContent(3,0.6803553);
   hbadmatch_stack_1->SetBinContent(4,0.1028101);
   hbadmatch_stack_1->SetBinContent(5,0.936512);
   hbadmatch_stack_1->SetBinContent(6,1.125349);
   hbadmatch_stack_1->SetBinContent(8,0.5901461);
   hbadmatch_stack_1->SetBinContent(9,0.3401776);
   hbadmatch_stack_1->SetBinContent(10,0.1950248);
   hbadmatch_stack_1->SetBinContent(14,2.336188e-18);
   hbadmatch_stack_1->SetBinContent(15,0.1209555);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.4830009);
   hbadmatch_stack_1->SetBinError(3,0.4810838);
   hbadmatch_stack_1->SetBinError(4,0.1028101);
   hbadmatch_stack_1->SetBinError(5,0.4840295);
   hbadmatch_stack_1->SetBinError(6,0.5194673);
   hbadmatch_stack_1->SetBinError(8,0.340721);
   hbadmatch_stack_1->SetBinError(9,0.3401776);
   hbadmatch_stack_1->SetBinError(10,0.1950249);
   hbadmatch_stack_1->SetBinError(14,2.336188e-18);
   hbadmatch_stack_1->SetBinError(15,0.1209556);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hext_stack_2->SetBinContent(2,0.7309963);
   hext_stack_2->SetBinContent(3,0.6487947);
   hext_stack_2->SetBinContent(4,1.779209);
   hext_stack_2->SetBinContent(5,1.544194);
   hext_stack_2->SetBinContent(6,0.8131978);
   hext_stack_2->SetBinContent(7,0.9660115);
   hext_stack_2->SetBinContent(8,1.454812);
   hext_stack_2->SetBinContent(9,0.4065989);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinError(2,0.5201503);
   hext_stack_2->SetBinError(3,0.4587671);
   hext_stack_2->SetBinError(4,0.9206235);
   hext_stack_2->SetBinError(5,0.7753719);
   hext_stack_2->SetBinError(6,0.5750177);
   hext_stack_2->SetBinError(7,0.7189592);
   hext_stack_2->SetBinError(8,0.8615765);
   hext_stack_2->SetBinError(9,0.4065989);
   hext_stack_2->SetBinError(14,0.4587671);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hdirt_stack_3->SetBinContent(4,0.2544535);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2574102);
   hdirt_stack_3->SetBinError(4,0.2544535);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2574102);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   houtFV_stack_4->SetBinContent(2,0.2448018);
   houtFV_stack_4->SetBinContent(3,0.5447429);
   houtFV_stack_4->SetBinContent(4,0.536893);
   houtFV_stack_4->SetBinContent(5,0.3934307);
   houtFV_stack_4->SetBinContent(6,0.9818863);
   houtFV_stack_4->SetBinContent(7,0.835059);
   houtFV_stack_4->SetBinContent(8,0.3401776);
   houtFV_stack_4->SetBinContent(9,0.07552768);
   houtFV_stack_4->SetBinContent(10,0.1950248);
   houtFV_stack_4->SetBinContent(11,0.1967154);
   houtFV_stack_4->SetBinError(2,0.2448018);
   houtFV_stack_4->SetBinError(3,0.3872892);
   houtFV_stack_4->SetBinError(4,0.3929602);
   houtFV_stack_4->SetBinError(5,0.2781975);
   houtFV_stack_4->SetBinError(6,0.4391155);
   houtFV_stack_4->SetBinError(7,0.4202336);
   houtFV_stack_4->SetBinError(8,0.3401776);
   houtFV_stack_4->SetBinError(9,0.07552768);
   houtFV_stack_4->SetBinError(10,0.1950249);
   houtFV_stack_4->SetBinError(11,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05319012);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04244025);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04659828);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1691327);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.298849);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.656982);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.644175);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.897784);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.376777);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.125437);
   hNCpi0inFVres_stack_7->SetBinContent(8,3.605656);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.5819);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.827539);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.4243993);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.7241923);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.1406741);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.7595208);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.09621954);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.0470988);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.09731799);
   hNCpi0inFVres_stack_7->SetBinError(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.0971173);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3261297);
   hNCpi0inFVres_stack_7->SetBinError(4,0.3204413);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5420064);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6126679);
   hNCpi0inFVres_stack_7->SetBinError(7,0.3686394);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6042749);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4442144);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6325076);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2175751);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3540212);
   hNCpi0inFVres_stack_7->SetBinError(13,0.09012779);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4559074);
   hNCpi0inFVres_stack_7->SetBinError(15,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(16,0.07537888);
   hNCpi0inFVres_stack_7->SetBinError(17,0.0470988);
   hNCpi0inFVres_stack_7->SetBinError(21,0.097318);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4047961);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.678146);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.029193);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.424607);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.115709);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.000034);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.932624);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.33182);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.8321155);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.334949);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.068971);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.7951375);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.5422866);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5399045);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.1970327);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1945494);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6493555);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5849255);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5923305);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.466082);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4414291);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4534707);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3418481);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2736105);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5769007);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4896346);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2799643);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2820699);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2989726);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1714184);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.04832419);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(2,12.81091);
   hCCpi0inFV_stack_10->SetBinContent(3,59.19341);
   hCCpi0inFV_stack_10->SetBinContent(4,101.6751);
   hCCpi0inFV_stack_10->SetBinContent(5,107.4983);
   hCCpi0inFV_stack_10->SetBinContent(6,86.12701);
   hCCpi0inFV_stack_10->SetBinContent(7,84.45619);
   hCCpi0inFV_stack_10->SetBinContent(8,60.98708);
   hCCpi0inFV_stack_10->SetBinContent(9,47.29352);
   hCCpi0inFV_stack_10->SetBinContent(10,34.37425);
   hCCpi0inFV_stack_10->SetBinContent(11,34.29833);
   hCCpi0inFV_stack_10->SetBinContent(12,19.20254);
   hCCpi0inFV_stack_10->SetBinContent(13,17.13069);
   hCCpi0inFV_stack_10->SetBinContent(14,12.16413);
   hCCpi0inFV_stack_10->SetBinContent(15,8.557796);
   hCCpi0inFV_stack_10->SetBinContent(16,6.053749);
   hCCpi0inFV_stack_10->SetBinContent(17,3.17764);
   hCCpi0inFV_stack_10->SetBinContent(18,2.537621);
   hCCpi0inFV_stack_10->SetBinContent(19,2.445722);
   hCCpi0inFV_stack_10->SetBinContent(20,1.802323);
   hCCpi0inFV_stack_10->SetBinContent(21,4.146076);
   hCCpi0inFV_stack_10->SetBinError(1,0.340721);
   hCCpi0inFV_stack_10->SetBinError(2,1.788866);
   hCCpi0inFV_stack_10->SetBinError(3,3.878929);
   hCCpi0inFV_stack_10->SetBinError(4,5.097315);
   hCCpi0inFV_stack_10->SetBinError(5,5.22348);
   hCCpi0inFV_stack_10->SetBinError(6,4.703311);
   hCCpi0inFV_stack_10->SetBinError(7,4.600497);
   hCCpi0inFV_stack_10->SetBinError(8,3.937457);
   hCCpi0inFV_stack_10->SetBinError(9,3.438262);
   hCCpi0inFV_stack_10->SetBinError(10,2.867459);
   hCCpi0inFV_stack_10->SetBinError(11,2.964147);
   hCCpi0inFV_stack_10->SetBinError(12,2.166899);
   hCCpi0inFV_stack_10->SetBinError(13,2.108718);
   hCCpi0inFV_stack_10->SetBinError(14,1.766622);
   hCCpi0inFV_stack_10->SetBinError(15,1.456148);
   hCCpi0inFV_stack_10->SetBinError(16,1.256574);
   hCCpi0inFV_stack_10->SetBinError(17,0.8775989);
   hCCpi0inFV_stack_10->SetBinError(18,0.8329108);
   hCCpi0inFV_stack_10->SetBinError(19,0.7600838);
   hCCpi0inFV_stack_10->SetBinError(20,0.7070809);
   hCCpi0inFV_stack_10->SetBinError(21,1.041752);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCinFV_stack_11->SetBinContent(3,1.178602);
   hNCinFV_stack_11->SetBinContent(4,1.123658);
   hNCinFV_stack_11->SetBinContent(5,0.7834804);
   hNCinFV_stack_11->SetBinContent(6,1.515398);
   hNCinFV_stack_11->SetBinContent(7,0.8770706);
   hNCinFV_stack_11->SetBinContent(8,1.270501);
   hNCinFV_stack_11->SetBinContent(9,1.517089);
   hNCinFV_stack_11->SetBinContent(10,0.9818863);
   hNCinFV_stack_11->SetBinContent(12,0.5352025);
   hNCinFV_stack_11->SetBinContent(15,0.3401776);
   hNCinFV_stack_11->SetBinContent(16,0.3401776);
   hNCinFV_stack_11->SetBinError(3,0.4811646);
   hNCinFV_stack_11->SetBinError(4,0.5188295);
   hNCinFV_stack_11->SetBinError(5,0.3917439);
   hNCinFV_stack_11->SetBinError(6,0.588146);
   hNCinFV_stack_11->SetBinError(7,0.5197486);
   hNCinFV_stack_11->SetBinError(8,0.5895188);
   hNCinFV_stack_11->SetBinError(9,0.5887087);
   hNCinFV_stack_11->SetBinError(10,0.4391155);
   hNCinFV_stack_11->SetBinError(12,0.3921167);
   hNCinFV_stack_11->SetBinError(15,0.3401776);
   hNCinFV_stack_11->SetBinError(16,0.3401776);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(1,1.597796);
   hnumuCCinFV_stack_12->SetBinContent(2,13.63605);
   hnumuCCinFV_stack_12->SetBinContent(3,16.94987);
   hnumuCCinFV_stack_12->SetBinContent(4,25.12018);
   hnumuCCinFV_stack_12->SetBinContent(5,22.19883);
   hnumuCCinFV_stack_12->SetBinContent(6,23.71176);
   hnumuCCinFV_stack_12->SetBinContent(7,21.8387);
   hnumuCCinFV_stack_12->SetBinContent(8,15.94938);
   hnumuCCinFV_stack_12->SetBinContent(9,8.632032);
   hnumuCCinFV_stack_12->SetBinContent(10,6.695642);
   hnumuCCinFV_stack_12->SetBinContent(11,3.126077);
   hnumuCCinFV_stack_12->SetBinContent(12,4.495036);
   hnumuCCinFV_stack_12->SetBinContent(13,2.701367);
   hnumuCCinFV_stack_12->SetBinContent(14,3.119315);
   hnumuCCinFV_stack_12->SetBinContent(15,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(16,1.070405);
   hnumuCCinFV_stack_12->SetBinContent(17,0.9818863);
   hnumuCCinFV_stack_12->SetBinContent(18,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(19,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(20,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(21,0.7834804);
   hnumuCCinFV_stack_12->SetBinError(1,0.66515);
   hnumuCCinFV_stack_12->SetBinError(2,2.060832);
   hnumuCCinFV_stack_12->SetBinError(3,2.116646);
   hnumuCCinFV_stack_12->SetBinError(4,3.810069);
   hnumuCCinFV_stack_12->SetBinError(5,2.480847);
   hnumuCCinFV_stack_12->SetBinError(6,3.307891);
   hnumuCCinFV_stack_12->SetBinError(7,2.398127);
   hnumuCCinFV_stack_12->SetBinError(8,2.244042);
   hnumuCCinFV_stack_12->SetBinError(9,1.490881);
   hnumuCCinFV_stack_12->SetBinError(10,1.208801);
   hnumuCCinFV_stack_12->SetBinError(11,0.8995382);
   hnumuCCinFV_stack_12->SetBinError(12,1.067016);
   hnumuCCinFV_stack_12->SetBinError(13,0.8608626);
   hnumuCCinFV_stack_12->SetBinError(14,0.8980646);
   hnumuCCinFV_stack_12->SetBinError(15,0.48078);
   hnumuCCinFV_stack_12->SetBinError(16,0.5545368);
   hnumuCCinFV_stack_12->SetBinError(17,0.4391155);
   hnumuCCinFV_stack_12->SetBinError(18,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(19,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(20,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(21,0.3917439);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(10,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(16,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.5352025);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.1950249);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(10,0.3921167);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(16,0.3921167);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.3921167);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmcerror__17->SetBinContent(0,0.01732447);
   hmcerror__17->SetBinContent(1,2.187942);
   hmcerror__17->SetBinContent(2,28.9329);
   hmcerror__17->SetBinContent(3,82.53091);
   hmcerror__17->SetBinContent(4,134.2656);
   hmcerror__17->SetBinContent(5,138.8888);
   hmcerror__17->SetBinContent(6,120.0153);
   hmcerror__17->SetBinContent(7,113.2985);
   hmcerror__17->SetBinContent(8,86.52381);
   hmcerror__17->SetBinContent(9,61.41406);
   hmcerror__17->SetBinContent(10,45.68328);
   hmcerror__17->SetBinContent(11,39.38047);
   hmcerror__17->SetBinContent(12,26.02594);
   hmcerror__17->SetBinContent(13,21.02528);
   hmcerror__17->SetBinContent(14,17.23405);
   hmcerror__17->SetBinContent(15,10.73829);
   hmcerror__17->SetBinContent(16,8.515837);
   hmcerror__17->SetBinContent(17,4.743835);
   hmcerror__17->SetBinContent(18,3.467945);
   hmcerror__17->SetBinContent(19,3.010515);
   hmcerror__17->SetBinContent(20,2.223654);
   hmcerror__17->SetBinContent(21,5.645777);
   hmcerror__17->SetBinError(0,0.01732447);
   hmcerror__17->SetBinError(1,5.534287);
   hmcerror__17->SetBinError(2,15.90083);
   hmcerror__17->SetBinError(3,36.18312);
   hmcerror__17->SetBinError(4,53.23899);
   hmcerror__17->SetBinError(5,58.92432);
   hmcerror__17->SetBinError(6,45.01989);
   hmcerror__17->SetBinError(7,46.95995);
   hmcerror__17->SetBinError(8,36.79939);
   hmcerror__17->SetBinError(9,34.49844);
   hmcerror__17->SetBinError(10,29.43262);
   hmcerror__17->SetBinError(11,22.94142);
   hmcerror__17->SetBinError(12,22.38998);
   hmcerror__17->SetBinError(13,15.70544);
   hmcerror__17->SetBinError(14,15.06502);
   hmcerror__17->SetBinError(15,14.41491);
   hmcerror__17->SetBinError(16,10.70114);
   hmcerror__17->SetBinError(17,5.755248);
   hmcerror__17->SetBinError(18,5.667806);
   hmcerror__17->SetBinError(19,5.991276);
   hmcerror__17->SetBinError(20,8.077861);
   hmcerror__17->SetBinError(21,6.057175);
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
   
   Double_t _fx3021[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3021[20] = {
   2,
   46,
   178,
   145,
   121,
   118,
   87,
   71,
   52,
   37,
   28,
   23,
   10,
   11,
   4,
   13,
   4,
   1,
   1,
   0};
   Double_t _felx3021[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3021[20] = {
   2,
   6.9153,
   13.34166,
   12.04159,
   11,
   10.86278,
   9.4503,
   8.5518,
   7.3419,
   6.2203,
   5.4358,
   4.9457,
   3.34883,
   3.4975,
   2.29683,
   3.77763,
   2.29683,
   1,
   1,
   0};
   Double_t _fehx3021[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3021[20] = {
   1.51917,
   6.7108,
   13.34166,
   12.04159,
   11,
   10.86278,
   9.2488,
   8.3496,
   7.1381,
   6.0141,
   5.2271,
   4.7346,
   3.1179,
   3.27,
   1.98186,
   3.5552,
   1.98186,
   1.35971,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1980);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(210.4758);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.6/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 952.0","lp");
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  21.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 702.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 174.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 2.2","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_0p_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3022[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3022[20] = {
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
   Double_t _felx3022[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3022[20] = {
   2.529448,
   0.549576,
   0.438419,
   0.3965198,
   0.4242553,
   0.3751179,
   0.4144799,
   0.4253094,
   0.5617352,
   0.6442756,
   0.5825583,
   0.8602949,
   0.7469791,
   0.8741431,
   1.342384,
   1.256616,
   1.213206,
   1.634341,
   1.990116,
   3.632698};
   Double_t _fehx3022[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3022[20] = {
   2.529448,
   0.549576,
   0.438419,
   0.3965198,
   0.4242553,
   0.3751179,
   0.4144799,
   0.4253094,
   0.5617352,
   0.6442756,
   0.5825583,
   0.8602949,
   0.7469791,
   0.8741431,
   1.342384,
   1.256616,
   1.213206,
   1.634341,
   1.990116,
   3.632698};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,1980);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3023[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3023[20] = {
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
   Double_t _felx3023[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3023[20] = {
   0.4869531,
   0.2311495,
   0.2511249,
   0.2517835,
   0.2315814,
   0.2132174,
   0.2215893,
   0.2108135,
   0.2423913,
   0.228281,
   0.2494617,
   0.2509537,
   0.2532553,
   0.2876829,
   0.2891536,
   0.3382028,
   0.4324526,
   0.4234229,
   0.4542828,
   0.5034223};
   Double_t _fehx3023[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3023[20] = {
   0.4869531,
   0.2311495,
   0.2511249,
   0.2517835,
   0.2315814,
   0.2132174,
   0.2215893,
   0.2108135,
   0.2423913,
   0.228281,
   0.2494617,
   0.2509537,
   0.2532553,
   0.2876829,
   0.2891536,
   0.3382028,
   0.4324526,
   0.4234229,
   0.4542828,
   0.5034223};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,1980);
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
   
   Double_t _fx3024[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3024[20] = {
   0.9141009,
   1.589886,
   2.156768,
   1.079949,
   0.8712005,
   0.983208,
   0.7678831,
   0.8205834,
   0.8467117,
   0.8099242,
   0.7110123,
   0.8837337,
   0.475618,
   0.6382714,
   0.3724988,
   1.526568,
   0.8431997,
   0.2883552,
   0.3321691,
   0};
   Double_t _felx3024[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3024[20] = {
   0.9141009,
   0.2390116,
   0.1616566,
   0.08968486,
   0.07920005,
   0.09051163,
   0.08341064,
   0.09883753,
   0.1195475,
   0.1361614,
   0.1380329,
   0.1900296,
   0.1592764,
   0.2029413,
   0.2138916,
   0.4436006,
   0.4841716,
   0.2883552,
   0.3321691,
   0};
   Double_t _fehx3024[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3024[20] = {
   0.6943373,
   0.2319436,
   0.1616566,
   0.08968486,
   0.07920005,
   0.09051163,
   0.08163215,
   0.0965006,
   0.1162291,
   0.1316477,
   0.1327333,
   0.1819185,
   0.1482929,
   0.1897407,
   0.1845601,
   0.417481,
   0.4177759,
   0.3920794,
   0.4516536,
   0.5161775};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1980);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(2.550267);
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
   
   TH1F *hist__18 = new TH1F("hist__18","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
