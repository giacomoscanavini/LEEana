#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sun Oct 23 14:05:12 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",242,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-7.32,451.2821,809.4379);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hmc__10->SetBinContent(1,76.47935);
   hmc__10->SetBinContent(2,119.8442);
   hmc__10->SetBinContent(3,132.0698);
   hmc__10->SetBinContent(4,159.1527);
   hmc__10->SetBinContent(5,156.5547);
   hmc__10->SetBinContent(6,189.272);
   hmc__10->SetBinContent(7,205.7748);
   hmc__10->SetBinContent(8,185.0303);
   hmc__10->SetBinContent(9,229.3984);
   hmc__10->SetBinContent(10,288.9581);
   hmc__10->SetBinContent(11,309.7026);
   hmc__10->SetBinContent(12,342.7822);
   hmc__10->SetBinContent(13,317.4269);
   hmc__10->SetBinContent(14,219.9652);
   hmc__10->SetBinContent(15,132.7948);
   hmc__10->SetBinContent(16,90.1171);
   hmc__10->SetBinContent(17,64.73367);
   hmc__10->SetBinContent(18,54.09762);
   hmc__10->SetBinContent(19,43.4911);
   hmc__10->SetBinContent(20,43.16012);
   hmc__10->SetBinContent(21,40.12996);
   hmc__10->SetBinContent(22,33.99748);
   hmc__10->SetBinContent(23,28.8319);
   hmc__10->SetBinContent(24,26.06836);
   hmc__10->SetBinContent(25,19.07691);
   hmc__10->SetBinContent(26,18.1724);
   hmc__10->SetBinContent(27,22.60324);
   hmc__10->SetBinContent(28,12.0603);
   hmc__10->SetBinContent(29,15.29449);
   hmc__10->SetBinContent(30,17.21132);
   hmc__10->SetBinContent(31,12.8786);
   hmc__10->SetBinContent(32,11.26277);
   hmc__10->SetBinContent(33,10.21029);
   hmc__10->SetBinContent(34,9.252563);
   hmc__10->SetBinContent(35,91.60371);
   hmc__10->SetBinError(1,24.49534);
   hmc__10->SetBinError(2,34.09459);
   hmc__10->SetBinError(3,38.22884);
   hmc__10->SetBinError(4,43.88614);
   hmc__10->SetBinError(5,40.75984);
   hmc__10->SetBinError(6,44.81038);
   hmc__10->SetBinError(7,66.07589);
   hmc__10->SetBinError(8,48.87116);
   hmc__10->SetBinError(9,58.66796);
   hmc__10->SetBinError(10,78.2158);
   hmc__10->SetBinError(11,81.35291);
   hmc__10->SetBinError(12,88.92963);
   hmc__10->SetBinError(13,75.33552);
   hmc__10->SetBinError(14,55.35816);
   hmc__10->SetBinError(15,37.57573);
   hmc__10->SetBinError(16,25.93852);
   hmc__10->SetBinError(17,22.5107);
   hmc__10->SetBinError(18,19.83289);
   hmc__10->SetBinError(19,17.694);
   hmc__10->SetBinError(20,17.86528);
   hmc__10->SetBinError(21,15.98904);
   hmc__10->SetBinError(22,14.2696);
   hmc__10->SetBinError(23,16.03909);
   hmc__10->SetBinError(24,11.83218);
   hmc__10->SetBinError(25,11.78163);
   hmc__10->SetBinError(26,11.65036);
   hmc__10->SetBinError(27,14.29274);
   hmc__10->SetBinError(28,8.865938);
   hmc__10->SetBinError(29,13.32891);
   hmc__10->SetBinError(30,11.44737);
   hmc__10->SetBinError(31,8.510313);
   hmc__10->SetBinError(32,11.74893);
   hmc__10->SetBinError(33,7.691688);
   hmc__10->SetBinError(34,9.278486);
   hmc__10->SetBinError(35,30.07605);
   hmc__10->SetMinimum(-7.32);
   hmc__10->SetMaximum(768.6);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",34,0,400);
   hs4_stack_4->SetMinimum(-1.146215e-08);
   hs4_stack_4->SetMaximum(359.9214);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,3.87947);
   hbadmatch_stack_1->SetBinContent(2,6.145013);
   hbadmatch_stack_1->SetBinContent(3,5.824246);
   hbadmatch_stack_1->SetBinContent(4,3.801633);
   hbadmatch_stack_1->SetBinContent(5,4.159142);
   hbadmatch_stack_1->SetBinContent(6,7.972767);
   hbadmatch_stack_1->SetBinContent(7,10.70582);
   hbadmatch_stack_1->SetBinContent(8,5.345851);
   hbadmatch_stack_1->SetBinContent(9,3.952962);
   hbadmatch_stack_1->SetBinContent(10,6.44349);
   hbadmatch_stack_1->SetBinContent(11,4.171312);
   hbadmatch_stack_1->SetBinContent(12,9.634667);
   hbadmatch_stack_1->SetBinContent(13,4.161566);
   hbadmatch_stack_1->SetBinContent(14,7.820427);
   hbadmatch_stack_1->SetBinContent(15,3.095301);
   hbadmatch_stack_1->SetBinContent(16,1.807088);
   hbadmatch_stack_1->SetBinContent(17,1.123658);
   hbadmatch_stack_1->SetBinContent(18,1.463836);
   hbadmatch_stack_1->SetBinContent(19,0.3917402);
   hbadmatch_stack_1->SetBinContent(20,0.5352025);
   hbadmatch_stack_1->SetBinContent(21,1.332349);
   hbadmatch_stack_1->SetBinContent(22,0.3916036);
   hbadmatch_stack_1->SetBinContent(23,0.3018074);
   hbadmatch_stack_1->SetBinContent(24,0.6803553);
   hbadmatch_stack_1->SetBinContent(25,0.3998213);
   hbadmatch_stack_1->SetBinContent(26,0.2855402);
   hbadmatch_stack_1->SetBinContent(27,0.3235489);
   hbadmatch_stack_1->SetBinContent(33,0.1950248);
   hbadmatch_stack_1->SetBinContent(34,0.4822556);
   hbadmatch_stack_1->SetBinContent(35,0.757781);
   hbadmatch_stack_1->SetBinError(1,1.110245);
   hbadmatch_stack_1->SetBinError(2,1.594934);
   hbadmatch_stack_1->SetBinError(3,1.2807);
   hbadmatch_stack_1->SetBinError(4,0.9774366);
   hbadmatch_stack_1->SetBinError(5,0.9954597);
   hbadmatch_stack_1->SetBinError(6,1.53592);
   hbadmatch_stack_1->SetBinError(7,1.779014);
   hbadmatch_stack_1->SetBinError(8,1.4902);
   hbadmatch_stack_1->SetBinError(9,1.039691);
   hbadmatch_stack_1->SetBinError(10,1.349771);
   hbadmatch_stack_1->SetBinError(11,1.059899);
   hbadmatch_stack_1->SetBinError(12,2.294256);
   hbadmatch_stack_1->SetBinError(13,1.204269);
   hbadmatch_stack_1->SetBinError(14,2.043546);
   hbadmatch_stack_1->SetBinError(15,0.9296626);
   hbadmatch_stack_1->SetBinError(16,0.7015202);
   hbadmatch_stack_1->SetBinError(17,0.5188295);
   hbadmatch_stack_1->SetBinError(18,0.620407);
   hbadmatch_stack_1->SetBinError(19,0.2770047);
   hbadmatch_stack_1->SetBinError(20,0.3921167);
   hbadmatch_stack_1->SetBinError(21,0.5759166);
   hbadmatch_stack_1->SetBinError(22,0.3916037);
   hbadmatch_stack_1->SetBinError(23,0.217863);
   hbadmatch_stack_1->SetBinError(24,0.4810838);
   hbadmatch_stack_1->SetBinError(25,0.3998213);
   hbadmatch_stack_1->SetBinError(26,0.2855402);
   hbadmatch_stack_1->SetBinError(27,0.2335661);
   hbadmatch_stack_1->SetBinError(33,0.1950249);
   hbadmatch_stack_1->SetBinError(34,0.3467422);
   hbadmatch_stack_1->SetBinError(35,0.5945516);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hext_stack_2->SetBinContent(1,17.55544);
   hext_stack_2->SetBinContent(2,23.87067);
   hext_stack_2->SetBinContent(3,30.17872);
   hext_stack_2->SetBinContent(4,37.01859);
   hext_stack_2->SetBinContent(5,30.50148);
   hext_stack_2->SetBinContent(6,41.14083);
   hext_stack_2->SetBinContent(7,33.76145);
   hext_stack_2->SetBinContent(8,30.97592);
   hext_stack_2->SetBinContent(9,31.37093);
   hext_stack_2->SetBinContent(10,37.2233);
   hext_stack_2->SetBinContent(11,29.45326);
   hext_stack_2->SetBinContent(12,32.04403);
   hext_stack_2->SetBinContent(13,29.7274);
   hext_stack_2->SetBinContent(14,12.48319);
   hext_stack_2->SetBinContent(15,10.28302);
   hext_stack_2->SetBinContent(16,8.179411);
   hext_stack_2->SetBinContent(17,4.371616);
   hext_stack_2->SetBinContent(18,3.972198);
   hext_stack_2->SetBinContent(19,3.318994);
   hext_stack_2->SetBinContent(20,3.088388);
   hext_stack_2->SetBinContent(21,6.296459);
   hext_stack_2->SetBinContent(22,4.352847);
   hext_stack_2->SetBinContent(23,1.219797);
   hext_stack_2->SetBinContent(24,3.864046);
   hext_stack_2->SetBinContent(25,1.379791);
   hext_stack_2->SetBinContent(26,1.137595);
   hext_stack_2->SetBinContent(27,2.345802);
   hext_stack_2->SetBinContent(29,1.137595);
   hext_stack_2->SetBinContent(30,1.048213);
   hext_stack_2->SetBinContent(31,1.055394);
   hext_stack_2->SetBinContent(33,0.7309963);
   hext_stack_2->SetBinContent(35,2.357392);
   hext_stack_2->SetBinError(1,2.785262);
   hext_stack_2->SetBinError(2,3.278895);
   hext_stack_2->SetBinError(3,3.73441);
   hext_stack_2->SetBinError(4,4.181997);
   hext_stack_2->SetBinError(5,3.685052);
   hext_stack_2->SetBinError(6,4.435189);
   hext_stack_2->SetBinError(7,3.834186);
   hext_stack_2->SetBinError(8,3.769273);
   hext_stack_2->SetBinError(9,3.799845);
   hext_stack_2->SetBinError(10,4.091258);
   hext_stack_2->SetBinError(11,3.605914);
   hext_stack_2->SetBinError(12,3.702615);
   hext_stack_2->SetBinError(13,3.810021);
   hext_stack_2->SetBinError(14,2.264515);
   hext_stack_2->SetBinError(15,2.125455);
   hext_stack_2->SetBinError(16,1.888062);
   hext_stack_2->SetBinError(17,1.423285);
   hext_stack_2->SetBinError(18,1.288106);
   hext_stack_2->SetBinError(19,1.146136);
   hext_stack_2->SetBinError(20,1.096541);
   hext_stack_2->SetBinError(21,1.805754);
   hext_stack_2->SetBinError(22,1.514272);
   hext_stack_2->SetBinError(23,0.7042499);
   hext_stack_2->SetBinError(24,1.437918);
   hext_stack_2->SetBinError(25,0.6935586);
   hext_stack_2->SetBinError(26,0.6602113);
   hext_stack_2->SetBinError(27,0.9989624);
   hext_stack_2->SetBinError(29,0.6602113);
   hext_stack_2->SetBinError(30,0.7595995);
   hext_stack_2->SetBinError(31,0.6130171);
   hext_stack_2->SetBinError(33,0.5201503);
   hext_stack_2->SetBinError(35,0.9653222);
   hext_stack_2->SetEntries(1136);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,1.728496);
   hdirt_stack_3->SetBinContent(2,3.660437);
   hdirt_stack_3->SetBinContent(3,3.42964);
   hdirt_stack_3->SetBinContent(4,2.825076);
   hdirt_stack_3->SetBinContent(5,4.244463);
   hdirt_stack_3->SetBinContent(6,3.40403);
   hdirt_stack_3->SetBinContent(7,4.63973);
   hdirt_stack_3->SetBinContent(8,4.449371);
   hdirt_stack_3->SetBinContent(9,2.873595);
   hdirt_stack_3->SetBinContent(10,5.442349);
   hdirt_stack_3->SetBinContent(11,3.83797);
   hdirt_stack_3->SetBinContent(12,3.462471);
   hdirt_stack_3->SetBinContent(13,3.804021);
   hdirt_stack_3->SetBinContent(14,1.39001);
   hdirt_stack_3->SetBinContent(15,2.467069);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,1.030795);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.3381872);
   hdirt_stack_3->SetBinContent(20,1.256912);
   hdirt_stack_3->SetBinContent(21,0.7207426);
   hdirt_stack_3->SetBinContent(22,0.8575099);
   hdirt_stack_3->SetBinContent(26,0.2761429);
   hdirt_stack_3->SetBinContent(29,0.5570828);
   hdirt_stack_3->SetBinError(1,0.6907024);
   hdirt_stack_3->SetBinError(2,1.093525);
   hdirt_stack_3->SetBinError(3,0.9803426);
   hdirt_stack_3->SetBinError(4,0.8543296);
   hdirt_stack_3->SetBinError(5,1.075945);
   hdirt_stack_3->SetBinError(6,0.8127713);
   hdirt_stack_3->SetBinError(7,1.146953);
   hdirt_stack_3->SetBinError(8,1.127751);
   hdirt_stack_3->SetBinError(9,0.7910305);
   hdirt_stack_3->SetBinError(10,1.551574);
   hdirt_stack_3->SetBinError(11,1.089043);
   hdirt_stack_3->SetBinError(12,1.027811);
   hdirt_stack_3->SetBinError(13,1.247968);
   hdirt_stack_3->SetBinError(14,0.5760982);
   hdirt_stack_3->SetBinError(15,0.8670347);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.5245307);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.3381872);
   hdirt_stack_3->SetBinError(20,0.5768785);
   hdirt_stack_3->SetBinError(21,0.4348223);
   hdirt_stack_3->SetBinError(22,0.5106648);
   hdirt_stack_3->SetBinError(26,0.1952625);
   hdirt_stack_3->SetBinError(29,0.4028472);
   hdirt_stack_3->SetEntries(238);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,15.03559);
   houtFV_stack_4->SetBinContent(2,18.6509);
   houtFV_stack_4->SetBinContent(3,23.08583);
   houtFV_stack_4->SetBinContent(4,26.40312);
   houtFV_stack_4->SetBinContent(5,22.26817);
   houtFV_stack_4->SetBinContent(6,27.76857);
   houtFV_stack_4->SetBinContent(7,33.03682);
   houtFV_stack_4->SetBinContent(8,24.55435);
   houtFV_stack_4->SetBinContent(9,33.18076);
   houtFV_stack_4->SetBinContent(10,36.47567);
   houtFV_stack_4->SetBinContent(11,29.83032);
   houtFV_stack_4->SetBinContent(12,37.31739);
   houtFV_stack_4->SetBinContent(13,36.43973);
   houtFV_stack_4->SetBinContent(14,25.78533);
   houtFV_stack_4->SetBinContent(15,13.35759);
   houtFV_stack_4->SetBinContent(16,8.331791);
   houtFV_stack_4->SetBinContent(17,9.040585);
   houtFV_stack_4->SetBinContent(18,7.300721);
   houtFV_stack_4->SetBinContent(19,6.103325);
   houtFV_stack_4->SetBinContent(20,6.225085);
   houtFV_stack_4->SetBinContent(21,4.111136);
   houtFV_stack_4->SetBinContent(22,4.972617);
   houtFV_stack_4->SetBinContent(23,2.886397);
   houtFV_stack_4->SetBinContent(24,2.367832);
   houtFV_stack_4->SetBinContent(25,2.489128);
   houtFV_stack_4->SetBinContent(26,1.385923);
   houtFV_stack_4->SetBinContent(27,3.320757);
   houtFV_stack_4->SetBinContent(28,1.127039);
   houtFV_stack_4->SetBinContent(29,1.556971);
   houtFV_stack_4->SetBinContent(30,1.065949);
   houtFV_stack_4->SetBinContent(31,0.7049856);
   houtFV_stack_4->SetBinContent(32,0.5619521);
   houtFV_stack_4->SetBinContent(33,0.1950248);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,9.608305);
   houtFV_stack_4->SetBinError(1,2.010307);
   houtFV_stack_4->SetBinError(2,2.116464);
   houtFV_stack_4->SetBinError(3,2.484967);
   houtFV_stack_4->SetBinError(4,2.651043);
   houtFV_stack_4->SetBinError(5,2.51458);
   houtFV_stack_4->SetBinError(6,2.590245);
   houtFV_stack_4->SetBinError(7,2.905139);
   houtFV_stack_4->SetBinError(8,2.482851);
   houtFV_stack_4->SetBinError(9,2.899694);
   houtFV_stack_4->SetBinError(10,2.977973);
   houtFV_stack_4->SetBinError(11,2.714904);
   houtFV_stack_4->SetBinError(12,3.061149);
   houtFV_stack_4->SetBinError(13,3.226914);
   houtFV_stack_4->SetBinError(14,2.596512);
   houtFV_stack_4->SetBinError(15,1.787377);
   houtFV_stack_4->SetBinError(16,1.390606);
   houtFV_stack_4->SetBinError(17,1.516289);
   houtFV_stack_4->SetBinError(18,1.454714);
   houtFV_stack_4->SetBinError(19,1.169543);
   houtFV_stack_4->SetBinError(20,1.265683);
   houtFV_stack_4->SetBinError(21,0.9956678);
   houtFV_stack_4->SetBinError(22,1.058225);
   houtFV_stack_4->SetBinError(23,0.8491083);
   houtFV_stack_4->SetBinError(24,0.7710577);
   houtFV_stack_4->SetBinError(25,0.7723611);
   houtFV_stack_4->SetBinError(26,0.5015106);
   houtFV_stack_4->SetBinError(27,0.9534221);
   houtFV_stack_4->SetBinError(28,0.5201044);
   houtFV_stack_4->SetBinError(29,0.6030957);
   houtFV_stack_4->SetBinError(30,0.4456864);
   houtFV_stack_4->SetBinError(31,0.336852);
   houtFV_stack_4->SetBinError(32,0.3251211);
   houtFV_stack_4->SetBinError(33,0.1950249);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,1.604498);
   houtFV_stack_4->SetEntries(2163);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.454411);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.177021);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.252002);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.64607);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.691323);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.309831);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.463853);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.995321);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,6.769255);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,9.997896);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,11.59655);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,11.68828);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,14.06811);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,8.898183);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.313868);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.436114);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.306322);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.923177);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.072357);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8103306);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.772949);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.9357517);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.6743253);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2194621);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4671284);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.4130363);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.7226299);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.465741);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.08628532);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.337646);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.3089567);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.4127557);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.1299937);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.5951371);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,1.629755);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4190372);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6969191);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5244589);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6973972);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5680951);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5978793);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6013926);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7201374);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9024386);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.109567);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.30245);
   hNCpi0inFVcoh_stack_5->SetBinError(12,1.308088);
   hNCpi0inFVcoh_stack_5->SetBinError(13,1.417012);
   hNCpi0inFVcoh_stack_5->SetBinError(14,1.085817);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.9232165);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8082906);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3108171);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7759579);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.414787);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3778308);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6053965);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2621716);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2509628);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1161462);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1978592);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2722153);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.3226765);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.1915183);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.05306174);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.2232269);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.1610757);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.2853793);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.0909185);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.3477713);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.4520026);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03450397);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.109106);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1270919);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.125847);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5365615);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.466453);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.0589169);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3185911);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4984527);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6599529);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.27036);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.10262);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.6204374);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2396396);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1759195);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09654343);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02640148);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05813798);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2490974);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.07226992);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.0365362);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.0327757);
   hNCpi0inFVqe_stack_6->SetBinContent(35,0.04146549);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02449786);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.0568599);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08485324);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05449499);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2158521);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1726388);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04448979);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.102002);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1730268);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1605181);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4448542);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4233554);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2512327);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1100564);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1500488);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05666244);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.01899753);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.0294588);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1332973);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.05746958);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02583506);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.02323348);
   hNCpi0inFVqe_stack_6->SetBinError(35,0.02971407);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,15.27932);
   hNCpi0inFVres_stack_7->SetBinContent(2,29.48548);
   hNCpi0inFVres_stack_7->SetBinContent(3,28.80843);
   hNCpi0inFVres_stack_7->SetBinContent(4,45.74078);
   hNCpi0inFVres_stack_7->SetBinContent(5,42.08821);
   hNCpi0inFVres_stack_7->SetBinContent(6,50.35711);
   hNCpi0inFVres_stack_7->SetBinContent(7,56.68224);
   hNCpi0inFVres_stack_7->SetBinContent(8,55.3682);
   hNCpi0inFVres_stack_7->SetBinContent(9,75.07107);
   hNCpi0inFVres_stack_7->SetBinContent(10,96.02287);
   hNCpi0inFVres_stack_7->SetBinContent(11,117.5475);
   hNCpi0inFVres_stack_7->SetBinContent(12,126.7383);
   hNCpi0inFVres_stack_7->SetBinContent(13,120.6671);
   hNCpi0inFVres_stack_7->SetBinContent(14,86.72112);
   hNCpi0inFVres_stack_7->SetBinContent(15,45.42133);
   hNCpi0inFVres_stack_7->SetBinContent(16,28.68706);
   hNCpi0inFVres_stack_7->SetBinContent(17,18.57718);
   hNCpi0inFVres_stack_7->SetBinContent(18,16.06008);
   hNCpi0inFVres_stack_7->SetBinContent(19,12.41653);
   hNCpi0inFVres_stack_7->SetBinContent(20,11.63048);
   hNCpi0inFVres_stack_7->SetBinContent(21,9.288874);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.086806);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.206704);
   hNCpi0inFVres_stack_7->SetBinContent(24,5.189515);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.334655);
   hNCpi0inFVres_stack_7->SetBinContent(26,5.681765);
   hNCpi0inFVres_stack_7->SetBinContent(27,4.739719);
   hNCpi0inFVres_stack_7->SetBinContent(28,3.017468);
   hNCpi0inFVres_stack_7->SetBinContent(29,3.57251);
   hNCpi0inFVres_stack_7->SetBinContent(30,3.364472);
   hNCpi0inFVres_stack_7->SetBinContent(31,2.092788);
   hNCpi0inFVres_stack_7->SetBinContent(32,1.805937);
   hNCpi0inFVres_stack_7->SetBinContent(33,2.35191);
   hNCpi0inFVres_stack_7->SetBinContent(34,2.305992);
   hNCpi0inFVres_stack_7->SetBinContent(35,13.08452);
   hNCpi0inFVres_stack_7->SetBinError(1,1.37018);
   hNCpi0inFVres_stack_7->SetBinError(2,1.899395);
   hNCpi0inFVres_stack_7->SetBinError(3,1.792561);
   hNCpi0inFVres_stack_7->SetBinError(4,2.480436);
   hNCpi0inFVres_stack_7->SetBinError(5,2.204445);
   hNCpi0inFVres_stack_7->SetBinError(6,2.449197);
   hNCpi0inFVres_stack_7->SetBinError(7,2.650358);
   hNCpi0inFVres_stack_7->SetBinError(8,2.496057);
   hNCpi0inFVres_stack_7->SetBinError(9,2.881326);
   hNCpi0inFVres_stack_7->SetBinError(10,3.245977);
   hNCpi0inFVres_stack_7->SetBinError(11,3.70826);
   hNCpi0inFVres_stack_7->SetBinError(12,3.963887);
   hNCpi0inFVres_stack_7->SetBinError(13,3.826994);
   hNCpi0inFVres_stack_7->SetBinError(14,3.185513);
   hNCpi0inFVres_stack_7->SetBinError(15,2.43248);
   hNCpi0inFVres_stack_7->SetBinError(16,1.765705);
   hNCpi0inFVres_stack_7->SetBinError(17,1.411606);
   hNCpi0inFVres_stack_7->SetBinError(18,1.313024);
   hNCpi0inFVres_stack_7->SetBinError(19,1.244077);
   hNCpi0inFVres_stack_7->SetBinError(20,1.149789);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9888038);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9658735);
   hNCpi0inFVres_stack_7->SetBinError(23,0.849715);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5919869);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4943871);
   hNCpi0inFVres_stack_7->SetBinError(26,0.9619737);
   hNCpi0inFVres_stack_7->SetBinError(27,0.7879155);
   hNCpi0inFVres_stack_7->SetBinError(28,0.6673155);
   hNCpi0inFVres_stack_7->SetBinError(29,0.716288);
   hNCpi0inFVres_stack_7->SetBinError(30,0.7223439);
   hNCpi0inFVres_stack_7->SetBinError(31,0.4415882);
   hNCpi0inFVres_stack_7->SetBinError(32,0.487742);
   hNCpi0inFVres_stack_7->SetBinError(33,0.5345778);
   hNCpi0inFVres_stack_7->SetBinError(34,0.5260336);
   hNCpi0inFVres_stack_7->SetBinError(35,1.291405);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.580759);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.124202);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.882832);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.190336);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.227088);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.895021);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.737453);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.11068);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.67682);
   hNCpi0inFVdis_stack_8->SetBinContent(10,21.11581);
   hNCpi0inFVdis_stack_8->SetBinContent(11,25.16882);
   hNCpi0inFVdis_stack_8->SetBinContent(12,25.82195);
   hNCpi0inFVdis_stack_8->SetBinContent(13,22.0704);
   hNCpi0inFVdis_stack_8->SetBinContent(14,17.97445);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.926126);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.415585);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.298449);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.298248);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.185217);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.113533);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.65929);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.299719);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.997721);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.497042);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7677559);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.268773);
   hNCpi0inFVdis_stack_8->SetBinContent(27,1.611389);
   hNCpi0inFVdis_stack_8->SetBinContent(28,1.090549);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.048465);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.246228);
   hNCpi0inFVdis_stack_8->SetBinContent(31,1.181562);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.5126963);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.867583);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.8563193);
   hNCpi0inFVdis_stack_8->SetBinContent(35,6.110877);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6975778);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.031812);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.768411);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7298729);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9259612);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.971512);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.209183);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.280433);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.246304);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.675892);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.746034);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.805024);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.53027);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.514981);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.002161);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7895473);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6253939);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6421702);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.778494);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6564831);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3931854);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.344084);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5575244);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3053978);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2025854);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3186368);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.526231);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.3550143);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.3087509);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4073163);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.3918727);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.3366242);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.4146131);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.2793506);
   hNCpi0inFVdis_stack_8->SetBinError(35,1.043093);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.06358271);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,5.71188);
   hCCpi0inFV_stack_10->SetBinContent(2,12.58981);
   hCCpi0inFV_stack_10->SetBinContent(3,15.33163);
   hCCpi0inFV_stack_10->SetBinContent(4,13.46216);
   hCCpi0inFV_stack_10->SetBinContent(5,19.97398);
   hCCpi0inFV_stack_10->SetBinContent(6,20.27971);
   hCCpi0inFV_stack_10->SetBinContent(7,25.32229);
   hCCpi0inFV_stack_10->SetBinContent(8,24.35918);
   hCCpi0inFV_stack_10->SetBinContent(9,34.53703);
   hCCpi0inFV_stack_10->SetBinContent(10,45.95404);
   hCCpi0inFV_stack_10->SetBinContent(11,54.51374);
   hCCpi0inFV_stack_10->SetBinContent(12,57.36175);
   hCCpi0inFV_stack_10->SetBinContent(13,54.42362);
   hCCpi0inFV_stack_10->SetBinContent(14,34.43395);
   hCCpi0inFV_stack_10->SetBinContent(15,24.40322);
   hCCpi0inFV_stack_10->SetBinContent(16,15.78507);
   hCCpi0inFV_stack_10->SetBinContent(17,12.33479);
   hCCpi0inFV_stack_10->SetBinContent(18,9.486428);
   hCCpi0inFV_stack_10->SetBinContent(19,7.529722);
   hCCpi0inFV_stack_10->SetBinContent(20,8.594594);
   hCCpi0inFV_stack_10->SetBinContent(21,6.689802);
   hCCpi0inFV_stack_10->SetBinContent(22,6.697148);
   hCCpi0inFV_stack_10->SetBinContent(23,5.948933);
   hCCpi0inFV_stack_10->SetBinContent(24,5.468674);
   hCCpi0inFV_stack_10->SetBinContent(25,3.808123);
   hCCpi0inFV_stack_10->SetBinContent(26,3.912939);
   hCCpi0inFV_stack_10->SetBinContent(27,5.466984);
   hCCpi0inFV_stack_10->SetBinContent(28,2.30395);
   hCCpi0inFV_stack_10->SetBinContent(29,3.974245);
   hCCpi0inFV_stack_10->SetBinContent(30,4.788059);
   hCCpi0inFV_stack_10->SetBinContent(31,2.842534);
   hCCpi0inFV_stack_10->SetBinContent(32,2.980925);
   hCCpi0inFV_stack_10->SetBinContent(33,2.390778);
   hCCpi0inFV_stack_10->SetBinContent(34,3.17933);
   hCCpi0inFV_stack_10->SetBinContent(35,22.28382);
   hCCpi0inFV_stack_10->SetBinError(1,1.209378);
   hCCpi0inFV_stack_10->SetBinError(2,1.771009);
   hCCpi0inFV_stack_10->SetBinError(3,1.971589);
   hCCpi0inFV_stack_10->SetBinError(4,1.865644);
   hCCpi0inFV_stack_10->SetBinError(5,2.214698);
   hCCpi0inFV_stack_10->SetBinError(6,2.237323);
   hCCpi0inFV_stack_10->SetBinError(7,2.527153);
   hCCpi0inFV_stack_10->SetBinError(8,2.540429);
   hCCpi0inFV_stack_10->SetBinError(9,2.931779);
   hCCpi0inFV_stack_10->SetBinError(10,3.380711);
   hCCpi0inFV_stack_10->SetBinError(11,3.719616);
   hCCpi0inFV_stack_10->SetBinError(12,3.791122);
   hCCpi0inFV_stack_10->SetBinError(13,3.705225);
   hCCpi0inFV_stack_10->SetBinError(14,2.920729);
   hCCpi0inFV_stack_10->SetBinError(15,2.477431);
   hCCpi0inFV_stack_10->SetBinError(16,1.98214);
   hCCpi0inFV_stack_10->SetBinError(17,1.752688);
   hCCpi0inFV_stack_10->SetBinError(18,1.533465);
   hCCpi0inFV_stack_10->SetBinError(19,1.431876);
   hCCpi0inFV_stack_10->SetBinError(20,1.461665);
   hCCpi0inFV_stack_10->SetBinError(21,1.231136);
   hCCpi0inFV_stack_10->SetBinError(22,1.287145);
   hCCpi0inFV_stack_10->SetBinError(23,1.286971);
   hCCpi0inFV_stack_10->SetBinError(24,1.21032);
   hCCpi0inFV_stack_10->SetBinError(25,1.020428);
   hCCpi0inFV_stack_10->SetBinError(26,0.981813);
   hCCpi0inFV_stack_10->SetBinError(27,1.210046);
   hCCpi0inFV_stack_10->SetBinError(28,0.7080718);
   hCCpi0inFV_stack_10->SetBinError(29,1.006107);
   hCCpi0inFV_stack_10->SetBinError(30,1.046944);
   hCCpi0inFV_stack_10->SetBinError(31,0.8102133);
   hCCpi0inFV_stack_10->SetBinError(32,0.8552677);
   hCCpi0inFV_stack_10->SetBinError(33,0.7844693);
   hCCpi0inFV_stack_10->SetBinError(34,0.8779761);
   hCCpi0inFV_stack_10->SetBinError(35,2.35505);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,4.588382);
   hNCinFV_stack_11->SetBinContent(2,4.603392);
   hNCinFV_stack_11->SetBinContent(3,5.929996);
   hNCinFV_stack_11->SetBinContent(4,9.609795);
   hNCinFV_stack_11->SetBinContent(5,12.55099);
   hNCinFV_stack_11->SetBinContent(6,10.04836);
   hNCinFV_stack_11->SetBinContent(7,12.32869);
   hNCinFV_stack_11->SetBinContent(8,8.273624);
   hNCinFV_stack_11->SetBinContent(9,11.94922);
   hNCinFV_stack_11->SetBinContent(10,11.6864);
   hNCinFV_stack_11->SetBinContent(11,13.90973);
   hNCinFV_stack_11->SetBinContent(12,17.11476);
   hNCinFV_stack_11->SetBinContent(13,13.41426);
   hNCinFV_stack_11->SetBinContent(14,9.716875);
   hNCinFV_stack_11->SetBinContent(15,7.463346);
   hNCinFV_stack_11->SetBinContent(16,7.085806);
   hNCinFV_stack_11->SetBinContent(17,5.159843);
   hNCinFV_stack_11->SetBinContent(18,2.996831);
   hNCinFV_stack_11->SetBinContent(19,3.78758);
   hNCinFV_stack_11->SetBinContent(20,2.314943);
   hNCinFV_stack_11->SetBinContent(21,4.824443);
   hNCinFV_stack_11->SetBinContent(22,2.31092);
   hNCinFV_stack_11->SetBinContent(23,4.415945);
   hNCinFV_stack_11->SetBinContent(24,2.989861);
   hNCinFV_stack_11->SetBinContent(25,3.011756);
   hNCinFV_stack_11->SetBinContent(26,1.44709);
   hNCinFV_stack_11->SetBinContent(27,2.444493);
   hNCinFV_stack_11->SetBinContent(28,2.577923);
   hNCinFV_stack_11->SetBinContent(29,2.142517);
   hNCinFV_stack_11->SetBinContent(30,3.281555);
   hNCinFV_stack_11->SetBinContent(31,2.681356);
   hNCinFV_stack_11->SetBinContent(32,2.907279);
   hNCinFV_stack_11->SetBinContent(33,1.462575);
   hNCinFV_stack_11->SetBinContent(34,1.636812);
   hNCinFV_stack_11->SetBinContent(35,19.15843);
   hNCinFV_stack_11->SetBinError(1,1.080488);
   hNCinFV_stack_11->SetBinError(2,1.058456);
   hNCinFV_stack_11->SetBinError(3,1.169069);
   hNCinFV_stack_11->SetBinError(4,1.533664);
   hNCinFV_stack_11->SetBinError(5,1.866646);
   hNCinFV_stack_11->SetBinError(6,1.576675);
   hNCinFV_stack_11->SetBinError(7,1.91133);
   hNCinFV_stack_11->SetBinError(8,1.423822);
   hNCinFV_stack_11->SetBinError(9,1.693629);
   hNCinFV_stack_11->SetBinError(10,1.704076);
   hNCinFV_stack_11->SetBinError(11,1.862863);
   hNCinFV_stack_11->SetBinError(12,2.078969);
   hNCinFV_stack_11->SetBinError(13,1.959689);
   hNCinFV_stack_11->SetBinError(14,1.601151);
   hNCinFV_stack_11->SetBinError(15,1.390179);
   hNCinFV_stack_11->SetBinError(16,1.56352);
   hNCinFV_stack_11->SetBinError(17,1.129113);
   hNCinFV_stack_11->SetBinError(18,0.8132972);
   hNCinFV_stack_11->SetBinError(19,0.9811864);
   hNCinFV_stack_11->SetBinError(20,0.7934533);
   hNCinFV_stack_11->SetBinError(21,1.262305);
   hNCinFV_stack_11->SetBinError(22,0.8627906);
   hNCinFV_stack_11->SetBinError(23,1.161112);
   hNCinFV_stack_11->SetBinError(24,1.018003);
   hNCinFV_stack_11->SetBinError(25,1.046307);
   hNCinFV_stack_11->SetBinError(26,0.5515336);
   hNCinFV_stack_11->SetBinError(27,0.9578154);
   hNCinFV_stack_11->SetBinError(28,1.159472);
   hNCinFV_stack_11->SetBinError(29,0.7346716);
   hNCinFV_stack_11->SetBinError(30,1.126961);
   hNCinFV_stack_11->SetBinError(31,0.9883836);
   hNCinFV_stack_11->SetBinError(32,1.202749);
   hNCinFV_stack_11->SetBinError(33,0.8069603);
   hNCinFV_stack_11->SetBinError(34,0.6901804);
   hNCinFV_stack_11->SetBinError(35,2.476573);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,7.114525);
   hnumuCCinFV_stack_12->SetBinContent(2,9.264071);
   hnumuCCinFV_stack_12->SetBinContent(3,8.026124);
   hnumuCCinFV_stack_12->SetBinContent(4,8.7645);
   hnumuCCinFV_stack_12->SetBinContent(5,9.679315);
   hnumuCCinFV_stack_12->SetBinContent(6,13.79708);
   hnumuCCinFV_stack_12->SetBinContent(7,14.69163);
   hnumuCCinFV_stack_12->SetBinContent(8,13.33995);
   hnumuCCinFV_stack_12->SetBinContent(9,14.45956);
   hnumuCCinFV_stack_12->SetBinContent(10,16.33344);
   hnumuCCinFV_stack_12->SetBinContent(11,17.33206);
   hnumuCCinFV_stack_12->SetBinContent(12,19.05241);
   hnumuCCinFV_stack_12->SetBinContent(13,16.54329);
   hnumuCCinFV_stack_12->SetBinContent(14,13.76374);
   hnumuCCinFV_stack_12->SetBinContent(15,10.74638);
   hnumuCCinFV_stack_12->SetBinContent(16,8.545538);
   hnumuCCinFV_stack_12->SetBinContent(17,6.202939);
   hnumuCCinFV_stack_12->SetBinContent(18,6.154089);
   hnumuCCinFV_stack_12->SetBinContent(19,5.289303);
   hnumuCCinFV_stack_12->SetBinContent(20,5.041756);
   hnumuCCinFV_stack_12->SetBinContent(21,3.137526);
   hnumuCCinFV_stack_12->SetBinContent(22,3.588594);
   hnumuCCinFV_stack_12->SetBinContent(23,3.452283);
   hnumuCCinFV_stack_12->SetBinContent(24,3.383551);
   hnumuCCinFV_stack_12->SetBinContent(25,3.418625);
   hnumuCCinFV_stack_12->SetBinContent(26,2.103301);
   hnumuCCinFV_stack_12->SetBinContent(27,1.323754);
   hnumuCCinFV_stack_12->SetBinContent(28,1.280915);
   hnumuCCinFV_stack_12->SetBinContent(29,1.182287);
   hnumuCCinFV_stack_12->SetBinContent(30,2.062042);
   hnumuCCinFV_stack_12->SetBinContent(31,1.6147);
   hnumuCCinFV_stack_12->SetBinContent(32,1.810571);
   hnumuCCinFV_stack_12->SetBinContent(33,1.607298);
   hnumuCCinFV_stack_12->SetBinContent(35,12.94885);
   hnumuCCinFV_stack_12->SetBinError(1,1.781651);
   hnumuCCinFV_stack_12->SetBinError(2,2.029186);
   hnumuCCinFV_stack_12->SetBinError(3,1.631079);
   hnumuCCinFV_stack_12->SetBinError(4,1.56542);
   hnumuCCinFV_stack_12->SetBinError(5,1.807493);
   hnumuCCinFV_stack_12->SetBinError(6,1.962672);
   hnumuCCinFV_stack_12->SetBinError(7,2.398194);
   hnumuCCinFV_stack_12->SetBinError(8,2.426251);
   hnumuCCinFV_stack_12->SetBinError(9,2.200165);
   hnumuCCinFV_stack_12->SetBinError(10,2.217901);
   hnumuCCinFV_stack_12->SetBinError(11,2.42528);
   hnumuCCinFV_stack_12->SetBinError(12,2.359735);
   hnumuCCinFV_stack_12->SetBinError(13,2.194867);
   hnumuCCinFV_stack_12->SetBinError(14,2.576894);
   hnumuCCinFV_stack_12->SetBinError(15,1.76836);
   hnumuCCinFV_stack_12->SetBinError(16,1.573098);
   hnumuCCinFV_stack_12->SetBinError(17,1.207094);
   hnumuCCinFV_stack_12->SetBinError(18,1.299518);
   hnumuCCinFV_stack_12->SetBinError(19,1.197728);
   hnumuCCinFV_stack_12->SetBinError(20,1.178848);
   hnumuCCinFV_stack_12->SetBinError(21,0.9725809);
   hnumuCCinFV_stack_12->SetBinError(22,1.005215);
   hnumuCCinFV_stack_12->SetBinError(23,2.282445);
   hnumuCCinFV_stack_12->SetBinError(24,0.98898);
   hnumuCCinFV_stack_12->SetBinError(25,1.003779);
   hnumuCCinFV_stack_12->SetBinError(26,0.7230709);
   hnumuCCinFV_stack_12->SetBinError(27,0.5560625);
   hnumuCCinFV_stack_12->SetBinError(28,0.526322);
   hnumuCCinFV_stack_12->SetBinError(29,0.5578077);
   hnumuCCinFV_stack_12->SetBinError(30,0.7638178);
   hnumuCCinFV_stack_12->SetBinError(31,0.6244848);
   hnumuCCinFV_stack_12->SetBinError(32,0.6052044);
   hnumuCCinFV_stack_12->SetBinError(33,0.6796534);
   hnumuCCinFV_stack_12->SetBinError(35,1.788776);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,1.516579);
   hnueCCinFV_stack_13->SetBinContent(2,2.16411);
   hnueCCinFV_stack_13->SetBinContent(3,3.193305);
   hnueCCinFV_stack_13->SetBinContent(4,1.524268);
   hnueCCinFV_stack_13->SetBinContent(5,1.005103);
   hnueCCinFV_stack_13->SetBinContent(6,1.76216);
   hnueCCinFV_stack_13->SetBinContent(7,0.9226685);
   hnueCCinFV_stack_13->SetBinContent(8,2.19892);
   hnueCCinFV_stack_13->SetBinContent(9,1.238581);
   hnueCCinFV_stack_13->SetBinContent(10,1.730409);
   hnueCCinFV_stack_13->SetBinContent(11,1.664028);
   hnueCCinFV_stack_13->SetBinContent(12,1.257024);
   hnueCCinFV_stack_13->SetBinContent(13,0.9702828);
   hnueCCinFV_stack_13->SetBinContent(14,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(15,1.077859);
   hnueCCinFV_stack_13->SetBinContent(16,1.529637);
   hnueCCinFV_stack_13->SetBinContent(17,1.190957);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(21,0.2781615);
   hnueCCinFV_stack_13->SetBinContent(22,0.4316896);
   hnueCCinFV_stack_13->SetBinContent(23,0.7104458);
   hnueCCinFV_stack_13->SetBinContent(24,0.3934356);
   hnueCCinFV_stack_13->SetBinContent(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.3041673);
   hnueCCinFV_stack_13->SetBinContent(28,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(31,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(32,0.270652);
   hnueCCinFV_stack_13->SetBinContent(33,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(35,3.622509);
   hnueCCinFV_stack_13->SetBinError(1,0.7438288);
   hnueCCinFV_stack_13->SetBinError(2,1.564231);
   hnueCCinFV_stack_13->SetBinError(3,1.224882);
   hnueCCinFV_stack_13->SetBinError(4,0.8565368);
   hnueCCinFV_stack_13->SetBinError(5,0.4499077);
   hnueCCinFV_stack_13->SetBinError(6,0.7529569);
   hnueCCinFV_stack_13->SetBinError(7,0.4621632);
   hnueCCinFV_stack_13->SetBinError(8,1.36049);
   hnueCCinFV_stack_13->SetBinError(9,0.6282462);
   hnueCCinFV_stack_13->SetBinError(10,0.7467074);
   hnueCCinFV_stack_13->SetBinError(11,0.7305857);
   hnueCCinFV_stack_13->SetBinError(12,0.595964);
   hnueCCinFV_stack_13->SetBinError(13,0.7770837);
   hnueCCinFV_stack_13->SetBinError(14,0.3401776);
   hnueCCinFV_stack_13->SetBinError(15,0.5726707);
   hnueCCinFV_stack_13->SetBinError(16,0.7496138);
   hnueCCinFV_stack_13->SetBinError(17,0.5474864);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.2998007);
   hnueCCinFV_stack_13->SetBinError(21,0.2781615);
   hnueCCinFV_stack_13->SetBinError(22,0.4316896);
   hnueCCinFV_stack_13->SetBinError(23,0.5078539);
   hnueCCinFV_stack_13->SetBinError(24,0.2781975);
   hnueCCinFV_stack_13->SetBinError(25,0.0001236221);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.3041673);
   hnueCCinFV_stack_13->SetBinError(28,0.1967154);
   hnueCCinFV_stack_13->SetBinError(31,0.3963213);
   hnueCCinFV_stack_13->SetBinError(32,0.270652);
   hnueCCinFV_stack_13->SetBinError(33,0.2463303);
   hnueCCinFV_stack_13->SetBinError(35,1.308931);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);
   hmcerror__11->SetBinContent(1,76.47935);
   hmcerror__11->SetBinContent(2,119.8442);
   hmcerror__11->SetBinContent(3,132.0698);
   hmcerror__11->SetBinContent(4,159.1527);
   hmcerror__11->SetBinContent(5,156.5547);
   hmcerror__11->SetBinContent(6,189.272);
   hmcerror__11->SetBinContent(7,205.7748);
   hmcerror__11->SetBinContent(8,185.0303);
   hmcerror__11->SetBinContent(9,229.3984);
   hmcerror__11->SetBinContent(10,288.9581);
   hmcerror__11->SetBinContent(11,309.7026);
   hmcerror__11->SetBinContent(12,342.7822);
   hmcerror__11->SetBinContent(13,317.4269);
   hmcerror__11->SetBinContent(14,219.9652);
   hmcerror__11->SetBinContent(15,132.7948);
   hmcerror__11->SetBinContent(16,90.1171);
   hmcerror__11->SetBinContent(17,64.73367);
   hmcerror__11->SetBinContent(18,54.09762);
   hmcerror__11->SetBinContent(19,43.4911);
   hmcerror__11->SetBinContent(20,43.16012);
   hmcerror__11->SetBinContent(21,40.12996);
   hmcerror__11->SetBinContent(22,33.99748);
   hmcerror__11->SetBinContent(23,28.8319);
   hmcerror__11->SetBinContent(24,26.06836);
   hmcerror__11->SetBinContent(25,19.07691);
   hmcerror__11->SetBinContent(26,18.1724);
   hmcerror__11->SetBinContent(27,22.60324);
   hmcerror__11->SetBinContent(28,12.0603);
   hmcerror__11->SetBinContent(29,15.29449);
   hmcerror__11->SetBinContent(30,17.21132);
   hmcerror__11->SetBinContent(31,12.8786);
   hmcerror__11->SetBinContent(32,11.26277);
   hmcerror__11->SetBinContent(33,10.21029);
   hmcerror__11->SetBinContent(34,9.252563);
   hmcerror__11->SetBinContent(35,91.60371);
   hmcerror__11->SetBinError(1,24.49534);
   hmcerror__11->SetBinError(2,34.09459);
   hmcerror__11->SetBinError(3,38.22884);
   hmcerror__11->SetBinError(4,43.88614);
   hmcerror__11->SetBinError(5,40.75984);
   hmcerror__11->SetBinError(6,44.81038);
   hmcerror__11->SetBinError(7,66.07589);
   hmcerror__11->SetBinError(8,48.87116);
   hmcerror__11->SetBinError(9,58.66796);
   hmcerror__11->SetBinError(10,78.2158);
   hmcerror__11->SetBinError(11,81.35291);
   hmcerror__11->SetBinError(12,88.92963);
   hmcerror__11->SetBinError(13,75.33552);
   hmcerror__11->SetBinError(14,55.35816);
   hmcerror__11->SetBinError(15,37.57573);
   hmcerror__11->SetBinError(16,25.93852);
   hmcerror__11->SetBinError(17,22.5107);
   hmcerror__11->SetBinError(18,19.83289);
   hmcerror__11->SetBinError(19,17.694);
   hmcerror__11->SetBinError(20,17.86528);
   hmcerror__11->SetBinError(21,15.98904);
   hmcerror__11->SetBinError(22,14.2696);
   hmcerror__11->SetBinError(23,16.03909);
   hmcerror__11->SetBinError(24,11.83218);
   hmcerror__11->SetBinError(25,11.78163);
   hmcerror__11->SetBinError(26,11.65036);
   hmcerror__11->SetBinError(27,14.29274);
   hmcerror__11->SetBinError(28,8.865938);
   hmcerror__11->SetBinError(29,13.32891);
   hmcerror__11->SetBinError(30,11.44737);
   hmcerror__11->SetBinError(31,8.510313);
   hmcerror__11->SetBinError(32,11.74893);
   hmcerror__11->SetBinError(33,7.691688);
   hmcerror__11->SetBinError(34,9.278486);
   hmcerror__11->SetBinError(35,30.07605);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[34] = {
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
   Double_t _fy3013[34] = {
   90,
   118,
   131,
   146,
   167,
   198,
   187,
   208,
   261,
   295,
   331,
   366,
   362,
   176,
   146,
   84,
   73,
   58,
   47,
   30,
   36,
   44,
   35,
   23,
   17,
   24,
   13,
   13,
   13,
   10,
   16,
   13,
   8,
   5};
   Double_t _felx3013[34] = {
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
   Double_t _fely3013[34] = {
   9.6093,
   10.86278,
   11.44552,
   12.08305,
   12.92285,
   14.07125,
   13.67479,
   14.42221,
   16.15549,
   17.17556,
   18.19341,
   19.13113,
   19.0263,
   13.2665,
   12.08305,
   9.2886,
   8.6693,
   7.7446,
   6.9882,
   5.6197,
   6.1381,
   6.7671,
   6.0548,
   4.9457,
   4.2835,
   5.0476,
   3.77763,
   3.77763,
   3.77763,
   3.34883,
   4.1628,
   3.77763,
   3.0307,
   2.48995};
   Double_t _fehx3013[34] = {
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
   Double_t _fehy3013[34] = {
   9.4079,
   10.86278,
   11.44552,
   12.08305,
   12.92285,
   14.07125,
   13.67479,
   14.42221,
   16.15549,
   17.17556,
   18.19341,
   19.13113,
   19.0263,
   13.2665,
   12.08305,
   9.0869,
   8.4672,
   7.5415,
   6.7839,
   5.4117,
   5.9318,
   6.5623,
   5.8483,
   4.7346,
   4.0673,
   4.837,
   3.5552,
   3.5552,
   3.5552,
   3.1179,
   3.9454,
   3.5552,
   2.7896,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,440);
   Graph_Graph3013->SetMinimum(2.259045);
   Graph_Graph3013->SetMaximum(423.3932);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.0/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3744.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 96.8","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 475.1","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 467.1","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  108.4","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.0","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1141.4","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  231.7","F");

   ci = 1480;
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

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 556.8","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 212.7","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 254.1","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 29.2","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[34] = {
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
   Double_t _fy3014[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[34] = {
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
   Double_t _fely3014[34] = {
   0.3202869,
   0.2844909,
   0.2894593,
   0.2757487,
   0.2603553,
   0.2367512,
   0.3211078,
   0.2641252,
   0.2557471,
   0.2706822,
   0.2626807,
   0.2594348,
   0.2373318,
   0.2516678,
   0.2829609,
   0.2878313,
   0.3477433,
   0.366613,
   0.4068419,
   0.4139302,
   0.3984315,
   0.4197252,
   0.5562968,
   0.4538904,
   0.6175857,
   0.6411015,
   0.6323312,
   0.735134,
   0.8714843,
   0.665107,
   0.6608105,
   1.043165,
   0.7533272,
   1.002802};
   Double_t _fehx3014[34] = {
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
   Double_t _fehy3014[34] = {
   0.3202869,
   0.2844909,
   0.2894593,
   0.2757487,
   0.2603553,
   0.2367512,
   0.3211078,
   0.2641252,
   0.2557471,
   0.2706822,
   0.2626807,
   0.2594348,
   0.2373318,
   0.2516678,
   0.2829609,
   0.2878313,
   0.3477433,
   0.366613,
   0.4068419,
   0.4139302,
   0.3984315,
   0.4197252,
   0.5562968,
   0.4538904,
   0.6175857,
   0.6411015,
   0.6323312,
   0.735134,
   0.8714843,
   0.665107,
   0.6608105,
   1.043165,
   0.7533272,
   1.002802};
   grae = new TGraphAsymmErrors(34,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,440);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[34] = {
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
   Double_t _fy3015[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[34] = {
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
   Double_t _fely3015[34] = {
   0.1738613,
   0.1846682,
   0.1737096,
   0.1747208,
   0.184246,
   0.1678258,
   0.1875067,
   0.1962829,
   0.2054238,
   0.2074709,
   0.2151359,
   0.2114451,
   0.2096105,
   0.2164015,
   0.2128826,
   0.2215302,
   0.250197,
   0.2458989,
   0.2300426,
   0.2417318,
   0.2175404,
   0.2353212,
   0.2790713,
   0.245416,
   0.2648706,
   0.2644913,
   0.2326612,
   0.2973141,
   0.2595749,
   0.244965,
   0.2896629,
   0.2975105,
   0.309822,
   0.3476861};
   Double_t _fehx3015[34] = {
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
   Double_t _fehy3015[34] = {
   0.1738613,
   0.1846682,
   0.1737096,
   0.1747208,
   0.184246,
   0.1678258,
   0.1875067,
   0.1962829,
   0.2054238,
   0.2074709,
   0.2151359,
   0.2114451,
   0.2096105,
   0.2164015,
   0.2128826,
   0.2215302,
   0.250197,
   0.2458989,
   0.2300426,
   0.2417318,
   0.2175404,
   0.2353212,
   0.2790713,
   0.245416,
   0.2648706,
   0.2644913,
   0.2326612,
   0.2973141,
   0.2595749,
   0.244965,
   0.2896629,
   0.2975105,
   0.309822,
   0.3476861};
   grae = new TGraphAsymmErrors(34,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,440);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[34] = {
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
   Double_t _fy3016[34] = {
   1.176788,
   0.9846116,
   0.9918994,
   0.9173581,
   1.06672,
   1.046113,
   0.9087605,
   1.12414,
   1.137759,
   1.020909,
   1.068767,
   1.067733,
   1.14042,
   0.8001265,
   1.099441,
   0.9321206,
   1.127697,
   1.072136,
   1.080681,
   0.6950861,
   0.8970854,
   1.294214,
   1.213933,
   0.8822958,
   0.8911296,
   1.320684,
   0.5751387,
   1.077917,
   0.849979,
   0.581013,
   1.242371,
   1.154246,
   0.7835234,
   0.5403908};
   Double_t _felx3016[34] = {
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
   Double_t _fely3016[34] = {
   0.1256457,
   0.09064085,
   0.08666266,
   0.0759211,
   0.08254528,
   0.07434404,
   0.06645515,
   0.07794511,
   0.0704255,
   0.05943964,
   0.05874475,
   0.05581131,
   0.05993914,
   0.06031181,
   0.09099039,
   0.1030726,
   0.1339226,
   0.1431597,
   0.1606812,
   0.1302058,
   0.1529556,
   0.1990471,
   0.2100035,
   0.1897204,
   0.2245385,
   0.2777618,
   0.1671278,
   0.3132285,
   0.2469928,
   0.1945714,
   0.323234,
   0.3354087,
   0.296828,
   0.2691092};
   Double_t _fehx3016[34] = {
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
   Double_t _fehy3016[34] = {
   0.1230123,
   0.09064085,
   0.08666266,
   0.0759211,
   0.08254528,
   0.07434404,
   0.06645515,
   0.07794511,
   0.0704255,
   0.05943964,
   0.05874475,
   0.05581131,
   0.05993914,
   0.06031181,
   0.09099039,
   0.1008344,
   0.1308005,
   0.1394054,
   0.1559837,
   0.1253866,
   0.1478148,
   0.1930231,
   0.2028413,
   0.1816225,
   0.2132054,
   0.2661728,
   0.1572872,
   0.2947853,
   0.2324497,
   0.181154,
   0.3063532,
   0.3156595,
   0.2732146,
   0.2389219};
   grae = new TGraphAsymmErrors(34,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,440);
   Graph_Graph3016->SetMinimum(0.1397241);
   Graph_Graph3016->SetMaximum(1.718414);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_mass_all",34,0,400);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
