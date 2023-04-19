#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Fri Feb 17 21:59:22 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",112,135,1200,900);
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
   pad1->Range(-4.119231,-0.98,3.957692,108.3674);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmc__22->SetBinContent(1,43.79437);
   hmc__22->SetBinContent(2,39.68539);
   hmc__22->SetBinContent(3,44.40012);
   hmc__22->SetBinContent(4,41.27649);
   hmc__22->SetBinContent(5,34.35336);
   hmc__22->SetBinContent(6,39.26854);
   hmc__22->SetBinContent(7,41.43593);
   hmc__22->SetBinContent(8,33.94617);
   hmc__22->SetBinContent(9,36.28818);
   hmc__22->SetBinContent(10,35.38543);
   hmc__22->SetBinContent(11,39.96781);
   hmc__22->SetBinContent(12,38.59538);
   hmc__22->SetBinContent(13,32.84642);
   hmc__22->SetBinContent(14,39.35728);
   hmc__22->SetBinContent(15,48.40175);
   hmc__22->SetBinContent(16,39.86987);
   hmc__22->SetBinContent(17,41.49229);
   hmc__22->SetBinContent(18,45.64203);
   hmc__22->SetBinContent(19,35.86615);
   hmc__22->SetBinContent(20,42.06645);
   hmc__22->SetBinContent(21,41.72124);
   hmc__22->SetBinContent(22,43.07578);
   hmc__22->SetBinContent(23,43.01037);
   hmc__22->SetBinContent(24,42.25105);
   hmc__22->SetBinError(1,16.38592);
   hmc__22->SetBinError(2,24.5516);
   hmc__22->SetBinError(3,21.48802);
   hmc__22->SetBinError(4,16.05097);
   hmc__22->SetBinError(5,13.24885);
   hmc__22->SetBinError(6,16.82316);
   hmc__22->SetBinError(7,18.35336);
   hmc__22->SetBinError(8,13.04103);
   hmc__22->SetBinError(9,15.71429);
   hmc__22->SetBinError(10,16.0365);
   hmc__22->SetBinError(11,22.47771);
   hmc__22->SetBinError(12,20.20225);
   hmc__22->SetBinError(13,15.73494);
   hmc__22->SetBinError(14,17.36991);
   hmc__22->SetBinError(15,21.45208);
   hmc__22->SetBinError(16,13.83666);
   hmc__22->SetBinError(17,13.71636);
   hmc__22->SetBinError(18,17.58538);
   hmc__22->SetBinError(19,15.14099);
   hmc__22->SetBinError(20,14.95435);
   hmc__22->SetBinError(21,16.64772);
   hmc__22->SetBinError(22,18.78502);
   hmc__22->SetBinError(23,21.63042);
   hmc__22->SetBinError(24,26.15012);
   hmc__22->SetBinError(25,0.3895343);
   hmc__22->SetMinimum(-0.98);
   hmc__22->SetMaximum(102.9);
   hmc__22->SetEntries(948.2139);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,-3.15,3.15);
   hs8_stack_8->SetMinimum(-7.299257e-09);
   hs8_stack_8->SetMaximum(50.82184);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.517089);
   hbadmatch_stack_1->SetBinContent(2,1.072095);
   hbadmatch_stack_1->SetBinContent(3,1.123521);
   hbadmatch_stack_1->SetBinContent(4,1.949166);
   hbadmatch_stack_1->SetBinContent(5,2.213408);
   hbadmatch_stack_1->SetBinContent(6,1.475826);
   hbadmatch_stack_1->SetBinContent(7,2.100812);
   hbadmatch_stack_1->SetBinContent(8,0.1967154);
   hbadmatch_stack_1->SetBinContent(9,1.759214);
   hbadmatch_stack_1->SetBinContent(10,0.536893);
   hbadmatch_stack_1->SetBinContent(11,1.607298);
   hbadmatch_stack_1->SetBinContent(12,1.267963);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinContent(14,1.999038);
   hbadmatch_stack_1->SetBinContent(15,1.95259);
   hbadmatch_stack_1->SetBinContent(16,1.847869);
   hbadmatch_stack_1->SetBinContent(17,1.479003);
   hbadmatch_stack_1->SetBinContent(18,1.469268);
   hbadmatch_stack_1->SetBinContent(19,0.5368956);
   hbadmatch_stack_1->SetBinContent(20,0.9788727);
   hbadmatch_stack_1->SetBinContent(21,1.751439);
   hbadmatch_stack_1->SetBinContent(22,1.450212);
   hbadmatch_stack_1->SetBinContent(23,0.5867651);
   hbadmatch_stack_1->SetBinContent(24,1.526796);
   hbadmatch_stack_1->SetBinError(1,0.5887087);
   hbadmatch_stack_1->SetBinError(2,0.5551335);
   hbadmatch_stack_1->SetBinError(3,0.5880526);
   hbadmatch_stack_1->SetBinError(4,0.7604681);
   hbadmatch_stack_1->SetBinError(5,0.7672007);
   hbadmatch_stack_1->SetBinError(6,0.6859091);
   hbadmatch_stack_1->SetBinError(7,0.8942309);
   hbadmatch_stack_1->SetBinError(8,0.1967154);
   hbadmatch_stack_1->SetBinError(9,0.6365553);
   hbadmatch_stack_1->SetBinError(10,0.3929602);
   hbadmatch_stack_1->SetBinError(11,0.6796534);
   hbadmatch_stack_1->SetBinError(12,1.089159);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetBinError(14,0.7339349);
   hbadmatch_stack_1->SetBinError(15,0.7090643);
   hbadmatch_stack_1->SetBinError(16,0.7207721);
   hbadmatch_stack_1->SetBinError(17,0.6877766);
   hbadmatch_stack_1->SetBinError(18,0.6560209);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.5034274);
   hbadmatch_stack_1->SetBinError(21,0.7614461);
   hbadmatch_stack_1->SetBinError(22,0.6634241);
   hbadmatch_stack_1->SetBinError(23,0.3387718);
   hbadmatch_stack_1->SetBinError(24,0.6895464);
   hbadmatch_stack_1->SetEntries(124);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,6.407382);
   hext_stack_2->SetBinContent(2,4.296596);
   hext_stack_2->SetBinContent(3,8.485039);
   hext_stack_2->SetBinContent(4,8.738824);
   hext_stack_2->SetBinContent(5,6.32959);
   hext_stack_2->SetBinContent(6,10.35363);
   hext_stack_2->SetBinContent(7,12.21945);
   hext_stack_2->SetBinContent(8,6.090166);
   hext_stack_2->SetBinContent(9,6.132056);
   hext_stack_2->SetBinContent(10,6.000783);
   hext_stack_2->SetBinContent(11,6.863051);
   hext_stack_2->SetBinContent(12,7.112428);
   hext_stack_2->SetBinContent(13,3.408376);
   hext_stack_2->SetBinContent(14,5.42701);
   hext_stack_2->SetBinContent(15,11.89505);
   hext_stack_2->SetBinContent(16,11.05149);
   hext_stack_2->SetBinContent(17,10.21241);
   hext_stack_2->SetBinContent(18,13.90046);
   hext_stack_2->SetBinContent(19,10.6146);
   hext_stack_2->SetBinContent(20,9.980162);
   hext_stack_2->SetBinContent(21,9.794217);
   hext_stack_2->SetBinContent(22,12.25252);
   hext_stack_2->SetBinContent(23,6.318);
   hext_stack_2->SetBinContent(24,5.236656);
   hext_stack_2->SetBinError(1,1.5862);
   hext_stack_2->SetBinError(2,1.328326);
   hext_stack_2->SetBinError(3,1.984261);
   hext_stack_2->SetBinError(4,1.978979);
   hext_stack_2->SetBinError(5,1.609678);
   hext_stack_2->SetBinError(6,2.154931);
   hext_stack_2->SetBinError(7,2.384636);
   hext_stack_2->SetBinError(8,1.486471);
   hext_stack_2->SetBinError(9,1.772165);
   hext_stack_2->SetBinError(10,1.533202);
   hext_stack_2->SetBinError(11,1.846923);
   hext_stack_2->SetBinError(12,1.804181);
   hext_stack_2->SetBinError(13,1.082827);
   hext_stack_2->SetBinError(14,1.549687);
   hext_stack_2->SetBinError(15,2.362468);
   hext_stack_2->SetBinError(16,2.363042);
   hext_stack_2->SetBinError(17,2.095565);
   hext_stack_2->SetBinError(18,2.530791);
   hext_stack_2->SetBinError(19,2.102758);
   hext_stack_2->SetBinError(20,1.951595);
   hext_stack_2->SetBinError(21,2.07175);
   hext_stack_2->SetBinError(22,2.519368);
   hext_stack_2->SetBinError(23,1.630074);
   hext_stack_2->SetBinError(24,1.658262);
   hext_stack_2->SetEntries(479);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.5232321);
   hdirt_stack_3->SetBinContent(2,1.570363);
   hdirt_stack_3->SetBinContent(3,0.9561222);
   hdirt_stack_3->SetBinContent(4,0.3381872);
   hdirt_stack_3->SetBinContent(5,0.9525174);
   hdirt_stack_3->SetBinContent(6,0.7875552);
   hdirt_stack_3->SetBinContent(9,1.015534);
   hdirt_stack_3->SetBinContent(11,0.5758626);
   hdirt_stack_3->SetBinContent(12,0.9509758);
   hdirt_stack_3->SetBinContent(13,0.6101288);
   hdirt_stack_3->SetBinContent(14,0.5570828);
   hdirt_stack_3->SetBinContent(15,0.8875259);
   hdirt_stack_3->SetBinContent(17,0.6763744);
   hdirt_stack_3->SetBinContent(18,1.551094);
   hdirt_stack_3->SetBinContent(19,1.50398);
   hdirt_stack_3->SetBinContent(20,0.7465333);
   hdirt_stack_3->SetBinContent(21,1.636612);
   hdirt_stack_3->SetBinContent(22,0.9253412);
   hdirt_stack_3->SetBinContent(23,1.405285);
   hdirt_stack_3->SetBinContent(24,1.07489);
   hdirt_stack_3->SetBinError(1,0.3149294);
   hdirt_stack_3->SetBinError(2,0.6883668);
   hdirt_stack_3->SetBinError(3,0.5623509);
   hdirt_stack_3->SetBinError(4,0.3381872);
   hdirt_stack_3->SetBinError(5,0.5165933);
   hdirt_stack_3->SetBinError(6,0.4670818);
   hdirt_stack_3->SetBinError(9,0.4823671);
   hdirt_stack_3->SetBinError(11,0.3389606);
   hdirt_stack_3->SetBinError(12,0.5269156);
   hdirt_stack_3->SetBinError(13,0.3151008);
   hdirt_stack_3->SetBinError(14,0.4028472);
   hdirt_stack_3->SetBinError(15,0.4867943);
   hdirt_stack_3->SetBinError(17,0.4782689);
   hdirt_stack_3->SetBinError(18,0.6613028);
   hdirt_stack_3->SetBinError(19,0.9880769);
   hdirt_stack_3->SetBinError(20,0.4676974);
   hdirt_stack_3->SetBinError(21,0.6472511);
   hdirt_stack_3->SetBinError(22,0.4634062);
   hdirt_stack_3->SetBinError(23,0.6821521);
   hdirt_stack_3->SetBinError(24,0.5051084);
   hdirt_stack_3->SetEntries(82);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,9.679062);
   houtFV_stack_4->SetBinContent(2,8.441448);
   houtFV_stack_4->SetBinContent(3,7.851115);
   houtFV_stack_4->SetBinContent(4,10.29448);
   houtFV_stack_4->SetBinContent(5,8.861993);
   houtFV_stack_4->SetBinContent(6,7.075019);
   houtFV_stack_4->SetBinContent(7,10.74485);
   houtFV_stack_4->SetBinContent(8,7.366637);
   houtFV_stack_4->SetBinContent(9,6.218535);
   houtFV_stack_4->SetBinContent(10,8.915498);
   houtFV_stack_4->SetBinContent(11,9.127108);
   houtFV_stack_4->SetBinContent(12,8.91021);
   houtFV_stack_4->SetBinContent(13,8.501161);
   houtFV_stack_4->SetBinContent(14,8.709439);
   houtFV_stack_4->SetBinContent(15,8.461737);
   houtFV_stack_4->SetBinContent(16,8.043593);
   houtFV_stack_4->SetBinContent(17,8.260927);
   houtFV_stack_4->SetBinContent(18,5.606433);
   houtFV_stack_4->SetBinContent(19,4.984638);
   houtFV_stack_4->SetBinContent(20,10.11189);
   houtFV_stack_4->SetBinContent(21,8.622057);
   houtFV_stack_4->SetBinContent(22,9.007202);
   houtFV_stack_4->SetBinContent(23,10.89831);
   houtFV_stack_4->SetBinContent(24,9.018784);
   houtFV_stack_4->SetBinError(1,1.570517);
   houtFV_stack_4->SetBinError(2,1.392366);
   houtFV_stack_4->SetBinError(3,1.414435);
   houtFV_stack_4->SetBinError(4,1.633496);
   houtFV_stack_4->SetBinError(5,1.464124);
   houtFV_stack_4->SetBinError(6,1.37643);
   houtFV_stack_4->SetBinError(7,1.67919);
   houtFV_stack_4->SetBinError(8,1.350436);
   houtFV_stack_4->SetBinError(9,1.49839);
   houtFV_stack_4->SetBinError(10,1.519304);
   houtFV_stack_4->SetBinError(11,1.577553);
   houtFV_stack_4->SetBinError(12,1.547074);
   houtFV_stack_4->SetBinError(13,1.468798);
   houtFV_stack_4->SetBinError(14,1.576087);
   houtFV_stack_4->SetBinError(15,1.481646);
   houtFV_stack_4->SetBinError(16,1.427345);
   houtFV_stack_4->SetBinError(17,1.450109);
   houtFV_stack_4->SetBinError(18,1.09674);
   houtFV_stack_4->SetBinError(19,1.622401);
   houtFV_stack_4->SetBinError(20,1.575755);
   houtFV_stack_4->SetBinError(21,1.444501);
   houtFV_stack_4->SetBinError(22,1.54315);
   houtFV_stack_4->SetBinError(23,1.645131);
   houtFV_stack_4->SetBinError(24,1.496625);
   houtFV_stack_4->SetEntries(862);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.98979);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.031476);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.864572);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.9205402);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.6691039);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8079399);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5566719);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.767254);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.336735);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2387875);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3162714);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.392509);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3211561);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3707519);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2548204);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2501964);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2869115);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2062853);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3060563);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(22);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,6.381971);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.41404);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.742767);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.242896);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.767923);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.365449);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.169654);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.824228);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.293455);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.188672);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.45115);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.744599);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.770331);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.116677);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.41204);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.175142);
   hNCpi0inFVres_stack_7->SetBinContent(17,4.265723);
   hNCpi0inFVres_stack_7->SetBinContent(18,5.788118);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.746264);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.7167);
   hNCpi0inFVres_stack_7->SetBinContent(21,6.318386);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.37782);
   hNCpi0inFVres_stack_7->SetBinContent(23,7.265658);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.302936);
   hNCpi0inFVres_stack_7->SetBinError(1,0.7099035);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8634817);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7374674);
   hNCpi0inFVres_stack_7->SetBinError(4,0.744907);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6407946);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6888963);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7179003);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7144588);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6038426);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7762501);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7622096);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7843146);
   hNCpi0inFVres_stack_7->SetBinError(13,0.692184);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7018633);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8009685);
   hNCpi0inFVres_stack_7->SetBinError(16,0.764674);
   hNCpi0inFVres_stack_7->SetBinError(17,0.629767);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8527096);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8085059);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7838182);
   hNCpi0inFVres_stack_7->SetBinError(21,0.880149);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5945321);
   hNCpi0inFVres_stack_7->SetBinError(23,0.9100075);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8344072);
   hNCpi0inFVres_stack_7->SetEntries(2539);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.533508);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.367108);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.366772);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.421908);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.394176);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.8228858);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.336544);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.32459);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.184258);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.435694);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.449808);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.161598);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.046254);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.589308);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.337376);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.05904);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.134531);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7104537);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.561576);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.8786857);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.994694);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.649684);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.533508);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.129122);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3678529);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4273996);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3422756);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3635961);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4051946);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2499367);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.302216);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3503303);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3155521);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4148453);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.364665);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5390844);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3185193);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.369963);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3325669);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2988711);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5559674);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2002212);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4109174);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2530319);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4895814);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.586293);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3678529);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2907294);
   hNCpi0inFVdis_stack_8->SetEntries(652);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,10.52495);
   hCCpi0inFV_stack_10->SetBinContent(2,7.78385);
   hCCpi0inFV_stack_10->SetBinContent(3,11.47688);
   hCCpi0inFV_stack_10->SetBinContent(4,8.102659);
   hCCpi0inFV_stack_10->SetBinContent(5,4.733375);
   hCCpi0inFV_stack_10->SetBinContent(6,7.314728);
   hCCpi0inFV_stack_10->SetBinContent(7,5.034906);
   hCCpi0inFV_stack_10->SetBinContent(8,8.009811);
   hCCpi0inFV_stack_10->SetBinContent(9,9.607737);
   hCCpi0inFV_stack_10->SetBinContent(10,6.978745);
   hCCpi0inFV_stack_10->SetBinContent(11,8.547668);
   hCCpi0inFV_stack_10->SetBinContent(12,5.935104);
   hCCpi0inFV_stack_10->SetBinContent(13,8.145716);
   hCCpi0inFV_stack_10->SetBinContent(14,6.885411);
   hCCpi0inFV_stack_10->SetBinContent(15,8.160983);
   hCCpi0inFV_stack_10->SetBinContent(16,7.039016);
   hCCpi0inFV_stack_10->SetBinContent(17,8.29153);
   hCCpi0inFV_stack_10->SetBinContent(18,8.943381);
   hCCpi0inFV_stack_10->SetBinContent(19,6.537388);
   hCCpi0inFV_stack_10->SetBinContent(20,8.092949);
   hCCpi0inFV_stack_10->SetBinContent(21,7.217052);
   hCCpi0inFV_stack_10->SetBinContent(22,7.430757);
   hCCpi0inFV_stack_10->SetBinContent(23,6.837229);
   hCCpi0inFV_stack_10->SetBinContent(24,9.356237);
   hCCpi0inFV_stack_10->SetBinError(1,1.704544);
   hCCpi0inFV_stack_10->SetBinError(2,1.331258);
   hCCpi0inFV_stack_10->SetBinError(3,1.758903);
   hCCpi0inFV_stack_10->SetBinError(4,1.441523);
   hCCpi0inFV_stack_10->SetBinError(5,1.12743);
   hCCpi0inFV_stack_10->SetBinError(6,1.283295);
   hCCpi0inFV_stack_10->SetBinError(7,1.11017);
   hCCpi0inFV_stack_10->SetBinError(8,1.451059);
   hCCpi0inFV_stack_10->SetBinError(9,1.574934);
   hCCpi0inFV_stack_10->SetBinError(10,1.34802);
   hCCpi0inFV_stack_10->SetBinError(11,1.40655);
   hCCpi0inFV_stack_10->SetBinError(12,1.206441);
   hCCpi0inFV_stack_10->SetBinError(13,1.39969);
   hCCpi0inFV_stack_10->SetBinError(14,1.300818);
   hCCpi0inFV_stack_10->SetBinError(15,1.428862);
   hCCpi0inFV_stack_10->SetBinError(16,1.331588);
   hCCpi0inFV_stack_10->SetBinError(17,1.520526);
   hCCpi0inFV_stack_10->SetBinError(18,1.546957);
   hCCpi0inFV_stack_10->SetBinError(19,1.331061);
   hCCpi0inFV_stack_10->SetBinError(20,1.487693);
   hCCpi0inFV_stack_10->SetBinError(21,1.324092);
   hCCpi0inFV_stack_10->SetBinError(22,1.360095);
   hCCpi0inFV_stack_10->SetBinError(23,1.316223);
   hCCpi0inFV_stack_10->SetBinError(24,1.532995);
   hCCpi0inFV_stack_10->SetEntries(790);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.04722);
   hNCinFV_stack_11->SetBinContent(2,3.072824);
   hNCinFV_stack_11->SetBinContent(3,1.804013);
   hNCinFV_stack_11->SetBinContent(4,1.518779);
   hNCinFV_stack_11->SetBinContent(5,2.052291);
   hNCinFV_stack_11->SetBinContent(6,1.805704);
   hNCinFV_stack_11->SetBinContent(7,0.7319179);
   hNCinFV_stack_11->SetBinContent(8,0.7319179);
   hNCinFV_stack_11->SetBinContent(9,1.608988);
   hNCinFV_stack_11->SetBinContent(10,0.9303237);
   hNCinFV_stack_11->SetBinContent(11,1.371936);
   hNCinFV_stack_11->SetBinContent(12,0.9303237);
   hNCinFV_stack_11->SetBinContent(13,1.270501);
   hNCinFV_stack_11->SetBinContent(14,0.9252522);
   hNCinFV_stack_11->SetBinContent(15,0.9286332);
   hNCinFV_stack_11->SetBinContent(16,1.371936);
   hNCinFV_stack_11->SetBinContent(17,1.754141);
   hNCinFV_stack_11->SetBinContent(18,2.197444);
   hNCinFV_stack_11->SetBinContent(19,1.215558);
   hNCinFV_stack_11->SetBinContent(20,1.125349);
   hNCinFV_stack_11->SetBinContent(21,1.462145);
   hNCinFV_stack_11->SetBinContent(22,1.322064);
   hNCinFV_stack_11->SetBinContent(23,2.782519);
   hNCinFV_stack_11->SetBinContent(24,1.322064);
   hNCinFV_stack_11->SetBinError(1,0.7059368);
   hNCinFV_stack_11->SetBinError(2,0.9205954);
   hNCinFV_stack_11->SetBinError(3,0.7075491);
   hNCinFV_stack_11->SetBinError(4,0.5892709);
   hNCinFV_stack_11->SetBinError(5,0.7073425);
   hNCinFV_stack_11->SetBinError(6,0.7080169);
   hNCinFV_stack_11->SetBinError(7,0.438694);
   hNCinFV_stack_11->SetBinError(8,0.438694);
   hNCinFV_stack_11->SetBinError(9,0.6801404);
   hNCinFV_stack_11->SetBinError(10,0.4814682);
   hNCinFV_stack_11->SetBinError(11,0.5185478);
   hNCinFV_stack_11->SetBinError(12,0.4814682);
   hNCinFV_stack_11->SetBinError(13,0.5895188);
   hNCinFV_stack_11->SetBinError(14,0.4794006);
   hNCinFV_stack_11->SetBinError(15,0.48078);
   hNCinFV_stack_11->SetBinError(16,0.5185478);
   hNCinFV_stack_11->SetBinError(17,0.7350354);
   hNCinFV_stack_11->SetBinError(18,0.760276);
   hNCinFV_stack_11->SetBinError(19,0.6206425);
   hNCinFV_stack_11->SetBinError(20,0.5194673);
   hNCinFV_stack_11->SetBinError(21,0.6198731);
   hNCinFV_stack_11->SetBinError(22,0.5554667);
   hNCinFV_stack_11->SetBinError(23,0.8319397);
   hNCinFV_stack_11->SetBinError(24,0.5554667);
   hNCinFV_stack_11->SetEntries(152);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.761284);
   hnumuCCinFV_stack_12->SetBinContent(2,4.453905);
   hnumuCCinFV_stack_12->SetBinContent(3,4.68498);
   hnumuCCinFV_stack_12->SetBinContent(4,3.042005);
   hnumuCCinFV_stack_12->SetBinContent(5,2.434781);
   hnumuCCinFV_stack_12->SetBinContent(6,3.486875);
   hnumuCCinFV_stack_12->SetBinContent(7,3.246847);
   hnumuCCinFV_stack_12->SetBinContent(8,4.997714);
   hnumuCCinFV_stack_12->SetBinContent(9,3.15651);
   hnumuCCinFV_stack_12->SetBinContent(10,3.613946);
   hnumuCCinFV_stack_12->SetBinContent(11,3.856837);
   hnumuCCinFV_stack_12->SetBinContent(12,4.883757);
   hnumuCCinFV_stack_12->SetBinContent(13,2.361583);
   hnumuCCinFV_stack_12->SetBinContent(14,7.228393);
   hnumuCCinFV_stack_12->SetBinContent(15,7.476612);
   hnumuCCinFV_stack_12->SetBinContent(16,3.743301);
   hnumuCCinFV_stack_12->SetBinContent(17,4.306055);
   hnumuCCinFV_stack_12->SetBinContent(18,4.532041);
   hnumuCCinFV_stack_12->SetBinContent(19,2.579855);
   hnumuCCinFV_stack_12->SetBinContent(20,3.599468);
   hnumuCCinFV_stack_12->SetBinContent(21,2.351608);
   hnumuCCinFV_stack_12->SetBinContent(22,2.880577);
   hnumuCCinFV_stack_12->SetBinContent(23,4.81131);
   hnumuCCinFV_stack_12->SetBinContent(24,5.548547);
   hnumuCCinFV_stack_12->SetBinError(1,1.137938);
   hnumuCCinFV_stack_12->SetBinError(2,1.067072);
   hnumuCCinFV_stack_12->SetBinError(3,1.089114);
   hnumuCCinFV_stack_12->SetBinError(4,0.832465);
   hnumuCCinFV_stack_12->SetBinError(5,0.8346937);
   hnumuCCinFV_stack_12->SetBinError(6,1.410103);
   hnumuCCinFV_stack_12->SetBinError(7,0.9681304);
   hnumuCCinFV_stack_12->SetBinError(8,2.129111);
   hnumuCCinFV_stack_12->SetBinError(9,0.9075186);
   hnumuCCinFV_stack_12->SetBinError(10,1.010459);
   hnumuCCinFV_stack_12->SetBinError(11,0.9995983);
   hnumuCCinFV_stack_12->SetBinError(12,1.223145);
   hnumuCCinFV_stack_12->SetBinError(13,0.7837712);
   hnumuCCinFV_stack_12->SetBinError(14,1.455419);
   hnumuCCinFV_stack_12->SetBinError(15,2.582146);
   hnumuCCinFV_stack_12->SetBinError(16,1.037621);
   hnumuCCinFV_stack_12->SetBinError(17,1.006058);
   hnumuCCinFV_stack_12->SetBinError(18,1.286117);
   hnumuCCinFV_stack_12->SetBinError(19,0.8175558);
   hnumuCCinFV_stack_12->SetBinError(20,0.9461194);
   hnumuCCinFV_stack_12->SetBinError(21,0.8029631);
   hnumuCCinFV_stack_12->SetBinError(22,0.8852058);
   hnumuCCinFV_stack_12->SetBinError(23,1.073906);
   hnumuCCinFV_stack_12->SetBinError(24,1.16362);
   hnumuCCinFV_stack_12->SetEntries(389);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(3,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.422001);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.6828502);
   hnueCCinFV_stack_13->SetBinContent(15,0.4992645);
   hnueCCinFV_stack_13->SetBinContent(16,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(18,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(24,0.9398632);
   hnueCCinFV_stack_13->SetBinError(3,0.5270816);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.2990829);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.5096218);
   hnueCCinFV_stack_13->SetBinError(15,0.3608779);
   hnueCCinFV_stack_13->SetBinError(16,0.2179626);
   hnueCCinFV_stack_13->SetBinError(18,0.2463303);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.1950249);
   hnueCCinFV_stack_13->SetBinError(24,0.7687429);
   hnueCCinFV_stack_13->SetEntries(18);

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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmcerror__23->SetBinContent(1,43.79437);
   hmcerror__23->SetBinContent(2,39.68539);
   hmcerror__23->SetBinContent(3,44.40012);
   hmcerror__23->SetBinContent(4,41.27649);
   hmcerror__23->SetBinContent(5,34.35336);
   hmcerror__23->SetBinContent(6,39.26854);
   hmcerror__23->SetBinContent(7,41.43593);
   hmcerror__23->SetBinContent(8,33.94617);
   hmcerror__23->SetBinContent(9,36.28818);
   hmcerror__23->SetBinContent(10,35.38543);
   hmcerror__23->SetBinContent(11,39.96781);
   hmcerror__23->SetBinContent(12,38.59538);
   hmcerror__23->SetBinContent(13,32.84642);
   hmcerror__23->SetBinContent(14,39.35728);
   hmcerror__23->SetBinContent(15,48.40175);
   hmcerror__23->SetBinContent(16,39.86987);
   hmcerror__23->SetBinContent(17,41.49229);
   hmcerror__23->SetBinContent(18,45.64203);
   hmcerror__23->SetBinContent(19,35.86615);
   hmcerror__23->SetBinContent(20,42.06645);
   hmcerror__23->SetBinContent(21,41.72124);
   hmcerror__23->SetBinContent(22,43.07578);
   hmcerror__23->SetBinContent(23,43.01037);
   hmcerror__23->SetBinContent(24,42.25105);
   hmcerror__23->SetBinError(1,16.38592);
   hmcerror__23->SetBinError(2,24.5516);
   hmcerror__23->SetBinError(3,21.48802);
   hmcerror__23->SetBinError(4,16.05097);
   hmcerror__23->SetBinError(5,13.24885);
   hmcerror__23->SetBinError(6,16.82316);
   hmcerror__23->SetBinError(7,18.35336);
   hmcerror__23->SetBinError(8,13.04103);
   hmcerror__23->SetBinError(9,15.71429);
   hmcerror__23->SetBinError(10,16.0365);
   hmcerror__23->SetBinError(11,22.47771);
   hmcerror__23->SetBinError(12,20.20225);
   hmcerror__23->SetBinError(13,15.73494);
   hmcerror__23->SetBinError(14,17.36991);
   hmcerror__23->SetBinError(15,21.45208);
   hmcerror__23->SetBinError(16,13.83666);
   hmcerror__23->SetBinError(17,13.71636);
   hmcerror__23->SetBinError(18,17.58538);
   hmcerror__23->SetBinError(19,15.14099);
   hmcerror__23->SetBinError(20,14.95435);
   hmcerror__23->SetBinError(21,16.64772);
   hmcerror__23->SetBinError(22,18.78502);
   hmcerror__23->SetBinError(23,21.63042);
   hmcerror__23->SetBinError(24,26.15012);
   hmcerror__23->SetBinError(25,0.3895343);
   hmcerror__23->SetEntries(948.2139);

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
   Double_t _fy3029[24] = {
   46,
   33,
   22,
   46,
   41,
   35,
   32,
   33,
   29,
   28,
   41,
   42,
   39,
   44,
   41,
   37,
   42,
   33,
   39,
   34,
   49,
   41,
   28,
   30};
   Double_t _felx3029[24] = {
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
   Double_t _fely3029[24] = {
   6.9153,
   5.8847,
   4.8417,
   6.9153,
   6.5384,
   6.0548,
   5.7977,
   5.8847,
   5.5285,
   5.4358,
   6.5384,
   6.6155,
   6.3813,
   6.7671,
   6.5384,
   6.2203,
   6.6155,
   5.8847,
   6.3813,
   5.9703,
   7.1318,
   6.5384,
   5.4358,
   5.6197};
   Double_t _fehx3029[24] = {
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
   Double_t _fehy3029[24] = {
   6.7108,
   5.6776,
   4.6299,
   6.7108,
   6.3331,
   5.8483,
   5.5904,
   5.6776,
   5.3201,
   5.2271,
   6.3331,
   6.4104,
   6.1757,
   6.5623,
   6.3331,
   6.0141,
   6.4104,
   5.6776,
   6.1757,
   5.7635,
   6.9277,
   6.3331,
   5.2271,
   5.4117};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-3.78,3.78);
   Graph_Graph3029->SetMinimum(13.28136);
   Graph_Graph3029->SetMaximum(59.80464);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.4/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_phi_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[24] = {
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
   Double_t _fely3030[24] = {
   0.3741558,
   0.618656,
   0.4839632,
   0.3888646,
   0.3856639,
   0.4284132,
   0.4429335,
   0.3841678,
   0.4330415,
   0.453195,
   0.5623953,
   0.5234369,
   0.4790457,
   0.4413391,
   0.4432089,
   0.3470455,
   0.3305762,
   0.3852892,
   0.4221526,
   0.3554935,
   0.3990227,
   0.4360924,
   0.5029118,
   0.6189224};
   Double_t _fehx3030[24] = {
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
   Double_t _fehy3030[24] = {
   0.3741558,
   0.618656,
   0.4839632,
   0.3888646,
   0.3856639,
   0.4284132,
   0.4429335,
   0.3841678,
   0.4330415,
   0.453195,
   0.5623953,
   0.5234369,
   0.4790457,
   0.4413391,
   0.4432089,
   0.3470455,
   0.3305762,
   0.3852892,
   0.4221526,
   0.3554935,
   0.3990227,
   0.4360924,
   0.5029118,
   0.6189224};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-3.78,3.78);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
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
   Double_t _fely3031[24] = {
   0.1795721,
   0.1964089,
   0.1812364,
   0.1991616,
   0.1813996,
   0.1663017,
   0.1669721,
   0.2030446,
   0.1998093,
   0.1885513,
   0.1941147,
   0.1759699,
   0.2020461,
   0.198277,
   0.2030093,
   0.1752719,
   0.1755683,
   0.1683982,
   0.1845241,
   0.1741056,
   0.1838664,
   0.1769624,
   0.191908,
   0.184885};
   Double_t _fehx3031[24] = {
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
   Double_t _fehy3031[24] = {
   0.1795721,
   0.1964089,
   0.1812364,
   0.1991616,
   0.1813996,
   0.1663017,
   0.1669721,
   0.2030446,
   0.1998093,
   0.1885513,
   0.1941147,
   0.1759699,
   0.2020461,
   0.198277,
   0.2030093,
   0.1752719,
   0.1755683,
   0.1683982,
   0.1845241,
   0.1741056,
   0.1838664,
   0.1769624,
   0.191908,
   0.184885};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-3.78,3.78);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
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
   Double_t _fy3032[24] = {
   1.050363,
   0.8315403,
   0.4954942,
   1.114436,
   1.193479,
   0.8912987,
   0.7722766,
   0.9721274,
   0.7991583,
   0.7912862,
   1.025825,
   1.088213,
   1.187344,
   1.117964,
   0.8470768,
   0.928019,
   1.012236,
   0.7230178,
   1.087376,
   0.808245,
   1.174462,
   0.9518111,
   0.6510058,
   0.7100415};
   Double_t _felx3032[24] = {
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
   Double_t _fely3032[24] = {
   0.1579039,
   0.1482838,
   0.109047,
   0.1675361,
   0.1903278,
   0.1541896,
   0.1399196,
   0.1733539,
   0.1523499,
   0.1536169,
   0.1635916,
   0.1714065,
   0.1942769,
   0.1719402,
   0.135086,
   0.156015,
   0.1594392,
   0.1289316,
   0.1779198,
   0.1419254,
   0.1709393,
   0.1517883,
   0.1263835,
   0.1330073};
   Double_t _fehx3032[24] = {
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
   Double_t _fehy3032[24] = {
   0.1532343,
   0.1430653,
   0.1042767,
   0.1625817,
   0.1843517,
   0.1489309,
   0.1349167,
   0.1672531,
   0.146607,
   0.147719,
   0.158455,
   0.1660924,
   0.1880175,
   0.1667366,
   0.1308444,
   0.1508432,
   0.1544962,
   0.1243941,
   0.1721874,
   0.1370094,
   0.1660473,
   0.1470223,
   0.1215312,
   0.1280844};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-3.78,3.78);
   Graph_Graph3032->SetMinimum(0.2873088);
   Graph_Graph3032->SetMaximum(1.476969);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_phi_all",24,-3.15,3.15);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
