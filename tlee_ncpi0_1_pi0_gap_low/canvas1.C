#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 21:57:08 2022) by ROOT version 6.26/00
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
   pad1->Range(-7.692308,-19.78,56.41026,2187.252);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmc__1->SetBinContent(1,988.3205);
   hmc__1->SetBinContent(2,273.6861);
   hmc__1->SetBinContent(3,313.1911);
   hmc__1->SetBinContent(4,318.3221);
   hmc__1->SetBinContent(5,309.34);
   hmc__1->SetBinContent(6,287.8151);
   hmc__1->SetBinContent(7,296.6056);
   hmc__1->SetBinContent(8,285.5369);
   hmc__1->SetBinContent(9,270.8401);
   hmc__1->SetBinContent(10,262.8459);
   hmc__1->SetBinContent(11,226.4734);
   hmc__1->SetBinContent(12,220.2638);
   hmc__1->SetBinContent(13,192.0282);
   hmc__1->SetBinContent(14,196.6739);
   hmc__1->SetBinContent(15,172.6366);
   hmc__1->SetBinContent(16,148.0389);
   hmc__1->SetBinContent(17,148.956);
   hmc__1->SetBinContent(18,131.2864);
   hmc__1->SetBinContent(19,123.9749);
   hmc__1->SetBinContent(20,116.7673);
   hmc__1->SetBinContent(21,1495.503);
   hmc__1->SetBinError(1,218.847);
   hmc__1->SetBinError(2,91.82982);
   hmc__1->SetBinError(3,90.48533);
   hmc__1->SetBinError(4,89.59432);
   hmc__1->SetBinError(5,91.92407);
   hmc__1->SetBinError(6,88.01889);
   hmc__1->SetBinError(7,84.06332);
   hmc__1->SetBinError(8,78.92812);
   hmc__1->SetBinError(9,73.98649);
   hmc__1->SetBinError(10,75.38992);
   hmc__1->SetBinError(11,66.10275);
   hmc__1->SetBinError(12,71.30066);
   hmc__1->SetBinError(13,54.29994);
   hmc__1->SetBinError(14,51.6212);
   hmc__1->SetBinError(15,47.02378);
   hmc__1->SetBinError(16,45.699);
   hmc__1->SetBinError(17,42.75992);
   hmc__1->SetBinError(18,35.76022);
   hmc__1->SetBinError(19,35.47182);
   hmc__1->SetBinError(20,34.24599);
   hmc__1->SetBinError(21,322.733);
   hmc__1->SetMinimum(-19.78);
   hmc__1->SetMaximum(2076.9);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,50);
   hs1_stack_1->SetMinimum(-1.683776e-08);
   hs1_stack_1->SetMaximum(1037.736);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,30.59434);
   hbadmatch_stack_1->SetBinContent(2,3.589323);
   hbadmatch_stack_1->SetBinContent(3,4.443083);
   hbadmatch_stack_1->SetBinContent(4,7.771308);
   hbadmatch_stack_1->SetBinContent(5,5.685838);
   hbadmatch_stack_1->SetBinContent(6,8.25952);
   hbadmatch_stack_1->SetBinContent(7,5.452686);
   hbadmatch_stack_1->SetBinContent(8,1.767479);
   hbadmatch_stack_1->SetBinContent(9,6.528034);
   hbadmatch_stack_1->SetBinContent(10,6.494123);
   hbadmatch_stack_1->SetBinContent(11,2.927099);
   hbadmatch_stack_1->SetBinContent(12,4.711854);
   hbadmatch_stack_1->SetBinContent(13,3.230293);
   hbadmatch_stack_1->SetBinContent(14,4.293365);
   hbadmatch_stack_1->SetBinContent(15,5.970925);
   hbadmatch_stack_1->SetBinContent(16,3.10209);
   hbadmatch_stack_1->SetBinContent(17,5.280573);
   hbadmatch_stack_1->SetBinContent(18,3.371665);
   hbadmatch_stack_1->SetBinContent(19,3.406608);
   hbadmatch_stack_1->SetBinContent(20,2.495697);
   hbadmatch_stack_1->SetBinContent(21,54.08419);
   hbadmatch_stack_1->SetBinError(1,3.196292);
   hbadmatch_stack_1->SetBinError(2,0.8811405);
   hbadmatch_stack_1->SetBinError(3,1.069266);
   hbadmatch_stack_1->SetBinError(4,1.447989);
   hbadmatch_stack_1->SetBinError(5,1.52483);
   hbadmatch_stack_1->SetBinError(6,2.290554);
   hbadmatch_stack_1->SetBinError(7,1.410465);
   hbadmatch_stack_1->SetBinError(8,0.6400888);
   hbadmatch_stack_1->SetBinError(9,1.314791);
   hbadmatch_stack_1->SetBinError(10,1.28934);
   hbadmatch_stack_1->SetBinError(11,0.8819846);
   hbadmatch_stack_1->SetBinError(12,1.330086);
   hbadmatch_stack_1->SetBinError(13,0.9945869);
   hbadmatch_stack_1->SetBinError(14,1.183226);
   hbadmatch_stack_1->SetBinError(15,1.977573);
   hbadmatch_stack_1->SetBinError(16,0.8519922);
   hbadmatch_stack_1->SetBinError(17,1.292318);
   hbadmatch_stack_1->SetBinError(18,1.05779);
   hbadmatch_stack_1->SetBinError(19,0.8215177);
   hbadmatch_stack_1->SetBinError(20,0.7946306);
   hbadmatch_stack_1->SetBinError(21,4.227937);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hext_stack_2->SetBinContent(1,127.537);
   hext_stack_2->SetBinContent(2,23.53468);
   hext_stack_2->SetBinContent(3,31.08124);
   hext_stack_2->SetBinContent(4,32.722);
   hext_stack_2->SetBinContent(5,23.69033);
   hext_stack_2->SetBinContent(6,29.21107);
   hext_stack_2->SetBinContent(7,31.09566);
   hext_stack_2->SetBinContent(8,29.30203);
   hext_stack_2->SetBinContent(9,29.7936);
   hext_stack_2->SetBinContent(10,23.65877);
   hext_stack_2->SetBinContent(11,22.66964);
   hext_stack_2->SetBinContent(12,25.97585);
   hext_stack_2->SetBinContent(13,22.38991);
   hext_stack_2->SetBinContent(14,27.2878);
   hext_stack_2->SetBinContent(15,20.68572);
   hext_stack_2->SetBinContent(16,11.03996);
   hext_stack_2->SetBinContent(17,19.48469);
   hext_stack_2->SetBinContent(18,15.04964);
   hext_stack_2->SetBinContent(19,11.91659);
   hext_stack_2->SetBinContent(20,16.72788);
   hext_stack_2->SetBinContent(21,179.484);
   hext_stack_2->SetBinError(1,7.753482);
   hext_stack_2->SetBinError(2,3.272919);
   hext_stack_2->SetBinError(3,3.932654);
   hext_stack_2->SetBinError(4,3.965432);
   hext_stack_2->SetBinError(5,3.038341);
   hext_stack_2->SetBinError(6,3.599649);
   hext_stack_2->SetBinError(7,3.705799);
   hext_stack_2->SetBinError(8,3.823378);
   hext_stack_2->SetBinError(9,3.808845);
   hext_stack_2->SetBinError(10,3.420973);
   hext_stack_2->SetBinError(11,3.160364);
   hext_stack_2->SetBinError(12,3.675023);
   hext_stack_2->SetBinError(13,3.236869);
   hext_stack_2->SetBinError(14,3.677543);
   hext_stack_2->SetBinError(15,3.145006);
   hext_stack_2->SetBinError(16,2.078373);
   hext_stack_2->SetBinError(17,3.021227);
   hext_stack_2->SetBinError(18,2.602826);
   hext_stack_2->SetBinError(19,2.231065);
   hext_stack_2->SetBinError(20,2.798114);
   hext_stack_2->SetBinError(21,9.040049);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,13.79405);
   hdirt_stack_3->SetBinContent(2,1.833556);
   hdirt_stack_3->SetBinContent(3,2.697208);
   hdirt_stack_3->SetBinContent(4,3.292989);
   hdirt_stack_3->SetBinContent(5,5.197083);
   hdirt_stack_3->SetBinContent(6,2.364465);
   hdirt_stack_3->SetBinContent(7,2.871601);
   hdirt_stack_3->SetBinContent(8,4.706694);
   hdirt_stack_3->SetBinContent(9,3.559019);
   hdirt_stack_3->SetBinContent(10,2.04394);
   hdirt_stack_3->SetBinContent(11,1.07489);
   hdirt_stack_3->SetBinContent(12,2.276031);
   hdirt_stack_3->SetBinContent(13,2.088449);
   hdirt_stack_3->SetBinContent(14,1.260774);
   hdirt_stack_3->SetBinContent(15,0.8588142);
   hdirt_stack_3->SetBinContent(16,1.627984);
   hdirt_stack_3->SetBinContent(17,0.6951543);
   hdirt_stack_3->SetBinContent(18,0.7823644);
   hdirt_stack_3->SetBinContent(19,1.20038);
   hdirt_stack_3->SetBinContent(20,1.169656);
   hdirt_stack_3->SetBinContent(21,17.63594);
   hdirt_stack_3->SetBinError(1,2.045262);
   hdirt_stack_3->SetBinError(2,0.6648947);
   hdirt_stack_3->SetBinError(3,0.8792086);
   hdirt_stack_3->SetBinError(4,0.9968354);
   hdirt_stack_3->SetBinError(5,1.251379);
   hdirt_stack_3->SetBinError(6,1.065442);
   hdirt_stack_3->SetBinError(7,0.8996316);
   hdirt_stack_3->SetBinError(8,1.247606);
   hdirt_stack_3->SetBinError(9,0.9699808);
   hdirt_stack_3->SetBinError(10,0.7068797);
   hdirt_stack_3->SetBinError(11,0.5051084);
   hdirt_stack_3->SetBinError(12,0.7441103);
   hdirt_stack_3->SetBinError(13,1.158006);
   hdirt_stack_3->SetBinError(14,0.570378);
   hdirt_stack_3->SetBinError(15,0.4562172);
   hdirt_stack_3->SetBinError(16,0.6026798);
   hdirt_stack_3->SetBinError(17,0.4258516);
   hdirt_stack_3->SetBinError(18,0.4241319);
   hdirt_stack_3->SetBinError(19,0.5199126);
   hdirt_stack_3->SetBinError(20,0.54277);
   hdirt_stack_3->SetBinError(21,2.249578);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,111.6284);
   houtFV_stack_4->SetBinContent(2,25.16589);
   houtFV_stack_4->SetBinContent(3,28.11076);
   houtFV_stack_4->SetBinContent(4,30.64605);
   houtFV_stack_4->SetBinContent(5,26.0841);
   houtFV_stack_4->SetBinContent(6,25.5948);
   houtFV_stack_4->SetBinContent(7,25.78724);
   houtFV_stack_4->SetBinContent(8,24.25846);
   houtFV_stack_4->SetBinContent(9,28.53841);
   houtFV_stack_4->SetBinContent(10,21.68254);
   houtFV_stack_4->SetBinContent(11,19.93668);
   houtFV_stack_4->SetBinContent(12,24.17649);
   houtFV_stack_4->SetBinContent(13,17.14606);
   houtFV_stack_4->SetBinContent(14,16.42215);
   houtFV_stack_4->SetBinContent(15,20.05301);
   houtFV_stack_4->SetBinContent(16,16.19429);
   houtFV_stack_4->SetBinContent(17,18.75177);
   houtFV_stack_4->SetBinContent(18,13.68655);
   houtFV_stack_4->SetBinContent(19,16.40784);
   houtFV_stack_4->SetBinContent(20,12.98333);
   houtFV_stack_4->SetBinContent(21,156.5572);
   houtFV_stack_4->SetBinError(1,5.402388);
   houtFV_stack_4->SetBinError(2,2.497888);
   houtFV_stack_4->SetBinError(3,2.817317);
   houtFV_stack_4->SetBinError(4,2.820288);
   houtFV_stack_4->SetBinError(5,2.56921);
   houtFV_stack_4->SetBinError(6,2.557074);
   houtFV_stack_4->SetBinError(7,2.590056);
   houtFV_stack_4->SetBinError(8,2.46672);
   houtFV_stack_4->SetBinError(9,2.631272);
   houtFV_stack_4->SetBinError(10,2.243917);
   houtFV_stack_4->SetBinError(11,2.218822);
   houtFV_stack_4->SetBinError(12,2.483254);
   houtFV_stack_4->SetBinError(13,2.093437);
   houtFV_stack_4->SetBinError(14,2.021795);
   houtFV_stack_4->SetBinError(15,2.282006);
   houtFV_stack_4->SetBinError(16,2.017826);
   houtFV_stack_4->SetBinError(17,2.254421);
   houtFV_stack_4->SetBinError(18,1.887275);
   houtFV_stack_4->SetBinError(19,1.997157);
   houtFV_stack_4->SetBinError(20,1.770341);
   houtFV_stack_4->SetBinError(21,6.28824);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,14.1732);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.881249);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.920185);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.277967);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.679584);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.613761);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.937097);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.272558);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.920067);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.563397);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.842764);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.931082);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.107634);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.604504);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.978607);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.571931);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.659398);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,2.000623);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.441498);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.94401);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,27.28998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.409192);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.9022109);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8014448);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.854873);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8878417);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8285045);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6829717);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.045926);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6549347);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.584581);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8791116);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8388418);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5425693);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6671766);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4175519);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7230884);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6931052);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3687266);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.57033);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7307511);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.893932);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.03608);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.411261);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.7051733);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7844748);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.333096);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8471818);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.8286222);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6911756);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3458048);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7121855);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.707855);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5505438);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.7352407);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.48663);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.7567937);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5276794);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6467803);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.5729277);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3343505);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1818148);
   hNCpi0inFVqe_stack_6->SetBinContent(21,3.686174);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3541892);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.407111);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1909094);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1823142);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3526746);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2837185);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2263232);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.237345);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.09627502);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.199291);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.298797);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2055421);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2439012);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1804735);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2394128);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2543716);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2547443);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1960474);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.155646);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.06937422);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.6285327);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,256.3203);
   hNCpi0inFVres_stack_7->SetBinContent(2,105.5049);
   hNCpi0inFVres_stack_7->SetBinContent(3,114.8465);
   hNCpi0inFVres_stack_7->SetBinContent(4,107.9333);
   hNCpi0inFVres_stack_7->SetBinContent(5,110.8003);
   hNCpi0inFVres_stack_7->SetBinContent(6,105.0249);
   hNCpi0inFVres_stack_7->SetBinContent(7,102.2793);
   hNCpi0inFVres_stack_7->SetBinContent(8,102.7222);
   hNCpi0inFVres_stack_7->SetBinContent(9,95.48975);
   hNCpi0inFVres_stack_7->SetBinContent(10,91.3531);
   hNCpi0inFVres_stack_7->SetBinContent(11,77.77061);
   hNCpi0inFVres_stack_7->SetBinContent(12,76.06355);
   hNCpi0inFVres_stack_7->SetBinContent(13,67.08253);
   hNCpi0inFVres_stack_7->SetBinContent(14,62.60896);
   hNCpi0inFVres_stack_7->SetBinContent(15,58.6997);
   hNCpi0inFVres_stack_7->SetBinContent(16,49.41359);
   hNCpi0inFVres_stack_7->SetBinContent(17,45.30551);
   hNCpi0inFVres_stack_7->SetBinContent(18,43.43396);
   hNCpi0inFVres_stack_7->SetBinContent(19,38.91098);
   hNCpi0inFVres_stack_7->SetBinContent(20,37.65059);
   hNCpi0inFVres_stack_7->SetBinContent(21,422.9521);
   hNCpi0inFVres_stack_7->SetBinError(1,5.292159);
   hNCpi0inFVres_stack_7->SetBinError(2,3.289381);
   hNCpi0inFVres_stack_7->SetBinError(3,3.404797);
   hNCpi0inFVres_stack_7->SetBinError(4,3.234823);
   hNCpi0inFVres_stack_7->SetBinError(5,3.369732);
   hNCpi0inFVres_stack_7->SetBinError(6,3.239023);
   hNCpi0inFVres_stack_7->SetBinError(7,3.149028);
   hNCpi0inFVres_stack_7->SetBinError(8,3.301325);
   hNCpi0inFVres_stack_7->SetBinError(9,3.218891);
   hNCpi0inFVres_stack_7->SetBinError(10,3.172865);
   hNCpi0inFVres_stack_7->SetBinError(11,2.775103);
   hNCpi0inFVres_stack_7->SetBinError(12,2.843901);
   hNCpi0inFVres_stack_7->SetBinError(13,2.664921);
   hNCpi0inFVres_stack_7->SetBinError(14,2.559351);
   hNCpi0inFVres_stack_7->SetBinError(15,2.61935);
   hNCpi0inFVres_stack_7->SetBinError(16,2.227913);
   hNCpi0inFVres_stack_7->SetBinError(17,2.176031);
   hNCpi0inFVres_stack_7->SetBinError(18,2.302821);
   hNCpi0inFVres_stack_7->SetBinError(19,2.033027);
   hNCpi0inFVres_stack_7->SetBinError(20,1.987071);
   hNCpi0inFVres_stack_7->SetBinError(21,6.919455);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,53.59318);
   hNCpi0inFVdis_stack_8->SetBinContent(2,19.58576);
   hNCpi0inFVdis_stack_8->SetBinContent(3,22.06879);
   hNCpi0inFVdis_stack_8->SetBinContent(4,25.7562);
   hNCpi0inFVdis_stack_8->SetBinContent(5,25.99141);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.40497);
   hNCpi0inFVdis_stack_8->SetBinContent(7,21.59606);
   hNCpi0inFVdis_stack_8->SetBinContent(8,20.49055);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.35919);
   hNCpi0inFVdis_stack_8->SetBinContent(10,19.50735);
   hNCpi0inFVdis_stack_8->SetBinContent(11,16.04905);
   hNCpi0inFVdis_stack_8->SetBinContent(12,16.8295);
   hNCpi0inFVdis_stack_8->SetBinContent(13,17.46013);
   hNCpi0inFVdis_stack_8->SetBinContent(14,14.38464);
   hNCpi0inFVdis_stack_8->SetBinContent(15,15.73047);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.71685);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.11905);
   hNCpi0inFVdis_stack_8->SetBinContent(18,12.16477);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.906092);
   hNCpi0inFVdis_stack_8->SetBinContent(20,7.658859);
   hNCpi0inFVdis_stack_8->SetBinContent(21,93.9554);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.523664);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.449638);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.540856);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.731707);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.781548);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.551112);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.500067);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.4681);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.345932);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.618403);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.344224);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.590643);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.563868);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.382719);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.606185);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.246141);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.074992);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.390025);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.124169);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9185355);
   hNCpi0inFVdis_stack_8->SetBinError(21,3.347323);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1397278);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.04960734);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2929012);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1663191);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.03236644);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05214635);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05281172);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.3464881);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.08002707);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02871574);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1714955);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1340722);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02078985);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.030178);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03058298);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1570511);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,152.4924);
   hCCpi0inFV_stack_10->SetBinContent(2,41.67302);
   hCCpi0inFV_stack_10->SetBinContent(3,52.68654);
   hCCpi0inFV_stack_10->SetBinContent(4,54.71544);
   hCCpi0inFV_stack_10->SetBinContent(5,51.88777);
   hCCpi0inFV_stack_10->SetBinContent(6,48.01685);
   hCCpi0inFV_stack_10->SetBinContent(7,55.41796);
   hCCpi0inFV_stack_10->SetBinContent(8,54.85717);
   hCCpi0inFV_stack_10->SetBinContent(9,42.47058);
   hCCpi0inFV_stack_10->SetBinContent(10,51.94745);
   hCCpi0inFV_stack_10->SetBinContent(11,43.61848);
   hCCpi0inFV_stack_10->SetBinContent(12,36.42728);
   hCCpi0inFV_stack_10->SetBinContent(13,30.01049);
   hCCpi0inFV_stack_10->SetBinContent(14,35.86139);
   hCCpi0inFV_stack_10->SetBinContent(15,25.86597);
   hCCpi0inFV_stack_10->SetBinContent(16,23.39408);
   hCCpi0inFV_stack_10->SetBinContent(17,23.06476);
   hCCpi0inFV_stack_10->SetBinContent(18,19.73683);
   hCCpi0inFV_stack_10->SetBinContent(19,18.18922);
   hCCpi0inFV_stack_10->SetBinContent(20,18.07386);
   hCCpi0inFV_stack_10->SetBinContent(21,214.6096);
   hCCpi0inFV_stack_10->SetBinError(1,6.181184);
   hCCpi0inFV_stack_10->SetBinError(2,3.216166);
   hCCpi0inFV_stack_10->SetBinError(3,3.673957);
   hCCpi0inFV_stack_10->SetBinError(4,3.688573);
   hCCpi0inFV_stack_10->SetBinError(5,3.617638);
   hCCpi0inFV_stack_10->SetBinError(6,3.503982);
   hCCpi0inFV_stack_10->SetBinError(7,3.775273);
   hCCpi0inFV_stack_10->SetBinError(8,3.770559);
   hCCpi0inFV_stack_10->SetBinError(9,3.20129);
   hCCpi0inFV_stack_10->SetBinError(10,3.612022);
   hCCpi0inFV_stack_10->SetBinError(11,3.335344);
   hCCpi0inFV_stack_10->SetBinError(12,3.050357);
   hCCpi0inFV_stack_10->SetBinError(13,2.73444);
   hCCpi0inFV_stack_10->SetBinError(14,3.074087);
   hCCpi0inFV_stack_10->SetBinError(15,2.530845);
   hCCpi0inFV_stack_10->SetBinError(16,2.381661);
   hCCpi0inFV_stack_10->SetBinError(17,2.461905);
   hCCpi0inFV_stack_10->SetBinError(18,2.215735);
   hCCpi0inFV_stack_10->SetBinError(19,2.085733);
   hCCpi0inFV_stack_10->SetBinError(20,2.133617);
   hCCpi0inFV_stack_10->SetBinError(21,7.331971);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,67.10428);
   hNCinFV_stack_11->SetBinContent(2,21.3098);
   hNCinFV_stack_11->SetBinContent(3,25.11985);
   hNCinFV_stack_11->SetBinContent(4,22.46817);
   hNCinFV_stack_11->SetBinContent(5,26.16376);
   hNCinFV_stack_11->SetBinContent(6,22.74251);
   hNCinFV_stack_11->SetBinContent(7,26.07273);
   hNCinFV_stack_11->SetBinContent(8,21.06607);
   hNCinFV_stack_11->SetBinContent(9,20.97971);
   hNCinFV_stack_11->SetBinContent(10,20.29268);
   hNCinFV_stack_11->SetBinContent(11,18.82445);
   hNCinFV_stack_11->SetBinContent(12,14.20129);
   hNCinFV_stack_11->SetBinContent(13,15.348);
   hNCinFV_stack_11->SetBinContent(14,13.75149);
   hNCinFV_stack_11->SetBinContent(15,9.893693);
   hNCinFV_stack_11->SetBinContent(16,12.71985);
   hNCinFV_stack_11->SetBinContent(17,9.077201);
   hNCinFV_stack_11->SetBinContent(18,9.876951);
   hNCinFV_stack_11->SetBinContent(19,11.41565);
   hNCinFV_stack_11->SetBinContent(20,7.194101);
   hNCinFV_stack_11->SetBinContent(21,119.6187);
   hNCinFV_stack_11->SetBinError(1,4.565833);
   hNCinFV_stack_11->SetBinError(2,2.339183);
   hNCinFV_stack_11->SetBinError(3,2.679192);
   hNCinFV_stack_11->SetBinError(4,2.52956);
   hNCinFV_stack_11->SetBinError(5,2.713562);
   hNCinFV_stack_11->SetBinError(6,2.703356);
   hNCinFV_stack_11->SetBinError(7,3.147112);
   hNCinFV_stack_11->SetBinError(8,2.634287);
   hNCinFV_stack_11->SetBinError(9,2.488342);
   hNCinFV_stack_11->SetBinError(10,2.440005);
   hNCinFV_stack_11->SetBinError(11,2.383142);
   hNCinFV_stack_11->SetBinError(12,1.98996);
   hNCinFV_stack_11->SetBinError(13,2.174166);
   hNCinFV_stack_11->SetBinError(14,1.890552);
   hNCinFV_stack_11->SetBinError(15,1.664675);
   hNCinFV_stack_11->SetBinError(16,1.857607);
   hNCinFV_stack_11->SetBinError(17,1.49067);
   hNCinFV_stack_11->SetBinError(18,1.628001);
   hNCinFV_stack_11->SetBinError(19,1.959264);
   hNCinFV_stack_11->SetBinError(20,1.470823);
   hNCinFV_stack_11->SetBinError(21,5.797354);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,152.8327);
   hnumuCCinFV_stack_12->SetBinContent(2,23.9968);
   hnumuCCinFV_stack_12->SetBinContent(3,24.44072);
   hnumuCCinFV_stack_12->SetBinContent(4,25.67802);
   hnumuCCinFV_stack_12->SetBinContent(5,25.81537);
   hnumuCCinFV_stack_12->SetBinContent(6,17.68786);
   hnumuCCinFV_stack_12->SetBinContent(7,19.37389);
   hnumuCCinFV_stack_12->SetBinContent(8,18.17542);
   hnumuCCinFV_stack_12->SetBinContent(9,16.73111);
   hnumuCCinFV_stack_12->SetBinContent(10,19.39318);
   hnumuCCinFV_stack_12->SetBinContent(11,18.4929);
   hnumuCCinFV_stack_12->SetBinContent(12,14.47973);
   hnumuCCinFV_stack_12->SetBinContent(13,12.24018);
   hnumuCCinFV_stack_12->SetBinContent(14,15.63156);
   hnumuCCinFV_stack_12->SetBinContent(15,10.93099);
   hnumuCCinFV_stack_12->SetBinContent(16,14.45105);
   hnumuCCinFV_stack_12->SetBinContent(17,13.65342);
   hnumuCCinFV_stack_12->SetBinContent(18,9.393211);
   hnumuCCinFV_stack_12->SetBinContent(19,9.979033);
   hnumuCCinFV_stack_12->SetBinContent(20,10.28014);
   hnumuCCinFV_stack_12->SetBinContent(21,180.104);
   hnumuCCinFV_stack_12->SetBinError(1,7.269338);
   hnumuCCinFV_stack_12->SetBinError(2,2.714154);
   hnumuCCinFV_stack_12->SetBinError(3,3.33222);
   hnumuCCinFV_stack_12->SetBinError(4,2.922356);
   hnumuCCinFV_stack_12->SetBinError(5,3.502628);
   hnumuCCinFV_stack_12->SetBinError(6,2.09993);
   hnumuCCinFV_stack_12->SetBinError(7,2.34625);
   hnumuCCinFV_stack_12->SetBinError(8,2.228912);
   hnumuCCinFV_stack_12->SetBinError(9,2.093857);
   hnumuCCinFV_stack_12->SetBinError(10,2.652174);
   hnumuCCinFV_stack_12->SetBinError(11,2.820696);
   hnumuCCinFV_stack_12->SetBinError(12,2.105826);
   hnumuCCinFV_stack_12->SetBinError(13,1.807458);
   hnumuCCinFV_stack_12->SetBinError(14,2.212795);
   hnumuCCinFV_stack_12->SetBinError(15,1.76247);
   hnumuCCinFV_stack_12->SetBinError(16,2.415561);
   hnumuCCinFV_stack_12->SetBinError(17,1.944927);
   hnumuCCinFV_stack_12->SetBinError(18,1.649418);
   hnumuCCinFV_stack_12->SetBinError(19,1.614907);
   hnumuCCinFV_stack_12->SetBinError(20,2.178801);
   hnumuCCinFV_stack_12->SetBinError(21,7.884075);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,6.074776);
   hnueCCinFV_stack_13->SetBinContent(2,1.182504);
   hnueCCinFV_stack_13->SetBinContent(3,2.071007);
   hnueCCinFV_stack_13->SetBinContent(4,1.226526);
   hnueCCinFV_stack_13->SetBinContent(5,1.011331);
   hnueCCinFV_stack_13->SetBinContent(6,0.7542815);
   hnueCCinFV_stack_13->SetBinContent(7,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(8,1.208279);
   hnueCCinFV_stack_13->SetBinContent(9,2.958495);
   hnueCCinFV_stack_13->SetBinContent(10,2.178832);
   hnueCCinFV_stack_13->SetBinContent(11,0.5265648);
   hnueCCinFV_stack_13->SetBinContent(12,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(13,1.189329);
   hnueCCinFV_stack_13->SetBinContent(14,1.069942);
   hnueCCinFV_stack_13->SetBinContent(15,1.159045);
   hnueCCinFV_stack_13->SetBinContent(16,1.268828);
   hnueCCinFV_stack_13->SetBinContent(17,0.2176802);
   hnueCCinFV_stack_13->SetBinContent(18,1.216883);
   hnueCCinFV_stack_13->SetBinContent(19,0.8666171);
   hnueCCinFV_stack_13->SetBinContent(20,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(21,25.17896);
   hnueCCinFV_stack_13->SetBinError(1,1.715866);
   hnueCCinFV_stack_13->SetBinError(2,0.5436886);
   hnueCCinFV_stack_13->SetBinError(3,0.8544523);
   hnueCCinFV_stack_13->SetBinError(4,0.5028308);
   hnueCCinFV_stack_13->SetBinError(5,0.4530714);
   hnueCCinFV_stack_13->SetBinError(6,0.4416112);
   hnueCCinFV_stack_13->SetBinError(7,0.5197486);
   hnueCCinFV_stack_13->SetBinError(8,0.5775855);
   hnueCCinFV_stack_13->SetBinError(9,1.435844);
   hnueCCinFV_stack_13->SetBinError(10,0.7809006);
   hnueCCinFV_stack_13->SetBinError(11,0.3804727);
   hnueCCinFV_stack_13->SetBinError(12,0.3397478);
   hnueCCinFV_stack_13->SetBinError(13,0.5456561);
   hnueCCinFV_stack_13->SetBinError(14,0.589286);
   hnueCCinFV_stack_13->SetBinError(15,0.5936429);
   hnueCCinFV_stack_13->SetBinError(16,0.743831);
   hnueCCinFV_stack_13->SetBinError(17,0.2176802);
   hnueCCinFV_stack_13->SetBinError(18,0.5012526);
   hnueCCinFV_stack_13->SetBinError(19,0.4390927);
   hnueCCinFV_stack_13->SetBinError(20,0.2758068);
   hnueCCinFV_stack_13->SetBinError(21,3.635658);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmcerror__2->SetBinContent(1,988.3205);
   hmcerror__2->SetBinContent(2,273.6861);
   hmcerror__2->SetBinContent(3,313.1911);
   hmcerror__2->SetBinContent(4,318.3221);
   hmcerror__2->SetBinContent(5,309.34);
   hmcerror__2->SetBinContent(6,287.8151);
   hmcerror__2->SetBinContent(7,296.6056);
   hmcerror__2->SetBinContent(8,285.5369);
   hmcerror__2->SetBinContent(9,270.8401);
   hmcerror__2->SetBinContent(10,262.8459);
   hmcerror__2->SetBinContent(11,226.4734);
   hmcerror__2->SetBinContent(12,220.2638);
   hmcerror__2->SetBinContent(13,192.0282);
   hmcerror__2->SetBinContent(14,196.6739);
   hmcerror__2->SetBinContent(15,172.6366);
   hmcerror__2->SetBinContent(16,148.0389);
   hmcerror__2->SetBinContent(17,148.956);
   hmcerror__2->SetBinContent(18,131.2864);
   hmcerror__2->SetBinContent(19,123.9749);
   hmcerror__2->SetBinContent(20,116.7673);
   hmcerror__2->SetBinContent(21,1495.503);
   hmcerror__2->SetBinError(1,218.847);
   hmcerror__2->SetBinError(2,91.82982);
   hmcerror__2->SetBinError(3,90.48533);
   hmcerror__2->SetBinError(4,89.59432);
   hmcerror__2->SetBinError(5,91.92407);
   hmcerror__2->SetBinError(6,88.01889);
   hmcerror__2->SetBinError(7,84.06332);
   hmcerror__2->SetBinError(8,78.92812);
   hmcerror__2->SetBinError(9,73.98649);
   hmcerror__2->SetBinError(10,75.38992);
   hmcerror__2->SetBinError(11,66.10275);
   hmcerror__2->SetBinError(12,71.30066);
   hmcerror__2->SetBinError(13,54.29994);
   hmcerror__2->SetBinError(14,51.6212);
   hmcerror__2->SetBinError(15,47.02378);
   hmcerror__2->SetBinError(16,45.699);
   hmcerror__2->SetBinError(17,42.75992);
   hmcerror__2->SetBinError(18,35.76022);
   hmcerror__2->SetBinError(19,35.47182);
   hmcerror__2->SetBinError(20,34.24599);
   hmcerror__2->SetBinError(21,322.733);
   hmcerror__2->SetEntries(7381.09);

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
   
   Double_t _fx3001[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3001[20] = {
   989,
   260,
   282,
   317,
   276,
   342,
   293,
   250,
   239,
   253,
   202,
   191,
   152,
   180,
   157,
   160,
   150,
   124,
   128,
   108};
   Double_t _felx3001[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3001[20] = {
   31.44837,
   16.12452,
   16.79286,
   17.80449,
   16.61325,
   18.49324,
   17.11724,
   15.81139,
   15.45962,
   15.90597,
   14.21267,
   13.82027,
   12.32883,
   13.41641,
   12.52996,
   12.64911,
   12.24745,
   11.13553,
   11.31371,
   10.3923};
   Double_t _fehx3001[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3001[20] = {
   31.44837,
   16.12452,
   16.79286,
   17.80449,
   16.61325,
   18.49324,
   17.11724,
   15.81139,
   15.45962,
   15.90597,
   14.21267,
   13.82027,
   12.32883,
   13.41641,
   12.52996,
   12.64911,
   12.24745,
   11.13553,
   11.31371,
   10.3923};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,55);
   Graph_Graph3001->SetMinimum(5.323628);
   Graph_Graph3001->SetMaximum(1112.732);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.2/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 5053.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 119.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 574.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 55.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 523.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  88.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  15.2","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1749.2","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  379.4","F");

   ci = 1441;
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

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 880.4","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 395.6","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 473.7","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3002[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3002[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3002[20] = {
   0.2214332,
   0.3355298,
   0.2889142,
   0.2814581,
   0.297162,
   0.3058175,
   0.2834179,
   0.27642,
   0.2731741,
   0.2868217,
   0.2918787,
   0.3237058,
   0.2827706,
   0.262471,
   0.272386,
   0.3086959,
   0.2870641,
   0.2723833,
   0.2861211,
   0.2932841};
   Double_t _fehx3002[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3002[20] = {
   0.2214332,
   0.3355298,
   0.2889142,
   0.2814581,
   0.297162,
   0.3058175,
   0.2834179,
   0.27642,
   0.2731741,
   0.2868217,
   0.2918787,
   0.3237058,
   0.2827706,
   0.262471,
   0.272386,
   0.3086959,
   0.2870641,
   0.2723833,
   0.2861211,
   0.2932841};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,55);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3003[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3003[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3003[20] = {
   0.2114696,
   0.3110446,
   0.2783018,
   0.269657,
   0.2729608,
   0.2825098,
   0.2530023,
   0.2608979,
   0.2534309,
   0.2579679,
   0.2575695,
   0.2466207,
   0.2448337,
   0.2400934,
   0.2456302,
   0.2520539,
   0.2300764,
   0.2317864,
   0.2487359,
   0.2461831};
   Double_t _fehx3003[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3003[20] = {
   0.2114696,
   0.3110446,
   0.2783018,
   0.269657,
   0.2729608,
   0.2825098,
   0.2530023,
   0.2608979,
   0.2534309,
   0.2579679,
   0.2575695,
   0.2466207,
   0.2448337,
   0.2400934,
   0.2456302,
   0.2520539,
   0.2300764,
   0.2317864,
   0.2487359,
   0.2461831};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,55);
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
   
   Double_t _fx3004[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3004[20] = {
   1.000688,
   0.9499936,
   0.9004088,
   0.9958468,
   0.8922222,
   1.188263,
   0.9878439,
   0.8755435,
   0.8824395,
   0.962541,
   0.8919371,
   0.867142,
   0.7915503,
   0.9152204,
   0.9094249,
   1.080797,
   1.007009,
   0.9445001,
   1.032467,
   0.9249165};
   Double_t _felx3004[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3004[20] = {
   0.03182001,
   0.0589161,
   0.05361856,
   0.05593233,
   0.05370547,
   0.0642539,
   0.05771046,
   0.05537423,
   0.05708027,
   0.06051443,
   0.06275648,
   0.06274419,
   0.06420321,
   0.0682165,
   0.07258001,
   0.08544451,
   0.08222193,
   0.08481862,
   0.09125809,
   0.08900013};
   Double_t _fehx3004[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3004[20] = {
   0.03182001,
   0.0589161,
   0.05361856,
   0.05593233,
   0.05370547,
   0.0642539,
   0.05771046,
   0.05537423,
   0.05708027,
   0.06051443,
   0.06275648,
   0.06274419,
   0.06420321,
   0.0682165,
   0.07258001,
   0.08544451,
   0.08222193,
   0.08481862,
   0.09125809,
   0.08900013};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,55);
   Graph_Graph3004->SetMinimum(0.6748301);
   Graph_Graph3004->SetMaximum(1.305034);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_kine_pio_gap_low_all",20,0,50);

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
   TLine *line = new TLine(0,1,50,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
