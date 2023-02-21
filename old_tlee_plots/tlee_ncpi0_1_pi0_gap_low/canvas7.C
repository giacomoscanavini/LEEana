#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 21:57:10 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",190,172,1200,900);
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
   pad1->Range(-7.692308,-5.343113,56.41026,590.8358);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmc__19->SetBinContent(1,267.1556);
   hmc__19->SetBinContent(2,97.81565);
   hmc__19->SetBinContent(3,110.4313);
   hmc__19->SetBinContent(4,123.7591);
   hmc__19->SetBinContent(5,123.3545);
   hmc__19->SetBinContent(6,107.0476);
   hmc__19->SetBinContent(7,116.0444);
   hmc__19->SetBinContent(8,109.9159);
   hmc__19->SetBinContent(9,99.91444);
   hmc__19->SetBinContent(10,98.00282);
   hmc__19->SetBinContent(11,81.1581);
   hmc__19->SetBinContent(12,69.07955);
   hmc__19->SetBinContent(13,62.70641);
   hmc__19->SetBinContent(14,74.35973);
   hmc__19->SetBinContent(15,60.48214);
   hmc__19->SetBinContent(16,53.66122);
   hmc__19->SetBinContent(17,47.64808);
   hmc__19->SetBinContent(18,46.98301);
   hmc__19->SetBinContent(19,41.42358);
   hmc__19->SetBinContent(20,43.13279);
   hmc__19->SetBinContent(21,554.9804);
   hmc__19->SetBinError(1,81.1964);
   hmc__19->SetBinError(2,53.22261);
   hmc__19->SetBinError(3,49.62258);
   hmc__19->SetBinError(4,49.30322);
   hmc__19->SetBinError(5,53.84817);
   hmc__19->SetBinError(6,46.41741);
   hmc__19->SetBinError(7,48.1038);
   hmc__19->SetBinError(8,46.09547);
   hmc__19->SetBinError(9,40.30716);
   hmc__19->SetBinError(10,38.84499);
   hmc__19->SetBinError(11,32.32479);
   hmc__19->SetBinError(12,36.37101);
   hmc__19->SetBinError(13,27.12565);
   hmc__19->SetBinError(14,27.34583);
   hmc__19->SetBinError(15,25.98721);
   hmc__19->SetBinError(16,23.44221);
   hmc__19->SetBinError(17,22.11971);
   hmc__19->SetBinError(18,19.36658);
   hmc__19->SetBinError(19,17.56383);
   hmc__19->SetBinError(20,19.7243);
   hmc__19->SetBinError(21,163.6982);
   hmc__19->SetMinimum(-5.343113);
   hmc__19->SetMaximum(561.0268);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,0,50);
   hs7_stack_7->SetMinimum(-9.660135e-09);
   hs7_stack_7->SetMaximum(280.5134);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,7.744762);
   hbadmatch_stack_1->SetBinContent(2,0.9400439);
   hbadmatch_stack_1->SetBinContent(3,1.29408);
   hbadmatch_stack_1->SetBinContent(4,2.217211);
   hbadmatch_stack_1->SetBinContent(5,2.866836);
   hbadmatch_stack_1->SetBinContent(6,3.944877);
   hbadmatch_stack_1->SetBinContent(7,1.677181);
   hbadmatch_stack_1->SetBinContent(8,0.3917402);
   hbadmatch_stack_1->SetBinContent(9,1.751114);
   hbadmatch_stack_1->SetBinContent(10,0.7319179);
   hbadmatch_stack_1->SetBinContent(11,1.437038);
   hbadmatch_stack_1->SetBinContent(12,1.25545);
   hbadmatch_stack_1->SetBinContent(13,0.7094111);
   hbadmatch_stack_1->SetBinContent(14,0.9141546);
   hbadmatch_stack_1->SetBinContent(15,1.10938);
   hbadmatch_stack_1->SetBinContent(16,1.44855);
   hbadmatch_stack_1->SetBinContent(17,2.047238);
   hbadmatch_stack_1->SetBinContent(18,0.6107302);
   hbadmatch_stack_1->SetBinContent(19,1.161369);
   hbadmatch_stack_1->SetBinContent(20,0.8707446);
   hbadmatch_stack_1->SetBinContent(21,19.7064);
   hbadmatch_stack_1->SetBinError(1,1.593054);
   hbadmatch_stack_1->SetBinError(2,0.3980697);
   hbadmatch_stack_1->SetBinError(3,0.6281769);
   hbadmatch_stack_1->SetBinError(4,0.7026041);
   hbadmatch_stack_1->SetBinError(5,1.279599);
   hbadmatch_stack_1->SetBinError(6,2.056219);
   hbadmatch_stack_1->SetBinError(7,0.7693377);
   hbadmatch_stack_1->SetBinError(8,0.2770047);
   hbadmatch_stack_1->SetBinError(9,0.6952197);
   hbadmatch_stack_1->SetBinError(10,0.438694);
   hbadmatch_stack_1->SetBinError(11,0.5987228);
   hbadmatch_stack_1->SetBinError(12,0.6117766);
   hbadmatch_stack_1->SetBinError(13,0.3606367);
   hbadmatch_stack_1->SetBinError(14,0.6176473);
   hbadmatch_stack_1->SetBinError(15,0.5352349);
   hbadmatch_stack_1->SetBinError(16,0.569284);
   hbadmatch_stack_1->SetBinError(17,0.8678546);
   hbadmatch_stack_1->SetBinError(18,0.3993243);
   hbadmatch_stack_1->SetBinError(19,0.484549);
   hbadmatch_stack_1->SetBinError(20,0.3978309);
   hbadmatch_stack_1->SetBinError(21,2.418833);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hext_stack_2->SetBinContent(1,18.83149);
   hext_stack_2->SetBinContent(2,5.166044);
   hext_stack_2->SetBinContent(3,4.385977);
   hext_stack_2->SetBinContent(4,9.187313);
   hext_stack_2->SetBinContent(5,6.571785);
   hext_stack_2->SetBinContent(6,6.553016);
   hext_stack_2->SetBinContent(7,9.634223);
   hext_stack_2->SetBinContent(8,9.671704);
   hext_stack_2->SetBinContent(9,10.79053);
   hext_stack_2->SetBinContent(10,7.732501);
   hext_stack_2->SetBinContent(11,6.691468);
   hext_stack_2->SetBinContent(12,2.185808);
   hext_stack_2->SetBinContent(13,3.241202);
   hext_stack_2->SetBinContent(14,12.06658);
   hext_stack_2->SetBinContent(15,2.994597);
   hext_stack_2->SetBinContent(16,3.412785);
   hext_stack_2->SetBinContent(17,5.516392);
   hext_stack_2->SetBinContent(18,3.323403);
   hext_stack_2->SetBinContent(19,2.834603);
   hext_stack_2->SetBinContent(20,4.595042);
   hext_stack_2->SetBinContent(21,53.04143);
   hext_stack_2->SetBinError(1,2.963482);
   hext_stack_2->SetBinError(2,1.619774);
   hext_stack_2->SetBinError(3,1.274103);
   hext_stack_2->SetBinError(4,2.238896);
   hext_stack_2->SetBinError(5,1.62364);
   hext_stack_2->SetBinError(6,1.703963);
   hext_stack_2->SetBinError(7,2.075354);
   hext_stack_2->SetBinError(8,2.25897);
   hext_stack_2->SetBinError(9,2.409586);
   hext_stack_2->SetBinError(10,2.06648);
   hext_stack_2->SetBinError(11,1.868729);
   hext_stack_2->SetBinError(12,1.006415);
   hext_stack_2->SetBinError(13,1.178414);
   hext_stack_2->SetBinError(14,2.61355);
   hext_stack_2->SetBinError(15,1.099269);
   hext_stack_2->SetBinError(16,1.14352);
   hext_stack_2->SetBinError(17,1.503469);
   hext_stack_2->SetBinError(18,1.20364);
   hext_stack_2->SetBinError(19,1.106046);
   hext_stack_2->SetBinError(20,1.529106);
   hext_stack_2->SetBinError(21,4.957772);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,1.260217);
   hdirt_stack_3->SetBinContent(2,0.4377912);
   hdirt_stack_3->SetBinContent(3,0.3381872);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.2188956);
   hdirt_stack_3->SetBinContent(6,1.06838);
   hdirt_stack_3->SetBinContent(7,0.5016454);
   hdirt_stack_3->SetBinContent(8,0.9403316);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.1753185);
   hdirt_stack_3->SetBinContent(12,0.6085784);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.00255526);
   hdirt_stack_3->SetBinContent(19,0.1380715);
   hdirt_stack_3->SetBinContent(20,0.2188956);
   hdirt_stack_3->SetBinContent(21,4.334153);
   hdirt_stack_3->SetBinError(1,0.5380643);
   hdirt_stack_3->SetBinError(2,0.3095651);
   hdirt_stack_3->SetBinError(3,0.3381872);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.2188956);
   hdirt_stack_3->SetBinError(6,0.9404988);
   hdirt_stack_3->SetBinError(7,0.2964976);
   hdirt_stack_3->SetBinError(8,0.5220551);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.1753185);
   hdirt_stack_3->SetBinError(12,0.3609533);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(18,0.00255526);
   hdirt_stack_3->SetBinError(19,0.1380715);
   hdirt_stack_3->SetBinError(20,0.2188956);
   hdirt_stack_3->SetBinError(21,1.074216);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,11.44944);
   houtFV_stack_4->SetBinContent(2,1.611141);
   houtFV_stack_4->SetBinContent(3,3.092992);
   houtFV_stack_4->SetBinContent(4,4.488039);
   houtFV_stack_4->SetBinContent(5,2.315939);
   houtFV_stack_4->SetBinContent(6,3.364103);
   houtFV_stack_4->SetBinContent(7,2.521866);
   houtFV_stack_4->SetBinContent(8,3.898293);
   houtFV_stack_4->SetBinContent(9,3.269993);
   houtFV_stack_4->SetBinContent(10,2.898869);
   houtFV_stack_4->SetBinContent(11,2.484526);
   houtFV_stack_4->SetBinContent(12,2.331718);
   houtFV_stack_4->SetBinContent(13,1.250748);
   houtFV_stack_4->SetBinContent(14,2.288043);
   houtFV_stack_4->SetBinContent(15,3.518524);
   houtFV_stack_4->SetBinContent(16,2.117154);
   houtFV_stack_4->SetBinContent(17,2.245136);
   houtFV_stack_4->SetBinContent(18,2.302648);
   houtFV_stack_4->SetBinContent(19,1.684821);
   houtFV_stack_4->SetBinContent(20,1.321491);
   houtFV_stack_4->SetBinContent(21,26.36686);
   houtFV_stack_4->SetBinError(1,1.734799);
   houtFV_stack_4->SetBinError(2,0.5574838);
   houtFV_stack_4->SetBinError(3,0.8554871);
   houtFV_stack_4->SetBinError(4,1.015951);
   houtFV_stack_4->SetBinError(5,0.6579328);
   houtFV_stack_4->SetBinError(6,0.9656114);
   houtFV_stack_4->SetBinError(7,0.707728);
   houtFV_stack_4->SetBinError(8,0.9842525);
   houtFV_stack_4->SetBinError(9,0.9281795);
   houtFV_stack_4->SetBinError(10,0.8129856);
   houtFV_stack_4->SetBinError(11,0.770794);
   houtFV_stack_4->SetBinError(12,0.6797071);
   houtFV_stack_4->SetBinError(13,0.4856947);
   houtFV_stack_4->SetBinError(14,0.786313);
   houtFV_stack_4->SetBinError(15,1.021536);
   houtFV_stack_4->SetBinError(16,0.7047718);
   houtFV_stack_4->SetBinError(17,0.7886283);
   houtFV_stack_4->SetBinError(18,0.7669124);
   houtFV_stack_4->SetBinError(19,0.5592495);
   houtFV_stack_4->SetBinError(20,0.5754251);
   houtFV_stack_4->SetBinError(21,2.485781);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.498156);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.03556623);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2069708);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4744286);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2586376);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.06912473);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3078786);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3243763);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1625395);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02889211);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1123544);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08160993);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.744334);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1735004);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02893407);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1589233);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2335793);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1087492);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04959411);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1666755);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.258055);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1625395);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02889211);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.06591418);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.0605241);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3973283);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.8702028);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2529775);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.512555);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5098631);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.205828);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4037324);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5135232);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3697123);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.2088957);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4352134);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2530867);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.440039);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5178984);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1979891);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.4573363);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4564325);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1885241);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.379352);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.208807);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1148537);
   hNCpi0inFVqe_stack_6->SetBinContent(21,2.448277);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2344825);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.08539935);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1757309);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1209218);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3480876);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1867319);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1709039);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1547493);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08167597);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.13861);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1316525);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1975601);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2291623);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1360716);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1978573);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2499437);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.07866535);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1560517);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1430441);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05497715);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.5112215);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,73.36753);
   hNCpi0inFVres_stack_7->SetBinContent(2,49.88319);
   hNCpi0inFVres_stack_7->SetBinContent(3,52.40908);
   hNCpi0inFVres_stack_7->SetBinContent(4,51.31216);
   hNCpi0inFVres_stack_7->SetBinContent(5,53.28129);
   hNCpi0inFVres_stack_7->SetBinContent(6,46.30061);
   hNCpi0inFVres_stack_7->SetBinContent(7,45.51929);
   hNCpi0inFVres_stack_7->SetBinContent(8,43.45243);
   hNCpi0inFVres_stack_7->SetBinContent(9,42.37304);
   hNCpi0inFVres_stack_7->SetBinContent(10,38.68);
   hNCpi0inFVres_stack_7->SetBinContent(11,32.71516);
   hNCpi0inFVres_stack_7->SetBinContent(12,32.02477);
   hNCpi0inFVres_stack_7->SetBinContent(13,27.32108);
   hNCpi0inFVres_stack_7->SetBinContent(14,26.20572);
   hNCpi0inFVres_stack_7->SetBinContent(15,24.33828);
   hNCpi0inFVres_stack_7->SetBinContent(16,20.77927);
   hNCpi0inFVres_stack_7->SetBinContent(17,19.42328);
   hNCpi0inFVres_stack_7->SetBinContent(18,20.22479);
   hNCpi0inFVres_stack_7->SetBinContent(19,17.18585);
   hNCpi0inFVres_stack_7->SetBinContent(20,16.97477);
   hNCpi0inFVres_stack_7->SetBinContent(21,180.3706);
   hNCpi0inFVres_stack_7->SetBinError(1,2.563095);
   hNCpi0inFVres_stack_7->SetBinError(2,2.121277);
   hNCpi0inFVres_stack_7->SetBinError(3,2.121632);
   hNCpi0inFVres_stack_7->SetBinError(4,2.083437);
   hNCpi0inFVres_stack_7->SetBinError(5,2.237826);
   hNCpi0inFVres_stack_7->SetBinError(6,1.951524);
   hNCpi0inFVres_stack_7->SetBinError(7,1.92641);
   hNCpi0inFVres_stack_7->SetBinError(8,1.913029);
   hNCpi0inFVres_stack_7->SetBinError(9,1.995554);
   hNCpi0inFVres_stack_7->SetBinError(10,1.888163);
   hNCpi0inFVres_stack_7->SetBinError(11,1.681839);
   hNCpi0inFVres_stack_7->SetBinError(12,1.722367);
   hNCpi0inFVres_stack_7->SetBinError(13,1.582682);
   hNCpi0inFVres_stack_7->SetBinError(14,1.468539);
   hNCpi0inFVres_stack_7->SetBinError(15,1.610998);
   hNCpi0inFVres_stack_7->SetBinError(16,1.418354);
   hNCpi0inFVres_stack_7->SetBinError(17,1.330299);
   hNCpi0inFVres_stack_7->SetBinError(18,1.656177);
   hNCpi0inFVres_stack_7->SetBinError(19,1.29227);
   hNCpi0inFVres_stack_7->SetBinError(20,1.335075);
   hNCpi0inFVres_stack_7->SetBinError(21,4.318412);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,14.93686);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.986239);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.477657);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.85569);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.12114);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.550005);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.13726);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.37484);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.530076);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.516941);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.103199);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.276824);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.255266);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.094373);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.130076);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.127251);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.137033);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.350666);
   hNCpi0inFVdis_stack_8->SetBinContent(19,3.748162);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.560097);
   hNCpi0inFVdis_stack_8->SetBinContent(21,43.34789);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.155023);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9936456);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8314528);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.075084);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.266264);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9051362);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.155499);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8881467);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9003752);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.099627);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7369002);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9020696);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8980614);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.020565);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.024582);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.863074);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6874134);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7633139);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6948624);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5917826);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.242023);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.06045564);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2558582);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1506296);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05214635);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1581319);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.04599361);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1694829);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1331511);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.030178);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.07758017);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,46.98834);
   hCCpi0inFV_stack_10->SetBinContent(2,12.90728);
   hCCpi0inFV_stack_10->SetBinContent(3,20.15859);
   hCCpi0inFV_stack_10->SetBinContent(4,22.69027);
   hCCpi0inFV_stack_10->SetBinContent(5,19.80806);
   hCCpi0inFV_stack_10->SetBinContent(6,18.35246);
   hCCpi0inFV_stack_10->SetBinContent(7,20.13009);
   hCCpi0inFV_stack_10->SetBinContent(8,23.30893);
   hCCpi0inFV_stack_10->SetBinContent(9,15.13894);
   hCCpi0inFV_stack_10->SetBinContent(10,17.41213);
   hCCpi0inFV_stack_10->SetBinContent(11,16.01976);
   hCCpi0inFV_stack_10->SetBinContent(12,11.81381);
   hCCpi0inFV_stack_10->SetBinContent(13,9.819844);
   hCCpi0inFV_stack_10->SetBinContent(14,13.25846);
   hCCpi0inFV_stack_10->SetBinContent(15,8.982257);
   hCCpi0inFV_stack_10->SetBinContent(16,8.831196);
   hCCpi0inFV_stack_10->SetBinContent(17,5.713571);
   hCCpi0inFV_stack_10->SetBinContent(18,7.234041);
   hCCpi0inFV_stack_10->SetBinContent(19,6.805793);
   hCCpi0inFV_stack_10->SetBinContent(20,7.34707);
   hCCpi0inFV_stack_10->SetBinContent(21,71.0636);
   hCCpi0inFV_stack_10->SetBinError(1,3.423673);
   hCCpi0inFV_stack_10->SetBinError(2,1.766187);
   hCCpi0inFV_stack_10->SetBinError(3,2.296722);
   hCCpi0inFV_stack_10->SetBinError(4,2.380022);
   hCCpi0inFV_stack_10->SetBinError(5,2.195199);
   hCCpi0inFV_stack_10->SetBinError(6,2.18677);
   hCCpi0inFV_stack_10->SetBinError(7,2.263751);
   hCCpi0inFV_stack_10->SetBinError(8,2.469696);
   hCCpi0inFV_stack_10->SetBinError(9,1.913857);
   hCCpi0inFV_stack_10->SetBinError(10,2.01557);
   hCCpi0inFV_stack_10->SetBinError(11,2.081154);
   hCCpi0inFV_stack_10->SetBinError(12,1.749924);
   hCCpi0inFV_stack_10->SetBinError(13,1.5699);
   hCCpi0inFV_stack_10->SetBinError(14,1.856944);
   hCCpi0inFV_stack_10->SetBinError(15,1.48708);
   hCCpi0inFV_stack_10->SetBinError(16,1.506358);
   hCCpi0inFV_stack_10->SetBinError(17,1.209652);
   hCCpi0inFV_stack_10->SetBinError(18,1.345794);
   hCCpi0inFV_stack_10->SetBinError(19,1.257018);
   hCCpi0inFV_stack_10->SetBinError(20,1.364107);
   hCCpi0inFV_stack_10->SetBinError(21,4.238224);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,26.6878);
   hNCinFV_stack_11->SetBinContent(2,9.631088);
   hNCinFV_stack_11->SetBinContent(3,12.63729);
   hNCinFV_stack_11->SetBinContent(4,12.48411);
   hNCinFV_stack_11->SetBinContent(5,12.99933);
   hNCinFV_stack_11->SetBinContent(6,10.94758);
   hNCinFV_stack_11->SetBinContent(7,15.97001);
   hNCinFV_stack_11->SetBinContent(8,9.948531);
   hNCinFV_stack_11->SetBinContent(9,11.06188);
   hNCinFV_stack_11->SetBinContent(10,10.67532);
   hNCinFV_stack_11->SetBinContent(11,8.066231);
   hNCinFV_stack_11->SetBinContent(12,6.238505);
   hNCinFV_stack_11->SetBinContent(13,7.577599);
   hNCinFV_stack_11->SetBinContent(14,5.128665);
   hNCinFV_stack_11->SetBinContent(15,4.744387);
   hNCinFV_stack_11->SetBinContent(16,6.711083);
   hNCinFV_stack_11->SetBinContent(17,3.829379);
   hNCinFV_stack_11->SetBinContent(18,4.394549);
   hNCinFV_stack_11->SetBinContent(19,3.787676);
   hNCinFV_stack_11->SetBinContent(20,3.552147);
   hNCinFV_stack_11->SetBinContent(21,60.55931);
   hNCinFV_stack_11->SetBinError(1,2.875654);
   hNCinFV_stack_11->SetBinError(2,1.497292);
   hNCinFV_stack_11->SetBinError(3,1.842137);
   hNCinFV_stack_11->SetBinError(4,1.972733);
   hNCinFV_stack_11->SetBinError(5,1.993394);
   hNCinFV_stack_11->SetBinError(6,1.896426);
   hNCinFV_stack_11->SetBinError(7,2.628794);
   hNCinFV_stack_11->SetBinError(8,1.935177);
   hNCinFV_stack_11->SetBinError(9,1.830223);
   hNCinFV_stack_11->SetBinError(10,1.798641);
   hNCinFV_stack_11->SetBinError(11,1.562569);
   hNCinFV_stack_11->SetBinError(12,1.340714);
   hNCinFV_stack_11->SetBinError(13,1.521869);
   hNCinFV_stack_11->SetBinError(14,1.138636);
   hNCinFV_stack_11->SetBinError(15,1.244716);
   hNCinFV_stack_11->SetBinError(16,1.436624);
   hNCinFV_stack_11->SetBinError(17,1.019432);
   hNCinFV_stack_11->SetBinError(18,1.115502);
   hNCinFV_stack_11->SetBinError(19,1.091276);
   hNCinFV_stack_11->SetBinError(20,1.109332);
   hNCinFV_stack_11->SetBinError(21,4.166682);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,62.6022);
   hnumuCCinFV_stack_12->SetBinContent(2,7.174455);
   hnumuCCinFV_stack_12->SetBinContent(3,6.928203);
   hnumuCCinFV_stack_12->SetBinContent(4,9.334316);
   hnumuCCinFV_stack_12->SetBinContent(5,10.36664);
   hnumuCCinFV_stack_12->SetBinContent(6,5.832552);
   hnumuCCinFV_stack_12->SetBinContent(7,7.824822);
   hnumuCCinFV_stack_12->SetBinContent(8,8.294892);
   hnumuCCinFV_stack_12->SetBinContent(9,5.915847);
   hnumuCCinFV_stack_12->SetBinContent(10,9.927929);
   hnumuCCinFV_stack_12->SetBinContent(11,7.056185);
   hnumuCCinFV_stack_12->SetBinContent(12,5.689362);
   hnumuCCinFV_stack_12->SetBinContent(13,3.99186);
   hnumuCCinFV_stack_12->SetBinContent(14,6.752504);
   hnumuCCinFV_stack_12->SetBinContent(15,6.74548);
   hnumuCCinFV_stack_12->SetBinContent(16,4.428594);
   hnumuCCinFV_stack_12->SetBinContent(17,4.534836);
   hnumuCCinFV_stack_12->SetBinContent(18,3.941894);
   hnumuCCinFV_stack_12->SetBinContent(19,3.55935);
   hnumuCCinFV_stack_12->SetBinContent(20,4.496073);
   hnumuCCinFV_stack_12->SetBinContent(21,84.98862);
   hnumuCCinFV_stack_12->SetBinError(1,4.827288);
   hnumuCCinFV_stack_12->SetBinError(2,1.43328);
   hnumuCCinFV_stack_12->SetBinError(3,1.499254);
   hnumuCCinFV_stack_12->SetBinError(4,2.012689);
   hnumuCCinFV_stack_12->SetBinError(5,1.979104);
   hnumuCCinFV_stack_12->SetBinError(6,1.200799);
   hnumuCCinFV_stack_12->SetBinError(7,1.455261);
   hnumuCCinFV_stack_12->SetBinError(8,1.580677);
   hnumuCCinFV_stack_12->SetBinError(9,1.164576);
   hnumuCCinFV_stack_12->SetBinError(10,2.09575);
   hnumuCCinFV_stack_12->SetBinError(11,1.35607);
   hnumuCCinFV_stack_12->SetBinError(12,1.198687);
   hnumuCCinFV_stack_12->SetBinError(13,0.9985821);
   hnumuCCinFV_stack_12->SetBinError(14,1.415927);
   hnumuCCinFV_stack_12->SetBinError(15,1.40302);
   hnumuCCinFV_stack_12->SetBinError(16,1.505576);
   hnumuCCinFV_stack_12->SetBinError(17,1.083589);
   hnumuCCinFV_stack_12->SetBinError(18,1.147284);
   hnumuCCinFV_stack_12->SetBinError(19,0.9571462);
   hnumuCCinFV_stack_12->SetBinError(20,1.530906);
   hnumuCCinFV_stack_12->SetBinError(21,5.533989);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,1.858186);
   hnueCCinFV_stack_13->SetBinContent(2,0.7890683);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(4,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(8,0.1953927);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.7855579);
   hnueCCinFV_stack_13->SetBinContent(13,0.9926134);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,6.850811);
   hnueCCinFV_stack_13->SetBinError(1,0.8777648);
   hnueCCinFV_stack_13->SetBinError(2,0.4671225);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.2770047);
   hnueCCinFV_stack_13->SetBinError(5,0.2770047);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(8,0.1950252);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.465029);
   hnueCCinFV_stack_13->SetBinError(13,0.5089633);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.2107157);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,1.392289);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmcerror__20->SetBinContent(1,267.1556);
   hmcerror__20->SetBinContent(2,97.81565);
   hmcerror__20->SetBinContent(3,110.4313);
   hmcerror__20->SetBinContent(4,123.7591);
   hmcerror__20->SetBinContent(5,123.3545);
   hmcerror__20->SetBinContent(6,107.0476);
   hmcerror__20->SetBinContent(7,116.0444);
   hmcerror__20->SetBinContent(8,109.9159);
   hmcerror__20->SetBinContent(9,99.91444);
   hmcerror__20->SetBinContent(10,98.00282);
   hmcerror__20->SetBinContent(11,81.1581);
   hmcerror__20->SetBinContent(12,69.07955);
   hmcerror__20->SetBinContent(13,62.70641);
   hmcerror__20->SetBinContent(14,74.35973);
   hmcerror__20->SetBinContent(15,60.48214);
   hmcerror__20->SetBinContent(16,53.66122);
   hmcerror__20->SetBinContent(17,47.64808);
   hmcerror__20->SetBinContent(18,46.98301);
   hmcerror__20->SetBinContent(19,41.42358);
   hmcerror__20->SetBinContent(20,43.13279);
   hmcerror__20->SetBinContent(21,554.9804);
   hmcerror__20->SetBinError(1,81.1964);
   hmcerror__20->SetBinError(2,53.22261);
   hmcerror__20->SetBinError(3,49.62258);
   hmcerror__20->SetBinError(4,49.30322);
   hmcerror__20->SetBinError(5,53.84817);
   hmcerror__20->SetBinError(6,46.41741);
   hmcerror__20->SetBinError(7,48.1038);
   hmcerror__20->SetBinError(8,46.09547);
   hmcerror__20->SetBinError(9,40.30716);
   hmcerror__20->SetBinError(10,38.84499);
   hmcerror__20->SetBinError(11,32.32479);
   hmcerror__20->SetBinError(12,36.37101);
   hmcerror__20->SetBinError(13,27.12565);
   hmcerror__20->SetBinError(14,27.34583);
   hmcerror__20->SetBinError(15,25.98721);
   hmcerror__20->SetBinError(16,23.44221);
   hmcerror__20->SetBinError(17,22.11971);
   hmcerror__20->SetBinError(18,19.36658);
   hmcerror__20->SetBinError(19,17.56383);
   hmcerror__20->SetBinError(20,19.7243);
   hmcerror__20->SetBinError(21,163.6982);
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
   
   Double_t _fx3025[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3025[20] = {
   249,
   88,
   89,
   104,
   92,
   126,
   109,
   89,
   76,
   80,
   67,
   61,
   50,
   58,
   46,
   55,
   47,
   43,
   41,
   36};
   Double_t _felx3025[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3025[20] = {
   15.77973,
   9.5036,
   9.5566,
   10.19804,
   9.7138,
   11.22497,
   10.44031,
   9.5566,
   8.8425,
   9.0683,
   8.3119,
   7.9383,
   7.2025,
   7.7446,
   6.9153,
   7.546,
   6.9882,
   6.6917,
   6.5384,
   6.1381};
   Double_t _fehx3025[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3025[20] = {
   15.77973,
   9.3021,
   9.3552,
   10.19804,
   9.513,
   11.22497,
   10.44031,
   9.3552,
   8.6406,
   8.8665,
   8.1094,
   7.7354,
   6.9985,
   7.5415,
   6.7108,
   7.3425,
   6.7839,
   6.4868,
   6.3331,
   5.9318};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,55);
   Graph_Graph3025->SetMinimum(6.370117);
   Graph_Graph3025->SetMaximum(288.2715);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.32","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.2/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1606.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 35.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 135.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 60.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  2.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  733.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  158.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 312.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 187.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 185.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3026[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3026[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3026[20] = {
   0.3039292,
   0.5441114,
   0.4493524,
   0.3983806,
   0.436532,
   0.4336147,
   0.4145292,
   0.4193702,
   0.4034168,
   0.3963661,
   0.398294,
   0.526509,
   0.4325818,
   0.3677505,
   0.4296675,
   0.4368558,
   0.4642309,
   0.4122038,
   0.4240055,
   0.4572925};
   Double_t _fehx3026[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3026[20] = {
   0.3039292,
   0.5441114,
   0.4493524,
   0.3983806,
   0.436532,
   0.4336147,
   0.4145292,
   0.4193702,
   0.4034168,
   0.3963661,
   0.398294,
   0.526509,
   0.4325818,
   0.3677505,
   0.4296675,
   0.4368558,
   0.4642309,
   0.4122038,
   0.4240055,
   0.4572925};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,55);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3027[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3027[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3027[20] = {
   0.2774861,
   0.4656602,
   0.4365982,
   0.3809937,
   0.3780105,
   0.4085072,
   0.3516094,
   0.3780218,
   0.3633566,
   0.3485412,
   0.3530163,
   0.3767329,
   0.3751156,
   0.3258961,
   0.3443746,
   0.3543508,
   0.3483504,
   0.3337565,
   0.3653288,
   0.3730684};
   Double_t _fehx3027[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3027[20] = {
   0.2774861,
   0.4656602,
   0.4365982,
   0.3809937,
   0.3780105,
   0.4085072,
   0.3516094,
   0.3780218,
   0.3633566,
   0.3485412,
   0.3530163,
   0.3767329,
   0.3751156,
   0.3258961,
   0.3443746,
   0.3543508,
   0.3483504,
   0.3337565,
   0.3653288,
   0.3730684};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,55);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3028[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3028[20] = {
   0.932041,
   0.8996515,
   0.8059307,
   0.8403423,
   0.7458182,
   1.177046,
   0.9392955,
   0.8097098,
   0.7606508,
   0.8163031,
   0.8255492,
   0.8830399,
   0.7973667,
   0.779992,
   0.7605551,
   1.024949,
   0.9863986,
   0.9152245,
   0.9897745,
   0.8346318};
   Double_t _felx3028[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3028[20] = {
   0.0590657,
   0.09715828,
   0.08653885,
   0.08240234,
   0.07874706,
   0.1048596,
   0.08996819,
   0.08694464,
   0.08850072,
   0.09253102,
   0.1024162,
   0.1149153,
   0.1148607,
   0.1041505,
   0.1143362,
   0.140623,
   0.1466628,
   0.1424281,
   0.1578425,
   0.142307};
   Double_t _fehx3028[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3028[20] = {
   0.0590657,
   0.09509828,
   0.08471509,
   0.08240234,
   0.07711923,
   0.1048596,
   0.08996819,
   0.08511233,
   0.08648,
   0.09047189,
   0.09992102,
   0.1119781,
   0.1116074,
   0.1014191,
   0.1109551,
   0.1368307,
   0.1423751,
   0.1380669,
   0.1528864,
   0.1375241};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,55);
   Graph_Graph3028->SetMinimum(0.5826502);
   Graph_Graph3028->SetMaximum(1.345475);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",20,0,50);

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
   TLine *line = new TLine(0,1,50,1);
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
