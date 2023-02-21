#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Fri Feb 17 18:13:03 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
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
   pad1->Range(-61.53846,-1.7,451.2821,187.9842);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__22->SetBinContent(1,29.55466);
   hmc__22->SetBinContent(2,32.02094);
   hmc__22->SetBinContent(3,42.0683);
   hmc__22->SetBinContent(4,42.07076);
   hmc__22->SetBinContent(5,43.30532);
   hmc__22->SetBinContent(6,56.63489);
   hmc__22->SetBinContent(7,65.93732);
   hmc__22->SetBinContent(8,59.72502);
   hmc__22->SetBinContent(9,64.31832);
   hmc__22->SetBinContent(10,72.52061);
   hmc__22->SetBinContent(11,74.78348);
   hmc__22->SetBinContent(12,70.76254);
   hmc__22->SetBinContent(13,68.42972);
   hmc__22->SetBinContent(14,43.51971);
   hmc__22->SetBinContent(15,31.85635);
   hmc__22->SetBinContent(16,23.91685);
   hmc__22->SetBinContent(17,15.01442);
   hmc__22->SetBinContent(18,14.6724);
   hmc__22->SetBinContent(19,9.861708);
   hmc__22->SetBinContent(20,12.07899);
   hmc__22->SetBinContent(21,8.092842);
   hmc__22->SetBinContent(22,8.120267);
   hmc__22->SetBinContent(23,11.30912);
   hmc__22->SetBinContent(24,6.066967);
   hmc__22->SetBinContent(25,5.434846);
   hmc__22->SetBinContent(26,5.25888);
   hmc__22->SetBinContent(27,4.792545);
   hmc__22->SetBinContent(28,3.510329);
   hmc__22->SetBinContent(29,3.919962);
   hmc__22->SetBinContent(30,4.467568);
   hmc__22->SetBinContent(31,2.894282);
   hmc__22->SetBinContent(32,1.99721);
   hmc__22->SetBinContent(33,1.827112);
   hmc__22->SetBinContent(34,2.3466);
   hmc__22->SetBinContent(35,20.90701);
   hmc__22->SetBinError(1,23.25863);
   hmc__22->SetBinError(2,23.36181);
   hmc__22->SetBinError(3,15.75271);
   hmc__22->SetBinError(4,20.60478);
   hmc__22->SetBinError(5,17.62104);
   hmc__22->SetBinError(6,17.83896);
   hmc__22->SetBinError(7,30.59811);
   hmc__22->SetBinError(8,19.92098);
   hmc__22->SetBinError(9,18.80001);
   hmc__22->SetBinError(10,23.86294);
   hmc__22->SetBinError(11,22.253);
   hmc__22->SetBinError(12,29.1068);
   hmc__22->SetBinError(13,24.15444);
   hmc__22->SetBinError(14,15.48629);
   hmc__22->SetBinError(15,12.52341);
   hmc__22->SetBinError(16,17.69579);
   hmc__22->SetBinError(17,8.281214);
   hmc__22->SetBinError(18,16.74812);
   hmc__22->SetBinError(19,7.288873);
   hmc__22->SetBinError(20,10.59609);
   hmc__22->SetBinError(21,7.195696);
   hmc__22->SetBinError(22,7.987883);
   hmc__22->SetBinError(23,14.23308);
   hmc__22->SetBinError(24,11.09161);
   hmc__22->SetBinError(25,8.794791);
   hmc__22->SetBinError(26,7.482714);
   hmc__22->SetBinError(27,4.790051);
   hmc__22->SetBinError(28,6.496442);
   hmc__22->SetBinError(29,6.126593);
   hmc__22->SetBinError(30,5.88914);
   hmc__22->SetBinError(31,3.796606);
   hmc__22->SetBinError(32,2.922357);
   hmc__22->SetBinError(33,2.967728);
   hmc__22->SetBinError(34,5.337911);
   hmc__22->SetBinError(35,14.35696);
   hmc__22->SetMinimum(-1.7);
   hmc__22->SetMaximum(178.5);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",34,0,400);
   hs8_stack_8->SetMinimum(-1.429819e-08);
   hs8_stack_8->SetMaximum(78.52264);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,1.507692);
   hbadmatch_stack_1->SetBinContent(2,2.311677);
   hbadmatch_stack_1->SetBinContent(3,2.071919);
   hbadmatch_stack_1->SetBinContent(4,0.7981218);
   hbadmatch_stack_1->SetBinContent(5,1.465526);
   hbadmatch_stack_1->SetBinContent(6,3.085177);
   hbadmatch_stack_1->SetBinContent(7,3.408047);
   hbadmatch_stack_1->SetBinContent(8,2.90441);
   hbadmatch_stack_1->SetBinContent(9,1.448521);
   hbadmatch_stack_1->SetBinContent(10,1.125349);
   hbadmatch_stack_1->SetBinContent(11,1.410583);
   hbadmatch_stack_1->SetBinContent(12,1.26543);
   hbadmatch_stack_1->SetBinContent(13,1.948154);
   hbadmatch_stack_1->SetBinContent(14,0.9835768);
   hbadmatch_stack_1->SetBinContent(15,1.095674);
   hbadmatch_stack_1->SetBinContent(16,1.322064);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(19,0.7319179);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,0.6355563);
   hbadmatch_stack_1->SetBinContent(22,0.7317812);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.3401776);
   hbadmatch_stack_1->SetBinContent(27,0.3934307);
   hbadmatch_stack_1->SetBinContent(30,0.1950248);
   hbadmatch_stack_1->SetBinContent(34,0.1967154);
   hbadmatch_stack_1->SetBinContent(35,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.635446);
   hbadmatch_stack_1->SetBinError(2,1.185562);
   hbadmatch_stack_1->SetBinError(3,0.817746);
   hbadmatch_stack_1->SetBinError(4,0.4746783);
   hbadmatch_stack_1->SetBinError(5,0.6209405);
   hbadmatch_stack_1->SetBinError(6,0.9881974);
   hbadmatch_stack_1->SetBinError(7,0.9735424);
   hbadmatch_stack_1->SetBinError(8,1.010669);
   hbadmatch_stack_1->SetBinError(9,0.6629248);
   hbadmatch_stack_1->SetBinError(10,0.5194673);
   hbadmatch_stack_1->SetBinError(11,0.6505627);
   hbadmatch_stack_1->SetBinError(12,0.5878314);
   hbadmatch_stack_1->SetBinError(13,0.7864458);
   hbadmatch_stack_1->SetBinError(14,0.4398689);
   hbadmatch_stack_1->SetBinError(15,0.5638492);
   hbadmatch_stack_1->SetBinError(16,0.5554667);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.438694);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.368807);
   hbadmatch_stack_1->SetBinError(22,0.5187237);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.3401776);
   hbadmatch_stack_1->SetBinError(27,0.2781975);
   hbadmatch_stack_1->SetBinError(30,0.1950249);
   hbadmatch_stack_1->SetBinError(34,0.1967154);
   hbadmatch_stack_1->SetBinError(35,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,9.256346);
   hext_stack_2->SetBinContent(2,8.275974);
   hext_stack_2->SetBinContent(3,16.0835);
   hext_stack_2->SetBinContent(4,14.96744);
   hext_stack_2->SetBinContent(5,10.85679);
   hext_stack_2->SetBinContent(6,17.62769);
   hext_stack_2->SetBinContent(7,16.50446);
   hext_stack_2->SetBinContent(8,15.42311);
   hext_stack_2->SetBinContent(9,13.52422);
   hext_stack_2->SetBinContent(10,11.81562);
   hext_stack_2->SetBinContent(11,10.67803);
   hext_stack_2->SetBinContent(12,10.69957);
   hext_stack_2->SetBinContent(13,12.91291);
   hext_stack_2->SetBinContent(14,5.180405);
   hext_stack_2->SetBinContent(15,7.098067);
   hext_stack_2->SetBinContent(16,3.311814);
   hext_stack_2->SetBinContent(17,3.323403);
   hext_stack_2->SetBinContent(18,1.055394);
   hext_stack_2->SetBinContent(19,1.137595);
   hext_stack_2->SetBinContent(20,1.055394);
   hext_stack_2->SetBinContent(21,1.461993);
   hext_stack_2->SetBinContent(22,0.6487947);
   hext_stack_2->SetBinContent(23,2.566457);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(27,0.6487947);
   hext_stack_2->SetBinContent(29,0.4065989);
   hext_stack_2->SetBinContent(31,0.6487947);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,1.219797);
   hext_stack_2->SetBinError(1,1.826736);
   hext_stack_2->SetBinError(2,1.795123);
   hext_stack_2->SetBinError(3,2.784618);
   hext_stack_2->SetBinError(4,2.591257);
   hext_stack_2->SetBinError(5,2.113466);
   hext_stack_2->SetBinError(6,2.890553);
   hext_stack_2->SetBinError(7,2.741718);
   hext_stack_2->SetBinError(8,2.75857);
   hext_stack_2->SetBinError(9,2.430272);
   hext_stack_2->SetBinError(10,2.277025);
   hext_stack_2->SetBinError(11,2.179211);
   hext_stack_2->SetBinError(12,2.036015);
   hext_stack_2->SetBinError(13,2.547863);
   hext_stack_2->SetBinError(14,1.49039);
   hext_stack_2->SetBinError(15,1.912452);
   hext_stack_2->SetBinError(16,1.230784);
   hext_stack_2->SetBinError(17,1.20364);
   hext_stack_2->SetBinError(18,0.6130171);
   hext_stack_2->SetBinError(19,0.6602113);
   hext_stack_2->SetBinError(20,0.6130171);
   hext_stack_2->SetBinError(21,0.7356036);
   hext_stack_2->SetBinError(22,0.4587671);
   hext_stack_2->SetBinError(23,1.283228);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(27,0.4587671);
   hext_stack_2->SetBinError(29,0.4065989);
   hext_stack_2->SetBinError(31,0.4587671);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,0.7042499);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,1.082577);
   hdirt_stack_3->SetBinContent(2,1.313864);
   hdirt_stack_3->SetBinContent(3,0.8517935);
   hdirt_stack_3->SetBinContent(4,0.4417201);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,1.072902);
   hdirt_stack_3->SetBinContent(7,1.623719);
   hdirt_stack_3->SetBinContent(8,2.278375);
   hdirt_stack_3->SetBinContent(9,1.479639);
   hdirt_stack_3->SetBinContent(10,2.639593);
   hdirt_stack_3->SetBinContent(11,1.396596);
   hdirt_stack_3->SetBinContent(12,0.5523413);
   hdirt_stack_3->SetBinContent(13,1.444487);
   hdirt_stack_3->SetBinContent(14,0.2761429);
   hdirt_stack_3->SetBinContent(15,0.5758626);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,0.5930034);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.165479);
   hdirt_stack_3->SetBinContent(23,0.3861994);
   hdirt_stack_3->SetBinContent(28,0.2188956);
   hdirt_stack_3->SetBinError(1,0.5124346);
   hdirt_stack_3->SetBinError(2,0.6670182);
   hdirt_stack_3->SetBinError(3,0.3924407);
   hdirt_stack_3->SetBinError(4,0.3095901);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.4721125);
   hdirt_stack_3->SetBinError(7,0.7161553);
   hdirt_stack_3->SetBinError(8,0.8334935);
   hdirt_stack_3->SetBinError(9,0.5654142);
   hdirt_stack_3->SetBinError(10,0.9119285);
   hdirt_stack_3->SetBinError(11,0.6037177);
   hdirt_stack_3->SetBinError(12,0.4366729);
   hdirt_stack_3->SetBinError(13,1.011719);
   hdirt_stack_3->SetBinError(14,0.1952625);
   hdirt_stack_3->SetBinError(15,0.3389606);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.4234405);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.165479);
   hdirt_stack_3->SetBinError(23,0.3861995);
   hdirt_stack_3->SetBinError(28,0.2188956);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,7.305758);
   houtFV_stack_4->SetBinContent(2,8.30835);
   houtFV_stack_4->SetBinContent(3,10.80687);
   houtFV_stack_4->SetBinContent(4,11.86259);
   houtFV_stack_4->SetBinContent(5,11.35655);
   houtFV_stack_4->SetBinContent(6,11.58488);
   houtFV_stack_4->SetBinContent(7,17.18317);
   houtFV_stack_4->SetBinContent(8,12.33382);
   houtFV_stack_4->SetBinContent(9,14.09456);
   houtFV_stack_4->SetBinContent(10,13.47592);
   houtFV_stack_4->SetBinContent(11,10.51552);
   houtFV_stack_4->SetBinContent(12,15.913);
   houtFV_stack_4->SetBinContent(13,12.79285);
   houtFV_stack_4->SetBinContent(14,9.629021);
   houtFV_stack_4->SetBinContent(15,5.76606);
   houtFV_stack_4->SetBinContent(16,5.116624);
   houtFV_stack_4->SetBinContent(17,3.035868);
   houtFV_stack_4->SetBinContent(18,3.266159);
   houtFV_stack_4->SetBinContent(19,2.433506);
   houtFV_stack_4->SetBinContent(20,2.354112);
   houtFV_stack_4->SetBinContent(21,1.565561);
   houtFV_stack_4->SetBinContent(22,1.65717);
   houtFV_stack_4->SetBinContent(23,1.320909);
   houtFV_stack_4->SetBinContent(24,0.9768147);
   houtFV_stack_4->SetBinContent(25,0.8268861);
   houtFV_stack_4->SetBinContent(26,0.7868615);
   houtFV_stack_4->SetBinContent(27,1.656816);
   houtFV_stack_4->SetBinContent(28,0.6803553);
   houtFV_stack_4->SetBinContent(29,0.5901461);
   houtFV_stack_4->SetBinContent(30,0.5867651);
   houtFV_stack_4->SetBinContent(31,0.1967154);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,3.535205);
   houtFV_stack_4->SetBinError(1,1.354603);
   houtFV_stack_4->SetBinError(2,1.436499);
   houtFV_stack_4->SetBinError(3,1.652298);
   houtFV_stack_4->SetBinError(4,1.988503);
   houtFV_stack_4->SetBinError(5,1.737446);
   houtFV_stack_4->SetBinError(6,1.653784);
   houtFV_stack_4->SetBinError(7,2.114478);
   houtFV_stack_4->SetBinError(8,1.777717);
   houtFV_stack_4->SetBinError(9,1.801557);
   houtFV_stack_4->SetBinError(10,1.816894);
   houtFV_stack_4->SetBinError(11,1.606858);
   houtFV_stack_4->SetBinError(12,2.030207);
   houtFV_stack_4->SetBinError(13,2.179834);
   houtFV_stack_4->SetBinError(14,1.604237);
   houtFV_stack_4->SetBinError(15,1.221967);
   houtFV_stack_4->SetBinError(16,1.126098);
   houtFV_stack_4->SetBinError(17,0.8329575);
   houtFV_stack_4->SetBinError(18,0.9406744);
   houtFV_stack_4->SetBinError(19,0.8027556);
   houtFV_stack_4->SetBinError(20,0.8253394);
   houtFV_stack_4->SetBinError(21,0.6815147);
   houtFV_stack_4->SetBinError(22,0.6498287);
   houtFV_stack_4->SetBinError(23,0.608343);
   houtFV_stack_4->SetBinError(24,0.4368475);
   houtFV_stack_4->SetBinError(25,0.4150635);
   houtFV_stack_4->SetBinError(26,0.3934307);
   houtFV_stack_4->SetBinError(27,0.695749);
   houtFV_stack_4->SetBinError(28,0.4810838);
   houtFV_stack_4->SetBinError(29,0.340721);
   houtFV_stack_4->SetBinError(30,0.3387718);
   houtFV_stack_4->SetBinError(31,0.1967154);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,0.9449257);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.281744);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.8366721);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.059208);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.407794);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.185922);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.241058);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.059704);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.323094);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.7953222);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3765671);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.3199419);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3494035);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.413906);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3716255);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3913503);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2753746);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.341991);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.356662);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.122146);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.74093);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.941966);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.38787);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.838846);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.031481);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.744431);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.074758);
   hNCpi0inFVres_stack_7->SetBinContent(8,8.027414);
   hNCpi0inFVres_stack_7->SetBinContent(9,11.54417);
   hNCpi0inFVres_stack_7->SetBinContent(10,12.06381);
   hNCpi0inFVres_stack_7->SetBinContent(11,17.38793);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.14893);
   hNCpi0inFVres_stack_7->SetBinContent(13,12.58959);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.163764);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.679487);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.775398);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.977748);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.658726);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.184258);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.239394);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.129122);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.8644038);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.5988538);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.6546538);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.004072);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.4593539);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.1952999);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.1952999);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.3764861);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.1394999);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.2647179);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.2647179);
   hNCpi0inFVres_stack_7->SetBinContent(35,2.24413);
   hNCpi0inFVres_stack_7->SetBinError(1,0.376997);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5414252);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5931673);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7547265);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6960628);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7631451);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9223272);
   hNCpi0inFVres_stack_7->SetBinError(8,0.841374);
   hNCpi0inFVres_stack_7->SetBinError(9,1.101176);
   hNCpi0inFVres_stack_7->SetBinError(10,1.124522);
   hNCpi0inFVres_stack_7->SetBinError(11,1.43284);
   hNCpi0inFVres_stack_7->SetBinError(12,1.194943);
   hNCpi0inFVres_stack_7->SetBinError(13,1.137883);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7831557);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5610187);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5547405);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3943217);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3815298);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3155521);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3385597);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2907294);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2652967);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1922885);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1962949);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3271594);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1818869);
   hNCpi0inFVres_stack_7->SetBinError(27,0.07381642);
   hNCpi0inFVres_stack_7->SetBinError(28,0.07381642);
   hNCpi0inFVres_stack_7->SetBinError(29,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(30,0.2236377);
   hNCpi0inFVres_stack_7->SetBinError(31,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(32,0.06238626);
   hNCpi0inFVres_stack_7->SetBinError(33,0.118917);
   hNCpi0inFVres_stack_7->SetBinError(34,0.118917);
   hNCpi0inFVres_stack_7->SetBinError(35,0.4562491);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.585404);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.5862361);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.8077717);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.7526357);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.22644);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.797562);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.826126);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.927684);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.831198);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.099988);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.727415);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.941302);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.385462);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7249039);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.6267538);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3484178);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.3062359);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.3764861);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3341359);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.2783359);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.445904);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(35,0.948272);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2501964);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2861196);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2226192);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.185768);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2404119);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.306585);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4036703);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3876022);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5472645);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5561419);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6561009);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.7741171);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5537454);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5323031);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2578571);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1943021);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1283607);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.14851);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2236377);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.151108);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1458657);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.1155977);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.2422936);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.3247714);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,3.01788);
   hCCpi0inFV_stack_10->SetBinContent(2,4.919894);
   hCCpi0inFV_stack_10->SetBinContent(3,4.443069);
   hCCpi0inFV_stack_10->SetBinContent(4,4.524458);
   hCCpi0inFV_stack_10->SetBinContent(5,7.62409);
   hCCpi0inFV_stack_10->SetBinContent(6,8.251192);
   hCCpi0inFV_stack_10->SetBinContent(7,9.73099);
   hCCpi0inFV_stack_10->SetBinContent(8,9.004286);
   hCCpi0inFV_stack_10->SetBinContent(9,10.67093);
   hCCpi0inFV_stack_10->SetBinContent(10,18.24418);
   hCCpi0inFV_stack_10->SetBinContent(11,18.04985);
   hCCpi0inFV_stack_10->SetBinContent(12,14.09041);
   hCCpi0inFV_stack_10->SetBinContent(13,14.48743);
   hCCpi0inFV_stack_10->SetBinContent(14,8.9832);
   hCCpi0inFV_stack_10->SetBinContent(15,6.038356);
   hCCpi0inFV_stack_10->SetBinContent(16,5.229931);
   hCCpi0inFV_stack_10->SetBinContent(17,3.298786);
   hCCpi0inFV_stack_10->SetBinContent(18,4.35286);
   hCCpi0inFV_stack_10->SetBinContent(19,1.857266);
   hCCpi0inFV_stack_10->SetBinContent(20,4.341635);
   hCCpi0inFV_stack_10->SetBinContent(21,1.566961);
   hCCpi0inFV_stack_10->SetBinContent(22,1.713804);
   hCCpi0inFV_stack_10->SetBinContent(23,2.002419);
   hCCpi0inFV_stack_10->SetBinContent(24,2.644128);
   hCCpi0inFV_stack_10->SetBinContent(25,1.663932);
   hCCpi0inFV_stack_10->SetBinContent(26,2.439308);
   hCCpi0inFV_stack_10->SetBinContent(27,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(28,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(29,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(30,1.65886);
   hCCpi0inFV_stack_10->SetBinContent(31,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(32,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(33,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(34,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(35,6.209677);
   hCCpi0inFV_stack_10->SetBinError(1,0.9408297);
   hCCpi0inFV_stack_10->SetBinError(2,1.108723);
   hCCpi0inFV_stack_10->SetBinError(3,1.056279);
   hCCpi0inFV_stack_10->SetBinError(4,1.134973);
   hCCpi0inFV_stack_10->SetBinError(5,1.373765);
   hCCpi0inFV_stack_10->SetBinError(6,1.468672);
   hCCpi0inFV_stack_10->SetBinError(7,1.622378);
   hCCpi0inFV_stack_10->SetBinError(8,1.516235);
   hCCpi0inFV_stack_10->SetBinError(9,1.652783);
   hCCpi0inFV_stack_10->SetBinError(10,2.184574);
   hCCpi0inFV_stack_10->SetBinError(11,2.150127);
   hCCpi0inFV_stack_10->SetBinError(12,1.88617);
   hCCpi0inFV_stack_10->SetBinError(13,1.927516);
   hCCpi0inFV_stack_10->SetBinError(14,1.468624);
   hCCpi0inFV_stack_10->SetBinError(15,1.278087);
   hCCpi0inFV_stack_10->SetBinError(16,1.12717);
   hCCpi0inFV_stack_10->SetBinError(17,0.947869);
   hCCpi0inFV_stack_10->SetBinError(18,1.000187);
   hCCpi0inFV_stack_10->SetBinError(19,0.6799255);
   hCCpi0inFV_stack_10->SetBinError(20,1.092871);
   hCCpi0inFV_stack_10->SetBinError(21,0.5540095);
   hCCpi0inFV_stack_10->SetBinError(22,0.6207051);
   hCCpi0inFV_stack_10->SetBinError(23,0.7348366);
   hCCpi0inFV_stack_10->SetBinError(24,0.7855485);
   hCCpi0inFV_stack_10->SetBinError(25,0.6518637);
   hCCpi0inFV_stack_10->SetBinError(26,0.797725);
   hCCpi0inFV_stack_10->SetBinError(27,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(28,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(29,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(30,0.650338);
   hCCpi0inFV_stack_10->SetBinError(31,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(32,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(33,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(34,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(35,1.23466);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,0.536893);
   hNCinFV_stack_11->SetBinContent(3,0.7319179);
   hNCinFV_stack_11->SetBinContent(4,0.9818863);
   hNCinFV_stack_11->SetBinContent(5,1.460455);
   hNCinFV_stack_11->SetBinContent(6,2.250697);
   hNCinFV_stack_11->SetBinContent(7,2.250697);
   hNCinFV_stack_11->SetBinContent(8,1.805704);
   hNCinFV_stack_11->SetBinContent(9,1.175221);
   hNCinFV_stack_11->SetBinContent(10,3.17764);
   hNCinFV_stack_11->SetBinContent(11,2.002419);
   hNCinFV_stack_11->SetBinContent(12,2.640747);
   hNCinFV_stack_11->SetBinContent(13,1.65886);
   hNCinFV_stack_11->SetBinContent(14,0.6803553);
   hNCinFV_stack_11->SetBinContent(15,1.072095);
   hNCinFV_stack_11->SetBinContent(16,1.270501);
   hNCinFV_stack_11->SetBinContent(17,0.5884556);
   hNCinFV_stack_11->SetBinContent(18,1.072095);
   hNCinFV_stack_11->SetBinContent(19,1.020533);
   hNCinFV_stack_11->SetBinContent(20,0.7319179);
   hNCinFV_stack_11->SetBinContent(21,0.3401776);
   hNCinFV_stack_11->SetBinContent(22,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,1.320373);
   hNCinFV_stack_11->SetBinContent(24,0.1950248);
   hNCinFV_stack_11->SetBinContent(25,0.7319179);
   hNCinFV_stack_11->SetBinContent(26,0.5352025);
   hNCinFV_stack_11->SetBinContent(27,0.536893);
   hNCinFV_stack_11->SetBinContent(29,0.5352025);
   hNCinFV_stack_11->SetBinContent(30,0.3917402);
   hNCinFV_stack_11->SetBinContent(31,0.536893);
   hNCinFV_stack_11->SetBinContent(32,0.3401776);
   hNCinFV_stack_11->SetBinContent(33,0.3401776);
   hNCinFV_stack_11->SetBinContent(34,0.3401776);
   hNCinFV_stack_11->SetBinContent(35,2.639056);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.3929602);
   hNCinFV_stack_11->SetBinError(3,0.438694);
   hNCinFV_stack_11->SetBinError(4,0.4391155);
   hNCinFV_stack_11->SetBinError(5,0.6193387);
   hNCinFV_stack_11->SetBinError(6,0.7346377);
   hNCinFV_stack_11->SetBinError(7,0.7346377);
   hNCinFV_stack_11->SetBinError(8,0.7080169);
   hNCinFV_stack_11->SetBinError(9,0.4797863);
   hNCinFV_stack_11->SetBinError(10,0.8775989);
   hNCinFV_stack_11->SetBinError(11,0.7348366);
   hNCinFV_stack_11->SetBinError(12,0.784705);
   hNCinFV_stack_11->SetBinError(13,0.650338);
   hNCinFV_stack_11->SetBinError(14,0.4810838);
   hNCinFV_stack_11->SetBinError(15,0.5551335);
   hNCinFV_stack_11->SetBinError(16,0.5895188);
   hNCinFV_stack_11->SetBinError(17,0.3397478);
   hNCinFV_stack_11->SetBinError(18,0.5551335);
   hNCinFV_stack_11->SetBinError(19,0.5892049);
   hNCinFV_stack_11->SetBinError(20,0.438694);
   hNCinFV_stack_11->SetBinError(21,0.3401776);
   hNCinFV_stack_11->SetBinError(22,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.5548703);
   hNCinFV_stack_11->SetBinError(24,0.1950249);
   hNCinFV_stack_11->SetBinError(25,0.438694);
   hNCinFV_stack_11->SetBinError(26,0.3921167);
   hNCinFV_stack_11->SetBinError(27,0.3929602);
   hNCinFV_stack_11->SetBinError(29,0.3921167);
   hNCinFV_stack_11->SetBinError(30,0.2770047);
   hNCinFV_stack_11->SetBinError(31,0.3929602);
   hNCinFV_stack_11->SetBinError(32,0.3401776);
   hNCinFV_stack_11->SetBinError(33,0.3401776);
   hNCinFV_stack_11->SetBinError(34,0.3401776);
   hNCinFV_stack_11->SetBinError(35,0.784283);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,4.807248);
   hnumuCCinFV_stack_12->SetBinContent(2,2.033179);
   hnumuCCinFV_stack_12->SetBinContent(3,2.744099);
   hnumuCCinFV_stack_12->SetBinContent(4,2.610439);
   hnumuCCinFV_stack_12->SetBinContent(5,4.061649);
   hnumuCCinFV_stack_12->SetBinContent(6,4.743639);
   hnumuCCinFV_stack_12->SetBinContent(7,4.026366);
   hnumuCCinFV_stack_12->SetBinContent(8,4.599388);
   hnumuCCinFV_stack_12->SetBinContent(9,6.366277);
   hnumuCCinFV_stack_12->SetBinContent(10,5.516959);
   hnumuCCinFV_stack_12->SetBinContent(11,7.552856);
   hnumuCCinFV_stack_12->SetBinContent(12,6.455748);
   hnumuCCinFV_stack_12->SetBinContent(13,5.570193);
   hnumuCCinFV_stack_12->SetBinContent(14,7.914691);
   hnumuCCinFV_stack_12->SetBinContent(15,4.963049);
   hnumuCCinFV_stack_12->SetBinContent(16,3.164403);
   hnumuCCinFV_stack_12->SetBinContent(17,1.765041);
   hnumuCCinFV_stack_12->SetBinContent(18,1.925143);
   hnumuCCinFV_stack_12->SetBinContent(19,0.8454494);
   hnumuCCinFV_stack_12->SetBinContent(20,1.515909);
   hnumuCCinFV_stack_12->SetBinContent(21,0.8359684);
   hnumuCCinFV_stack_12->SetBinContent(22,1.736475);
   hnumuCCinFV_stack_12->SetBinContent(23,2.421425);
   hnumuCCinFV_stack_12->SetBinContent(24,0.8201706);
   hnumuCCinFV_stack_12->SetBinContent(25,0.5874447);
   hnumuCCinFV_stack_12->SetBinContent(26,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(27,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(28,0.8665517);
   hnumuCCinFV_stack_12->SetBinContent(29,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(30,0.594825);
   hnumuCCinFV_stack_12->SetBinContent(31,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(32,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(33,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(35,3.424825);
   hnumuCCinFV_stack_12->SetBinError(1,1.591162);
   hnumuCCinFV_stack_12->SetBinError(2,0.6447031);
   hnumuCCinFV_stack_12->SetBinError(3,0.8493949);
   hnumuCCinFV_stack_12->SetBinError(4,0.8563876);
   hnumuCCinFV_stack_12->SetBinError(5,1.052602);
   hnumuCCinFV_stack_12->SetBinError(6,1.097635);
   hnumuCCinFV_stack_12->SetBinError(7,1.046854);
   hnumuCCinFV_stack_12->SetBinError(8,1.098689);
   hnumuCCinFV_stack_12->SetBinError(9,1.46308);
   hnumuCCinFV_stack_12->SetBinError(10,1.220533);
   hnumuCCinFV_stack_12->SetBinError(11,1.523093);
   hnumuCCinFV_stack_12->SetBinError(12,1.322474);
   hnumuCCinFV_stack_12->SetBinError(13,1.224386);
   hnumuCCinFV_stack_12->SetBinError(14,2.324547);
   hnumuCCinFV_stack_12->SetBinError(15,1.144959);
   hnumuCCinFV_stack_12->SetBinError(16,0.9073814);
   hnumuCCinFV_stack_12->SetBinError(17,0.6377678);
   hnumuCCinFV_stack_12->SetBinError(18,0.7009382);
   hnumuCCinFV_stack_12->SetBinError(19,0.4238811);
   hnumuCCinFV_stack_12->SetBinError(20,0.6385588);
   hnumuCCinFV_stack_12->SetBinError(21,0.4201422);
   hnumuCCinFV_stack_12->SetBinError(22,0.7426409);
   hnumuCCinFV_stack_12->SetBinError(23,2.234926);
   hnumuCCinFV_stack_12->SetBinError(24,0.4958507);
   hnumuCCinFV_stack_12->SetBinError(25,0.4205494);
   hnumuCCinFV_stack_12->SetBinError(26,0.438694);
   hnumuCCinFV_stack_12->SetBinError(27,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(28,0.4354267);
   hnumuCCinFV_stack_12->SetBinError(29,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(30,0.4440588);
   hnumuCCinFV_stack_12->SetBinError(31,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(32,0.48078);
   hnumuCCinFV_stack_12->SetBinError(33,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(35,0.9117458);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(2,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.9684335);
   hnueCCinFV_stack_13->SetBinContent(15,0.6195905);
   hnueCCinFV_stack_13->SetBinContent(23,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(29,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(30,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(35,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.4972556);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.5270816);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.7765451);
   hnueCCinFV_stack_13->SetBinError(15,0.3585277);
   hnueCCinFV_stack_13->SetBinError(23,0.3025491);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.1967154);
   hnueCCinFV_stack_13->SetBinError(29,0.2463303);
   hnueCCinFV_stack_13->SetBinError(30,0.2179626);
   hnueCCinFV_stack_13->SetBinError(35,0.1967154);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__23->SetBinContent(1,29.55466);
   hmcerror__23->SetBinContent(2,32.02094);
   hmcerror__23->SetBinContent(3,42.0683);
   hmcerror__23->SetBinContent(4,42.07076);
   hmcerror__23->SetBinContent(5,43.30532);
   hmcerror__23->SetBinContent(6,56.63489);
   hmcerror__23->SetBinContent(7,65.93732);
   hmcerror__23->SetBinContent(8,59.72502);
   hmcerror__23->SetBinContent(9,64.31832);
   hmcerror__23->SetBinContent(10,72.52061);
   hmcerror__23->SetBinContent(11,74.78348);
   hmcerror__23->SetBinContent(12,70.76254);
   hmcerror__23->SetBinContent(13,68.42972);
   hmcerror__23->SetBinContent(14,43.51971);
   hmcerror__23->SetBinContent(15,31.85635);
   hmcerror__23->SetBinContent(16,23.91685);
   hmcerror__23->SetBinContent(17,15.01442);
   hmcerror__23->SetBinContent(18,14.6724);
   hmcerror__23->SetBinContent(19,9.861708);
   hmcerror__23->SetBinContent(20,12.07899);
   hmcerror__23->SetBinContent(21,8.092842);
   hmcerror__23->SetBinContent(22,8.120267);
   hmcerror__23->SetBinContent(23,11.30912);
   hmcerror__23->SetBinContent(24,6.066967);
   hmcerror__23->SetBinContent(25,5.434846);
   hmcerror__23->SetBinContent(26,5.25888);
   hmcerror__23->SetBinContent(27,4.792545);
   hmcerror__23->SetBinContent(28,3.510329);
   hmcerror__23->SetBinContent(29,3.919962);
   hmcerror__23->SetBinContent(30,4.467568);
   hmcerror__23->SetBinContent(31,2.894282);
   hmcerror__23->SetBinContent(32,1.99721);
   hmcerror__23->SetBinContent(33,1.827112);
   hmcerror__23->SetBinContent(34,2.3466);
   hmcerror__23->SetBinContent(35,20.90701);
   hmcerror__23->SetBinError(1,23.25863);
   hmcerror__23->SetBinError(2,23.36181);
   hmcerror__23->SetBinError(3,15.75271);
   hmcerror__23->SetBinError(4,20.60478);
   hmcerror__23->SetBinError(5,17.62104);
   hmcerror__23->SetBinError(6,17.83896);
   hmcerror__23->SetBinError(7,30.59811);
   hmcerror__23->SetBinError(8,19.92098);
   hmcerror__23->SetBinError(9,18.80001);
   hmcerror__23->SetBinError(10,23.86294);
   hmcerror__23->SetBinError(11,22.253);
   hmcerror__23->SetBinError(12,29.1068);
   hmcerror__23->SetBinError(13,24.15444);
   hmcerror__23->SetBinError(14,15.48629);
   hmcerror__23->SetBinError(15,12.52341);
   hmcerror__23->SetBinError(16,17.69579);
   hmcerror__23->SetBinError(17,8.281214);
   hmcerror__23->SetBinError(18,16.74812);
   hmcerror__23->SetBinError(19,7.288873);
   hmcerror__23->SetBinError(20,10.59609);
   hmcerror__23->SetBinError(21,7.195696);
   hmcerror__23->SetBinError(22,7.987883);
   hmcerror__23->SetBinError(23,14.23308);
   hmcerror__23->SetBinError(24,11.09161);
   hmcerror__23->SetBinError(25,8.794791);
   hmcerror__23->SetBinError(26,7.482714);
   hmcerror__23->SetBinError(27,4.790051);
   hmcerror__23->SetBinError(28,6.496442);
   hmcerror__23->SetBinError(29,6.126593);
   hmcerror__23->SetBinError(30,5.88914);
   hmcerror__23->SetBinError(31,3.796606);
   hmcerror__23->SetBinError(32,2.922357);
   hmcerror__23->SetBinError(33,2.967728);
   hmcerror__23->SetBinError(34,5.337911);
   hmcerror__23->SetBinError(35,14.35696);
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
   
   Double_t _fx3029[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3029[34] = {
   27,
   31,
   39,
   38,
   51,
   59,
   47,
   55,
   77,
   85,
   53,
   57,
   61,
   31,
   33,
   23,
   14,
   11,
   11,
   8,
   8,
   13,
   11,
   5,
   3,
   5,
   3,
   0,
   2,
   5,
   4,
   0,
   1,
   1};
   Double_t _felx3029[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3029[34] = {
   5.3414,
   5.7094,
   6.3813,
   6.3013,
   7.2725,
   7.8097,
   6.9882,
   7.546,
   8.8995,
   9.3428,
   7.4105,
   7.679,
   7.9383,
   5.7094,
   5.8847,
   4.9457,
   3.9102,
   3.4975,
   3.4975,
   3.0307,
   3.0307,
   3.77763,
   3.4975,
   2.48995,
   2.143368,
   2.48995,
   2.143368,
   0,
   2,
   2.48995,
   2.29683,
   0,
   1,
   1};
   Double_t _fehx3029[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3029[34] = {
   5.1322,
   5.5017,
   6.1757,
   6.0955,
   7.0686,
   7.6066,
   6.7839,
   7.3425,
   8.6976,
   9.1411,
   7.2068,
   7.4757,
   7.7354,
   5.5017,
   5.6776,
   4.7346,
   3.6898,
   3.27,
   3.27,
   2.7896,
   2.7896,
   3.5552,
   3.27,
   2.21064,
   1.72422,
   2.21064,
   1.72422,
   1.1478,
   1.51917,
   2.21064,
   1.98186,
   1.1478,
   1.35971,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,440);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(103.5552);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.6/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 872.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 197.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 200.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  131.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 180.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 33.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 94.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3030[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3030[34] = {
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
   Double_t _felx3030[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3030[34] = {
   0.7869701,
   0.7295791,
   0.3744555,
   0.489765,
   0.4069024,
   0.3149817,
   0.4640484,
   0.333545,
   0.2922963,
   0.3290505,
   0.2975657,
   0.4113307,
   0.3529817,
   0.3558453,
   0.3931212,
   0.7398879,
   0.5515506,
   1.141471,
   0.7391086,
   0.8772336,
   0.8891433,
   0.9836971,
   1.258549,
   1.828197,
   1.618223,
   1.422872,
   0.9994796,
   1.850665,
   1.562921,
   1.318198,
   1.311761,
   1.46322,
   1.624273,
   2.274743};
   Double_t _fehx3030[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3030[34] = {
   0.7869701,
   0.7295791,
   0.3744555,
   0.489765,
   0.4069024,
   0.3149817,
   0.4640484,
   0.333545,
   0.2922963,
   0.3290505,
   0.2975657,
   0.4113307,
   0.3529817,
   0.3558453,
   0.3931212,
   0.7398879,
   0.5515506,
   1.141471,
   0.7391086,
   0.8772336,
   0.8891433,
   0.9836971,
   1.258549,
   1.828197,
   1.618223,
   1.422872,
   0.9994796,
   1.850665,
   1.562921,
   1.318198,
   1.311761,
   1.46322,
   1.624273,
   2.274743};
   grae = new TGraphAsymmErrors(34,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,440);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3031[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3031[34] = {
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
   Double_t _felx3031[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3031[34] = {
   0.1785877,
   0.1894387,
   0.1548257,
   0.1646392,
   0.1842294,
   0.1636349,
   0.1579333,
   0.1602274,
   0.1762653,
   0.1799646,
   0.1853777,
   0.1880324,
   0.1759717,
   0.1901736,
   0.1811021,
   0.221596,
   0.2224245,
   0.2498532,
   0.2611335,
   0.2366673,
   0.2587474,
   0.299015,
   0.3894004,
   0.31164,
   0.3662313,
   0.3217204,
   0.3102225,
   0.3566949,
   0.3744486,
   0.3477229,
   0.4211848,
   0.5153641,
   0.675518,
   0.4919506};
   Double_t _fehx3031[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3031[34] = {
   0.1785877,
   0.1894387,
   0.1548257,
   0.1646392,
   0.1842294,
   0.1636349,
   0.1579333,
   0.1602274,
   0.1762653,
   0.1799646,
   0.1853777,
   0.1880324,
   0.1759717,
   0.1901736,
   0.1811021,
   0.221596,
   0.2224245,
   0.2498532,
   0.2611335,
   0.2366673,
   0.2587474,
   0.299015,
   0.3894004,
   0.31164,
   0.3662313,
   0.3217204,
   0.3102225,
   0.3566949,
   0.3744486,
   0.3477229,
   0.4211848,
   0.5153641,
   0.675518,
   0.4919506};
   grae = new TGraphAsymmErrors(34,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,440);
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
   
   Double_t _fx3032[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3032[34] = {
   0.9135615,
   0.9681164,
   0.9270638,
   0.9032402,
   1.177684,
   1.041761,
   0.7127982,
   0.9208871,
   1.197171,
   1.172081,
   0.7087127,
   0.8055109,
   0.8914256,
   0.7123209,
   1.0359,
   0.9616649,
   0.9324369,
   0.7497069,
   1.115425,
   0.6623073,
   0.9885279,
   1.600933,
   0.9726662,
   0.8241351,
   0.5519936,
   0.9507728,
   0.6259722,
   0,
   0.510209,
   1.119177,
   1.382035,
   0,
   0.5473118,
   0.4261485};
   Double_t _felx3032[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3032[34] = {
   0.1807295,
   0.1783021,
   0.151689,
   0.1497786,
   0.1679355,
   0.1378956,
   0.1059825,
   0.1263457,
   0.1383665,
   0.1288296,
   0.09909274,
   0.1085179,
   0.1160066,
   0.1311911,
   0.1847261,
   0.2067872,
   0.2604296,
   0.2383727,
   0.3546546,
   0.2509068,
   0.3744914,
   0.4652101,
   0.3092636,
   0.410411,
   0.3943751,
   0.4734754,
   0.4472296,
   0,
   0.510209,
   0.557339,
   0.793575,
   0,
   0.5473118,
   0.4261485};
   Double_t _fehx3032[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3032[34] = {
   0.1736511,
   0.1718157,
   0.1468017,
   0.1448869,
   0.1632271,
   0.1343094,
   0.1028841,
   0.1229384,
   0.1352274,
   0.1260483,
   0.09636888,
   0.1056449,
   0.1130415,
   0.1264186,
   0.1782251,
   0.1979608,
   0.2457504,
   0.2228674,
   0.3315856,
   0.2309466,
   0.3446997,
   0.4378181,
   0.2891471,
   0.3643732,
   0.3172528,
   0.4203633,
   0.3597713,
   0.3269779,
   0.3875471,
   0.4948195,
   0.6847501,
   0.5747018,
   0.7441853,
   0.5794384};
   grae = new TGraphAsymmErrors(34,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,440);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.273464);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4 + Reweight","F");

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
