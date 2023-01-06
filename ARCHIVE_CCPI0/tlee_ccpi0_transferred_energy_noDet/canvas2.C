#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed Sep 28 16:06:58 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-276.9231,-6.920461,2030.769,765.2573);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmc__4->SetBinContent(0,0.04249);
   hmc__4->SetBinContent(1,2.187942);
   hmc__4->SetBinContent(2,31.25583);
   hmc__4->SetBinContent(3,109.1886);
   hmc__4->SetBinContent(4,251.9255);
   hmc__4->SetBinContent(5,335.8141);
   hmc__4->SetBinContent(6,346.0231);
   hmc__4->SetBinContent(7,340.8323);
   hmc__4->SetBinContent(8,293.4506);
   hmc__4->SetBinContent(9,224.8404);
   hmc__4->SetBinContent(10,191.4742);
   hmc__4->SetBinContent(11,147.7279);
   hmc__4->SetBinContent(12,115.9869);
   hmc__4->SetBinContent(13,90.98618);
   hmc__4->SetBinContent(14,65.63094);
   hmc__4->SetBinContent(15,41.59793);
   hmc__4->SetBinContent(16,33.34322);
   hmc__4->SetBinContent(17,23.95499);
   hmc__4->SetBinContent(18,19.89088);
   hmc__4->SetBinContent(19,13.43495);
   hmc__4->SetBinContent(20,10.5612);
   hmc__4->SetBinContent(21,26.32956);
   hmc__4->SetBinError(0,0.03055227);
   hmc__4->SetBinError(1,1.065425);
   hmc__4->SetBinError(2,6.851023);
   hmc__4->SetBinError(3,26.98902);
   hmc__4->SetBinError(4,65.24773);
   hmc__4->SetBinError(5,87.53242);
   hmc__4->SetBinError(6,84.00614);
   hmc__4->SetBinError(7,85.27444);
   hmc__4->SetBinError(8,66.10337);
   hmc__4->SetBinError(9,54.6417);
   hmc__4->SetBinError(10,43.7585);
   hmc__4->SetBinError(11,35.77788);
   hmc__4->SetBinError(12,27.37319);
   hmc__4->SetBinError(13,21.12947);
   hmc__4->SetBinError(14,16.34654);
   hmc__4->SetBinError(15,10.3774);
   hmc__4->SetBinError(16,8.313027);
   hmc__4->SetBinError(17,6.462053);
   hmc__4->SetBinError(18,5.530469);
   hmc__4->SetBinError(19,4.308035);
   hmc__4->SetBinError(20,2.859776);
   hmc__4->SetBinError(21,4.957295);
   hmc__4->SetMinimum(-6.920461);
   hmc__4->SetMaximum(726.6484);
   hmc__4->SetEntries(2705.441);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,1800);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(363.3243);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hbadmatch_stack_1->SetBinContent(2,0.7882675);
   hbadmatch_stack_1->SetBinContent(3,0.6803553);
   hbadmatch_stack_1->SetBinContent(4,0.1028101);
   hbadmatch_stack_1->SetBinContent(5,2.010298);
   hbadmatch_stack_1->SetBinContent(6,1.125349);
   hbadmatch_stack_1->SetBinContent(7,1.01717);
   hbadmatch_stack_1->SetBinContent(8,1.976642);
   hbadmatch_stack_1->SetBinContent(9,0.8753801);
   hbadmatch_stack_1->SetBinContent(10,1.359053);
   hbadmatch_stack_1->SetBinContent(11,0.9303237);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinContent(14,0.536893);
   hbadmatch_stack_1->SetBinContent(15,0.4611332);
   hbadmatch_stack_1->SetBinContent(16,1.373748);
   hbadmatch_stack_1->SetBinContent(17,1.365601);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.4830009);
   hbadmatch_stack_1->SetBinError(3,0.4810838);
   hbadmatch_stack_1->SetBinError(4,0.1028101);
   hbadmatch_stack_1->SetBinError(5,0.7369668);
   hbadmatch_stack_1->SetBinError(6,0.5194673);
   hbadmatch_stack_1->SetBinError(7,0.4560143);
   hbadmatch_stack_1->SetBinError(8,0.672949);
   hbadmatch_stack_1->SetBinError(9,0.5191111);
   hbadmatch_stack_1->SetBinError(10,0.5696053);
   hbadmatch_stack_1->SetBinError(11,0.4814682);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetBinError(14,0.3929602);
   hbadmatch_stack_1->SetBinError(15,0.3610416);
   hbadmatch_stack_1->SetBinError(16,0.7189069);
   hbadmatch_stack_1->SetBinError(17,0.5724686);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hext_stack_2->SetBinContent(2,0.7309963);
   hext_stack_2->SetBinContent(3,0.6487947);
   hext_stack_2->SetBinContent(4,1.779209);
   hext_stack_2->SetBinContent(5,1.544194);
   hext_stack_2->SetBinContent(6,3.704052);
   hext_stack_2->SetBinContent(7,1.290409);
   hext_stack_2->SetBinContent(8,2.916804);
   hext_stack_2->SetBinContent(9,1.704188);
   hext_stack_2->SetBinContent(10,0.6487947);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.7309963);
   hext_stack_2->SetBinContent(13,3.208071);
   hext_stack_2->SetBinContent(14,0.973192);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinError(2,0.5201503);
   hext_stack_2->SetBinError(3,0.4587671);
   hext_stack_2->SetBinError(4,0.9206235);
   hext_stack_2->SetBinError(5,0.7753719);
   hext_stack_2->SetBinError(6,1.443106);
   hext_stack_2->SetBinError(7,0.788756);
   hext_stack_2->SetBinError(8,1.132884);
   hext_stack_2->SetBinError(9,0.7656743);
   hext_stack_2->SetBinError(10,0.4587671);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.5201503);
   hext_stack_2->SetBinError(13,1.434693);
   hext_stack_2->SetBinError(14,0.5618727);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetEntries(52);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hdirt_stack_3->SetBinContent(4,0.2544535);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2574102);
   hdirt_stack_3->SetBinError(4,0.2544535);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2574102);
   hdirt_stack_3->SetEntries(3);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   houtFV_stack_4->SetBinContent(2,0.2448018);
   houtFV_stack_4->SetBinContent(3,0.5447429);
   houtFV_stack_4->SetBinContent(4,0.536893);
   houtFV_stack_4->SetBinContent(5,0.7336084);
   houtFV_stack_4->SetBinContent(6,1.518779);
   houtFV_stack_4->SetBinContent(7,1.175237);
   houtFV_stack_4->SetBinContent(8,0.8753801);
   houtFV_stack_4->SetBinContent(9,0.6107302);
   houtFV_stack_4->SetBinContent(10,0.1950248);
   houtFV_stack_4->SetBinContent(11,0.5867651);
   houtFV_stack_4->SetBinContent(13,0.6469922);
   houtFV_stack_4->SetBinError(2,0.2448018);
   houtFV_stack_4->SetBinError(3,0.3872892);
   houtFV_stack_4->SetBinError(4,0.3929602);
   houtFV_stack_4->SetBinError(5,0.4394482);
   houtFV_stack_4->SetBinError(6,0.5892709);
   houtFV_stack_4->SetBinError(7,0.5406636);
   houtFV_stack_4->SetBinError(8,0.5191111);
   houtFV_stack_4->SetBinError(9,0.3993243);
   houtFV_stack_4->SetBinError(10,0.1950249);
   houtFV_stack_4->SetBinError(11,0.3387718);
   houtFV_stack_4->SetBinError(13,0.3766765);
   houtFV_stack_4->SetEntries(33);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
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

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1970327);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1714184);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1021583);
   hNCpi0inFVqe_stack_6->SetEntries(4);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.3738979);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.010937);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.671314);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.499298);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.080687);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.140266);
   hNCpi0inFVres_stack_7->SetBinContent(8,8.093148);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.401603);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.34763);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.32678);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.343783);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.543077);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.97468);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.566397);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.036418);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.5455233);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2647452);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.3867158);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.181018);
   hNCpi0inFVres_stack_7->SetBinError(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.1227359);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3487987);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4074677);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7224892);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8699805);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6080621);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9344174);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7812134);
   hNCpi0inFVres_stack_7->SetBinError(10,1.077795);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8731036);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5227127);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5907665);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6106845);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5402342);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5741142);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2430386);
   hNCpi0inFVres_stack_7->SetBinError(18,0.12858);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2287519);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1086555);
   hNCpi0inFVres_stack_7->SetEntries(1121);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.4047961);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.710922);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.538152);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.173415);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.39669);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.066165);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.280298);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.896073);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.764756);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.900924);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.173557);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.313277);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.882744);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.59827);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.9765555);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.142698);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.8891798);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.7430466);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.7391858);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1945494);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.649771);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6086083);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7481169);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.55565);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6395722);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7736335);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8013432);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.785728);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7654138);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7931747);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6825548);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4260699);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4968333);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3330944);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.348361);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6165838);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3712747);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2452205);
   hNCpi0inFVdis_stack_8->SetEntries(863);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(2,13.00763);
   hCCpi0inFV_stack_10->SetBinContent(3,80.10044);
   hCCpi0inFV_stack_10->SetBinContent(4,204.922);
   hCCpi0inFV_stack_10->SetBinContent(5,279.1045);
   hCCpi0inFV_stack_10->SetBinContent(6,277.8308);
   hCCpi0inFV_stack_10->SetBinContent(7,279.7154);
   hCCpi0inFV_stack_10->SetBinContent(8,228.0744);
   hCCpi0inFV_stack_10->SetBinContent(9,178.0903);
   hCCpi0inFV_stack_10->SetBinContent(10,149.5433);
   hCCpi0inFV_stack_10->SetBinContent(11,119.0358);
   hCCpi0inFV_stack_10->SetBinContent(12,91.25948);
   hCCpi0inFV_stack_10->SetBinContent(13,67.79846);
   hCCpi0inFV_stack_10->SetBinContent(14,48.35686);
   hCCpi0inFV_stack_10->SetBinContent(15,32.50683);
   hCCpi0inFV_stack_10->SetBinContent(16,23.3861);
   hCCpi0inFV_stack_10->SetBinContent(17,18.32608);
   hCCpi0inFV_stack_10->SetBinContent(18,15.40411);
   hCCpi0inFV_stack_10->SetBinContent(19,10.01487);
   hCCpi0inFV_stack_10->SetBinContent(20,7.767552);
   hCCpi0inFV_stack_10->SetBinContent(21,19.9844);
   hCCpi0inFV_stack_10->SetBinError(1,0.340721);
   hCCpi0inFV_stack_10->SetBinError(2,1.79965);
   hCCpi0inFV_stack_10->SetBinError(3,4.492684);
   hCCpi0inFV_stack_10->SetBinError(4,7.223561);
   hCCpi0inFV_stack_10->SetBinError(5,8.362796);
   hCCpi0inFV_stack_10->SetBinError(6,8.377509);
   hCCpi0inFV_stack_10->SetBinError(7,8.419466);
   hCCpi0inFV_stack_10->SetBinError(8,7.567564);
   hCCpi0inFV_stack_10->SetBinError(9,6.691913);
   hCCpi0inFV_stack_10->SetBinError(10,6.115311);
   hCCpi0inFV_stack_10->SetBinError(11,5.473989);
   hCCpi0inFV_stack_10->SetBinError(12,4.788484);
   hCCpi0inFV_stack_10->SetBinError(13,4.220372);
   hCCpi0inFV_stack_10->SetBinError(14,3.553715);
   hCCpi0inFV_stack_10->SetBinError(15,2.820426);
   hCCpi0inFV_stack_10->SetBinError(16,2.450605);
   hCCpi0inFV_stack_10->SetBinError(17,2.150335);
   hCCpi0inFV_stack_10->SetBinError(18,1.979785);
   hCCpi0inFV_stack_10->SetBinError(19,1.581968);
   hCCpi0inFV_stack_10->SetBinError(20,1.401518);
   hCCpi0inFV_stack_10->SetBinError(21,2.230649);
   hCCpi0inFV_stack_10->SetEntries(9150);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCinFV_stack_11->SetBinContent(3,1.375317);
   hNCinFV_stack_11->SetBinContent(4,2.876109);
   hNCinFV_stack_11->SetBinContent(5,1.17353);
   hNCinFV_stack_11->SetBinContent(6,3.175949);
   hNCinFV_stack_11->SetBinContent(7,3.319412);
   hNCinFV_stack_11->SetBinContent(8,4.253116);
   hNCinFV_stack_11->SetBinContent(9,1.517089);
   hNCinFV_stack_11->SetBinContent(10,2.252388);
   hNCinFV_stack_11->SetBinContent(11,1.072095);
   hNCinFV_stack_11->SetBinContent(12,2.002419);
   hNCinFV_stack_11->SetBinContent(13,1.073786);
   hNCinFV_stack_11->SetBinContent(14,0.7319179);
   hNCinFV_stack_11->SetBinContent(15,1.127039);
   hNCinFV_stack_11->SetBinContent(16,0.6803553);
   hNCinFV_stack_11->SetBinContent(20,0.5867651);
   hNCinFV_stack_11->SetBinContent(21,0.8770706);
   hNCinFV_stack_11->SetBinError(3,0.5198233);
   hNCinFV_stack_11->SetBinError(4,0.8993325);
   hNCinFV_stack_11->SetBinError(5,0.4790957);
   hNCinFV_stack_11->SetBinError(6,0.8772215);
   hNCinFV_stack_11->SetBinError(7,0.9200768);
   hNCinFV_stack_11->SetBinError(8,1.039075);
   hNCinFV_stack_11->SetBinError(9,0.5887087);
   hNCinFV_stack_11->SetBinError(10,0.7350883);
   hNCinFV_stack_11->SetBinError(11,0.5551335);
   hNCinFV_stack_11->SetBinError(12,0.7348366);
   hNCinFV_stack_11->SetBinError(13,0.5557297);
   hNCinFV_stack_11->SetBinError(14,0.438694);
   hNCinFV_stack_11->SetBinError(15,0.5201044);
   hNCinFV_stack_11->SetBinError(16,0.4810838);
   hNCinFV_stack_11->SetBinError(20,0.3387718);
   hNCinFV_stack_11->SetBinError(21,0.5197486);
   hNCinFV_stack_11->SetEntries(119);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(1,1.597796);
   hnumuCCinFV_stack_12->SetBinContent(2,15.68721);
   hnumuCCinFV_stack_12->SetBinContent(3,22.11704);
   hnumuCCinFV_stack_12->SetBinContent(4,36.24458);
   hnumuCCinFV_stack_12->SetBinContent(5,41.36363);
   hnumuCCinFV_stack_12->SetBinContent(6,48.60239);
   hnumuCCinFV_stack_12->SetBinContent(7,44.68362);
   hnumuCCinFV_stack_12->SetBinContent(8,40.94831);
   hnumuCCinFV_stack_12->SetBinContent(9,32.50961);
   hnumuCCinFV_stack_12->SetBinContent(10,25.24625);
   hnumuCCinFV_stack_12->SetBinContent(11,17.55085);
   hnumuCCinFV_stack_12->SetBinContent(12,15.13646);
   hnumuCCinFV_stack_12->SetBinContent(13,11.07301);
   hnumuCCinFV_stack_12->SetBinContent(14,10.63776);
   hnumuCCinFV_stack_12->SetBinContent(15,4.143229);
   hnumuCCinFV_stack_12->SetBinContent(16,4.623837);
   hnumuCCinFV_stack_12->SetBinContent(17,2.250697);
   hnumuCCinFV_stack_12->SetBinContent(18,2.449103);
   hnumuCCinFV_stack_12->SetBinContent(19,2.144191);
   hnumuCCinFV_stack_12->SetBinContent(20,1.073786);
   hnumuCCinFV_stack_12->SetBinContent(21,3.280765);
   hnumuCCinFV_stack_12->SetBinError(1,0.66515);
   hnumuCCinFV_stack_12->SetBinError(2,2.196527);
   hnumuCCinFV_stack_12->SetBinError(3,2.443095);
   hnumuCCinFV_stack_12->SetBinError(4,4.124773);
   hnumuCCinFV_stack_12->SetBinError(5,3.325167);
   hnumuCCinFV_stack_12->SetBinError(6,4.326437);
   hnumuCCinFV_stack_12->SetBinError(7,3.498145);
   hnumuCCinFV_stack_12->SetBinError(8,3.41195);
   hnumuCCinFV_stack_12->SetBinError(9,2.926662);
   hnumuCCinFV_stack_12->SetBinError(10,2.496659);
   hnumuCCinFV_stack_12->SetBinError(11,2.1359);
   hnumuCCinFV_stack_12->SetBinError(12,1.9787);
   hnumuCCinFV_stack_12->SetBinError(13,1.65923);
   hnumuCCinFV_stack_12->SetBinError(14,1.709788);
   hnumuCCinFV_stack_12->SetBinError(15,1.074712);
   hnumuCCinFV_stack_12->SetBinError(16,1.211529);
   hnumuCCinFV_stack_12->SetBinError(17,0.7346377);
   hnumuCCinFV_stack_12->SetBinError(18,0.7609545);
   hnumuCCinFV_stack_12->SetBinError(19,0.7850774);
   hnumuCCinFV_stack_12->SetBinError(20,0.5557297);
   hnumuCCinFV_stack_12->SetBinError(21,0.8319864);
   hnumuCCinFV_stack_12->SetEntries(1596);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(10,1.070405);
   hnueCCinFV_stack_13->SetBinContent(13,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(16,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(18,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(20,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(21,0.9269427);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.3921167);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.4814682);
   hnueCCinFV_stack_13->SetBinError(10,0.5545368);
   hnueCCinFV_stack_13->SetBinError(13,0.4810838);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(16,0.3921167);
   hnueCCinFV_stack_13->SetBinError(18,0.4394482);
   hnueCCinFV_stack_13->SetBinError(20,0.2758068);
   hnueCCinFV_stack_13->SetBinError(21,0.4800908);
   hnueCCinFV_stack_13->SetEntries(28);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmcerror__5->SetBinContent(0,0.04249);
   hmcerror__5->SetBinContent(1,2.187942);
   hmcerror__5->SetBinContent(2,31.25583);
   hmcerror__5->SetBinContent(3,109.1886);
   hmcerror__5->SetBinContent(4,251.9255);
   hmcerror__5->SetBinContent(5,335.8141);
   hmcerror__5->SetBinContent(6,346.0231);
   hmcerror__5->SetBinContent(7,340.8323);
   hmcerror__5->SetBinContent(8,293.4506);
   hmcerror__5->SetBinContent(9,224.8404);
   hmcerror__5->SetBinContent(10,191.4742);
   hmcerror__5->SetBinContent(11,147.7279);
   hmcerror__5->SetBinContent(12,115.9869);
   hmcerror__5->SetBinContent(13,90.98618);
   hmcerror__5->SetBinContent(14,65.63094);
   hmcerror__5->SetBinContent(15,41.59793);
   hmcerror__5->SetBinContent(16,33.34322);
   hmcerror__5->SetBinContent(17,23.95499);
   hmcerror__5->SetBinContent(18,19.89088);
   hmcerror__5->SetBinContent(19,13.43495);
   hmcerror__5->SetBinContent(20,10.5612);
   hmcerror__5->SetBinContent(21,26.32956);
   hmcerror__5->SetBinError(0,0.03055227);
   hmcerror__5->SetBinError(1,1.065425);
   hmcerror__5->SetBinError(2,6.851023);
   hmcerror__5->SetBinError(3,26.98902);
   hmcerror__5->SetBinError(4,65.24773);
   hmcerror__5->SetBinError(5,87.53242);
   hmcerror__5->SetBinError(6,84.00614);
   hmcerror__5->SetBinError(7,85.27444);
   hmcerror__5->SetBinError(8,66.10337);
   hmcerror__5->SetBinError(9,54.6417);
   hmcerror__5->SetBinError(10,43.7585);
   hmcerror__5->SetBinError(11,35.77788);
   hmcerror__5->SetBinError(12,27.37319);
   hmcerror__5->SetBinError(13,21.12947);
   hmcerror__5->SetBinError(14,16.34654);
   hmcerror__5->SetBinError(15,10.3774);
   hmcerror__5->SetBinError(16,8.313027);
   hmcerror__5->SetBinError(17,6.462053);
   hmcerror__5->SetBinError(18,5.530469);
   hmcerror__5->SetBinError(19,4.308035);
   hmcerror__5->SetBinError(20,2.859776);
   hmcerror__5->SetBinError(21,4.957295);
   hmcerror__5->SetEntries(2705.441);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[20] = {
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
   Double_t _fy3005[20] = {
   2,
   48,
   209,
   256,
   320,
   324,
   293,
   244,
   196,
   171,
   109,
   96,
   51,
   46,
   34,
   28,
   20,
   8,
   6,
   5};
   Double_t _felx3005[20] = {
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
   Double_t _fely3005[20] = {
   2,
   7.0604,
   14.45683,
   16,
   17.88854,
   18,
   17.11724,
   15.6205,
   14,
   13.0767,
   10.44031,
   9.9196,
   7.2725,
   6.9153,
   5.9703,
   5.4358,
   4.6266,
   3.0307,
   2.67925,
   2.48995};
   Double_t _fehx3005[20] = {
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
   Double_t _fehy3005[20] = {
   1.51917,
   6.8561,
   14.45683,
   16,
   17.88854,
   18,
   17.11724,
   15.6205,
   14,
   13.0767,
   10.44031,
   9.718,
   7.0686,
   6.7108,
   5.7635,
   5.2271,
   4.4133,
   2.7896,
   2.41858,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1980);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(376.2);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=67.2/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2466.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 15.5","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 22.0","F");

   ci = 1448;
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

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 7.7","F");

   ci = 1450;
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

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.3","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  56.6","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  49.0","F");

   ci = 1454;
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

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2124.8","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 27.2","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 380.1","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.0","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[20] = {
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
   Double_t _fy3006[20] = {
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
   Double_t _felx3006[20] = {
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
   Double_t _fely3006[20] = {
   0.4869531,
   0.2191918,
   0.2471781,
   0.2589961,
   0.2606574,
   0.2427761,
   0.2501947,
   0.2252624,
   0.2430244,
   0.2285348,
   0.2421877,
   0.2360025,
   0.2322272,
   0.2490675,
   0.2494691,
   0.2493169,
   0.2697581,
   0.2780404,
   0.3206587,
   0.2707813};
   Double_t _fehx3006[20] = {
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
   Double_t _fehy3006[20] = {
   0.4869531,
   0.2191918,
   0.2471781,
   0.2589961,
   0.2606574,
   0.2427761,
   0.2501947,
   0.2252624,
   0.2430244,
   0.2285348,
   0.2421877,
   0.2360025,
   0.2322272,
   0.2490675,
   0.2494691,
   0.2493169,
   0.2697581,
   0.2780404,
   0.3206587,
   0.2707813};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1980);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[20] = {
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
   Double_t _fy3007[20] = {
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
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
   0.4869531,
   0.2191918,
   0.2471781,
   0.2589961,
   0.2606574,
   0.2427761,
   0.2501947,
   0.2252624,
   0.2430244,
   0.2285348,
   0.2421877,
   0.2360025,
   0.2322272,
   0.2490675,
   0.2494691,
   0.2493169,
   0.2697581,
   0.2780404,
   0.3206587,
   0.2707813};
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
   0.4869531,
   0.2191918,
   0.2471781,
   0.2589961,
   0.2606574,
   0.2427761,
   0.2501947,
   0.2252624,
   0.2430244,
   0.2285348,
   0.2421877,
   0.2360025,
   0.2322272,
   0.2490675,
   0.2494691,
   0.2493169,
   0.2697581,
   0.2780404,
   0.3206587,
   0.2707813};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1980);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[20] = {
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
   Double_t _fy3008[20] = {
   0.9141009,
   1.535714,
   1.91412,
   1.016173,
   0.9529083,
   0.9363537,
   0.8596603,
   0.8314859,
   0.8717294,
   0.8930709,
   0.7378431,
   0.8276798,
   0.5605247,
   0.7008889,
   0.8173484,
   0.8397509,
   0.834899,
   0.4021943,
   0.4465962,
   0.473431};
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
   0.9141009,
   0.2258907,
   0.1324025,
   0.06351084,
   0.05326919,
   0.05201965,
   0.05022189,
   0.05323043,
   0.06226638,
   0.06829484,
   0.07067256,
   0.08552347,
   0.07992972,
   0.1053665,
   0.143524,
   0.1630256,
   0.1931372,
   0.1523663,
   0.1994238,
   0.2357639};
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
   0.6943373,
   0.2193543,
   0.1324025,
   0.06351084,
   0.05326919,
   0.05201965,
   0.05022189,
   0.05323043,
   0.06226638,
   0.06829484,
   0.07067256,
   0.08378534,
   0.07768872,
   0.1022505,
   0.1385526,
   0.1567665,
   0.184233,
   0.1402452,
   0.1800214,
   0.2093171};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1980);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.251175);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","CCpi0_FC_bnb_12_cc_transferred_energy_all",20,0,1800);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
