#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu May 26 12:31:12 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-34.06,101.5385,3587.056);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   hmc__1->SetBinContent(1,1658.855);
   hmc__1->SetBinContent(2,258.0442);
   hmc__1->SetBinContent(3,239.4952);
   hmc__1->SetBinContent(4,232.4619);
   hmc__1->SetBinContent(5,189.2967);
   hmc__1->SetBinContent(6,184.6517);
   hmc__1->SetBinContent(7,160.3188);
   hmc__1->SetBinContent(8,131.4885);
   hmc__1->SetBinContent(9,104.438);
   hmc__1->SetBinContent(10,85.65742);
   hmc__1->SetBinContent(11,69.65137);
   hmc__1->SetBinContent(12,66.5812);
   hmc__1->SetBinContent(13,56.47861);
   hmc__1->SetBinContent(14,47.22005);
   hmc__1->SetBinContent(15,44.0453);
   hmc__1->SetBinContent(16,30.02222);
   hmc__1->SetBinContent(17,26.50894);
   hmc__1->SetBinContent(18,20.13707);
   hmc__1->SetBinContent(19,25.10791);
   hmc__1->SetBinContent(20,17.22032);
   hmc__1->SetBinContent(21,15.07663);
   hmc__1->SetBinContent(22,11.43866);
   hmc__1->SetBinContent(23,11.86081);
   hmc__1->SetBinContent(24,10.74937);
   hmc__1->SetBinContent(25,4.641603);
   hmc__1->SetBinContent(26,119.5542);
   hmc__1->SetBinError(1,317.2312);
   hmc__1->SetBinError(2,57.77124);
   hmc__1->SetBinError(3,52.68729);
   hmc__1->SetBinError(4,48.579);
   hmc__1->SetBinError(5,38.49611);
   hmc__1->SetBinError(6,39.14129);
   hmc__1->SetBinError(7,34.32899);
   hmc__1->SetBinError(8,27.51318);
   hmc__1->SetBinError(9,22.45112);
   hmc__1->SetBinError(10,20.12397);
   hmc__1->SetBinError(11,16.39947);
   hmc__1->SetBinError(12,13.0377);
   hmc__1->SetBinError(13,13.64246);
   hmc__1->SetBinError(14,10.77768);
   hmc__1->SetBinError(15,12.49483);
   hmc__1->SetBinError(16,9.65001);
   hmc__1->SetBinError(17,8.003128);
   hmc__1->SetBinError(18,6.293637);
   hmc__1->SetBinError(19,6.254491);
   hmc__1->SetBinError(20,5.232307);
   hmc__1->SetBinError(21,4.966911);
   hmc__1->SetBinError(22,4.261612);
   hmc__1->SetBinError(23,4.250112);
   hmc__1->SetBinError(24,4.043448);
   hmc__1->SetBinError(25,2.406548);
   hmc__1->SetBinError(26,34.47301);
   hmc__1->SetMinimum(-34.06);
   hmc__1->SetMaximum(3406);
   hmc__1->SetEntries(3775.136);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,90);
   hs1_stack_1->SetMinimum(-1.293891e-08);
   hs1_stack_1->SetMaximum(1741.797);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   hbadmatch_stack_1->SetBinContent(1,36.82577);
   hbadmatch_stack_1->SetBinContent(2,4.921757);
   hbadmatch_stack_1->SetBinContent(3,5.302272);
   hbadmatch_stack_1->SetBinContent(4,4.87768);
   hbadmatch_stack_1->SetBinContent(5,3.451936);
   hbadmatch_stack_1->SetBinContent(6,3.97891);
   hbadmatch_stack_1->SetBinContent(7,3.475258);
   hbadmatch_stack_1->SetBinContent(8,2.628139);
   hbadmatch_stack_1->SetBinContent(9,1.669303);
   hbadmatch_stack_1->SetBinContent(10,3.182341);
   hbadmatch_stack_1->SetBinContent(11,2.499536);
   hbadmatch_stack_1->SetBinContent(12,0.8753801);
   hbadmatch_stack_1->SetBinContent(13,2.842145);
   hbadmatch_stack_1->SetBinContent(14,2.222907);
   hbadmatch_stack_1->SetBinContent(15,2.000729);
   hbadmatch_stack_1->SetBinContent(16,0.785171);
   hbadmatch_stack_1->SetBinContent(17,0.4588116);
   hbadmatch_stack_1->SetBinContent(18,0.6139091);
   hbadmatch_stack_1->SetBinContent(19,1.710423);
   hbadmatch_stack_1->SetBinContent(20,0.5997921);
   hbadmatch_stack_1->SetBinContent(21,0.536893);
   hbadmatch_stack_1->SetBinContent(22,0.6224136);
   hbadmatch_stack_1->SetBinContent(23,1.468071);
   hbadmatch_stack_1->SetBinContent(24,0.9646727);
   hbadmatch_stack_1->SetBinContent(26,10.43914);
   hbadmatch_stack_1->SetBinError(1,3.264304);
   hbadmatch_stack_1->SetBinError(2,1.109035);
   hbadmatch_stack_1->SetBinError(3,1.946676);
   hbadmatch_stack_1->SetBinError(4,1.47925);
   hbadmatch_stack_1->SetBinError(5,0.8773931);
   hbadmatch_stack_1->SetBinError(6,1.017735);
   hbadmatch_stack_1->SetBinError(7,0.9236835);
   hbadmatch_stack_1->SetBinError(8,0.8439538);
   hbadmatch_stack_1->SetBinError(9,0.7122247);
   hbadmatch_stack_1->SetBinError(10,1.054004);
   hbadmatch_stack_1->SetBinError(11,0.9056484);
   hbadmatch_stack_1->SetBinError(12,0.5191111);
   hbadmatch_stack_1->SetBinError(13,0.9215343);
   hbadmatch_stack_1->SetBinError(14,0.7647506);
   hbadmatch_stack_1->SetBinError(15,0.7343859);
   hbadmatch_stack_1->SetBinError(16,0.3925882);
   hbadmatch_stack_1->SetBinError(17,0.3277063);
   hbadmatch_stack_1->SetBinError(18,0.3550924);
   hbadmatch_stack_1->SetBinError(19,0.6196373);
   hbadmatch_stack_1->SetBinError(20,0.4485168);
   hbadmatch_stack_1->SetBinError(21,0.3929602);
   hbadmatch_stack_1->SetBinError(22,0.3604745);
   hbadmatch_stack_1->SetBinError(23,0.682385);
   hbadmatch_stack_1->SetBinError(24,0.4966158);
   hbadmatch_stack_1->SetBinError(26,2.341441);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   hext_stack_2->SetBinContent(1,210.8279);
   hext_stack_2->SetBinContent(2,27.02967);
   hext_stack_2->SetBinContent(3,23.17558);
   hext_stack_2->SetBinContent(4,32.7882);
   hext_stack_2->SetBinContent(5,22.87436);
   hext_stack_2->SetBinContent(6,24.5051);
   hext_stack_2->SetBinContent(7,15.22123);
   hext_stack_2->SetBinContent(8,20.13349);
   hext_stack_2->SetBinContent(9,14.55366);
   hext_stack_2->SetBinContent(10,4.53161);
   hext_stack_2->SetBinContent(11,5.351989);
   hext_stack_2->SetBinContent(12,12.84229);
   hext_stack_2->SetBinContent(13,6.884593);
   hext_stack_2->SetBinContent(14,7.056177);
   hext_stack_2->SetBinContent(15,5.572643);
   hext_stack_2->SetBinContent(16,2.599588);
   hext_stack_2->SetBinContent(17,3.386835);
   hext_stack_2->SetBinContent(18,1.055394);
   hext_stack_2->SetBinContent(19,5.636075);
   hext_stack_2->SetBinContent(20,3.786253);
   hext_stack_2->SetBinContent(21,1.544194);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,1.704188);
   hext_stack_2->SetBinContent(24,1.697008);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,21.95578);
   hext_stack_2->SetBinError(1,9.871046);
   hext_stack_2->SetBinError(2,3.475589);
   hext_stack_2->SetBinError(3,3.078082);
   hext_stack_2->SetBinError(4,3.964303);
   hext_stack_2->SetBinError(5,3.039276);
   hext_stack_2->SetBinError(6,3.371056);
   hext_stack_2->SetBinError(7,2.587215);
   hext_stack_2->SetBinError(8,3.05586);
   hext_stack_2->SetBinError(9,2.598171);
   hext_stack_2->SetBinError(10,1.418025);
   hext_stack_2->SetBinError(11,1.462956);
   hext_stack_2->SetBinError(12,2.522982);
   hext_stack_2->SetBinError(13,1.675566);
   hext_stack_2->SetBinError(14,1.651211);
   hext_stack_2->SetBinError(15,1.670027);
   hext_stack_2->SetBinError(16,0.9884288);
   hext_stack_2->SetBinError(17,1.332711);
   hext_stack_2->SetBinError(18,0.6130171);
   hext_stack_2->SetBinError(19,1.765321);
   hext_stack_2->SetBinError(20,1.463777);
   hext_stack_2->SetBinError(21,0.7753719);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.7656743);
   hext_stack_2->SetBinError(24,0.8873887);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,2.996434);
   hext_stack_2->SetEntries(1136);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   hdirt_stack_3->SetBinContent(1,23.95037);
   hdirt_stack_3->SetBinContent(2,3.441823);
   hdirt_stack_3->SetBinContent(3,2.523746);
   hdirt_stack_3->SetBinContent(4,3.790367);
   hdirt_stack_3->SetBinContent(5,3.600277);
   hdirt_stack_3->SetBinContent(6,2.710883);
   hdirt_stack_3->SetBinContent(7,2.52088);
   hdirt_stack_3->SetBinContent(8,2.306166);
   hdirt_stack_3->SetBinContent(9,1.403124);
   hdirt_stack_3->SetBinContent(10,1.273141);
   hdirt_stack_3->SetBinContent(11,1.26706);
   hdirt_stack_3->SetBinContent(12,1.164455);
   hdirt_stack_3->SetBinContent(13,0.5357686);
   hdirt_stack_3->SetBinContent(14,1.250286);
   hdirt_stack_3->SetBinContent(15,0.4950385);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.1567191);
   hdirt_stack_3->SetBinContent(18,0.363255);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.2556058);
   hdirt_stack_3->SetBinContent(21,0.4336264);
   hdirt_stack_3->SetBinContent(23,0.3381872);
   hdirt_stack_3->SetBinContent(24,0.165479);
   hdirt_stack_3->SetBinContent(26,2.549723);
   hdirt_stack_3->SetBinError(1,2.708902);
   hdirt_stack_3->SetBinError(2,0.9132253);
   hdirt_stack_3->SetBinError(3,0.8046964);
   hdirt_stack_3->SetBinError(4,1.026885);
   hdirt_stack_3->SetBinError(5,0.9905664);
   hdirt_stack_3->SetBinError(6,0.7991095);
   hdirt_stack_3->SetBinError(7,1.150741);
   hdirt_stack_3->SetBinError(8,0.7573733);
   hdirt_stack_3->SetBinError(9,0.6761043);
   hdirt_stack_3->SetBinError(10,0.5957906);
   hdirt_stack_3->SetBinError(11,0.6378615);
   hdirt_stack_3->SetBinError(12,0.6210219);
   hdirt_stack_3->SetBinError(13,0.3206237);
   hdirt_stack_3->SetBinError(14,0.6442406);
   hdirt_stack_3->SetBinError(15,0.2933304);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(17,0.1567191);
   hdirt_stack_3->SetBinError(18,0.2622116);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.2556058);
   hdirt_stack_3->SetBinError(21,0.4336264);
   hdirt_stack_3->SetBinError(23,0.3381872);
   hdirt_stack_3->SetBinError(24,0.165479);
   hdirt_stack_3->SetBinError(26,0.9351519);
   hdirt_stack_3->SetEntries(238);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   houtFV_stack_4->SetBinContent(1,200.2146);
   houtFV_stack_4->SetBinContent(2,25.44043);
   houtFV_stack_4->SetBinContent(3,30.04881);
   houtFV_stack_4->SetBinContent(4,27.93433);
   houtFV_stack_4->SetBinContent(5,21.99592);
   houtFV_stack_4->SetBinContent(6,28.13082);
   houtFV_stack_4->SetBinContent(7,28.17117);
   houtFV_stack_4->SetBinContent(8,16.6951);
   houtFV_stack_4->SetBinContent(9,17.10358);
   houtFV_stack_4->SetBinContent(10,11.89122);
   houtFV_stack_4->SetBinContent(11,10.16171);
   houtFV_stack_4->SetBinContent(12,8.10773);
   houtFV_stack_4->SetBinContent(13,10.5071);
   houtFV_stack_4->SetBinContent(14,7.083691);
   houtFV_stack_4->SetBinContent(15,7.983971);
   houtFV_stack_4->SetBinContent(16,6.435104);
   houtFV_stack_4->SetBinContent(17,4.524507);
   houtFV_stack_4->SetBinContent(18,3.794833);
   houtFV_stack_4->SetBinContent(19,4.298706);
   houtFV_stack_4->SetBinContent(20,2.987687);
   houtFV_stack_4->SetBinContent(21,3.290076);
   houtFV_stack_4->SetBinContent(22,2.92429);
   houtFV_stack_4->SetBinContent(23,2.842659);
   houtFV_stack_4->SetBinContent(24,0.9286332);
   houtFV_stack_4->SetBinContent(25,1.407209);
   houtFV_stack_4->SetBinContent(26,20.95997);
   houtFV_stack_4->SetBinError(1,7.077787);
   houtFV_stack_4->SetBinError(2,2.550276);
   houtFV_stack_4->SetBinError(3,2.739774);
   houtFV_stack_4->SetBinError(4,2.629972);
   houtFV_stack_4->SetBinError(5,2.335272);
   houtFV_stack_4->SetBinError(6,2.700439);
   houtFV_stack_4->SetBinError(7,3.02184);
   houtFV_stack_4->SetBinError(8,2.018596);
   houtFV_stack_4->SetBinError(9,2.039663);
   houtFV_stack_4->SetBinError(10,1.683695);
   houtFV_stack_4->SetBinError(11,1.60654);
   houtFV_stack_4->SetBinError(12,1.442212);
   houtFV_stack_4->SetBinError(13,1.628129);
   houtFV_stack_4->SetBinError(14,1.338584);
   houtFV_stack_4->SetBinError(15,1.494957);
   houtFV_stack_4->SetBinError(16,1.252232);
   houtFV_stack_4->SetBinError(17,1.134983);
   houtFV_stack_4->SetBinError(18,0.9812825);
   houtFV_stack_4->SetBinError(19,1.048589);
   houtFV_stack_4->SetBinError(20,0.8568149);
   houtFV_stack_4->SetBinError(21,0.8699958);
   houtFV_stack_4->SetBinError(22,0.8766329);
   houtFV_stack_4->SetBinError(23,0.8969602);
   houtFV_stack_4->SetBinError(24,0.48078);
   houtFV_stack_4->SetBinError(25,0.6049994);
   houtFV_stack_4->SetBinError(26,2.377352);
   houtFV_stack_4->SetEntries(2163);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,48.83235);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,6.764786);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.706401);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.00591);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.63084);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.212756);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.295456);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.18833);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.509848);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.78544);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.547958);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.9902858);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.631826);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.170808);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.06004);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4736358);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.6539899);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7953222);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.529604);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,2.009144);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.315539);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.887196);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8593391);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7132774);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7872452);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7199764);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6845992);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4545398);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5237648);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4019797);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4021412);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2591116);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4436346);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3538311);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3759641);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1634799);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2280886);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.356662);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2470656);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.5158407);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,694.5242);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,116.8897);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,109.7767);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,96.90829);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,82.83492);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,72.05752);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,61.74327);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,51.38753);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,41.52051);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,35.42582);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,29.6975);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,26.34087);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,20.66485);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,15.7433);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,14.26293);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,12.5519);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,10.50275);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,6.469504);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,5.592978);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,5.43786);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,5.56375);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,3.402152);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,4.14101);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,3.026666);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,1.352322);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,28.90684);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,8.53632);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,3.543194);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.443977);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.237937);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.937409);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.774929);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.530297);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.351648);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.081126);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,1.913355);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,1.731745);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,1.69395);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.497913);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,1.256699);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.224542);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.209217);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,1.156936);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.8256147);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.7809579);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.7034326);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,0.7975602);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,0.5877842);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,0.6961566);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,0.5894927);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,0.3012488);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,1.751097);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   hCCpi0inFV_stack_7->SetBinContent(1,262.3152);
   hCCpi0inFV_stack_7->SetBinContent(2,41.31808);
   hCCpi0inFV_stack_7->SetBinContent(3,39.01101);
   hCCpi0inFV_stack_7->SetBinContent(4,35.19714);
   hCCpi0inFV_stack_7->SetBinContent(5,31.42901);
   hCCpi0inFV_stack_7->SetBinContent(6,34.73446);
   hCCpi0inFV_stack_7->SetBinContent(7,29.52419);
   hCCpi0inFV_stack_7->SetBinContent(8,25.37592);
   hCCpi0inFV_stack_7->SetBinContent(9,16.57146);
   hCCpi0inFV_stack_7->SetBinContent(10,19.88033);
   hCCpi0inFV_stack_7->SetBinContent(11,12.27233);
   hCCpi0inFV_stack_7->SetBinContent(12,11.3414);
   hCCpi0inFV_stack_7->SetBinContent(13,9.131644);
   hCCpi0inFV_stack_7->SetBinContent(14,9.072096);
   hCCpi0inFV_stack_7->SetBinContent(15,7.659356);
   hCCpi0inFV_stack_7->SetBinContent(16,5.27508);
   hCCpi0inFV_stack_7->SetBinContent(17,4.549576);
   hCCpi0inFV_stack_7->SetBinContent(18,4.106273);
   hCCpi0inFV_stack_7->SetBinContent(19,3.376046);
   hCCpi0inFV_stack_7->SetBinContent(20,2.352724);
   hCCpi0inFV_stack_7->SetBinContent(21,1.320373);
   hCCpi0inFV_stack_7->SetBinContent(22,2.250697);
   hCCpi0inFV_stack_7->SetBinContent(23,0.9269427);
   hCCpi0inFV_stack_7->SetBinContent(24,1.176911);
   hCCpi0inFV_stack_7->SetBinContent(25,0.9385811);
   hCCpi0inFV_stack_7->SetBinContent(26,15.89026);
   hCCpi0inFV_stack_7->SetBinError(1,8.09275);
   hCCpi0inFV_stack_7->SetBinError(2,3.262604);
   hCCpi0inFV_stack_7->SetBinError(3,3.107683);
   hCCpi0inFV_stack_7->SetBinError(4,3.010911);
   hCCpi0inFV_stack_7->SetBinError(5,2.81556);
   hCCpi0inFV_stack_7->SetBinError(6,2.967755);
   hCCpi0inFV_stack_7->SetBinError(7,2.714448);
   hCCpi0inFV_stack_7->SetBinError(8,2.507267);
   hCCpi0inFV_stack_7->SetBinError(9,1.986404);
   hCCpi0inFV_stack_7->SetBinError(10,2.232903);
   hCCpi0inFV_stack_7->SetBinError(11,1.744982);
   hCCpi0inFV_stack_7->SetBinError(12,1.616949);
   hCCpi0inFV_stack_7->SetBinError(13,1.558352);
   hCCpi0inFV_stack_7->SetBinError(14,1.589327);
   hCCpi0inFV_stack_7->SetBinError(15,1.428372);
   hCCpi0inFV_stack_7->SetBinError(16,1.135853);
   hCCpi0inFV_stack_7->SetBinError(17,1.019349);
   hCCpi0inFV_stack_7->SetBinError(18,1.000664);
   hCCpi0inFV_stack_7->SetBinError(19,0.8997438);
   hCCpi0inFV_stack_7->SetBinError(20,0.8605067);
   hCCpi0inFV_stack_7->SetBinError(21,0.5548703);
   hCCpi0inFV_stack_7->SetBinError(22,0.7346377);
   hCCpi0inFV_stack_7->SetBinError(23,0.4800908);
   hCCpi0inFV_stack_7->SetBinError(24,0.4804759);
   hCCpi0inFV_stack_7->SetBinError(25,0.5460057);
   hCCpi0inFV_stack_7->SetBinError(26,2.061385);
   hCCpi0inFV_stack_7->SetEntries(2680);

   ci = 1440;
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
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   hNCinFV_stack_8->SetBinContent(1,69.73444);
   hNCinFV_stack_8->SetBinContent(2,8.879985);
   hNCinFV_stack_8->SetBinContent(3,7.330404);
   hNCinFV_stack_8->SetBinContent(4,8.295993);
   hNCinFV_stack_8->SetBinContent(5,5.378465);
   hNCinFV_stack_8->SetBinContent(6,4.983344);
   hNCinFV_stack_8->SetBinContent(7,5.326902);
   hNCinFV_stack_8->SetBinContent(8,3.804742);
   hNCinFV_stack_8->SetBinContent(9,4.001457);
   hNCinFV_stack_8->SetBinContent(10,3.714533);
   hNCinFV_stack_8->SetBinContent(11,3.322793);
   hNCinFV_stack_8->SetBinContent(12,2.535931);
   hNCinFV_stack_8->SetBinContent(13,2.289344);
   hNCinFV_stack_8->SetBinContent(14,1.070405);
   hNCinFV_stack_8->SetBinContent(15,1.660551);
   hNCinFV_stack_8->SetBinContent(16,1.127039);
   hNCinFV_stack_8->SetBinContent(17,0.785171);
   hNCinFV_stack_8->SetBinContent(18,0.7319179);
   hNCinFV_stack_8->SetBinContent(19,1.322064);
   hNCinFV_stack_8->SetBinContent(20,0.9286332);
   hNCinFV_stack_8->SetBinContent(21,1.125349);
   hNCinFV_stack_8->SetBinContent(22,0.3917402);
   hNCinFV_stack_8->SetBinContent(23,0.1967154);
   hNCinFV_stack_8->SetBinContent(24,0.7336084);
   hNCinFV_stack_8->SetBinContent(25,0.3401776);
   hNCinFV_stack_8->SetBinContent(26,5.125115);
   hNCinFV_stack_8->SetBinError(1,4.160816);
   hNCinFV_stack_8->SetBinError(2,1.558021);
   hNCinFV_stack_8->SetBinError(3,1.315497);
   hNCinFV_stack_8->SetBinError(4,1.454428);
   hNCinFV_stack_8->SetBinError(5,1.16169);
   hNCinFV_stack_8->SetBinError(6,1.127594);
   hNCinFV_stack_8->SetBinError(7,1.178352);
   hNCinFV_stack_8->SetBinError(8,1.019779);
   hNCinFV_stack_8->SetBinError(9,1.038578);
   hNCinFV_stack_8->SetBinError(10,0.9615599);
   hNCinFV_stack_8->SetBinError(11,0.9207963);
   hNCinFV_stack_8->SetBinError(12,0.8325131);
   hNCinFV_stack_8->SetBinError(13,0.8330862);
   hNCinFV_stack_8->SetBinError(14,0.5545368);
   hNCinFV_stack_8->SetBinError(15,0.650847);
   hNCinFV_stack_8->SetBinError(16,0.5201044);
   hNCinFV_stack_8->SetBinError(17,0.3925882);
   hNCinFV_stack_8->SetBinError(18,0.438694);
   hNCinFV_stack_8->SetBinError(19,0.5554667);
   hNCinFV_stack_8->SetBinError(20,0.48078);
   hNCinFV_stack_8->SetBinError(21,0.5194673);
   hNCinFV_stack_8->SetBinError(22,0.2770047);
   hNCinFV_stack_8->SetBinError(23,0.1967154);
   hNCinFV_stack_8->SetBinError(24,0.4394482);
   hNCinFV_stack_8->SetBinError(25,0.3401776);
   hNCinFV_stack_8->SetBinError(26,1.160961);
   hNCinFV_stack_8->SetEntries(615);

   ci = 1441;
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
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   hnumuCCinFV_stack_9->SetBinContent(1,89.70074);
   hnumuCCinFV_stack_9->SetBinContent(2,22.70361);
   hnumuCCinFV_stack_9->SetBinContent(3,14.37517);
   hnumuCCinFV_stack_9->SetBinContent(4,16.44501);
   hnumuCCinFV_stack_9->SetBinContent(5,10.47143);
   hnumuCCinFV_stack_9->SetBinContent(6,8.800993);
   hnumuCCinFV_stack_9->SetBinContent(7,7.842437);
   hnumuCCinFV_stack_9->SetBinContent(8,6.471559);
   hnumuCCinFV_stack_9->SetBinContent(9,4.904381);
   hnumuCCinFV_stack_9->SetBinContent(10,2.578085);
   hnumuCCinFV_stack_9->SetBinContent(11,3.335474);
   hnumuCCinFV_stack_9->SetBinContent(12,2.186146);
   hnumuCCinFV_stack_9->SetBinContent(13,1.796306);
   hnumuCCinFV_stack_9->SetBinContent(14,2.35366);
   hnumuCCinFV_stack_9->SetBinContent(15,2.829285);
   hnumuCCinFV_stack_9->SetBinContent(16,0.4365061);
   hnumuCCinFV_stack_9->SetBinContent(17,1.490586);
   hnumuCCinFV_stack_9->SetBinContent(18,2.80668);
   hnumuCCinFV_stack_9->SetBinContent(19,2.869028);
   hnumuCCinFV_stack_9->SetBinContent(20,0.6204967);
   hnumuCCinFV_stack_9->SetBinContent(21,0.4670499);
   hnumuCCinFV_stack_9->SetBinContent(22,0.9933689);
   hnumuCCinFV_stack_9->SetBinContent(23,0.2430331);
   hnumuCCinFV_stack_9->SetBinContent(24,1.568307);
   hnumuCCinFV_stack_9->SetBinContent(25,0.1967154);
   hnumuCCinFV_stack_9->SetBinContent(26,10.6977);
   hnumuCCinFV_stack_9->SetBinError(1,5.697328);
   hnumuCCinFV_stack_9->SetBinError(2,2.889542);
   hnumuCCinFV_stack_9->SetBinError(3,1.963313);
   hnumuCCinFV_stack_9->SetBinError(4,3.080135);
   hnumuCCinFV_stack_9->SetBinError(5,1.693819);
   hnumuCCinFV_stack_9->SetBinError(6,1.696097);
   hnumuCCinFV_stack_9->SetBinError(7,1.446763);
   hnumuCCinFV_stack_9->SetBinError(8,1.390564);
   hnumuCCinFV_stack_9->SetBinError(9,1.138062);
   hnumuCCinFV_stack_9->SetBinError(10,0.8562309);
   hnumuCCinFV_stack_9->SetBinError(11,0.9459308);
   hnumuCCinFV_stack_9->SetBinError(12,0.7048297);
   hnumuCCinFV_stack_9->SetBinError(13,0.6383216);
   hnumuCCinFV_stack_9->SetBinError(14,0.8130826);
   hnumuCCinFV_stack_9->SetBinError(15,1.572404);
   hnumuCCinFV_stack_9->SetBinError(16,0.3101557);
   hnumuCCinFV_stack_9->SetBinError(17,0.699106);
   hnumuCCinFV_stack_9->SetBinError(18,0.98614);
   hnumuCCinFV_stack_9->SetBinError(19,1.119694);
   hnumuCCinFV_stack_9->SetBinError(20,0.3592508);
   hnumuCCinFV_stack_9->SetBinError(21,0.3303676);
   hnumuCCinFV_stack_9->SetBinError(22,0.5092072);
   hnumuCCinFV_stack_9->SetBinError(23,0.2430327);
   hnumuCCinFV_stack_9->SetBinError(24,0.9442732);
   hnumuCCinFV_stack_9->SetBinError(25,0.1967154);
   hnumuCCinFV_stack_9->SetBinError(26,1.948668);
   hnumuCCinFV_stack_9->SetEntries(846);

   ci = 1442;
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
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   hnueCCinFV_stack_10->SetBinContent(1,21.92911);
   hnueCCinFV_stack_10->SetBinContent(2,0.654338);
   hnueCCinFV_stack_10->SetBinContent(3,0.2451269);
   hnueCCinFV_stack_10->SetBinContent(4,1.218964);
   hnueCCinFV_stack_10->SetBinContent(5,1.62953);
   hnueCCinFV_stack_10->SetBinContent(6,0.536893);
   hnueCCinFV_stack_10->SetBinContent(7,2.197959);
   hnueCCinFV_stack_10->SetBinContent(8,0.4975739);
   hnueCCinFV_stack_10->SetBinContent(9,0.2007115);
   hnueCCinFV_stack_10->SetBinContent(10,1.394899);
   hnueCCinFV_stack_10->SetBinContent(11,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(14,0.1967203);
   hnueCCinFV_stack_10->SetBinContent(15,0.5207534);
   hnueCCinFV_stack_10->SetBinContent(26,1.020507);
   hnueCCinFV_stack_10->SetBinError(1,3.24426);
   hnueCCinFV_stack_10->SetBinError(2,0.3788402);
   hnueCCinFV_stack_10->SetBinError(3,0.2451269);
   hnueCCinFV_stack_10->SetBinError(4,0.6482876);
   hnueCCinFV_stack_10->SetBinError(5,0.7490535);
   hnueCCinFV_stack_10->SetBinError(6,0.3929602);
   hnueCCinFV_stack_10->SetBinError(7,1.2337);
   hnueCCinFV_stack_10->SetBinError(8,0.3599592);
   hnueCCinFV_stack_10->SetBinError(9,0.196756);
   hnueCCinFV_stack_10->SetBinError(10,0.6696173);
   hnueCCinFV_stack_10->SetBinError(11,0.1950249);
   hnueCCinFV_stack_10->SetBinError(12,0.1967154);
   hnueCCinFV_stack_10->SetBinError(13,0.1950249);
   hnueCCinFV_stack_10->SetBinError(14,0.1967154);
   hnueCCinFV_stack_10->SetBinError(15,0.5207534);
   hnueCCinFV_stack_10->SetBinError(26,0.5406067);
   hnueCCinFV_stack_10->SetEntries(115);

   ci = 1443;
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
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);
   hmcerror__2->SetBinContent(1,1658.855);
   hmcerror__2->SetBinContent(2,258.0442);
   hmcerror__2->SetBinContent(3,239.4952);
   hmcerror__2->SetBinContent(4,232.4619);
   hmcerror__2->SetBinContent(5,189.2967);
   hmcerror__2->SetBinContent(6,184.6517);
   hmcerror__2->SetBinContent(7,160.3188);
   hmcerror__2->SetBinContent(8,131.4885);
   hmcerror__2->SetBinContent(9,104.438);
   hmcerror__2->SetBinContent(10,85.65742);
   hmcerror__2->SetBinContent(11,69.65137);
   hmcerror__2->SetBinContent(12,66.5812);
   hmcerror__2->SetBinContent(13,56.47861);
   hmcerror__2->SetBinContent(14,47.22005);
   hmcerror__2->SetBinContent(15,44.0453);
   hmcerror__2->SetBinContent(16,30.02222);
   hmcerror__2->SetBinContent(17,26.50894);
   hmcerror__2->SetBinContent(18,20.13707);
   hmcerror__2->SetBinContent(19,25.10791);
   hmcerror__2->SetBinContent(20,17.22032);
   hmcerror__2->SetBinContent(21,15.07663);
   hmcerror__2->SetBinContent(22,11.43866);
   hmcerror__2->SetBinContent(23,11.86081);
   hmcerror__2->SetBinContent(24,10.74937);
   hmcerror__2->SetBinContent(25,4.641603);
   hmcerror__2->SetBinContent(26,119.5542);
   hmcerror__2->SetBinError(1,317.2312);
   hmcerror__2->SetBinError(2,57.77124);
   hmcerror__2->SetBinError(3,52.68729);
   hmcerror__2->SetBinError(4,48.579);
   hmcerror__2->SetBinError(5,38.49611);
   hmcerror__2->SetBinError(6,39.14129);
   hmcerror__2->SetBinError(7,34.32899);
   hmcerror__2->SetBinError(8,27.51318);
   hmcerror__2->SetBinError(9,22.45112);
   hmcerror__2->SetBinError(10,20.12397);
   hmcerror__2->SetBinError(11,16.39947);
   hmcerror__2->SetBinError(12,13.0377);
   hmcerror__2->SetBinError(13,13.64246);
   hmcerror__2->SetBinError(14,10.77768);
   hmcerror__2->SetBinError(15,12.49483);
   hmcerror__2->SetBinError(16,9.65001);
   hmcerror__2->SetBinError(17,8.003128);
   hmcerror__2->SetBinError(18,6.293637);
   hmcerror__2->SetBinError(19,6.254491);
   hmcerror__2->SetBinError(20,5.232307);
   hmcerror__2->SetBinError(21,4.966911);
   hmcerror__2->SetBinError(22,4.261612);
   hmcerror__2->SetBinError(23,4.250112);
   hmcerror__2->SetBinError(24,4.043448);
   hmcerror__2->SetBinError(25,2.406548);
   hmcerror__2->SetBinError(26,34.47301);
   hmcerror__2->SetEntries(3775.136);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3001[25] = {
   1703,
   241,
   254,
   215,
   151,
   203,
   164,
   125,
   85,
   100,
   79,
   61,
   49,
   46,
   38,
   29,
   30,
   22,
   23,
   20,
   20,
   17,
   8,
   6,
   9};
   Double_t _felx3001[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3001[25] = {
   41.26742,
   15.52417,
   15.93738,
   14.66288,
   12.28821,
   14.24781,
   12.80625,
   11.18034,
   9.3428,
   10.1212,
   9.0124,
   7.9383,
   7.1318,
   6.9153,
   6.3013,
   5.5285,
   5.6197,
   4.8417,
   4.9457,
   4.6266,
   4.6266,
   4.2835,
   3.0307,
   2.67925,
   3.19354};
   Double_t _fehx3001[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3001[25] = {
   41.26742,
   15.52417,
   15.93738,
   14.66288,
   12.28821,
   14.24781,
   12.80625,
   11.18034,
   9.1411,
   9.92,
   8.8105,
   7.7354,
   6.9277,
   6.7108,
   6.0955,
   5.3201,
   5.4117,
   4.6299,
   4.7346,
   4.4133,
   4.4133,
   4.0673,
   2.7896,
   2.41858,
   2.9582};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,99);
   Graph_Graph3001->SetMinimum(2.988675);
   Graph_Graph3001->SetMaximum(1918.362);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=20.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3698.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 88.5","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 455.5","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 54.5","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 484.9","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  98.8","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1527.8","F");

   ci = 1439;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 611.1","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 140.0","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 208.5","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 31.8","F");

   ci = 1443;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3002[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3002[25] = {
   0.1912351,
   0.2238812,
   0.2199931,
   0.2089762,
   0.2033639,
   0.2119736,
   0.2141296,
   0.2092439,
   0.2149707,
   0.2349355,
   0.2354508,
   0.1958166,
   0.2415509,
   0.2282438,
   0.2836814,
   0.3214289,
   0.301903,
   0.3125399,
   0.2491044,
   0.3038449,
   0.3294443,
   0.3725621,
   0.3583324,
   0.3761567,
   0.5184733};
   Double_t _fehx3002[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3002[25] = {
   0.1912351,
   0.2238812,
   0.2199931,
   0.2089762,
   0.2033639,
   0.2119736,
   0.2141296,
   0.2092439,
   0.2149707,
   0.2349355,
   0.2354508,
   0.1958166,
   0.2415509,
   0.2282438,
   0.2836814,
   0.3214289,
   0.301903,
   0.3125399,
   0.2491044,
   0.3038449,
   0.3294443,
   0.3725621,
   0.3583324,
   0.3761567,
   0.5184733};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,99);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3003[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3003[25] = {
   0.1822108,
   0.1947799,
   0.1929723,
   0.1850842,
   0.1872582,
   0.1842547,
   0.185468,
   0.1877049,
   0.1947262,
   0.2006868,
   0.2015751,
   0.1790999,
   0.1867977,
   0.1990729,
   0.1990065,
   0.2286174,
   0.2356347,
   0.2276679,
   0.1938378,
   0.2151599,
   0.2341367,
   0.2631915,
   0.2371264,
   0.2557794,
   0.3394888};
   Double_t _fehx3003[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3003[25] = {
   0.1822108,
   0.1947799,
   0.1929723,
   0.1850842,
   0.1872582,
   0.1842547,
   0.185468,
   0.1877049,
   0.1947262,
   0.2006868,
   0.2015751,
   0.1790999,
   0.1867977,
   0.1990729,
   0.1990065,
   0.2286174,
   0.2356347,
   0.2276679,
   0.1938378,
   0.2151599,
   0.2341367,
   0.2631915,
   0.2371264,
   0.2557794,
   0.3394888};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,99);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[25] = {
   1.8,
   5.4,
   9,
   12.6,
   16.2,
   19.8,
   23.4,
   27,
   30.6,
   34.2,
   37.8,
   41.4,
   45,
   48.6,
   52.2,
   55.8,
   59.4,
   63,
   66.6,
   70.2,
   73.8,
   77.4,
   81,
   84.6,
   88.2};
   Double_t _fy3004[25] = {
   1.026612,
   0.9339486,
   1.060564,
   0.9248828,
   0.7976895,
   1.099367,
   1.022962,
   0.9506532,
   0.8138796,
   1.167441,
   1.13422,
   0.9161745,
   0.8675851,
   0.9741625,
   0.8627482,
   0.9659513,
   1.131694,
   1.092513,
   0.9160458,
   1.161419,
   1.326556,
   1.486188,
   0.6744903,
   0.5581722,
   1.938985};
   Double_t _felx3004[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fely3004[25] = {
   0.02487706,
   0.06016092,
   0.06654571,
   0.06307648,
   0.06491505,
   0.07716045,
   0.07987991,
   0.08502901,
   0.08945782,
   0.1181591,
   0.129393,
   0.1192274,
   0.1262744,
   0.1464484,
   0.1430641,
   0.184147,
   0.2119926,
   0.2404372,
   0.1969777,
   0.268671,
   0.3068722,
   0.3744756,
   0.2555222,
   0.2492472,
   0.6880252};
   Double_t _fehx3004[25] = {
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8,
   1.8};
   Double_t _fehy3004[25] = {
   0.02487706,
   0.06016092,
   0.06654571,
   0.06307648,
   0.06491505,
   0.07716045,
   0.07987991,
   0.08502901,
   0.08752653,
   0.1158102,
   0.1264943,
   0.1161799,
   0.1226606,
   0.1421176,
   0.1383916,
   0.1772054,
   0.2041462,
   0.2299193,
   0.18857,
   0.2562844,
   0.2927245,
   0.3555748,
   0.2351948,
   0.2249974,
   0.6373229};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,99);
   Graph_Graph3004->SetMinimum(0.08218677);
   Graph_Graph3004->SetMaximum(2.803046);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",25,0,90);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
