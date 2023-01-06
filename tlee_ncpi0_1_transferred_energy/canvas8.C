#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Fri Oct 21 19:09:17 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-276.9231,-2.809536,2030.769,310.6755);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmc__22->SetBinContent(2,2.08781);
   hmc__22->SetBinContent(3,57.24229);
   hmc__22->SetBinContent(4,127.4693);
   hmc__22->SetBinContent(5,140.4768);
   hmc__22->SetBinContent(6,114.6609);
   hmc__22->SetBinContent(7,102.3656);
   hmc__22->SetBinContent(8,82.45054);
   hmc__22->SetBinContent(9,73.78459);
   hmc__22->SetBinContent(10,47.64261);
   hmc__22->SetBinContent(11,36.94718);
   hmc__22->SetBinContent(12,31.2241);
   hmc__22->SetBinContent(13,27.7781);
   hmc__22->SetBinContent(14,19.85837);
   hmc__22->SetBinContent(15,15.67854);
   hmc__22->SetBinContent(16,12.97569);
   hmc__22->SetBinContent(17,5.858701);
   hmc__22->SetBinContent(18,5.023255);
   hmc__22->SetBinContent(19,5.568727);
   hmc__22->SetBinContent(20,4.160519);
   hmc__22->SetBinContent(21,2.823402);
   hmc__22->SetBinContent(22,2.230724);
   hmc__22->SetBinContent(23,2.125129);
   hmc__22->SetBinContent(24,1.528979);
   hmc__22->SetBinContent(25,2.913439);
   hmc__22->SetBinContent(26,8.688993);
   hmc__22->SetBinError(1,0.3895343);
   hmc__22->SetBinError(2,7.109643);
   hmc__22->SetBinError(3,25.03812);
   hmc__22->SetBinError(4,33.83087);
   hmc__22->SetBinError(5,41.62794);
   hmc__22->SetBinError(6,27.94701);
   hmc__22->SetBinError(7,33.72208);
   hmc__22->SetBinError(8,30.06457);
   hmc__22->SetBinError(9,27.29458);
   hmc__22->SetBinError(10,20.12354);
   hmc__22->SetBinError(11,14.02497);
   hmc__22->SetBinError(12,16.46659);
   hmc__22->SetBinError(13,18.29089);
   hmc__22->SetBinError(14,13.54182);
   hmc__22->SetBinError(15,10.75455);
   hmc__22->SetBinError(16,9.635235);
   hmc__22->SetBinError(17,5.907783);
   hmc__22->SetBinError(18,4.496847);
   hmc__22->SetBinError(19,8.695914);
   hmc__22->SetBinError(20,6.584328);
   hmc__22->SetBinError(21,7.092818);
   hmc__22->SetBinError(22,6.007276);
   hmc__22->SetBinError(23,3.540638);
   hmc__22->SetBinError(24,4.811445);
   hmc__22->SetBinError(25,10.82026);
   hmc__22->SetBinError(26,6.420911);
   hmc__22->SetMinimum(-2.809536);
   hmc__22->SetMaximum(295.0013);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,0,1800);
   hs8_stack_8->SetMinimum(-1.150846e-08);
   hs8_stack_8->SetMaximum(147.5006);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hbadmatch_stack_1->SetBinContent(3,1.501031);
   hbadmatch_stack_1->SetBinContent(4,5.904918);
   hbadmatch_stack_1->SetBinContent(5,4.674123);
   hbadmatch_stack_1->SetBinContent(6,3.298907);
   hbadmatch_stack_1->SetBinContent(7,5.366824);
   hbadmatch_stack_1->SetBinContent(8,3.256231);
   hbadmatch_stack_1->SetBinContent(9,1.762178);
   hbadmatch_stack_1->SetBinContent(10,0.8181083);
   hbadmatch_stack_1->SetBinContent(11,0.6526874);
   hbadmatch_stack_1->SetBinContent(12,1.291198);
   hbadmatch_stack_1->SetBinContent(13,0.7946486);
   hbadmatch_stack_1->SetBinContent(14,1.33438);
   hbadmatch_stack_1->SetBinContent(15,0.6399668);
   hbadmatch_stack_1->SetBinContent(16,0.3401776);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.6155995);
   hbadmatch_stack_1->SetBinContent(25,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.5888634);
   hbadmatch_stack_1->SetBinError(4,1.668392);
   hbadmatch_stack_1->SetBinError(5,1.169107);
   hbadmatch_stack_1->SetBinError(6,0.9324791);
   hbadmatch_stack_1->SetBinError(7,1.413021);
   hbadmatch_stack_1->SetBinError(8,1.033097);
   hbadmatch_stack_1->SetBinError(9,0.7389613);
   hbadmatch_stack_1->SetBinError(10,0.4470808);
   hbadmatch_stack_1->SetBinError(11,0.3333452);
   hbadmatch_stack_1->SetBinError(12,0.5651616);
   hbadmatch_stack_1->SetBinError(13,0.4731868);
   hbadmatch_stack_1->SetBinError(14,0.6137954);
   hbadmatch_stack_1->SetBinError(15,0.484942);
   hbadmatch_stack_1->SetBinError(16,0.3401776);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.3560237);
   hbadmatch_stack_1->SetBinError(25,0.1967154);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,23.39503);
   hext_stack_2->SetBinContent(4,34.67398);
   hext_stack_2->SetBinContent(5,37.72641);
   hext_stack_2->SetBinContent(6,28.30849);
   hext_stack_2->SetBinContent(7,16.85757);
   hext_stack_2->SetBinContent(8,12.69666);
   hext_stack_2->SetBinContent(9,10.52962);
   hext_stack_2->SetBinContent(10,7.784402);
   hext_stack_2->SetBinContent(11,8.56006);
   hext_stack_2->SetBinContent(12,2.435184);
   hext_stack_2->SetBinContent(13,3.076798);
   hext_stack_2->SetBinContent(14,1.950793);
   hext_stack_2->SetBinContent(15,0.973192);
   hext_stack_2->SetBinContent(16,2.27519);
   hext_stack_2->SetBinContent(17,0.7309963);
   hext_stack_2->SetBinContent(18,1.055394);
   hext_stack_2->SetBinContent(19,1.868591);
   hext_stack_2->SetBinContent(20,0.6487947);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,2.517386);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,3.501645);
   hext_stack_2->SetBinError(4,3.788534);
   hext_stack_2->SetBinError(5,4.229872);
   hext_stack_2->SetBinError(6,3.573225);
   hext_stack_2->SetBinError(7,2.611024);
   hext_stack_2->SetBinError(8,2.44499);
   hext_stack_2->SetBinError(9,2.167447);
   hext_stack_2->SetBinError(10,1.825754);
   hext_stack_2->SetBinError(11,2.049045);
   hext_stack_2->SetBinError(12,0.9256422);
   hext_stack_2->SetBinError(13,1.126269);
   hext_stack_2->SetBinError(14,0.8755137);
   hext_stack_2->SetBinError(15,0.5618727);
   hext_stack_2->SetBinError(16,0.9336798);
   hext_stack_2->SetBinError(17,0.5201503);
   hext_stack_2->SetBinError(18,0.6130171);
   hext_stack_2->SetBinError(19,0.840497);
   hext_stack_2->SetBinError(20,0.4587671);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,0.9575503);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hdirt_stack_3->SetBinContent(3,2.435897);
   hdirt_stack_3->SetBinContent(4,5.623411);
   hdirt_stack_3->SetBinContent(5,3.306383);
   hdirt_stack_3->SetBinContent(6,1.33471);
   hdirt_stack_3->SetBinContent(7,1.394165);
   hdirt_stack_3->SetBinContent(8,1.619594);
   hdirt_stack_3->SetBinContent(9,1.590424);
   hdirt_stack_3->SetBinContent(10,1.109424);
   hdirt_stack_3->SetBinContent(11,0.165479);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.3895662);
   hdirt_stack_3->SetBinError(3,0.8006753);
   hdirt_stack_3->SetBinError(4,1.175414);
   hdirt_stack_3->SetBinError(5,0.9881164);
   hdirt_stack_3->SetBinError(6,0.5805728);
   hdirt_stack_3->SetBinError(7,0.6461809);
   hdirt_stack_3->SetBinError(8,1.022623);
   hdirt_stack_3->SetBinError(9,0.6767614);
   hdirt_stack_3->SetBinError(10,0.594112);
   hdirt_stack_3->SetBinError(11,0.165479);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(15,0.3895662);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   houtFV_stack_4->SetBinContent(2,1.349473);
   houtFV_stack_4->SetBinContent(3,15.45833);
   houtFV_stack_4->SetBinContent(4,31.63116);
   houtFV_stack_4->SetBinContent(5,34.88708);
   houtFV_stack_4->SetBinContent(6,28.25218);
   houtFV_stack_4->SetBinContent(7,21.98355);
   houtFV_stack_4->SetBinContent(8,13.00886);
   houtFV_stack_4->SetBinContent(9,14.76258);
   houtFV_stack_4->SetBinContent(10,8.37376);
   houtFV_stack_4->SetBinContent(11,4.570424);
   houtFV_stack_4->SetBinContent(12,4.431934);
   houtFV_stack_4->SetBinContent(13,4.36711);
   houtFV_stack_4->SetBinContent(14,2.409657);
   houtFV_stack_4->SetBinContent(15,2.811289);
   houtFV_stack_4->SetBinContent(16,0.7974871);
   houtFV_stack_4->SetBinContent(17,0.3401776);
   houtFV_stack_4->SetBinContent(18,0.9421788);
   houtFV_stack_4->SetBinContent(19,0.4969229);
   houtFV_stack_4->SetBinContent(20,0.9775374);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(26,0.1950248);
   houtFV_stack_4->SetBinError(2,0.5288921);
   houtFV_stack_4->SetBinError(3,1.984792);
   houtFV_stack_4->SetBinError(4,2.850984);
   houtFV_stack_4->SetBinError(5,3.225901);
   houtFV_stack_4->SetBinError(6,2.808507);
   houtFV_stack_4->SetBinError(7,2.326263);
   houtFV_stack_4->SetBinError(8,1.754721);
   houtFV_stack_4->SetBinError(9,1.879069);
   houtFV_stack_4->SetBinError(10,1.406726);
   houtFV_stack_4->SetBinError(11,1.031);
   houtFV_stack_4->SetBinError(12,1.069858);
   houtFV_stack_4->SetBinError(13,1.0735);
   houtFV_stack_4->SetBinError(14,0.7893746);
   houtFV_stack_4->SetBinError(15,0.9285694);
   houtFV_stack_4->SetBinError(16,0.3989019);
   houtFV_stack_4->SetBinError(17,0.3401776);
   houtFV_stack_4->SetBinError(18,0.5651418);
   houtFV_stack_4->SetBinError(19,0.2963023);
   houtFV_stack_4->SetBinError(20,0.5027737);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(26,0.1950249);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.7877853);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.145452);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.951229);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.876281);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.038717);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5353883);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9024849);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5151711);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.9689304);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.6148517);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1333298);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2107223);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2273553);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3372182);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5689487);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6494543);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6536171);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3575768);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1525938);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2674669);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1851987);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4363975);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3549306);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.06716368);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.09755482);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1624207);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.04832419);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.09065514);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.09381814);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1262588);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02894049);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.07742798);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.166324);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04960751);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05298684);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.08594856);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02114295);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.0391147);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1343209);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2936812);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.1199066);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.055937);
   hNCpi0inFVres_stack_7->SetBinContent(4,19.41098);
   hNCpi0inFVres_stack_7->SetBinContent(5,25.65263);
   hNCpi0inFVres_stack_7->SetBinContent(6,17.93327);
   hNCpi0inFVres_stack_7->SetBinContent(7,11.56495);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.630112);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.106498);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.348825);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.963948);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.639981);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.805891);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.459804);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.7154832);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.8878126);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.1368459);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.06462669);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.02984721);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1553459);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.1156257);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.01523216);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.1954681);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.3299756);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.3001383);
   hNCpi0inFVres_stack_7->SetBinError(2,0.05686547);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9282455);
   hNCpi0inFVres_stack_7->SetBinError(4,1.541766);
   hNCpi0inFVres_stack_7->SetBinError(5,1.892838);
   hNCpi0inFVres_stack_7->SetBinError(6,1.331128);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9734659);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9001009);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6069987);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8086755);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4882264);
   hNCpi0inFVres_stack_7->SetBinError(12,0.568684);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6646161);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3018422);
   hNCpi0inFVres_stack_7->SetBinError(15,0.2893989);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3441522);
   hNCpi0inFVres_stack_7->SetBinError(17,0.08555837);
   hNCpi0inFVres_stack_7->SetBinError(18,0.03811615);
   hNCpi0inFVres_stack_7->SetBinError(19,0.02133979);
   hNCpi0inFVres_stack_7->SetBinError(20,0.08576439);
   hNCpi0inFVres_stack_7->SetBinError(21,0.09902508);
   hNCpi0inFVres_stack_7->SetBinError(22,0.01523216);
   hNCpi0inFVres_stack_7->SetBinError(23,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1954681);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3299756);
   hNCpi0inFVres_stack_7->SetBinError(26,0.2736643);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.170552);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.48505);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.093926);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.703451);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.703209);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.246936);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.879061);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.326692);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.159972);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.630263);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.16086);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9986823);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.217353);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.681459);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.1145693);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1723168);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6881357);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.7763618);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3014158);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.2510999);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2979658);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4446687);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.7642061);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5847042);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5924733);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3933978);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4610652);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5523756);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6640135);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6107155);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5929627);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5296531);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.572996);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2386472);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.05734236);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.111658);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4169725);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5412232);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2123149);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.08369995);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(3,2.085274);
   hCCpi0inFV_stack_10->SetBinContent(4,9.631431);
   hCCpi0inFV_stack_10->SetBinContent(5,12.38758);
   hCCpi0inFV_stack_10->SetBinContent(6,15.344);
   hCCpi0inFV_stack_10->SetBinContent(7,21.33405);
   hCCpi0inFV_stack_10->SetBinContent(8,26.98998);
   hCCpi0inFV_stack_10->SetBinContent(9,21.96625);
   hCCpi0inFV_stack_10->SetBinContent(10,14.66695);
   hCCpi0inFV_stack_10->SetBinContent(11,11.95593);
   hCCpi0inFV_stack_10->SetBinContent(12,11.96573);
   hCCpi0inFV_stack_10->SetBinContent(13,9.827971);
   hCCpi0inFV_stack_10->SetBinContent(14,6.303717);
   hCCpi0inFV_stack_10->SetBinContent(15,5.741461);
   hCCpi0inFV_stack_10->SetBinContent(16,3.70608);
   hCCpi0inFV_stack_10->SetBinContent(17,3.17764);
   hCCpi0inFV_stack_10->SetBinContent(18,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(19,1.204467);
   hCCpi0inFV_stack_10->SetBinContent(20,1.127039);
   hCCpi0inFV_stack_10->SetBinContent(21,1.175221);
   hCCpi0inFV_stack_10->SetBinContent(22,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(23,0.9303237);
   hCCpi0inFV_stack_10->SetBinContent(24,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(25,0.9286332);
   hCCpi0inFV_stack_10->SetBinContent(26,2.194063);
   hCCpi0inFV_stack_10->SetBinError(3,0.8097876);
   hCCpi0inFV_stack_10->SetBinError(4,1.534713);
   hCCpi0inFV_stack_10->SetBinError(5,1.805003);
   hCCpi0inFV_stack_10->SetBinError(6,1.969015);
   hCCpi0inFV_stack_10->SetBinError(7,2.32985);
   hCCpi0inFV_stack_10->SetBinError(8,2.652733);
   hCCpi0inFV_stack_10->SetBinError(9,2.302802);
   hCCpi0inFV_stack_10->SetBinError(10,1.899268);
   hCCpi0inFV_stack_10->SetBinError(11,1.771697);
   hCCpi0inFV_stack_10->SetBinError(12,1.755447);
   hCCpi0inFV_stack_10->SetBinError(13,1.658787);
   hCCpi0inFV_stack_10->SetBinError(14,1.256721);
   hCCpi0inFV_stack_10->SetBinError(15,1.214499);
   hCCpi0inFV_stack_10->SetBinError(16,0.9598366);
   hCCpi0inFV_stack_10->SetBinError(17,0.8775989);
   hCCpi0inFV_stack_10->SetBinError(18,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(19,0.4924);
   hCCpi0inFV_stack_10->SetBinError(20,0.5201044);
   hCCpi0inFV_stack_10->SetBinError(21,0.4797863);
   hCCpi0inFV_stack_10->SetBinError(22,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(23,0.4814682);
   hCCpi0inFV_stack_10->SetBinError(24,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(25,0.48078);
   hCCpi0inFV_stack_10->SetBinError(26,0.7594044);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hNCinFV_stack_11->SetBinContent(2,0.1967154);
   hNCinFV_stack_11->SetBinContent(3,0.1950248);
   hNCinFV_stack_11->SetBinContent(4,2.403153);
   hNCinFV_stack_11->SetBinContent(5,2.689567);
   hNCinFV_stack_11->SetBinContent(6,3.251853);
   hNCinFV_stack_11->SetBinContent(7,5.135614);
   hNCinFV_stack_11->SetBinContent(8,2.837532);
   hNCinFV_stack_11->SetBinContent(9,4.865354);
   hNCinFV_stack_11->SetBinContent(10,2.343258);
   hNCinFV_stack_11->SetBinContent(11,1.152338);
   hNCinFV_stack_11->SetBinContent(12,2.78052);
   hNCinFV_stack_11->SetBinContent(13,1.656552);
   hNCinFV_stack_11->SetBinContent(14,1.56004);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,0.7709794);
   hNCinFV_stack_11->SetBinContent(17,0.2530584);
   hNCinFV_stack_11->SetBinContent(18,0.6443849);
   hNCinFV_stack_11->SetBinContent(19,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,0.1950248);
   hNCinFV_stack_11->SetBinContent(26,0.5676549);
   hNCinFV_stack_11->SetBinError(2,0.1967154);
   hNCinFV_stack_11->SetBinError(3,0.1950249);
   hNCinFV_stack_11->SetBinError(4,0.8413992);
   hNCinFV_stack_11->SetBinError(5,0.7911593);
   hNCinFV_stack_11->SetBinError(6,0.8395782);
   hNCinFV_stack_11->SetBinError(7,1.146747);
   hNCinFV_stack_11->SetBinError(8,0.8636987);
   hNCinFV_stack_11->SetBinError(9,1.061344);
   hNCinFV_stack_11->SetBinError(10,0.7956634);
   hNCinFV_stack_11->SetBinError(11,0.487264);
   hNCinFV_stack_11->SetBinError(12,1.087436);
   hNCinFV_stack_11->SetBinError(13,0.7245481);
   hNCinFV_stack_11->SetBinError(14,0.8211015);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.6070223);
   hNCinFV_stack_11->SetBinError(17,0.2530584);
   hNCinFV_stack_11->SetBinError(18,0.6443849);
   hNCinFV_stack_11->SetBinError(19,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.1950249);
   hNCinFV_stack_11->SetBinError(26,0.4205804);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(3,3.150364);
   hnumuCCinFV_stack_12->SetBinContent(4,13.27406);
   hnumuCCinFV_stack_12->SetBinContent(5,12.01405);
   hnumuCCinFV_stack_12->SetBinContent(6,9.928947);
   hnumuCCinFV_stack_12->SetBinContent(7,13.74397);
   hnumuCCinFV_stack_12->SetBinContent(8,9.158394);
   hnumuCCinFV_stack_12->SetBinContent(9,8.026711);
   hnumuCCinFV_stack_12->SetBinContent(10,3.189702);
   hnumuCCinFV_stack_12->SetBinContent(11,3.797413);
   hnumuCCinFV_stack_12->SetBinContent(12,3.099653);
   hnumuCCinFV_stack_12->SetBinContent(13,3.401543);
   hnumuCCinFV_stack_12->SetBinContent(14,2.944861);
   hnumuCCinFV_stack_12->SetBinContent(15,2.126586);
   hnumuCCinFV_stack_12->SetBinContent(16,3.289149);
   hnumuCCinFV_stack_12->SetBinContent(17,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(18,1.299146);
   hnumuCCinFV_stack_12->SetBinContent(19,0.9867301);
   hnumuCCinFV_stack_12->SetBinContent(20,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(21,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(22,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(23,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(25,0.594825);
   hnumuCCinFV_stack_12->SetBinContent(26,1.713804);
   hnumuCCinFV_stack_12->SetBinError(3,1.049337);
   hnumuCCinFV_stack_12->SetBinError(4,2.007425);
   hnumuCCinFV_stack_12->SetBinError(5,2.518217);
   hnumuCCinFV_stack_12->SetBinError(6,1.771602);
   hnumuCCinFV_stack_12->SetBinError(7,2.835302);
   hnumuCCinFV_stack_12->SetBinError(8,1.440074);
   hnumuCCinFV_stack_12->SetBinError(9,1.536557);
   hnumuCCinFV_stack_12->SetBinError(10,0.8511326);
   hnumuCCinFV_stack_12->SetBinError(11,1.018811);
   hnumuCCinFV_stack_12->SetBinError(12,0.8034452);
   hnumuCCinFV_stack_12->SetBinError(13,0.9515298);
   hnumuCCinFV_stack_12->SetBinError(14,0.8841171);
   hnumuCCinFV_stack_12->SetBinError(15,0.7295318);
   hnumuCCinFV_stack_12->SetBinError(16,1.428187);
   hnumuCCinFV_stack_12->SetBinError(17,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(18,0.5996854);
   hnumuCCinFV_stack_12->SetBinError(19,0.5071344);
   hnumuCCinFV_stack_12->SetBinError(20,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(21,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(22,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(23,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(25,0.4440588);
   hnumuCCinFV_stack_12->SetBinError(26,0.6207051);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(15,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(21,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(25,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(26,0.8661234);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.3025491);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(9,0.2781975);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.5270816);
   hnueCCinFV_stack_13->SetBinError(15,0.3152389);
   hnueCCinFV_stack_13->SetBinError(21,0.7431478);
   hnueCCinFV_stack_13->SetBinError(25,0.4566905);
   hnueCCinFV_stack_13->SetBinError(26,0.4337125);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);
   hmcerror__23->SetBinContent(2,2.08781);
   hmcerror__23->SetBinContent(3,57.24229);
   hmcerror__23->SetBinContent(4,127.4693);
   hmcerror__23->SetBinContent(5,140.4768);
   hmcerror__23->SetBinContent(6,114.6609);
   hmcerror__23->SetBinContent(7,102.3656);
   hmcerror__23->SetBinContent(8,82.45054);
   hmcerror__23->SetBinContent(9,73.78459);
   hmcerror__23->SetBinContent(10,47.64261);
   hmcerror__23->SetBinContent(11,36.94718);
   hmcerror__23->SetBinContent(12,31.2241);
   hmcerror__23->SetBinContent(13,27.7781);
   hmcerror__23->SetBinContent(14,19.85837);
   hmcerror__23->SetBinContent(15,15.67854);
   hmcerror__23->SetBinContent(16,12.97569);
   hmcerror__23->SetBinContent(17,5.858701);
   hmcerror__23->SetBinContent(18,5.023255);
   hmcerror__23->SetBinContent(19,5.568727);
   hmcerror__23->SetBinContent(20,4.160519);
   hmcerror__23->SetBinContent(21,2.823402);
   hmcerror__23->SetBinContent(22,2.230724);
   hmcerror__23->SetBinContent(23,2.125129);
   hmcerror__23->SetBinContent(24,1.528979);
   hmcerror__23->SetBinContent(25,2.913439);
   hmcerror__23->SetBinContent(26,8.688993);
   hmcerror__23->SetBinError(1,0.3895343);
   hmcerror__23->SetBinError(2,7.109643);
   hmcerror__23->SetBinError(3,25.03812);
   hmcerror__23->SetBinError(4,33.83087);
   hmcerror__23->SetBinError(5,41.62794);
   hmcerror__23->SetBinError(6,27.94701);
   hmcerror__23->SetBinError(7,33.72208);
   hmcerror__23->SetBinError(8,30.06457);
   hmcerror__23->SetBinError(9,27.29458);
   hmcerror__23->SetBinError(10,20.12354);
   hmcerror__23->SetBinError(11,14.02497);
   hmcerror__23->SetBinError(12,16.46659);
   hmcerror__23->SetBinError(13,18.29089);
   hmcerror__23->SetBinError(14,13.54182);
   hmcerror__23->SetBinError(15,10.75455);
   hmcerror__23->SetBinError(16,9.635235);
   hmcerror__23->SetBinError(17,5.907783);
   hmcerror__23->SetBinError(18,4.496847);
   hmcerror__23->SetBinError(19,8.695914);
   hmcerror__23->SetBinError(20,6.584328);
   hmcerror__23->SetBinError(21,7.092818);
   hmcerror__23->SetBinError(22,6.007276);
   hmcerror__23->SetBinError(23,3.540638);
   hmcerror__23->SetBinError(24,4.811445);
   hmcerror__23->SetBinError(25,10.82026);
   hmcerror__23->SetBinError(26,6.420911);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[25] = {
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
   Double_t _fy3029[25] = {
   0,
   3,
   60,
   119,
   128,
   128,
   99,
   80,
   83,
   46,
   32,
   20,
   21,
   11,
   6,
   10,
   7,
   6,
   5,
   5,
   1,
   0,
   3,
   0,
   0};
   Double_t _felx3029[25] = {
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
   Double_t _fely3029[25] = {
   0,
   2.143368,
   7.8743,
   10.90871,
   11.31371,
   11.31371,
   10.0712,
   9.0683,
   9.234,
   6.9153,
   5.7977,
   4.6266,
   4.7354,
   3.4975,
   2.67925,
   3.34883,
   2.85954,
   2.67925,
   2.48995,
   2.48995,
   1,
   0,
   2.143368,
   0,
   0};
   Double_t _fehx3029[25] = {
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
   Double_t _fehy3029[25] = {
   1.1478,
   1.72422,
   7.6713,
   10.90871,
   11.31371,
   11.31371,
   9.87,
   8.8665,
   9.0323,
   6.7108,
   5.5904,
   4.4133,
   4.5229,
   3.27,
   2.41858,
   3.1179,
   2.61053,
   2.41858,
   2.21064,
   2.21064,
   1.35971,
   1.1478,
   1.72422,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,1980);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(153.2451);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 873.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 33.0","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 196.6","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.2","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.6","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  116.4","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  32.8","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 184.8","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 33.9","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 96.3","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.0","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
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
   Double_t _fy3030[25] = {
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
   Double_t _felx3030[25] = {
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
   Double_t _fely3030[25] = {
   0,
   3.405311,
   0.4374059,
   0.2654041,
   0.2963332,
   0.2437362,
   0.3294279,
   0.3646376,
   0.3699225,
   0.4223853,
   0.3795952,
   0.527368,
   0.6584644,
   0.6819197,
   0.6859412,
   0.7425604,
   1.008378,
   0.8952058,
   1.561562,
   1.582574,
   2.512153,
   2.692972,
   1.666081,
   3.146836,
   3.713915};
   Double_t _fehx3030[25] = {
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
   Double_t _fehy3030[25] = {
   0,
   3.405311,
   0.4374059,
   0.2654041,
   0.2963332,
   0.2437362,
   0.3294279,
   0.3646376,
   0.3699225,
   0.4223853,
   0.3795952,
   0.527368,
   0.6584644,
   0.6819197,
   0.6859412,
   0.7425604,
   1.008378,
   0.8952058,
   1.561562,
   1.582574,
   2.512153,
   2.692972,
   1.666081,
   3.146836,
   3.713915};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,1980);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[25] = {
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
   Double_t _fy3031[25] = {
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
   Double_t _felx3031[25] = {
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
   Double_t _fely3031[25] = {
   0,
   0.468902,
   0.1318726,
   0.1585276,
   0.1659831,
   0.1775074,
   0.2082939,
   0.2465817,
   0.2302055,
   0.2196789,
   0.1883291,
   0.230316,
   0.2281341,
   0.2249964,
   0.2659074,
   0.3008402,
   0.3508311,
   0.3751969,
   0.2792828,
   0.3333358,
   0.728924,
   0.4719755,
   0.4783941,
   0.5580048,
   0.4366319};
   Double_t _fehx3031[25] = {
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
   Double_t _fehy3031[25] = {
   0,
   0.468902,
   0.1318726,
   0.1585276,
   0.1659831,
   0.1775074,
   0.2082939,
   0.2465817,
   0.2302055,
   0.2196789,
   0.1883291,
   0.230316,
   0.2281341,
   0.2249964,
   0.2659074,
   0.3008402,
   0.3508311,
   0.3751969,
   0.2792828,
   0.3333358,
   0.728924,
   0.4719755,
   0.4783941,
   0.5580048,
   0.4366319};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,1980);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[25] = {
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
   Double_t _fy3032[25] = {
   10,
   1.436912,
   1.048176,
   0.9335582,
   0.9111824,
   1.116335,
   0.9671218,
   0.9702787,
   1.124896,
   0.9655222,
   0.8661012,
   0.6405309,
   0.7559912,
   0.5539226,
   0.3826888,
   0.7706719,
   1.194804,
   1.194445,
   0.8978712,
   1.201773,
   0.3541826,
   0,
   1.411679,
   0,
   0};
   Double_t _felx3032[25] = {
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
   Double_t _fely3032[25] = {
   0,
   1.026611,
   0.1375609,
   0.08557914,
   0.08053791,
   0.09867103,
   0.09838462,
   0.1099847,
   0.1251481,
   0.1451495,
   0.1569186,
   0.148174,
   0.1704724,
   0.1761222,
   0.1708865,
   0.2580849,
   0.4880843,
   0.5333693,
   0.4471309,
   0.5984711,
   0.3541826,
   0,
   1.008582,
   0,
   0};
   Double_t _fehx3032[25] = {
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
   Double_t _fehy3032[25] = {
   0,
   0.825851,
   0.1340145,
   0.08557914,
   0.08053791,
   0.09867103,
   0.09641912,
   0.1075372,
   0.1224144,
   0.1408571,
   0.1513079,
   0.1413427,
   0.1628225,
   0.1646661,
   0.1542606,
   0.2402878,
   0.4455817,
   0.4814767,
   0.396974,
   0.5313376,
   0.4815856,
   0.5145415,
   0.8113482,
   0.7506972,
   0.3939675};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,1980);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(11);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_nc_transferred_energy_all",25,0,1800);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
