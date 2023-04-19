#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Mon Mar 13 20:05:49 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-1.986952,1241.026,219.7151);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__13->SetBinContent(1,61.61135);
   hmc__13->SetBinContent(2,82.23372);
   hmc__13->SetBinContent(3,75.15104);
   hmc__13->SetBinContent(4,81.24297);
   hmc__13->SetBinContent(5,85.12049);
   hmc__13->SetBinContent(6,81.095);
   hmc__13->SetBinContent(7,85.98743);
   hmc__13->SetBinContent(8,89.24143);
   hmc__13->SetBinContent(9,85.46393);
   hmc__13->SetBinContent(10,95.9959);
   hmc__13->SetBinContent(11,93.42819);
   hmc__13->SetBinContent(12,78.75108);
   hmc__13->SetBinContent(13,87.68799);
   hmc__13->SetBinContent(14,99.34761);
   hmc__13->SetBinContent(15,85.11166);
   hmc__13->SetBinContent(16,93.45908);
   hmc__13->SetBinContent(17,91.62093);
   hmc__13->SetBinContent(18,88.83683);
   hmc__13->SetBinContent(19,86.08455);
   hmc__13->SetBinContent(20,84.08619);
   hmc__13->SetBinContent(21,70.33434);
   hmc__13->SetBinContent(22,86.64543);
   hmc__13->SetBinContent(23,81.58743);
   hmc__13->SetBinContent(24,82.58141);
   hmc__13->SetBinContent(25,83.76602);
   hmc__13->SetBinContent(26,81.32652);
   hmc__13->SetBinContent(27,83.92625);
   hmc__13->SetBinContent(28,82.05357);
   hmc__13->SetBinContent(29,79.43985);
   hmc__13->SetBinContent(30,51.96322);
   hmc__13->SetBinContent(31,1.860819);
   hmc__13->SetBinError(1,24.13748);
   hmc__13->SetBinError(2,23.51908);
   hmc__13->SetBinError(3,22.95955);
   hmc__13->SetBinError(4,24.54871);
   hmc__13->SetBinError(5,23.95347);
   hmc__13->SetBinError(6,26.13888);
   hmc__13->SetBinError(7,24.70078);
   hmc__13->SetBinError(8,30.89088);
   hmc__13->SetBinError(9,24.80729);
   hmc__13->SetBinError(10,26.02002);
   hmc__13->SetBinError(11,27.44096);
   hmc__13->SetBinError(12,21.7002);
   hmc__13->SetBinError(13,27.83601);
   hmc__13->SetBinError(14,36.27683);
   hmc__13->SetBinError(15,25.07908);
   hmc__13->SetBinError(16,29.73746);
   hmc__13->SetBinError(17,26.84832);
   hmc__13->SetBinError(18,26.0489);
   hmc__13->SetBinError(19,24.1582);
   hmc__13->SetBinError(20,24.75854);
   hmc__13->SetBinError(21,20.28521);
   hmc__13->SetBinError(22,28.78995);
   hmc__13->SetBinError(23,26.00055);
   hmc__13->SetBinError(24,30.21033);
   hmc__13->SetBinError(25,26.69442);
   hmc__13->SetBinError(26,23.82944);
   hmc__13->SetBinError(27,24.34828);
   hmc__13->SetBinError(28,23.5954);
   hmc__13->SetBinError(29,23.08764);
   hmc__13->SetBinError(30,16.37675);
   hmc__13->SetBinError(31,1.80065);
   hmc__13->SetBinError(32,0.3895343);
   hmc__13->SetBinError(33,0.3895343);
   hmc__13->SetMinimum(-1.986952);
   hmc__13->SetMaximum(208.63);
   hmc__13->SetEntries(2462.59);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",32,0,1100);
   hs5_stack_5->SetMinimum(-1.310782e-08);
   hs5_stack_5->SetMaximum(104.315);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,0.3934307);
   hbadmatch_stack_1->SetBinContent(2,1.492475);
   hbadmatch_stack_1->SetBinContent(3,1.320373);
   hbadmatch_stack_1->SetBinContent(4,4.664443);
   hbadmatch_stack_1->SetBinContent(5,4.040556);
   hbadmatch_stack_1->SetBinContent(6,0.6262909);
   hbadmatch_stack_1->SetBinContent(7,2.698146);
   hbadmatch_stack_1->SetBinContent(8,3.147815);
   hbadmatch_stack_1->SetBinContent(9,2.744941);
   hbadmatch_stack_1->SetBinContent(10,1.59848);
   hbadmatch_stack_1->SetBinContent(11,2.167574);
   hbadmatch_stack_1->SetBinContent(12,1.445391);
   hbadmatch_stack_1->SetBinContent(13,1.307191);
   hbadmatch_stack_1->SetBinContent(14,2.517042);
   hbadmatch_stack_1->SetBinContent(15,0.4154345);
   hbadmatch_stack_1->SetBinContent(16,1.606743);
   hbadmatch_stack_1->SetBinContent(17,2.436129);
   hbadmatch_stack_1->SetBinContent(18,2.382366);
   hbadmatch_stack_1->SetBinContent(19,2.078473);
   hbadmatch_stack_1->SetBinContent(20,2.826237);
   hbadmatch_stack_1->SetBinContent(21,2.777267);
   hbadmatch_stack_1->SetBinContent(22,2.037084);
   hbadmatch_stack_1->SetBinContent(23,1.749499);
   hbadmatch_stack_1->SetBinContent(24,1.342511);
   hbadmatch_stack_1->SetBinContent(25,1.483962);
   hbadmatch_stack_1->SetBinContent(26,1.52047);
   hbadmatch_stack_1->SetBinContent(27,1.403827);
   hbadmatch_stack_1->SetBinContent(28,1.271744);
   hbadmatch_stack_1->SetBinContent(29,0.536893);
   hbadmatch_stack_1->SetBinContent(30,1.883705);
   hbadmatch_stack_1->SetBinContent(31,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.2781975);
   hbadmatch_stack_1->SetBinError(2,0.6301548);
   hbadmatch_stack_1->SetBinError(3,0.5548703);
   hbadmatch_stack_1->SetBinError(4,1.532106);
   hbadmatch_stack_1->SetBinError(5,1.003278);
   hbadmatch_stack_1->SetBinError(6,0.3629679);
   hbadmatch_stack_1->SetBinError(7,0.9757989);
   hbadmatch_stack_1->SetBinError(8,0.926383);
   hbadmatch_stack_1->SetBinError(9,0.9190279);
   hbadmatch_stack_1->SetBinError(10,0.6870494);
   hbadmatch_stack_1->SetBinError(11,0.8079736);
   hbadmatch_stack_1->SetBinError(12,0.6189692);
   hbadmatch_stack_1->SetBinError(13,0.6028626);
   hbadmatch_stack_1->SetBinError(14,0.8463046);
   hbadmatch_stack_1->SetBinError(15,0.2943044);
   hbadmatch_stack_1->SetBinError(16,0.6212227);
   hbadmatch_stack_1->SetBinError(17,0.796688);
   hbadmatch_stack_1->SetBinError(18,0.8199949);
   hbadmatch_stack_1->SetBinError(19,0.7148925);
   hbadmatch_stack_1->SetBinError(20,0.9211137);
   hbadmatch_stack_1->SetBinError(21,0.8737781);
   hbadmatch_stack_1->SetBinError(22,0.7448655);
   hbadmatch_stack_1->SetBinError(23,0.6331278);
   hbadmatch_stack_1->SetBinError(24,0.5630991);
   hbadmatch_stack_1->SetBinError(25,0.564543);
   hbadmatch_stack_1->SetBinError(26,0.5898325);
   hbadmatch_stack_1->SetBinError(27,0.5312582);
   hbadmatch_stack_1->SetBinError(28,0.5884125);
   hbadmatch_stack_1->SetBinError(29,0.3929602);
   hbadmatch_stack_1->SetBinError(30,0.7897905);
   hbadmatch_stack_1->SetBinError(31,0.1950249);
   hbadmatch_stack_1->SetEntries(235);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,1.78639);
   hext_stack_2->SetBinContent(2,6.064215);
   hext_stack_2->SetBinContent(3,4.360027);
   hext_stack_2->SetBinContent(4,5.490441);
   hext_stack_2->SetBinContent(5,6.400202);
   hext_stack_2->SetBinContent(6,4.684424);
   hext_stack_2->SetBinContent(7,6.400202);
   hext_stack_2->SetBinContent(8,4.538791);
   hext_stack_2->SetBinContent(9,5.281377);
   hext_stack_2->SetBinContent(10,5.020411);
   hext_stack_2->SetBinContent(11,5.732637);
   hext_stack_2->SetBinContent(12,3.490578);
   hext_stack_2->SetBinContent(13,4.703194);
   hext_stack_2->SetBinContent(14,4.385977);
   hext_stack_2->SetBinContent(15,4.289415);
   hext_stack_2->SetBinContent(16,4.449409);
   hext_stack_2->SetBinContent(17,4.620993);
   hext_stack_2->SetBinContent(18,5.344809);
   hext_stack_2->SetBinContent(19,5.42701);
   hext_stack_2->SetBinContent(20,3.166181);
   hext_stack_2->SetBinContent(21,3.330584);
   hext_stack_2->SetBinContent(22,3.241202);
   hext_stack_2->SetBinContent(23,2.345802);
   hext_stack_2->SetBinContent(24,4.931029);
   hext_stack_2->SetBinContent(25,2.923985);
   hext_stack_2->SetBinContent(26,2.028585);
   hext_stack_2->SetBinContent(27,4.035629);
   hext_stack_2->SetBinContent(28,4.602222);
   hext_stack_2->SetBinContent(29,5.269787);
   hext_stack_2->SetBinContent(30,2.27519);
   hext_stack_2->SetBinContent(31,0.4065989);
   hext_stack_2->SetBinError(1,0.8039566);
   hext_stack_2->SetBinError(2,1.636483);
   hext_stack_2->SetBinError(3,1.446312);
   hext_stack_2->SetBinError(4,1.651938);
   hext_stack_2->SetBinError(5,1.648403);
   hext_stack_2->SetBinError(6,1.482246);
   hext_stack_2->SetBinError(7,1.648403);
   hext_stack_2->SetBinError(8,1.345212);
   hext_stack_2->SetBinError(9,1.41918);
   hext_stack_2->SetBinError(10,1.495396);
   hext_stack_2->SetBinError(11,1.665546);
   hext_stack_2->SetBinError(12,1.110227);
   hext_stack_2->SetBinError(13,1.389163);
   hext_stack_2->SetBinError(14,1.274103);
   hext_stack_2->SetBinError(15,1.402017);
   hext_stack_2->SetBinError(16,1.396677);
   hext_stack_2->SetBinError(17,1.367364);
   hext_stack_2->SetBinError(18,1.530177);
   hext_stack_2->SetBinError(19,1.549687);
   hext_stack_2->SetBinError(20,1.061777);
   hext_stack_2->SetBinError(21,1.116937);
   hext_stack_2->SetBinError(22,1.178414);
   hext_stack_2->SetBinError(23,0.9989624);
   hext_stack_2->SetBinError(24,1.541856);
   hext_stack_2->SetBinError(25,1.040301);
   hext_stack_2->SetBinError(26,0.8315593);
   hext_stack_2->SetBinError(27,1.409463);
   hext_stack_2->SetBinError(28,1.461836);
   hext_stack_2->SetBinError(29,1.442273);
   hext_stack_2->SetBinError(30,0.9336798);
   hext_stack_2->SetBinError(31,0.4065989);
   hext_stack_2->SetEntries(327);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,1.073721);
   hdirt_stack_3->SetBinContent(2,0.9443433);
   hdirt_stack_3->SetBinContent(3,0.7947583);
   hdirt_stack_3->SetBinContent(4,1.538899);
   hdirt_stack_3->SetBinContent(5,0.7430996);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(9,0.3896828);
   hdirt_stack_3->SetBinContent(10,0.8416576);
   hdirt_stack_3->SetBinContent(13,0.4794168);
   hdirt_stack_3->SetBinContent(14,0.5388689);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(21,0.1601926);
   hdirt_stack_3->SetBinContent(22,0.2188956);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(26,0.2620342);
   hdirt_stack_3->SetBinContent(27,0.2188956);
   hdirt_stack_3->SetBinContent(28,0.5655948);
   hdirt_stack_3->SetBinError(1,0.5664074);
   hdirt_stack_3->SetBinError(2,0.4286647);
   hdirt_stack_3->SetBinError(3,0.4034967);
   hdirt_stack_3->SetBinError(4,0.7106128);
   hdirt_stack_3->SetBinError(5,0.5275648);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(9,0.2870053);
   hdirt_stack_3->SetBinError(10,0.5060234);
   hdirt_stack_3->SetBinError(13,0.3402743);
   hdirt_stack_3->SetBinError(14,0.4239131);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(21,0.1601926);
   hdirt_stack_3->SetBinError(22,0.2188956);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(26,0.2620342);
   hdirt_stack_3->SetBinError(27,0.2188956);
   hdirt_stack_3->SetBinError(28,0.3393703);
   hdirt_stack_3->SetEntries(44);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(1,11.74767);
   houtFV_stack_4->SetBinContent(2,6.627143);
   houtFV_stack_4->SetBinContent(3,3.902796);
   houtFV_stack_4->SetBinContent(4,3.321102);
   houtFV_stack_4->SetBinContent(5,3.793406);
   houtFV_stack_4->SetBinContent(6,3.817658);
   houtFV_stack_4->SetBinContent(7,4.429672);
   houtFV_stack_4->SetBinContent(8,5.415316);
   houtFV_stack_4->SetBinContent(9,3.328268);
   houtFV_stack_4->SetBinContent(10,3.997747);
   houtFV_stack_4->SetBinContent(11,5.116491);
   houtFV_stack_4->SetBinContent(12,4.014373);
   houtFV_stack_4->SetBinContent(13,3.951585);
   houtFV_stack_4->SetBinContent(14,3.622633);
   houtFV_stack_4->SetBinContent(15,3.030797);
   houtFV_stack_4->SetBinContent(16,5.676394);
   houtFV_stack_4->SetBinContent(17,3.663332);
   houtFV_stack_4->SetBinContent(18,4.409495);
   houtFV_stack_4->SetBinContent(19,5.206976);
   houtFV_stack_4->SetBinContent(20,4.327293);
   houtFV_stack_4->SetBinContent(21,4.432002);
   houtFV_stack_4->SetBinContent(22,4.880405);
   houtFV_stack_4->SetBinContent(23,4.553404);
   houtFV_stack_4->SetBinContent(24,5.852746);
   houtFV_stack_4->SetBinContent(25,4.009136);
   houtFV_stack_4->SetBinContent(26,2.826569);
   houtFV_stack_4->SetBinContent(27,5.252149);
   houtFV_stack_4->SetBinContent(28,2.589184);
   houtFV_stack_4->SetBinContent(29,3.024475);
   houtFV_stack_4->SetBinContent(30,3.963218);
   houtFV_stack_4->SetBinContent(31,0.1967154);
   houtFV_stack_4->SetBinError(1,1.770174);
   houtFV_stack_4->SetBinError(2,1.305187);
   houtFV_stack_4->SetBinError(3,0.9797873);
   houtFV_stack_4->SetBinError(4,0.9204367);
   houtFV_stack_4->SetBinError(5,1.047083);
   houtFV_stack_4->SetBinError(6,0.9201191);
   houtFV_stack_4->SetBinError(7,1.003132);
   houtFV_stack_4->SetBinError(8,1.168551);
   houtFV_stack_4->SetBinError(9,0.8444803);
   houtFV_stack_4->SetBinError(10,1.000467);
   houtFV_stack_4->SetBinError(11,1.098272);
   houtFV_stack_4->SetBinError(12,0.9409124);
   houtFV_stack_4->SetBinError(13,1.057495);
   houtFV_stack_4->SetBinError(14,0.8992132);
   houtFV_stack_4->SetBinError(15,0.831764);
   houtFV_stack_4->SetBinError(16,1.222939);
   houtFV_stack_4->SetBinError(17,0.9089847);
   houtFV_stack_4->SetBinError(18,0.9815153);
   houtFV_stack_4->SetBinError(19,1.198813);
   houtFV_stack_4->SetBinError(20,1.09942);
   houtFV_stack_4->SetBinError(21,1.082485);
   houtFV_stack_4->SetBinError(22,1.136495);
   houtFV_stack_4->SetBinError(23,1.01508);
   houtFV_stack_4->SetBinError(24,1.183592);
   houtFV_stack_4->SetBinError(25,0.9627875);
   houtFV_stack_4->SetBinError(26,0.8964904);
   houtFV_stack_4->SetBinError(27,1.199455);
   houtFV_stack_4->SetBinError(28,0.809167);
   houtFV_stack_4->SetBinError(29,0.8730148);
   houtFV_stack_4->SetBinError(30,1.067326);
   houtFV_stack_4->SetBinError(31,0.1967154);
   houtFV_stack_4->SetEntries(584);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.1404279);
   hNCpi0inFVcoh_stack_5->SetEntries(26);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6692721);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9348222);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4321178);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3626998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.6277541);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.8096042);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.4314539);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(26,1.005072);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.501704);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3125578);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3620771);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1371558);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1005948);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2996304);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3476357);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1797343);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.3988212);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.2454852);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(268);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(1,19.14329);
   hNCpi0inFVres_stack_7->SetBinContent(2,30.43902);
   hNCpi0inFVres_stack_7->SetBinContent(3,30.44219);
   hNCpi0inFVres_stack_7->SetBinContent(4,26.52952);
   hNCpi0inFVres_stack_7->SetBinContent(5,34.86782);
   hNCpi0inFVres_stack_7->SetBinContent(6,34.77084);
   hNCpi0inFVres_stack_7->SetBinContent(7,35.96025);
   hNCpi0inFVres_stack_7->SetBinContent(8,35.24068);
   hNCpi0inFVres_stack_7->SetBinContent(9,36.47342);
   hNCpi0inFVres_stack_7->SetBinContent(10,38.2356);
   hNCpi0inFVres_stack_7->SetBinContent(11,39.84732);
   hNCpi0inFVres_stack_7->SetBinContent(12,36.80125);
   hNCpi0inFVres_stack_7->SetBinContent(13,38.58056);
   hNCpi0inFVres_stack_7->SetBinContent(14,45.0416);
   hNCpi0inFVres_stack_7->SetBinContent(15,37.81145);
   hNCpi0inFVres_stack_7->SetBinContent(16,42.1197);
   hNCpi0inFVres_stack_7->SetBinContent(17,40.81073);
   hNCpi0inFVres_stack_7->SetBinContent(18,39.92673);
   hNCpi0inFVres_stack_7->SetBinContent(19,39.55838);
   hNCpi0inFVres_stack_7->SetBinContent(20,35.58461);
   hNCpi0inFVres_stack_7->SetBinContent(21,25.40521);
   hNCpi0inFVres_stack_7->SetBinContent(22,33.0648);
   hNCpi0inFVres_stack_7->SetBinContent(23,36.42504);
   hNCpi0inFVres_stack_7->SetBinContent(24,33.92902);
   hNCpi0inFVres_stack_7->SetBinContent(25,39.40309);
   hNCpi0inFVres_stack_7->SetBinContent(26,37.45872);
   hNCpi0inFVres_stack_7->SetBinContent(27,41.01135);
   hNCpi0inFVres_stack_7->SetBinContent(28,41.36427);
   hNCpi0inFVres_stack_7->SetBinContent(29,36.76374);
   hNCpi0inFVres_stack_7->SetBinContent(30,18.21379);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1952999);
   hNCpi0inFVres_stack_7->SetBinError(1,1.390144);
   hNCpi0inFVres_stack_7->SetBinError(2,1.796842);
   hNCpi0inFVres_stack_7->SetBinError(3,1.848642);
   hNCpi0inFVres_stack_7->SetBinError(4,1.692724);
   hNCpi0inFVres_stack_7->SetBinError(5,1.909282);
   hNCpi0inFVres_stack_7->SetBinError(6,1.885968);
   hNCpi0inFVres_stack_7->SetBinError(7,1.950591);
   hNCpi0inFVres_stack_7->SetBinError(8,1.979755);
   hNCpi0inFVres_stack_7->SetBinError(9,1.969752);
   hNCpi0inFVres_stack_7->SetBinError(10,1.986525);
   hNCpi0inFVres_stack_7->SetBinError(11,2.003644);
   hNCpi0inFVres_stack_7->SetBinError(12,1.972747);
   hNCpi0inFVres_stack_7->SetBinError(13,2.007819);
   hNCpi0inFVres_stack_7->SetBinError(14,2.260394);
   hNCpi0inFVres_stack_7->SetBinError(15,1.99425);
   hNCpi0inFVres_stack_7->SetBinError(16,2.105606);
   hNCpi0inFVres_stack_7->SetBinError(17,2.102863);
   hNCpi0inFVres_stack_7->SetBinError(18,2.062638);
   hNCpi0inFVres_stack_7->SetBinError(19,2.070454);
   hNCpi0inFVres_stack_7->SetBinError(20,1.979542);
   hNCpi0inFVres_stack_7->SetBinError(21,1.648969);
   hNCpi0inFVres_stack_7->SetBinError(22,1.906614);
   hNCpi0inFVres_stack_7->SetBinError(23,1.953341);
   hNCpi0inFVres_stack_7->SetBinError(24,1.878369);
   hNCpi0inFVres_stack_7->SetBinError(25,2.034439);
   hNCpi0inFVres_stack_7->SetBinError(26,1.977132);
   hNCpi0inFVres_stack_7->SetBinError(27,2.146764);
   hNCpi0inFVres_stack_7->SetBinError(28,2.187903);
   hNCpi0inFVres_stack_7->SetBinError(29,2.058263);
   hNCpi0inFVres_stack_7->SetBinError(30,1.408019);
   hNCpi0inFVres_stack_7->SetBinError(31,0.07381642);
   hNCpi0inFVres_stack_7->SetEntries(19586);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.836349);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.8014);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.759714);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.269964);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.919152);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.635744);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.38838);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.03905);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.012389);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.101666);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.193239);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.770602);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.81809);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.043361);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.788357);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.235758);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.613739);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.404326);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.576359);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.455222);
   hNCpi0inFVdis_stack_8->SetBinContent(21,5.087281);
   hNCpi0inFVdis_stack_8->SetBinContent(22,6.067119);
   hNCpi0inFVdis_stack_8->SetBinContent(23,6.76129);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.648946);
   hNCpi0inFVdis_stack_8->SetBinContent(25,6.790686);
   hNCpi0inFVdis_stack_8->SetBinContent(26,8.158298);
   hNCpi0inFVdis_stack_8->SetBinContent(27,5.466095);
   hNCpi0inFVdis_stack_8->SetBinContent(28,6.384972);
   hNCpi0inFVdis_stack_8->SetBinContent(29,6.356904);
   hNCpi0inFVdis_stack_8->SetBinContent(30,3.625856);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7154114);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8177599);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7925014);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7323924);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9624914);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8637445);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8834955);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8374726);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8272236);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9715808);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8144605);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9879999);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8549123);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8602822);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8116682);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8504616);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8826507);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.9015206);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6683445);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.8294557);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6971802);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8572617);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8229782);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8026276);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.8269492);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.9822384);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.7490752);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.8124274);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.7915181);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.6708161);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.04832419);
   hNCpi0inFVdis_stack_8->SetEntries(3632);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(25);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,9.76903);
   hCCpi0inFV_stack_10->SetBinContent(2,12.45552);
   hCCpi0inFV_stack_10->SetBinContent(3,8.832886);
   hCCpi0inFV_stack_10->SetBinContent(4,12.09015);
   hCCpi0inFV_stack_10->SetBinContent(5,14.25987);
   hCCpi0inFV_stack_10->SetBinContent(6,11.45345);
   hCCpi0inFV_stack_10->SetBinContent(7,11.38626);
   hCCpi0inFV_stack_10->SetBinContent(8,13.96984);
   hCCpi0inFV_stack_10->SetBinContent(9,11.80436);
   hCCpi0inFV_stack_10->SetBinContent(10,18.07254);
   hCCpi0inFV_stack_10->SetBinContent(11,13.58334);
   hCCpi0inFV_stack_10->SetBinContent(12,11.27874);
   hCCpi0inFV_stack_10->SetBinContent(13,13.19082);
   hCCpi0inFV_stack_10->SetBinContent(14,13.07117);
   hCCpi0inFV_stack_10->SetBinContent(15,14.35239);
   hCCpi0inFV_stack_10->SetBinContent(16,12.84726);
   hCCpi0inFV_stack_10->SetBinContent(17,11.91766);
   hCCpi0inFV_stack_10->SetBinContent(18,12.3709);
   hCCpi0inFV_stack_10->SetBinContent(19,10.64028);
   hCCpi0inFV_stack_10->SetBinContent(20,11.53027);
   hCCpi0inFV_stack_10->SetBinContent(21,12.51616);
   hCCpi0inFV_stack_10->SetBinContent(22,13.78331);
   hCCpi0inFV_stack_10->SetBinContent(23,10.63074);
   hCCpi0inFV_stack_10->SetBinContent(24,12.25668);
   hCCpi0inFV_stack_10->SetBinContent(25,11.42349);
   hCCpi0inFV_stack_10->SetBinContent(26,13.20164);
   hCCpi0inFV_stack_10->SetBinContent(27,9.039744);
   hCCpi0inFV_stack_10->SetBinContent(28,12.74413);
   hCCpi0inFV_stack_10->SetBinContent(29,11.04832);
   hCCpi0inFV_stack_10->SetBinContent(30,11.14139);
   hCCpi0inFV_stack_10->SetBinContent(31,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(1,1.537719);
   hCCpi0inFV_stack_10->SetBinError(2,1.754526);
   hCCpi0inFV_stack_10->SetBinError(3,1.506578);
   hCCpi0inFV_stack_10->SetBinError(4,1.748894);
   hCCpi0inFV_stack_10->SetBinError(5,1.92985);
   hCCpi0inFV_stack_10->SetBinError(6,1.673354);
   hCCpi0inFV_stack_10->SetBinError(7,1.683153);
   hCCpi0inFV_stack_10->SetBinError(8,1.903219);
   hCCpi0inFV_stack_10->SetBinError(9,1.735758);
   hCCpi0inFV_stack_10->SetBinError(10,2.137457);
   hCCpi0inFV_stack_10->SetBinError(11,1.899873);
   hCCpi0inFV_stack_10->SetBinError(12,1.688466);
   hCCpi0inFV_stack_10->SetBinError(13,1.808906);
   hCCpi0inFV_stack_10->SetBinError(14,1.780476);
   hCCpi0inFV_stack_10->SetBinError(15,1.865947);
   hCCpi0inFV_stack_10->SetBinError(16,1.776258);
   hCCpi0inFV_stack_10->SetBinError(17,1.784299);
   hCCpi0inFV_stack_10->SetBinError(18,1.724219);
   hCCpi0inFV_stack_10->SetBinError(19,1.664851);
   hCCpi0inFV_stack_10->SetBinError(20,1.687761);
   hCCpi0inFV_stack_10->SetBinError(21,1.823846);
   hCCpi0inFV_stack_10->SetBinError(22,1.879031);
   hCCpi0inFV_stack_10->SetBinError(23,1.722319);
   hCCpi0inFV_stack_10->SetBinError(24,1.760452);
   hCCpi0inFV_stack_10->SetBinError(25,1.688088);
   hCCpi0inFV_stack_10->SetBinError(26,1.852249);
   hCCpi0inFV_stack_10->SetBinError(27,1.520674);
   hCCpi0inFV_stack_10->SetBinError(28,1.798075);
   hCCpi0inFV_stack_10->SetBinError(29,1.629863);
   hCCpi0inFV_stack_10->SetBinError(30,1.707014);
   hCCpi0inFV_stack_10->SetBinError(31,0.2770047);
   hCCpi0inFV_stack_10->SetEntries(1562);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(1,5.557193);
   hNCinFV_stack_11->SetBinContent(2,6.980691);
   hNCinFV_stack_11->SetBinContent(3,6.490898);
   hNCinFV_stack_11->SetBinContent(4,5.034906);
   hNCinFV_stack_11->SetBinContent(5,5.472055);
   hNCinFV_stack_11->SetBinContent(6,7.578682);
   hNCinFV_stack_11->SetBinContent(7,6.890482);
   hNCinFV_stack_11->SetBinContent(8,6.110383);
   hNCinFV_stack_11->SetBinContent(9,6.155183);
   hNCinFV_stack_11->SetBinContent(10,6.980691);
   hNCinFV_stack_11->SetBinContent(11,7.129225);
   hNCinFV_stack_11->SetBinContent(12,4.106273);
   hNCinFV_stack_11->SetBinContent(13,5.075243);
   hNCinFV_stack_11->SetBinContent(14,10.42013);
   hNCinFV_stack_11->SetBinContent(15,5.911977);
   hNCinFV_stack_11->SetBinContent(16,7.815735);
   hNCinFV_stack_11->SetBinContent(17,7.92055);
   hNCinFV_stack_11->SetBinContent(18,6.697148);
   hNCinFV_stack_11->SetBinContent(19,8.49609);
   hNCinFV_stack_11->SetBinContent(20,7.088888);
   hNCinFV_stack_11->SetBinContent(21,6.000495);
   hNCinFV_stack_11->SetBinContent(22,9.955462);
   hNCinFV_stack_11->SetBinContent(23,6.937581);
   hNCinFV_stack_11->SetBinContent(24,7.423994);
   hNCinFV_stack_11->SetBinContent(25,7.079353);
   hNCinFV_stack_11->SetBinContent(26,5.476519);
   hNCinFV_stack_11->SetBinContent(27,7.625781);
   hNCinFV_stack_11->SetBinContent(28,5.671544);
   hNCinFV_stack_11->SetBinContent(29,4.831429);
   hNCinFV_stack_11->SetBinContent(30,4.443069);
   hNCinFV_stack_11->SetBinError(1,1.256807);
   hNCinFV_stack_11->SetBinError(2,1.345164);
   hNCinFV_stack_11->SetBinError(3,1.346365);
   hNCinFV_stack_11->SetBinError(4,1.11017);
   hNCinFV_stack_11->SetBinError(5,1.210867);
   hNCinFV_stack_11->SetBinError(6,1.315386);
   hNCinFV_stack_11->SetBinError(7,1.301582);
   hNCinFV_stack_11->SetBinError(8,1.241763);
   hNCinFV_stack_11->SetBinError(9,1.224883);
   hNCinFV_stack_11->SetBinError(10,1.345164);
   hNCinFV_stack_11->SetBinError(11,1.374218);
   hNCinFV_stack_11->SetBinError(12,1.000664);
   hNCinFV_stack_11->SetBinError(13,1.177914);
   hNCinFV_stack_11->SetBinError(14,1.607685);
   hNCinFV_stack_11->SetBinError(15,1.225813);
   hNCinFV_stack_11->SetBinError(16,1.387062);
   hNCinFV_stack_11->SetBinError(17,1.358905);
   hNCinFV_stack_11->SetBinError(18,1.287145);
   hNCinFV_stack_11->SetBinError(19,1.468122);
   hNCinFV_stack_11->SetBinError(20,1.316615);
   hNCinFV_stack_11->SetBinError(21,1.271733);
   hNCinFV_stack_11->SetBinError(22,1.654366);
   hNCinFV_stack_11->SetBinError(23,1.360796);
   hNCinFV_stack_11->SetBinError(24,1.35912);
   hNCinFV_stack_11->SetBinError(25,1.38857);
   hNCinFV_stack_11->SetBinError(26,1.126747);
   hNCinFV_stack_11->SetBinError(27,1.374006);
   hNCinFV_stack_11->SetBinError(28,1.143501);
   hNCinFV_stack_11->SetBinError(29,1.09139);
   hNCinFV_stack_11->SetBinError(30,1.056279);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,6.746764);
   hnumuCCinFV_stack_12->SetBinContent(2,10.70383);
   hnumuCCinFV_stack_12->SetBinContent(3,12.70457);
   hnumuCCinFV_stack_12->SetBinContent(4,16.37795);
   hnumuCCinFV_stack_12->SetBinContent(5,6.577934);
   hnumuCCinFV_stack_12->SetBinContent(6,10.6252);
   hnumuCCinFV_stack_12->SetBinContent(7,9.712511);
   hnumuCCinFV_stack_12->SetBinContent(8,13.80643);
   hnumuCCinFV_stack_12->SetBinContent(9,11.79984);
   hnumuCCinFV_stack_12->SetBinContent(10,11.60906);
   hnumuCCinFV_stack_12->SetBinContent(11,11.87521);
   hnumuCCinFV_stack_12->SetBinContent(12,7.639789);
   hnumuCCinFV_stack_12->SetBinContent(13,12.20655);
   hnumuCCinFV_stack_12->SetBinContent(14,10.62684);
   hnumuCCinFV_stack_12->SetBinContent(15,11.31048);
   hnumuCCinFV_stack_12->SetBinContent(16,10.78439);
   hnumuCCinFV_stack_12->SetBinContent(17,11.80537);
   hnumuCCinFV_stack_12->SetBinContent(18,9.597393);
   hnumuCCinFV_stack_12->SetBinContent(19,8.198468);
   hnumuCCinFV_stack_12->SetBinContent(20,11.94409);
   hnumuCCinFV_stack_12->SetBinContent(21,9.756798);
   hnumuCCinFV_stack_12->SetBinContent(22,11.52641);
   hnumuCCinFV_stack_12->SetBinContent(23,11.27086);
   hnumuCCinFV_stack_12->SetBinContent(24,9.297805);
   hnumuCCinFV_stack_12->SetBinContent(25,9.601579);
   hnumuCCinFV_stack_12->SetBinContent(26,8.85863);
   hnumuCCinFV_stack_12->SetBinContent(27,8.890087);
   hnumuCCinFV_stack_12->SetBinContent(28,6.608807);
   hnumuCCinFV_stack_12->SetBinContent(29,8.960019);
   hnumuCCinFV_stack_12->SetBinContent(30,6.193631);
   hnumuCCinFV_stack_12->SetBinContent(31,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(1,1.638427);
   hnumuCCinFV_stack_12->SetBinError(2,2.37879);
   hnumuCCinFV_stack_12->SetBinError(3,2.080777);
   hnumuCCinFV_stack_12->SetBinError(4,2.284201);
   hnumuCCinFV_stack_12->SetBinError(5,1.314555);
   hnumuCCinFV_stack_12->SetBinError(6,1.982236);
   hnumuCCinFV_stack_12->SetBinError(7,1.652594);
   hnumuCCinFV_stack_12->SetBinError(8,2.167255);
   hnumuCCinFV_stack_12->SetBinError(9,2.242442);
   hnumuCCinFV_stack_12->SetBinError(10,1.898165);
   hnumuCCinFV_stack_12->SetBinError(11,1.812124);
   hnumuCCinFV_stack_12->SetBinError(12,1.398659);
   hnumuCCinFV_stack_12->SetBinError(13,1.940563);
   hnumuCCinFV_stack_12->SetBinError(14,2.861282);
   hnumuCCinFV_stack_12->SetBinError(15,1.824378);
   hnumuCCinFV_stack_12->SetBinError(16,1.831869);
   hnumuCCinFV_stack_12->SetBinError(17,2.339442);
   hnumuCCinFV_stack_12->SetBinError(18,1.842117);
   hnumuCCinFV_stack_12->SetBinError(19,1.534025);
   hnumuCCinFV_stack_12->SetBinError(20,2.381268);
   hnumuCCinFV_stack_12->SetBinError(21,1.585769);
   hnumuCCinFV_stack_12->SetBinError(22,1.820735);
   hnumuCCinFV_stack_12->SetBinError(23,1.731407);
   hnumuCCinFV_stack_12->SetBinError(24,1.570487);
   hnumuCCinFV_stack_12->SetBinError(25,1.916964);
   hnumuCCinFV_stack_12->SetBinError(26,1.676598);
   hnumuCCinFV_stack_12->SetBinError(27,1.587267);
   hnumuCCinFV_stack_12->SetBinError(28,1.22327);
   hnumuCCinFV_stack_12->SetBinError(29,1.876288);
   hnumuCCinFV_stack_12->SetBinError(30,1.256089);
   hnumuCCinFV_stack_12->SetBinError(31,0.2770047);
   hnumuCCinFV_stack_12->SetEntries(1201);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(6,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(7,0.536893);
   hnueCCinFV_stack_13->SetBinContent(8,0.3893379);
   hnueCCinFV_stack_13->SetBinContent(10,0.450108);
   hnueCCinFV_stack_13->SetBinContent(11,0.5878536);
   hnueCCinFV_stack_13->SetBinContent(12,0.6603724);
   hnueCCinFV_stack_13->SetBinContent(13,0.9847494);
   hnueCCinFV_stack_13->SetBinContent(14,0.4523934);
   hnueCCinFV_stack_13->SetBinContent(15,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(16,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.4296511);
   hnueCCinFV_stack_13->SetBinContent(18,0.3688623);
   hnueCCinFV_stack_13->SetBinContent(19,0.3866963);
   hnueCCinFV_stack_13->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(21,0.56212);
   hnueCCinFV_stack_13->SetBinContent(22,0.8098784);
   hnueCCinFV_stack_13->SetBinContent(23,0.536893);
   hnueCCinFV_stack_13->SetBinContent(24,1.192519);
   hnueCCinFV_stack_13->SetBinContent(25,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(26,0.4047599);
   hnueCCinFV_stack_13->SetBinContent(27,0.453084);
   hnueCCinFV_stack_13->SetBinContent(29,2.161028);
   hnueCCinFV_stack_13->SetBinError(1,0.2504446);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.2770047);
   hnueCCinFV_stack_13->SetBinError(6,0.2486649);
   hnueCCinFV_stack_13->SetBinError(7,0.3929602);
   hnueCCinFV_stack_13->SetBinError(8,0.3893379);
   hnueCCinFV_stack_13->SetBinError(10,0.3197876);
   hnueCCinFV_stack_13->SetBinError(11,0.42079);
   hnueCCinFV_stack_13->SetBinError(12,0.4669156);
   hnueCCinFV_stack_13->SetBinError(13,0.6555434);
   hnueCCinFV_stack_13->SetBinError(14,0.320043);
   hnueCCinFV_stack_13->SetBinError(15,0.2770047);
   hnueCCinFV_stack_13->SetBinError(16,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.305097);
   hnueCCinFV_stack_13->SetBinError(18,0.3688623);
   hnueCCinFV_stack_13->SetBinError(19,0.3866963);
   hnueCCinFV_stack_13->SetBinError(20,0.3401776);
   hnueCCinFV_stack_13->SetBinError(21,0.4149909);
   hnueCCinFV_stack_13->SetBinError(22,0.4957316);
   hnueCCinFV_stack_13->SetBinError(23,0.3929602);
   hnueCCinFV_stack_13->SetBinError(24,0.546847);
   hnueCCinFV_stack_13->SetBinError(25,0.4379386);
   hnueCCinFV_stack_13->SetBinError(26,0.2863205);
   hnueCCinFV_stack_13->SetBinError(27,0.3230114);
   hnueCCinFV_stack_13->SetBinError(29,1.625644);
   hnueCCinFV_stack_13->SetEntries(52);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__14->SetBinContent(1,61.61135);
   hmcerror__14->SetBinContent(2,82.23372);
   hmcerror__14->SetBinContent(3,75.15104);
   hmcerror__14->SetBinContent(4,81.24297);
   hmcerror__14->SetBinContent(5,85.12049);
   hmcerror__14->SetBinContent(6,81.095);
   hmcerror__14->SetBinContent(7,85.98743);
   hmcerror__14->SetBinContent(8,89.24143);
   hmcerror__14->SetBinContent(9,85.46393);
   hmcerror__14->SetBinContent(10,95.9959);
   hmcerror__14->SetBinContent(11,93.42819);
   hmcerror__14->SetBinContent(12,78.75108);
   hmcerror__14->SetBinContent(13,87.68799);
   hmcerror__14->SetBinContent(14,99.34761);
   hmcerror__14->SetBinContent(15,85.11166);
   hmcerror__14->SetBinContent(16,93.45908);
   hmcerror__14->SetBinContent(17,91.62093);
   hmcerror__14->SetBinContent(18,88.83683);
   hmcerror__14->SetBinContent(19,86.08455);
   hmcerror__14->SetBinContent(20,84.08619);
   hmcerror__14->SetBinContent(21,70.33434);
   hmcerror__14->SetBinContent(22,86.64543);
   hmcerror__14->SetBinContent(23,81.58743);
   hmcerror__14->SetBinContent(24,82.58141);
   hmcerror__14->SetBinContent(25,83.76602);
   hmcerror__14->SetBinContent(26,81.32652);
   hmcerror__14->SetBinContent(27,83.92625);
   hmcerror__14->SetBinContent(28,82.05357);
   hmcerror__14->SetBinContent(29,79.43985);
   hmcerror__14->SetBinContent(30,51.96322);
   hmcerror__14->SetBinContent(31,1.860819);
   hmcerror__14->SetBinError(1,24.13748);
   hmcerror__14->SetBinError(2,23.51908);
   hmcerror__14->SetBinError(3,22.95955);
   hmcerror__14->SetBinError(4,24.54871);
   hmcerror__14->SetBinError(5,23.95347);
   hmcerror__14->SetBinError(6,26.13888);
   hmcerror__14->SetBinError(7,24.70078);
   hmcerror__14->SetBinError(8,30.89088);
   hmcerror__14->SetBinError(9,24.80729);
   hmcerror__14->SetBinError(10,26.02002);
   hmcerror__14->SetBinError(11,27.44096);
   hmcerror__14->SetBinError(12,21.7002);
   hmcerror__14->SetBinError(13,27.83601);
   hmcerror__14->SetBinError(14,36.27683);
   hmcerror__14->SetBinError(15,25.07908);
   hmcerror__14->SetBinError(16,29.73746);
   hmcerror__14->SetBinError(17,26.84832);
   hmcerror__14->SetBinError(18,26.0489);
   hmcerror__14->SetBinError(19,24.1582);
   hmcerror__14->SetBinError(20,24.75854);
   hmcerror__14->SetBinError(21,20.28521);
   hmcerror__14->SetBinError(22,28.78995);
   hmcerror__14->SetBinError(23,26.00055);
   hmcerror__14->SetBinError(24,30.21033);
   hmcerror__14->SetBinError(25,26.69442);
   hmcerror__14->SetBinError(26,23.82944);
   hmcerror__14->SetBinError(27,24.34828);
   hmcerror__14->SetBinError(28,23.5954);
   hmcerror__14->SetBinError(29,23.08764);
   hmcerror__14->SetBinError(30,16.37675);
   hmcerror__14->SetBinError(31,1.80065);
   hmcerror__14->SetBinError(32,0.3895343);
   hmcerror__14->SetBinError(33,0.3895343);
   hmcerror__14->SetEntries(2462.59);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[32] = {
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
   Double_t _fy3017[32] = {
   47,
   57,
   60,
   47,
   57,
   70,
   65,
   72,
   76,
   60,
   67,
   56,
   64,
   67,
   57,
   62,
   66,
   67,
   59,
   53,
   69,
   61,
   75,
   48,
   71,
   63,
   70,
   68,
   61,
   33,
   1,
   0};
   Double_t _felx3017[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3017[32] = {
   6.9882,
   7.679,
   7.8743,
   6.9882,
   7.679,
   8.4925,
   8.1893,
   8.6108,
   8.8425,
   7.8743,
   8.3119,
   7.6127,
   8.1273,
   8.3119,
   7.679,
   8.0018,
   8.2509,
   8.3119,
   7.8097,
   7.4105,
   8.4327,
   7.9383,
   8.7852,
   7.0604,
   8.5518,
   8.0648,
   8.4925,
   8.3726,
   7.9383,
   5.8847,
   1,
   0};
   Double_t _fehx3017[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3017[32] = {
   6.7839,
   7.4757,
   7.6713,
   6.7839,
   7.4757,
   8.2902,
   7.9866,
   8.4085,
   8.6406,
   7.6713,
   8.1094,
   7.4094,
   7.9246,
   8.1094,
   7.4757,
   7.7989,
   8.0483,
   8.1094,
   7.6066,
   7.2068,
   8.2304,
   7.7354,
   8.5831,
   6.8561,
   8.3496,
   7.862,
   8.2902,
   8.1701,
   7.7354,
   5.6776,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1210);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(93.10466);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.6/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1849.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 58.1","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 131.0","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 9.5","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 135.0","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.4","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.1","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1061.4","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  197.1","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.3","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 367.1","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 199.4","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 308.0","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 14.7","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
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
   
   Double_t _fx3018[32] = {
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
   Double_t _fy3018[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3018[32] = {
   0.39177,
   0.2860029,
   0.3055121,
   0.3021642,
   0.2814066,
   0.3223241,
   0.2872604,
   0.3461495,
   0.2902662,
   0.2710534,
   0.2937118,
   0.2755544,
   0.3174438,
   0.3651505,
   0.294661,
   0.3181869,
   0.293037,
   0.2932219,
   0.2806334,
   0.2944424,
   0.2884111,
   0.3322731,
   0.3186833,
   0.3658248,
   0.3186784,
   0.2930095,
   0.2901152,
   0.2875609,
   0.2906305,
   0.3151605,
   0.9676652,
   0};
   Double_t _fehx3018[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3018[32] = {
   0.39177,
   0.2860029,
   0.3055121,
   0.3021642,
   0.2814066,
   0.3223241,
   0.2872604,
   0.3461495,
   0.2902662,
   0.2710534,
   0.2937118,
   0.2755544,
   0.3174438,
   0.3651505,
   0.294661,
   0.3181869,
   0.293037,
   0.2932219,
   0.2806334,
   0.2944424,
   0.2884111,
   0.3322731,
   0.3186833,
   0.3658248,
   0.3186784,
   0.2930095,
   0.2901152,
   0.2875609,
   0.2906305,
   0.3151605,
   0.9676652,
   0};
   grae = new TGraphAsymmErrors(32,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,1210);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[32] = {
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
   Double_t _fy3019[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3019[32] = {
   0.2336283,
   0.2228311,
   0.2302292,
   0.2120608,
   0.2208057,
   0.2511977,
   0.2271809,
   0.2413122,
   0.2185186,
   0.2195106,
   0.2296567,
   0.2250181,
   0.2421149,
   0.2324752,
   0.2355507,
   0.2419191,
   0.2409301,
   0.237517,
   0.2382682,
   0.2279348,
   0.2141678,
   0.2235041,
   0.2321757,
   0.236246,
   0.2412292,
   0.232587,
   0.2299857,
   0.2429457,
   0.2288202,
   0.2247076,
   0.463902,
   0};
   Double_t _fehx3019[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3019[32] = {
   0.2336283,
   0.2228311,
   0.2302292,
   0.2120608,
   0.2208057,
   0.2511977,
   0.2271809,
   0.2413122,
   0.2185186,
   0.2195106,
   0.2296567,
   0.2250181,
   0.2421149,
   0.2324752,
   0.2355507,
   0.2419191,
   0.2409301,
   0.237517,
   0.2382682,
   0.2279348,
   0.2141678,
   0.2235041,
   0.2321757,
   0.236246,
   0.2412292,
   0.232587,
   0.2299857,
   0.2429457,
   0.2288202,
   0.2247076,
   0.463902,
   0};
   grae = new TGraphAsymmErrors(32,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,1210);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[32] = {
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
   Double_t _fy3020[32] = {
   0.7628464,
   0.6931463,
   0.7983922,
   0.5785116,
   0.669639,
   0.8631851,
   0.7559245,
   0.8068001,
   0.8892641,
   0.6250267,
   0.7171283,
   0.7111014,
   0.7298605,
   0.6743997,
   0.6697085,
   0.6633919,
   0.7203595,
   0.7541917,
   0.6853727,
   0.6303056,
   0.9810286,
   0.7040187,
   0.9192592,
   0.5812446,
   0.847599,
   0.7746551,
   0.8340656,
   0.8287269,
   0.7678766,
   0.6350646,
   0.5373977,
   10};
   Double_t _felx3020[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3020[32] = {
   0.1134239,
   0.09338019,
   0.1047797,
   0.08601606,
   0.0902133,
   0.1047229,
   0.09523834,
   0.09648881,
   0.1034647,
   0.08202746,
   0.08896565,
   0.09666789,
   0.0926843,
   0.08366482,
   0.09022266,
   0.08561822,
   0.09005475,
   0.09356367,
   0.09072127,
   0.08812981,
   0.1198945,
   0.09161822,
   0.1076783,
   0.08549624,
   0.1020915,
   0.09916569,
   0.10119,
   0.1020382,
   0.09992844,
   0.1132474,
   0.5373977,
   0};
   Double_t _fehx3020[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3020[32] = {
   0.110108,
   0.09090796,
   0.1020784,
   0.08350138,
   0.08782492,
   0.1022282,
   0.09288102,
   0.09422193,
   0.1011023,
   0.07991279,
   0.08679821,
   0.09408633,
   0.0903727,
   0.08162652,
   0.08783403,
   0.08344721,
   0.08784347,
   0.09128421,
   0.08836197,
   0.0857073,
   0.1170182,
   0.08927649,
   0.1052013,
   0.08302231,
   0.09967765,
   0.09667204,
   0.09877958,
   0.09957031,
   0.0973743,
   0.1092619,
   0.730705,
   0};
   grae = new TGraphAsymmErrors(32,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,1210);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(11);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
