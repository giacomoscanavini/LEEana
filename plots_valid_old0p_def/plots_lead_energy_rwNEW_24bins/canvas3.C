#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Feb 18 11:38:28 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.30769,-3.694917,676.9231,408.58);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__7->SetBinContent(1,5.478484);
   hmc__7->SetBinContent(2,27.07038);
   hmc__7->SetBinContent(3,79.01714);
   hmc__7->SetBinContent(4,136.3861);
   hmc__7->SetBinContent(5,172.6405);
   hmc__7->SetBinContent(6,184.7458);
   hmc__7->SetBinContent(7,179.1669);
   hmc__7->SetBinContent(8,155.1277);
   hmc__7->SetBinContent(9,115.7454);
   hmc__7->SetBinContent(10,103.7709);
   hmc__7->SetBinContent(11,91.58951);
   hmc__7->SetBinContent(12,68.2619);
   hmc__7->SetBinContent(13,62.73038);
   hmc__7->SetBinContent(14,49.81059);
   hmc__7->SetBinContent(15,38.95766);
   hmc__7->SetBinContent(16,31.47963);
   hmc__7->SetBinContent(17,26.67392);
   hmc__7->SetBinContent(18,19.99555);
   hmc__7->SetBinContent(19,20.54049);
   hmc__7->SetBinContent(20,14.73624);
   hmc__7->SetBinContent(21,8.863801);
   hmc__7->SetBinContent(22,8.129584);
   hmc__7->SetBinContent(23,7.53334);
   hmc__7->SetBinContent(24,6.741319);
   hmc__7->SetBinContent(25,69.86221);
   hmc__7->SetBinError(1,17.05145);
   hmc__7->SetBinError(2,11.75027);
   hmc__7->SetBinError(3,34.71952);
   hmc__7->SetBinError(4,29.77309);
   hmc__7->SetBinError(5,45.43493);
   hmc__7->SetBinError(6,45.39236);
   hmc__7->SetBinError(7,48.68847);
   hmc__7->SetBinError(8,40.38634);
   hmc__7->SetBinError(9,32.49124);
   hmc__7->SetBinError(10,33.09865);
   hmc__7->SetBinError(11,24.69055);
   hmc__7->SetBinError(12,22.22152);
   hmc__7->SetBinError(13,19.49919);
   hmc__7->SetBinError(14,19.30528);
   hmc__7->SetBinError(15,16.34505);
   hmc__7->SetBinError(16,16.47041);
   hmc__7->SetBinError(17,12.34122);
   hmc__7->SetBinError(18,11.24807);
   hmc__7->SetBinError(19,12.26999);
   hmc__7->SetBinError(20,8.739255);
   hmc__7->SetBinError(21,14.8273);
   hmc__7->SetBinError(22,6.587688);
   hmc__7->SetBinError(23,6.549865);
   hmc__7->SetBinError(24,5.808505);
   hmc__7->SetBinError(25,22.83035);
   hmc__7->SetMinimum(-3.694917);
   hmc__7->SetMaximum(387.9663);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,0,600);
   hs3_stack_3->SetMinimum(-3.871883e-08);
   hs3_stack_3->SetMaximum(193.9832);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,1.071247);
   hbadmatch_stack_1->SetBinContent(2,1.428237);
   hbadmatch_stack_1->SetBinContent(3,4.576226);
   hbadmatch_stack_1->SetBinContent(4,5.550678);
   hbadmatch_stack_1->SetBinContent(5,5.777619);
   hbadmatch_stack_1->SetBinContent(6,6.036065);
   hbadmatch_stack_1->SetBinContent(7,8.309518);
   hbadmatch_stack_1->SetBinContent(8,5.924633);
   hbadmatch_stack_1->SetBinContent(9,5.538995);
   hbadmatch_stack_1->SetBinContent(10,1.805704);
   hbadmatch_stack_1->SetBinContent(11,1.326947);
   hbadmatch_stack_1->SetBinContent(12,2.165909);
   hbadmatch_stack_1->SetBinContent(13,0.8077155);
   hbadmatch_stack_1->SetBinContent(14,1.505305);
   hbadmatch_stack_1->SetBinContent(15,0.7607957);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,0.7336084);
   hbadmatch_stack_1->SetBinContent(19,0.6360607);
   hbadmatch_stack_1->SetBinContent(23,0.9314031);
   hbadmatch_stack_1->SetBinContent(25,0.9818863);
   hbadmatch_stack_1->SetBinError(1,1.071247);
   hbadmatch_stack_1->SetBinError(2,0.6591445);
   hbadmatch_stack_1->SetBinError(3,1.125803);
   hbadmatch_stack_1->SetBinError(4,1.199495);
   hbadmatch_stack_1->SetBinError(5,1.163117);
   hbadmatch_stack_1->SetBinError(6,1.311287);
   hbadmatch_stack_1->SetBinError(7,1.545676);
   hbadmatch_stack_1->SetBinError(8,1.217626);
   hbadmatch_stack_1->SetBinError(9,1.356295);
   hbadmatch_stack_1->SetBinError(10,0.7080169);
   hbadmatch_stack_1->SetBinError(11,0.6095374);
   hbadmatch_stack_1->SetBinError(12,0.7907096);
   hbadmatch_stack_1->SetBinError(13,0.4900869);
   hbadmatch_stack_1->SetBinError(14,0.7349967);
   hbadmatch_stack_1->SetBinError(15,0.4522722);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.4394482);
   hbadmatch_stack_1->SetBinError(19,0.4822316);
   hbadmatch_stack_1->SetBinError(23,0.557432);
   hbadmatch_stack_1->SetBinError(25,0.4391155);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,0.7309963);
   hext_stack_2->SetBinContent(2,10.28302);
   hext_stack_2->SetBinContent(3,21.2639);
   hext_stack_2->SetBinContent(4,34.58617);
   hext_stack_2->SetBinContent(5,26.8509);
   hext_stack_2->SetBinContent(6,35.74532);
   hext_stack_2->SetBinContent(7,27.52565);
   hext_stack_2->SetBinContent(8,30.73089);
   hext_stack_2->SetBinContent(9,14.69772);
   hext_stack_2->SetBinContent(10,17.97798);
   hext_stack_2->SetBinContent(11,17.83675);
   hext_stack_2->SetBinContent(12,7.537797);
   hext_stack_2->SetBinContent(13,11.12211);
   hext_stack_2->SetBinContent(14,5.840789);
   hext_stack_2->SetBinContent(15,2.110787);
   hext_stack_2->SetBinContent(16,3.558419);
   hext_stack_2->SetBinContent(17,1.78639);
   hext_stack_2->SetBinContent(18,2.592407);
   hext_stack_2->SetBinContent(19,1.37261);
   hext_stack_2->SetBinContent(20,1.861411);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,0.9660115);
   hext_stack_2->SetBinContent(24,1.055394);
   hext_stack_2->SetBinContent(25,8.496628);
   hext_stack_2->SetBinError(1,0.5201503);
   hext_stack_2->SetBinError(2,2.125455);
   hext_stack_2->SetBinError(3,3.158379);
   hext_stack_2->SetBinError(4,4.036826);
   hext_stack_2->SetBinError(5,3.515956);
   hext_stack_2->SetBinError(6,4.015998);
   hext_stack_2->SetBinError(7,3.479071);
   hext_stack_2->SetBinError(8,3.978569);
   hext_stack_2->SetBinError(9,2.309998);
   hext_stack_2->SetBinError(10,3.053271);
   hext_stack_2->SetBinError(11,3.011665);
   hext_stack_2->SetBinError(12,1.7757);
   hext_stack_2->SetBinError(13,2.389589);
   hext_stack_2->SetBinError(14,1.538068);
   hext_stack_2->SetBinError(15,0.8669371);
   hext_stack_2->SetBinError(16,1.301958);
   hext_stack_2->SetBinError(17,0.8039566);
   hext_stack_2->SetBinError(18,1.085446);
   hext_stack_2->SetBinError(19,0.8259691);
   hext_stack_2->SetBinError(20,0.9526997);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.7189592);
   hext_stack_2->SetBinError(24,0.6130171);
   hext_stack_2->SetBinError(25,1.96754);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,0.4142144);
   hdirt_stack_3->SetBinContent(3,1.629463);
   hdirt_stack_3->SetBinContent(4,2.636298);
   hdirt_stack_3->SetBinContent(5,4.053899);
   hdirt_stack_3->SetBinContent(6,4.284693);
   hdirt_stack_3->SetBinContent(7,2.302393);
   hdirt_stack_3->SetBinContent(8,2.02304);
   hdirt_stack_3->SetBinContent(9,0.8668123);
   hdirt_stack_3->SetBinContent(10,1.187592);
   hdirt_stack_3->SetBinContent(12,1.051731);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.6331654);
   hdirt_stack_3->SetBinContent(15,1.066189);
   hdirt_stack_3->SetBinContent(16,0.165479);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.399291);
   hdirt_stack_3->SetBinContent(20,0.3381872);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.2391468);
   hdirt_stack_3->SetBinError(3,0.6454604);
   hdirt_stack_3->SetBinError(4,0.8551257);
   hdirt_stack_3->SetBinError(5,1.026778);
   hdirt_stack_3->SetBinError(6,1.072116);
   hdirt_stack_3->SetBinError(7,0.8341663);
   hdirt_stack_3->SetBinError(8,0.7487303);
   hdirt_stack_3->SetBinError(9,0.5289483);
   hdirt_stack_3->SetBinError(10,0.6106816);
   hdirt_stack_3->SetBinError(12,0.5487592);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.4685454);
   hdirt_stack_3->SetBinError(15,0.9383312);
   hdirt_stack_3->SetBinError(16,0.165479);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.399291);
   hdirt_stack_3->SetBinError(20,0.3381872);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,1.465526);
   houtFV_stack_4->SetBinContent(2,6.877018);
   houtFV_stack_4->SetBinContent(3,19.05026);
   houtFV_stack_4->SetBinContent(4,27.36531);
   houtFV_stack_4->SetBinContent(5,40.61268);
   houtFV_stack_4->SetBinContent(6,39.47478);
   houtFV_stack_4->SetBinContent(7,38.46529);
   houtFV_stack_4->SetBinContent(8,29.98927);
   houtFV_stack_4->SetBinContent(9,22.25968);
   houtFV_stack_4->SetBinContent(10,18.95663);
   houtFV_stack_4->SetBinContent(11,12.73653);
   houtFV_stack_4->SetBinContent(12,12.59523);
   houtFV_stack_4->SetBinContent(13,11.16046);
   houtFV_stack_4->SetBinContent(14,7.14045);
   houtFV_stack_4->SetBinContent(15,6.629228);
   houtFV_stack_4->SetBinContent(16,6.061956);
   houtFV_stack_4->SetBinContent(17,2.957841);
   houtFV_stack_4->SetBinContent(18,3.701244);
   houtFV_stack_4->SetBinContent(19,4.166746);
   houtFV_stack_4->SetBinContent(20,1.999038);
   houtFV_stack_4->SetBinContent(21,1.72443);
   houtFV_stack_4->SetBinContent(22,2.094007);
   houtFV_stack_4->SetBinContent(23,0.536893);
   houtFV_stack_4->SetBinContent(24,1.320373);
   houtFV_stack_4->SetBinContent(25,5.667485);
   houtFV_stack_4->SetBinError(1,0.6209405);
   houtFV_stack_4->SetBinError(2,1.301225);
   houtFV_stack_4->SetBinError(3,2.170561);
   houtFV_stack_4->SetBinError(4,2.730873);
   houtFV_stack_4->SetBinError(5,3.232095);
   houtFV_stack_4->SetBinError(6,3.385949);
   houtFV_stack_4->SetBinError(7,3.079921);
   houtFV_stack_4->SetBinError(8,2.814737);
   houtFV_stack_4->SetBinError(9,2.397616);
   houtFV_stack_4->SetBinError(10,2.186819);
   houtFV_stack_4->SetBinError(11,1.775718);
   houtFV_stack_4->SetBinError(12,1.779491);
   houtFV_stack_4->SetBinError(13,1.662987);
   houtFV_stack_4->SetBinError(14,1.301724);
   houtFV_stack_4->SetBinError(15,1.38856);
   houtFV_stack_4->SetBinError(16,1.202127);
   houtFV_stack_4->SetBinError(17,0.884529);
   houtFV_stack_4->SetBinError(18,1.035262);
   houtFV_stack_4->SetBinError(19,1.097366);
   houtFV_stack_4->SetBinError(20,0.7339349);
   houtFV_stack_4->SetBinError(21,0.6241874);
   houtFV_stack_4->SetBinError(22,0.7200595);
   houtFV_stack_4->SetBinError(23,0.3929602);
   houtFV_stack_4->SetBinError(24,0.5548703);
   houtFV_stack_4->SetBinError(25,1.235213);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.7250721);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.711454);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.426652);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4042178);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9338218);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.01769);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3347998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7249039);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.017858);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.6422043);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.5153221);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.17388);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3150384);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3035023);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.608499);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1342881);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2812022);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3378888);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.09664838);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2578571);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3833116);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3408521);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2596123);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.4245052);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3901041);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2390593);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3764861);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.784112);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.2611);
   hNCpi0inFVres_stack_7->SetBinContent(4,20.51256);
   hNCpi0inFVres_stack_7->SetBinContent(5,32.26349);
   hNCpi0inFVres_stack_7->SetBinContent(6,35.59923);
   hNCpi0inFVres_stack_7->SetBinContent(7,32.32113);
   hNCpi0inFVres_stack_7->SetBinContent(8,24.2289);
   hNCpi0inFVres_stack_7->SetBinContent(9,23.0518);
   hNCpi0inFVres_stack_7->SetBinContent(10,16.09188);
   hNCpi0inFVres_stack_7->SetBinContent(11,15.0144);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.74112);
   hNCpi0inFVres_stack_7->SetBinContent(13,11.824);
   hNCpi0inFVres_stack_7->SetBinContent(14,8.949787);
   hNCpi0inFVres_stack_7->SetBinContent(15,7.239254);
   hNCpi0inFVres_stack_7->SetBinContent(16,6.329836);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.961231);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.90552);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.570056);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.938726);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.966794);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.89588);
   hNCpi0inFVres_stack_7->SetBinContent(23,1.171304);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.8365039);
   hNCpi0inFVres_stack_7->SetBinContent(25,7.319626);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2236377);
   hNCpi0inFVres_stack_7->SetBinError(2,0.43425);
   hNCpi0inFVres_stack_7->SetBinError(3,1.114585);
   hNCpi0inFVres_stack_7->SetBinError(4,1.451707);
   hNCpi0inFVres_stack_7->SetBinError(5,1.866782);
   hNCpi0inFVres_stack_7->SetBinError(6,1.994429);
   hNCpi0inFVres_stack_7->SetBinError(7,1.886192);
   hNCpi0inFVres_stack_7->SetBinError(8,1.495159);
   hNCpi0inFVres_stack_7->SetBinError(9,1.545423);
   hNCpi0inFVres_stack_7->SetBinError(10,1.276137);
   hNCpi0inFVres_stack_7->SetBinError(11,1.203839);
   hNCpi0inFVres_stack_7->SetBinError(12,1.054534);
   hNCpi0inFVres_stack_7->SetBinError(13,1.113391);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9574228);
   hNCpi0inFVres_stack_7->SetBinError(15,0.9127479);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8031119);
   hNCpi0inFVres_stack_7->SetBinError(17,0.675681);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6665476);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6696548);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4531823);
   hNCpi0inFVres_stack_7->SetBinError(21,0.4887857);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4737569);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2809712);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2638255);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8708497);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.216398);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.280838);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.412872);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.077656);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.851959);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.505949);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.145914);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.03265);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.891407);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.845648);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.179616);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.284647);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.802466);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.143404);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.14698);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.604926);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.309476);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.9339901);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.14374);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.7538042);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.310644);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.488086);
   hNCpi0inFVdis_stack_8->SetBinContent(25,6.34695);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2404119);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4900446);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6399339);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8129063);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7365437);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6917159);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7283511);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7816223);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7545114);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.695271);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5793924);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5707629);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4050334);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5378189);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2795826);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4810939);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4980546);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3313945);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3344153);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.379057);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3453893);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4411421);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2304939);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.8728963);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(2,1.908829);
   hCCpi0inFV_stack_10->SetBinContent(3,7.471273);
   hCCpi0inFV_stack_10->SetBinContent(4,20.00969);
   hCCpi0inFV_stack_10->SetBinContent(5,26.91583);
   hCCpi0inFV_stack_10->SetBinContent(6,29.81474);
   hCCpi0inFV_stack_10->SetBinContent(7,26.96894);
   hCCpi0inFV_stack_10->SetBinContent(8,28.96386);
   hCCpi0inFV_stack_10->SetBinContent(9,24.09015);
   hCCpi0inFV_stack_10->SetBinContent(10,23.91976);
   hCCpi0inFV_stack_10->SetBinContent(11,22.11429);
   hCCpi0inFV_stack_10->SetBinContent(12,17.40677);
   hCCpi0inFV_stack_10->SetBinContent(13,13.93637);
   hCCpi0inFV_stack_10->SetBinContent(14,12.99028);
   hCCpi0inFV_stack_10->SetBinContent(15,8.660921);
   hCCpi0inFV_stack_10->SetBinContent(16,7.230357);
   hCCpi0inFV_stack_10->SetBinContent(17,5.958468);
   hCCpi0inFV_stack_10->SetBinContent(18,4.345016);
   hCCpi0inFV_stack_10->SetBinContent(19,5.945552);
   hCCpi0inFV_stack_10->SetBinContent(20,4.278982);
   hCCpi0inFV_stack_10->SetBinContent(21,2.050601);
   hCCpi0inFV_stack_10->SetBinContent(22,1.91221);
   hCCpi0inFV_stack_10->SetBinContent(23,2.197444);
   hCCpi0inFV_stack_10->SetBinContent(24,2.195754);
   hCCpi0inFV_stack_10->SetBinContent(25,17.27463);
   hCCpi0inFV_stack_10->SetBinError(1,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(2,0.6506224);
   hCCpi0inFV_stack_10->SetBinError(3,1.38857);
   hCCpi0inFV_stack_10->SetBinError(4,2.24291);
   hCCpi0inFV_stack_10->SetBinError(5,2.554035);
   hCCpi0inFV_stack_10->SetBinError(6,2.790687);
   hCCpi0inFV_stack_10->SetBinError(7,2.60414);
   hCCpi0inFV_stack_10->SetBinError(8,2.784992);
   hCCpi0inFV_stack_10->SetBinError(9,2.532032);
   hCCpi0inFV_stack_10->SetBinError(10,2.459673);
   hCCpi0inFV_stack_10->SetBinError(11,2.323993);
   hCCpi0inFV_stack_10->SetBinError(12,2.131052);
   hCCpi0inFV_stack_10->SetBinError(13,1.84259);
   hCCpi0inFV_stack_10->SetBinError(14,1.776307);
   hCCpi0inFV_stack_10->SetBinError(15,1.429121);
   hCCpi0inFV_stack_10->SetBinError(16,1.325113);
   hCCpi0inFV_stack_10->SetBinError(17,1.208984);
   hCCpi0inFV_stack_10->SetBinError(18,1.093476);
   hCCpi0inFV_stack_10->SetBinError(19,1.286457);
   hCCpi0inFV_stack_10->SetBinError(20,1.044326);
   hCCpi0inFV_stack_10->SetBinError(21,0.7068742);
   hCCpi0inFV_stack_10->SetBinError(22,0.6516395);
   hCCpi0inFV_stack_10->SetBinError(23,0.760276);
   hCCpi0inFV_stack_10->SetBinError(24,0.7598403);
   hCCpi0inFV_stack_10->SetBinError(25,2.129158);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(2,0.9303237);
   hNCinFV_stack_11->SetBinContent(3,1.709192);
   hNCinFV_stack_11->SetBinContent(4,4.786628);
   hNCinFV_stack_11->SetBinContent(5,4.981653);
   hNCinFV_stack_11->SetBinContent(6,5.96354);
   hNCinFV_stack_11->SetBinContent(7,6.792428);
   hNCinFV_stack_11->SetBinContent(8,6.590642);
   hNCinFV_stack_11->SetBinContent(9,5.718642);
   hNCinFV_stack_11->SetBinContent(10,3.857995);
   hNCinFV_stack_11->SetBinContent(11,6.67916);
   hNCinFV_stack_11->SetBinContent(12,2.639056);
   hNCinFV_stack_11->SetBinContent(13,2.340906);
   hNCinFV_stack_11->SetBinContent(14,2.982615);
   hNCinFV_stack_11->SetBinContent(15,2.927671);
   hNCinFV_stack_11->SetBinContent(16,2.535931);
   hNCinFV_stack_11->SetBinContent(17,2.694);
   hNCinFV_stack_11->SetBinContent(18,1.465526);
   hNCinFV_stack_11->SetBinContent(19,0.9768147);
   hNCinFV_stack_11->SetBinContent(20,0.9801958);
   hNCinFV_stack_11->SetBinContent(21,0.7319179);
   hNCinFV_stack_11->SetBinContent(22,0.1967154);
   hNCinFV_stack_11->SetBinContent(23,0.1950248);
   hNCinFV_stack_11->SetBinContent(24,0.536893);
   hNCinFV_stack_11->SetBinContent(25,4.248045);
   hNCinFV_stack_11->SetBinError(2,0.4814682);
   hNCinFV_stack_11->SetBinError(3,0.6530455);
   hNCinFV_stack_11->SetBinError(4,1.110302);
   hNCinFV_stack_11->SetBinError(5,1.1273);
   hNCinFV_stack_11->SetBinError(6,1.209805);
   hNCinFV_stack_11->SetBinError(7,1.331946);
   hNCinFV_stack_11->SetBinError(8,1.316585);
   hNCinFV_stack_11->SetBinError(9,1.210473);
   hNCinFV_stack_11->SetBinError(10,1.00081);
   hNCinFV_stack_11->SetBinError(11,1.359443);
   hNCinFV_stack_11->SetBinError(12,0.784283);
   hNCinFV_stack_11->SetBinError(13,0.8093475);
   hNCinFV_stack_11->SetBinError(14,0.8556548);
   hNCinFV_stack_11->SetBinError(15,0.877388);
   hNCinFV_stack_11->SetBinError(16,0.8325131);
   hNCinFV_stack_11->SetBinError(17,0.7598915);
   hNCinFV_stack_11->SetBinError(18,0.6209405);
   hNCinFV_stack_11->SetBinError(19,0.4368475);
   hNCinFV_stack_11->SetBinError(20,0.4383608);
   hNCinFV_stack_11->SetBinError(21,0.438694);
   hNCinFV_stack_11->SetBinError(22,0.1967154);
   hNCinFV_stack_11->SetBinError(23,0.1950249);
   hNCinFV_stack_11->SetBinError(24,0.3929602);
   hNCinFV_stack_11->SetBinError(25,1.038119);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,1.08013);
   hnumuCCinFV_stack_12->SetBinContent(2,2.789143);
   hnumuCCinFV_stack_12->SetBinContent(3,10.6025);
   hnumuCCinFV_stack_12->SetBinContent(4,15.83536);
   hnumuCCinFV_stack_12->SetBinContent(5,23.5429);
   hnumuCCinFV_stack_12->SetBinContent(6,21.87099);
   hnumuCCinFV_stack_12->SetBinContent(7,28.73296);
   hnumuCCinFV_stack_12->SetBinContent(8,20.48591);
   hnumuCCinFV_stack_12->SetBinContent(9,13.03808);
   hnumuCCinFV_stack_12->SetBinContent(10,13.86718);
   hnumuCCinFV_stack_12->SetBinContent(11,10.8954);
   hnumuCCinFV_stack_12->SetBinContent(12,9.358257);
   hnumuCCinFV_stack_12->SetBinContent(13,6.662618);
   hnumuCCinFV_stack_12->SetBinContent(14,6.939664);
   hnumuCCinFV_stack_12->SetBinContent(15,5.767232);
   hnumuCCinFV_stack_12->SetBinContent(16,3.015055);
   hnumuCCinFV_stack_12->SetBinContent(17,4.967383);
   hnumuCCinFV_stack_12->SetBinContent(18,0.9675953);
   hnumuCCinFV_stack_12->SetBinContent(19,1.920969);
   hnumuCCinFV_stack_12->SetBinContent(20,1.748806);
   hnumuCCinFV_stack_12->SetBinContent(22,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,9.090757);
   hnumuCCinFV_stack_12->SetBinError(1,0.5633509);
   hnumuCCinFV_stack_12->SetBinError(2,0.8739947);
   hnumuCCinFV_stack_12->SetBinError(3,2.209605);
   hnumuCCinFV_stack_12->SetBinError(4,2.521629);
   hnumuCCinFV_stack_12->SetBinError(5,2.798182);
   hnumuCCinFV_stack_12->SetBinError(6,2.470642);
   hnumuCCinFV_stack_12->SetBinError(7,3.664638);
   hnumuCCinFV_stack_12->SetBinError(8,2.954407);
   hnumuCCinFV_stack_12->SetBinError(9,2.0569);
   hnumuCCinFV_stack_12->SetBinError(10,2.205915);
   hnumuCCinFV_stack_12->SetBinError(11,1.756189);
   hnumuCCinFV_stack_12->SetBinError(12,1.579701);
   hnumuCCinFV_stack_12->SetBinError(13,1.275519);
   hnumuCCinFV_stack_12->SetBinError(14,1.4631);
   hnumuCCinFV_stack_12->SetBinError(15,1.173113);
   hnumuCCinFV_stack_12->SetBinError(16,0.8346035);
   hnumuCCinFV_stack_12->SetBinError(17,1.153929);
   hnumuCCinFV_stack_12->SetBinError(18,0.49786);
   hnumuCCinFV_stack_12->SetBinError(19,0.6995768);
   hnumuCCinFV_stack_12->SetBinError(20,0.6938636);
   hnumuCCinFV_stack_12->SetBinError(22,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,1.559674);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.3479495);
   hnueCCinFV_stack_13->SetBinContent(11,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.4469234);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,7.872206);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.3025491);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.2478319);
   hnueCCinFV_stack_13->SetBinError(11,0.438694);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.3182782);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,2.391882);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__8->SetBinContent(1,5.478484);
   hmcerror__8->SetBinContent(2,27.07038);
   hmcerror__8->SetBinContent(3,79.01714);
   hmcerror__8->SetBinContent(4,136.3861);
   hmcerror__8->SetBinContent(5,172.6405);
   hmcerror__8->SetBinContent(6,184.7458);
   hmcerror__8->SetBinContent(7,179.1669);
   hmcerror__8->SetBinContent(8,155.1277);
   hmcerror__8->SetBinContent(9,115.7454);
   hmcerror__8->SetBinContent(10,103.7709);
   hmcerror__8->SetBinContent(11,91.58951);
   hmcerror__8->SetBinContent(12,68.2619);
   hmcerror__8->SetBinContent(13,62.73038);
   hmcerror__8->SetBinContent(14,49.81059);
   hmcerror__8->SetBinContent(15,38.95766);
   hmcerror__8->SetBinContent(16,31.47963);
   hmcerror__8->SetBinContent(17,26.67392);
   hmcerror__8->SetBinContent(18,19.99555);
   hmcerror__8->SetBinContent(19,20.54049);
   hmcerror__8->SetBinContent(20,14.73624);
   hmcerror__8->SetBinContent(21,8.863801);
   hmcerror__8->SetBinContent(22,8.129584);
   hmcerror__8->SetBinContent(23,7.53334);
   hmcerror__8->SetBinContent(24,6.741319);
   hmcerror__8->SetBinContent(25,69.86221);
   hmcerror__8->SetBinError(1,17.05145);
   hmcerror__8->SetBinError(2,11.75027);
   hmcerror__8->SetBinError(3,34.71952);
   hmcerror__8->SetBinError(4,29.77309);
   hmcerror__8->SetBinError(5,45.43493);
   hmcerror__8->SetBinError(6,45.39236);
   hmcerror__8->SetBinError(7,48.68847);
   hmcerror__8->SetBinError(8,40.38634);
   hmcerror__8->SetBinError(9,32.49124);
   hmcerror__8->SetBinError(10,33.09865);
   hmcerror__8->SetBinError(11,24.69055);
   hmcerror__8->SetBinError(12,22.22152);
   hmcerror__8->SetBinError(13,19.49919);
   hmcerror__8->SetBinError(14,19.30528);
   hmcerror__8->SetBinError(15,16.34505);
   hmcerror__8->SetBinError(16,16.47041);
   hmcerror__8->SetBinError(17,12.34122);
   hmcerror__8->SetBinError(18,11.24807);
   hmcerror__8->SetBinError(19,12.26999);
   hmcerror__8->SetBinError(20,8.739255);
   hmcerror__8->SetBinError(21,14.8273);
   hmcerror__8->SetBinError(22,6.587688);
   hmcerror__8->SetBinError(23,6.549865);
   hmcerror__8->SetBinError(24,5.808505);
   hmcerror__8->SetBinError(25,22.83035);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3009[24] = {
   4,
   28,
   83,
   148,
   166,
   174,
   153,
   112,
   115,
   91,
   63,
   67,
   44,
   34,
   22,
   30,
   23,
   21,
   11,
   9,
   7,
   5,
   2,
   9};
   Double_t _felx3009[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3009[24] = {
   2.29683,
   5.4358,
   9.234,
   12.16553,
   12.8841,
   13.19091,
   12.36932,
   10.58301,
   10.72381,
   9.6617,
   8.0648,
   8.3119,
   6.7671,
   5.9703,
   4.8417,
   5.6197,
   4.9457,
   4.7354,
   3.4975,
   3.19354,
   2.85954,
   2.48995,
   2,
   3.19354};
   Double_t _fehx3009[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3009[24] = {
   1.98186,
   5.2271,
   9.0323,
   12.16553,
   12.8841,
   13.19091,
   12.36932,
   10.58301,
   10.72381,
   9.46,
   7.862,
   8.1094,
   6.5623,
   5.7635,
   4.6299,
   5.4117,
   4.7346,
   4.5229,
   3.27,
   2.9582,
   2.61053,
   2.21064,
   1.51917,
   2.9582};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,660);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(205.91);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.88#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1421.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 55.5","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 279.1","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 319.3","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.6","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.0","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  277.8","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  65.0","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 301.8","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 69.2","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 205.3","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.6","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   
   Double_t _fx3010[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3010[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3010[24] = {
   3.11244,
   0.4340638,
   0.4393923,
   0.2183,
   0.2631765,
   0.2457017,
   0.2717493,
   0.2603425,
   0.2807131,
   0.3189589,
   0.2695784,
   0.3255333,
   0.3108412,
   0.3875738,
   0.4195594,
   0.5232084,
   0.4626697,
   0.5625284,
   0.5973562,
   0.5930452,
   1.672792,
   0.8103351,
   0.8694504,
   0.8616274};
   Double_t _fehx3010[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3010[24] = {
   3.11244,
   0.4340638,
   0.4393923,
   0.2183,
   0.2631765,
   0.2457017,
   0.2717493,
   0.2603425,
   0.2807131,
   0.3189589,
   0.2695784,
   0.3255333,
   0.3108412,
   0.3875738,
   0.4195594,
   0.5232084,
   0.4626697,
   0.5625284,
   0.5973562,
   0.5930452,
   1.672792,
   0.8103351,
   0.8694504,
   0.8616274};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,660);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3011[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3011[24] = {
   0.5108482,
   0.1727309,
   0.1634492,
   0.1687733,
   0.1879206,
   0.1725414,
   0.1885384,
   0.1842758,
   0.2152426,
   0.2009125,
   0.197806,
   0.2031379,
   0.213792,
   0.2272656,
   0.2610308,
   0.2498461,
   0.2424348,
   0.2728667,
   0.2599261,
   0.2561924,
   0.337249,
   0.2977572,
   0.2959811,
   0.3149025};
   Double_t _fehx3011[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3011[24] = {
   0.5108482,
   0.1727309,
   0.1634492,
   0.1687733,
   0.1879206,
   0.1725414,
   0.1885384,
   0.1842758,
   0.2152426,
   0.2009125,
   0.197806,
   0.2031379,
   0.213792,
   0.2272656,
   0.2610308,
   0.2498461,
   0.2424348,
   0.2728667,
   0.2599261,
   0.2561924,
   0.337249,
   0.2977572,
   0.2959811,
   0.3149025};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,660);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3012[24] = {
   0.730129,
   1.034341,
   1.050405,
   1.085154,
   0.9615355,
   0.9418344,
   0.8539525,
   0.7219857,
   0.9935603,
   0.8769321,
   0.6878517,
   0.9815138,
   0.7014145,
   0.6825857,
   0.5647156,
   0.9529974,
   0.8622654,
   1.050234,
   0.5355277,
   0.6107394,
   0.7897289,
   0.6150376,
   0.2654865,
   1.33505};
   Double_t _felx3012[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3012[24] = {
   0.4192456,
   0.2008025,
   0.1168607,
   0.08919913,
   0.07462963,
   0.07140028,
   0.06903797,
   0.06822123,
   0.09264998,
   0.09310609,
   0.08805375,
   0.1217648,
   0.107876,
   0.11986,
   0.1242811,
   0.1785186,
   0.1854133,
   0.2368227,
   0.1702735,
   0.2167134,
   0.3226088,
   0.3062826,
   0.2654865,
   0.4737263};
   Double_t _fehx3012[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3012[24] = {
   0.3617534,
   0.193093,
   0.1143081,
   0.08919913,
   0.07462963,
   0.07140028,
   0.06903797,
   0.06822123,
   0.09264998,
   0.09116239,
   0.08583953,
   0.1187983,
   0.1046112,
   0.1157083,
   0.1188444,
   0.1719112,
   0.1774992,
   0.2261953,
   0.1591978,
   0.2007432,
   0.2945159,
   0.2719253,
   0.2016596,
   0.4388162};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,660);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(1.951253);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_energy_high_all",24,0,600);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,600,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
