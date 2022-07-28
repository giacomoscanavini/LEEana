#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Mon Jun  6 14:11:36 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-0.7291004,1.25641,80.62316);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hmc__13->SetBinContent(1,10.04812);
   hmc__13->SetBinContent(2,7.256709);
   hmc__13->SetBinContent(3,7.090091);
   hmc__13->SetBinContent(4,6.882375);
   hmc__13->SetBinContent(5,6.020407);
   hmc__13->SetBinContent(6,7.500793);
   hmc__13->SetBinContent(7,7.328517);
   hmc__13->SetBinContent(8,6.733604);
   hmc__13->SetBinContent(9,6.685366);
   hmc__13->SetBinContent(10,6.62436);
   hmc__13->SetBinContent(11,8.164032);
   hmc__13->SetBinContent(12,8.264124);
   hmc__13->SetBinContent(13,9.578114);
   hmc__13->SetBinContent(14,9.053835);
   hmc__13->SetBinContent(15,10.92159);
   hmc__13->SetBinContent(16,10.67866);
   hmc__13->SetBinContent(17,10.84081);
   hmc__13->SetBinContent(18,13.24894);
   hmc__13->SetBinContent(19,14.14803);
   hmc__13->SetBinContent(20,13.98037);
   hmc__13->SetBinContent(21,18.41115);
   hmc__13->SetBinContent(22,20.61679);
   hmc__13->SetBinContent(23,20.629);
   hmc__13->SetBinContent(24,28.36431);
   hmc__13->SetBinContent(25,36.45502);
   hmc__13->SetBinError(1,3.468765);
   hmc__13->SetBinError(2,2.702575);
   hmc__13->SetBinError(3,3.637687);
   hmc__13->SetBinError(4,2.88216);
   hmc__13->SetBinError(5,3.179617);
   hmc__13->SetBinError(6,2.721156);
   hmc__13->SetBinError(7,2.983432);
   hmc__13->SetBinError(8,2.869769);
   hmc__13->SetBinError(9,3.85137);
   hmc__13->SetBinError(10,2.715617);
   hmc__13->SetBinError(11,3.726427);
   hmc__13->SetBinError(12,3.164219);
   hmc__13->SetBinError(13,3.124934);
   hmc__13->SetBinError(14,3.183176);
   hmc__13->SetBinError(15,3.724821);
   hmc__13->SetBinError(16,3.912911);
   hmc__13->SetBinError(17,3.362586);
   hmc__13->SetBinError(18,4.986614);
   hmc__13->SetBinError(19,4.479689);
   hmc__13->SetBinError(20,5.488944);
   hmc__13->SetBinError(21,6.552012);
   hmc__13->SetBinError(22,6.5946);
   hmc__13->SetBinError(23,7.387716);
   hmc__13->SetBinError(24,8.08952);
   hmc__13->SetBinError(25,9.20913);
   hmc__13->SetBinError(26,0.1094984);
   hmc__13->SetMinimum(-0.7291004);
   hmc__13->SetMaximum(76.55554);
   hmc__13->SetEntries(300.4418);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,-1,1);
   hs5_stack_5->SetMinimum(-2.770604e-09);
   hs5_stack_5->SetMaximum(38.27778);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,0.1793067);
   hbadmatch_stack_1->SetBinContent(2,0.0544014);
   hbadmatch_stack_1->SetBinContent(3,0.158587);
   hbadmatch_stack_1->SetBinContent(4,0.1620966);
   hbadmatch_stack_1->SetBinContent(5,0.1239126);
   hbadmatch_stack_1->SetBinContent(6,0.08745668);
   hbadmatch_stack_1->SetBinContent(7,0.3607822);
   hbadmatch_stack_1->SetBinContent(8,0.01275756);
   hbadmatch_stack_1->SetBinContent(9,0.1032097);
   hbadmatch_stack_1->SetBinContent(10,0.3282436);
   hbadmatch_stack_1->SetBinContent(11,0.3692256);
   hbadmatch_stack_1->SetBinContent(12,0.1662662);
   hbadmatch_stack_1->SetBinContent(13,0.1560681);
   hbadmatch_stack_1->SetBinContent(14,0.08925137);
   hbadmatch_stack_1->SetBinContent(15,0.3463563);
   hbadmatch_stack_1->SetBinContent(16,0.5098461);
   hbadmatch_stack_1->SetBinContent(17,0.186464);
   hbadmatch_stack_1->SetBinContent(18,0.08745668);
   hbadmatch_stack_1->SetBinContent(19,0.1932806);
   hbadmatch_stack_1->SetBinContent(20,0.2880332);
   hbadmatch_stack_1->SetBinContent(21,0.400863);
   hbadmatch_stack_1->SetBinContent(22,0.4151981);
   hbadmatch_stack_1->SetBinContent(23,0.4068736);
   hbadmatch_stack_1->SetBinContent(24,0.2216706);
   hbadmatch_stack_1->SetBinContent(25,0.473922);
   hbadmatch_stack_1->SetBinError(1,0.09197155);
   hbadmatch_stack_1->SetBinError(2,0.02735966);
   hbadmatch_stack_1->SetBinError(3,0.09603769);
   hbadmatch_stack_1->SetBinError(4,0.09866525);
   hbadmatch_stack_1->SetBinError(5,0.08761943);
   hbadmatch_stack_1->SetBinError(6,0.06452687);
   hbadmatch_stack_1->SetBinError(7,0.1408658);
   hbadmatch_stack_1->SetBinError(8,0.0127502);
   hbadmatch_stack_1->SetBinError(9,0.06642195);
   hbadmatch_stack_1->SetBinError(10,0.1479187);
   hbadmatch_stack_1->SetBinError(11,0.1417208);
   hbadmatch_stack_1->SetBinError(12,0.1003024);
   hbadmatch_stack_1->SetBinError(13,0.1013878);
   hbadmatch_stack_1->SetBinError(14,0.03373385);
   hbadmatch_stack_1->SetBinError(15,0.1434459);
   hbadmatch_stack_1->SetBinError(16,0.3695523);
   hbadmatch_stack_1->SetBinError(17,0.09945913);
   hbadmatch_stack_1->SetBinError(18,0.06452687);
   hbadmatch_stack_1->SetBinError(19,0.09297443);
   hbadmatch_stack_1->SetBinError(20,0.1173229);
   hbadmatch_stack_1->SetBinError(21,0.1464057);
   hbadmatch_stack_1->SetBinError(22,0.1490609);
   hbadmatch_stack_1->SetBinError(23,0.1435002);
   hbadmatch_stack_1->SetBinError(24,0.1149933);
   hbadmatch_stack_1->SetBinError(25,0.1604509);
   hbadmatch_stack_1->SetEntries(162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1490;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,0.4717173);
   hext_stack_2->SetBinContent(2,0.09815882);
   hext_stack_2->SetBinContent(3,0.08588897);
   hext_stack_2->SetBinContent(4,0.2235888);
   hext_stack_2->SetBinContent(5,0.4471776);
   hext_stack_2->SetBinContent(6,0.4471776);
   hext_stack_2->SetBinContent(7,0.6953062);
   hext_stack_2->SetBinContent(8,0.9066251);
   hext_stack_2->SetBinContent(9,0.2726682);
   hext_stack_2->SetBinContent(10,0.5330666);
   hext_stack_2->SetBinContent(11,0.6066857);
   hext_stack_2->SetBinContent(12,0.707576);
   hext_stack_2->SetBinContent(13,1.267914);
   hext_stack_2->SetBinContent(14,0.1472382);
   hext_stack_2->SetBinContent(15,1.081134);
   hext_stack_2->SetBinContent(16,0.9188949);
   hext_stack_2->SetBinContent(17,1.142484);
   hext_stack_2->SetBinContent(18,1.093404);
   hext_stack_2->SetBinContent(19,1.093404);
   hext_stack_2->SetBinContent(20,1.552852);
   hext_stack_2->SetBinContent(21,0.9557045);
   hext_stack_2->SetBinContent(22,1.154754);
   hext_stack_2->SetBinContent(23,0.9311647);
   hext_stack_2->SetBinContent(24,1.142484);
   hext_stack_2->SetBinContent(25,0.9802442);
   hext_stack_2->SetBinError(1,0.2830978);
   hext_stack_2->SetBinError(2,0.03470438);
   hext_stack_2->SetBinError(3,0.03246298);
   hext_stack_2->SetBinError(4,0.199804);
   hext_stack_2->SetBinError(5,0.2825656);
   hext_stack_2->SetBinError(6,0.2825656);
   hext_stack_2->SetBinError(7,0.3465055);
   hext_stack_2->SetBinError(8,0.3997964);
   hext_stack_2->SetBinError(9,0.2013053);
   hext_stack_2->SetBinError(10,0.2844242);
   hext_stack_2->SetBinError(11,0.2860077);
   hext_stack_2->SetBinError(12,0.3467226);
   hext_stack_2->SetBinError(13,0.4884942);
   hext_stack_2->SetBinError(14,0.04250402);
   hext_stack_2->SetBinError(15,0.4462696);
   hext_stack_2->SetBinError(16,0.3999846);
   hext_stack_2->SetBinError(17,0.4471122);
   hext_stack_2->SetBinError(18,0.4464383);
   hext_stack_2->SetBinError(19,0.4464383);
   hext_stack_2->SetBinError(20,0.5284893);
   hext_stack_2->SetBinError(21,0.4005488);
   hext_stack_2->SetBinError(22,0.4472805);
   hext_stack_2->SetBinError(23,0.4001727);
   hext_stack_2->SetBinError(24,0.4471122);
   hext_stack_2->SetBinError(25,0.4009245);
   hext_stack_2->SetEntries(312);

   ci = 1491;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.05365718);
   hdirt_stack_3->SetBinContent(2,0.008219617);
   hdirt_stack_3->SetBinContent(3,0.09722701);
   hdirt_stack_3->SetBinContent(4,0.08841814);
   hdirt_stack_3->SetBinContent(5,0.008219617);
   hdirt_stack_3->SetBinContent(6,0.08841814);
   hdirt_stack_3->SetBinContent(7,0.01643923);
   hdirt_stack_3->SetBinContent(8,0.08841814);
   hdirt_stack_3->SetBinContent(12,0.05242869);
   hdirt_stack_3->SetBinContent(13,0.009838338);
   hdirt_stack_3->SetBinContent(14,0.008219617);
   hdirt_stack_3->SetBinContent(15,0.3143146);
   hdirt_stack_3->SetBinContent(16,0.05288891);
   hdirt_stack_3->SetBinContent(18,0.06064304);
   hdirt_stack_3->SetBinContent(19,0.01890785);
   hdirt_stack_3->SetBinContent(20,0.05242869);
   hdirt_stack_3->SetBinContent(21,0.01800229);
   hdirt_stack_3->SetBinContent(22,0.1410051);
   hdirt_stack_3->SetBinContent(23,0.01643924);
   hdirt_stack_3->SetBinContent(24,0.06773126);
   hdirt_stack_3->SetBinContent(25,0.3095092);
   hdirt_stack_3->SetBinError(1,0.0452074);
   hdirt_stack_3->SetBinError(2,0.008219618);
   hdirt_stack_3->SetBinError(3,0.06895787);
   hdirt_stack_3->SetBinError(4,0.06252107);
   hdirt_stack_3->SetBinError(5,0.008219618);
   hdirt_stack_3->SetBinError(6,0.06252107);
   hdirt_stack_3->SetBinError(7,0.01162429);
   hdirt_stack_3->SetBinError(8,0.06252107);
   hdirt_stack_3->SetBinError(12,0.0449667);
   hdirt_stack_3->SetBinError(13,0.009838337);
   hdirt_stack_3->SetBinError(14,0.008219618);
   hdirt_stack_3->SetBinError(15,0.2981021);
   hdirt_stack_3->SetBinError(16,0.05288891);
   hdirt_stack_3->SetBinError(18,0.05173843);
   hdirt_stack_3->SetBinError(19,0.01291663);
   hdirt_stack_3->SetBinError(20,0.0449667);
   hdirt_stack_3->SetBinError(21,0.01277744);
   hdirt_stack_3->SetBinError(22,0.06613127);
   hdirt_stack_3->SetBinError(23,0.01162429);
   hdirt_stack_3->SetBinError(24,0.05259274);
   hdirt_stack_3->SetBinError(25,0.1183095);
   hdirt_stack_3->SetEntries(54);

   ci = 1492;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,1.270021);
   houtFV_stack_4->SetBinContent(2,0.5451667);
   houtFV_stack_4->SetBinContent(3,0.5862147);
   houtFV_stack_4->SetBinContent(4,0.5721515);
   houtFV_stack_4->SetBinContent(5,0.4925013);
   houtFV_stack_4->SetBinContent(6,0.4846948);
   houtFV_stack_4->SetBinContent(7,0.4719446);
   houtFV_stack_4->SetBinContent(8,0.2131639);
   houtFV_stack_4->SetBinContent(9,0.5009296);
   houtFV_stack_4->SetBinContent(10,0.1876636);
   houtFV_stack_4->SetBinContent(11,0.525469);
   houtFV_stack_4->SetBinContent(12,0.5482091);
   houtFV_stack_4->SetBinContent(13,0.3644186);
   houtFV_stack_4->SetBinContent(14,0.6124147);
   houtFV_stack_4->SetBinContent(15,0.9584818);
   houtFV_stack_4->SetBinContent(16,0.5594013);
   houtFV_stack_4->SetBinContent(17,0.500464);
   houtFV_stack_4->SetBinContent(18,0.6652755);
   houtFV_stack_4->SetBinContent(19,0.646858);
   houtFV_stack_4->SetBinContent(20,0.8989465);
   houtFV_stack_4->SetBinContent(21,1.272311);
   houtFV_stack_4->SetBinContent(22,1.370462);
   houtFV_stack_4->SetBinContent(23,1.443129);
   houtFV_stack_4->SetBinContent(24,2.362598);
   houtFV_stack_4->SetBinContent(25,1.631394);
   houtFV_stack_4->SetBinError(1,0.2608056);
   houtFV_stack_4->SetBinError(2,0.1759202);
   houtFV_stack_4->SetBinError(3,0.1823276);
   houtFV_stack_4->SetBinError(4,0.1780002);
   houtFV_stack_4->SetBinError(5,0.1634706);
   houtFV_stack_4->SetBinError(6,0.1658926);
   houtFV_stack_4->SetBinError(7,0.1654019);
   houtFV_stack_4->SetBinError(8,0.09388896);
   houtFV_stack_4->SetBinError(9,0.1666851);
   houtFV_stack_4->SetBinError(10,0.0921412);
   houtFV_stack_4->SetBinError(11,0.1787198);
   houtFV_stack_4->SetBinError(12,0.1772035);
   houtFV_stack_4->SetBinError(13,0.1412414);
   houtFV_stack_4->SetBinError(14,0.183877);
   houtFV_stack_4->SetBinError(15,0.2517897);
   houtFV_stack_4->SetBinError(16,0.1775429);
   houtFV_stack_4->SetBinError(17,0.1666404);
   houtFV_stack_4->SetBinError(18,0.1814822);
   houtFV_stack_4->SetBinError(19,0.1889053);
   houtFV_stack_4->SetBinError(20,0.219278);
   houtFV_stack_4->SetBinError(21,0.2669818);
   houtFV_stack_4->SetBinError(22,0.2832871);
   houtFV_stack_4->SetBinError(23,0.2817316);
   houtFV_stack_4->SetBinError(24,0.3686645);
   houtFV_stack_4->SetBinError(25,0.280801);
   houtFV_stack_4->SetEntries(494);

   ci = 1493;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.07470649);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2496199);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.06195629);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.0127502);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.06325464);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1110342);
   hNCpi0inFVcoh_stack_5->SetEntries(13);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08745668);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08745668);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.07470649);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1858689);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2478252);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.08745668);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2605754);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1621632);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2368697);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06452687);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.0127502);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.06452687);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.06325464);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1073114);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1239126);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06452687);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1245668);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.08761943);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06195629);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.09035965);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1102997);
   hNCpi0inFVqe_stack_6->SetEntries(46);

   ci = 1495;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.72078);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.075716);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.75139);
   hNCpi0inFVres_stack_7->SetBinContent(4,3.270746);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.638433);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.283496);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.252424);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.665728);
   hNCpi0inFVres_stack_7->SetBinContent(9,2.911758);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.43978);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.587706);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.108857);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.409477);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.05965);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.238153);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.371688);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.236359);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.391617);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.984159);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.52317);
   hNCpi0inFVres_stack_7->SetBinContent(21,7.858726);
   hNCpi0inFVres_stack_7->SetBinContent(22,9.28952);
   hNCpi0inFVres_stack_7->SetBinContent(23,9.772005);
   hNCpi0inFVres_stack_7->SetBinContent(24,11.82162);
   hNCpi0inFVres_stack_7->SetBinContent(25,15.33495);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4504671);
   hNCpi0inFVres_stack_7->SetBinError(2,0.405228);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3845516);
   hNCpi0inFVres_stack_7->SetBinError(4,0.4265437);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3786702);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4267342);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4117176);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3750873);
   hNCpi0inFVres_stack_7->SetBinError(9,0.3988365);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3413663);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4347752);
   hNCpi0inFVres_stack_7->SetBinError(12,0.469109);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4827443);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4651744);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4676143);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5478921);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4708385);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5368848);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6128787);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5928329);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6459547);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7218663);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7259571);
   hNCpi0inFVres_stack_7->SetBinError(24,0.7933589);
   hNCpi0inFVres_stack_7->SetBinError(25,0.9108447);
   hNCpi0inFVres_stack_7->SetEntries(3530);

   ci = 1496;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.6486527);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.018596);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.646858);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.8327268);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.3625769);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.3498267);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.6833139);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.2496199);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.4099883);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.4992397);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.6121968);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6851086);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.3990328);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.6614029);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7488596);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6359025);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6104021);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.526996);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.541541);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.118803);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.889573);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.140988);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.00612);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.75903);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.490029);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1807193);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2423153);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1889053);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2172578);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1296821);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1290537);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.1979865);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.1110342);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1533597);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.157026);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1707221);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1901918);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1425864);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1811685);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.1923168);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.180269);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1793649);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2993124);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2944907);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2510836);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3261983);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3401591);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3237943);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4510082);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5436887);
   hNCpi0inFVdis_stack_8->SetEntries(776);

   ci = 1497;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.0127502);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.06195629);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.0127502);
   hNCpi0inFVmec_stack_9->SetEntries(3);

   ci = 1498;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);

   ci = 1499;
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
   hs5->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,2.231982);
   hCCpi0inFV_stack_11->SetBinContent(2,1.354733);
   hCCpi0inFV_stack_11->SetBinContent(3,1.690954);
   hCCpi0inFV_stack_11->SetBinContent(4,0.7656106);
   hCCpi0inFV_stack_11->SetBinContent(5,1.056846);
   hCCpi0inFV_stack_11->SetBinContent(6,1.386631);
   hCCpi0inFV_stack_11->SetBinContent(7,1.120597);
   hCCpi0inFV_stack_11->SetBinContent(8,1.124931);
   hCCpi0inFV_stack_11->SetBinContent(9,1.21901);
   hCCpi0inFV_stack_11->SetBinContent(10,1.460631);
   hCCpi0inFV_stack_11->SetBinContent(11,1.017172);
   hCCpi0inFV_stack_11->SetBinContent(12,1.00764);
   hCCpi0inFV_stack_11->SetBinContent(13,1.802206);
   hCCpi0inFV_stack_11->SetBinContent(14,1.855446);
   hCCpi0inFV_stack_11->SetBinContent(15,0.9474787);
   hCCpi0inFV_stack_11->SetBinContent(16,1.085936);
   hCCpi0inFV_stack_11->SetBinContent(17,1.646531);
   hCCpi0inFV_stack_11->SetBinContent(18,2.335449);
   hCCpi0inFV_stack_11->SetBinContent(19,1.668057);
   hCCpi0inFV_stack_11->SetBinContent(20,1.722712);
   hCCpi0inFV_stack_11->SetBinContent(21,2.766893);
   hCCpi0inFV_stack_11->SetBinContent(22,3.784773);
   hCCpi0inFV_stack_11->SetBinContent(23,3.407022);
   hCCpi0inFV_stack_11->SetBinContent(24,5.323779);
   hCCpi0inFV_stack_11->SetBinContent(25,7.030925);
   hCCpi0inFV_stack_11->SetBinError(1,0.358001);
   hCCpi0inFV_stack_11->SetBinError(2,0.2708545);
   hCCpi0inFV_stack_11->SetBinError(3,0.3077776);
   hCCpi0inFV_stack_11->SetBinError(4,0.1930449);
   hCCpi0inFV_stack_11->SetBinError(5,0.2433196);
   hCCpi0inFV_stack_11->SetBinError(6,0.2904534);
   hCCpi0inFV_stack_11->SetBinError(7,0.2449842);
   hCCpi0inFV_stack_11->SetBinError(8,0.2553947);
   hCCpi0inFV_stack_11->SetBinError(9,0.2595559);
   hCCpi0inFV_stack_11->SetBinError(10,0.2855969);
   hCCpi0inFV_stack_11->SetBinError(11,0.2451243);
   hCCpi0inFV_stack_11->SetBinError(12,0.2356446);
   hCCpi0inFV_stack_11->SetBinError(13,0.3222343);
   hCCpi0inFV_stack_11->SetBinError(14,0.3208687);
   hCCpi0inFV_stack_11->SetBinError(15,0.2205993);
   hCCpi0inFV_stack_11->SetBinError(16,0.2312532);
   hCCpi0inFV_stack_11->SetBinError(17,0.2945491);
   hCCpi0inFV_stack_11->SetBinError(18,0.3628287);
   hCCpi0inFV_stack_11->SetBinError(19,0.2996396);
   hCCpi0inFV_stack_11->SetBinError(20,0.2984558);
   hCCpi0inFV_stack_11->SetBinError(21,0.3729593);
   hCCpi0inFV_stack_11->SetBinError(22,0.4614384);
   hCCpi0inFV_stack_11->SetBinError(23,0.4312953);
   hCCpi0inFV_stack_11->SetBinError(24,0.5411516);
   hCCpi0inFV_stack_11->SetBinError(25,0.6099553);
   hCCpi0inFV_stack_11->SetEntries(1314);

   ci = 1500;
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
   hs5->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,0.6851086);
   hNCinFV_stack_12->SetBinContent(2,0.4227385);
   hNCinFV_stack_12->SetBinContent(3,0.4482389);
   hNCinFV_stack_12->SetBinContent(4,0.5466511);
   hNCinFV_stack_12->SetBinContent(5,0.3607822);
   hNCinFV_stack_12->SetBinContent(6,0.2496199);
   hNCinFV_stack_12->SetBinContent(7,0.1749134);
   hNCinFV_stack_12->SetBinContent(8,0.3607822);
   hNCinFV_stack_12->SetBinContent(9,0.4372485);
   hNCinFV_stack_12->SetBinContent(10,0.1239126);
   hNCinFV_stack_12->SetBinContent(11,0.4354887);
   hNCinFV_stack_12->SetBinContent(12,0.2259142);
   hNCinFV_stack_12->SetBinContent(13,0.1876636);
   hNCinFV_stack_12->SetBinContent(14,0.2241195);
   hNCinFV_stack_12->SetBinContent(15,0.3607822);
   hNCinFV_stack_12->SetBinContent(16,0.1129571);
   hNCinFV_stack_12->SetBinContent(17,0.3735324);
   hNCinFV_stack_12->SetBinContent(18,0.3607822);
   hNCinFV_stack_12->SetBinContent(19,0.561196);
   hNCinFV_stack_12->SetBinContent(20,0.5849017);
   hNCinFV_stack_12->SetBinContent(21,0.881933);
   hNCinFV_stack_12->SetBinContent(22,0.7343147);
   hNCinFV_stack_12->SetBinContent(23,1.306466);
   hNCinFV_stack_12->SetBinContent(24,1.741955);
   hNCinFV_stack_12->SetBinContent(25,1.882207);
   hNCinFV_stack_12->SetBinError(1,0.1901918);
   hNCinFV_stack_12->SetBinError(2,0.1538888);
   hNCinFV_stack_12->SetBinError(3,0.1549416);
   hNCinFV_stack_12->SetBinError(4,0.1770845);
   hNCinFV_stack_12->SetBinError(5,0.1408658);
   hNCinFV_stack_12->SetBinError(6,0.1110342);
   hNCinFV_stack_12->SetBinError(7,0.09125478);
   hNCinFV_stack_12->SetBinError(8,0.1408658);
   hNCinFV_stack_12->SetBinError(9,0.1544261);
   hNCinFV_stack_12->SetBinError(10,0.08761943);
   hNCinFV_stack_12->SetBinError(11,0.1544161);
   hNCinFV_stack_12->SetBinError(12,0.09475075);
   hNCinFV_stack_12->SetBinError(13,0.0921412);
   hNCinFV_stack_12->SetBinError(14,0.1095603);
   hNCinFV_stack_12->SetBinError(15,0.1408658);
   hNCinFV_stack_12->SetBinError(16,0.0669989);
   hNCinFV_stack_12->SetBinError(17,0.1414417);
   hNCinFV_stack_12->SetBinError(18,0.1408658);
   hNCinFV_stack_12->SetBinError(19,0.1688068);
   hNCinFV_stack_12->SetBinError(20,0.1784562);
   hNCinFV_stack_12->SetBinError(21,0.2255592);
   hNCinFV_stack_12->SetBinError(22,0.199622);
   hNCinFV_stack_12->SetBinError(23,0.2674565);
   hNCinFV_stack_12->SetBinError(24,0.3088322);
   hNCinFV_stack_12->SetBinError(25,0.3117139);
   hNCinFV_stack_12->SetEntries(368);

   ci = 1501;
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
   hs5->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,0.7868938);
   hnumuCCinFV_stack_13->SetBinContent(2,0.6789795);
   hnumuCCinFV_stack_13->SetBinContent(3,0.562776);
   hnumuCCinFV_stack_13->SetBinContent(4,0.3281485);
   hnumuCCinFV_stack_13->SetBinContent(5,0.468001);
   hnumuCCinFV_stack_13->SetBinContent(6,1.110709);
   hnumuCCinFV_stack_13->SetBinContent(7,0.4780897);
   hnumuCCinFV_stack_13->SetBinContent(8,1.111579);
   hnumuCCinFV_stack_13->SetBinContent(9,0.7066402);
   hnumuCCinFV_stack_13->SetBinContent(10,1.039072);
   hnumuCCinFV_stack_13->SetBinContent(11,0.8606746);
   hnumuCCinFV_stack_13->SetBinContent(12,0.7493742);
   hnumuCCinFV_stack_13->SetBinContent(13,0.9814946);
   hnumuCCinFV_stack_13->SetBinContent(14,1.308636);
   hnumuCCinFV_stack_13->SetBinContent(15,1.740156);
   hnumuCCinFV_stack_13->SetBinContent(16,1.356437);
   hnumuCCinFV_stack_13->SetBinContent(17,1.896746);
   hnumuCCinFV_stack_13->SetBinContent(18,1.405411);
   hnumuCCinFV_stack_13->SetBinContent(19,1.340423);
   hnumuCCinFV_stack_13->SetBinContent(20,1.114606);
   hnumuCCinFV_stack_13->SetBinContent(21,1.969905);
   hnumuCCinFV_stack_13->SetBinContent(22,1.449112);
   hnumuCCinFV_stack_13->SetBinContent(23,1.128415);
   hnumuCCinFV_stack_13->SetBinContent(24,1.661071);
   hnumuCCinFV_stack_13->SetBinContent(25,2.327878);
   hnumuCCinFV_stack_13->SetBinError(1,0.2117874);
   hnumuCCinFV_stack_13->SetBinError(2,0.1978495);
   hnumuCCinFV_stack_13->SetBinError(3,0.1819162);
   hnumuCCinFV_stack_13->SetBinError(4,0.1248981);
   hnumuCCinFV_stack_13->SetBinError(5,0.1594793);
   hnumuCCinFV_stack_13->SetBinError(6,0.4524571);
   hnumuCCinFV_stack_13->SetBinError(7,0.1851371);
   hnumuCCinFV_stack_13->SetBinError(8,0.2942476);
   hnumuCCinFV_stack_13->SetBinError(9,0.2115641);
   hnumuCCinFV_stack_13->SetBinError(10,0.2589592);
   hnumuCCinFV_stack_13->SetBinError(11,0.2976698);
   hnumuCCinFV_stack_13->SetBinError(12,0.2121139);
   hnumuCCinFV_stack_13->SetBinError(13,0.2425598);
   hnumuCCinFV_stack_13->SetBinError(14,0.2849568);
   hnumuCCinFV_stack_13->SetBinError(15,0.5035957);
   hnumuCCinFV_stack_13->SetBinError(16,0.3304919);
   hnumuCCinFV_stack_13->SetBinError(17,0.4834939);
   hnumuCCinFV_stack_13->SetBinError(18,0.3550261);
   hnumuCCinFV_stack_13->SetBinError(19,0.2754479);
   hnumuCCinFV_stack_13->SetBinError(20,0.3144);
   hnumuCCinFV_stack_13->SetBinError(21,0.3815594);
   hnumuCCinFV_stack_13->SetBinError(22,0.333095);
   hnumuCCinFV_stack_13->SetBinError(23,0.2515869);
   hnumuCCinFV_stack_13->SetBinError(24,0.3162108);
   hnumuCCinFV_stack_13->SetBinError(25,0.5814954);
   hnumuCCinFV_stack_13->SetEntries(659);

   ci = 1502;
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
   hs5->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(4,0.07948712);
   hnueCCinFV_stack_14->SetBinContent(5,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(6,0.01276398);
   hnueCCinFV_stack_14->SetBinContent(7,0.0127502);
   hnueCCinFV_stack_14->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(18,0.07408212);
   hnueCCinFV_stack_14->SetBinContent(20,0.06195629);
   hnueCCinFV_stack_14->SetBinContent(21,0.07470649);
   hnueCCinFV_stack_14->SetBinContent(22,0.0127502);
   hnueCCinFV_stack_14->SetBinContent(23,0.1366628);
   hnueCCinFV_stack_14->SetBinContent(24,0.02550039);
   hnueCCinFV_stack_14->SetBinContent(25,0.5074797);
   hnueCCinFV_stack_14->SetBinError(4,0.07948712);
   hnueCCinFV_stack_14->SetBinError(5,0.06195629);
   hnueCCinFV_stack_14->SetBinError(6,0.0127502);
   hnueCCinFV_stack_14->SetBinError(7,0.0127502);
   hnueCCinFV_stack_14->SetBinError(11,0.06195629);
   hnueCCinFV_stack_14->SetBinError(15,0.06195629);
   hnueCCinFV_stack_14->SetBinError(18,0.05182006);
   hnueCCinFV_stack_14->SetBinError(20,0.06195629);
   hnueCCinFV_stack_14->SetBinError(21,0.06325464);
   hnueCCinFV_stack_14->SetBinError(22,0.0127502);
   hnueCCinFV_stack_14->SetBinError(23,0.08854226);
   hnueCCinFV_stack_14->SetBinError(24,0.0180315);
   hnueCCinFV_stack_14->SetBinError(25,0.1624415);
   hnueCCinFV_stack_14->SetEntries(34);

   ci = 1503;
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
   hs5->Add(hnueCCinFV_stack_14,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);
   hmcerror__14->SetBinContent(1,10.04812);
   hmcerror__14->SetBinContent(2,7.256709);
   hmcerror__14->SetBinContent(3,7.090091);
   hmcerror__14->SetBinContent(4,6.882375);
   hmcerror__14->SetBinContent(5,6.020407);
   hmcerror__14->SetBinContent(6,7.500793);
   hmcerror__14->SetBinContent(7,7.328517);
   hmcerror__14->SetBinContent(8,6.733604);
   hmcerror__14->SetBinContent(9,6.685366);
   hmcerror__14->SetBinContent(10,6.62436);
   hmcerror__14->SetBinContent(11,8.164032);
   hmcerror__14->SetBinContent(12,8.264124);
   hmcerror__14->SetBinContent(13,9.578114);
   hmcerror__14->SetBinContent(14,9.053835);
   hmcerror__14->SetBinContent(15,10.92159);
   hmcerror__14->SetBinContent(16,10.67866);
   hmcerror__14->SetBinContent(17,10.84081);
   hmcerror__14->SetBinContent(18,13.24894);
   hmcerror__14->SetBinContent(19,14.14803);
   hmcerror__14->SetBinContent(20,13.98037);
   hmcerror__14->SetBinContent(21,18.41115);
   hmcerror__14->SetBinContent(22,20.61679);
   hmcerror__14->SetBinContent(23,20.629);
   hmcerror__14->SetBinContent(24,28.36431);
   hmcerror__14->SetBinContent(25,36.45502);
   hmcerror__14->SetBinError(1,3.468765);
   hmcerror__14->SetBinError(2,2.702575);
   hmcerror__14->SetBinError(3,3.637687);
   hmcerror__14->SetBinError(4,2.88216);
   hmcerror__14->SetBinError(5,3.179617);
   hmcerror__14->SetBinError(6,2.721156);
   hmcerror__14->SetBinError(7,2.983432);
   hmcerror__14->SetBinError(8,2.869769);
   hmcerror__14->SetBinError(9,3.85137);
   hmcerror__14->SetBinError(10,2.715617);
   hmcerror__14->SetBinError(11,3.726427);
   hmcerror__14->SetBinError(12,3.164219);
   hmcerror__14->SetBinError(13,3.124934);
   hmcerror__14->SetBinError(14,3.183176);
   hmcerror__14->SetBinError(15,3.724821);
   hmcerror__14->SetBinError(16,3.912911);
   hmcerror__14->SetBinError(17,3.362586);
   hmcerror__14->SetBinError(18,4.986614);
   hmcerror__14->SetBinError(19,4.479689);
   hmcerror__14->SetBinError(20,5.488944);
   hmcerror__14->SetBinError(21,6.552012);
   hmcerror__14->SetBinError(22,6.5946);
   hmcerror__14->SetBinError(23,7.387716);
   hmcerror__14->SetBinError(24,8.08952);
   hmcerror__14->SetBinError(25,9.20913);
   hmcerror__14->SetBinError(26,0.1094984);
   hmcerror__14->SetEntries(300.4418);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3017[25] = {
   5,
   8,
   4,
   10,
   3,
   5,
   4,
   4,
   7,
   4,
   4,
   8,
   6,
   9,
   6,
   7,
   9,
   5,
   6,
   8,
   15,
   15,
   13,
   20,
   23};
   Double_t _felx3017[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3017[25] = {
   2.48995,
   3.0307,
   2.29683,
   3.34883,
   2.143368,
   2.48995,
   2.29683,
   2.29683,
   2.85954,
   2.29683,
   2.29683,
   3.0307,
   2.67925,
   3.19354,
   2.67925,
   2.85954,
   3.19354,
   2.48995,
   2.67925,
   3.0307,
   4.0385,
   4.0385,
   3.77763,
   4.6266,
   4.9457};
   Double_t _fehx3017[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3017[25] = {
   2.21064,
   2.7896,
   1.98186,
   3.1179,
   1.72422,
   2.21064,
   1.98186,
   1.98186,
   2.61053,
   1.98186,
   1.98186,
   2.7896,
   2.41858,
   2.9582,
   2.41858,
   2.61053,
   2.9582,
   2.21064,
   2.41858,
   2.7896,
   3.8197,
   3.8197,
   3.5552,
   4.4133,
   4.7346};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-1.2,1.2);
   Graph_Graph3017->SetMinimum(0.7709688);
   Graph_Graph3017->SetMaximum(30.4224);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.68#pm0.16","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 5.33e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 208.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.9","F");

   ci = 1490;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 19.0","F");

   ci = 1491;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.6","F");

   ci = 1492;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 19.7","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.4","F");

   ci = 1494;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.0","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.0","F");

   ci = 1496;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  29.5","F");

   ci = 1497;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1498;
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

   ci = 1499;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 50.8","F");

   ci = 1500;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 13.8","F");

   ci = 1501;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 28.6","F");

   ci = 1502;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 1.2","F");

   ci = 1503;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_8_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3018[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3018[25] = {
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
   Double_t _felx3018[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3018[25] = {
   0.3452154,
   0.3724244,
   0.5130664,
   0.418774,
   0.5281399,
   0.3627824,
   0.407099,
   0.4261862,
   0.5760897,
   0.4099441,
   0.4564444,
   0.3828862,
   0.3262578,
   0.3515832,
   0.3410513,
   0.3664235,
   0.3101786,
   0.3763782,
   0.3166298,
   0.392618,
   0.355872,
   0.3198655,
   0.3581228,
   0.2852007,
   0.2526162};
   Double_t _fehx3018[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3018[25] = {
   0.3452154,
   0.3724244,
   0.5130664,
   0.418774,
   0.5281399,
   0.3627824,
   0.407099,
   0.4261862,
   0.5760897,
   0.4099441,
   0.4564444,
   0.3828862,
   0.3262578,
   0.3515832,
   0.3410513,
   0.3664235,
   0.3101786,
   0.3763782,
   0.3166298,
   0.392618,
   0.355872,
   0.3198655,
   0.3581228,
   0.2852007,
   0.2526162};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-1.2,1.2);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3019[25] = {
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
   Double_t _felx3019[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3019[25] = {
   0.2407225,
   0.2278115,
   0.2215852,
   0.2287219,
   0.2448437,
   0.2314109,
   0.2137709,
   0.2059636,
   0.2430246,
   0.2085032,
   0.2366382,
   0.2492887,
   0.2245846,
   0.2174597,
   0.2412708,
   0.249854,
   0.2228329,
   0.2437228,
   0.266892,
   0.2588454,
   0.2377314,
   0.249377,
   0.237178,
   0.2129494,
   0.2090702};
   Double_t _fehx3019[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3019[25] = {
   0.2407225,
   0.2278115,
   0.2215852,
   0.2287219,
   0.2448437,
   0.2314109,
   0.2137709,
   0.2059636,
   0.2430246,
   0.2085032,
   0.2366382,
   0.2492887,
   0.2245846,
   0.2174597,
   0.2412708,
   0.249854,
   0.2228329,
   0.2437228,
   0.266892,
   0.2588454,
   0.2377314,
   0.249377,
   0.237178,
   0.2129494,
   0.2090702};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-1.2,1.2);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3020[25] = {
   0.4976056,
   1.102428,
   0.5641677,
   1.452987,
   0.4983052,
   0.6665961,
   0.545813,
   0.5940355,
   1.047063,
   0.603832,
   0.489954,
   0.9680397,
   0.6264282,
   0.9940539,
   0.5493708,
   0.6555131,
   0.8301965,
   0.3773886,
   0.4240872,
   0.5722311,
   0.8147239,
   0.7275624,
   0.6301807,
   0.7051115,
   0.6309145};
   Double_t _felx3020[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3020[25] = {
   0.2478026,
   0.4176411,
   0.3239493,
   0.4865806,
   0.3560171,
   0.3319582,
   0.3134099,
   0.3410997,
   0.4277313,
   0.3467248,
   0.2813353,
   0.3667297,
   0.2797263,
   0.3527279,
   0.2453169,
   0.2677808,
   0.2945851,
   0.1879357,
   0.1893726,
   0.2167826,
   0.2193508,
   0.195884,
   0.1831223,
   0.1631134,
   0.1356658};
   Double_t _fehx3020[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3020[25] = {
   0.2200054,
   0.3844167,
   0.2795253,
   0.4530267,
   0.2863959,
   0.2947208,
   0.2704312,
   0.2943238,
   0.3904842,
   0.2991776,
   0.2427551,
   0.3375554,
   0.2525111,
   0.3267345,
   0.2214495,
   0.2444624,
   0.2728764,
   0.166854,
   0.1709481,
   0.199537,
   0.2074667,
   0.1852713,
   0.1723399,
   0.1555934,
   0.1298751};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-1.2,1.2);
   Graph_Graph3020->SetMinimum(0.1280592);
   Graph_Graph3020->SetMaximum(2.082386);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_8_pi0_costheta_all",25,-1,1);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
   TLine *line = new TLine(-1,1,1,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
