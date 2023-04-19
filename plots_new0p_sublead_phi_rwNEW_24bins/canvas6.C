#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Thu Mar  9 17:36:59 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-3.92,3.957692,433.4695);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__16->SetBinContent(1,152.358);
   hmc__16->SetBinContent(2,155.5063);
   hmc__16->SetBinContent(3,157.2157);
   hmc__16->SetBinContent(4,150.8204);
   hmc__16->SetBinContent(5,135.7814);
   hmc__16->SetBinContent(6,144.8578);
   hmc__16->SetBinContent(7,159.8682);
   hmc__16->SetBinContent(8,148.8996);
   hmc__16->SetBinContent(9,147.6687);
   hmc__16->SetBinContent(10,142.8476);
   hmc__16->SetBinContent(11,156.331);
   hmc__16->SetBinContent(12,151.5889);
   hmc__16->SetBinContent(13,154.1231);
   hmc__16->SetBinContent(14,156.6347);
   hmc__16->SetBinContent(15,167.3515);
   hmc__16->SetBinContent(16,152.0969);
   hmc__16->SetBinContent(17,165.2434);
   hmc__16->SetBinContent(18,154.5601);
   hmc__16->SetBinContent(19,142.6428);
   hmc__16->SetBinContent(20,150.1706);
   hmc__16->SetBinContent(21,154.6279);
   hmc__16->SetBinContent(22,154.9494);
   hmc__16->SetBinContent(23,167.7096);
   hmc__16->SetBinContent(24,159.1519);
   hmc__16->SetBinError(1,38.76608);
   hmc__16->SetBinError(2,42.32186);
   hmc__16->SetBinError(3,41.51268);
   hmc__16->SetBinError(4,44.58831);
   hmc__16->SetBinError(5,35.54154);
   hmc__16->SetBinError(6,40.73513);
   hmc__16->SetBinError(7,39.71942);
   hmc__16->SetBinError(8,47.84631);
   hmc__16->SetBinError(9,43.29113);
   hmc__16->SetBinError(10,37.83453);
   hmc__16->SetBinError(11,46.6148);
   hmc__16->SetBinError(12,39.85791);
   hmc__16->SetBinError(13,42.03226);
   hmc__16->SetBinError(14,43.11266);
   hmc__16->SetBinError(15,49.30974);
   hmc__16->SetBinError(16,39.09736);
   hmc__16->SetBinError(17,47.26938);
   hmc__16->SetBinError(18,39.59082);
   hmc__16->SetBinError(19,38.18176);
   hmc__16->SetBinError(20,38.47507);
   hmc__16->SetBinError(21,40.65487);
   hmc__16->SetBinError(22,43.87162);
   hmc__16->SetBinError(23,47.89654);
   hmc__16->SetBinError(24,46.923);
   hmc__16->SetBinError(25,0.3895343);
   hmc__16->SetMinimum(-3.92);
   hmc__16->SetMaximum(411.6);
   hmc__16->SetEntries(3645.257);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,-3.15,3.15);
   hs6_stack_6->SetMinimum(-1.556429e-09);
   hs6_stack_6->SetMaximum(176.0951);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.943743);
   hbadmatch_stack_1->SetBinContent(2,4.171503);
   hbadmatch_stack_1->SetBinContent(3,2.898704);
   hbadmatch_stack_1->SetBinContent(4,4.925437);
   hbadmatch_stack_1->SetBinContent(5,1.766554);
   hbadmatch_stack_1->SetBinContent(6,4.250986);
   hbadmatch_stack_1->SetBinContent(7,5.223281);
   hbadmatch_stack_1->SetBinContent(8,3.626122);
   hbadmatch_stack_1->SetBinContent(9,3.755911);
   hbadmatch_stack_1->SetBinContent(10,1.559402);
   hbadmatch_stack_1->SetBinContent(11,2.442341);
   hbadmatch_stack_1->SetBinContent(12,1.896952);
   hbadmatch_stack_1->SetBinContent(13,2.876955);
   hbadmatch_stack_1->SetBinContent(14,4.231141);
   hbadmatch_stack_1->SetBinContent(15,4.150478);
   hbadmatch_stack_1->SetBinContent(16,3.687428);
   hbadmatch_stack_1->SetBinContent(17,3.375189);
   hbadmatch_stack_1->SetBinContent(18,1.828239);
   hbadmatch_stack_1->SetBinContent(19,3.961579);
   hbadmatch_stack_1->SetBinContent(20,5.242216);
   hbadmatch_stack_1->SetBinContent(21,3.82527);
   hbadmatch_stack_1->SetBinContent(22,4.19728);
   hbadmatch_stack_1->SetBinContent(23,3.10556);
   hbadmatch_stack_1->SetBinContent(24,3.29744);
   hbadmatch_stack_1->SetBinError(1,0.9178841);
   hbadmatch_stack_1->SetBinError(2,1.056659);
   hbadmatch_stack_1->SetBinError(3,0.824912);
   hbadmatch_stack_1->SetBinError(4,1.138194);
   hbadmatch_stack_1->SetBinError(5,0.6392435);
   hbadmatch_stack_1->SetBinError(6,1.057032);
   hbadmatch_stack_1->SetBinError(7,1.193078);
   hbadmatch_stack_1->SetBinError(8,1.093877);
   hbadmatch_stack_1->SetBinError(9,2.045752);
   hbadmatch_stack_1->SetBinError(10,0.6042882);
   hbadmatch_stack_1->SetBinError(11,0.759212);
   hbadmatch_stack_1->SetBinError(12,0.6924515);
   hbadmatch_stack_1->SetBinError(13,0.8969068);
   hbadmatch_stack_1->SetBinError(14,1.866585);
   hbadmatch_stack_1->SetBinError(15,1.104149);
   hbadmatch_stack_1->SetBinError(16,1.060906);
   hbadmatch_stack_1->SetBinError(17,0.9326255);
   hbadmatch_stack_1->SetBinError(18,0.7181362);
   hbadmatch_stack_1->SetBinError(19,1.191063);
   hbadmatch_stack_1->SetBinError(20,1.418147);
   hbadmatch_stack_1->SetBinError(21,1.063828);
   hbadmatch_stack_1->SetBinError(22,1.092416);
   hbadmatch_stack_1->SetBinError(23,1.729621);
   hbadmatch_stack_1->SetBinError(24,0.8677494);
   hbadmatch_stack_1->SetEntries(316);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,11.43938);
   hext_stack_2->SetBinContent(2,9.648584);
   hext_stack_2->SetBinContent(3,11.28216);
   hext_stack_2->SetBinContent(4,14.34019);
   hext_stack_2->SetBinContent(5,14.64304);
   hext_stack_2->SetBinContent(6,16.0416);
   hext_stack_2->SetBinContent(7,22.20679);
   hext_stack_2->SetBinContent(8,15.3884);
   hext_stack_2->SetBinContent(9,13.06137);
   hext_stack_2->SetBinContent(10,8.99979);
   hext_stack_2->SetBinContent(11,12.46883);
   hext_stack_2->SetBinContent(12,8.891638);
   hext_stack_2->SetBinContent(13,5.654845);
   hext_stack_2->SetBinContent(14,8.250023);
   hext_stack_2->SetBinContent(15,8.828205);
   hext_stack_2->SetBinContent(16,9.406388);
   hext_stack_2->SetBinContent(17,16.68599);
   hext_stack_2->SetBinContent(18,13.45361);
   hext_stack_2->SetBinContent(19,10.13738);
   hext_stack_2->SetBinContent(20,11.89782);
   hext_stack_2->SetBinContent(21,10.20082);
   hext_stack_2->SetBinContent(22,8.816616);
   hext_stack_2->SetBinContent(23,12.48319);
   hext_stack_2->SetBinContent(24,9.171373);
   hext_stack_2->SetBinError(1,2.164754);
   hext_stack_2->SetBinError(2,1.976029);
   hext_stack_2->SetBinError(3,2.089205);
   hext_stack_2->SetBinError(4,2.429103);
   hext_stack_2->SetBinError(5,2.570871);
   hext_stack_2->SetBinError(6,2.612111);
   hext_stack_2->SetBinError(7,3.048608);
   hext_stack_2->SetBinError(8,2.5451);
   hext_stack_2->SetBinError(9,2.283052);
   hext_stack_2->SetBinError(10,1.922036);
   hext_stack_2->SetBinError(11,2.351687);
   hext_stack_2->SetBinError(12,2.025492);
   hext_stack_2->SetBinError(13,1.687921);
   hext_stack_2->SetBinError(14,1.921184);
   hext_stack_2->SetBinError(15,1.942999);
   hext_stack_2->SetBinError(16,1.964573);
   hext_stack_2->SetBinError(17,2.626493);
   hext_stack_2->SetBinError(18,2.404174);
   hext_stack_2->SetBinError(19,2.032265);
   hext_stack_2->SetBinError(20,2.290181);
   hext_stack_2->SetBinError(21,2.111272);
   hext_stack_2->SetBinError(22,1.95993);
   hext_stack_2->SetBinError(23,2.264515);
   hext_stack_2->SetBinError(24,1.900842);
   hext_stack_2->SetEntries(711);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.4356634);
   hdirt_stack_3->SetBinContent(2,1.79263);
   hdirt_stack_3->SetBinContent(3,1.857223);
   hdirt_stack_3->SetBinContent(4,1.971997);
   hdirt_stack_3->SetBinContent(5,1.532801);
   hdirt_stack_3->SetBinContent(6,2.360208);
   hdirt_stack_3->SetBinContent(7,1.585628);
   hdirt_stack_3->SetBinContent(8,2.121249);
   hdirt_stack_3->SetBinContent(9,1.275265);
   hdirt_stack_3->SetBinContent(10,3.094372);
   hdirt_stack_3->SetBinContent(11,1.621618);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,2.513026);
   hdirt_stack_3->SetBinContent(14,2.458689);
   hdirt_stack_3->SetBinContent(15,1.752422);
   hdirt_stack_3->SetBinContent(16,2.100737);
   hdirt_stack_3->SetBinContent(17,1.80274);
   hdirt_stack_3->SetBinContent(18,1.785468);
   hdirt_stack_3->SetBinContent(19,1.699849);
   hdirt_stack_3->SetBinContent(20,2.110675);
   hdirt_stack_3->SetBinContent(21,2.156129);
   hdirt_stack_3->SetBinContent(22,0.8126886);
   hdirt_stack_3->SetBinContent(23,1.512725);
   hdirt_stack_3->SetBinContent(24,1.609204);
   hdirt_stack_3->SetBinError(1,0.2521393);
   hdirt_stack_3->SetBinError(2,0.749703);
   hdirt_stack_3->SetBinError(3,0.722111);
   hdirt_stack_3->SetBinError(4,0.8158922);
   hdirt_stack_3->SetBinError(5,0.5522075);
   hdirt_stack_3->SetBinError(6,0.846084);
   hdirt_stack_3->SetBinError(7,0.6098976);
   hdirt_stack_3->SetBinError(8,0.6899738);
   hdirt_stack_3->SetBinError(9,0.6411534);
   hdirt_stack_3->SetBinError(10,1.277571);
   hdirt_stack_3->SetBinError(11,0.702374);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.9094446);
   hdirt_stack_3->SetBinError(14,1.116798);
   hdirt_stack_3->SetBinError(15,0.6508923);
   hdirt_stack_3->SetBinError(16,0.6896243);
   hdirt_stack_3->SetBinError(17,0.7367471);
   hdirt_stack_3->SetBinError(18,0.7163291);
   hdirt_stack_3->SetBinError(19,0.6680487);
   hdirt_stack_3->SetBinError(20,0.8207916);
   hdirt_stack_3->SetBinError(21,0.7230454);
   hdirt_stack_3->SetBinError(22,0.4770956);
   hdirt_stack_3->SetBinError(23,0.6334329);
   hdirt_stack_3->SetBinError(24,0.6407921);
   hdirt_stack_3->SetEntries(173);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,15.32856);
   houtFV_stack_4->SetBinContent(2,14.06353);
   houtFV_stack_4->SetBinContent(3,14.28385);
   houtFV_stack_4->SetBinContent(4,12.9941);
   houtFV_stack_4->SetBinContent(5,12.32051);
   houtFV_stack_4->SetBinContent(6,10.39509);
   houtFV_stack_4->SetBinContent(7,12.6733);
   houtFV_stack_4->SetBinContent(8,11.91607);
   houtFV_stack_4->SetBinContent(9,14.55471);
   houtFV_stack_4->SetBinContent(10,15.1154);
   houtFV_stack_4->SetBinContent(11,15.34108);
   houtFV_stack_4->SetBinContent(12,15.8484);
   houtFV_stack_4->SetBinContent(13,13.24578);
   houtFV_stack_4->SetBinContent(14,15.86637);
   houtFV_stack_4->SetBinContent(15,15.83522);
   houtFV_stack_4->SetBinContent(16,17.20092);
   houtFV_stack_4->SetBinContent(17,13.63491);
   houtFV_stack_4->SetBinContent(18,13.59324);
   houtFV_stack_4->SetBinContent(19,13.20923);
   houtFV_stack_4->SetBinContent(20,12.46131);
   houtFV_stack_4->SetBinContent(21,15.72458);
   houtFV_stack_4->SetBinContent(22,16.26946);
   houtFV_stack_4->SetBinContent(23,14.57005);
   houtFV_stack_4->SetBinContent(24,14.73776);
   houtFV_stack_4->SetBinError(1,2.023336);
   houtFV_stack_4->SetBinError(2,1.844941);
   houtFV_stack_4->SetBinError(3,1.88174);
   houtFV_stack_4->SetBinError(4,1.798177);
   houtFV_stack_4->SetBinError(5,1.733393);
   houtFV_stack_4->SetBinError(6,1.588864);
   houtFV_stack_4->SetBinError(7,1.791046);
   houtFV_stack_4->SetBinError(8,1.70531);
   houtFV_stack_4->SetBinError(9,1.933209);
   houtFV_stack_4->SetBinError(10,2.011344);
   houtFV_stack_4->SetBinError(11,1.901491);
   houtFV_stack_4->SetBinError(12,2.00858);
   houtFV_stack_4->SetBinError(13,1.83227);
   houtFV_stack_4->SetBinError(14,1.975552);
   houtFV_stack_4->SetBinError(15,2.039277);
   houtFV_stack_4->SetBinError(16,2.05041);
   houtFV_stack_4->SetBinError(17,1.836132);
   houtFV_stack_4->SetBinError(18,1.848136);
   houtFV_stack_4->SetBinError(19,1.83827);
   houtFV_stack_4->SetBinError(20,1.733379);
   houtFV_stack_4->SetBinError(21,1.971811);
   houtFV_stack_4->SetBinError(22,1.996444);
   houtFV_stack_4->SetBinError(23,1.919521);
   houtFV_stack_4->SetBinError(24,1.869334);
   houtFV_stack_4->SetEntries(1472);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.57188);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.095748);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.332902);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.44367);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.767764);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.609574);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.83203);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.81866);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.79292);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.0471);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.942798);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.264484);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.449079);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.861506);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.579594);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.444502);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.875956);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.372588);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.264564);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.863834);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.709884);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.614814);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.978346);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.904192);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.612536);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5391439);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6079119);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5944781);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7227636);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5935497);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5732015);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6305907);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6238164);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.771809);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5589342);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6425648);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7602503);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.615283);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4516762);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6104674);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6363764);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5533349);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6755374);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6353053);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6109983);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7376439);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7573005);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6864919);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.948272);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7943219);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.4879178);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7674223);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.7259042);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.765758);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3247714);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2741946);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1427183);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3555691);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3442606);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2964742);
   hNCpi0inFVqe_stack_6->SetEntries(229);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,64.62613);
   hNCpi0inFVres_stack_7->SetBinContent(2,69.11158);
   hNCpi0inFVres_stack_7->SetBinContent(3,64.89781);
   hNCpi0inFVres_stack_7->SetBinContent(4,61.6981);
   hNCpi0inFVres_stack_7->SetBinContent(5,58.16375);
   hNCpi0inFVres_stack_7->SetBinContent(6,60.25893);
   hNCpi0inFVres_stack_7->SetBinContent(7,62.64702);
   hNCpi0inFVres_stack_7->SetBinContent(8,60.54225);
   hNCpi0inFVres_stack_7->SetBinContent(9,61.15423);
   hNCpi0inFVres_stack_7->SetBinContent(10,53.2457);
   hNCpi0inFVres_stack_7->SetBinContent(11,65.76174);
   hNCpi0inFVres_stack_7->SetBinContent(12,62.31257);
   hNCpi0inFVres_stack_7->SetBinContent(13,65.16801);
   hNCpi0inFVres_stack_7->SetBinContent(14,66.38516);
   hNCpi0inFVres_stack_7->SetBinContent(15,67.30969);
   hNCpi0inFVres_stack_7->SetBinContent(16,59.81919);
   hNCpi0inFVres_stack_7->SetBinContent(17,65.98244);
   hNCpi0inFVres_stack_7->SetBinContent(18,63.05119);
   hNCpi0inFVres_stack_7->SetBinContent(19,63.99123);
   hNCpi0inFVres_stack_7->SetBinContent(20,62.15292);
   hNCpi0inFVres_stack_7->SetBinContent(21,61.0393);
   hNCpi0inFVres_stack_7->SetBinContent(22,67.1451);
   hNCpi0inFVres_stack_7->SetBinContent(23,70.47321);
   hNCpi0inFVres_stack_7->SetBinContent(24,62.97569);
   hNCpi0inFVres_stack_7->SetBinError(1,2.627923);
   hNCpi0inFVres_stack_7->SetBinError(2,2.755055);
   hNCpi0inFVres_stack_7->SetBinError(3,2.617387);
   hNCpi0inFVres_stack_7->SetBinError(4,2.557531);
   hNCpi0inFVres_stack_7->SetBinError(5,2.471863);
   hNCpi0inFVres_stack_7->SetBinError(6,2.517266);
   hNCpi0inFVres_stack_7->SetBinError(7,2.63993);
   hNCpi0inFVres_stack_7->SetBinError(8,2.55743);
   hNCpi0inFVres_stack_7->SetBinError(9,2.575036);
   hNCpi0inFVres_stack_7->SetBinError(10,2.373408);
   hNCpi0inFVres_stack_7->SetBinError(11,2.693771);
   hNCpi0inFVres_stack_7->SetBinError(12,2.558241);
   hNCpi0inFVres_stack_7->SetBinError(13,2.645967);
   hNCpi0inFVres_stack_7->SetBinError(14,2.659429);
   hNCpi0inFVres_stack_7->SetBinError(15,2.69696);
   hNCpi0inFVres_stack_7->SetBinError(16,2.573486);
   hNCpi0inFVres_stack_7->SetBinError(17,2.684182);
   hNCpi0inFVres_stack_7->SetBinError(18,2.649992);
   hNCpi0inFVres_stack_7->SetBinError(19,2.604978);
   hNCpi0inFVres_stack_7->SetBinError(20,2.529758);
   hNCpi0inFVres_stack_7->SetBinError(21,2.517769);
   hNCpi0inFVres_stack_7->SetBinError(22,2.677709);
   hNCpi0inFVres_stack_7->SetBinError(23,2.771093);
   hNCpi0inFVres_stack_7->SetBinError(24,2.566405);
   hNCpi0inFVres_stack_7->SetEntries(27989);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.59539);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.81629);
   hNCpi0inFVdis_stack_8->SetBinContent(3,13.17849);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.70011);
   hNCpi0inFVdis_stack_8->SetBinContent(5,11.84011);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.56732);
   hNCpi0inFVdis_stack_8->SetBinContent(7,13.38558);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.81172);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.27174);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.7139);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.16984);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.636997);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.03633);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.61749);
   hNCpi0inFVdis_stack_8->SetBinContent(15,14.79271);
   hNCpi0inFVdis_stack_8->SetBinContent(16,15.05476);
   hNCpi0inFVdis_stack_8->SetBinContent(17,13.63452);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.56095);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.99845);
   hNCpi0inFVdis_stack_8->SetBinContent(20,12.18487);
   hNCpi0inFVdis_stack_8->SetBinContent(21,13.48223);
   hNCpi0inFVdis_stack_8->SetBinContent(22,14.3199);
   hNCpi0inFVdis_stack_8->SetBinContent(23,13.36317);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.77408);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.004408);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.187783);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.21128);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.096542);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.142179);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9875722);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.186799);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.161915);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.170315);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.114585);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.074642);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.003019);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.171644);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.138225);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.262261);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.23162);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.192987);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.124291);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.042408);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.085573);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.196435);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.259303);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.273416);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9977989);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(14);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,22.29241);
   hCCpi0inFV_stack_10->SetBinContent(2,16.8524);
   hCCpi0inFV_stack_10->SetBinContent(3,22.93419);
   hCCpi0inFV_stack_10->SetBinContent(4,17.88173);
   hCCpi0inFV_stack_10->SetBinContent(5,15.2097);
   hCCpi0inFV_stack_10->SetBinContent(6,17.8503);
   hCCpi0inFV_stack_10->SetBinContent(7,19.38848);
   hCCpi0inFV_stack_10->SetBinContent(8,16.89556);
   hCCpi0inFV_stack_10->SetBinContent(9,20.57278);
   hCCpi0inFV_stack_10->SetBinContent(10,22.31574);
   hCCpi0inFV_stack_10->SetBinContent(11,22.78103);
   hCCpi0inFV_stack_10->SetBinContent(12,27.7358);
   hCCpi0inFV_stack_10->SetBinContent(13,21.63689);
   hCCpi0inFV_stack_10->SetBinContent(14,20.23322);
   hCCpi0inFV_stack_10->SetBinContent(15,27.83148);
   hCCpi0inFV_stack_10->SetBinContent(16,19.30626);
   hCCpi0inFV_stack_10->SetBinContent(17,21.39276);
   hCCpi0inFV_stack_10->SetBinContent(18,21.25713);
   hCCpi0inFV_stack_10->SetBinContent(19,17.83246);
   hCCpi0inFV_stack_10->SetBinContent(20,16.35125);
   hCCpi0inFV_stack_10->SetBinContent(21,24.26428);
   hCCpi0inFV_stack_10->SetBinContent(22,19.28986);
   hCCpi0inFV_stack_10->SetBinContent(23,26.16136);
   hCCpi0inFV_stack_10->SetBinContent(24,23.81194);
   hCCpi0inFV_stack_10->SetBinError(1,2.403215);
   hCCpi0inFV_stack_10->SetBinError(2,2.039216);
   hCCpi0inFV_stack_10->SetBinError(3,2.363095);
   hCCpi0inFV_stack_10->SetBinError(4,2.109215);
   hCCpi0inFV_stack_10->SetBinError(5,1.866126);
   hCCpi0inFV_stack_10->SetBinError(6,2.061085);
   hCCpi0inFV_stack_10->SetBinError(7,2.23382);
   hCCpi0inFV_stack_10->SetBinError(8,2.077169);
   hCCpi0inFV_stack_10->SetBinError(9,2.227932);
   hCCpi0inFV_stack_10->SetBinError(10,2.417918);
   hCCpi0inFV_stack_10->SetBinError(11,2.473101);
   hCCpi0inFV_stack_10->SetBinError(12,2.620338);
   hCCpi0inFV_stack_10->SetBinError(13,2.308758);
   hCCpi0inFV_stack_10->SetBinError(14,2.246462);
   hCCpi0inFV_stack_10->SetBinError(15,2.606053);
   hCCpi0inFV_stack_10->SetBinError(16,2.181253);
   hCCpi0inFV_stack_10->SetBinError(17,2.28439);
   hCCpi0inFV_stack_10->SetBinError(18,2.32273);
   hCCpi0inFV_stack_10->SetBinError(19,2.118664);
   hCCpi0inFV_stack_10->SetBinError(20,2.07244);
   hCCpi0inFV_stack_10->SetBinError(21,2.477472);
   hCCpi0inFV_stack_10->SetBinError(22,2.206767);
   hCCpi0inFV_stack_10->SetBinError(23,2.545583);
   hCCpi0inFV_stack_10->SetBinError(24,2.413052);
   hCCpi0inFV_stack_10->SetEntries(2161);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,8.597525);
   hNCinFV_stack_11->SetBinContent(2,10.88856);
   hNCinFV_stack_11->SetBinContent(3,13.29394);
   hNCinFV_stack_11->SetBinContent(4,12.0156);
   hNCinFV_stack_11->SetBinContent(5,6.053749);
   hNCinFV_stack_11->SetBinContent(6,11.41773);
   hNCinFV_stack_11->SetBinContent(7,11.05339);
   hNCinFV_stack_11->SetBinContent(8,11.53703);
   hNCinFV_stack_11->SetBinContent(9,8.986491);
   hNCinFV_stack_11->SetBinContent(10,10.84207);
   hNCinFV_stack_11->SetBinContent(11,12.60067);
   hNCinFV_stack_11->SetBinContent(12,7.61902);
   hNCinFV_stack_11->SetBinContent(13,11.71576);
   hNCinFV_stack_11->SetBinContent(14,10.08611);
   hNCinFV_stack_11->SetBinContent(15,14.84184);
   hNCinFV_stack_11->SetBinContent(16,9.282951);
   hNCinFV_stack_11->SetBinContent(17,13.68967);
   hNCinFV_stack_11->SetBinContent(18,12.89943);
   hNCinFV_stack_11->SetBinContent(19,8.605977);
   hNCinFV_stack_11->SetBinContent(20,13.86948);
   hNCinFV_stack_11->SetBinContent(21,7.965959);
   hNCinFV_stack_11->SetBinContent(22,9.729635);
   hNCinFV_stack_11->SetBinContent(23,10.94857);
   hNCinFV_stack_11->SetBinContent(24,13.64426);
   hNCinFV_stack_11->SetBinError(1,1.44109);
   hNCinFV_stack_11->SetBinError(2,1.664763);
   hNCinFV_stack_11->SetBinError(3,1.787222);
   hNCinFV_stack_11->SetBinError(4,1.744117);
   hNCinFV_stack_11->SetBinError(5,1.256574);
   hNCinFV_stack_11->SetBinError(6,1.727232);
   hNCinFV_stack_11->SetBinError(7,1.630473);
   hNCinFV_stack_11->SetBinError(8,1.688546);
   hNCinFV_stack_11->SetBinError(9,1.533224);
   hNCinFV_stack_11->SetBinError(10,1.677025);
   hNCinFV_stack_11->SetBinError(11,1.776527);
   hNCinFV_stack_11->SetBinError(12,1.373042);
   hNCinFV_stack_11->SetBinError(13,1.755342);
   hNCinFV_stack_11->SetBinError(14,1.507631);
   hNCinFV_stack_11->SetBinError(15,1.972408);
   hNCinFV_stack_11->SetBinError(16,1.519924);
   hNCinFV_stack_11->SetBinError(17,1.86302);
   hNCinFV_stack_11->SetBinError(18,1.820641);
   hNCinFV_stack_11->SetBinError(19,1.442239);
   hNCinFV_stack_11->SetBinError(20,1.871609);
   hNCinFV_stack_11->SetBinError(21,1.41549);
   hNCinFV_stack_11->SetBinError(22,1.532722);
   hNCinFV_stack_11->SetBinError(23,1.654013);
   hNCinFV_stack_11->SetBinError(24,1.8204);
   hNCinFV_stack_11->SetEntries(1123);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,9.739552);
   hnumuCCinFV_stack_12->SetBinContent(2,11.76029);
   hnumuCCinFV_stack_12->SetBinContent(3,8.09014);
   hnumuCCinFV_stack_12->SetBinContent(4,7.271844);
   hnumuCCinFV_stack_12->SetBinContent(5,7.293897);
   hnumuCCinFV_stack_12->SetBinContent(6,5.633492);
   hnumuCCinFV_stack_12->SetBinContent(7,7.362777);
   hnumuCCinFV_stack_12->SetBinContent(8,9.957216);
   hnumuCCinFV_stack_12->SetBinContent(9,5.608298);
   hnumuCCinFV_stack_12->SetBinContent(10,9.206617);
   hnumuCCinFV_stack_12->SetBinContent(11,8.349813);
   hnumuCCinFV_stack_12->SetBinContent(12,12.68032);
   hnumuCCinFV_stack_12->SetBinContent(13,11.87124);
   hnumuCCinFV_stack_12->SetBinContent(14,12.11539);
   hnumuCCinFV_stack_12->SetBinContent(15,7.944084);
   hnumuCCinFV_stack_12->SetBinContent(16,9.958993);
   hnumuCCinFV_stack_12->SetBinContent(17,7.576422);
   hnumuCCinFV_stack_12->SetBinContent(18,10.55251);
   hnumuCCinFV_stack_12->SetBinContent(19,6.79027);
   hnumuCCinFV_stack_12->SetBinContent(20,7.090203);
   hnumuCCinFV_stack_12->SetBinContent(21,11.37563);
   hnumuCCinFV_stack_12->SetBinContent(22,8.76959);
   hnumuCCinFV_stack_12->SetBinContent(23,7.708374);
   hnumuCCinFV_stack_12->SetBinContent(24,13.33364);
   hnumuCCinFV_stack_12->SetBinError(1,1.819246);
   hnumuCCinFV_stack_12->SetBinError(2,1.828844);
   hnumuCCinFV_stack_12->SetBinError(3,1.419819);
   hnumuCCinFV_stack_12->SetBinError(4,1.515541);
   hnumuCCinFV_stack_12->SetBinError(5,1.339212);
   hnumuCCinFV_stack_12->SetBinError(6,1.164633);
   hnumuCCinFV_stack_12->SetBinError(7,1.381585);
   hnumuCCinFV_stack_12->SetBinError(8,1.725113);
   hnumuCCinFV_stack_12->SetBinError(9,1.383869);
   hnumuCCinFV_stack_12->SetBinError(10,1.660095);
   hnumuCCinFV_stack_12->SetBinError(11,1.477427);
   hnumuCCinFV_stack_12->SetBinError(12,2.318727);
   hnumuCCinFV_stack_12->SetBinError(13,1.820258);
   hnumuCCinFV_stack_12->SetBinError(14,1.93109);
   hnumuCCinFV_stack_12->SetBinError(15,1.543655);
   hnumuCCinFV_stack_12->SetBinError(16,2.135505);
   hnumuCCinFV_stack_12->SetBinError(17,1.464364);
   hnumuCCinFV_stack_12->SetBinError(18,2.284103);
   hnumuCCinFV_stack_12->SetBinError(19,1.73136);
   hnumuCCinFV_stack_12->SetBinError(20,1.444737);
   hnumuCCinFV_stack_12->SetBinError(21,2.072537);
   hnumuCCinFV_stack_12->SetBinError(22,1.691448);
   hnumuCCinFV_stack_12->SetBinError(23,1.438791);
   hnumuCCinFV_stack_12->SetBinError(24,2.142942);
   hnumuCCinFV_stack_12->SetEntries(859);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.508753);
   hnueCCinFV_stack_13->SetBinContent(2,1.068346);
   hnueCCinFV_stack_13->SetBinContent(3,0.218026);
   hnueCCinFV_stack_13->SetBinContent(4,2.158952);
   hnueCCinFV_stack_13->SetBinContent(5,1.282706);
   hnueCCinFV_stack_13->SetBinContent(6,2.081831);
   hnueCCinFV_stack_13->SetBinContent(7,0.7426384);
   hnueCCinFV_stack_13->SetBinContent(8,0.4909759);
   hnueCCinFV_stack_13->SetBinContent(9,2.439669);
   hnueCCinFV_stack_13->SetBinContent(10,1.205148);
   hnueCCinFV_stack_13->SetBinContent(11,0.4325931);
   hnueCCinFV_stack_13->SetBinContent(12,1.2857);
   hnueCCinFV_stack_13->SetBinContent(13,1.467229);
   hnueCCinFV_stack_13->SetBinContent(15,0.7183912);
   hnueCCinFV_stack_13->SetBinContent(16,2.025963);
   hnueCCinFV_stack_13->SetBinContent(17,3.481214);
   hnueCCinFV_stack_13->SetBinContent(18,0.8013275);
   hnueCCinFV_stack_13->SetBinContent(19,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(20,2.178747);
   hnueCCinFV_stack_13->SetBinContent(21,0.660623);
   hnueCCinFV_stack_13->SetBinContent(22,0.2585939);
   hnueCCinFV_stack_13->SetBinContent(23,1.861137);
   hnueCCinFV_stack_13->SetBinContent(24,1.126503);
   hnueCCinFV_stack_13->SetBinError(1,1.549207);
   hnueCCinFV_stack_13->SetBinError(2,0.5662675);
   hnueCCinFV_stack_13->SetBinError(3,0.2180157);
   hnueCCinFV_stack_13->SetBinError(4,1.216229);
   hnueCCinFV_stack_13->SetBinError(5,0.6598412);
   hnueCCinFV_stack_13->SetBinError(6,0.7909079);
   hnueCCinFV_stack_13->SetBinError(7,0.4426341);
   hnueCCinFV_stack_13->SetBinError(8,0.3489916);
   hnueCCinFV_stack_13->SetBinError(9,1.099958);
   hnueCCinFV_stack_13->SetBinError(10,0.791697);
   hnueCCinFV_stack_13->SetBinError(11,0.4325931);
   hnueCCinFV_stack_13->SetBinError(12,0.6099762);
   hnueCCinFV_stack_13->SetBinError(13,0.6161243);
   hnueCCinFV_stack_13->SetBinError(15,0.4282902);
   hnueCCinFV_stack_13->SetBinError(16,0.7990362);
   hnueCCinFV_stack_13->SetBinError(17,1.516196);
   hnueCCinFV_stack_13->SetBinError(18,0.4937343);
   hnueCCinFV_stack_13->SetBinError(19,0.48078);
   hnueCCinFV_stack_13->SetBinError(20,0.9061585);
   hnueCCinFV_stack_13->SetBinError(21,0.3825552);
   hnueCCinFV_stack_13->SetBinError(22,0.253752);
   hnueCCinFV_stack_13->SetBinError(23,0.8220906);
   hnueCCinFV_stack_13->SetBinError(24,0.5103204);
   hnueCCinFV_stack_13->SetEntries(111);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__17->SetBinContent(1,152.358);
   hmcerror__17->SetBinContent(2,155.5063);
   hmcerror__17->SetBinContent(3,157.2157);
   hmcerror__17->SetBinContent(4,150.8204);
   hmcerror__17->SetBinContent(5,135.7814);
   hmcerror__17->SetBinContent(6,144.8578);
   hmcerror__17->SetBinContent(7,159.8682);
   hmcerror__17->SetBinContent(8,148.8996);
   hmcerror__17->SetBinContent(9,147.6687);
   hmcerror__17->SetBinContent(10,142.8476);
   hmcerror__17->SetBinContent(11,156.331);
   hmcerror__17->SetBinContent(12,151.5889);
   hmcerror__17->SetBinContent(13,154.1231);
   hmcerror__17->SetBinContent(14,156.6347);
   hmcerror__17->SetBinContent(15,167.3515);
   hmcerror__17->SetBinContent(16,152.0969);
   hmcerror__17->SetBinContent(17,165.2434);
   hmcerror__17->SetBinContent(18,154.5601);
   hmcerror__17->SetBinContent(19,142.6428);
   hmcerror__17->SetBinContent(20,150.1706);
   hmcerror__17->SetBinContent(21,154.6279);
   hmcerror__17->SetBinContent(22,154.9494);
   hmcerror__17->SetBinContent(23,167.7096);
   hmcerror__17->SetBinContent(24,159.1519);
   hmcerror__17->SetBinError(1,38.76608);
   hmcerror__17->SetBinError(2,42.32186);
   hmcerror__17->SetBinError(3,41.51268);
   hmcerror__17->SetBinError(4,44.58831);
   hmcerror__17->SetBinError(5,35.54154);
   hmcerror__17->SetBinError(6,40.73513);
   hmcerror__17->SetBinError(7,39.71942);
   hmcerror__17->SetBinError(8,47.84631);
   hmcerror__17->SetBinError(9,43.29113);
   hmcerror__17->SetBinError(10,37.83453);
   hmcerror__17->SetBinError(11,46.6148);
   hmcerror__17->SetBinError(12,39.85791);
   hmcerror__17->SetBinError(13,42.03226);
   hmcerror__17->SetBinError(14,43.11266);
   hmcerror__17->SetBinError(15,49.30974);
   hmcerror__17->SetBinError(16,39.09736);
   hmcerror__17->SetBinError(17,47.26938);
   hmcerror__17->SetBinError(18,39.59082);
   hmcerror__17->SetBinError(19,38.18176);
   hmcerror__17->SetBinError(20,38.47507);
   hmcerror__17->SetBinError(21,40.65487);
   hmcerror__17->SetBinError(22,43.87162);
   hmcerror__17->SetBinError(23,47.89654);
   hmcerror__17->SetBinError(24,46.923);
   hmcerror__17->SetBinError(25,0.3895343);
   hmcerror__17->SetEntries(3645.257);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3021[24] = {
   159,
   128,
   149,
   150,
   145,
   123,
   139,
   158,
   133,
   153,
   135,
   144,
   165,
   152,
   141,
   145,
   156,
   139,
   143,
   144,
   143,
   196,
   142,
   140};
   Double_t _felx3021[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3021[24] = {
   12.60952,
   11.31371,
   12.20656,
   12.24745,
   12.04159,
   11.09054,
   11.78983,
   12.56981,
   11.53256,
   12.36932,
   11.61895,
   12,
   12.84523,
   12.32883,
   11.87434,
   12.04159,
   12.49,
   11.78983,
   11.95826,
   12,
   11.95826,
   14,
   11.91638,
   11.83216};
   Double_t _fehx3021[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3021[24] = {
   12.60952,
   11.31371,
   12.20656,
   12.24745,
   12.04159,
   11.09054,
   11.78983,
   12.56981,
   11.53256,
   12.36932,
   11.61895,
   12,
   12.84523,
   12.32883,
   11.87434,
   12.04159,
   12.49,
   11.78983,
   11.95826,
   12,
   11.95826,
   14,
   11.91638,
   11.83216};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-3.78,3.78);
   Graph_Graph3021->SetMinimum(102.1004);
   Graph_Graph3021->SetMaximum(219.8091);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.9/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3522.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 83.2","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 283.4","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 42.1","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 341.2","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  90.4","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.9","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1519.9","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  296.5","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 502.1","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 262.2","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 218.0","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.4","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3022[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3022[24] = {
   0.2544408,
   0.2721553,
   0.2640492,
   0.2956385,
   0.2617557,
   0.2812076,
   0.2484511,
   0.3213328,
   0.293164,
   0.2648594,
   0.2981801,
   0.2629341,
   0.2727188,
   0.2752433,
   0.2946477,
   0.2570556,
   0.2860591,
   0.2561517,
   0.2676739,
   0.2562091,
   0.2629206,
   0.2831351,
   0.2855922,
   0.2948316};
   Double_t _fehx3022[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3022[24] = {
   0.2544408,
   0.2721553,
   0.2640492,
   0.2956385,
   0.2617557,
   0.2812076,
   0.2484511,
   0.3213328,
   0.293164,
   0.2648594,
   0.2981801,
   0.2629341,
   0.2727188,
   0.2752433,
   0.2946477,
   0.2570556,
   0.2860591,
   0.2561517,
   0.2676739,
   0.2562091,
   0.2629206,
   0.2831351,
   0.2855922,
   0.2948316};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-3.78,3.78);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3023[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3023[24] = {
   0.2192641,
   0.2218916,
   0.2158393,
   0.2208342,
   0.2207127,
   0.2203648,
   0.2149388,
   0.2185487,
   0.2158743,
   0.2205383,
   0.2243158,
   0.225531,
   0.225875,
   0.2249259,
   0.2246496,
   0.2178839,
   0.212216,
   0.2219168,
   0.2274425,
   0.2170178,
   0.2189061,
   0.2290708,
   0.2218766,
   0.2120901};
   Double_t _fehx3023[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3023[24] = {
   0.2192641,
   0.2218916,
   0.2158393,
   0.2208342,
   0.2207127,
   0.2203648,
   0.2149388,
   0.2185487,
   0.2158743,
   0.2205383,
   0.2243158,
   0.225531,
   0.225875,
   0.2249259,
   0.2246496,
   0.2178839,
   0.212216,
   0.2219168,
   0.2274425,
   0.2170178,
   0.2189061,
   0.2290708,
   0.2218766,
   0.2120901};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-3.78,3.78);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3024[24] = {
   1.043595,
   0.8231179,
   0.9477425,
   0.9945604,
   1.067893,
   0.8491083,
   0.8694664,
   1.061118,
   0.900665,
   1.071072,
   0.8635523,
   0.9499374,
   1.070573,
   0.9704107,
   0.8425378,
   0.9533398,
   0.944062,
   0.8993268,
   1.002504,
   0.9589095,
   0.9248008,
   1.264929,
   0.8467019,
   0.879663};
   Double_t _felx3024[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3024[24] = {
   0.08276245,
   0.07275403,
   0.07764209,
   0.08120552,
   0.08868371,
   0.07656152,
   0.07374718,
   0.08441802,
   0.07809756,
   0.08659101,
   0.07432275,
   0.07916145,
   0.08334399,
   0.0787107,
   0.07095448,
   0.07917056,
   0.07558545,
   0.0762799,
   0.08383359,
   0.07990913,
   0.07733573,
   0.09035205,
   0.07105364,
   0.07434509};
   Double_t _fehx3024[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3024[24] = {
   0.08276245,
   0.07275403,
   0.07764209,
   0.08120552,
   0.08868371,
   0.07656152,
   0.07374718,
   0.08441802,
   0.07809756,
   0.08659101,
   0.07432275,
   0.07916145,
   0.08334399,
   0.0787107,
   0.07095448,
   0.07917056,
   0.07558545,
   0.0762799,
   0.08383359,
   0.07990913,
   0.07733573,
   0.09035205,
   0.07105364,
   0.07434509};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-3.78,3.78);
   Graph_Graph3024->SetMinimum(0.6898722);
   Graph_Graph3024->SetMaximum(1.415772);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
