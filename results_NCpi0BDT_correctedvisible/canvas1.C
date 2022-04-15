#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Apr 14 23:25:47 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-1.72,1692.308,144.9326);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);
   hmc__1->SetBinContent(2,1.726612);
   hmc__1->SetBinContent(3,27.40931);
   hmc__1->SetBinContent(4,66.29604);
   hmc__1->SetBinContent(5,81.96988);
   hmc__1->SetBinContent(6,84.78732);
   hmc__1->SetBinContent(7,78.70985);
   hmc__1->SetBinContent(8,65.99434);
   hmc__1->SetBinContent(9,52.17411);
   hmc__1->SetBinContent(10,41.82151);
   hmc__1->SetBinContent(11,30.91394);
   hmc__1->SetBinContent(12,23.6864);
   hmc__1->SetBinContent(13,17.95143);
   hmc__1->SetBinContent(14,13.61196);
   hmc__1->SetBinContent(15,10.04797);
   hmc__1->SetBinContent(16,6.398798);
   hmc__1->SetBinContent(17,6.037106);
   hmc__1->SetBinContent(18,4.125509);
   hmc__1->SetBinContent(19,3.756945);
   hmc__1->SetBinContent(20,3.429803);
   hmc__1->SetBinContent(21,10.18898);
   hmc__1->SetBinError(1,0.125509);
   hmc__1->SetBinError(2,2.416771);
   hmc__1->SetBinError(3,7.468961);
   hmc__1->SetBinError(4,16.59097);
   hmc__1->SetBinError(5,20.27406);
   hmc__1->SetBinError(6,20.29504);
   hmc__1->SetBinError(7,17.42901);
   hmc__1->SetBinError(8,14.51262);
   hmc__1->SetBinError(9,11.93282);
   hmc__1->SetBinError(10,9.343709);
   hmc__1->SetBinError(11,8.45929);
   hmc__1->SetBinError(12,6.849815);
   hmc__1->SetBinError(13,5.800362);
   hmc__1->SetBinError(14,4.926239);
   hmc__1->SetBinError(15,3.69657);
   hmc__1->SetBinError(16,2.5995);
   hmc__1->SetBinError(17,3.130911);
   hmc__1->SetBinError(18,2.242108);
   hmc__1->SetBinError(19,1.925828);
   hmc__1->SetBinError(20,2.567653);
   hmc__1->SetBinError(21,3.289183);
   hmc__1->SetMinimum(-1.72);
   hmc__1->SetMaximum(137.6);
   hmc__1->SetEntries(622.1566);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,1500);
   hs1_stack_1->SetMinimum(-2.770604e-09);
   hs1_stack_1->SetMaximum(89.02668);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(2,0.1516736);
   hbadmatch_stack_1->SetBinContent(3,0.8444412);
   hbadmatch_stack_1->SetBinContent(4,2.111885);
   hbadmatch_stack_1->SetBinContent(5,1.756995);
   hbadmatch_stack_1->SetBinContent(6,1.22245);
   hbadmatch_stack_1->SetBinContent(7,1.802298);
   hbadmatch_stack_1->SetBinContent(8,1.294617);
   hbadmatch_stack_1->SetBinContent(9,1.276175);
   hbadmatch_stack_1->SetBinContent(10,0.5333853);
   hbadmatch_stack_1->SetBinContent(11,0.4802833);
   hbadmatch_stack_1->SetBinContent(12,0.3490433);
   hbadmatch_stack_1->SetBinContent(13,0.4641009);
   hbadmatch_stack_1->SetBinContent(14,0.3781998);
   hbadmatch_stack_1->SetBinContent(15,0.2368697);
   hbadmatch_stack_1->SetBinContent(17,0.2643556);
   hbadmatch_stack_1->SetBinContent(18,0.1002069);
   hbadmatch_stack_1->SetBinContent(19,0.158587);
   hbadmatch_stack_1->SetBinContent(21,0.3074491);
   hbadmatch_stack_1->SetBinError(2,0.08980566);
   hbadmatch_stack_1->SetBinError(3,0.2154827);
   hbadmatch_stack_1->SetBinError(4,0.5165416);
   hbadmatch_stack_1->SetBinError(5,0.3147436);
   hbadmatch_stack_1->SetBinError(6,0.2633546);
   hbadmatch_stack_1->SetBinError(7,0.4584727);
   hbadmatch_stack_1->SetBinError(8,0.2669339);
   hbadmatch_stack_1->SetBinError(9,0.257182);
   hbadmatch_stack_1->SetBinError(10,0.1639394);
   hbadmatch_stack_1->SetBinError(11,0.1507979);
   hbadmatch_stack_1->SetBinError(12,0.1325672);
   hbadmatch_stack_1->SetBinError(13,0.1557514);
   hbadmatch_stack_1->SetBinError(14,0.1434337);
   hbadmatch_stack_1->SetBinError(15,0.1102997);
   hbadmatch_stack_1->SetBinError(17,0.1250103);
   hbadmatch_stack_1->SetBinError(18,0.0657745);
   hbadmatch_stack_1->SetBinError(19,0.09603769);
   hbadmatch_stack_1->SetBinError(21,0.1309484);
   hbadmatch_stack_1->SetEntries(370);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);
   hext_stack_2->SetBinContent(2,0.211319);
   hext_stack_2->SetBinContent(3,4.891683);
   hext_stack_2->SetBinContent(4,7.281616);
   hext_stack_2->SetBinContent(5,8.313671);
   hext_stack_2->SetBinContent(6,6.117324);
   hext_stack_2->SetBinContent(7,4.490853);
   hext_stack_2->SetBinContent(8,3.81328);
   hext_stack_2->SetBinContent(9,2.668064);
   hext_stack_2->SetBinContent(10,2.321777);
   hext_stack_2->SetBinContent(11,2.110458);
   hext_stack_2->SetBinContent(12,1.776441);
   hext_stack_2->SetBinContent(13,0.7811952);
   hext_stack_2->SetBinContent(14,0.2972079);
   hext_stack_2->SetBinContent(15,0.2972079);
   hext_stack_2->SetBinContent(16,0.4717173);
   hext_stack_2->SetBinContent(17,0.5207967);
   hext_stack_2->SetBinContent(18,0.06134926);
   hext_stack_2->SetBinContent(19,0.3094778);
   hext_stack_2->SetBinContent(20,0.01226985);
   hext_stack_2->SetBinContent(21,1.004784);
   hext_stack_2->SetBinError(2,0.1994269);
   hext_stack_2->SetBinError(3,0.9169315);
   hext_stack_2->SetBinError(4,1.080515);
   hext_stack_2->SetBinError(5,1.168789);
   hext_stack_2->SetBinError(6,1.002255);
   hext_stack_2->SetBinError(7,0.8510643);
   hext_stack_2->SetBinError(8,0.8239044);
   hext_stack_2->SetBinError(9,0.6646032);
   hext_stack_2->SetBinError(10,0.6326692);
   hext_stack_2->SetBinError(11,0.6004159);
   hext_stack_2->SetBinError(12,0.5649979);
   hext_stack_2->SetBinError(13,0.3480228);
   hext_stack_2->SetBinError(14,0.2020518);
   hext_stack_2->SetBinError(15,0.2020518);
   hext_stack_2->SetBinError(16,0.2830978);
   hext_stack_2->SetBinError(17,0.2841594);
   hext_stack_2->SetBinError(18,0.02743622);
   hext_stack_2->SetBinError(19,0.202424);
   hext_stack_2->SetBinError(20,0.01226985);
   hext_stack_2->SetBinError(21,0.4012998);
   hext_stack_2->SetEntries(893);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);
   hdirt_stack_3->SetBinContent(2,0.05109268);
   hdirt_stack_3->SetBinContent(3,0.9105189);
   hdirt_stack_3->SetBinContent(4,1.642406);
   hdirt_stack_3->SetBinContent(5,1.00121);
   hdirt_stack_3->SetBinContent(6,0.8829218);
   hdirt_stack_3->SetBinContent(7,0.5622603);
   hdirt_stack_3->SetBinContent(8,0.4148186);
   hdirt_stack_3->SetBinContent(9,0.1212966);
   hdirt_stack_3->SetBinContent(10,0.1612201);
   hdirt_stack_3->SetBinContent(11,0.1054134);
   hdirt_stack_3->SetBinContent(12,0.1358889);
   hdirt_stack_3->SetBinContent(14,0.08841814);
   hdirt_stack_3->SetBinContent(18,0.04420907);
   hdirt_stack_3->SetBinError(2,0.05109268);
   hdirt_stack_3->SetBinError(3,0.2596168);
   hdirt_stack_3->SetBinError(4,0.2568074);
   hdirt_stack_3->SetBinError(5,0.2003656);
   hdirt_stack_3->SetBinError(6,0.3356067);
   hdirt_stack_3->SetBinError(7,0.1490283);
   hdirt_stack_3->SetBinError(8,0.1245323);
   hdirt_stack_3->SetBinError(9,0.06464621);
   hdirt_stack_3->SetBinError(10,0.07987154);
   hdirt_stack_3->SetBinError(11,0.06949374);
   hdirt_stack_3->SetBinError(12,0.07850069);
   hdirt_stack_3->SetBinError(14,0.06252107);
   hdirt_stack_3->SetBinError(18,0.04420907);
   hdirt_stack_3->SetEntries(224);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);
   houtFV_stack_4->SetBinContent(2,0.6705637);
   houtFV_stack_4->SetBinContent(3,5.813997);
   houtFV_stack_4->SetBinContent(4,10.85265);
   houtFV_stack_4->SetBinContent(5,10.77429);
   houtFV_stack_4->SetBinContent(6,7.823108);
   houtFV_stack_4->SetBinContent(7,7.007698);
   houtFV_stack_4->SetBinContent(8,6.007422);
   houtFV_stack_4->SetBinContent(9,3.954763);
   houtFV_stack_4->SetBinContent(10,3.248581);
   houtFV_stack_4->SetBinContent(11,1.855972);
   houtFV_stack_4->SetBinContent(12,0.9152911);
   houtFV_stack_4->SetBinContent(13,1.061747);
   houtFV_stack_4->SetBinContent(14,0.8165605);
   houtFV_stack_4->SetBinContent(15,0.5428755);
   houtFV_stack_4->SetBinContent(16,0.4464442);
   houtFV_stack_4->SetBinContent(17,0.3887863);
   houtFV_stack_4->SetBinContent(18,0.1384575);
   houtFV_stack_4->SetBinContent(19,0.2605754);
   houtFV_stack_4->SetBinContent(20,0.03825059);
   houtFV_stack_4->SetBinContent(21,0.4846948);
   houtFV_stack_4->SetBinError(2,0.1975755);
   houtFV_stack_4->SetBinError(3,0.5681903);
   houtFV_stack_4->SetBinError(4,0.7710578);
   houtFV_stack_4->SetBinError(5,0.7696162);
   houtFV_stack_4->SetBinError(6,0.6561713);
   houtFV_stack_4->SetBinError(7,0.6228462);
   houtFV_stack_4->SetBinError(8,0.580286);
   houtFV_stack_4->SetBinError(9,0.4623304);
   houtFV_stack_4->SetBinError(10,0.4276535);
   houtFV_stack_4->SetBinError(11,0.3240832);
   houtFV_stack_4->SetBinError(12,0.205412);
   houtFV_stack_4->SetBinError(13,0.2379003);
   houtFV_stack_4->SetBinError(14,0.1947175);
   houtFV_stack_4->SetBinError(15,0.1684624);
   houtFV_stack_4->SetBinError(16,0.1644161);
   houtFV_stack_4->SetBinError(17,0.1422618);
   houtFV_stack_4->SetBinError(18,0.0693829);
   houtFV_stack_4->SetBinError(19,0.1245668);
   houtFV_stack_4->SetBinError(20,0.02208399);
   houtFV_stack_4->SetBinError(21,0.1658926);
   houtFV_stack_4->SetEntries(1630);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);
   hNCpi0inFV_stack_5->SetBinContent(2,0.5339009);
   hNCpi0inFV_stack_5->SetBinContent(3,11.2753);
   hNCpi0inFV_stack_5->SetBinContent(4,33.69281);
   hNCpi0inFV_stack_5->SetBinContent(5,47.20014);
   hNCpi0inFV_stack_5->SetBinContent(6,48.98452);
   hNCpi0inFV_stack_5->SetBinContent(7,45.44765);
   hNCpi0inFV_stack_5->SetBinContent(8,35.39955);
   hNCpi0inFV_stack_5->SetBinContent(9,25.99592);
   hNCpi0inFV_stack_5->SetBinContent(10,20.21996);
   hNCpi0inFV_stack_5->SetBinContent(11,13.52367);
   hNCpi0inFV_stack_5->SetBinContent(12,10.39157);
   hNCpi0inFV_stack_5->SetBinContent(13,7.815091);
   hNCpi0inFV_stack_5->SetBinContent(14,5.39895);
   hNCpi0inFV_stack_5->SetBinContent(15,3.80087);
   hNCpi0inFV_stack_5->SetBinContent(16,2.490814);
   hNCpi0inFV_stack_5->SetBinContent(17,1.807501);
   hNCpi0inFV_stack_5->SetBinContent(18,1.259055);
   hNCpi0inFV_stack_5->SetBinContent(19,1.186143);
   hNCpi0inFV_stack_5->SetBinContent(20,1.556086);
   hNCpi0inFV_stack_5->SetBinContent(21,2.605566);
   hNCpi0inFV_stack_5->SetBinError(2,0.1766249);
   hNCpi0inFV_stack_5->SetBinError(3,0.7831033);
   hNCpi0inFV_stack_5->SetBinError(4,1.351244);
   hNCpi0inFV_stack_5->SetBinError(5,1.59779);
   hNCpi0inFV_stack_5->SetBinError(6,1.626603);
   hNCpi0inFV_stack_5->SetBinError(7,1.574481);
   hNCpi0inFV_stack_5->SetBinError(8,1.381892);
   hNCpi0inFV_stack_5->SetBinError(9,1.183882);
   hNCpi0inFV_stack_5->SetBinError(10,1.041147);
   hNCpi0inFV_stack_5->SetBinError(11,0.8492245);
   hNCpi0inFV_stack_5->SetBinError(12,0.7519306);
   hNCpi0inFV_stack_5->SetBinError(13,0.6525696);
   hNCpi0inFV_stack_5->SetBinError(14,0.5313222);
   hNCpi0inFV_stack_5->SetBinError(15,0.4447972);
   hNCpi0inFV_stack_5->SetBinError(16,0.3638174);
   hNCpi0inFV_stack_5->SetBinError(17,0.3052285);
   hNCpi0inFV_stack_5->SetBinError(18,0.2546198);
   hNCpi0inFV_stack_5->SetBinError(19,0.2404253);
   hNCpi0inFV_stack_5->SetBinError(20,0.2895886);
   hNCpi0inFV_stack_5->SetBinError(21,0.3658226);
   hNCpi0inFV_stack_5->SetEntries(8416);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);
   hCCpi0inFV_stack_6->SetBinContent(2,0.0127502);
   hCCpi0inFV_stack_6->SetBinContent(3,0.8859965);
   hCCpi0inFV_stack_6->SetBinContent(4,3.986246);
   hCCpi0inFV_stack_6->SetBinContent(5,5.26615);
   hCCpi0inFV_stack_6->SetBinContent(6,9.155758);
   hCCpi0inFV_stack_6->SetBinContent(7,10.77962);
   hCCpi0inFV_stack_6->SetBinContent(8,11.73778);
   hCCpi0inFV_stack_6->SetBinContent(9,11.14293);
   hCCpi0inFV_stack_6->SetBinContent(10,10.2225);
   hCCpi0inFV_stack_6->SetBinContent(11,7.761661);
   hCCpi0inFV_stack_6->SetBinContent(12,6.665371);
   hCCpi0inFV_stack_6->SetBinContent(13,5.625775);
   hCCpi0inFV_stack_6->SetBinContent(14,4.546516);
   hCCpi0inFV_stack_6->SetBinContent(15,3.992527);
   hCCpi0inFV_stack_6->SetBinContent(16,2.151943);
   hCCpi0inFV_stack_6->SetBinContent(17,2.172284);
   hCCpi0inFV_stack_6->SetBinContent(18,1.918874);
   hCCpi0inFV_stack_6->SetBinContent(19,1.554291);
   hCCpi0inFV_stack_6->SetBinContent(20,1.129758);
   hCCpi0inFV_stack_6->SetBinContent(21,3.646656);
   hCCpi0inFV_stack_6->SetBinError(2,0.0127502);
   hCCpi0inFV_stack_6->SetBinError(3,0.2188932);
   hCCpi0inFV_stack_6->SetBinError(4,0.4785604);
   hCCpi0inFV_stack_6->SetBinError(5,0.5410552);
   hCCpi0inFV_stack_6->SetBinError(6,0.7101941);
   hCCpi0inFV_stack_6->SetBinError(7,0.7661435);
   hCCpi0inFV_stack_6->SetBinError(8,0.7980399);
   hCCpi0inFV_stack_6->SetBinError(9,0.7751868);
   hCCpi0inFV_stack_6->SetBinError(10,0.7428787);
   hCCpi0inFV_stack_6->SetBinError(11,0.6475112);
   hCCpi0inFV_stack_6->SetBinError(12,0.5995391);
   hCCpi0inFV_stack_6->SetBinError(13,0.5471006);
   hCCpi0inFV_stack_6->SetBinError(14,0.4897556);
   hCCpi0inFV_stack_6->SetBinError(15,0.4773129);
   hCCpi0inFV_stack_6->SetBinError(16,0.3448137);
   hCCpi0inFV_stack_6->SetBinError(17,0.3363415);
   hCCpi0inFV_stack_6->SetBinError(18,0.3191569);
   hCCpi0inFV_stack_6->SetBinError(19,0.2947665);
   hCCpi0inFV_stack_6->SetBinError(20,0.2573544);
   hCCpi0inFV_stack_6->SetBinError(21,0.4322385);
   hCCpi0inFV_stack_6->SetEntries(2725);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);
   hNCinFV_stack_7->SetBinContent(3,1.033141);
   hNCinFV_stack_7->SetBinContent(4,2.259329);
   hNCinFV_stack_7->SetBinContent(5,2.330446);
   hNCinFV_stack_7->SetBinContent(6,4.016016);
   hNCinFV_stack_7->SetBinContent(7,3.73353);
   hNCinFV_stack_7->SetBinContent(8,2.106327);
   hNCinFV_stack_7->SetBinContent(9,2.636638);
   hNCinFV_stack_7->SetBinContent(10,1.570631);
   hNCinFV_stack_7->SetBinContent(11,1.641748);
   hNCinFV_stack_7->SetBinContent(12,0.7853155);
   hNCinFV_stack_7->SetBinContent(13,1.144303);
   hNCinFV_stack_7->SetBinContent(14,0.6868684);
   hNCinFV_stack_7->SetBinContent(15,0.6341078);
   hNCinFV_stack_7->SetBinContent(16,0.1384575);
   hNCinFV_stack_7->SetBinContent(17,0.3243263);
   hNCinFV_stack_7->SetBinContent(18,0.1002069);
   hNCinFV_stack_7->SetBinContent(19,0.1749134);
   hNCinFV_stack_7->SetBinContent(20,0.149413);
   hNCinFV_stack_7->SetBinContent(21,0.2751203);
   hNCinFV_stack_7->SetBinError(3,0.2363335);
   hNCinFV_stack_7->SetBinError(4,0.3333464);
   hNCinFV_stack_7->SetBinError(5,0.3480983);
   hNCinFV_stack_7->SetBinError(6,0.4743171);
   hNCinFV_stack_7->SetBinError(7,0.4506476);
   hNCinFV_stack_7->SetBinError(8,0.3304073);
   hNCinFV_stack_7->SetBinError(9,0.3826446);
   hNCinFV_stack_7->SetBinError(10,0.2846022);
   hNCinFV_stack_7->SetBinError(11,0.3017466);
   hNCinFV_stack_7->SetBinError(12,0.2012441);
   hNCinFV_stack_7->SetBinError(13,0.2517303);
   hNCinFV_stack_7->SetBinError(14,0.1901999);
   hNCinFV_stack_7->SetBinError(15,0.1884745);
   hNCinFV_stack_7->SetBinError(16,0.0693829);
   hNCinFV_stack_7->SetBinError(17,0.1277878);
   hNCinFV_stack_7->SetBinError(18,0.0657745);
   hNCinFV_stack_7->SetBinError(19,0.09125478);
   hNCinFV_stack_7->SetBinError(20,0.08945557);
   hNCinFV_stack_7->SetBinError(21,0.1124887);
   hNCinFV_stack_7->SetEntries(696);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);
   hnumuCCinFV_stack_8->SetBinContent(2,0.09531189);
   hnumuCCinFV_stack_8->SetBinContent(3,1.614256);
   hnumuCCinFV_stack_8->SetBinContent(4,4.269889);
   hnumuCCinFV_stack_8->SetBinContent(5,5.155329);
   hnumuCCinFV_stack_8->SetBinContent(6,6.362301);
   hnumuCCinFV_stack_8->SetBinContent(7,4.811248);
   hnumuCCinFV_stack_8->SetBinContent(8,4.9865);
   hnumuCCinFV_stack_8->SetBinContent(9,4.336687);
   hnumuCCinFV_stack_8->SetBinContent(10,3.420819);
   hnumuCCinFV_stack_8->SetBinContent(11,3.341612);
   hnumuCCinFV_stack_8->SetBinContent(12,2.667479);
   hnumuCCinFV_stack_8->SetBinContent(13,0.8767687);
   hnumuCCinFV_stack_8->SetBinContent(14,1.177185);
   hnumuCCinFV_stack_8->SetBinContent(15,0.4662875);
   hnumuCCinFV_stack_8->SetBinContent(16,0.54969);
   hnumuCCinFV_stack_8->SetBinContent(17,0.4795688);
   hnumuCCinFV_stack_8->SetBinContent(18,0.3045322);
   hnumuCCinFV_stack_8->SetBinContent(19,0.03825059);
   hnumuCCinFV_stack_8->SetBinContent(20,0.3480321);
   hnumuCCinFV_stack_8->SetBinContent(21,0.7453954);
   hnumuCCinFV_stack_8->SetBinError(2,0.09531189);
   hnumuCCinFV_stack_8->SetBinError(3,0.5724907);
   hnumuCCinFV_stack_8->SetBinError(4,0.7186306);
   hnumuCCinFV_stack_8->SetBinError(5,0.770972);
   hnumuCCinFV_stack_8->SetBinError(6,0.6771078);
   hnumuCCinFV_stack_8->SetBinError(7,0.6530621);
   hnumuCCinFV_stack_8->SetBinError(8,0.6690012);
   hnumuCCinFV_stack_8->SetBinError(9,0.5306415);
   hnumuCCinFV_stack_8->SetBinError(10,0.5455415);
   hnumuCCinFV_stack_8->SetBinError(11,0.4750557);
   hnumuCCinFV_stack_8->SetBinError(12,0.4152786);
   hnumuCCinFV_stack_8->SetBinError(13,0.2116705);
   hnumuCCinFV_stack_8->SetBinError(14,0.2757038);
   hnumuCCinFV_stack_8->SetBinError(15,0.1504004);
   hnumuCCinFV_stack_8->SetBinError(16,0.1768577);
   hnumuCCinFV_stack_8->SetBinError(17,0.1723949);
   hnumuCCinFV_stack_8->SetBinError(18,0.1359031);
   hnumuCCinFV_stack_8->SetBinError(19,0.02208399);
   hnumuCCinFV_stack_8->SetBinError(20,0.1402876);
   hnumuCCinFV_stack_8->SetBinError(21,0.1975068);
   hnumuCCinFV_stack_8->SetEntries(1072);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);
   hnueCCinFV_stack_9->SetBinContent(3,0.1399791);
   hnueCCinFV_stack_9->SetBinContent(4,0.1991916);
   hnueCCinFV_stack_9->SetBinContent(5,0.1716504);
   hnueCCinFV_stack_9->SetBinContent(6,0.2229257);
   hnueCCinFV_stack_9->SetBinContent(7,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(8,0.2340455);
   hnueCCinFV_stack_9->SetBinContent(9,0.04162441);
   hnueCCinFV_stack_9->SetBinContent(10,0.122648);
   hnueCCinFV_stack_9->SetBinContent(11,0.09312885);
   hnueCCinFV_stack_9->SetBinContent(13,0.1824487);
   hnueCCinFV_stack_9->SetBinContent(14,0.2220596);
   hnueCCinFV_stack_9->SetBinContent(15,0.07722326);
   hnueCCinFV_stack_9->SetBinContent(16,0.1497306);
   hnueCCinFV_stack_9->SetBinContent(17,0.07948712);
   hnueCCinFV_stack_9->SetBinContent(18,0.1986191);
   hnueCCinFV_stack_9->SetBinContent(19,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(20,0.1959935);
   hnueCCinFV_stack_9->SetBinContent(21,1.119316);
   hnueCCinFV_stack_9->SetBinError(3,0.08116254);
   hnueCCinFV_stack_9->SetBinError(4,0.1232833);
   hnueCCinFV_stack_9->SetBinError(5,0.09195243);
   hnueCCinFV_stack_9->SetBinError(6,0.1216378);
   hnueCCinFV_stack_9->SetBinError(7,0.06325464);
   hnueCCinFV_stack_9->SetBinError(8,0.110961);
   hnueCCinFV_stack_9->SetBinError(9,0.02339665);
   hnueCCinFV_stack_9->SetBinError(10,0.06909061);
   hnueCCinFV_stack_9->SetBinError(11,0.06588272);
   hnueCCinFV_stack_9->SetBinError(13,0.08519072);
   hnueCCinFV_stack_9->SetBinError(14,0.1220637);
   hnueCCinFV_stack_9->SetBinError(15,0.06380958);
   hnueCCinFV_stack_9->SetBinError(16,0.09753869);
   hnueCCinFV_stack_9->SetBinError(17,0.07948712);
   hnueCCinFV_stack_9->SetBinError(18,0.1080662);
   hnueCCinFV_stack_9->SetBinError(19,0.06325464);
   hnueCCinFV_stack_9->SetBinError(20,0.1065739);
   hnueCCinFV_stack_9->SetBinError(21,0.5056085);
   hnueCCinFV_stack_9->SetEntries(85);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);
   hmcerror__2->SetBinContent(2,1.726612);
   hmcerror__2->SetBinContent(3,27.40931);
   hmcerror__2->SetBinContent(4,66.29604);
   hmcerror__2->SetBinContent(5,81.96988);
   hmcerror__2->SetBinContent(6,84.78732);
   hmcerror__2->SetBinContent(7,78.70985);
   hmcerror__2->SetBinContent(8,65.99434);
   hmcerror__2->SetBinContent(9,52.17411);
   hmcerror__2->SetBinContent(10,41.82151);
   hmcerror__2->SetBinContent(11,30.91394);
   hmcerror__2->SetBinContent(12,23.6864);
   hmcerror__2->SetBinContent(13,17.95143);
   hmcerror__2->SetBinContent(14,13.61196);
   hmcerror__2->SetBinContent(15,10.04797);
   hmcerror__2->SetBinContent(16,6.398798);
   hmcerror__2->SetBinContent(17,6.037106);
   hmcerror__2->SetBinContent(18,4.125509);
   hmcerror__2->SetBinContent(19,3.756945);
   hmcerror__2->SetBinContent(20,3.429803);
   hmcerror__2->SetBinContent(21,10.18898);
   hmcerror__2->SetBinError(1,0.125509);
   hmcerror__2->SetBinError(2,2.416771);
   hmcerror__2->SetBinError(3,7.468961);
   hmcerror__2->SetBinError(4,16.59097);
   hmcerror__2->SetBinError(5,20.27406);
   hmcerror__2->SetBinError(6,20.29504);
   hmcerror__2->SetBinError(7,17.42901);
   hmcerror__2->SetBinError(8,14.51262);
   hmcerror__2->SetBinError(9,11.93282);
   hmcerror__2->SetBinError(10,9.343709);
   hmcerror__2->SetBinError(11,8.45929);
   hmcerror__2->SetBinError(12,6.849815);
   hmcerror__2->SetBinError(13,5.800362);
   hmcerror__2->SetBinError(14,4.926239);
   hmcerror__2->SetBinError(15,3.69657);
   hmcerror__2->SetBinError(16,2.5995);
   hmcerror__2->SetBinError(17,3.130911);
   hmcerror__2->SetBinError(18,2.242108);
   hmcerror__2->SetBinError(19,1.925828);
   hmcerror__2->SetBinError(20,2.567653);
   hmcerror__2->SetBinError(21,3.289183);
   hmcerror__2->SetEntries(622.1566);

   ci = TColor::GetColor("#666666");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3001[20] = {
   0,
   2,
   33,
   68,
   83,
   86,
   58,
   37,
   40,
   32,
   18,
   17,
   10,
   3,
   11,
   5,
   4,
   2,
   0,
   3};
   Double_t _felx3001[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3001[20] = {
   0,
   2,
   5.8847,
   8.3726,
   9.234,
   9.3967,
   7.7446,
   6.2203,
   6.4604,
   5.7977,
   4.4008,
   4.2835,
   3.34883,
   2.143368,
   3.4975,
   2.48995,
   2.29683,
   2,
   0,
   2.143368};
   Double_t _fehx3001[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3001[20] = {
   1.1478,
   1.51917,
   5.6776,
   8.1701,
   9.0323,
   9.1951,
   7.5415,
   6.0141,
   6.2549,
   5.5904,
   4.1858,
   4.0673,
   3.1179,
   1.72422,
   3.27,
   2.21064,
   1.98186,
   1.51917,
   1.1478,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(104.7146);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.82#pm0.04(data err)#pm0.16(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.98/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 512.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 13.4","F");

   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 46.7","F");

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 62.6","F");

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  318.0","F");

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 100.7","F");

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 25.5","F");

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 45.3","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.5","F");

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_10_kine_reco_Enu_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3002[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3002[20] = {
   0,
   1.399719,
   0.2724972,
   0.2502558,
   0.2473355,
   0.2393641,
   0.2214336,
   0.219907,
   0.2287115,
   0.2234187,
   0.2736399,
   0.2891877,
   0.3231142,
   0.3619051,
   0.3678922,
   0.4062482,
   0.5186113,
   0.5434741,
   0.5126048,
   0.74863};
   Double_t _fehx3002[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3002[20] = {
   0,
   1.399719,
   0.2724972,
   0.2502558,
   0.2473355,
   0.2393641,
   0.2214336,
   0.219907,
   0.2287115,
   0.2234187,
   0.2736399,
   0.2891877,
   0.3231142,
   0.3619051,
   0.3678922,
   0.4062482,
   0.5186113,
   0.5434741,
   0.5126048,
   0.74863};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Corrected Visible Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3003[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3003[20] = {
   0,
   0.3081179,
   0.1747594,
   0.1898516,
   0.1968274,
   0.2052501,
   0.2035268,
   0.1930278,
   0.2066809,
   0.198157,
   0.1939111,
   0.2026611,
   0.2232479,
   0.2090759,
   0.2363339,
   0.2350563,
   0.2401052,
   0.2681643,
   0.2669677,
   0.2943333};
   Double_t _fehx3003[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3003[20] = {
   0,
   0.3081179,
   0.1747594,
   0.1898516,
   0.1968274,
   0.2052501,
   0.2035268,
   0.1930278,
   0.2066809,
   0.198157,
   0.1939111,
   0.2026611,
   0.2232479,
   0.2090759,
   0.2363339,
   0.2350563,
   0.2401052,
   0.2681643,
   0.2669677,
   0.2943333};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3004[20] = {
   10,
   1.158338,
   1.203971,
   1.025702,
   1.012567,
   1.014303,
   0.7368836,
   0.5606541,
   0.7666638,
   0.7651564,
   0.5822615,
   0.7177115,
   0.5570587,
   0.2203943,
   1.094749,
   0.7813968,
   0.6625692,
   0.4847886,
   0,
   0.8746858};
   Double_t _felx3004[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3004[20] = {
   0,
   1.158338,
   0.2146971,
   0.1262911,
   0.1126511,
   0.1108267,
   0.09839429,
   0.09425505,
   0.1238239,
   0.1386296,
   0.1423565,
   0.1808422,
   0.1865495,
   0.1574621,
   0.3480803,
   0.3891278,
   0.3804522,
   0.4847886,
   0,
   0.6249245};
   Double_t _fehx3004[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3004[20] = {
   0,
   0.8798561,
   0.2071413,
   0.1232366,
   0.1101905,
   0.108449,
   0.09581392,
   0.09113054,
   0.1198851,
   0.1336728,
   0.1354017,
   0.1717146,
   0.1736853,
   0.1266694,
   0.3254389,
   0.3454774,
   0.3282798,
   0.3682382,
   0.3055142,
   0.5027169};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(11);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_10_kine_reco_Enu_all",20,0,1500);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
   TLine *line = new TLine(0,1,1500,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
