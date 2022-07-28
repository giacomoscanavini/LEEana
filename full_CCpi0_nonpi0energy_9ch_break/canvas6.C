#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Wed Jun  8 17:52:19 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",164,172,1200,900);
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
   pad1->Range(-342.3077,-5.18,1260.256,572.7989);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmc__16->SetBinContent(0,134.8545);
   hmc__16->SetBinContent(1,2.286449);
   hmc__16->SetBinContent(2,9.087859);
   hmc__16->SetBinContent(3,17.74327);
   hmc__16->SetBinContent(4,220.5746);
   hmc__16->SetBinContent(5,133.03);
   hmc__16->SetBinContent(6,76.19578);
   hmc__16->SetBinContent(7,90.6856);
   hmc__16->SetBinContent(8,90.5988);
   hmc__16->SetBinContent(9,62.5048);
   hmc__16->SetBinContent(10,55.06554);
   hmc__16->SetBinContent(11,40.54208);
   hmc__16->SetBinContent(12,38.4336);
   hmc__16->SetBinContent(13,24.32855);
   hmc__16->SetBinContent(14,18.61877);
   hmc__16->SetBinContent(15,13.93945);
   hmc__16->SetBinContent(16,12.69591);
   hmc__16->SetBinContent(17,10.17286);
   hmc__16->SetBinContent(18,8.740942);
   hmc__16->SetBinContent(19,6.352757);
   hmc__16->SetBinContent(20,5.318526);
   hmc__16->SetBinContent(21,5.427946);
   hmc__16->SetBinContent(22,4.249735);
   hmc__16->SetBinContent(23,2.988543);
   hmc__16->SetBinContent(24,1.947476);
   hmc__16->SetBinContent(25,0.7319179);
   hmc__16->SetBinContent(26,4.47218);
   hmc__16->SetBinError(0,6.244995);
   hmc__16->SetBinError(1,5.38525);
   hmc__16->SetBinError(2,17.98994);
   hmc__16->SetBinError(3,10.98491);
   hmc__16->SetBinError(4,66.60193);
   hmc__16->SetBinError(5,49.69617);
   hmc__16->SetBinError(6,27.92378);
   hmc__16->SetBinError(7,35.77937);
   hmc__16->SetBinError(8,36.66558);
   hmc__16->SetBinError(9,25.1463);
   hmc__16->SetBinError(10,23.30868);
   hmc__16->SetBinError(11,19.11336);
   hmc__16->SetBinError(12,22.16617);
   hmc__16->SetBinError(13,13.09599);
   hmc__16->SetBinError(14,13.22702);
   hmc__16->SetBinError(15,12.95403);
   hmc__16->SetBinError(16,10.87269);
   hmc__16->SetBinError(17,7.543974);
   hmc__16->SetBinError(18,7.05383);
   hmc__16->SetBinError(19,8.019719);
   hmc__16->SetBinError(20,5.938733);
   hmc__16->SetBinError(21,19.67433);
   hmc__16->SetBinError(22,6.83254);
   hmc__16->SetBinError(23,6.843828);
   hmc__16->SetBinError(24,3.963164);
   hmc__16->SetBinError(25,5.177481);
   hmc__16->SetBinError(26,4.944562);
   hmc__16->SetMinimum(-5.18);
   hmc__16->SetMaximum(543.9);
   hmc__16->SetEntries(1076.08);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,-150,1100);
   hs6_stack_6->SetMinimum(-1.150846e-08);
   hs6_stack_6->SetMaximum(231.6033);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(0,4.35952);
   hbadmatch_stack_1->SetBinContent(4,1.8088);
   hbadmatch_stack_1->SetBinContent(5,0.3917402);
   hbadmatch_stack_1->SetBinContent(6,0.9303237);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,0.3996189);
   hbadmatch_stack_1->SetBinContent(10,0.1967154);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.3917402);
   hbadmatch_stack_1->SetBinContent(13,0.3401776);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinError(0,2.456804);
   hbadmatch_stack_1->SetBinError(4,0.7618742);
   hbadmatch_stack_1->SetBinError(5,0.2770047);
   hbadmatch_stack_1->SetBinError(6,0.4814682);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.2826071);
   hbadmatch_stack_1->SetBinError(10,0.1967154);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.2770047);
   hbadmatch_stack_1->SetBinError(13,0.3401776);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1504;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(0,6.139236);
   hext_stack_2->SetBinContent(3,0.3243973);
   hext_stack_2->SetBinContent(4,1.379791);
   hext_stack_2->SetBinContent(5,0.7309963);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(7,2.26801);
   hext_stack_2->SetBinContent(8,0.7309963);
   hext_stack_2->SetBinContent(9,1.048213);
   hext_stack_2->SetBinContent(12,1.37261);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinError(0,1.714458);
   hext_stack_2->SetBinError(3,0.3243973);
   hext_stack_2->SetBinError(4,0.6935586);
   hext_stack_2->SetBinError(5,0.5201503);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(7,1.035838);
   hext_stack_2->SetBinError(8,0.5201503);
   hext_stack_2->SetBinError(9,0.7595995);
   hext_stack_2->SetBinError(12,0.8259691);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetEntries(36);

   ci = 1505;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(0,1.330481);
   hdirt_stack_3->SetBinContent(5,0.2544535);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(20,0.2574102);
   hdirt_stack_3->SetBinError(0,0.929048);
   hdirt_stack_3->SetBinError(5,0.2544535);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(20,0.2574102);
   hdirt_stack_3->SetEntries(6);

   ci = 1506;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(0,2.065713);
   houtFV_stack_4->SetBinContent(4,0.6854238);
   houtFV_stack_4->SetBinContent(6,0.3008363);
   houtFV_stack_4->SetBinContent(7,0.7319179);
   houtFV_stack_4->SetBinContent(8,0.7834804);
   houtFV_stack_4->SetBinContent(9,0.7868615);
   houtFV_stack_4->SetBinContent(10,0.3401776);
   houtFV_stack_4->SetBinContent(11,0.1950248);
   houtFV_stack_4->SetBinContent(13,0.2499844);
   houtFV_stack_4->SetBinContent(15,0.1950248);
   houtFV_stack_4->SetBinContent(16,0.1967154);
   houtFV_stack_4->SetBinError(0,0.7671173);
   houtFV_stack_4->SetBinError(4,0.3976372);
   houtFV_stack_4->SetBinError(6,0.3008363);
   houtFV_stack_4->SetBinError(7,0.438694);
   houtFV_stack_4->SetBinError(8,0.3917439);
   houtFV_stack_4->SetBinError(9,0.3934307);
   houtFV_stack_4->SetBinError(10,0.3401776);
   houtFV_stack_4->SetBinError(11,0.1950249);
   houtFV_stack_4->SetBinError(13,0.2499845);
   houtFV_stack_4->SetBinError(15,0.1950249);
   houtFV_stack_4->SetBinError(16,0.1967154);
   houtFV_stack_4->SetEntries(28);

   ci = 1507;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.097318);
   hNCpi0inFVcoh_stack_5->SetEntries(14);

   ci = 1508;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(3);

   ci = 1509;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,11.46296);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.234014);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.16891);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.659558);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.091012);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.761116);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.994694);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.826294);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.07349);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.6833858);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.4457358);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.4035539);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.4467362);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.125218);
   hNCpi0inFVres_stack_7->SetBinError(0,1.126078);
   hNCpi0inFVres_stack_7->SetBinError(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(3,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8008067);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6967154);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4059941);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4439995);
   hNCpi0inFVres_stack_7->SetBinError(8,0.560441);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4895814);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4277784);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3401847);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2420254);
   hNCpi0inFVres_stack_7->SetBinError(13,0.1610816);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1775557);
   hNCpi0inFVres_stack_7->SetBinError(15,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2792353);
   hNCpi0inFVres_stack_7->SetBinError(17,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(18,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(20,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(23,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1012383);
   hNCpi0inFVres_stack_7->SetEntries(668);

   ci = 1510;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,5.578032);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.376332);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.453216);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.171304);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.590308);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.799226);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.40829);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.98979);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.7943219);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.767254);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.2927861);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.7935648);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7015863);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5034943);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2809712);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4346236);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4488676);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3536475);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.336735);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2741946);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3060563);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2404119);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.07381642);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.07381642);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2183542);
   hNCpi0inFVdis_stack_8->SetEntries(433);

   ci = 1511;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1512;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

   ci = 1513;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs6->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,62.96465);
   hCCpi0inFV_stack_11->SetBinContent(1,0.9303237);
   hCCpi0inFV_stack_11->SetBinContent(2,3.57107);
   hCCpi0inFV_stack_11->SetBinContent(3,7.342238);
   hCCpi0inFV_stack_11->SetBinContent(4,167.663);
   hCCpi0inFV_stack_11->SetBinContent(5,100.2547);
   hCCpi0inFV_stack_11->SetBinContent(6,58.07921);
   hCCpi0inFV_stack_11->SetBinContent(7,65.124);
   hCCpi0inFV_stack_11->SetBinContent(8,68.56429);
   hCCpi0inFV_stack_11->SetBinContent(9,46.9632);
   hCCpi0inFV_stack_11->SetBinContent(10,40.41365);
   hCCpi0inFV_stack_11->SetBinContent(11,28.68958);
   hCCpi0inFV_stack_11->SetBinContent(12,27.64152);
   hCCpi0inFV_stack_11->SetBinContent(13,17.88108);
   hCCpi0inFV_stack_11->SetBinContent(14,13.23009);
   hCCpi0inFV_stack_11->SetBinContent(15,10.20663);
   hCCpi0inFV_stack_11->SetBinContent(16,10.29226);
   hCCpi0inFV_stack_11->SetBinContent(17,8.697876);
   hCCpi0inFV_stack_11->SetBinContent(18,6.890482);
   hCCpi0inFV_stack_11->SetBinContent(19,5.231622);
   hCCpi0inFV_stack_11->SetBinContent(20,3.96112);
   hCCpi0inFV_stack_11->SetBinContent(21,4.05302);
   hCCpi0inFV_stack_11->SetBinContent(22,2.929362);
   hCCpi0inFV_stack_11->SetBinContent(23,2.39585);
   hCCpi0inFV_stack_11->SetBinContent(24,1.752451);
   hCCpi0inFV_stack_11->SetBinContent(25,0.3917402);
   hCCpi0inFV_stack_11->SetBinContent(26,3.125543);
   hCCpi0inFV_stack_11->SetBinError(0,3.927356);
   hCCpi0inFV_stack_11->SetBinError(1,0.4814682);
   hCCpi0inFV_stack_11->SetBinError(2,0.9206376);
   hCCpi0inFV_stack_11->SetBinError(3,1.317258);
   hCCpi0inFV_stack_11->SetBinError(4,6.552031);
   hCCpi0inFV_stack_11->SetBinError(5,5.039253);
   hCCpi0inFV_stack_11->SetBinError(6,3.85281);
   hCCpi0inFV_stack_11->SetBinError(7,4.054515);
   hCCpi0inFV_stack_11->SetBinError(8,4.143718);
   hCCpi0inFV_stack_11->SetBinError(9,3.433626);
   hCCpi0inFV_stack_11->SetBinError(10,3.120082);
   hCCpi0inFV_stack_11->SetBinError(11,2.691764);
   hCCpi0inFV_stack_11->SetBinError(12,2.698968);
   hCCpi0inFV_stack_11->SetBinError(13,2.141387);
   hCCpi0inFV_stack_11->SetBinError(14,1.813597);
   hCCpi0inFV_stack_11->SetBinError(15,1.61252);
   hCCpi0inFV_stack_11->SetBinError(16,1.688586);
   hCCpi0inFV_stack_11->SetBinError(17,1.481913);
   hCCpi0inFV_stack_11->SetBinError(18,1.301582);
   hCCpi0inFV_stack_11->SetBinError(19,1.127464);
   hCCpi0inFV_stack_11->SetBinError(20,0.9610635);
   hCCpi0inFV_stack_11->SetBinError(21,1.019635);
   hCCpi0inFV_stack_11->SetBinError(22,0.8777653);
   hCCpi0inFV_stack_11->SetBinError(23,0.7857345);
   hCCpi0inFV_stack_11->SetBinError(24,0.7345848);
   hCCpi0inFV_stack_11->SetBinError(25,0.2770047);
   hCCpi0inFV_stack_11->SetBinError(26,0.8591183);
   hCCpi0inFV_stack_11->SetEntries(3276);

   ci = 1514;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs6->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(0,6.594023);
   hNCinFV_stack_12->SetBinContent(1,0.3401776);
   hNCinFV_stack_12->SetBinContent(2,0.1967154);
   hNCinFV_stack_12->SetBinContent(4,1.371936);
   hNCinFV_stack_12->SetBinContent(5,0.9785053);
   hNCinFV_stack_12->SetBinContent(6,1.662242);
   hNCinFV_stack_12->SetBinContent(7,0.9269427);
   hNCinFV_stack_12->SetBinContent(8,0.785171);
   hNCinFV_stack_12->SetBinContent(9,1.072095);
   hNCinFV_stack_12->SetBinContent(10,0.1950248);
   hNCinFV_stack_12->SetBinContent(11,0.3934307);
   hNCinFV_stack_12->SetBinContent(12,0.536893);
   hNCinFV_stack_12->SetBinContent(14,0.7336084);
   hNCinFV_stack_12->SetBinContent(15,0.3934307);
   hNCinFV_stack_12->SetBinContent(17,0.3401776);
   hNCinFV_stack_12->SetBinContent(19,0.1967154);
   hNCinFV_stack_12->SetBinContent(26,0.3401776);
   hNCinFV_stack_12->SetBinError(0,1.317088);
   hNCinFV_stack_12->SetBinError(1,0.3401776);
   hNCinFV_stack_12->SetBinError(2,0.1967154);
   hNCinFV_stack_12->SetBinError(4,0.5185478);
   hNCinFV_stack_12->SetBinError(5,0.4376048);
   hNCinFV_stack_12->SetBinError(6,0.6513556);
   hNCinFV_stack_12->SetBinError(7,0.4800908);
   hNCinFV_stack_12->SetBinError(8,0.3925882);
   hNCinFV_stack_12->SetBinError(9,0.5551335);
   hNCinFV_stack_12->SetBinError(10,0.1950249);
   hNCinFV_stack_12->SetBinError(11,0.2781975);
   hNCinFV_stack_12->SetBinError(12,0.3929602);
   hNCinFV_stack_12->SetBinError(14,0.4394482);
   hNCinFV_stack_12->SetBinError(15,0.2781975);
   hNCinFV_stack_12->SetBinError(17,0.3401776);
   hNCinFV_stack_12->SetBinError(19,0.1967154);
   hNCinFV_stack_12->SetBinError(26,0.3401776);
   hNCinFV_stack_12->SetEntries(73);

   ci = 1515;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs6->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(0,33.64594);
   hnumuCCinFV_stack_13->SetBinContent(1,0.9880478);
   hnumuCCinFV_stack_13->SetBinContent(2,5.236373);
   hnumuCCinFV_stack_13->SetBinContent(3,9.992937);
   hnumuCCinFV_stack_13->SetBinContent(4,36.77657);
   hnumuCCinFV_stack_13->SetBinContent(5,23.06553);
   hnumuCCinFV_stack_13->SetBinContent(6,11.42091);
   hnumuCCinFV_stack_13->SetBinContent(7,17.95341);
   hnumuCCinFV_stack_13->SetBinContent(8,14.94991);
   hnumuCCinFV_stack_13->SetBinContent(9,8.440086);
   hnumuCCinFV_stack_13->SetBinContent(10,10.90885);
   hnumuCCinFV_stack_13->SetBinContent(11,8.976149);
   hnumuCCinFV_stack_13->SetBinContent(12,7.040197);
   hnumuCCinFV_stack_13->SetBinContent(13,4.34948);
   hnumuCCinFV_stack_13->SetBinContent(14,4.056218);
   hnumuCCinFV_stack_13->SetBinContent(15,2.642437);
   hnumuCCinFV_stack_13->SetBinContent(16,1.355818);
   hnumuCCinFV_stack_13->SetBinContent(17,0.3917402);
   hnumuCCinFV_stack_13->SetBinContent(18,1.123658);
   hnumuCCinFV_stack_13->SetBinContent(19,0.8407196);
   hnumuCCinFV_stack_13->SetBinContent(20,0.7319179);
   hnumuCCinFV_stack_13->SetBinContent(21,0.7834804);
   hnumuCCinFV_stack_13->SetBinContent(22,1.320373);
   hnumuCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnumuCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnumuCCinFV_stack_13->SetBinContent(25,0.3401776);
   hnumuCCinFV_stack_13->SetBinContent(26,0.5884556);
   hnumuCCinFV_stack_13->SetBinError(0,3.069751);
   hnumuCCinFV_stack_13->SetBinError(1,0.5235589);
   hnumuCCinFV_stack_13->SetBinError(2,1.573925);
   hnumuCCinFV_stack_13->SetBinError(3,2.741065);
   hnumuCCinFV_stack_13->SetBinError(4,3.492183);
   hnumuCCinFV_stack_13->SetBinError(5,2.434808);
   hnumuCCinFV_stack_13->SetBinError(6,1.736847);
   hnumuCCinFV_stack_13->SetBinError(7,3.16014);
   hnumuCCinFV_stack_13->SetBinError(8,1.978932);
   hnumuCCinFV_stack_13->SetBinError(9,1.480149);
   hnumuCCinFV_stack_13->SetBinError(10,1.958984);
   hnumuCCinFV_stack_13->SetBinError(11,1.506621);
   hnumuCCinFV_stack_13->SetBinError(12,1.36661);
   hnumuCCinFV_stack_13->SetBinError(13,0.999525);
   hnumuCCinFV_stack_13->SetBinError(14,0.9528382);
   hnumuCCinFV_stack_13->SetBinError(15,0.7851269);
   hnumuCCinFV_stack_13->SetBinError(16,0.5682978);
   hnumuCCinFV_stack_13->SetBinError(17,0.2770047);
   hnumuCCinFV_stack_13->SetBinError(18,0.5188295);
   hnumuCCinFV_stack_13->SetBinError(19,0.5267458);
   hnumuCCinFV_stack_13->SetBinError(20,0.438694);
   hnumuCCinFV_stack_13->SetBinError(21,0.3917439);
   hnumuCCinFV_stack_13->SetBinError(22,0.5548703);
   hnumuCCinFV_stack_13->SetBinError(23,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(24,0.1950249);
   hnumuCCinFV_stack_13->SetBinError(25,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(26,0.3397478);
   hnumuCCinFV_stack_13->SetEntries(854);

   ci = 1516;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs6->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(0,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(5,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(6,0.536893);
   hnueCCinFV_stack_14->SetBinContent(9,0.3917402);
   hnueCCinFV_stack_14->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_14->SetBinError(0,0.2781975);
   hnueCCinFV_stack_14->SetBinError(4,0.1950249);
   hnueCCinFV_stack_14->SetBinError(5,0.438694);
   hnueCCinFV_stack_14->SetBinError(6,0.3929602);
   hnueCCinFV_stack_14->SetBinError(9,0.2770047);
   hnueCCinFV_stack_14->SetBinError(10,0.1950249);
   hnueCCinFV_stack_14->SetBinError(15,0.1950249);
   hnueCCinFV_stack_14->SetBinError(18,0.1967154);
   hnueCCinFV_stack_14->SetBinError(20,0.3401776);
   hnueCCinFV_stack_14->SetEntries(14);

   ci = 1517;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs6->Add(hnueCCinFV_stack_14,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);
   hmcerror__17->SetBinContent(0,134.8545);
   hmcerror__17->SetBinContent(1,2.286449);
   hmcerror__17->SetBinContent(2,9.087859);
   hmcerror__17->SetBinContent(3,17.74327);
   hmcerror__17->SetBinContent(4,220.5746);
   hmcerror__17->SetBinContent(5,133.03);
   hmcerror__17->SetBinContent(6,76.19578);
   hmcerror__17->SetBinContent(7,90.6856);
   hmcerror__17->SetBinContent(8,90.5988);
   hmcerror__17->SetBinContent(9,62.5048);
   hmcerror__17->SetBinContent(10,55.06554);
   hmcerror__17->SetBinContent(11,40.54208);
   hmcerror__17->SetBinContent(12,38.4336);
   hmcerror__17->SetBinContent(13,24.32855);
   hmcerror__17->SetBinContent(14,18.61877);
   hmcerror__17->SetBinContent(15,13.93945);
   hmcerror__17->SetBinContent(16,12.69591);
   hmcerror__17->SetBinContent(17,10.17286);
   hmcerror__17->SetBinContent(18,8.740942);
   hmcerror__17->SetBinContent(19,6.352757);
   hmcerror__17->SetBinContent(20,5.318526);
   hmcerror__17->SetBinContent(21,5.427946);
   hmcerror__17->SetBinContent(22,4.249735);
   hmcerror__17->SetBinContent(23,2.988543);
   hmcerror__17->SetBinContent(24,1.947476);
   hmcerror__17->SetBinContent(25,0.7319179);
   hmcerror__17->SetBinContent(26,4.47218);
   hmcerror__17->SetBinError(0,6.244995);
   hmcerror__17->SetBinError(1,5.38525);
   hmcerror__17->SetBinError(2,17.98994);
   hmcerror__17->SetBinError(3,10.98491);
   hmcerror__17->SetBinError(4,66.60193);
   hmcerror__17->SetBinError(5,49.69617);
   hmcerror__17->SetBinError(6,27.92378);
   hmcerror__17->SetBinError(7,35.77937);
   hmcerror__17->SetBinError(8,36.66558);
   hmcerror__17->SetBinError(9,25.1463);
   hmcerror__17->SetBinError(10,23.30868);
   hmcerror__17->SetBinError(11,19.11336);
   hmcerror__17->SetBinError(12,22.16617);
   hmcerror__17->SetBinError(13,13.09599);
   hmcerror__17->SetBinError(14,13.22702);
   hmcerror__17->SetBinError(15,12.95403);
   hmcerror__17->SetBinError(16,10.87269);
   hmcerror__17->SetBinError(17,7.543974);
   hmcerror__17->SetBinError(18,7.05383);
   hmcerror__17->SetBinError(19,8.019719);
   hmcerror__17->SetBinError(20,5.938733);
   hmcerror__17->SetBinError(21,19.67433);
   hmcerror__17->SetBinError(22,6.83254);
   hmcerror__17->SetBinError(23,6.843828);
   hmcerror__17->SetBinError(24,3.963164);
   hmcerror__17->SetBinError(25,5.177481);
   hmcerror__17->SetBinError(26,4.944562);
   hmcerror__17->SetEntries(1076.08);

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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3021[25] = {
   1,
   4,
   24,
   259,
   141,
   98,
   98,
   75,
   45,
   42,
   34,
   27,
   35,
   13,
   13,
   11,
   8,
   8,
   5,
   3,
   6,
   1,
   3,
   1,
   1};
   Double_t _felx3021[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3021[25] = {
   1,
   2.29683,
   5.0476,
   16.09348,
   11.87434,
   10.0209,
   10.0209,
   8.7852,
   6.8416,
   6.6155,
   5.9703,
   5.3414,
   6.0548,
   3.77763,
   3.77763,
   3.4975,
   3.0307,
   3.0307,
   2.48995,
   2.143368,
   2.67925,
   1,
   2.143368,
   1,
   1};
   Double_t _fehx3021[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3021[25] = {
   1.35971,
   1.98186,
   4.837,
   16.09348,
   11.87434,
   9.82,
   9.82,
   8.5831,
   6.637,
   6.4104,
   5.7635,
   5.1322,
   5.8483,
   3.5552,
   3.5552,
   3.27,
   2.7896,
   2.7896,
   2.21064,
   1.72422,
   2.41858,
   1.35971,
   1.72422,
   1.35971,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-275,1225);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(302.6028);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.29","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.9/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 956.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.6","F");

   ci = 1504;
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

   ci = 1505;
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

   ci = 1506;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 4.5","F");

   ci = 1507;
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

   ci = 1508;
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

   ci = 1509;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  24.3","F");

   ci = 1510;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  17.6","F");

   ci = 1511;
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

   ci = 1512;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1513;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 703.2","F");

   ci = 1514;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 10.1","F");

   ci = 1515;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 174.2","F");

   ci = 1516;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 2.8","F");

   ci = 1517;
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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3022[25] = {
   2.35529,
   1.979557,
   0.619103,
   0.3019474,
   0.3735712,
   0.3664742,
   0.394543,
   0.4047027,
   0.40231,
   0.4232898,
   0.4714451,
   0.5767392,
   0.5382971,
   0.7104131,
   0.929307,
   0.856393,
   0.7415786,
   0.8069874,
   1.2624,
   1.116613,
   3.624636,
   1.607757,
   2.290022,
   2.035026,
   7.073855};
   Double_t _fehx3022[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3022[25] = {
   2.35529,
   1.979557,
   0.619103,
   0.3019474,
   0.3735712,
   0.3664742,
   0.394543,
   0.4047027,
   0.40231,
   0.4232898,
   0.4714451,
   0.5767392,
   0.5382971,
   0.7104131,
   0.929307,
   0.856393,
   0.7415786,
   0.8069874,
   1.2624,
   1.116613,
   3.624636,
   1.607757,
   2.290022,
   2.035026,
   7.073855};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-275,1225);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Non #mu-#pi^{0} Energy [MeV]");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3023[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
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
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3023[25] = {
   0.4478789,
   0.3321447,
   0.2889794,
   0.2235861,
   0.2291513,
   0.2194467,
   0.2190712,
   0.2243214,
   0.2019255,
   0.2306313,
   0.2318548,
   0.2322044,
   0.2533841,
   0.3060188,
   0.3007712,
   0.3044064,
   0.2614478,
   0.318655,
   0.3169859,
   0.3549208,
   0.3880852,
   0.415826,
   0.6017015,
   0.5219849,
   0.9082607};
   Double_t _fehx3023[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3023[25] = {
   0.4478789,
   0.3321447,
   0.2889794,
   0.2235861,
   0.2291513,
   0.2194467,
   0.2190712,
   0.2243214,
   0.2019255,
   0.2306313,
   0.2318548,
   0.2322044,
   0.2533841,
   0.3060188,
   0.3007712,
   0.3044064,
   0.2614478,
   0.318655,
   0.3169859,
   0.3549208,
   0.3880852,
   0.415826,
   0.6017015,
   0.5219849,
   0.9082607};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-275,1225);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
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
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3024[25] = {
   0.4373594,
   0.4401477,
   1.352625,
   1.174206,
   1.059912,
   1.286161,
   1.080657,
   0.8278255,
   0.7199447,
   0.7627275,
   0.8386349,
   0.7025103,
   1.438639,
   0.69822,
   0.9326051,
   0.8664205,
   0.7864063,
   0.9152332,
   0.7870599,
   0.5640661,
   1.10539,
   0.2353088,
   1.003834,
   0.5134853,
   1.366274};
   Double_t _felx3024[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3024[25] = {
   0.4373594,
   0.2527361,
   0.2844796,
   0.0729616,
   0.08926065,
   0.1315152,
   0.1105016,
   0.09696817,
   0.1094572,
   0.1201387,
   0.1472618,
   0.1389773,
   0.2488764,
   0.2028936,
   0.2710029,
   0.2754823,
   0.2979202,
   0.3467246,
   0.3919479,
   0.4030004,
   0.4936029,
   0.2353088,
   0.717195,
   0.5134853,
   1.366274};
   Double_t _fehx3024[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3024[25] = {
   0.5946819,
   0.2180778,
   0.2726104,
   0.0729616,
   0.08926065,
   0.1288785,
   0.1082862,
   0.09473746,
   0.1061838,
   0.116414,
   0.1421609,
   0.1335342,
   0.2403884,
   0.1909471,
   0.255046,
   0.2575632,
   0.2742199,
   0.3191418,
   0.3479812,
   0.3241913,
   0.4455792,
   0.3199517,
   0.5769434,
   0.698191,
   1.857736};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-275,1225);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(3.54641);
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
   
   TH1F *hist__18 = new TH1F("hist__18","CCpi0_FC_0p_bnb_12_CC_nonpi0_energy_all",25,-150,1100);

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
   TLine *line = new TLine(-150,1,1100,1);
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
