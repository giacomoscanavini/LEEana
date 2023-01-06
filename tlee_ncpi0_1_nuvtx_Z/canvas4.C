#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 10:27:34 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-3.28,1241.026,362.6989);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__10->SetBinContent(0,1.835737);
   hmc__10->SetBinContent(1,103.1586);
   hmc__10->SetBinContent(2,126.192);
   hmc__10->SetBinContent(3,133.8513);
   hmc__10->SetBinContent(4,124.6597);
   hmc__10->SetBinContent(5,132.3044);
   hmc__10->SetBinContent(6,134.5056);
   hmc__10->SetBinContent(7,121.6539);
   hmc__10->SetBinContent(8,142.9411);
   hmc__10->SetBinContent(9,125.5697);
   hmc__10->SetBinContent(10,107.2199);
   hmc__10->SetBinContent(11,116.0438);
   hmc__10->SetBinContent(12,112.5943);
   hmc__10->SetBinContent(13,120.1699);
   hmc__10->SetBinContent(14,133.4127);
   hmc__10->SetBinContent(15,135.0845);
   hmc__10->SetBinContent(16,115.5502);
   hmc__10->SetBinContent(17,119.8498);
   hmc__10->SetBinContent(18,114.2015);
   hmc__10->SetBinContent(19,117.6785);
   hmc__10->SetBinContent(20,122.0139);
   hmc__10->SetBinContent(21,162.7522);
   hmc__10->SetBinContent(22,126.7302);
   hmc__10->SetBinContent(23,110.8908);
   hmc__10->SetBinContent(24,128.758);
   hmc__10->SetBinContent(25,121.187);
   hmc__10->SetBinContent(26,129.57);
   hmc__10->SetBinContent(27,126.9754);
   hmc__10->SetBinContent(28,123.1958);
   hmc__10->SetBinContent(29,124.7636);
   hmc__10->SetBinContent(30,111.3041);
   hmc__10->SetBinContent(31,2.84276);
   hmc__10->SetBinError(0,0.6629728);
   hmc__10->SetBinError(1,31.32943);
   hmc__10->SetBinError(2,35.9525);
   hmc__10->SetBinError(3,38.93722);
   hmc__10->SetBinError(4,31.63843);
   hmc__10->SetBinError(5,38.99276);
   hmc__10->SetBinError(6,35.29564);
   hmc__10->SetBinError(7,32.35097);
   hmc__10->SetBinError(8,41.49259);
   hmc__10->SetBinError(9,33.24959);
   hmc__10->SetBinError(10,29.63548);
   hmc__10->SetBinError(11,29.4932);
   hmc__10->SetBinError(12,32.52331);
   hmc__10->SetBinError(13,31.28949);
   hmc__10->SetBinError(14,33.28012);
   hmc__10->SetBinError(15,39.20919);
   hmc__10->SetBinError(16,35.29767);
   hmc__10->SetBinError(17,32.88102);
   hmc__10->SetBinError(18,30.06405);
   hmc__10->SetBinError(19,30.6525);
   hmc__10->SetBinError(20,32.48861);
   hmc__10->SetBinError(21,42.38787);
   hmc__10->SetBinError(22,29.64488);
   hmc__10->SetBinError(23,27.66702);
   hmc__10->SetBinError(24,34.36073);
   hmc__10->SetBinError(25,32.76387);
   hmc__10->SetBinError(26,37.05467);
   hmc__10->SetBinError(27,33.34325);
   hmc__10->SetBinError(28,30.84055);
   hmc__10->SetBinError(29,33.22248);
   hmc__10->SetBinError(30,29.96636);
   hmc__10->SetBinError(31,3.739316);
   hmc__10->SetBinError(32,0.3895343);
   hmc__10->SetBinError(33,0.3895343);
   hmc__10->SetMinimum(-3.28);
   hmc__10->SetMaximum(344.4);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",32,0,1100);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(170.8898);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,2.374456);
   hbadmatch_stack_1->SetBinContent(2,3.916881);
   hbadmatch_stack_1->SetBinContent(3,2.289195);
   hbadmatch_stack_1->SetBinContent(4,4.797313);
   hbadmatch_stack_1->SetBinContent(5,3.426401);
   hbadmatch_stack_1->SetBinContent(6,4.933739);
   hbadmatch_stack_1->SetBinContent(7,2.345349);
   hbadmatch_stack_1->SetBinContent(8,3.643638);
   hbadmatch_stack_1->SetBinContent(9,2.94291);
   hbadmatch_stack_1->SetBinContent(10,2.196802);
   hbadmatch_stack_1->SetBinContent(11,1.889409);
   hbadmatch_stack_1->SetBinContent(12,2.539422);
   hbadmatch_stack_1->SetBinContent(13,0.8551682);
   hbadmatch_stack_1->SetBinContent(14,6.05022);
   hbadmatch_stack_1->SetBinContent(15,3.835929);
   hbadmatch_stack_1->SetBinContent(16,3.534668);
   hbadmatch_stack_1->SetBinContent(17,2.178221);
   hbadmatch_stack_1->SetBinContent(18,1.698766);
   hbadmatch_stack_1->SetBinContent(19,1.789545);
   hbadmatch_stack_1->SetBinContent(20,2.767484);
   hbadmatch_stack_1->SetBinContent(21,7.652678);
   hbadmatch_stack_1->SetBinContent(22,4.159001);
   hbadmatch_stack_1->SetBinContent(23,1.949468);
   hbadmatch_stack_1->SetBinContent(24,4.299392);
   hbadmatch_stack_1->SetBinContent(25,3.445286);
   hbadmatch_stack_1->SetBinContent(26,1.723839);
   hbadmatch_stack_1->SetBinContent(27,4.068928);
   hbadmatch_stack_1->SetBinContent(28,2.265792);
   hbadmatch_stack_1->SetBinContent(29,3.596604);
   hbadmatch_stack_1->SetBinContent(30,4.418781);
   hbadmatch_stack_1->SetBinError(1,0.7287527);
   hbadmatch_stack_1->SetBinError(2,1.048233);
   hbadmatch_stack_1->SetBinError(3,0.7704739);
   hbadmatch_stack_1->SetBinError(4,1.178032);
   hbadmatch_stack_1->SetBinError(5,1.007232);
   hbadmatch_stack_1->SetBinError(6,1.355596);
   hbadmatch_stack_1->SetBinError(7,0.78511);
   hbadmatch_stack_1->SetBinError(8,1.36968);
   hbadmatch_stack_1->SetBinError(9,0.8994826);
   hbadmatch_stack_1->SetBinError(10,0.7838664);
   hbadmatch_stack_1->SetBinError(11,0.6898293);
   hbadmatch_stack_1->SetBinError(12,0.9471412);
   hbadmatch_stack_1->SetBinError(13,0.4471424);
   hbadmatch_stack_1->SetBinError(14,1.931238);
   hbadmatch_stack_1->SetBinError(15,1.068291);
   hbadmatch_stack_1->SetBinError(16,1.030111);
   hbadmatch_stack_1->SetBinError(17,0.8418288);
   hbadmatch_stack_1->SetBinError(18,0.6663789);
   hbadmatch_stack_1->SetBinError(19,0.6540378);
   hbadmatch_stack_1->SetBinError(20,0.8752971);
   hbadmatch_stack_1->SetBinError(21,1.552757);
   hbadmatch_stack_1->SetBinError(22,1.012954);
   hbadmatch_stack_1->SetBinError(23,0.7740507);
   hbadmatch_stack_1->SetBinError(24,1.121125);
   hbadmatch_stack_1->SetBinError(25,1.086156);
   hbadmatch_stack_1->SetBinError(26,0.6081821);
   hbadmatch_stack_1->SetBinError(27,1.8595);
   hbadmatch_stack_1->SetBinError(28,0.9070728);
   hbadmatch_stack_1->SetBinError(29,1.046118);
   hbadmatch_stack_1->SetBinError(30,1.178035);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,11.17401);
   hext_stack_2->SetBinContent(2,13.66544);
   hext_stack_2->SetBinContent(3,21.9949);
   hext_stack_2->SetBinContent(4,18.35428);
   hext_stack_2->SetBinContent(5,19.85375);
   hext_stack_2->SetBinContent(6,20.98417);
   hext_stack_2->SetBinContent(7,13.42766);
   hext_stack_2->SetBinContent(8,26.25836);
   hext_stack_2->SetBinContent(9,15.1578);
   hext_stack_2->SetBinContent(10,11.68876);
   hext_stack_2->SetBinContent(11,18.60088);
   hext_stack_2->SetBinContent(12,12.62441);
   hext_stack_2->SetBinContent(13,14.81463);
   hext_stack_2->SetBinContent(14,20.3166);
   hext_stack_2->SetBinContent(15,14.0864);
   hext_stack_2->SetBinContent(16,13.38136);
   hext_stack_2->SetBinContent(17,9.399208);
   hext_stack_2->SetBinContent(18,14.07645);
   hext_stack_2->SetBinContent(19,19.32029);
   hext_stack_2->SetBinContent(20,16.9326);
   hext_stack_2->SetBinContent(21,33.94462);
   hext_stack_2->SetBinContent(22,21.54799);
   hext_stack_2->SetBinContent(23,14.48305);
   hext_stack_2->SetBinContent(24,13.43761);
   hext_stack_2->SetBinContent(25,9.477);
   hext_stack_2->SetBinContent(26,14.2927);
   hext_stack_2->SetBinContent(27,13.46797);
   hext_stack_2->SetBinContent(28,12.70384);
   hext_stack_2->SetBinContent(29,7.467185);
   hext_stack_2->SetBinContent(30,9.779857);
   hext_stack_2->SetBinContent(31,0.7309963);
   hext_stack_2->SetBinError(1,2.184759);
   hext_stack_2->SetBinError(2,2.481644);
   hext_stack_2->SetBinError(3,3.200924);
   hext_stack_2->SetBinError(4,2.913886);
   hext_stack_2->SetBinError(5,3.134916);
   hext_stack_2->SetBinError(6,3.234931);
   hext_stack_2->SetBinError(7,2.499707);
   hext_stack_2->SetBinError(8,3.560906);
   hext_stack_2->SetBinError(9,2.523155);
   hext_stack_2->SetBinError(10,2.128404);
   hext_stack_2->SetBinError(11,2.944656);
   hext_stack_2->SetBinError(12,2.319561);
   hext_stack_2->SetBinError(13,2.555065);
   hext_stack_2->SetBinError(14,3.2437);
   hext_stack_2->SetBinError(15,2.433408);
   hext_stack_2->SetBinError(16,2.276497);
   hext_stack_2->SetBinError(17,2.01513);
   hext_stack_2->SetBinError(18,2.541457);
   hext_stack_2->SetBinError(19,3.001272);
   hext_stack_2->SetBinError(20,2.660589);
   hext_stack_2->SetBinError(21,3.814955);
   hext_stack_2->SetBinError(22,3.309302);
   hext_stack_2->SetBinError(23,2.573776);
   hext_stack_2->SetBinError(24,2.389772);
   hext_stack_2->SetBinError(25,1.996425);
   hext_stack_2->SetBinError(26,2.640573);
   hext_stack_2->SetBinError(27,2.318976);
   hext_stack_2->SetBinError(28,2.403493);
   hext_stack_2->SetBinError(29,1.739811);
   hext_stack_2->SetBinError(30,2.166691);
   hext_stack_2->SetBinError(31,0.5201503);
   hext_stack_2->SetEntries(1136);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,7.90552);
   hdirt_stack_3->SetBinContent(2,6.05631);
   hdirt_stack_3->SetBinContent(3,5.304185);
   hdirt_stack_3->SetBinContent(4,1.525042);
   hdirt_stack_3->SetBinContent(5,1.64474);
   hdirt_stack_3->SetBinContent(6,2.370142);
   hdirt_stack_3->SetBinContent(7,1.715061);
   hdirt_stack_3->SetBinContent(8,2.628517);
   hdirt_stack_3->SetBinContent(9,2.565611);
   hdirt_stack_3->SetBinContent(10,1.556007);
   hdirt_stack_3->SetBinContent(11,1.370127);
   hdirt_stack_3->SetBinContent(12,1.231962);
   hdirt_stack_3->SetBinContent(13,2.146071);
   hdirt_stack_3->SetBinContent(14,0.7151096);
   hdirt_stack_3->SetBinContent(15,1.296605);
   hdirt_stack_3->SetBinContent(16,2.188922);
   hdirt_stack_3->SetBinContent(17,1.055121);
   hdirt_stack_3->SetBinContent(18,0.4797767);
   hdirt_stack_3->SetBinContent(19,0.982376);
   hdirt_stack_3->SetBinContent(20,0.6610426);
   hdirt_stack_3->SetBinContent(21,2.551899);
   hdirt_stack_3->SetBinContent(22,1.349713);
   hdirt_stack_3->SetBinContent(23,0.3569671);
   hdirt_stack_3->SetBinContent(24,0.5132258);
   hdirt_stack_3->SetBinContent(25,0.7098713);
   hdirt_stack_3->SetBinContent(26,2.678592);
   hdirt_stack_3->SetBinContent(27,0.9712972);
   hdirt_stack_3->SetBinContent(28,0.7759784);
   hdirt_stack_3->SetBinContent(29,1.171413);
   hdirt_stack_3->SetBinContent(30,0.5758626);
   hdirt_stack_3->SetBinError(1,1.484524);
   hdirt_stack_3->SetBinError(2,1.273644);
   hdirt_stack_3->SetBinError(3,1.41656);
   hdirt_stack_3->SetBinError(4,0.5579614);
   hdirt_stack_3->SetBinError(5,0.6966965);
   hdirt_stack_3->SetBinError(6,0.8254631);
   hdirt_stack_3->SetBinError(7,0.7288416);
   hdirt_stack_3->SetBinError(8,0.8770977);
   hdirt_stack_3->SetBinError(9,0.7944351);
   hdirt_stack_3->SetBinError(10,0.8306053);
   hdirt_stack_3->SetBinError(11,0.6152577);
   hdirt_stack_3->SetBinError(12,0.5942915);
   hdirt_stack_3->SetBinError(13,0.7823375);
   hdirt_stack_3->SetBinError(14,0.4327336);
   hdirt_stack_3->SetBinError(15,0.5513299);
   hdirt_stack_3->SetBinError(16,0.8257001);
   hdirt_stack_3->SetBinError(17,0.5758245);
   hdirt_stack_3->SetBinError(18,0.3404134);
   hdirt_stack_3->SetBinError(19,0.5099715);
   hdirt_stack_3->SetBinError(20,0.3370462);
   hdirt_stack_3->SetBinError(21,0.837552);
   hdirt_stack_3->SetBinError(22,0.5411461);
   hdirt_stack_3->SetBinError(23,0.258803);
   hdirt_stack_3->SetBinError(24,0.3997556);
   hdirt_stack_3->SetBinError(25,0.3617174);
   hdirt_stack_3->SetBinError(26,1.282199);
   hdirt_stack_3->SetBinError(27,0.4684838);
   hdirt_stack_3->SetBinError(28,0.458477);
   hdirt_stack_3->SetBinError(29,0.5610561);
   hdirt_stack_3->SetBinError(30,0.3389606);
   hdirt_stack_3->SetEntries(238);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(0,1.032573);
   houtFV_stack_4->SetBinContent(1,28.00947);
   houtFV_stack_4->SetBinContent(2,19.95956);
   houtFV_stack_4->SetBinContent(3,14.47789);
   houtFV_stack_4->SetBinContent(4,16.1668);
   houtFV_stack_4->SetBinContent(5,14.5433);
   houtFV_stack_4->SetBinContent(6,18.38156);
   houtFV_stack_4->SetBinContent(7,15.83089);
   houtFV_stack_4->SetBinContent(8,17.39891);
   houtFV_stack_4->SetBinContent(9,12.5668);
   houtFV_stack_4->SetBinContent(10,11.47315);
   houtFV_stack_4->SetBinContent(11,14.77605);
   houtFV_stack_4->SetBinContent(12,13.00318);
   houtFV_stack_4->SetBinContent(13,12.11932);
   houtFV_stack_4->SetBinContent(14,14.02056);
   houtFV_stack_4->SetBinContent(15,18.88635);
   houtFV_stack_4->SetBinContent(16,13.30062);
   houtFV_stack_4->SetBinContent(17,14.98471);
   houtFV_stack_4->SetBinContent(18,13.33625);
   houtFV_stack_4->SetBinContent(19,13.38859);
   houtFV_stack_4->SetBinContent(20,17.70456);
   houtFV_stack_4->SetBinContent(21,18.26474);
   houtFV_stack_4->SetBinContent(22,15.03634);
   houtFV_stack_4->SetBinContent(23,15.42599);
   houtFV_stack_4->SetBinContent(24,13.17214);
   houtFV_stack_4->SetBinContent(25,18.24185);
   houtFV_stack_4->SetBinContent(26,13.09263);
   houtFV_stack_4->SetBinContent(27,18.19991);
   houtFV_stack_4->SetBinContent(28,12.35113);
   houtFV_stack_4->SetBinContent(29,17.64472);
   houtFV_stack_4->SetBinContent(30,18.96413);
   houtFV_stack_4->SetBinContent(31,0.9876927);
   houtFV_stack_4->SetBinError(0,0.5587859);
   houtFV_stack_4->SetBinError(1,2.653538);
   houtFV_stack_4->SetBinError(2,2.244594);
   houtFV_stack_4->SetBinError(3,1.857544);
   houtFV_stack_4->SetBinError(4,2.202753);
   houtFV_stack_4->SetBinError(5,1.879366);
   houtFV_stack_4->SetBinError(6,2.19015);
   houtFV_stack_4->SetBinError(7,1.954901);
   houtFV_stack_4->SetBinError(8,2.149482);
   houtFV_stack_4->SetBinError(9,1.693629);
   houtFV_stack_4->SetBinError(10,1.680303);
   houtFV_stack_4->SetBinError(11,1.955595);
   houtFV_stack_4->SetBinError(12,1.805436);
   houtFV_stack_4->SetBinError(13,1.771623);
   houtFV_stack_4->SetBinError(14,1.898091);
   houtFV_stack_4->SetBinError(15,2.162911);
   houtFV_stack_4->SetBinError(16,1.856976);
   houtFV_stack_4->SetBinError(17,1.888059);
   houtFV_stack_4->SetBinError(18,1.857181);
   houtFV_stack_4->SetBinError(19,1.771655);
   houtFV_stack_4->SetBinError(20,2.170993);
   houtFV_stack_4->SetBinError(21,2.178476);
   houtFV_stack_4->SetBinError(22,1.944907);
   houtFV_stack_4->SetBinError(23,2.269261);
   houtFV_stack_4->SetBinError(24,1.821829);
   houtFV_stack_4->SetBinError(25,2.129781);
   houtFV_stack_4->SetBinError(26,1.827661);
   houtFV_stack_4->SetBinError(27,2.095953);
   houtFV_stack_4->SetBinError(28,1.727318);
   houtFV_stack_4->SetBinError(29,2.159813);
   houtFV_stack_4->SetBinError(30,2.182277);
   houtFV_stack_4->SetBinError(31,0.5313904);
   houtFV_stack_4->SetEntries(2163);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.278989);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.986934);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.854344);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.775281);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.632559);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.047556);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.907563);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.75044);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.646229);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.760094);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.511751);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.40025);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.502235);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.631679);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.471859);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.035386);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.787675);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.027837);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.626595);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.523356);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.501429);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.725818);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,2.49195);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.829607);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,6.124298);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,5.86188);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,5.401892);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,4.141212);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,2.723354);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,2.081786);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5845582);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6474242);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7456711);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6332682);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.681489);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6797626);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7024837);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5111347);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7570874);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6799008);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6903907);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6195754);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6251997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8218282);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.9131272);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8225988);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5404326);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7908224);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7416531);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5380802);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6335426);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6799604);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.4639031);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6415884);
   hNCpi0inFVcoh_stack_5->SetBinError(25,1.155576);
   hNCpi0inFVcoh_stack_5->SetBinError(26,1.004408);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.8983549);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.7079525);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.5365211);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.5846576);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.6546731);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.3513314);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1564355);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.07099921);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5720993);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3813511);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1357443);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1099415);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6695114);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1795074);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1114306);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4681084);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09541731);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1988369);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1121623);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.07454427);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2514673);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02889211);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1064811);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.03973181);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.305704);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1125614);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1247925);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.5106783);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.361666);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.2193829);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.1565994);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.2365153);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.2060609);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.0589169);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3279971);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1667826);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07117696);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03767586);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3144953);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1613653);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06581535);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05402914);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3676372);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1181443);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05385145);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2067255);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.05986911);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.09862915);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.07815355);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03129246);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1545947);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02889211);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.04841012);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02376276);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1163106);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04538625);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05633366);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1928173);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2242565);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.07962932);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.06632265);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.09483058);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.1364191);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.04448979);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.2130187);
   hNCpi0inFVres_stack_7->SetBinContent(1,20.42253);
   hNCpi0inFVres_stack_7->SetBinContent(2,38.70093);
   hNCpi0inFVres_stack_7->SetBinContent(3,40.49032);
   hNCpi0inFVres_stack_7->SetBinContent(4,32.19179);
   hNCpi0inFVres_stack_7->SetBinContent(5,41.21098);
   hNCpi0inFVres_stack_7->SetBinContent(6,41.0252);
   hNCpi0inFVres_stack_7->SetBinContent(7,36.86625);
   hNCpi0inFVres_stack_7->SetBinContent(8,38.06217);
   hNCpi0inFVres_stack_7->SetBinContent(9,41.96788);
   hNCpi0inFVres_stack_7->SetBinContent(10,37.02767);
   hNCpi0inFVres_stack_7->SetBinContent(11,37.09322);
   hNCpi0inFVres_stack_7->SetBinContent(12,38.47242);
   hNCpi0inFVres_stack_7->SetBinContent(13,38.85381);
   hNCpi0inFVres_stack_7->SetBinContent(14,46.27554);
   hNCpi0inFVres_stack_7->SetBinContent(15,43.74294);
   hNCpi0inFVres_stack_7->SetBinContent(16,36.42787);
   hNCpi0inFVres_stack_7->SetBinContent(17,45.04481);
   hNCpi0inFVres_stack_7->SetBinContent(18,39.08807);
   hNCpi0inFVres_stack_7->SetBinContent(19,38.65697);
   hNCpi0inFVres_stack_7->SetBinContent(20,38.52712);
   hNCpi0inFVres_stack_7->SetBinContent(21,36.37547);
   hNCpi0inFVres_stack_7->SetBinContent(22,34.35801);
   hNCpi0inFVres_stack_7->SetBinContent(23,37.04195);
   hNCpi0inFVres_stack_7->SetBinContent(24,44.23462);
   hNCpi0inFVres_stack_7->SetBinContent(25,36.77924);
   hNCpi0inFVres_stack_7->SetBinContent(26,41.89037);
   hNCpi0inFVres_stack_7->SetBinContent(27,38.44827);
   hNCpi0inFVres_stack_7->SetBinContent(28,42.86136);
   hNCpi0inFVres_stack_7->SetBinContent(29,42.8886);
   hNCpi0inFVres_stack_7->SetBinContent(30,29.06046);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1954375);
   hNCpi0inFVres_stack_7->SetBinError(0,0.1058324);
   hNCpi0inFVres_stack_7->SetBinError(1,1.625953);
   hNCpi0inFVres_stack_7->SetBinError(2,2.134692);
   hNCpi0inFVres_stack_7->SetBinError(3,2.290523);
   hNCpi0inFVres_stack_7->SetBinError(4,1.882968);
   hNCpi0inFVres_stack_7->SetBinError(5,2.236252);
   hNCpi0inFVres_stack_7->SetBinError(6,2.179737);
   hNCpi0inFVres_stack_7->SetBinError(7,1.954357);
   hNCpi0inFVres_stack_7->SetBinError(8,2.117532);
   hNCpi0inFVres_stack_7->SetBinError(9,2.263963);
   hNCpi0inFVres_stack_7->SetBinError(10,2.044103);
   hNCpi0inFVres_stack_7->SetBinError(11,2.140657);
   hNCpi0inFVres_stack_7->SetBinError(12,2.071715);
   hNCpi0inFVres_stack_7->SetBinError(13,2.188033);
   hNCpi0inFVres_stack_7->SetBinError(14,2.368995);
   hNCpi0inFVres_stack_7->SetBinError(15,2.332285);
   hNCpi0inFVres_stack_7->SetBinError(16,2.026929);
   hNCpi0inFVres_stack_7->SetBinError(17,2.458923);
   hNCpi0inFVres_stack_7->SetBinError(18,2.105913);
   hNCpi0inFVres_stack_7->SetBinError(19,2.157133);
   hNCpi0inFVres_stack_7->SetBinError(20,2.187405);
   hNCpi0inFVres_stack_7->SetBinError(21,1.927148);
   hNCpi0inFVres_stack_7->SetBinError(22,1.914825);
   hNCpi0inFVres_stack_7->SetBinError(23,2.013815);
   hNCpi0inFVres_stack_7->SetBinError(24,2.512985);
   hNCpi0inFVres_stack_7->SetBinError(25,2.029214);
   hNCpi0inFVres_stack_7->SetBinError(26,2.146826);
   hNCpi0inFVres_stack_7->SetBinError(27,2.10596);
   hNCpi0inFVres_stack_7->SetBinError(28,2.191657);
   hNCpi0inFVres_stack_7->SetBinError(29,2.23782);
   hNCpi0inFVres_stack_7->SetBinError(30,1.939879);
   hNCpi0inFVres_stack_7->SetBinError(31,0.07599136);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.224545);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.522466);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.804412);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.475601);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.946554);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.65979);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.843775);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.512663);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.267151);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.833393);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.228032);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.488763);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.210505);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.73831);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.93561);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.372778);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.19801);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.903169);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.814132);
   hNCpi0inFVdis_stack_8->SetBinContent(20,6.36144);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.294237);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.621849);
   hNCpi0inFVdis_stack_8->SetBinContent(23,7.275982);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.956873);
   hNCpi0inFVdis_stack_8->SetBinContent(25,8.564454);
   hNCpi0inFVdis_stack_8->SetBinContent(26,8.5971);
   hNCpi0inFVdis_stack_8->SetBinContent(27,9.005915);
   hNCpi0inFVdis_stack_8->SetBinContent(28,10.30098);
   hNCpi0inFVdis_stack_8->SetBinContent(29,7.169534);
   hNCpi0inFVdis_stack_8->SetBinContent(30,5.701741);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.9668277);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9301245);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.125111);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.008477);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9110238);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9646433);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9444314);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.930491);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9341588);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8644304);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8406057);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.929675);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9741409);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9401594);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.001788);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.091193);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.143204);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.153274);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9949372);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7475948);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.033653);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.041707);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.8450725);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.193764);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.036541);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.9769056);
   hNCpi0inFVdis_stack_8->SetBinError(27,1.036852);
   hNCpi0inFVdis_stack_8->SetBinError(28,1.231831);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.9401147);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.7982251);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1666728);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05782241);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1317583);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04404794);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.06358271);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,12.30928);
   hCCpi0inFV_stack_10->SetBinContent(2,16.78983);
   hCCpi0inFV_stack_10->SetBinContent(3,20.83309);
   hCCpi0inFV_stack_10->SetBinContent(4,21.47968);
   hCCpi0inFV_stack_10->SetBinContent(5,19.99439);
   hCCpi0inFV_stack_10->SetBinContent(6,18.18078);
   hCCpi0inFV_stack_10->SetBinContent(7,17.23583);
   hCCpi0inFV_stack_10->SetBinContent(8,20.81062);
   hCCpi0inFV_stack_10->SetBinContent(9,19.79144);
   hCCpi0inFV_stack_10->SetBinContent(10,19.38356);
   hCCpi0inFV_stack_10->SetBinContent(11,17.85422);
   hCCpi0inFV_stack_10->SetBinContent(12,17.90712);
   hCCpi0inFV_stack_10->SetBinContent(13,22.33717);
   hCCpi0inFV_stack_10->SetBinContent(14,17.69323);
   hCCpi0inFV_stack_10->SetBinContent(15,22.56757);
   hCCpi0inFV_stack_10->SetBinContent(16,18.26715);
   hCCpi0inFV_stack_10->SetBinContent(17,15.8842);
   hCCpi0inFV_stack_10->SetBinContent(18,16.55733);
   hCCpi0inFV_stack_10->SetBinContent(19,16.23418);
   hCCpi0inFV_stack_10->SetBinContent(20,17.70175);
   hCCpi0inFV_stack_10->SetBinContent(21,21.59733);
   hCCpi0inFV_stack_10->SetBinContent(22,20.03296);
   hCCpi0inFV_stack_10->SetBinContent(23,18.59515);
   hCCpi0inFV_stack_10->SetBinContent(24,21.52202);
   hCCpi0inFV_stack_10->SetBinContent(25,17.94173);
   hCCpi0inFV_stack_10->SetBinContent(26,22.97408);
   hCCpi0inFV_stack_10->SetBinContent(27,21.67024);
   hCCpi0inFV_stack_10->SetBinContent(28,20.91205);
   hCCpi0inFV_stack_10->SetBinContent(29,20.95614);
   hCCpi0inFV_stack_10->SetBinContent(30,22.52225);
   hCCpi0inFV_stack_10->SetBinContent(31,0.5884556);
   hCCpi0inFV_stack_10->SetBinError(1,1.788475);
   hCCpi0inFV_stack_10->SetBinError(2,2.020123);
   hCCpi0inFV_stack_10->SetBinError(3,2.316517);
   hCCpi0inFV_stack_10->SetBinError(4,2.246578);
   hCCpi0inFV_stack_10->SetBinError(5,2.216504);
   hCCpi0inFV_stack_10->SetBinError(6,2.11416);
   hCCpi0inFV_stack_10->SetBinError(7,2.090525);
   hCCpi0inFV_stack_10->SetBinError(8,2.284363);
   hCCpi0inFV_stack_10->SetBinError(9,2.207245);
   hCCpi0inFV_stack_10->SetBinError(10,2.263798);
   hCCpi0inFV_stack_10->SetBinError(11,2.185599);
   hCCpi0inFV_stack_10->SetBinError(12,2.116794);
   hCCpi0inFV_stack_10->SetBinError(13,2.347905);
   hCCpi0inFV_stack_10->SetBinError(14,2.119889);
   hCCpi0inFV_stack_10->SetBinError(15,2.358102);
   hCCpi0inFV_stack_10->SetBinError(16,2.112263);
   hCCpi0inFV_stack_10->SetBinError(17,1.998269);
   hCCpi0inFV_stack_10->SetBinError(18,2.067929);
   hCCpi0inFV_stack_10->SetBinError(19,2.04154);
   hCCpi0inFV_stack_10->SetBinError(20,2.038841);
   hCCpi0inFV_stack_10->SetBinError(21,2.351362);
   hCCpi0inFV_stack_10->SetBinError(22,2.206463);
   hCCpi0inFV_stack_10->SetBinError(23,2.152348);
   hCCpi0inFV_stack_10->SetBinError(24,2.337511);
   hCCpi0inFV_stack_10->SetBinError(25,2.100858);
   hCCpi0inFV_stack_10->SetBinError(26,2.445566);
   hCCpi0inFV_stack_10->SetBinError(27,2.347959);
   hCCpi0inFV_stack_10->SetBinError(28,2.310602);
   hCCpi0inFV_stack_10->SetBinError(29,2.288837);
   hCCpi0inFV_stack_10->SetBinError(30,2.437978);
   hCCpi0inFV_stack_10->SetBinError(31,0.3397478);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(0,0.3934307);
   hNCinFV_stack_11->SetBinContent(1,2.471762);
   hNCinFV_stack_11->SetBinContent(2,6.261388);
   hNCinFV_stack_11->SetBinContent(3,6.560541);
   hNCinFV_stack_11->SetBinContent(4,5.247885);
   hNCinFV_stack_11->SetBinContent(5,8.128046);
   hNCinFV_stack_11->SetBinContent(6,6.261591);
   hNCinFV_stack_11->SetBinContent(7,9.731383);
   hNCinFV_stack_11->SetBinContent(8,8.200791);
   hNCinFV_stack_11->SetBinContent(9,5.865795);
   hNCinFV_stack_11->SetBinContent(10,6.754231);
   hNCinFV_stack_11->SetBinContent(11,7.766802);
   hNCinFV_stack_11->SetBinContent(12,9.038399);
   hNCinFV_stack_11->SetBinContent(13,8.185356);
   hNCinFV_stack_11->SetBinContent(14,7.38967);
   hNCinFV_stack_11->SetBinContent(15,7.385989);
   hNCinFV_stack_11->SetBinContent(16,8.998459);
   hNCinFV_stack_11->SetBinContent(17,8.263753);
   hNCinFV_stack_11->SetBinContent(18,7.761368);
   hNCinFV_stack_11->SetBinContent(19,7.412788);
   hNCinFV_stack_11->SetBinContent(20,7.742462);
   hNCinFV_stack_11->SetBinContent(21,12.29609);
   hNCinFV_stack_11->SetBinContent(22,6.438612);
   hNCinFV_stack_11->SetBinContent(23,6.16553);
   hNCinFV_stack_11->SetBinContent(24,8.088329);
   hNCinFV_stack_11->SetBinContent(25,11.37338);
   hNCinFV_stack_11->SetBinContent(26,9.138635);
   hNCinFV_stack_11->SetBinContent(27,7.728513);
   hNCinFV_stack_11->SetBinContent(28,8.504723);
   hNCinFV_stack_11->SetBinContent(29,9.537485);
   hNCinFV_stack_11->SetBinContent(30,6.392407);
   hNCinFV_stack_11->SetBinContent(31,0.3401776);
   hNCinFV_stack_11->SetBinError(0,0.2781975);
   hNCinFV_stack_11->SetBinError(1,0.8701246);
   hNCinFV_stack_11->SetBinError(2,1.233028);
   hNCinFV_stack_11->SetBinError(3,1.308664);
   hNCinFV_stack_11->SetBinError(4,1.202853);
   hNCinFV_stack_11->SetBinError(5,1.436373);
   hNCinFV_stack_11->SetBinError(6,1.595104);
   hNCinFV_stack_11->SetBinError(7,1.662542);
   hNCinFV_stack_11->SetBinError(8,1.453269);
   hNCinFV_stack_11->SetBinError(9,1.264555);
   hNCinFV_stack_11->SetBinError(10,1.329362);
   hNCinFV_stack_11->SetBinError(11,1.53531);
   hNCinFV_stack_11->SetBinError(12,1.77158);
   hNCinFV_stack_11->SetBinError(13,1.510863);
   hNCinFV_stack_11->SetBinError(14,1.47365);
   hNCinFV_stack_11->SetBinError(15,1.391562);
   hNCinFV_stack_11->SetBinError(16,1.458283);
   hNCinFV_stack_11->SetBinError(17,1.523417);
   hNCinFV_stack_11->SetBinError(18,1.46372);
   hNCinFV_stack_11->SetBinError(19,1.510334);
   hNCinFV_stack_11->SetBinError(20,1.495216);
   hNCinFV_stack_11->SetBinError(21,1.714196);
   hNCinFV_stack_11->SetBinError(22,1.32775);
   hNCinFV_stack_11->SetBinError(23,1.25348);
   hNCinFV_stack_11->SetBinError(24,1.467866);
   hNCinFV_stack_11->SetBinError(25,1.960806);
   hNCinFV_stack_11->SetBinError(26,1.701176);
   hNCinFV_stack_11->SetBinError(27,1.440042);
   hNCinFV_stack_11->SetBinError(28,1.550396);
   hNCinFV_stack_11->SetBinError(29,1.642491);
   hNCinFV_stack_11->SetBinError(30,1.262909);
   hNCinFV_stack_11->SetBinError(31,0.3401776);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(1,9.278297);
   hnumuCCinFV_stack_12->SetBinContent(2,10.37384);
   hnumuCCinFV_stack_12->SetBinContent(3,9.890974);
   hnumuCCinFV_stack_12->SetBinContent(4,11.75338);
   hnumuCCinFV_stack_12->SetBinContent(5,8.79719);
   hnumuCCinFV_stack_12->SetBinContent(6,9.551065);
   hnumuCCinFV_stack_12->SetBinContent(7,11.52585);
   hnumuCCinFV_stack_12->SetBinContent(8,13.13174);
   hnumuCCinFV_stack_12->SetBinContent(9,11.31815);
   hnumuCCinFV_stack_12->SetBinContent(10,6.170019);
   hnumuCCinFV_stack_12->SetBinContent(11,6.597718);
   hnumuCCinFV_stack_12->SetBinContent(12,5.977641);
   hnumuCCinFV_stack_12->SetBinContent(13,7.626618);
   hnumuCCinFV_stack_12->SetBinContent(14,7.197592);
   hnumuCCinFV_stack_12->SetBinContent(15,7.897731);
   hnumuCCinFV_stack_12->SetBinContent(16,5.357365);
   hnumuCCinFV_stack_12->SetBinContent(17,8.878082);
   hnumuCCinFV_stack_12->SetBinContent(18,7.010317);
   hnumuCCinFV_stack_12->SetBinContent(19,7.025515);
   hnumuCCinFV_stack_12->SetBinContent(20,9.958799);
   hnumuCCinFV_stack_12->SetBinContent(21,16.157);
   hnumuCCinFV_stack_12->SetBinContent(22,9.979607);
   hnumuCCinFV_stack_12->SetBinContent(23,6.440506);
   hnumuCCinFV_stack_12->SetBinContent(24,8.88406);
   hnumuCCinFV_stack_12->SetBinContent(25,6.401057);
   hnumuCCinFV_stack_12->SetBinContent(26,8.088504);
   hnumuCCinFV_stack_12->SetBinContent(27,6.437835);
   hnumuCCinFV_stack_12->SetBinContent(28,7.635601);
   hnumuCCinFV_stack_12->SetBinContent(29,10.52715);
   hnumuCCinFV_stack_12->SetBinContent(30,10.99005);
   hnumuCCinFV_stack_12->SetBinError(0,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(1,2.121376);
   hnumuCCinFV_stack_12->SetBinError(2,1.717005);
   hnumuCCinFV_stack_12->SetBinError(3,1.725567);
   hnumuCCinFV_stack_12->SetBinError(4,1.731398);
   hnumuCCinFV_stack_12->SetBinError(5,1.666794);
   hnumuCCinFV_stack_12->SetBinError(6,1.696865);
   hnumuCCinFV_stack_12->SetBinError(7,3.047773);
   hnumuCCinFV_stack_12->SetBinError(8,2.586156);
   hnumuCCinFV_stack_12->SetBinError(9,1.890207);
   hnumuCCinFV_stack_12->SetBinError(10,1.507481);
   hnumuCCinFV_stack_12->SetBinError(11,1.318438);
   hnumuCCinFV_stack_12->SetBinError(12,1.727121);
   hnumuCCinFV_stack_12->SetBinError(13,1.511295);
   hnumuCCinFV_stack_12->SetBinError(14,1.39296);
   hnumuCCinFV_stack_12->SetBinError(15,1.488371);
   hnumuCCinFV_stack_12->SetBinError(16,1.148892);
   hnumuCCinFV_stack_12->SetBinError(17,1.619486);
   hnumuCCinFV_stack_12->SetBinError(18,1.306479);
   hnumuCCinFV_stack_12->SetBinError(19,1.55239);
   hnumuCCinFV_stack_12->SetBinError(20,2.151943);
   hnumuCCinFV_stack_12->SetBinError(21,2.095098);
   hnumuCCinFV_stack_12->SetBinError(22,1.715498);
   hnumuCCinFV_stack_12->SetBinError(23,1.25575);
   hnumuCCinFV_stack_12->SetBinError(24,1.582285);
   hnumuCCinFV_stack_12->SetBinError(25,1.235896);
   hnumuCCinFV_stack_12->SetBinError(26,1.525014);
   hnumuCCinFV_stack_12->SetBinError(27,1.315889);
   hnumuCCinFV_stack_12->SetBinError(28,1.405695);
   hnumuCCinFV_stack_12->SetBinError(29,1.831187);
   hnumuCCinFV_stack_12->SetBinError(30,1.962761);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,1.055049);
   hnueCCinFV_stack_13->SetBinContent(2,0.5913461);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,1.655022);
   hnueCCinFV_stack_13->SetBinContent(5,2.554448);
   hnueCCinFV_stack_13->SetBinContent(6,0.7286381);
   hnueCCinFV_stack_13->SetBinContent(7,1.088552);
   hnueCCinFV_stack_13->SetBinContent(8,1.375494);
   hnueCCinFV_stack_13->SetBinContent(9,1.810476);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.2441371);
   hnueCCinFV_stack_13->SetBinContent(12,0.4244309);
   hnueCCinFV_stack_13->SetBinContent(13,1.423555);
   hnueCCinFV_stack_13->SetBinContent(14,1.185365);
   hnueCCinFV_stack_13->SetBinContent(15,1.865311);
   hnueCCinFV_stack_13->SetBinContent(16,0.6111109);
   hnueCCinFV_stack_13->SetBinContent(17,0.9245921);
   hnueCCinFV_stack_13->SetBinContent(18,1.23324);
   hnueCCinFV_stack_13->SetBinContent(19,1.321025);
   hnueCCinFV_stack_13->SetBinContent(20,1.077868);
   hnueCCinFV_stack_13->SetBinContent(21,1.795308);
   hnueCCinFV_stack_13->SetBinContent(22,1.367688);
   hnueCCinFV_stack_13->SetBinContent(23,0.5221299);
   hnueCCinFV_stack_13->SetBinContent(24,1.309485);
   hnueCCinFV_stack_13->SetBinContent(25,1.767228);
   hnueCCinFV_stack_13->SetBinContent(26,1.012306);
   hnueCCinFV_stack_13->SetBinContent(27,1.418056);
   hnueCCinFV_stack_13->SetBinContent(28,0.5066535);
   hnueCCinFV_stack_13->SetBinContent(29,0.8753104);
   hnueCCinFV_stack_13->SetBinContent(30,0.6942893);
   hnueCCinFV_stack_13->SetBinError(1,0.5556116);
   hnueCCinFV_stack_13->SetBinError(2,0.4417072);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.7099917);
   hnueCCinFV_stack_13->SetBinError(5,1.828548);
   hnueCCinFV_stack_13->SetBinError(6,0.436143);
   hnueCCinFV_stack_13->SetBinError(7,0.605439);
   hnueCCinFV_stack_13->SetBinError(8,0.5767193);
   hnueCCinFV_stack_13->SetBinError(9,1.332829);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.2441371);
   hnueCCinFV_stack_13->SetBinError(12,0.4244309);
   hnueCCinFV_stack_13->SetBinError(13,0.7616284);
   hnueCCinFV_stack_13->SetBinError(14,0.6143989);
   hnueCCinFV_stack_13->SetBinError(15,0.6920427);
   hnueCCinFV_stack_13->SetBinError(16,0.3532401);
   hnueCCinFV_stack_13->SetBinError(17,0.6538334);
   hnueCCinFV_stack_13->SetBinError(18,0.8846879);
   hnueCCinFV_stack_13->SetBinError(19,0.7882246);
   hnueCCinFV_stack_13->SetBinError(20,0.5370783);
   hnueCCinFV_stack_13->SetBinError(21,0.690824);
   hnueCCinFV_stack_13->SetBinError(22,0.7329359);
   hnueCCinFV_stack_13->SetBinError(23,0.3741997);
   hnueCCinFV_stack_13->SetBinError(24,0.8480199);
   hnueCCinFV_stack_13->SetBinError(25,0.8069208);
   hnueCCinFV_stack_13->SetBinError(26,0.453559);
   hnueCCinFV_stack_13->SetBinError(27,0.6908145);
   hnueCCinFV_stack_13->SetBinError(28,0.3670948);
   hnueCCinFV_stack_13->SetBinError(29,0.441077);
   hnueCCinFV_stack_13->SetBinError(30,0.4102043);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__11->SetBinContent(0,1.835737);
   hmcerror__11->SetBinContent(1,103.1586);
   hmcerror__11->SetBinContent(2,126.192);
   hmcerror__11->SetBinContent(3,133.8513);
   hmcerror__11->SetBinContent(4,124.6597);
   hmcerror__11->SetBinContent(5,132.3044);
   hmcerror__11->SetBinContent(6,134.5056);
   hmcerror__11->SetBinContent(7,121.6539);
   hmcerror__11->SetBinContent(8,142.9411);
   hmcerror__11->SetBinContent(9,125.5697);
   hmcerror__11->SetBinContent(10,107.2199);
   hmcerror__11->SetBinContent(11,116.0438);
   hmcerror__11->SetBinContent(12,112.5943);
   hmcerror__11->SetBinContent(13,120.1699);
   hmcerror__11->SetBinContent(14,133.4127);
   hmcerror__11->SetBinContent(15,135.0845);
   hmcerror__11->SetBinContent(16,115.5502);
   hmcerror__11->SetBinContent(17,119.8498);
   hmcerror__11->SetBinContent(18,114.2015);
   hmcerror__11->SetBinContent(19,117.6785);
   hmcerror__11->SetBinContent(20,122.0139);
   hmcerror__11->SetBinContent(21,162.7522);
   hmcerror__11->SetBinContent(22,126.7302);
   hmcerror__11->SetBinContent(23,110.8908);
   hmcerror__11->SetBinContent(24,128.758);
   hmcerror__11->SetBinContent(25,121.187);
   hmcerror__11->SetBinContent(26,129.57);
   hmcerror__11->SetBinContent(27,126.9754);
   hmcerror__11->SetBinContent(28,123.1958);
   hmcerror__11->SetBinContent(29,124.7636);
   hmcerror__11->SetBinContent(30,111.3041);
   hmcerror__11->SetBinContent(31,2.84276);
   hmcerror__11->SetBinError(0,0.6629728);
   hmcerror__11->SetBinError(1,31.32943);
   hmcerror__11->SetBinError(2,35.9525);
   hmcerror__11->SetBinError(3,38.93722);
   hmcerror__11->SetBinError(4,31.63843);
   hmcerror__11->SetBinError(5,38.99276);
   hmcerror__11->SetBinError(6,35.29564);
   hmcerror__11->SetBinError(7,32.35097);
   hmcerror__11->SetBinError(8,41.49259);
   hmcerror__11->SetBinError(9,33.24959);
   hmcerror__11->SetBinError(10,29.63548);
   hmcerror__11->SetBinError(11,29.4932);
   hmcerror__11->SetBinError(12,32.52331);
   hmcerror__11->SetBinError(13,31.28949);
   hmcerror__11->SetBinError(14,33.28012);
   hmcerror__11->SetBinError(15,39.20919);
   hmcerror__11->SetBinError(16,35.29767);
   hmcerror__11->SetBinError(17,32.88102);
   hmcerror__11->SetBinError(18,30.06405);
   hmcerror__11->SetBinError(19,30.6525);
   hmcerror__11->SetBinError(20,32.48861);
   hmcerror__11->SetBinError(21,42.38787);
   hmcerror__11->SetBinError(22,29.64488);
   hmcerror__11->SetBinError(23,27.66702);
   hmcerror__11->SetBinError(24,34.36073);
   hmcerror__11->SetBinError(25,32.76387);
   hmcerror__11->SetBinError(26,37.05467);
   hmcerror__11->SetBinError(27,33.34325);
   hmcerror__11->SetBinError(28,30.84055);
   hmcerror__11->SetBinError(29,33.22248);
   hmcerror__11->SetBinError(30,29.96636);
   hmcerror__11->SetBinError(31,3.739316);
   hmcerror__11->SetBinError(32,0.3895343);
   hmcerror__11->SetBinError(33,0.3895343);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[32] = {
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
   Double_t _fy3013[32] = {
   96,
   156,
   141,
   123,
   134,
   137,
   130,
   139,
   145,
   114,
   126,
   112,
   123,
   132,
   147,
   131,
   128,
   124,
   127,
   131,
   164,
   136,
   125,
   103,
   126,
   128,
   118,
   112,
   124,
   89,
   1,
   0};
   Double_t _felx3013[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3013[32] = {
   9.9196,
   12.49,
   11.87434,
   11.09054,
   11.57584,
   11.7047,
   11.40175,
   11.78983,
   12.04159,
   10.67708,
   11.22497,
   10.58301,
   11.09054,
   11.48913,
   12.12436,
   11.44552,
   11.31371,
   11.13553,
   11.26943,
   11.44552,
   12.80625,
   11.6619,
   11.18034,
   10.14889,
   11.22497,
   11.31371,
   10.86278,
   10.58301,
   11.13553,
   9.5566,
   1,
   0};
   Double_t _fehx3013[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3013[32] = {
   9.718,
   12.49,
   11.87434,
   11.09054,
   11.57584,
   11.7047,
   11.40175,
   11.78983,
   12.04159,
   10.67708,
   11.22497,
   10.58301,
   11.09054,
   11.48913,
   12.12436,
   11.44552,
   11.31371,
   11.13553,
   11.26943,
   11.44552,
   12.80625,
   11.6619,
   11.18034,
   10.14889,
   11.22497,
   11.31371,
   10.86278,
   10.58301,
   11.13553,
   9.3552,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1210);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(194.4869);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.3/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3822.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.6","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 475.7","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  110.0","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.1","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1154.3","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  237.8","F");

   ci = 1480;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 231.4","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 266.9","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[32] = {
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
   Double_t _fy3014[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3014[32] = {
   0.3037017,
   0.2849033,
   0.290899,
   0.2537984,
   0.29472,
   0.2624103,
   0.2659262,
   0.2902775,
   0.2647898,
   0.276399,
   0.2541558,
   0.2888539,
   0.2603772,
   0.2494524,
   0.2902569,
   0.3054747,
   0.2743518,
   0.2632545,
   0.2604767,
   0.2662697,
   0.2604442,
   0.2339213,
   0.2494979,
   0.2668629,
   0.2703579,
   0.2859818,
   0.2625961,
   0.2503376,
   0.2662835,
   0.2692295,
   1.315382,
   0};
   Double_t _fehx3014[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3014[32] = {
   0.3037017,
   0.2849033,
   0.290899,
   0.2537984,
   0.29472,
   0.2624103,
   0.2659262,
   0.2902775,
   0.2647898,
   0.276399,
   0.2541558,
   0.2888539,
   0.2603772,
   0.2494524,
   0.2902569,
   0.3054747,
   0.2743518,
   0.2632545,
   0.2604767,
   0.2662697,
   0.2604442,
   0.2339213,
   0.2494979,
   0.2668629,
   0.2703579,
   0.2859818,
   0.2625961,
   0.2503376,
   0.2662835,
   0.2692295,
   1.315382,
   0};
   grae = new TGraphAsymmErrors(32,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1210);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[32] = {
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
   Double_t _fy3015[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3015[32] = {
   0.190863,
   0.205008,
   0.2044564,
   0.1945944,
   0.2049849,
   0.1931362,
   0.2060593,
   0.1872842,
   0.2061977,
   0.206918,
   0.190511,
   0.2069938,
   0.190998,
   0.2054305,
   0.2156027,
   0.2156036,
   0.2103233,
   0.2059092,
   0.1930573,
   0.2021622,
   0.188803,
   0.1980246,
   0.2089913,
   0.2027118,
   0.2188401,
   0.2115124,
   0.2124823,
   0.2085167,
   0.2173035,
   0.2092018,
   0.4610716,
   0};
   Double_t _fehx3015[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3015[32] = {
   0.190863,
   0.205008,
   0.2044564,
   0.1945944,
   0.2049849,
   0.1931362,
   0.2060593,
   0.1872842,
   0.2061977,
   0.206918,
   0.190511,
   0.2069938,
   0.190998,
   0.2054305,
   0.2156027,
   0.2156036,
   0.2103233,
   0.2059092,
   0.1930573,
   0.2021622,
   0.188803,
   0.1980246,
   0.2089913,
   0.2027118,
   0.2188401,
   0.2115124,
   0.2124823,
   0.2085167,
   0.2173035,
   0.2092018,
   0.4610716,
   0};
   grae = new TGraphAsymmErrors(32,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1210);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[32] = {
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
   Double_t _fy3016[32] = {
   0.930606,
   1.236212,
   1.053408,
   0.9866859,
   1.012816,
   1.018545,
   1.068605,
   0.9724284,
   1.154737,
   1.063235,
   1.085797,
   0.9947214,
   1.023551,
   0.989411,
   1.088208,
   1.133706,
   1.068003,
   1.0858,
   1.079212,
   1.073648,
   1.007667,
   1.073146,
   1.127235,
   0.7999501,
   1.039715,
   0.9878829,
   0.9293137,
   0.9091217,
   0.9938799,
   0.799611,
   0.3517709,
   10};
   Double_t _felx3016[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3016[32] = {
   0.09615874,
   0.09897617,
   0.08871294,
   0.08896647,
   0.08749394,
   0.08702019,
   0.09372287,
   0.0824803,
   0.09589567,
   0.0995811,
   0.09673049,
   0.09399234,
   0.0922905,
   0.08611718,
   0.08975389,
   0.09905236,
   0.09439902,
   0.09750776,
   0.09576456,
   0.09380508,
   0.07868557,
   0.09202154,
   0.100823,
   0.07882143,
   0.09262518,
   0.08731734,
   0.08555026,
   0.08590393,
   0.08925305,
   0.08586026,
   0.3517709,
   0};
   Double_t _fehx3016[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3016[32] = {
   0.09420447,
   0.09897617,
   0.08871294,
   0.08896647,
   0.08749394,
   0.08702019,
   0.09372287,
   0.0824803,
   0.09589567,
   0.0995811,
   0.09673049,
   0.09399234,
   0.0922905,
   0.08611718,
   0.08975389,
   0.09905236,
   0.09439902,
   0.09750776,
   0.09576456,
   0.09380508,
   0.07868557,
   0.09202154,
   0.100823,
   0.07882143,
   0.09262518,
   0.08731734,
   0.08555026,
   0.08590393,
   0.08925305,
   0.0840508,
   0.4783064,
   0};
   grae = new TGraphAsymmErrors(32,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1210);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(11);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
