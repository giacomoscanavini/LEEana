#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Thu Mar  9 17:37:00 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",86,109,1200,900);
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
   pad1->Range(-4.119231,-1.28,3.957692,141.5411);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__22->SetBinContent(1,48.88936);
   hmc__22->SetBinContent(2,45.64826);
   hmc__22->SetBinContent(3,47.71264);
   hmc__22->SetBinContent(4,48.29294);
   hmc__22->SetBinContent(5,44.51029);
   hmc__22->SetBinContent(6,53.09356);
   hmc__22->SetBinContent(7,53.49193);
   hmc__22->SetBinContent(8,44.46869);
   hmc__22->SetBinContent(9,46.30952);
   hmc__22->SetBinContent(10,47.56116);
   hmc__22->SetBinContent(11,46.24988);
   hmc__22->SetBinContent(12,44.90944);
   hmc__22->SetBinContent(13,47.33919);
   hmc__22->SetBinContent(14,43.30009);
   hmc__22->SetBinContent(15,45.98664);
   hmc__22->SetBinContent(16,43.63779);
   hmc__22->SetBinContent(17,51.75711);
   hmc__22->SetBinContent(18,44.69603);
   hmc__22->SetBinContent(19,46.74992);
   hmc__22->SetBinContent(20,47.92176);
   hmc__22->SetBinContent(21,51.98474);
   hmc__22->SetBinContent(22,45.17134);
   hmc__22->SetBinContent(23,58.04503);
   hmc__22->SetBinContent(24,56.53053);
   hmc__22->SetBinError(1,21.3935);
   hmc__22->SetBinError(2,18.94158);
   hmc__22->SetBinError(3,18.38613);
   hmc__22->SetBinError(4,16.04828);
   hmc__22->SetBinError(5,14.06818);
   hmc__22->SetBinError(6,17.68324);
   hmc__22->SetBinError(7,18.82981);
   hmc__22->SetBinError(8,19.14313);
   hmc__22->SetBinError(9,21.01154);
   hmc__22->SetBinError(10,21.73108);
   hmc__22->SetBinError(11,16.82993);
   hmc__22->SetBinError(12,23.55167);
   hmc__22->SetBinError(13,17.69913);
   hmc__22->SetBinError(14,17.18024);
   hmc__22->SetBinError(15,18.84999);
   hmc__22->SetBinError(16,17.75088);
   hmc__22->SetBinError(17,17.51116);
   hmc__22->SetBinError(18,14.96868);
   hmc__22->SetBinError(19,18.64619);
   hmc__22->SetBinError(20,15.94967);
   hmc__22->SetBinError(21,24.16727);
   hmc__22->SetBinError(22,19.27526);
   hmc__22->SetBinError(23,27.74425);
   hmc__22->SetBinError(24,21.15694);
   hmc__22->SetBinError(25,0.3895343);
   hmc__22->SetMinimum(-1.28);
   hmc__22->SetMaximum(134.4);
   hmc__22->SetEntries(1133.738);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,-3.15,3.15);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(60.94728);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.368483);
   hbadmatch_stack_1->SetBinContent(2,1.889403);
   hbadmatch_stack_1->SetBinContent(3,3.035535);
   hbadmatch_stack_1->SetBinContent(4,1.902677);
   hbadmatch_stack_1->SetBinContent(5,1.801404);
   hbadmatch_stack_1->SetBinContent(6,2.63337);
   hbadmatch_stack_1->SetBinContent(7,1.404123);
   hbadmatch_stack_1->SetBinContent(8,1.020533);
   hbadmatch_stack_1->SetBinContent(9,2.503676);
   hbadmatch_stack_1->SetBinContent(10,1.856418);
   hbadmatch_stack_1->SetBinContent(11,0.3934307);
   hbadmatch_stack_1->SetBinContent(12,0.8168926);
   hbadmatch_stack_1->SetBinContent(13,0.6155995);
   hbadmatch_stack_1->SetBinContent(14,2.232211);
   hbadmatch_stack_1->SetBinContent(15,1.651154);
   hbadmatch_stack_1->SetBinContent(16,1.320237);
   hbadmatch_stack_1->SetBinContent(17,1.282826);
   hbadmatch_stack_1->SetBinContent(18,2.30217);
   hbadmatch_stack_1->SetBinContent(19,1.729313);
   hbadmatch_stack_1->SetBinContent(20,1.513789);
   hbadmatch_stack_1->SetBinContent(21,1.660918);
   hbadmatch_stack_1->SetBinContent(22,0.9269427);
   hbadmatch_stack_1->SetBinContent(23,1.322064);
   hbadmatch_stack_1->SetBinContent(24,1.999038);
   hbadmatch_stack_1->SetBinError(1,0.5734141);
   hbadmatch_stack_1->SetBinError(2,0.7333372);
   hbadmatch_stack_1->SetBinError(3,0.9467841);
   hbadmatch_stack_1->SetBinError(4,0.6944254);
   hbadmatch_stack_1->SetBinError(5,0.6983531);
   hbadmatch_stack_1->SetBinError(6,0.8731364);
   hbadmatch_stack_1->SetBinError(7,0.6024005);
   hbadmatch_stack_1->SetBinError(8,0.5892049);
   hbadmatch_stack_1->SetBinError(9,0.9381602);
   hbadmatch_stack_1->SetBinError(10,1.140919);
   hbadmatch_stack_1->SetBinError(11,0.2781975);
   hbadmatch_stack_1->SetBinError(12,0.4095424);
   hbadmatch_stack_1->SetBinError(13,0.3560237);
   hbadmatch_stack_1->SetBinError(14,0.7700045);
   hbadmatch_stack_1->SetBinError(15,0.6934086);
   hbadmatch_stack_1->SetBinError(16,0.6200829);
   hbadmatch_stack_1->SetBinError(17,0.6593756);
   hbadmatch_stack_1->SetBinError(18,0.9301394);
   hbadmatch_stack_1->SetBinError(19,0.6744804);
   hbadmatch_stack_1->SetBinError(20,0.6378738);
   hbadmatch_stack_1->SetBinError(21,0.6968091);
   hbadmatch_stack_1->SetBinError(22,0.4800908);
   hbadmatch_stack_1->SetBinError(23,0.5554667);
   hbadmatch_stack_1->SetBinError(24,0.7339349);
   hbadmatch_stack_1->SetEntries(150);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,4.468179);
   hext_stack_2->SetBinContent(2,7.373394);
   hext_stack_2->SetBinContent(3,5.497622);
   hext_stack_2->SetBinContent(4,10.54675);
   hext_stack_2->SetBinContent(5,12.93445);
   hext_stack_2->SetBinContent(6,13.88175);
   hext_stack_2->SetBinContent(7,17.9924);
   hext_stack_2->SetBinContent(8,11.11058);
   hext_stack_2->SetBinContent(9,9.089171);
   hext_stack_2->SetBinContent(10,5.255426);
   hext_stack_2->SetBinContent(11,5.509212);
   hext_stack_2->SetBinContent(12,4.684424);
   hext_stack_2->SetBinContent(13,5.993603);
   hext_stack_2->SetBinContent(14,5.091023);
   hext_stack_2->SetBinContent(15,6.788031);
   hext_stack_2->SetBinContent(16,5.587004);
   hext_stack_2->SetBinContent(17,9.723605);
   hext_stack_2->SetBinContent(18,10.27861);
   hext_stack_2->SetBinContent(19,8.821025);
   hext_stack_2->SetBinContent(20,9.634223);
   hext_stack_2->SetBinContent(21,5.84797);
   hext_stack_2->SetBinContent(22,4.93821);
   hext_stack_2->SetBinContent(23,9.629814);
   hext_stack_2->SetBinContent(24,9.730785);
   hext_stack_2->SetBinError(1,1.297469);
   hext_stack_2->SetBinError(2,1.741532);
   hext_stack_2->SetBinError(3,1.589874);
   hext_stack_2->SetBinError(4,1.989749);
   hext_stack_2->SetBinError(5,2.42652);
   hext_stack_2->SetBinError(6,2.311227);
   hext_stack_2->SetBinError(7,2.754931);
   hext_stack_2->SetBinError(8,2.108507);
   hext_stack_2->SetBinError(9,1.88497);
   hext_stack_2->SetBinError(10,1.575612);
   hext_stack_2->SetBinError(11,1.568955);
   hext_stack_2->SetBinError(12,1.482246);
   hext_stack_2->SetBinError(13,1.59747);
   hext_stack_2->SetBinError(14,1.537002);
   hext_stack_2->SetBinError(15,1.774777);
   hext_stack_2->SetBinError(16,1.544858);
   hext_stack_2->SetBinError(17,2.041073);
   hext_stack_2->SetBinError(18,2.093427);
   hext_stack_2->SetBinError(19,1.994103);
   hext_stack_2->SetBinError(20,2.075354);
   hext_stack_2->SetBinError(21,1.471207);
   hext_stack_2->SetBinError(22,1.475167);
   hext_stack_2->SetBinError(23,2.04254);
   hext_stack_2->SetBinError(24,1.991175);
   hext_stack_2->SetEntries(503);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.2620035);
   hdirt_stack_3->SetBinContent(2,0.4950385);
   hdirt_stack_3->SetBinContent(3,0.9485314);
   hdirt_stack_3->SetBinContent(4,2.142848);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.8176458);
   hdirt_stack_3->SetBinContent(7,1.07622);
   hdirt_stack_3->SetBinContent(8,0.7431665);
   hdirt_stack_3->SetBinContent(9,1.226169);
   hdirt_stack_3->SetBinContent(10,0.5758626);
   hdirt_stack_3->SetBinContent(11,0.8534844);
   hdirt_stack_3->SetBinContent(12,0.89527);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(14,1.03727);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,1.291835);
   hdirt_stack_3->SetBinContent(18,1.151725);
   hdirt_stack_3->SetBinContent(19,1.667876);
   hdirt_stack_3->SetBinContent(20,1.796039);
   hdirt_stack_3->SetBinContent(21,1.233073);
   hdirt_stack_3->SetBinContent(22,1.239991);
   hdirt_stack_3->SetBinContent(23,0.7492774);
   hdirt_stack_3->SetBinContent(24,0.7711815);
   hdirt_stack_3->SetBinError(1,0.2620035);
   hdirt_stack_3->SetBinError(2,0.2933304);
   hdirt_stack_3->SetBinError(3,0.4941443);
   hdirt_stack_3->SetBinError(4,0.8498243);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.4797697);
   hdirt_stack_3->SetBinError(7,0.5054947);
   hdirt_stack_3->SetBinError(8,0.4648968);
   hdirt_stack_3->SetBinError(9,0.6315351);
   hdirt_stack_3->SetBinError(10,0.3389606);
   hdirt_stack_3->SetBinError(11,0.4543325);
   hdirt_stack_3->SetBinError(12,0.5259814);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(14,0.5438158);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.6154639);
   hdirt_stack_3->SetBinError(18,0.4793627);
   hdirt_stack_3->SetBinError(19,0.7154674);
   hdirt_stack_3->SetBinError(20,1.071558);
   hdirt_stack_3->SetBinError(21,0.5611196);
   hdirt_stack_3->SetBinError(22,0.6068685);
   hdirt_stack_3->SetBinError(23,0.4699855);
   hdirt_stack_3->SetBinError(24,0.3523779);
   hdirt_stack_3->SetEntries(90);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,10.5002);
   houtFV_stack_4->SetBinContent(2,9.54599);
   houtFV_stack_4->SetBinContent(3,11.19181);
   houtFV_stack_4->SetBinContent(4,9.090598);
   houtFV_stack_4->SetBinContent(5,8.760014);
   houtFV_stack_4->SetBinContent(6,10.28163);
   houtFV_stack_4->SetBinContent(7,8.33234);
   houtFV_stack_4->SetBinContent(8,9.2253);
   houtFV_stack_4->SetBinContent(9,8.741159);
   houtFV_stack_4->SetBinContent(10,10.93303);
   houtFV_stack_4->SetBinContent(11,12.72078);
   houtFV_stack_4->SetBinContent(12,9.601475);
   houtFV_stack_4->SetBinContent(13,9.426167);
   houtFV_stack_4->SetBinContent(14,7.713302);
   houtFV_stack_4->SetBinContent(15,10.68639);
   houtFV_stack_4->SetBinContent(16,10.938);
   houtFV_stack_4->SetBinContent(17,11.22094);
   houtFV_stack_4->SetBinContent(18,9.484827);
   houtFV_stack_4->SetBinContent(19,8.449289);
   houtFV_stack_4->SetBinContent(20,11.88459);
   houtFV_stack_4->SetBinContent(21,9.524373);
   houtFV_stack_4->SetBinContent(22,11.19385);
   houtFV_stack_4->SetBinContent(23,10.58294);
   houtFV_stack_4->SetBinContent(24,16.03918);
   houtFV_stack_4->SetBinError(1,1.641959);
   houtFV_stack_4->SetBinError(2,1.497049);
   houtFV_stack_4->SetBinError(3,1.780156);
   houtFV_stack_4->SetBinError(4,1.529354);
   houtFV_stack_4->SetBinError(5,1.47208);
   houtFV_stack_4->SetBinError(6,1.645785);
   houtFV_stack_4->SetBinError(7,1.487581);
   houtFV_stack_4->SetBinError(8,1.530811);
   houtFV_stack_4->SetBinError(9,1.441329);
   houtFV_stack_4->SetBinError(10,1.67404);
   houtFV_stack_4->SetBinError(11,2.036467);
   houtFV_stack_4->SetBinError(12,1.577121);
   houtFV_stack_4->SetBinError(13,1.520525);
   houtFV_stack_4->SetBinError(14,1.358981);
   houtFV_stack_4->SetBinError(15,1.67071);
   houtFV_stack_4->SetBinError(16,1.671012);
   houtFV_stack_4->SetBinError(17,1.716058);
   houtFV_stack_4->SetBinError(18,1.630166);
   houtFV_stack_4->SetBinError(19,1.386203);
   houtFV_stack_4->SetBinError(20,1.705897);
   houtFV_stack_4->SetBinError(21,1.53405);
   houtFV_stack_4->SetBinError(22,1.660716);
   houtFV_stack_4->SetBinError(23,1.638106);
   houtFV_stack_4->SetBinError(24,2.364994);
   houtFV_stack_4->SetEntries(1038);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.5988538);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.502368);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.8511223);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.892472);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6413721);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.445904);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.626922);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.9627222);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5996859);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.8087721);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.6403718);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.255508);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.502368);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.9052579);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1922885);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2162644);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3588378);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3223657);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3113101);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2422936);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1658436);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2655413);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3631504);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.237152);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3187231);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2118699);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4237414);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2162644);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.302967);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2501964);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(29);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,7.348526);
   hNCpi0inFVres_stack_7->SetBinContent(2,7.112035);
   hNCpi0inFVres_stack_7->SetBinContent(3,6.776572);
   hNCpi0inFVres_stack_7->SetBinContent(4,7.431057);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.14541);
   hNCpi0inFVres_stack_7->SetBinContent(6,7.899709);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.23443);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.274699);
   hNCpi0inFVres_stack_7->SetBinContent(9,7.629022);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.825065);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.60834);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.672283);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.714634);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.599626);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.617213);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.860936);
   hNCpi0inFVres_stack_7->SetBinContent(17,7.34919);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.020192);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.583768);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.54233);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.373514);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.239165);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.601201);
   hNCpi0inFVres_stack_7->SetBinContent(24,8.585919);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9006568);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8478262);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8502712);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8536591);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7160005);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8856584);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8661815);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7936871);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9081521);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9274468);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8360768);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9563722);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9704782);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9045376);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6841718);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8436845);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8931349);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7088071);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8805173);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9004766);
   hNCpi0inFVres_stack_7->SetBinError(21,0.8032331);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9185919);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9313555);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9065071);
   hNCpi0inFVres_stack_7->SetEntries(3289);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.082971);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.70482);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.134194);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.771158);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.882758);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.437022);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.411202);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.160766);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.602926);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.36694);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.161262);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.240722);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.091012);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.22644);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.645276);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.829038);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.129954);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9344858);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.673176);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.32359);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.013048);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.657894);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.147644);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.162094);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6688312);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.59899);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4935402);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4098107);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4135921);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3809346);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5402261);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5209086);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3794841);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3871841);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4744409);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2960358);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4439995);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.306585);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4137491);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5630391);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3221642);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2560898);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4146887);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2659064);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.583409);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3553854);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4668604);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4943282);
   hNCpi0inFVdis_stack_8->SetEntries(856);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,11.40595);
   hCCpi0inFV_stack_10->SetBinContent(2,9.931584);
   hCCpi0inFV_stack_10->SetBinContent(3,10.97635);
   hCCpi0inFV_stack_10->SetBinContent(4,7.087197);
   hCCpi0inFV_stack_10->SetBinContent(5,7.370741);
   hCCpi0inFV_stack_10->SetBinContent(6,7.667549);
   hCCpi0inFV_stack_10->SetBinContent(7,7.466022);
   hCCpi0inFV_stack_10->SetBinContent(8,8.301064);
   hCCpi0inFV_stack_10->SetBinContent(9,7.824187);
   hCCpi0inFV_stack_10->SetBinContent(10,11.08734);
   hCCpi0inFV_stack_10->SetBinContent(11,9.239841);
   hCCpi0inFV_stack_10->SetBinContent(12,10.31953);
   hCCpi0inFV_stack_10->SetBinContent(13,12.18849);
   hCCpi0inFV_stack_10->SetBinContent(14,8.509907);
   hCCpi0inFV_stack_10->SetBinContent(15,10.19867);
   hCCpi0inFV_stack_10->SetBinContent(16,8.279038);
   hCCpi0inFV_stack_10->SetBinContent(17,10.18245);
   hCCpi0inFV_stack_10->SetBinContent(18,8.451289);
   hCCpi0inFV_stack_10->SetBinContent(19,8.430376);
   hCCpi0inFV_stack_10->SetBinContent(20,6.380537);
   hCCpi0inFV_stack_10->SetBinContent(21,12.29283);
   hCCpi0inFV_stack_10->SetBinContent(22,11.1357);
   hCCpi0inFV_stack_10->SetBinContent(23,11.77239);
   hCCpi0inFV_stack_10->SetBinContent(24,9.385074);
   hCCpi0inFV_stack_10->SetBinError(1,1.711133);
   hCCpi0inFV_stack_10->SetBinError(2,1.547366);
   hCCpi0inFV_stack_10->SetBinError(3,1.65764);
   hCCpi0inFV_stack_10->SetBinError(4,1.316363);
   hCCpi0inFV_stack_10->SetBinError(5,1.373148);
   hCCpi0inFV_stack_10->SetBinError(6,1.380658);
   hCCpi0inFV_stack_10->SetBinError(7,1.415229);
   hCCpi0inFV_stack_10->SetBinError(8,1.455111);
   hCCpi0inFV_stack_10->SetBinError(9,1.388255);
   hCCpi0inFV_stack_10->SetBinError(10,1.719575);
   hCCpi0inFV_stack_10->SetBinError(11,1.533776);
   hCCpi0inFV_stack_10->SetBinError(12,1.615903);
   hCCpi0inFV_stack_10->SetBinError(13,1.752956);
   hCCpi0inFV_stack_10->SetBinError(14,1.490892);
   hCCpi0inFV_stack_10->SetBinError(15,1.653677);
   hCCpi0inFV_stack_10->SetBinError(16,1.382776);
   hCCpi0inFV_stack_10->SetBinError(17,1.592153);
   hCCpi0inFV_stack_10->SetBinError(18,1.482235);
   hCCpi0inFV_stack_10->SetBinError(19,1.412879);
   hCCpi0inFV_stack_10->SetBinError(20,1.269704);
   hCCpi0inFV_stack_10->SetBinError(21,1.803484);
   hCCpi0inFV_stack_10->SetBinError(22,1.740761);
   hCCpi0inFV_stack_10->SetBinError(23,1.723374);
   hCCpi0inFV_stack_10->SetBinError(24,1.509135);
   hCCpi0inFV_stack_10->SetEntries(957);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.784209);
   hNCinFV_stack_11->SetBinContent(2,2.053982);
   hNCinFV_stack_11->SetBinContent(3,2.052291);
   hNCinFV_stack_11->SetBinContent(4,2.447412);
   hNCinFV_stack_11->SetBinContent(5,1.463836);
   hNCinFV_stack_11->SetBinContent(6,2.486059);
   hNCinFV_stack_11->SetBinContent(7,1.26712);
   hNCinFV_stack_11->SetBinContent(8,2.000729);
   hNCinFV_stack_11->SetBinContent(9,2.340906);
   hNCinFV_stack_11->SetBinContent(10,1.754141);
   hNCinFV_stack_11->SetBinContent(11,1.907138);
   hNCinFV_stack_11->SetBinContent(12,1.270501);
   hNCinFV_stack_11->SetBinContent(13,1.123658);
   hNCinFV_stack_11->SetBinContent(14,2.249007);
   hNCinFV_stack_11->SetBinContent(15,2.535931);
   hNCinFV_stack_11->SetBinContent(16,2.053982);
   hNCinFV_stack_11->SetBinContent(17,2.7859);
   hNCinFV_stack_11->SetBinContent(18,3.372665);
   hNCinFV_stack_11->SetBinContent(19,0.8753801);
   hNCinFV_stack_11->SetBinContent(20,2.590875);
   hNCinFV_stack_11->SetBinContent(21,3.56769);
   hNCinFV_stack_11->SetBinContent(22,1.513708);
   hNCinFV_stack_11->SetBinContent(23,2.100933);
   hNCinFV_stack_11->SetBinContent(24,1.949166);
   hNCinFV_stack_11->SetBinError(1,0.8323376);
   hNCinFV_stack_11->SetBinError(2,0.7078105);
   hNCinFV_stack_11->SetBinError(3,0.7073425);
   hNCinFV_stack_11->SetBinError(4,0.7605193);
   hNCinFV_stack_11->SetBinError(5,0.620407);
   hNCinFV_stack_11->SetBinError(6,0.8559962);
   hNCinFV_stack_11->SetBinError(7,0.5883944);
   hNCinFV_stack_11->SetBinError(8,0.7343859);
   hNCinFV_stack_11->SetBinError(9,0.8093475);
   hNCinFV_stack_11->SetBinError(10,0.7350354);
   hNCinFV_stack_11->SetBinError(11,0.6501133);
   hNCinFV_stack_11->SetBinError(12,0.5895188);
   hNCinFV_stack_11->SetBinError(13,0.5188295);
   hNCinFV_stack_11->SetBinError(14,0.7341869);
   hNCinFV_stack_11->SetBinError(15,0.8325131);
   hNCinFV_stack_11->SetBinError(16,0.7078105);
   hNCinFV_stack_11->SetBinError(17,0.8327353);
   hNCinFV_stack_11->SetBinError(18,0.8990075);
   hNCinFV_stack_11->SetBinError(19,0.5191111);
   hNCinFV_stack_11->SetBinError(20,0.8095761);
   hNCinFV_stack_11->SetBinError(21,0.919918);
   hNCinFV_stack_11->SetBinError(22,0.5875827);
   hNCinFV_stack_11->SetBinError(23,0.709366);
   hNCinFV_stack_11->SetBinError(24,0.7604681);
   hNCinFV_stack_11->SetEntries(213);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,6.676558);
   hnumuCCinFV_stack_12->SetBinContent(2,3.709195);
   hnumuCCinFV_stack_12->SetBinContent(3,3.99818);
   hnumuCCinFV_stack_12->SetBinContent(4,4.924964);
   hnumuCCinFV_stack_12->SetBinContent(5,4.344334);
   hnumuCCinFV_stack_12->SetBinContent(6,5.515023);
   hnumuCCinFV_stack_12->SetBinContent(7,5.110521);
   hnumuCCinFV_stack_12->SetBinContent(8,2.905706);
   hnumuCCinFV_stack_12->SetBinContent(9,4.96154);
   hnumuCCinFV_stack_12->SetBinContent(10,5.361795);
   hnumuCCinFV_stack_12->SetBinContent(11,5.976948);
   hnumuCCinFV_stack_12->SetBinContent(12,6.240194);
   hnumuCCinFV_stack_12->SetBinContent(13,5.886975);
   hnumuCCinFV_stack_12->SetBinContent(14,6.678585);
   hnumuCCinFV_stack_12->SetBinContent(15,5.675395);
   hnumuCCinFV_stack_12->SetBinContent(16,4.822704);
   hnumuCCinFV_stack_12->SetBinContent(17,5.825195);
   hnumuCCinFV_stack_12->SetBinContent(18,3.031796);
   hnumuCCinFV_stack_12->SetBinContent(19,5.37192);
   hnumuCCinFV_stack_12->SetBinContent(20,4.614779);
   hnumuCCinFV_stack_12->SetBinContent(21,7.432068);
   hnumuCCinFV_stack_12->SetBinContent(22,3.907215);
   hnumuCCinFV_stack_12->SetBinContent(23,9.616473);
   hnumuCCinFV_stack_12->SetBinContent(24,5.123587);
   hnumuCCinFV_stack_12->SetBinError(1,1.396458);
   hnumuCCinFV_stack_12->SetBinError(2,0.911637);
   hnumuCCinFV_stack_12->SetBinError(3,0.9624564);
   hnumuCCinFV_stack_12->SetBinError(4,1.109936);
   hnumuCCinFV_stack_12->SetBinError(5,1.52352);
   hnumuCCinFV_stack_12->SetBinError(6,1.585335);
   hnumuCCinFV_stack_12->SetBinError(7,1.214634);
   hnumuCCinFV_stack_12->SetBinError(8,0.8126535);
   hnumuCCinFV_stack_12->SetBinError(9,1.26143);
   hnumuCCinFV_stack_12->SetBinError(10,1.310473);
   hnumuCCinFV_stack_12->SetBinError(11,1.259727);
   hnumuCCinFV_stack_12->SetBinError(12,1.311845);
   hnumuCCinFV_stack_12->SetBinError(13,1.249759);
   hnumuCCinFV_stack_12->SetBinError(14,1.330834);
   hnumuCCinFV_stack_12->SetBinError(15,1.237789);
   hnumuCCinFV_stack_12->SetBinError(16,1.122654);
   hnumuCCinFV_stack_12->SetBinError(17,1.368864);
   hnumuCCinFV_stack_12->SetBinError(18,0.936217);
   hnumuCCinFV_stack_12->SetBinError(19,2.142257);
   hnumuCCinFV_stack_12->SetBinError(20,1.062438);
   hnumuCCinFV_stack_12->SetBinError(21,2.61646);
   hnumuCCinFV_stack_12->SetBinError(22,1.011566);
   hnumuCCinFV_stack_12->SetBinError(23,1.649776);
   hnumuCCinFV_stack_12->SetBinError(24,1.182151);
   hnumuCCinFV_stack_12->SetEntries(501);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(2,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(7,0.47249);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(13,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(19,1.86439);
   hnueCCinFV_stack_13->SetBinContent(20,0.1529246);
   hnueCCinFV_stack_13->SetBinContent(21,0.536893);
   hnueCCinFV_stack_13->SetBinContent(23,0.6170259);
   hnueCCinFV_stack_13->SetBinContent(24,0.1711909);
   hnueCCinFV_stack_13->SetBinError(1,0.2781975);
   hnueCCinFV_stack_13->SetBinError(2,0.3025491);
   hnueCCinFV_stack_13->SetBinError(7,0.3344052);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.4566905);
   hnueCCinFV_stack_13->SetBinError(13,0.7431478);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.2781975);
   hnueCCinFV_stack_13->SetBinError(19,1.275254);
   hnueCCinFV_stack_13->SetBinError(20,0.1529246);
   hnueCCinFV_stack_13->SetBinError(21,0.3929602);
   hnueCCinFV_stack_13->SetBinError(23,0.3570508);
   hnueCCinFV_stack_13->SetBinError(24,0.1711909);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__23->SetBinContent(1,48.88936);
   hmcerror__23->SetBinContent(2,45.64826);
   hmcerror__23->SetBinContent(3,47.71264);
   hmcerror__23->SetBinContent(4,48.29294);
   hmcerror__23->SetBinContent(5,44.51029);
   hmcerror__23->SetBinContent(6,53.09356);
   hmcerror__23->SetBinContent(7,53.49193);
   hmcerror__23->SetBinContent(8,44.46869);
   hmcerror__23->SetBinContent(9,46.30952);
   hmcerror__23->SetBinContent(10,47.56116);
   hmcerror__23->SetBinContent(11,46.24988);
   hmcerror__23->SetBinContent(12,44.90944);
   hmcerror__23->SetBinContent(13,47.33919);
   hmcerror__23->SetBinContent(14,43.30009);
   hmcerror__23->SetBinContent(15,45.98664);
   hmcerror__23->SetBinContent(16,43.63779);
   hmcerror__23->SetBinContent(17,51.75711);
   hmcerror__23->SetBinContent(18,44.69603);
   hmcerror__23->SetBinContent(19,46.74992);
   hmcerror__23->SetBinContent(20,47.92176);
   hmcerror__23->SetBinContent(21,51.98474);
   hmcerror__23->SetBinContent(22,45.17134);
   hmcerror__23->SetBinContent(23,58.04503);
   hmcerror__23->SetBinContent(24,56.53053);
   hmcerror__23->SetBinError(1,21.3935);
   hmcerror__23->SetBinError(2,18.94158);
   hmcerror__23->SetBinError(3,18.38613);
   hmcerror__23->SetBinError(4,16.04828);
   hmcerror__23->SetBinError(5,14.06818);
   hmcerror__23->SetBinError(6,17.68324);
   hmcerror__23->SetBinError(7,18.82981);
   hmcerror__23->SetBinError(8,19.14313);
   hmcerror__23->SetBinError(9,21.01154);
   hmcerror__23->SetBinError(10,21.73108);
   hmcerror__23->SetBinError(11,16.82993);
   hmcerror__23->SetBinError(12,23.55167);
   hmcerror__23->SetBinError(13,17.69913);
   hmcerror__23->SetBinError(14,17.18024);
   hmcerror__23->SetBinError(15,18.84999);
   hmcerror__23->SetBinError(16,17.75088);
   hmcerror__23->SetBinError(17,17.51116);
   hmcerror__23->SetBinError(18,14.96868);
   hmcerror__23->SetBinError(19,18.64619);
   hmcerror__23->SetBinError(20,15.94967);
   hmcerror__23->SetBinError(21,24.16727);
   hmcerror__23->SetBinError(22,19.27526);
   hmcerror__23->SetBinError(23,27.74425);
   hmcerror__23->SetBinError(24,21.15694);
   hmcerror__23->SetBinError(25,0.3895343);
   hmcerror__23->SetEntries(1133.738);

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
   
   Double_t _fx3029[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3029[24] = {
   50,
   43,
   33,
   28,
   38,
   43,
   57,
   45,
   44,
   45,
   38,
   64,
   58,
   48,
   36,
   48,
   46,
   41,
   48,
   39,
   38,
   37,
   58,
   48};
   Double_t _felx3029[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3029[24] = {
   7.2025,
   6.6917,
   5.8847,
   5.4358,
   6.3013,
   6.6917,
   7.679,
   6.8416,
   6.7671,
   6.8416,
   6.3013,
   8.1273,
   7.7446,
   7.0604,
   6.1381,
   7.0604,
   6.9153,
   6.5384,
   7.0604,
   6.3813,
   6.3013,
   6.2203,
   7.7446,
   7.0604};
   Double_t _fehx3029[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3029[24] = {
   6.9985,
   6.4868,
   5.6776,
   5.2271,
   6.0955,
   6.4868,
   7.4757,
   6.637,
   6.5623,
   6.637,
   6.0955,
   7.9246,
   7.5415,
   6.8561,
   5.9318,
   6.8561,
   6.7108,
   6.3331,
   6.8561,
   6.1757,
   6.0955,
   6.0141,
   7.5415,
   6.8561};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-3.78,3.78);
   Graph_Graph3029->SetMinimum(17.62816);
   Graph_Graph3029->SetMaximum(76.86064);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1073.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 200.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 246.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  174.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 225.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 50.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 127.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3030[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3030[24] = {
   0.4375901,
   0.4149463,
   0.3853514,
   0.3323112,
   0.3160658,
   0.3330581,
   0.3520122,
   0.4304856,
   0.4537197,
   0.4569081,
   0.3638913,
   0.524426,
   0.3738789,
   0.3967714,
   0.4099013,
   0.4067777,
   0.3383335,
   0.3348996,
   0.3988498,
   0.3328274,
   0.4648916,
   0.4267144,
   0.477978,
   0.3742569};
   Double_t _fehx3030[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3030[24] = {
   0.4375901,
   0.4149463,
   0.3853514,
   0.3323112,
   0.3160658,
   0.3330581,
   0.3520122,
   0.4304856,
   0.4537197,
   0.4569081,
   0.3638913,
   0.524426,
   0.3738789,
   0.3967714,
   0.4099013,
   0.4067777,
   0.3383335,
   0.3348996,
   0.3988498,
   0.3328274,
   0.4648916,
   0.4267144,
   0.477978,
   0.3742569};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-3.78,3.78);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3031[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3031[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3031[24] = {
   0.2027982,
   0.2042328,
   0.2041176,
   0.1826581,
   0.1609127,
   0.1739919,
   0.1595507,
   0.184203,
   0.1896485,
   0.2059896,
   0.1905721,
   0.2015745,
   0.2007552,
   0.1846872,
   0.2079966,
   0.2020512,
   0.1921483,
   0.1722038,
   0.2064977,
   0.1944757,
   0.1994391,
   0.1981457,
   0.1860488,
   0.1756676};
   Double_t _fehx3031[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3031[24] = {
   0.2027982,
   0.2042328,
   0.2041176,
   0.1826581,
   0.1609127,
   0.1739919,
   0.1595507,
   0.184203,
   0.1896485,
   0.2059896,
   0.1905721,
   0.2015745,
   0.2007552,
   0.1846872,
   0.2079966,
   0.2020512,
   0.1921483,
   0.1722038,
   0.2064977,
   0.1944757,
   0.1994391,
   0.1981457,
   0.1860488,
   0.1756676};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-3.78,3.78);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3032[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3032[24] = {
   1.022717,
   0.9419856,
   0.6916406,
   0.5797949,
   0.8537352,
   0.8098911,
   1.065581,
   1.011948,
   0.9501285,
   0.9461502,
   0.8216237,
   1.42509,
   1.2252,
   1.108543,
   0.782836,
   1.099964,
   0.8887667,
   0.9173074,
   1.02674,
   0.8138265,
   0.7309837,
   0.8191035,
   0.9992242,
   0.8490988};
   Double_t _felx3032[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3032[24] = {
   0.1473224,
   0.1465927,
   0.1233363,
   0.1125589,
   0.1415695,
   0.126036,
   0.1435544,
   0.1538521,
   0.1461276,
   0.1438485,
   0.1362447,
   0.1809709,
   0.1635981,
   0.1630574,
   0.1334757,
   0.1617956,
   0.1336106,
   0.1462859,
   0.1510249,
   0.1331608,
   0.1212144,
   0.1377046,
   0.133424,
   0.1248954};
   Double_t _fehx3032[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3032[24] = {
   0.1431498,
   0.142104,
   0.1189957,
   0.1082373,
   0.1369459,
   0.1221768,
   0.1397538,
   0.1492511,
   0.1417052,
   0.1395466,
   0.1317949,
   0.1764574,
   0.1593077,
   0.1583391,
   0.1289896,
   0.1571138,
   0.1296595,
   0.1416927,
   0.1466548,
   0.1288705,
   0.1172556,
   0.1331397,
   0.129925,
   0.1212814};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-3.78,3.78);
   Graph_Graph3032->SetMinimum(0.3538048);
   Graph_Graph3032->SetMaximum(1.714979);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
