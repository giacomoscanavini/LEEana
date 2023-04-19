#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Feb 17 21:15:02 2023) by ROOT version 6.26/00
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
   pad1->Range(-169.2308,-2.773578,1241.026,306.6994);
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
   hmc__13->SetBinContent(0,0.4188362);
   hmc__13->SetBinContent(1,91.20387);
   hmc__13->SetBinContent(2,119.146);
   hmc__13->SetBinContent(3,108.7594);
   hmc__13->SetBinContent(4,115.4828);
   hmc__13->SetBinContent(5,123.2204);
   hmc__13->SetBinContent(6,114.7669);
   hmc__13->SetBinContent(7,123.9149);
   hmc__13->SetBinContent(8,136.2511);
   hmc__13->SetBinContent(9,123.7382);
   hmc__13->SetBinContent(10,130.1941);
   hmc__13->SetBinContent(11,135.4072);
   hmc__13->SetBinContent(12,113.0602);
   hmc__13->SetBinContent(13,123.3817);
   hmc__13->SetBinContent(14,138.6789);
   hmc__13->SetBinContent(15,121.0391);
   hmc__13->SetBinContent(16,127.31);
   hmc__13->SetBinContent(17,126.1125);
   hmc__13->SetBinContent(18,122.1418);
   hmc__13->SetBinContent(19,123.0392);
   hmc__13->SetBinContent(20,128.4024);
   hmc__13->SetBinContent(21,115.7821);
   hmc__13->SetBinContent(22,118.8854);
   hmc__13->SetBinContent(23,116.7402);
   hmc__13->SetBinContent(24,118.9143);
   hmc__13->SetBinContent(25,114.908);
   hmc__13->SetBinContent(26,117.4259);
   hmc__13->SetBinContent(27,116.3014);
   hmc__13->SetBinContent(28,118.6335);
   hmc__13->SetBinContent(29,111.1346);
   hmc__13->SetBinContent(30,67.45057);
   hmc__13->SetBinContent(31,1.860819);
   hmc__13->SetBinError(0,0.277838);
   hmc__13->SetBinError(1,41.59605);
   hmc__13->SetBinError(2,37.70264);
   hmc__13->SetBinError(3,38.58906);
   hmc__13->SetBinError(4,37.54417);
   hmc__13->SetBinError(5,39.5284);
   hmc__13->SetBinError(6,41.15703);
   hmc__13->SetBinError(7,41.49246);
   hmc__13->SetBinError(8,45.7878);
   hmc__13->SetBinError(9,43.10085);
   hmc__13->SetBinError(10,46.6018);
   hmc__13->SetBinError(11,44.61379);
   hmc__13->SetBinError(12,41.43429);
   hmc__13->SetBinError(13,46.0785);
   hmc__13->SetBinError(14,52.77207);
   hmc__13->SetBinError(15,44.5651);
   hmc__13->SetBinError(16,47.23867);
   hmc__13->SetBinError(17,45.24237);
   hmc__13->SetBinError(18,46.02451);
   hmc__13->SetBinError(19,45.37782);
   hmc__13->SetBinError(20,45.97717);
   hmc__13->SetBinError(21,35.66639);
   hmc__13->SetBinError(22,48.65324);
   hmc__13->SetBinError(23,43.67261);
   hmc__13->SetBinError(24,41.44193);
   hmc__13->SetBinError(25,43.55971);
   hmc__13->SetBinError(26,43.24095);
   hmc__13->SetBinError(27,42.01102);
   hmc__13->SetBinError(28,43.25118);
   hmc__13->SetBinError(29,40.76068);
   hmc__13->SetBinError(30,26.81448);
   hmc__13->SetBinError(31,3.135604);
   hmc__13->SetBinError(32,0.3895343);
   hmc__13->SetBinError(33,0.3895343);
   hmc__13->SetMinimum(-2.773578);
   hmc__13->SetMaximum(291.2257);
   hmc__13->SetEntries(3516.85);
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
   hs5_stack_5->SetMaximum(145.6128);
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
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7250721);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6835541);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7249039);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4744679);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4879178);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4879178);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.088772);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4463997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5158178);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3341359);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.005072);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.4314539);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.5015358);
   hNCpi0inFVqe_stack_6->SetBinContent(26,1.060872);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.7529721);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3150384);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3022172);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2578571);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2144572);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1427183);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1427183);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4017382);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1454198);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.151108);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3988212);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1797343);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1658436);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.4007683);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.3162714);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1974492);
   hNCpi0inFVqe_stack_6->SetEntries(347);

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
   hNCpi0inFVres_stack_7->SetBinContent(0,0.4188362);
   hNCpi0inFVres_stack_7->SetBinContent(1,26.1967);
   hNCpi0inFVres_stack_7->SetBinContent(2,41.32952);
   hNCpi0inFVres_stack_7->SetBinContent(3,41.09688);
   hNCpi0inFVres_stack_7->SetBinContent(4,38.64614);
   hNCpi0inFVres_stack_7->SetBinContent(5,46.18946);
   hNCpi0inFVres_stack_7->SetBinContent(6,48.49022);
   hNCpi0inFVres_stack_7->SetBinContent(7,49.42886);
   hNCpi0inFVres_stack_7->SetBinContent(8,48.90576);
   hNCpi0inFVres_stack_7->SetBinContent(9,51.62666);
   hNCpi0inFVres_stack_7->SetBinContent(10,53.55012);
   hNCpi0inFVres_stack_7->SetBinContent(11,52.37115);
   hNCpi0inFVres_stack_7->SetBinContent(12,50.4542);
   hNCpi0inFVres_stack_7->SetBinContent(13,55.33524);
   hNCpi0inFVres_stack_7->SetBinContent(14,57.7285);
   hNCpi0inFVres_stack_7->SetBinContent(15,51.80801);
   hNCpi0inFVres_stack_7->SetBinContent(16,56.69965);
   hNCpi0inFVres_stack_7->SetBinContent(17,54.61796);
   hNCpi0inFVres_stack_7->SetBinContent(18,54.70781);
   hNCpi0inFVres_stack_7->SetBinContent(19,56.2204);
   hNCpi0inFVres_stack_7->SetBinContent(20,50.74184);
   hNCpi0inFVres_stack_7->SetBinContent(21,40.84245);
   hNCpi0inFVres_stack_7->SetBinContent(22,45.19753);
   hNCpi0inFVres_stack_7->SetBinContent(23,52.42012);
   hNCpi0inFVres_stack_7->SetBinContent(24,46.53407);
   hNCpi0inFVres_stack_7->SetBinContent(25,53.40314);
   hNCpi0inFVres_stack_7->SetBinContent(26,52.92969);
   hNCpi0inFVres_stack_7->SetBinContent(27,53.50395);
   hNCpi0inFVres_stack_7->SetBinContent(28,58.46008);
   hNCpi0inFVres_stack_7->SetBinContent(29,49.1195);
   hNCpi0inFVres_stack_7->SetBinContent(30,24.4636);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1952999);
   hNCpi0inFVres_stack_7->SetBinError(0,0.277838);
   hNCpi0inFVres_stack_7->SetBinError(1,1.634309);
   hNCpi0inFVres_stack_7->SetBinError(2,2.076101);
   hNCpi0inFVres_stack_7->SetBinError(3,2.130186);
   hNCpi0inFVres_stack_7->SetBinError(4,2.065043);
   hNCpi0inFVres_stack_7->SetBinError(5,2.199597);
   hNCpi0inFVres_stack_7->SetBinError(6,2.251047);
   hNCpi0inFVres_stack_7->SetBinError(7,2.286728);
   hNCpi0inFVres_stack_7->SetBinError(8,2.331091);
   hNCpi0inFVres_stack_7->SetBinError(9,2.343302);
   hNCpi0inFVres_stack_7->SetBinError(10,2.393398);
   hNCpi0inFVres_stack_7->SetBinError(11,2.301897);
   hNCpi0inFVres_stack_7->SetBinError(12,2.324849);
   hNCpi0inFVres_stack_7->SetBinError(13,2.434182);
   hNCpi0inFVres_stack_7->SetBinError(14,2.532515);
   hNCpi0inFVres_stack_7->SetBinError(15,2.328918);
   hNCpi0inFVres_stack_7->SetBinError(16,2.416393);
   hNCpi0inFVres_stack_7->SetBinError(17,2.426212);
   hNCpi0inFVres_stack_7->SetBinError(18,2.438174);
   hNCpi0inFVres_stack_7->SetBinError(19,2.494252);
   hNCpi0inFVres_stack_7->SetBinError(20,2.365016);
   hNCpi0inFVres_stack_7->SetBinError(21,2.110361);
   hNCpi0inFVres_stack_7->SetBinError(22,2.225909);
   hNCpi0inFVres_stack_7->SetBinError(23,2.387907);
   hNCpi0inFVres_stack_7->SetBinError(24,2.213927);
   hNCpi0inFVres_stack_7->SetBinError(25,2.386545);
   hNCpi0inFVres_stack_7->SetBinError(26,2.404);
   hNCpi0inFVres_stack_7->SetBinError(27,2.411409);
   hNCpi0inFVres_stack_7->SetBinError(28,2.603609);
   hNCpi0inFVres_stack_7->SetBinError(29,2.351469);
   hNCpi0inFVres_stack_7->SetBinError(30,1.663656);
   hNCpi0inFVres_stack_7->SetBinError(31,0.07381642);
   hNCpi0inFVres_stack_7->SetEntries(26810);

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
   hNCpi0inFVdis_stack_8->SetBinContent(1,6.24564);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.910439);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.573222);
   hNCpi0inFVdis_stack_8->SetBinContent(4,8.335988);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.46852);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.311159);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.10781);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.883203);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.58161);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.53105);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.03855);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.57107);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.537352);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.54383);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.857037);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.605105);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.25288);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.2655);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.782378);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.38898);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.766857);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.730748);
   hNCpi0inFVdis_stack_8->SetBinContent(23,10.15082);
   hNCpi0inFVdis_stack_8->SetBinContent(24,8.172412);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.301029);
   hNCpi0inFVdis_stack_8->SetBinContent(26,11.1833);
   hNCpi0inFVdis_stack_8->SetBinContent(27,9.27197);
   hNCpi0inFVdis_stack_8->SetBinContent(28,9.272802);
   hNCpi0inFVdis_stack_8->SetBinContent(29,8.854797);
   hNCpi0inFVdis_stack_8->SetBinContent(30,5.159533);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8300031);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.022523);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9072946);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9484374);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.050991);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.976608);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.026638);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.015521);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.055211);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.14181);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9661903);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.077656);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.985666);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.071014);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9838543);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9704109);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.081982);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.127086);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8760477);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.094796);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8888756);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.003375);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.033283);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9621206);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9549466);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.12861);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.9853369);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.9950654);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.9655192);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.7861736);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.04832419);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

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
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

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
   hCCpi0inFV_stack_10->SetBinContent(1,13.23226);
   hCCpi0inFV_stack_10->SetBinContent(2,16.54633);
   hCCpi0inFV_stack_10->SetBinContent(3,13.90644);
   hCCpi0inFV_stack_10->SetBinContent(4,16.13774);
   hCCpi0inFV_stack_10->SetBinContent(5,21.41158);
   hCCpi0inFV_stack_10->SetBinContent(6,16.94452);
   hCCpi0inFV_stack_10->SetBinContent(7,16.32207);
   hCCpi0inFV_stack_10->SetBinContent(8,18.89018);
   hCCpi0inFV_stack_10->SetBinContent(9,17.70641);
   hCCpi0inFV_stack_10->SetBinContent(10,22.96568);
   hCCpi0inFV_stack_10->SetBinContent(11,19.21781);
   hCCpi0inFV_stack_10->SetBinContent(12,15.86697);
   hCCpi0inFV_stack_10->SetBinContent(13,16.80993);
   hCCpi0inFV_stack_10->SetBinContent(14,20.54166);
   hCCpi0inFV_stack_10->SetBinContent(15,21.06939);
   hCCpi0inFV_stack_10->SetBinContent(16,16.50336);
   hCCpi0inFV_stack_10->SetBinContent(17,16.26363);
   hCCpi0inFV_stack_10->SetBinContent(18,17.25662);
   hCCpi0inFV_stack_10->SetBinContent(19,16.11403);
   hCCpi0inFV_stack_10->SetBinContent(20,17.68714);
   hCCpi0inFV_stack_10->SetBinContent(21,17.13453);
   hCCpi0inFV_stack_10->SetBinContent(22,20.81046);
   hCCpi0inFV_stack_10->SetBinContent(23,15.02901);
   hCCpi0inFV_stack_10->SetBinContent(24,16.05973);
   hCCpi0inFV_stack_10->SetBinContent(25,16.97501);
   hCCpi0inFV_stack_10->SetBinContent(26,18.32845);
   hCCpi0inFV_stack_10->SetBinContent(27,13.20096);
   hCCpi0inFV_stack_10->SetBinContent(28,16.40879);
   hCCpi0inFV_stack_10->SetBinContent(29,16.02828);
   hCCpi0inFV_stack_10->SetBinContent(30,14.13162);
   hCCpi0inFV_stack_10->SetBinContent(31,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(1,1.830323);
   hCCpi0inFV_stack_10->SetBinError(2,2.033302);
   hCCpi0inFV_stack_10->SetBinError(3,1.912223);
   hCCpi0inFV_stack_10->SetBinError(4,1.989447);
   hCCpi0inFV_stack_10->SetBinError(5,2.341852);
   hCCpi0inFV_stack_10->SetBinError(6,2.038433);
   hCCpi0inFV_stack_10->SetBinError(7,1.967208);
   hCCpi0inFV_stack_10->SetBinError(8,2.188687);
   hCCpi0inFV_stack_10->SetBinError(9,2.138264);
   hCCpi0inFV_stack_10->SetBinError(10,2.392663);
   hCCpi0inFV_stack_10->SetBinError(11,2.229815);
   hCCpi0inFV_stack_10->SetBinError(12,2.011052);
   hCCpi0inFV_stack_10->SetBinError(13,2.05805);
   hCCpi0inFV_stack_10->SetBinError(14,2.230769);
   hCCpi0inFV_stack_10->SetBinError(15,2.25623);
   hCCpi0inFV_stack_10->SetBinError(16,1.994513);
   hCCpi0inFV_stack_10->SetBinError(17,2.092705);
   hCCpi0inFV_stack_10->SetBinError(18,2.061395);
   hCCpi0inFV_stack_10->SetBinError(19,2.058783);
   hCCpi0inFV_stack_10->SetBinError(20,2.085555);
   hCCpi0inFV_stack_10->SetBinError(21,2.096406);
   hCCpi0inFV_stack_10->SetBinError(22,2.291177);
   hCCpi0inFV_stack_10->SetBinError(23,2.030701);
   hCCpi0inFV_stack_10->SetBinError(24,2.034325);
   hCCpi0inFV_stack_10->SetBinError(25,2.052581);
   hCCpi0inFV_stack_10->SetBinError(26,2.186165);
   hCCpi0inFV_stack_10->SetBinError(27,1.810003);
   hCCpi0inFV_stack_10->SetBinError(28,2.048736);
   hCCpi0inFV_stack_10->SetBinError(29,1.981565);
   hCCpi0inFV_stack_10->SetBinError(30,1.919398);
   hCCpi0inFV_stack_10->SetBinError(31,0.2770047);
   hCCpi0inFV_stack_10->SetEntries(2205);

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
   hNCinFV_stack_11->SetBinContent(1,6.880947);
   hNCinFV_stack_11->SetBinContent(2,9.376541);
   hNCinFV_stack_11->SetBinContent(3,8.646314);
   hNCinFV_stack_11->SetBinContent(4,8.949535);
   hNCinFV_stack_11->SetBinContent(5,9.475203);
   hNCinFV_stack_11->SetBinContent(6,9.684227);
   hNCinFV_stack_11->SetBinContent(7,8.994336);
   hNCinFV_stack_11->SetBinContent(8,6.895554);
   hNCinFV_stack_11->SetBinContent(9,10.9372);
   hNCinFV_stack_11->SetBinContent(10,9.623129);
   hNCinFV_stack_11->SetBinContent(11,9.471822);
   hNCinFV_stack_11->SetBinContent(12,6.497051);
   hNCinFV_stack_11->SetBinContent(13,7.419531);
   hNCinFV_stack_11->SetBinContent(14,12.61927);
   hNCinFV_stack_11->SetBinContent(15,7.430757);
   hNCinFV_stack_11->SetBinContent(16,9.726254);
   hNCinFV_stack_11->SetBinContent(17,11.2966);
   hNCinFV_stack_11->SetBinContent(18,8.607668);
   hNCinFV_stack_11->SetBinContent(19,10.15664);
   hNCinFV_stack_11->SetBinContent(20,12.21908);
   hNCinFV_stack_11->SetBinContent(21,8.834577);
   hNCinFV_stack_11->SetBinContent(22,12.63486);
   hNCinFV_stack_11->SetBinContent(23,9.239841);
   hNCinFV_stack_11->SetBinContent(24,11.96235);
   hNCinFV_stack_11->SetBinContent(25,9.523384);
   hNCinFV_stack_11->SetBinContent(26,7.582063);
   hNCinFV_stack_11->SetBinContent(27,9.768282);
   hNCinFV_stack_11->SetBinContent(28,8.358781);
   hNCinFV_stack_11->SetBinContent(29,7.810663);
   hNCinFV_stack_11->SetBinContent(30,7.227279);
   hNCinFV_stack_11->SetBinError(1,1.374325);
   hNCinFV_stack_11->SetBinError(2,1.557833);
   hNCinFV_stack_11->SetBinError(3,1.49501);
   hNCinFV_stack_11->SetBinError(4,1.482261);
   hNCinFV_stack_11->SetBinError(5,1.595464);
   hNCinFV_stack_11->SetBinError(6,1.480624);
   hNCinFV_stack_11->SetBinError(7,1.468148);
   hNCinFV_stack_11->SetBinError(8,1.302345);
   hNCinFV_stack_11->SetBinError(9,1.665624);
   hNCinFV_stack_11->SetBinError(10,1.557527);
   hNCinFV_stack_11->SetBinError(11,1.595049);
   hNCinFV_stack_11->SetBinError(12,1.271503);
   hNCinFV_stack_11->SetBinError(13,1.429632);
   hNCinFV_stack_11->SetBinError(14,1.778576);
   hNCinFV_stack_11->SetBinError(15,1.360095);
   hNCinFV_stack_11->SetBinError(16,1.53229);
   hNCinFV_stack_11->SetBinError(17,1.629774);
   hNCinFV_stack_11->SetBinError(18,1.442468);
   hNCinFV_stack_11->SetBinError(19,1.605921);
   hNCinFV_stack_11->SetBinError(20,1.75593);
   hNCinFV_stack_11->SetBinError(21,1.506798);
   hNCinFV_stack_11->SetBinError(22,1.872706);
   hNCinFV_stack_11->SetBinError(23,1.533776);
   hNCinFV_stack_11->SetBinError(24,1.75507);
   hNCinFV_stack_11->SetBinError(25,1.58278);
   hNCinFV_stack_11->SetBinError(26,1.31589);
   hNCinFV_stack_11->SetBinError(27,1.582269);
   hNCinFV_stack_11->SetBinError(28,1.371998);
   hNCinFV_stack_11->SetBinError(29,1.386345);
   hNCinFV_stack_11->SetBinError(30,1.344809);
   hNCinFV_stack_11->SetEntries(1184);

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
   hnumuCCinFV_stack_12->SetBinContent(1,9.914597);
   hnumuCCinFV_stack_12->SetBinContent(2,13.28404);
   hnumuCCinFV_stack_12->SetBinContent(3,14.47163);
   hnumuCCinFV_stack_12->SetBinContent(4,18.94588);
   hnumuCCinFV_stack_12->SetBinContent(5,9.720874);
   hnumuCCinFV_stack_12->SetBinContent(6,13.23175);
   hnumuCCinFV_stack_12->SetBinContent(7,12.40526);
   hnumuCCinFV_stack_12->SetBinContent(8,19.11294);
   hnumuCCinFV_stack_12->SetBinContent(9,13.52161);
   hnumuCCinFV_stack_12->SetBinContent(10,12.56302);
   hnumuCCinFV_stack_12->SetBinContent(11,14.39194);
   hnumuCCinFV_stack_12->SetBinContent(12,10.6248);
   hnumuCCinFV_stack_12->SetBinContent(13,15.46807);
   hnumuCCinFV_stack_12->SetBinContent(14,13.79103);
   hnumuCCinFV_stack_12->SetBinContent(15,15.54917);
   hnumuCCinFV_stack_12->SetBinContent(16,13.47934);
   hnumuCCinFV_stack_12->SetBinContent(17,13.73471);
   hnumuCCinFV_stack_12->SetBinContent(18,13.41908);
   hnumuCCinFV_stack_12->SetBinContent(19,10.50083);
   hnumuCCinFV_stack_12->SetBinContent(20,13.81741);
   hnumuCCinFV_stack_12->SetBinContent(21,12.18917);
   hnumuCCinFV_stack_12->SetBinContent(22,14.74292);
   hnumuCCinFV_stack_12->SetBinContent(23,16.08345);
   hnumuCCinFV_stack_12->SetBinContent(24,10.80412);
   hnumuCCinFV_stack_12->SetBinContent(25,10.84173);
   hnumuCCinFV_stack_12->SetBinContent(26,10.50284);
   hnumuCCinFV_stack_12->SetBinContent(27,12.30512);
   hnumuCCinFV_stack_12->SetBinContent(28,8.629877);
   hnumuCCinFV_stack_12->SetBinContent(29,10.97817);
   hnumuCCinFV_stack_12->SetBinContent(30,7.288168);
   hnumuCCinFV_stack_12->SetBinContent(31,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(1,1.893652);
   hnumuCCinFV_stack_12->SetBinError(2,2.509061);
   hnumuCCinFV_stack_12->SetBinError(3,2.16254);
   hnumuCCinFV_stack_12->SetBinError(4,2.437577);
   hnumuCCinFV_stack_12->SetBinError(5,1.604966);
   hnumuCCinFV_stack_12->SetBinError(6,2.144101);
   hnumuCCinFV_stack_12->SetBinError(7,1.875922);
   hnumuCCinFV_stack_12->SetBinError(8,2.742892);
   hnumuCCinFV_stack_12->SetBinError(9,2.327902);
   hnumuCCinFV_stack_12->SetBinError(10,1.960812);
   hnumuCCinFV_stack_12->SetBinError(11,1.995455);
   hnumuCCinFV_stack_12->SetBinError(12,1.65685);
   hnumuCCinFV_stack_12->SetBinError(13,2.173072);
   hnumuCCinFV_stack_12->SetBinError(14,2.988559);
   hnumuCCinFV_stack_12->SetBinError(15,2.134068);
   hnumuCCinFV_stack_12->SetBinError(16,2.115178);
   hnumuCCinFV_stack_12->SetBinError(17,2.457277);
   hnumuCCinFV_stack_12->SetBinError(18,2.126548);
   hnumuCCinFV_stack_12->SetBinError(19,1.73001);
   hnumuCCinFV_stack_12->SetBinError(20,2.519611);
   hnumuCCinFV_stack_12->SetBinError(21,1.774226);
   hnumuCCinFV_stack_12->SetBinError(22,2.047719);
   hnumuCCinFV_stack_12->SetBinError(23,2.270941);
   hnumuCCinFV_stack_12->SetBinError(24,1.693969);
   hnumuCCinFV_stack_12->SetBinError(25,1.983501);
   hnumuCCinFV_stack_12->SetBinError(26,1.809669);
   hnumuCCinFV_stack_12->SetBinError(27,2.199524);
   hnumuCCinFV_stack_12->SetBinError(28,1.472619);
   hnumuCCinFV_stack_12->SetBinError(29,2.035209);
   hnumuCCinFV_stack_12->SetBinError(30,1.367691);
   hnumuCCinFV_stack_12->SetBinError(31,0.2770047);
   hnumuCCinFV_stack_12->SetEntries(1510);

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
   hnueCCinFV_stack_13->SetBinContent(2,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.4452329);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(6,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(7,1.165406);
   hnueCCinFV_stack_13->SetBinContent(8,0.9402312);
   hnueCCinFV_stack_13->SetBinContent(10,0.8640677);
   hnueCCinFV_stack_13->SetBinContent(11,0.8417194);
   hnueCCinFV_stack_13->SetBinContent(12,0.9140773);
   hnueCCinFV_stack_13->SetBinContent(13,1.181465);
   hnueCCinFV_stack_13->SetBinContent(14,0.4523934);
   hnueCCinFV_stack_13->SetBinContent(15,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(16,1.550861);
   hnueCCinFV_stack_13->SetBinContent(17,0.6263665);
   hnueCCinFV_stack_13->SetBinContent(18,0.3688623);
   hnueCCinFV_stack_13->SetBinContent(19,0.5578873);
   hnueCCinFV_stack_13->SetBinContent(20,0.536893);
   hnueCCinFV_stack_13->SetBinContent(21,0.56212);
   hnueCCinFV_stack_13->SetBinContent(22,0.8098784);
   hnueCCinFV_stack_13->SetBinContent(23,0.536893);
   hnueCCinFV_stack_13->SetBinContent(24,1.192519);
   hnueCCinFV_stack_13->SetBinContent(25,0.7302274);
   hnueCCinFV_stack_13->SetBinContent(26,0.7883679);
   hnueCCinFV_stack_13->SetBinContent(27,0.9994394);
   hnueCCinFV_stack_13->SetBinContent(28,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(29,2.161028);
   hnueCCinFV_stack_13->SetBinError(1,0.2504446);
   hnueCCinFV_stack_13->SetBinError(2,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.3172361);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.2770047);
   hnueCCinFV_stack_13->SetBinError(6,0.2486649);
   hnueCCinFV_stack_13->SetBinError(7,0.5359203);
   hnueCCinFV_stack_13->SetBinError(8,0.5583063);
   hnueCCinFV_stack_13->SetBinError(10,0.5230935);
   hnueCCinFV_stack_13->SetBinError(11,0.4914388);
   hnueCCinFV_stack_13->SetBinError(12,0.531391);
   hnueCCinFV_stack_13->SetBinError(13,0.6844224);
   hnueCCinFV_stack_13->SetBinError(14,0.320043);
   hnueCCinFV_stack_13->SetBinError(15,0.2770047);
   hnueCCinFV_stack_13->SetBinError(16,1.190395);
   hnueCCinFV_stack_13->SetBinError(17,0.3630167);
   hnueCCinFV_stack_13->SetBinError(18,0.3688623);
   hnueCCinFV_stack_13->SetBinError(19,0.4228952);
   hnueCCinFV_stack_13->SetBinError(20,0.3929602);
   hnueCCinFV_stack_13->SetBinError(21,0.4149909);
   hnueCCinFV_stack_13->SetBinError(22,0.4957316);
   hnueCCinFV_stack_13->SetBinError(23,0.3929602);
   hnueCCinFV_stack_13->SetBinError(24,0.546847);
   hnueCCinFV_stack_13->SetBinError(25,0.4379386);
   hnueCCinFV_stack_13->SetBinError(26,0.47868);
   hnueCCinFV_stack_13->SetBinError(27,0.4528975);
   hnueCCinFV_stack_13->SetBinError(28,0.1967154);
   hnueCCinFV_stack_13->SetBinError(29,1.625644);
   hnueCCinFV_stack_13->SetEntries(72);

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
   hmcerror__14->SetBinContent(0,0.4188362);
   hmcerror__14->SetBinContent(1,91.20387);
   hmcerror__14->SetBinContent(2,119.146);
   hmcerror__14->SetBinContent(3,108.7594);
   hmcerror__14->SetBinContent(4,115.4828);
   hmcerror__14->SetBinContent(5,123.2204);
   hmcerror__14->SetBinContent(6,114.7669);
   hmcerror__14->SetBinContent(7,123.9149);
   hmcerror__14->SetBinContent(8,136.2511);
   hmcerror__14->SetBinContent(9,123.7382);
   hmcerror__14->SetBinContent(10,130.1941);
   hmcerror__14->SetBinContent(11,135.4072);
   hmcerror__14->SetBinContent(12,113.0602);
   hmcerror__14->SetBinContent(13,123.3817);
   hmcerror__14->SetBinContent(14,138.6789);
   hmcerror__14->SetBinContent(15,121.0391);
   hmcerror__14->SetBinContent(16,127.31);
   hmcerror__14->SetBinContent(17,126.1125);
   hmcerror__14->SetBinContent(18,122.1418);
   hmcerror__14->SetBinContent(19,123.0392);
   hmcerror__14->SetBinContent(20,128.4024);
   hmcerror__14->SetBinContent(21,115.7821);
   hmcerror__14->SetBinContent(22,118.8854);
   hmcerror__14->SetBinContent(23,116.7402);
   hmcerror__14->SetBinContent(24,118.9143);
   hmcerror__14->SetBinContent(25,114.908);
   hmcerror__14->SetBinContent(26,117.4259);
   hmcerror__14->SetBinContent(27,116.3014);
   hmcerror__14->SetBinContent(28,118.6335);
   hmcerror__14->SetBinContent(29,111.1346);
   hmcerror__14->SetBinContent(30,67.45057);
   hmcerror__14->SetBinContent(31,1.860819);
   hmcerror__14->SetBinError(0,0.277838);
   hmcerror__14->SetBinError(1,41.59605);
   hmcerror__14->SetBinError(2,37.70264);
   hmcerror__14->SetBinError(3,38.58906);
   hmcerror__14->SetBinError(4,37.54417);
   hmcerror__14->SetBinError(5,39.5284);
   hmcerror__14->SetBinError(6,41.15703);
   hmcerror__14->SetBinError(7,41.49246);
   hmcerror__14->SetBinError(8,45.7878);
   hmcerror__14->SetBinError(9,43.10085);
   hmcerror__14->SetBinError(10,46.6018);
   hmcerror__14->SetBinError(11,44.61379);
   hmcerror__14->SetBinError(12,41.43429);
   hmcerror__14->SetBinError(13,46.0785);
   hmcerror__14->SetBinError(14,52.77207);
   hmcerror__14->SetBinError(15,44.5651);
   hmcerror__14->SetBinError(16,47.23867);
   hmcerror__14->SetBinError(17,45.24237);
   hmcerror__14->SetBinError(18,46.02451);
   hmcerror__14->SetBinError(19,45.37782);
   hmcerror__14->SetBinError(20,45.97717);
   hmcerror__14->SetBinError(21,35.66639);
   hmcerror__14->SetBinError(22,48.65324);
   hmcerror__14->SetBinError(23,43.67261);
   hmcerror__14->SetBinError(24,41.44193);
   hmcerror__14->SetBinError(25,43.55971);
   hmcerror__14->SetBinError(26,43.24095);
   hmcerror__14->SetBinError(27,42.01102);
   hmcerror__14->SetBinError(28,43.25118);
   hmcerror__14->SetBinError(29,40.76068);
   hmcerror__14->SetBinError(30,26.81448);
   hmcerror__14->SetBinError(31,3.135604);
   hmcerror__14->SetBinError(32,0.3895343);
   hmcerror__14->SetBinError(33,0.3895343);
   hmcerror__14->SetEntries(3516.85);

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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,1210);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(124.4638);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.0/32","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1463.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  283.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 277.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

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
   0.4560777,
   0.3164408,
   0.3548113,
   0.3251061,
   0.3207943,
   0.3586142,
   0.3348465,
   0.3360545,
   0.348323,
   0.357941,
   0.3294787,
   0.3664798,
   0.3734631,
   0.3805342,
   0.3681875,
   0.3710523,
   0.3587462,
   0.3768122,
   0.368808,
   0.3580711,
   0.3080476,
   0.4092449,
   0.3741008,
   0.3485025,
   0.3790835,
   0.3682403,
   0.3612254,
   0.3645781,
   0.3667685,
   0.3975427,
   1.685066,
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
   0.4560777,
   0.3164408,
   0.3548113,
   0.3251061,
   0.3207943,
   0.3586142,
   0.3348465,
   0.3360545,
   0.348323,
   0.357941,
   0.3294787,
   0.3664798,
   0.3734631,
   0.3805342,
   0.3681875,
   0.3710523,
   0.3587462,
   0.3768122,
   0.368808,
   0.3580711,
   0.3080476,
   0.4092449,
   0.3741008,
   0.3485025,
   0.3790835,
   0.3682403,
   0.3612254,
   0.3645781,
   0.3667685,
   0.3975427,
   1.685066,
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
   0.2695129,
   0.2817207,
   0.2940211,
   0.2839343,
   0.2921309,
   0.3189527,
   0.3056276,
   0.2840598,
   0.312712,
   0.3240332,
   0.2958032,
   0.3329063,
   0.3316371,
   0.3074655,
   0.3259087,
   0.3325299,
   0.3293243,
   0.3388412,
   0.3338847,
   0.3078001,
   0.2599535,
   0.3010788,
   0.3322055,
   0.3041064,
   0.3483108,
   0.3390032,
   0.3285155,
   0.3409127,
   0.3281692,
   0.2892656,
   0.4655403,
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
   0.2695129,
   0.2817207,
   0.2940211,
   0.2839343,
   0.2921309,
   0.3189527,
   0.3056276,
   0.2840598,
   0.312712,
   0.3240332,
   0.2958032,
   0.3329063,
   0.3316371,
   0.3074655,
   0.3259087,
   0.3325299,
   0.3293243,
   0.3388412,
   0.3338847,
   0.3078001,
   0.2599535,
   0.3010788,
   0.3322055,
   0.3041064,
   0.3483108,
   0.3390032,
   0.3285155,
   0.3409127,
   0.3281692,
   0.2892656,
   0.4655403,
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
   0.7784757,
   0.6378731,
   0.7539579,
   0.7100621,
   0.6817053,
   0.8539048,
   0.7827955,
   0.7412783,
   0.8324029,
   0.675914,
   0.7385132,
   0.7871911,
   0.6564994,
   0.6417703,
   0.6774669,
   0.7069358,
   0.7215782,
   0.7859719,
   0.6664545,
   0.5918894,
   0.7945963,
   0.7233859,
   0.8823008,
   0.5802497,
   0.8354513,
   0.7749567,
   0.8254415,
   0.8513614,
   0.7288458,
   0.6968066,
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
   0.09376576,
   0.07421569,
   0.08439823,
   0.07948453,
   0.075382,
   0.08731525,
   0.0804617,
   0.07375995,
   0.08201909,
   0.07299564,
   0.0747464,
   0.08452663,
   0.07394858,
   0.0689117,
   0.07583581,
   0.07547953,
   0.07661178,
   0.08121382,
   0.07460308,
   0.06886556,
   0.08389728,
   0.07904,
   0.08693568,
   0.07091408,
   0.08632649,
   0.08227911,
   0.08529218,
   0.08471363,
   0.08209773,
   0.1036048,
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
   0.09154874,
   0.07252113,
   0.08254368,
   0.07773795,
   0.07374509,
   0.08556475,
   0.07883639,
   0.07375995,
   0.08201909,
   0.07144795,
   0.07326051,
   0.08274528,
   0.07231301,
   0.06745943,
   0.0741694,
   0.07389757,
   0.07501242,
   0.07956328,
   0.07296377,
   0.06729316,
   0.08216298,
   0.07734425,
   0.08693568,
   0.06921286,
   0.08457204,
   0.08056143,
   0.08355875,
   0.08471363,
   0.08028192,
   0.1005759,
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
