#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 14:15:40 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-1.307692,-0.7291005,1.25641,61.43631);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);
   hmc__4->SetBinContent(1,10.04812);
   hmc__4->SetBinContent(2,7.256709);
   hmc__4->SetBinContent(3,7.090091);
   hmc__4->SetBinContent(4,6.882375);
   hmc__4->SetBinContent(5,6.020407);
   hmc__4->SetBinContent(6,7.500793);
   hmc__4->SetBinContent(7,7.328517);
   hmc__4->SetBinContent(8,6.733604);
   hmc__4->SetBinContent(9,6.685365);
   hmc__4->SetBinContent(10,6.62436);
   hmc__4->SetBinContent(11,8.164032);
   hmc__4->SetBinContent(12,8.264124);
   hmc__4->SetBinContent(13,9.578114);
   hmc__4->SetBinContent(14,9.053835);
   hmc__4->SetBinContent(15,10.92159);
   hmc__4->SetBinContent(16,10.67866);
   hmc__4->SetBinContent(17,10.84081);
   hmc__4->SetBinContent(18,13.24894);
   hmc__4->SetBinContent(19,14.14803);
   hmc__4->SetBinContent(20,13.98037);
   hmc__4->SetBinContent(21,18.41115);
   hmc__4->SetBinContent(22,20.61679);
   hmc__4->SetBinContent(23,20.629);
   hmc__4->SetBinContent(24,28.36431);
   hmc__4->SetBinContent(25,36.45502);
   hmc__4->SetBinError(1,3.470821);
   hmc__4->SetBinError(2,2.709999);
   hmc__4->SetBinError(3,3.635863);
   hmc__4->SetBinError(4,2.874418);
   hmc__4->SetBinError(5,3.185964);
   hmc__4->SetBinError(6,2.728509);
   hmc__4->SetBinError(7,2.991129);
   hmc__4->SetBinError(8,2.874939);
   hmc__4->SetBinError(9,3.856631);
   hmc__4->SetBinError(10,2.722435);
   hmc__4->SetBinError(11,3.725701);
   hmc__4->SetBinError(12,3.162747);
   hmc__4->SetBinError(13,3.130301);
   hmc__4->SetBinError(14,3.205518);
   hmc__4->SetBinError(15,3.717285);
   hmc__4->SetBinError(16,3.926955);
   hmc__4->SetBinError(17,3.355437);
   hmc__4->SetBinError(18,4.996058);
   hmc__4->SetBinError(19,4.495391);
   hmc__4->SetBinError(20,5.506936);
   hmc__4->SetBinError(21,6.576645);
   hmc__4->SetBinError(22,6.608346);
   hmc__4->SetBinError(23,7.435438);
   hmc__4->SetBinError(24,8.095115);
   hmc__4->SetBinError(25,9.216803);
   hmc__4->SetBinError(26,0.125509);
   hmc__4->SetMinimum(-0.7291005);
   hmc__4->SetMaximum(58.32804);
   hmc__4->SetEntries(300.4418);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,-1,1);
   hs2_stack_2->SetMinimum(-2.770604e-09);
   hs2_stack_2->SetMaximum(38.27778);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);
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
   ci = 1443;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);
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

   ci = 1444;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);
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

   ci = 1445;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);
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

   ci = 1446;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);
   hNCpi0inFV_stack_5->SetBinContent(1,4.369432);
   hNCpi0inFV_stack_5->SetBinContent(2,4.094312);
   hNCpi0inFV_stack_5->SetBinContent(3,3.460204);
   hNCpi0inFV_stack_5->SetBinContent(4,4.116223);
   hNCpi0inFV_stack_5->SetBinContent(5,3.00101);
   hNCpi0inFV_stack_5->SetBinContent(6,3.633323);
   hNCpi0inFV_stack_5->SetBinContent(7,3.997694);
   hNCpi0inFV_stack_5->SetBinContent(8,2.915348);
   hNCpi0inFV_stack_5->SetBinContent(9,3.445659);
   hNCpi0inFV_stack_5->SetBinContent(10,2.95177);
   hNCpi0inFV_stack_5->SetBinContent(11,4.28736);
   hNCpi0inFV_stack_5->SetBinContent(12,4.806715);
   hNCpi0inFV_stack_5->SetBinContent(13,4.80851);
   hNCpi0inFV_stack_5->SetBinContent(14,4.80851);
   hNCpi0inFV_stack_5->SetBinContent(15,5.110926);
   hNCpi0inFV_stack_5->SetBinContent(16,6.082297);
   hNCpi0inFV_stack_5->SetBinContent(17,5.094586);
   hNCpi0inFV_stack_5->SetBinContent(18,7.166439);
   hNCpi0inFV_stack_5->SetBinContent(19,8.625907);
   hNCpi0inFV_stack_5->SetBinContent(20,7.703929);
   hNCpi0inFV_stack_5->SetBinContent(21,10.07083);
   hNCpi0inFV_stack_5->SetBinContent(22,11.55442);
   hNCpi0inFV_stack_5->SetBinContent(23,11.85283);
   hNCpi0inFV_stack_5->SetBinContent(24,15.81752);
   hNCpi0inFV_stack_5->SetBinContent(25,21.31147);
   hNCpi0inFV_stack_5->SetBinError(1,0.485366);
   hNCpi0inFV_stack_5->SetBinError(2,0.4721508);
   hNCpi0inFV_stack_5->SetBinError(3,0.4329016);
   hNCpi0inFV_stack_5->SetBinError(4,0.478856);
   hNCpi0inFV_stack_5->SetBinError(5,0.4002606);
   hNCpi0inFV_stack_5->SetBinError(6,0.4458216);
   hNCpi0inFV_stack_5->SetBinError(7,0.46103);
   hNCpi0inFV_stack_5->SetBinError(8,0.3911765);
   hNCpi0inFV_stack_5->SetBinError(9,0.436196);
   hNCpi0inFV_stack_5->SetBinError(10,0.3759664);
   hNCpi0inFV_stack_5->SetBinError(11,0.4715285);
   hNCpi0inFV_stack_5->SetBinError(12,0.5063583);
   hNCpi0inFV_stack_5->SetBinError(13,0.5033617);
   hNCpi0inFV_stack_5->SetBinError(14,0.5033617);
   hNCpi0inFV_stack_5->SetBinError(15,0.5131531);
   hNCpi0inFV_stack_5->SetBinError(16,0.5802446);
   hNCpi0inFV_stack_5->SetBinError(17,0.5188593);
   hNCpi0inFV_stack_5->SetBinError(18,0.6270467);
   hNCpi0inFV_stack_5->SetBinError(19,0.6831335);
   hNCpi0inFV_stack_5->SetBinError(20,0.6467863);
   hNCpi0inFV_stack_5->SetBinError(21,0.7368978);
   hNCpi0inFV_stack_5->SetBinError(22,0.8027928);
   hNCpi0inFV_stack_5->SetBinError(23,0.7974068);
   hNCpi0inFV_stack_5->SetBinError(24,0.9192348);
   hNCpi0inFV_stack_5->SetBinError(25,1.072255);
   hNCpi0inFV_stack_5->SetEntries(4368);

   ci = 1447;
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
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_6->SetBinContent(1,2.231982);
   hCCpi0inFV_stack_6->SetBinContent(2,1.354733);
   hCCpi0inFV_stack_6->SetBinContent(3,1.690954);
   hCCpi0inFV_stack_6->SetBinContent(4,0.7656106);
   hCCpi0inFV_stack_6->SetBinContent(5,1.056846);
   hCCpi0inFV_stack_6->SetBinContent(6,1.386631);
   hCCpi0inFV_stack_6->SetBinContent(7,1.120597);
   hCCpi0inFV_stack_6->SetBinContent(8,1.124931);
   hCCpi0inFV_stack_6->SetBinContent(9,1.21901);
   hCCpi0inFV_stack_6->SetBinContent(10,1.460631);
   hCCpi0inFV_stack_6->SetBinContent(11,1.017172);
   hCCpi0inFV_stack_6->SetBinContent(12,1.00764);
   hCCpi0inFV_stack_6->SetBinContent(13,1.802206);
   hCCpi0inFV_stack_6->SetBinContent(14,1.855446);
   hCCpi0inFV_stack_6->SetBinContent(15,0.9474787);
   hCCpi0inFV_stack_6->SetBinContent(16,1.085936);
   hCCpi0inFV_stack_6->SetBinContent(17,1.646531);
   hCCpi0inFV_stack_6->SetBinContent(18,2.335449);
   hCCpi0inFV_stack_6->SetBinContent(19,1.668057);
   hCCpi0inFV_stack_6->SetBinContent(20,1.722712);
   hCCpi0inFV_stack_6->SetBinContent(21,2.766893);
   hCCpi0inFV_stack_6->SetBinContent(22,3.784773);
   hCCpi0inFV_stack_6->SetBinContent(23,3.407022);
   hCCpi0inFV_stack_6->SetBinContent(24,5.323779);
   hCCpi0inFV_stack_6->SetBinContent(25,7.030925);
   hCCpi0inFV_stack_6->SetBinError(1,0.358001);
   hCCpi0inFV_stack_6->SetBinError(2,0.2708545);
   hCCpi0inFV_stack_6->SetBinError(3,0.3077776);
   hCCpi0inFV_stack_6->SetBinError(4,0.1930449);
   hCCpi0inFV_stack_6->SetBinError(5,0.2433196);
   hCCpi0inFV_stack_6->SetBinError(6,0.2904534);
   hCCpi0inFV_stack_6->SetBinError(7,0.2449842);
   hCCpi0inFV_stack_6->SetBinError(8,0.2553947);
   hCCpi0inFV_stack_6->SetBinError(9,0.2595559);
   hCCpi0inFV_stack_6->SetBinError(10,0.2855969);
   hCCpi0inFV_stack_6->SetBinError(11,0.2451243);
   hCCpi0inFV_stack_6->SetBinError(12,0.2356446);
   hCCpi0inFV_stack_6->SetBinError(13,0.3222343);
   hCCpi0inFV_stack_6->SetBinError(14,0.3208687);
   hCCpi0inFV_stack_6->SetBinError(15,0.2205993);
   hCCpi0inFV_stack_6->SetBinError(16,0.2312532);
   hCCpi0inFV_stack_6->SetBinError(17,0.2945491);
   hCCpi0inFV_stack_6->SetBinError(18,0.3628287);
   hCCpi0inFV_stack_6->SetBinError(19,0.2996396);
   hCCpi0inFV_stack_6->SetBinError(20,0.2984558);
   hCCpi0inFV_stack_6->SetBinError(21,0.3729593);
   hCCpi0inFV_stack_6->SetBinError(22,0.4614384);
   hCCpi0inFV_stack_6->SetBinError(23,0.4312953);
   hCCpi0inFV_stack_6->SetBinError(24,0.5411516);
   hCCpi0inFV_stack_6->SetBinError(25,0.6099553);
   hCCpi0inFV_stack_6->SetEntries(1314);

   ci = 1448;
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
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_7->SetBinContent(1,0.6851086);
   hNCinFV_stack_7->SetBinContent(2,0.4227385);
   hNCinFV_stack_7->SetBinContent(3,0.4482389);
   hNCinFV_stack_7->SetBinContent(4,0.5466511);
   hNCinFV_stack_7->SetBinContent(5,0.3607822);
   hNCinFV_stack_7->SetBinContent(6,0.2496199);
   hNCinFV_stack_7->SetBinContent(7,0.1749134);
   hNCinFV_stack_7->SetBinContent(8,0.3607822);
   hNCinFV_stack_7->SetBinContent(9,0.4372485);
   hNCinFV_stack_7->SetBinContent(10,0.1239126);
   hNCinFV_stack_7->SetBinContent(11,0.4354887);
   hNCinFV_stack_7->SetBinContent(12,0.2259142);
   hNCinFV_stack_7->SetBinContent(13,0.1876636);
   hNCinFV_stack_7->SetBinContent(14,0.2241195);
   hNCinFV_stack_7->SetBinContent(15,0.3607822);
   hNCinFV_stack_7->SetBinContent(16,0.1129571);
   hNCinFV_stack_7->SetBinContent(17,0.3735324);
   hNCinFV_stack_7->SetBinContent(18,0.3607822);
   hNCinFV_stack_7->SetBinContent(19,0.561196);
   hNCinFV_stack_7->SetBinContent(20,0.5849017);
   hNCinFV_stack_7->SetBinContent(21,0.881933);
   hNCinFV_stack_7->SetBinContent(22,0.7343147);
   hNCinFV_stack_7->SetBinContent(23,1.306466);
   hNCinFV_stack_7->SetBinContent(24,1.741955);
   hNCinFV_stack_7->SetBinContent(25,1.882207);
   hNCinFV_stack_7->SetBinError(1,0.1901918);
   hNCinFV_stack_7->SetBinError(2,0.1538888);
   hNCinFV_stack_7->SetBinError(3,0.1549416);
   hNCinFV_stack_7->SetBinError(4,0.1770845);
   hNCinFV_stack_7->SetBinError(5,0.1408658);
   hNCinFV_stack_7->SetBinError(6,0.1110342);
   hNCinFV_stack_7->SetBinError(7,0.09125478);
   hNCinFV_stack_7->SetBinError(8,0.1408658);
   hNCinFV_stack_7->SetBinError(9,0.1544261);
   hNCinFV_stack_7->SetBinError(10,0.08761943);
   hNCinFV_stack_7->SetBinError(11,0.1544161);
   hNCinFV_stack_7->SetBinError(12,0.09475075);
   hNCinFV_stack_7->SetBinError(13,0.0921412);
   hNCinFV_stack_7->SetBinError(14,0.1095603);
   hNCinFV_stack_7->SetBinError(15,0.1408658);
   hNCinFV_stack_7->SetBinError(16,0.0669989);
   hNCinFV_stack_7->SetBinError(17,0.1414417);
   hNCinFV_stack_7->SetBinError(18,0.1408658);
   hNCinFV_stack_7->SetBinError(19,0.1688068);
   hNCinFV_stack_7->SetBinError(20,0.1784562);
   hNCinFV_stack_7->SetBinError(21,0.2255592);
   hNCinFV_stack_7->SetBinError(22,0.199622);
   hNCinFV_stack_7->SetBinError(23,0.2674565);
   hNCinFV_stack_7->SetBinError(24,0.3088322);
   hNCinFV_stack_7->SetBinError(25,0.3117139);
   hNCinFV_stack_7->SetEntries(368);

   ci = 1449;
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
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_8->SetBinContent(1,0.7868938);
   hnumuCCinFV_stack_8->SetBinContent(2,0.6789795);
   hnumuCCinFV_stack_8->SetBinContent(3,0.562776);
   hnumuCCinFV_stack_8->SetBinContent(4,0.3281485);
   hnumuCCinFV_stack_8->SetBinContent(5,0.468001);
   hnumuCCinFV_stack_8->SetBinContent(6,1.110709);
   hnumuCCinFV_stack_8->SetBinContent(7,0.4780897);
   hnumuCCinFV_stack_8->SetBinContent(8,1.111579);
   hnumuCCinFV_stack_8->SetBinContent(9,0.7066402);
   hnumuCCinFV_stack_8->SetBinContent(10,1.039072);
   hnumuCCinFV_stack_8->SetBinContent(11,0.8606746);
   hnumuCCinFV_stack_8->SetBinContent(12,0.7493742);
   hnumuCCinFV_stack_8->SetBinContent(13,0.9814946);
   hnumuCCinFV_stack_8->SetBinContent(14,1.308636);
   hnumuCCinFV_stack_8->SetBinContent(15,1.740156);
   hnumuCCinFV_stack_8->SetBinContent(16,1.356437);
   hnumuCCinFV_stack_8->SetBinContent(17,1.896746);
   hnumuCCinFV_stack_8->SetBinContent(18,1.405411);
   hnumuCCinFV_stack_8->SetBinContent(19,1.340423);
   hnumuCCinFV_stack_8->SetBinContent(20,1.114606);
   hnumuCCinFV_stack_8->SetBinContent(21,1.969905);
   hnumuCCinFV_stack_8->SetBinContent(22,1.449112);
   hnumuCCinFV_stack_8->SetBinContent(23,1.128415);
   hnumuCCinFV_stack_8->SetBinContent(24,1.661071);
   hnumuCCinFV_stack_8->SetBinContent(25,2.327878);
   hnumuCCinFV_stack_8->SetBinError(1,0.2117874);
   hnumuCCinFV_stack_8->SetBinError(2,0.1978495);
   hnumuCCinFV_stack_8->SetBinError(3,0.1819162);
   hnumuCCinFV_stack_8->SetBinError(4,0.1248981);
   hnumuCCinFV_stack_8->SetBinError(5,0.1594793);
   hnumuCCinFV_stack_8->SetBinError(6,0.4524571);
   hnumuCCinFV_stack_8->SetBinError(7,0.1851371);
   hnumuCCinFV_stack_8->SetBinError(8,0.2942476);
   hnumuCCinFV_stack_8->SetBinError(9,0.2115641);
   hnumuCCinFV_stack_8->SetBinError(10,0.2589592);
   hnumuCCinFV_stack_8->SetBinError(11,0.2976698);
   hnumuCCinFV_stack_8->SetBinError(12,0.2121139);
   hnumuCCinFV_stack_8->SetBinError(13,0.2425598);
   hnumuCCinFV_stack_8->SetBinError(14,0.2849568);
   hnumuCCinFV_stack_8->SetBinError(15,0.5035957);
   hnumuCCinFV_stack_8->SetBinError(16,0.3304919);
   hnumuCCinFV_stack_8->SetBinError(17,0.4834939);
   hnumuCCinFV_stack_8->SetBinError(18,0.3550261);
   hnumuCCinFV_stack_8->SetBinError(19,0.2754479);
   hnumuCCinFV_stack_8->SetBinError(20,0.3144);
   hnumuCCinFV_stack_8->SetBinError(21,0.3815594);
   hnumuCCinFV_stack_8->SetBinError(22,0.333095);
   hnumuCCinFV_stack_8->SetBinError(23,0.2515869);
   hnumuCCinFV_stack_8->SetBinError(24,0.3162108);
   hnumuCCinFV_stack_8->SetBinError(25,0.5814954);
   hnumuCCinFV_stack_8->SetEntries(659);

   ci = 1450;
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
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_9->SetBinContent(4,0.07948712);
   hnueCCinFV_stack_9->SetBinContent(5,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(6,0.01276398);
   hnueCCinFV_stack_9->SetBinContent(7,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(15,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(18,0.07408212);
   hnueCCinFV_stack_9->SetBinContent(20,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(21,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(22,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(23,0.1366628);
   hnueCCinFV_stack_9->SetBinContent(24,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(25,0.5074797);
   hnueCCinFV_stack_9->SetBinError(4,0.07948712);
   hnueCCinFV_stack_9->SetBinError(5,0.06195629);
   hnueCCinFV_stack_9->SetBinError(6,0.0127502);
   hnueCCinFV_stack_9->SetBinError(7,0.0127502);
   hnueCCinFV_stack_9->SetBinError(11,0.06195629);
   hnueCCinFV_stack_9->SetBinError(15,0.06195629);
   hnueCCinFV_stack_9->SetBinError(18,0.05182006);
   hnueCCinFV_stack_9->SetBinError(20,0.06195629);
   hnueCCinFV_stack_9->SetBinError(21,0.06325464);
   hnueCCinFV_stack_9->SetBinError(22,0.0127502);
   hnueCCinFV_stack_9->SetBinError(23,0.08854226);
   hnueCCinFV_stack_9->SetBinError(24,0.0180315);
   hnueCCinFV_stack_9->SetBinError(25,0.1624415);
   hnueCCinFV_stack_9->SetEntries(34);

   ci = 1451;
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
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);
   hmcerror__5->SetBinContent(1,10.04812);
   hmcerror__5->SetBinContent(2,7.256709);
   hmcerror__5->SetBinContent(3,7.090091);
   hmcerror__5->SetBinContent(4,6.882375);
   hmcerror__5->SetBinContent(5,6.020407);
   hmcerror__5->SetBinContent(6,7.500793);
   hmcerror__5->SetBinContent(7,7.328517);
   hmcerror__5->SetBinContent(8,6.733604);
   hmcerror__5->SetBinContent(9,6.685365);
   hmcerror__5->SetBinContent(10,6.62436);
   hmcerror__5->SetBinContent(11,8.164032);
   hmcerror__5->SetBinContent(12,8.264124);
   hmcerror__5->SetBinContent(13,9.578114);
   hmcerror__5->SetBinContent(14,9.053835);
   hmcerror__5->SetBinContent(15,10.92159);
   hmcerror__5->SetBinContent(16,10.67866);
   hmcerror__5->SetBinContent(17,10.84081);
   hmcerror__5->SetBinContent(18,13.24894);
   hmcerror__5->SetBinContent(19,14.14803);
   hmcerror__5->SetBinContent(20,13.98037);
   hmcerror__5->SetBinContent(21,18.41115);
   hmcerror__5->SetBinContent(22,20.61679);
   hmcerror__5->SetBinContent(23,20.629);
   hmcerror__5->SetBinContent(24,28.36431);
   hmcerror__5->SetBinContent(25,36.45502);
   hmcerror__5->SetBinError(1,3.470821);
   hmcerror__5->SetBinError(2,2.709999);
   hmcerror__5->SetBinError(3,3.635863);
   hmcerror__5->SetBinError(4,2.874418);
   hmcerror__5->SetBinError(5,3.185964);
   hmcerror__5->SetBinError(6,2.728509);
   hmcerror__5->SetBinError(7,2.991129);
   hmcerror__5->SetBinError(8,2.874939);
   hmcerror__5->SetBinError(9,3.856631);
   hmcerror__5->SetBinError(10,2.722435);
   hmcerror__5->SetBinError(11,3.725701);
   hmcerror__5->SetBinError(12,3.162747);
   hmcerror__5->SetBinError(13,3.130301);
   hmcerror__5->SetBinError(14,3.205518);
   hmcerror__5->SetBinError(15,3.717285);
   hmcerror__5->SetBinError(16,3.926955);
   hmcerror__5->SetBinError(17,3.355437);
   hmcerror__5->SetBinError(18,4.996058);
   hmcerror__5->SetBinError(19,4.495391);
   hmcerror__5->SetBinError(20,5.506936);
   hmcerror__5->SetBinError(21,6.576645);
   hmcerror__5->SetBinError(22,6.608346);
   hmcerror__5->SetBinError(23,7.435438);
   hmcerror__5->SetBinError(24,8.095115);
   hmcerror__5->SetBinError(25,9.216803);
   hmcerror__5->SetBinError(26,0.125509);
   hmcerror__5->SetEntries(300.4418);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3005[25] = {
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
   Double_t _fy3005[25] = {
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
   Double_t _felx3005[25] = {
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
   Double_t _fely3005[25] = {
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
   Double_t _fehx3005[25] = {
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
   Double_t _fehy3005[25] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-1.2,1.2);
   Graph_Graph3005->SetMinimum(0.7709688);
   Graph_Graph3005->SetMaximum(30.4224);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.68#pm0.05(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.47/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 208.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.9","F");

   ci = 1443;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 19.0","F");

   ci = 1444;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.6","F");

   ci = 1445;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 19.7","F");

   ci = 1446;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  165.1","F");

   ci = 1447;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 50.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 13.8","F");

   ci = 1449;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 28.6","F");

   ci = 1450;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.2","F");

   ci = 1451;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_10_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[25] = {
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
   Double_t _fy3006[25] = {
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
   Double_t _felx3006[25] = {
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
   Double_t _fely3006[25] = {
   0.34542,
   0.3734474,
   0.5128091,
   0.4176491,
   0.5291941,
   0.3637627,
   0.4081492,
   0.426954,
   0.5768768,
   0.4109734,
   0.4563556,
   0.3827081,
   0.3268182,
   0.3540508,
   0.3403613,
   0.3677386,
   0.3095191,
   0.377091,
   0.3177396,
   0.393905,
   0.3572099,
   0.3205322,
   0.3604361,
   0.285398,
   0.2528267};
   Double_t _fehx3006[25] = {
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
   Double_t _fehy3006[25] = {
   0.34542,
   0.3734474,
   0.5128091,
   0.4176491,
   0.5291941,
   0.3637627,
   0.4081492,
   0.426954,
   0.5768768,
   0.4109734,
   0.4563556,
   0.3827081,
   0.3268182,
   0.3540508,
   0.3403613,
   0.3677386,
   0.3095191,
   0.377091,
   0.3177396,
   0.393905,
   0.3572099,
   0.3205322,
   0.3604361,
   0.285398,
   0.2528267};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-1.2,1.2);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[25] = {
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
   Double_t _fy3007[25] = {
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
   Double_t _felx3007[25] = {
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
   Double_t _fely3007[25] = {
   0.2407225,
   0.2284215,
   0.2227333,
   0.2284861,
   0.2446897,
   0.2314249,
   0.213791,
   0.205926,
   0.243002,
   0.2084263,
   0.2365589,
   0.2492798,
   0.2245723,
   0.2178154,
   0.2412075,
   0.2498426,
   0.2228323,
   0.2438063,
   0.2668884,
   0.2588023,
   0.237726,
   0.2493857,
   0.2372042,
   0.2129533,
   0.2090867};
   Double_t _fehx3007[25] = {
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
   Double_t _fehy3007[25] = {
   0.2407225,
   0.2284215,
   0.2227333,
   0.2284861,
   0.2446897,
   0.2314249,
   0.213791,
   0.205926,
   0.243002,
   0.2084263,
   0.2365589,
   0.2492798,
   0.2245723,
   0.2178154,
   0.2412075,
   0.2498426,
   0.2228323,
   0.2438063,
   0.2668884,
   0.2588023,
   0.237726,
   0.2493857,
   0.2372042,
   0.2129533,
   0.2090867};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-1.2,1.2);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3008[25] = {
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
   Double_t _fy3008[25] = {
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
   0.8147238,
   0.7275623,
   0.6301807,
   0.7051115,
   0.6309144};
   Double_t _felx3008[25] = {
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
   Double_t _fely3008[25] = {
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
   Double_t _fehx3008[25] = {
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
   Double_t _fehy3008[25] = {
   0.2200054,
   0.3844167,
   0.2795253,
   0.4530267,
   0.2863959,
   0.2947208,
   0.2704312,
   0.2943238,
   0.3904843,
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
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-1.2,1.2);
   Graph_Graph3008->SetMinimum(0.1280592);
   Graph_Graph3008->SetMaximum(2.082386);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_10_pi0_costheta_all",25,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
