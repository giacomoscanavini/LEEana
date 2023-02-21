#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 23:31:32 2022) by ROOT version 6.26/00
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
   pad1->Range(-4.119231,-3.04,3.957692,336.16);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmc__13->SetBinContent(1,150.6216);
   hmc__13->SetBinContent(2,140.2451);
   hmc__13->SetBinContent(3,134.7473);
   hmc__13->SetBinContent(4,131.8272);
   hmc__13->SetBinContent(5,109.6747);
   hmc__13->SetBinContent(6,100.7969);
   hmc__13->SetBinContent(7,115.0024);
   hmc__13->SetBinContent(8,105.0314);
   hmc__13->SetBinContent(9,114.0421);
   hmc__13->SetBinContent(10,113.9292);
   hmc__13->SetBinContent(11,124.6807);
   hmc__13->SetBinContent(12,133.7741);
   hmc__13->SetBinContent(13,132.7949);
   hmc__13->SetBinContent(14,133.6099);
   hmc__13->SetBinContent(15,122.6197);
   hmc__13->SetBinContent(16,131.957);
   hmc__13->SetBinContent(17,104.8904);
   hmc__13->SetBinContent(18,114.3398);
   hmc__13->SetBinContent(19,109.6336);
   hmc__13->SetBinContent(20,101.651);
   hmc__13->SetBinContent(21,114.7617);
   hmc__13->SetBinContent(22,122.2096);
   hmc__13->SetBinContent(23,115.78);
   hmc__13->SetBinContent(24,129.8019);
   hmc__13->SetBinContent(25,141.2239);
   hmc__13->SetBinError(1,49.70357);
   hmc__13->SetBinError(2,51.01706);
   hmc__13->SetBinError(3,47.1254);
   hmc__13->SetBinError(4,50.26961);
   hmc__13->SetBinError(5,40.23718);
   hmc__13->SetBinError(6,33.81083);
   hmc__13->SetBinError(7,39.27363);
   hmc__13->SetBinError(8,40.37158);
   hmc__13->SetBinError(9,43.84489);
   hmc__13->SetBinError(10,44.18793);
   hmc__13->SetBinError(11,44.13281);
   hmc__13->SetBinError(12,52.85806);
   hmc__13->SetBinError(13,46.79526);
   hmc__13->SetBinError(14,48.36301);
   hmc__13->SetBinError(15,55.6816);
   hmc__13->SetBinError(16,49.05451);
   hmc__13->SetBinError(17,38.05907);
   hmc__13->SetBinError(18,44.15405);
   hmc__13->SetBinError(19,47.53276);
   hmc__13->SetBinError(20,32.44241);
   hmc__13->SetBinError(21,45.59675);
   hmc__13->SetBinError(22,43.03129);
   hmc__13->SetBinError(23,46.15515);
   hmc__13->SetBinError(24,45.92238);
   hmc__13->SetBinError(25,45.57729);
   hmc__13->SetBinError(26,0.3895343);
   hmc__13->SetMinimum(-3.04);
   hmc__13->SetMaximum(319.2);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",25,-3.15,3.15);
   hs5_stack_5->SetMinimum(-8.304323e-09);
   hs5_stack_5->SetMaximum(158.1527);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.85088);
   hbadmatch_stack_1->SetBinContent(2,3.554959);
   hbadmatch_stack_1->SetBinContent(3,2.066854);
   hbadmatch_stack_1->SetBinContent(4,4.502382);
   hbadmatch_stack_1->SetBinContent(5,4.095702);
   hbadmatch_stack_1->SetBinContent(6,1.884833);
   hbadmatch_stack_1->SetBinContent(7,2.105465);
   hbadmatch_stack_1->SetBinContent(8,4.807116);
   hbadmatch_stack_1->SetBinContent(9,3.236645);
   hbadmatch_stack_1->SetBinContent(10,2.295938);
   hbadmatch_stack_1->SetBinContent(11,2.298342);
   hbadmatch_stack_1->SetBinContent(12,2.564186);
   hbadmatch_stack_1->SetBinContent(13,2.638105);
   hbadmatch_stack_1->SetBinContent(14,2.703722);
   hbadmatch_stack_1->SetBinContent(15,1.850432);
   hbadmatch_stack_1->SetBinContent(16,3.007457);
   hbadmatch_stack_1->SetBinContent(17,3.010329);
   hbadmatch_stack_1->SetBinContent(18,5.200982);
   hbadmatch_stack_1->SetBinContent(19,3.147604);
   hbadmatch_stack_1->SetBinContent(20,3.7023);
   hbadmatch_stack_1->SetBinContent(21,3.312195);
   hbadmatch_stack_1->SetBinContent(22,2.172884);
   hbadmatch_stack_1->SetBinContent(23,2.974031);
   hbadmatch_stack_1->SetBinContent(24,2.776541);
   hbadmatch_stack_1->SetBinContent(25,2.114924);
   hbadmatch_stack_1->SetBinError(1,1.106767);
   hbadmatch_stack_1->SetBinError(2,1.019411);
   hbadmatch_stack_1->SetBinError(3,0.6999836);
   hbadmatch_stack_1->SetBinError(4,1.097616);
   hbadmatch_stack_1->SetBinError(5,0.973245);
   hbadmatch_stack_1->SetBinError(6,0.706691);
   hbadmatch_stack_1->SetBinError(7,0.754444);
   hbadmatch_stack_1->SetBinError(8,1.46987);
   hbadmatch_stack_1->SetBinError(9,0.8962054);
   hbadmatch_stack_1->SetBinError(10,0.963733);
   hbadmatch_stack_1->SetBinError(11,0.7519527);
   hbadmatch_stack_1->SetBinError(12,0.7987448);
   hbadmatch_stack_1->SetBinError(13,0.8180421);
   hbadmatch_stack_1->SetBinError(14,0.9322083);
   hbadmatch_stack_1->SetBinError(15,0.7217245);
   hbadmatch_stack_1->SetBinError(16,0.9394233);
   hbadmatch_stack_1->SetBinError(17,0.8753834);
   hbadmatch_stack_1->SetBinError(18,2.123861);
   hbadmatch_stack_1->SetBinError(19,1.052888);
   hbadmatch_stack_1->SetBinError(20,1.014441);
   hbadmatch_stack_1->SetBinError(21,0.8954591);
   hbadmatch_stack_1->SetBinError(22,0.7804003);
   hbadmatch_stack_1->SetBinError(23,0.9808026);
   hbadmatch_stack_1->SetBinError(24,0.9517705);
   hbadmatch_stack_1->SetBinError(25,0.7722005);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,13.99142);
   hext_stack_2->SetBinContent(2,7.455595);
   hext_stack_2->SetBinContent(3,12.99511);
   hext_stack_2->SetBinContent(4,12.36067);
   hext_stack_2->SetBinContent(5,9.152603);
   hext_stack_2->SetBinContent(6,17.00479);
   hext_stack_2->SetBinContent(7,20.55603);
   hext_stack_2->SetBinContent(8,11.48682);
   hext_stack_2->SetBinContent(9,10.42865);
   hext_stack_2->SetBinContent(10,10.42147);
   hext_stack_2->SetBinContent(11,8.750413);
   hext_stack_2->SetBinContent(12,5.351989);
   hext_stack_2->SetBinContent(13,6.952434);
   hext_stack_2->SetBinContent(14,6.057034);
   hext_stack_2->SetBinContent(15,4.95257);
   hext_stack_2->SetBinContent(16,8.350995);
   hext_stack_2->SetBinContent(17,7.098067);
   hext_stack_2->SetBinContent(18,12.50631);
   hext_stack_2->SetBinContent(19,15.65813);
   hext_stack_2->SetBinContent(20,17.75455);
   hext_stack_2->SetBinContent(21,15.04687);
   hext_stack_2->SetBinContent(22,14.05768);
   hext_stack_2->SetBinContent(23,6.71301);
   hext_stack_2->SetBinContent(24,5.511983);
   hext_stack_2->SetBinContent(25,16.2782);
   hext_stack_2->SetBinError(1,2.840009);
   hext_stack_2->SetBinError(2,1.758699);
   hext_stack_2->SetBinError(3,2.559628);
   hext_stack_2->SetBinError(4,2.43697);
   hext_stack_2->SetBinError(5,1.969893);
   hext_stack_2->SetBinError(6,3.001127);
   hext_stack_2->SetBinError(7,3.301978);
   hext_stack_2->SetBinError(8,2.22362);
   hext_stack_2->SetBinError(9,2.214728);
   hext_stack_2->SetBinError(10,2.259695);
   hext_stack_2->SetBinError(11,1.962213);
   hext_stack_2->SetBinError(12,1.462956);
   hext_stack_2->SetBinError(13,1.808318);
   hext_stack_2->SetBinError(14,1.696844);
   hext_stack_2->SetBinError(15,1.331809);
   hext_stack_2->SetBinError(16,1.866482);
   hext_stack_2->SetBinError(17,1.912452);
   hext_stack_2->SetBinError(18,2.51521);
   hext_stack_2->SetBinError(19,2.802865);
   hext_stack_2->SetBinError(20,3.001672);
   hext_stack_2->SetBinError(21,2.666651);
   hext_stack_2->SetBinError(22,2.593508);
   hext_stack_2->SetBinError(23,1.699572);
   hext_stack_2->SetBinError(24,1.457839);
   hext_stack_2->SetBinError(25,2.978477);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.2516114);
   hdirt_stack_3->SetBinContent(2,0.7408447);
   hdirt_stack_3->SetBinContent(3,0.7896487);
   hdirt_stack_3->SetBinContent(4,0.4377912);
   hdirt_stack_3->SetBinContent(5,0.5570828);
   hdirt_stack_3->SetBinContent(6,0.9629543);
   hdirt_stack_3->SetBinContent(7,0.6190013);
   hdirt_stack_3->SetBinContent(8,1.033342);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(10,1.706287);
   hdirt_stack_3->SetBinContent(11,0.4048706);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.3635739);
   hdirt_stack_3->SetBinContent(15,0.4762587);
   hdirt_stack_3->SetBinContent(16,0.7618795);
   hdirt_stack_3->SetBinContent(18,1.073497);
   hdirt_stack_3->SetBinContent(19,1.279265);
   hdirt_stack_3->SetBinContent(20,0.7711815);
   hdirt_stack_3->SetBinContent(21,0.5758626);
   hdirt_stack_3->SetBinContent(22,0.590017);
   hdirt_stack_3->SetBinContent(23,0.4007975);
   hdirt_stack_3->SetBinContent(24,0.7382622);
   hdirt_stack_3->SetBinContent(25,0.8680849);
   hdirt_stack_3->SetBinError(1,0.2516114);
   hdirt_stack_3->SetBinError(2,0.4510433);
   hdirt_stack_3->SetBinError(3,0.4280591);
   hdirt_stack_3->SetBinError(4,0.3095651);
   hdirt_stack_3->SetBinError(5,0.4028472);
   hdirt_stack_3->SetBinError(6,0.4834551);
   hdirt_stack_3->SetBinError(7,0.3682946);
   hdirt_stack_3->SetBinError(8,0.5438016);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(10,1.037148);
   hdirt_stack_3->SetBinError(11,0.2872316);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.2623873);
   hdirt_stack_3->SetBinError(15,0.3652866);
   hdirt_stack_3->SetBinError(16,0.480555);
   hdirt_stack_3->SetBinError(18,0.5718625);
   hdirt_stack_3->SetBinError(19,0.5918154);
   hdirt_stack_3->SetBinError(20,0.3523779);
   hdirt_stack_3->SetBinError(21,0.3389606);
   hdirt_stack_3->SetBinError(22,0.4557601);
   hdirt_stack_3->SetBinError(23,0.4007975);
   hdirt_stack_3->SetBinError(24,0.4495333);
   hdirt_stack_3->SetBinError(25,0.4907823);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,6.957054);
   houtFV_stack_4->SetBinContent(2,8.165094);
   houtFV_stack_4->SetBinContent(3,8.754723);
   houtFV_stack_4->SetBinContent(4,9.259489);
   houtFV_stack_4->SetBinContent(5,8.412678);
   houtFV_stack_4->SetBinContent(6,6.989111);
   houtFV_stack_4->SetBinContent(7,10.27924);
   houtFV_stack_4->SetBinContent(8,6.867932);
   houtFV_stack_4->SetBinContent(9,5.642499);
   houtFV_stack_4->SetBinContent(10,8.773967);
   houtFV_stack_4->SetBinContent(11,6.991453);
   houtFV_stack_4->SetBinContent(12,7.152041);
   houtFV_stack_4->SetBinContent(13,7.07903);
   houtFV_stack_4->SetBinContent(14,7.44191);
   houtFV_stack_4->SetBinContent(15,8.299716);
   houtFV_stack_4->SetBinContent(16,12.84161);
   houtFV_stack_4->SetBinContent(17,7.585076);
   houtFV_stack_4->SetBinContent(18,9.045515);
   houtFV_stack_4->SetBinContent(19,7.487012);
   houtFV_stack_4->SetBinContent(20,6.494122);
   houtFV_stack_4->SetBinContent(21,7.016691);
   houtFV_stack_4->SetBinContent(22,11.49543);
   houtFV_stack_4->SetBinContent(23,6.156741);
   houtFV_stack_4->SetBinContent(24,8.628943);
   houtFV_stack_4->SetBinContent(25,9.252529);
   houtFV_stack_4->SetBinError(1,1.291321);
   houtFV_stack_4->SetBinError(2,1.447882);
   houtFV_stack_4->SetBinError(3,1.540627);
   houtFV_stack_4->SetBinError(4,1.51304);
   houtFV_stack_4->SetBinError(5,1.417751);
   houtFV_stack_4->SetBinError(6,1.385881);
   houtFV_stack_4->SetBinError(7,1.569681);
   houtFV_stack_4->SetBinError(8,1.194434);
   houtFV_stack_4->SetBinError(9,1.173823);
   houtFV_stack_4->SetBinError(10,1.489533);
   houtFV_stack_4->SetBinError(11,1.368952);
   houtFV_stack_4->SetBinError(12,1.258432);
   houtFV_stack_4->SetBinError(13,1.245154);
   houtFV_stack_4->SetBinError(14,1.297142);
   houtFV_stack_4->SetBinError(15,1.422509);
   houtFV_stack_4->SetBinError(16,1.885929);
   houtFV_stack_4->SetBinError(17,1.505997);
   houtFV_stack_4->SetBinError(18,1.522031);
   houtFV_stack_4->SetBinError(19,1.443053);
   houtFV_stack_4->SetBinError(20,1.247533);
   houtFV_stack_4->SetBinError(21,1.260661);
   houtFV_stack_4->SetBinError(22,1.804509);
   houtFV_stack_4->SetBinError(23,1.198138);
   houtFV_stack_4->SetBinError(24,1.477606);
   houtFV_stack_4->SetBinError(25,1.618221);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1096227);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2054218);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1802125);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.1173496);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.317339);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2284127);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.369279);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2765294);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2816334);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.06839793);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.09098216);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3900478);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.06317639);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.8179132);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.04281797);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.3720051);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.361499);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2382382);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2825949);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1760115);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.3374817);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.06043404);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.141261);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06402858);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1454247);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1310994);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.06783625);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2074986);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1094612);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1800741);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1642335);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1815061);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04917817);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.0519597);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1794586);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.03494021);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.310089);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03163788);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2063704);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1862365);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1371325);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2562185);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1083851);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1642238);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.03822372);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4099351);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6152219);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5135207);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.4631317);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5778781);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3157623);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3834465);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3221985);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.8993559);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5298305);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4361771);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6021284);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2224793);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.3641849);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7511728);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3682863);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6252953);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3249296);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2473222);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5701277);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.3893967);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.3450744);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.6145391);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.4140827);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.5148233);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1232837);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2147335);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1929443);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1703333);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2402799);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1350036);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2099526);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1513864);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3046153);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1936244);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1459411);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2548882);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1356092);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1608228);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2534284);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.09911288);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2015301);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1756586);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.09132236);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2281825);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1901991);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.09481378);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3055891);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1722855);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1625581);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,42.15978);
   hNCpi0inFVres_stack_7->SetBinContent(2,43.91978);
   hNCpi0inFVres_stack_7->SetBinContent(3,44.88851);
   hNCpi0inFVres_stack_7->SetBinContent(4,50.14045);
   hNCpi0inFVres_stack_7->SetBinContent(5,38.34388);
   hNCpi0inFVres_stack_7->SetBinContent(6,32.69987);
   hNCpi0inFVres_stack_7->SetBinContent(7,40.44513);
   hNCpi0inFVres_stack_7->SetBinContent(8,37.5638);
   hNCpi0inFVres_stack_7->SetBinContent(9,40.56448);
   hNCpi0inFVres_stack_7->SetBinContent(10,41.14437);
   hNCpi0inFVres_stack_7->SetBinContent(11,43.78619);
   hNCpi0inFVres_stack_7->SetBinContent(12,40.95761);
   hNCpi0inFVres_stack_7->SetBinContent(13,39.15348);
   hNCpi0inFVres_stack_7->SetBinContent(14,41.9243);
   hNCpi0inFVres_stack_7->SetBinContent(15,42.60766);
   hNCpi0inFVres_stack_7->SetBinContent(16,44.80347);
   hNCpi0inFVres_stack_7->SetBinContent(17,39.69824);
   hNCpi0inFVres_stack_7->SetBinContent(18,38.10869);
   hNCpi0inFVres_stack_7->SetBinContent(19,32.86551);
   hNCpi0inFVres_stack_7->SetBinContent(20,33.20189);
   hNCpi0inFVres_stack_7->SetBinContent(21,38.93457);
   hNCpi0inFVres_stack_7->SetBinContent(22,43.27113);
   hNCpi0inFVres_stack_7->SetBinContent(23,43.28975);
   hNCpi0inFVres_stack_7->SetBinContent(24,42.6319);
   hNCpi0inFVres_stack_7->SetBinContent(25,40.56873);
   hNCpi0inFVres_stack_7->SetBinError(1,1.972884);
   hNCpi0inFVres_stack_7->SetBinError(2,2.050344);
   hNCpi0inFVres_stack_7->SetBinError(3,2.013382);
   hNCpi0inFVres_stack_7->SetBinError(4,2.379244);
   hNCpi0inFVres_stack_7->SetBinError(5,1.934505);
   hNCpi0inFVres_stack_7->SetBinError(6,1.5871);
   hNCpi0inFVres_stack_7->SetBinError(7,2.032171);
   hNCpi0inFVres_stack_7->SetBinError(8,1.881604);
   hNCpi0inFVres_stack_7->SetBinError(9,1.931874);
   hNCpi0inFVres_stack_7->SetBinError(10,1.893076);
   hNCpi0inFVres_stack_7->SetBinError(11,2.146423);
   hNCpi0inFVres_stack_7->SetBinError(12,1.866175);
   hNCpi0inFVres_stack_7->SetBinError(13,1.82268);
   hNCpi0inFVres_stack_7->SetBinError(14,1.97141);
   hNCpi0inFVres_stack_7->SetBinError(15,1.950637);
   hNCpi0inFVres_stack_7->SetBinError(16,2.12647);
   hNCpi0inFVres_stack_7->SetBinError(17,1.964027);
   hNCpi0inFVres_stack_7->SetBinError(18,1.742705);
   hNCpi0inFVres_stack_7->SetBinError(19,1.872967);
   hNCpi0inFVres_stack_7->SetBinError(20,1.686679);
   hNCpi0inFVres_stack_7->SetBinError(21,1.809656);
   hNCpi0inFVres_stack_7->SetBinError(22,1.958592);
   hNCpi0inFVres_stack_7->SetBinError(23,2.016345);
   hNCpi0inFVres_stack_7->SetBinError(24,1.931833);
   hNCpi0inFVres_stack_7->SetBinError(25,1.949754);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,11.83234);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.5644);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.13484);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.88842);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.66839);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.973361);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.065272);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.95229);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.0567);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.716679);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.85954);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.10222);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.185243);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.21523);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.902101);
   hNCpi0inFVdis_stack_8->SetBinContent(16,9.938463);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.025725);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.077467);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.324378);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.65356);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.58982);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.650249);
   hNCpi0inFVdis_stack_8->SetBinContent(23,10.05728);
   hNCpi0inFVdis_stack_8->SetBinContent(24,11.09948);
   hNCpi0inFVdis_stack_8->SetBinContent(25,10.96521);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.339075);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.149245);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.096852);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.086592);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.086385);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9781177);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9410235);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8625808);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.143976);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9059313);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.285939);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.101717);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.020357);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.073482);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9409277);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.040207);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9323605);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8257036);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8440882);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9821265);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.238005);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.9130766);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.003598);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.140954);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.312093);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.0339179);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.07096088);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.08385543);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1287352);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02405068);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03556259);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1318151);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.0681115);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1115193);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,27.91512);
   hCCpi0inFV_stack_10->SetBinContent(2,24.09173);
   hCCpi0inFV_stack_10->SetBinContent(3,21.66365);
   hCCpi0inFV_stack_10->SetBinContent(4,24.92293);
   hCCpi0inFV_stack_10->SetBinContent(5,23.28805);
   hCCpi0inFV_stack_10->SetBinContent(6,10.51335);
   hCCpi0inFV_stack_10->SetBinContent(7,16.03223);
   hCCpi0inFV_stack_10->SetBinContent(8,15.25043);
   hCCpi0inFV_stack_10->SetBinContent(9,21.62894);
   hCCpi0inFV_stack_10->SetBinContent(10,17.83054);
   hCCpi0inFV_stack_10->SetBinContent(11,19.55119);
   hCCpi0inFV_stack_10->SetBinContent(12,23.84351);
   hCCpi0inFV_stack_10->SetBinContent(13,27.109);
   hCCpi0inFV_stack_10->SetBinContent(14,23.22095);
   hCCpi0inFV_stack_10->SetBinContent(15,20.44786);
   hCCpi0inFV_stack_10->SetBinContent(16,24.66389);
   hCCpi0inFV_stack_10->SetBinContent(17,16.90197);
   hCCpi0inFV_stack_10->SetBinContent(18,17.75816);
   hCCpi0inFV_stack_10->SetBinContent(19,17.37487);
   hCCpi0inFV_stack_10->SetBinContent(20,14.4152);
   hCCpi0inFV_stack_10->SetBinContent(21,17.3953);
   hCCpi0inFV_stack_10->SetBinContent(22,19.13699);
   hCCpi0inFV_stack_10->SetBinContent(23,20.52724);
   hCCpi0inFV_stack_10->SetBinContent(24,25.32758);
   hCCpi0inFV_stack_10->SetBinContent(25,25.08165);
   hCCpi0inFV_stack_10->SetBinError(1,2.645346);
   hCCpi0inFV_stack_10->SetBinError(2,2.514216);
   hCCpi0inFV_stack_10->SetBinError(3,2.298943);
   hCCpi0inFV_stack_10->SetBinError(4,2.484356);
   hCCpi0inFV_stack_10->SetBinError(5,2.470521);
   hCCpi0inFV_stack_10->SetBinError(6,1.631984);
   hCCpi0inFV_stack_10->SetBinError(7,2.094701);
   hCCpi0inFV_stack_10->SetBinError(8,1.923581);
   hCCpi0inFV_stack_10->SetBinError(9,2.350701);
   hCCpi0inFV_stack_10->SetBinError(10,2.10043);
   hCCpi0inFV_stack_10->SetBinError(11,2.212222);
   hCCpi0inFV_stack_10->SetBinError(12,2.450274);
   hCCpi0inFV_stack_10->SetBinError(13,2.593925);
   hCCpi0inFV_stack_10->SetBinError(14,2.426491);
   hCCpi0inFV_stack_10->SetBinError(15,2.239921);
   hCCpi0inFV_stack_10->SetBinError(16,2.465715);
   hCCpi0inFV_stack_10->SetBinError(17,2.048271);
   hCCpi0inFV_stack_10->SetBinError(18,2.111961);
   hCCpi0inFV_stack_10->SetBinError(19,2.135832);
   hCCpi0inFV_stack_10->SetBinError(20,1.876559);
   hCCpi0inFV_stack_10->SetBinError(21,2.028886);
   hCCpi0inFV_stack_10->SetBinError(22,2.251251);
   hCCpi0inFV_stack_10->SetBinError(23,2.278105);
   hCCpi0inFV_stack_10->SetBinError(24,2.555932);
   hCCpi0inFV_stack_10->SetBinError(25,2.538409);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,11.66657);
   hNCinFV_stack_11->SetBinContent(2,10.733);
   hNCinFV_stack_11->SetBinContent(3,16.64582);
   hNCinFV_stack_11->SetBinContent(4,8.615816);
   hNCinFV_stack_11->SetBinContent(5,10.22802);
   hNCinFV_stack_11->SetBinContent(6,10.63976);
   hNCinFV_stack_11->SetBinContent(7,8.945453);
   hNCinFV_stack_11->SetBinContent(8,10.26328);
   hNCinFV_stack_11->SetBinContent(9,11.14826);
   hNCinFV_stack_11->SetBinContent(10,8.307479);
   hNCinFV_stack_11->SetBinContent(11,8.209423);
   hNCinFV_stack_11->SetBinContent(12,13.5387);
   hNCinFV_stack_11->SetBinContent(13,14.21973);
   hNCinFV_stack_11->SetBinContent(14,11.78617);
   hNCinFV_stack_11->SetBinContent(15,14.12344);
   hNCinFV_stack_11->SetBinContent(16,10.97412);
   hNCinFV_stack_11->SetBinContent(17,9.986062);
   hNCinFV_stack_11->SetBinContent(18,12.47216);
   hNCinFV_stack_11->SetBinContent(19,10.03906);
   hNCinFV_stack_11->SetBinContent(20,9.335819);
   hNCinFV_stack_11->SetBinContent(21,11.75949);
   hNCinFV_stack_11->SetBinContent(22,12.29956);
   hNCinFV_stack_11->SetBinContent(23,13.13604);
   hNCinFV_stack_11->SetBinContent(24,15.49114);
   hNCinFV_stack_11->SetBinContent(25,8.850764);
   hNCinFV_stack_11->SetBinError(1,1.715046);
   hNCinFV_stack_11->SetBinError(2,1.732831);
   hNCinFV_stack_11->SetBinError(3,2.348424);
   hNCinFV_stack_11->SetBinError(4,1.429493);
   hNCinFV_stack_11->SetBinError(5,1.885806);
   hNCinFV_stack_11->SetBinError(6,1.976756);
   hNCinFV_stack_11->SetBinError(7,1.481544);
   hNCinFV_stack_11->SetBinError(8,1.825739);
   hNCinFV_stack_11->SetBinError(9,1.608691);
   hNCinFV_stack_11->SetBinError(10,1.408569);
   hNCinFV_stack_11->SetBinError(11,1.470149);
   hNCinFV_stack_11->SetBinError(12,2.019747);
   hNCinFV_stack_11->SetBinError(13,2.204914);
   hNCinFV_stack_11->SetBinError(14,1.892514);
   hNCinFV_stack_11->SetBinError(15,2.092588);
   hNCinFV_stack_11->SetBinError(16,1.859459);
   hNCinFV_stack_11->SetBinError(17,1.695655);
   hNCinFV_stack_11->SetBinError(18,1.988472);
   hNCinFV_stack_11->SetBinError(19,1.749735);
   hNCinFV_stack_11->SetBinError(20,1.635305);
   hNCinFV_stack_11->SetBinError(21,2.093902);
   hNCinFV_stack_11->SetBinError(22,2.006046);
   hNCinFV_stack_11->SetBinError(23,2.120488);
   hNCinFV_stack_11->SetBinError(24,2.360035);
   hNCinFV_stack_11->SetBinError(25,1.471733);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,31.23);
   hnumuCCinFV_stack_12->SetBinContent(2,29.54702);
   hnumuCCinFV_stack_12->SetBinContent(3,15.38043);
   hnumuCCinFV_stack_12->SetBinContent(4,9.664175);
   hnumuCCinFV_stack_12->SetBinContent(5,5.308541);
   hnumuCCinFV_stack_12->SetBinContent(6,9.060171);
   hnumuCCinFV_stack_12->SetBinContent(7,8.32709);
   hnumuCCinFV_stack_12->SetBinContent(8,8.551003);
   hnumuCCinFV_stack_12->SetBinContent(9,9.455486);
   hnumuCCinFV_stack_12->SetBinContent(10,12.52632);
   hnumuCCinFV_stack_12->SetBinContent(11,21.52492);
   hnumuCCinFV_stack_12->SetBinContent(12,29.4273);
   hnumuCCinFV_stack_12->SetBinContent(13,25.57914);
   hnumuCCinFV_stack_12->SetBinContent(14,27.09127);
   hnumuCCinFV_stack_12->SetBinContent(15,19.78673);
   hnumuCCinFV_stack_12->SetBinContent(16,15.34511);
   hnumuCCinFV_stack_12->SetBinContent(17,9.92813);
   hnumuCCinFV_stack_12->SetBinContent(18,9.337547);
   hnumuCCinFV_stack_12->SetBinContent(19,13.29461);
   hnumuCCinFV_stack_12->SetBinContent(20,6.78417);
   hnumuCCinFV_stack_12->SetBinContent(21,9.034204);
   hnumuCCinFV_stack_12->SetBinContent(22,9.692455);
   hnumuCCinFV_stack_12->SetBinContent(23,10.76238);
   hnumuCCinFV_stack_12->SetBinContent(24,14.79477);
   hnumuCCinFV_stack_12->SetBinContent(25,25.27231);
   hnumuCCinFV_stack_12->SetBinError(1,3.106726);
   hnumuCCinFV_stack_12->SetBinError(2,3.982129);
   hnumuCCinFV_stack_12->SetBinError(3,2.163174);
   hnumuCCinFV_stack_12->SetBinError(4,1.707398);
   hnumuCCinFV_stack_12->SetBinError(5,1.233526);
   hnumuCCinFV_stack_12->SetBinError(6,1.566109);
   hnumuCCinFV_stack_12->SetBinError(7,1.556467);
   hnumuCCinFV_stack_12->SetBinError(8,1.525213);
   hnumuCCinFV_stack_12->SetBinError(9,1.903394);
   hnumuCCinFV_stack_12->SetBinError(10,2.064883);
   hnumuCCinFV_stack_12->SetBinError(11,2.802659);
   hnumuCCinFV_stack_12->SetBinError(12,3.486434);
   hnumuCCinFV_stack_12->SetBinError(13,2.801081);
   hnumuCCinFV_stack_12->SetBinError(14,2.86064);
   hnumuCCinFV_stack_12->SetBinError(15,2.648415);
   hnumuCCinFV_stack_12->SetBinError(16,2.028916);
   hnumuCCinFV_stack_12->SetBinError(17,2.088525);
   hnumuCCinFV_stack_12->SetBinError(18,1.610938);
   hnumuCCinFV_stack_12->SetBinError(19,2.433676);
   hnumuCCinFV_stack_12->SetBinError(20,1.242201);
   hnumuCCinFV_stack_12->SetBinError(21,1.66051);
   hnumuCCinFV_stack_12->SetBinError(22,1.718247);
   hnumuCCinFV_stack_12->SetBinError(23,1.724549);
   hnumuCCinFV_stack_12->SetBinError(24,2.024098);
   hnumuCCinFV_stack_12->SetBinError(25,2.979207);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1974404);
   hnueCCinFV_stack_13->SetBinContent(2,0.7055822);
   hnueCCinFV_stack_13->SetBinContent(3,0.6905683);
   hnueCCinFV_stack_13->SetBinContent(4,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(5,0.9245404);
   hnueCCinFV_stack_13->SetBinContent(6,2.401667);
   hnueCCinFV_stack_13->SetBinContent(8,0.5638871);
   hnueCCinFV_stack_13->SetBinContent(9,0.5482221);
   hnueCCinFV_stack_13->SetBinContent(10,1.323754);
   hnueCCinFV_stack_13->SetBinContent(11,0.7890683);
   hnueCCinFV_stack_13->SetBinContent(12,0.88752);
   hnueCCinFV_stack_13->SetBinContent(13,1.383931);
   hnueCCinFV_stack_13->SetBinContent(14,0.919675);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.8910709);
   hnueCCinFV_stack_13->SetBinContent(18,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(19,1.543862);
   hnueCCinFV_stack_13->SetBinContent(20,0.5958213);
   hnueCCinFV_stack_13->SetBinContent(21,0.4162933);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.9651011);
   hnueCCinFV_stack_13->SetBinContent(24,2.049702);
   hnueCCinFV_stack_13->SetBinContent(25,1.267516);
   hnueCCinFV_stack_13->SetBinError(1,0.1974404);
   hnueCCinFV_stack_13->SetBinError(2,0.4992408);
   hnueCCinFV_stack_13->SetBinError(3,0.3994798);
   hnueCCinFV_stack_13->SetBinError(4,0.2770047);
   hnueCCinFV_stack_13->SetBinError(5,0.5525753);
   hnueCCinFV_stack_13->SetBinError(6,1.624876);
   hnueCCinFV_stack_13->SetBinError(8,0.4172458);
   hnueCCinFV_stack_13->SetBinError(9,0.3987522);
   hnueCCinFV_stack_13->SetBinError(10,0.5560625);
   hnueCCinFV_stack_13->SetBinError(11,0.4671225);
   hnueCCinFV_stack_13->SetBinError(12,0.4470051);
   hnueCCinFV_stack_13->SetBinError(13,0.6558545);
   hnueCCinFV_stack_13->SetBinError(14,0.4764202);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.5252073);
   hnueCCinFV_stack_13->SetBinError(18,0.2770047);
   hnueCCinFV_stack_13->SetBinError(19,0.8238847);
   hnueCCinFV_stack_13->SetBinError(20,0.4255285);
   hnueCCinFV_stack_13->SetBinError(21,0.2945337);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.4968167);
   hnueCCinFV_stack_13->SetBinError(24,1.241558);
   hnueCCinFV_stack_13->SetBinError(25,0.5873469);
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
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);
   hmcerror__14->SetBinContent(1,150.6216);
   hmcerror__14->SetBinContent(2,140.2451);
   hmcerror__14->SetBinContent(3,134.7473);
   hmcerror__14->SetBinContent(4,131.8272);
   hmcerror__14->SetBinContent(5,109.6747);
   hmcerror__14->SetBinContent(6,100.7969);
   hmcerror__14->SetBinContent(7,115.0024);
   hmcerror__14->SetBinContent(8,105.0314);
   hmcerror__14->SetBinContent(9,114.0421);
   hmcerror__14->SetBinContent(10,113.9292);
   hmcerror__14->SetBinContent(11,124.6807);
   hmcerror__14->SetBinContent(12,133.7741);
   hmcerror__14->SetBinContent(13,132.7949);
   hmcerror__14->SetBinContent(14,133.6099);
   hmcerror__14->SetBinContent(15,122.6197);
   hmcerror__14->SetBinContent(16,131.957);
   hmcerror__14->SetBinContent(17,104.8904);
   hmcerror__14->SetBinContent(18,114.3398);
   hmcerror__14->SetBinContent(19,109.6336);
   hmcerror__14->SetBinContent(20,101.651);
   hmcerror__14->SetBinContent(21,114.7617);
   hmcerror__14->SetBinContent(22,122.2096);
   hmcerror__14->SetBinContent(23,115.78);
   hmcerror__14->SetBinContent(24,129.8019);
   hmcerror__14->SetBinContent(25,141.2239);
   hmcerror__14->SetBinError(1,49.70357);
   hmcerror__14->SetBinError(2,51.01706);
   hmcerror__14->SetBinError(3,47.1254);
   hmcerror__14->SetBinError(4,50.26961);
   hmcerror__14->SetBinError(5,40.23718);
   hmcerror__14->SetBinError(6,33.81083);
   hmcerror__14->SetBinError(7,39.27363);
   hmcerror__14->SetBinError(8,40.37158);
   hmcerror__14->SetBinError(9,43.84489);
   hmcerror__14->SetBinError(10,44.18793);
   hmcerror__14->SetBinError(11,44.13281);
   hmcerror__14->SetBinError(12,52.85806);
   hmcerror__14->SetBinError(13,46.79526);
   hmcerror__14->SetBinError(14,48.36301);
   hmcerror__14->SetBinError(15,55.6816);
   hmcerror__14->SetBinError(16,49.05451);
   hmcerror__14->SetBinError(17,38.05907);
   hmcerror__14->SetBinError(18,44.15405);
   hmcerror__14->SetBinError(19,47.53276);
   hmcerror__14->SetBinError(20,32.44241);
   hmcerror__14->SetBinError(21,45.59675);
   hmcerror__14->SetBinError(22,43.03129);
   hmcerror__14->SetBinError(23,46.15515);
   hmcerror__14->SetBinError(24,45.92238);
   hmcerror__14->SetBinError(25,45.57729);
   hmcerror__14->SetBinError(26,0.3895343);
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
   
   Double_t _fx3017[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3017[25] = {
   152,
   109,
   108,
   106,
   109,
   95,
   90,
   91,
   100,
   115,
   98,
   110,
   132,
   123,
   124,
   103,
   97,
   89,
   95,
   96,
   88,
   89,
   90,
   106,
   106};
   Double_t _felx3017[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3017[25] = {
   12.32883,
   10.44031,
   10.3923,
   10.29563,
   10.44031,
   9.8686,
   9.6093,
   9.6617,
   10.1212,
   10.72381,
   10.0209,
   10.48809,
   11.48913,
   11.09054,
   11.13553,
   10.14889,
   9.9704,
   9.5566,
   9.8686,
   9.9196,
   9.5036,
   9.5566,
   9.6093,
   10.29563,
   10.29563};
   Double_t _fehx3017[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3017[25] = {
   12.32883,
   10.44031,
   10.3923,
   10.29563,
   10.44031,
   9.667,
   9.4079,
   9.46,
   9.92,
   10.72381,
   9.82,
   10.48809,
   11.48913,
   11.09054,
   11.13553,
   10.14889,
   9.769,
   9.3552,
   9.667,
   9.718,
   9.3021,
   9.3552,
   9.4079,
   10.29563,
   10.29563};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-3.78,3.78);
   Graph_Graph3017->SetMinimum(69.91316);
   Graph_Graph3017->SetMaximum(172.9121);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.9/25","");
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1017.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3018[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3018[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3018[25] = {
   0.3299896,
   0.3637707,
   0.3497317,
   0.3813296,
   0.3668774,
   0.3354352,
   0.3415026,
   0.3843764,
   0.3844621,
   0.3878542,
   0.3539666,
   0.3951292,
   0.3523876,
   0.3619718,
   0.4540999,
   0.371746,
   0.3628462,
   0.3861652,
   0.4335601,
   0.319155,
   0.3973169,
   0.3521106,
   0.3986454,
   0.3537882,
   0.3227307};
   Double_t _fehx3018[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3018[25] = {
   0.3299896,
   0.3637707,
   0.3497317,
   0.3813296,
   0.3668774,
   0.3354352,
   0.3415026,
   0.3843764,
   0.3844621,
   0.3878542,
   0.3539666,
   0.3951292,
   0.3523876,
   0.3619718,
   0.4540999,
   0.371746,
   0.3628462,
   0.3861652,
   0.4335601,
   0.319155,
   0.3973169,
   0.3521106,
   0.3986454,
   0.3537882,
   0.3227307};
   grae = new TGraphAsymmErrors(25,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-3.78,3.78);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3019[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3019[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3019[25] = {
   0.2953449,
   0.3240032,
   0.3160725,
   0.3299188,
   0.3358921,
   0.2969509,
   0.309565,
   0.3435539,
   0.3361796,
   0.3451354,
   0.3171705,
   0.3349257,
   0.2854784,
   0.3178456,
   0.3413243,
   0.3329697,
   0.3388411,
   0.3284243,
   0.3014819,
   0.2882978,
   0.3110874,
   0.3265906,
   0.3547398,
   0.3272289,
   0.3032787};
   Double_t _fehx3019[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3019[25] = {
   0.2953449,
   0.3240032,
   0.3160725,
   0.3299188,
   0.3358921,
   0.2969509,
   0.309565,
   0.3435539,
   0.3361796,
   0.3451354,
   0.3171705,
   0.3349257,
   0.2854784,
   0.3178456,
   0.3413243,
   0.3329697,
   0.3388411,
   0.3284243,
   0.3014819,
   0.2882978,
   0.3110874,
   0.3265906,
   0.3547398,
   0.3272289,
   0.3032787};
   grae = new TGraphAsymmErrors(25,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-3.78,3.78);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3020[25] = {
   -3.024,
   -2.772,
   -2.52,
   -2.268,
   -2.016,
   -1.764,
   -1.512,
   -1.26,
   -1.008,
   -0.756,
   -0.504,
   -0.252,
   -8.326673e-17,
   0.252,
   0.504,
   0.756,
   1.008,
   1.26,
   1.512,
   1.764,
   2.016,
   2.268,
   2.52,
   2.772,
   3.024};
   Double_t _fy3020[25] = {
   1.009151,
   0.7772108,
   0.8015002,
   0.804083,
   0.9938481,
   0.9424893,
   0.782592,
   0.8664079,
   0.8768688,
   1.009399,
   0.7860077,
   0.8222816,
   0.9940143,
   0.9205905,
   1.011257,
   0.780557,
   0.9247751,
   0.7783815,
   0.8665224,
   0.9444082,
   0.7668065,
   0.7282571,
   0.7773365,
   0.8166291,
   0.7505811};
   Double_t _felx3020[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fely3020[25] = {
   0.08185296,
   0.0744433,
   0.07712439,
   0.07809944,
   0.09519338,
   0.09790579,
   0.08355735,
   0.09198871,
   0.08874965,
   0.09412691,
   0.0803725,
   0.07840147,
   0.08651784,
   0.08300685,
   0.09081352,
   0.07691057,
   0.09505544,
   0.08358069,
   0.09001435,
   0.09758492,
   0.08281162,
   0.07819845,
   0.08299622,
   0.07931803,
   0.07290288};
   Double_t _fehx3020[25] = {
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126,
   0.126};
   Double_t _fehy3020[25] = {
   0.08185296,
   0.0744433,
   0.07712439,
   0.07809944,
   0.09519338,
   0.09590573,
   0.08180608,
   0.09006833,
   0.08698539,
   0.09412691,
   0.07876118,
   0.07840147,
   0.08651784,
   0.08300685,
   0.09081352,
   0.07691057,
   0.09313534,
   0.08181927,
   0.0881755,
   0.09560166,
   0.08105581,
   0.07655046,
   0.08125672,
   0.07931803,
   0.07290288};
   grae = new TGraphAsymmErrors(25,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-3.78,3.78);
   Graph_Graph3020->SetMinimum(0.604712);
   Graph_Graph3020->SetMaximum(1.148872);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_kine_pio_phi_high_all",25,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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
