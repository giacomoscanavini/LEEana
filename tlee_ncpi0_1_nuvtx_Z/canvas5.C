#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 10:27:34 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
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
   pad1->Range(-169.2308,-2.383664,1241.026,263.5831);
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
   hmc__13->SetBinContent(0,0.4683926);
   hmc__13->SetBinContent(1,81.18515);
   hmc__13->SetBinContent(2,104.4568);
   hmc__13->SetBinContent(3,93.59029);
   hmc__13->SetBinContent(4,103.4327);
   hmc__13->SetBinContent(5,105.664);
   hmc__13->SetBinContent(6,96.17287);
   hmc__13->SetBinContent(7,105.5305);
   hmc__13->SetBinContent(8,118.7669);
   hmc__13->SetBinContent(9,105.3867);
   hmc__13->SetBinContent(10,110.4321);
   hmc__13->SetBinContent(11,119.1832);
   hmc__13->SetBinContent(12,96.46637);
   hmc__13->SetBinContent(13,107.2266);
   hmc__13->SetBinContent(14,119.1135);
   hmc__13->SetBinContent(15,104.0379);
   hmc__13->SetBinContent(16,108.5018);
   hmc__13->SetBinContent(17,108.9334);
   hmc__13->SetBinContent(18,103.3968);
   hmc__13->SetBinContent(19,104.2521);
   hmc__13->SetBinContent(20,112.5903);
   hmc__13->SetBinContent(21,102.0688);
   hmc__13->SetBinContent(22,103.0842);
   hmc__13->SetBinContent(23,97.43935);
   hmc__13->SetBinContent(24,101.2907);
   hmc__13->SetBinContent(25,97.13287);
   hmc__13->SetBinContent(26,98.28497);
   hmc__13->SetBinContent(27,97.7555);
   hmc__13->SetBinContent(28,96.52724);
   hmc__13->SetBinContent(29,90.65295);
   hmc__13->SetBinContent(30,54.84655);
   hmc__13->SetBinContent(31,1.775187);
   hmc__13->SetBinError(0,0.3516553);
   hmc__13->SetBinError(1,38.89118);
   hmc__13->SetBinError(2,33.93116);
   hmc__13->SetBinError(3,33.26906);
   hmc__13->SetBinError(4,33.03126);
   hmc__13->SetBinError(5,33.91023);
   hmc__13->SetBinError(6,35.31002);
   hmc__13->SetBinError(7,37.50709);
   hmc__13->SetBinError(8,39.44089);
   hmc__13->SetBinError(9,38.84796);
   hmc__13->SetBinError(10,41.33831);
   hmc__13->SetBinError(11,38.32985);
   hmc__13->SetBinError(12,36.30346);
   hmc__13->SetBinError(13,41.01599);
   hmc__13->SetBinError(14,43.64491);
   hmc__13->SetBinError(15,40.98089);
   hmc__13->SetBinError(16,40.29818);
   hmc__13->SetBinError(17,38.55595);
   hmc__13->SetBinError(18,39.22991);
   hmc__13->SetBinError(19,39.21867);
   hmc__13->SetBinError(20,40.94386);
   hmc__13->SetBinError(21,31.55953);
   hmc__13->SetBinError(22,42.13275);
   hmc__13->SetBinError(23,36.67424);
   hmc__13->SetBinError(24,35.31502);
   hmc__13->SetBinError(25,38.65553);
   hmc__13->SetBinError(26,37.19241);
   hmc__13->SetBinError(27,34.83819);
   hmc__13->SetBinError(28,37.87721);
   hmc__13->SetBinError(29,38.7236);
   hmc__13->SetBinError(30,25.25439);
   hmc__13->SetBinError(31,2.189734);
   hmc__13->SetBinError(32,0.3895343);
   hmc__13->SetBinError(33,0.3895343);
   hmc__13->SetMinimum(-2.383664);
   hmc__13->SetMaximum(250.2848);
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
   hs5_stack_5->SetMaximum(125.1424);
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
   hbadmatch_stack_1->SetBinContent(1,1.765774);
   hbadmatch_stack_1->SetBinContent(2,1.963094);
   hbadmatch_stack_1->SetBinContent(3,2.1283);
   hbadmatch_stack_1->SetBinContent(4,5.477799);
   hbadmatch_stack_1->SetBinContent(5,5.464213);
   hbadmatch_stack_1->SetBinContent(6,1.295782);
   hbadmatch_stack_1->SetBinContent(7,3.156066);
   hbadmatch_stack_1->SetBinContent(8,3.683085);
   hbadmatch_stack_1->SetBinContent(9,3.190383);
   hbadmatch_stack_1->SetBinContent(10,2.573687);
   hbadmatch_stack_1->SetBinContent(11,3.090805);
   hbadmatch_stack_1->SetBinContent(12,4.05198);
   hbadmatch_stack_1->SetBinContent(13,2.159727);
   hbadmatch_stack_1->SetBinContent(14,3.011433);
   hbadmatch_stack_1->SetBinContent(15,0.8351487);
   hbadmatch_stack_1->SetBinContent(16,1.772036);
   hbadmatch_stack_1->SetBinContent(17,2.851126);
   hbadmatch_stack_1->SetBinContent(18,2.303438);
   hbadmatch_stack_1->SetBinContent(19,2.766179);
   hbadmatch_stack_1->SetBinContent(20,3.684962);
   hbadmatch_stack_1->SetBinContent(21,3.718184);
   hbadmatch_stack_1->SetBinContent(22,1.982902);
   hbadmatch_stack_1->SetBinContent(23,1.905595);
   hbadmatch_stack_1->SetBinContent(24,1.705226);
   hbadmatch_stack_1->SetBinContent(25,1.436203);
   hbadmatch_stack_1->SetBinContent(26,2.008273);
   hbadmatch_stack_1->SetBinContent(27,1.691701);
   hbadmatch_stack_1->SetBinContent(28,1.611922);
   hbadmatch_stack_1->SetBinContent(29,0.6289765);
   hbadmatch_stack_1->SetBinContent(30,1.765783);
   hbadmatch_stack_1->SetBinContent(31,0.1950248);
   hbadmatch_stack_1->SetBinError(1,0.6234742);
   hbadmatch_stack_1->SetBinError(2,0.7280487);
   hbadmatch_stack_1->SetBinError(3,0.729803);
   hbadmatch_stack_1->SetBinError(4,1.5682);
   hbadmatch_stack_1->SetBinError(5,1.27153);
   hbadmatch_stack_1->SetBinError(6,0.5057636);
   hbadmatch_stack_1->SetBinError(7,0.9879489);
   hbadmatch_stack_1->SetBinError(8,1.00872);
   hbadmatch_stack_1->SetBinError(9,1.001243);
   hbadmatch_stack_1->SetBinError(10,0.9649344);
   hbadmatch_stack_1->SetBinError(11,0.9211267);
   hbadmatch_stack_1->SetBinError(12,2.130161);
   hbadmatch_stack_1->SetBinError(13,0.7190447);
   hbadmatch_stack_1->SetBinError(14,0.9425337);
   hbadmatch_stack_1->SetBinError(15,0.5115071);
   hbadmatch_stack_1->SetBinError(16,0.6258242);
   hbadmatch_stack_1->SetBinError(17,0.9114161);
   hbadmatch_stack_1->SetBinError(18,0.7725723);
   hbadmatch_stack_1->SetBinError(19,0.9740424);
   hbadmatch_stack_1->SetBinError(20,1.011462);
   hbadmatch_stack_1->SetBinError(21,1.081771);
   hbadmatch_stack_1->SetBinError(22,0.6815051);
   hbadmatch_stack_1->SetBinError(23,0.6013);
   hbadmatch_stack_1->SetBinError(24,0.6932407);
   hbadmatch_stack_1->SetBinError(25,0.5305479);
   hbadmatch_stack_1->SetBinError(26,0.6448026);
   hbadmatch_stack_1->SetBinError(27,0.6195367);
   hbadmatch_stack_1->SetBinError(28,0.6796691);
   hbadmatch_stack_1->SetBinError(29,0.3634992);
   hbadmatch_stack_1->SetBinError(30,0.7466227);
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
   houtFV_stack_4->SetBinContent(1,21.87893);
   houtFV_stack_4->SetBinContent(2,9.172946);
   houtFV_stack_4->SetBinContent(3,5.845459);
   houtFV_stack_4->SetBinContent(4,5.401624);
   houtFV_stack_4->SetBinContent(5,3.82859);
   houtFV_stack_4->SetBinContent(6,4.564847);
   houtFV_stack_4->SetBinContent(7,5.313459);
   houtFV_stack_4->SetBinContent(8,8.392884);
   houtFV_stack_4->SetBinContent(9,6.829165);
   houtFV_stack_4->SetBinContent(10,5.754527);
   houtFV_stack_4->SetBinContent(11,8.093088);
   houtFV_stack_4->SetBinContent(12,6.201222);
   houtFV_stack_4->SetBinContent(13,6.389117);
   houtFV_stack_4->SetBinContent(14,5.450398);
   houtFV_stack_4->SetBinContent(15,5.212994);
   houtFV_stack_4->SetBinContent(16,6.6499);
   houtFV_stack_4->SetBinContent(17,5.809056);
   houtFV_stack_4->SetBinContent(18,5.332095);
   houtFV_stack_4->SetBinContent(19,8.613897);
   houtFV_stack_4->SetBinContent(20,5.988905);
   houtFV_stack_4->SetBinContent(21,9.375462);
   houtFV_stack_4->SetBinContent(22,6.032421);
   houtFV_stack_4->SetBinContent(23,6.376904);
   houtFV_stack_4->SetBinContent(24,8.382692);
   houtFV_stack_4->SetBinContent(25,6.73256);
   houtFV_stack_4->SetBinContent(26,4.080199);
   houtFV_stack_4->SetBinContent(27,7.742033);
   houtFV_stack_4->SetBinContent(28,4.419963);
   houtFV_stack_4->SetBinContent(29,5.348486);
   houtFV_stack_4->SetBinContent(30,3.659064);
   houtFV_stack_4->SetBinContent(31,0.1967154);
   houtFV_stack_4->SetBinError(1,2.566975);
   houtFV_stack_4->SetBinError(2,1.526465);
   houtFV_stack_4->SetBinError(3,1.180475);
   houtFV_stack_4->SetBinError(4,1.140769);
   houtFV_stack_4->SetBinError(5,0.9674692);
   houtFV_stack_4->SetBinError(6,0.9476451);
   houtFV_stack_4->SetBinError(7,1.118714);
   houtFV_stack_4->SetBinError(8,1.428744);
   houtFV_stack_4->SetBinError(9,1.237997);
   houtFV_stack_4->SetBinError(10,1.147031);
   houtFV_stack_4->SetBinError(11,1.41435);
   houtFV_stack_4->SetBinError(12,1.180697);
   houtFV_stack_4->SetBinError(13,1.378661);
   houtFV_stack_4->SetBinError(14,1.094075);
   houtFV_stack_4->SetBinError(15,1.087378);
   houtFV_stack_4->SetBinError(16,1.210281);
   houtFV_stack_4->SetBinError(17,1.15733);
   houtFV_stack_4->SetBinError(18,1.066158);
   houtFV_stack_4->SetBinError(19,1.681158);
   houtFV_stack_4->SetBinError(20,1.267367);
   houtFV_stack_4->SetBinError(21,1.613809);
   houtFV_stack_4->SetBinError(22,1.193254);
   houtFV_stack_4->SetBinError(23,1.229437);
   houtFV_stack_4->SetBinError(24,1.428265);
   houtFV_stack_4->SetBinError(25,1.336249);
   houtFV_stack_4->SetBinError(26,1.049156);
   houtFV_stack_4->SetBinError(27,1.418009);
   houtFV_stack_4->SetBinError(28,1.022882);
   houtFV_stack_4->SetBinError(29,1.11161);
   houtFV_stack_4->SetBinError(30,0.9934661);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2327483);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2285056);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.09985313);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1963855);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3013489);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2899644);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5056056);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1536564);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5976801);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.06768578);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1064809);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.08260205);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09965283);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.09368806);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.06921894);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1966769);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3847367);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.03556623);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5355358);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1775981);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.2333822);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.285418);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.06425367);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.3675796);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1989914);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1558255);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.09985313);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.09581377);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1524506);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1829776);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2682627);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.07944201);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2581253);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04030915);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.0623148);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.0609878);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05049033);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.05866224);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.04194035);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1477068);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2638794);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02893407);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2299407);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.08273252);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1664292);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.1811098);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.04582575);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.1790451);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.01491798);
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
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2354227);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4003635);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1686638);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1367028);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2431103);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.393863);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5415764);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6109749);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.300813);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.6987334);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1939872);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.287507);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3716679);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5148004);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.751209);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5140653);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4724602);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2966263);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3360325);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.501107);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2171392);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.6769934);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.6330985);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2772888);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3120146);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.6250339);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.4434484);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.329969);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.1883566);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1472722);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1228006);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1759821);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07307677);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04882775);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.0777834);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1634721);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2055342);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2582515);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1269337);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2451591);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.0734728);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.08981582);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1048812);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.20095);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3047824);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2133143);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2072653);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.07744116);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.09544731);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2191862);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.09385725);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2850668);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3192215);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1175843);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1058123);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.2334863);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.1879071);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.1452418);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.07708244);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1303248);
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
   hNCpi0inFVres_stack_7->SetBinContent(0,0.4683926);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.7361);
   hNCpi0inFVres_stack_7->SetBinContent(2,28.31209);
   hNCpi0inFVres_stack_7->SetBinContent(3,28.27462);
   hNCpi0inFVres_stack_7->SetBinContent(4,28.32544);
   hNCpi0inFVres_stack_7->SetBinContent(5,32.35109);
   hNCpi0inFVres_stack_7->SetBinContent(6,33.58708);
   hNCpi0inFVres_stack_7->SetBinContent(7,33.78268);
   hNCpi0inFVres_stack_7->SetBinContent(8,32.86623);
   hNCpi0inFVres_stack_7->SetBinContent(9,36.98127);
   hNCpi0inFVres_stack_7->SetBinContent(10,36.34491);
   hNCpi0inFVres_stack_7->SetBinContent(11,37.42595);
   hNCpi0inFVres_stack_7->SetBinContent(12,36.16138);
   hNCpi0inFVres_stack_7->SetBinContent(13,40.53106);
   hNCpi0inFVres_stack_7->SetBinContent(14,40.13608);
   hNCpi0inFVres_stack_7->SetBinContent(15,36.59307);
   hNCpi0inFVres_stack_7->SetBinContent(16,40.33875);
   hNCpi0inFVres_stack_7->SetBinContent(17,40.11775);
   hNCpi0inFVres_stack_7->SetBinContent(18,37.70615);
   hNCpi0inFVres_stack_7->SetBinContent(19,38.02937);
   hNCpi0inFVres_stack_7->SetBinContent(20,37.01801);
   hNCpi0inFVres_stack_7->SetBinContent(21,29.55917);
   hNCpi0inFVres_stack_7->SetBinContent(22,31.01768);
   hNCpi0inFVres_stack_7->SetBinContent(23,37.25032);
   hNCpi0inFVres_stack_7->SetBinContent(24,30.70366);
   hNCpi0inFVres_stack_7->SetBinContent(25,37.06653);
   hNCpi0inFVres_stack_7->SetBinContent(26,36.2833);
   hNCpi0inFVres_stack_7->SetBinContent(27,36.37413);
   hNCpi0inFVres_stack_7->SetBinContent(28,38.65775);
   hNCpi0inFVres_stack_7->SetBinContent(29,32.14675);
   hNCpi0inFVres_stack_7->SetBinContent(30,15.41321);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.113424);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3516553);
   hNCpi0inFVres_stack_7->SetBinError(1,1.208853);
   hNCpi0inFVres_stack_7->SetBinError(2,1.506785);
   hNCpi0inFVres_stack_7->SetBinError(3,1.601439);
   hNCpi0inFVres_stack_7->SetBinError(4,1.756101);
   hNCpi0inFVres_stack_7->SetBinError(5,1.659388);
   hNCpi0inFVres_stack_7->SetBinError(6,1.714775);
   hNCpi0inFVres_stack_7->SetBinError(7,1.773303);
   hNCpi0inFVres_stack_7->SetBinError(8,1.661904);
   hNCpi0inFVres_stack_7->SetBinError(9,1.998436);
   hNCpi0inFVres_stack_7->SetBinError(10,1.746832);
   hNCpi0inFVres_stack_7->SetBinError(11,1.865811);
   hNCpi0inFVres_stack_7->SetBinError(12,1.906847);
   hNCpi0inFVres_stack_7->SetBinError(13,2.062393);
   hNCpi0inFVres_stack_7->SetBinError(14,1.948017);
   hNCpi0inFVres_stack_7->SetBinError(15,1.854646);
   hNCpi0inFVres_stack_7->SetBinError(16,1.910684);
   hNCpi0inFVres_stack_7->SetBinError(17,2.060361);
   hNCpi0inFVres_stack_7->SetBinError(18,1.882321);
   hNCpi0inFVres_stack_7->SetBinError(19,1.806255);
   hNCpi0inFVres_stack_7->SetBinError(20,1.945165);
   hNCpi0inFVres_stack_7->SetBinError(21,1.700261);
   hNCpi0inFVres_stack_7->SetBinError(22,1.698257);
   hNCpi0inFVres_stack_7->SetBinError(23,1.978217);
   hNCpi0inFVres_stack_7->SetBinError(24,1.559826);
   hNCpi0inFVres_stack_7->SetBinError(25,1.82824);
   hNCpi0inFVres_stack_7->SetBinError(26,1.774044);
   hNCpi0inFVres_stack_7->SetBinError(27,1.757521);
   hNCpi0inFVres_stack_7->SetBinError(28,1.834983);
   hNCpi0inFVres_stack_7->SetBinError(29,1.71627);
   hNCpi0inFVres_stack_7->SetBinError(30,1.177099);
   hNCpi0inFVres_stack_7->SetBinError(31,0.04785697);
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
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.15123);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.723537);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.349783);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.055387);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.856797);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.521493);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.23306);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.42419);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.885995);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.951319);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.909885);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.503457);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.340393);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.877764);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.17566);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.737876);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.313873);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.03367);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.463203);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.899653);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.270775);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.28204);
   hNCpi0inFVdis_stack_8->SetBinContent(23,7.687678);
   hNCpi0inFVdis_stack_8->SetBinContent(24,6.674104);
   hNCpi0inFVdis_stack_8->SetBinContent(25,8.262122);
   hNCpi0inFVdis_stack_8->SetBinContent(26,9.456531);
   hNCpi0inFVdis_stack_8->SetBinContent(27,7.367235);
   hNCpi0inFVdis_stack_8->SetBinContent(28,6.796858);
   hNCpi0inFVdis_stack_8->SetBinContent(29,6.534904);
   hNCpi0inFVdis_stack_8->SetBinContent(30,3.678224);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.07994311);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8481126);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.031581);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8658901);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9591816);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8714278);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8363159);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.95675);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.255461);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.011339);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9793975);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8669395);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.042801);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.058277);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.078851);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.095221);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8816644);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9742489);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.204806);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9477894);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.061668);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7404306);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.169763);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.7917082);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.8760229);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.030831);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.064879);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.9165635);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.7843731);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.896031);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.6061929);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.04843715);
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
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.1755477);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.0365362);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02529745);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.07096088);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.06045564);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1388841);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(30,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1280213);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02583506);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01955114);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03556259);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04599361);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1320045);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(30,0.01071203);
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
   hNCinFV_stack_11->SetBinContent(1,6.687309);
   hNCinFV_stack_11->SetBinContent(2,9.785689);
   hNCinFV_stack_11->SetBinContent(3,8.719114);
   hNCinFV_stack_11->SetBinContent(4,9.62993);
   hNCinFV_stack_11->SetBinContent(5,9.997278);
   hNCinFV_stack_11->SetBinContent(6,9.304225);
   hNCinFV_stack_11->SetBinContent(7,9.085156);
   hNCinFV_stack_11->SetBinContent(8,6.886619);
   hNCinFV_stack_11->SetBinContent(9,9.935123);
   hNCinFV_stack_11->SetBinContent(10,10.30466);
   hNCinFV_stack_11->SetBinContent(11,11.04739);
   hNCinFV_stack_11->SetBinContent(12,6.325369);
   hNCinFV_stack_11->SetBinContent(13,7.696956);
   hNCinFV_stack_11->SetBinContent(14,13.16467);
   hNCinFV_stack_11->SetBinContent(15,7.141544);
   hNCinFV_stack_11->SetBinContent(16,10.45008);
   hNCinFV_stack_11->SetBinContent(17,11.59419);
   hNCinFV_stack_11->SetBinContent(18,8.944614);
   hNCinFV_stack_11->SetBinContent(19,11.15133);
   hNCinFV_stack_11->SetBinContent(20,12.48478);
   hNCinFV_stack_11->SetBinContent(21,8.241108);
   hNCinFV_stack_11->SetBinContent(22,12.90137);
   hNCinFV_stack_11->SetBinContent(23,8.50729);
   hNCinFV_stack_11->SetBinContent(24,12.28678);
   hNCinFV_stack_11->SetBinContent(25,9.564096);
   hNCinFV_stack_11->SetBinContent(26,7.906263);
   hNCinFV_stack_11->SetBinContent(27,10.9883);
   hNCinFV_stack_11->SetBinContent(28,9.09566);
   hNCinFV_stack_11->SetBinContent(29,7.368064);
   hNCinFV_stack_11->SetBinContent(30,6.220199);
   hNCinFV_stack_11->SetBinError(1,1.414629);
   hNCinFV_stack_11->SetBinError(2,1.763988);
   hNCinFV_stack_11->SetBinError(3,1.594347);
   hNCinFV_stack_11->SetBinError(4,1.941613);
   hNCinFV_stack_11->SetBinError(5,1.994662);
   hNCinFV_stack_11->SetBinError(6,1.471701);
   hNCinFV_stack_11->SetBinError(7,1.65575);
   hNCinFV_stack_11->SetBinError(8,1.371956);
   hNCinFV_stack_11->SetBinError(9,1.552198);
   hNCinFV_stack_11->SetBinError(10,1.900276);
   hNCinFV_stack_11->SetBinError(11,2.059722);
   hNCinFV_stack_11->SetBinError(12,1.259912);
   hNCinFV_stack_11->SetBinError(13,1.62824);
   hNCinFV_stack_11->SetBinError(14,2.013464);
   hNCinFV_stack_11->SetBinError(15,1.364049);
   hNCinFV_stack_11->SetBinError(16,1.780892);
   hNCinFV_stack_11->SetBinError(17,1.856749);
   hNCinFV_stack_11->SetBinError(18,1.588843);
   hNCinFV_stack_11->SetBinError(19,2.04662);
   hNCinFV_stack_11->SetBinError(20,1.996126);
   hNCinFV_stack_11->SetBinError(21,1.436073);
   hNCinFV_stack_11->SetBinError(22,1.998526);
   hNCinFV_stack_11->SetBinError(23,1.495342);
   hNCinFV_stack_11->SetBinError(24,1.893755);
   hNCinFV_stack_11->SetBinError(25,1.659368);
   hNCinFV_stack_11->SetBinError(26,1.413118);
   hNCinFV_stack_11->SetBinError(27,1.995848);
   hNCinFV_stack_11->SetBinError(28,1.712782);
   hNCinFV_stack_11->SetBinError(29,1.371923);
   hNCinFV_stack_11->SetBinError(30,1.199605);
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
   hmcerror__14->SetBinContent(0,0.4683926);
   hmcerror__14->SetBinContent(1,81.18515);
   hmcerror__14->SetBinContent(2,104.4568);
   hmcerror__14->SetBinContent(3,93.59029);
   hmcerror__14->SetBinContent(4,103.4327);
   hmcerror__14->SetBinContent(5,105.664);
   hmcerror__14->SetBinContent(6,96.17287);
   hmcerror__14->SetBinContent(7,105.5305);
   hmcerror__14->SetBinContent(8,118.7669);
   hmcerror__14->SetBinContent(9,105.3867);
   hmcerror__14->SetBinContent(10,110.4321);
   hmcerror__14->SetBinContent(11,119.1832);
   hmcerror__14->SetBinContent(12,96.46637);
   hmcerror__14->SetBinContent(13,107.2266);
   hmcerror__14->SetBinContent(14,119.1135);
   hmcerror__14->SetBinContent(15,104.0379);
   hmcerror__14->SetBinContent(16,108.5018);
   hmcerror__14->SetBinContent(17,108.9334);
   hmcerror__14->SetBinContent(18,103.3968);
   hmcerror__14->SetBinContent(19,104.2521);
   hmcerror__14->SetBinContent(20,112.5903);
   hmcerror__14->SetBinContent(21,102.0688);
   hmcerror__14->SetBinContent(22,103.0842);
   hmcerror__14->SetBinContent(23,97.43935);
   hmcerror__14->SetBinContent(24,101.2907);
   hmcerror__14->SetBinContent(25,97.13287);
   hmcerror__14->SetBinContent(26,98.28497);
   hmcerror__14->SetBinContent(27,97.7555);
   hmcerror__14->SetBinContent(28,96.52724);
   hmcerror__14->SetBinContent(29,90.65295);
   hmcerror__14->SetBinContent(30,54.84655);
   hmcerror__14->SetBinContent(31,1.775187);
   hmcerror__14->SetBinError(0,0.3516553);
   hmcerror__14->SetBinError(1,38.89118);
   hmcerror__14->SetBinError(2,33.93116);
   hmcerror__14->SetBinError(3,33.26906);
   hmcerror__14->SetBinError(4,33.03126);
   hmcerror__14->SetBinError(5,33.91023);
   hmcerror__14->SetBinError(6,35.31002);
   hmcerror__14->SetBinError(7,37.50709);
   hmcerror__14->SetBinError(8,39.44089);
   hmcerror__14->SetBinError(9,38.84796);
   hmcerror__14->SetBinError(10,41.33831);
   hmcerror__14->SetBinError(11,38.32985);
   hmcerror__14->SetBinError(12,36.30346);
   hmcerror__14->SetBinError(13,41.01599);
   hmcerror__14->SetBinError(14,43.64491);
   hmcerror__14->SetBinError(15,40.98089);
   hmcerror__14->SetBinError(16,40.29818);
   hmcerror__14->SetBinError(17,38.55595);
   hmcerror__14->SetBinError(18,39.22991);
   hmcerror__14->SetBinError(19,39.21867);
   hmcerror__14->SetBinError(20,40.94386);
   hmcerror__14->SetBinError(21,31.55953);
   hmcerror__14->SetBinError(22,42.13275);
   hmcerror__14->SetBinError(23,36.67424);
   hmcerror__14->SetBinError(24,35.31502);
   hmcerror__14->SetBinError(25,38.65553);
   hmcerror__14->SetBinError(26,37.19241);
   hmcerror__14->SetBinError(27,34.83819);
   hmcerror__14->SetBinError(28,37.87721);
   hmcerror__14->SetBinError(29,38.7236);
   hmcerror__14->SetBinError(30,25.25439);
   hmcerror__14->SetBinError(31,2.189734);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.2/32","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1017.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  235.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 283.4","F");

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
   0.479043,
   0.3248344,
   0.3554756,
   0.3193504,
   0.3209252,
   0.3671515,
   0.3554146,
   0.3320866,
   0.368623,
   0.3743325,
   0.3216044,
   0.3763328,
   0.3825168,
   0.3664146,
   0.3939035,
   0.3714056,
   0.3539406,
   0.3794114,
   0.3761909,
   0.3636537,
   0.3091986,
   0.4087217,
   0.3763802,
   0.34865,
   0.3979655,
   0.378414,
   0.3563809,
   0.3923992,
   0.4271631,
   0.4604553,
   1.233523,
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
   0.479043,
   0.3248344,
   0.3554756,
   0.3193504,
   0.3209252,
   0.3671515,
   0.3554146,
   0.3320866,
   0.368623,
   0.3743325,
   0.3216044,
   0.3763328,
   0.3825168,
   0.3664146,
   0.3939035,
   0.3714056,
   0.3539406,
   0.3794114,
   0.3761909,
   0.3636537,
   0.3091986,
   0.4087217,
   0.3763802,
   0.34865,
   0.3979655,
   0.378414,
   0.3563809,
   0.3923992,
   0.4271631,
   0.4604553,
   1.233523,
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
   0.2822089,
   0.2899236,
   0.2936543,
   0.2764596,
   0.2920627,
   0.3273493,
   0.3197629,
   0.2801228,
   0.3372122,
   0.3294054,
   0.2882613,
   0.3447359,
   0.3347353,
   0.3182495,
   0.3475109,
   0.3320607,
   0.3259069,
   0.3446347,
   0.3433552,
   0.3156384,
   0.26706,
   0.3071946,
   0.3464362,
   0.3017904,
   0.3591603,
   0.3548185,
   0.3284146,
   0.3701346,
   0.3901121,
   0.3922343,
   0.4798611,
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
   0.2822089,
   0.2899236,
   0.2936543,
   0.2764596,
   0.2920627,
   0.3273493,
   0.3197629,
   0.2801228,
   0.3372122,
   0.3294054,
   0.2882613,
   0.3447359,
   0.3347353,
   0.3182495,
   0.3475109,
   0.3320607,
   0.3259069,
   0.3446347,
   0.3433552,
   0.3156384,
   0.26706,
   0.3071946,
   0.3464362,
   0.3017904,
   0.3591603,
   0.3548185,
   0.3284146,
   0.3701346,
   0.3901121,
   0.3922343,
   0.4798611,
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
   0.8745442,
   0.7275736,
   0.8761593,
   0.7927862,
   0.794973,
   1.018998,
   0.9191653,
   0.8504056,
   0.9773528,
   0.7968701,
   0.8390443,
   0.9226013,
   0.7554094,
   0.7471867,
   0.7881745,
   0.8294793,
   0.835373,
   0.9284622,
   0.7865553,
   0.675014,
   0.9013528,
   0.8342695,
   1.057068,
   0.6812074,
   0.9883369,
   0.9258791,
   0.9820419,
   1.046337,
   0.8935176,
   0.8569363,
   0.563321,
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
   0.105337,
   0.08465223,
   0.09807749,
   0.08874468,
   0.08790697,
   0.1041967,
   0.09447882,
   0.08461852,
   0.09630144,
   0.08605835,
   0.08492135,
   0.09906665,
   0.08508988,
   0.08023106,
   0.08822845,
   0.08856351,
   0.08869366,
   0.09593723,
   0.08804719,
   0.07853699,
   0.09516914,
   0.09115558,
   0.104156,
   0.08325243,
   0.102124,
   0.09830293,
   0.1014736,
   0.1041144,
   0.1006465,
   0.1274137,
   0.563321,
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
   0.1028464,
   0.08271937,
   0.09592235,
   0.08679462,
   0.08599809,
   0.1021078,
   0.09257037,
   0.08461852,
   0.09630144,
   0.0842337,
   0.08323319,
   0.09697887,
   0.08320788,
   0.07854023,
   0.08628973,
   0.08670732,
   0.08684207,
   0.09398746,
   0.08611245,
   0.07674376,
   0.09320184,
   0.0891999,
   0.104156,
   0.08125521,
   0.1000485,
   0.09625073,
   0.09941129,
   0.1041144,
   0.09842041,
   0.1236887,
   0.7659533,
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
