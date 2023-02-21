#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 23:31:33 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-2.42,3.957692,267.6011);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmc__19->SetBinContent(1,115.6831);
   hmc__19->SetBinContent(2,112.4395);
   hmc__19->SetBinContent(3,112.607);
   hmc__19->SetBinContent(4,104.6504);
   hmc__19->SetBinContent(5,89.26664);
   hmc__19->SetBinContent(6,76.05579);
   hmc__19->SetBinContent(7,84.45073);
   hmc__19->SetBinContent(8,84.16745);
   hmc__19->SetBinContent(9,90.46418);
   hmc__19->SetBinContent(10,91.28269);
   hmc__19->SetBinContent(11,98.52405);
   hmc__19->SetBinContent(12,105.563);
   hmc__19->SetBinContent(13,103.9893);
   hmc__19->SetBinContent(14,98.28613);
   hmc__19->SetBinContent(15,94.74422);
   hmc__19->SetBinContent(16,101.2208);
   hmc__19->SetBinContent(17,83.5302);
   hmc__19->SetBinContent(18,86.70135);
   hmc__19->SetBinContent(19,82.33292);
   hmc__19->SetBinContent(20,76.39764);
   hmc__19->SetBinContent(21,91.05253);
   hmc__19->SetBinContent(22,92.51272);
   hmc__19->SetBinContent(23,97.6915);
   hmc__19->SetBinContent(24,103.7048);
   hmc__19->SetBinContent(25,111.7385);
   hmc__19->SetBinError(1,41.79941);
   hmc__19->SetBinError(2,43.26853);
   hmc__19->SetBinError(3,39.93555);
   hmc__19->SetBinError(4,41.06609);
   hmc__19->SetBinError(5,34.40591);
   hmc__19->SetBinError(6,27.49333);
   hmc__19->SetBinError(7,34.10729);
   hmc__19->SetBinError(8,34.13595);
   hmc__19->SetBinError(9,35.44505);
   hmc__19->SetBinError(10,35.05817);
   hmc__19->SetBinError(11,37.62467);
   hmc__19->SetBinError(12,42.23573);
   hmc__19->SetBinError(13,35.43466);
   hmc__19->SetBinError(14,37.21379);
   hmc__19->SetBinError(15,42.99428);
   hmc__19->SetBinError(16,39.86643);
   hmc__19->SetBinError(17,33.4019);
   hmc__19->SetBinError(18,34.97895);
   hmc__19->SetBinError(19,37.11422);
   hmc__19->SetBinError(20,26.52315);
   hmc__19->SetBinError(21,37.00735);
   hmc__19->SetBinError(22,36.51731);
   hmc__19->SetBinError(23,39.77528);
   hmc__19->SetBinError(24,39.49259);
   hmc__19->SetBinError(25,39.10689);
   hmc__19->SetBinError(26,0.3895343);
   hmc__19->SetMinimum(-2.42);
   hmc__19->SetMaximum(254.1);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,-3.15,3.15);
   hs7_stack_7->SetMinimum(-8.304323e-09);
   hs7_stack_7->SetMaximum(121.4673);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.671361);
   hbadmatch_stack_1->SetBinContent(2,2.528117);
   hbadmatch_stack_1->SetBinContent(3,1.719484);
   hbadmatch_stack_1->SetBinContent(4,2.838571);
   hbadmatch_stack_1->SetBinContent(5,3.643593);
   hbadmatch_stack_1->SetBinContent(6,1.201205);
   hbadmatch_stack_1->SetBinContent(7,1.396256);
   hbadmatch_stack_1->SetBinContent(8,3.817755);
   hbadmatch_stack_1->SetBinContent(9,1.982772);
   hbadmatch_stack_1->SetBinContent(10,1.94006);
   hbadmatch_stack_1->SetBinContent(11,2.165685);
   hbadmatch_stack_1->SetBinContent(12,2.051985);
   hbadmatch_stack_1->SetBinContent(13,1.858822);
   hbadmatch_stack_1->SetBinContent(14,1.854141);
   hbadmatch_stack_1->SetBinContent(15,1.608988);
   hbadmatch_stack_1->SetBinContent(16,1.4701);
   hbadmatch_stack_1->SetBinContent(17,2.054508);
   hbadmatch_stack_1->SetBinContent(18,3.739521);
   hbadmatch_stack_1->SetBinContent(19,2.572875);
   hbadmatch_stack_1->SetBinContent(20,2.827902);
   hbadmatch_stack_1->SetBinContent(21,1.670771);
   hbadmatch_stack_1->SetBinContent(22,0.8929317);
   hbadmatch_stack_1->SetBinContent(23,2.898504);
   hbadmatch_stack_1->SetBinContent(24,1.960124);
   hbadmatch_stack_1->SetBinContent(25,1.464193);
   hbadmatch_stack_1->SetBinError(1,0.9388691);
   hbadmatch_stack_1->SetBinError(2,0.8904539);
   hbadmatch_stack_1->SetBinError(3,0.6696508);
   hbadmatch_stack_1->SetBinError(4,0.8479636);
   hbadmatch_stack_1->SetBinError(5,0.9358931);
   hbadmatch_stack_1->SetBinError(6,0.5701502);
   hbadmatch_stack_1->SetBinError(7,0.6307881);
   hbadmatch_stack_1->SetBinError(8,1.397398);
   hbadmatch_stack_1->SetBinError(9,0.7189015);
   hbadmatch_stack_1->SetBinError(10,0.9280925);
   hbadmatch_stack_1->SetBinError(11,0.7401589);
   hbadmatch_stack_1->SetBinError(12,0.7395967);
   hbadmatch_stack_1->SetBinError(13,0.6760187);
   hbadmatch_stack_1->SetBinError(14,0.7027089);
   hbadmatch_stack_1->SetBinError(15,0.6801404);
   hbadmatch_stack_1->SetBinError(16,0.7176529);
   hbadmatch_stack_1->SetBinError(17,0.7236789);
   hbadmatch_stack_1->SetBinError(18,2.043952);
   hbadmatch_stack_1->SetBinError(19,0.9684204);
   hbadmatch_stack_1->SetBinError(20,0.8903507);
   hbadmatch_stack_1->SetBinError(21,0.6124086);
   hbadmatch_stack_1->SetBinError(22,0.4112692);
   hbadmatch_stack_1->SetBinError(23,0.9778902);
   hbadmatch_stack_1->SetBinError(24,0.8406236);
   hbadmatch_stack_1->SetBinError(25,0.6096255);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,7.2437);
   hext_stack_2->SetBinContent(2,6.482403);
   hext_stack_2->SetBinContent(3,11.93971);
   hext_stack_2->SetBinContent(4,9.51889);
   hext_stack_2->SetBinContent(5,6.235799);
   hext_stack_2->SetBinContent(6,11.54748);
   hext_stack_2->SetBinContent(7,10.80212);
   hext_stack_2->SetBinContent(8,8.823797);
   hext_stack_2->SetBinContent(9,8.235662);
   hext_stack_2->SetBinContent(10,9.690475);
   hext_stack_2->SetBinContent(11,5.42701);
   hext_stack_2->SetBinContent(12,4.94539);
   hext_stack_2->SetBinContent(13,6.221437);
   hext_stack_2->SetBinContent(14,3.159);
   hext_stack_2->SetBinContent(15,3.897177);
   hext_stack_2->SetBinContent(16,4.703194);
   hext_stack_2->SetBinContent(17,2.185808);
   hext_stack_2->SetBinContent(18,8.299094);
   hext_stack_2->SetBinContent(19,8.250023);
   hext_stack_2->SetBinContent(20,9.93985);
   hext_stack_2->SetBinContent(21,12.44728);
   hext_stack_2->SetBinContent(22,7.511847);
   hext_stack_2->SetBinContent(23,5.415421);
   hext_stack_2->SetBinContent(24,3.57278);
   hext_stack_2->SetBinContent(25,11.93253);
   hext_stack_2->SetBinError(1,2.011201);
   hext_stack_2->SetBinError(2,1.666529);
   hext_stack_2->SetBinError(3,2.485137);
   hext_stack_2->SetBinError(4,2.21736);
   hext_stack_2->SetBinError(5,1.611538);
   hext_stack_2->SetBinError(6,2.368159);
   hext_stack_2->SetBinError(7,2.395835);
   hext_stack_2->SetBinError(8,1.907911);
   hext_stack_2->SetBinError(9,2.023203);
   hext_stack_2->SetBinError(10,2.199014);
   hext_stack_2->SetBinError(11,1.549687);
   hext_stack_2->SetBinError(12,1.405318);
   hext_stack_2->SetBinError(13,1.731894);
   hext_stack_2->SetBinError(14,1.152637);
   hext_stack_2->SetBinError(15,1.182339);
   hext_stack_2->SetBinError(16,1.389163);
   hext_stack_2->SetBinError(17,1.006415);
   hext_stack_2->SetBinError(18,2.102551);
   hext_stack_2->SetBinError(19,1.921184);
   hext_stack_2->SetBinError(20,2.16324);
   hext_stack_2->SetBinError(21,2.476698);
   hext_stack_2->SetBinError(22,1.903048);
   hext_stack_2->SetBinError(23,1.570863);
   hext_stack_2->SetBinError(24,1.136966);
   hext_stack_2->SetBinError(25,2.525293);
   hext_stack_2->SetEntries(428);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.2516114);
   hdirt_stack_3->SetBinContent(2,0.3381872);
   hdirt_stack_3->SetBinContent(3,0.6515772);
   hdirt_stack_3->SetBinContent(4,0.4377912);
   hdirt_stack_3->SetBinContent(5,0.5570828);
   hdirt_stack_3->SetBinContent(6,0.4377912);
   hdirt_stack_3->SetBinContent(7,0.4809298);
   hdirt_stack_3->SetBinContent(8,0.8144459);
   hdirt_stack_3->SetBinContent(10,1.3681);
   hdirt_stack_3->SetBinContent(11,0.4048706);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.3635739);
   hdirt_stack_3->SetBinContent(15,0.4762587);
   hdirt_stack_3->SetBinContent(16,0.3569671);
   hdirt_stack_3->SetBinContent(18,0.6445967);
   hdirt_stack_3->SetBinContent(19,0.9387262);
   hdirt_stack_3->SetBinContent(20,0.4950385);
   hdirt_stack_3->SetBinContent(21,0.5758626);
   hdirt_stack_3->SetBinContent(22,0.590017);
   hdirt_stack_3->SetBinContent(23,0.4007975);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinContent(25,0.2967022);
   hdirt_stack_3->SetBinError(1,0.2516114);
   hdirt_stack_3->SetBinError(2,0.3381872);
   hdirt_stack_3->SetBinError(3,0.4051801);
   hdirt_stack_3->SetBinError(4,0.3095651);
   hdirt_stack_3->SetBinError(5,0.4028472);
   hdirt_stack_3->SetBinError(6,0.3095651);
   hdirt_stack_3->SetBinError(7,0.341434);
   hdirt_stack_3->SetBinError(8,0.4978001);
   hdirt_stack_3->SetBinError(10,0.9804616);
   hdirt_stack_3->SetBinError(11,0.2872316);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.2623873);
   hdirt_stack_3->SetBinError(15,0.3652866);
   hdirt_stack_3->SetBinError(16,0.258803);
   hdirt_stack_3->SetBinError(18,0.3782472);
   hdirt_stack_3->SetBinError(19,0.4856638);
   hdirt_stack_3->SetBinError(20,0.2933304);
   hdirt_stack_3->SetBinError(21,0.3389606);
   hdirt_stack_3->SetBinError(22,0.4557601);
   hdirt_stack_3->SetBinError(23,0.4007975);
   hdirt_stack_3->SetBinError(24,0.1380715);
   hdirt_stack_3->SetBinError(25,0.2103032);
   hdirt_stack_3->SetEntries(50);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,2.219231);
   houtFV_stack_4->SetBinContent(2,3.766998);
   houtFV_stack_4->SetBinContent(3,3.40258);
   houtFV_stack_4->SetBinContent(4,4.654305);
   houtFV_stack_4->SetBinContent(5,4.202414);
   houtFV_stack_4->SetBinContent(6,2.466176);
   houtFV_stack_4->SetBinContent(7,4.589283);
   houtFV_stack_4->SetBinContent(8,3.443048);
   houtFV_stack_4->SetBinContent(9,2.414247);
   houtFV_stack_4->SetBinContent(10,3.706126);
   houtFV_stack_4->SetBinContent(11,3.416087);
   houtFV_stack_4->SetBinContent(12,1.682471);
   houtFV_stack_4->SetBinContent(13,2.286393);
   houtFV_stack_4->SetBinContent(14,2.341823);
   houtFV_stack_4->SetBinContent(15,3.539031);
   houtFV_stack_4->SetBinContent(16,5.959075);
   houtFV_stack_4->SetBinContent(17,4.254211);
   houtFV_stack_4->SetBinContent(18,3.106581);
   houtFV_stack_4->SetBinContent(19,1.820541);
   houtFV_stack_4->SetBinContent(20,3.544535);
   houtFV_stack_4->SetBinContent(21,2.788432);
   houtFV_stack_4->SetBinContent(22,5.452682);
   houtFV_stack_4->SetBinContent(23,4.117903);
   houtFV_stack_4->SetBinContent(24,3.886023);
   houtFV_stack_4->SetBinContent(25,3.762144);
   houtFV_stack_4->SetBinError(1,0.729864);
   houtFV_stack_4->SetBinError(2,1.036247);
   houtFV_stack_4->SetBinError(3,0.9280197);
   houtFV_stack_4->SetBinError(4,1.09588);
   houtFV_stack_4->SetBinError(5,1.006033);
   houtFV_stack_4->SetBinError(6,0.8150658);
   houtFV_stack_4->SetBinError(7,1.059889);
   houtFV_stack_4->SetBinError(8,0.8543324);
   houtFV_stack_4->SetBinError(9,0.7175397);
   houtFV_stack_4->SetBinError(10,0.988568);
   houtFV_stack_4->SetBinError(11,0.8774191);
   houtFV_stack_4->SetBinError(12,0.5855999);
   houtFV_stack_4->SetBinError(13,0.7431804);
   houtFV_stack_4->SetBinError(14,0.707608);
   houtFV_stack_4->SetBinError(15,0.9344892);
   houtFV_stack_4->SetBinError(16,1.230446);
   houtFV_stack_4->SetBinError(17,0.9905192);
   houtFV_stack_4->SetBinError(18,0.7702535);
   houtFV_stack_4->SetBinError(19,0.639621);
   houtFV_stack_4->SetBinError(20,0.9341041);
   houtFV_stack_4->SetBinError(21,0.7708348);
   houtFV_stack_4->SetBinError(22,1.15267);
   houtFV_stack_4->SetBinError(23,1.009109);
   houtFV_stack_4->SetBinError(24,0.9787046);
   houtFV_stack_4->SetBinError(25,0.962633);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1096227);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1802125);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.08099589);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.09772988);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1975433);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1395452);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2765294);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2816334);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.09098216);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3900478);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02258423);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.622445);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.04281797);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.3593129);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.361499);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2103382);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2825949);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1760115);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1962207);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.06043404);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06402858);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1310994);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.05727274);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06530788);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1050182);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1060845);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1642335);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1815061);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.0519597);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1794586);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.01677252);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2407227);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03163788);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2059798);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1862365);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1342644);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2562185);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1083851);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.08375432);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.03822372);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.3689482);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5790829);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4414236);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4260095);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5778781);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3157623);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3834465);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3221985);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6078475);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5298305);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4178693);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6021284);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2117673);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3113351);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7323583);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.294121);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.5472283);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3249296);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2473222);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5406011);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3893967);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3262599);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.6145391);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.3983932);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.4344214);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1207082);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2132049);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1877939);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1682982);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2402799);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1350036);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2099526);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1513864);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2516987);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1936244);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1447883);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2548882);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1351855);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.151891);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.252729);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.09191268);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1915762);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1756586);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.09132236);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2271531);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1901991);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.09292829);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3055891);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1715697);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1584042);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,38.34391);
   hNCpi0inFVres_stack_7->SetBinContent(2,39.08023);
   hNCpi0inFVres_stack_7->SetBinContent(3,40.16721);
   hNCpi0inFVres_stack_7->SetBinContent(4,44.97421);
   hNCpi0inFVres_stack_7->SetBinContent(5,34.5815);
   hNCpi0inFVres_stack_7->SetBinContent(6,28.93773);
   hNCpi0inFVres_stack_7->SetBinContent(7,36.69148);
   hNCpi0inFVres_stack_7->SetBinContent(8,33.72031);
   hNCpi0inFVres_stack_7->SetBinContent(9,36.47358);
   hNCpi0inFVres_stack_7->SetBinContent(10,36.82503);
   hNCpi0inFVres_stack_7->SetBinContent(11,39.50769);
   hNCpi0inFVres_stack_7->SetBinContent(12,36.42249);
   hNCpi0inFVres_stack_7->SetBinContent(13,34.91997);
   hNCpi0inFVres_stack_7->SetBinContent(14,36.50455);
   hNCpi0inFVres_stack_7->SetBinContent(15,38.81968);
   hNCpi0inFVres_stack_7->SetBinContent(16,39.90264);
   hNCpi0inFVres_stack_7->SetBinContent(17,36.19343);
   hNCpi0inFVres_stack_7->SetBinContent(18,33.44131);
   hNCpi0inFVres_stack_7->SetBinContent(19,29.76896);
   hNCpi0inFVres_stack_7->SetBinContent(20,29.97518);
   hNCpi0inFVres_stack_7->SetBinContent(21,35.38773);
   hNCpi0inFVres_stack_7->SetBinContent(22,39.24708);
   hNCpi0inFVres_stack_7->SetBinContent(23,39.6964);
   hNCpi0inFVres_stack_7->SetBinContent(24,38.63582);
   hNCpi0inFVres_stack_7->SetBinContent(25,35.92486);
   hNCpi0inFVres_stack_7->SetBinError(1,1.866004);
   hNCpi0inFVres_stack_7->SetBinError(2,1.910218);
   hNCpi0inFVres_stack_7->SetBinError(3,1.846459);
   hNCpi0inFVres_stack_7->SetBinError(4,2.268806);
   hNCpi0inFVres_stack_7->SetBinError(5,1.871066);
   hNCpi0inFVres_stack_7->SetBinError(6,1.490629);
   hNCpi0inFVres_stack_7->SetBinError(7,1.939344);
   hNCpi0inFVres_stack_7->SetBinError(8,1.785825);
   hNCpi0inFVres_stack_7->SetBinError(9,1.829569);
   hNCpi0inFVres_stack_7->SetBinError(10,1.791186);
   hNCpi0inFVres_stack_7->SetBinError(11,2.057004);
   hNCpi0inFVres_stack_7->SetBinError(12,1.736104);
   hNCpi0inFVres_stack_7->SetBinError(13,1.71899);
   hNCpi0inFVres_stack_7->SetBinError(14,1.803861);
   hNCpi0inFVres_stack_7->SetBinError(15,1.866428);
   hNCpi0inFVres_stack_7->SetBinError(16,2.021179);
   hNCpi0inFVres_stack_7->SetBinError(17,1.906874);
   hNCpi0inFVres_stack_7->SetBinError(18,1.621833);
   hNCpi0inFVres_stack_7->SetBinError(19,1.802109);
   hNCpi0inFVres_stack_7->SetBinError(20,1.599784);
   hNCpi0inFVres_stack_7->SetBinError(21,1.739545);
   hNCpi0inFVres_stack_7->SetBinError(22,1.884027);
   hNCpi0inFVres_stack_7->SetBinError(23,1.957719);
   hNCpi0inFVres_stack_7->SetBinError(24,1.863372);
   hNCpi0inFVres_stack_7->SetBinError(25,1.851987);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.73766);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.261606);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.204137);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.722756);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.906761);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.243607);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.869499);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.950012);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.005798);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.588867);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.23852);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.655667);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.14869);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.11584);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.9762);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.708987);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.800775);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.382989);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.371847);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.644503);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.355259);
   hNCpi0inFVdis_stack_8->SetBinContent(22,6.705077);
   hNCpi0inFVdis_stack_8->SetBinContent(23,8.855325);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.00152);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.165646);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.156295);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8677034);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.073139);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.029284);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9613548);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9491158);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8122167);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8084593);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.060543);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8634265);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.186279);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.02337);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7490768);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.026439);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8990518);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9711697);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8766077);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7754807);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7626769);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9359354);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9153455);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6644669);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.9312718);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.099115);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.156295);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05527143);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.08385543);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03191456);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.0681115);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1099207);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,18.16874);
   hCCpi0inFV_stack_10->SetBinContent(2,18.28214);
   hCCpi0inFV_stack_10->SetBinContent(3,17.82908);
   hCCpi0inFV_stack_10->SetBinContent(4,18.78459);
   hCCpi0inFV_stack_10->SetBinContent(5,18.47181);
   hCCpi0inFV_stack_10->SetBinContent(6,7.924168);
   hCCpi0inFV_stack_10->SetBinContent(7,11.12223);
   hCCpi0inFV_stack_10->SetBinContent(8,10.51585);
   hCCpi0inFV_stack_10->SetBinContent(9,16.35216);
   hCCpi0inFV_stack_10->SetBinContent(10,13.97029);
   hCCpi0inFV_stack_10->SetBinContent(11,14.99145);
   hCCpi0inFV_stack_10->SetBinContent(12,18.17027);
   hCCpi0inFV_stack_10->SetBinContent(13,19.57539);
   hCCpi0inFV_stack_10->SetBinContent(14,14.44875);
   hCCpi0inFV_stack_10->SetBinContent(15,14.68156);
   hCCpi0inFV_stack_10->SetBinContent(16,19.78637);
   hCCpi0inFV_stack_10->SetBinContent(17,12.56034);
   hCCpi0inFV_stack_10->SetBinContent(18,12.21023);
   hCCpi0inFV_stack_10->SetBinContent(19,14.1104);
   hCCpi0inFV_stack_10->SetBinContent(20,9.477987);
   hCCpi0inFV_stack_10->SetBinContent(21,13.09231);
   hCCpi0inFV_stack_10->SetBinContent(22,13.95083);
   hCCpi0inFV_stack_10->SetBinContent(23,15.74403);
   hCCpi0inFV_stack_10->SetBinContent(24,20.63087);
   hCCpi0inFV_stack_10->SetBinContent(25,18.93262);
   hCCpi0inFV_stack_10->SetBinError(1,2.109597);
   hCCpi0inFV_stack_10->SetBinError(2,2.19449);
   hCCpi0inFV_stack_10->SetBinError(3,2.085418);
   hCCpi0inFV_stack_10->SetBinError(4,2.180756);
   hCCpi0inFV_stack_10->SetBinError(5,2.204128);
   hCCpi0inFV_stack_10->SetBinError(6,1.417258);
   hCCpi0inFV_stack_10->SetBinError(7,1.721572);
   hCCpi0inFV_stack_10->SetBinError(8,1.601873);
   hCCpi0inFV_stack_10->SetBinError(9,2.057747);
   hCCpi0inFV_stack_10->SetBinError(10,1.866697);
   hCCpi0inFV_stack_10->SetBinError(11,1.94202);
   hCCpi0inFV_stack_10->SetBinError(12,2.16693);
   hCCpi0inFV_stack_10->SetBinError(13,2.229878);
   hCCpi0inFV_stack_10->SetBinError(14,1.901151);
   hCCpi0inFV_stack_10->SetBinError(15,1.879045);
   hCCpi0inFV_stack_10->SetBinError(16,2.206629);
   hCCpi0inFV_stack_10->SetBinError(17,1.732353);
   hCCpi0inFV_stack_10->SetBinError(18,1.715233);
   hCCpi0inFV_stack_10->SetBinError(19,1.9177);
   hCCpi0inFV_stack_10->SetBinError(20,1.532385);
   hCCpi0inFV_stack_10->SetBinError(21,1.753953);
   hCCpi0inFV_stack_10->SetBinError(22,1.917221);
   hCCpi0inFV_stack_10->SetBinError(23,2.008398);
   hCCpi0inFV_stack_10->SetBinError(24,2.313717);
   hCCpi0inFV_stack_10->SetBinError(25,2.178808);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,10.84495);
   hNCinFV_stack_11->SetBinContent(2,9.08357);
   hNCinFV_stack_11->SetBinContent(3,14.73628);
   hNCinFV_stack_11->SetBinContent(4,7.919808);
   hNCinFV_stack_11->SetBinContent(5,9.09012);
   hNCinFV_stack_11->SetBinContent(6,8.962031);
   hNCinFV_stack_11->SetBinContent(7,7.466778);
   hNCinFV_stack_11->SetBinContent(8,9.239936);
   hNCinFV_stack_11->SetBinContent(9,9.681863);
   hNCinFV_stack_11->SetBinContent(10,7.225459);
   hNCinFV_stack_11->SetBinContent(11,7.489451);
   hNCinFV_stack_11->SetBinContent(12,11.06127);
   hNCinFV_stack_11->SetBinContent(13,12.58416);
   hNCinFV_stack_11->SetBinContent(14,10.37481);
   hNCinFV_stack_11->SetBinContent(15,10.82103);
   hNCinFV_stack_11->SetBinContent(16,9.961687);
   hNCinFV_stack_11->SetBinContent(17,9.060351);
   hNCinFV_stack_11->SetBinContent(18,11.67617);
   hNCinFV_stack_11->SetBinContent(19,9.180311);
   hNCinFV_stack_11->SetBinContent(20,8.725462);
   hNCinFV_stack_11->SetBinContent(21,9.783426);
   hNCinFV_stack_11->SetBinContent(22,10.40818);
   hNCinFV_stack_11->SetBinContent(23,11.01121);
   hNCinFV_stack_11->SetBinContent(24,13.05021);
   hNCinFV_stack_11->SetBinContent(25,8.193954);
   hNCinFV_stack_11->SetBinError(1,1.672875);
   hNCinFV_stack_11->SetBinError(2,1.616058);
   hNCinFV_stack_11->SetBinError(3,2.239858);
   hNCinFV_stack_11->SetBinError(4,1.324549);
   hNCinFV_stack_11->SetBinError(5,1.80342);
   hNCinFV_stack_11->SetBinError(6,1.785728);
   hNCinFV_stack_11->SetBinError(7,1.389585);
   hNCinFV_stack_11->SetBinError(8,1.774919);
   hNCinFV_stack_11->SetBinError(9,1.497794);
   hNCinFV_stack_11->SetBinError(10,1.3396);
   hNCinFV_stack_11->SetBinError(11,1.424294);
   hNCinFV_stack_11->SetBinError(12,1.867798);
   hNCinFV_stack_11->SetBinError(13,2.120294);
   hNCinFV_stack_11->SetBinError(14,1.78329);
   hNCinFV_stack_11->SetBinError(15,1.734889);
   hNCinFV_stack_11->SetBinError(16,1.765182);
   hNCinFV_stack_11->SetBinError(17,1.634146);
   hNCinFV_stack_11->SetBinError(18,1.953837);
   hNCinFV_stack_11->SetBinError(19,1.68916);
   hNCinFV_stack_11->SetBinError(20,1.596861);
   hNCinFV_stack_11->SetBinError(21,1.776608);
   hNCinFV_stack_11->SetBinError(22,1.857454);
   hNCinFV_stack_11->SetBinError(23,1.974891);
   hNCinFV_stack_11->SetBinError(24,2.163872);
   hNCinFV_stack_11->SetBinError(25,1.413223);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,25.47608);
   hnumuCCinFV_stack_12->SetBinContent(2,23.54509);
   hnumuCCinFV_stack_12->SetBinContent(3,11.70896);
   hnumuCCinFV_stack_12->SetBinContent(4,4.996487);
   hnumuCCinFV_stack_12->SetBinContent(5,3.99414);
   hnumuCCinFV_stack_12->SetBinContent(6,6.444518);
   hnumuCCinFV_stack_12->SetBinContent(7,5.435481);
   hnumuCCinFV_stack_12->SetBinContent(8,5.816665);
   hnumuCCinFV_stack_12->SetBinContent(9,5.207377);
   hnumuCCinFV_stack_12->SetBinContent(10,7.171232);
   hnumuCCinFV_stack_12->SetBinContent(11,14.00582);
   hnumuCCinFV_stack_12->SetBinContent(12,21.77397);
   hnumuCCinFV_stack_12->SetBinContent(13,18.95849);
   hnumuCCinFV_stack_12->SetBinContent(14,17.77391);
   hnumuCCinFV_stack_12->SetBinContent(15,11.81076);
   hnumuCCinFV_stack_12->SetBinContent(16,9.371339);
   hnumuCCinFV_stack_12->SetBinContent(17,7.842089);
   hnumuCCinFV_stack_12->SetBinContent(18,5.636396);
   hnumuCCinFV_stack_12->SetBinContent(19,8.168732);
   hnumuCCinFV_stack_12->SetBinContent(20,3.258551);
   hnumuCCinFV_stack_12->SetBinContent(21,6.298632);
   hnumuCCinFV_stack_12->SetBinContent(22,6.929687);
   hnumuCCinFV_stack_12->SetBinContent(23,8.029433);
   hnumuCCinFV_stack_12->SetBinContent(24,10.53918);
   hnumuCCinFV_stack_12->SetBinContent(25,20.1936);
   hnumuCCinFV_stack_12->SetBinError(1,2.85095);
   hnumuCCinFV_stack_12->SetBinError(2,3.741605);
   hnumuCCinFV_stack_12->SetBinError(3,1.960581);
   hnumuCCinFV_stack_12->SetBinError(4,1.091528);
   hnumuCCinFV_stack_12->SetBinError(5,1.061161);
   hnumuCCinFV_stack_12->SetBinError(6,1.350154);
   hnumuCCinFV_stack_12->SetBinError(7,1.267712);
   hnumuCCinFV_stack_12->SetBinError(8,1.262473);
   hnumuCCinFV_stack_12->SetBinError(9,1.568339);
   hnumuCCinFV_stack_12->SetBinError(10,1.438465);
   hnumuCCinFV_stack_12->SetBinError(11,2.019774);
   hnumuCCinFV_stack_12->SetBinError(12,3.022881);
   hnumuCCinFV_stack_12->SetBinError(13,2.440513);
   hnumuCCinFV_stack_12->SetBinError(14,2.370332);
   hnumuCCinFV_stack_12->SetBinError(15,1.781988);
   hnumuCCinFV_stack_12->SetBinError(16,1.585588);
   hnumuCCinFV_stack_12->SetBinError(17,1.961394);
   hnumuCCinFV_stack_12->SetBinError(18,1.245926);
   hnumuCCinFV_stack_12->SetBinError(19,1.916021);
   hnumuCCinFV_stack_12->SetBinError(20,0.8543325);
   hnumuCCinFV_stack_12->SetBinError(21,1.399156);
   hnumuCCinFV_stack_12->SetBinError(22,1.354588);
   hnumuCCinFV_stack_12->SetBinError(23,1.47412);
   hnumuCCinFV_stack_12->SetBinError(24,1.719116);
   hnumuCCinFV_stack_12->SetBinError(25,2.687575);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_13->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.6905683);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.9245404);
   hnueCCinFV_stack_13->SetBinContent(6,0.4436897);
   hnueCCinFV_stack_13->SetBinContent(8,0.5638871);
   hnueCCinFV_stack_13->SetBinContent(9,0.2080445);
   hnueCCinFV_stack_13->SetBinContent(10,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(11,0.4488907);
   hnueCCinFV_stack_13->SetBinContent(12,0.88752);
   hnueCCinFV_stack_13->SetBinContent(13,0.9798284);
   hnueCCinFV_stack_13->SetBinContent(14,0.5165423);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.8910709);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,1.543862);
   hnueCCinFV_stack_13->SetBinContent(20,0.5958213);
   hnueCCinFV_stack_13->SetBinContent(21,0.0003678389);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(24,0.6955557);
   hnueCCinFV_stack_13->SetBinContent(25,1.267516);
   hnueCCinFV_stack_13->SetBinError(1,0.1974404);
   hnueCCinFV_stack_13->SetBinError(2,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.3994798);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.5525753);
   hnueCCinFV_stack_13->SetBinError(6,0.3160204);
   hnueCCinFV_stack_13->SetBinError(8,0.4172458);
   hnueCCinFV_stack_13->SetBinError(9,0.2080445);
   hnueCCinFV_stack_13->SetBinError(10,0.4814682);
   hnueCCinFV_stack_13->SetBinError(11,0.320129);
   hnueCCinFV_stack_13->SetBinError(12,0.4470051);
   hnueCCinFV_stack_13->SetBinError(13,0.5165713);
   hnueCCinFV_stack_13->SetBinError(14,0.3754813);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.5252073);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.8238847);
   hnueCCinFV_stack_13->SetBinError(20,0.4255285);
   hnueCCinFV_stack_13->SetBinError(21,0.0003678389);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.438694);
   hnueCCinFV_stack_13->SetBinError(24,0.403886);
   hnueCCinFV_stack_13->SetBinError(25,0.5873469);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmcerror__20->SetBinContent(1,115.6831);
   hmcerror__20->SetBinContent(2,112.4395);
   hmcerror__20->SetBinContent(3,112.607);
   hmcerror__20->SetBinContent(4,104.6504);
   hmcerror__20->SetBinContent(5,89.26664);
   hmcerror__20->SetBinContent(6,76.05579);
   hmcerror__20->SetBinContent(7,84.45073);
   hmcerror__20->SetBinContent(8,84.16745);
   hmcerror__20->SetBinContent(9,90.46418);
   hmcerror__20->SetBinContent(10,91.28269);
   hmcerror__20->SetBinContent(11,98.52405);
   hmcerror__20->SetBinContent(12,105.563);
   hmcerror__20->SetBinContent(13,103.9893);
   hmcerror__20->SetBinContent(14,98.28613);
   hmcerror__20->SetBinContent(15,94.74422);
   hmcerror__20->SetBinContent(16,101.2208);
   hmcerror__20->SetBinContent(17,83.5302);
   hmcerror__20->SetBinContent(18,86.70135);
   hmcerror__20->SetBinContent(19,82.33292);
   hmcerror__20->SetBinContent(20,76.39764);
   hmcerror__20->SetBinContent(21,91.05253);
   hmcerror__20->SetBinContent(22,92.51272);
   hmcerror__20->SetBinContent(23,97.6915);
   hmcerror__20->SetBinContent(24,103.7048);
   hmcerror__20->SetBinContent(25,111.7385);
   hmcerror__20->SetBinError(1,41.79941);
   hmcerror__20->SetBinError(2,43.26853);
   hmcerror__20->SetBinError(3,39.93555);
   hmcerror__20->SetBinError(4,41.06609);
   hmcerror__20->SetBinError(5,34.40591);
   hmcerror__20->SetBinError(6,27.49333);
   hmcerror__20->SetBinError(7,34.10729);
   hmcerror__20->SetBinError(8,34.13595);
   hmcerror__20->SetBinError(9,35.44505);
   hmcerror__20->SetBinError(10,35.05817);
   hmcerror__20->SetBinError(11,37.62467);
   hmcerror__20->SetBinError(12,42.23573);
   hmcerror__20->SetBinError(13,35.43466);
   hmcerror__20->SetBinError(14,37.21379);
   hmcerror__20->SetBinError(15,42.99428);
   hmcerror__20->SetBinError(16,39.86643);
   hmcerror__20->SetBinError(17,33.4019);
   hmcerror__20->SetBinError(18,34.97895);
   hmcerror__20->SetBinError(19,37.11422);
   hmcerror__20->SetBinError(20,26.52315);
   hmcerror__20->SetBinError(21,37.00735);
   hmcerror__20->SetBinError(22,36.51731);
   hmcerror__20->SetBinError(23,39.77528);
   hmcerror__20->SetBinError(24,39.49259);
   hmcerror__20->SetBinError(25,39.10689);
   hmcerror__20->SetBinError(26,0.3895343);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3025[25] = {
   121,
   78,
   89,
   91,
   86,
   75,
   61,
   68,
   79,
   85,
   74,
   79,
   102,
   93,
   107,
   77,
   75,
   71,
   69,
   72,
   72,
   72,
   81,
   77,
   82};
   Double_t _felx3025[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3025[25] = {
   11,
   8.9562,
   9.5566,
   9.6617,
   9.3967,
   8.7852,
   7.9383,
   8.3726,
   9.0124,
   9.3428,
   8.7275,
   9.0124,
   10.0995,
   9.7658,
   10.34408,
   8.8995,
   8.7852,
   8.5518,
   8.4327,
   8.6108,
   8.6108,
   8.6108,
   9.1239,
   8.8995,
   9.1791};
   Double_t _fehx3025[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3025[25] = {
   11,
   8.7542,
   9.3552,
   9.46,
   9.1951,
   8.5831,
   7.7354,
   8.1701,
   8.8105,
   9.1411,
   8.5253,
   8.8105,
   10.0995,
   9.564,
   10.34408,
   8.6976,
   8.5831,
   8.3496,
   8.2304,
   8.4085,
   8.4085,
   8.4085,
   8.9221,
   8.6976,
   8.9774};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-3.78,3.78);
   Graph_Graph3025->SetMinimum(45.16787);
   Graph_Graph3025->SetMaximum(139.8938);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2036.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.8","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.8","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.4","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.9","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  914.1","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  201.6","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 247.6","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3026[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3026[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3026[25] = {
   0.3613268,
   0.3848162,
   0.3546454,
   0.3924123,
   0.3854285,
   0.361489,
   0.4038721,
   0.4055718,
   0.3918131,
   0.3840615,
   0.3818831,
   0.4000996,
   0.3407528,
   0.3786271,
   0.4537932,
   0.3938562,
   0.3998781,
   0.4034418,
   0.4507823,
   0.3471724,
   0.4064395,
   0.3947274,
   0.4071519,
   0.3808175,
   0.3499857};
   Double_t _fehx3026[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3026[25] = {
   0.3613268,
   0.3848162,
   0.3546454,
   0.3924123,
   0.3854285,
   0.361489,
   0.4038721,
   0.4055718,
   0.3918131,
   0.3840615,
   0.3818831,
   0.4000996,
   0.3407528,
   0.3786271,
   0.4537932,
   0.3938562,
   0.3998781,
   0.4034418,
   0.4507823,
   0.3471724,
   0.4064395,
   0.3947274,
   0.4071519,
   0.3808175,
   0.3499857};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-3.78,3.78);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3027[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3027[25] = {
   0.3248654,
   0.3435328,
   0.3218056,
   0.3454538,
   0.3521135,
   0.3171225,
   0.358762,
   0.3609708,
   0.3578545,
   0.3565661,
   0.3381672,
   0.3517282,
   0.2913988,
   0.3536378,
   0.3712283,
   0.355248,
   0.367255,
   0.3525344,
   0.3298391,
   0.3197447,
   0.337339,
   0.3651319,
   0.364863,
   0.3522451,
   0.3237668};
   Double_t _fehx3027[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3027[25] = {
   0.3248654,
   0.3435328,
   0.3218056,
   0.3454538,
   0.3521135,
   0.3171225,
   0.358762,
   0.3609708,
   0.3578545,
   0.3565661,
   0.3381672,
   0.3517282,
   0.2913988,
   0.3536378,
   0.3712283,
   0.355248,
   0.367255,
   0.3525344,
   0.3298391,
   0.3197447,
   0.337339,
   0.3651319,
   0.364863,
   0.3522451,
   0.3237668};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-3.78,3.78);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3028[25] = {
   1.045961,
   0.6937067,
   0.7903595,
   0.8695623,
   0.9634058,
   0.9861182,
   0.7223147,
   0.8079133,
   0.8732738,
   0.9311732,
   0.7510857,
   0.748368,
   0.98087,
   0.9462169,
   1.129357,
   0.7607134,
   0.8978788,
   0.8189031,
   0.8380609,
   0.9424375,
   0.7907523,
   0.7782714,
   0.8291407,
   0.7424924,
   0.733856};
   Double_t _felx3028[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3028[25] = {
   0.09508733,
   0.07965354,
   0.08486685,
   0.09232363,
   0.1052655,
   0.1155099,
   0.09399919,
   0.09947551,
   0.09962396,
   0.1023502,
   0.08858243,
   0.08537458,
   0.0971206,
   0.09936091,
   0.109179,
   0.08792167,
   0.1051739,
   0.09863515,
   0.102422,
   0.1127103,
   0.09456959,
   0.09307693,
   0.09339503,
   0.08581573,
   0.08214802};
   Double_t _fehx3028[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3028[25] = {
   0.09508733,
   0.07785701,
   0.08307833,
   0.09039626,
   0.1030071,
   0.1128527,
   0.0915966,
   0.09706959,
   0.09739214,
   0.1001406,
   0.08653014,
   0.08346198,
   0.0971206,
   0.09730773,
   0.109179,
   0.08592702,
   0.1027544,
   0.096303,
   0.09996488,
   0.1100623,
   0.09234779,
   0.09089021,
   0.09132934,
   0.08386886,
   0.08034291};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-3.78,3.78);
   Graph_Graph3028->SetMinimum(0.5516049);
   Graph_Graph3028->SetMaximum(1.300984);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
   TLine *line = new TLine(-3.15,1,3.15,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
