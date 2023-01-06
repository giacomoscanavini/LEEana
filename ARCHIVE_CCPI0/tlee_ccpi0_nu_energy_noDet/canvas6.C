#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Wed Sep 28 17:41:26 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",216,172,1200,900);
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
   pad1->Range(-384.6154,-2.88,2820.513,318.4674);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hmc__16->SetBinContent(4,4.243439);
   hmc__16->SetBinContent(5,21.79914);
   hmc__16->SetBinContent(6,57.96731);
   hmc__16->SetBinContent(7,94.50072);
   hmc__16->SetBinContent(8,112.0352);
   hmc__16->SetBinContent(9,124.01);
   hmc__16->SetBinContent(10,123.0829);
   hmc__16->SetBinContent(11,96.9466);
   hmc__16->SetBinContent(12,89.75272);
   hmc__16->SetBinContent(13,62.98426);
   hmc__16->SetBinContent(14,46.05906);
   hmc__16->SetBinContent(15,36.85668);
   hmc__16->SetBinContent(16,24.62078);
   hmc__16->SetBinContent(17,18.55902);
   hmc__16->SetBinContent(18,14.19866);
   hmc__16->SetBinContent(19,7.964585);
   hmc__16->SetBinContent(20,4.502714);
   hmc__16->SetBinContent(21,5.257832);
   hmc__16->SetBinContent(22,2.1513);
   hmc__16->SetBinContent(23,1.415732);
   hmc__16->SetBinContent(24,1.635198);
   hmc__16->SetBinContent(25,1.512437);
   hmc__16->SetBinContent(26,3.713699);
   hmc__16->SetBinError(1,0.3895343);
   hmc__16->SetBinError(2,0.3895343);
   hmc__16->SetBinError(3,0.3895343);
   hmc__16->SetBinError(4,1.462656);
   hmc__16->SetBinError(5,5.67041);
   hmc__16->SetBinError(6,14.15977);
   hmc__16->SetBinError(7,20.99007);
   hmc__16->SetBinError(8,25.10202);
   hmc__16->SetBinError(9,26.60156);
   hmc__16->SetBinError(10,26.54872);
   hmc__16->SetBinError(11,21.88256);
   hmc__16->SetBinError(12,20.2907);
   hmc__16->SetBinError(13,14.60946);
   hmc__16->SetBinError(14,11.02555);
   hmc__16->SetBinError(15,9.51461);
   hmc__16->SetBinError(16,6.208277);
   hmc__16->SetBinError(17,5.617365);
   hmc__16->SetBinError(18,5.163024);
   hmc__16->SetBinError(19,2.809434);
   hmc__16->SetBinError(20,1.838107);
   hmc__16->SetBinError(21,1.965254);
   hmc__16->SetBinError(22,1.146754);
   hmc__16->SetBinError(23,0.8864182);
   hmc__16->SetBinError(24,1.080261);
   hmc__16->SetBinError(25,1.081575);
   hmc__16->SetBinError(26,1.418553);
   hmc__16->SetMinimum(-2.88);
   hmc__16->SetMaximum(302.4);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,0,2500);
   hs6_stack_6->SetMinimum(-8.622479e-09);
   hs6_stack_6->SetMaximum(130.2106);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hbadmatch_stack_1->SetBinContent(4,0.5915521);
   hbadmatch_stack_1->SetBinContent(5,0.6397032);
   hbadmatch_stack_1->SetBinContent(6,0.5430812);
   hbadmatch_stack_1->SetBinContent(7,0.7336084);
   hbadmatch_stack_1->SetBinContent(8,0.7336084);
   hbadmatch_stack_1->SetBinContent(9,0.1967154);
   hbadmatch_stack_1->SetBinContent(10,0.3917402);
   hbadmatch_stack_1->SetBinContent(11,0.3401776);
   hbadmatch_stack_1->SetBinContent(12,0.3917402);
   hbadmatch_stack_1->SetBinContent(15,0.1209555);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.3401776);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinError(4,0.4411269);
   hbadmatch_stack_1->SetBinError(5,0.4061867);
   hbadmatch_stack_1->SetBinError(6,0.3960943);
   hbadmatch_stack_1->SetBinError(7,0.4394482);
   hbadmatch_stack_1->SetBinError(8,0.4394482);
   hbadmatch_stack_1->SetBinError(9,0.1967154);
   hbadmatch_stack_1->SetBinError(10,0.2770047);
   hbadmatch_stack_1->SetBinError(11,0.3401776);
   hbadmatch_stack_1->SetBinError(12,0.2770047);
   hbadmatch_stack_1->SetBinError(15,0.1209556);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.3401776);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hext_stack_2->SetBinContent(5,0.6487947);
   hext_stack_2->SetBinContent(6,0.8131978);
   hext_stack_2->SetBinContent(7,1.461993);
   hext_stack_2->SetBinContent(8,2.592407);
   hext_stack_2->SetBinContent(9,0.7309963);
   hext_stack_2->SetBinContent(10,1.689827);
   hext_stack_2->SetBinContent(11,0.4065989);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinError(5,0.4587671);
   hext_stack_2->SetBinError(6,0.5750177);
   hext_stack_2->SetBinError(7,0.7356036);
   hext_stack_2->SetBinError(8,1.085446);
   hext_stack_2->SetBinError(9,0.5201503);
   hext_stack_2->SetBinError(10,0.9943139);
   hext_stack_2->SetBinError(11,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hdirt_stack_3->SetBinContent(6,0.2544535);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.2574102);
   hdirt_stack_3->SetBinError(6,0.2544535);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(16,0.2574102);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   houtFV_stack_4->SetBinContent(5,0.4415172);
   houtFV_stack_4->SetBinContent(6,0.8849206);
   houtFV_stack_4->SetBinContent(7,0.3934307);
   houtFV_stack_4->SetBinContent(8,0.7834804);
   houtFV_stack_4->SetBinContent(9,0.4450093);
   houtFV_stack_4->SetBinContent(10,0.6107302);
   houtFV_stack_4->SetBinContent(12,0.1967154);
   houtFV_stack_4->SetBinContent(13,0.1950248);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(17,0.1967154);
   houtFV_stack_4->SetBinError(5,0.3140459);
   houtFV_stack_4->SetBinError(6,0.5154743);
   houtFV_stack_4->SetBinError(7,0.2781975);
   houtFV_stack_4->SetBinError(8,0.3917439);
   houtFV_stack_4->SetBinError(9,0.3170598);
   houtFV_stack_4->SetBinError(10,0.3993243);
   houtFV_stack_4->SetBinError(12,0.1967154);
   houtFV_stack_4->SetBinError(13,0.1950249);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(17,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04659828);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1691327);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.2478449);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.187525);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.957802);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.637886);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.990605);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.080653);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.353523);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.292767);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.368307);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.8902436);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.3438402);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.130087);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.3336015);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.2230735);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2425669);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.09731799);
   hNCpi0inFVres_stack_7->SetBinError(4,0.09251864);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2858358);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4666468);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4135169);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3507794);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5097076);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6822197);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5553799);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3802375);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3741226);
   hNCpi0inFVres_stack_7->SetBinError(14,0.2246733);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5435226);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2560321);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1108488);
   hNCpi0inFVres_stack_7->SetBinError(18,0.2010624);
   hNCpi0inFVres_stack_7->SetBinError(25,0.097318);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.6172754);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.9186361);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.748678);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.135813);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.109713);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.222075);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.941269);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.807863);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.187666);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.014183);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5262357);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6756694);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1970327);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3012939);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2489366);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3611186);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8173434);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5264427);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4843025);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5578247);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5845057);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3070609);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6438247);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2362101);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3021409);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1714184);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.03945654);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hCCpi0inFV_stack_10->SetBinContent(4,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(5,10.8767);
   hCCpi0inFV_stack_10->SetBinContent(6,36.82449);
   hCCpi0inFV_stack_10->SetBinContent(7,64.10352);
   hCCpi0inFV_stack_10->SetBinContent(8,83.17391);
   hCCpi0inFV_stack_10->SetBinContent(9,90.57106);
   hCCpi0inFV_stack_10->SetBinContent(10,91.33272);
   hCCpi0inFV_stack_10->SetBinContent(11,75.70982);
   hCCpi0inFV_stack_10->SetBinContent(12,69.16759);
   hCCpi0inFV_stack_10->SetBinContent(13,49.56283);
   hCCpi0inFV_stack_10->SetBinContent(14,37.00525);
   hCCpi0inFV_stack_10->SetBinContent(15,30.22066);
   hCCpi0inFV_stack_10->SetBinContent(16,20.07007);
   hCCpi0inFV_stack_10->SetBinContent(17,14.68835);
   hCCpi0inFV_stack_10->SetBinContent(18,9.534611);
   hCCpi0inFV_stack_10->SetBinContent(19,6.252154);
   hCCpi0inFV_stack_10->SetBinContent(20,3.907867);
   hCCpi0inFV_stack_10->SetBinContent(21,5.229931);
   hCCpi0inFV_stack_10->SetBinContent(22,1.660551);
   hCCpi0inFV_stack_10->SetBinContent(23,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(24,1.070405);
   hCCpi0inFV_stack_10->SetBinContent(25,1.074942);
   hCCpi0inFV_stack_10->SetBinContent(26,2.679393);
   hCCpi0inFV_stack_10->SetBinError(4,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(5,1.677711);
   hCCpi0inFV_stack_10->SetBinError(6,3.065799);
   hCCpi0inFV_stack_10->SetBinError(7,4.076797);
   hCCpi0inFV_stack_10->SetBinError(8,4.645273);
   hCCpi0inFV_stack_10->SetBinError(9,4.833316);
   hCCpi0inFV_stack_10->SetBinError(10,4.741276);
   hCCpi0inFV_stack_10->SetBinError(11,4.326719);
   hCCpi0inFV_stack_10->SetBinError(12,4.245846);
   hCCpi0inFV_stack_10->SetBinError(13,3.468811);
   hCCpi0inFV_stack_10->SetBinError(14,3.028246);
   hCCpi0inFV_stack_10->SetBinError(15,2.683445);
   hCCpi0inFV_stack_10->SetBinError(16,2.271617);
   hCCpi0inFV_stack_10->SetBinError(17,1.967304);
   hCCpi0inFV_stack_10->SetBinError(18,1.520264);
   hCCpi0inFV_stack_10->SetBinError(19,1.272139);
   hCCpi0inFV_stack_10->SetBinError(20,0.9808007);
   hCCpi0inFV_stack_10->SetBinError(21,1.12717);
   hCCpi0inFV_stack_10->SetBinError(22,0.650847);
   hCCpi0inFV_stack_10->SetBinError(23,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(24,0.5545368);
   hCCpi0inFV_stack_10->SetBinError(25,0.4882756);
   hCCpi0inFV_stack_10->SetBinError(26,0.8775546);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCinFV_stack_11->SetBinContent(5,0.3917402);
   hNCinFV_stack_11->SetBinContent(6,1.178602);
   hNCinFV_stack_11->SetBinContent(7,1.318683);
   hNCinFV_stack_11->SetBinContent(8,0.9269427);
   hNCinFV_stack_11->SetBinContent(9,1.662242);
   hNCinFV_stack_11->SetBinContent(10,1.176911);
   hNCinFV_stack_11->SetBinContent(11,0.9303237);
   hNCinFV_stack_11->SetBinContent(12,0.8753801);
   hNCinFV_stack_11->SetBinContent(13,0.9286332);
   hNCinFV_stack_11->SetBinContent(14,0.1967154);
   hNCinFV_stack_11->SetBinContent(15,0.1967154);
   hNCinFV_stack_11->SetBinContent(17,0.3401776);
   hNCinFV_stack_11->SetBinContent(18,0.3401776);
   hNCinFV_stack_11->SetBinError(5,0.2770047);
   hNCinFV_stack_11->SetBinError(6,0.4811646);
   hNCinFV_stack_11->SetBinError(7,0.5542732);
   hNCinFV_stack_11->SetBinError(8,0.4800908);
   hNCinFV_stack_11->SetBinError(9,0.6513556);
   hNCinFV_stack_11->SetBinError(10,0.4804759);
   hNCinFV_stack_11->SetBinError(11,0.4814682);
   hNCinFV_stack_11->SetBinError(12,0.5191111);
   hNCinFV_stack_11->SetBinError(13,0.48078);
   hNCinFV_stack_11->SetBinError(14,0.1967154);
   hNCinFV_stack_11->SetBinError(15,0.1967154);
   hNCinFV_stack_11->SetBinError(17,0.3401776);
   hNCinFV_stack_11->SetBinError(18,0.3401776);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hnumuCCinFV_stack_12->SetBinContent(4,2.815586);
   hnumuCCinFV_stack_12->SetBinContent(5,6.977653);
   hnumuCCinFV_stack_12->SetBinContent(6,14.35492);
   hnumuCCinFV_stack_12->SetBinContent(7,22.088);
   hnumuCCinFV_stack_12->SetBinContent(8,18.48574);
   hnumuCCinFV_stack_12->SetBinContent(9,24.82192);
   hnumuCCinFV_stack_12->SetBinContent(10,22.10868);
   hnumuCCinFV_stack_12->SetBinContent(11,14.69312);
   hnumuCCinFV_stack_12->SetBinContent(12,15.89852);
   hnumuCCinFV_stack_12->SetBinContent(13,10.21986);
   hnumuCCinFV_stack_12->SetBinContent(14,5.515491);
   hnumuCCinFV_stack_12->SetBinContent(15,4.662025);
   hnumuCCinFV_stack_12->SetBinContent(16,2.552111);
   hnumuCCinFV_stack_12->SetBinContent(17,2.352132);
   hnumuCCinFV_stack_12->SetBinContent(18,3.632077);
   hnumuCCinFV_stack_12->SetBinContent(19,1.515398);
   hnumuCCinFV_stack_12->SetBinContent(20,0.5948468);
   hnumuCCinFV_stack_12->SetBinContent(22,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1984837);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(26,0.7834804);
   hnumuCCinFV_stack_12->SetBinError(4,0.9164988);
   hnumuCCinFV_stack_12->SetBinError(5,1.399261);
   hnumuCCinFV_stack_12->SetBinError(6,1.973448);
   hnumuCCinFV_stack_12->SetBinError(7,3.045956);
   hnumuCCinFV_stack_12->SetBinError(8,2.233586);
   hnumuCCinFV_stack_12->SetBinError(9,2.619044);
   hnumuCCinFV_stack_12->SetBinError(10,2.378473);
   hnumuCCinFV_stack_12->SetBinError(11,1.892444);
   hnumuCCinFV_stack_12->SetBinError(12,3.118444);
   hnumuCCinFV_stack_12->SetBinError(13,1.622067);
   hnumuCCinFV_stack_12->SetBinError(14,1.218872);
   hnumuCCinFV_stack_12->SetBinError(15,1.089307);
   hnumuCCinFV_stack_12->SetBinError(16,0.836422);
   hnumuCCinFV_stack_12->SetBinError(17,0.6790081);
   hnumuCCinFV_stack_12->SetBinError(18,2.434044);
   hnumuCCinFV_stack_12->SetBinError(19,0.588146);
   hnumuCCinFV_stack_12->SetBinError(20,0.3434878);
   hnumuCCinFV_stack_12->SetBinError(22,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(23,0.1984837);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(26,0.3917439);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(16,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(26,0.1950248);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.2770047);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.3921167);
   hnueCCinFV_stack_13->SetBinError(16,0.3921167);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.3401776);
   hnueCCinFV_stack_13->SetBinError(26,0.1950249);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);
   hmcerror__17->SetBinContent(4,4.243439);
   hmcerror__17->SetBinContent(5,21.79914);
   hmcerror__17->SetBinContent(6,57.96731);
   hmcerror__17->SetBinContent(7,94.50072);
   hmcerror__17->SetBinContent(8,112.0352);
   hmcerror__17->SetBinContent(9,124.01);
   hmcerror__17->SetBinContent(10,123.0829);
   hmcerror__17->SetBinContent(11,96.9466);
   hmcerror__17->SetBinContent(12,89.75272);
   hmcerror__17->SetBinContent(13,62.98426);
   hmcerror__17->SetBinContent(14,46.05906);
   hmcerror__17->SetBinContent(15,36.85668);
   hmcerror__17->SetBinContent(16,24.62078);
   hmcerror__17->SetBinContent(17,18.55902);
   hmcerror__17->SetBinContent(18,14.19866);
   hmcerror__17->SetBinContent(19,7.964585);
   hmcerror__17->SetBinContent(20,4.502714);
   hmcerror__17->SetBinContent(21,5.257832);
   hmcerror__17->SetBinContent(22,2.1513);
   hmcerror__17->SetBinContent(23,1.415732);
   hmcerror__17->SetBinContent(24,1.635198);
   hmcerror__17->SetBinContent(25,1.512437);
   hmcerror__17->SetBinContent(26,3.713699);
   hmcerror__17->SetBinError(1,0.3895343);
   hmcerror__17->SetBinError(2,0.3895343);
   hmcerror__17->SetBinError(3,0.3895343);
   hmcerror__17->SetBinError(4,1.462656);
   hmcerror__17->SetBinError(5,5.67041);
   hmcerror__17->SetBinError(6,14.15977);
   hmcerror__17->SetBinError(7,20.99007);
   hmcerror__17->SetBinError(8,25.10202);
   hmcerror__17->SetBinError(9,26.60156);
   hmcerror__17->SetBinError(10,26.54872);
   hmcerror__17->SetBinError(11,21.88256);
   hmcerror__17->SetBinError(12,20.2907);
   hmcerror__17->SetBinError(13,14.60946);
   hmcerror__17->SetBinError(14,11.02555);
   hmcerror__17->SetBinError(15,9.51461);
   hmcerror__17->SetBinError(16,6.208277);
   hmcerror__17->SetBinError(17,5.617365);
   hmcerror__17->SetBinError(18,5.163024);
   hmcerror__17->SetBinError(19,2.809434);
   hmcerror__17->SetBinError(20,1.838107);
   hmcerror__17->SetBinError(21,1.965254);
   hmcerror__17->SetBinError(22,1.146754);
   hmcerror__17->SetBinError(23,0.8864182);
   hmcerror__17->SetBinError(24,1.080261);
   hmcerror__17->SetBinError(25,1.081575);
   hmcerror__17->SetBinError(26,1.418553);
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
   Double_t _fy3021[25] = {
   0,
   0,
   0,
   2,
   40,
   94,
   91,
   144,
   123,
   123,
   100,
   67,
   52,
   38,
   26,
   18,
   8,
   14,
   4,
   3,
   3,
   3,
   2,
   0,
   3};
   Double_t _felx3021[25] = {
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
   Double_t _fely3021[25] = {
   0,
   0,
   0,
   2,
   6.4604,
   9.8173,
   9.6617,
   12,
   11.09054,
   11.09054,
   10.1212,
   8.3119,
   7.3419,
   6.3013,
   5.2453,
   4.4008,
   3.0307,
   3.9102,
   2.29683,
   2.143368,
   2.143368,
   2.143368,
   2,
   0,
   2.143368};
   Double_t _fehx3021[25] = {
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
   Double_t _fehy3021[25] = {
   1.1478,
   1.1478,
   1.1478,
   1.51917,
   6.2549,
   9.616,
   9.46,
   12,
   11.09054,
   11.09054,
   9.92,
   8.1094,
   7.1381,
   6.0955,
   5.0358,
   4.1858,
   2.7896,
   3.6898,
   1.98186,
   1.72422,
   1.72422,
   1.72422,
   1.51917,
   1.1478,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,2750);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(171.6);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.01#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=32.6/25","");
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 703.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 2.6","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_0p_bnb_12_cc_nu_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[25] = {
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
   Double_t _fely3022[25] = {
   0,
   0,
   0,
   0.3446866,
   0.2601208,
   0.2442716,
   0.2221155,
   0.2240548,
   0.2145114,
   0.2156978,
   0.2257176,
   0.2260734,
   0.2319542,
   0.2393786,
   0.2581516,
   0.2521559,
   0.3026758,
   0.3636275,
   0.3527408,
   0.4082221,
   0.3737766,
   0.5330519,
   0.6261201,
   0.6606299,
   0.7151205};
   Double_t _fehx3022[25] = {
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
   Double_t _fehy3022[25] = {
   0,
   0,
   0,
   0.3446866,
   0.2601208,
   0.2442716,
   0.2221155,
   0.2240548,
   0.2145114,
   0.2156978,
   0.2257176,
   0.2260734,
   0.2319542,
   0.2393786,
   0.2581516,
   0.2521559,
   0.3026758,
   0.3636275,
   0.3527408,
   0.4082221,
   0.3737766,
   0.5330519,
   0.6261201,
   0.6606299,
   0.7151205};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,2750);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Neutrino Energy [MeV]");
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
   Double_t _fely3023[25] = {
   0,
   0,
   0,
   0.3446866,
   0.2601208,
   0.2442716,
   0.2221155,
   0.2240548,
   0.2145114,
   0.2156978,
   0.2257176,
   0.2260734,
   0.2319542,
   0.2393786,
   0.2581516,
   0.2521559,
   0.3026758,
   0.3636275,
   0.3527408,
   0.4082221,
   0.3737766,
   0.5330519,
   0.6261201,
   0.6606299,
   0.7151205};
   Double_t _fehx3023[25] = {
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
   Double_t _fehy3023[25] = {
   0,
   0,
   0,
   0.3446866,
   0.2601208,
   0.2442716,
   0.2221155,
   0.2240548,
   0.2145114,
   0.2156978,
   0.2257176,
   0.2260734,
   0.2319542,
   0.2393786,
   0.2581516,
   0.2521559,
   0.3026758,
   0.3636275,
   0.3527408,
   0.4082221,
   0.3737766,
   0.5330519,
   0.6261201,
   0.6606299,
   0.7151205};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,2750);
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
   Double_t _fy3024[25] = {
   10,
   10,
   10,
   0.4713159,
   1.834935,
   1.621604,
   0.9629557,
   1.28531,
   0.9918551,
   0.9993263,
   1.031496,
   0.7464955,
   0.825603,
   0.8250277,
   0.7054352,
   0.7310896,
   0.4310573,
   0.9860084,
   0.5022233,
   0.6662648,
   0.5705774,
   1.394506,
   1.412697,
   0,
   1.983553};
   Double_t _felx3024[25] = {
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
   Double_t _fely3024[25] = {
   0,
   0,
   0,
   0.4713159,
   0.2963603,
   0.1693593,
   0.1022394,
   0.1071092,
   0.08943256,
   0.09010622,
   0.1043997,
   0.09260889,
   0.1165672,
   0.1368091,
   0.1423161,
   0.1787433,
   0.1633007,
   0.2753921,
   0.2883804,
   0.4760169,
   0.4076525,
   0.9963131,
   1.412697,
   0,
   1.417161};
   Double_t _fehx3024[25] = {
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
   Double_t _fehy3024[25] = {
   0,
   0,
   0,
   0.3580045,
   0.2869333,
   0.1658866,
   0.1001051,
   0.1071092,
   0.08943256,
   0.09010622,
   0.1023244,
   0.09035269,
   0.1133315,
   0.132341,
   0.1366319,
   0.1700108,
   0.1503097,
   0.2598696,
   0.248834,
   0.382929,
   0.3279337,
   0.8014783,
   1.073063,
   0.7019333,
   1.140027};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,2750);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(11);
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
   
   TH1F *hist__18 = new TH1F("hist__18","CCpi0_FC_0p_bnb_12_cc_nu_energy_all",25,0,2500);

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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
