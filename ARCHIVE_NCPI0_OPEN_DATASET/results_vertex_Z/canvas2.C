#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr 15 15:15:55 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
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
   pad1->Range(-161.5385,-0.62,1184.615,52.24316);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hmc__4->SetBinContent(0,0.149413);
   hmc__4->SetBinContent(1,19.41683);
   hmc__4->SetBinContent(2,27.47627);
   hmc__4->SetBinContent(3,24.89653);
   hmc__4->SetBinContent(4,28.80112);
   hmc__4->SetBinContent(5,26.70618);
   hmc__4->SetBinContent(6,29.22071);
   hmc__4->SetBinContent(7,28.25967);
   hmc__4->SetBinContent(8,26.80647);
   hmc__4->SetBinContent(9,27.88176);
   hmc__4->SetBinContent(10,25.01716);
   hmc__4->SetBinContent(11,29.0768);
   hmc__4->SetBinContent(12,29.57932);
   hmc__4->SetBinContent(13,28.82076);
   hmc__4->SetBinContent(14,26.51716);
   hmc__4->SetBinContent(15,27.73962);
   hmc__4->SetBinContent(16,27.88161);
   hmc__4->SetBinContent(17,28.17571);
   hmc__4->SetBinContent(18,24.9716);
   hmc__4->SetBinContent(19,25.02126);
   hmc__4->SetBinContent(20,29.68508);
   hmc__4->SetBinContent(21,24.01747);
   hmc__4->SetBinContent(22,27.804);
   hmc__4->SetBinContent(23,27.81399);
   hmc__4->SetBinContent(24,25.86379);
   hmc__4->SetBinContent(25,9.967394);
   hmc__4->SetBinError(0,0.08945557);
   hmc__4->SetBinError(1,4.992413);
   hmc__4->SetBinError(2,7.322039);
   hmc__4->SetBinError(3,5.781106);
   hmc__4->SetBinError(4,6.98569);
   hmc__4->SetBinError(5,7.093165);
   hmc__4->SetBinError(6,6.724625);
   hmc__4->SetBinError(7,7.360126);
   hmc__4->SetBinError(8,6.499912);
   hmc__4->SetBinError(9,6.914554);
   hmc__4->SetBinError(10,6.082509);
   hmc__4->SetBinError(11,6.418139);
   hmc__4->SetBinError(12,8.739834);
   hmc__4->SetBinError(13,7.670845);
   hmc__4->SetBinError(14,6.680004);
   hmc__4->SetBinError(15,6.29948);
   hmc__4->SetBinError(16,6.6415);
   hmc__4->SetBinError(17,6.108426);
   hmc__4->SetBinError(18,6.029475);
   hmc__4->SetBinError(19,5.730707);
   hmc__4->SetBinError(20,7.455345);
   hmc__4->SetBinError(21,5.872961);
   hmc__4->SetBinError(22,7.183093);
   hmc__4->SetBinError(23,6.328064);
   hmc__4->SetBinError(24,6.330974);
   hmc__4->SetBinError(25,3.41777);
   hmc__4->SetBinError(26,0.125509);
   hmc__4->SetMinimum(-0.62);
   hmc__4->SetMaximum(49.6);
   hmc__4->SetEntries(648.6285);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",25,0,1050);
   hs2_stack_2->SetMinimum(-1.084988e-09);
   hs2_stack_2->SetMaximum(31.16933);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hbadmatch_stack_1->SetBinContent(1,0.4723141);
   hbadmatch_stack_1->SetBinContent(2,0.564968);
   hbadmatch_stack_1->SetBinContent(3,0.8135724);
   hbadmatch_stack_1->SetBinContent(4,1.352353);
   hbadmatch_stack_1->SetBinContent(5,0.7727482);
   hbadmatch_stack_1->SetBinContent(6,0.5989099);
   hbadmatch_stack_1->SetBinContent(7,0.6784136);
   hbadmatch_stack_1->SetBinContent(8,0.3924971);
   hbadmatch_stack_1->SetBinContent(9,0.6070817);
   hbadmatch_stack_1->SetBinContent(10,0.2257276);
   hbadmatch_stack_1->SetBinContent(11,0.4800821);
   hbadmatch_stack_1->SetBinContent(12,0.6691856);
   hbadmatch_stack_1->SetBinContent(13,0.4890363);
   hbadmatch_stack_1->SetBinContent(14,0.1767537);
   hbadmatch_stack_1->SetBinContent(15,0.4726259);
   hbadmatch_stack_1->SetBinContent(16,0.5303831);
   hbadmatch_stack_1->SetBinContent(17,0.6726031);
   hbadmatch_stack_1->SetBinContent(18,0.666762);
   hbadmatch_stack_1->SetBinContent(19,0.6769388);
   hbadmatch_stack_1->SetBinContent(20,0.5897845);
   hbadmatch_stack_1->SetBinContent(21,0.3352818);
   hbadmatch_stack_1->SetBinContent(22,0.519782);
   hbadmatch_stack_1->SetBinContent(23,0.3737131);
   hbadmatch_stack_1->SetBinContent(24,0.3868509);
   hbadmatch_stack_1->SetBinContent(25,0.4834135);
   hbadmatch_stack_1->SetBinError(1,0.1603154);
   hbadmatch_stack_1->SetBinError(2,0.1778758);
   hbadmatch_stack_1->SetBinError(3,0.2062273);
   hbadmatch_stack_1->SetBinError(4,0.4321894);
   hbadmatch_stack_1->SetBinError(5,0.3182531);
   hbadmatch_stack_1->SetBinError(6,0.1791495);
   hbadmatch_stack_1->SetBinError(7,0.3598097);
   hbadmatch_stack_1->SetBinError(8,0.1426398);
   hbadmatch_stack_1->SetBinError(9,0.1983246);
   hbadmatch_stack_1->SetBinError(10,0.09910555);
   hbadmatch_stack_1->SetBinError(11,0.1566333);
   hbadmatch_stack_1->SetBinError(12,0.2034884);
   hbadmatch_stack_1->SetBinError(13,0.1670722);
   hbadmatch_stack_1->SetBinError(14,0.08299653);
   hbadmatch_stack_1->SetBinError(15,0.1589051);
   hbadmatch_stack_1->SetBinError(16,0.1648836);
   hbadmatch_stack_1->SetBinError(17,0.182158);
   hbadmatch_stack_1->SetBinError(18,0.1815808);
   hbadmatch_stack_1->SetBinError(19,0.1987996);
   hbadmatch_stack_1->SetBinError(20,0.1781527);
   hbadmatch_stack_1->SetBinError(21,0.139707);
   hbadmatch_stack_1->SetBinError(22,0.1706614);
   hbadmatch_stack_1->SetBinError(23,0.1414418);
   hbadmatch_stack_1->SetBinError(24,0.1382322);
   hbadmatch_stack_1->SetBinError(25,0.1519639);
   hbadmatch_stack_1->SetEntries(380);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hext_stack_2->SetBinContent(1,1.351071);
   hext_stack_2->SetBinContent(2,2.894385);
   hext_stack_2->SetBinContent(3,2.208617);
   hext_stack_2->SetBinContent(4,3.017083);
   hext_stack_2->SetBinContent(5,2.594445);
   hext_stack_2->SetBinContent(6,3.292483);
   hext_stack_2->SetBinContent(7,1.960488);
   hext_stack_2->SetBinContent(8,1.326532);
   hext_stack_2->SetBinContent(9,2.569906);
   hext_stack_2->SetBinContent(10,0.8643526);
   hext_stack_2->SetBinContent(11,2.631255);
   hext_stack_2->SetBinContent(12,2.370857);
   hext_stack_2->SetBinContent(13,1.685089);
   hext_stack_2->SetBinContent(14,1.66328);
   hext_stack_2->SetBinContent(15,2.520826);
   hext_stack_2->SetBinContent(16,1.785979);
   hext_stack_2->SetBinContent(17,3.063431);
   hext_stack_2->SetBinContent(18,1.525581);
   hext_stack_2->SetBinContent(19,1.923679);
   hext_stack_2->SetBinContent(20,1.923679);
   hext_stack_2->SetBinContent(21,1.164292);
   hext_stack_2->SetBinContent(22,2.049109);
   hext_stack_2->SetBinContent(23,2.297237);
   hext_stack_2->SetBinContent(24,1.066133);
   hext_stack_2->SetBinContent(25,0.707576);
   hext_stack_2->SetBinError(1,0.4499652);
   hext_stack_2->SetBinError(2,0.7202991);
   hext_stack_2->SetBinError(3,0.601418);
   hext_stack_2->SetBinError(4,0.7213434);
   hext_stack_2->SetBinError(5,0.6639233);
   hext_stack_2->SetBinError(6,0.7733511);
   hext_stack_2->SetBinError(7,0.5669928);
   hext_stack_2->SetBinError(8,0.4496305);
   hext_stack_2->SetBinError(9,0.6636965);
   hext_stack_2->SetBinError(10,0.2914824);
   hext_stack_2->SetBinError(11,0.6642633);
   hext_stack_2->SetBinError(12,0.6331449);
   hext_stack_2->SetBinError(13,0.4937056);
   hext_stack_2->SetBinError(14,0.5297697);
   hext_stack_2->SetBinError(15,0.6632427);
   hext_stack_2->SetBinError(16,0.5311887);
   hext_stack_2->SetBinError(17,0.6955047);
   hext_stack_2->SetBinError(18,0.4917195);
   hext_stack_2->SetBinError(19,0.5665944);
   hext_stack_2->SetBinError(20,0.5665944);
   hext_stack_2->SetBinError(21,0.4037309);
   hext_stack_2->SetBinError(22,0.5997887);
   hext_stack_2->SetBinError(23,0.6324312);
   hext_stack_2->SetBinError(24,0.4022366);
   hext_stack_2->SetBinError(25,0.3467226);
   hext_stack_2->SetEntries(946);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hdirt_stack_3->SetBinContent(1,0.8811203);
   hdirt_stack_3->SetBinContent(2,0.7673392);
   hdirt_stack_3->SetBinContent(3,0.5723556);
   hdirt_stack_3->SetBinContent(4,0.1949855);
   hdirt_stack_3->SetBinContent(5,0.2213836);
   hdirt_stack_3->SetBinContent(6,0.1419118);
   hdirt_stack_3->SetBinContent(7,0.30447);
   hdirt_stack_3->SetBinContent(8,0.5779901);
   hdirt_stack_3->SetBinContent(9,0.2189931);
   hdirt_stack_3->SetBinContent(10,0.1104902);
   hdirt_stack_3->SetBinContent(11,0.3721989);
   hdirt_stack_3->SetBinContent(12,0.07706106);
   hdirt_stack_3->SetBinContent(13,0.1377358);
   hdirt_stack_3->SetBinContent(14,0.1857022);
   hdirt_stack_3->SetBinContent(15,0.01800911);
   hdirt_stack_3->SetBinContent(16,0.1516321);
   hdirt_stack_3->SetBinContent(17,0.2986832);
   hdirt_stack_3->SetBinContent(18,0.2686861);
   hdirt_stack_3->SetBinContent(19,0.09663776);
   hdirt_stack_3->SetBinContent(20,0.01590415);
   hdirt_stack_3->SetBinContent(21,0.2108822);
   hdirt_stack_3->SetBinContent(22,0.1225584);
   hdirt_stack_3->SetBinContent(23,0.2803406);
   hdirt_stack_3->SetBinContent(24,0.1048574);
   hdirt_stack_3->SetBinContent(25,0.05242869);
   hdirt_stack_3->SetBinError(1,0.1861044);
   hdirt_stack_3->SetBinError(2,0.174072);
   hdirt_stack_3->SetBinError(3,0.1541354);
   hdirt_stack_3->SetBinError(4,0.1010934);
   hdirt_stack_3->SetBinError(5,0.09434223);
   hdirt_stack_3->SetBinError(6,0.06624772);
   hdirt_stack_3->SetBinError(7,0.1023207);
   hdirt_stack_3->SetBinError(8,0.364353);
   hdirt_stack_3->SetBinError(9,0.09041074);
   hdirt_stack_3->SetBinError(10,0.06666534);
   hdirt_stack_3->SetBinError(11,0.1234239);
   hdirt_stack_3->SetBinError(12,0.05430172);
   hdirt_stack_3->SetBinError(13,0.065683);
   hdirt_stack_3->SetBinError(14,0.09316423);
   hdirt_stack_3->SetBinError(15,0.01278266);
   hdirt_stack_3->SetBinError(16,0.07772958);
   hdirt_stack_3->SetBinError(17,0.1135339);
   hdirt_stack_3->SetBinError(18,0.1070383);
   hdirt_stack_3->SetBinError(19,0.06305907);
   hdirt_stack_3->SetBinError(20,0.0112523);
   hdirt_stack_3->SetBinError(21,0.09000946);
   hdirt_stack_3->SetBinError(22,0.06481873);
   hdirt_stack_3->SetBinError(23,0.1057077);
   hdirt_stack_3->SetBinError(24,0.06359251);
   hdirt_stack_3->SetBinError(25,0.0449667);
   hdirt_stack_3->SetEntries(237);

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);
   houtFV_stack_4->SetBinContent(0,0.07470649);
   houtFV_stack_4->SetBinContent(1,5.132664);
   houtFV_stack_4->SetBinContent(2,2.72206);
   houtFV_stack_4->SetBinContent(3,1.818213);
   houtFV_stack_4->SetBinContent(4,2.32932);
   houtFV_stack_4->SetBinContent(5,2.432018);
   houtFV_stack_4->SetBinContent(6,2.589227);
   houtFV_stack_4->SetBinContent(7,2.935495);
   houtFV_stack_4->SetBinContent(8,2.96248);
   houtFV_stack_4->SetBinContent(9,2.825282);
   houtFV_stack_4->SetBinContent(10,2.225322);
   houtFV_stack_4->SetBinContent(11,1.96103);
   houtFV_stack_4->SetBinContent(12,3.240841);
   houtFV_stack_4->SetBinContent(13,2.363333);
   houtFV_stack_4->SetBinContent(14,3.018545);
   houtFV_stack_4->SetBinContent(15,2.523504);
   houtFV_stack_4->SetBinContent(16,2.80302);
   houtFV_stack_4->SetBinContent(17,3.251317);
   houtFV_stack_4->SetBinContent(18,2.474154);
   houtFV_stack_4->SetBinContent(19,2.346063);
   houtFV_stack_4->SetBinContent(20,3.053073);
   houtFV_stack_4->SetBinContent(21,1.918374);
   houtFV_stack_4->SetBinContent(22,2.665321);
   houtFV_stack_4->SetBinContent(23,2.350165);
   houtFV_stack_4->SetBinContent(24,3.204479);
   houtFV_stack_4->SetBinContent(25,1.213019);
   houtFV_stack_4->SetBinError(0,0.06325464);
   houtFV_stack_4->SetBinError(1,0.5263958);
   houtFV_stack_4->SetBinError(2,0.3847125);
   houtFV_stack_4->SetBinError(3,0.3052211);
   houtFV_stack_4->SetBinError(4,0.3567812);
   houtFV_stack_4->SetBinError(5,0.3586294);
   houtFV_stack_4->SetBinError(6,0.3737848);
   houtFV_stack_4->SetBinError(7,0.4049765);
   houtFV_stack_4->SetBinError(8,0.4133423);
   houtFV_stack_4->SetBinError(9,0.3975054);
   houtFV_stack_4->SetBinError(10,0.3544145);
   houtFV_stack_4->SetBinError(11,0.3259306);
   houtFV_stack_4->SetBinError(12,0.4292405);
   houtFV_stack_4->SetBinError(13,0.3555351);
   houtFV_stack_4->SetBinError(14,0.4125271);
   houtFV_stack_4->SetBinError(15,0.3687454);
   houtFV_stack_4->SetBinError(16,0.3972157);
   houtFV_stack_4->SetBinError(17,0.4205014);
   houtFV_stack_4->SetBinError(18,0.3712673);
   houtFV_stack_4->SetBinError(19,0.3613842);
   houtFV_stack_4->SetBinError(20,0.4129221);
   houtFV_stack_4->SetBinError(21,0.3160717);
   houtFV_stack_4->SetBinError(22,0.3805172);
   houtFV_stack_4->SetBinError(23,0.364972);
   houtFV_stack_4->SetBinError(24,0.4186747);
   houtFV_stack_4->SetBinError(25,0.2474795);
   houtFV_stack_4->SetEntries(1718);

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hNCpi0inFV_stack_5->SetBinContent(0,0.07470649);
   hNCpi0inFV_stack_5->SetBinContent(1,7.021851);
   hNCpi0inFV_stack_5->SetBinContent(2,13.405);
   hNCpi0inFV_stack_5->SetBinContent(3,11.42093);
   hNCpi0inFV_stack_5->SetBinContent(4,13.14277);
   hNCpi0inFV_stack_5->SetBinContent(5,12.91704);
   hNCpi0inFV_stack_5->SetBinContent(6,14.27451);
   hNCpi0inFV_stack_5->SetBinContent(7,14.27631);
   hNCpi0inFV_stack_5->SetBinContent(8,14.54406);
   hNCpi0inFV_stack_5->SetBinContent(9,14.23446);
   hNCpi0inFV_stack_5->SetBinContent(10,14.39663);
   hNCpi0inFV_stack_5->SetBinContent(11,15.55727);
   hNCpi0inFV_stack_5->SetBinContent(12,15.12201);
   hNCpi0inFV_stack_5->SetBinContent(13,15.10724);
   hNCpi0inFV_stack_5->SetBinContent(14,15.07437);
   hNCpi0inFV_stack_5->SetBinContent(15,15.4734);
   hNCpi0inFV_stack_5->SetBinContent(16,14.66831);
   hNCpi0inFV_stack_5->SetBinContent(17,11.7853);
   hNCpi0inFV_stack_5->SetBinContent(18,11.36615);
   hNCpi0inFV_stack_5->SetBinContent(19,12.89872);
   hNCpi0inFV_stack_5->SetBinContent(20,16.00192);
   hNCpi0inFV_stack_5->SetBinContent(21,13.89541);
   hNCpi0inFV_stack_5->SetBinContent(22,14.31495);
   hNCpi0inFV_stack_5->SetBinContent(23,15.13453);
   hNCpi0inFV_stack_5->SetBinContent(24,13.64777);
   hNCpi0inFV_stack_5->SetBinContent(25,3.904854);
   hNCpi0inFV_stack_5->SetBinError(0,0.06325464);
   hNCpi0inFV_stack_5->SetBinError(1,0.6091255);
   hNCpi0inFV_stack_5->SetBinError(2,0.8429586);
   hNCpi0inFV_stack_5->SetBinError(3,0.7784355);
   hNCpi0inFV_stack_5->SetBinError(4,0.8318274);
   hNCpi0inFV_stack_5->SetBinError(5,0.8392269);
   hNCpi0inFV_stack_5->SetBinError(6,0.8811839);
   hNCpi0inFV_stack_5->SetBinError(7,0.8794654);
   hNCpi0inFV_stack_5->SetBinError(8,0.8814042);
   hNCpi0inFV_stack_5->SetBinError(9,0.8826229);
   hNCpi0inFV_stack_5->SetBinError(10,0.8872362);
   hNCpi0inFV_stack_5->SetBinError(11,0.9190578);
   hNCpi0inFV_stack_5->SetBinError(12,0.9078014);
   hNCpi0inFV_stack_5->SetBinError(13,0.9075715);
   hNCpi0inFV_stack_5->SetBinError(14,0.9022866);
   hNCpi0inFV_stack_5->SetBinError(15,0.9134834);
   hNCpi0inFV_stack_5->SetBinError(16,0.9011405);
   hNCpi0inFV_stack_5->SetBinError(17,0.7872443);
   hNCpi0inFV_stack_5->SetBinError(18,0.7681278);
   hNCpi0inFV_stack_5->SetBinError(19,0.8317895);
   hNCpi0inFV_stack_5->SetBinError(20,0.9352677);
   hNCpi0inFV_stack_5->SetBinError(21,0.8626783);
   hNCpi0inFV_stack_5->SetBinError(22,0.8693079);
   hNCpi0inFV_stack_5->SetBinError(23,0.9060825);
   hNCpi0inFV_stack_5->SetBinError(24,0.8661422);
   hNCpi0inFV_stack_5->SetBinError(25,0.4663284);
   hNCpi0inFV_stack_5->SetEntries(8770);

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hCCpi0inFV_stack_6->SetBinContent(1,3.023851);
   hCCpi0inFV_stack_6->SetBinContent(2,4.224748);
   hCCpi0inFV_stack_6->SetBinContent(3,4.452741);
   hCCpi0inFV_stack_6->SetBinContent(4,4.588313);
   hCCpi0inFV_stack_6->SetBinContent(5,3.885166);
   hCCpi0inFV_stack_6->SetBinContent(6,4.373509);
   hCCpi0inFV_stack_6->SetBinContent(7,4.245073);
   hCCpi0inFV_stack_6->SetBinContent(8,3.759126);
   hCCpi0inFV_stack_6->SetBinContent(9,5.121924);
   hCCpi0inFV_stack_6->SetBinContent(10,4.376187);
   hCCpi0inFV_stack_6->SetBinContent(11,5.135324);
   hCCpi0inFV_stack_6->SetBinContent(12,4.716575);
   hCCpi0inFV_stack_6->SetBinContent(13,5.692279);
   hCCpi0inFV_stack_6->SetBinContent(14,3.741553);
   hCCpi0inFV_stack_6->SetBinContent(15,4.040381);
   hCCpi0inFV_stack_6->SetBinContent(16,4.239069);
   hCCpi0inFV_stack_6->SetBinContent(17,4.894884);
   hCCpi0inFV_stack_6->SetBinContent(18,4.690086);
   hCCpi0inFV_stack_6->SetBinContent(19,3.759161);
   hCCpi0inFV_stack_6->SetBinContent(20,4.804921);
   hCCpi0inFV_stack_6->SetBinContent(21,4.113468);
   hCCpi0inFV_stack_6->SetBinContent(22,4.512695);
   hCCpi0inFV_stack_6->SetBinContent(23,4.307476);
   hCCpi0inFV_stack_6->SetBinContent(24,4.746719);
   hCCpi0inFV_stack_6->SetBinContent(25,2.599589);
   hCCpi0inFV_stack_6->SetBinError(1,0.4062154);
   hCCpi0inFV_stack_6->SetBinError(2,0.4739573);
   hCCpi0inFV_stack_6->SetBinError(3,0.4940258);
   hCCpi0inFV_stack_6->SetBinError(4,0.4995277);
   hCCpi0inFV_stack_6->SetBinError(5,0.4629329);
   hCCpi0inFV_stack_6->SetBinError(6,0.4926062);
   hCCpi0inFV_stack_6->SetBinError(7,0.475391);
   hCCpi0inFV_stack_6->SetBinError(8,0.4408932);
   hCCpi0inFV_stack_6->SetBinError(9,0.5311443);
   hCCpi0inFV_stack_6->SetBinError(10,0.4887221);
   hCCpi0inFV_stack_6->SetBinError(11,0.5343578);
   hCCpi0inFV_stack_6->SetBinError(12,0.5095039);
   hCCpi0inFV_stack_6->SetBinError(13,0.5674754);
   hCCpi0inFV_stack_6->SetBinError(14,0.4478409);
   hCCpi0inFV_stack_6->SetBinError(15,0.4651006);
   hCCpi0inFV_stack_6->SetBinError(16,0.4814921);
   hCCpi0inFV_stack_6->SetBinError(17,0.5178767);
   hCCpi0inFV_stack_6->SetBinError(18,0.510073);
   hCCpi0inFV_stack_6->SetBinError(19,0.445457);
   hCCpi0inFV_stack_6->SetBinError(20,0.5093373);
   hCCpi0inFV_stack_6->SetBinError(21,0.4659584);
   hCCpi0inFV_stack_6->SetBinError(22,0.4966721);
   hCCpi0inFV_stack_6->SetBinError(23,0.4813954);
   hCCpi0inFV_stack_6->SetBinError(24,0.5098162);
   hCCpi0inFV_stack_6->SetBinError(25,0.3754707);
   hCCpi0inFV_stack_6->SetEntries(2809);

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hNCinFV_stack_7->SetBinContent(1,0.4135777);
   hNCinFV_stack_7->SetBinContent(2,0.624947);
   hNCinFV_stack_7->SetBinContent(3,1.034935);
   hNCinFV_stack_7->SetBinContent(4,1.045891);
   hNCinFV_stack_7->SetBinContent(5,1.516041);
   hNCinFV_stack_7->SetBinContent(6,1.24451);
   hNCinFV_stack_7->SetBinContent(7,0.6869032);
   hNCinFV_stack_7->SetBinContent(8,1.545096);
   hNCinFV_stack_7->SetBinContent(9,0.6869032);
   hNCinFV_stack_7->SetBinContent(10,0.7361094);
   hNCinFV_stack_7->SetBinContent(11,0.8600219);
   hNCinFV_stack_7->SetBinContent(12,1.27001);
   hNCinFV_stack_7->SetBinContent(13,1.654498);
   hNCinFV_stack_7->SetBinContent(14,1.144303);
   hNCinFV_stack_7->SetBinContent(15,1.033141);
   hNCinFV_stack_7->SetBinContent(16,1.25726);
   hNCinFV_stack_7->SetBinContent(17,1.530586);
   hNCinFV_stack_7->SetBinContent(18,1.556086);
   hNCinFV_stack_7->SetBinContent(19,1.193509);
   hNCinFV_stack_7->SetBinContent(20,1.222599);
   hNCinFV_stack_7->SetBinContent(21,1.084141);
   hNCinFV_stack_7->SetBinContent(22,1.813072);
   hNCinFV_stack_7->SetBinContent(23,1.330172);
   hNCinFV_stack_7->SetBinContent(24,0.9857292);
   hNCinFV_stack_7->SetBinContent(25,0.1129571);
   hNCinFV_stack_7->SetBinError(1,0.1321654);
   hNCinFV_stack_7->SetBinError(2,0.1711975);
   hNCinFV_stack_7->SetBinError(3,0.2298429);
   hNCinFV_stack_7->SetBinError(4,0.2366772);
   hNCinFV_stack_7->SetBinError(5,0.2939381);
   hNCinFV_stack_7->SetBinError(6,0.2601815);
   hNCinFV_stack_7->SetBinError(7,0.1820636);
   hNCinFV_stack_7->SetBinError(8,0.2893132);
   hNCinFV_stack_7->SetBinError(9,0.1820636);
   hNCinFV_stack_7->SetBinError(10,0.1918937);
   hNCinFV_stack_7->SetBinError(11,0.2109511);
   hNCinFV_stack_7->SetBinError(12,0.2608056);
   hNCinFV_stack_7->SetBinError(13,0.3020159);
   hNCinFV_stack_7->SetBinError(14,0.2517303);
   hNCinFV_stack_7->SetBinError(15,0.2363335);
   hNCinFV_stack_7->SetBinError(16,0.2604937);
   hNCinFV_stack_7->SetBinError(17,0.2890267);
   hNCinFV_stack_7->SetBinError(18,0.2895886);
   hNCinFV_stack_7->SetBinError(19,0.2589288);
   hNCinFV_stack_7->SetBinError(20,0.2476243);
   hNCinFV_stack_7->SetBinError(21,0.2377053);
   hNCinFV_stack_7->SetBinError(22,0.3246998);
   hNCinFV_stack_7->SetBinError(23,0.2736492);
   hNCinFV_stack_7->SetBinError(24,0.221702);
   hNCinFV_stack_7->SetBinError(25,0.0669989);
   hNCinFV_stack_7->SetEntries(744);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hnumuCCinFV_stack_8->SetBinContent(1,1.03034);
   hnumuCCinFV_stack_8->SetBinContent(2,2.072098);
   hnumuCCinFV_stack_8->SetBinContent(3,2.342799);
   hnumuCCinFV_stack_8->SetBinContent(4,2.585336);
   hnumuCCinFV_stack_8->SetBinContent(5,2.243426);
   hnumuCCinFV_stack_8->SetBinContent(6,2.457422);
   hnumuCCinFV_stack_8->SetBinContent(7,2.911574);
   hnumuCCinFV_stack_8->SetBinContent(8,1.685938);
   hnumuCCinFV_stack_8->SetBinContent(9,1.604457);
   hnumuCCinFV_stack_8->SetBinContent(10,1.979725);
   hnumuCCinFV_stack_8->SetBinContent(11,1.813304);
   hnumuCCinFV_stack_8->SetBinContent(12,1.96898);
   hnumuCCinFV_stack_8->SetBinContent(13,1.675374);
   hnumuCCinFV_stack_8->SetBinContent(14,1.416037);
   hnumuCCinFV_stack_8->SetBinContent(15,1.448412);
   hnumuCCinFV_stack_8->SetBinContent(16,2.330862);
   hnumuCCinFV_stack_8->SetBinContent(17,2.637166);
   hnumuCCinFV_stack_8->SetBinContent(18,2.23073);
   hnumuCCinFV_stack_8->SetBinContent(19,2.044556);
   hnumuCCinFV_stack_8->SetBinContent(20,1.686656);
   hnumuCCinFV_stack_8->SetBinContent(21,1.157333);
   hnumuCCinFV_stack_8->SetBinContent(22,1.676455);
   hnumuCCinFV_stack_8->SetBinContent(23,1.72791);
   hnumuCCinFV_stack_8->SetBinContent(24,1.708501);
   hnumuCCinFV_stack_8->SetBinContent(25,0.8316001);
   hnumuCCinFV_stack_8->SetBinError(1,0.2344231);
   hnumuCCinFV_stack_8->SetBinError(2,0.5327552);
   hnumuCCinFV_stack_8->SetBinError(3,0.4713194);
   hnumuCCinFV_stack_8->SetBinError(4,0.4666608);
   hnumuCCinFV_stack_8->SetBinError(5,0.4470748);
   hnumuCCinFV_stack_8->SetBinError(6,0.397612);
   hnumuCCinFV_stack_8->SetBinError(7,0.5993338);
   hnumuCCinFV_stack_8->SetBinError(8,0.372509);
   hnumuCCinFV_stack_8->SetBinError(9,0.3157888);
   hnumuCCinFV_stack_8->SetBinError(10,0.5337393);
   hnumuCCinFV_stack_8->SetBinError(11,0.3310891);
   hnumuCCinFV_stack_8->SetBinError(12,0.3503885);
   hnumuCCinFV_stack_8->SetBinError(13,0.3412484);
   hnumuCCinFV_stack_8->SetBinError(14,0.4541735);
   hnumuCCinFV_stack_8->SetBinError(15,0.2927767);
   hnumuCCinFV_stack_8->SetBinError(16,0.610517);
   hnumuCCinFV_stack_8->SetBinError(17,0.3941009);
   hnumuCCinFV_stack_8->SetBinError(18,0.4044256);
   hnumuCCinFV_stack_8->SetBinError(19,0.3833591);
   hnumuCCinFV_stack_8->SetBinError(20,0.3157678);
   hnumuCCinFV_stack_8->SetBinError(21,0.2535333);
   hnumuCCinFV_stack_8->SetBinError(22,0.3651934);
   hnumuCCinFV_stack_8->SetBinError(23,0.3232043);
   hnumuCCinFV_stack_8->SetBinError(24,0.3967892);
   hnumuCCinFV_stack_8->SetBinError(25,0.2218368);
   hnumuCCinFV_stack_8->SetEntries(1106);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hnueCCinFV_stack_9->SetBinContent(1,0.0900385);
   hnueCCinFV_stack_9->SetBinContent(2,0.2007234);
   hnueCCinFV_stack_9->SetBinContent(3,0.2323639);
   hnueCCinFV_stack_9->SetBinContent(4,0.5450668);
   hnueCCinFV_stack_9->SetBinContent(5,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(6,0.2482246);
   hnueCCinFV_stack_9->SetBinContent(7,0.260947);
   hnueCCinFV_stack_9->SetBinContent(8,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(9,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(10,0.1026158);
   hnueCCinFV_stack_9->SetBinContent(11,0.2663076);
   hnueCCinFV_stack_9->SetBinContent(12,0.1438044);
   hnueCCinFV_stack_9->SetBinContent(13,0.01618055);
   hnueCCinFV_stack_9->SetBinContent(14,0.09661092);
   hnueCCinFV_stack_9->SetBinContent(15,0.2093163);
   hnueCCinFV_stack_9->SetBinContent(16,0.1150966);
   hnueCCinFV_stack_9->SetBinContent(17,0.0417343);
   hnueCCinFV_stack_9->SetBinContent(18,0.193365);
   hnueCCinFV_stack_9->SetBinContent(19,0.08199345);
   hnueCCinFV_stack_9->SetBinContent(20,0.386542);
   hnueCCinFV_stack_9->SetBinContent(21,0.1382906);
   hnueCCinFV_stack_9->SetBinContent(22,0.1300564);
   hnueCCinFV_stack_9->SetBinContent(23,0.01244667);
   hnueCCinFV_stack_9->SetBinContent(24,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(25,0.06195629);
   hnueCCinFV_stack_9->SetBinError(1,0.06508625);
   hnueCCinFV_stack_9->SetBinError(2,0.1083347);
   hnueCCinFV_stack_9->SetBinError(3,0.1200868);
   hnueCCinFV_stack_9->SetBinError(4,0.4739406);
   hnueCCinFV_stack_9->SetBinError(5,0.08761943);
   hnueCCinFV_stack_9->SetBinError(6,0.1214771);
   hnueCCinFV_stack_9->SetBinError(7,0.1190374);
   hnueCCinFV_stack_9->SetBinError(8,0.0127502);
   hnueCCinFV_stack_9->SetBinError(9,0.0127502);
   hnueCCinFV_stack_9->SetBinError(10,0.06631678);
   hnueCCinFV_stack_9->SetBinError(11,0.1279003);
   hnueCCinFV_stack_9->SetBinError(12,0.09367855);
   hnueCCinFV_stack_9->SetBinError(13,0.01618016);
   hnueCCinFV_stack_9->SetBinError(14,0.06662689);
   hnueCCinFV_stack_9->SetBinError(15,0.1131956);
   hnueCCinFV_stack_9->SetBinError(16,0.06987015);
   hnueCCinFV_stack_9->SetBinError(17,0.0241635);
   hnueCCinFV_stack_9->SetBinError(18,0.1073093);
   hnueCCinFV_stack_9->SetBinError(19,0.07040736);
   hnueCCinFV_stack_9->SetBinError(20,0.1550359);
   hnueCCinFV_stack_9->SetBinError(21,0.08879128);
   hnueCCinFV_stack_9->SetBinError(22,0.08111555);
   hnueCCinFV_stack_9->SetBinError(23,0.01244667);
   hnueCCinFV_stack_9->SetBinError(24,0.0127502);
   hnueCCinFV_stack_9->SetBinError(25,0.06195629);
   hnueCCinFV_stack_9->SetEntries(88);

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);
   hmcerror__5->SetBinContent(0,0.149413);
   hmcerror__5->SetBinContent(1,19.41683);
   hmcerror__5->SetBinContent(2,27.47627);
   hmcerror__5->SetBinContent(3,24.89653);
   hmcerror__5->SetBinContent(4,28.80112);
   hmcerror__5->SetBinContent(5,26.70618);
   hmcerror__5->SetBinContent(6,29.22071);
   hmcerror__5->SetBinContent(7,28.25967);
   hmcerror__5->SetBinContent(8,26.80647);
   hmcerror__5->SetBinContent(9,27.88176);
   hmcerror__5->SetBinContent(10,25.01716);
   hmcerror__5->SetBinContent(11,29.0768);
   hmcerror__5->SetBinContent(12,29.57932);
   hmcerror__5->SetBinContent(13,28.82076);
   hmcerror__5->SetBinContent(14,26.51716);
   hmcerror__5->SetBinContent(15,27.73962);
   hmcerror__5->SetBinContent(16,27.88161);
   hmcerror__5->SetBinContent(17,28.17571);
   hmcerror__5->SetBinContent(18,24.9716);
   hmcerror__5->SetBinContent(19,25.02126);
   hmcerror__5->SetBinContent(20,29.68508);
   hmcerror__5->SetBinContent(21,24.01747);
   hmcerror__5->SetBinContent(22,27.804);
   hmcerror__5->SetBinContent(23,27.81399);
   hmcerror__5->SetBinContent(24,25.86379);
   hmcerror__5->SetBinContent(25,9.967394);
   hmcerror__5->SetBinError(0,0.08945557);
   hmcerror__5->SetBinError(1,4.992413);
   hmcerror__5->SetBinError(2,7.322039);
   hmcerror__5->SetBinError(3,5.781106);
   hmcerror__5->SetBinError(4,6.98569);
   hmcerror__5->SetBinError(5,7.093165);
   hmcerror__5->SetBinError(6,6.724625);
   hmcerror__5->SetBinError(7,7.360126);
   hmcerror__5->SetBinError(8,6.499912);
   hmcerror__5->SetBinError(9,6.914554);
   hmcerror__5->SetBinError(10,6.082509);
   hmcerror__5->SetBinError(11,6.418139);
   hmcerror__5->SetBinError(12,8.739834);
   hmcerror__5->SetBinError(13,7.670845);
   hmcerror__5->SetBinError(14,6.680004);
   hmcerror__5->SetBinError(15,6.29948);
   hmcerror__5->SetBinError(16,6.6415);
   hmcerror__5->SetBinError(17,6.108426);
   hmcerror__5->SetBinError(18,6.029475);
   hmcerror__5->SetBinError(19,5.730707);
   hmcerror__5->SetBinError(20,7.455345);
   hmcerror__5->SetBinError(21,5.872961);
   hmcerror__5->SetBinError(22,7.183093);
   hmcerror__5->SetBinError(23,6.328064);
   hmcerror__5->SetBinError(24,6.330974);
   hmcerror__5->SetBinError(25,3.41777);
   hmcerror__5->SetBinError(26,0.125509);
   hmcerror__5->SetEntries(648.6285);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3005[25] = {
   21,
   63,
   105,
   147,
   189,
   231,
   273,
   315,
   357,
   399,
   441,
   483,
   525,
   567,
   609,
   651,
   693,
   735,
   777,
   819,
   861,
   903,
   945,
   987,
   1029};
   Double_t _fy3005[25] = {
   27,
   28,
   21,
   14,
   22,
   20,
   18,
   23,
   16,
   15,
   25,
   26,
   22,
   23,
   30,
   23,
   19,
   19,
   26,
   27,
   16,
   19,
   26,
   31,
   9};
   Double_t _felx3005[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fely3005[25] = {
   5.3414,
   5.4358,
   4.7354,
   3.9102,
   4.8417,
   4.6266,
   4.4008,
   4.9457,
   4.1628,
   4.0385,
   5.1474,
   5.2453,
   4.8417,
   4.9457,
   5.6197,
   4.9457,
   4.5151,
   4.5151,
   5.2453,
   5.3414,
   4.1628,
   4.5151,
   5.2453,
   5.7094,
   3.19354};
   Double_t _fehx3005[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fehy3005[25] = {
   5.1322,
   5.2271,
   4.5229,
   3.6898,
   4.6299,
   4.4133,
   4.1858,
   4.7346,
   3.9454,
   3.8197,
   4.9374,
   5.0358,
   4.6299,
   4.7346,
   5.4117,
   4.7346,
   4.3011,
   4.3011,
   5.0358,
   5.1322,
   3.9454,
   4.3011,
   5.0358,
   5.5017,
   2.9582};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1155);
   Graph_Graph3005->SetMinimum(2.736936);
   Graph_Graph3005->SetMaximum(39.57122);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.83#pm0.04(data err)#pm0.16(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.55/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 545.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 14.0","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 50.5","F");

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.4","F");

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 66.4","F");

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  333.6","F");

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 108.0","F");

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 27.6","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 47.3","F");

   ci = 1450;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 3.7","F");

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_10_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-161.7,-0.5333333,1185.8,2.133333);
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
   
   Double_t _fx3006[25] = {
   21,
   63,
   105,
   147,
   189,
   231,
   273,
   315,
   357,
   399,
   441,
   483,
   525,
   567,
   609,
   651,
   693,
   735,
   777,
   819,
   861,
   903,
   945,
   987,
   1029};
   Double_t _fy3006[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fely3006[25] = {
   0.2571179,
   0.2664859,
   0.2322053,
   0.2425492,
   0.2656001,
   0.2301322,
   0.2604463,
   0.2424755,
   0.2479956,
   0.2431335,
   0.2207306,
   0.2954711,
   0.2661569,
   0.2519125,
   0.2270933,
   0.2382036,
   0.2167976,
   0.2414533,
   0.2290335,
   0.2511479,
   0.2445287,
   0.2583475,
   0.2275137,
   0.2447814,
   0.3428951};
   Double_t _fehx3006[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fehy3006[25] = {
   0.2571179,
   0.2664859,
   0.2322053,
   0.2425492,
   0.2656001,
   0.2301322,
   0.2604463,
   0.2424755,
   0.2479956,
   0.2431335,
   0.2207306,
   0.2954711,
   0.2661569,
   0.2519125,
   0.2270933,
   0.2382036,
   0.2167976,
   0.2414533,
   0.2290335,
   0.2511479,
   0.2445287,
   0.2583475,
   0.2275137,
   0.2447814,
   0.3428951};
   grae = new TGraphAsymmErrors(25,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,1155);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Vertex Z [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3007[25] = {
   21,
   63,
   105,
   147,
   189,
   231,
   273,
   315,
   357,
   399,
   441,
   483,
   525,
   567,
   609,
   651,
   693,
   735,
   777,
   819,
   861,
   903,
   945,
   987,
   1029};
   Double_t _fy3007[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fely3007[25] = {
   0.202018,
   0.1922945,
   0.186656,
   0.1896298,
   0.2086788,
   0.1842772,
   0.1968339,
   0.2099949,
   0.1913888,
   0.2124222,
   0.190953,
   0.1966225,
   0.2142937,
   0.2076969,
   0.1976667,
   0.194835,
   0.1768837,
   0.1897926,
   0.1917335,
   0.2088678,
   0.2069512,
   0.2055931,
   0.1980726,
   0.2042599,
   0.2110222};
   Double_t _fehx3007[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fehy3007[25] = {
   0.202018,
   0.1922945,
   0.186656,
   0.1896298,
   0.2086788,
   0.1842772,
   0.1968339,
   0.2099949,
   0.1913888,
   0.2124222,
   0.190953,
   0.1966225,
   0.2142937,
   0.2076969,
   0.1976667,
   0.194835,
   0.1768837,
   0.1897926,
   0.1917335,
   0.2088678,
   0.2069512,
   0.2055931,
   0.1980726,
   0.2042599,
   0.2110222};
   grae = new TGraphAsymmErrors(25,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,1155);
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
   
   Double_t _fx3008[25] = {
   21,
   63,
   105,
   147,
   189,
   231,
   273,
   315,
   357,
   399,
   441,
   483,
   525,
   567,
   609,
   651,
   693,
   735,
   777,
   819,
   861,
   903,
   945,
   987,
   1029};
   Double_t _fy3008[25] = {
   1.390546,
   1.019061,
   0.8434911,
   0.4860922,
   0.8237792,
   0.6844461,
   0.6369502,
   0.8580019,
   0.5738518,
   0.5995885,
   0.8597921,
   0.8789924,
   0.7633386,
   0.867363,
   1.081486,
   0.8249164,
   0.6743397,
   0.7608642,
   1.039116,
   0.9095479,
   0.6661817,
   0.683355,
   0.9347813,
   1.198587,
   0.9029442};
   Double_t _felx3008[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fely3008[25] = {
   0.2750913,
   0.1978362,
   0.1902032,
   0.1357655,
   0.1812951,
   0.1583329,
   0.1557272,
   0.1844965,
   0.1493019,
   0.1614292,
   0.1770278,
   0.17733,
   0.1679935,
   0.1865094,
   0.2025875,
   0.1773821,
   0.160248,
   0.1808094,
   0.2096337,
   0.1799355,
   0.1733238,
   0.1623903,
   0.1885849,
   0.2207488,
   0.3203987};
   Double_t _fehx3008[25] = {
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21,
   21};
   Double_t _fehy3008[25] = {
   0.2643171,
   0.1902405,
   0.1816679,
   0.1281131,
   0.1733643,
   0.1510333,
   0.1481192,
   0.1766215,
   0.1415047,
   0.1526832,
   0.1698055,
   0.1702473,
   0.1606446,
   0.1785486,
   0.1950892,
   0.1698108,
   0.1526528,
   0.1722396,
   0.2012609,
   0.1728882,
   0.1642721,
   0.1546936,
   0.1810528,
   0.2127183,
   0.2967877};
   grae = new TGraphAsymmErrors(25,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1155);
   Graph_Graph3008->SetMinimum(0.219873);
   Graph_Graph3008->SetMaximum(1.785317);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_bnb_10_reco_nuvtxZ_all",25,0,1050);

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
   TLine *line = new TLine(0,1,1050,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
