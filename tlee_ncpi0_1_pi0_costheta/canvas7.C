#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 10:30:54 2022) by ROOT version 6.26/00
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
   pad1->Range(-1.307692,-6.0747,1.25641,671.734);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__19->SetBinContent(1,75.70422);
   hmc__19->SetBinContent(2,59.78006);
   hmc__19->SetBinContent(3,56.94543);
   hmc__19->SetBinContent(4,48.62551);
   hmc__19->SetBinContent(5,51.35005);
   hmc__19->SetBinContent(6,52.02638);
   hmc__19->SetBinContent(7,56.04952);
   hmc__19->SetBinContent(8,55.09324);
   hmc__19->SetBinContent(9,49.72224);
   hmc__19->SetBinContent(10,57.00425);
   hmc__19->SetBinContent(11,61.33288);
   hmc__19->SetBinContent(12,59.98839);
   hmc__19->SetBinContent(13,74.58482);
   hmc__19->SetBinContent(14,77.19504);
   hmc__19->SetBinContent(15,85.34114);
   hmc__19->SetBinContent(16,79.79973);
   hmc__19->SetBinContent(17,82.11417);
   hmc__19->SetBinContent(18,92.51663);
   hmc__19->SetBinContent(19,106.4747);
   hmc__19->SetBinContent(20,119.4066);
   hmc__19->SetBinContent(21,148.1631);
   hmc__19->SetBinContent(22,146.2161);
   hmc__19->SetBinContent(23,169.4693);
   hmc__19->SetBinContent(24,220.4182);
   hmc__19->SetBinContent(25,303.735);
   hmc__19->SetBinError(1,31.11459);
   hmc__19->SetBinError(2,24.00662);
   hmc__19->SetBinError(3,26.61219);
   hmc__19->SetBinError(4,23.86387);
   hmc__19->SetBinError(5,24.55199);
   hmc__19->SetBinError(6,22.27023);
   hmc__19->SetBinError(7,22.80127);
   hmc__19->SetBinError(8,24.30497);
   hmc__19->SetBinError(9,23.57093);
   hmc__19->SetBinError(10,25.82696);
   hmc__19->SetBinError(11,26.7275);
   hmc__19->SetBinError(12,28.25785);
   hmc__19->SetBinError(13,31.41116);
   hmc__19->SetBinError(14,33.67429);
   hmc__19->SetBinError(15,35.19358);
   hmc__19->SetBinError(16,36.5635);
   hmc__19->SetBinError(17,36.58976);
   hmc__19->SetBinError(18,39.64384);
   hmc__19->SetBinError(19,44.8291);
   hmc__19->SetBinError(20,53.58918);
   hmc__19->SetBinError(21,60.96468);
   hmc__19->SetBinError(22,57.2355);
   hmc__19->SetBinError(23,68.98289);
   hmc__19->SetBinError(24,77.23746);
   hmc__19->SetBinError(25,91.0009);
   hmc__19->SetBinError(26,0.3895343);
   hmc__19->SetMinimum(-6.0747);
   hmc__19->SetMaximum(637.8435);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,-1,1);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(318.9218);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,2.261394);
   hbadmatch_stack_1->SetBinContent(2,1.145588);
   hbadmatch_stack_1->SetBinContent(3,0.8752682);
   hbadmatch_stack_1->SetBinContent(4,1.383631);
   hbadmatch_stack_1->SetBinContent(5,1.526916);
   hbadmatch_stack_1->SetBinContent(6,0.8187618);
   hbadmatch_stack_1->SetBinContent(7,2.167246);
   hbadmatch_stack_1->SetBinContent(8,0.527258);
   hbadmatch_stack_1->SetBinContent(9,1.134623);
   hbadmatch_stack_1->SetBinContent(10,1.972322);
   hbadmatch_stack_1->SetBinContent(11,0.7060337);
   hbadmatch_stack_1->SetBinContent(12,2.512569);
   hbadmatch_stack_1->SetBinContent(13,1.083385);
   hbadmatch_stack_1->SetBinContent(14,3.631094);
   hbadmatch_stack_1->SetBinContent(15,5.124575);
   hbadmatch_stack_1->SetBinContent(16,2.723448);
   hbadmatch_stack_1->SetBinContent(17,2.356606);
   hbadmatch_stack_1->SetBinContent(18,1.717411);
   hbadmatch_stack_1->SetBinContent(19,1.281589);
   hbadmatch_stack_1->SetBinContent(20,2.470291);
   hbadmatch_stack_1->SetBinContent(21,3.834983);
   hbadmatch_stack_1->SetBinContent(22,3.394343);
   hbadmatch_stack_1->SetBinContent(23,3.642551);
   hbadmatch_stack_1->SetBinContent(24,2.275142);
   hbadmatch_stack_1->SetBinContent(25,4.263199);
   hbadmatch_stack_1->SetBinError(1,0.8050588);
   hbadmatch_stack_1->SetBinError(2,0.6096778);
   hbadmatch_stack_1->SetBinError(3,0.4008675);
   hbadmatch_stack_1->SetBinError(4,0.5785266);
   hbadmatch_stack_1->SetBinError(5,0.5548058);
   hbadmatch_stack_1->SetBinError(6,0.4162832);
   hbadmatch_stack_1->SetBinError(7,0.7597005);
   hbadmatch_stack_1->SetBinError(8,0.3002807);
   hbadmatch_stack_1->SetBinError(9,0.6021201);
   hbadmatch_stack_1->SetBinError(10,0.8070365);
   hbadmatch_stack_1->SetBinError(11,0.42765);
   hbadmatch_stack_1->SetBinError(12,0.8206729);
   hbadmatch_stack_1->SetBinError(13,0.5422596);
   hbadmatch_stack_1->SetBinError(14,1.08713);
   hbadmatch_stack_1->SetBinError(15,2.170944);
   hbadmatch_stack_1->SetBinError(16,1.265872);
   hbadmatch_stack_1->SetBinError(17,0.8783599);
   hbadmatch_stack_1->SetBinError(18,0.8100367);
   hbadmatch_stack_1->SetBinError(19,0.5687619);
   hbadmatch_stack_1->SetBinError(20,0.8101459);
   hbadmatch_stack_1->SetBinError(21,1.151785);
   hbadmatch_stack_1->SetBinError(22,1.014461);
   hbadmatch_stack_1->SetBinError(23,1.023842);
   hbadmatch_stack_1->SetBinError(24,0.6532139);
   hbadmatch_stack_1->SetBinError(25,1.11456);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,3.864046);
   hext_stack_2->SetBinContent(2,4.06158);
   hext_stack_2->SetBinContent(3,2.517386);
   hext_stack_2->SetBinContent(4,1.868591);
   hext_stack_2->SetBinContent(5,3.565599);
   hext_stack_2->SetBinContent(6,5.725457);
   hext_stack_2->SetBinContent(7,8.056898);
   hext_stack_2->SetBinContent(8,9.208854);
   hext_stack_2->SetBinContent(9,1.78639);
   hext_stack_2->SetBinContent(10,6.705829);
   hext_stack_2->SetBinContent(11,10.59583);
   hext_stack_2->SetBinContent(12,4.620993);
   hext_stack_2->SetBinContent(13,12.71978);
   hext_stack_2->SetBinContent(14,4.143782);
   hext_stack_2->SetBinContent(15,10.80212);
   hext_stack_2->SetBinContent(16,6.877413);
   hext_stack_2->SetBinContent(17,5.918582);
   hext_stack_2->SetBinContent(18,5.82202);
   hext_stack_2->SetBinContent(19,11.44373);
   hext_stack_2->SetBinContent(20,12.76727);
   hext_stack_2->SetBinContent(21,11.38748);
   hext_stack_2->SetBinContent(22,7.530616);
   hext_stack_2->SetBinContent(23,9.627043);
   hext_stack_2->SetBinContent(24,15.32655);
   hext_stack_2->SetBinContent(25,11.48405);
   hext_stack_2->SetBinError(1,1.437918);
   hext_stack_2->SetBinError(2,1.232114);
   hext_stack_2->SetBinError(3,0.9575503);
   hext_stack_2->SetBinError(4,0.840497);
   hext_stack_2->SetBinError(5,1.22225);
   hext_stack_2->SetBinError(6,1.72489);
   hext_stack_2->SetBinError(7,2.091787);
   hext_stack_2->SetBinError(8,2.099774);
   hext_stack_2->SetBinError(9,0.8039566);
   hext_stack_2->SetBinError(10,1.757767);
   hext_stack_2->SetBinError(11,2.165381);
   hext_stack_2->SetBinError(12,1.367364);
   hext_stack_2->SetBinError(13,2.678849);
   hext_stack_2->SetBinError(14,1.256262);
   hext_stack_2->SetBinError(15,2.395835);
   hext_stack_2->SetBinError(16,1.734567);
   hext_stack_2->SetBinError(17,1.513479);
   hext_stack_2->SetBinError(18,1.622631);
   hext_stack_2->SetBinError(19,2.480261);
   hext_stack_2->SetBinError(20,2.470657);
   hext_stack_2->SetBinError(21,2.371312);
   hext_stack_2->SetBinError(22,1.831478);
   hext_stack_2->SetBinError(23,2.123275);
   hext_stack_2->SetBinError(24,2.819933);
   hext_stack_2->SetBinError(25,2.298001);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.3896828);
   hdirt_stack_3->SetBinContent(2,0.5570828);
   hdirt_stack_3->SetBinContent(3,0.3059099);
   hdirt_stack_3->SetBinContent(4,0.2761429);
   hdirt_stack_3->SetBinContent(5,0.2188956);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.8385887);
   hdirt_stack_3->SetBinContent(8,0.6143302);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,2.044474);
   hdirt_stack_3->SetBinContent(16,0.1651799);
   hdirt_stack_3->SetBinContent(18,0.5833645);
   hdirt_stack_3->SetBinContent(19,0.89527);
   hdirt_stack_3->SetBinContent(20,0.5570828);
   hdirt_stack_3->SetBinContent(21,0.4794168);
   hdirt_stack_3->SetBinContent(22,1.275688);
   hdirt_stack_3->SetBinContent(23,0.2188956);
   hdirt_stack_3->SetBinContent(24,0.7839588);
   hdirt_stack_3->SetBinContent(25,0.6769639);
   hdirt_stack_3->SetBinError(1,0.2870053);
   hdirt_stack_3->SetBinError(2,0.4028472);
   hdirt_stack_3->SetBinError(3,0.2153806);
   hdirt_stack_3->SetBinError(4,0.1952625);
   hdirt_stack_3->SetBinError(5,0.2188956);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.5064279);
   hdirt_stack_3->SetBinError(8,0.39051);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,1.090892);
   hdirt_stack_3->SetBinError(16,0.1651799);
   hdirt_stack_3->SetBinError(18,0.45339);
   hdirt_stack_3->SetBinError(19,0.5259814);
   hdirt_stack_3->SetBinError(20,0.4028472);
   hdirt_stack_3->SetBinError(21,0.3402743);
   hdirt_stack_3->SetBinError(22,0.5285705);
   hdirt_stack_3->SetBinError(23,0.2188956);
   hdirt_stack_3->SetBinError(24,0.3950683);
   hdirt_stack_3->SetBinError(25,0.3444523);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,5.704025);
   houtFV_stack_4->SetBinContent(2,2.072727);
   houtFV_stack_4->SetBinContent(3,1.872804);
   houtFV_stack_4->SetBinContent(4,1.391645);
   houtFV_stack_4->SetBinContent(5,2.388741);
   houtFV_stack_4->SetBinContent(6,2.074891);
   houtFV_stack_4->SetBinContent(7,1.775737);
   houtFV_stack_4->SetBinContent(8,1.687781);
   houtFV_stack_4->SetBinContent(9,1.758062);
   houtFV_stack_4->SetBinContent(10,1.450241);
   houtFV_stack_4->SetBinContent(11,1.893496);
   houtFV_stack_4->SetBinContent(12,2.037389);
   houtFV_stack_4->SetBinContent(13,1.840208);
   houtFV_stack_4->SetBinContent(14,3.098356);
   houtFV_stack_4->SetBinContent(15,3.153385);
   houtFV_stack_4->SetBinContent(16,3.383777);
   houtFV_stack_4->SetBinContent(17,2.754068);
   houtFV_stack_4->SetBinContent(18,4.705996);
   houtFV_stack_4->SetBinContent(19,3.578974);
   houtFV_stack_4->SetBinContent(20,4.828085);
   houtFV_stack_4->SetBinContent(21,7.521622);
   houtFV_stack_4->SetBinContent(22,5.340407);
   houtFV_stack_4->SetBinContent(23,5.873675);
   houtFV_stack_4->SetBinContent(24,8.108465);
   houtFV_stack_4->SetBinContent(25,6.527782);
   houtFV_stack_4->SetBinError(1,1.226744);
   houtFV_stack_4->SetBinError(2,0.7218054);
   houtFV_stack_4->SetBinError(3,0.7054137);
   houtFV_stack_4->SetBinError(4,0.5855499);
   houtFV_stack_4->SetBinError(5,0.7839734);
   houtFV_stack_4->SetBinError(6,0.6973371);
   houtFV_stack_4->SetBinError(7,0.6738581);
   houtFV_stack_4->SetBinError(8,0.6595183);
   houtFV_stack_4->SetBinError(9,0.6914323);
   houtFV_stack_4->SetBinError(10,0.5698653);
   houtFV_stack_4->SetBinError(11,0.6271605);
   houtFV_stack_4->SetBinError(12,0.6592569);
   houtFV_stack_4->SetBinError(13,0.6125281);
   houtFV_stack_4->SetBinError(14,0.8979828);
   houtFV_stack_4->SetBinError(15,0.8319486);
   houtFV_stack_4->SetBinError(16,0.8904734);
   houtFV_stack_4->SetBinError(17,0.8547372);
   houtFV_stack_4->SetBinError(18,1.097028);
   houtFV_stack_4->SetBinError(19,0.9239643);
   houtFV_stack_4->SetBinError(20,1.074583);
   houtFV_stack_4->SetBinError(21,1.363559);
   houtFV_stack_4->SetBinError(22,1.056236);
   houtFV_stack_4->SetBinError(23,1.19332);
   houtFV_stack_4->SetBinError(24,1.339012);
   houtFV_stack_4->SetBinError(25,1.279533);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09985313);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.3230199);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2526288);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.08233672);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.539591);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.5295826);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.421593);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.09985313);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2038367);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.146251);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.06086255);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2165466);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2006885);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4965302);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.622768);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3209276);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2411067);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.126796);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1102785);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3802231);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2425722);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1865496);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.09839175);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.216388);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1473104);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4786054);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05478407);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3508018);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.186406);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2334847);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.07371782);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2293476);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.6449742);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.4191737);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5532196);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.083011);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.781033);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.6735918);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.489636);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2865239);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1223907);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1486637);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.05016882);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05220368);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1500609);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.136096);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1271066);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04131505);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1182274);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05007114);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2419721);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03165861);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1647237);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.08002999);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1396937);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03475434);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1317315);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2255202);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1780848);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.167344);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2718209);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.4609734);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1708346);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3607176);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,23.56229);
   hNCpi0inFVres_stack_7->SetBinContent(2,23.19222);
   hNCpi0inFVres_stack_7->SetBinContent(3,20.14484);
   hNCpi0inFVres_stack_7->SetBinContent(4,18.5311);
   hNCpi0inFVres_stack_7->SetBinContent(5,20.52073);
   hNCpi0inFVres_stack_7->SetBinContent(6,18.88991);
   hNCpi0inFVres_stack_7->SetBinContent(7,19.93255);
   hNCpi0inFVres_stack_7->SetBinContent(8,19.50937);
   hNCpi0inFVres_stack_7->SetBinContent(9,20.12631);
   hNCpi0inFVres_stack_7->SetBinContent(10,20.45878);
   hNCpi0inFVres_stack_7->SetBinContent(11,21.00676);
   hNCpi0inFVres_stack_7->SetBinContent(12,24.54899);
   hNCpi0inFVres_stack_7->SetBinContent(13,26.36127);
   hNCpi0inFVres_stack_7->SetBinContent(14,30.01219);
   hNCpi0inFVres_stack_7->SetBinContent(15,31.04908);
   hNCpi0inFVres_stack_7->SetBinContent(16,31.81397);
   hNCpi0inFVres_stack_7->SetBinContent(17,33.57246);
   hNCpi0inFVres_stack_7->SetBinContent(18,36.02947);
   hNCpi0inFVres_stack_7->SetBinContent(19,44.39048);
   hNCpi0inFVres_stack_7->SetBinContent(20,49.68995);
   hNCpi0inFVres_stack_7->SetBinContent(21,58.36513);
   hNCpi0inFVres_stack_7->SetBinContent(22,61.08269);
   hNCpi0inFVres_stack_7->SetBinContent(23,72.09296);
   hNCpi0inFVres_stack_7->SetBinContent(24,84.6178);
   hNCpi0inFVres_stack_7->SetBinContent(25,104.6412);
   hNCpi0inFVres_stack_7->SetBinError(1,1.595984);
   hNCpi0inFVres_stack_7->SetBinError(2,1.491358);
   hNCpi0inFVres_stack_7->SetBinError(3,1.310499);
   hNCpi0inFVres_stack_7->SetBinError(4,1.273375);
   hNCpi0inFVres_stack_7->SetBinError(5,1.352722);
   hNCpi0inFVres_stack_7->SetBinError(6,1.262059);
   hNCpi0inFVres_stack_7->SetBinError(7,1.390119);
   hNCpi0inFVres_stack_7->SetBinError(8,1.232035);
   hNCpi0inFVres_stack_7->SetBinError(9,1.349499);
   hNCpi0inFVres_stack_7->SetBinError(10,1.261785);
   hNCpi0inFVres_stack_7->SetBinError(11,1.268765);
   hNCpi0inFVres_stack_7->SetBinError(12,1.509309);
   hNCpi0inFVres_stack_7->SetBinError(13,1.536673);
   hNCpi0inFVres_stack_7->SetBinError(14,1.604718);
   hNCpi0inFVres_stack_7->SetBinError(15,1.675815);
   hNCpi0inFVres_stack_7->SetBinError(16,1.693271);
   hNCpi0inFVres_stack_7->SetBinError(17,1.661275);
   hNCpi0inFVres_stack_7->SetBinError(18,1.724105);
   hNCpi0inFVres_stack_7->SetBinError(19,1.978439);
   hNCpi0inFVres_stack_7->SetBinError(20,2.045814);
   hNCpi0inFVres_stack_7->SetBinError(21,2.420375);
   hNCpi0inFVres_stack_7->SetBinError(22,2.32733);
   hNCpi0inFVres_stack_7->SetBinError(23,2.684936);
   hNCpi0inFVres_stack_7->SetBinError(24,2.835837);
   hNCpi0inFVres_stack_7->SetBinError(25,3.474102);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.337758);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.852797);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.922892);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.427599);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.910733);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.774358);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.471033);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.19793);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.862901);
   hNCpi0inFVdis_stack_8->SetBinContent(10,4.593313);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.662134);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.736053);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.84204);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.398719);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.141365);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.566695);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.23562);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.326198);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.281161);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.68108);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.831631);
   hNCpi0inFVdis_stack_8->SetBinContent(22,12.38618);
   hNCpi0inFVdis_stack_8->SetBinContent(23,18.16651);
   hNCpi0inFVdis_stack_8->SetBinContent(24,24.58644);
   hNCpi0inFVdis_stack_8->SetBinContent(25,39.42441);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7552734);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5020601);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6844215);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5689228);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5512925);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5690576);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.5366047);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5996838);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5815719);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6545311);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6809984);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5342271);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6759571);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.6669727);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.68518);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5380571);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8462022);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8001849);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9217112);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.137419);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8876252);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.123557);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.358074);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.923061);
   hNCpi0inFVdis_stack_8->SetBinError(25,2.343195);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1530065);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1500435);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.170903);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.129197);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1330695);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.08439476);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,12.3932);
   hCCpi0inFV_stack_10->SetBinContent(2,9.470131);
   hCCpi0inFV_stack_10->SetBinContent(3,13.33091);
   hCCpi0inFV_stack_10->SetBinContent(4,8.90159);
   hCCpi0inFV_stack_10->SetBinContent(5,8.779512);
   hCCpi0inFV_stack_10->SetBinContent(6,7.881904);
   hCCpi0inFV_stack_10->SetBinContent(7,9.819844);
   hCCpi0inFV_stack_10->SetBinContent(8,7.133688);
   hCCpi0inFV_stack_10->SetBinContent(9,10.06643);
   hCCpi0inFV_stack_10->SetBinContent(10,8.457443);
   hCCpi0inFV_stack_10->SetBinContent(11,8.215533);
   hCCpi0inFV_stack_10->SetBinContent(12,8.802692);
   hCCpi0inFV_stack_10->SetBinContent(13,9.884995);
   hCCpi0inFV_stack_10->SetBinContent(14,14.51838);
   hCCpi0inFV_stack_10->SetBinContent(15,9.716719);
   hCCpi0inFV_stack_10->SetBinContent(16,12.06101);
   hCCpi0inFV_stack_10->SetBinContent(17,12.83681);
   hCCpi0inFV_stack_10->SetBinContent(18,15.52327);
   hCCpi0inFV_stack_10->SetBinContent(19,13.35022);
   hCCpi0inFV_stack_10->SetBinContent(20,15.24449);
   hCCpi0inFV_stack_10->SetBinContent(21,25.70153);
   hCCpi0inFV_stack_10->SetBinContent(22,25.59308);
   hCCpi0inFV_stack_10->SetBinContent(23,24.46301);
   hCCpi0inFV_stack_10->SetBinContent(24,38.39137);
   hCCpi0inFV_stack_10->SetBinContent(25,53.24672);
   hCCpi0inFV_stack_10->SetBinError(1,1.729767);
   hCCpi0inFV_stack_10->SetBinError(2,1.594842);
   hCCpi0inFV_stack_10->SetBinError(3,1.82971);
   hCCpi0inFV_stack_10->SetBinError(4,1.548574);
   hCCpi0inFV_stack_10->SetBinError(5,1.473103);
   hCCpi0inFV_stack_10->SetBinError(6,1.300878);
   hCCpi0inFV_stack_10->SetBinError(7,1.5699);
   hCCpi0inFV_stack_10->SetBinError(8,1.300706);
   hCCpi0inFV_stack_10->SetBinError(9,1.569596);
   hCCpi0inFV_stack_10->SetBinError(10,1.414582);
   hCCpi0inFV_stack_10->SetBinError(11,1.366228);
   hCCpi0inFV_stack_10->SetBinError(12,1.455592);
   hCCpi0inFV_stack_10->SetBinError(13,1.578947);
   hCCpi0inFV_stack_10->SetBinError(14,1.914109);
   hCCpi0inFV_stack_10->SetBinError(15,1.594542);
   hCCpi0inFV_stack_10->SetBinError(16,1.788556);
   hCCpi0inFV_stack_10->SetBinError(17,1.846735);
   hCCpi0inFV_stack_10->SetBinError(18,1.980876);
   hCCpi0inFV_stack_10->SetBinError(19,1.831804);
   hCCpi0inFV_stack_10->SetBinError(20,1.958165);
   hCCpi0inFV_stack_10->SetBinError(21,2.587133);
   hCCpi0inFV_stack_10->SetBinError(22,2.527613);
   hCCpi0inFV_stack_10->SetBinError(23,2.458599);
   hCCpi0inFV_stack_10->SetBinError(24,3.117461);
   hCCpi0inFV_stack_10->SetBinError(25,3.711736);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,10.90192);
   hNCinFV_stack_11->SetBinContent(2,7.173439);
   hNCinFV_stack_11->SetBinContent(3,6.801873);
   hNCinFV_stack_11->SetBinContent(4,5.248127);
   hNCinFV_stack_11->SetBinContent(5,4.34762);
   hNCinFV_stack_11->SetBinContent(6,5.779393);
   hNCinFV_stack_11->SetBinContent(7,5.505711);
   hNCinFV_stack_11->SetBinContent(8,4.29605);
   hNCinFV_stack_11->SetBinContent(9,4.974833);
   hNCinFV_stack_11->SetBinContent(10,2.130505);
   hNCinFV_stack_11->SetBinContent(11,4.583666);
   hNCinFV_stack_11->SetBinContent(12,4.991157);
   hNCinFV_stack_11->SetBinContent(13,5.474142);
   hNCinFV_stack_11->SetBinContent(14,4.327699);
   hNCinFV_stack_11->SetBinContent(15,5.852279);
   hNCinFV_stack_11->SetBinContent(16,5.520213);
   hNCinFV_stack_11->SetBinContent(17,5.676137);
   hNCinFV_stack_11->SetBinContent(18,7.047037);
   hNCinFV_stack_11->SetBinContent(19,10.74117);
   hNCinFV_stack_11->SetBinContent(20,10.83053);
   hNCinFV_stack_11->SetBinContent(21,14.03641);
   hNCinFV_stack_11->SetBinContent(22,12.91625);
   hNCinFV_stack_11->SetBinContent(23,20.19832);
   hNCinFV_stack_11->SetBinContent(24,29.81577);
   hNCinFV_stack_11->SetBinContent(25,48.46224);
   hNCinFV_stack_11->SetBinError(1,1.7593);
   hNCinFV_stack_11->SetBinError(2,1.370238);
   hNCinFV_stack_11->SetBinError(3,1.306641);
   hNCinFV_stack_11->SetBinError(4,1.094399);
   hNCinFV_stack_11->SetBinError(5,1.029683);
   hNCinFV_stack_11->SetBinError(6,1.228229);
   hNCinFV_stack_11->SetBinError(7,1.446905);
   hNCinFV_stack_11->SetBinError(8,0.982823);
   hNCinFV_stack_11->SetBinError(9,1.07763);
   hNCinFV_stack_11->SetBinError(10,0.6279842);
   hNCinFV_stack_11->SetBinError(11,1.131985);
   hNCinFV_stack_11->SetBinError(12,1.126381);
   hNCinFV_stack_11->SetBinError(13,1.335704);
   hNCinFV_stack_11->SetBinError(14,1.10449);
   hNCinFV_stack_11->SetBinError(15,1.191811);
   hNCinFV_stack_11->SetBinError(16,1.168006);
   hNCinFV_stack_11->SetBinError(17,1.380307);
   hNCinFV_stack_11->SetBinError(18,1.463668);
   hNCinFV_stack_11->SetBinError(19,1.858984);
   hNCinFV_stack_11->SetBinError(20,1.847439);
   hNCinFV_stack_11->SetBinError(21,2.266709);
   hNCinFV_stack_11->SetBinError(22,1.826616);
   hNCinFV_stack_11->SetBinError(23,2.55113);
   hNCinFV_stack_11->SetBinError(24,3.023574);
   hNCinFV_stack_11->SetBinError(25,4.206711);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,10.61593);
   hnumuCCinFV_stack_12->SetBinContent(2,7.925907);
   hnumuCCinFV_stack_12->SetBinContent(3,6.372379);
   hnumuCCinFV_stack_12->SetBinContent(4,6.214943);
   hnumuCCinFV_stack_12->SetBinContent(5,5.717439);
   hnumuCCinFV_stack_12->SetBinContent(6,6.222871);
   hnumuCCinFV_stack_12->SetBinContent(7,3.32328);
   hnumuCCinFV_stack_12->SetBinContent(8,8.447876);
   hnumuCCinFV_stack_12->SetBinContent(9,5.303921);
   hnumuCCinFV_stack_12->SetBinContent(10,10.95839);
   hnumuCCinFV_stack_12->SetBinContent(11,9.327091);
   hnumuCCinFV_stack_12->SetBinContent(12,8.041042);
   hnumuCCinFV_stack_12->SetBinContent(13,13.32421);
   hnumuCCinFV_stack_12->SetBinContent(14,12.49513);
   hnumuCCinFV_stack_12->SetBinContent(15,11.81258);
   hnumuCCinFV_stack_12->SetBinContent(16,12.43613);
   hnumuCCinFV_stack_12->SetBinContent(17,11.28599);
   hnumuCCinFV_stack_12->SetBinContent(18,13.39077);
   hnumuCCinFV_stack_12->SetBinContent(19,10.84895);
   hnumuCCinFV_stack_12->SetBinContent(20,13.32092);
   hnumuCCinFV_stack_12->SetBinContent(21,16.70151);
   hnumuCCinFV_stack_12->SetBinContent(22,14.43433);
   hnumuCCinFV_stack_12->SetBinContent(23,12.33054);
   hnumuCCinFV_stack_12->SetBinContent(24,14.46596);
   hnumuCCinFV_stack_12->SetBinContent(25,25.06853);
   hnumuCCinFV_stack_12->SetBinError(1,1.686659);
   hnumuCCinFV_stack_12->SetBinError(2,1.556608);
   hnumuCCinFV_stack_12->SetBinError(3,1.340076);
   hnumuCCinFV_stack_12->SetBinError(4,1.651942);
   hnumuCCinFV_stack_12->SetBinError(5,1.251374);
   hnumuCCinFV_stack_12->SetBinError(6,1.714078);
   hnumuCCinFV_stack_12->SetBinError(7,0.8709037);
   hnumuCCinFV_stack_12->SetBinError(8,1.581015);
   hnumuCCinFV_stack_12->SetBinError(9,1.176068);
   hnumuCCinFV_stack_12->SetBinError(10,1.871292);
   hnumuCCinFV_stack_12->SetBinError(11,1.811118);
   hnumuCCinFV_stack_12->SetBinError(12,1.651109);
   hnumuCCinFV_stack_12->SetBinError(13,2.232955);
   hnumuCCinFV_stack_12->SetBinError(14,1.859634);
   hnumuCCinFV_stack_12->SetBinError(15,2.27586);
   hnumuCCinFV_stack_12->SetBinError(16,2.216227);
   hnumuCCinFV_stack_12->SetBinError(17,1.772417);
   hnumuCCinFV_stack_12->SetBinError(18,2.367375);
   hnumuCCinFV_stack_12->SetBinError(19,1.65818);
   hnumuCCinFV_stack_12->SetBinError(20,3.038993);
   hnumuCCinFV_stack_12->SetBinError(21,2.604442);
   hnumuCCinFV_stack_12->SetBinError(22,2.315177);
   hnumuCCinFV_stack_12->SetBinError(23,2.170406);
   hnumuCCinFV_stack_12->SetBinError(24,1.883154);
   hnumuCCinFV_stack_12->SetBinError(25,2.480938);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(3,0.441907);
   hnueCCinFV_stack_13->SetBinContent(4,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(5,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(6,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(7,0.5748039);
   hnueCCinFV_stack_13->SetBinContent(8,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(9,0.5946997);
   hnueCCinFV_stack_13->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.4454695);
   hnueCCinFV_stack_13->SetBinContent(17,0.2511644);
   hnueCCinFV_stack_13->SetBinContent(18,1.094315);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(22,1.044464);
   hnueCCinFV_stack_13->SetBinContent(23,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(24,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(25,5.857757);
   hnueCCinFV_stack_13->SetBinError(3,0.3143499);
   hnueCCinFV_stack_13->SetBinError(4,0.2476759);
   hnueCCinFV_stack_13->SetBinError(5,0.2486649);
   hnueCCinFV_stack_13->SetBinError(6,0.3401778);
   hnueCCinFV_stack_13->SetBinError(7,0.4132436);
   hnueCCinFV_stack_13->SetBinError(8,0.2556436);
   hnueCCinFV_stack_13->SetBinError(9,0.5946997);
   hnueCCinFV_stack_13->SetBinError(11,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.3174228);
   hnueCCinFV_stack_13->SetBinError(17,0.2511644);
   hnueCCinFV_stack_13->SetBinError(18,0.6346687);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.438694);
   hnueCCinFV_stack_13->SetBinError(22,0.5321953);
   hnueCCinFV_stack_13->SetBinError(23,0.3921167);
   hnueCCinFV_stack_13->SetBinError(24,0.4394482);
   hnueCCinFV_stack_13->SetBinError(25,1.246638);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__20->SetBinContent(1,75.70422);
   hmcerror__20->SetBinContent(2,59.78006);
   hmcerror__20->SetBinContent(3,56.94543);
   hmcerror__20->SetBinContent(4,48.62551);
   hmcerror__20->SetBinContent(5,51.35005);
   hmcerror__20->SetBinContent(6,52.02638);
   hmcerror__20->SetBinContent(7,56.04952);
   hmcerror__20->SetBinContent(8,55.09324);
   hmcerror__20->SetBinContent(9,49.72224);
   hmcerror__20->SetBinContent(10,57.00425);
   hmcerror__20->SetBinContent(11,61.33288);
   hmcerror__20->SetBinContent(12,59.98839);
   hmcerror__20->SetBinContent(13,74.58482);
   hmcerror__20->SetBinContent(14,77.19504);
   hmcerror__20->SetBinContent(15,85.34114);
   hmcerror__20->SetBinContent(16,79.79973);
   hmcerror__20->SetBinContent(17,82.11417);
   hmcerror__20->SetBinContent(18,92.51663);
   hmcerror__20->SetBinContent(19,106.4747);
   hmcerror__20->SetBinContent(20,119.4066);
   hmcerror__20->SetBinContent(21,148.1631);
   hmcerror__20->SetBinContent(22,146.2161);
   hmcerror__20->SetBinContent(23,169.4693);
   hmcerror__20->SetBinContent(24,220.4182);
   hmcerror__20->SetBinContent(25,303.735);
   hmcerror__20->SetBinError(1,31.11459);
   hmcerror__20->SetBinError(2,24.00662);
   hmcerror__20->SetBinError(3,26.61219);
   hmcerror__20->SetBinError(4,23.86387);
   hmcerror__20->SetBinError(5,24.55199);
   hmcerror__20->SetBinError(6,22.27023);
   hmcerror__20->SetBinError(7,22.80127);
   hmcerror__20->SetBinError(8,24.30497);
   hmcerror__20->SetBinError(9,23.57093);
   hmcerror__20->SetBinError(10,25.82696);
   hmcerror__20->SetBinError(11,26.7275);
   hmcerror__20->SetBinError(12,28.25785);
   hmcerror__20->SetBinError(13,31.41116);
   hmcerror__20->SetBinError(14,33.67429);
   hmcerror__20->SetBinError(15,35.19358);
   hmcerror__20->SetBinError(16,36.5635);
   hmcerror__20->SetBinError(17,36.58976);
   hmcerror__20->SetBinError(18,39.64384);
   hmcerror__20->SetBinError(19,44.8291);
   hmcerror__20->SetBinError(20,53.58918);
   hmcerror__20->SetBinError(21,60.96468);
   hmcerror__20->SetBinError(22,57.2355);
   hmcerror__20->SetBinError(23,68.98289);
   hmcerror__20->SetBinError(24,77.23746);
   hmcerror__20->SetBinError(25,91.0009);
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
   Double_t _fy3025[25] = {
   56,
   47,
   46,
   55,
   41,
   60,
   53,
   55,
   51,
   64,
   56,
   46,
   56,
   65,
   73,
   60,
   68,
   94,
   74,
   94,
   116,
   132,
   176,
   175,
   223};
   Double_t _felx3025[25] = {
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
   Double_t _fely3025[25] = {
   7.6127,
   6.9882,
   6.9153,
   7.546,
   6.5384,
   7.8743,
   7.4105,
   7.546,
   7.2725,
   8.1273,
   7.6127,
   6.9153,
   7.6127,
   8.1893,
   8.6693,
   7.8743,
   8.3726,
   9.8173,
   8.7275,
   9.8173,
   10.77033,
   11.48913,
   13.2665,
   13.22876,
   14.93318};
   Double_t _fehx3025[25] = {
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
   Double_t _fehy3025[25] = {
   7.4094,
   6.7839,
   6.7108,
   7.3425,
   6.3331,
   7.6713,
   7.2068,
   7.3425,
   7.0686,
   7.9246,
   7.4094,
   6.7108,
   7.4094,
   7.9866,
   8.4672,
   7.6713,
   8.1701,
   9.616,
   8.5253,
   9.616,
   10.77033,
   11.48913,
   13.2665,
   13.22876,
   14.93318};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-1.2,1.2);
   Graph_Graph3025->SetMinimum(14.11444);
   Graph_Graph3025->SetMaximum(258.2803);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.2/25","");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[25] = {
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
   Double_t _fely3026[25] = {
   0.4110021,
   0.4015823,
   0.4673279,
   0.4907685,
   0.4781297,
   0.4280566,
   0.4068059,
   0.4411607,
   0.474052,
   0.4530708,
   0.4357777,
   0.4710553,
   0.4211469,
   0.4362235,
   0.412387,
   0.4581908,
   0.4455962,
   0.4285051,
   0.4210304,
   0.4487959,
   0.4114702,
   0.3914445,
   0.4070523,
   0.3504133,
   0.2996062};
   Double_t _fehx3026[25] = {
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
   Double_t _fehy3026[25] = {
   0.4110021,
   0.4015823,
   0.4673279,
   0.4907685,
   0.4781297,
   0.4280566,
   0.4068059,
   0.4411607,
   0.474052,
   0.4530708,
   0.4357777,
   0.4710553,
   0.4211469,
   0.4362235,
   0.412387,
   0.4581908,
   0.4455962,
   0.4285051,
   0.4210304,
   0.4487959,
   0.4114702,
   0.3914445,
   0.4070523,
   0.3504133,
   0.2996062};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-1.2,1.2);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} cos #theta");
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
   Double_t _fely3027[25] = {
   0.306934,
   0.3499232,
   0.358706,
   0.4009182,
   0.4119421,
   0.3836051,
   0.325293,
   0.3639514,
   0.4075546,
   0.3835503,
   0.376968,
   0.4332572,
   0.3690312,
   0.3935403,
   0.3874847,
   0.4175596,
   0.4059895,
   0.4011268,
   0.3986521,
   0.4045055,
   0.3491472,
   0.3715737,
   0.346721,
   0.2965472,
   0.2614685};
   Double_t _fehx3027[25] = {
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
   Double_t _fehy3027[25] = {
   0.306934,
   0.3499232,
   0.358706,
   0.4009182,
   0.4119421,
   0.3836051,
   0.325293,
   0.3639514,
   0.4075546,
   0.3835503,
   0.376968,
   0.4332572,
   0.3690312,
   0.3935403,
   0.3874847,
   0.4175596,
   0.4059895,
   0.4011268,
   0.3986521,
   0.4045055,
   0.3491472,
   0.3715737,
   0.346721,
   0.2965472,
   0.2614685};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-1.2,1.2);
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
   Double_t _fy3028[25] = {
   0.7397209,
   0.7862153,
   0.8077909,
   1.131094,
   0.7984413,
   1.153261,
   0.9455924,
   0.9983077,
   1.025698,
   1.122723,
   0.9130503,
   0.7668151,
   0.7508231,
   0.842023,
   0.8553905,
   0.7518823,
   0.8281153,
   1.016034,
   0.6950005,
   0.7872264,
   0.7829211,
   0.9027732,
   1.038536,
   0.7939455,
   0.7341926};
   Double_t _felx3028[25] = {
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
   Double_t _fely3028[25] = {
   0.1005585,
   0.1168985,
   0.1214373,
   0.155186,
   0.12733,
   0.1513521,
   0.1322134,
   0.1369678,
   0.1462625,
   0.1425736,
   0.124121,
   0.1152773,
   0.1020677,
   0.1060858,
   0.1015841,
   0.09867577,
   0.1019629,
   0.1061139,
   0.08196779,
   0.08221742,
   0.0726924,
   0.07857632,
   0.07828259,
   0.06001664,
   0.04916517};
   Double_t _fehx3028[25] = {
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
   Double_t _fehy3028[25] = {
   0.09787301,
   0.113481,
   0.1178462,
   0.151001,
   0.1233319,
   0.1474502,
   0.1285792,
   0.1332741,
   0.1421617,
   0.1390177,
   0.1208063,
   0.1118683,
   0.09934194,
   0.10346,
   0.09921592,
   0.09613191,
   0.09949684,
   0.1039381,
   0.08006875,
   0.08053159,
   0.0726924,
   0.07857632,
   0.07828259,
   0.06001664,
   0.04916517};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-1.2,1.2);
   Graph_Graph3028->SetMinimum(0.5442648);
   Graph_Graph3028->SetMaximum(1.369479);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_pi0_costheta_all",25,-1,1);

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
