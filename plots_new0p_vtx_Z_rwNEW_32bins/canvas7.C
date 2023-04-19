#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Mon Mar 13 20:05:50 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-1.695961,1241.026,187.5376);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__19->SetBinContent(1,37.88008);
   hmc__19->SetBinContent(2,61.6516);
   hmc__19->SetBinContent(3,59.39248);
   hmc__19->SetBinContent(4,65.21252);
   hmc__19->SetBinContent(5,68.73154);
   hmc__19->SetBinContent(6,65.33971);
   hmc__19->SetBinContent(7,70.02991);
   hmc__19->SetBinContent(8,71.15295);
   hmc__19->SetBinContent(9,67.81617);
   hmc__19->SetBinContent(10,81.19582);
   hmc__19->SetBinContent(11,78.0455);
   hmc__19->SetBinContent(12,65.66145);
   hmc__19->SetBinContent(13,74.36532);
   hmc__19->SetBinContent(14,84.79805);
   hmc__19->SetBinContent(15,70.57138);
   hmc__19->SetBinContent(16,78.79222);
   hmc__19->SetBinContent(17,77.93382);
   hmc__19->SetBinContent(18,73.81469);
   hmc__19->SetBinContent(19,73.39168);
   hmc__19->SetBinContent(20,67.81519);
   hmc__19->SetBinContent(21,54.47814);
   hmc__19->SetBinContent(22,69.90738);
   hmc__19->SetBinContent(23,66.15713);
   hmc__19->SetBinContent(24,68.65263);
   hmc__19->SetBinContent(25,69.51962);
   hmc__19->SetBinContent(26,68.44865);
   hmc__19->SetBinContent(27,71.22407);
   hmc__19->SetBinContent(28,66.27135);
   hmc__19->SetBinContent(29,56.09301);
   hmc__19->SetBinContent(30,30.97242);
   hmc__19->SetBinContent(31,1.190354);
   hmc__19->SetBinError(1,14.49344);
   hmc__19->SetBinError(2,20.03315);
   hmc__19->SetBinError(3,20.62273);
   hmc__19->SetBinError(4,21.01483);
   hmc__19->SetBinError(5,20.24507);
   hmc__19->SetBinError(6,22.91227);
   hmc__19->SetBinError(7,21.17809);
   hmc__19->SetBinError(8,24.6484);
   hmc__19->SetBinError(9,19.2538);
   hmc__19->SetBinError(10,21.56469);
   hmc__19->SetBinError(11,24.26066);
   hmc__19->SetBinError(12,19.8084);
   hmc__19->SetBinError(13,22.96776);
   hmc__19->SetBinError(14,32.83002);
   hmc__19->SetBinError(15,22.9586);
   hmc__19->SetBinError(16,25.27282);
   hmc__19->SetBinError(17,24.26708);
   hmc__19->SetBinError(18,23.84655);
   hmc__19->SetBinError(19,22.01413);
   hmc__19->SetBinError(20,20.92315);
   hmc__19->SetBinError(21,17.45478);
   hmc__19->SetBinError(22,23.63568);
   hmc__19->SetBinError(23,21.87366);
   hmc__19->SetBinError(24,25.56416);
   hmc__19->SetBinError(25,23.54892);
   hmc__19->SetBinError(26,21.06069);
   hmc__19->SetBinError(27,21.33506);
   hmc__19->SetBinError(28,21.4346);
   hmc__19->SetBinError(29,17.74463);
   hmc__19->SetBinError(30,12.23126);
   hmc__19->SetBinError(31,1.425924);
   hmc__19->SetBinError(32,0.3895343);
   hmc__19->SetBinError(33,0.3895343);
   hmc__19->SetMinimum(-1.695961);
   hmc__19->SetMaximum(178.0759);
   hmc__19->SetEntries(1993.425);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",32,0,1100);
   hs7_stack_7->SetMinimum(-1.310782e-08);
   hs7_stack_7->SetMaximum(89.03796);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(1,0.3934307);
   hbadmatch_stack_1->SetBinContent(2,0.9074);
   hbadmatch_stack_1->SetBinContent(3,0.5884556);
   hbadmatch_stack_1->SetBinContent(4,3.747673);
   hbadmatch_stack_1->SetBinContent(5,3.185259);
   hbadmatch_stack_1->SetBinContent(6,0.1967154);
   hbadmatch_stack_1->SetBinContent(7,2.161253);
   hbadmatch_stack_1->SetBinContent(8,2.137005);
   hbadmatch_stack_1->SetBinContent(9,0.8120347);
   hbadmatch_stack_1->SetBinContent(10,0.9627559);
   hbadmatch_stack_1->SetBinContent(11,1.970858);
   hbadmatch_stack_1->SetBinContent(12,0.802581);
   hbadmatch_stack_1->SetBinContent(13,0.4301208);
   hbadmatch_stack_1->SetBinContent(14,1.788242);
   hbadmatch_stack_1->SetBinContent(15,0.4154345);
   hbadmatch_stack_1->SetBinContent(16,0.8191253);
   hbadmatch_stack_1->SetBinContent(17,1.845982);
   hbadmatch_stack_1->SetBinContent(18,1.845473);
   hbadmatch_stack_1->SetBinContent(19,1.54158);
   hbadmatch_stack_1->SetBinContent(20,1.949166);
   hbadmatch_stack_1->SetBinContent(21,2.190502);
   hbadmatch_stack_1->SetBinContent(22,1.840368);
   hbadmatch_stack_1->SetBinContent(23,1.552783);
   hbadmatch_stack_1->SetBinContent(24,0.7319179);
   hbadmatch_stack_1->SetBinContent(25,1.090531);
   hbadmatch_stack_1->SetBinContent(26,1.180292);
   hbadmatch_stack_1->SetBinContent(27,0.9819095);
   hbadmatch_stack_1->SetBinContent(28,1.076719);
   hbadmatch_stack_1->SetBinContent(29,0.1967154);
   hbadmatch_stack_1->SetBinContent(30,1.492742);
   hbadmatch_stack_1->SetBinError(1,0.2781975);
   hbadmatch_stack_1->SetBinError(2,0.5319689);
   hbadmatch_stack_1->SetBinError(3,0.3397478);
   hbadmatch_stack_1->SetBinError(4,1.435275);
   hbadmatch_stack_1->SetBinError(5,0.9068706);
   hbadmatch_stack_1->SetBinError(6,0.1967154);
   hbadmatch_stack_1->SetBinError(7,0.8931773);
   hbadmatch_stack_1->SetBinError(8,0.7512481);
   hbadmatch_stack_1->SetBinError(9,0.5033678);
   hbadmatch_stack_1->SetBinError(10,0.5794626);
   hbadmatch_stack_1->SetBinError(11,0.7836609);
   hbadmatch_stack_1->SetBinError(12,0.4947705);
   hbadmatch_stack_1->SetBinError(13,0.3054583);
   hbadmatch_stack_1->SetBinError(14,0.6392222);
   hbadmatch_stack_1->SetBinError(15,0.2943044);
   hbadmatch_stack_1->SetBinError(16,0.4106545);
   hbadmatch_stack_1->SetBinError(17,0.7201534);
   hbadmatch_stack_1->SetBinError(18,0.719704);
   hbadmatch_stack_1->SetBinError(19,0.5972047);
   hbadmatch_stack_1->SetBinError(20,0.7604681);
   hbadmatch_stack_1->SetBinError(21,0.8054327);
   hbadmatch_stack_1->SetBinError(22,0.7184203);
   hbadmatch_stack_1->SetBinError(23,0.6017922);
   hbadmatch_stack_1->SetBinError(24,0.438694);
   hbadmatch_stack_1->SetBinError(25,0.4912382);
   hbadmatch_stack_1->SetBinError(26,0.4818523);
   hbadmatch_stack_1->SetBinError(27,0.4391155);
   hbadmatch_stack_1->SetBinError(28,0.5551528);
   hbadmatch_stack_1->SetBinError(29,0.1967154);
   hbadmatch_stack_1->SetBinError(30,0.6862339);
   hbadmatch_stack_1->SetEntries(164);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,1.055394);
   hext_stack_2->SetBinContent(2,4.035629);
   hext_stack_2->SetBinContent(3,2.428004);
   hext_stack_2->SetBinContent(4,2.745221);
   hext_stack_2->SetBinContent(5,4.289415);
   hext_stack_2->SetBinContent(6,2.014225);
   hext_stack_2->SetBinContent(7,4.53161);
   hext_stack_2->SetBinContent(8,2.841783);
   hext_stack_2->SetBinContent(9,2.27519);
   hext_stack_2->SetBinContent(10,3.730002);
   hext_stack_2->SetBinContent(11,4.125011);
   hext_stack_2->SetBinContent(12,2.841783);
   hext_stack_2->SetBinContent(13,3.565599);
   hext_stack_2->SetBinContent(14,3.737183);
   hext_stack_2->SetBinContent(15,3.323403);
   hext_stack_2->SetBinContent(16,4.125011);
   hext_stack_2->SetBinContent(17,4.214394);
   hext_stack_2->SetBinContent(18,4.53161);
   hext_stack_2->SetBinContent(19,5.020411);
   hext_stack_2->SetBinContent(20,2.028585);
   hext_stack_2->SetBinContent(21,2.27519);
   hext_stack_2->SetBinContent(22,2.599588);
   hext_stack_2->SetBinContent(23,1.939204);
   hext_stack_2->SetBinContent(24,3.882816);
   hext_stack_2->SetBinContent(25,2.517386);
   hext_stack_2->SetBinContent(26,2.028585);
   hext_stack_2->SetBinContent(27,3.069618);
   hext_stack_2->SetBinContent(28,2.580818);
   hext_stack_2->SetBinContent(29,4.214394);
   hext_stack_2->SetBinContent(30,1.137595);
   hext_stack_2->SetBinContent(31,0.4065989);
   hext_stack_2->SetBinError(1,0.6130171);
   hext_stack_2->SetBinError(2,1.409463);
   hext_stack_2->SetBinError(3,1.028599);
   hext_stack_2->SetBinError(4,1.168097);
   hext_stack_2->SetBinError(5,1.402017);
   hext_stack_2->SetBinError(6,1.045894);
   hext_stack_2->SetBinError(7,1.418025);
   hext_stack_2->SetBinError(8,1.011007);
   hext_stack_2->SetBinError(9,0.9336798);
   hext_stack_2->SetBinError(10,1.270461);
   hext_stack_2->SetBinError(11,1.358482);
   hext_stack_2->SetBinError(12,1.011007);
   hext_stack_2->SetBinError(13,1.22225);
   hext_stack_2->SetBinError(14,1.188642);
   hext_stack_2->SetBinError(15,1.20364);
   hext_stack_2->SetBinError(16,1.358482);
   hext_stack_2->SetBinError(17,1.305512);
   hext_stack_2->SetBinError(18,1.418025);
   hext_stack_2->SetBinError(19,1.495396);
   hext_stack_2->SetBinError(20,0.8315593);
   hext_stack_2->SetBinError(21,0.9336798);
   hext_stack_2->SetBinError(22,0.9884288);
   hext_stack_2->SetBinError(23,0.912471);
   hext_stack_2->SetBinError(24,1.341763);
   hext_stack_2->SetBinError(25,0.9575503);
   hext_stack_2->SetBinError(26,0.8315593);
   hext_stack_2->SetBinError(27,1.212305);
   hext_stack_2->SetBinError(28,1.115469);
   hext_stack_2->SetBinError(29,1.305512);
   hext_stack_2->SetBinError(30,0.6602113);
   hext_stack_2->SetBinError(31,0.4065989);
   hext_stack_2->SetEntries(235);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,0.3942141);
   hdirt_stack_3->SetBinContent(2,0.9419918);
   hdirt_stack_3->SetBinContent(3,0.6566868);
   hdirt_stack_3->SetBinContent(4,1.200712);
   hdirt_stack_3->SetBinContent(5,0.3381872);
   hdirt_stack_3->SetBinContent(9,0.3896828);
   hdirt_stack_3->SetBinContent(10,0.8416576);
   hdirt_stack_3->SetBinContent(13,0.4794168);
   hdirt_stack_3->SetBinContent(14,0.5388689);
   hdirt_stack_3->SetBinContent(21,0.1601926);
   hdirt_stack_3->SetBinContent(22,0.2188956);
   hdirt_stack_3->SetBinContent(24,0.2188956);
   hdirt_stack_3->SetBinContent(26,0.2620342);
   hdirt_stack_3->SetBinContent(27,0.2188956);
   hdirt_stack_3->SetBinContent(28,0.3032514);
   hdirt_stack_3->SetBinError(1,0.2804494);
   hdirt_stack_3->SetBinError(2,0.4286583);
   hdirt_stack_3->SetBinError(3,0.3791383);
   hdirt_stack_3->SetBinError(4,0.6249799);
   hdirt_stack_3->SetBinError(5,0.3381872);
   hdirt_stack_3->SetBinError(9,0.2870053);
   hdirt_stack_3->SetBinError(10,0.5060234);
   hdirt_stack_3->SetBinError(13,0.3402743);
   hdirt_stack_3->SetBinError(14,0.4239131);
   hdirt_stack_3->SetBinError(21,0.1601926);
   hdirt_stack_3->SetBinError(22,0.2188956);
   hdirt_stack_3->SetBinError(24,0.2188956);
   hdirt_stack_3->SetBinError(26,0.2620342);
   hdirt_stack_3->SetBinError(27,0.2188956);
   hdirt_stack_3->SetBinError(28,0.2152861);
   hdirt_stack_3->SetEntries(33);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(1,2.840843);
   houtFV_stack_4->SetBinContent(2,2.094238);
   houtFV_stack_4->SetBinContent(3,2.04891);
   houtFV_stack_4->SetBinContent(4,1.857266);
   houtFV_stack_4->SetBinContent(5,1.804013);
   houtFV_stack_4->SetBinContent(6,1.710423);
   houtFV_stack_4->SetBinContent(7,1.660551);
   houtFV_stack_4->SetBinContent(8,2.090833);
   houtFV_stack_4->SetBinContent(9,1.176911);
   houtFV_stack_4->SetBinContent(10,2.250697);
   houtFV_stack_4->SetBinContent(11,2.199135);
   houtFV_stack_4->SetBinContent(12,2.103854);
   houtFV_stack_4->SetBinContent(13,1.073786);
   houtFV_stack_4->SetBinContent(14,1.322064);
   houtFV_stack_4->SetBinContent(15,0.7834804);
   houtFV_stack_4->SetBinContent(16,3.232362);
   houtFV_stack_4->SetBinContent(17,1.322064);
   houtFV_stack_4->SetBinContent(18,0.9818863);
   houtFV_stack_4->SetBinContent(19,1.980585);
   houtFV_stack_4->SetBinContent(20,1.853885);
   houtFV_stack_4->SetBinContent(21,1.302543);
   houtFV_stack_4->SetBinContent(22,2.203447);
   houtFV_stack_4->SetBinContent(23,2.111368);
   houtFV_stack_4->SetBinContent(24,2.389088);
   houtFV_stack_4->SetBinContent(25,2.438795);
   houtFV_stack_4->SetBinContent(26,1.178602);
   houtFV_stack_4->SetBinContent(27,2.85968);
   houtFV_stack_4->SetBinContent(28,1.125349);
   houtFV_stack_4->SetBinContent(29,1.704102);
   houtFV_stack_4->SetBinContent(30,2.1425);
   houtFV_stack_4->SetBinContent(31,0.1967154);
   houtFV_stack_4->SetBinError(1,0.8098046);
   houtFV_stack_4->SetBinError(2,0.7201361);
   houtFV_stack_4->SetBinError(3,0.7064057);
   houtFV_stack_4->SetBinError(4,0.6799255);
   houtFV_stack_4->SetBinError(5,0.7075491);
   houtFV_stack_4->SetBinError(6,0.6196373);
   houtFV_stack_4->SetBinError(7,0.650847);
   houtFV_stack_4->SetBinError(8,0.7190148);
   houtFV_stack_4->SetBinError(9,0.4804759);
   houtFV_stack_4->SetBinError(10,0.7346377);
   houtFV_stack_4->SetBinError(11,0.7607114);
   houtFV_stack_4->SetBinError(12,0.6792233);
   houtFV_stack_4->SetBinError(13,0.5557297);
   houtFV_stack_4->SetBinError(14,0.5554667);
   houtFV_stack_4->SetBinError(15,0.3917439);
   houtFV_stack_4->SetBinError(16,0.9583914);
   houtFV_stack_4->SetBinError(17,0.5554667);
   houtFV_stack_4->SetBinError(18,0.4391155);
   houtFV_stack_4->SetBinError(19,0.7397056);
   houtFV_stack_4->SetBinError(20,0.6789509);
   houtFV_stack_4->SetBinError(21,0.6010653);
   houtFV_stack_4->SetBinError(22,0.8125105);
   houtFV_stack_4->SetBinError(23,0.7255923);
   houtFV_stack_4->SetBinError(24,0.784047);
   houtFV_stack_4->SetBinError(25,0.7865804);
   houtFV_stack_4->SetBinError(26,0.4811646);
   houtFV_stack_4->SetBinError(27,0.9069933);
   houtFV_stack_4->SetBinError(28,0.5194673);
   houtFV_stack_4->SetBinError(29,0.6739984);
   houtFV_stack_4->SetBinError(30,0.7846555);
   houtFV_stack_4->SetBinError(31,0.1967154);
   houtFV_stack_4->SetEntries(240);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.1376284);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6692721);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.446568);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9069222);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.7538042);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.4035539);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(26,1.005072);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.473804);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3125578);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2126346);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3610006);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3453893);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1775557);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.3988212);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.2438946);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(242);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(1,15.4075);
   hNCpi0inFVres_stack_7->SetBinContent(2,27.41252);
   hNCpi0inFVres_stack_7->SetBinContent(3,27.70848);
   hNCpi0inFVres_stack_7->SetBinContent(4,23.99177);
   hNCpi0inFVres_stack_7->SetBinContent(5,30.83875);
   hNCpi0inFVres_stack_7->SetBinContent(6,32.08014);
   hNCpi0inFVres_stack_7->SetBinContent(7,33.10349);
   hNCpi0inFVres_stack_7->SetBinContent(8,30.21881);
   hNCpi0inFVres_stack_7->SetBinContent(9,33.35043);
   hNCpi0inFVres_stack_7->SetBinContent(10,34.24871);
   hNCpi0inFVres_stack_7->SetBinContent(11,35.25891);
   hNCpi0inFVres_stack_7->SetBinContent(12,33.03606);
   hNCpi0inFVres_stack_7->SetBinContent(13,35.94566);
   hNCpi0inFVres_stack_7->SetBinContent(14,40.63337);
   hNCpi0inFVres_stack_7->SetBinContent(15,34.95419);
   hNCpi0inFVres_stack_7->SetBinContent(16,37.70218);
   hNCpi0inFVres_stack_7->SetBinContent(17,38.45433);
   hNCpi0inFVres_stack_7->SetBinContent(18,36.34106);
   hNCpi0inFVres_stack_7->SetBinContent(19,36.68483);
   hNCpi0inFVres_stack_7->SetBinContent(20,31.62312);
   hNCpi0inFVres_stack_7->SetBinContent(21,22.40894);
   hNCpi0inFVres_stack_7->SetBinContent(22,29.66331);
   hNCpi0inFVres_stack_7->SetBinContent(23,32.30994);
   hNCpi0inFVres_stack_7->SetBinContent(24,30.69461);
   hNCpi0inFVres_stack_7->SetBinContent(25,35.05167);
   hNCpi0inFVres_stack_7->SetBinContent(26,34.04246);
   hNCpi0inFVres_stack_7->SetBinContent(27,36.64714);
   hNCpi0inFVres_stack_7->SetBinContent(28,37.80883);
   hNCpi0inFVres_stack_7->SetBinContent(29,30.20537);
   hNCpi0inFVres_stack_7->SetBinContent(30,12.37121);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.1115999);
   hNCpi0inFVres_stack_7->SetBinError(1,1.232041);
   hNCpi0inFVres_stack_7->SetBinError(2,1.707015);
   hNCpi0inFVres_stack_7->SetBinError(3,1.77494);
   hNCpi0inFVres_stack_7->SetBinError(4,1.609411);
   hNCpi0inFVres_stack_7->SetBinError(5,1.797041);
   hNCpi0inFVres_stack_7->SetBinError(6,1.817553);
   hNCpi0inFVres_stack_7->SetBinError(7,1.876106);
   hNCpi0inFVres_stack_7->SetBinError(8,1.798322);
   hNCpi0inFVres_stack_7->SetBinError(9,1.890761);
   hNCpi0inFVres_stack_7->SetBinError(10,1.877419);
   hNCpi0inFVres_stack_7->SetBinError(11,1.861579);
   hNCpi0inFVres_stack_7->SetBinError(12,1.862955);
   hNCpi0inFVres_stack_7->SetBinError(13,1.944098);
   hNCpi0inFVres_stack_7->SetBinError(14,2.133731);
   hNCpi0inFVres_stack_7->SetBinError(15,1.933456);
   hNCpi0inFVres_stack_7->SetBinError(16,1.999739);
   hNCpi0inFVres_stack_7->SetBinError(17,2.055297);
   hNCpi0inFVres_stack_7->SetBinError(18,1.959434);
   hNCpi0inFVres_stack_7->SetBinError(19,1.987538);
   hNCpi0inFVres_stack_7->SetBinError(20,1.85472);
   hNCpi0inFVres_stack_7->SetBinError(21,1.558902);
   hNCpi0inFVres_stack_7->SetBinError(22,1.810025);
   hNCpi0inFVres_stack_7->SetBinError(23,1.836346);
   hNCpi0inFVres_stack_7->SetBinError(24,1.803599);
   hNCpi0inFVres_stack_7->SetBinError(25,1.906817);
   hNCpi0inFVres_stack_7->SetBinError(26,1.898071);
   hNCpi0inFVres_stack_7->SetBinError(27,2.02922);
   hNCpi0inFVres_stack_7->SetBinError(28,2.097056);
   hNCpi0inFVres_stack_7->SetBinError(29,1.845024);
   hNCpi0inFVres_stack_7->SetBinError(30,1.171063);
   hNCpi0inFVres_stack_7->SetBinError(31,0.05579997);
   hNCpi0inFVres_stack_7->SetEntries(17544);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.74841);
   hNCpi0inFVdis_stack_8->SetBinContent(2,4.616142);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.089778);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.335974);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.096762);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.315226);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.509358);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.64845);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.995532);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.347862);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.565653);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.501475);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.827467);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.221308);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.090522);
   hNCpi0inFVdis_stack_8->SetBinContent(16,6.147818);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.6942);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.83254);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.739687);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.604931);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.16691);
   hNCpi0inFVdis_stack_8->SetBinContent(22,5.565583);
   hNCpi0inFVdis_stack_8->SetBinContent(23,5.855368);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.06271);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.814345);
   hNCpi0inFVdis_stack_8->SetBinContent(26,7.461295);
   hNCpi0inFVdis_stack_8->SetBinContent(27,4.852792);
   hNCpi0inFVdis_stack_8->SetBinContent(28,5.742936);
   hNCpi0inFVdis_stack_8->SetBinContent(29,5.1019);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.882262);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6080181);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7191197);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7374678);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6515865);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9042509);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8546089);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8068589);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8309408);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7677214);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9081164);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7786697);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8885108);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7734458);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8347953);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7575139);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7623369);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8328508);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8702165);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5867892);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7605908);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6175453);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8410669);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.7739489);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7498977);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7381268);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.9481985);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.7055048);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.759353);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.7383907);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4661653);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.04832419);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.2927861);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.2183542);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(27,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(29,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(20);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,5.600761);
   hCCpi0inFV_stack_10->SetBinContent(2,8.210855);
   hCCpi0inFV_stack_10->SetBinContent(3,6.830467);
   hCCpi0inFV_stack_10->SetBinContent(4,9.716719);
   hCCpi0inFV_stack_10->SetBinContent(5,10.24685);
   hCCpi0inFV_stack_10->SetBinContent(6,8.636251);
   hCCpi0inFV_stack_10->SetBinContent(7,8.499471);
   hCCpi0inFV_stack_10->SetBinContent(8,11.47255);
   hCCpi0inFV_stack_10->SetBinContent(9,9.57539);
   hCCpi0inFV_stack_10->SetBinContent(10,14.21705);
   hCCpi0inFV_stack_10->SetBinContent(11,10.96145);
   hCCpi0inFV_stack_10->SetBinContent(12,9.223071);
   hCCpi0inFV_stack_10->SetBinContent(13,11.09035);
   hCCpi0inFV_stack_10->SetBinContent(14,10.35613);
   hCCpi0inFV_stack_10->SetBinContent(15,9.470366);
   hCCpi0inFV_stack_10->SetBinContent(16,10.60163);
   hCCpi0inFV_stack_10->SetBinContent(17,8.361192);
   hCCpi0inFV_stack_10->SetBinContent(18,8.615512);
   hCCpi0inFV_stack_10->SetBinContent(19,7.959197);
   hCCpi0inFV_stack_10->SetBinContent(20,8.549343);
   hCCpi0inFV_stack_10->SetBinContent(21,10.33875);
   hCCpi0inFV_stack_10->SetBinContent(22,9.282951);
   hCCpi0inFV_stack_10->SetBinContent(23,7.451415);
   hCCpi0inFV_stack_10->SetBinContent(24,10.40111);
   hCCpi0inFV_stack_10->SetBinContent(25,8.600905);
   hCCpi0inFV_stack_10->SetBinContent(26,10.85335);
   hCCpi0inFV_stack_10->SetBinContent(27,7.32594);
   hCCpi0inFV_stack_10->SetBinContent(28,9.421342);
   hCCpi0inFV_stack_10->SetBinContent(29,6.208436);
   hCCpi0inFV_stack_10->SetBinContent(30,5.371703);
   hCCpi0inFV_stack_10->SetBinContent(31,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(1,1.183038);
   hCCpi0inFV_stack_10->SetBinError(2,1.414919);
   hCCpi0inFV_stack_10->SetBinError(3,1.315216);
   hCCpi0inFV_stack_10->SetBinError(4,1.594542);
   hCCpi0inFV_stack_10->SetBinError(5,1.641443);
   hCCpi0inFV_stack_10->SetBinError(6,1.446885);
   hCCpi0inFV_stack_10->SetBinError(7,1.468573);
   hCCpi0inFV_stack_10->SetBinError(8,1.755991);
   hCCpi0inFV_stack_10->SetBinError(9,1.556131);
   hCCpi0inFV_stack_10->SetBinError(10,1.908991);
   hCCpi0inFV_stack_10->SetBinError(11,1.714918);
   hCCpi0inFV_stack_10->SetBinError(12,1.53273);
   hCCpi0inFV_stack_10->SetBinError(13,1.676938);
   hCCpi0inFV_stack_10->SetBinError(14,1.555756);
   hCCpi0inFV_stack_10->SetBinError(15,1.48561);
   hCCpi0inFV_stack_10->SetBinError(16,1.617834);
   hCCpi0inFV_stack_10->SetBinError(17,1.464064);
   hCCpi0inFV_stack_10->SetBinError(18,1.373098);
   hCCpi0inFV_stack_10->SetBinError(19,1.414554);
   hCCpi0inFV_stack_10->SetBinError(20,1.45501);
   hCCpi0inFV_stack_10->SetBinError(21,1.676409);
   hCCpi0inFV_stack_10->SetBinError(22,1.519924);
   hCCpi0inFV_stack_10->SetBinError(23,1.481735);
   hCCpi0inFV_stack_10->SetBinError(24,1.624055);
   hCCpi0inFV_stack_10->SetBinError(25,1.44155);
   hCCpi0inFV_stack_10->SetBinError(26,1.666242);
   hCCpi0inFV_stack_10->SetBinError(27,1.388227);
   hCCpi0inFV_stack_10->SetBinError(28,1.544411);
   hCCpi0inFV_stack_10->SetBinError(29,1.209137);
   hCCpi0inFV_stack_10->SetBinError(30,1.160549);
   hCCpi0inFV_stack_10->SetBinError(31,0.2770047);
   hCCpi0inFV_stack_10->SetEntries(1165);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(1,4.091666);
   hNCinFV_stack_11->SetBinContent(2,5.513474);
   hNCinFV_stack_11->SetBinContent(3,4.790009);
   hNCinFV_stack_11->SetBinContent(4,4.446451);
   hNCinFV_stack_11->SetBinContent(5,5.078625);
   hNCinFV_stack_11->SetBinContent(6,6.456715);
   hNCinFV_stack_11->SetBinContent(7,5.960158);
   hNCinFV_stack_11->SetBinContent(8,5.718642);
   hNCinFV_stack_11->SetBinContent(9,5.815006);
   hNCinFV_stack_11->SetBinContent(10,6.640513);
   hNCinFV_stack_11->SetBinContent(11,7.129225);
   hNCinFV_stack_11->SetBinContent(12,3.911248);
   hNCinFV_stack_11->SetBinContent(13,4.880219);
   hNCinFV_stack_11->SetBinContent(14,9.831678);
   hNCinFV_stack_11->SetBinContent(15,5.375084);
   hNCinFV_stack_11->SetBinContent(16,7.135379);
   hNCinFV_stack_11->SetBinContent(17,7.725525);
   hNCinFV_stack_11->SetBinContent(18,6.108692);
   hNCinFV_stack_11->SetBinContent(19,7.909325);
   hNCinFV_stack_11->SetBinContent(20,6.892172);
   hNCinFV_stack_11->SetBinContent(21,5.266887);
   hNCinFV_stack_11->SetBinContent(22,7.954733);
   hNCinFV_stack_11->SetBinContent(23,6.400688);
   hNCinFV_stack_11->SetBinContent(24,6.638824);
   hNCinFV_stack_11->SetBinContent(25,6.685923);
   hNCinFV_stack_11->SetBinContent(26,4.498013);
   hNCinFV_stack_11->SetBinContent(27,7.234041);
   hNCinFV_stack_11->SetBinContent(28,4.35117);
   hNCinFV_stack_11->SetBinContent(29,3.757643);
   hNCinFV_stack_11->SetBinContent(30,2.245626);
   hNCinFV_stack_11->SetBinError(1,1.092701);
   hNCinFV_stack_11->SetBinError(2,1.192995);
   hNCinFV_stack_11->SetBinError(3,1.110898);
   hNCinFV_stack_11->SetBinError(4,1.056906);
   hNCinFV_stack_11->SetBinError(5,1.178476);
   hNCinFV_stack_11->SetBinError(6,1.209016);
   hNCinFV_stack_11->SetBinError(7,1.209257);
   hNCinFV_stack_11->SetBinError(8,1.210473);
   hNCinFV_stack_11->SetBinError(9,1.176698);
   hNCinFV_stack_11->SetBinError(10,1.30144);
   hNCinFV_stack_11->SetBinError(11,1.374218);
   hNCinFV_stack_11->SetBinError(12,0.9814756);
   hNCinFV_stack_11->SetBinError(13,1.161657);
   hNCinFV_stack_11->SetBinError(14,1.571376);
   hNCinFV_stack_11->SetBinError(15,1.16112);
   hNCinFV_stack_11->SetBinError(16,1.300961);
   hNCinFV_stack_11->SetBinError(17,1.344838);
   hNCinFV_stack_11->SetBinError(18,1.241497);
   hNCinFV_stack_11->SetBinError(19,1.428501);
   hNCinFV_stack_11->SetBinError(20,1.301836);
   hNCinFV_stack_11->SetBinError(21,1.193395);
   hNCinFV_stack_11->SetBinError(22,1.482432);
   hNCinFV_stack_11->SetBinError(23,1.302823);
   hNCinFV_stack_11->SetBinError(24,1.301185);
   hNCinFV_stack_11->SetBinError(25,1.360417);
   hNCinFV_stack_11->SetBinError(26,1.038297);
   hNCinFV_stack_11->SetBinError(27,1.345794);
   hNCinFV_stack_11->SetBinError(28,0.9998562);
   hNCinFV_stack_11->SetBinError(29,0.9393067);
   hNCinFV_stack_11->SetBinError(30,0.7332843);
   hNCinFV_stack_11->SetEntries(747);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,3.818254);
   hnumuCCinFV_stack_12->SetBinContent(2,7.194271);
   hnumuCCinFV_stack_12->SetBinContent(3,8.959064);
   hnumuCCinFV_stack_12->SetBinContent(4,12.24516);
   hnumuCCinFV_stack_12->SetBinContent(5,5.0023);
   hnumuCCinFV_stack_12->SetBinContent(6,7.165374);
   hnumuCCinFV_stack_12->SetBinContent(7,6.620566);
   hnumuCCinFV_stack_12->SetBinContent(8,10.1898);
   hnumuCCinFV_stack_12->SetBinContent(9,8.035225);
   hnumuCCinFV_stack_12->SetBinContent(10,9.446419);
   hnumuCCinFV_stack_12->SetBinContent(11,9.052101);
   hnumuCCinFV_stack_12->SetBinContent(12,5.120983);
   hnumuCCinFV_stack_12->SetBinContent(13,9.753147);
   hnumuCCinFV_stack_12->SetBinContent(14,8.741625);
   hnumuCCinFV_stack_12->SetBinContent(15,9.013359);
   hnumuCCinFV_stack_12->SetBinContent(16,8.188716);
   hnumuCCinFV_stack_12->SetBinContent(17,8.621767);
   hnumuCCinFV_stack_12->SetBinContent(18,7.910049);
   hnumuCCinFV_stack_12->SetBinContent(19,6.70935);
   hnumuCCinFV_stack_12->SetBinContent(20,8.373949);
   hnumuCCinFV_stack_12->SetBinContent(21,6.089887);
   hnumuCCinFV_stack_12->SetBinContent(22,9.167656);
   hnumuCCinFV_stack_12->SetBinContent(23,7.651056);
   hnumuCCinFV_stack_12->SetBinContent(24,7.225785);
   hnumuCCinFV_stack_12->SetBinContent(25,6.832416);
   hnumuCCinFV_stack_12->SetBinContent(26,5.633575);
   hnumuCCinFV_stack_12->SetBinContent(27,7.079258);
   hnumuCCinFV_stack_12->SetBinContent(28,3.637737);
   hnumuCCinFV_stack_12->SetBinContent(29,3.751068);
   hnumuCCinFV_stack_12->SetBinContent(30,4.133306);
   hnumuCCinFV_stack_12->SetBinError(1,1.302084);
   hnumuCCinFV_stack_12->SetBinError(2,1.749782);
   hnumuCCinFV_stack_12->SetBinError(3,1.653798);
   hnumuCCinFV_stack_12->SetBinError(4,2.00202);
   hnumuCCinFV_stack_12->SetBinError(5,1.097945);
   hnumuCCinFV_stack_12->SetBinError(6,1.642025);
   hnumuCCinFV_stack_12->SetBinError(7,1.368937);
   hnumuCCinFV_stack_12->SetBinError(8,1.851447);
   hnumuCCinFV_stack_12->SetBinError(9,1.90868);
   hnumuCCinFV_stack_12->SetBinError(10,1.748872);
   hnumuCCinFV_stack_12->SetBinError(11,1.60912);
   hnumuCCinFV_stack_12->SetBinError(12,1.14331);
   hnumuCCinFV_stack_12->SetBinError(13,1.740384);
   hnumuCCinFV_stack_12->SetBinError(14,2.779752);
   hnumuCCinFV_stack_12->SetBinError(15,1.666373);
   hnumuCCinFV_stack_12->SetBinError(16,1.5943);
   hnumuCCinFV_stack_12->SetBinError(17,2.070264);
   hnumuCCinFV_stack_12->SetBinError(18,1.690404);
   hnumuCCinFV_stack_12->SetBinError(19,1.413479);
   hnumuCCinFV_stack_12->SetBinError(20,1.922947);
   hnumuCCinFV_stack_12->SetBinError(21,1.195363);
   hnumuCCinFV_stack_12->SetBinError(22,1.646191);
   hnumuCCinFV_stack_12->SetBinError(23,1.432828);
   hnumuCCinFV_stack_12->SetBinError(24,1.374734);
   hnumuCCinFV_stack_12->SetBinError(25,1.676127);
   hnumuCCinFV_stack_12->SetBinError(26,1.368049);
   hnumuCCinFV_stack_12->SetBinError(27,1.441008);
   hnumuCCinFV_stack_12->SetBinError(28,0.893619);
   hnumuCCinFV_stack_12->SetBinError(29,1.14161);
   hnumuCCinFV_stack_12->SetBinError(30,1.072708);
   hnumuCCinFV_stack_12->SetEntries(869);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(1,0.2504446);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(7,0.536893);
   hnueCCinFV_stack_13->SetBinContent(8,0.3893379);
   hnueCCinFV_stack_13->SetBinContent(10,0.450108);
   hnueCCinFV_stack_13->SetBinContent(11,0.5878536);
   hnueCCinFV_stack_13->SetBinContent(12,0.6603724);
   hnueCCinFV_stack_13->SetBinContent(13,0.9847494);
   hnueCCinFV_stack_13->SetBinContent(15,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(16,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.4296511);
   hnueCCinFV_stack_13->SetBinContent(18,0.3688623);
   hnueCCinFV_stack_13->SetBinContent(19,0.3866963);
   hnueCCinFV_stack_13->SetBinContent(20,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.4057753);
   hnueCCinFV_stack_13->SetBinContent(23,0.536893);
   hnueCCinFV_stack_13->SetBinContent(24,0.9754189);
   hnueCCinFV_stack_13->SetBinContent(25,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(26,0.2080445);
   hnueCCinFV_stack_13->SetBinContent(27,0.453084);
   hnueCCinFV_stack_13->SetBinContent(29,0.591342);
   hnueCCinFV_stack_13->SetBinError(1,0.2504446);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.2486649);
   hnueCCinFV_stack_13->SetBinError(7,0.3929602);
   hnueCCinFV_stack_13->SetBinError(8,0.3893379);
   hnueCCinFV_stack_13->SetBinError(10,0.3197876);
   hnueCCinFV_stack_13->SetBinError(11,0.42079);
   hnueCCinFV_stack_13->SetBinError(12,0.4669156);
   hnueCCinFV_stack_13->SetBinError(13,0.6555434);
   hnueCCinFV_stack_13->SetBinError(15,0.2770047);
   hnueCCinFV_stack_13->SetBinError(16,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.305097);
   hnueCCinFV_stack_13->SetBinError(18,0.3688623);
   hnueCCinFV_stack_13->SetBinError(19,0.3866963);
   hnueCCinFV_stack_13->SetBinError(20,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.2871419);
   hnueCCinFV_stack_13->SetBinError(23,0.3929602);
   hnueCCinFV_stack_13->SetBinError(24,0.5019055);
   hnueCCinFV_stack_13->SetBinError(25,0.1950249);
   hnueCCinFV_stack_13->SetBinError(26,0.2080445);
   hnueCCinFV_stack_13->SetBinError(27,0.3230114);
   hnueCCinFV_stack_13->SetBinError(29,0.4228527);
   hnueCCinFV_stack_13->SetEntries(40);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__20->SetBinContent(1,37.88008);
   hmcerror__20->SetBinContent(2,61.6516);
   hmcerror__20->SetBinContent(3,59.39248);
   hmcerror__20->SetBinContent(4,65.21252);
   hmcerror__20->SetBinContent(5,68.73154);
   hmcerror__20->SetBinContent(6,65.33971);
   hmcerror__20->SetBinContent(7,70.02991);
   hmcerror__20->SetBinContent(8,71.15295);
   hmcerror__20->SetBinContent(9,67.81617);
   hmcerror__20->SetBinContent(10,81.19582);
   hmcerror__20->SetBinContent(11,78.0455);
   hmcerror__20->SetBinContent(12,65.66145);
   hmcerror__20->SetBinContent(13,74.36532);
   hmcerror__20->SetBinContent(14,84.79805);
   hmcerror__20->SetBinContent(15,70.57138);
   hmcerror__20->SetBinContent(16,78.79222);
   hmcerror__20->SetBinContent(17,77.93382);
   hmcerror__20->SetBinContent(18,73.81469);
   hmcerror__20->SetBinContent(19,73.39168);
   hmcerror__20->SetBinContent(20,67.81519);
   hmcerror__20->SetBinContent(21,54.47814);
   hmcerror__20->SetBinContent(22,69.90738);
   hmcerror__20->SetBinContent(23,66.15713);
   hmcerror__20->SetBinContent(24,68.65263);
   hmcerror__20->SetBinContent(25,69.51962);
   hmcerror__20->SetBinContent(26,68.44865);
   hmcerror__20->SetBinContent(27,71.22407);
   hmcerror__20->SetBinContent(28,66.27135);
   hmcerror__20->SetBinContent(29,56.09301);
   hmcerror__20->SetBinContent(30,30.97242);
   hmcerror__20->SetBinContent(31,1.190354);
   hmcerror__20->SetBinError(1,14.49344);
   hmcerror__20->SetBinError(2,20.03315);
   hmcerror__20->SetBinError(3,20.62273);
   hmcerror__20->SetBinError(4,21.01483);
   hmcerror__20->SetBinError(5,20.24507);
   hmcerror__20->SetBinError(6,22.91227);
   hmcerror__20->SetBinError(7,21.17809);
   hmcerror__20->SetBinError(8,24.6484);
   hmcerror__20->SetBinError(9,19.2538);
   hmcerror__20->SetBinError(10,21.56469);
   hmcerror__20->SetBinError(11,24.26066);
   hmcerror__20->SetBinError(12,19.8084);
   hmcerror__20->SetBinError(13,22.96776);
   hmcerror__20->SetBinError(14,32.83002);
   hmcerror__20->SetBinError(15,22.9586);
   hmcerror__20->SetBinError(16,25.27282);
   hmcerror__20->SetBinError(17,24.26708);
   hmcerror__20->SetBinError(18,23.84655);
   hmcerror__20->SetBinError(19,22.01413);
   hmcerror__20->SetBinError(20,20.92315);
   hmcerror__20->SetBinError(21,17.45478);
   hmcerror__20->SetBinError(22,23.63568);
   hmcerror__20->SetBinError(23,21.87366);
   hmcerror__20->SetBinError(24,25.56416);
   hmcerror__20->SetBinError(25,23.54892);
   hmcerror__20->SetBinError(26,21.06069);
   hmcerror__20->SetBinError(27,21.33506);
   hmcerror__20->SetBinError(28,21.4346);
   hmcerror__20->SetBinError(29,17.74463);
   hmcerror__20->SetBinError(30,12.23126);
   hmcerror__20->SetBinError(31,1.425924);
   hmcerror__20->SetBinError(32,0.3895343);
   hmcerror__20->SetBinError(33,0.3895343);
   hmcerror__20->SetEntries(1993.425);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[32] = {
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
   Double_t _fy3025[32] = {
   33,
   43,
   51,
   37,
   43,
   58,
   46,
   55,
   65,
   45,
   52,
   47,
   54,
   50,
   45,
   50,
   56,
   57,
   48,
   43,
   49,
   48,
   62,
   38,
   54,
   50,
   51,
   57,
   41,
   23,
   1,
   0};
   Double_t _felx3025[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3025[32] = {
   5.8847,
   6.6917,
   7.2725,
   6.2203,
   6.6917,
   7.7446,
   6.9153,
   7.546,
   8.1893,
   6.8416,
   7.3419,
   6.9882,
   7.4785,
   7.2025,
   6.8416,
   7.2025,
   7.6127,
   7.679,
   7.0604,
   6.6917,
   7.1318,
   7.0604,
   8.0018,
   6.3013,
   7.4785,
   7.2025,
   7.2725,
   7.679,
   6.5384,
   4.9457,
   1,
   0};
   Double_t _fehx3025[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3025[32] = {
   5.6776,
   6.4868,
   7.0686,
   6.0141,
   6.4868,
   7.5415,
   6.7108,
   7.3425,
   7.9866,
   6.637,
   7.1381,
   6.7839,
   7.275,
   6.9985,
   6.637,
   6.9985,
   7.4094,
   7.4757,
   6.8561,
   6.4868,
   6.9277,
   6.8561,
   7.7989,
   6.0955,
   7.275,
   6.9985,
   7.0686,
   7.4757,
   6.3331,
   4.7346,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1210);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(80.28526);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.0/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1452.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 40.8","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 94.1","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 7.2","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 56.0","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.3","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.1","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  950.3","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  171.5","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 273.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 176.4","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 221.4","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.3","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[32] = {
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
   Double_t _fy3026[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3026[32] = {
   0.3826138,
   0.3249413,
   0.3472279,
   0.3222514,
   0.2945529,
   0.3506638,
   0.3024149,
   0.3464143,
   0.2839116,
   0.2655887,
   0.3108528,
   0.3016748,
   0.3088504,
   0.3871554,
   0.3253246,
   0.3207527,
   0.3113806,
   0.3230596,
   0.299954,
   0.3085319,
   0.3203997,
   0.3381,
   0.330632,
   0.3723697,
   0.3387377,
   0.307686,
   0.2995485,
   0.3234369,
   0.3163429,
   0.394908,
   1.197899,
   0};
   Double_t _fehx3026[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3026[32] = {
   0.3826138,
   0.3249413,
   0.3472279,
   0.3222514,
   0.2945529,
   0.3506638,
   0.3024149,
   0.3464143,
   0.2839116,
   0.2655887,
   0.3108528,
   0.3016748,
   0.3088504,
   0.3871554,
   0.3253246,
   0.3207527,
   0.3113806,
   0.3230596,
   0.299954,
   0.3085319,
   0.3203997,
   0.3381,
   0.330632,
   0.3723697,
   0.3387377,
   0.307686,
   0.2995485,
   0.3234369,
   0.3163429,
   0.394908,
   1.197899,
   0};
   grae = new TGraphAsymmErrors(32,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1210);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[32] = {
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
   Double_t _fy3027[32] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3027[32] = {
   0.2579831,
   0.2346937,
   0.2438616,
   0.2204412,
   0.2343209,
   0.2647756,
   0.2418174,
   0.2486351,
   0.237278,
   0.222263,
   0.2357875,
   0.2301701,
   0.2474325,
   0.2404542,
   0.2421482,
   0.2463,
   0.2443901,
   0.2442536,
   0.2424516,
   0.2372615,
   0.2261633,
   0.2301333,
   0.2351962,
   0.2428377,
   0.2512287,
   0.2352038,
   0.2333428,
   0.2615916,
   0.2395842,
   0.2469532,
   0.5957358,
   0};
   Double_t _fehx3027[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3027[32] = {
   0.2579831,
   0.2346937,
   0.2438616,
   0.2204412,
   0.2343209,
   0.2647756,
   0.2418174,
   0.2486351,
   0.237278,
   0.222263,
   0.2357875,
   0.2301701,
   0.2474325,
   0.2404542,
   0.2421482,
   0.2463,
   0.2443901,
   0.2442536,
   0.2424516,
   0.2372615,
   0.2261633,
   0.2301333,
   0.2351962,
   0.2428377,
   0.2512287,
   0.2352038,
   0.2333428,
   0.2615916,
   0.2395842,
   0.2469532,
   0.5957358,
   0};
   grae = new TGraphAsymmErrors(32,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1210);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[32] = {
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
   Double_t _fy3028[32] = {
   0.8711703,
   0.6974678,
   0.8586946,
   0.5673757,
   0.6256226,
   0.8876684,
   0.6568622,
   0.7729827,
   0.9584735,
   0.5542157,
   0.666278,
   0.715793,
   0.7261449,
   0.5896362,
   0.6376523,
   0.6345804,
   0.7185584,
   0.772204,
   0.6540251,
   0.6340763,
   0.8994434,
   0.6866228,
   0.9371628,
   0.5535112,
   0.7767592,
   0.7304746,
   0.7160501,
   0.8601002,
   0.7309289,
   0.7425962,
   0.840086,
   10};
   Double_t _felx3028[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fely3028[32] = {
   0.1553508,
   0.1085406,
   0.1224482,
   0.09538505,
   0.09735996,
   0.1185282,
   0.09874781,
   0.1060532,
   0.1207573,
   0.0842605,
   0.09407205,
   0.1064278,
   0.1005644,
   0.08493709,
   0.09694581,
   0.09141131,
   0.09768159,
   0.1040308,
   0.09620164,
   0.09867554,
   0.1309112,
   0.1009965,
   0.1209514,
   0.09178526,
   0.107574,
   0.1052249,
   0.1021073,
   0.1158721,
   0.1165635,
   0.1596808,
   0.840086,
   0};
   Double_t _fehx3028[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
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
   Double_t _fehy3028[32] = {
   0.1498835,
   0.1052171,
   0.1190151,
   0.09222308,
   0.0943788,
   0.1154199,
   0.09582763,
   0.1031932,
   0.1177684,
   0.08174067,
   0.09146075,
   0.1033163,
   0.09782786,
   0.08253138,
   0.09404662,
   0.08882222,
   0.09507297,
   0.1012766,
   0.09341795,
   0.09565409,
   0.1271648,
   0.09807405,
   0.1178845,
   0.08878756,
   0.1046467,
   0.1022445,
   0.09924454,
   0.1128044,
   0.1129036,
   0.152865,
   1.142273,
   0};
   grae = new TGraphAsymmErrors(32,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1210);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(11);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
