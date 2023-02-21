#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Mon Feb 20 23:56:13 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",190,172,1200,900);
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
   pad1->Range(-169.2308,-67.14,1241.026,7424.271);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__4->SetBinContent(0,227.3315);
   hmc__4->SetBinContent(1,2718.968);
   hmc__4->SetBinContent(2,2930.145);
   hmc__4->SetBinContent(3,2932.549);
   hmc__4->SetBinContent(4,2983.355);
   hmc__4->SetBinContent(5,3083.168);
   hmc__4->SetBinContent(6,3205.23);
   hmc__4->SetBinContent(7,3036.588);
   hmc__4->SetBinContent(8,3078.976);
   hmc__4->SetBinContent(9,3066.933);
   hmc__4->SetBinContent(10,3081.905);
   hmc__4->SetBinContent(11,3101.361);
   hmc__4->SetBinContent(12,3056.863);
   hmc__4->SetBinContent(13,3095.199);
   hmc__4->SetBinContent(14,3060.861);
   hmc__4->SetBinContent(15,3080.414);
   hmc__4->SetBinContent(16,3086.932);
   hmc__4->SetBinContent(17,3100.524);
   hmc__4->SetBinContent(18,3050.07);
   hmc__4->SetBinContent(19,3008.861);
   hmc__4->SetBinContent(20,2846.004);
   hmc__4->SetBinContent(21,3346.135);
   hmc__4->SetBinContent(22,2757.678);
   hmc__4->SetBinContent(23,2736.658);
   hmc__4->SetBinContent(24,2621.779);
   hmc__4->SetBinContent(25,2602.024);
   hmc__4->SetBinContent(26,2540.803);
   hmc__4->SetBinContent(27,2284.365);
   hmc__4->SetBinContent(28,2075.038);
   hmc__4->SetBinContent(29,1758.407);
   hmc__4->SetBinContent(30,1012.742);
   hmc__4->SetBinContent(31,25.3888);
   hmc__4->SetBinError(0,9.455772);
   hmc__4->SetBinError(1,386.7476);
   hmc__4->SetBinError(2,421.102);
   hmc__4->SetBinError(3,418.2766);
   hmc__4->SetBinError(4,424.6824);
   hmc__4->SetBinError(5,445.0271);
   hmc__4->SetBinError(6,448.8494);
   hmc__4->SetBinError(7,433.3238);
   hmc__4->SetBinError(8,451.8806);
   hmc__4->SetBinError(9,430.2814);
   hmc__4->SetBinError(10,436.2313);
   hmc__4->SetBinError(11,435.0578);
   hmc__4->SetBinError(12,430.5459);
   hmc__4->SetBinError(13,415.1159);
   hmc__4->SetBinError(14,428.1468);
   hmc__4->SetBinError(15,446.314);
   hmc__4->SetBinError(16,419.177);
   hmc__4->SetBinError(17,421.361);
   hmc__4->SetBinError(18,429.2922);
   hmc__4->SetBinError(19,422.9299);
   hmc__4->SetBinError(20,381.14);
   hmc__4->SetBinError(21,430.4575);
   hmc__4->SetBinError(22,373.8822);
   hmc__4->SetBinError(23,375.1946);
   hmc__4->SetBinError(24,355.898);
   hmc__4->SetBinError(25,373.879);
   hmc__4->SetBinError(26,346.0619);
   hmc__4->SetBinError(27,309.8291);
   hmc__4->SetBinError(28,285.9242);
   hmc__4->SetBinError(29,252.9412);
   hmc__4->SetBinError(30,147.1);
   hmc__4->SetBinError(31,9.216882);
   hmc__4->SetBinError(32,0.3895343);
   hmc__4->SetBinError(33,0.3895343);
   hmc__4->SetMinimum(-67.14);
   hmc__4->SetMaximum(7049.7);
   hmc__4->SetEntries(76141.51);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",32,0,1100);
   hs2_stack_2->SetMinimum(-3.571482e-09);
   hs2_stack_2->SetMaximum(3513.442);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(0,31.48616);
   hbadmatch_stack_1->SetBinContent(1,153.6666);
   hbadmatch_stack_1->SetBinContent(2,82.27927);
   hbadmatch_stack_1->SetBinContent(3,84.8308);
   hbadmatch_stack_1->SetBinContent(4,95.63853);
   hbadmatch_stack_1->SetBinContent(5,95.51516);
   hbadmatch_stack_1->SetBinContent(6,102.2764);
   hbadmatch_stack_1->SetBinContent(7,97.96423);
   hbadmatch_stack_1->SetBinContent(8,72.93158);
   hbadmatch_stack_1->SetBinContent(9,74.68921);
   hbadmatch_stack_1->SetBinContent(10,67.5341);
   hbadmatch_stack_1->SetBinContent(11,73.79066);
   hbadmatch_stack_1->SetBinContent(12,76.53755);
   hbadmatch_stack_1->SetBinContent(13,77.86245);
   hbadmatch_stack_1->SetBinContent(14,78.94221);
   hbadmatch_stack_1->SetBinContent(15,70.96613);
   hbadmatch_stack_1->SetBinContent(16,74.01978);
   hbadmatch_stack_1->SetBinContent(17,79.79279);
   hbadmatch_stack_1->SetBinContent(18,87.90076);
   hbadmatch_stack_1->SetBinContent(19,99.8199);
   hbadmatch_stack_1->SetBinContent(20,85.811);
   hbadmatch_stack_1->SetBinContent(21,211.8784);
   hbadmatch_stack_1->SetBinContent(22,96.63435);
   hbadmatch_stack_1->SetBinContent(23,72.54798);
   hbadmatch_stack_1->SetBinContent(24,89.68945);
   hbadmatch_stack_1->SetBinContent(25,81.37226);
   hbadmatch_stack_1->SetBinContent(26,112.7263);
   hbadmatch_stack_1->SetBinContent(27,90.91525);
   hbadmatch_stack_1->SetBinContent(28,91.34207);
   hbadmatch_stack_1->SetBinContent(29,103.6115);
   hbadmatch_stack_1->SetBinContent(30,97.2902);
   hbadmatch_stack_1->SetBinContent(31,2.445445);
   hbadmatch_stack_1->SetBinError(0,3.483852);
   hbadmatch_stack_1->SetBinError(1,9.699862);
   hbadmatch_stack_1->SetBinError(2,5.360843);
   hbadmatch_stack_1->SetBinError(3,5.560699);
   hbadmatch_stack_1->SetBinError(4,6.075748);
   hbadmatch_stack_1->SetBinError(5,6.006087);
   hbadmatch_stack_1->SetBinError(6,8.395221);
   hbadmatch_stack_1->SetBinError(7,6.416324);
   hbadmatch_stack_1->SetBinError(8,4.719959);
   hbadmatch_stack_1->SetBinError(9,6.639559);
   hbadmatch_stack_1->SetBinError(10,4.82517);
   hbadmatch_stack_1->SetBinError(11,5.669996);
   hbadmatch_stack_1->SetBinError(12,5.880942);
   hbadmatch_stack_1->SetBinError(13,5.016293);
   hbadmatch_stack_1->SetBinError(14,5.05388);
   hbadmatch_stack_1->SetBinError(15,4.676985);
   hbadmatch_stack_1->SetBinError(16,5.034041);
   hbadmatch_stack_1->SetBinError(17,5.685072);
   hbadmatch_stack_1->SetBinError(18,5.904153);
   hbadmatch_stack_1->SetBinError(19,11.22657);
   hbadmatch_stack_1->SetBinError(20,5.184968);
   hbadmatch_stack_1->SetBinError(21,10.48314);
   hbadmatch_stack_1->SetBinError(22,6.957024);
   hbadmatch_stack_1->SetBinError(23,5.159001);
   hbadmatch_stack_1->SetBinError(24,5.715162);
   hbadmatch_stack_1->SetBinError(25,6.480315);
   hbadmatch_stack_1->SetBinError(26,7.103175);
   hbadmatch_stack_1->SetBinError(27,6.067588);
   hbadmatch_stack_1->SetBinError(28,6.705307);
   hbadmatch_stack_1->SetBinError(29,6.248153);
   hbadmatch_stack_1->SetBinError(30,6.076962);
   hbadmatch_stack_1->SetBinError(31,0.7949813);
   hbadmatch_stack_1->SetEntries(10625);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(0,78.09618);
   hext_stack_2->SetBinContent(1,347.5661);
   hext_stack_2->SetBinContent(2,267.6581);
   hext_stack_2->SetBinContent(3,258.6298);
   hext_stack_2->SetBinContent(4,298.2838);
   hext_stack_2->SetBinContent(5,316.9186);
   hext_stack_2->SetBinContent(6,366.1813);
   hext_stack_2->SetBinContent(7,318.9029);
   hext_stack_2->SetBinContent(8,349.2719);
   hext_stack_2->SetBinContent(9,307.2402);
   hext_stack_2->SetBinContent(10,315.4917);
   hext_stack_2->SetBinContent(11,322.2036);
   hext_stack_2->SetBinContent(12,279.1371);
   hext_stack_2->SetBinContent(13,351.0395);
   hext_stack_2->SetBinContent(14,346.105);
   hext_stack_2->SetBinContent(15,346.6775);
   hext_stack_2->SetBinContent(16,378.9255);
   hext_stack_2->SetBinContent(17,386.7429);
   hext_stack_2->SetBinContent(18,343.3686);
   hext_stack_2->SetBinContent(19,357.0687);
   hext_stack_2->SetBinContent(20,342.1187);
   hext_stack_2->SetBinContent(21,612.6578);
   hext_stack_2->SetBinContent(22,336.8262);
   hext_stack_2->SetBinContent(23,334.0075);
   hext_stack_2->SetBinContent(24,305.6193);
   hext_stack_2->SetBinContent(25,283.5753);
   hext_stack_2->SetBinContent(26,323.6866);
   hext_stack_2->SetBinContent(27,287.2555);
   hext_stack_2->SetBinContent(28,250.6435);
   hext_stack_2->SetBinContent(29,265.9206);
   hext_stack_2->SetBinContent(30,188.0249);
   hext_stack_2->SetBinContent(31,5.034772);
   hext_stack_2->SetBinError(0,5.668864);
   hext_stack_2->SetBinError(1,12.63149);
   hext_stack_2->SetBinError(2,11.30551);
   hext_stack_2->SetBinError(3,10.997);
   hext_stack_2->SetBinError(4,11.87665);
   hext_stack_2->SetBinError(5,11.95734);
   hext_stack_2->SetBinError(6,13.00591);
   hext_stack_2->SetBinError(7,12.12497);
   hext_stack_2->SetBinError(8,12.77784);
   hext_stack_2->SetBinError(9,11.80489);
   hext_stack_2->SetBinError(10,12.14533);
   hext_stack_2->SetBinError(11,12.29656);
   hext_stack_2->SetBinError(12,11.06433);
   hext_stack_2->SetBinError(13,12.81354);
   hext_stack_2->SetBinError(14,12.3667);
   hext_stack_2->SetBinError(15,12.50412);
   hext_stack_2->SetBinError(16,13.19316);
   hext_stack_2->SetBinError(17,13.39343);
   hext_stack_2->SetBinError(18,12.32238);
   hext_stack_2->SetBinError(19,12.66737);
   hext_stack_2->SetBinError(20,12.58091);
   hext_stack_2->SetBinError(21,16.94264);
   hext_stack_2->SetBinError(22,12.50121);
   hext_stack_2->SetBinError(23,12.56132);
   hext_stack_2->SetBinError(24,11.74826);
   hext_stack_2->SetBinError(25,11.33032);
   hext_stack_2->SetBinError(26,12.18742);
   hext_stack_2->SetBinError(27,11.5762);
   hext_stack_2->SetBinError(28,10.80206);
   hext_stack_2->SetBinError(29,10.95293);
   hext_stack_2->SetBinError(30,9.14214);
   hext_stack_2->SetBinError(31,1.354181);
   hext_stack_2->SetEntries(23297);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(0,7.885419);
   hdirt_stack_3->SetBinContent(1,349.3435);
   hdirt_stack_3->SetBinContent(2,167.3962);
   hdirt_stack_3->SetBinContent(3,110.4788);
   hdirt_stack_3->SetBinContent(4,106.4821);
   hdirt_stack_3->SetBinContent(5,89.46307);
   hdirt_stack_3->SetBinContent(6,82.91646);
   hdirt_stack_3->SetBinContent(7,64.82964);
   hdirt_stack_3->SetBinContent(8,59.46419);
   hdirt_stack_3->SetBinContent(9,52.40052);
   hdirt_stack_3->SetBinContent(10,46.49432);
   hdirt_stack_3->SetBinContent(11,46.886);
   hdirt_stack_3->SetBinContent(12,47.12821);
   hdirt_stack_3->SetBinContent(13,43.97173);
   hdirt_stack_3->SetBinContent(14,44.64088);
   hdirt_stack_3->SetBinContent(15,42.36024);
   hdirt_stack_3->SetBinContent(16,35.45211);
   hdirt_stack_3->SetBinContent(17,38.49237);
   hdirt_stack_3->SetBinContent(18,48.52263);
   hdirt_stack_3->SetBinContent(19,45.42795);
   hdirt_stack_3->SetBinContent(20,43.30128);
   hdirt_stack_3->SetBinContent(21,95.55759);
   hdirt_stack_3->SetBinContent(22,53.01535);
   hdirt_stack_3->SetBinContent(23,39.00977);
   hdirt_stack_3->SetBinContent(24,36.22562);
   hdirt_stack_3->SetBinContent(25,40.32806);
   hdirt_stack_3->SetBinContent(26,44.23534);
   hdirt_stack_3->SetBinContent(27,39.81873);
   hdirt_stack_3->SetBinContent(28,39.18939);
   hdirt_stack_3->SetBinContent(29,55.07954);
   hdirt_stack_3->SetBinContent(30,41.25603);
   hdirt_stack_3->SetBinContent(31,1.623634);
   hdirt_stack_3->SetBinError(0,1.394109);
   hdirt_stack_3->SetBinError(1,12.33674);
   hdirt_stack_3->SetBinError(2,8.22488);
   hdirt_stack_3->SetBinError(3,5.55565);
   hdirt_stack_3->SetBinError(4,8.148337);
   hdirt_stack_3->SetBinError(5,5.410584);
   hdirt_stack_3->SetBinError(6,5.730237);
   hdirt_stack_3->SetBinError(7,4.812787);
   hdirt_stack_3->SetBinError(8,5.084732);
   hdirt_stack_3->SetBinError(9,4.399944);
   hdirt_stack_3->SetBinError(10,3.717448);
   hdirt_stack_3->SetBinError(11,4.788385);
   hdirt_stack_3->SetBinError(12,4.540089);
   hdirt_stack_3->SetBinError(13,5.087905);
   hdirt_stack_3->SetBinError(14,3.804722);
   hdirt_stack_3->SetBinError(15,3.901317);
   hdirt_stack_3->SetBinError(16,3.090593);
   hdirt_stack_3->SetBinError(17,3.604882);
   hdirt_stack_3->SetBinError(18,4.588709);
   hdirt_stack_3->SetBinError(19,4.743015);
   hdirt_stack_3->SetBinError(20,3.44182);
   hdirt_stack_3->SetBinError(21,5.291699);
   hdirt_stack_3->SetBinError(22,5.212347);
   hdirt_stack_3->SetBinError(23,3.276692);
   hdirt_stack_3->SetBinError(24,3.688731);
   hdirt_stack_3->SetBinError(25,3.301468);
   hdirt_stack_3->SetBinError(26,3.754036);
   hdirt_stack_3->SetBinError(27,3.340696);
   hdirt_stack_3->SetBinError(28,3.555582);
   hdirt_stack_3->SetBinError(29,4.513741);
   hdirt_stack_3->SetBinError(30,6.17521);
   hdirt_stack_3->SetBinError(31,0.663129);
   hdirt_stack_3->SetEntries(8365);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,11.89169);
   houtFV_stack_4->SetBinContent(1,248.0899);
   houtFV_stack_4->SetBinContent(2,115.3401);
   houtFV_stack_4->SetBinContent(3,96.98634);
   houtFV_stack_4->SetBinContent(4,90.70442);
   houtFV_stack_4->SetBinContent(5,94.07313);
   houtFV_stack_4->SetBinContent(6,91.88445);
   houtFV_stack_4->SetBinContent(7,94.30324);
   houtFV_stack_4->SetBinContent(8,80.03322);
   houtFV_stack_4->SetBinContent(9,89.85304);
   houtFV_stack_4->SetBinContent(10,84.73248);
   houtFV_stack_4->SetBinContent(11,86.34167);
   houtFV_stack_4->SetBinContent(12,88.06429);
   houtFV_stack_4->SetBinContent(13,81.52606);
   houtFV_stack_4->SetBinContent(14,77.54505);
   houtFV_stack_4->SetBinContent(15,85.77963);
   houtFV_stack_4->SetBinContent(16,87.01076);
   houtFV_stack_4->SetBinContent(17,78.26042);
   houtFV_stack_4->SetBinContent(18,78.63702);
   houtFV_stack_4->SetBinContent(19,79.80063);
   houtFV_stack_4->SetBinContent(20,83.38452);
   houtFV_stack_4->SetBinContent(21,91.69235);
   houtFV_stack_4->SetBinContent(22,81.68161);
   houtFV_stack_4->SetBinContent(23,78.80762);
   houtFV_stack_4->SetBinContent(24,81.56189);
   houtFV_stack_4->SetBinContent(25,87.24829);
   houtFV_stack_4->SetBinContent(26,79.30676);
   houtFV_stack_4->SetBinContent(27,84.23933);
   houtFV_stack_4->SetBinContent(28,77.71837);
   houtFV_stack_4->SetBinContent(29,85.6765);
   houtFV_stack_4->SetBinContent(30,82.1474);
   houtFV_stack_4->SetBinContent(31,5.857033);
   houtFV_stack_4->SetBinError(0,2.092811);
   houtFV_stack_4->SetBinError(1,9.048426);
   houtFV_stack_4->SetBinError(2,5.927);
   houtFV_stack_4->SetBinError(3,4.964883);
   houtFV_stack_4->SetBinError(4,5.402389);
   houtFV_stack_4->SetBinError(5,5.895594);
   houtFV_stack_4->SetBinError(6,5.500578);
   houtFV_stack_4->SetBinError(7,5.103668);
   houtFV_stack_4->SetBinError(8,4.556651);
   houtFV_stack_4->SetBinError(9,4.979711);
   houtFV_stack_4->SetBinError(10,4.814912);
   houtFV_stack_4->SetBinError(11,5.372717);
   houtFV_stack_4->SetBinError(12,4.918683);
   houtFV_stack_4->SetBinError(13,4.770813);
   houtFV_stack_4->SetBinError(14,4.947657);
   houtFV_stack_4->SetBinError(15,5.000929);
   houtFV_stack_4->SetBinError(16,5.201295);
   houtFV_stack_4->SetBinError(17,4.442792);
   houtFV_stack_4->SetBinError(18,4.73837);
   houtFV_stack_4->SetBinError(19,4.561917);
   houtFV_stack_4->SetBinError(20,4.672887);
   houtFV_stack_4->SetBinError(21,4.91269);
   houtFV_stack_4->SetBinError(22,4.719064);
   houtFV_stack_4->SetBinError(23,4.707991);
   houtFV_stack_4->SetBinError(24,4.595271);
   houtFV_stack_4->SetBinError(25,4.772426);
   houtFV_stack_4->SetBinError(26,4.528541);
   houtFV_stack_4->SetBinError(27,4.671627);
   houtFV_stack_4->SetBinError(28,4.477895);
   houtFV_stack_4->SetBinError(29,4.687221);
   houtFV_stack_4->SetBinError(30,5.653935);
   houtFV_stack_4->SetBinError(31,1.241081);
   houtFV_stack_4->SetEntries(11501);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.7391858);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.123152);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.682152);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.168574);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.959656);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.229278);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.883932);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.255682);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.893646);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.230446);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.255513);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.628592);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,5.701417);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.53585);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,6.105972);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.020192);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.573792);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,5.020528);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.910424);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.729406);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.671942);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,5.286078);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.033642);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.903192);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,5.103892);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,7.490026);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,6.11959);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,6.523144);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,5.522232);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,3.051902);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,1.256172);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2452205);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5811249);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6366314);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6479927);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6382085);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7401019);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7656909);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7367196);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7205163);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7953206);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7141406);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6629364);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.754124);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7970721);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8076225);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7088071);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6999664);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7536082);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7553709);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7475153);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7202013);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7754565);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6904956);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6474921);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7104525);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.95871);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.8120282);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.8312134);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.7925833);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.5076638);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.4075096);
   hNCpi0inFVcoh_stack_5->SetEntries(2722);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.602262);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.644612);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.9202038);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.102054);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.33904);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.310308);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.450472);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.520058);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.079563);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.800058);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.9481038);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.854858);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.087772);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.478372);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.53534);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.673176);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.533676);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.8650677);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.8227176);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.49299);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.49199);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.604758);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.534508);
   hNCpi0inFVqe_stack_6->SetBinContent(24,2.187002);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.62933);
   hNCpi0inFVqe_stack_6->SetBinContent(26,2.21723);
   hNCpi0inFVqe_stack_6->SetBinContent(27,1.534508);
   hNCpi0inFVqe_stack_6->SetBinContent(28,1.10039);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(31,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3968638);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4297453);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2682147);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3209538);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3861776);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3592889);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3456701);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4011722);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.5716722);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4698386);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2696619);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.41265);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3307091);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3467942);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4545405);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.4146887);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.4099691);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2385154);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1723642);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4235881);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3569339);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.4640037);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.4328289);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.4833134);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3728446);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.509323);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.4328289);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.2539271);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(31,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(825);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,17.90361);
   hNCpi0inFVres_stack_7->SetBinContent(1,100.2809);
   hNCpi0inFVres_stack_7->SetBinContent(2,137.554);
   hNCpi0inFVres_stack_7->SetBinContent(3,149.5639);
   hNCpi0inFVres_stack_7->SetBinContent(4,132.4533);
   hNCpi0inFVres_stack_7->SetBinContent(5,159.16);
   hNCpi0inFVres_stack_7->SetBinContent(6,160.7548);
   hNCpi0inFVres_stack_7->SetBinContent(7,160.5534);
   hNCpi0inFVres_stack_7->SetBinContent(8,155.1147);
   hNCpi0inFVres_stack_7->SetBinContent(9,159.8916);
   hNCpi0inFVres_stack_7->SetBinContent(10,155.6397);
   hNCpi0inFVres_stack_7->SetBinContent(11,151.7117);
   hNCpi0inFVres_stack_7->SetBinContent(12,152.3062);
   hNCpi0inFVres_stack_7->SetBinContent(13,156.3389);
   hNCpi0inFVres_stack_7->SetBinContent(14,165.0105);
   hNCpi0inFVres_stack_7->SetBinContent(15,156.7971);
   hNCpi0inFVres_stack_7->SetBinContent(16,159.7758);
   hNCpi0inFVres_stack_7->SetBinContent(17,161.0048);
   hNCpi0inFVres_stack_7->SetBinContent(18,152.9931);
   hNCpi0inFVres_stack_7->SetBinContent(19,157.1748);
   hNCpi0inFVres_stack_7->SetBinContent(20,156.2314);
   hNCpi0inFVres_stack_7->SetBinContent(21,160.97);
   hNCpi0inFVres_stack_7->SetBinContent(22,144.1283);
   hNCpi0inFVres_stack_7->SetBinContent(23,151.569);
   hNCpi0inFVres_stack_7->SetBinContent(24,155.8123);
   hNCpi0inFVres_stack_7->SetBinContent(25,150.8169);
   hNCpi0inFVres_stack_7->SetBinContent(26,156.7959);
   hNCpi0inFVres_stack_7->SetBinContent(27,153.6363);
   hNCpi0inFVres_stack_7->SetBinContent(28,155.8557);
   hNCpi0inFVres_stack_7->SetBinContent(29,140.4341);
   hNCpi0inFVres_stack_7->SetBinContent(30,79.82924);
   hNCpi0inFVres_stack_7->SetBinContent(31,2.161262);
   hNCpi0inFVres_stack_7->SetBinError(0,1.097908);
   hNCpi0inFVres_stack_7->SetBinError(1,3.25135);
   hNCpi0inFVres_stack_7->SetBinError(2,3.825277);
   hNCpi0inFVres_stack_7->SetBinError(3,4.10295);
   hNCpi0inFVres_stack_7->SetBinError(4,3.724596);
   hNCpi0inFVres_stack_7->SetBinError(5,4.133468);
   hNCpi0inFVres_stack_7->SetBinError(6,4.140924);
   hNCpi0inFVres_stack_7->SetBinError(7,4.150961);
   hNCpi0inFVres_stack_7->SetBinError(8,4.098045);
   hNCpi0inFVres_stack_7->SetBinError(9,4.142662);
   hNCpi0inFVres_stack_7->SetBinError(10,4.014356);
   hNCpi0inFVres_stack_7->SetBinError(11,3.96352);
   hNCpi0inFVres_stack_7->SetBinError(12,4.013965);
   hNCpi0inFVres_stack_7->SetBinError(13,4.07359);
   hNCpi0inFVres_stack_7->SetBinError(14,4.237433);
   hNCpi0inFVres_stack_7->SetBinError(15,4.104143);
   hNCpi0inFVres_stack_7->SetBinError(16,4.130642);
   hNCpi0inFVres_stack_7->SetBinError(17,4.183665);
   hNCpi0inFVres_stack_7->SetBinError(18,4.036587);
   hNCpi0inFVres_stack_7->SetBinError(19,4.073502);
   hNCpi0inFVres_stack_7->SetBinError(20,4.117784);
   hNCpi0inFVres_stack_7->SetBinError(21,4.118178);
   hNCpi0inFVres_stack_7->SetBinError(22,3.908342);
   hNCpi0inFVres_stack_7->SetBinError(23,4.00312);
   hNCpi0inFVres_stack_7->SetBinError(24,4.180828);
   hNCpi0inFVres_stack_7->SetBinError(25,3.910366);
   hNCpi0inFVres_stack_7->SetBinError(26,4.065603);
   hNCpi0inFVres_stack_7->SetBinError(27,4.067766);
   hNCpi0inFVres_stack_7->SetBinError(28,4.114049);
   hNCpi0inFVres_stack_7->SetBinError(29,3.930215);
   hNCpi0inFVres_stack_7->SetBinError(30,3.014024);
   hNCpi0inFVres_stack_7->SetBinError(31,0.4744409);
   hNCpi0inFVres_stack_7->SetEntries(83560);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(0,3.362121);
   hNCpi0inFVdis_stack_8->SetBinContent(1,25.01377);
   hNCpi0inFVdis_stack_8->SetBinContent(2,33.59407);
   hNCpi0inFVdis_stack_8->SetBinContent(3,36.98061);
   hNCpi0inFVdis_stack_8->SetBinContent(4,34.5777);
   hNCpi0inFVdis_stack_8->SetBinContent(5,47.98621);
   hNCpi0inFVdis_stack_8->SetBinContent(6,37.35044);
   hNCpi0inFVdis_stack_8->SetBinContent(7,41.68567);
   hNCpi0inFVdis_stack_8->SetBinContent(8,37.49394);
   hNCpi0inFVdis_stack_8->SetBinContent(9,37.69156);
   hNCpi0inFVdis_stack_8->SetBinContent(10,38.45615);
   hNCpi0inFVdis_stack_8->SetBinContent(11,36.85289);
   hNCpi0inFVdis_stack_8->SetBinContent(12,35.91373);
   hNCpi0inFVdis_stack_8->SetBinContent(13,39.9908);
   hNCpi0inFVdis_stack_8->SetBinContent(14,36.73097);
   hNCpi0inFVdis_stack_8->SetBinContent(15,35.59688);
   hNCpi0inFVdis_stack_8->SetBinContent(16,38.15208);
   hNCpi0inFVdis_stack_8->SetBinContent(17,40.64864);
   hNCpi0inFVdis_stack_8->SetBinContent(18,36.8783);
   hNCpi0inFVdis_stack_8->SetBinContent(19,35.48194);
   hNCpi0inFVdis_stack_8->SetBinContent(20,33.06329);
   hNCpi0inFVdis_stack_8->SetBinContent(21,36.8376);
   hNCpi0inFVdis_stack_8->SetBinContent(22,34.24756);
   hNCpi0inFVdis_stack_8->SetBinContent(23,36.98043);
   hNCpi0inFVdis_stack_8->SetBinContent(24,33.00466);
   hNCpi0inFVdis_stack_8->SetBinContent(25,37.24481);
   hNCpi0inFVdis_stack_8->SetBinContent(26,36.72634);
   hNCpi0inFVdis_stack_8->SetBinContent(27,34.78429);
   hNCpi0inFVdis_stack_8->SetBinContent(28,34.62055);
   hNCpi0inFVdis_stack_8->SetBinContent(29,28.68713);
   hNCpi0inFVdis_stack_8->SetBinContent(30,14.04139);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.530268);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.4458939);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.59512);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.905439);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.038151);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.920478);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.295859);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.976213);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.124489);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.02914);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.000842);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.037403);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.985317);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.880629);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.001117);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.952469);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.914066);
   hNCpi0inFVdis_stack_8->SetBinError(16,2.030083);
   hNCpi0inFVdis_stack_8->SetBinError(17,2.110438);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.970904);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.854439);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.866782);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.936824);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.931055);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.957612);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.83303);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.944445);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.952868);
   hNCpi0inFVdis_stack_8->SetBinError(27,1.879163);
   hNCpi0inFVdis_stack_8->SetBinError(28,1.915506);
   hNCpi0inFVdis_stack_8->SetBinError(29,1.73937);
   hNCpi0inFVdis_stack_8->SetBinError(30,1.177829);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.2180566);
   hNCpi0inFVdis_stack_8->SetEntries(20062);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.5440542);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1394999);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.125218);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2957079);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06238626);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.1012383);
   hNCpi0inFVmec_stack_9->SetEntries(55);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(0,7.492594);
   hCCpi0inFV_stack_10->SetBinContent(1,138.518);
   hCCpi0inFV_stack_10->SetBinContent(2,201.2176);
   hCCpi0inFV_stack_10->SetBinContent(3,207.3465);
   hCCpi0inFV_stack_10->SetBinContent(4,228.1983);
   hCCpi0inFV_stack_10->SetBinContent(5,220.207);
   hCCpi0inFV_stack_10->SetBinContent(6,223.0779);
   hCCpi0inFV_stack_10->SetBinContent(7,215.4199);
   hCCpi0inFV_stack_10->SetBinContent(8,217.0549);
   hCCpi0inFV_stack_10->SetBinContent(9,213.3364);
   hCCpi0inFV_stack_10->SetBinContent(10,234.1958);
   hCCpi0inFV_stack_10->SetBinContent(11,225.1597);
   hCCpi0inFV_stack_10->SetBinContent(12,213.2576);
   hCCpi0inFV_stack_10->SetBinContent(13,216.1628);
   hCCpi0inFV_stack_10->SetBinContent(14,234.9246);
   hCCpi0inFV_stack_10->SetBinContent(15,211.88);
   hCCpi0inFV_stack_10->SetBinContent(16,236.5703);
   hCCpi0inFV_stack_10->SetBinContent(17,230.2803);
   hCCpi0inFV_stack_10->SetBinContent(18,208.9639);
   hCCpi0inFV_stack_10->SetBinContent(19,208.6418);
   hCCpi0inFV_stack_10->SetBinContent(20,210.5879);
   hCCpi0inFV_stack_10->SetBinContent(21,198.3456);
   hCCpi0inFV_stack_10->SetBinContent(22,202.6573);
   hCCpi0inFV_stack_10->SetBinContent(23,197.3711);
   hCCpi0inFV_stack_10->SetBinContent(24,196.7941);
   hCCpi0inFV_stack_10->SetBinContent(25,195.5875);
   hCCpi0inFV_stack_10->SetBinContent(26,186.3863);
   hCCpi0inFV_stack_10->SetBinContent(27,161.3953);
   hCCpi0inFV_stack_10->SetBinContent(28,132.7819);
   hCCpi0inFV_stack_10->SetBinContent(29,95.96985);
   hCCpi0inFV_stack_10->SetBinContent(30,62.60957);
   hCCpi0inFV_stack_10->SetBinContent(31,2.105544);
   hCCpi0inFV_stack_10->SetBinError(0,1.39826);
   hCCpi0inFV_stack_10->SetBinError(1,5.888097);
   hCCpi0inFV_stack_10->SetBinError(2,7.082394);
   hCCpi0inFV_stack_10->SetBinError(3,7.232219);
   hCCpi0inFV_stack_10->SetBinError(4,7.614082);
   hCCpi0inFV_stack_10->SetBinError(5,7.377621);
   hCCpi0inFV_stack_10->SetBinError(6,7.450743);
   hCCpi0inFV_stack_10->SetBinError(7,7.337056);
   hCCpi0inFV_stack_10->SetBinError(8,7.408455);
   hCCpi0inFV_stack_10->SetBinError(9,7.309699);
   hCCpi0inFV_stack_10->SetBinError(10,7.625535);
   hCCpi0inFV_stack_10->SetBinError(11,7.56809);
   hCCpi0inFV_stack_10->SetBinError(12,7.295911);
   hCCpi0inFV_stack_10->SetBinError(13,7.372387);
   hCCpi0inFV_stack_10->SetBinError(14,7.645829);
   hCCpi0inFV_stack_10->SetBinError(15,7.286762);
   hCCpi0inFV_stack_10->SetBinError(16,7.706223);
   hCCpi0inFV_stack_10->SetBinError(17,7.699537);
   hCCpi0inFV_stack_10->SetBinError(18,7.236195);
   hCCpi0inFV_stack_10->SetBinError(19,7.221421);
   hCCpi0inFV_stack_10->SetBinError(20,7.254498);
   hCCpi0inFV_stack_10->SetBinError(21,7.11079);
   hCCpi0inFV_stack_10->SetBinError(22,7.170743);
   hCCpi0inFV_stack_10->SetBinError(23,7.028568);
   hCCpi0inFV_stack_10->SetBinError(24,7.056787);
   hCCpi0inFV_stack_10->SetBinError(25,7.054629);
   hCCpi0inFV_stack_10->SetBinError(26,6.903481);
   hCCpi0inFV_stack_10->SetBinError(27,6.344354);
   hCCpi0inFV_stack_10->SetBinError(28,6.027628);
   hCCpi0inFV_stack_10->SetBinError(29,4.916024);
   hCCpi0inFV_stack_10->SetBinError(30,3.96513);
   hCCpi0inFV_stack_10->SetBinError(31,0.6797106);
   hCCpi0inFV_stack_10->SetEntries(25433);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,15.77824);
   hNCinFV_stack_11->SetBinContent(1,253.2787);
   hNCinFV_stack_11->SetBinContent(2,348.1882);
   hNCinFV_stack_11->SetBinContent(3,339.2922);
   hNCinFV_stack_11->SetBinContent(4,362.1411);
   hNCinFV_stack_11->SetBinContent(5,371.8907);
   hNCinFV_stack_11->SetBinContent(6,390.2731);
   hNCinFV_stack_11->SetBinContent(7,387.371);
   hNCinFV_stack_11->SetBinContent(8,382.5577);
   hNCinFV_stack_11->SetBinContent(9,391.2927);
   hNCinFV_stack_11->SetBinContent(10,395.7055);
   hNCinFV_stack_11->SetBinContent(11,405.3286);
   hNCinFV_stack_11->SetBinContent(12,396.3011);
   hNCinFV_stack_11->SetBinContent(13,386.4858);
   hNCinFV_stack_11->SetBinContent(14,367.6938);
   hNCinFV_stack_11->SetBinContent(15,392.6111);
   hNCinFV_stack_11->SetBinContent(16,387.6939);
   hNCinFV_stack_11->SetBinContent(17,394.0358);
   hNCinFV_stack_11->SetBinContent(18,415.2727);
   hNCinFV_stack_11->SetBinContent(19,413.4935);
   hNCinFV_stack_11->SetBinContent(20,374.1104);
   hNCinFV_stack_11->SetBinContent(21,398.95);
   hNCinFV_stack_11->SetBinContent(22,379.9081);
   hNCinFV_stack_11->SetBinContent(23,387.5331);
   hNCinFV_stack_11->SetBinContent(24,366.4531);
   hNCinFV_stack_11->SetBinContent(25,397.9285);
   hNCinFV_stack_11->SetBinContent(26,377.9708);
   hNCinFV_stack_11->SetBinContent(27,364.8537);
   hNCinFV_stack_11->SetBinContent(28,381.4881);
   hNCinFV_stack_11->SetBinContent(29,321.474);
   hNCinFV_stack_11->SetBinContent(30,146.0126);
   hNCinFV_stack_11->SetBinContent(31,1.610679);
   hNCinFV_stack_11->SetBinError(0,1.975915);
   hNCinFV_stack_11->SetBinError(1,8.002667);
   hNCinFV_stack_11->SetBinError(2,9.387783);
   hNCinFV_stack_11->SetBinError(3,9.407574);
   hNCinFV_stack_11->SetBinError(4,9.591998);
   hNCinFV_stack_11->SetBinError(5,9.71507);
   hNCinFV_stack_11->SetBinError(6,9.890345);
   hNCinFV_stack_11->SetBinError(7,9.848782);
   hNCinFV_stack_11->SetBinError(8,9.844012);
   hNCinFV_stack_11->SetBinError(9,9.914756);
   hNCinFV_stack_11->SetBinError(10,9.938109);
   hNCinFV_stack_11->SetBinError(11,10.10395);
   hNCinFV_stack_11->SetBinError(12,9.98648);
   hNCinFV_stack_11->SetBinError(13,9.850406);
   hNCinFV_stack_11->SetBinError(14,9.587324);
   hNCinFV_stack_11->SetBinError(15,9.90643);
   hNCinFV_stack_11->SetBinError(16,9.740994);
   hNCinFV_stack_11->SetBinError(17,9.901834);
   hNCinFV_stack_11->SetBinError(18,10.2913);
   hNCinFV_stack_11->SetBinError(19,10.28724);
   hNCinFV_stack_11->SetBinError(20,9.682716);
   hNCinFV_stack_11->SetBinError(21,10.00021);
   hNCinFV_stack_11->SetBinError(22,9.872224);
   hNCinFV_stack_11->SetBinError(23,9.781332);
   hNCinFV_stack_11->SetBinError(24,9.612119);
   hNCinFV_stack_11->SetBinError(25,10.0334);
   hNCinFV_stack_11->SetBinError(26,9.734507);
   hNCinFV_stack_11->SetBinError(27,9.528977);
   hNCinFV_stack_11->SetBinError(28,9.752471);
   hNCinFV_stack_11->SetBinError(29,9.022985);
   hNCinFV_stack_11->SetBinError(30,5.957178);
   hNCinFV_stack_11->SetBinError(31,0.6806271);
   hNCinFV_stack_11->SetEntries(47406);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,51.71898);
   hnumuCCinFV_stack_12->SetBinContent(1,1084.412);
   hnumuCCinFV_stack_12->SetBinContent(2,1553.782);
   hnumuCCinFV_stack_12->SetBinContent(3,1628.01);
   hnumuCCinFV_stack_12->SetBinContent(4,1606.749);
   hnumuCCinFV_stack_12->SetBinContent(5,1659.141);
   hnumuCCinFV_stack_12->SetBinContent(6,1722.951);
   hnumuCCinFV_stack_12->SetBinContent(7,1624.309);
   hnumuCCinFV_stack_12->SetBinContent(8,1696.93);
   hnumuCCinFV_stack_12->SetBinContent(9,1706.362);
   hnumuCCinFV_stack_12->SetBinContent(10,1707.927);
   hnumuCCinFV_stack_12->SetBinContent(11,1724.482);
   hnumuCCinFV_stack_12->SetBinContent(12,1740.791);
   hnumuCCinFV_stack_12->SetBinContent(13,1714.557);
   hnumuCCinFV_stack_12->SetBinContent(14,1680.99);
   hnumuCCinFV_stack_12->SetBinContent(15,1714.017);
   hnumuCCinFV_stack_12->SetBinContent(16,1665.55);
   hnumuCCinFV_stack_12->SetBinContent(17,1658.03);
   hnumuCCinFV_stack_12->SetBinContent(18,1642.344);
   hnumuCCinFV_stack_12->SetBinContent(19,1584.413);
   hnumuCCinFV_stack_12->SetBinContent(20,1489.583);
   hnumuCCinFV_stack_12->SetBinContent(21,1511.718);
   hnumuCCinFV_stack_12->SetBinContent(22,1398.513);
   hnumuCCinFV_stack_12->SetBinContent(23,1408.882);
   hnumuCCinFV_stack_12->SetBinContent(24,1330.432);
   hnumuCCinFV_stack_12->SetBinContent(25,1294.225);
   hnumuCCinFV_stack_12->SetBinContent(26,1194.824);
   hnumuCCinFV_stack_12->SetBinContent(27,1041.909);
   hnumuCCinFV_stack_12->SetBinContent(28,885.9033);
   hnumuCCinFV_stack_12->SetBinContent(29,648.4714);
   hnumuCCinFV_stack_12->SetBinContent(30,297.3659);
   hnumuCCinFV_stack_12->SetBinContent(31,3.824694);
   hnumuCCinFV_stack_12->SetBinError(0,5.581974);
   hnumuCCinFV_stack_12->SetBinError(1,24.56782);
   hnumuCCinFV_stack_12->SetBinError(2,27.73547);
   hnumuCCinFV_stack_12->SetBinError(3,28.68383);
   hnumuCCinFV_stack_12->SetBinError(4,28.19045);
   hnumuCCinFV_stack_12->SetBinError(5,30.21656);
   hnumuCCinFV_stack_12->SetBinError(6,30.21702);
   hnumuCCinFV_stack_12->SetBinError(7,28.22262);
   hnumuCCinFV_stack_12->SetBinError(8,29.14971);
   hnumuCCinFV_stack_12->SetBinError(9,29.81931);
   hnumuCCinFV_stack_12->SetBinError(10,29.51325);
   hnumuCCinFV_stack_12->SetBinError(11,29.65431);
   hnumuCCinFV_stack_12->SetBinError(12,29.50883);
   hnumuCCinFV_stack_12->SetBinError(13,28.62312);
   hnumuCCinFV_stack_12->SetBinError(14,29.11475);
   hnumuCCinFV_stack_12->SetBinError(15,30.40855);
   hnumuCCinFV_stack_12->SetBinError(16,27.85199);
   hnumuCCinFV_stack_12->SetBinError(17,29.3434);
   hnumuCCinFV_stack_12->SetBinError(18,28.79572);
   hnumuCCinFV_stack_12->SetBinError(19,27.98395);
   hnumuCCinFV_stack_12->SetBinError(20,27.18391);
   hnumuCCinFV_stack_12->SetBinError(21,27.57818);
   hnumuCCinFV_stack_12->SetBinError(22,25.00211);
   hnumuCCinFV_stack_12->SetBinError(23,26.49058);
   hnumuCCinFV_stack_12->SetBinError(24,25.10716);
   hnumuCCinFV_stack_12->SetBinError(25,25.06004);
   hnumuCCinFV_stack_12->SetBinError(26,23.23872);
   hnumuCCinFV_stack_12->SetBinError(27,21.55682);
   hnumuCCinFV_stack_12->SetBinError(28,19.47943);
   hnumuCCinFV_stack_12->SetBinError(29,16.05742);
   hnumuCCinFV_stack_12->SetBinError(30,11.93998);
   hnumuCCinFV_stack_12->SetBinError(31,1.224834);
   hnumuCCinFV_stack_12->SetEntries(153670);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(0,0.8099508);
   hnueCCinFV_stack_13->SetBinContent(1,14.07332);
   hnueCCinFV_stack_13->SetBinContent(2,17.72464);
   hnueCCinFV_stack_13->SetBinContent(3,15.34105);
   hnueCCinFV_stack_13->SetBinContent(4,22.52146);
   hnueCCinFV_stack_13->SetBinContent(5,22.1612);
   hnueCCinFV_stack_13->SetBinContent(6,20.28624);
   hnueCCinFV_stack_13->SetBinContent(7,24.51451);
   hnueCCinFV_stack_13->SetBinContent(8,21.58472);
   hnueCCinFV_stack_13->SetBinContent(9,26.67085);
   hnueCCinFV_stack_13->SetBinContent(10,28.64492);
   hnueCCinFV_stack_13->SetBinContent(11,22.74763);
   hnueCCinFV_stack_13->SetBinContent(12,19.73017);
   hnueCCinFV_stack_13->SetBinContent(13,20.61239);
   hnueCCinFV_stack_13->SetBinContent(14,20.63712);
   hnueCCinFV_stack_13->SetBinContent(15,16.94862);
   hnueCCinFV_stack_13->SetBinContent(16,17.47927);
   hnueCCinFV_stack_13->SetBinContent(17,26.68186);
   hnueCCinFV_stack_13->SetBinContent(18,29.41339);
   hnueCCinFV_stack_13->SetBinContent(19,21.95883);
   hnueCCinFV_stack_13->SetBinContent(20,21.59179);
   hnueCCinFV_stack_13->SetBinContent(21,20.6377);
   hnueCCinFV_stack_13->SetBinContent(22,23.17651);
   hnueCCinFV_stack_13->SetBinContent(23,24.45638);
   hnueCCinFV_stack_13->SetBinContent(24,18.81199);
   hnueCCinFV_stack_13->SetBinContent(25,24.54939);
   hnueCCinFV_stack_13->SetBinContent(26,19.80793);
   hnueCCinFV_stack_13->SetBinContent(27,17.47205);
   hnueCCinFV_stack_13->SetBinContent(28,18.87243);
   hnueCCinFV_stack_13->SetBinContent(29,9.151701);
   hnueCCinFV_stack_13->SetBinContent(30,2.225571);
   hnueCCinFV_stack_13->SetBinError(0,0.5728479);
   hnueCCinFV_stack_13->SetBinError(1,2.238098);
   hnueCCinFV_stack_13->SetBinError(2,2.262273);
   hnueCCinFV_stack_13->SetBinError(3,2.011563);
   hnueCCinFV_stack_13->SetBinError(4,3.249259);
   hnueCCinFV_stack_13->SetBinError(5,3.018495);
   hnueCCinFV_stack_13->SetBinError(6,2.328083);
   hnueCCinFV_stack_13->SetBinError(7,2.754727);
   hnueCCinFV_stack_13->SetBinError(8,2.546217);
   hnueCCinFV_stack_13->SetBinError(9,3.831232);
   hnueCCinFV_stack_13->SetBinError(10,4.471113);
   hnueCCinFV_stack_13->SetBinError(11,3.265225);
   hnueCCinFV_stack_13->SetBinError(12,2.835817);
   hnueCCinFV_stack_13->SetBinError(13,2.430674);
   hnueCCinFV_stack_13->SetBinError(14,2.720053);
   hnueCCinFV_stack_13->SetBinError(15,2.379551);
   hnueCCinFV_stack_13->SetBinError(16,2.802246);
   hnueCCinFV_stack_13->SetBinError(17,3.38354);
   hnueCCinFV_stack_13->SetBinError(18,4.08507);
   hnueCCinFV_stack_13->SetBinError(19,2.49683);
   hnueCCinFV_stack_13->SetBinError(20,2.697907);
   hnueCCinFV_stack_13->SetBinError(21,3.016458);
   hnueCCinFV_stack_13->SetBinError(22,3.001545);
   hnueCCinFV_stack_13->SetBinError(23,4.988988);
   hnueCCinFV_stack_13->SetBinError(24,2.301909);
   hnueCCinFV_stack_13->SetBinError(25,2.739356);
   hnueCCinFV_stack_13->SetBinError(26,2.842919);
   hnueCCinFV_stack_13->SetBinError(27,2.350612);
   hnueCCinFV_stack_13->SetBinError(28,3.268245);
   hnueCCinFV_stack_13->SetBinError(29,1.935336);
   hnueCCinFV_stack_13->SetBinError(30,0.9067691);
   hnueCCinFV_stack_13->SetEntries(2305);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__5->SetBinContent(0,227.3315);
   hmcerror__5->SetBinContent(1,2718.968);
   hmcerror__5->SetBinContent(2,2930.145);
   hmcerror__5->SetBinContent(3,2932.549);
   hmcerror__5->SetBinContent(4,2983.355);
   hmcerror__5->SetBinContent(5,3083.168);
   hmcerror__5->SetBinContent(6,3205.23);
   hmcerror__5->SetBinContent(7,3036.588);
   hmcerror__5->SetBinContent(8,3078.976);
   hmcerror__5->SetBinContent(9,3066.933);
   hmcerror__5->SetBinContent(10,3081.905);
   hmcerror__5->SetBinContent(11,3101.361);
   hmcerror__5->SetBinContent(12,3056.863);
   hmcerror__5->SetBinContent(13,3095.199);
   hmcerror__5->SetBinContent(14,3060.861);
   hmcerror__5->SetBinContent(15,3080.414);
   hmcerror__5->SetBinContent(16,3086.932);
   hmcerror__5->SetBinContent(17,3100.524);
   hmcerror__5->SetBinContent(18,3050.07);
   hmcerror__5->SetBinContent(19,3008.861);
   hmcerror__5->SetBinContent(20,2846.004);
   hmcerror__5->SetBinContent(21,3346.135);
   hmcerror__5->SetBinContent(22,2757.678);
   hmcerror__5->SetBinContent(23,2736.658);
   hmcerror__5->SetBinContent(24,2621.779);
   hmcerror__5->SetBinContent(25,2602.024);
   hmcerror__5->SetBinContent(26,2540.803);
   hmcerror__5->SetBinContent(27,2284.365);
   hmcerror__5->SetBinContent(28,2075.038);
   hmcerror__5->SetBinContent(29,1758.407);
   hmcerror__5->SetBinContent(30,1012.742);
   hmcerror__5->SetBinContent(31,25.3888);
   hmcerror__5->SetBinError(0,9.455772);
   hmcerror__5->SetBinError(1,386.7476);
   hmcerror__5->SetBinError(2,421.102);
   hmcerror__5->SetBinError(3,418.2766);
   hmcerror__5->SetBinError(4,424.6824);
   hmcerror__5->SetBinError(5,445.0271);
   hmcerror__5->SetBinError(6,448.8494);
   hmcerror__5->SetBinError(7,433.3238);
   hmcerror__5->SetBinError(8,451.8806);
   hmcerror__5->SetBinError(9,430.2814);
   hmcerror__5->SetBinError(10,436.2313);
   hmcerror__5->SetBinError(11,435.0578);
   hmcerror__5->SetBinError(12,430.5459);
   hmcerror__5->SetBinError(13,415.1159);
   hmcerror__5->SetBinError(14,428.1468);
   hmcerror__5->SetBinError(15,446.314);
   hmcerror__5->SetBinError(16,419.177);
   hmcerror__5->SetBinError(17,421.361);
   hmcerror__5->SetBinError(18,429.2922);
   hmcerror__5->SetBinError(19,422.9299);
   hmcerror__5->SetBinError(20,381.14);
   hmcerror__5->SetBinError(21,430.4575);
   hmcerror__5->SetBinError(22,373.8822);
   hmcerror__5->SetBinError(23,375.1946);
   hmcerror__5->SetBinError(24,355.898);
   hmcerror__5->SetBinError(25,373.879);
   hmcerror__5->SetBinError(26,346.0619);
   hmcerror__5->SetBinError(27,309.8291);
   hmcerror__5->SetBinError(28,285.9242);
   hmcerror__5->SetBinError(29,252.9412);
   hmcerror__5->SetBinError(30,147.1);
   hmcerror__5->SetBinError(31,9.216882);
   hmcerror__5->SetBinError(32,0.3895343);
   hmcerror__5->SetBinError(33,0.3895343);
   hmcerror__5->SetEntries(76141.51);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3005[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3005[32] = {
   2530,
   3024,
   2952,
   3071,
   3176,
   3357,
   3109,
   3131,
   3133,
   3059,
   3111,
   3162,
   3148,
   3156,
   3240,
   3129,
   3132,
   3183,
   3139,
   2999,
   3224,
   2950,
   2788,
   2572,
   2557,
   2455,
   2332,
   2031,
   1769,
   996,
   25,
   1};
   Double_t _felx3005[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3005[32] = {
   50.29911,
   54.99091,
   54.33231,
   55.4166,
   56.35601,
   57.93962,
   55.75841,
   55.95534,
   55.97321,
   55.30823,
   55.77634,
   56.23166,
   56.10704,
   56.17829,
   56.921,
   55.93747,
   55.96427,
   56.41808,
   56.02678,
   54.76313,
   56.78028,
   54.3139,
   52.80152,
   50.71489,
   50.56679,
   49.54796,
   48.29079,
   45.06662,
   42.05948,
   31.55947,
   5.1474,
   1};
   Double_t _fehx3005[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3005[32] = {
   50.29911,
   54.99091,
   54.33231,
   55.4166,
   56.35601,
   57.93962,
   55.75841,
   55.95534,
   55.97321,
   55.30823,
   55.77634,
   56.23166,
   56.10704,
   56.17829,
   56.921,
   55.93747,
   55.96427,
   56.41808,
   56.02678,
   54.76313,
   56.78028,
   54.3139,
   52.80152,
   50.71489,
   50.56679,
   49.54796,
   48.29079,
   45.06662,
   42.05948,
   31.55947,
   4.9374,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1210);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(3756.434);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.14","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=28.3/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 85641.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 2783.2","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 9792.8","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2050.8","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 2748.3","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  146.9","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  43.0","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  4492.3","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  1067.8","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  2.7","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5927.0","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 11079.2","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 43621.4","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 610.5","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("generic_FC_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3006[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3006[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3006[32] = {
   0.1422406,
   0.1437137,
   0.1426324,
   0.1423506,
   0.1443409,
   0.1400365,
   0.1427009,
   0.1467633,
   0.140297,
   0.141546,
   0.1402796,
   0.1408457,
   0.1341161,
   0.1398779,
   0.1448877,
   0.1357908,
   0.1358999,
   0.1407483,
   0.1405615,
   0.1339211,
   0.1286432,
   0.1355786,
   0.1370996,
   0.1357468,
   0.1436878,
   0.1362018,
   0.1356303,
   0.1377923,
   0.1438468,
   0.1452492,
   0.3630294,
   0};
   Double_t _fehx3006[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3006[32] = {
   0.1422406,
   0.1437137,
   0.1426324,
   0.1423506,
   0.1443409,
   0.1400365,
   0.1427009,
   0.1467633,
   0.140297,
   0.141546,
   0.1402796,
   0.1408457,
   0.1341161,
   0.1398779,
   0.1448877,
   0.1357908,
   0.1358999,
   0.1407483,
   0.1405615,
   0.1339211,
   0.1286432,
   0.1355786,
   0.1370996,
   0.1357468,
   0.1436878,
   0.1362018,
   0.1356303,
   0.1377923,
   0.1438468,
   0.1452492,
   0.3630294,
   0};
   grae = new TGraphAsymmErrors(32,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1210);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3007[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3007[32] = {
   0.1356635,
   0.1356859,
   0.1346163,
   0.1344409,
   0.1421506,
   0.1358081,
   0.1377449,
   0.1381578,
   0.1361398,
   0.1381197,
   0.1370682,
   0.1367826,
   0.1308377,
   0.1364285,
   0.1353175,
   0.1340461,
   0.1337248,
   0.1378633,
   0.1351589,
   0.1311499,
   0.1253924,
   0.1314557,
   0.1347585,
   0.1335185,
   0.1401013,
   0.1330375,
   0.1330399,
   0.1348805,
   0.1328231,
   0.132668,
   0.1783201,
   0};
   Double_t _fehx3007[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3007[32] = {
   0.1356635,
   0.1356859,
   0.1346163,
   0.1344409,
   0.1421506,
   0.1358081,
   0.1377449,
   0.1381578,
   0.1361398,
   0.1381197,
   0.1370682,
   0.1367826,
   0.1308377,
   0.1364285,
   0.1353175,
   0.1340461,
   0.1337248,
   0.1378633,
   0.1351589,
   0.1311499,
   0.1253924,
   0.1314557,
   0.1347585,
   0.1335185,
   0.1401013,
   0.1330375,
   0.1330399,
   0.1348805,
   0.1328231,
   0.132668,
   0.1783201,
   0};
   grae = new TGraphAsymmErrors(32,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1210);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3008[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3008[32] = {
   0.9305001,
   1.032031,
   1.006633,
   1.029378,
   1.030109,
   1.047351,
   1.023847,
   1.016897,
   1.021542,
   0.9925681,
   1.003108,
   1.034394,
   1.017059,
   1.031083,
   1.051807,
   1.013628,
   1.010152,
   1.043583,
   1.043252,
   1.053758,
   0.9634997,
   1.069741,
   1.018761,
   0.9810133,
   0.9826967,
   0.9662301,
   1.020853,
   0.9787773,
   1.006024,
   0.9834682,
   0.9846862,
   10};
   Double_t _felx3008[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3008[32] = {
   0.01849934,
   0.0187673,
   0.01852733,
   0.01857526,
   0.01827861,
   0.01807659,
   0.01836219,
   0.01817336,
   0.01825055,
   0.01794612,
   0.01798447,
   0.01839522,
   0.01812712,
   0.01835376,
   0.01847836,
   0.01812073,
   0.01804994,
   0.01849731,
   0.0186206,
   0.01924211,
   0.01696891,
   0.01969552,
   0.01929416,
   0.01934369,
   0.01943364,
   0.01950091,
   0.0211397,
   0.02171846,
   0.02391908,
   0.03116238,
   0.2027429,
   0};
   Double_t _fehx3008[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3008[32] = {
   0.01849934,
   0.0187673,
   0.01852733,
   0.01857526,
   0.01827861,
   0.01807659,
   0.01836219,
   0.01817336,
   0.01825055,
   0.01794612,
   0.01798447,
   0.01839522,
   0.01812712,
   0.01835376,
   0.01847836,
   0.01812073,
   0.01804994,
   0.01849731,
   0.0186206,
   0.01924211,
   0.01696891,
   0.01969552,
   0.01929416,
   0.01934369,
   0.01943364,
   0.01950091,
   0.0211397,
   0.02171846,
   0.02391908,
   0.03116238,
   0.1944716,
   0};
   grae = new TGraphAsymmErrors(32,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1210);
   Graph_Graph3008->SetMinimum(0.7037489);
   Graph_Graph3008->SetMaximum(10.92181);
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
   
   TH1F *hist__6 = new TH1F("hist__6","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   TLine *line = new TLine(0,1,1100,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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
