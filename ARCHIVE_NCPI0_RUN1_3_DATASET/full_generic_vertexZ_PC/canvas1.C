#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Jun  1 18:01:19 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-67.14,1241.026,7070.902);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__1->SetBinContent(0,227.4268);
   hmc__1->SetBinContent(1,2710.514);
   hmc__1->SetBinContent(2,2916.027);
   hmc__1->SetBinContent(3,2921.372);
   hmc__1->SetBinContent(4,2972.638);
   hmc__1->SetBinContent(5,3069.299);
   hmc__1->SetBinContent(6,3192.817);
   hmc__1->SetBinContent(7,3021.547);
   hmc__1->SetBinContent(8,3068.566);
   hmc__1->SetBinContent(9,3051.549);
   hmc__1->SetBinContent(10,3067.877);
   hmc__1->SetBinContent(11,3086.748);
   hmc__1->SetBinContent(12,3042.795);
   hmc__1->SetBinContent(13,3079.906);
   hmc__1->SetBinContent(14,3047.626);
   hmc__1->SetBinContent(15,3069.075);
   hmc__1->SetBinContent(16,3073.247);
   hmc__1->SetBinContent(17,3084.694);
   hmc__1->SetBinContent(18,3034.343);
   hmc__1->SetBinContent(19,2992.945);
   hmc__1->SetBinContent(20,2832.125);
   hmc__1->SetBinContent(21,3335.64);
   hmc__1->SetBinContent(22,2744.885);
   hmc__1->SetBinContent(23,2720.262);
   hmc__1->SetBinContent(24,2609.561);
   hmc__1->SetBinContent(25,2587.034);
   hmc__1->SetBinContent(26,2524.428);
   hmc__1->SetBinContent(27,2266.771);
   hmc__1->SetBinContent(28,2063.263);
   hmc__1->SetBinContent(29,1749.276);
   hmc__1->SetBinContent(30,1006.339);
   hmc__1->SetBinContent(31,25.3888);
   hmc__1->SetBinError(0,9.45623);
   hmc__1->SetBinError(1,385.1496);
   hmc__1->SetBinError(2,414.1561);
   hmc__1->SetBinError(3,418.6072);
   hmc__1->SetBinError(4,420.3283);
   hmc__1->SetBinError(5,444.7779);
   hmc__1->SetBinError(6,441.9583);
   hmc__1->SetBinError(7,426.7774);
   hmc__1->SetBinError(8,435.2594);
   hmc__1->SetBinError(9,427.1893);
   hmc__1->SetBinError(10,430.9428);
   hmc__1->SetBinError(11,429.4381);
   hmc__1->SetBinError(12,424.2511);
   hmc__1->SetBinError(13,412.9339);
   hmc__1->SetBinError(14,423.7885);
   hmc__1->SetBinError(15,431.3004);
   hmc__1->SetBinError(16,417.6981);
   hmc__1->SetBinError(17,415.7917);
   hmc__1->SetBinError(18,422.5632);
   hmc__1->SetBinError(19,419.1955);
   hmc__1->SetBinError(20,375.2502);
   hmc__1->SetBinError(21,427.6969);
   hmc__1->SetBinError(22,367.5615);
   hmc__1->SetBinError(23,369.4608);
   hmc__1->SetBinError(24,352.0632);
   hmc__1->SetBinError(25,368.0371);
   hmc__1->SetBinError(26,338.6568);
   hmc__1->SetBinError(27,303.6222);
   hmc__1->SetBinError(28,281.5739);
   hmc__1->SetBinError(29,238.8941);
   hmc__1->SetBinError(30,143.5921);
   hmc__1->SetBinError(31,8.188909);
   hmc__1->SetBinError(32,0.4212968);
   hmc__1->SetBinError(33,0.4212968);
   hmc__1->SetMinimum(-67.14);
   hmc__1->SetMaximum(6714);
   hmc__1->SetEntries(75744.3);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",32,0,1100);
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(3502.422);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
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
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
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

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
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

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
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

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
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

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,22.11686);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,126.9943);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,172.8764);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,187.4648);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,168.6771);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,208.569);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,199.4992);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,203.7174);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,194.2539);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,199.9555);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,195.9239);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,189.7919);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,190.2143);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,197.4453);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,203.2757);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,194.1527);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,199.6569);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,203.1871);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,190.7365);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,193.5074);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,190.8434);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,199.4112);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,180.2319);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,190.1397);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,191.0877);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,189.719);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,195.935);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,189.983);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(28,191.5766);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(29,170.0001);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(30,94.55418);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(31,2.886998);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,1.238138);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,3.644538);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,4.2954);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,4.589139);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,4.213229);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.744259);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,4.602618);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,4.675917);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,4.591576);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,4.641067);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,4.526322);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,4.445698);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,4.452286);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,4.550687);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,4.678653);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,4.555572);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,4.62136);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,4.70373);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,4.498376);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,4.479157);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,4.541146);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,4.565215);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,4.388528);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,4.477288);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,4.590778);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,4.383106);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,4.543175);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,4.501788);
   hNCpi0inFVnoncoh_stack_6->SetBinError(28,4.545222);
   hNCpi0inFVnoncoh_stack_6->SetBinError(29,4.309151);
   hNCpi0inFVnoncoh_stack_6->SetBinError(30,3.25007);
   hNCpi0inFVnoncoh_stack_6->SetBinError(31,0.5575398);
   hNCpi0inFVnoncoh_stack_6->SetEntries(104509);

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_7->SetBinContent(0,7.886024);
   hCCpi0inFV_stack_7->SetBinContent(1,149.6213);
   hCCpi0inFV_stack_7->SetBinContent(2,220.4045);
   hCCpi0inFV_stack_7->SetBinContent(3,226.6779);
   hCCpi0inFV_stack_7->SetBinContent(4,249.0037);
   hCCpi0inFV_stack_7->SetBinContent(5,242.2314);
   hCCpi0inFV_stack_7->SetBinContent(6,245.1426);
   hCCpi0inFV_stack_7->SetBinContent(7,234.0132);
   hCCpi0inFV_stack_7->SetBinContent(8,234.4473);
   hCCpi0inFV_stack_7->SetBinContent(9,230.7321);
   hCCpi0inFV_stack_7->SetBinContent(10,252.8474);
   hCCpi0inFV_stack_7->SetBinContent(11,247.5416);
   hCCpi0inFV_stack_7->SetBinContent(12,235.3094);
   hCCpi0inFV_stack_7->SetBinContent(13,236.1898);
   hCCpi0inFV_stack_7->SetBinContent(14,253.0472);
   hCCpi0inFV_stack_7->SetBinContent(15,233.7637);
   hCCpi0inFV_stack_7->SetBinContent(16,254.8578);
   hCCpi0inFV_stack_7->SetBinContent(17,247.076);
   hCCpi0inFV_stack_7->SetBinContent(18,231.5338);
   hCCpi0inFV_stack_7->SetBinContent(19,230.4936);
   hCCpi0inFV_stack_7->SetBinContent(20,230.1273);
   hCCpi0inFV_stack_7->SetBinContent(21,218.7077);
   hCCpi0inFV_stack_7->SetBinContent(22,224.3034);
   hCCpi0inFV_stack_7->SetBinContent(23,216.5674);
   hCCpi0inFV_stack_7->SetBinContent(24,210.8413);
   hCCpi0inFV_stack_7->SetBinContent(25,215.6705);
   hCCpi0inFV_stack_7->SetBinContent(26,204.069);
   hCCpi0inFV_stack_7->SetBinContent(27,177.7189);
   hCCpi0inFV_stack_7->SetBinContent(28,145.586);
   hCCpi0inFV_stack_7->SetBinContent(29,104.3859);
   hCCpi0inFV_stack_7->SetBinContent(30,67.73637);
   hCCpi0inFV_stack_7->SetBinContent(31,2.105544);
   hCCpi0inFV_stack_7->SetBinError(0,1.425667);
   hCCpi0inFV_stack_7->SetBinError(1,6.106429);
   hCCpi0inFV_stack_7->SetBinError(2,7.432791);
   hCCpi0inFV_stack_7->SetBinError(3,7.567703);
   hCCpi0inFV_stack_7->SetBinError(4,7.957906);
   hCCpi0inFV_stack_7->SetBinError(5,7.756922);
   hCCpi0inFV_stack_7->SetBinError(6,7.789402);
   hCCpi0inFV_stack_7->SetBinError(7,7.668185);
   hCCpi0inFV_stack_7->SetBinError(8,7.699092);
   hCCpi0inFV_stack_7->SetBinError(9,7.604198);
   hCCpi0inFV_stack_7->SetBinError(10,7.942362);
   hCCpi0inFV_stack_7->SetBinError(11,7.921003);
   hCCpi0inFV_stack_7->SetBinError(12,7.654075);
   hCCpi0inFV_stack_7->SetBinError(13,7.717165);
   hCCpi0inFV_stack_7->SetBinError(14,7.939855);
   hCCpi0inFV_stack_7->SetBinError(15,7.652654);
   hCCpi0inFV_stack_7->SetBinError(16,7.990962);
   hCCpi0inFV_stack_7->SetBinError(17,7.975958);
   hCCpi0inFV_stack_7->SetBinError(18,7.623861);
   hCCpi0inFV_stack_7->SetBinError(19,7.580465);
   hCCpi0inFV_stack_7->SetBinError(20,7.578759);
   hCCpi0inFV_stack_7->SetBinError(21,7.475267);
   hCCpi0inFV_stack_7->SetBinError(22,7.555704);
   hCCpi0inFV_stack_7->SetBinError(23,7.368324);
   hCCpi0inFV_stack_7->SetBinError(24,7.279756);
   hCCpi0inFV_stack_7->SetBinError(25,7.398291);
   hCCpi0inFV_stack_7->SetBinError(26,7.225249);
   hCCpi0inFV_stack_7->SetBinError(27,6.658437);
   hCCpi0inFV_stack_7->SetBinError(28,6.287264);
   hCCpi0inFV_stack_7->SetBinError(29,5.119697);
   hCCpi0inFV_stack_7->SetBinError(30,4.131677);
   hCCpi0inFV_stack_7->SetBinError(31,0.6797106);
   hCCpi0inFV_stack_7->SetEntries(27759);

   ci = 1440;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_8->SetBinContent(0,15.18979);
   hNCinFV_stack_8->SetBinContent(1,244.7277);
   hNCinFV_stack_8->SetBinContent(2,334.0704);
   hNCinFV_stack_8->SetBinContent(3,328.115);
   hNCinFV_stack_8->SetBinContent(4,351.424);
   hNCinFV_stack_8->SetBinContent(5,358.0223);
   hNCinFV_stack_8->SetBinContent(6,377.859);
   hNCinFV_stack_8->SetBinContent(7,372.3308);
   hNCinFV_stack_8->SetBinContent(8,372.1478);
   hNCinFV_stack_8->SetBinContent(9,375.8109);
   hNCinFV_stack_8->SetBinContent(10,381.6779);
   hNCinFV_stack_8->SetBinContent(11,390.7154);
   hNCinFV_stack_8->SetBinContent(12,382.2332);
   hNCinFV_stack_8->SetBinContent(13,371.1922);
   hNCinFV_stack_8->SetBinContent(14,354.4593);
   hNCinFV_stack_8->SetBinContent(15,381.2726);
   hNCinFV_stack_8->SetBinContent(16,374.0083);
   hNCinFV_stack_8->SetBinContent(17,378.2054);
   hNCinFV_stack_8->SetBinContent(18,399.5459);
   hNCinFV_stack_8->SetBinContent(19,397.5779);
   hNCinFV_stack_8->SetBinContent(20,360.2308);
   hNCinFV_stack_8->SetBinContent(21,388.4549);
   hNCinFV_stack_8->SetBinContent(22,367.1151);
   hNCinFV_stack_8->SetBinContent(23,371.1365);
   hNCinFV_stack_8->SetBinContent(24,354.2357);
   hNCinFV_stack_8->SetBinContent(25,382.9387);
   hNCinFV_stack_8->SetBinContent(26,361.4006);
   hNCinFV_stack_8->SetBinContent(27,347.2596);
   hNCinFV_stack_8->SetBinContent(28,369.713);
   hNCinFV_stack_8->SetBinContent(29,312.343);
   hNCinFV_stack_8->SetBinContent(30,139.6091);
   hNCinFV_stack_8->SetBinContent(31,1.610679);
   hNCinFV_stack_8->SetBinError(0,1.946487);
   hNCinFV_stack_8->SetBinError(1,7.869242);
   hNCinFV_stack_8->SetBinError(2,9.199339);
   hNCinFV_stack_8->SetBinError(3,9.250746);
   hNCinFV_stack_8->SetBinError(4,9.455149);
   hNCinFV_stack_8->SetBinError(5,9.522694);
   hNCinFV_stack_8->SetBinError(6,9.73127);
   hNCinFV_stack_8->SetBinError(7,9.647215);
   hNCinFV_stack_8->SetBinError(8,9.712049);
   hNCinFV_stack_8->SetBinError(9,9.712649);
   hNCinFV_stack_8->SetBinError(10,9.766203);
   hNCinFV_stack_8->SetBinError(11,9.919161);
   hNCinFV_stack_8->SetBinError(12,9.807523);
   hNCinFV_stack_8->SetBinError(13,9.648784);
   hNCinFV_stack_8->SetBinError(14,9.406822);
   hNCinFV_stack_8->SetBinError(15,9.76348);
   hNCinFV_stack_8->SetBinError(16,9.571629);
   hNCinFV_stack_8->SetBinError(17,9.69332);
   hNCinFV_stack_8->SetBinError(18,10.09682);
   hNCinFV_stack_8->SetBinError(19,10.08107);
   hNCinFV_stack_8->SetBinError(20,9.4999);
   hNCinFV_stack_8->SetBinError(21,9.864593);
   hNCinFV_stack_8->SetBinError(22,9.698939);
   hNCinFV_stack_8->SetBinError(23,9.582249);
   hNCinFV_stack_8->SetBinError(24,9.450408);
   hNCinFV_stack_8->SetBinError(25,9.843691);
   hNCinFV_stack_8->SetBinError(26,9.52248);
   hNCinFV_stack_8->SetBinError(27,9.293542);
   hNCinFV_stack_8->SetBinError(28,9.605403);
   hNCinFV_stack_8->SetBinError(29,8.898563);
   hNCinFV_stack_8->SetBinError(30,5.829917);
   hNCinFV_stack_8->SetBinError(31,0.6806271);
   hNCinFV_stack_8->SetEntries(45707);

   ci = 1441;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_9->SetBinContent(0,51.32555);
   hnumuCCinFV_stack_9->SetBinContent(1,1073.308);
   hnumuCCinFV_stack_9->SetBinContent(2,1534.595);
   hnumuCCinFV_stack_9->SetBinContent(3,1608.679);
   hnumuCCinFV_stack_9->SetBinContent(4,1585.944);
   hnumuCCinFV_stack_9->SetBinContent(5,1637.116);
   hnumuCCinFV_stack_9->SetBinContent(6,1700.887);
   hnumuCCinFV_stack_9->SetBinContent(7,1605.716);
   hnumuCCinFV_stack_9->SetBinContent(8,1679.538);
   hnumuCCinFV_stack_9->SetBinContent(9,1688.966);
   hnumuCCinFV_stack_9->SetBinContent(10,1689.275);
   hnumuCCinFV_stack_9->SetBinContent(11,1702.1);
   hnumuCCinFV_stack_9->SetBinContent(12,1718.739);
   hnumuCCinFV_stack_9->SetBinContent(13,1694.53);
   hnumuCCinFV_stack_9->SetBinContent(14,1662.867);
   hnumuCCinFV_stack_9->SetBinContent(15,1692.134);
   hnumuCCinFV_stack_9->SetBinContent(16,1647.262);
   hnumuCCinFV_stack_9->SetBinContent(17,1641.234);
   hnumuCCinFV_stack_9->SetBinContent(18,1619.774);
   hnumuCCinFV_stack_9->SetBinContent(19,1562.561);
   hnumuCCinFV_stack_9->SetBinContent(20,1470.044);
   hnumuCCinFV_stack_9->SetBinContent(21,1491.356);
   hnumuCCinFV_stack_9->SetBinContent(22,1376.866);
   hnumuCCinFV_stack_9->SetBinContent(23,1389.686);
   hnumuCCinFV_stack_9->SetBinContent(24,1316.384);
   hnumuCCinFV_stack_9->SetBinContent(25,1274.142);
   hnumuCCinFV_stack_9->SetBinContent(26,1177.141);
   hnumuCCinFV_stack_9->SetBinContent(27,1025.585);
   hnumuCCinFV_stack_9->SetBinContent(28,873.0991);
   hnumuCCinFV_stack_9->SetBinContent(29,640.0554);
   hnumuCCinFV_stack_9->SetBinContent(30,292.239);
   hnumuCCinFV_stack_9->SetBinContent(31,3.824694);
   hnumuCCinFV_stack_9->SetBinError(0,5.575038);
   hnumuCCinFV_stack_9->SetBinError(1,24.51447);
   hnumuCCinFV_stack_9->SetBinError(2,27.64363);
   hnumuCCinFV_stack_9->SetBinError(3,28.59715);
   hnumuCCinFV_stack_9->SetBinError(4,28.09533);
   hnumuCCinFV_stack_9->SetBinError(5,30.12142);
   hnumuCCinFV_stack_9->SetBinError(6,30.1315);
   hnumuCCinFV_stack_9->SetBinError(7,28.13446);
   hnumuCCinFV_stack_9->SetBinError(8,29.0743);
   hnumuCCinFV_stack_9->SetBinError(9,29.74558);
   hnumuCCinFV_stack_9->SetBinError(10,29.42957);
   hnumuCCinFV_stack_9->SetBinError(11,29.562);
   hnumuCCinFV_stack_9->SetBinError(12,29.41797);
   hnumuCCinFV_stack_9->SetBinError(13,28.53209);
   hnumuCCinFV_stack_9->SetBinError(14,29.03595);
   hnumuCCinFV_stack_9->SetBinError(15,30.31853);
   hnumuCCinFV_stack_9->SetBinError(16,27.77163);
   hnumuCCinFV_stack_9->SetBinError(17,29.26948);
   hnumuCCinFV_stack_9->SetBinError(18,28.69552);
   hnumuCCinFV_stack_9->SetBinError(19,27.88883);
   hnumuCCinFV_stack_9->SetBinError(20,27.09529);
   hnumuCCinFV_stack_9->SetBinError(21,27.48163);
   hnumuCCinFV_stack_9->SetBinError(22,24.88848);
   hnumuCCinFV_stack_9->SetBinError(23,26.3981);
   hnumuCCinFV_stack_9->SetBinError(24,25.04342);
   hnumuCCinFV_stack_9->SetBinError(25,24.96074);
   hnumuCCinFV_stack_9->SetBinError(26,23.1407);
   hnumuCCinFV_stack_9->SetBinError(27,21.46188);
   hnumuCCinFV_stack_9->SetBinError(28,19.39718);
   hnumuCCinFV_stack_9->SetBinError(29,15.99365);
   hnumuCCinFV_stack_9->SetBinError(30,11.88338);
   hnumuCCinFV_stack_9->SetBinError(31,1.224834);
   hnumuCCinFV_stack_9->SetEntries(151344);

   ci = 1442;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_10->SetBinContent(0,0.8099508);
   hnueCCinFV_stack_10->SetBinContent(1,14.07332);
   hnueCCinFV_stack_10->SetBinContent(2,17.72464);
   hnueCCinFV_stack_10->SetBinContent(3,15.34105);
   hnueCCinFV_stack_10->SetBinContent(4,22.52146);
   hnueCCinFV_stack_10->SetBinContent(5,22.1612);
   hnueCCinFV_stack_10->SetBinContent(6,20.28624);
   hnueCCinFV_stack_10->SetBinContent(7,24.51451);
   hnueCCinFV_stack_10->SetBinContent(8,21.58472);
   hnueCCinFV_stack_10->SetBinContent(9,26.67085);
   hnueCCinFV_stack_10->SetBinContent(10,28.64492);
   hnueCCinFV_stack_10->SetBinContent(11,22.74763);
   hnueCCinFV_stack_10->SetBinContent(12,19.73017);
   hnueCCinFV_stack_10->SetBinContent(13,20.61239);
   hnueCCinFV_stack_10->SetBinContent(14,20.63712);
   hnueCCinFV_stack_10->SetBinContent(15,16.94862);
   hnueCCinFV_stack_10->SetBinContent(16,17.47927);
   hnueCCinFV_stack_10->SetBinContent(17,26.68186);
   hnueCCinFV_stack_10->SetBinContent(18,29.41339);
   hnueCCinFV_stack_10->SetBinContent(19,21.95883);
   hnueCCinFV_stack_10->SetBinContent(20,21.59179);
   hnueCCinFV_stack_10->SetBinContent(21,20.6377);
   hnueCCinFV_stack_10->SetBinContent(22,23.17651);
   hnueCCinFV_stack_10->SetBinContent(23,24.45638);
   hnueCCinFV_stack_10->SetBinContent(24,18.81199);
   hnueCCinFV_stack_10->SetBinContent(25,24.54939);
   hnueCCinFV_stack_10->SetBinContent(26,19.80793);
   hnueCCinFV_stack_10->SetBinContent(27,17.47205);
   hnueCCinFV_stack_10->SetBinContent(28,18.87243);
   hnueCCinFV_stack_10->SetBinContent(29,9.151701);
   hnueCCinFV_stack_10->SetBinContent(30,2.225571);
   hnueCCinFV_stack_10->SetBinError(0,0.5728479);
   hnueCCinFV_stack_10->SetBinError(1,2.238098);
   hnueCCinFV_stack_10->SetBinError(2,2.262273);
   hnueCCinFV_stack_10->SetBinError(3,2.011563);
   hnueCCinFV_stack_10->SetBinError(4,3.249259);
   hnueCCinFV_stack_10->SetBinError(5,3.018495);
   hnueCCinFV_stack_10->SetBinError(6,2.328083);
   hnueCCinFV_stack_10->SetBinError(7,2.754727);
   hnueCCinFV_stack_10->SetBinError(8,2.546217);
   hnueCCinFV_stack_10->SetBinError(9,3.831232);
   hnueCCinFV_stack_10->SetBinError(10,4.471113);
   hnueCCinFV_stack_10->SetBinError(11,3.265225);
   hnueCCinFV_stack_10->SetBinError(12,2.835817);
   hnueCCinFV_stack_10->SetBinError(13,2.430674);
   hnueCCinFV_stack_10->SetBinError(14,2.720053);
   hnueCCinFV_stack_10->SetBinError(15,2.379551);
   hnueCCinFV_stack_10->SetBinError(16,2.802246);
   hnueCCinFV_stack_10->SetBinError(17,3.38354);
   hnueCCinFV_stack_10->SetBinError(18,4.08507);
   hnueCCinFV_stack_10->SetBinError(19,2.49683);
   hnueCCinFV_stack_10->SetBinError(20,2.697907);
   hnueCCinFV_stack_10->SetBinError(21,3.016458);
   hnueCCinFV_stack_10->SetBinError(22,3.001545);
   hnueCCinFV_stack_10->SetBinError(23,4.988988);
   hnueCCinFV_stack_10->SetBinError(24,2.301909);
   hnueCCinFV_stack_10->SetBinError(25,2.739356);
   hnueCCinFV_stack_10->SetBinError(26,2.842919);
   hnueCCinFV_stack_10->SetBinError(27,2.350612);
   hnueCCinFV_stack_10->SetBinError(28,3.268245);
   hnueCCinFV_stack_10->SetBinError(29,1.935336);
   hnueCCinFV_stack_10->SetBinError(30,0.9067691);
   hnueCCinFV_stack_10->SetEntries(2305);

   ci = 1443;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__2->SetBinContent(0,227.4268);
   hmcerror__2->SetBinContent(1,2710.514);
   hmcerror__2->SetBinContent(2,2916.027);
   hmcerror__2->SetBinContent(3,2921.372);
   hmcerror__2->SetBinContent(4,2972.638);
   hmcerror__2->SetBinContent(5,3069.299);
   hmcerror__2->SetBinContent(6,3192.817);
   hmcerror__2->SetBinContent(7,3021.547);
   hmcerror__2->SetBinContent(8,3068.566);
   hmcerror__2->SetBinContent(9,3051.549);
   hmcerror__2->SetBinContent(10,3067.877);
   hmcerror__2->SetBinContent(11,3086.748);
   hmcerror__2->SetBinContent(12,3042.795);
   hmcerror__2->SetBinContent(13,3079.906);
   hmcerror__2->SetBinContent(14,3047.626);
   hmcerror__2->SetBinContent(15,3069.075);
   hmcerror__2->SetBinContent(16,3073.247);
   hmcerror__2->SetBinContent(17,3084.694);
   hmcerror__2->SetBinContent(18,3034.343);
   hmcerror__2->SetBinContent(19,2992.945);
   hmcerror__2->SetBinContent(20,2832.125);
   hmcerror__2->SetBinContent(21,3335.64);
   hmcerror__2->SetBinContent(22,2744.885);
   hmcerror__2->SetBinContent(23,2720.262);
   hmcerror__2->SetBinContent(24,2609.561);
   hmcerror__2->SetBinContent(25,2587.034);
   hmcerror__2->SetBinContent(26,2524.428);
   hmcerror__2->SetBinContent(27,2266.771);
   hmcerror__2->SetBinContent(28,2063.263);
   hmcerror__2->SetBinContent(29,1749.276);
   hmcerror__2->SetBinContent(30,1006.339);
   hmcerror__2->SetBinContent(31,25.3888);
   hmcerror__2->SetBinError(0,9.45623);
   hmcerror__2->SetBinError(1,385.1496);
   hmcerror__2->SetBinError(2,414.1561);
   hmcerror__2->SetBinError(3,418.6072);
   hmcerror__2->SetBinError(4,420.3283);
   hmcerror__2->SetBinError(5,444.7779);
   hmcerror__2->SetBinError(6,441.9583);
   hmcerror__2->SetBinError(7,426.7774);
   hmcerror__2->SetBinError(8,435.2594);
   hmcerror__2->SetBinError(9,427.1893);
   hmcerror__2->SetBinError(10,430.9428);
   hmcerror__2->SetBinError(11,429.4381);
   hmcerror__2->SetBinError(12,424.2511);
   hmcerror__2->SetBinError(13,412.9339);
   hmcerror__2->SetBinError(14,423.7885);
   hmcerror__2->SetBinError(15,431.3004);
   hmcerror__2->SetBinError(16,417.6981);
   hmcerror__2->SetBinError(17,415.7917);
   hmcerror__2->SetBinError(18,422.5632);
   hmcerror__2->SetBinError(19,419.1955);
   hmcerror__2->SetBinError(20,375.2502);
   hmcerror__2->SetBinError(21,427.6969);
   hmcerror__2->SetBinError(22,367.5615);
   hmcerror__2->SetBinError(23,369.4608);
   hmcerror__2->SetBinError(24,352.0632);
   hmcerror__2->SetBinError(25,368.0371);
   hmcerror__2->SetBinError(26,338.6568);
   hmcerror__2->SetBinError(27,303.6222);
   hmcerror__2->SetBinError(28,281.5739);
   hmcerror__2->SetBinError(29,238.8941);
   hmcerror__2->SetBinError(30,143.5921);
   hmcerror__2->SetBinError(31,8.188909);
   hmcerror__2->SetBinError(32,0.4212968);
   hmcerror__2->SetBinError(33,0.4212968);
   hmcerror__2->SetEntries(75744.3);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[32] = {
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
   Double_t _fy3001[32] = {
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
   Double_t _felx3001[32] = {
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
   Double_t _fely3001[32] = {
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
   Double_t _fehx3001[32] = {
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
   Double_t _fehy3001[32] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1210);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(3756.434);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=28.4/32","");
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

   ci = 1434;
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

   ci = 1435;
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

   ci = 1436;
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

   ci = 1437;
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

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  5606.3","F");

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 6472.8","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 10681.4","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 43075.6","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 610.5","F");

   ci = 1443;
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
   canvas1->cd();
  
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
   
   Double_t _fx3002[32] = {
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
   Double_t _fy3002[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[32] = {
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
   Double_t _fely3002[32] = {
   0.1420947,
   0.1420275,
   0.1432913,
   0.1413991,
   0.1449119,
   0.1384227,
   0.1412447,
   0.1418446,
   0.139991,
   0.1404694,
   0.1391232,
   0.1394281,
   0.1340736,
   0.1390553,
   0.1405311,
   0.1359143,
   0.1347919,
   0.1392602,
   0.1400612,
   0.1324977,
   0.1282204,
   0.1339078,
   0.1358181,
   0.1349128,
   0.1422622,
   0.1341519,
   0.1339448,
   0.1364702,
   0.1365674,
   0.1426876,
   0.3225402,
   0};
   Double_t _fehx3002[32] = {
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
   Double_t _fehy3002[32] = {
   0.1420947,
   0.1420275,
   0.1432913,
   0.1413991,
   0.1449119,
   0.1384227,
   0.1412447,
   0.1418446,
   0.139991,
   0.1404694,
   0.1391232,
   0.1394281,
   0.1340736,
   0.1390553,
   0.1405311,
   0.1359143,
   0.1347919,
   0.1392602,
   0.1400612,
   0.1324977,
   0.1282204,
   0.1339078,
   0.1358181,
   0.1349128,
   0.1422622,
   0.1341519,
   0.1339448,
   0.1364702,
   0.1365674,
   0.1426876,
   0.3225402,
   0};
   grae = new TGraphAsymmErrors(32,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1210);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[32] = {
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
   Double_t _fy3003[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[32] = {
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
   Double_t _fely3003[32] = {
   0.1408397,
   0.1366643,
   0.1350304,
   0.1348053,
   0.1423448,
   0.1359574,
   0.1378191,
   0.1382227,
   0.1361703,
   0.1381229,
   0.1370751,
   0.136804,
   0.1308269,
   0.1364239,
   0.1353239,
   0.1340102,
   0.1336836,
   0.1378609,
   0.1351436,
   0.1311461,
   0.1255831,
   0.131508,
   0.1347185,
   0.1335028,
   0.1400822,
   0.1330253,
   0.1330065,
   0.1349,
   0.1330433,
   0.1330904,
   0.1801088,
   0};
   Double_t _fehx3003[32] = {
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
   Double_t _fehy3003[32] = {
   0.1408397,
   0.1366643,
   0.1350304,
   0.1348053,
   0.1423448,
   0.1359574,
   0.1378191,
   0.1382227,
   0.1361703,
   0.1381229,
   0.1370751,
   0.136804,
   0.1308269,
   0.1364239,
   0.1353239,
   0.1340102,
   0.1336836,
   0.1378609,
   0.1351436,
   0.1311461,
   0.1255831,
   0.131508,
   0.1347185,
   0.1335028,
   0.1400822,
   0.1330253,
   0.1330065,
   0.1349,
   0.1330433,
   0.1330904,
   0.1801088,
   0};
   grae = new TGraphAsymmErrors(32,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1210);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[32] = {
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
   Double_t _fy3004[32] = {
   0.9334022,
   1.037027,
   1.010484,
   1.033089,
   1.034764,
   1.051423,
   1.028943,
   1.020346,
   1.026692,
   0.9971065,
   1.007857,
   1.039176,
   1.022109,
   1.03556,
   1.055693,
   1.018142,
   1.015336,
   1.048992,
   1.0488,
   1.058922,
   0.9665313,
   1.074726,
   1.024901,
   0.9856064,
   0.9883906,
   0.9724974,
   1.028776,
   0.9843633,
   1.011275,
   0.9897261,
   0.9846862,
   10};
   Double_t _felx3004[32] = {
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
   Double_t _fely3004[32] = {
   0.01855703,
   0.01885816,
   0.01859822,
   0.01864223,
   0.0183612,
   0.01814687,
   0.01845359,
   0.01823501,
   0.01834256,
   0.01802818,
   0.01806961,
   0.01848027,
   0.01821713,
   0.01843346,
   0.01854663,
   0.01820142,
   0.01814257,
   0.01859318,
   0.01871961,
   0.01933641,
   0.01702231,
   0.01978732,
   0.01941045,
   0.01943426,
   0.01954624,
   0.0196274,
   0.02130378,
   0.0218424,
   0.02404394,
   0.03136067,
   0.2027429,
   0};
   Double_t _fehx3004[32] = {
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
   Double_t _fehy3004[32] = {
   0.01855703,
   0.01885816,
   0.01859822,
   0.01864223,
   0.0183612,
   0.01814687,
   0.01845359,
   0.01823501,
   0.01834256,
   0.01802818,
   0.01806961,
   0.01848027,
   0.01821713,
   0.01843346,
   0.01854663,
   0.01820142,
   0.01814257,
   0.01859318,
   0.01871961,
   0.01933641,
   0.01702231,
   0.01978732,
   0.01941045,
   0.01943426,
   0.01954624,
   0.0196274,
   0.02130378,
   0.0218424,
   0.02404394,
   0.03136067,
   0.1944716,
   0};
   grae = new TGraphAsymmErrors(32,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1210);
   Graph_Graph3004->SetMinimum(0.7037489);
   Graph_Graph3004->SetMaximum(10.92181);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","generic_FC_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
