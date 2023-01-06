#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Fri Oct 21 13:43:27 2022) by ROOT version 6.26/00
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
   pad1->Range(-276.9231,-2.88,2030.769,318.4674);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmc__16->SetBinContent(0,0.01732447);
   hmc__16->SetBinContent(1,0.9286332);
   hmc__16->SetBinContent(2,13.77378);
   hmc__16->SetBinContent(3,44.00553);
   hmc__16->SetBinContent(4,80.52873);
   hmc__16->SetBinContent(5,108.6807);
   hmc__16->SetBinContent(6,111.4682);
   hmc__16->SetBinContent(7,103.6254);
   hmc__16->SetBinContent(8,97.80249);
   hmc__16->SetBinContent(9,78.91025);
   hmc__16->SetBinContent(10,69.25494);
   hmc__16->SetBinContent(11,51.7491);
   hmc__16->SetBinContent(12,39.87617);
   hmc__16->SetBinContent(13,34.90557);
   hmc__16->SetBinContent(14,28.23579);
   hmc__16->SetBinContent(15,20.68368);
   hmc__16->SetBinContent(16,18.88807);
   hmc__16->SetBinContent(17,14.9633);
   hmc__16->SetBinContent(18,10.77879);
   hmc__16->SetBinContent(19,7.359318);
   hmc__16->SetBinContent(20,6.566227);
   hmc__16->SetBinContent(21,4.206943);
   hmc__16->SetBinContent(22,2.932743);
   hmc__16->SetBinContent(23,3.076205);
   hmc__16->SetBinContent(24,1.883476);
   hmc__16->SetBinContent(25,1.346583);
   hmc__16->SetBinContent(26,5.645776);
   hmc__16->SetBinError(0,0.01732447);
   hmc__16->SetBinError(1,0.7024967);
   hmc__16->SetBinError(2,4.022415);
   hmc__16->SetBinError(3,10.60847);
   hmc__16->SetBinError(4,19.87285);
   hmc__16->SetBinError(5,27.51177);
   hmc__16->SetBinError(6,26.10141);
   hmc__16->SetBinError(7,22.86775);
   hmc__16->SetBinError(8,21.71618);
   hmc__16->SetBinError(9,16.97805);
   hmc__16->SetBinError(10,14.6737);
   hmc__16->SetBinError(11,12.96695);
   hmc__16->SetBinError(12,8.969956);
   hmc__16->SetBinError(13,8.533007);
   hmc__16->SetBinError(14,7.420122);
   hmc__16->SetBinError(15,5.448646);
   hmc__16->SetBinError(16,4.951944);
   hmc__16->SetBinError(17,4.23894);
   hmc__16->SetBinError(18,3.394623);
   hmc__16->SetBinError(19,2.46045);
   hmc__16->SetBinError(20,2.539129);
   hmc__16->SetBinError(21,1.897573);
   hmc__16->SetBinError(22,1.366425);
   hmc__16->SetBinError(23,1.474234);
   hmc__16->SetBinError(24,0.9744651);
   hmc__16->SetBinError(25,0.8282498);
   hmc__16->SetBinError(26,1.935886);
   hmc__16->SetMinimum(-2.88);
   hmc__16->SetMaximum(302.4);
   hmc__16->SetEntries(949.5536);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,0,1800);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(117.0416);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(2,0.1967154);
   hbadmatch_stack_1->SetBinContent(3,0.9317297);
   hbadmatch_stack_1->SetBinContent(4,0.3401776);
   hbadmatch_stack_1->SetBinContent(5,0.1028101);
   hbadmatch_stack_1->SetBinContent(6,0.5430812);
   hbadmatch_stack_1->SetBinContent(7,1.518779);
   hbadmatch_stack_1->SetBinContent(10,0.5901461);
   hbadmatch_stack_1->SetBinContent(11,0.3401776);
   hbadmatch_stack_1->SetBinContent(12,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.1209555);
   hbadmatch_stack_1->SetBinContent(20,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.5570582);
   hbadmatch_stack_1->SetBinError(4,0.3401776);
   hbadmatch_stack_1->SetBinError(5,0.1028101);
   hbadmatch_stack_1->SetBinError(6,0.3960943);
   hbadmatch_stack_1->SetBinError(7,0.5892709);
   hbadmatch_stack_1->SetBinError(10,0.340721);
   hbadmatch_stack_1->SetBinError(11,0.3401776);
   hbadmatch_stack_1->SetBinError(12,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.1209556);
   hbadmatch_stack_1->SetBinError(20,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,0.4065989);
   hext_stack_2->SetBinContent(4,1.055394);
   hext_stack_2->SetBinContent(5,1.37261);
   hext_stack_2->SetBinContent(6,1.544194);
   hext_stack_2->SetBinContent(7,0.4065989);
   hext_stack_2->SetBinContent(8,0.4065989);
   hext_stack_2->SetBinContent(9,1.37261);
   hext_stack_2->SetBinContent(10,1.048213);
   hext_stack_2->SetBinContent(11,0.4065989);
   hext_stack_2->SetBinContent(17,0.6487947);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.4065989);
   hext_stack_2->SetBinError(4,0.6130171);
   hext_stack_2->SetBinError(5,0.8259691);
   hext_stack_2->SetBinError(6,0.7753719);
   hext_stack_2->SetBinError(7,0.4065989);
   hext_stack_2->SetBinError(8,0.4065989);
   hext_stack_2->SetBinError(9,0.8259691);
   hext_stack_2->SetBinError(10,0.7595995);
   hext_stack_2->SetBinError(11,0.4065989);
   hext_stack_2->SetBinError(17,0.4587671);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(4,0.2544535);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(16,0.2574102);
   hdirt_stack_3->SetBinError(4,0.2544535);
   hdirt_stack_3->SetBinError(12,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,0.2448018);
   houtFV_stack_4->SetBinContent(4,0.7414583);
   houtFV_stack_4->SetBinContent(5,0.3401776);
   houtFV_stack_4->SetBinContent(6,0.3934307);
   houtFV_stack_4->SetBinContent(7,0.3917402);
   houtFV_stack_4->SetBinContent(8,0.9801958);
   houtFV_stack_4->SetBinContent(9,0.4450093);
   houtFV_stack_4->SetBinContent(10,0.3401776);
   houtFV_stack_4->SetBinContent(11,0.07552768);
   houtFV_stack_4->SetBinContent(12,0.1950248);
   houtFV_stack_4->SetBinContent(13,0.1967154);
   houtFV_stack_4->SetBinError(2,0.2448018);
   houtFV_stack_4->SetBinError(4,0.4343845);
   houtFV_stack_4->SetBinError(5,0.3401776);
   houtFV_stack_4->SetBinError(6,0.2781975);
   houtFV_stack_4->SetBinError(7,0.2770047);
   houtFV_stack_4->SetBinError(8,0.4383608);
   houtFV_stack_4->SetBinError(9,0.3170598);
   houtFV_stack_4->SetBinError(10,0.3401776);
   houtFV_stack_4->SetBinError(11,0.07552768);
   houtFV_stack_4->SetBinError(12,0.1950249);
   houtFV_stack_4->SetBinError(13,0.1967154);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04659828);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1691327);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01822846);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.1711181);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.4903656);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.816732);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.121789);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.466703);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.01275);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.984781);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.262457);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.278962);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.44802);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.525704);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.6690403);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.5730901);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.3421757);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1406741);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.7316208);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.09621954);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.0470988);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.09731799);
   hNCpi0inFVres_stack_7->SetBinError(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.07427376);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1471333);
   hNCpi0inFVres_stack_7->SetBinError(4,0.3617557);
   hNCpi0inFVres_stack_7->SetBinError(5,0.2458516);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4988315);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4363716);
   hNCpi0inFVres_stack_7->SetBinError(8,0.5575725);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2616309);
   hNCpi0inFVres_stack_7->SetBinError(10,0.5929461);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4386578);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5768484);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3334961);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3443571);
   hNCpi0inFVres_stack_7->SetBinError(15,0.1228248);
   hNCpi0inFVres_stack_7->SetBinError(16,0.09012779);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4550529);
   hNCpi0inFVres_stack_7->SetBinError(18,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(19,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(20,0.07537888);
   hNCpi0inFVres_stack_7->SetBinError(21,0.0470988);
   hNCpi0inFVres_stack_7->SetBinError(26,0.097318);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.06912473);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.6147308);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.927386);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.500895);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.135114);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.840156);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.598917);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.456565);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.442221);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8589773);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.8589143);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.245237);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.7244796);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.8802484);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7951375);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4548517);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.3723364);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.4504711);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1970327);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.04959411);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2208134);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7445618);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4427861);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5627994);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.438957);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.41769);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3634753);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3906117);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2826225);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2486148);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5456372);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3077328);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4797656);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2799643);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2743002);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.227937);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2827719);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1714184);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.04832419);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(2,3.666351);
   hCCpi0inFV_stack_10->SetBinContent(3,27.55638);
   hCCpi0inFV_stack_10->SetBinContent(4,55.89476);
   hCCpi0inFV_stack_10->SetBinContent(5,83.97778);
   hCCpi0inFV_stack_10->SetBinContent(6,83.64248);
   hCCpi0inFV_stack_10->SetBinContent(7,73.92168);
   hCCpi0inFV_stack_10->SetBinContent(8,67.11697);
   hCCpi0inFV_stack_10->SetBinContent(9,52.42974);
   hCCpi0inFV_stack_10->SetBinContent(10,43.45293);
   hCCpi0inFV_stack_10->SetBinContent(11,34.14473);
   hCCpi0inFV_stack_10->SetBinContent(12,23.11461);
   hCCpi0inFV_stack_10->SetBinContent(13,22.64705);
   hCCpi0inFV_stack_10->SetBinContent(14,18.94811);
   hCCpi0inFV_stack_10->SetBinContent(15,12.9022);
   hCCpi0inFV_stack_10->SetBinContent(16,11.17837);
   hCCpi0inFV_stack_10->SetBinContent(17,9.078391);
   hCCpi0inFV_stack_10->SetBinContent(18,6.213508);
   hCCpi0inFV_stack_10->SetBinContent(19,3.611408);
   hCCpi0inFV_stack_10->SetBinContent(20,3.124387);
   hCCpi0inFV_stack_10->SetBinContent(21,1.91052);
   hCCpi0inFV_stack_10->SetBinContent(22,1.322064);
   hCCpi0inFV_stack_10->SetBinContent(23,1.858957);
   hCCpi0inFV_stack_10->SetBinContent(24,0.5850745);
   hCCpi0inFV_stack_10->SetBinContent(25,1.121968);
   hCCpi0inFV_stack_10->SetBinContent(26,3.072289);
   hCCpi0inFV_stack_10->SetBinError(1,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(2,0.9822989);
   hCCpi0inFV_stack_10->SetBinError(3,2.677884);
   hCCpi0inFV_stack_10->SetBinError(4,3.716302);
   hCCpi0inFV_stack_10->SetBinError(5,4.65071);
   hCCpi0inFV_stack_10->SetBinError(6,4.629209);
   hCCpi0inFV_stack_10->SetBinError(7,4.331462);
   hCCpi0inFV_stack_10->SetBinError(8,4.131479);
   hCCpi0inFV_stack_10->SetBinError(9,3.594911);
   hCCpi0inFV_stack_10->SetBinError(10,3.322107);
   hCCpi0inFV_stack_10->SetBinError(11,2.950453);
   hCCpi0inFV_stack_10->SetBinError(12,2.391617);
   hCCpi0inFV_stack_10->SetBinError(13,2.339364);
   hCCpi0inFV_stack_10->SetBinError(14,2.211724);
   hCCpi0inFV_stack_10->SetBinError(15,1.765624);
   hCCpi0inFV_stack_10->SetBinError(16,1.670051);
   hCCpi0inFV_stack_10->SetBinError(17,1.570601);
   hCCpi0inFV_stack_10->SetBinError(18,1.209958);
   hCCpi0inFV_stack_10->SetBinError(19,1.001287);
   hCCpi0inFV_stack_10->SetBinError(20,0.89917);
   hCCpi0inFV_stack_10->SetBinError(21,0.6511312);
   hCCpi0inFV_stack_10->SetBinError(22,0.5554667);
   hCCpi0inFV_stack_10->SetBinError(23,0.6804124);
   hCCpi0inFV_stack_10->SetBinError(24,0.337793);
   hCCpi0inFV_stack_10->SetBinError(25,0.5181909);
   hCCpi0inFV_stack_10->SetBinError(26,0.881142);
   hCCpi0inFV_stack_10->SetEntries(2751);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(3,0.3934307);
   hNCinFV_stack_11->SetBinContent(4,0.9801958);
   hNCinFV_stack_11->SetBinContent(5,0.9286332);
   hNCinFV_stack_11->SetBinContent(6,1.557009);
   hNCinFV_stack_11->SetBinContent(7,1.254362);
   hNCinFV_stack_11->SetBinContent(8,1.617849);
   hNCinFV_stack_11->SetBinContent(9,1.081547);
   hNCinFV_stack_11->SetBinContent(10,1.270501);
   hNCinFV_stack_11->SetBinContent(11,2.039629);
   hNCinFV_stack_11->SetBinContent(12,1.121968);
   hNCinFV_stack_11->SetBinContent(13,1.316041);
   hNCinFV_stack_11->SetBinContent(14,0.712638);
   hNCinFV_stack_11->SetBinContent(15,0.7904544);
   hNCinFV_stack_11->SetBinContent(16,0.5455645);
   hNCinFV_stack_11->SetBinContent(18,0.4966776);
   hNCinFV_stack_11->SetBinContent(19,0.3401776);
   hNCinFV_stack_11->SetBinContent(20,0.3401776);
   hNCinFV_stack_11->SetBinError(3,0.2781975);
   hNCinFV_stack_11->SetBinError(4,0.4383608);
   hNCinFV_stack_11->SetBinError(5,0.48078);
   hNCinFV_stack_11->SetBinError(6,1.027687);
   hNCinFV_stack_11->SetBinError(7,0.580731);
   hNCinFV_stack_11->SetBinError(8,0.6785434);
   hNCinFV_stack_11->SetBinError(9,0.5585239);
   hNCinFV_stack_11->SetBinError(10,0.5895188);
   hNCinFV_stack_11->SetBinError(11,0.8685078);
   hNCinFV_stack_11->SetBinError(12,0.5181909);
   hNCinFV_stack_11->SetBinError(13,0.8018816);
   hNCinFV_stack_11->SetBinError(14,0.4303938);
   hNCinFV_stack_11->SetBinError(15,0.4678772);
   hNCinFV_stack_11->SetBinError(16,0.5455645);
   hNCinFV_stack_11->SetBinError(18,0.4966776);
   hNCinFV_stack_11->SetBinError(19,0.3401776);
   hNCinFV_stack_11->SetBinError(20,0.3401776);
   hNCinFV_stack_11->SetEntries(62);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(1,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(2,9.101271);
   hnumuCCinFV_stack_12->SetBinContent(3,13.59406);
   hnumuCCinFV_stack_12->SetBinContent(4,17.51818);
   hnumuCCinFV_stack_12->SetBinContent(5,19.33601);
   hnumuCCinFV_stack_12->SetBinContent(6,18.97454);
   hnumuCCinFV_stack_12->SetBinContent(7,22.2388);
   hnumuCCinFV_stack_12->SetBinContent(8,22.68947);
   hnumuCCinFV_stack_12->SetBinContent(9,20.86232);
   hnumuCCinFV_stack_12->SetBinContent(10,17.43835);
   hnumuCCinFV_stack_12->SetBinContent(11,12.33812);
   hnumuCCinFV_stack_12->SetBinContent(12,12.19165);
   hnumuCCinFV_stack_12->SetBinContent(13,8.784883);
   hnumuCCinFV_stack_12->SetBinContent(14,7.277476);
   hnumuCCinFV_stack_12->SetBinContent(15,5.768592);
   hnumuCCinFV_stack_12->SetBinContent(16,5.970907);
   hnumuCCinFV_stack_12->SetBinContent(17,4.049639);
   hnumuCCinFV_stack_12->SetBinContent(18,3.519508);
   hnumuCCinFV_stack_12->SetBinContent(19,2.394159);
   hnumuCCinFV_stack_12->SetBinContent(20,2.585803);
   hnumuCCinFV_stack_12->SetBinContent(21,1.712114);
   hnumuCCinFV_stack_12->SetBinContent(22,1.413964);
   hnumuCCinFV_stack_12->SetBinContent(23,1.217248);
   hnumuCCinFV_stack_12->SetBinContent(24,1.270501);
   hnumuCCinFV_stack_12->SetBinContent(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(26,1.857266);
   hnumuCCinFV_stack_12->SetBinError(1,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(2,1.768391);
   hnumuCCinFV_stack_12->SetBinError(3,1.872703);
   hnumuCCinFV_stack_12->SetBinError(4,2.659295);
   hnumuCCinFV_stack_12->SetBinError(5,3.243132);
   hnumuCCinFV_stack_12->SetBinError(6,2.320617);
   hnumuCCinFV_stack_12->SetBinError(7,2.373882);
   hnumuCCinFV_stack_12->SetBinError(8,3.286944);
   hnumuCCinFV_stack_12->SetBinError(9,2.328611);
   hnumuCCinFV_stack_12->SetBinError(10,2.343174);
   hnumuCCinFV_stack_12->SetBinError(11,1.69549);
   hnumuCCinFV_stack_12->SetBinError(12,1.716782);
   hnumuCCinFV_stack_12->SetBinError(13,1.473824);
   hnumuCCinFV_stack_12->SetBinError(14,1.353001);
   hnumuCCinFV_stack_12->SetBinError(15,1.193997);
   hnumuCCinFV_stack_12->SetBinError(16,1.275648);
   hnumuCCinFV_stack_12->SetBinError(17,1.018986);
   hnumuCCinFV_stack_12->SetBinError(18,0.9415746);
   hnumuCCinFV_stack_12->SetBinError(19,0.785313);
   hnumuCCinFV_stack_12->SetBinError(20,0.8083481);
   hnumuCCinFV_stack_12->SetBinError(21,0.6201715);
   hnumuCCinFV_stack_12->SetBinError(22,0.6515799);
   hnumuCCinFV_stack_12->SetBinError(23,0.6211758);
   hnumuCCinFV_stack_12->SetBinError(24,0.5895188);
   hnumuCCinFV_stack_12->SetBinError(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(26,0.6799255);
   hnumuCCinFV_stack_12->SetEntries(963);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(12,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(19,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(26,0.5352025);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
   hnueCCinFV_stack_13->SetBinError(10,0.2781975);
   hnueCCinFV_stack_13->SetBinError(12,0.3921167);
   hnueCCinFV_stack_13->SetBinError(19,0.3921167);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(26,0.3921167);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);
   hmcerror__17->SetBinContent(0,0.01732447);
   hmcerror__17->SetBinContent(1,0.9286332);
   hmcerror__17->SetBinContent(2,13.77378);
   hmcerror__17->SetBinContent(3,44.00553);
   hmcerror__17->SetBinContent(4,80.52873);
   hmcerror__17->SetBinContent(5,108.6807);
   hmcerror__17->SetBinContent(6,111.4682);
   hmcerror__17->SetBinContent(7,103.6254);
   hmcerror__17->SetBinContent(8,97.80249);
   hmcerror__17->SetBinContent(9,78.91025);
   hmcerror__17->SetBinContent(10,69.25494);
   hmcerror__17->SetBinContent(11,51.7491);
   hmcerror__17->SetBinContent(12,39.87617);
   hmcerror__17->SetBinContent(13,34.90557);
   hmcerror__17->SetBinContent(14,28.23579);
   hmcerror__17->SetBinContent(15,20.68368);
   hmcerror__17->SetBinContent(16,18.88807);
   hmcerror__17->SetBinContent(17,14.9633);
   hmcerror__17->SetBinContent(18,10.77879);
   hmcerror__17->SetBinContent(19,7.359318);
   hmcerror__17->SetBinContent(20,6.566227);
   hmcerror__17->SetBinContent(21,4.206943);
   hmcerror__17->SetBinContent(22,2.932743);
   hmcerror__17->SetBinContent(23,3.076205);
   hmcerror__17->SetBinContent(24,1.883476);
   hmcerror__17->SetBinContent(25,1.346583);
   hmcerror__17->SetBinContent(26,5.645776);
   hmcerror__17->SetBinError(0,0.01732447);
   hmcerror__17->SetBinError(1,0.7024967);
   hmcerror__17->SetBinError(2,4.022415);
   hmcerror__17->SetBinError(3,10.60847);
   hmcerror__17->SetBinError(4,19.87285);
   hmcerror__17->SetBinError(5,27.51177);
   hmcerror__17->SetBinError(6,26.10141);
   hmcerror__17->SetBinError(7,22.86775);
   hmcerror__17->SetBinError(8,21.71618);
   hmcerror__17->SetBinError(9,16.97805);
   hmcerror__17->SetBinError(10,14.6737);
   hmcerror__17->SetBinError(11,12.96695);
   hmcerror__17->SetBinError(12,8.969956);
   hmcerror__17->SetBinError(13,8.533007);
   hmcerror__17->SetBinError(14,7.420122);
   hmcerror__17->SetBinError(15,5.448646);
   hmcerror__17->SetBinError(16,4.951944);
   hmcerror__17->SetBinError(17,4.23894);
   hmcerror__17->SetBinError(18,3.394623);
   hmcerror__17->SetBinError(19,2.46045);
   hmcerror__17->SetBinError(20,2.539129);
   hmcerror__17->SetBinError(21,1.897573);
   hmcerror__17->SetBinError(22,1.366425);
   hmcerror__17->SetBinError(23,1.474234);
   hmcerror__17->SetBinError(24,0.9744651);
   hmcerror__17->SetBinError(25,0.8282498);
   hmcerror__17->SetBinError(26,1.935886);
   hmcerror__17->SetEntries(949.5536);

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
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3021[25] = {
   1,
   17,
   89,
   144,
   120,
   104,
   101,
   84,
   52,
   56,
   45,
   29,
   24,
   22,
   20,
   9,
   6,
   6,
   5,
   12,
   3,
   1,
   2,
   0,
   0};
   Double_t _felx3021[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3021[25] = {
   1,
   4.2835,
   9.5566,
   12,
   10.95445,
   10.19804,
   10.04988,
   9.2886,
   7.3419,
   7.6127,
   6.8416,
   5.5285,
   5.0476,
   4.8417,
   4.6266,
   3.19354,
   2.67925,
   2.67925,
   2.48995,
   3.64022,
   2.143368,
   1,
   2,
   0,
   0};
   Double_t _fehx3021[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3021[25] = {
   1.35971,
   4.0673,
   9.3552,
   12,
   10.95445,
   10.19804,
   10.04988,
   9.0869,
   7.1381,
   7.4094,
   6.637,
   5.3201,
   4.837,
   4.6299,
   4.4133,
   2.9582,
   2.41858,
   2.41858,
   2.21064,
   3.4155,
   1.72422,
   1.35971,
   1.51917,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,1980);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=62.8/25","");
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 643.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 16.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 233.0","F");

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
   
   Double_t _fx3022[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
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
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3022[25] = {
   0.7564846,
   0.2920342,
   0.2410712,
   0.2467796,
   0.2531431,
   0.2341602,
   0.2206771,
   0.2220412,
   0.2151565,
   0.2118794,
   0.2505734,
   0.2249453,
   0.2444597,
   0.2627914,
   0.2634274,
   0.2621731,
   0.2832892,
   0.3149355,
   0.3343313,
   0.3866953,
   0.4510576,
   0.4659206,
   0.4792378,
   0.5173759,
   0.6150752};
   Double_t _fehx3022[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3022[25] = {
   0.7564846,
   0.2920342,
   0.2410712,
   0.2467796,
   0.2531431,
   0.2341602,
   0.2206771,
   0.2220412,
   0.2151565,
   0.2118794,
   0.2505734,
   0.2249453,
   0.2444597,
   0.2627914,
   0.2634274,
   0.2621731,
   0.2832892,
   0.3149355,
   0.3343313,
   0.3866953,
   0.4510576,
   0.4659206,
   0.4792378,
   0.5173759,
   0.6150752};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
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
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
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
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3023[25] = {
   0.7564846,
   0.2920342,
   0.2410712,
   0.2467796,
   0.2531431,
   0.2341602,
   0.2206771,
   0.2220412,
   0.2151565,
   0.2118794,
   0.2505734,
   0.2249453,
   0.2444597,
   0.2627914,
   0.2634274,
   0.2621731,
   0.2832892,
   0.3149355,
   0.3343313,
   0.3866953,
   0.4510576,
   0.4659206,
   0.4792378,
   0.5173759,
   0.6150752};
   Double_t _fehx3023[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3023[25] = {
   0.7564846,
   0.2920342,
   0.2410712,
   0.2467796,
   0.2531431,
   0.2341602,
   0.2206771,
   0.2220412,
   0.2151565,
   0.2118794,
   0.2505734,
   0.2249453,
   0.2444597,
   0.2627914,
   0.2634274,
   0.2621731,
   0.2832892,
   0.3149355,
   0.3343313,
   0.3866953,
   0.4510576,
   0.4659206,
   0.4792378,
   0.5173759,
   0.6150752};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
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
   
   Double_t _fx3024[25] = {
   36,
   108,
   180,
   252,
   324,
   396,
   468,
   540,
   612,
   684,
   756,
   828,
   900,
   972,
   1044,
   1116,
   1188,
   1260,
   1332,
   1404,
   1476,
   1548,
   1620,
   1692,
   1764};
   Double_t _fy3024[25] = {
   1.076851,
   1.234229,
   2.022473,
   1.788182,
   1.104152,
   0.9330016,
   0.9746648,
   0.8588738,
   0.6589765,
   0.8086065,
   0.8695803,
   0.7272514,
   0.6875693,
   0.779153,
   0.9669461,
   0.4764913,
   0.4009812,
   0.556649,
   0.6794108,
   1.827534,
   0.713107,
   0.3409777,
   0.6501517,
   0,
   0};
   Double_t _felx3024[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fely3024[25] = {
   1.076851,
   0.3109895,
   0.2171682,
   0.1490151,
   0.1007948,
   0.09148834,
   0.09698278,
   0.09497304,
   0.09304115,
   0.1099228,
   0.1322071,
   0.1386417,
   0.1446073,
   0.1714739,
   0.2236836,
   0.1690771,
   0.1790548,
   0.248567,
   0.3383398,
   0.5543853,
   0.5094835,
   0.3409777,
   0.6501517,
   0,
   0};
   Double_t _fehx3024[25] = {
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36,
   36};
   Double_t _fehy3024[25] = {
   1.464206,
   0.295293,
   0.2125915,
   0.1490151,
   0.1007948,
   0.09148834,
   0.09698278,
   0.09291072,
   0.09045847,
   0.1069873,
   0.1282534,
   0.1334155,
   0.1385739,
   0.1639727,
   0.2133712,
   0.1566174,
   0.1616342,
   0.2243833,
   0.3003865,
   0.5201617,
   0.4098511,
   0.4636308,
   0.4938455,
   0.6094052,
   0.8523798};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,1980);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(2.795163);
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
   
   TH1F *hist__18 = new TH1F("hist__18","CCpi0_FC_0p_bnb_12_cc_transferred_energy_all",25,0,1800);

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
