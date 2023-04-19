#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 12:26:07 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",164,172,1200,900);
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
   pad1->Range(-4.119231,-2.816825,3.957692,311.4815);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__19->SetBinContent(1,139.8636);
   hmc__19->SetBinContent(2,140.8412);
   hmc__19->SetBinContent(3,135.9828);
   hmc__19->SetBinContent(4,129.4274);
   hmc__19->SetBinContent(5,102.9676);
   hmc__19->SetBinContent(6,100.4478);
   hmc__19->SetBinContent(7,101.8212);
   hmc__19->SetBinContent(8,106.2906);
   hmc__19->SetBinContent(9,116.2769);
   hmc__19->SetBinContent(10,117.5625);
   hmc__19->SetBinContent(11,131.2293);
   hmc__19->SetBinContent(12,114.9005);
   hmc__19->SetBinContent(13,129.2196);
   hmc__19->SetBinContent(14,120.9512);
   hmc__19->SetBinContent(15,127.9398);
   hmc__19->SetBinContent(16,110.853);
   hmc__19->SetBinContent(17,111.7117);
   hmc__19->SetBinContent(18,98.84898);
   hmc__19->SetBinContent(19,93.18591);
   hmc__19->SetBinContent(20,111.8127);
   hmc__19->SetBinContent(21,115.5775);
   hmc__19->SetBinContent(22,122.7727);
   hmc__19->SetBinContent(23,127.4019);
   hmc__19->SetBinContent(24,134.7618);
   hmc__19->SetBinError(1,48.04922);
   hmc__19->SetBinError(2,49.63036);
   hmc__19->SetBinError(3,49.45835);
   hmc__19->SetBinError(4,46.62765);
   hmc__19->SetBinError(5,38.83642);
   hmc__19->SetBinError(6,36.91089);
   hmc__19->SetBinError(7,40.10444);
   hmc__19->SetBinError(8,42.20626);
   hmc__19->SetBinError(9,44.02901);
   hmc__19->SetBinError(10,43.30263);
   hmc__19->SetBinError(11,52.55524);
   hmc__19->SetBinError(12,42.92434);
   hmc__19->SetBinError(13,42.68615);
   hmc__19->SetBinError(14,45.13473);
   hmc__19->SetBinError(15,50.2674);
   hmc__19->SetBinError(16,42.86482);
   hmc__19->SetBinError(17,44.30071);
   hmc__19->SetBinError(18,59.68321);
   hmc__19->SetBinError(19,33.70548);
   hmc__19->SetBinError(20,41.05685);
   hmc__19->SetBinError(21,45.80044);
   hmc__19->SetBinError(22,46.07965);
   hmc__19->SetBinError(23,47.15811);
   hmc__19->SetBinError(24,45.08198);
   hmc__19->SetBinError(25,0.3895343);
   hmc__19->SetMinimum(-2.816825);
   hmc__19->SetMaximum(295.7666);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,-3.15,3.15);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(147.8833);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.791507);
   hbadmatch_stack_1->SetBinContent(2,2.958807);
   hbadmatch_stack_1->SetBinContent(3,2.908535);
   hbadmatch_stack_1->SetBinContent(4,3.008758);
   hbadmatch_stack_1->SetBinContent(5,3.846358);
   hbadmatch_stack_1->SetBinContent(6,1.662242);
   hbadmatch_stack_1->SetBinContent(7,3.245254);
   hbadmatch_stack_1->SetBinContent(8,1.946878);
   hbadmatch_stack_1->SetBinContent(9,3.337661);
   hbadmatch_stack_1->SetBinContent(10,1.123658);
   hbadmatch_stack_1->SetBinContent(11,2.644005);
   hbadmatch_stack_1->SetBinContent(12,2.142592);
   hbadmatch_stack_1->SetBinContent(13,1.864787);
   hbadmatch_stack_1->SetBinContent(14,2.309676);
   hbadmatch_stack_1->SetBinContent(15,1.125349);
   hbadmatch_stack_1->SetBinContent(16,2.355369);
   hbadmatch_stack_1->SetBinContent(17,4.387191);
   hbadmatch_stack_1->SetBinContent(18,1.896337);
   hbadmatch_stack_1->SetBinContent(19,2.618031);
   hbadmatch_stack_1->SetBinContent(20,2.709291);
   hbadmatch_stack_1->SetBinContent(21,0.9303237);
   hbadmatch_stack_1->SetBinContent(22,2.840536);
   hbadmatch_stack_1->SetBinContent(23,1.860094);
   hbadmatch_stack_1->SetBinContent(24,1.398624);
   hbadmatch_stack_1->SetBinError(1,0.9559828);
   hbadmatch_stack_1->SetBinError(2,0.8925811);
   hbadmatch_stack_1->SetBinError(3,0.9069169);
   hbadmatch_stack_1->SetBinError(4,0.9090266);
   hbadmatch_stack_1->SetBinError(5,1.028483);
   hbadmatch_stack_1->SetBinError(6,0.6513556);
   hbadmatch_stack_1->SetBinError(7,1.369204);
   hbadmatch_stack_1->SetBinError(8,0.6629295);
   hbadmatch_stack_1->SetBinError(9,1.032002);
   hbadmatch_stack_1->SetBinError(10,0.5188295);
   hbadmatch_stack_1->SetBinError(11,0.8232127);
   hbadmatch_stack_1->SetBinError(12,0.7894538);
   hbadmatch_stack_1->SetBinError(13,0.6246477);
   hbadmatch_stack_1->SetBinError(14,0.8457478);
   hbadmatch_stack_1->SetBinError(15,0.5194673);
   hbadmatch_stack_1->SetBinError(16,0.8581891);
   hbadmatch_stack_1->SetBinError(17,2.096486);
   hbadmatch_stack_1->SetBinError(18,0.8650998);
   hbadmatch_stack_1->SetBinError(19,0.8107254);
   hbadmatch_stack_1->SetBinError(20,0.8572561);
   hbadmatch_stack_1->SetBinError(21,0.4814682);
   hbadmatch_stack_1->SetBinError(22,0.8470923);
   hbadmatch_stack_1->SetBinError(23,0.7007469);
   hbadmatch_stack_1->SetBinError(24,0.5846098);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,7.650299);
   hext_stack_2->SetBinContent(2,7.041816);
   hext_stack_2->SetBinContent(3,10.9737);
   hext_stack_2->SetBinContent(4,11.6225);
   hext_stack_2->SetBinContent(5,5.187586);
   hext_stack_2->SetBinContent(6,12.50631);
   hext_stack_2->SetBinContent(7,10.81648);
   hext_stack_2->SetBinContent(8,10.11861);
   hext_stack_2->SetBinContent(9,7.340263);
   hext_stack_2->SetBinContent(10,9.772676);
   hext_stack_2->SetBinContent(11,5.262607);
   hext_stack_2->SetBinContent(12,3.654981);
   hext_stack_2->SetBinContent(13,6.303639);
   hext_stack_2->SetBinContent(14,4.132192);
   hext_stack_2->SetBinContent(15,4.221574);
   hext_stack_2->SetBinContent(16,3.722822);
   hext_stack_2->SetBinContent(17,7.974696);
   hext_stack_2->SetBinContent(18,7.519027);
   hext_stack_2->SetBinContent(19,10.02205);
   hext_stack_2->SetBinContent(20,13.74487);
   hext_stack_2->SetBinContent(21,7.511847);
   hext_stack_2->SetBinContent(22,5.82202);
   hext_stack_2->SetBinContent(23,3.57278);
   hext_stack_2->SetBinContent(24,11.93253);
   hext_stack_2->SetBinError(1,2.05189);
   hext_stack_2->SetBinError(2,1.76887);
   hext_stack_2->SetBinError(3,2.378866);
   hext_stack_2->SetBinError(4,2.422699);
   hext_stack_2->SetBinError(5,1.421289);
   hext_stack_2->SetBinError(6,2.51521);
   hext_stack_2->SetBinError(7,2.310329);
   hext_stack_2->SetBinError(8,2.096994);
   hext_stack_2->SetBinError(9,1.924218);
   hext_stack_2->SetBinError(10,2.212635);
   hext_stack_2->SetBinError(11,1.510415);
   hext_stack_2->SetBinError(12,1.163091);
   hext_stack_2->SetBinError(13,1.749156);
   hext_stack_2->SetBinError(14,1.282292);
   hext_stack_2->SetBinError(15,1.226034);
   hext_stack_2->SetBinError(16,1.347321);
   hext_stack_2->SetBinError(17,2.077375);
   hext_stack_2->SetBinError(18,1.84943);
   hext_stack_2->SetBinError(19,2.177084);
   hext_stack_2->SetBinError(20,2.560268);
   hext_stack_2->SetBinError(21,1.903048);
   hext_stack_2->SetBinError(22,1.622631);
   hext_stack_2->SetBinError(23,1.136966);
   hext_stack_2->SetBinError(24,2.525293);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.2516114);
   hdirt_stack_3->SetBinContent(2,0.3381872);
   hdirt_stack_3->SetBinContent(3,0.6515772);
   hdirt_stack_3->SetBinContent(4,0.4377912);
   hdirt_stack_3->SetBinContent(5,0.5570828);
   hdirt_stack_3->SetBinContent(6,0.6998254);
   hdirt_stack_3->SetBinContent(7,0.3569671);
   hdirt_stack_3->SetBinContent(8,0.6763744);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,1.3681);
   hdirt_stack_3->SetBinContent(11,0.185975);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.4377912);
   hdirt_stack_3->SetBinContent(14,0.4828655);
   hdirt_stack_3->SetBinContent(15,0.4950385);
   hdirt_stack_3->SetBinContent(17,0.4257011);
   hdirt_stack_3->SetBinContent(18,0.4403464);
   hdirt_stack_3->SetBinContent(19,1.212314);
   hdirt_stack_3->SetBinContent(20,0.3569671);
   hdirt_stack_3->SetBinContent(21,0.8089126);
   hdirt_stack_3->SetBinContent(22,0.4007975);
   hdirt_stack_3->SetBinContent(23,0.1380715);
   hdirt_stack_3->SetBinContent(24,0.2967022);
   hdirt_stack_3->SetBinError(1,0.2516114);
   hdirt_stack_3->SetBinError(2,0.3381872);
   hdirt_stack_3->SetBinError(3,0.4051801);
   hdirt_stack_3->SetBinError(4,0.3095651);
   hdirt_stack_3->SetBinError(5,0.4028472);
   hdirt_stack_3->SetBinError(6,0.4055767);
   hdirt_stack_3->SetBinError(7,0.258803);
   hdirt_stack_3->SetBinError(8,0.4782689);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.9804616);
   hdirt_stack_3->SetBinError(11,0.185975);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.3095651);
   hdirt_stack_3->SetBinError(14,0.3678347);
   hdirt_stack_3->SetBinError(15,0.2933304);
   hdirt_stack_3->SetBinError(17,0.3084732);
   hdirt_stack_3->SetBinError(18,0.3095757);
   hdirt_stack_3->SetBinError(19,0.5234408);
   hdirt_stack_3->SetBinError(20,0.258803);
   hdirt_stack_3->SetBinError(21,0.5056012);
   hdirt_stack_3->SetBinError(22,0.4007975);
   hdirt_stack_3->SetBinError(23,0.1380715);
   hdirt_stack_3->SetBinError(24,0.2103032);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,2.282739);
   houtFV_stack_4->SetBinContent(2,4.171592);
   houtFV_stack_4->SetBinContent(3,4.302433);
   houtFV_stack_4->SetBinContent(4,6.009046);
   houtFV_stack_4->SetBinContent(5,3.915561);
   houtFV_stack_4->SetBinContent(6,4.301298);
   houtFV_stack_4->SetBinContent(7,3.711152);
   houtFV_stack_4->SetBinContent(8,4.594985);
   houtFV_stack_4->SetBinContent(9,3.029106);
   houtFV_stack_4->SetBinContent(10,4.201875);
   houtFV_stack_4->SetBinContent(11,3.479853);
   houtFV_stack_4->SetBinContent(12,1.178602);
   houtFV_stack_4->SetBinContent(13,2.953991);
   houtFV_stack_4->SetBinContent(14,4.157836);
   houtFV_stack_4->SetBinContent(15,5.16821);
   houtFV_stack_4->SetBinContent(16,5.423096);
   houtFV_stack_4->SetBinContent(17,4.425132);
   houtFV_stack_4->SetBinContent(18,2.199135);
   houtFV_stack_4->SetBinContent(19,3.126077);
   houtFV_stack_4->SetBinContent(20,3.287192);
   houtFV_stack_4->SetBinContent(21,6.061349);
   houtFV_stack_4->SetBinContent(22,4.730286);
   houtFV_stack_4->SetBinContent(23,3.911248);
   houtFV_stack_4->SetBinContent(24,4.449832);
   houtFV_stack_4->SetBinError(1,0.7439353);
   houtFV_stack_4->SetBinError(2,1.100229);
   houtFV_stack_4->SetBinError(3,1.087754);
   houtFV_stack_4->SetBinError(4,1.249299);
   houtFV_stack_4->SetBinError(5,1.022148);
   houtFV_stack_4->SetBinError(6,1.019492);
   houtFV_stack_4->SetBinError(7,0.960871);
   houtFV_stack_4->SetBinError(8,1.093646);
   houtFV_stack_4->SetBinError(9,0.8313658);
   houtFV_stack_4->SetBinError(10,1.028948);
   houtFV_stack_4->SetBinError(11,0.9249909);
   houtFV_stack_4->SetBinError(12,0.4811646);
   houtFV_stack_4->SetBinError(13,0.7912199);
   houtFV_stack_4->SetBinError(14,0.9809893);
   houtFV_stack_4->SetBinError(15,1.151498);
   houtFV_stack_4->SetBinError(16,1.115258);
   houtFV_stack_4->SetBinError(17,1.015538);
   houtFV_stack_4->SetBinError(18,0.7607114);
   houtFV_stack_4->SetBinError(19,0.8995382);
   houtFV_stack_4->SetBinError(20,0.8700469);
   houtFV_stack_4->SetBinError(21,1.227845);
   houtFV_stack_4->SetBinError(22,1.126842);
   houtFV_stack_4->SetBinError(23,0.9814756);
   houtFV_stack_4->SetBinError(24,1.057532);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.5287719);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2043899);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.04832419);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5573358);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.9197081);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5294358);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.01769);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7529721);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7943219);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.8373359);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.7249039);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.753636);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1704726);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3437889);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.168174);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3378888);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3162714);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2741946);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2981109);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2578571);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2941681);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,57.88761);
   hNCpi0inFVres_stack_7->SetBinContent(2,60.6273);
   hNCpi0inFVres_stack_7->SetBinContent(3,59.94521);
   hNCpi0inFVres_stack_7->SetBinContent(4,63.08401);
   hNCpi0inFVres_stack_7->SetBinContent(5,49.43185);
   hNCpi0inFVres_stack_7->SetBinContent(6,46.66974);
   hNCpi0inFVres_stack_7->SetBinContent(7,49.18376);
   hNCpi0inFVres_stack_7->SetBinContent(8,52.27169);
   hNCpi0inFVres_stack_7->SetBinContent(9,58.10814);
   hNCpi0inFVres_stack_7->SetBinContent(10,55.04621);
   hNCpi0inFVres_stack_7->SetBinContent(11,59.85405);
   hNCpi0inFVres_stack_7->SetBinContent(12,48.87468);
   hNCpi0inFVres_stack_7->SetBinContent(13,52.77304);
   hNCpi0inFVres_stack_7->SetBinContent(14,56.45688);
   hNCpi0inFVres_stack_7->SetBinContent(15,62.67828);
   hNCpi0inFVres_stack_7->SetBinContent(16,55.12232);
   hNCpi0inFVres_stack_7->SetBinContent(17,51.28006);
   hNCpi0inFVres_stack_7->SetBinContent(18,47.48202);
   hNCpi0inFVres_stack_7->SetBinContent(19,43.66618);
   hNCpi0inFVres_stack_7->SetBinContent(20,51.35581);
   hNCpi0inFVres_stack_7->SetBinContent(21,57.61356);
   hNCpi0inFVres_stack_7->SetBinContent(22,60.09934);
   hNCpi0inFVres_stack_7->SetBinContent(23,57.97943);
   hNCpi0inFVres_stack_7->SetBinContent(24,54.83005);
   hNCpi0inFVres_stack_7->SetBinError(1,2.539242);
   hNCpi0inFVres_stack_7->SetBinError(2,2.608611);
   hNCpi0inFVres_stack_7->SetBinError(3,2.507131);
   hNCpi0inFVres_stack_7->SetBinError(4,2.677346);
   hNCpi0inFVres_stack_7->SetBinError(5,2.289252);
   hNCpi0inFVres_stack_7->SetBinError(6,2.207839);
   hNCpi0inFVres_stack_7->SetBinError(7,2.321582);
   hNCpi0inFVres_stack_7->SetBinError(8,2.363479);
   hNCpi0inFVres_stack_7->SetBinError(9,2.522582);
   hNCpi0inFVres_stack_7->SetBinError(10,2.43968);
   hNCpi0inFVres_stack_7->SetBinError(11,2.558038);
   hNCpi0inFVres_stack_7->SetBinError(12,2.258283);
   hNCpi0inFVres_stack_7->SetBinError(13,2.300374);
   hNCpi0inFVres_stack_7->SetBinError(14,2.483775);
   hNCpi0inFVres_stack_7->SetBinError(15,2.645723);
   hNCpi0inFVres_stack_7->SetBinError(16,2.427509);
   hNCpi0inFVres_stack_7->SetBinError(17,2.292776);
   hNCpi0inFVres_stack_7->SetBinError(18,2.287027);
   hNCpi0inFVres_stack_7->SetBinError(19,2.193544);
   hNCpi0inFVres_stack_7->SetBinError(20,2.289863);
   hNCpi0inFVres_stack_7->SetBinError(21,2.487755);
   hNCpi0inFVres_stack_7->SetBinError(22,2.548193);
   hNCpi0inFVres_stack_7->SetBinError(23,2.498669);
   hNCpi0inFVres_stack_7->SetBinError(24,2.467372);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,12.07843);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.73556);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.47375);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.46413);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.184853);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.546402);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.493266);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.967062);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.47018);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.37677);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.44819);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.134966);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.86128);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.30285);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.98583);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.63625);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.14517);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.817585);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.428065);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.91841);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.64986);
   hNCpi0inFVdis_stack_8->SetBinContent(22,10.91874);
   hNCpi0inFVdis_stack_8->SetBinContent(23,12.91112);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.84816);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.150526);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9996177);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.073253);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.163115);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8387486);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9580665);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.00344);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9601293);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.069166);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.099054);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.1492);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.012322);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.052502);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.018517);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.063721);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.015009);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9826335);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7953605);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8468689);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.107638);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.018518);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.071378);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.227611);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.094944);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1954681);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,19.04581);
   hCCpi0inFV_stack_10->SetBinContent(2,19.65746);
   hCCpi0inFV_stack_10->SetBinContent(3,17.87557);
   hCCpi0inFV_stack_10->SetBinContent(4,19.27161);
   hCCpi0inFV_stack_10->SetBinContent(5,16.66611);
   hCCpi0inFV_stack_10->SetBinContent(6,10.26338);
   hCCpi0inFV_stack_10->SetBinContent(7,11.67646);
   hCCpi0inFV_stack_10->SetBinContent(8,10.83869);
   hCCpi0inFV_stack_10->SetBinContent(9,17.76658);
   hCCpi0inFV_stack_10->SetBinContent(10,14.45794);
   hCCpi0inFV_stack_10->SetBinContent(11,17.77515);
   hCCpi0inFV_stack_10->SetBinContent(12,18.38102);
   hCCpi0inFV_stack_10->SetBinContent(13,18.32927);
   hCCpi0inFV_stack_10->SetBinContent(14,16.30508);
   hCCpi0inFV_stack_10->SetBinContent(15,18.17746);
   hCCpi0inFV_stack_10->SetBinContent(16,14.74824);
   hCCpi0inFV_stack_10->SetBinContent(17,13.73725);
   hCCpi0inFV_stack_10->SetBinContent(18,14.39356);
   hCCpi0inFV_stack_10->SetBinContent(19,10.15496);
   hCCpi0inFV_stack_10->SetBinContent(20,12.32598);
   hCCpi0inFV_stack_10->SetBinContent(21,15.25913);
   hCCpi0inFV_stack_10->SetBinContent(22,16.23721);
   hCCpi0inFV_stack_10->SetBinContent(23,21.1162);
   hCCpi0inFV_stack_10->SetBinContent(24,19.32436);
   hCCpi0inFV_stack_10->SetBinError(1,2.172679);
   hCCpi0inFV_stack_10->SetBinError(2,2.255216);
   hCCpi0inFV_stack_10->SetBinError(3,2.075571);
   hCCpi0inFV_stack_10->SetBinError(4,2.224807);
   hCCpi0inFV_stack_10->SetBinError(5,2.087317);
   hCCpi0inFV_stack_10->SetBinError(6,1.63187);
   hCCpi0inFV_stack_10->SetBinError(7,1.728832);
   hCCpi0inFV_stack_10->SetBinError(8,1.67663);
   hCCpi0inFV_stack_10->SetBinError(9,2.12631);
   hCCpi0inFV_stack_10->SetBinError(10,1.902195);
   hCCpi0inFV_stack_10->SetBinError(11,2.148844);
   hCCpi0inFV_stack_10->SetBinError(12,2.14156);
   hCCpi0inFV_stack_10->SetBinError(13,2.184766);
   hCCpi0inFV_stack_10->SetBinError(14,1.984525);
   hCCpi0inFV_stack_10->SetBinError(15,2.06616);
   hCCpi0inFV_stack_10->SetBinError(16,1.942606);
   hCCpi0inFV_stack_10->SetBinError(17,1.79775);
   hCCpi0inFV_stack_10->SetBinError(18,1.921547);
   hCCpi0inFV_stack_10->SetBinError(19,1.605715);
   hCCpi0inFV_stack_10->SetBinError(20,1.69379);
   hCCpi0inFV_stack_10->SetBinError(21,2.009868);
   hCCpi0inFV_stack_10->SetBinError(22,2.007923);
   hCCpi0inFV_stack_10->SetBinError(23,2.355142);
   hCCpi0inFV_stack_10->SetBinError(24,2.196346);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,11.15144);
   hNCinFV_stack_11->SetBinContent(2,9.628201);
   hNCinFV_stack_11->SetBinContent(3,14.64005);
   hNCinFV_stack_11->SetBinContent(4,9.039744);
   hNCinFV_stack_11->SetBinContent(5,8.644623);
   hNCinFV_stack_11->SetBinContent(6,7.570837);
   hNCinFV_stack_11->SetBinContent(7,8.407571);
   hNCinFV_stack_11->SetBinContent(8,9.289713);
   hNCinFV_stack_11->SetBinContent(9,9.828297);
   hNCinFV_stack_11->SetBinContent(10,8.58968);
   hNCinFV_stack_11->SetBinContent(11,8.817299);
   hNCinFV_stack_11->SetBinContent(12,11.57399);
   hNCinFV_stack_11->SetBinContent(13,11.28368);
   hNCinFV_stack_11->SetBinContent(14,9.239233);
   hNCinFV_stack_11->SetBinContent(15,12.54465);
   hNCinFV_stack_11->SetBinContent(16,9.806929);
   hNCinFV_stack_11->SetBinContent(17,11.04385);
   hNCinFV_stack_11->SetBinContent(18,8.111112);
   hNCinFV_stack_11->SetBinContent(19,9.034674);
   hNCinFV_stack_11->SetBinContent(20,9.345739);
   hNCinFV_stack_11->SetBinContent(21,9.92466);
   hNCinFV_stack_11->SetBinContent(22,11.12561);
   hNCinFV_stack_11->SetBinContent(23,12.8428);
   hNCinFV_stack_11->SetBinContent(24,9.187671);
   hNCinFV_stack_11->SetBinError(1,1.605764);
   hNCinFV_stack_11->SetBinError(2,1.558165);
   hNCinFV_stack_11->SetBinError(3,1.962068);
   hNCinFV_stack_11->SetBinError(4,1.520674);
   hNCinFV_stack_11->SetBinError(5,1.494788);
   hNCinFV_stack_11->SetBinError(6,1.387644);
   hNCinFV_stack_11->SetBinError(7,1.428528);
   hNCinFV_stack_11->SetBinError(8,1.520795);
   hNCinFV_stack_11->SetBinError(9,1.570955);
   hNCinFV_stack_11->SetBinError(10,1.507334);
   hNCinFV_stack_11->SetBinError(11,1.387834);
   hNCinFV_stack_11->SetBinError(12,1.733454);
   hNCinFV_stack_11->SetBinError(13,1.688044);
   hNCinFV_stack_11->SetBinError(14,1.467598);
   hNCinFV_stack_11->SetBinError(15,1.841651);
   hNCinFV_stack_11->SetBinError(16,1.630312);
   hNCinFV_stack_11->SetBinError(17,1.689111);
   hNCinFV_stack_11->SetBinError(18,1.442671);
   hNCinFV_stack_11->SetBinError(19,1.52002);
   hNCinFV_stack_11->SetBinError(20,1.441246);
   hNCinFV_stack_11->SetBinError(21,1.54508);
   hNCinFV_stack_11->SetBinError(22,1.721957);
   hNCinFV_stack_11->SetBinError(23,1.830774);
   hNCinFV_stack_11->SetBinError(24,1.480821);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,25.81626);
   hnumuCCinFV_stack_12->SetBinContent(2,24.33875);
   hnumuCCinFV_stack_12->SetBinContent(3,11.50375);
   hnumuCCinFV_stack_12->SetBinContent(4,4.318475);
   hnumuCCinFV_stack_12->SetBinContent(5,4.868733);
   hnumuCCinFV_stack_12->SetBinContent(6,6.974196);
   hnumuCCinFV_stack_12->SetBinContent(7,4.905935);
   hnumuCCinFV_stack_12->SetBinContent(8,6.583888);
   hnumuCCinFV_stack_12->SetBinContent(9,4.516169);
   hnumuCCinFV_stack_12->SetBinContent(10,9.875737);
   hnumuCCinFV_stack_12->SetBinContent(11,19.74238);
   hnumuCCinFV_stack_12->SetBinContent(12,18.62835);
   hnumuCCinFV_stack_12->SetBinContent(13,22.78731);
   hnumuCCinFV_stack_12->SetBinContent(14,15.43517);
   hnumuCCinFV_stack_12->SetBinContent(15,10.75496);
   hnumuCCinFV_stack_12->SetBinContent(16,6.98889);
   hnumuCCinFV_stack_12->SetBinContent(17,7.524131);
   hnumuCCinFV_stack_12->SetBinContent(18,7.8937);
   hnumuCCinFV_stack_12->SetBinContent(19,4.098788);
   hnumuCCinFV_stack_12->SetBinContent(20,6.550681);
   hnumuCCinFV_stack_12->SetBinContent(21,5.883214);
   hnumuCCinFV_stack_12->SetBinContent(22,9.075906);
   hnumuCCinFV_stack_12->SetBinContent(23,11.12764);
   hnumuCCinFV_stack_12->SetBinContent(24,20.1936);
   hnumuCCinFV_stack_12->SetBinError(1,2.871173);
   hnumuCCinFV_stack_12->SetBinError(2,3.777904);
   hnumuCCinFV_stack_12->SetBinError(3,1.919987);
   hnumuCCinFV_stack_12->SetBinError(4,1.011482);
   hnumuCCinFV_stack_12->SetBinError(5,1.179377);
   hnumuCCinFV_stack_12->SetBinError(6,1.406413);
   hnumuCCinFV_stack_12->SetBinError(7,1.180755);
   hnumuCCinFV_stack_12->SetBinError(8,1.34222);
   hnumuCCinFV_stack_12->SetBinError(9,1.491041);
   hnumuCCinFV_stack_12->SetBinError(10,1.695977);
   hnumuCCinFV_stack_12->SetBinError(11,2.917412);
   hnumuCCinFV_stack_12->SetBinError(12,2.340771);
   hnumuCCinFV_stack_12->SetBinError(13,2.616145);
   hnumuCCinFV_stack_12->SetBinError(14,2.261002);
   hnumuCCinFV_stack_12->SetBinError(15,1.710353);
   hnumuCCinFV_stack_12->SetBinError(16,1.463644);
   hnumuCCinFV_stack_12->SetBinError(17,1.843053);
   hnumuCCinFV_stack_12->SetBinError(18,1.905532);
   hnumuCCinFV_stack_12->SetBinError(19,1.006164);
   hnumuCCinFV_stack_12->SetBinError(20,1.421678);
   hnumuCCinFV_stack_12->SetBinError(21,1.215445);
   hnumuCCinFV_stack_12->SetBinError(22,1.590796);
   hnumuCCinFV_stack_12->SetBinError(23,1.752367);
   hnumuCCinFV_stack_12->SetBinError(24,2.687575);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_13->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.6905683);
   hnueCCinFV_stack_13->SetBinContent(4,0.5860533);
   hnueCCinFV_stack_13->SetBinContent(5,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(6,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(7,0.3688623);
   hnueCCinFV_stack_13->SetBinContent(8,0.4030693);
   hnueCCinFV_stack_13->SetBinContent(9,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(10,0.536893);
   hnueCCinFV_stack_13->SetBinContent(11,1.336411);
   hnueCCinFV_stack_13->SetBinContent(12,0.3866963);
   hnueCCinFV_stack_13->SetBinContent(13,1.109674);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(16,0.8910709);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,1.203684);
   hnueCCinFV_stack_13->SetBinContent(19,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(20,0.2560115);
   hnueCCinFV_stack_13->SetBinContent(22,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(23,1.035733);
   hnueCCinFV_stack_13->SetBinContent(24,1.267516);
   hnueCCinFV_stack_13->SetBinError(1,0.1974404);
   hnueCCinFV_stack_13->SetBinError(2,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.3994798);
   hnueCCinFV_stack_13->SetBinError(4,0.436212);
   hnueCCinFV_stack_13->SetBinError(5,0.4379386);
   hnueCCinFV_stack_13->SetBinError(6,0.2486649);
   hnueCCinFV_stack_13->SetBinError(7,0.3688623);
   hnueCCinFV_stack_13->SetBinError(8,0.2851617);
   hnueCCinFV_stack_13->SetBinError(9,0.2781975);
   hnueCCinFV_stack_13->SetBinError(10,0.3929602);
   hnueCCinFV_stack_13->SetBinError(11,0.5498147);
   hnueCCinFV_stack_13->SetBinError(12,0.3866963);
   hnueCCinFV_stack_13->SetBinError(13,0.5082303);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(16,0.5252073);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.7503767);
   hnueCCinFV_stack_13->SetBinError(19,0.4810838);
   hnueCCinFV_stack_13->SetBinError(20,0.2556439);
   hnueCCinFV_stack_13->SetBinError(22,0.3397478);
   hnueCCinFV_stack_13->SetBinError(23,0.5280575);
   hnueCCinFV_stack_13->SetBinError(24,0.5873469);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__20->SetBinContent(1,139.8636);
   hmcerror__20->SetBinContent(2,140.8412);
   hmcerror__20->SetBinContent(3,135.9828);
   hmcerror__20->SetBinContent(4,129.4274);
   hmcerror__20->SetBinContent(5,102.9676);
   hmcerror__20->SetBinContent(6,100.4478);
   hmcerror__20->SetBinContent(7,101.8212);
   hmcerror__20->SetBinContent(8,106.2906);
   hmcerror__20->SetBinContent(9,116.2769);
   hmcerror__20->SetBinContent(10,117.5625);
   hmcerror__20->SetBinContent(11,131.2293);
   hmcerror__20->SetBinContent(12,114.9005);
   hmcerror__20->SetBinContent(13,129.2196);
   hmcerror__20->SetBinContent(14,120.9512);
   hmcerror__20->SetBinContent(15,127.9398);
   hmcerror__20->SetBinContent(16,110.853);
   hmcerror__20->SetBinContent(17,111.7117);
   hmcerror__20->SetBinContent(18,98.84898);
   hmcerror__20->SetBinContent(19,93.18591);
   hmcerror__20->SetBinContent(20,111.8127);
   hmcerror__20->SetBinContent(21,115.5775);
   hmcerror__20->SetBinContent(22,122.7727);
   hmcerror__20->SetBinContent(23,127.4019);
   hmcerror__20->SetBinContent(24,134.7618);
   hmcerror__20->SetBinError(1,48.04922);
   hmcerror__20->SetBinError(2,49.63036);
   hmcerror__20->SetBinError(3,49.45835);
   hmcerror__20->SetBinError(4,46.62765);
   hmcerror__20->SetBinError(5,38.83642);
   hmcerror__20->SetBinError(6,36.91089);
   hmcerror__20->SetBinError(7,40.10444);
   hmcerror__20->SetBinError(8,42.20626);
   hmcerror__20->SetBinError(9,44.02901);
   hmcerror__20->SetBinError(10,43.30263);
   hmcerror__20->SetBinError(11,52.55524);
   hmcerror__20->SetBinError(12,42.92434);
   hmcerror__20->SetBinError(13,42.68615);
   hmcerror__20->SetBinError(14,45.13473);
   hmcerror__20->SetBinError(15,50.2674);
   hmcerror__20->SetBinError(16,42.86482);
   hmcerror__20->SetBinError(17,44.30071);
   hmcerror__20->SetBinError(18,59.68321);
   hmcerror__20->SetBinError(19,33.70548);
   hmcerror__20->SetBinError(20,41.05685);
   hmcerror__20->SetBinError(21,45.80044);
   hmcerror__20->SetBinError(22,46.07965);
   hmcerror__20->SetBinError(23,47.15811);
   hmcerror__20->SetBinError(24,45.08198);
   hmcerror__20->SetBinError(25,0.3895343);
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
   
   Double_t _fx3025[24] = {
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
   Double_t _fy3025[24] = {
   127,
   85,
   91,
   84,
   96,
   66,
   83,
   66,
   85,
   81,
   74,
   102,
   101,
   97,
   97,
   80,
   69,
   76,
   79,
   68,
   78,
   84,
   80,
   87};
   Double_t _felx3025[24] = {
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
   Double_t _fely3025[24] = {
   11.26943,
   9.3428,
   9.6617,
   9.2886,
   9.9196,
   8.2509,
   9.234,
   8.2509,
   9.3428,
   9.1239,
   8.7275,
   10.0995,
   10.04988,
   9.9704,
   9.9704,
   9.0683,
   8.4327,
   8.8425,
   9.0124,
   8.3726,
   8.9562,
   9.2886,
   9.0683,
   9.4503};
   Double_t _fehx3025[24] = {
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
   Double_t _fehy3025[24] = {
   11.26943,
   9.1411,
   9.46,
   9.0869,
   9.718,
   8.0483,
   9.0323,
   8.0483,
   9.1411,
   8.9221,
   8.5253,
   10.0995,
   10.04988,
   9.769,
   9.769,
   8.8665,
   8.2304,
   8.6406,
   8.8105,
   8.1701,
   8.7542,
   9.0869,
   8.8665,
   9.2488};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-3.78,3.78);
   Graph_Graph3025->SetMinimum(49.69707);
   Graph_Graph3025->SetMaximum(146.3215);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.7/24","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 95.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1312.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  246.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 240.7","F");

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
   
   Double_t _fx3026[24] = {
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
   Double_t _fy3026[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[24] = {
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
   Double_t _fely3026[24] = {
   0.3435434,
   0.3523851,
   0.3637103,
   0.3602612,
   0.3771711,
   0.3674634,
   0.3938712,
   0.3970835,
   0.3786567,
   0.368337,
   0.4004841,
   0.3735783,
   0.330338,
   0.3731647,
   0.3928987,
   0.3866816,
   0.3965629,
   0.6037818,
   0.3617015,
   0.3671931,
   0.3962747,
   0.3753248,
   0.3701525,
   0.3345307};
   Double_t _fehx3026[24] = {
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
   Double_t _fehy3026[24] = {
   0.3435434,
   0.3523851,
   0.3637103,
   0.3602612,
   0.3771711,
   0.3674634,
   0.3938712,
   0.3970835,
   0.3786567,
   0.368337,
   0.4004841,
   0.3735783,
   0.330338,
   0.3731647,
   0.3928987,
   0.3866816,
   0.3965629,
   0.6037818,
   0.3617015,
   0.3671931,
   0.3962747,
   0.3753248,
   0.3701525,
   0.3345307};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
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
   
   Double_t _fx3027[24] = {
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
   Double_t _fy3027[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[24] = {
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
   Double_t _fely3027[24] = {
   0.3162197,
   0.3203402,
   0.3199556,
   0.3269031,
   0.3484992,
   0.3259044,
   0.3438519,
   0.3502776,
   0.3490703,
   0.3326234,
   0.3408599,
   0.3288466,
   0.3076122,
   0.3438548,
   0.3552801,
   0.3495646,
   0.3353618,
   0.3387479,
   0.3245692,
   0.329437,
   0.3608379,
   0.3394697,
   0.3395277,
   0.3073013};
   Double_t _fehx3027[24] = {
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
   Double_t _fehy3027[24] = {
   0.3162197,
   0.3203402,
   0.3199556,
   0.3269031,
   0.3484992,
   0.3259044,
   0.3438519,
   0.3502776,
   0.3490703,
   0.3326234,
   0.3408599,
   0.3288466,
   0.3076122,
   0.3438548,
   0.3552801,
   0.3495646,
   0.3353618,
   0.3387479,
   0.3245692,
   0.329437,
   0.3608379,
   0.3394697,
   0.3395277,
   0.3073013};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
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
   
   Double_t _fx3028[24] = {
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
   Double_t _fy3028[24] = {
   0.9080275,
   0.6035164,
   0.6692021,
   0.6490127,
   0.9323317,
   0.6570577,
   0.8151544,
   0.620939,
   0.7310139,
   0.6889951,
   0.5638985,
   0.8877245,
   0.7816151,
   0.801976,
   0.7581688,
   0.7216764,
   0.6176615,
   0.7688496,
   0.8477677,
   0.60816,
   0.6748718,
   0.6841911,
   0.6279343,
   0.6455833};
   Double_t _felx3028[24] = {
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
   Double_t _fely3028[24] = {
   0.08057441,
   0.06633569,
   0.07105088,
   0.0717669,
   0.09633706,
   0.08214117,
   0.09068839,
   0.07762584,
   0.08034961,
   0.07760892,
   0.06650573,
   0.08789782,
   0.07777361,
   0.08243321,
   0.07793037,
   0.08180472,
   0.07548629,
   0.08945464,
   0.0967142,
   0.07488059,
   0.07749086,
   0.07565687,
   0.07117871,
   0.07012593};
   Double_t _fehx3028[24] = {
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
   Double_t _fehy3028[24] = {
   0.08057441,
   0.06490358,
   0.0695676,
   0.0702085,
   0.09437916,
   0.0801242,
   0.08870746,
   0.07571975,
   0.07861496,
   0.07589238,
   0.06496492,
   0.08789782,
   0.07777361,
   0.08076808,
   0.07635619,
   0.07998429,
   0.07367538,
   0.08741213,
   0.09454756,
   0.07306953,
   0.07574311,
   0.074014,
   0.06959475,
   0.0686307};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-3.78,3.78);
   Graph_Graph3028->SetMinimum(0.4444609);
   Graph_Graph3028->SetMaximum(1.079643);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
