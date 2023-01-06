#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 09:59:21 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",138,161,1200,900);
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
   pad1->Range(-170,-2.795418,163.3333,309.1144);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__19->SetBinContent(0,0.5511319);
   hmc__19->SetBinContent(1,0.9079819);
   hmc__19->SetBinContent(2,11.44829);
   hmc__19->SetBinContent(3,28.5054);
   hmc__19->SetBinContent(4,57.84609);
   hmc__19->SetBinContent(5,84.87402);
   hmc__19->SetBinContent(6,103.8547);
   hmc__19->SetBinContent(7,117.349);
   hmc__19->SetBinContent(8,118.0892);
   hmc__19->SetBinContent(9,116.9566);
   hmc__19->SetBinContent(10,126.9417);
   hmc__19->SetBinContent(11,129.3207);
   hmc__19->SetBinContent(12,126.3747);
   hmc__19->SetBinContent(13,132.6863);
   hmc__19->SetBinContent(14,139.7709);
   hmc__19->SetBinContent(15,129.1705);
   hmc__19->SetBinContent(16,124.4901);
   hmc__19->SetBinContent(17,130.5067);
   hmc__19->SetBinContent(18,121.8241);
   hmc__19->SetBinContent(19,122.9253);
   hmc__19->SetBinContent(20,119.6936);
   hmc__19->SetBinContent(21,108.0587);
   hmc__19->SetBinContent(22,93.29786);
   hmc__19->SetBinContent(23,80.24635);
   hmc__19->SetBinContent(24,43.36266);
   hmc__19->SetBinContent(25,19.28235);
   hmc__19->SetBinContent(27,0.7219342);
   hmc__19->SetBinError(0,0.2917282);
   hmc__19->SetBinError(1,57.71745);
   hmc__19->SetBinError(2,7.828358);
   hmc__19->SetBinError(3,18.39659);
   hmc__19->SetBinError(4,35.12605);
   hmc__19->SetBinError(5,38.11639);
   hmc__19->SetBinError(6,42.60457);
   hmc__19->SetBinError(7,48.33121);
   hmc__19->SetBinError(8,48.58934);
   hmc__19->SetBinError(9,46.35776);
   hmc__19->SetBinError(10,44.41714);
   hmc__19->SetBinError(11,50.34797);
   hmc__19->SetBinError(12,48.42455);
   hmc__19->SetBinError(13,48.9415);
   hmc__19->SetBinError(14,51.43397);
   hmc__19->SetBinError(15,45.68467);
   hmc__19->SetBinError(16,43.99154);
   hmc__19->SetBinError(17,44.22184);
   hmc__19->SetBinError(18,42.82646);
   hmc__19->SetBinError(19,45.09469);
   hmc__19->SetBinError(20,46.31201);
   hmc__19->SetBinError(21,38.00324);
   hmc__19->SetBinError(22,34.73856);
   hmc__19->SetBinError(23,28.19658);
   hmc__19->SetBinError(24,19.32407);
   hmc__19->SetBinError(25,8.943912);
   hmc__19->SetBinError(26,0.3895343);
   hmc__19->SetBinError(27,1.819384);
   hmc__19->SetMinimum(-2.795418);
   hmc__19->SetMaximum(293.5189);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",26,-130,130);
   hs7_stack_7->SetMinimum(-8.304323e-09);
   hs7_stack_7->SetMaximum(146.7594);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,1.209723);
   hbadmatch_stack_1->SetBinContent(3,0.1950248);
   hbadmatch_stack_1->SetBinContent(4,3.748718);
   hbadmatch_stack_1->SetBinContent(5,1.118837);
   hbadmatch_stack_1->SetBinContent(6,1.192847);
   hbadmatch_stack_1->SetBinContent(7,2.028258);
   hbadmatch_stack_1->SetBinContent(8,3.010111);
   hbadmatch_stack_1->SetBinContent(9,2.22975);
   hbadmatch_stack_1->SetBinContent(10,2.611316);
   hbadmatch_stack_1->SetBinContent(11,2.256512);
   hbadmatch_stack_1->SetBinContent(12,3.328389);
   hbadmatch_stack_1->SetBinContent(13,3.456479);
   hbadmatch_stack_1->SetBinContent(14,4.298395);
   hbadmatch_stack_1->SetBinContent(15,2.317171);
   hbadmatch_stack_1->SetBinContent(16,3.906007);
   hbadmatch_stack_1->SetBinContent(17,1.791597);
   hbadmatch_stack_1->SetBinContent(18,0.8476621);
   hbadmatch_stack_1->SetBinContent(19,2.699758);
   hbadmatch_stack_1->SetBinContent(20,2.207704);
   hbadmatch_stack_1->SetBinContent(21,1.588539);
   hbadmatch_stack_1->SetBinContent(22,1.48156);
   hbadmatch_stack_1->SetBinContent(23,4.592071);
   hbadmatch_stack_1->SetBinContent(24,1.027572);
   hbadmatch_stack_1->SetBinContent(25,1.686227);
   hbadmatch_stack_1->SetBinError(2,0.5704779);
   hbadmatch_stack_1->SetBinError(3,0.1950249);
   hbadmatch_stack_1->SetBinError(4,2.031587);
   hbadmatch_stack_1->SetBinError(5,0.4655719);
   hbadmatch_stack_1->SetBinError(6,0.5160182);
   hbadmatch_stack_1->SetBinError(7,0.9205664);
   hbadmatch_stack_1->SetBinError(8,0.9070937);
   hbadmatch_stack_1->SetBinError(9,0.8083252);
   hbadmatch_stack_1->SetBinError(10,0.9984551);
   hbadmatch_stack_1->SetBinError(11,0.6754241);
   hbadmatch_stack_1->SetBinError(12,0.9438228);
   hbadmatch_stack_1->SetBinError(13,0.9632581);
   hbadmatch_stack_1->SetBinError(14,1.073621);
   hbadmatch_stack_1->SetBinError(15,0.6991166);
   hbadmatch_stack_1->SetBinError(16,0.9720805);
   hbadmatch_stack_1->SetBinError(17,0.7718189);
   hbadmatch_stack_1->SetBinError(18,0.4501027);
   hbadmatch_stack_1->SetBinError(19,0.90723);
   hbadmatch_stack_1->SetBinError(20,0.8647451);
   hbadmatch_stack_1->SetBinError(21,0.6637546);
   hbadmatch_stack_1->SetBinError(22,0.7096326);
   hbadmatch_stack_1->SetBinError(23,1.574213);
   hbadmatch_stack_1->SetBinError(24,0.4402546);
   hbadmatch_stack_1->SetBinError(25,0.8152971);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(3,0.6487947);
   hext_stack_2->SetBinContent(4,0.4065989);
   hext_stack_2->SetBinContent(5,3.159);
   hext_stack_2->SetBinContent(6,0.6487947);
   hext_stack_2->SetBinContent(7,1.78639);
   hext_stack_2->SetBinContent(8,3.864046);
   hext_stack_2->SetBinContent(9,4.289415);
   hext_stack_2->SetBinContent(10,14.17736);
   hext_stack_2->SetBinContent(11,13.7261);
   hext_stack_2->SetBinContent(12,4.378797);
   hext_stack_2->SetBinContent(13,7.530616);
   hext_stack_2->SetBinContent(14,12.01751);
   hext_stack_2->SetBinContent(15,9.593912);
   hext_stack_2->SetBinContent(16,10.85679);
   hext_stack_2->SetBinContent(17,14.18895);
   hext_stack_2->SetBinContent(18,10.4027);
   hext_stack_2->SetBinContent(19,14.44992);
   hext_stack_2->SetBinContent(20,11.86034);
   hext_stack_2->SetBinContent(21,12.87102);
   hext_stack_2->SetBinContent(22,10.4546);
   hext_stack_2->SetBinContent(23,16.21036);
   hext_stack_2->SetBinContent(24,6.788031);
   hext_stack_2->SetBinContent(25,4.117831);
   hext_stack_2->SetBinError(3,0.4587671);
   hext_stack_2->SetBinError(4,0.4065989);
   hext_stack_2->SetBinError(5,1.152637);
   hext_stack_2->SetBinError(6,0.4587671);
   hext_stack_2->SetBinError(7,0.8039566);
   hext_stack_2->SetBinError(8,1.437918);
   hext_stack_2->SetBinError(9,1.402017);
   hext_stack_2->SetBinError(10,2.753584);
   hext_stack_2->SetBinError(11,2.611944);
   hext_stack_2->SetBinError(12,1.350755);
   hext_stack_2->SetBinError(13,1.831478);
   hext_stack_2->SetBinError(14,2.469994);
   hext_stack_2->SetBinError(15,2.275517);
   hext_stack_2->SetBinError(16,2.113466);
   hext_stack_2->SetBinError(17,2.741559);
   hext_stack_2->SetBinError(18,2.318081);
   hext_stack_2->SetBinError(19,2.700742);
   hext_stack_2->SetBinError(20,2.109284);
   hext_stack_2->SetBinError(21,2.358099);
   hext_stack_2->SetBinError(22,2.106309);
   hext_stack_2->SetBinError(23,2.899799);
   hext_stack_2->SetBinError(24,1.774777);
   hext_stack_2->SetBinError(25,1.430621);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(4,0.1651799);
   hdirt_stack_3->SetBinContent(5,0.3569671);
   hdirt_stack_3->SetBinContent(6,0.2188956);
   hdirt_stack_3->SetBinContent(7,0.3569671);
   hdirt_stack_3->SetBinContent(9,0.4794168);
   hdirt_stack_3->SetBinContent(10,0.7943197);
   hdirt_stack_3->SetBinContent(11,0.4762587);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,1.155067);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.7842561);
   hdirt_stack_3->SetBinContent(17,1.052121);
   hdirt_stack_3->SetBinContent(18,0.7017611);
   hdirt_stack_3->SetBinContent(19,0.4007975);
   hdirt_stack_3->SetBinContent(20,0.7759784);
   hdirt_stack_3->SetBinContent(21,0.6143302);
   hdirt_stack_3->SetBinContent(22,0.5570828);
   hdirt_stack_3->SetBinContent(23,0.5428095);
   hdirt_stack_3->SetBinContent(24,1.400816);
   hdirt_stack_3->SetBinContent(25,0.185975);
   hdirt_stack_3->SetBinError(4,0.1651799);
   hdirt_stack_3->SetBinError(5,0.258803);
   hdirt_stack_3->SetBinError(6,0.2188956);
   hdirt_stack_3->SetBinError(7,0.258803);
   hdirt_stack_3->SetBinError(9,0.3402743);
   hdirt_stack_3->SetBinError(10,0.407894);
   hdirt_stack_3->SetBinError(11,0.3652866);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.5327083);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.4973774);
   hdirt_stack_3->SetBinError(17,0.4983258);
   hdirt_stack_3->SetBinError(18,0.4280393);
   hdirt_stack_3->SetBinError(19,0.4007975);
   hdirt_stack_3->SetBinError(20,0.458477);
   hdirt_stack_3->SetBinError(21,0.39051);
   hdirt_stack_3->SetBinError(22,0.4028472);
   hdirt_stack_3->SetBinError(23,0.3168557);
   hdirt_stack_3->SetBinError(24,0.9882803);
   hdirt_stack_3->SetBinError(25,0.185975);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,0.1967154);
   houtFV_stack_4->SetBinContent(1,0.3522743);
   houtFV_stack_4->SetBinContent(2,8.089581);
   houtFV_stack_4->SetBinContent(3,5.780733);
   houtFV_stack_4->SetBinContent(4,4.25489);
   houtFV_stack_4->SetBinContent(5,3.611331);
   houtFV_stack_4->SetBinContent(6,2.828862);
   houtFV_stack_4->SetBinContent(7,2.14509);
   houtFV_stack_4->SetBinContent(8,2.468326);
   houtFV_stack_4->SetBinContent(9,2.905027);
   houtFV_stack_4->SetBinContent(10,2.424058);
   houtFV_stack_4->SetBinContent(11,4.23294);
   houtFV_stack_4->SetBinContent(12,3.058027);
   houtFV_stack_4->SetBinContent(13,2.060322);
   houtFV_stack_4->SetBinContent(14,2.772347);
   houtFV_stack_4->SetBinContent(15,1.809055);
   houtFV_stack_4->SetBinContent(16,2.539333);
   houtFV_stack_4->SetBinContent(17,3.734117);
   houtFV_stack_4->SetBinContent(18,3.461747);
   houtFV_stack_4->SetBinContent(19,1.56499);
   houtFV_stack_4->SetBinContent(20,3.404019);
   houtFV_stack_4->SetBinContent(21,3.255171);
   houtFV_stack_4->SetBinContent(22,4.01655);
   houtFV_stack_4->SetBinContent(23,2.485375);
   houtFV_stack_4->SetBinContent(24,5.59221);
   houtFV_stack_4->SetBinContent(25,7.779251);
   houtFV_stack_4->SetBinError(0,0.1967154);
   houtFV_stack_4->SetBinError(1,0.3522743);
   houtFV_stack_4->SetBinError(2,1.412174);
   houtFV_stack_4->SetBinError(3,1.121562);
   houtFV_stack_4->SetBinError(4,0.982362);
   houtFV_stack_4->SetBinError(5,0.9713431);
   houtFV_stack_4->SetBinError(6,0.8345661);
   houtFV_stack_4->SetBinError(7,0.6986917);
   houtFV_stack_4->SetBinError(8,0.8193163);
   houtFV_stack_4->SetBinError(9,0.8666506);
   houtFV_stack_4->SetBinError(10,0.7227076);
   houtFV_stack_4->SetBinError(11,0.9847018);
   houtFV_stack_4->SetBinError(12,0.8385666);
   houtFV_stack_4->SetBinError(13,0.7164034);
   houtFV_stack_4->SetBinError(14,0.8897817);
   houtFV_stack_4->SetBinError(15,0.6996637);
   houtFV_stack_4->SetBinError(16,0.7865208);
   houtFV_stack_4->SetBinError(17,0.8975473);
   houtFV_stack_4->SetBinError(18,0.9130021);
   houtFV_stack_4->SetBinError(19,0.6526037);
   houtFV_stack_4->SetBinError(20,0.9499063);
   houtFV_stack_4->SetBinError(21,0.8724683);
   houtFV_stack_4->SetBinError(22,0.9729308);
   houtFV_stack_4->SetBinError(23,0.7360472);
   houtFV_stack_4->SetBinError(24,1.209133);
   houtFV_stack_4->SetBinError(25,1.306771);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02761016);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.04131896);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1266383);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3782692);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1331456);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1413379);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1244434);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2871744);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2050988);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1228347);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3779057);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2520512);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2081491);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.5114163);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6091983);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2303717);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05541593);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.3095334);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2536107);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.01958667);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03131428);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1019268);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.194581);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.06756075);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1041689);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06315886);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1733226);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.08025527);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.07310495);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1686771);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.09366115);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1534767);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.235457);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3109878);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1545343);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.04315819);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1836379);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1793298);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2618421);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1977586);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5224546);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4925772);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.8771161);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6146055);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6636767);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3396554);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6556673);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6828116);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5473611);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8294071);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2974581);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7960932);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.5944854);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.396464);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4594476);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3886869);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3696093);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.6503104);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1770872);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1305234);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1283604);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1161027);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2109767);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1502733);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2601569);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2102447);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2547999);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.09479509);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3229015);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2322613);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2475593);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2535699);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.09658345);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3048201);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1997481);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1215681);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1996335);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1478927);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.181786);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2483062);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06971055);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04888461);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.3127579);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.01881452);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.047782);
   hNCpi0inFVres_stack_7->SetBinContent(3,9.923641);
   hNCpi0inFVres_stack_7->SetBinContent(4,23.97056);
   hNCpi0inFVres_stack_7->SetBinContent(5,36.60426);
   hNCpi0inFVres_stack_7->SetBinContent(6,42.06726);
   hNCpi0inFVres_stack_7->SetBinContent(7,51.83844);
   hNCpi0inFVres_stack_7->SetBinContent(8,52.03345);
   hNCpi0inFVres_stack_7->SetBinContent(9,47.20479);
   hNCpi0inFVres_stack_7->SetBinContent(10,48.07385);
   hNCpi0inFVres_stack_7->SetBinContent(11,50.77094);
   hNCpi0inFVres_stack_7->SetBinContent(12,54.55156);
   hNCpi0inFVres_stack_7->SetBinContent(13,53.86415);
   hNCpi0inFVres_stack_7->SetBinContent(14,49.26419);
   hNCpi0inFVres_stack_7->SetBinContent(15,50.96502);
   hNCpi0inFVres_stack_7->SetBinContent(16,47.54395);
   hNCpi0inFVres_stack_7->SetBinContent(17,45.29894);
   hNCpi0inFVres_stack_7->SetBinContent(18,43.08609);
   hNCpi0inFVres_stack_7->SetBinContent(19,44.50545);
   hNCpi0inFVres_stack_7->SetBinContent(20,47.74799);
   hNCpi0inFVres_stack_7->SetBinContent(21,35.82432);
   hNCpi0inFVres_stack_7->SetBinContent(22,34.76475);
   hNCpi0inFVres_stack_7->SetBinContent(23,28.05248);
   hNCpi0inFVres_stack_7->SetBinContent(24,12.78638);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.639011);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.3817565);
   hNCpi0inFVres_stack_7->SetBinError(0,0.2132388);
   hNCpi0inFVres_stack_7->SetBinError(1,0.01881452);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2399048);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8890015);
   hNCpi0inFVres_stack_7->SetBinError(4,1.374522);
   hNCpi0inFVres_stack_7->SetBinError(5,1.802477);
   hNCpi0inFVres_stack_7->SetBinError(6,1.994351);
   hNCpi0inFVres_stack_7->SetBinError(7,2.166541);
   hNCpi0inFVres_stack_7->SetBinError(8,2.308833);
   hNCpi0inFVres_stack_7->SetBinError(9,2.079749);
   hNCpi0inFVres_stack_7->SetBinError(10,2.114653);
   hNCpi0inFVres_stack_7->SetBinError(11,2.098365);
   hNCpi0inFVres_stack_7->SetBinError(12,2.337302);
   hNCpi0inFVres_stack_7->SetBinError(13,2.358266);
   hNCpi0inFVres_stack_7->SetBinError(14,2.209332);
   hNCpi0inFVres_stack_7->SetBinError(15,2.193641);
   hNCpi0inFVres_stack_7->SetBinError(16,2.194695);
   hNCpi0inFVres_stack_7->SetBinError(17,2.021196);
   hNCpi0inFVres_stack_7->SetBinError(18,1.907556);
   hNCpi0inFVres_stack_7->SetBinError(19,1.929298);
   hNCpi0inFVres_stack_7->SetBinError(20,2.205966);
   hNCpi0inFVres_stack_7->SetBinError(21,1.740251);
   hNCpi0inFVres_stack_7->SetBinError(22,1.75295);
   hNCpi0inFVres_stack_7->SetBinError(23,1.712142);
   hNCpi0inFVres_stack_7->SetBinError(24,1.025648);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3487474);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1891334);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.04165863);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.1908922);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.813269);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.209893);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.215659);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.478456);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.04391);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.537474);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.75651);
   hNCpi0inFVdis_stack_8->SetBinContent(10,10.8026);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.06716);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.73314);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.87649);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.93875);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.40516);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.61927);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.44904);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.30169);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.879046);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.14883);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.522243);
   hNCpi0inFVdis_stack_8->SetBinContent(22,6.747672);
   hNCpi0inFVdis_stack_8->SetBinContent(23,5.506665);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.04411);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.2879885);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.03062039);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.08260499);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4126191);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5976889);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9538415);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9999474);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.124356);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9561877);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.318179);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.094891);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.024704);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.203415);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.039203);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.293162);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.07683);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.128649);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.156116);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.170321);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.033153);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.179544);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.9640947);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.76566);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.7311803);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4108397);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1472026);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.08404593);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1287352);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.03347047);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1500435);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05468537);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.06816273);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1115193);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.0202701);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1330695);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03157261);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1277091);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(2,0.7817899);
   hCCpi0inFV_stack_10->SetBinContent(3,4.774518);
   hCCpi0inFV_stack_10->SetBinContent(4,9.084545);
   hCCpi0inFV_stack_10->SetBinContent(5,12.00612);
   hCCpi0inFV_stack_10->SetBinContent(6,18.54576);
   hCCpi0inFV_stack_10->SetBinContent(7,19.60885);
   hCCpi0inFV_stack_10->SetBinContent(8,20.84038);
   hCCpi0inFV_stack_10->SetBinContent(9,19.15651);
   hCCpi0inFV_stack_10->SetBinContent(10,20.02975);
   hCCpi0inFV_stack_10->SetBinContent(11,20.11934);
   hCCpi0inFV_stack_10->SetBinContent(12,21.6275);
   hCCpi0inFV_stack_10->SetBinContent(13,24.23247);
   hCCpi0inFV_stack_10->SetBinContent(14,22.76124);
   hCCpi0inFV_stack_10->SetBinContent(15,20.57955);
   hCCpi0inFV_stack_10->SetBinContent(16,21.81014);
   hCCpi0inFV_stack_10->SetBinContent(17,20.59027);
   hCCpi0inFV_stack_10->SetBinContent(18,23.46745);
   hCCpi0inFV_stack_10->SetBinContent(19,19.40096);
   hCCpi0inFV_stack_10->SetBinContent(20,18.08903);
   hCCpi0inFV_stack_10->SetBinContent(21,16.99446);
   hCCpi0inFV_stack_10->SetBinContent(22,12.81624);
   hCCpi0inFV_stack_10->SetBinContent(23,9.630285);
   hCCpi0inFV_stack_10->SetBinContent(24,5.623599);
   hCCpi0inFV_stack_10->SetBinContent(25,1.213747);
   hCCpi0inFV_stack_10->SetBinError(2,0.3908977);
   hCCpi0inFV_stack_10->SetBinError(3,1.043827);
   hCCpi0inFV_stack_10->SetBinError(4,1.506921);
   hCCpi0inFV_stack_10->SetBinError(5,1.760356);
   hCCpi0inFV_stack_10->SetBinError(6,2.181429);
   hCCpi0inFV_stack_10->SetBinError(7,2.244686);
   hCCpi0inFV_stack_10->SetBinError(8,2.281537);
   hCCpi0inFV_stack_10->SetBinError(9,2.176183);
   hCCpi0inFV_stack_10->SetBinError(10,2.188761);
   hCCpi0inFV_stack_10->SetBinError(11,2.23225);
   hCCpi0inFV_stack_10->SetBinError(12,2.379459);
   hCCpi0inFV_stack_10->SetBinError(13,2.487277);
   hCCpi0inFV_stack_10->SetBinError(14,2.356519);
   hCCpi0inFV_stack_10->SetBinError(15,2.228527);
   hCCpi0inFV_stack_10->SetBinError(16,2.372572);
   hCCpi0inFV_stack_10->SetBinError(17,2.351758);
   hCCpi0inFV_stack_10->SetBinError(18,2.435117);
   hCCpi0inFV_stack_10->SetBinError(19,2.206359);
   hCCpi0inFV_stack_10->SetBinError(20,2.104814);
   hCCpi0inFV_stack_10->SetBinError(21,2.113759);
   hCCpi0inFV_stack_10->SetBinError(22,1.844309);
   hCCpi0inFV_stack_10->SetBinError(23,1.513547);
   hCCpi0inFV_stack_10->SetBinError(24,1.228242);
   hCCpi0inFV_stack_10->SetBinError(25,0.4964505);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.128524);
   hNCinFV_stack_11->SetBinContent(3,2.809928);
   hNCinFV_stack_11->SetBinContent(4,5.392619);
   hNCinFV_stack_11->SetBinContent(5,7.724152);
   hNCinFV_stack_11->SetBinContent(6,9.810226);
   hNCinFV_stack_11->SetBinContent(7,13.5802);
   hNCinFV_stack_11->SetBinContent(8,12.21453);
   hNCinFV_stack_11->SetBinContent(9,12.37645);
   hNCinFV_stack_11->SetBinContent(10,14.07195);
   hNCinFV_stack_11->SetBinContent(11,11.78479);
   hNCinFV_stack_11->SetBinContent(12,12.61058);
   hNCinFV_stack_11->SetBinContent(13,12.58971);
   hNCinFV_stack_11->SetBinContent(14,14.92481);
   hNCinFV_stack_11->SetBinContent(15,15.04547);
   hNCinFV_stack_11->SetBinContent(16,10.93661);
   hNCinFV_stack_11->SetBinContent(17,17.87288);
   hNCinFV_stack_11->SetBinContent(18,15.37721);
   hNCinFV_stack_11->SetBinContent(19,12.56053);
   hNCinFV_stack_11->SetBinContent(20,11.45277);
   hNCinFV_stack_11->SetBinContent(21,13.44566);
   hNCinFV_stack_11->SetBinContent(22,9.63308);
   hNCinFV_stack_11->SetBinContent(23,6.32794);
   hNCinFV_stack_11->SetBinContent(24,3.998844);
   hNCinFV_stack_11->SetBinContent(25,0.4261162);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.128524);
   hNCinFV_stack_11->SetBinError(3,0.788634);
   hNCinFV_stack_11->SetBinError(4,1.137249);
   hNCinFV_stack_11->SetBinError(5,1.519498);
   hNCinFV_stack_11->SetBinError(6,1.759635);
   hNCinFV_stack_11->SetBinError(7,2.089894);
   hNCinFV_stack_11->SetBinError(8,1.97448);
   hNCinFV_stack_11->SetBinError(9,1.973428);
   hNCinFV_stack_11->SetBinError(10,2.156777);
   hNCinFV_stack_11->SetBinError(11,1.870331);
   hNCinFV_stack_11->SetBinError(12,1.837761);
   hNCinFV_stack_11->SetBinError(13,2.077847);
   hNCinFV_stack_11->SetBinError(14,2.341054);
   hNCinFV_stack_11->SetBinError(15,2.186981);
   hNCinFV_stack_11->SetBinError(16,1.726075);
   hNCinFV_stack_11->SetBinError(17,2.370494);
   hNCinFV_stack_11->SetBinError(18,2.120788);
   hNCinFV_stack_11->SetBinError(19,1.921844);
   hNCinFV_stack_11->SetBinError(20,1.95738);
   hNCinFV_stack_11->SetBinError(21,2.016851);
   hNCinFV_stack_11->SetBinError(22,1.645355);
   hNCinFV_stack_11->SetBinError(23,1.328274);
   hNCinFV_stack_11->SetBinError(24,1.061244);
   hNCinFV_stack_11->SetBinError(25,0.3021948);
   hNCinFV_stack_11->SetBinError(27,0.3401776);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(3,2.297644);
   hnumuCCinFV_stack_12->SetBinContent(4,6.172769);
   hnumuCCinFV_stack_12->SetBinContent(5,12.28421);
   hnumuCCinFV_stack_12->SetBinContent(6,17.77309);
   hnumuCCinFV_stack_12->SetBinContent(7,12.31285);
   hnumuCCinFV_stack_12->SetBinContent(8,12.26277);
   hnumuCCinFV_stack_12->SetBinContent(9,12.9686);
   hnumuCCinFV_stack_12->SetBinContent(10,12.69547);
   hnumuCCinFV_stack_12->SetBinContent(11,13.59785);
   hnumuCCinFV_stack_12->SetBinContent(12,12.0614);
   hnumuCCinFV_stack_12->SetBinContent(13,15.35281);
   hnumuCCinFV_stack_12->SetBinContent(14,17.34784);
   hnumuCCinFV_stack_12->SetBinContent(15,15.78011);
   hnumuCCinFV_stack_12->SetBinContent(16,14.83144);
   hnumuCCinFV_stack_12->SetBinContent(17,14.33553);
   hnumuCCinFV_stack_12->SetBinContent(18,12.1068);
   hnumuCCinFV_stack_12->SetBinContent(19,15.65618);
   hnumuCCinFV_stack_12->SetBinContent(20,12.45296);
   hnumuCCinFV_stack_12->SetBinContent(21,13.96486);
   hnumuCCinFV_stack_12->SetBinContent(22,12.12059);
   hnumuCCinFV_stack_12->SetBinContent(23,6.411733);
   hnumuCCinFV_stack_12->SetBinContent(24,3.955651);
   hnumuCCinFV_stack_12->SetBinContent(25,1.30326);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(3,0.8013021);
   hnumuCCinFV_stack_12->SetBinError(4,1.310785);
   hnumuCCinFV_stack_12->SetBinError(5,2.348091);
   hnumuCCinFV_stack_12->SetBinError(6,2.788461);
   hnumuCCinFV_stack_12->SetBinError(7,1.892314);
   hnumuCCinFV_stack_12->SetBinError(8,1.863609);
   hnumuCCinFV_stack_12->SetBinError(9,1.864729);
   hnumuCCinFV_stack_12->SetBinError(10,1.945081);
   hnumuCCinFV_stack_12->SetBinError(11,2.220578);
   hnumuCCinFV_stack_12->SetBinError(12,2.121656);
   hnumuCCinFV_stack_12->SetBinError(13,2.09833);
   hnumuCCinFV_stack_12->SetBinError(14,2.397234);
   hnumuCCinFV_stack_12->SetBinError(15,2.229964);
   hnumuCCinFV_stack_12->SetBinError(16,1.965749);
   hnumuCCinFV_stack_12->SetBinError(17,2.062067);
   hnumuCCinFV_stack_12->SetBinError(18,2.012443);
   hnumuCCinFV_stack_12->SetBinError(19,3.067709);
   hnumuCCinFV_stack_12->SetBinError(20,2.277648);
   hnumuCCinFV_stack_12->SetBinError(21,2.102215);
   hnumuCCinFV_stack_12->SetBinError(22,2.142518);
   hnumuCCinFV_stack_12->SetBinError(23,1.540948);
   hnumuCCinFV_stack_12->SetBinError(24,1.028163);
   hnumuCCinFV_stack_12->SetBinError(25,0.6535266);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(6,0.7459182);
   hnueCCinFV_stack_13->SetBinContent(7,1.674196);
   hnueCCinFV_stack_13->SetBinContent(8,1.116924);
   hnueCCinFV_stack_13->SetBinContent(9,1.419486);
   hnueCCinFV_stack_13->SetBinContent(10,0.745953);
   hnueCCinFV_stack_13->SetBinContent(11,1.473583);
   hnueCCinFV_stack_13->SetBinContent(12,0.9808124);
   hnueCCinFV_stack_13->SetBinContent(13,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(14,1.158955);
   hnueCCinFV_stack_13->SetBinContent(15,0.4334879);
   hnueCCinFV_stack_13->SetBinContent(16,0.2537049);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.4506685);
   hnueCCinFV_stack_13->SetBinContent(19,0.7820846);
   hnueCCinFV_stack_13->SetBinContent(20,0.537618);
   hnueCCinFV_stack_13->SetBinContent(21,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(25,0.3893379);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.2476759);
   hnueCCinFV_stack_13->SetBinError(6,0.4451478);
   hnueCCinFV_stack_13->SetBinError(7,0.701106);
   hnueCCinFV_stack_13->SetBinError(8,0.5842296);
   hnueCCinFV_stack_13->SetBinError(9,0.5377431);
   hnueCCinFV_stack_13->SetBinError(10,0.4451643);
   hnueCCinFV_stack_13->SetBinError(11,0.6230278);
   hnueCCinFV_stack_13->SetBinError(12,0.5785099);
   hnueCCinFV_stack_13->SetBinError(13,0.4394482);
   hnueCCinFV_stack_13->SetBinError(14,0.7264723);
   hnueCCinFV_stack_13->SetBinError(15,0.3078282);
   hnueCCinFV_stack_13->SetBinError(16,0.2537049);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.3215406);
   hnueCCinFV_stack_13->SetBinError(19,0.463181);
   hnueCCinFV_stack_13->SetBinError(20,0.3933237);
   hnueCCinFV_stack_13->SetBinError(21,0.2504446);
   hnueCCinFV_stack_13->SetBinError(25,0.3893379);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__20->SetBinContent(0,0.5511319);
   hmcerror__20->SetBinContent(1,0.9079819);
   hmcerror__20->SetBinContent(2,11.44829);
   hmcerror__20->SetBinContent(3,28.5054);
   hmcerror__20->SetBinContent(4,57.84609);
   hmcerror__20->SetBinContent(5,84.87402);
   hmcerror__20->SetBinContent(6,103.8547);
   hmcerror__20->SetBinContent(7,117.349);
   hmcerror__20->SetBinContent(8,118.0892);
   hmcerror__20->SetBinContent(9,116.9566);
   hmcerror__20->SetBinContent(10,126.9417);
   hmcerror__20->SetBinContent(11,129.3207);
   hmcerror__20->SetBinContent(12,126.3747);
   hmcerror__20->SetBinContent(13,132.6863);
   hmcerror__20->SetBinContent(14,139.7709);
   hmcerror__20->SetBinContent(15,129.1705);
   hmcerror__20->SetBinContent(16,124.4901);
   hmcerror__20->SetBinContent(17,130.5067);
   hmcerror__20->SetBinContent(18,121.8241);
   hmcerror__20->SetBinContent(19,122.9253);
   hmcerror__20->SetBinContent(20,119.6936);
   hmcerror__20->SetBinContent(21,108.0587);
   hmcerror__20->SetBinContent(22,93.29786);
   hmcerror__20->SetBinContent(23,80.24635);
   hmcerror__20->SetBinContent(24,43.36266);
   hmcerror__20->SetBinContent(25,19.28235);
   hmcerror__20->SetBinContent(27,0.7219342);
   hmcerror__20->SetBinError(0,0.2917282);
   hmcerror__20->SetBinError(1,57.71745);
   hmcerror__20->SetBinError(2,7.828358);
   hmcerror__20->SetBinError(3,18.39659);
   hmcerror__20->SetBinError(4,35.12605);
   hmcerror__20->SetBinError(5,38.11639);
   hmcerror__20->SetBinError(6,42.60457);
   hmcerror__20->SetBinError(7,48.33121);
   hmcerror__20->SetBinError(8,48.58934);
   hmcerror__20->SetBinError(9,46.35776);
   hmcerror__20->SetBinError(10,44.41714);
   hmcerror__20->SetBinError(11,50.34797);
   hmcerror__20->SetBinError(12,48.42455);
   hmcerror__20->SetBinError(13,48.9415);
   hmcerror__20->SetBinError(14,51.43397);
   hmcerror__20->SetBinError(15,45.68467);
   hmcerror__20->SetBinError(16,43.99154);
   hmcerror__20->SetBinError(17,44.22184);
   hmcerror__20->SetBinError(18,42.82646);
   hmcerror__20->SetBinError(19,45.09469);
   hmcerror__20->SetBinError(20,46.31201);
   hmcerror__20->SetBinError(21,38.00324);
   hmcerror__20->SetBinError(22,34.73856);
   hmcerror__20->SetBinError(23,28.19658);
   hmcerror__20->SetBinError(24,19.32407);
   hmcerror__20->SetBinError(25,8.943912);
   hmcerror__20->SetBinError(26,0.3895343);
   hmcerror__20->SetBinError(27,1.819384);
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
   
   Double_t _fx3025[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3025[26] = {
   0,
   8,
   24,
   67,
   81,
   94,
   89,
   119,
   104,
   119,
   110,
   84,
   91,
   103,
   90,
   97,
   123,
   114,
   99,
   101,
   102,
   91,
   78,
   35,
   12,
   0};
   Double_t _felx3025[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3025[26] = {
   0,
   3.0307,
   5.0476,
   8.3119,
   9.1239,
   9.8173,
   9.5566,
   10.90871,
   10.19804,
   10.90871,
   10.48809,
   9.2886,
   9.6617,
   10.14889,
   9.6093,
   9.9704,
   11.09054,
   10.67708,
   10.0712,
   10.04988,
   10.0995,
   9.6617,
   8.9562,
   6.0548,
   3.64022,
   0};
   Double_t _fehx3025[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3025[26] = {
   1.1478,
   2.7896,
   4.837,
   8.1094,
   8.9221,
   9.616,
   9.3552,
   10.90871,
   10.19804,
   10.90871,
   10.48809,
   9.0869,
   9.46,
   10.14889,
   9.4079,
   9.769,
   11.09054,
   10.67708,
   9.87,
   10.04988,
   10.0995,
   9.46,
   8.7542,
   5.8483,
   3.4155,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-156,156);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(147.4996);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.2/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2035.0","lp");
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  913.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 247.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3026[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3026[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3026[26] = {
   63.56674,
   0.6838014,
   0.6453723,
   0.607233,
   0.4490937,
   0.4102323,
   0.4118587,
   0.4114629,
   0.3963671,
   0.349902,
   0.3893264,
   0.3831825,
   0.3688513,
   0.3679876,
   0.3536772,
   0.3533739,
   0.3388472,
   0.3515435,
   0.3668464,
   0.3869215,
   0.3516906,
   0.3723404,
   0.3513753,
   0.4456385,
   0.4638392,
   0};
   Double_t _fehx3026[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3026[26] = {
   63.56674,
   0.6838014,
   0.6453723,
   0.607233,
   0.4490937,
   0.4102323,
   0.4118587,
   0.4114629,
   0.3963671,
   0.349902,
   0.3893264,
   0.3831825,
   0.3688513,
   0.3679876,
   0.3536772,
   0.3533739,
   0.3388472,
   0.3515435,
   0.3668464,
   0.3869215,
   0.3516906,
   0.3723404,
   0.3513753,
   0.4456385,
   0.4638392,
   0};
   grae = new TGraphAsymmErrors(26,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-156,156);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
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
   
   Double_t _fx3027[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3027[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3027[26] = {
   0.8930757,
   0.2889153,
   0.4415833,
   0.462227,
   0.3876187,
   0.3644064,
   0.3835446,
   0.3655753,
   0.360962,
   0.3149502,
   0.3476938,
   0.3441251,
   0.3358954,
   0.3305473,
   0.3353154,
   0.3277481,
   0.3113041,
   0.3245728,
   0.3335135,
   0.3452915,
   0.3249888,
   0.3442569,
   0.3139808,
   0.339058,
   0.2894201,
   0};
   Double_t _fehx3027[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3027[26] = {
   0.8930757,
   0.2889153,
   0.4415833,
   0.462227,
   0.3876187,
   0.3644064,
   0.3835446,
   0.3655753,
   0.360962,
   0.3149502,
   0.3476938,
   0.3441251,
   0.3358954,
   0.3305473,
   0.3353154,
   0.3277481,
   0.3113041,
   0.3245728,
   0.3335135,
   0.3452915,
   0.3249888,
   0.3442569,
   0.3139808,
   0.339058,
   0.2894201,
   0};
   grae = new TGraphAsymmErrors(26,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-156,156);
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
   
   Double_t _fx3028[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3028[26] = {
   0,
   0.6987942,
   0.8419459,
   1.158246,
   0.9543557,
   0.9051104,
   0.7584215,
   1.007712,
   0.8892184,
   0.9374386,
   0.8505985,
   0.6646902,
   0.6858283,
   0.7369201,
   0.6967533,
   0.7791787,
   0.94248,
   0.9357757,
   0.8053674,
   0.8438216,
   0.9439311,
   0.9753707,
   0.9720069,
   0.8071461,
   0.6223306,
   10};
   Double_t _felx3028[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3028[26] = {
   0,
   0.2647295,
   0.1770752,
   0.1436899,
   0.1074993,
   0.09452916,
   0.08143742,
   0.09237684,
   0.08719504,
   0.08593485,
   0.08110138,
   0.07350049,
   0.07281613,
   0.07261089,
   0.07439235,
   0.08008993,
   0.08498056,
   0.08764342,
   0.08192946,
   0.08396338,
   0.09346311,
   0.1035576,
   0.1116088,
   0.1396317,
   0.188785,
   0};
   Double_t _fehx3028[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3028[26] = {
   1.264122,
   0.2436695,
   0.1696872,
   0.1401893,
   0.1051217,
   0.09259087,
   0.07972117,
   0.09237684,
   0.08719504,
   0.08593485,
   0.08110138,
   0.07190444,
   0.071296,
   0.07261089,
   0.07283318,
   0.07847213,
   0.08498056,
   0.08764342,
   0.08029269,
   0.08396338,
   0.09346311,
   0.1013957,
   0.1090916,
   0.1348695,
   0.1771309,
   0};
   grae = new TGraphAsymmErrors(26,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-156,156);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(11);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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
