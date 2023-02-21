#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 18:59:35 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
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
   pad1->Range(-69.23077,-16.14,507.6923,1784.744);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmc__16->SetBinContent(1,601.1469);
   hmc__16->SetBinContent(2,714.3282);
   hmc__16->SetBinContent(3,557.8486);
   hmc__16->SetBinContent(4,387.1358);
   hmc__16->SetBinContent(5,226.1065);
   hmc__16->SetBinContent(6,125.7137);
   hmc__16->SetBinContent(7,79.77051);
   hmc__16->SetBinContent(8,40.11839);
   hmc__16->SetBinContent(9,19.04799);
   hmc__16->SetBinContent(10,19.11797);
   hmc__16->SetBinContent(11,10.92426);
   hmc__16->SetBinContent(12,6.323501);
   hmc__16->SetBinContent(13,3.536737);
   hmc__16->SetBinContent(14,0.8764806);
   hmc__16->SetBinContent(15,1.516835);
   hmc__16->SetBinContent(16,2.383031);
   hmc__16->SetBinError(1,144.6435);
   hmc__16->SetBinError(2,161.071);
   hmc__16->SetBinError(3,134.7634);
   hmc__16->SetBinError(4,98.03543);
   hmc__16->SetBinError(5,62.60384);
   hmc__16->SetBinError(6,38.00791);
   hmc__16->SetBinError(7,28.94514);
   hmc__16->SetBinError(8,15.68291);
   hmc__16->SetBinError(9,8.930481);
   hmc__16->SetBinError(10,12.34083);
   hmc__16->SetBinError(11,7.823579);
   hmc__16->SetBinError(12,6.814825);
   hmc__16->SetBinError(13,7.046456);
   hmc__16->SetBinError(14,1.791929);
   hmc__16->SetBinError(15,5.353772);
   hmc__16->SetBinError(16,5.70467);
   hmc__16->SetMinimum(-16.14);
   hmc__16->SetMaximum(1694.7);
   hmc__16->SetEntries(2916.026);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",15,0,450);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(750.0447);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hbadmatch_stack_1->SetBinContent(1,15.3658);
   hbadmatch_stack_1->SetBinContent(2,17.91098);
   hbadmatch_stack_1->SetBinContent(3,15.29226);
   hbadmatch_stack_1->SetBinContent(4,9.158313);
   hbadmatch_stack_1->SetBinContent(5,3.403696);
   hbadmatch_stack_1->SetBinContent(6,1.307615);
   hbadmatch_stack_1->SetBinContent(7,0.8276445);
   hbadmatch_stack_1->SetBinContent(8,0.3520326);
   hbadmatch_stack_1->SetBinContent(9,0.4212931);
   hbadmatch_stack_1->SetBinContent(16,0.5610657);
   hbadmatch_stack_1->SetBinError(1,2.067177);
   hbadmatch_stack_1->SetBinError(2,2.782683);
   hbadmatch_stack_1->SetBinError(3,2.053976);
   hbadmatch_stack_1->SetBinError(4,1.572852);
   hbadmatch_stack_1->SetBinError(5,1.818136);
   hbadmatch_stack_1->SetBinError(6,0.5467372);
   hbadmatch_stack_1->SetBinError(7,0.4154996);
   hbadmatch_stack_1->SetBinError(8,0.2601217);
   hbadmatch_stack_1->SetBinError(9,0.29855);
   hbadmatch_stack_1->SetBinError(16,0.5610657);
   hbadmatch_stack_1->SetEntries(254);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hext_stack_2->SetBinContent(1,85.11739);
   hext_stack_2->SetBinContent(2,92.04117);
   hext_stack_2->SetBinContent(3,49.09083);
   hext_stack_2->SetBinContent(4,32.06161);
   hext_stack_2->SetBinContent(5,8.421607);
   hext_stack_2->SetBinContent(6,6.881822);
   hext_stack_2->SetBinContent(7,2.841783);
   hext_stack_2->SetBinContent(8,0.7309963);
   hext_stack_2->SetBinContent(9,0.8131978);
   hext_stack_2->SetBinContent(10,0.3243973);
   hext_stack_2->SetBinError(1,6.305344);
   hext_stack_2->SetBinError(2,6.519338);
   hext_stack_2->SetBinError(3,4.581078);
   hext_stack_2->SetBinError(4,3.947184);
   hext_stack_2->SetBinError(5,1.89998);
   hext_stack_2->SetBinError(6,1.773089);
   hext_stack_2->SetBinError(7,1.011007);
   hext_stack_2->SetBinError(8,0.5201503);
   hext_stack_2->SetBinError(9,0.5750177);
   hext_stack_2->SetBinError(10,0.3243973);
   hext_stack_2->SetEntries(657);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hdirt_stack_3->SetBinContent(1,10.93194);
   hdirt_stack_3->SetBinContent(2,13.33204);
   hdirt_stack_3->SetBinContent(3,7.113974);
   hdirt_stack_3->SetBinContent(4,4.482929);
   hdirt_stack_3->SetBinContent(5,1.728089);
   hdirt_stack_3->SetBinContent(6,0.2188956);
   hdirt_stack_3->SetBinError(1,1.740702);
   hdirt_stack_3->SetBinError(2,1.859374);
   hdirt_stack_3->SetBinError(3,1.450461);
   hdirt_stack_3->SetBinError(4,1.472239);
   hdirt_stack_3->SetBinError(5,0.7009196);
   hdirt_stack_3->SetBinError(6,0.2188956);
   hdirt_stack_3->SetEntries(156);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   houtFV_stack_4->SetBinContent(1,69.18817);
   houtFV_stack_4->SetBinContent(2,89.32327);
   houtFV_stack_4->SetBinContent(3,66.96613);
   houtFV_stack_4->SetBinContent(4,29.81173);
   houtFV_stack_4->SetBinContent(5,12.82674);
   houtFV_stack_4->SetBinContent(6,8.290123);
   houtFV_stack_4->SetBinContent(7,4.350722);
   houtFV_stack_4->SetBinContent(8,1.868591);
   houtFV_stack_4->SetBinContent(9,0.7481259);
   houtFV_stack_4->SetBinContent(10,0.5352025);
   houtFV_stack_4->SetBinContent(12,0.1967154);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinError(1,4.190685);
   houtFV_stack_4->SetBinError(2,4.733249);
   houtFV_stack_4->SetBinError(3,4.101999);
   houtFV_stack_4->SetBinError(4,2.715249);
   houtFV_stack_4->SetBinError(5,1.777176);
   houtFV_stack_4->SetBinError(6,1.441952);
   houtFV_stack_4->SetBinError(7,1.034413);
   houtFV_stack_4->SetBinError(8,0.7032302);
   houtFV_stack_4->SetBinError(9,0.4461357);
   houtFV_stack_4->SetBinError(10,0.3921167);
   houtFV_stack_4->SetBinError(12,0.1967154);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetEntries(1301);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,19.54927);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,22.07241);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,15.46779);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.78659);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.39601);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.407566);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.741515);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.296406);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2723469);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.104168);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8766301);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2761841);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.718838);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.710995);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.285384);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.273659);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.344858);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9106713);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7908757);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.706882);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.086362);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4097263);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5741882);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1774902);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.181038);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.45709);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.900859);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7860304);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2442215);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.362224);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.06563845);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.04146549);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3215347);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3659892);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4296111);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2759878);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1317879);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1635564);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03300438);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02971407);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01715503);
   hNCpi0inFVqe_stack_6->SetEntries(157);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVres_stack_7->SetBinContent(1,223.5974);
   hNCpi0inFVres_stack_7->SetBinContent(2,269.4105);
   hNCpi0inFVres_stack_7->SetBinContent(3,211.48);
   hNCpi0inFVres_stack_7->SetBinContent(4,148.605);
   hNCpi0inFVres_stack_7->SetBinContent(5,88.73846);
   hNCpi0inFVres_stack_7->SetBinContent(6,43.70379);
   hNCpi0inFVres_stack_7->SetBinContent(7,23.50249);
   hNCpi0inFVres_stack_7->SetBinContent(8,12.08707);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.983811);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.663187);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.690252);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.354924);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.5536787);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.2115766);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1094298);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1074755);
   hNCpi0inFVres_stack_7->SetBinError(1,5.232283);
   hNCpi0inFVres_stack_7->SetBinError(2,5.629129);
   hNCpi0inFVres_stack_7->SetBinError(3,4.981283);
   hNCpi0inFVres_stack_7->SetBinError(4,4.276178);
   hNCpi0inFVres_stack_7->SetBinError(5,3.168517);
   hNCpi0inFVres_stack_7->SetBinError(6,2.152306);
   hNCpi0inFVres_stack_7->SetBinError(7,1.638447);
   hNCpi0inFVres_stack_7->SetBinError(8,1.133789);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8904054);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8558129);
   hNCpi0inFVres_stack_7->SetBinError(11,1.032843);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4693263);
   hNCpi0inFVres_stack_7->SetBinError(13,0.1805014);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1100337);
   hNCpi0inFVres_stack_7->SetBinError(15,0.06832725);
   hNCpi0inFVres_stack_7->SetBinError(16,0.08432478);
   hNCpi0inFVres_stack_7->SetEntries(21515);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVdis_stack_8->SetBinContent(1,37.16195);
   hNCpi0inFVdis_stack_8->SetBinContent(2,48.53406);
   hNCpi0inFVdis_stack_8->SetBinContent(3,43.46127);
   hNCpi0inFVdis_stack_8->SetBinContent(4,29.88132);
   hNCpi0inFVdis_stack_8->SetBinContent(5,17.09406);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.76828);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.732131);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.418451);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.880206);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.372199);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8067703);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.044603);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.07644836);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1402847);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.1109873);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.170539);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.401726);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.247546);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.041742);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.358069);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.03955);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8702809);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7298522);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3208773);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6816141);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2459733);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4624439);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.06198963);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.08435593);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.08764647);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1472722);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1080158);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1303248);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.05278754);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06358271);
   hNCpi0inFVmec_stack_9->SetEntries(10);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hCCpi0inFV_stack_10->SetBinContent(1,59.61232);
   hCCpi0inFV_stack_10->SetBinContent(2,82.55667);
   hCCpi0inFV_stack_10->SetBinContent(3,76.43317);
   hCCpi0inFV_stack_10->SetBinContent(4,63.89379);
   hCCpi0inFV_stack_10->SetBinContent(5,47.17034);
   hCCpi0inFV_stack_10->SetBinContent(6,21.80373);
   hCCpi0inFV_stack_10->SetBinContent(7,17.20263);
   hCCpi0inFV_stack_10->SetBinContent(8,8.605977);
   hCCpi0inFV_stack_10->SetBinContent(9,5.518546);
   hCCpi0inFV_stack_10->SetBinContent(10,3.234274);
   hCCpi0inFV_stack_10->SetBinContent(11,2.195754);
   hCCpi0inFV_stack_10->SetBinContent(12,1.125349);
   hCCpi0inFV_stack_10->SetBinContent(13,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(15,1.26712);
   hCCpi0inFV_stack_10->SetBinContent(16,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,3.814644);
   hCCpi0inFV_stack_10->SetBinError(2,4.517827);
   hCCpi0inFV_stack_10->SetBinError(3,4.372198);
   hCCpi0inFV_stack_10->SetBinError(4,4.04679);
   hCCpi0inFV_stack_10->SetBinError(5,3.437087);
   hCCpi0inFV_stack_10->SetBinError(6,2.284166);
   hCCpi0inFV_stack_10->SetBinError(7,2.153299);
   hCCpi0inFV_stack_10->SetBinError(8,1.442239);
   hCCpi0inFV_stack_10->SetBinError(9,1.193827);
   hCCpi0inFV_stack_10->SetBinError(10,0.8562577);
   hCCpi0inFV_stack_10->SetBinError(11,0.7598403);
   hCCpi0inFV_stack_10->SetBinError(12,0.5194673);
   hCCpi0inFV_stack_10->SetBinError(13,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(15,0.5883944);
   hCCpi0inFV_stack_10->SetBinError(16,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(1685);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCinFV_stack_11->SetBinContent(1,37.64377);
   hNCinFV_stack_11->SetBinContent(2,36.36883);
   hNCinFV_stack_11->SetBinContent(3,33.23701);
   hNCinFV_stack_11->SetBinContent(4,29.1895);
   hNCinFV_stack_11->SetBinContent(5,19.10431);
   hNCinFV_stack_11->SetBinContent(6,13.20349);
   hNCinFV_stack_11->SetBinContent(7,11.90839);
   hNCinFV_stack_11->SetBinContent(8,4.204974);
   hNCinFV_stack_11->SetBinContent(9,1.736139);
   hNCinFV_stack_11->SetBinContent(10,4.397134);
   hNCinFV_stack_11->SetBinContent(11,2.227819);
   hNCinFV_stack_11->SetBinContent(12,1.71648);
   hNCinFV_stack_11->SetBinContent(13,0.9544964);
   hNCinFV_stack_11->SetBinContent(14,0.3917402);
   hNCinFV_stack_11->SetBinContent(16,1.112754);
   hNCinFV_stack_11->SetBinError(1,3.171738);
   hNCinFV_stack_11->SetBinError(2,3.065315);
   hNCinFV_stack_11->SetBinError(3,2.840546);
   hNCinFV_stack_11->SetBinError(4,2.886744);
   hNCinFV_stack_11->SetBinError(5,2.329938);
   hNCinFV_stack_11->SetBinError(6,1.814596);
   hNCinFV_stack_11->SetBinError(7,2.209209);
   hNCinFV_stack_11->SetBinError(8,1.237588);
   hNCinFV_stack_11->SetBinError(9,0.6076187);
   hNCinFV_stack_11->SetBinError(10,1.269369);
   hNCinFV_stack_11->SetBinError(11,0.9534236);
   hNCinFV_stack_11->SetBinError(12,0.8505322);
   hNCinFV_stack_11->SetBinError(13,0.6262496);
   hNCinFV_stack_11->SetBinError(14,0.2770047);
   hNCinFV_stack_11->SetBinError(16,0.6971608);
   hNCinFV_stack_11->SetEntries(844);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnumuCCinFV_stack_12->SetBinContent(1,32.4982);
   hnumuCCinFV_stack_12->SetBinContent(2,35.08863);
   hnumuCCinFV_stack_12->SetBinContent(3,34.5545);
   hnumuCCinFV_stack_12->SetBinContent(4,23.19274);
   hnumuCCinFV_stack_12->SetBinContent(5,15.46051);
   hnumuCCinFV_stack_12->SetBinContent(6,11.64085);
   hnumuCCinFV_stack_12->SetBinContent(7,7.52158);
   hnumuCCinFV_stack_12->SetBinContent(8,4.624711);
   hnumuCCinFV_stack_12->SetBinContent(9,1.65717);
   hnumuCCinFV_stack_12->SetBinContent(10,1.402996);
   hnumuCCinFV_stack_12->SetBinContent(11,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(12,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(13,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(16,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,3.286679);
   hnumuCCinFV_stack_12->SetBinError(2,3.56715);
   hnumuCCinFV_stack_12->SetBinError(3,3.566893);
   hnumuCCinFV_stack_12->SetBinError(4,2.693121);
   hnumuCCinFV_stack_12->SetBinError(5,2.177199);
   hnumuCCinFV_stack_12->SetBinError(6,1.752192);
   hnumuCCinFV_stack_12->SetBinError(7,1.423454);
   hnumuCCinFV_stack_12->SetBinError(8,1.099649);
   hnumuCCinFV_stack_12->SetBinError(9,0.6498287);
   hnumuCCinFV_stack_12->SetBinError(10,0.5309165);
   hnumuCCinFV_stack_12->SetBinError(11,0.340721);
   hnumuCCinFV_stack_12->SetBinError(12,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(13,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(16,0.1967154);
   hnumuCCinFV_stack_12->SetEntries(662);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnueCCinFV_stack_13->SetBinContent(1,9.152365);
   hnueCCinFV_stack_13->SetBinContent(2,6.124625);
   hnueCCinFV_stack_13->SetBinContent(3,2.816259);
   hnueCCinFV_stack_13->SetBinContent(4,3.286289);
   hnueCCinFV_stack_13->SetBinContent(5,1.454845);
   hnueCCinFV_stack_13->SetBinContent(6,1.125349);
   hnueCCinFV_stack_13->SetBinContent(7,1.075993);
   hnueCCinFV_stack_13->SetBinContent(8,0.8877128);
   hnueCCinFV_stack_13->SetBinContent(10,1.084408);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.41253);
   hnueCCinFV_stack_13->SetBinError(1,2.330474);
   hnueCCinFV_stack_13->SetBinError(2,1.350577);
   hnueCCinFV_stack_13->SetBinError(3,0.9168805);
   hnueCCinFV_stack_13->SetBinError(4,1.50396);
   hnueCCinFV_stack_13->SetBinError(5,0.6092733);
   hnueCCinFV_stack_13->SetBinError(6,0.5194673);
   hnueCCinFV_stack_13->SetBinError(7,1.075993);
   hnueCCinFV_stack_13->SetBinError(8,0.4469403);
   hnueCCinFV_stack_13->SetBinError(10,0.6604876);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.2921355);
   hnueCCinFV_stack_13->SetEntries(97);

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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmcerror__17->SetBinContent(1,601.1469);
   hmcerror__17->SetBinContent(2,714.3282);
   hmcerror__17->SetBinContent(3,557.8486);
   hmcerror__17->SetBinContent(4,387.1358);
   hmcerror__17->SetBinContent(5,226.1065);
   hmcerror__17->SetBinContent(6,125.7137);
   hmcerror__17->SetBinContent(7,79.77051);
   hmcerror__17->SetBinContent(8,40.11839);
   hmcerror__17->SetBinContent(9,19.04799);
   hmcerror__17->SetBinContent(10,19.11797);
   hmcerror__17->SetBinContent(11,10.92426);
   hmcerror__17->SetBinContent(12,6.323501);
   hmcerror__17->SetBinContent(13,3.536737);
   hmcerror__17->SetBinContent(14,0.8764806);
   hmcerror__17->SetBinContent(15,1.516835);
   hmcerror__17->SetBinContent(16,2.383031);
   hmcerror__17->SetBinError(1,144.6435);
   hmcerror__17->SetBinError(2,161.071);
   hmcerror__17->SetBinError(3,134.7634);
   hmcerror__17->SetBinError(4,98.03543);
   hmcerror__17->SetBinError(5,62.60384);
   hmcerror__17->SetBinError(6,38.00791);
   hmcerror__17->SetBinError(7,28.94514);
   hmcerror__17->SetBinError(8,15.68291);
   hmcerror__17->SetBinError(9,8.930481);
   hmcerror__17->SetBinError(10,12.34083);
   hmcerror__17->SetBinError(11,7.823579);
   hmcerror__17->SetBinError(12,6.814825);
   hmcerror__17->SetBinError(13,7.046456);
   hmcerror__17->SetBinError(14,1.791929);
   hmcerror__17->SetBinError(15,5.353772);
   hmcerror__17->SetBinError(16,5.70467);
   hmcerror__17->SetEntries(2916.026);

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
   
   Double_t _fx3021[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3021[15] = {
   634,
   807,
   610,
   403,
   209,
   118,
   58,
   37,
   18,
   20,
   8,
   7,
   3,
   0,
   3};
   Double_t _felx3021[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3021[15] = {
   25.17936,
   28.40775,
   24.69818,
   20.07486,
   14.45683,
   10.86278,
   7.7446,
   6.2203,
   4.4008,
   4.6266,
   3.0307,
   2.85954,
   2.143368,
   0,
   2.143368};
   Double_t _fehx3021[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3021[15] = {
   25.17936,
   28.40775,
   24.69818,
   20.07486,
   14.45683,
   10.86278,
   7.5415,
   6.0141,
   4.1858,
   4.4133,
   2.7896,
   2.61053,
   1.72422,
   1.1478,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,495);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(918.9485);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.05#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.0/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2935.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 64.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 284.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  95.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1037.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  204.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 391.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 196.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 168.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-69.3,-0.5333333,508.2,2.133333);
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
   
   Double_t _fx3022[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3022[15] = {
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
   Double_t _felx3022[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3022[15] = {
   0.2406125,
   0.225486,
   0.2415771,
   0.2532326,
   0.2768777,
   0.302337,
   0.3628551,
   0.3909158,
   0.4688411,
   0.6455096,
   0.7161653,
   1.077698,
   1.992361,
   2.044459,
   3.529568};
   Double_t _fehx3022[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3022[15] = {
   0.2406125,
   0.225486,
   0.2415771,
   0.2532326,
   0.2768777,
   0.302337,
   0.3628551,
   0.3909158,
   0.4688411,
   0.6455096,
   0.7161653,
   1.077698,
   1.992361,
   2.044459,
   3.529568};
   grae = new TGraphAsymmErrors(15,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,495);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3023[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3023[15] = {
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
   Double_t _felx3023[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3023[15] = {
   0.1984283,
   0.2013637,
   0.2139519,
   0.2217367,
   0.2378556,
   0.2603483,
   0.2744155,
   0.2731682,
   0.2745233,
   0.2762869,
   0.4246972,
   0.4035485,
   0.4190677,
   0.8017721,
   0.5766124};
   Double_t _fehx3023[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3023[15] = {
   0.1984283,
   0.2013637,
   0.2139519,
   0.2217367,
   0.2378556,
   0.2603483,
   0.2744155,
   0.2731682,
   0.2745233,
   0.2762869,
   0.4246972,
   0.4035485,
   0.4190677,
   0.8017721,
   0.5766124};
   grae = new TGraphAsymmErrors(15,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,495);
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
   
   Double_t _fx3024[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3024[15] = {
   1.054651,
   1.129733,
   1.093487,
   1.040978,
   0.9243432,
   0.9386405,
   0.7270858,
   0.9222703,
   0.9449816,
   1.046136,
   0.7323148,
   1.106982,
   0.8482395,
   0,
   1.977803};
   Double_t _felx3024[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3024[15] = {
   0.04188553,
   0.03976848,
   0.04427398,
   0.05185482,
   0.06393816,
   0.08640886,
   0.09708601,
   0.1550486,
   0.2310375,
   0.2420027,
   0.2774283,
   0.4522084,
   0.6060298,
   0,
   1.413053};
   Double_t _fehx3024[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3024[15] = {
   0.04188553,
   0.03976848,
   0.04427398,
   0.05185482,
   0.06393816,
   0.08640886,
   0.09453995,
   0.1499088,
   0.2197502,
   0.2308457,
   0.2553582,
   0.4128299,
   0.4875172,
   1.309556,
   1.136722};
   grae = new TGraphAsymmErrors(15,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,495);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(3.425977);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_low_all",15,0,450);

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
   TLine *line = new TLine(0,1,450,1);
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
