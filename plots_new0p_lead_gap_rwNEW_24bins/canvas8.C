#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Thu Mar  9 15:31:58 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-8.787617,101.5385,971.7255);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__22->SetBinContent(1,439.3809);
   hmc__22->SetBinContent(2,96.2598);
   hmc__22->SetBinContent(3,87.79565);
   hmc__22->SetBinContent(4,80.85585);
   hmc__22->SetBinContent(5,71.3935);
   hmc__22->SetBinContent(6,59.70213);
   hmc__22->SetBinContent(7,58.00617);
   hmc__22->SetBinContent(8,40.36937);
   hmc__22->SetBinContent(9,27.98753);
   hmc__22->SetBinContent(10,24.31847);
   hmc__22->SetBinContent(11,20.58318);
   hmc__22->SetBinContent(12,20.30067);
   hmc__22->SetBinContent(13,18.36544);
   hmc__22->SetBinContent(14,12.12254);
   hmc__22->SetBinContent(15,10.74991);
   hmc__22->SetBinContent(16,6.760083);
   hmc__22->SetBinContent(17,6.702219);
   hmc__22->SetBinContent(18,4.908236);
   hmc__22->SetBinContent(19,4.603429);
   hmc__22->SetBinContent(20,5.724261);
   hmc__22->SetBinContent(21,5.010199);
   hmc__22->SetBinContent(22,3.099024);
   hmc__22->SetBinContent(23,3.710994);
   hmc__22->SetBinContent(24,1.199435);
   hmc__22->SetBinContent(25,44.34896);
   hmc__22->SetBinError(1,87.63586);
   hmc__22->SetBinError(2,29.06422);
   hmc__22->SetBinError(3,28.74658);
   hmc__22->SetBinError(4,24.2811);
   hmc__22->SetBinError(5,19.95223);
   hmc__22->SetBinError(6,25.57279);
   hmc__22->SetBinError(7,23.39019);
   hmc__22->SetBinError(8,16.59884);
   hmc__22->SetBinError(9,11.92655);
   hmc__22->SetBinError(10,13.15884);
   hmc__22->SetBinError(11,11.51065);
   hmc__22->SetBinError(12,11.5264);
   hmc__22->SetBinError(13,10.33099);
   hmc__22->SetBinError(14,8.006504);
   hmc__22->SetBinError(15,7.911757);
   hmc__22->SetBinError(16,5.4108);
   hmc__22->SetBinError(17,6.855128);
   hmc__22->SetBinError(18,4.673882);
   hmc__22->SetBinError(19,5.320852);
   hmc__22->SetBinError(20,5.4279);
   hmc__22->SetBinError(21,6.135331);
   hmc__22->SetBinError(22,3.103535);
   hmc__22->SetBinError(23,5.580508);
   hmc__22->SetBinError(24,2.224108);
   hmc__22->SetBinError(25,16.62242);
   hmc__22->SetMinimum(-8.787617);
   hmc__22->SetMaximum(922.6998);
   hmc__22->SetEntries(1133.738);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,0,90);
   hs8_stack_8->SetMinimum(-4.228303e-08);
   hs8_stack_8->SetMaximum(461.3498);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,11.51925);
   hbadmatch_stack_1->SetBinContent(2,3.513682);
   hbadmatch_stack_1->SetBinContent(3,2.255157);
   hbadmatch_stack_1->SetBinContent(4,3.073666);
   hbadmatch_stack_1->SetBinContent(5,1.614412);
   hbadmatch_stack_1->SetBinContent(6,1.875056);
   hbadmatch_stack_1->SetBinContent(7,2.003098);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,0.3917402);
   hbadmatch_stack_1->SetBinContent(10,2.255398);
   hbadmatch_stack_1->SetBinContent(11,0.9421104);
   hbadmatch_stack_1->SetBinContent(12,1.555735);
   hbadmatch_stack_1->SetBinContent(13,0.7336084);
   hbadmatch_stack_1->SetBinContent(14,0.6803553);
   hbadmatch_stack_1->SetBinContent(15,0.6803553);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.2620963);
   hbadmatch_stack_1->SetBinContent(18,0.4188842);
   hbadmatch_stack_1->SetBinContent(19,0.5732377);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(23,0.5352025);
   hbadmatch_stack_1->SetBinContent(24,0.2449751);
   hbadmatch_stack_1->SetBinContent(25,3.320585);
   hbadmatch_stack_1->SetBinError(1,1.725921);
   hbadmatch_stack_1->SetBinError(2,1.013438);
   hbadmatch_stack_1->SetBinError(3,0.7873601);
   hbadmatch_stack_1->SetBinError(4,1.299059);
   hbadmatch_stack_1->SetBinError(5,0.5725791);
   hbadmatch_stack_1->SetBinError(6,0.7579183);
   hbadmatch_stack_1->SetBinError(7,0.7621236);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.2770047);
   hbadmatch_stack_1->SetBinError(10,0.938316);
   hbadmatch_stack_1->SetBinError(11,0.5644634);
   hbadmatch_stack_1->SetBinError(12,0.7077556);
   hbadmatch_stack_1->SetBinError(13,0.4394482);
   hbadmatch_stack_1->SetBinError(14,0.4810838);
   hbadmatch_stack_1->SetBinError(15,0.4810838);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.2620963);
   hbadmatch_stack_1->SetBinError(18,0.2967422);
   hbadmatch_stack_1->SetBinError(19,0.4248129);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(23,0.3921167);
   hbadmatch_stack_1->SetBinError(24,0.2449751);
   hbadmatch_stack_1->SetBinError(25,0.9843617);
   hbadmatch_stack_1->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,71.1707);
   hext_stack_2->SetBinContent(2,12.33037);
   hext_stack_2->SetBinContent(3,13.76201);
   hext_stack_2->SetBinContent(4,13.02383);
   hext_stack_2->SetBinContent(5,15.01216);
   hext_stack_2->SetBinContent(6,12.38662);
   hext_stack_2->SetBinContent(7,10.02923);
   hext_stack_2->SetBinContent(8,6.400202);
   hext_stack_2->SetBinContent(9,4.792576);
   hext_stack_2->SetBinContent(10,2.510206);
   hext_stack_2->SetBinContent(11,3.647801);
   hext_stack_2->SetBinContent(12,4.703194);
   hext_stack_2->SetBinContent(13,4.538791);
   hext_stack_2->SetBinContent(14,2.599588);
   hext_stack_2->SetBinContent(15,1.868591);
   hext_stack_2->SetBinContent(16,0.6416141);
   hext_stack_2->SetBinContent(17,0.7309963);
   hext_stack_2->SetBinContent(18,1.37261);
   hext_stack_2->SetBinContent(19,0.973192);
   hext_stack_2->SetBinContent(20,2.096426);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,1.379791);
   hext_stack_2->SetBinContent(23,1.454812);
   hext_stack_2->SetBinContent(25,11.92655);
   hext_stack_2->SetBinError(1,5.563808);
   hext_stack_2->SetBinError(2,2.223009);
   hext_stack_2->SetBinError(3,2.411689);
   hext_stack_2->SetBinError(4,2.397267);
   hext_stack_2->SetBinError(5,2.445169);
   hext_stack_2->SetBinError(6,2.338876);
   hext_stack_2->SetBinError(7,2.130374);
   hext_stack_2->SetBinError(8,1.648403);
   hext_stack_2->SetBinError(9,1.337408);
   hext_stack_2->SetBinError(10,1.057404);
   hext_stack_2->SetBinError(11,1.246589);
   hext_stack_2->SetBinError(12,1.389163);
   hext_stack_2->SetBinError(13,1.345212);
   hext_stack_2->SetBinError(14,0.9884288);
   hext_stack_2->SetBinError(15,0.840497);
   hext_stack_2->SetBinError(16,0.6416141);
   hext_stack_2->SetBinError(17,0.5201503);
   hext_stack_2->SetBinError(18,0.8259691);
   hext_stack_2->SetBinError(19,0.5618727);
   hext_stack_2->SetBinError(20,1.074236);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,0.6935586);
   hext_stack_2->SetBinError(23,0.8615765);
   hext_stack_2->SetBinError(25,2.10716);
   hext_stack_2->SetEntries(503);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,6.523539);
   hdirt_stack_3->SetBinContent(2,1.563791);
   hdirt_stack_3->SetBinContent(3,1.739683);
   hdirt_stack_3->SetBinContent(4,1.573592);
   hdirt_stack_3->SetBinContent(5,2.24419);
   hdirt_stack_3->SetBinContent(6,1.090589);
   hdirt_stack_3->SetBinContent(7,1.365909);
   hdirt_stack_3->SetBinContent(8,0.6143302);
   hdirt_stack_3->SetBinContent(9,0.5758626);
   hdirt_stack_3->SetBinContent(10,0.9257255);
   hdirt_stack_3->SetBinContent(11,0.7374783);
   hdirt_stack_3->SetBinContent(12,0.3851607);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.5303817);
   hdirt_stack_3->SetBinContent(15,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.4063629);
   hdirt_stack_3->SetBinContent(23,0.165479);
   hdirt_stack_3->SetBinContent(25,0.3895662);
   hdirt_stack_3->SetBinError(1,1.29796);
   hdirt_stack_3->SetBinError(2,0.6929189);
   hdirt_stack_3->SetBinError(3,0.7333772);
   hdirt_stack_3->SetBinError(4,0.5706);
   hdirt_stack_3->SetBinError(5,0.8258343);
   hdirt_stack_3->SetBinError(6,0.5347264);
   hdirt_stack_3->SetBinError(7,0.9783825);
   hdirt_stack_3->SetBinError(8,0.39051);
   hdirt_stack_3->SetBinError(9,0.3389606);
   hdirt_stack_3->SetBinError(10,0.5393673);
   hdirt_stack_3->SetBinError(11,0.5232628);
   hdirt_stack_3->SetBinError(12,0.2830491);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.4158979);
   hdirt_stack_3->SetBinError(15,0.3381872);
   hdirt_stack_3->SetBinError(17,0.2991412);
   hdirt_stack_3->SetBinError(23,0.165479);
   hdirt_stack_3->SetBinError(25,0.3895662);
   hdirt_stack_3->SetEntries(90);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,83.88127);
   houtFV_stack_4->SetBinContent(2,19.46425);
   houtFV_stack_4->SetBinContent(3,20.39923);
   houtFV_stack_4->SetBinContent(4,17.89243);
   houtFV_stack_4->SetBinContent(5,16.44006);
   houtFV_stack_4->SetBinContent(6,13.74187);
   houtFV_stack_4->SetBinContent(7,14.92022);
   houtFV_stack_4->SetBinContent(8,9.559732);
   houtFV_stack_4->SetBinContent(9,6.16794);
   houtFV_stack_4->SetBinContent(10,3.909558);
   houtFV_stack_4->SetBinContent(11,4.448141);
   houtFV_stack_4->SetBinContent(12,4.612864);
   houtFV_stack_4->SetBinContent(13,4.38837);
   houtFV_stack_4->SetBinContent(14,2.516132);
   houtFV_stack_4->SetBinContent(15,2.214653);
   houtFV_stack_4->SetBinContent(16,2.603191);
   houtFV_stack_4->SetBinContent(17,2.135972);
   houtFV_stack_4->SetBinContent(18,1.073786);
   houtFV_stack_4->SetBinContent(19,1.270501);
   houtFV_stack_4->SetBinContent(20,0.7868615);
   houtFV_stack_4->SetBinContent(21,1.460455);
   houtFV_stack_4->SetBinContent(22,0.7636718);
   houtFV_stack_4->SetBinContent(23,0.5352025);
   houtFV_stack_4->SetBinContent(24,0.6752914);
   houtFV_stack_4->SetBinContent(25,10.20654);
   houtFV_stack_4->SetBinError(1,4.626372);
   houtFV_stack_4->SetBinError(2,2.26319);
   houtFV_stack_4->SetBinError(3,2.295322);
   houtFV_stack_4->SetBinError(4,2.098053);
   houtFV_stack_4->SetBinError(5,2.054152);
   houtFV_stack_4->SetBinError(6,1.854164);
   houtFV_stack_4->SetBinError(7,2.408774);
   houtFV_stack_4->SetBinError(8,1.568516);
   houtFV_stack_4->SetBinError(9,1.220801);
   houtFV_stack_4->SetBinError(10,0.9811382);
   houtFV_stack_4->SetBinError(11,1.057219);
   houtFV_stack_4->SetBinError(12,1.097139);
   houtFV_stack_4->SetBinError(13,1.080344);
   houtFV_stack_4->SetBinError(14,0.8418281);
   houtFV_stack_4->SetBinError(15,0.7608696);
   houtFV_stack_4->SetBinError(16,0.8126566);
   houtFV_stack_4->SetBinError(17,0.7348304);
   houtFV_stack_4->SetBinError(18,0.5557297);
   houtFV_stack_4->SetBinError(19,0.5895188);
   houtFV_stack_4->SetBinError(20,0.3934307);
   houtFV_stack_4->SetBinError(21,0.6193387);
   houtFV_stack_4->SetBinError(22,0.4537029);
   houtFV_stack_4->SetBinError(23,0.3921167);
   houtFV_stack_4->SetBinError(24,0.4166196);
   houtFV_stack_4->SetBinError(25,1.637831);
   houtFV_stack_4->SetEntries(1038);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.760626);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.074322);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.9339901);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.9339901);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.98979);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.311308);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4882542);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.6413721);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8311353);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3674124);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3344153);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3344153);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.336735);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4255744);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2930637);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3113101);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1155977);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.4178359);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.158647);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(29);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,70.83686);
   hNCpi0inFVres_stack_7->SetBinContent(2,17.72172);
   hNCpi0inFVres_stack_7->SetBinContent(3,14.91891);
   hNCpi0inFVres_stack_7->SetBinContent(4,11.58784);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.90596);
   hNCpi0inFVres_stack_7->SetBinContent(6,9.508787);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.687239);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.063454);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.680488);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.722174);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.536579);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.399248);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.79773);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.088604);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.088604);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.130122);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.9889579);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2926179);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.4600178);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.585404);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.432286);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.390768);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.2791681);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.788184);
   hNCpi0inFVres_stack_7->SetBinError(1,2.688853);
   hNCpi0inFVres_stack_7->SetBinError(2,1.365949);
   hNCpi0inFVres_stack_7->SetBinError(3,1.229248);
   hNCpi0inFVres_stack_7->SetBinError(4,1.033565);
   hNCpi0inFVres_stack_7->SetBinError(5,1.077024);
   hNCpi0inFVres_stack_7->SetBinError(6,0.9920946);
   hNCpi0inFVres_stack_7->SetBinError(7,1.019474);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7696201);
   hNCpi0inFVres_stack_7->SetBinError(9,0.605613);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6383103);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4362613);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5685429);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4423897);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3586568);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3586568);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3695249);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3067967);
   hNCpi0inFVres_stack_7->SetBinError(18,0.122146);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1399647);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2501964);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2270916);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2089417);
   hNCpi0inFVres_stack_7->SetBinError(23,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2013529);
   hNCpi0inFVres_stack_7->SetBinError(25,0.5436969);
   hNCpi0inFVres_stack_7->SetEntries(3289);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,19.36782);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.140674);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.893814);
   hNCpi0inFVdis_stack_8->SetBinContent(4,3.486188);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.773566);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.839744);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.021762);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.45064);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.004072);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.074154);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.710622);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.334968);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.4746361);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1673999);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7249039);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.43397);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6473918);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7429015);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6429178);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4862568);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3967001);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4703213);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3901881);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3271594);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3197389);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2699026);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2051824);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2806257);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.06834073);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1954681);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2578571);
   hNCpi0inFVdis_stack_8->SetEntries(856);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,95.70816);
   hCCpi0inFV_stack_10->SetBinContent(2,17.46064);
   hCCpi0inFV_stack_10->SetBinContent(3,15.27218);
   hCCpi0inFV_stack_10->SetBinContent(4,12.59041);
   hCCpi0inFV_stack_10->SetBinContent(5,11.89692);
   hCCpi0inFV_stack_10->SetBinContent(6,11.98631);
   hCCpi0inFV_stack_10->SetBinContent(7,11.61096);
   hCCpi0inFV_stack_10->SetBinContent(8,10.31025);
   hCCpi0inFV_stack_10->SetBinContent(9,5.286565);
   hCCpi0inFV_stack_10->SetBinContent(10,5.019286);
   hCCpi0inFV_stack_10->SetBinContent(11,4.979962);
   hCCpi0inFV_stack_10->SetBinContent(12,4.059202);
   hCCpi0inFV_stack_10->SetBinContent(13,2.682774);
   hCCpi0inFV_stack_10->SetBinContent(14,2.929362);
   hCCpi0inFV_stack_10->SetBinContent(15,2.369832);
   hCCpi0inFV_stack_10->SetBinContent(16,1.373626);
   hCCpi0inFV_stack_10->SetBinContent(17,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(18,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(19,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(20,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(21,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(22,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(23,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(25,6.530013);
   hCCpi0inFV_stack_10->SetBinError(1,4.890089);
   hCCpi0inFV_stack_10->SetBinError(2,2.142419);
   hCCpi0inFV_stack_10->SetBinError(3,1.982205);
   hCCpi0inFV_stack_10->SetBinError(4,1.792303);
   hCCpi0inFV_stack_10->SetBinError(5,1.766873);
   hCCpi0inFV_stack_10->SetBinError(6,1.793281);
   hCCpi0inFV_stack_10->SetBinError(7,1.737968);
   hCCpi0inFV_stack_10->SetBinError(8,1.630945);
   hCCpi0inFV_stack_10->SetBinError(9,1.110635);
   hCCpi0inFV_stack_10->SetBinError(10,1.134416);
   hCCpi0inFV_stack_10->SetBinError(11,1.127006);
   hCCpi0inFV_stack_10->SetBinError(12,0.9513779);
   hCCpi0inFV_stack_10->SetBinError(13,0.8783089);
   hCCpi0inFV_stack_10->SetBinError(14,0.8777653);
   hCCpi0inFV_stack_10->SetBinError(15,0.8537176);
   hCCpi0inFV_stack_10->SetBinError(16,0.519186);
   hCCpi0inFV_stack_10->SetBinError(17,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(18,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(19,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(20,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(21,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(22,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(23,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(25,1.276894);
   hCCpi0inFV_stack_10->SetEntries(957);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,19.9446);
   hNCinFV_stack_11->SetBinContent(2,4.639785);
   hNCinFV_stack_11->SetBinContent(3,4.733375);
   hNCinFV_stack_11->SetBinContent(4,3.907867);
   hNCinFV_stack_11->SetBinContent(5,1.949166);
   hNCinFV_stack_11->SetBinContent(6,0.785171);
   hNCinFV_stack_11->SetBinContent(7,2.822855);
   hNCinFV_stack_11->SetBinContent(8,2.484368);
   hNCinFV_stack_11->SetBinContent(9,2.050601);
   hNCinFV_stack_11->SetBinContent(10,1.072095);
   hNCinFV_stack_11->SetBinContent(11,0.5884556);
   hNCinFV_stack_11->SetBinContent(12,0.7336084);
   hNCinFV_stack_11->SetBinContent(13,0.5352025);
   hNCinFV_stack_11->SetBinContent(14,0.3917402);
   hNCinFV_stack_11->SetBinContent(15,0.785171);
   hNCinFV_stack_11->SetBinContent(16,0.3401776);
   hNCinFV_stack_11->SetBinContent(17,0.536893);
   hNCinFV_stack_11->SetBinContent(19,0.1967154);
   hNCinFV_stack_11->SetBinContent(20,0.7336084);
   hNCinFV_stack_11->SetBinContent(21,0.2436663);
   hNCinFV_stack_11->SetBinContent(25,1.072095);
   hNCinFV_stack_11->SetBinError(1,2.211759);
   hNCinFV_stack_11->SetBinError(2,1.074441);
   hNCinFV_stack_11->SetBinError(3,1.12743);
   hNCinFV_stack_11->SetBinError(4,0.9808007);
   hNCinFV_stack_11->SetBinError(5,0.7604681);
   hNCinFV_stack_11->SetBinError(6,0.3925882);
   hNCinFV_stack_11->SetBinError(7,0.9203944);
   hNCinFV_stack_11->SetBinError(8,0.8556093);
   hNCinFV_stack_11->SetBinError(9,0.7068742);
   hNCinFV_stack_11->SetBinError(10,0.5551335);
   hNCinFV_stack_11->SetBinError(11,0.3397478);
   hNCinFV_stack_11->SetBinError(12,0.4394482);
   hNCinFV_stack_11->SetBinError(13,0.3921167);
   hNCinFV_stack_11->SetBinError(14,0.2770047);
   hNCinFV_stack_11->SetBinError(15,0.3925882);
   hNCinFV_stack_11->SetBinError(16,0.3401776);
   hNCinFV_stack_11->SetBinError(17,0.3929602);
   hNCinFV_stack_11->SetBinError(19,0.1967154);
   hNCinFV_stack_11->SetBinError(20,0.4394482);
   hNCinFV_stack_11->SetBinError(21,0.2022408);
   hNCinFV_stack_11->SetBinError(25,0.5551335);
   hNCinFV_stack_11->SetEntries(213);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,47.79119);
   hnumuCCinFV_stack_12->SetBinContent(2,14.12719);
   hnumuCCinFV_stack_12->SetBinContent(3,8.803601);
   hnumuCCinFV_stack_12->SetBinContent(4,12.47898);
   hnumuCCinFV_stack_12->SetBinContent(5,7.455688);
   hnumuCCinFV_stack_12->SetBinContent(6,4.981198);
   hnumuCCinFV_stack_12->SetBinContent(7,3.963343);
   hnumuCCinFV_stack_12->SetBinContent(8,2.899752);
   hnumuCCinFV_stack_12->SetBinContent(9,3.953981);
   hnumuCCinFV_stack_12->SetBinContent(10,3.690372);
   hnumuCCinFV_stack_12->SetBinContent(11,1.503779);
   hnumuCCinFV_stack_12->SetBinContent(12,1.210454);
   hnumuCCinFV_stack_12->SetBinContent(13,1.475962);
   hnumuCCinFV_stack_12->SetBinContent(14,0.8280425);
   hnumuCCinFV_stack_12->SetBinContent(15,1.125349);
   hnumuCCinFV_stack_12->SetBinContent(17,0.940885);
   hnumuCCinFV_stack_12->SetBinContent(18,0.7954943);
   hnumuCCinFV_stack_12->SetBinContent(19,0.5689341);
   hnumuCCinFV_stack_12->SetBinContent(20,0.7896006);
   hnumuCCinFV_stack_12->SetBinContent(21,1.174142);
   hnumuCCinFV_stack_12->SetBinContent(22,3.420469e-07);
   hnumuCCinFV_stack_12->SetBinContent(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,6.956992);
   hnumuCCinFV_stack_12->SetBinError(1,4.303906);
   hnumuCCinFV_stack_12->SetBinError(2,2.047775);
   hnumuCCinFV_stack_12->SetBinError(3,1.535206);
   hnumuCCinFV_stack_12->SetBinError(4,2.553361);
   hnumuCCinFV_stack_12->SetBinError(5,1.416352);
   hnumuCCinFV_stack_12->SetBinError(6,1.186187);
   hnumuCCinFV_stack_12->SetBinError(7,1.023189);
   hnumuCCinFV_stack_12->SetBinError(8,0.9247184);
   hnumuCCinFV_stack_12->SetBinError(9,1.187168);
   hnumuCCinFV_stack_12->SetBinError(10,1.022332);
   hnumuCCinFV_stack_12->SetBinError(11,0.6343155);
   hnumuCCinFV_stack_12->SetBinError(12,0.495041);
   hnumuCCinFV_stack_12->SetBinError(13,0.675988);
   hnumuCCinFV_stack_12->SetBinError(14,0.5037358);
   hnumuCCinFV_stack_12->SetBinError(15,0.5194673);
   hnumuCCinFV_stack_12->SetBinError(17,0.5978896);
   hnumuCCinFV_stack_12->SetBinError(18,0.4704173);
   hnumuCCinFV_stack_12->SetBinError(19,0.4099394);
   hnumuCCinFV_stack_12->SetBinError(20,0.4655379);
   hnumuCCinFV_stack_12->SetBinError(21,0.53878);
   hnumuCCinFV_stack_12->SetBinError(22,3.420469e-07);
   hnumuCCinFV_stack_12->SetBinError(23,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,1.680637);
   hnumuCCinFV_stack_12->SetEntries(501);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,5.431046);
   hnueCCinFV_stack_13->SetBinContent(7,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(13,1.157431);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,1.342929);
   hnueCCinFV_stack_13->SetBinError(7,0.3025491);
   hnueCCinFV_stack_13->SetBinError(13,1.157431);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetEntries(24);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__23->SetBinContent(1,439.3809);
   hmcerror__23->SetBinContent(2,96.2598);
   hmcerror__23->SetBinContent(3,87.79565);
   hmcerror__23->SetBinContent(4,80.85585);
   hmcerror__23->SetBinContent(5,71.3935);
   hmcerror__23->SetBinContent(6,59.70213);
   hmcerror__23->SetBinContent(7,58.00617);
   hmcerror__23->SetBinContent(8,40.36937);
   hmcerror__23->SetBinContent(9,27.98753);
   hmcerror__23->SetBinContent(10,24.31847);
   hmcerror__23->SetBinContent(11,20.58318);
   hmcerror__23->SetBinContent(12,20.30067);
   hmcerror__23->SetBinContent(13,18.36544);
   hmcerror__23->SetBinContent(14,12.12254);
   hmcerror__23->SetBinContent(15,10.74991);
   hmcerror__23->SetBinContent(16,6.760083);
   hmcerror__23->SetBinContent(17,6.702219);
   hmcerror__23->SetBinContent(18,4.908236);
   hmcerror__23->SetBinContent(19,4.603429);
   hmcerror__23->SetBinContent(20,5.724261);
   hmcerror__23->SetBinContent(21,5.010199);
   hmcerror__23->SetBinContent(22,3.099024);
   hmcerror__23->SetBinContent(23,3.710994);
   hmcerror__23->SetBinContent(24,1.199435);
   hmcerror__23->SetBinContent(25,44.34896);
   hmcerror__23->SetBinError(1,87.63586);
   hmcerror__23->SetBinError(2,29.06422);
   hmcerror__23->SetBinError(3,28.74658);
   hmcerror__23->SetBinError(4,24.2811);
   hmcerror__23->SetBinError(5,19.95223);
   hmcerror__23->SetBinError(6,25.57279);
   hmcerror__23->SetBinError(7,23.39019);
   hmcerror__23->SetBinError(8,16.59884);
   hmcerror__23->SetBinError(9,11.92655);
   hmcerror__23->SetBinError(10,13.15884);
   hmcerror__23->SetBinError(11,11.51065);
   hmcerror__23->SetBinError(12,11.5264);
   hmcerror__23->SetBinError(13,10.33099);
   hmcerror__23->SetBinError(14,8.006504);
   hmcerror__23->SetBinError(15,7.911757);
   hmcerror__23->SetBinError(16,5.4108);
   hmcerror__23->SetBinError(17,6.855128);
   hmcerror__23->SetBinError(18,4.673882);
   hmcerror__23->SetBinError(19,5.320852);
   hmcerror__23->SetBinError(20,5.4279);
   hmcerror__23->SetBinError(21,6.135331);
   hmcerror__23->SetBinError(22,3.103535);
   hmcerror__23->SetBinError(23,5.580508);
   hmcerror__23->SetBinError(24,2.224108);
   hmcerror__23->SetBinError(25,16.62242);
   hmcerror__23->SetEntries(1133.738);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3029[24] = {
   436,
   93,
   90,
   48,
   42,
   64,
   55,
   34,
   23,
   26,
   19,
   14,
   18,
   11,
   6,
   6,
   6,
   4,
   5,
   6,
   3,
   5,
   7,
   5};
   Double_t _felx3029[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3029[24] = {
   20.88061,
   9.7658,
   9.6093,
   7.0604,
   6.6155,
   8.1273,
   7.546,
   5.9703,
   4.9457,
   5.2453,
   4.5151,
   3.9102,
   4.4008,
   3.4975,
   2.67925,
   2.67925,
   2.67925,
   2.29683,
   2.48995,
   2.67925,
   2.143368,
   2.48995,
   2.85954,
   2.48995};
   Double_t _fehx3029[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3029[24] = {
   20.88061,
   9.564,
   9.4079,
   6.8561,
   6.4104,
   7.9246,
   7.3425,
   5.7635,
   4.7346,
   5.0358,
   4.3011,
   3.6898,
   4.1858,
   3.27,
   2.41858,
   2.41858,
   2.41858,
   1.98186,
   2.21064,
   2.41858,
   1.72422,
   2.21064,
   2.61053,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,99);
   Graph_Graph3029->SetMinimum(0.7709688);
   Graph_Graph3029->SetMaximum(502.483);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1026.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 35.9","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.5","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.0","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 235.9","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.4","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  171.3","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.1","F");

   ci = 1532;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 219.4","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 49.5","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 120.8","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.9","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3030[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3030[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3030[24] = {
   0.1994531,
   0.3019352,
   0.327426,
   0.3003011,
   0.2794684,
   0.4283397,
   0.4032362,
   0.4111741,
   0.426138,
   0.5411046,
   0.5592258,
   0.5677842,
   0.5625234,
   0.6604642,
   0.7359835,
   0.8004043,
   1.022815,
   0.952253,
   1.155845,
   0.9482272,
   1.224568,
   1.001456,
   1.503777,
   1.854297};
   Double_t _fehx3030[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3030[24] = {
   0.1994531,
   0.3019352,
   0.327426,
   0.3003011,
   0.2794684,
   0.4283397,
   0.4032362,
   0.4111741,
   0.426138,
   0.5411046,
   0.5592258,
   0.5677842,
   0.5625234,
   0.6604642,
   0.7359835,
   0.8004043,
   1.022815,
   0.952253,
   1.155845,
   0.9482272,
   1.224568,
   1.001456,
   1.503777,
   1.854297};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,99);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3031[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3031[24] = {
   0.176575,
   0.1930067,
   0.1877102,
   0.1848705,
   0.1709186,
   0.1870479,
   0.1818669,
   0.2114882,
   0.2034575,
   0.2077455,
   0.2258895,
   0.1848249,
   0.3186669,
   0.2638943,
   0.2364088,
   0.2982145,
   0.2865851,
   0.3444019,
   0.3296292,
   0.470691,
   0.367803,
   0.3753817,
   0.3489668,
   0.6716442};
   Double_t _fehx3031[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3031[24] = {
   0.176575,
   0.1930067,
   0.1877102,
   0.1848705,
   0.1709186,
   0.1870479,
   0.1818669,
   0.2114882,
   0.2034575,
   0.2077455,
   0.2258895,
   0.1848249,
   0.3186669,
   0.2638943,
   0.2364088,
   0.2982145,
   0.2865851,
   0.3444019,
   0.3296292,
   0.470691,
   0.367803,
   0.3753817,
   0.3489668,
   0.6716442};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,99);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3032[24] = {
   0.9923054,
   0.9661354,
   1.025108,
   0.5936491,
   0.5882888,
   1.071988,
   0.948175,
   0.8422226,
   0.8217947,
   1.069146,
   0.9230837,
   0.6896324,
   0.9801019,
   0.9074005,
   0.5581442,
   0.8875631,
   0.8952258,
   0.8149568,
   1.086147,
   1.04817,
   0.5987787,
   1.613411,
   1.886287,
   4.168631};
   Double_t _felx3032[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3032[24] = {
   0.04752281,
   0.1014525,
   0.1094507,
   0.08732083,
   0.0926625,
   0.1361308,
   0.1300896,
   0.1478918,
   0.1767109,
   0.215692,
   0.2193587,
   0.1926143,
   0.239624,
   0.2885121,
   0.2492346,
   0.3963339,
   0.3997556,
   0.4679543,
   0.5408903,
   0.4680517,
   0.427801,
   0.8034627,
   0.770559,
   2.075936};
   Double_t _fehx3032[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3032[24] = {
   0.04752281,
   0.09935612,
   0.1071568,
   0.08479411,
   0.08978969,
   0.1327356,
   0.1265814,
   0.1427691,
   0.1691682,
   0.2070772,
   0.2089619,
   0.1817575,
   0.2279173,
   0.2697454,
   0.2249861,
   0.3577737,
   0.3608625,
   0.4037826,
   0.480216,
   0.4225139,
   0.344142,
   0.7133343,
   0.7034584,
   1.843068};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,99);
   Graph_Graph3032->SetMinimum(0.1538799);
   Graph_Graph3032->SetMaximum(6.595771);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_high_all",24,0,90);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(0,1,90,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
