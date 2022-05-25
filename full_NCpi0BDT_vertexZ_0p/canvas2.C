#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed May 25 16:49:11 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",60,83,1200,900);
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
   pad1->Range(-169.2308,-2.685815,1241.026,226.3152);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__4->SetBinContent(0,0.4188362);
   hmc__4->SetBinContent(1,89.1499);
   hmc__4->SetBinContent(2,114.0595);
   hmc__4->SetBinContent(3,105.6333);
   hmc__4->SetBinContent(4,111.5682);
   hmc__4->SetBinContent(5,118.4837);
   hmc__4->SetBinContent(6,111.8779);
   hmc__4->SetBinContent(7,119.8618);
   hmc__4->SetBinContent(8,134.2907);
   hmc__4->SetBinContent(9,118.707);
   hmc__4->SetBinContent(10,125.6893);
   hmc__4->SetBinContent(11,131.691);
   hmc__4->SetBinContent(12,111.1565);
   hmc__4->SetBinContent(13,118.8399);
   hmc__4->SetBinContent(14,134.0324);
   hmc__4->SetBinContent(15,118.645);
   hmc__4->SetBinContent(16,122.812);
   hmc__4->SetBinContent(17,119.9522);
   hmc__4->SetBinContent(18,118.4272);
   hmc__4->SetBinContent(19,119.4311);
   hmc__4->SetBinContent(20,121.7568);
   hmc__4->SetBinContent(21,112.6577);
   hmc__4->SetBinContent(22,112.988);
   hmc__4->SetBinContent(23,111.7569);
   hmc__4->SetBinContent(24,115.735);
   hmc__4->SetBinContent(25,110.9065);
   hmc__4->SetBinContent(26,113.8548);
   hmc__4->SetBinContent(27,111.3696);
   hmc__4->SetBinContent(28,115.1157);
   hmc__4->SetBinContent(29,107.5204);
   hmc__4->SetBinContent(30,63.34767);
   hmc__4->SetBinContent(31,1.860819);
   hmc__4->SetBinError(0,0.277838);
   hmc__4->SetBinError(1,21.49276);
   hmc__4->SetBinError(2,26.64621);
   hmc__4->SetBinError(3,27.59781);
   hmc__4->SetBinError(4,26.17937);
   hmc__4->SetBinError(5,26.73604);
   hmc__4->SetBinError(6,28.79653);
   hmc__4->SetBinError(7,26.77577);
   hmc__4->SetBinError(8,29.81934);
   hmc__4->SetBinError(9,28.59505);
   hmc__4->SetBinError(10,28.31083);
   hmc__4->SetBinError(11,30.21962);
   hmc__4->SetBinError(12,25.83578);
   hmc__4->SetBinError(13,28.37873);
   hmc__4->SetBinError(14,32.3768);
   hmc__4->SetBinError(15,29.75668);
   hmc__4->SetBinError(16,31.33131);
   hmc__4->SetBinError(17,29.19932);
   hmc__4->SetBinError(18,28.85953);
   hmc__4->SetBinError(19,28.99409);
   hmc__4->SetBinError(20,27.56856);
   hmc__4->SetBinError(21,25.14437);
   hmc__4->SetBinError(22,27.43673);
   hmc__4->SetBinError(23,27.78768);
   hmc__4->SetBinError(24,28.32504);
   hmc__4->SetBinError(25,28.18797);
   hmc__4->SetBinError(26,26.99727);
   hmc__4->SetBinError(27,28.03492);
   hmc__4->SetBinError(28,29.04251);
   hmc__4->SetBinError(29,27.71148);
   hmc__4->SetBinError(30,17.11011);
   hmc__4->SetBinError(31,1.848628);
   hmc__4->SetBinError(32,0.4212968);
   hmc__4->SetBinError(33,0.4212968);
   hmc__4->SetMinimum(-2.685815);
   hmc__4->SetMaximum(214.8652);
   hmc__4->SetEntries(3396.741);
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
   hs2_stack_2->SetMinimum(-1.310782e-08);
   hs2_stack_2->SetMaximum(141.0052);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,1.91052);
   hbadmatch_stack_1->SetBinContent(2,2.029367);
   hbadmatch_stack_1->SetBinContent(3,2.458047);
   hbadmatch_stack_1->SetBinContent(4,5.820559);
   hbadmatch_stack_1->SetBinContent(5,6.080332);
   hbadmatch_stack_1->SetBinContent(6,1.456738);
   hbadmatch_stack_1->SetBinContent(7,3.626779);
   hbadmatch_stack_1->SetBinContent(8,4.024885);
   hbadmatch_stack_1->SetBinContent(9,3.425889);
   hbadmatch_stack_1->SetBinContent(10,2.220109);
   hbadmatch_stack_1->SetBinContent(11,3.194339);
   hbadmatch_stack_1->SetBinContent(12,3.717558);
   hbadmatch_stack_1->SetBinContent(13,2.43254);
   hbadmatch_stack_1->SetBinContent(14,3.053935);
   hbadmatch_stack_1->SetBinContent(15,0.6121498);
   hbadmatch_stack_1->SetBinContent(16,2.000174);
   hbadmatch_stack_1->SetBinContent(17,3.313199);
   hbadmatch_stack_1->SetBinContent(18,2.579082);
   hbadmatch_stack_1->SetBinContent(19,2.783639);
   hbadmatch_stack_1->SetBinContent(20,4.31655);
   hbadmatch_stack_1->SetBinContent(21,3.564129);
   hbadmatch_stack_1->SetBinContent(22,2.430514);
   hbadmatch_stack_1->SetBinContent(23,2.339645);
   hbadmatch_stack_1->SetBinContent(24,1.773417);
   hbadmatch_stack_1->SetBinContent(25,1.680677);
   hbadmatch_stack_1->SetBinContent(26,2.30395);
   hbadmatch_stack_1->SetBinContent(27,1.985448);
   hbadmatch_stack_1->SetBinContent(28,1.611922);
   hbadmatch_stack_1->SetBinContent(29,0.7552501);
   hbadmatch_stack_1->SetBinContent(30,1.883705);
   hbadmatch_stack_1->SetBinContent(31,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.6511312);
   hbadmatch_stack_1->SetBinError(2,0.7426391);
   hbadmatch_stack_1->SetBinError(3,0.8154576);
   hbadmatch_stack_1->SetBinError(4,1.621772);
   hbadmatch_stack_1->SetBinError(5,1.35351);
   hbadmatch_stack_1->SetBinError(6,0.552794);
   hbadmatch_stack_1->SetBinError(7,1.087811);
   hbadmatch_stack_1->SetBinError(8,1.062226);
   hbadmatch_stack_1->SetBinError(9,1.03733);
   hbadmatch_stack_1->SetBinError(10,0.8166838);
   hbadmatch_stack_1->SetBinError(11,0.9303952);
   hbadmatch_stack_1->SetBinError(12,2.057043);
   hbadmatch_stack_1->SetBinError(13,0.795795);
   hbadmatch_stack_1->SetBinError(14,0.9330859);
   hbadmatch_stack_1->SetBinError(15,0.3539944);
   hbadmatch_stack_1->SetBinError(16,0.6806699);
   hbadmatch_stack_1->SetBinError(17,0.9512362);
   hbadmatch_stack_1->SetBinError(18,0.8432607);
   hbadmatch_stack_1->SetBinError(19,0.8841214);
   hbadmatch_stack_1->SetBinError(20,1.147342);
   hbadmatch_stack_1->SetBinError(21,0.9582672);
   hbadmatch_stack_1->SetBinError(22,0.7951217);
   hbadmatch_stack_1->SetBinError(23,0.7189865);
   hbadmatch_stack_1->SetBinError(24,0.7090565);
   hbadmatch_stack_1->SetBinError(25,0.5978342);
   hbadmatch_stack_1->SetBinError(26,0.7080718);
   hbadmatch_stack_1->SetBinError(27,0.6754638);
   hbadmatch_stack_1->SetBinError(28,0.6796691);
   hbadmatch_stack_1->SetBinError(29,0.4495526);
   hbadmatch_stack_1->SetBinError(30,0.7897905);
   hbadmatch_stack_1->SetBinError(31,0.1950249);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,2.841783);
   hext_stack_2->SetBinContent(2,15.71438);
   hext_stack_2->SetBinContent(3,11.74218);
   hext_stack_2->SetBinContent(4,10.16768);
   hext_stack_2->SetBinContent(5,13.08449);
   hext_stack_2->SetBinContent(6,8.477858);
   hext_stack_2->SetBinContent(7,14.6215);
   hext_stack_2->SetBinContent(8,17.86705);
   hext_stack_2->SetBinContent(9,7.474365);
   hext_stack_2->SetBinContent(10,7.041816);
   hext_stack_2->SetBinContent(11,16.52757);
   hext_stack_2->SetBinContent(12,6.090166);
   hext_stack_2->SetBinContent(13,7.697792);
   hext_stack_2->SetBinContent(14,11.56625);
   hext_stack_2->SetBinContent(15,6.945253);
   hext_stack_2->SetBinContent(16,9.368849);
   hext_stack_2->SetBinContent(17,7.918446);
   hext_stack_2->SetBinContent(18,6.971204);
   hext_stack_2->SetBinContent(19,8.503808);
   hext_stack_2->SetBinContent(20,10.8915);
   hext_stack_2->SetBinContent(21,14.38649);
   hext_stack_2->SetBinContent(22,4.94539);
   hext_stack_2->SetBinContent(23,3.401196);
   hext_stack_2->SetBinContent(24,12.89855);
   hext_stack_2->SetBinContent(25,5.034772);
   hext_stack_2->SetBinContent(26,7.810293);
   hext_stack_2->SetBinContent(27,5.904221);
   hext_stack_2->SetBinContent(28,9.182903);
   hext_stack_2->SetBinContent(29,8.891638);
   hext_stack_2->SetBinContent(30,2.517386);
   hext_stack_2->SetBinContent(31,0.4065989);
   hext_stack_2->SetBinError(1,1.011007);
   hext_stack_2->SetBinError(2,2.895622);
   hext_stack_2->SetBinError(3,2.593339);
   hext_stack_2->SetBinError(4,2.264322);
   hext_stack_2->SetBinError(5,2.531913);
   hext_stack_2->SetBinError(6,2.034329);
   hext_stack_2->SetBinError(7,2.6857);
   hext_stack_2->SetBinError(8,3.172882);
   hext_stack_2->SetBinError(9,1.680994);
   hext_stack_2->SetBinError(10,1.76887);
   hext_stack_2->SetBinError(11,2.952164);
   hext_stack_2->SetBinError(12,1.486471);
   hext_stack_2->SetBinError(13,1.771487);
   hext_stack_2->SetBinError(14,2.311038);
   hext_stack_2->SetBinError(15,1.863119);
   hext_stack_2->SetBinError(16,2.096212);
   hext_stack_2->SetBinError(17,1.946);
   hext_stack_2->SetBinError(18,1.732839);
   hext_stack_2->SetBinError(19,1.915728);
   hext_stack_2->SetBinError(20,2.366202);
   hext_stack_2->SetBinError(21,2.639439);
   hext_stack_2->SetBinError(22,1.405318);
   hext_stack_2->SetBinError(23,1.172056);
   hext_stack_2->SetBinError(24,2.625644);
   hext_stack_2->SetBinError(25,1.354181);
   hext_stack_2->SetBinError(26,2.048245);
   hext_stack_2->SetBinError(27,1.641043);
   hext_stack_2->SetBinError(28,2.208514);
   hext_stack_2->SetBinError(29,2.025492);
   hext_stack_2->SetBinError(30,0.9575503);
   hext_stack_2->SetBinError(31,0.4065989);
   hext_stack_2->SetEntries(621);

   ci = 1445;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,1.449078);
   hdirt_stack_3->SetBinContent(2,0.9443433);
   hdirt_stack_3->SetBinContent(3,1.310356);
   hdirt_stack_3->SetBinContent(4,1.538899);
   hdirt_stack_3->SetBinContent(5,1.081287);
   hdirt_stack_3->SetBinContent(6,0.2761429);
   hdirt_stack_3->SetBinContent(7,0.6143302);
   hdirt_stack_3->SetBinContent(8,0.5868663);
   hdirt_stack_3->SetBinContent(9,0.3896828);
   hdirt_stack_3->SetBinContent(10,1.771966);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.2620035);
   hdirt_stack_3->SetBinContent(13,0.4794168);
   hdirt_stack_3->SetBinContent(14,0.5388689);
   hdirt_stack_3->SetBinContent(15,0.2188956);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.6763744);
   hdirt_stack_3->SetBinContent(20,0.6951543);
   hdirt_stack_3->SetBinContent(21,0.3790882);
   hdirt_stack_3->SetBinContent(22,0.2188956);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(26,0.2620342);
   hdirt_stack_3->SetBinContent(27,0.4377912);
   hdirt_stack_3->SetBinContent(28,1.132567);
   hdirt_stack_3->SetBinError(1,0.6270668);
   hdirt_stack_3->SetBinError(2,0.4286647);
   hdirt_stack_3->SetBinError(3,0.504928);
   hdirt_stack_3->SetBinError(4,0.7106128);
   hdirt_stack_3->SetBinError(5,0.626654);
   hdirt_stack_3->SetBinError(6,0.1952625);
   hdirt_stack_3->SetBinError(7,0.39051);
   hdirt_stack_3->SetBinError(8,0.3503208);
   hdirt_stack_3->SetBinError(9,0.2870053);
   hdirt_stack_3->SetBinError(10,1.059025);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.2620035);
   hdirt_stack_3->SetBinError(13,0.3402743);
   hdirt_stack_3->SetBinError(14,0.4239131);
   hdirt_stack_3->SetBinError(15,0.2188956);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.4782689);
   hdirt_stack_3->SetBinError(20,0.4258516);
   hdirt_stack_3->SetBinError(21,0.2712507);
   hdirt_stack_3->SetBinError(22,0.2188956);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(26,0.2620342);
   hdirt_stack_3->SetBinError(27,0.3095651);
   hdirt_stack_3->SetBinError(28,0.5640848);
   hdirt_stack_3->SetEntries(69);

   ci = 1446;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(1,21.89114);
   houtFV_stack_4->SetBinContent(2,9.666571);
   houtFV_stack_4->SetBinContent(3,6.635442);
   houtFV_stack_4->SetBinContent(4,5.98694);
   houtFV_stack_4->SetBinContent(5,4.578577);
   houtFV_stack_4->SetBinContent(6,5.529772);
   houtFV_stack_4->SetBinContent(7,5.555021);
   houtFV_stack_4->SetBinContent(8,8.973627);
   houtFV_stack_4->SetBinContent(9,7.43285);
   houtFV_stack_4->SetBinContent(10,6.58524);
   houtFV_stack_4->SetBinContent(11,8.632618);
   houtFV_stack_4->SetBinContent(12,6.379117);
   houtFV_stack_4->SetBinContent(13,6.281137);
   houtFV_stack_4->SetBinContent(14,6.048181);
   houtFV_stack_4->SetBinContent(15,5.816696);
   houtFV_stack_4->SetBinContent(16,7.441761);
   houtFV_stack_4->SetBinContent(17,6.253598);
   houtFV_stack_4->SetBinContent(18,5.731559);
   houtFV_stack_4->SetBinContent(19,8.722721);
   houtFV_stack_4->SetBinContent(20,6.089279);
   houtFV_stack_4->SetBinContent(21,9.732728);
   houtFV_stack_4->SetBinContent(22,6.592519);
   houtFV_stack_4->SetBinContent(23,6.744086);
   houtFV_stack_4->SetBinContent(24,8.755222);
   houtFV_stack_4->SetBinContent(25,6.53996);
   houtFV_stack_4->SetBinContent(26,4.437248);
   houtFV_stack_4->SetBinContent(27,7.892896);
   houtFV_stack_4->SetBinContent(28,4.877538);
   houtFV_stack_4->SetBinContent(29,5.867009);
   houtFV_stack_4->SetBinContent(30,4.500112);
   houtFV_stack_4->SetBinContent(31,0.1967154);
   houtFV_stack_4->SetBinError(1,2.401708);
   houtFV_stack_4->SetBinError(2,1.573591);
   houtFV_stack_4->SetBinError(3,1.300676);
   houtFV_stack_4->SetBinError(4,1.239128);
   houtFV_stack_4->SetBinError(5,1.118261);
   houtFV_stack_4->SetBinError(6,1.109609);
   houtFV_stack_4->SetBinError(7,1.129655);
   houtFV_stack_4->SetBinError(8,1.506314);
   houtFV_stack_4->SetBinError(9,1.309127);
   houtFV_stack_4->SetBinError(10,1.286477);
   houtFV_stack_4->SetBinError(11,1.446181);
   houtFV_stack_4->SetBinError(12,1.197433);
   houtFV_stack_4->SetBinError(13,1.310959);
   houtFV_stack_4->SetBinError(14,1.199431);
   houtFV_stack_4->SetBinError(15,1.176979);
   houtFV_stack_4->SetBinError(16,1.357153);
   houtFV_stack_4->SetBinError(17,1.242441);
   houtFV_stack_4->SetBinError(18,1.127792);
   houtFV_stack_4->SetBinError(19,1.573013);
   houtFV_stack_4->SetBinError(20,1.246469);
   houtFV_stack_4->SetBinError(21,1.665744);
   houtFV_stack_4->SetBinError(22,1.294695);
   houtFV_stack_4->SetBinError(23,1.267185);
   houtFV_stack_4->SetBinError(24,1.443254);
   houtFV_stack_4->SetBinError(25,1.241814);
   houtFV_stack_4->SetBinError(26,1.125588);
   houtFV_stack_4->SetBinError(27,1.433336);
   houtFV_stack_4->SetBinError(28,1.100497);
   houtFV_stack_4->SetBinError(29,1.19105);
   houtFV_stack_4->SetBinError(30,1.137366);
   houtFV_stack_4->SetBinError(31,0.1967154);
   houtFV_stack_4->SetEntries(931);

   ci = 1447;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.445904);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4593539);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5711221);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.3477539);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2422936);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1818869);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2625936);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.1731161);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1448;
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,0.4188362);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,32.80521);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,51.02084);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,48.96272);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,47.49812);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,57.11799);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,58.54073);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,60.38763);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,58.51386);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,62.80796);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,66.09969);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,62.6887);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,62.62479);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,65.38841);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,70.03942);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,62.97718);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,67.09991);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,66.48415);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,66.44762);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,65.54649);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,61.84228);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,48.94344);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,55.12882);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,63.3382);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,55.19373);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,63.2057);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,65.17386);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,63.55679);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(28,68.17861);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(29,58.29482);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(30,29.8744);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(31,0.2789998);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.277838);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,1.844654);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.335927);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.318576);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.284259);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.441803);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.472624);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.525691);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.55573);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.580848);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.676849);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,2.498006);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.56705);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.630195);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.760727);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.56753);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.622041);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.668439);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.688541);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.647769);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.623736);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.294898);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.481672);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.619817);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.420953);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,2.575854);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,2.685813);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,2.624231);
   hNCpi0inFVnoncoh_stack_6->SetBinError(28,2.791931);
   hNCpi0inFVnoncoh_stack_6->SetBinError(29,2.54506);
   hNCpi0inFVnoncoh_stack_6->SetBinError(30,1.850834);
   hNCpi0inFVnoncoh_stack_6->SetBinError(31,0.0882275);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

   ci = 1449;
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
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_7->SetBinContent(1,14.35423);
   hCCpi0inFV_stack_7->SetBinContent(2,18.30047);
   hCCpi0inFV_stack_7->SetBinContent(3,14.68992);
   hCCpi0inFV_stack_7->SetBinContent(4,17.79998);
   hCCpi0inFV_stack_7->SetBinContent(5,22.5885);
   hCCpi0inFV_stack_7->SetBinContent(6,18.45991);
   hCCpi0inFV_stack_7->SetBinContent(7,17.73434);
   hCCpi0inFV_stack_7->SetBinContent(8,21.68115);
   hCCpi0inFV_stack_7->SetBinContent(9,18.83176);
   hCCpi0inFV_stack_7->SetBinContent(10,24.09271);
   hCCpi0inFV_stack_7->SetBinContent(11,22.05696);
   hCCpi0inFV_stack_7->SetBinContent(12,17.2389);
   hCCpi0inFV_stack_7->SetBinContent(13,19.49271);
   hCCpi0inFV_stack_7->SetBinContent(14,22.59733);
   hCCpi0inFV_stack_7->SetBinContent(15,24.53733);
   hCCpi0inFV_stack_7->SetBinContent(16,17.9672);
   hCCpi0inFV_stack_7->SetBinContent(17,18.65441);
   hCCpi0inFV_stack_7->SetBinContent(18,20.5811);
   hCCpi0inFV_stack_7->SetBinContent(19,17.09253);
   hCCpi0inFV_stack_7->SetBinContent(20,19.68956);
   hCCpi0inFV_stack_7->SetBinContent(21,18.94024);
   hCCpi0inFV_stack_7->SetBinContent(22,21.9375);
   hCCpi0inFV_stack_7->SetBinContent(23,16.79438);
   hCCpi0inFV_stack_7->SetBinContent(24,16.98837);
   hCCpi0inFV_stack_7->SetBinContent(25,18.54366);
   hCCpi0inFV_stack_7->SetBinContent(26,19.40223);
   hCCpi0inFV_stack_7->SetBinContent(27,15.05823);
   hCCpi0inFV_stack_7->SetBinContent(28,17.53245);
   hCCpi0inFV_stack_7->SetBinContent(29,17.15363);
   hCCpi0inFV_stack_7->SetBinContent(30,15.79217);
   hCCpi0inFV_stack_7->SetBinContent(31,0.3917402);
   hCCpi0inFV_stack_7->SetBinError(1,1.902263);
   hCCpi0inFV_stack_7->SetBinError(2,2.162081);
   hCCpi0inFV_stack_7->SetBinError(3,1.951937);
   hCCpi0inFV_stack_7->SetBinError(4,2.093362);
   hCCpi0inFV_stack_7->SetBinError(5,2.390633);
   hCCpi0inFV_stack_7->SetBinError(6,2.121586);
   hCCpi0inFV_stack_7->SetBinError(7,2.072149);
   hCCpi0inFV_stack_7->SetBinError(8,2.342176);
   hCCpi0inFV_stack_7->SetBinError(9,2.200458);
   hCCpi0inFV_stack_7->SetBinError(10,2.44854);
   hCCpi0inFV_stack_7->SetBinError(11,2.372171);
   hCCpi0inFV_stack_7->SetBinError(12,2.07683);
   hCCpi0inFV_stack_7->SetBinError(13,2.237632);
   hCCpi0inFV_stack_7->SetBinError(14,2.34051);
   hCCpi0inFV_stack_7->SetBinError(15,2.452779);
   hCCpi0inFV_stack_7->SetBinError(16,2.088777);
   hCCpi0inFV_stack_7->SetBinError(17,2.234907);
   hCCpi0inFV_stack_7->SetBinError(18,2.257848);
   hCCpi0inFV_stack_7->SetBinError(19,2.104777);
   hCCpi0inFV_stack_7->SetBinError(20,2.211226);
   hCCpi0inFV_stack_7->SetBinError(21,2.212738);
   hCCpi0inFV_stack_7->SetBinError(22,2.349468);
   hCCpi0inFV_stack_7->SetBinError(23,2.114245);
   hCCpi0inFV_stack_7->SetBinError(24,2.090365);
   hCCpi0inFV_stack_7->SetBinError(25,2.126189);
   hCCpi0inFV_stack_7->SetBinError(26,2.255693);
   hCCpi0inFV_stack_7->SetBinError(27,1.933497);
   hCCpi0inFV_stack_7->SetBinError(28,2.113411);
   hCCpi0inFV_stack_7->SetBinError(29,2.048523);
   hCCpi0inFV_stack_7->SetBinError(30,2.026744);
   hCCpi0inFV_stack_7->SetBinError(31,0.2770047);
   hCCpi0inFV_stack_7->SetEntries(2425);

   ci = 1450;
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
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_8->SetBinContent(1,4.826965);
   hNCinFV_stack_8->SetBinContent(2,4.290072);
   hNCinFV_stack_8->SetBinContent(3,5.520237);
   hNCinFV_stack_8->SetBinContent(4,5.034906);
   hNCinFV_stack_8->SetBinContent(5,4.738447);
   hNCinFV_stack_8->SetBinContent(6,6.795202);
   hNCinFV_stack_8->SetBinContent(7,4.941316);
   hNCinFV_stack_8->SetBinContent(8,4.935162);
   hNCinFV_stack_8->SetBinContent(9,5.808703);
   hNCinFV_stack_8->SetBinContent(10,5.118353);
   hNCinFV_stack_8->SetBinContent(11,5.755598);
   hNCinFV_stack_8->SetBinContent(12,4.593294);
   hNCinFV_stack_8->SetBinContent(13,2.877799);
   hNCinFV_stack_8->SetBinContent(14,7.972721);
   hNCinFV_stack_8->SetBinContent(15,5.036597);
   hNCinFV_stack_8->SetBinContent(16,5.22824);
   hNCinFV_stack_8->SetBinContent(17,5.136341);
   hNCinFV_stack_8->SetBinContent(18,4.893135);
   hNCinFV_stack_8->SetBinContent(19,6.548614);
   hNCinFV_stack_8->SetBinContent(20,5.57349);
   hNCinFV_stack_8->SetBinContent(21,5.71019);
   hNCinFV_stack_8->SetBinContent(22,6.737485);
   hNCinFV_stack_8->SetBinContent(23,4.256497);
   hNCinFV_stack_8->SetBinContent(24,8.783014);
   hNCinFV_stack_8->SetBinContent(25,5.521927);
   hNCinFV_stack_8->SetBinContent(26,4.010992);
   hNCinFV_stack_8->SetBinContent(27,4.8365);
   hNCinFV_stack_8->SetBinContent(28,4.840964);
   hNCinFV_stack_8->SetBinContent(29,4.196482);
   hNCinFV_stack_8->SetBinContent(30,3.124387);
   hNCinFV_stack_8->SetBinError(1,1.178038);
   hNCinFV_stack_8->SetBinError(2,1.110565);
   hNCinFV_stack_8->SetBinError(3,1.194104);
   hNCinFV_stack_8->SetBinError(4,1.11017);
   hNCinFV_stack_8->SetBinError(5,1.12831);
   hNCinFV_stack_8->SetBinError(6,1.255698);
   hNCinFV_stack_8->SetBinError(7,1.056316);
   hNCinFV_stack_8->SetBinError(8,1.14533);
   hNCinFV_stack_8->SetBinError(9,1.193796);
   hNCinFV_stack_8->SetBinError(10,1.159819);
   hNCinFV_stack_8->SetBinError(11,1.272369);
   hNCinFV_stack_8->SetBinError(12,1.093343);
   hNCinFV_stack_8->SetBinError(13,0.8997006);
   hNCinFV_stack_8->SetBinError(14,1.416426);
   hNCinFV_stack_8->SetBinError(15,1.110469);
   hNCinFV_stack_8->SetBinError(16,1.126877);
   hNCinFV_stack_8->SetBinError(17,1.074168);
   hNCinFV_stack_8->SetBinError(18,1.075229);
   hNCinFV_stack_8->SetBinError(19,1.256078);
   hNCinFV_stack_8->SetBinError(20,1.177947);
   hNCinFV_stack_8->SetBinError(21,1.209104);
   hNCinFV_stack_8->SetBinError(22,1.346011);
   hNCinFV_stack_8->SetBinError(23,1.039712);
   hNCinFV_stack_8->SetBinError(24,1.519681);
   hNCinFV_stack_8->SetBinError(25,1.194382);
   hNCinFV_stack_8->SetBinError(26,0.9402083);
   hNCinFV_stack_8->SetBinError(27,1.0923);
   hNCinFV_stack_8->SetBinError(28,0.9982379);
   hNCinFV_stack_8->SetBinError(29,1.056731);
   hNCinFV_stack_8->SetBinError(30,0.89917);
   hNCinFV_stack_8->SetEntries(671);

   ci = 1451;
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
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_9->SetBinContent(1,8.792629);
   hnumuCCinFV_stack_9->SetBinContent(2,11.5299);
   hnumuCCinFV_stack_9->SetBinContent(3,13.68815);
   hnumuCCinFV_stack_9->SetBinContent(4,17.28364);
   hnumuCCinFV_stack_9->SetBinContent(5,8.543962);
   hnumuCCinFV_stack_9->SetBinContent(6,11.71635);
   hnumuCCinFV_stack_9->SetBinContent(7,10.99298);
   hnumuCCinFV_stack_9->SetBinContent(8,16.32196);
   hnumuCCinFV_stack_9->SetBinContent(9,12.39626);
   hnumuCCinFV_stack_9->SetBinContent(10,11.43598);
   hnumuCCinFV_stack_9->SetBinContent(11,11.55278);
   hnumuCCinFV_stack_9->SetBinContent(12,9.252864);
   hnumuCCinFV_stack_9->SetBinContent(13,12.7853);
   hnumuCCinFV_stack_9->SetBinContent(14,11.73536);
   hnumuCCinFV_stack_9->SetBinContent(15,12.08123);
   hnumuCCinFV_stack_9->SetBinContent(16,12.0155);
   hnumuCCinFV_stack_9->SetBinContent(17,11.34394);
   hnumuCCinFV_stack_9->SetBinContent(18,10.0946);
   hnumuCCinFV_stack_9->SetBinContent(19,9.522322);
   hnumuCCinFV_stack_9->SetBinContent(20,11.81499);
   hnumuCCinFV_stack_9->SetBinContent(21,10.38347);
   hnumuCCinFV_stack_9->SetBinContent(22,13.61588);
   hnumuCCinFV_stack_9->SetBinContent(23,14.31809);
   hnumuCCinFV_stack_9->SetBinContent(24,9.875486);
   hnumuCCinFV_stack_9->SetBinContent(25,9.273082);
   hnumuCCinFV_stack_9->SetBinContent(26,9.429052);
   hnumuCCinFV_stack_9->SetBinContent(27,10.44785);
   hnumuCCinFV_stack_9->SetBinContent(28,7.506219);
   hnumuCCinFV_stack_9->SetBinContent(29,9.852821);
   hnumuCCinFV_stack_9->SetBinContent(30,5.627617);
   hnumuCCinFV_stack_9->SetBinContent(31,0.3917402);
   hnumuCCinFV_stack_9->SetBinError(1,1.821372);
   hnumuCCinFV_stack_9->SetBinError(2,2.398981);
   hnumuCCinFV_stack_9->SetBinError(3,2.126762);
   hnumuCCinFV_stack_9->SetBinError(4,2.34894);
   hnumuCCinFV_stack_9->SetBinError(5,1.531358);
   hnumuCCinFV_stack_9->SetBinError(6,2.061857);
   hnumuCCinFV_stack_9->SetBinError(7,1.759315);
   hnumuCCinFV_stack_9->SetBinError(8,2.613048);
   hnumuCCinFV_stack_9->SetBinError(9,2.269203);
   hnumuCCinFV_stack_9->SetBinError(10,1.890576);
   hnumuCCinFV_stack_9->SetBinError(11,1.823929);
   hnumuCCinFV_stack_9->SetBinError(12,1.573613);
   hnumuCCinFV_stack_9->SetBinError(13,1.987665);
   hnumuCCinFV_stack_9->SetBinError(14,2.903416);
   hnumuCCinFV_stack_9->SetBinError(15,1.904913);
   hnumuCCinFV_stack_9->SetBinError(16,2.022146);
   hnumuCCinFV_stack_9->SetBinError(17,2.328694);
   hnumuCCinFV_stack_9->SetBinError(18,1.916685);
   hnumuCCinFV_stack_9->SetBinError(19,1.673749);
   hnumuCCinFV_stack_9->SetBinError(20,2.410074);
   hnumuCCinFV_stack_9->SetBinError(21,1.626834);
   hnumuCCinFV_stack_9->SetBinError(22,1.980567);
   hnumuCCinFV_stack_9->SetBinError(23,2.193374);
   hnumuCCinFV_stack_9->SetBinError(24,1.62431);
   hnumuCCinFV_stack_9->SetBinError(25,1.904387);
   hnumuCCinFV_stack_9->SetBinError(26,1.722227);
   hnumuCCinFV_stack_9->SetBinError(27,2.091795);
   hnumuCCinFV_stack_9->SetBinError(28,1.378195);
   hnumuCCinFV_stack_9->SetBinError(29,1.967798);
   hnumuCCinFV_stack_9->SetBinError(30,1.202903);
   hnumuCCinFV_stack_9->SetBinError(31,0.2770047);
   hnumuCCinFV_stack_9->SetEntries(1290);

   ci = 1452;
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
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_10->SetBinContent(1,0.2504446);
   hnueCCinFV_stack_10->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(3,0.4452329);
   hnueCCinFV_stack_10->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_10->SetBinContent(6,0.2486649);
   hnueCCinFV_stack_10->SetBinContent(7,1.165406);
   hnueCCinFV_stack_10->SetBinContent(8,0.9402312);
   hnueCCinFV_stack_10->SetBinContent(10,0.8640677);
   hnueCCinFV_stack_10->SetBinContent(11,0.8417194);
   hnueCCinFV_stack_10->SetBinContent(12,0.9140773);
   hnueCCinFV_stack_10->SetBinContent(13,1.181465);
   hnueCCinFV_stack_10->SetBinContent(14,0.4523934);
   hnueCCinFV_stack_10->SetBinContent(15,0.3917402);
   hnueCCinFV_stack_10->SetBinContent(16,1.550861);
   hnueCCinFV_stack_10->SetBinContent(17,0.6263665);
   hnueCCinFV_stack_10->SetBinContent(18,0.3688623);
   hnueCCinFV_stack_10->SetBinContent(19,0.5578873);
   hnueCCinFV_stack_10->SetBinContent(20,0.536893);
   hnueCCinFV_stack_10->SetBinContent(21,0.56212);
   hnueCCinFV_stack_10->SetBinContent(22,0.8098784);
   hnueCCinFV_stack_10->SetBinContent(23,0.536893);
   hnueCCinFV_stack_10->SetBinContent(24,1.192519);
   hnueCCinFV_stack_10->SetBinContent(25,0.7302274);
   hnueCCinFV_stack_10->SetBinContent(26,0.7883679);
   hnueCCinFV_stack_10->SetBinContent(27,0.9994394);
   hnueCCinFV_stack_10->SetBinContent(28,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(29,2.161028);
   hnueCCinFV_stack_10->SetBinError(1,0.2504446);
   hnueCCinFV_stack_10->SetBinError(2,0.3401776);
   hnueCCinFV_stack_10->SetBinError(3,0.3172361);
   hnueCCinFV_stack_10->SetBinError(4,0.3401776);
   hnueCCinFV_stack_10->SetBinError(5,0.2770047);
   hnueCCinFV_stack_10->SetBinError(6,0.2486649);
   hnueCCinFV_stack_10->SetBinError(7,0.5359203);
   hnueCCinFV_stack_10->SetBinError(8,0.5583063);
   hnueCCinFV_stack_10->SetBinError(10,0.5230935);
   hnueCCinFV_stack_10->SetBinError(11,0.4914388);
   hnueCCinFV_stack_10->SetBinError(12,0.531391);
   hnueCCinFV_stack_10->SetBinError(13,0.6844224);
   hnueCCinFV_stack_10->SetBinError(14,0.320043);
   hnueCCinFV_stack_10->SetBinError(15,0.2770047);
   hnueCCinFV_stack_10->SetBinError(16,1.190395);
   hnueCCinFV_stack_10->SetBinError(17,0.3630167);
   hnueCCinFV_stack_10->SetBinError(18,0.3688623);
   hnueCCinFV_stack_10->SetBinError(19,0.4228952);
   hnueCCinFV_stack_10->SetBinError(20,0.3929602);
   hnueCCinFV_stack_10->SetBinError(21,0.4149909);
   hnueCCinFV_stack_10->SetBinError(22,0.4957316);
   hnueCCinFV_stack_10->SetBinError(23,0.3929602);
   hnueCCinFV_stack_10->SetBinError(24,0.546847);
   hnueCCinFV_stack_10->SetBinError(25,0.4379386);
   hnueCCinFV_stack_10->SetBinError(26,0.47868);
   hnueCCinFV_stack_10->SetBinError(27,0.4528975);
   hnueCCinFV_stack_10->SetBinError(28,0.1967154);
   hnueCCinFV_stack_10->SetBinError(29,1.625644);
   hnueCCinFV_stack_10->SetEntries(72);

   ci = 1453;
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
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__5->SetBinContent(0,0.4188362);
   hmcerror__5->SetBinContent(1,89.1499);
   hmcerror__5->SetBinContent(2,114.0595);
   hmcerror__5->SetBinContent(3,105.6333);
   hmcerror__5->SetBinContent(4,111.5682);
   hmcerror__5->SetBinContent(5,118.4837);
   hmcerror__5->SetBinContent(6,111.8779);
   hmcerror__5->SetBinContent(7,119.8618);
   hmcerror__5->SetBinContent(8,134.2907);
   hmcerror__5->SetBinContent(9,118.707);
   hmcerror__5->SetBinContent(10,125.6893);
   hmcerror__5->SetBinContent(11,131.691);
   hmcerror__5->SetBinContent(12,111.1565);
   hmcerror__5->SetBinContent(13,118.8399);
   hmcerror__5->SetBinContent(14,134.0324);
   hmcerror__5->SetBinContent(15,118.645);
   hmcerror__5->SetBinContent(16,122.812);
   hmcerror__5->SetBinContent(17,119.9522);
   hmcerror__5->SetBinContent(18,118.4272);
   hmcerror__5->SetBinContent(19,119.4311);
   hmcerror__5->SetBinContent(20,121.7568);
   hmcerror__5->SetBinContent(21,112.6577);
   hmcerror__5->SetBinContent(22,112.988);
   hmcerror__5->SetBinContent(23,111.7569);
   hmcerror__5->SetBinContent(24,115.735);
   hmcerror__5->SetBinContent(25,110.9065);
   hmcerror__5->SetBinContent(26,113.8548);
   hmcerror__5->SetBinContent(27,111.3696);
   hmcerror__5->SetBinContent(28,115.1157);
   hmcerror__5->SetBinContent(29,107.5204);
   hmcerror__5->SetBinContent(30,63.34767);
   hmcerror__5->SetBinContent(31,1.860819);
   hmcerror__5->SetBinError(0,0.277838);
   hmcerror__5->SetBinError(1,21.49276);
   hmcerror__5->SetBinError(2,26.64621);
   hmcerror__5->SetBinError(3,27.59781);
   hmcerror__5->SetBinError(4,26.17937);
   hmcerror__5->SetBinError(5,26.73604);
   hmcerror__5->SetBinError(6,28.79653);
   hmcerror__5->SetBinError(7,26.77577);
   hmcerror__5->SetBinError(8,29.81934);
   hmcerror__5->SetBinError(9,28.59505);
   hmcerror__5->SetBinError(10,28.31083);
   hmcerror__5->SetBinError(11,30.21962);
   hmcerror__5->SetBinError(12,25.83578);
   hmcerror__5->SetBinError(13,28.37873);
   hmcerror__5->SetBinError(14,32.3768);
   hmcerror__5->SetBinError(15,29.75668);
   hmcerror__5->SetBinError(16,31.33131);
   hmcerror__5->SetBinError(17,29.19932);
   hmcerror__5->SetBinError(18,28.85953);
   hmcerror__5->SetBinError(19,28.99409);
   hmcerror__5->SetBinError(20,27.56856);
   hmcerror__5->SetBinError(21,25.14437);
   hmcerror__5->SetBinError(22,27.43673);
   hmcerror__5->SetBinError(23,27.78768);
   hmcerror__5->SetBinError(24,28.32504);
   hmcerror__5->SetBinError(25,28.18797);
   hmcerror__5->SetBinError(26,26.99727);
   hmcerror__5->SetBinError(27,28.03492);
   hmcerror__5->SetBinError(28,29.04251);
   hmcerror__5->SetBinError(29,27.71148);
   hmcerror__5->SetBinError(30,17.11011);
   hmcerror__5->SetBinError(31,1.848628);
   hmcerror__5->SetBinError(32,0.4212968);
   hmcerror__5->SetBinError(33,0.4212968);
   hmcerror__5->SetEntries(3396.741);

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
   71,
   76,
   82,
   82,
   84,
   98,
   97,
   101,
   103,
   88,
   100,
   89,
   81,
   89,
   82,
   90,
   91,
   96,
   82,
   76,
   92,
   86,
   103,
   69,
   96,
   91,
   96,
   101,
   81,
   47,
   1,
   0};
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
   8.5518,
   8.8425,
   9.1791,
   9.1791,
   9.2886,
   10.0209,
   9.9704,
   10.04988,
   10.14889,
   9.5036,
   10.1212,
   9.5566,
   9.1239,
   9.5566,
   9.1791,
   9.6093,
   9.6617,
   9.9196,
   9.1791,
   8.8425,
   9.7138,
   9.3967,
   10.14889,
   8.4327,
   9.9196,
   9.6617,
   9.9196,
   10.04988,
   9.1239,
   6.9882,
   1,
   0};
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
   8.3496,
   8.6406,
   8.9774,
   8.9774,
   9.0869,
   9.82,
   9.769,
   10.04988,
   10.14889,
   9.3021,
   9.92,
   9.3552,
   8.9221,
   9.3552,
   8.9774,
   9.4079,
   9.46,
   9.718,
   8.9774,
   8.6406,
   9.513,
   9.1951,
   10.14889,
   8.2304,
   9.718,
   9.46,
   9.718,
   10.04988,
   8.9221,
   6.7839,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,1210);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(124.4638);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.3/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2621.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

   ci = 1445;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1766.1","F");

   ci = 1449;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 567.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 157.6","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 335.6","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1453;
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
   0.2410856,
   0.2336168,
   0.2612604,
   0.234649,
   0.2256517,
   0.2573926,
   0.2233886,
   0.2220506,
   0.2408877,
   0.2252446,
   0.2294737,
   0.2324271,
   0.2387979,
   0.2415596,
   0.2508044,
   0.255116,
   0.2434246,
   0.24369,
   0.2427682,
   0.2264232,
   0.2231927,
   0.2428287,
   0.248644,
   0.2447404,
   0.2541598,
   0.2371201,
   0.2517286,
   0.2522897,
   0.2577322,
   0.2700984,
   0.9934482,
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
   0.2410856,
   0.2336168,
   0.2612604,
   0.234649,
   0.2256517,
   0.2573926,
   0.2233886,
   0.2220506,
   0.2408877,
   0.2252446,
   0.2294737,
   0.2324271,
   0.2387979,
   0.2415596,
   0.2508044,
   0.255116,
   0.2434246,
   0.24369,
   0.2427682,
   0.2264232,
   0.2231927,
   0.2428287,
   0.248644,
   0.2447404,
   0.2541598,
   0.2371201,
   0.2517286,
   0.2522897,
   0.2577322,
   0.2700984,
   0.9934482,
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
   0.2179669,
   0.2080141,
   0.216278,
   0.2075022,
   0.2074669,
   0.2371105,
   0.2098216,
   0.2080085,
   0.21978,
   0.2163466,
   0.2112728,
   0.221293,
   0.2293296,
   0.2200355,
   0.2229327,
   0.2348569,
   0.232438,
   0.2350534,
   0.2304902,
   0.2145896,
   0.1964938,
   0.2173334,
   0.226564,
   0.2192781,
   0.2371294,
   0.222315,
   0.2272301,
   0.2330677,
   0.2245322,
   0.2216958,
   0.4729467,
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
   0.2179669,
   0.2080141,
   0.216278,
   0.2075022,
   0.2074669,
   0.2371105,
   0.2098216,
   0.2080085,
   0.21978,
   0.2163466,
   0.2112728,
   0.221293,
   0.2293296,
   0.2200355,
   0.2229327,
   0.2348569,
   0.232438,
   0.2350534,
   0.2304902,
   0.2145896,
   0.1964938,
   0.2173334,
   0.226564,
   0.2192781,
   0.2371294,
   0.222315,
   0.2272301,
   0.2330677,
   0.2245322,
   0.2216958,
   0.4729467,
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
   0.7964114,
   0.666319,
   0.7762703,
   0.7349763,
   0.7089585,
   0.8759552,
   0.8092651,
   0.7520996,
   0.8676828,
   0.7001392,
   0.7593535,
   0.8006731,
   0.6815891,
   0.6640187,
   0.6911375,
   0.7328274,
   0.7586355,
   0.8106244,
   0.6865881,
   0.6241952,
   0.8166332,
   0.7611428,
   0.9216435,
   0.5961896,
   0.8655941,
   0.7992633,
   0.8619946,
   0.8773782,
   0.7533452,
   0.7419373,
   0.5373977,
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
   0.09592607,
   0.07752534,
   0.08689589,
   0.08227343,
   0.07839562,
   0.08956999,
   0.08318244,
   0.07483671,
   0.08549532,
   0.07561185,
   0.07685569,
   0.0859743,
   0.0767747,
   0.07130069,
   0.0773661,
   0.07824398,
   0.08054625,
   0.08376114,
   0.07685684,
   0.0726243,
   0.08622403,
   0.08316547,
   0.09081223,
   0.07286214,
   0.08944112,
   0.08485981,
   0.08906918,
   0.08730239,
   0.08485737,
   0.110315,
   0.5373977,
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
   0.09365798,
   0.07575521,
   0.08498645,
   0.08046556,
   0.07669328,
   0.08777429,
   0.08150218,
   0.07483671,
   0.08549532,
   0.07400869,
   0.07532787,
   0.08416244,
   0.07507661,
   0.06979807,
   0.07566607,
   0.07660408,
   0.07886475,
   0.08205883,
   0.075168,
   0.07096607,
   0.08444164,
   0.08138121,
   0.09081223,
   0.07111418,
   0.08762337,
   0.08308825,
   0.08725899,
   0.08730239,
   0.08298051,
   0.10709,
   0.730705,
   0};
   grae = new TGraphAsymmErrors(32,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,1210);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(11);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
