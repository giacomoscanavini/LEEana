#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Thu Mar  9 16:38:21 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
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
   pad1->Range(-13.84615,-12.78438,101.5385,1413.683);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__16->SetBinContent(1,639.2191);
   hmc__16->SetBinContent(2,214.199);
   hmc__16->SetBinContent(3,227.8852);
   hmc__16->SetBinContent(4,236.6371);
   hmc__16->SetBinContent(5,232.9861);
   hmc__16->SetBinContent(6,220.9311);
   hmc__16->SetBinContent(7,208.9777);
   hmc__16->SetBinContent(8,187.1784);
   hmc__16->SetBinContent(9,157.0288);
   hmc__16->SetBinContent(10,158.3735);
   hmc__16->SetBinContent(11,125.911);
   hmc__16->SetBinContent(12,115.3461);
   hmc__16->SetBinContent(13,109.6935);
   hmc__16->SetBinContent(14,92.39479);
   hmc__16->SetBinContent(15,77.93332);
   hmc__16->SetBinContent(16,64.06594);
   hmc__16->SetBinContent(17,57.89391);
   hmc__16->SetBinContent(18,52.89904);
   hmc__16->SetBinContent(19,48.3829);
   hmc__16->SetBinContent(20,36.02446);
   hmc__16->SetBinContent(21,32.84645);
   hmc__16->SetBinContent(22,30.984);
   hmc__16->SetBinContent(23,29.17832);
   hmc__16->SetBinContent(24,22.73699);
   hmc__16->SetBinContent(25,303.2987);
   hmc__16->SetBinError(1,153.2895);
   hmc__16->SetBinError(2,62.07768);
   hmc__16->SetBinError(3,57.66938);
   hmc__16->SetBinError(4,65.31177);
   hmc__16->SetBinError(5,67.56199);
   hmc__16->SetBinError(6,54.14713);
   hmc__16->SetBinError(7,65.16297);
   hmc__16->SetBinError(8,51.73072);
   hmc__16->SetBinError(9,40.7863);
   hmc__16->SetBinError(10,42.91098);
   hmc__16->SetBinError(11,39.43501);
   hmc__16->SetBinError(12,30.74379);
   hmc__16->SetBinError(13,28.5165);
   hmc__16->SetBinError(14,26.38172);
   hmc__16->SetBinError(15,22.68435);
   hmc__16->SetBinError(16,20.62527);
   hmc__16->SetBinError(17,20.17544);
   hmc__16->SetBinError(18,18.85113);
   hmc__16->SetBinError(19,22.88386);
   hmc__16->SetBinError(20,13.98822);
   hmc__16->SetBinError(21,12.02678);
   hmc__16->SetBinError(22,12.131);
   hmc__16->SetBinError(23,14.68339);
   hmc__16->SetBinError(24,11.39132);
   hmc__16->SetBinError(25,75.48602);
   hmc__16->SetMinimum(-12.78438);
   hmc__16->SetMaximum(1342.36);
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
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,90);
   hs6_stack_6->SetMinimum(-2.843452e-08);
   hs6_stack_6->SetMaximum(671.18);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,16.29595);
   hbadmatch_stack_1->SetBinContent(2,1.419155);
   hbadmatch_stack_1->SetBinContent(3,4.429609);
   hbadmatch_stack_1->SetBinContent(4,6.570793);
   hbadmatch_stack_1->SetBinContent(5,2.762507);
   hbadmatch_stack_1->SetBinContent(6,4.719976);
   hbadmatch_stack_1->SetBinContent(7,3.627515);
   hbadmatch_stack_1->SetBinContent(8,3.766036);
   hbadmatch_stack_1->SetBinContent(9,1.634093);
   hbadmatch_stack_1->SetBinContent(10,4.844485);
   hbadmatch_stack_1->SetBinContent(11,2.819858);
   hbadmatch_stack_1->SetBinContent(12,1.268811);
   hbadmatch_stack_1->SetBinContent(13,2.300569);
   hbadmatch_stack_1->SetBinContent(14,0.9303237);
   hbadmatch_stack_1->SetBinContent(15,3.269244);
   hbadmatch_stack_1->SetBinContent(16,2.095678);
   hbadmatch_stack_1->SetBinContent(17,0.6556944);
   hbadmatch_stack_1->SetBinContent(18,1.843615);
   hbadmatch_stack_1->SetBinContent(19,2.084805);
   hbadmatch_stack_1->SetBinContent(20,1.700423);
   hbadmatch_stack_1->SetBinContent(21,1.824654);
   hbadmatch_stack_1->SetBinContent(22,0.1950248);
   hbadmatch_stack_1->SetBinContent(23,0.3419244);
   hbadmatch_stack_1->SetBinContent(24,0.9718649);
   hbadmatch_stack_1->SetBinContent(25,10.8671);
   hbadmatch_stack_1->SetBinError(1,2.164317);
   hbadmatch_stack_1->SetBinError(2,0.5379453);
   hbadmatch_stack_1->SetBinError(3,1.0864);
   hbadmatch_stack_1->SetBinError(4,2.19417);
   hbadmatch_stack_1->SetBinError(5,1.050914);
   hbadmatch_stack_1->SetBinError(6,1.184378);
   hbadmatch_stack_1->SetBinError(7,0.9659767);
   hbadmatch_stack_1->SetBinError(8,1.244492);
   hbadmatch_stack_1->SetBinError(9,0.748578);
   hbadmatch_stack_1->SetBinError(10,1.88379);
   hbadmatch_stack_1->SetBinError(11,0.8414044);
   hbadmatch_stack_1->SetBinError(12,0.5889569);
   hbadmatch_stack_1->SetBinError(13,0.7071359);
   hbadmatch_stack_1->SetBinError(14,0.4814682);
   hbadmatch_stack_1->SetBinError(15,1.73399);
   hbadmatch_stack_1->SetBinError(16,0.7204151);
   hbadmatch_stack_1->SetBinError(17,0.382627);
   hbadmatch_stack_1->SetBinError(18,0.6810141);
   hbadmatch_stack_1->SetBinError(19,0.7169884);
   hbadmatch_stack_1->SetBinError(20,0.7245103);
   hbadmatch_stack_1->SetBinError(21,0.7331956);
   hbadmatch_stack_1->SetBinError(22,0.1950249);
   hbadmatch_stack_1->SetBinError(23,0.3401821);
   hbadmatch_stack_1->SetBinError(24,0.500027);
   hbadmatch_stack_1->SetBinError(25,1.798892);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,50.38401);
   hext_stack_2->SetBinContent(2,10.78618);
   hext_stack_2->SetBinContent(3,17.75298);
   hext_stack_2->SetBinContent(4,16.27662);
   hext_stack_2->SetBinContent(5,17.28735);
   hext_stack_2->SetBinContent(6,16.41507);
   hext_stack_2->SetBinContent(7,12.15161);
   hext_stack_2->SetBinContent(8,10.82807);
   hext_stack_2->SetBinContent(9,14.18019);
   hext_stack_2->SetBinContent(10,13.11762);
   hext_stack_2->SetBinContent(11,8.522578);
   hext_stack_2->SetBinContent(12,11.5922);
   hext_stack_2->SetBinContent(13,10.44742);
   hext_stack_2->SetBinContent(14,9.401979);
   hext_stack_2->SetBinContent(15,5.516392);
   hext_stack_2->SetBinContent(16,4.303776);
   hext_stack_2->SetBinContent(17,6.717419);
   hext_stack_2->SetBinContent(18,4.773807);
   hext_stack_2->SetBinContent(19,4.538791);
   hext_stack_2->SetBinContent(20,2.841783);
   hext_stack_2->SetBinContent(21,2.841783);
   hext_stack_2->SetBinContent(22,3.006186);
   hext_stack_2->SetBinContent(23,3.889996);
   hext_stack_2->SetBinContent(24,1.048213);
   hext_stack_2->SetBinContent(25,24.77602);
   hext_stack_2->SetBinError(1,4.612167);
   hext_stack_2->SetBinError(2,2.083403);
   hext_stack_2->SetBinError(3,2.684805);
   hext_stack_2->SetBinError(4,2.658847);
   hext_stack_2->SetBinError(5,2.617367);
   hext_stack_2->SetBinError(6,2.767333);
   hext_stack_2->SetBinError(7,2.285606);
   hext_stack_2->SetBinError(8,2.295984);
   hext_stack_2->SetBinError(9,2.432177);
   hext_stack_2->SetBinError(10,2.396017);
   hext_stack_2->SetBinError(11,1.84465);
   hext_stack_2->SetBinError(12,2.207355);
   hext_stack_2->SetBinError(13,2.153541);
   hext_stack_2->SetBinError(14,1.929876);
   hext_stack_2->SetBinError(15,1.503469);
   hext_stack_2->SetBinError(16,1.250299);
   hext_stack_2->SetBinError(17,1.738869);
   hext_stack_2->SetBinError(18,1.433855);
   hext_stack_2->SetBinError(19,1.345212);
   hext_stack_2->SetBinError(20,1.011007);
   hext_stack_2->SetBinError(21,1.011007);
   hext_stack_2->SetBinError(22,1.068791);
   hext_stack_2->SetBinError(23,1.264566);
   hext_stack_2->SetBinError(24,0.7595995);
   hext_stack_2->SetBinError(25,3.256434);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,7.612849);
   hdirt_stack_3->SetBinContent(2,2.339717);
   hdirt_stack_3->SetBinContent(3,3.005912);
   hdirt_stack_3->SetBinContent(4,3.316571);
   hdirt_stack_3->SetBinContent(5,3.202097);
   hdirt_stack_3->SetBinContent(6,3.022496);
   hdirt_stack_3->SetBinContent(7,1.085724);
   hdirt_stack_3->SetBinContent(8,1.571167);
   hdirt_stack_3->SetBinContent(9,2.34762);
   hdirt_stack_3->SetBinContent(10,0.9396383);
   hdirt_stack_3->SetBinContent(11,1.271017);
   hdirt_stack_3->SetBinContent(12,0.9525174);
   hdirt_stack_3->SetBinContent(13,1.23709);
   hdirt_stack_3->SetBinContent(14,1.075938);
   hdirt_stack_3->SetBinContent(15,0.5250287);
   hdirt_stack_3->SetBinContent(16,1.143985);
   hdirt_stack_3->SetBinContent(17,1.23266);
   hdirt_stack_3->SetBinContent(18,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.6951543);
   hdirt_stack_3->SetBinContent(20,0.2188956);
   hdirt_stack_3->SetBinContent(21,0.7050098);
   hdirt_stack_3->SetBinContent(22,0.4003859);
   hdirt_stack_3->SetBinContent(23,0.3569671);
   hdirt_stack_3->SetBinContent(25,3.704566);
   hdirt_stack_3->SetBinError(1,1.398308);
   hdirt_stack_3->SetBinError(2,0.8061102);
   hdirt_stack_3->SetBinError(3,0.9001475);
   hdirt_stack_3->SetBinError(4,1.206262);
   hdirt_stack_3->SetBinError(5,1.069785);
   hdirt_stack_3->SetBinError(6,0.8858199);
   hdirt_stack_3->SetBinError(7,0.5139736);
   hdirt_stack_3->SetBinError(8,0.6889031);
   hdirt_stack_3->SetBinError(9,1.186653);
   hdirt_stack_3->SetBinError(10,0.4868118);
   hdirt_stack_3->SetBinError(11,0.5442829);
   hdirt_stack_3->SetBinError(12,0.5165933);
   hdirt_stack_3->SetBinError(13,0.536403);
   hdirt_stack_3->SetBinError(14,0.5725314);
   hdirt_stack_3->SetBinError(15,0.3099441);
   hdirt_stack_3->SetBinError(16,0.6138172);
   hdirt_stack_3->SetBinError(17,0.65016);
   hdirt_stack_3->SetBinError(18,0.1380715);
   hdirt_stack_3->SetBinError(19,0.4258516);
   hdirt_stack_3->SetBinError(20,0.2188956);
   hdirt_stack_3->SetBinError(21,0.4310004);
   hdirt_stack_3->SetBinError(22,0.4003858);
   hdirt_stack_3->SetBinError(23,0.258803);
   hdirt_stack_3->SetBinError(25,1.014897);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,61.73669);
   houtFV_stack_4->SetBinContent(2,16.68178);
   houtFV_stack_4->SetBinContent(3,20.26429);
   houtFV_stack_4->SetBinContent(4,19.18142);
   houtFV_stack_4->SetBinContent(5,17.33118);
   houtFV_stack_4->SetBinContent(6,19.17867);
   houtFV_stack_4->SetBinContent(7,17.14456);
   houtFV_stack_4->SetBinContent(8,17.75445);
   houtFV_stack_4->SetBinContent(9,12.08699);
   houtFV_stack_4->SetBinContent(10,17.96729);
   houtFV_stack_4->SetBinContent(11,13.49023);
   houtFV_stack_4->SetBinContent(12,13.4454);
   houtFV_stack_4->SetBinContent(13,10.22668);
   houtFV_stack_4->SetBinContent(14,7.728906);
   houtFV_stack_4->SetBinContent(15,7.462129);
   houtFV_stack_4->SetBinContent(16,6.989615);
   houtFV_stack_4->SetBinContent(17,4.779866);
   houtFV_stack_4->SetBinContent(18,4.496323);
   houtFV_stack_4->SetBinContent(19,3.648113);
   houtFV_stack_4->SetBinContent(20,5.260605);
   houtFV_stack_4->SetBinContent(21,4.062555);
   houtFV_stack_4->SetBinContent(22,3.907867);
   houtFV_stack_4->SetBinContent(23,2.00411);
   houtFV_stack_4->SetBinContent(24,1.860647);
   houtFV_stack_4->SetBinContent(25,32.49307);
   houtFV_stack_4->SetBinError(1,3.937765);
   houtFV_stack_4->SetBinError(2,1.938026);
   houtFV_stack_4->SetBinError(3,2.218758);
   houtFV_stack_4->SetBinError(4,2.19638);
   houtFV_stack_4->SetBinError(5,2.08593);
   houtFV_stack_4->SetBinError(6,2.193943);
   houtFV_stack_4->SetBinError(7,2.028719);
   houtFV_stack_4->SetBinError(8,2.092671);
   houtFV_stack_4->SetBinError(9,1.713207);
   houtFV_stack_4->SetBinError(10,2.168603);
   houtFV_stack_4->SetBinError(11,1.869764);
   houtFV_stack_4->SetBinError(12,1.903233);
   houtFV_stack_4->SetBinError(13,1.572888);
   houtFV_stack_4->SetBinError(14,1.34533);
   houtFV_stack_4->SetBinError(15,1.370437);
   houtFV_stack_4->SetBinError(16,1.294582);
   houtFV_stack_4->SetBinError(17,1.109109);
   houtFV_stack_4->SetBinError(18,1.037978);
   houtFV_stack_4->SetBinError(19,1.009272);
   houtFV_stack_4->SetBinError(20,1.17109);
   houtFV_stack_4->SetBinError(21,0.9192401);
   houtFV_stack_4->SetBinError(22,0.9808007);
   houtFV_stack_4->SetBinError(23,0.7352871);
   houtFV_stack_4->SetBinError(24,0.6808988);
   houtFV_stack_4->SetBinError(25,2.902605);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,11.91053);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.912336);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.887092);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,6.609172);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.903286);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.312978);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.809946);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.33207);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.763187);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.193234);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.126064);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.731384);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.13253);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.149724);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.013384);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.311972);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.617544);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.59114);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.821558);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.446568);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4321178);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.156526);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.850954);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.4600178);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,8.963069);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.168457);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8278512);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.794096);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8475203);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8596416);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7416779);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7188939);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5918536);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5630961);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5769799);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7102703);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4919598);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.452824);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6045412);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6370902);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4094153);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.4507425);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4562498);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2990883);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2126346);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1371558);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3627032);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3098478);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1399647);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.926432);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.817084);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.5988538);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.878854);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9346539);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3484178);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8232222);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.6699361);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.725736);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.5902626);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1922885);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3111014);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3135935);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1283607);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3577516);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2901718);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2928421);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,251.4078);
   hNCpi0inFVres_stack_7->SetBinContent(2,97.58964);
   hNCpi0inFVres_stack_7->SetBinContent(3,93.71645);
   hNCpi0inFVres_stack_7->SetBinContent(4,104.3655);
   hNCpi0inFVres_stack_7->SetBinContent(5,104.1673);
   hNCpi0inFVres_stack_7->SetBinContent(6,95.62495);
   hNCpi0inFVres_stack_7->SetBinContent(7,89.89732);
   hNCpi0inFVres_stack_7->SetBinContent(8,82.85883);
   hNCpi0inFVres_stack_7->SetBinContent(9,71.57109);
   hNCpi0inFVres_stack_7->SetBinContent(10,62.99397);
   hNCpi0inFVres_stack_7->SetBinContent(11,51.85867);
   hNCpi0inFVres_stack_7->SetBinContent(12,45.82875);
   hNCpi0inFVres_stack_7->SetBinContent(13,42.12219);
   hNCpi0inFVres_stack_7->SetBinContent(14,37.85214);
   hNCpi0inFVres_stack_7->SetBinContent(15,30.12404);
   hNCpi0inFVres_stack_7->SetBinContent(16,25.45105);
   hNCpi0inFVres_stack_7->SetBinContent(17,22.06914);
   hNCpi0inFVres_stack_7->SetBinContent(18,20.27658);
   hNCpi0inFVres_stack_7->SetBinContent(19,17.77122);
   hNCpi0inFVres_stack_7->SetBinContent(20,14.30644);
   hNCpi0inFVres_stack_7->SetBinContent(21,13.71922);
   hNCpi0inFVres_stack_7->SetBinContent(22,12.17075);
   hNCpi0inFVres_stack_7->SetBinContent(23,11.9371);
   hNCpi0inFVres_stack_7->SetBinContent(24,10.40226);
   hNCpi0inFVres_stack_7->SetBinContent(25,109.8305);
   hNCpi0inFVres_stack_7->SetBinError(1,5.201256);
   hNCpi0inFVres_stack_7->SetBinError(2,3.269591);
   hNCpi0inFVres_stack_7->SetBinError(3,3.099732);
   hNCpi0inFVres_stack_7->SetBinError(4,3.368842);
   hNCpi0inFVres_stack_7->SetBinError(5,3.33512);
   hNCpi0inFVres_stack_7->SetBinError(6,3.151575);
   hNCpi0inFVres_stack_7->SetBinError(7,3.112962);
   hNCpi0inFVres_stack_7->SetBinError(8,3.034593);
   hNCpi0inFVres_stack_7->SetBinError(9,2.772298);
   hNCpi0inFVres_stack_7->SetBinError(10,2.605414);
   hNCpi0inFVres_stack_7->SetBinError(11,2.345032);
   hNCpi0inFVres_stack_7->SetBinError(12,2.188065);
   hNCpi0inFVres_stack_7->SetBinError(13,2.119287);
   hNCpi0inFVres_stack_7->SetBinError(14,1.991401);
   hNCpi0inFVres_stack_7->SetBinError(15,1.781953);
   hNCpi0inFVres_stack_7->SetBinError(16,1.646686);
   hNCpi0inFVres_stack_7->SetBinError(17,1.469935);
   hNCpi0inFVres_stack_7->SetBinError(18,1.502626);
   hNCpi0inFVres_stack_7->SetBinError(19,1.414523);
   hNCpi0inFVres_stack_7->SetBinError(20,1.211173);
   hNCpi0inFVres_stack_7->SetBinError(21,1.215557);
   hNCpi0inFVres_stack_7->SetBinError(22,1.103442);
   hNCpi0inFVres_stack_7->SetBinError(23,1.117375);
   hNCpi0inFVres_stack_7->SetBinError(24,1.0678);
   hNCpi0inFVres_stack_7->SetBinError(25,3.512349);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,47.39582);
   hNCpi0inFVdis_stack_8->SetBinContent(2,19.43891);
   hNCpi0inFVdis_stack_8->SetBinContent(3,21.55466);
   hNCpi0inFVdis_stack_8->SetBinContent(4,21.1566);
   hNCpi0inFVdis_stack_8->SetBinContent(5,20.17743);
   hNCpi0inFVdis_stack_8->SetBinContent(6,18.21942);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.27815);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.48131);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.03616);
   hNCpi0inFVdis_stack_8->SetBinContent(10,14.42967);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.978015);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.90829);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.559683);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.680918);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.288486);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.41196);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.612982);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.348096);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.830862);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.760284);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.380053);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.327662);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.393671);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.883758);
   hNCpi0inFVdis_stack_8->SetBinContent(25,20.97407);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.273842);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.450343);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.502366);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.561875);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.475507);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.310717);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.405944);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.192851);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.15758);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.231936);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9156562);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.153061);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9270971);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8671924);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8184337);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7733623);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6876243);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6526309);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4937368);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5429806);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2424259);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4215916);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2567214);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4723172);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.460416);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1954681);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,80.86357);
   hCCpi0inFV_stack_10->SetBinContent(2,29.15268);
   hCCpi0inFV_stack_10->SetBinContent(3,29.31237);
   hCCpi0inFV_stack_10->SetBinContent(4,31.97567);
   hCCpi0inFV_stack_10->SetBinContent(5,36.86025);
   hCCpi0inFV_stack_10->SetBinContent(6,30.21611);
   hCCpi0inFV_stack_10->SetBinContent(7,35.05928);
   hCCpi0inFV_stack_10->SetBinContent(8,29.38909);
   hCCpi0inFV_stack_10->SetBinContent(9,21.45698);
   hCCpi0inFV_stack_10->SetBinContent(10,21.58039);
   hCCpi0inFV_stack_10->SetBinContent(11,16.46651);
   hCCpi0inFV_stack_10->SetBinContent(12,14.21152);
   hCCpi0inFV_stack_10->SetBinContent(13,13.32355);
   hCCpi0inFV_stack_10->SetBinContent(14,14.31001);
   hCCpi0inFV_stack_10->SetBinContent(15,10.2716);
   hCCpi0inFV_stack_10->SetBinContent(16,11.05508);
   hCCpi0inFV_stack_10->SetBinContent(17,8.493089);
   hCCpi0inFV_stack_10->SetBinContent(18,6.270142);
   hCCpi0inFV_stack_10->SetBinContent(19,5.178369);
   hCCpi0inFV_stack_10->SetBinContent(20,3.61311);
   hCCpi0inFV_stack_10->SetBinContent(21,2.692309);
   hCCpi0inFV_stack_10->SetBinContent(22,3.96112);
   hCCpi0inFV_stack_10->SetBinContent(23,3.425918);
   hCCpi0inFV_stack_10->SetBinContent(24,2.837462);
   hCCpi0inFV_stack_10->SetBinContent(25,40.10283);
   hCCpi0inFV_stack_10->SetBinError(1,4.459624);
   hCCpi0inFV_stack_10->SetBinError(2,2.711639);
   hCCpi0inFV_stack_10->SetBinError(3,2.711015);
   hCCpi0inFV_stack_10->SetBinError(4,2.852934);
   hCCpi0inFV_stack_10->SetBinError(5,3.081536);
   hCCpi0inFV_stack_10->SetBinError(6,2.72202);
   hCCpi0inFV_stack_10->SetBinError(7,2.975616);
   hCCpi0inFV_stack_10->SetBinError(8,2.747288);
   hCCpi0inFV_stack_10->SetBinError(9,2.308806);
   hCCpi0inFV_stack_10->SetBinError(10,2.330931);
   hCCpi0inFV_stack_10->SetBinError(11,1.990566);
   hCCpi0inFV_stack_10->SetBinError(12,1.865907);
   hCCpi0inFV_stack_10->SetBinError(13,1.774701);
   hCCpi0inFV_stack_10->SetBinError(14,1.933381);
   hCCpi0inFV_stack_10->SetBinError(15,1.582922);
   hCCpi0inFV_stack_10->SetBinError(16,1.630676);
   hCCpi0inFV_stack_10->SetBinError(17,1.447901);
   hCCpi0inFV_stack_10->SetBinError(18,1.194569);
   hCCpi0inFV_stack_10->SetBinError(19,1.144335);
   hCCpi0inFV_stack_10->SetBinError(20,1.001618);
   hCCpi0inFV_stack_10->SetBinError(21,0.7594556);
   hCCpi0inFV_stack_10->SetBinError(22,0.9610635);
   hCCpi0inFV_stack_10->SetBinError(23,0.8774323);
   hCCpi0inFV_stack_10->SetBinError(24,0.8089864);
   hCCpi0inFV_stack_10->SetBinError(25,3.220287);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,47.51427);
   hNCinFV_stack_11->SetBinContent(2,16.58147);
   hNCinFV_stack_11->SetBinContent(3,15.74027);
   hNCinFV_stack_11->SetBinContent(4,15.66734);
   hNCinFV_stack_11->SetBinContent(5,13.54452);
   hNCinFV_stack_11->SetBinContent(6,16.27378);
   hNCinFV_stack_11->SetBinContent(7,15.68702);
   hNCinFV_stack_11->SetBinContent(8,11.29213);
   hNCinFV_stack_11->SetBinContent(9,9.964996);
   hNCinFV_stack_11->SetBinContent(10,10.81803);
   hNCinFV_stack_11->SetBinContent(11,8.652468);
   hNCinFV_stack_11->SetBinContent(12,8.600905);
   hNCinFV_stack_11->SetBinContent(13,10.25023);
   hNCinFV_stack_11->SetBinContent(14,6.053749);
   hNCinFV_stack_11->SetBinContent(15,6.406842);
   hNCinFV_stack_11->SetBinContent(16,2.590875);
   hNCinFV_stack_11->SetBinContent(17,3.911248);
   hNCinFV_stack_11->SetBinContent(18,3.854614);
   hNCinFV_stack_11->SetBinContent(19,6.050492);
   hNCinFV_stack_11->SetBinContent(20,1.999038);
   hNCinFV_stack_11->SetBinContent(21,2.39585);
   hNCinFV_stack_11->SetBinContent(22,2.782519);
   hNCinFV_stack_11->SetBinContent(23,1.320373);
   hNCinFV_stack_11->SetBinContent(24,0.9269427);
   hNCinFV_stack_11->SetBinContent(25,23.30543);
   hNCinFV_stack_11->SetBinError(1,3.493902);
   hNCinFV_stack_11->SetBinError(2,1.972058);
   hNCinFV_stack_11->SetBinError(3,1.992615);
   hNCinFV_stack_11->SetBinError(4,2.049274);
   hNCinFV_stack_11->SetBinError(5,1.842053);
   hNCinFV_stack_11->SetBinError(6,2.030667);
   hNCinFV_stack_11->SetBinError(7,2.002209);
   hNCinFV_stack_11->SetBinError(8,1.689024);
   hNCinFV_stack_11->SetBinError(9,1.594451);
   hNCinFV_stack_11->SetBinError(10,1.570161);
   hNCinFV_stack_11->SetBinError(11,1.427962);
   hNCinFV_stack_11->SetBinError(12,1.44155);
   hNCinFV_stack_11->SetBinError(13,1.641846);
   hNCinFV_stack_11->SetBinError(14,1.256574);
   hNCinFV_stack_11->SetBinError(15,1.225304);
   hNCinFV_stack_11->SetBinError(16,0.8095761);
   hNCinFV_stack_11->SetBinError(17,0.9814756);
   hNCinFV_stack_11->SetBinError(18,1.000148);
   hNCinFV_stack_11->SetBinError(19,1.199923);
   hNCinFV_stack_11->SetBinError(20,0.7339349);
   hNCinFV_stack_11->SetBinError(21,0.7857345);
   hNCinFV_stack_11->SetBinError(22,0.8319397);
   hNCinFV_stack_11->SetBinError(23,0.5548703);
   hNCinFV_stack_11->SetBinError(24,0.4800908);
   hNCinFV_stack_11->SetBinError(25,2.386516);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,56.26389);
   hnumuCCinFV_stack_12->SetBinContent(2,11.43053);
   hnumuCCinFV_stack_12->SetBinContent(3,14.30507);
   hnumuCCinFV_stack_12->SetBinContent(4,9.828475);
   hnumuCCinFV_stack_12->SetBinContent(5,9.79079);
   hnumuCCinFV_stack_12->SetBinContent(6,8.614901);
   hnumuCCinFV_stack_12->SetBinContent(7,9.958032);
   hnumuCCinFV_stack_12->SetBinContent(8,11.16017);
   hnumuCCinFV_stack_12->SetBinContent(9,5.652533);
   hnumuCCinFV_stack_12->SetBinContent(10,6.059414);
   hnumuCCinFV_stack_12->SetBinContent(11,7.73668);
   hnumuCCinFV_stack_12->SetBinContent(12,4.289553);
   hnumuCCinFV_stack_12->SetBinContent(13,7.934319);
   hnumuCCinFV_stack_12->SetBinContent(14,4.008774);
   hnumuCCinFV_stack_12->SetBinContent(15,4.367851);
   hnumuCCinFV_stack_12->SetBinContent(16,3.200493);
   hnumuCCinFV_stack_12->SetBinContent(17,3.484031);
   hnumuCCinFV_stack_12->SetBinContent(18,4.838136);
   hnumuCCinFV_stack_12->SetBinContent(19,4.20309);
   hnumuCCinFV_stack_12->SetBinContent(20,2.434066);
   hnumuCCinFV_stack_12->SetBinContent(21,2.396926);
   hnumuCCinFV_stack_12->SetBinContent(22,0.8234357);
   hnumuCCinFV_stack_12->SetBinContent(23,3.40479);
   hnumuCCinFV_stack_12->SetBinContent(24,2.31792);
   hnumuCCinFV_stack_12->SetBinContent(25,19.53672);
   hnumuCCinFV_stack_12->SetBinError(1,4.43552);
   hnumuCCinFV_stack_12->SetBinError(2,1.702955);
   hnumuCCinFV_stack_12->SetBinError(3,2.801762);
   hnumuCCinFV_stack_12->SetBinError(4,1.626812);
   hnumuCCinFV_stack_12->SetBinError(5,1.581654);
   hnumuCCinFV_stack_12->SetBinError(6,1.465283);
   hnumuCCinFV_stack_12->SetBinError(7,1.682527);
   hnumuCCinFV_stack_12->SetBinError(8,1.891556);
   hnumuCCinFV_stack_12->SetBinError(9,1.196595);
   hnumuCCinFV_stack_12->SetBinError(10,1.207488);
   hnumuCCinFV_stack_12->SetBinError(11,1.713745);
   hnumuCCinFV_stack_12->SetBinError(12,1.04859);
   hnumuCCinFV_stack_12->SetBinError(13,1.820694);
   hnumuCCinFV_stack_12->SetBinError(14,1.007757);
   hnumuCCinFV_stack_12->SetBinError(15,0.9962019);
   hnumuCCinFV_stack_12->SetBinError(16,0.9761225);
   hnumuCCinFV_stack_12->SetBinError(17,0.9256044);
   hnumuCCinFV_stack_12->SetBinError(18,1.137841);
   hnumuCCinFV_stack_12->SetBinError(19,1.337373);
   hnumuCCinFV_stack_12->SetBinError(20,0.8588413);
   hnumuCCinFV_stack_12->SetBinError(21,0.8824968);
   hnumuCCinFV_stack_12->SetBinError(22,0.413091);
   hnumuCCinFV_stack_12->SetBinError(23,1.462491);
   hnumuCCinFV_stack_12->SetBinError(24,1.090472);
   hnumuCCinFV_stack_12->SetBinError(25,2.27988);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,4.835577);
   hnueCCinFV_stack_13->SetBinContent(2,2.267722);
   hnueCCinFV_stack_13->SetBinContent(3,0.9818863);
   hnueCCinFV_stack_13->SetBinContent(4,0.7542815);
   hnueCCinFV_stack_13->SetBinContent(5,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(6,2.649318);
   hnueCCinFV_stack_13->SetBinContent(7,1.469717);
   hnueCCinFV_stack_13->SetBinContent(8,0.3966292);
   hnueCCinFV_stack_13->SetBinContent(9,0.8749174);
   hnueCCinFV_stack_13->SetBinContent(10,1.550785);
   hnueCCinFV_stack_13->SetBinContent(11,1.486508);
   hnueCCinFV_stack_13->SetBinContent(12,0.8468585);
   hnueCCinFV_stack_13->SetBinContent(13,0.8666171);
   hnueCCinFV_stack_13->SetBinContent(14,0.9510591);
   hnueCCinFV_stack_13->SetBinContent(15,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(16,0.4556582);
   hnueCCinFV_stack_13->SetBinContent(17,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(18,0.2451434);
   hnueCCinFV_stack_13->SetBinContent(19,0.4073255);
   hnueCCinFV_stack_13->SetBinContent(20,0.4153488);
   hnueCCinFV_stack_13->SetBinContent(21,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,7.824156);
   hnueCCinFV_stack_13->SetBinError(1,1.543491);
   hnueCCinFV_stack_13->SetBinError(2,0.8768042);
   hnueCCinFV_stack_13->SetBinError(3,0.4391155);
   hnueCCinFV_stack_13->SetBinError(4,0.4416112);
   hnueCCinFV_stack_13->SetBinError(5,0.4810838);
   hnueCCinFV_stack_13->SetBinError(6,1.431319);
   hnueCCinFV_stack_13->SetBinError(7,0.6615517);
   hnueCCinFV_stack_13->SetBinError(8,0.2770479);
   hnueCCinFV_stack_13->SetBinError(9,0.5560785);
   hnueCCinFV_stack_13->SetBinError(10,0.6550905);
   hnueCCinFV_stack_13->SetBinError(11,0.7750286);
   hnueCCinFV_stack_13->SetBinError(12,0.4251302);
   hnueCCinFV_stack_13->SetBinError(13,0.4390927);
   hnueCCinFV_stack_13->SetBinError(14,0.5953709);
   hnueCCinFV_stack_13->SetBinError(15,0.3921167);
   hnueCCinFV_stack_13->SetBinError(16,0.3255218);
   hnueCCinFV_stack_13->SetBinError(17,0.1950249);
   hnueCCinFV_stack_13->SetBinError(18,0.2451269);
   hnueCCinFV_stack_13->SetBinError(19,0.4073256);
   hnueCCinFV_stack_13->SetBinError(20,0.2942402);
   hnueCCinFV_stack_13->SetBinError(21,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,2.182059);
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
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__17->SetBinContent(1,639.2191);
   hmcerror__17->SetBinContent(2,214.199);
   hmcerror__17->SetBinContent(3,227.8852);
   hmcerror__17->SetBinContent(4,236.6371);
   hmcerror__17->SetBinContent(5,232.9861);
   hmcerror__17->SetBinContent(6,220.9311);
   hmcerror__17->SetBinContent(7,208.9777);
   hmcerror__17->SetBinContent(8,187.1784);
   hmcerror__17->SetBinContent(9,157.0288);
   hmcerror__17->SetBinContent(10,158.3735);
   hmcerror__17->SetBinContent(11,125.911);
   hmcerror__17->SetBinContent(12,115.3461);
   hmcerror__17->SetBinContent(13,109.6935);
   hmcerror__17->SetBinContent(14,92.39479);
   hmcerror__17->SetBinContent(15,77.93332);
   hmcerror__17->SetBinContent(16,64.06594);
   hmcerror__17->SetBinContent(17,57.89391);
   hmcerror__17->SetBinContent(18,52.89904);
   hmcerror__17->SetBinContent(19,48.3829);
   hmcerror__17->SetBinContent(20,36.02446);
   hmcerror__17->SetBinContent(21,32.84645);
   hmcerror__17->SetBinContent(22,30.984);
   hmcerror__17->SetBinContent(23,29.17832);
   hmcerror__17->SetBinContent(24,22.73699);
   hmcerror__17->SetBinContent(25,303.2987);
   hmcerror__17->SetBinError(1,153.2895);
   hmcerror__17->SetBinError(2,62.07768);
   hmcerror__17->SetBinError(3,57.66938);
   hmcerror__17->SetBinError(4,65.31177);
   hmcerror__17->SetBinError(5,67.56199);
   hmcerror__17->SetBinError(6,54.14713);
   hmcerror__17->SetBinError(7,65.16297);
   hmcerror__17->SetBinError(8,51.73072);
   hmcerror__17->SetBinError(9,40.7863);
   hmcerror__17->SetBinError(10,42.91098);
   hmcerror__17->SetBinError(11,39.43501);
   hmcerror__17->SetBinError(12,30.74379);
   hmcerror__17->SetBinError(13,28.5165);
   hmcerror__17->SetBinError(14,26.38172);
   hmcerror__17->SetBinError(15,22.68435);
   hmcerror__17->SetBinError(16,20.62527);
   hmcerror__17->SetBinError(17,20.17544);
   hmcerror__17->SetBinError(18,18.85113);
   hmcerror__17->SetBinError(19,22.88386);
   hmcerror__17->SetBinError(20,13.98822);
   hmcerror__17->SetBinError(21,12.02678);
   hmcerror__17->SetBinError(22,12.131);
   hmcerror__17->SetBinError(23,14.68339);
   hmcerror__17->SetBinError(24,11.39132);
   hmcerror__17->SetBinError(25,75.48602);
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
   Double_t _fy3021[24] = {
   632,
   191,
   217,
   251,
   215,
   193,
   183,
   149,
   134,
   139,
   149,
   105,
   124,
   76,
   86,
   73,
   67,
   47,
   50,
   40,
   29,
   33,
   23,
   22};
   Double_t _felx3021[24] = {
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
   Double_t _fely3021[24] = {
   25.13961,
   13.82027,
   14.73092,
   15.84298,
   14.66288,
   13.89244,
   13.52775,
   12.20656,
   11.57584,
   11.78983,
   12.20656,
   10.24695,
   11.13553,
   8.8425,
   9.3967,
   8.6693,
   8.3119,
   6.9882,
   7.2025,
   6.4604,
   5.5285,
   5.8847,
   4.9457,
   4.8417};
   Double_t _fehx3021[24] = {
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
   Double_t _fehy3021[24] = {
   25.13961,
   13.82027,
   14.73092,
   15.84298,
   14.66288,
   13.89244,
   13.52775,
   12.20656,
   11.57584,
   11.78983,
   12.20656,
   10.24695,
   11.13553,
   8.6406,
   9.1951,
   8.4672,
   8.1094,
   6.7839,
   6.9985,
   6.2549,
   5.3201,
   5.6776,
   4.7346,
   4.6299};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,99);
   Graph_Graph3021->SetMinimum(15.44247);
   Graph_Graph3021->SetMaximum(721.1377);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.5/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3228.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 72.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 258.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 38.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 308.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  81.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1410.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  275.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 462.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 238.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 198.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 23.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[24] = {
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
   Double_t _fely3022[24] = {
   0.2398075,
   0.2898132,
   0.2530633,
   0.2759996,
   0.2899829,
   0.2450861,
   0.3118179,
   0.2763713,
   0.2597377,
   0.2709479,
   0.3131975,
   0.2665351,
   0.2599653,
   0.2855325,
   0.2910738,
   0.3219382,
   0.3484899,
   0.3563605,
   0.4729743,
   0.3882979,
   0.3661515,
   0.3915246,
   0.5032296,
   0.5010039};
   Double_t _fehx3022[24] = {
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
   Double_t _fehy3022[24] = {
   0.2398075,
   0.2898132,
   0.2530633,
   0.2759996,
   0.2899829,
   0.2450861,
   0.3118179,
   0.2763713,
   0.2597377,
   0.2709479,
   0.3131975,
   0.2665351,
   0.2599653,
   0.2855325,
   0.2910738,
   0.3219382,
   0.3484899,
   0.3563605,
   0.4729743,
   0.3882979,
   0.3661515,
   0.3915246,
   0.5032296,
   0.5010039};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,99);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
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
   Double_t _fely3023[24] = {
   0.2251668,
   0.2291662,
   0.2221447,
   0.2275801,
   0.2245453,
   0.2224085,
   0.2299351,
   0.2247622,
   0.2193508,
   0.2174865,
   0.2166017,
   0.2122664,
   0.2033183,
   0.2226979,
   0.2281008,
   0.2375485,
   0.2118112,
   0.2217913,
   0.221031,
   0.2327579,
   0.2338068,
   0.2360105,
   0.2490974,
   0.2665871};
   Double_t _fehx3023[24] = {
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
   Double_t _fehy3023[24] = {
   0.2251668,
   0.2291662,
   0.2221447,
   0.2275801,
   0.2245453,
   0.2224085,
   0.2299351,
   0.2247622,
   0.2193508,
   0.2174865,
   0.2166017,
   0.2122664,
   0.2033183,
   0.2226979,
   0.2281008,
   0.2375485,
   0.2118112,
   0.2217913,
   0.221031,
   0.2327579,
   0.2338068,
   0.2360105,
   0.2490974,
   0.2665871};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,99);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
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
   Double_t _fy3024[24] = {
   0.9887064,
   0.8916943,
   0.9522337,
   1.060696,
   0.9228018,
   0.8735757,
   0.8756917,
   0.7960322,
   0.8533468,
   0.8776719,
   1.183376,
   0.9103037,
   1.130423,
   0.8225572,
   1.103507,
   1.139451,
   1.157289,
   0.888485,
   1.033423,
   1.110357,
   0.882896,
   1.065066,
   0.7882565,
   0.9675865};
   Double_t _felx3024[24] = {
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
   Double_t _fely3024[24] = {
   0.03932863,
   0.06452074,
   0.06464183,
   0.06695052,
   0.06293456,
   0.06288135,
   0.06473299,
   0.0652135,
   0.07371793,
   0.07444316,
   0.09694593,
   0.08883655,
   0.1015149,
   0.09570345,
   0.1205736,
   0.1353184,
   0.1435712,
   0.1321045,
   0.1488646,
   0.1793337,
   0.1683135,
   0.1899271,
   0.1694991,
   0.2129438};
   Double_t _fehx3024[24] = {
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
   Double_t _fehy3024[24] = {
   0.03932863,
   0.06452074,
   0.06464183,
   0.06695052,
   0.06293456,
   0.06288135,
   0.06473299,
   0.0652135,
   0.07371793,
   0.07444316,
   0.09694593,
   0.08883655,
   0.1015149,
   0.09351826,
   0.1179868,
   0.1321638,
   0.1400734,
   0.1282424,
   0.1446482,
   0.1736292,
   0.1619688,
   0.183243,
   0.1622643,
   0.2036286};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,99);
   Graph_Graph3024->SetMinimum(0.5508968);
   Graph_Graph3024->SetMaximum(1.365223);
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
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);

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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
