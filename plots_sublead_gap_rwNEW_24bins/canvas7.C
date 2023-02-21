#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 13:27:17 2023) by ROOT version 6.26/00
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
   pad1->Range(-13.84615,-7.306493,101.5385,807.9443);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__19->SetBinContent(1,365.3246);
   hmc__19->SetBinContent(2,209.6337);
   hmc__19->SetBinContent(3,224.9622);
   hmc__19->SetBinContent(4,213.2965);
   hmc__19->SetBinContent(5,207.8506);
   hmc__19->SetBinContent(6,184.5487);
   hmc__19->SetBinContent(7,164.6157);
   hmc__19->SetBinContent(8,136.808);
   hmc__19->SetBinContent(9,121.4875);
   hmc__19->SetBinContent(10,112.5611);
   hmc__19->SetBinContent(11,88.67467);
   hmc__19->SetBinContent(12,84.71305);
   hmc__19->SetBinContent(13,75.83804);
   hmc__19->SetBinContent(14,71.0121);
   hmc__19->SetBinContent(15,53.91389);
   hmc__19->SetBinContent(16,47.50636);
   hmc__19->SetBinContent(17,39.25182);
   hmc__19->SetBinContent(18,41.84673);
   hmc__19->SetBinContent(19,36.31397);
   hmc__19->SetBinContent(20,25.67885);
   hmc__19->SetBinContent(21,27.82522);
   hmc__19->SetBinContent(22,26.98573);
   hmc__19->SetBinContent(23,18.58283);
   hmc__19->SetBinContent(24,15.90181);
   hmc__19->SetBinContent(25,247.5147);
   hmc__19->SetBinError(1,125.4386);
   hmc__19->SetBinError(2,90.617);
   hmc__19->SetBinError(3,84.98155);
   hmc__19->SetBinError(4,84.95805);
   hmc__19->SetBinError(5,87.31947);
   hmc__19->SetBinError(6,71.14129);
   hmc__19->SetBinError(7,59.53111);
   hmc__19->SetBinError(8,59.64288);
   hmc__19->SetBinError(9,46.81736);
   hmc__19->SetBinError(10,41.01502);
   hmc__19->SetBinError(11,34.93849);
   hmc__19->SetBinError(12,32.6925);
   hmc__19->SetBinError(13,29.64857);
   hmc__19->SetBinError(14,28.4808);
   hmc__19->SetBinError(15,23.01361);
   hmc__19->SetBinError(16,21.58588);
   hmc__19->SetBinError(17,15.81998);
   hmc__19->SetBinError(18,17.1005);
   hmc__19->SetBinError(19,14.99105);
   hmc__19->SetBinError(20,11.72946);
   hmc__19->SetBinError(21,13.29118);
   hmc__19->SetBinError(22,11.50287);
   hmc__19->SetBinError(23,14.38362);
   hmc__19->SetBinError(24,9.059718);
   hmc__19->SetBinError(25,82.82548);
   hmc__19->SetMinimum(-7.306493);
   hmc__19->SetMaximum(767.1818);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,0,90);
   hs7_stack_7->SetMinimum(-9.660135e-09);
   hs7_stack_7->SetMaximum(383.5909);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,8.532013);
   hbadmatch_stack_1->SetBinContent(2,1.945717);
   hbadmatch_stack_1->SetBinContent(3,3.982208);
   hbadmatch_stack_1->SetBinContent(4,6.378511);
   hbadmatch_stack_1->SetBinContent(5,2.245626);
   hbadmatch_stack_1->SetBinContent(6,1.528981);
   hbadmatch_stack_1->SetBinContent(7,1.874676);
   hbadmatch_stack_1->SetBinContent(8,2.044677);
   hbadmatch_stack_1->SetBinContent(9,1.178602);
   hbadmatch_stack_1->SetBinContent(10,1.653609);
   hbadmatch_stack_1->SetBinContent(11,2.667962);
   hbadmatch_stack_1->SetBinContent(12,1.465526);
   hbadmatch_stack_1->SetBinContent(13,1.640153);
   hbadmatch_stack_1->SetBinContent(14,2.404583);
   hbadmatch_stack_1->SetBinContent(15,1.52047);
   hbadmatch_stack_1->SetBinContent(16,1.776841);
   hbadmatch_stack_1->SetBinContent(17,1.479694);
   hbadmatch_stack_1->SetBinContent(18,1.373626);
   hbadmatch_stack_1->SetBinContent(19,0.3934307);
   hbadmatch_stack_1->SetBinContent(20,0.9281296);
   hbadmatch_stack_1->SetBinContent(21,0.9942849);
   hbadmatch_stack_1->SetBinContent(22,1.539964);
   hbadmatch_stack_1->SetBinContent(23,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.8539582);
   hbadmatch_stack_1->SetBinContent(25,7.168443);
   hbadmatch_stack_1->SetBinError(1,1.666595);
   hbadmatch_stack_1->SetBinError(2,0.6611961);
   hbadmatch_stack_1->SetBinError(3,1.007199);
   hbadmatch_stack_1->SetBinError(4,2.427953);
   hbadmatch_stack_1->SetBinError(5,0.7332843);
   hbadmatch_stack_1->SetBinError(6,0.5893592);
   hbadmatch_stack_1->SetBinError(7,0.7436202);
   hbadmatch_stack_1->SetBinError(8,0.7553166);
   hbadmatch_stack_1->SetBinError(9,0.4811646);
   hbadmatch_stack_1->SetBinError(10,0.7030677);
   hbadmatch_stack_1->SetBinError(11,0.8457605);
   hbadmatch_stack_1->SetBinError(12,0.6209405);
   hbadmatch_stack_1->SetBinError(13,0.5815398);
   hbadmatch_stack_1->SetBinError(14,0.7879662);
   hbadmatch_stack_1->SetBinError(15,0.5898325);
   hbadmatch_stack_1->SetBinError(16,0.688195);
   hbadmatch_stack_1->SetBinError(17,0.7304925);
   hbadmatch_stack_1->SetBinError(18,0.519186);
   hbadmatch_stack_1->SetBinError(19,0.2781975);
   hbadmatch_stack_1->SetBinError(20,0.5411411);
   hbadmatch_stack_1->SetBinError(21,0.6030134);
   hbadmatch_stack_1->SetBinError(22,0.6394507);
   hbadmatch_stack_1->SetBinError(23,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.523061);
   hbadmatch_stack_1->SetBinError(25,1.464729);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,22.21114);
   hext_stack_2->SetBinContent(2,6.172367);
   hext_stack_2->SetBinContent(3,11.37312);
   hext_stack_2->SetBinContent(4,10.93899);
   hext_stack_2->SetBinContent(5,14.31147);
   hext_stack_2->SetBinContent(6,15.78499);
   hext_stack_2->SetBinContent(7,9.187313);
   hext_stack_2->SetBinContent(8,7.422464);
   hext_stack_2->SetBinContent(9,7.504666);
   hext_stack_2->SetBinContent(10,10.79771);
   hext_stack_2->SetBinContent(11,5.199175);
   hext_stack_2->SetBinContent(12,7.053406);
   hext_stack_2->SetBinContent(13,3.565599);
   hext_stack_2->SetBinContent(14,7.112428);
   hext_stack_2->SetBinContent(15,3.088388);
   hext_stack_2->SetBinContent(16,2.27519);
   hext_stack_2->SetBinContent(17,6.698648);
   hext_stack_2->SetBinContent(18,1.779209);
   hext_stack_2->SetBinContent(19,4.752265);
   hext_stack_2->SetBinContent(20,1.868591);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,4.759445);
   hext_stack_2->SetBinContent(23,0.6487947);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,22.46052);
   hext_stack_2->SetBinError(1,3.280174);
   hext_stack_2->SetBinError(2,1.506547);
   hext_stack_2->SetBinError(3,2.454695);
   hext_stack_2->SetBinError(4,2.127634);
   hext_stack_2->SetBinError(5,2.589469);
   hext_stack_2->SetBinError(6,2.917326);
   hext_stack_2->SetBinError(7,2.238896);
   hext_stack_2->SetBinError(8,1.939769);
   hext_stack_2->SetBinError(9,1.955197);
   hext_stack_2->SetBinError(10,2.367468);
   hext_stack_2->SetBinError(11,1.397849);
   hext_stack_2->SetBinError(12,1.750092);
   hext_stack_2->SetBinError(13,1.22225);
   hext_stack_2->SetBinError(14,1.804181);
   hext_stack_2->SetBinError(15,1.096541);
   hext_stack_2->SetBinError(16,0.9336798);
   hext_stack_2->SetBinError(17,1.814097);
   hext_stack_2->SetBinError(18,0.9206235);
   hext_stack_2->SetBinError(19,1.630811);
   hext_stack_2->SetBinError(20,0.840497);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,1.567911);
   hext_stack_2->SetBinError(23,0.4587671);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,3.2563);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,1.260217);
   hdirt_stack_3->SetBinContent(2,0.7759784);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,1.287276);
   hdirt_stack_3->SetBinContent(5,1.064451);
   hdirt_stack_3->SetBinContent(6,0.596422);
   hdirt_stack_3->SetBinContent(7,0.1753185);
   hdirt_stack_3->SetBinContent(8,0.6085784);
   hdirt_stack_3->SetBinContent(9,0.2188956);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.3381872);
   hdirt_stack_3->SetBinContent(12,0.00255526);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(14,0.4377912);
   hdirt_stack_3->SetBinContent(16,0.4377912);
   hdirt_stack_3->SetBinContent(18,1.044806);
   hdirt_stack_3->SetBinContent(19,0.4762587);
   hdirt_stack_3->SetBinContent(20,0.1651799);
   hdirt_stack_3->SetBinContent(23,0.3381872);
   hdirt_stack_3->SetBinContent(25,1.653035);
   hdirt_stack_3->SetBinError(1,0.5380643);
   hdirt_stack_3->SetBinError(2,0.458477);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.9656362);
   hdirt_stack_3->SetBinError(5,0.5360721);
   hdirt_stack_3->SetBinError(6,0.3478423);
   hdirt_stack_3->SetBinError(7,0.1753185);
   hdirt_stack_3->SetBinError(8,0.3609533);
   hdirt_stack_3->SetBinError(9,0.2188956);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.3381872);
   hdirt_stack_3->SetBinError(12,0.00255526);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(14,0.3095651);
   hdirt_stack_3->SetBinError(16,0.3095651);
   hdirt_stack_3->SetBinError(18,0.4804485);
   hdirt_stack_3->SetBinError(19,0.3652866);
   hdirt_stack_3->SetBinError(20,0.1651799);
   hdirt_stack_3->SetBinError(23,0.3381872);
   hdirt_stack_3->SetBinError(25,0.7101226);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,12.99288);
   houtFV_stack_4->SetBinContent(2,4.038085);
   houtFV_stack_4->SetBinContent(3,6.063284);
   houtFV_stack_4->SetBinContent(4,4.891623);
   houtFV_stack_4->SetBinContent(5,5.136341);
   houtFV_stack_4->SetBinContent(6,5.732945);
   houtFV_stack_4->SetBinContent(7,4.291508);
   houtFV_stack_4->SetBinContent(8,4.107964);
   houtFV_stack_4->SetBinContent(9,2.103854);
   houtFV_stack_4->SetBinContent(10,5.079556);
   houtFV_stack_4->SetBinContent(11,3.857995);
   houtFV_stack_4->SetBinContent(12,3.467945);
   houtFV_stack_4->SetBinContent(13,3.078217);
   houtFV_stack_4->SetBinContent(14,3.036159);
   houtFV_stack_4->SetBinContent(15,1.853885);
   houtFV_stack_4->SetBinContent(16,1.955383);
   houtFV_stack_4->SetBinContent(17,1.121968);
   houtFV_stack_4->SetBinContent(18,1.807394);
   houtFV_stack_4->SetBinContent(19,1.932773);
   houtFV_stack_4->SetBinContent(20,2.029711);
   houtFV_stack_4->SetBinContent(21,1.903757);
   houtFV_stack_4->SetBinContent(22,1.17184);
   houtFV_stack_4->SetBinContent(23,1.073786);
   houtFV_stack_4->SetBinContent(24,0.8770706);
   houtFV_stack_4->SetBinContent(25,11.4657);
   houtFV_stack_4->SetBinError(1,1.842597);
   houtFV_stack_4->SetBinError(2,0.946154);
   houtFV_stack_4->SetBinError(3,1.176573);
   houtFV_stack_4->SetBinError(4,1.1104);
   houtFV_stack_4->SetBinError(5,1.074168);
   houtFV_stack_4->SetBinError(6,1.246348);
   houtFV_stack_4->SetBinError(7,0.9790372);
   houtFV_stack_4->SetBinError(8,1.000995);
   houtFV_stack_4->SetBinError(9,0.6792233);
   houtFV_stack_4->SetBinError(10,1.212012);
   houtFV_stack_4->SetBinError(11,1.00081);
   houtFV_stack_4->SetBinError(12,0.9620561);
   houtFV_stack_4->SetBinError(13,0.888566);
   houtFV_stack_4->SetBinError(14,0.8329575);
   houtFV_stack_4->SetBinError(15,0.6789509);
   houtFV_stack_4->SetBinError(16,0.7114371);
   houtFV_stack_4->SetBinError(17,0.5181909);
   houtFV_stack_4->SetBinError(18,0.7084844);
   houtFV_stack_4->SetBinError(19,0.7033016);
   houtFV_stack_4->SetBinError(20,0.7997493);
   houtFV_stack_4->SetBinError(21,0.6490939);
   houtFV_stack_4->SetBinError(22,0.478404);
   houtFV_stack_4->SetBinError(23,0.5557297);
   houtFV_stack_4->SetBinError(24,0.5197486);
   houtFV_stack_4->SetBinError(25,1.650596);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.4736358);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5008719);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4035539);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4180041);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.599022);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.291954);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.4879178);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1634799);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2024767);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1775557);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2406819);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2640716);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1685597);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1427183);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.70174);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.9338218);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.199204);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.120912);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.143572);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5852358);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.8501219);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8365039);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.8096042);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9906222);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.697004);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9484402);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.437358);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3990644);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2812022);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.282353);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.5495127);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3330545);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1727406);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2770189);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2638255);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3476357);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3642206);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2563433);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3718002);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.4589434);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,142.997);
   hNCpi0inFVres_stack_7->SetBinContent(2,117.9014);
   hNCpi0inFVres_stack_7->SetBinContent(3,114.281);
   hNCpi0inFVres_stack_7->SetBinContent(4,110.4712);
   hNCpi0inFVres_stack_7->SetBinContent(5,101.5483);
   hNCpi0inFVres_stack_7->SetBinContent(6,89.48994);
   hNCpi0inFVres_stack_7->SetBinContent(7,79.61512);
   hNCpi0inFVres_stack_7->SetBinContent(8,70.97507);
   hNCpi0inFVres_stack_7->SetBinContent(9,60.52415);
   hNCpi0inFVres_stack_7->SetBinContent(10,51.03146);
   hNCpi0inFVres_stack_7->SetBinContent(11,41.26972);
   hNCpi0inFVres_stack_7->SetBinContent(12,40.4633);
   hNCpi0inFVres_stack_7->SetBinContent(13,35.79652);
   hNCpi0inFVres_stack_7->SetBinContent(14,31.6351);
   hNCpi0inFVres_stack_7->SetBinContent(15,25.59851);
   hNCpi0inFVres_stack_7->SetBinContent(16,22.79522);
   hNCpi0inFVres_stack_7->SetBinContent(17,15.91103);
   hNCpi0inFVres_stack_7->SetBinContent(18,18.37788);
   hNCpi0inFVres_stack_7->SetBinContent(19,14.68892);
   hNCpi0inFVres_stack_7->SetBinContent(20,11.40666);
   hNCpi0inFVres_stack_7->SetBinContent(21,10.90612);
   hNCpi0inFVres_stack_7->SetBinContent(22,6.623613);
   hNCpi0inFVres_stack_7->SetBinContent(23,8.382658);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.042122);
   hNCpi0inFVres_stack_7->SetBinContent(25,82.58919);
   hNCpi0inFVres_stack_7->SetBinError(1,3.920148);
   hNCpi0inFVres_stack_7->SetBinError(2,3.607207);
   hNCpi0inFVres_stack_7->SetBinError(3,3.488977);
   hNCpi0inFVres_stack_7->SetBinError(4,3.486824);
   hNCpi0inFVres_stack_7->SetBinError(5,3.333535);
   hNCpi0inFVres_stack_7->SetBinError(6,3.102933);
   hNCpi0inFVres_stack_7->SetBinError(7,2.900385);
   hNCpi0inFVres_stack_7->SetBinError(8,2.787827);
   hNCpi0inFVres_stack_7->SetBinError(9,2.552644);
   hNCpi0inFVres_stack_7->SetBinError(10,2.303826);
   hNCpi0inFVres_stack_7->SetBinError(11,2.024979);
   hNCpi0inFVres_stack_7->SetBinError(12,2.076789);
   hNCpi0inFVres_stack_7->SetBinError(13,1.985628);
   hNCpi0inFVres_stack_7->SetBinError(14,1.855387);
   hNCpi0inFVres_stack_7->SetBinError(15,1.618795);
   hNCpi0inFVres_stack_7->SetBinError(16,1.567326);
   hNCpi0inFVres_stack_7->SetBinError(17,1.284321);
   hNCpi0inFVres_stack_7->SetBinError(18,1.433405);
   hNCpi0inFVres_stack_7->SetBinError(19,1.297912);
   hNCpi0inFVres_stack_7->SetBinError(20,1.080842);
   hNCpi0inFVres_stack_7->SetBinError(21,1.092126);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7747025);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9546073);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8696945);
   hNCpi0inFVres_stack_7->SetBinError(25,3.051827);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,25.02307);
   hNCpi0inFVdis_stack_8->SetBinContent(2,19.07305);
   hNCpi0inFVdis_stack_8->SetBinContent(3,21.2461);
   hNCpi0inFVdis_stack_8->SetBinContent(4,20.37423);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.79116);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.20049);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.97764);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.23826);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.30138);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.08132);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.263569);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.446508);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.70549);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.221564);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.774412);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.039948);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.653756);
   hNCpi0inFVdis_stack_8->SetBinContent(18,3.862338);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.145811);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.966626);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.105462);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.882926);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.296522);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.9896218);
   hNCpi0inFVdis_stack_8->SetBinContent(25,17.13564);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.60218);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.431458);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.48661);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.479305);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.579242);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.272829);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.274841);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.054288);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.205159);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.034255);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8571848);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8984212);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8220318);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8479032);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8547984);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5376982);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6713961);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.630745);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3829717);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4540403);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4727974);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4514614);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2986537);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2839569);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.293129);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.4188362);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.277838);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,52.31971);
   hCCpi0inFV_stack_10->SetBinContent(2,27.7345);
   hCCpi0inFV_stack_10->SetBinContent(3,32.94835);
   hCCpi0inFV_stack_10->SetBinContent(4,27.90245);
   hCCpi0inFV_stack_10->SetBinContent(5,29.23387);
   hCCpi0inFV_stack_10->SetBinContent(6,29.34409);
   hCCpi0inFV_stack_10->SetBinContent(7,25.23468);
   hCCpi0inFV_stack_10->SetBinContent(8,20.01101);
   hCCpi0inFV_stack_10->SetBinContent(9,17.3995);
   hCCpi0inFV_stack_10->SetBinContent(10,14.66106);
   hCCpi0inFV_stack_10->SetBinContent(11,11.7073);
   hCCpi0inFV_stack_10->SetBinContent(12,10.0715);
   hCCpi0inFV_stack_10->SetBinContent(13,11.70545);
   hCCpi0inFV_stack_10->SetBinContent(14,9.038054);
   hCCpi0inFV_stack_10->SetBinContent(15,4.107964);
   hCCpi0inFV_stack_10->SetBinContent(16,7.44132);
   hCCpi0inFV_stack_10->SetBinContent(17,3.691589);
   hCCpi0inFV_stack_10->SetBinContent(18,5.428337);
   hCCpi0inFV_stack_10->SetBinContent(19,3.762714);
   hCCpi0inFV_stack_10->SetBinContent(20,2.589195);
   hCCpi0inFV_stack_10->SetBinContent(21,2.732646);
   hCCpi0inFV_stack_10->SetBinContent(22,5.141761);
   hCCpi0inFV_stack_10->SetBinContent(23,1.944615);
   hCCpi0inFV_stack_10->SetBinContent(24,1.26712);
   hCCpi0inFV_stack_10->SetBinContent(25,26.3657);
   hCCpi0inFV_stack_10->SetBinError(1,3.593523);
   hCCpi0inFV_stack_10->SetBinError(2,2.683743);
   hCCpi0inFV_stack_10->SetBinError(3,2.857419);
   hCCpi0inFV_stack_10->SetBinError(4,2.66468);
   hCCpi0inFV_stack_10->SetBinError(5,2.735944);
   hCCpi0inFV_stack_10->SetBinError(6,2.720556);
   hCCpi0inFV_stack_10->SetBinError(7,2.489791);
   hCCpi0inFV_stack_10->SetBinError(8,2.292793);
   hCCpi0inFV_stack_10->SetBinError(9,2.13099);
   hCCpi0inFV_stack_10->SetBinError(10,1.892912);
   hCCpi0inFV_stack_10->SetBinError(11,1.754399);
   hCCpi0inFV_stack_10->SetBinError(12,1.570229);
   hCCpi0inFV_stack_10->SetBinError(13,1.69189);
   hCCpi0inFV_stack_10->SetBinError(14,1.520456);
   hCCpi0inFV_stack_10->SetBinError(15,1.000995);
   hCCpi0inFV_stack_10->SetBinError(16,1.391034);
   hCCpi0inFV_stack_10->SetBinError(17,0.987922);
   hCCpi0inFV_stack_10->SetBinError(18,1.144497);
   hCCpi0inFV_stack_10->SetBinError(19,0.9403637);
   hCCpi0inFV_stack_10->SetBinError(20,0.809167);
   hCCpi0inFV_stack_10->SetBinError(21,0.8554385);
   hCCpi0inFV_stack_10->SetBinError(22,1.174015);
   hCCpi0inFV_stack_10->SetBinError(23,0.66223);
   hCCpi0inFV_stack_10->SetBinError(24,0.5883944);
   hCCpi0inFV_stack_10->SetBinError(25,2.563677);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,29.67701);
   hNCinFV_stack_11->SetBinContent(2,19.5624);
   hNCinFV_stack_11->SetBinContent(3,18.50758);
   hNCinFV_stack_11->SetBinContent(4,16.72554);
   hNCinFV_stack_11->SetBinContent(5,18.4129);
   hNCinFV_stack_11->SetBinContent(6,14.46301);
   hNCinFV_stack_11->SetBinContent(7,15.71721);
   hNCinFV_stack_11->SetBinContent(8,9.183207);
   hNCinFV_stack_11->SetBinContent(9,9.873097);
   hNCinFV_stack_11->SetBinContent(10,6.606939);
   hNCinFV_stack_11->SetBinContent(11,8.789776);
   hNCinFV_stack_11->SetBinContent(12,6.77106);
   hNCinFV_stack_11->SetBinContent(13,5.608755);
   hNCinFV_stack_11->SetBinContent(14,4.946388);
   hNCinFV_stack_11->SetBinContent(15,6.158564);
   hNCinFV_stack_11->SetBinContent(16,3.119315);
   hNCinFV_stack_11->SetBinContent(17,2.30395);
   hNCinFV_stack_11->SetBinContent(18,4.196482);
   hNCinFV_stack_11->SetBinContent(19,3.521199);
   hNCinFV_stack_11->SetBinContent(20,1.65886);
   hNCinFV_stack_11->SetBinContent(21,3.466255);
   hNCinFV_stack_11->SetBinContent(22,3.216286);
   hNCinFV_stack_11->SetBinContent(23,2.197444);
   hNCinFV_stack_11->SetBinContent(24,1.610679);
   hNCinFV_stack_11->SetBinContent(25,24.37814);
   hNCinFV_stack_11->SetBinError(1,2.654018);
   hNCinFV_stack_11->SetBinError(2,2.149533);
   hNCinFV_stack_11->SetBinError(3,2.157934);
   hNCinFV_stack_11->SetBinError(4,2.04075);
   hNCinFV_stack_11->SetBinError(5,2.176687);
   hNCinFV_stack_11->SetBinError(6,1.902718);
   hNCinFV_stack_11->SetBinError(7,2.039576);
   hNCinFV_stack_11->SetBinError(8,1.545792);
   hNCinFV_stack_11->SetBinError(9,1.557646);
   hNCinFV_stack_11->SetBinError(10,1.241528);
   hNCinFV_stack_11->SetBinError(11,1.520552);
   hNCinFV_stack_11->SetBinError(12,1.401463);
   hNCinFV_stack_11->SetBinError(13,1.241199);
   hNCinFV_stack_11->SetBinError(14,1.057256);
   hNCinFV_stack_11->SetBinError(15,1.225423);
   hNCinFV_stack_11->SetBinError(16,0.8980646);
   hNCinFV_stack_11->SetBinError(17,0.7080718);
   hNCinFV_stack_11->SetBinError(18,1.056731);
   hNCinFV_stack_11->SetBinError(19,0.9419262);
   hNCinFV_stack_11->SetBinError(20,0.650338);
   hNCinFV_stack_11->SetBinError(21,0.9617119);
   hNCinFV_stack_11->SetBinError(22,0.9615195);
   hNCinFV_stack_11->SetBinError(23,0.760276);
   hNCinFV_stack_11->SetBinError(24,0.6806271);
   hNCinFV_stack_11->SetBinError(25,2.490433);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,65.43314);
   hnumuCCinFV_stack_12->SetBinContent(2,11.27172);
   hnumuCCinFV_stack_12->SetBinContent(3,14.44245);
   hnumuCCinFV_stack_12->SetBinContent(4,11.09106);
   hnumuCCinFV_stack_12->SetBinContent(5,12.03693);
   hnumuCCinFV_stack_12->SetBinContent(6,9.998631);
   hnumuCCinFV_stack_12->SetBinContent(7,12.82283);
   hnumuCCinFV_stack_12->SetBinContent(8,9.850646);
   hnumuCCinFV_stack_12->SetBinContent(9,7.525326);
   hnumuCCinFV_stack_12->SetBinContent(10,9.96452);
   hnumuCCinFV_stack_12->SetBinContent(11,5.828174);
   hnumuCCinFV_stack_12->SetBinContent(12,7.077149);
   hnumuCCinFV_stack_12->SetBinContent(13,7.041037);
   hnumuCCinFV_stack_12->SetBinContent(14,5.149171);
   hnumuCCinFV_stack_12->SetBinContent(15,3.47551);
   hnumuCCinFV_stack_12->SetBinContent(16,3.425413);
   hnumuCCinFV_stack_12->SetBinContent(17,4.057043);
   hnumuCCinFV_stack_12->SetBinContent(18,3.948761);
   hnumuCCinFV_stack_12->SetBinContent(19,4.216716);
   hnumuCCinFV_stack_12->SetBinContent(20,2.842532);
   hnumuCCinFV_stack_12->SetBinContent(21,4.480278);
   hnumuCCinFV_stack_12->SetBinContent(22,2.021724);
   hnumuCCinFV_stack_12->SetBinContent(23,1.918153);
   hnumuCCinFV_stack_12->SetBinContent(24,2.548012);
   hnumuCCinFV_stack_12->SetBinContent(25,47.91969);
   hnumuCCinFV_stack_12->SetBinError(1,4.900619);
   hnumuCCinFV_stack_12->SetBinError(2,1.894387);
   hnumuCCinFV_stack_12->SetBinError(3,2.339277);
   hnumuCCinFV_stack_12->SetBinError(4,1.984307);
   hnumuCCinFV_stack_12->SetBinError(5,1.88266);
   hnumuCCinFV_stack_12->SetBinError(6,1.558253);
   hnumuCCinFV_stack_12->SetBinError(7,2.279411);
   hnumuCCinFV_stack_12->SetBinError(8,1.572332);
   hnumuCCinFV_stack_12->SetBinError(9,1.390377);
   hnumuCCinFV_stack_12->SetBinError(10,1.742794);
   hnumuCCinFV_stack_12->SetBinError(11,1.615149);
   hnumuCCinFV_stack_12->SetBinError(12,1.465769);
   hnumuCCinFV_stack_12->SetBinError(13,1.74729);
   hnumuCCinFV_stack_12->SetBinError(14,1.165312);
   hnumuCCinFV_stack_12->SetBinError(15,0.916183);
   hnumuCCinFV_stack_12->SetBinError(16,0.895685);
   hnumuCCinFV_stack_12->SetBinError(17,1.043116);
   hnumuCCinFV_stack_12->SetBinError(18,0.9893835);
   hnumuCCinFV_stack_12->SetBinError(19,1.095718);
   hnumuCCinFV_stack_12->SetBinError(20,0.9295216);
   hnumuCCinFV_stack_12->SetBinError(21,2.553079);
   hnumuCCinFV_stack_12->SetBinError(22,0.7500174);
   hnumuCCinFV_stack_12->SetBinError(23,0.6929968);
   hnumuCCinFV_stack_12->SetBinError(24,0.7962858);
   hnumuCCinFV_stack_12->SetBinError(25,3.937713);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,2.647254);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(6,0.1970832);
   hnueCCinFV_stack_13->SetBinContent(7,0.7855579);
   hnueCCinFV_stack_13->SetBinContent(9,0.9926134);
   hnueCCinFV_stack_13->SetBinContent(10,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(16,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.3866963);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,4.425475);
   hnueCCinFV_stack_13->SetBinError(1,0.9943211);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.3397478);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.3921167);
   hnueCCinFV_stack_13->SetBinError(6,0.1967157);
   hnueCCinFV_stack_13->SetBinError(7,0.465029);
   hnueCCinFV_stack_13->SetBinError(9,0.5089633);
   hnueCCinFV_stack_13->SetBinError(10,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.2107157);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.2346262);
   hnueCCinFV_stack_13->SetBinError(16,0.5197486);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.3866963);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,1.110522);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__20->SetBinContent(1,365.3246);
   hmcerror__20->SetBinContent(2,209.6337);
   hmcerror__20->SetBinContent(3,224.9622);
   hmcerror__20->SetBinContent(4,213.2965);
   hmcerror__20->SetBinContent(5,207.8506);
   hmcerror__20->SetBinContent(6,184.5487);
   hmcerror__20->SetBinContent(7,164.6157);
   hmcerror__20->SetBinContent(8,136.808);
   hmcerror__20->SetBinContent(9,121.4875);
   hmcerror__20->SetBinContent(10,112.5611);
   hmcerror__20->SetBinContent(11,88.67467);
   hmcerror__20->SetBinContent(12,84.71305);
   hmcerror__20->SetBinContent(13,75.83804);
   hmcerror__20->SetBinContent(14,71.0121);
   hmcerror__20->SetBinContent(15,53.91389);
   hmcerror__20->SetBinContent(16,47.50636);
   hmcerror__20->SetBinContent(17,39.25182);
   hmcerror__20->SetBinContent(18,41.84673);
   hmcerror__20->SetBinContent(19,36.31397);
   hmcerror__20->SetBinContent(20,25.67885);
   hmcerror__20->SetBinContent(21,27.82522);
   hmcerror__20->SetBinContent(22,26.98573);
   hmcerror__20->SetBinContent(23,18.58283);
   hmcerror__20->SetBinContent(24,15.90181);
   hmcerror__20->SetBinContent(25,247.5147);
   hmcerror__20->SetBinError(1,125.4386);
   hmcerror__20->SetBinError(2,90.617);
   hmcerror__20->SetBinError(3,84.98155);
   hmcerror__20->SetBinError(4,84.95805);
   hmcerror__20->SetBinError(5,87.31947);
   hmcerror__20->SetBinError(6,71.14129);
   hmcerror__20->SetBinError(7,59.53111);
   hmcerror__20->SetBinError(8,59.64288);
   hmcerror__20->SetBinError(9,46.81736);
   hmcerror__20->SetBinError(10,41.01502);
   hmcerror__20->SetBinError(11,34.93849);
   hmcerror__20->SetBinError(12,32.6925);
   hmcerror__20->SetBinError(13,29.64857);
   hmcerror__20->SetBinError(14,28.4808);
   hmcerror__20->SetBinError(15,23.01361);
   hmcerror__20->SetBinError(16,21.58588);
   hmcerror__20->SetBinError(17,15.81998);
   hmcerror__20->SetBinError(18,17.1005);
   hmcerror__20->SetBinError(19,14.99105);
   hmcerror__20->SetBinError(20,11.72946);
   hmcerror__20->SetBinError(21,13.29118);
   hmcerror__20->SetBinError(22,11.50287);
   hmcerror__20->SetBinError(23,14.38362);
   hmcerror__20->SetBinError(24,9.059718);
   hmcerror__20->SetBinError(25,82.82548);
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
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3025[24] = {
   282,
   144,
   148,
   174,
   164,
   110,
   116,
   92,
   78,
   76,
   82,
   63,
   57,
   47,
   36,
   30,
   33,
   25,
   29,
   19,
   23,
   21,
   14,
   10};
   Double_t _felx3025[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3025[24] = {
   16.79286,
   12,
   12.16553,
   13.19091,
   12.80625,
   10.48809,
   10.77033,
   9.7138,
   8.9562,
   8.8425,
   9.1791,
   8.0648,
   7.679,
   6.9882,
   6.1381,
   5.6197,
   5.8847,
   5.1474,
   5.5285,
   4.5151,
   4.9457,
   4.7354,
   3.9102,
   3.34883};
   Double_t _fehx3025[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3025[24] = {
   16.79286,
   12,
   12.16553,
   13.19091,
   12.80625,
   10.48809,
   10.77033,
   9.513,
   8.7542,
   8.6406,
   8.9774,
   7.862,
   7.4757,
   6.7839,
   5.9318,
   5.4117,
   5.6776,
   4.9374,
   5.3201,
   4.3011,
   4.7346,
   4.5229,
   3.6898,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,99);
   Graph_Graph3025->SetMinimum(5.986053);
   Graph_Graph3025->SetMaximum(328.007);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.8/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1873.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 50.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 166.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 83.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  14.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1229.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  229.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 357.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 216.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 222.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.4","F");

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
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
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
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3026[24] = {
   0.3433619,
   0.4322636,
   0.3777593,
   0.3983097,
   0.420107,
   0.3854878,
   0.3616369,
   0.4359606,
   0.3853678,
   0.3643799,
   0.3940075,
   0.3859205,
   0.3909458,
   0.4010697,
   0.4268587,
   0.4543787,
   0.4030381,
   0.4086459,
   0.4128176,
   0.456775,
   0.4776668,
   0.4262575,
   0.7740272,
   0.5697288};
   Double_t _fehx3026[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3026[24] = {
   0.3433619,
   0.4322636,
   0.3777593,
   0.3983097,
   0.420107,
   0.3854878,
   0.3616369,
   0.4359606,
   0.3853678,
   0.3643799,
   0.3940075,
   0.3859205,
   0.3909458,
   0.4010697,
   0.4268587,
   0.4543787,
   0.4030381,
   0.4086459,
   0.4128176,
   0.456775,
   0.4776668,
   0.4262575,
   0.7740272,
   0.5697288};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,99);
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
   
   Double_t _fx3027[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
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
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3027[24] = {
   0.3240108,
   0.4085121,
   0.366426,
   0.3732463,
   0.3620076,
   0.3399962,
   0.3340355,
   0.3571266,
   0.3461504,
   0.3283971,
   0.3421932,
   0.326432,
   0.3482334,
   0.3253732,
   0.3582822,
   0.3331157,
   0.2908762,
   0.3111556,
   0.2790349,
   0.3140352,
   0.3279441,
   0.273427,
   0.3535222,
   0.3289074};
   Double_t _fehx3027[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3027[24] = {
   0.3240108,
   0.4085121,
   0.366426,
   0.3732463,
   0.3620076,
   0.3399962,
   0.3340355,
   0.3571266,
   0.3461504,
   0.3283971,
   0.3421932,
   0.326432,
   0.3482334,
   0.3253732,
   0.3582822,
   0.3331157,
   0.2908762,
   0.3111556,
   0.2790349,
   0.3140352,
   0.3279441,
   0.273427,
   0.3535222,
   0.3289074};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,99);
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
   
   Double_t _fx3028[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3028[24] = {
   0.7719162,
   0.6869126,
   0.6578883,
   0.8157659,
   0.7890284,
   0.5960485,
   0.7046716,
   0.6724754,
   0.6420414,
   0.6751887,
   0.9247286,
   0.7436871,
   0.7516017,
   0.661859,
   0.6677315,
   0.6314944,
   0.8407254,
   0.5974182,
   0.7985908,
   0.7399084,
   0.8265883,
   0.7781891,
   0.7533835,
   0.6288594};
   Double_t _felx3028[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3028[24] = {
   0.04596694,
   0.05724271,
   0.05407809,
   0.06184305,
   0.06161277,
   0.056831,
   0.06542712,
   0.07100317,
   0.07372117,
   0.07855732,
   0.1035143,
   0.09520139,
   0.1012552,
   0.09840858,
   0.1138501,
   0.1182936,
   0.1499217,
   0.123006,
   0.1522417,
   0.1758295,
   0.1777416,
   0.1754779,
   0.21042,
   0.2105943};
   Double_t _fehx3028[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3028[24] = {
   0.04596694,
   0.05724271,
   0.05407809,
   0.06184305,
   0.06161277,
   0.056831,
   0.06542712,
   0.06953542,
   0.07205845,
   0.07676362,
   0.1012397,
   0.09280742,
   0.09857454,
   0.09553161,
   0.1100236,
   0.1139153,
   0.1446455,
   0.1179877,
   0.1465029,
   0.1674958,
   0.170155,
   0.1676034,
   0.1985596,
   0.1960721};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,99);
   Graph_Graph3028->SetMinimum(0.3574947);
   Graph_Graph3028->SetMaximum(1.086739);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);

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
   TLine *line = new TLine(0,1,90,1);
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
