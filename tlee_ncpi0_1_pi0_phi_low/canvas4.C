#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 23:52:13 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas4->SetHighLightColor(2);
   canvas4->Range(0,0,1,1);
   canvas4->SetFillColor(0);
   canvas4->SetBorderMode(0);
   canvas4->SetBorderSize(2);
   canvas4->SetLeftMargin(0.12);
   canvas4->SetRightMargin(0.12);
   canvas4->SetTopMargin(0.05);
   canvas4->SetBottomMargin(0.12);
   canvas4->SetFrameLineWidth(2);
   canvas4->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-4.119231,-4,3.957692,442.3158);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmc__10->SetBinContent(1,141.2114);
   hmc__10->SetBinContent(2,146.2301);
   hmc__10->SetBinContent(3,149.9662);
   hmc__10->SetBinContent(4,150.5054);
   hmc__10->SetBinContent(5,130.8348);
   hmc__10->SetBinContent(6,139.5172);
   hmc__10->SetBinContent(7,167.3653);
   hmc__10->SetBinContent(8,141.9259);
   hmc__10->SetBinContent(9,140.5585);
   hmc__10->SetBinContent(10,145.0603);
   hmc__10->SetBinContent(11,144.1639);
   hmc__10->SetBinContent(12,153.1626);
   hmc__10->SetBinContent(13,149.9476);
   hmc__10->SetBinContent(14,147.3659);
   hmc__10->SetBinContent(15,155.1282);
   hmc__10->SetBinContent(16,151.0152);
   hmc__10->SetBinContent(17,147.7614);
   hmc__10->SetBinContent(18,163.3347);
   hmc__10->SetBinContent(19,147.5847);
   hmc__10->SetBinContent(20,141.2554);
   hmc__10->SetBinContent(21,144.6838);
   hmc__10->SetBinContent(22,152.5658);
   hmc__10->SetBinContent(23,153.4097);
   hmc__10->SetBinContent(24,163.0257);
   hmc__10->SetBinContent(25,161.881);
   hmc__10->SetBinError(1,35.69052);
   hmc__10->SetBinError(2,40.51889);
   hmc__10->SetBinError(3,40.29674);
   hmc__10->SetBinError(4,41.61874);
   hmc__10->SetBinError(5,33.48843);
   hmc__10->SetBinError(6,37.50064);
   hmc__10->SetBinError(7,36.70887);
   hmc__10->SetBinError(8,36.86154);
   hmc__10->SetBinError(9,36.66852);
   hmc__10->SetBinError(10,36.53793);
   hmc__10->SetBinError(11,37.08544);
   hmc__10->SetBinError(12,44.62069);
   hmc__10->SetBinError(13,39.99921);
   hmc__10->SetBinError(14,38.07586);
   hmc__10->SetBinError(15,44.56813);
   hmc__10->SetBinError(16,43.08269);
   hmc__10->SetBinError(17,38.07581);
   hmc__10->SetBinError(18,41.60832);
   hmc__10->SetBinError(19,39.11249);
   hmc__10->SetBinError(20,37.15849);
   hmc__10->SetBinError(21,36.86255);
   hmc__10->SetBinError(22,38.92153);
   hmc__10->SetBinError(23,44.57151);
   hmc__10->SetBinError(24,47.01358);
   hmc__10->SetBinError(25,49.56845);
   hmc__10->SetBinError(26,0.3895343);
   hmc__10->SetMinimum(-4);
   hmc__10->SetMaximum(420);
   hmc__10->SetEntries(3864.24);
   hmc__10->SetLineWidth(5);
   hmc__10->GetXaxis()->SetLabelFont(42);
   hmc__10->GetXaxis()->SetTitleOffset(1);
   hmc__10->GetXaxis()->SetTitleFont(42);
   hmc__10->GetYaxis()->SetTitle("Event counts");
   hmc__10->GetYaxis()->SetLabelFont(132);
   hmc__10->GetYaxis()->SetLabelSize(0.04);
   hmc__10->GetYaxis()->SetTitleSize(0.05);
   hmc__10->GetYaxis()->SetTitleOffset(0.73);
   hmc__10->GetYaxis()->SetTitleFont(132);
   hmc__10->GetZaxis()->SetLabelFont(42);
   hmc__10->GetZaxis()->SetTitleOffset(1);
   hmc__10->GetZaxis()->SetTitleFont(42);
   hmc__10->Draw("hist");
   
   THStack *hs4 = new THStack();
   hs4->SetName("hs4");
   hs4->SetTitle("");
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,-3.15,3.15);
   hs4_stack_4->SetMinimum(-1.398517e-09);
   hs4_stack_4->SetMaximum(175.7335);
   hs4_stack_4->SetDirectory(0);
   hs4_stack_4->SetStats(0);
   hs4_stack_4->SetLineWidth(2);
   hs4_stack_4->SetMarkerStyle(20);
   hs4_stack_4->GetXaxis()->SetNdivisions(509);
   hs4_stack_4->GetXaxis()->SetLabelFont(132);
   hs4_stack_4->GetXaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetXaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetXaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetXaxis()->SetTitleFont(132);
   hs4_stack_4->GetYaxis()->SetNdivisions(509);
   hs4_stack_4->GetYaxis()->SetLabelFont(132);
   hs4_stack_4->GetYaxis()->SetLabelOffset(0.01);
   hs4_stack_4->GetYaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetYaxis()->SetTitleOffset(0.95);
   hs4_stack_4->GetYaxis()->SetTitleFont(132);
   hs4_stack_4->GetZaxis()->SetLabelFont(132);
   hs4_stack_4->GetZaxis()->SetLabelSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleSize(0.08);
   hs4_stack_4->GetZaxis()->SetTitleOffset(1.2);
   hs4_stack_4->GetZaxis()->SetTitleFont(132);
   hs4->SetHistogram(hs4_stack_4);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.312092);
   hbadmatch_stack_1->SetBinContent(2,5.345148);
   hbadmatch_stack_1->SetBinContent(3,4.458067);
   hbadmatch_stack_1->SetBinContent(4,5.539912);
   hbadmatch_stack_1->SetBinContent(5,2.784721);
   hbadmatch_stack_1->SetBinContent(6,4.344574);
   hbadmatch_stack_1->SetBinContent(7,5.32577);
   hbadmatch_stack_1->SetBinContent(8,4.609764);
   hbadmatch_stack_1->SetBinContent(9,4.139386);
   hbadmatch_stack_1->SetBinContent(10,2.352906);
   hbadmatch_stack_1->SetBinContent(11,3.043349);
   hbadmatch_stack_1->SetBinContent(12,2.023198);
   hbadmatch_stack_1->SetBinContent(13,1.253844);
   hbadmatch_stack_1->SetBinContent(14,3.419333);
   hbadmatch_stack_1->SetBinContent(15,4.992379);
   hbadmatch_stack_1->SetBinContent(16,6.059815);
   hbadmatch_stack_1->SetBinContent(17,2.80349);
   hbadmatch_stack_1->SetBinContent(18,2.865885);
   hbadmatch_stack_1->SetBinContent(19,3.11798);
   hbadmatch_stack_1->SetBinContent(20,4.98547);
   hbadmatch_stack_1->SetBinContent(21,4.39052);
   hbadmatch_stack_1->SetBinContent(22,4.096498);
   hbadmatch_stack_1->SetBinContent(23,3.935612);
   hbadmatch_stack_1->SetBinContent(24,3.847854);
   hbadmatch_stack_1->SetBinContent(25,4.537717);
   hbadmatch_stack_1->SetBinError(1,0.9623166);
   hbadmatch_stack_1->SetBinError(2,1.258246);
   hbadmatch_stack_1->SetBinError(3,1.058852);
   hbadmatch_stack_1->SetBinError(4,1.281258);
   hbadmatch_stack_1->SetBinError(5,0.834491);
   hbadmatch_stack_1->SetBinError(6,1.102883);
   hbadmatch_stack_1->SetBinError(7,1.220183);
   hbadmatch_stack_1->SetBinError(8,1.154244);
   hbadmatch_stack_1->SetBinError(9,1.177115);
   hbadmatch_stack_1->SetBinError(10,0.7483488);
   hbadmatch_stack_1->SetBinError(11,1.319168);
   hbadmatch_stack_1->SetBinError(12,0.7771617);
   hbadmatch_stack_1->SetBinError(13,0.5244312);
   hbadmatch_stack_1->SetBinError(14,0.9534171);
   hbadmatch_stack_1->SetBinError(15,1.955473);
   hbadmatch_stack_1->SetBinError(16,1.386766);
   hbadmatch_stack_1->SetBinError(17,0.8599878);
   hbadmatch_stack_1->SetBinError(18,0.8847404);
   hbadmatch_stack_1->SetBinError(19,1.019877);
   hbadmatch_stack_1->SetBinError(20,1.206847);
   hbadmatch_stack_1->SetBinError(21,1.348426);
   hbadmatch_stack_1->SetBinError(22,1.091962);
   hbadmatch_stack_1->SetBinError(23,1.050367);
   hbadmatch_stack_1->SetBinError(24,1.785544);
   hbadmatch_stack_1->SetBinError(25,1.135188);
   hbadmatch_stack_1->SetEntries(378);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1473;
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
   hs4->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hext_stack_2->SetBinContent(1,12.58416);
   hext_stack_2->SetBinContent(2,13.43761);
   hext_stack_2->SetBinContent(3,16.68322);
   hext_stack_2->SetBinContent(4,20.34097);
   hext_stack_2->SetBinContent(5,22.9565);
   hext_stack_2->SetBinContent(6,23.80724);
   hext_stack_2->SetBinContent(7,40.8005);
   hext_stack_2->SetBinContent(8,24.0522);
   hext_stack_2->SetBinContent(9,19.17907);
   hext_stack_2->SetBinContent(10,18.38741);
   hext_stack_2->SetBinContent(11,17.62328);
   hext_stack_2->SetBinContent(12,19.21655);
   hext_stack_2->SetBinContent(13,13.54734);
   hext_stack_2->SetBinContent(14,10.58146);
   hext_stack_2->SetBinContent(15,15.44465);
   hext_stack_2->SetBinContent(16,12.76009);
   hext_stack_2->SetBinContent(17,21.16293);
   hext_stack_2->SetBinContent(18,29.2745);
   hext_stack_2->SetBinContent(19,20.80105);
   hext_stack_2->SetBinContent(20,23.18874);
   hext_stack_2->SetBinContent(21,19.4891);
   hext_stack_2->SetBinContent(22,13.66985);
   hext_stack_2->SetBinContent(23,17.0451);
   hext_stack_2->SetBinContent(24,17.48042);
   hext_stack_2->SetBinContent(25,13.93082);
   hext_stack_2->SetBinError(1,2.218296);
   hext_stack_2->SetBinError(2,2.389772);
   hext_stack_2->SetBinError(3,2.689757);
   hext_stack_2->SetBinError(4,2.872499);
   hext_stack_2->SetBinError(5,3.260015);
   hext_stack_2->SetBinError(6,3.228588);
   hext_stack_2->SetBinError(7,4.262184);
   hext_stack_2->SetBinError(8,3.183175);
   hext_stack_2->SetBinError(9,2.958935);
   hext_stack_2->SetBinError(10,2.796614);
   hext_stack_2->SetBinError(11,2.867085);
   hext_stack_2->SetBinError(12,3.090494);
   hext_stack_2->SetBinError(13,2.665422);
   hext_stack_2->SetBinError(14,2.256386);
   hext_stack_2->SetBinError(15,2.646905);
   hext_stack_2->SetBinError(16,2.511045);
   hext_stack_2->SetBinError(17,3.191011);
   hext_stack_2->SetBinError(18,3.644837);
   hext_stack_2->SetBinError(19,3.04655);
   hext_stack_2->SetBinError(20,3.348189);
   hext_stack_2->SetBinError(21,3.043507);
   hext_stack_2->SetBinError(22,2.508721);
   hext_stack_2->SetBinError(23,2.852346);
   hext_stack_2->SetBinError(24,2.737954);
   hext_stack_2->SetBinError(25,2.46405);
   hext_stack_2->SetEntries(1136);

   ci = 1474;
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
   hs4->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.2761429);
   hdirt_stack_3->SetBinContent(2,1.890106);
   hdirt_stack_3->SetBinContent(3,2.181989);
   hdirt_stack_3->SetBinContent(4,3.566653);
   hdirt_stack_3->SetBinContent(5,1.221015);
   hdirt_stack_3->SetBinContent(6,2.707886);
   hdirt_stack_3->SetBinContent(7,2.334232);
   hdirt_stack_3->SetBinContent(8,2.769956);
   hdirt_stack_3->SetBinContent(9,2.359858);
   hdirt_stack_3->SetBinContent(10,3.004481);
   hdirt_stack_3->SetBinContent(11,2.461208);
   hdirt_stack_3->SetBinContent(12,1.730129);
   hdirt_stack_3->SetBinContent(13,2.275917);
   hdirt_stack_3->SetBinContent(14,2.164852);
   hdirt_stack_3->SetBinContent(15,1.462092);
   hdirt_stack_3->SetBinContent(16,2.337325);
   hdirt_stack_3->SetBinContent(17,1.995244);
   hdirt_stack_3->SetBinContent(18,1.905205);
   hdirt_stack_3->SetBinContent(19,2.883776);
   hdirt_stack_3->SetBinContent(20,2.505312);
   hdirt_stack_3->SetBinContent(21,3.929459);
   hdirt_stack_3->SetBinContent(22,3.477737);
   hdirt_stack_3->SetBinContent(23,1.822109);
   hdirt_stack_3->SetBinContent(24,1.766964);
   hdirt_stack_3->SetBinContent(25,2.023418);
   hdirt_stack_3->SetBinError(1,0.1952625);
   hdirt_stack_3->SetBinError(2,0.7150232);
   hdirt_stack_3->SetBinError(3,0.7969979);
   hdirt_stack_3->SetBinError(4,1.066523);
   hdirt_stack_3->SetBinError(5,0.5561081);
   hdirt_stack_3->SetBinError(6,0.8874296);
   hdirt_stack_3->SetBinError(7,0.7369816);
   hdirt_stack_3->SetBinError(8,0.8370929);
   hdirt_stack_3->SetBinError(9,0.8300963);
   hdirt_stack_3->SetBinError(10,1.309493);
   hdirt_stack_3->SetBinError(11,0.7694311);
   hdirt_stack_3->SetBinError(12,0.7072207);
   hdirt_stack_3->SetBinError(13,0.7290825);
   hdirt_stack_3->SetBinError(14,0.884245);
   hdirt_stack_3->SetBinError(15,0.6295846);
   hdirt_stack_3->SetBinError(16,0.7305676);
   hdirt_stack_3->SetBinError(17,0.7221976);
   hdirt_stack_3->SetBinError(18,0.7683677);
   hdirt_stack_3->SetBinError(19,0.8499317);
   hdirt_stack_3->SetBinError(20,0.8342411);
   hdirt_stack_3->SetBinError(21,1.352307);
   hdirt_stack_3->SetBinError(22,0.9348604);
   hdirt_stack_3->SetBinError(23,0.6973823);
   hdirt_stack_3->SetBinError(24,0.7321755);
   hdirt_stack_3->SetBinError(25,0.6839632);
   hdirt_stack_3->SetEntries(238);

   ci = 1475;
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
   hs4->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,20.21242);
   houtFV_stack_4->SetBinContent(2,18.05886);
   houtFV_stack_4->SetBinContent(3,20.3685);
   houtFV_stack_4->SetBinContent(4,17.57497);
   houtFV_stack_4->SetBinContent(5,17.03623);
   houtFV_stack_4->SetBinContent(6,15.93306);
   houtFV_stack_4->SetBinContent(7,14.84947);
   houtFV_stack_4->SetBinContent(8,15.13854);
   houtFV_stack_4->SetBinContent(9,19.04823);
   houtFV_stack_4->SetBinContent(10,17.46305);
   houtFV_stack_4->SetBinContent(11,19.14875);
   houtFV_stack_4->SetBinContent(12,22.37418);
   houtFV_stack_4->SetBinContent(13,18.91035);
   houtFV_stack_4->SetBinContent(14,16.82486);
   houtFV_stack_4->SetBinContent(15,18.30374);
   houtFV_stack_4->SetBinContent(16,22.01805);
   houtFV_stack_4->SetBinContent(17,21.38385);
   houtFV_stack_4->SetBinContent(18,20.1981);
   houtFV_stack_4->SetBinContent(19,19.73737);
   houtFV_stack_4->SetBinContent(20,14.1301);
   houtFV_stack_4->SetBinContent(21,18.78308);
   houtFV_stack_4->SetBinContent(22,23.02467);
   houtFV_stack_4->SetBinContent(23,20.96604);
   houtFV_stack_4->SetBinContent(24,19.90287);
   houtFV_stack_4->SetBinContent(25,25.35302);
   houtFV_stack_4->SetBinError(1,2.334229);
   houtFV_stack_4->SetBinError(2,2.042833);
   houtFV_stack_4->SetBinError(3,2.289467);
   houtFV_stack_4->SetBinError(4,2.143202);
   houtFV_stack_4->SetBinError(5,2.061958);
   houtFV_stack_4->SetBinError(6,1.981964);
   houtFV_stack_4->SetBinError(7,2.0355);
   houtFV_stack_4->SetBinError(8,1.90412);
   houtFV_stack_4->SetBinError(9,2.137613);
   houtFV_stack_4->SetBinError(10,2.082335);
   houtFV_stack_4->SetBinError(11,2.203279);
   houtFV_stack_4->SetBinError(12,2.509082);
   houtFV_stack_4->SetBinError(13,2.21464);
   houtFV_stack_4->SetBinError(14,1.99164);
   houtFV_stack_4->SetBinError(15,2.155463);
   houtFV_stack_4->SetBinError(16,2.342107);
   houtFV_stack_4->SetBinError(17,2.347791);
   houtFV_stack_4->SetBinError(18,2.325179);
   houtFV_stack_4->SetBinError(19,2.283755);
   houtFV_stack_4->SetBinError(20,1.799607);
   houtFV_stack_4->SetBinError(21,2.116482);
   houtFV_stack_4->SetBinError(22,2.393096);
   houtFV_stack_4->SetBinError(23,2.251208);
   houtFV_stack_4->SetBinError(24,2.246918);
   houtFV_stack_4->SetBinError(25,2.788298);
   houtFV_stack_4->SetEntries(2163);

   ci = 1476;
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
   hs4->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.576373);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.492948);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.209809);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.028506);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.554363);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.826303);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.723045);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.696091);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.473631);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.657844);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.902581);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.766777);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.576631);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,5.136788);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.970715);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.451397);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.264785);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,4.541597);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.735049);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.700133);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.094356);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.074583);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.560569);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,5.722158);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,4.304804);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8745097);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.555014);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7828508);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6991629);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.797423);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8327493);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7486117);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.80788);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.713441);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.990707);
   hNCpi0inFVcoh_stack_5->SetBinError(11,1.040698);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4152403);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8687233);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.8099355);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7203641);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6246153);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.766524);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7027248);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8396848);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7676158);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6908294);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6705265);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.9522778);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.8946652);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.7804755);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

   ci = 1477;
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
   hs4->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2986776);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.3723567);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.6086713);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3510408);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3668918);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8412315);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1602938);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2832799);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3849694);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.09566832);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2187925);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2914091);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2095463);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.279055);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.2162291);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2051457);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2261992);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.4460154);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08440956);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.5687249);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1818551);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3092396);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1191865);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1702311);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3014894);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1834858);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1647331);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3469501);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06289891);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.09332774);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2091374);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03962771);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1351701);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1244508);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1477977);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1365436);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1357966);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08745069);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1320678);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1734666);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.04472099);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.338939);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.07828343);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1326869);
   hNCpi0inFVqe_stack_6->SetEntries(179);

   ci = 1478;
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
   hs4->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,44.53598);
   hNCpi0inFVres_stack_7->SetBinContent(2,49.92995);
   hNCpi0inFVres_stack_7->SetBinContent(3,46.28393);
   hNCpi0inFVres_stack_7->SetBinContent(4,45.62204);
   hNCpi0inFVres_stack_7->SetBinContent(5,39.56628);
   hNCpi0inFVres_stack_7->SetBinContent(6,43.17885);
   hNCpi0inFVres_stack_7->SetBinContent(7,46.80968);
   hNCpi0inFVres_stack_7->SetBinContent(8,43.18329);
   hNCpi0inFVres_stack_7->SetBinContent(9,46.17915);
   hNCpi0inFVres_stack_7->SetBinContent(10,42.50857);
   hNCpi0inFVres_stack_7->SetBinContent(11,41.9002);
   hNCpi0inFVres_stack_7->SetBinContent(12,49.51814);
   hNCpi0inFVres_stack_7->SetBinContent(13,48.14559);
   hNCpi0inFVres_stack_7->SetBinContent(14,49.60016);
   hNCpi0inFVres_stack_7->SetBinContent(15,50.30002);
   hNCpi0inFVres_stack_7->SetBinContent(16,44.99448);
   hNCpi0inFVres_stack_7->SetBinContent(17,44.05571);
   hNCpi0inFVres_stack_7->SetBinContent(18,46.90828);
   hNCpi0inFVres_stack_7->SetBinContent(19,44.70589);
   hNCpi0inFVres_stack_7->SetBinContent(20,48.82024);
   hNCpi0inFVres_stack_7->SetBinContent(21,43.64598);
   hNCpi0inFVres_stack_7->SetBinContent(22,43.68039);
   hNCpi0inFVres_stack_7->SetBinContent(23,48.54802);
   hNCpi0inFVres_stack_7->SetBinContent(24,53.31826);
   hNCpi0inFVres_stack_7->SetBinContent(25,48.55602);
   hNCpi0inFVres_stack_7->SetBinError(1,2.155483);
   hNCpi0inFVres_stack_7->SetBinError(2,2.454018);
   hNCpi0inFVres_stack_7->SetBinError(3,2.326644);
   hNCpi0inFVres_stack_7->SetBinError(4,2.35706);
   hNCpi0inFVres_stack_7->SetBinError(5,2.100619);
   hNCpi0inFVres_stack_7->SetBinError(6,2.228662);
   hNCpi0inFVres_stack_7->SetBinError(7,2.385518);
   hNCpi0inFVres_stack_7->SetBinError(8,2.323476);
   hNCpi0inFVres_stack_7->SetBinError(9,2.469505);
   hNCpi0inFVres_stack_7->SetBinError(10,2.168536);
   hNCpi0inFVres_stack_7->SetBinError(11,2.130283);
   hNCpi0inFVres_stack_7->SetBinError(12,2.520272);
   hNCpi0inFVres_stack_7->SetBinError(13,2.333624);
   hNCpi0inFVres_stack_7->SetBinError(14,2.364531);
   hNCpi0inFVres_stack_7->SetBinError(15,2.493932);
   hNCpi0inFVres_stack_7->SetBinError(16,2.325581);
   hNCpi0inFVres_stack_7->SetBinError(17,2.302007);
   hNCpi0inFVres_stack_7->SetBinError(18,2.365059);
   hNCpi0inFVres_stack_7->SetBinError(19,2.410021);
   hNCpi0inFVres_stack_7->SetBinError(20,2.448505);
   hNCpi0inFVres_stack_7->SetBinError(21,2.190882);
   hNCpi0inFVres_stack_7->SetBinError(22,2.159538);
   hNCpi0inFVres_stack_7->SetBinError(23,2.380289);
   hNCpi0inFVres_stack_7->SetBinError(24,2.567269);
   hNCpi0inFVres_stack_7->SetBinError(25,2.391463);
   hNCpi0inFVres_stack_7->SetEntries(24054);

   ci = 1479;
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
   hs4->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.457991);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.53681);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.78316);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.694109);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.162847);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.220269);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.37957);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.745491);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.110001);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.862618);
   hNCpi0inFVdis_stack_8->SetBinContent(11,8.61833);
   hNCpi0inFVdis_stack_8->SetBinContent(12,7.540586);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.692149);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.24947);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.09207);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.48832);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.54262);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.577064);
   hNCpi0inFVdis_stack_8->SetBinContent(19,7.978498);
   hNCpi0inFVdis_stack_8->SetBinContent(20,8.629678);
   hNCpi0inFVdis_stack_8->SetBinContent(21,8.365646);
   hNCpi0inFVdis_stack_8->SetBinContent(22,12.63588);
   hNCpi0inFVdis_stack_8->SetBinContent(23,10.85828);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.4628);
   hNCpi0inFVdis_stack_8->SetBinContent(25,9.145489);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.115665);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.127215);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.302928);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.079363);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9967307);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8270723);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.165892);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9334834);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.9507199);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.02285);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.111606);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8787015);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9221692);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.190683);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.235942);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9811381);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.245942);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.115628);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.036751);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.994594);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.839534);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.434805);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.151897);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.224015);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9938668);
   hNCpi0inFVdis_stack_8->SetEntries(4782);

   ci = 1480;
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
   hs4->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.07927215);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05782241);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1472722);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.06548985);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.04404794);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1303248);
   hNCpi0inFVmec_stack_9->SetEntries(11);

   ci = 1481;
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
   hs4->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,24.17803);
   hCCpi0inFV_stack_10->SetBinContent(2,19.67487);
   hCCpi0inFV_stack_10->SetBinContent(3,24.59336);
   hCCpi0inFV_stack_10->SetBinContent(4,21.29782);
   hCCpi0inFV_stack_10->SetBinContent(5,16.23301);
   hCCpi0inFV_stack_10->SetBinContent(6,18.32216);
   hCCpi0inFV_stack_10->SetBinContent(7,21.05304);
   hCCpi0inFV_stack_10->SetBinContent(8,22.22021);
   hCCpi0inFV_stack_10->SetBinContent(9,17.05727);
   hCCpi0inFV_stack_10->SetBinContent(10,26.78021);
   hCCpi0inFV_stack_10->SetBinContent(11,25.012);
   hCCpi0inFV_stack_10->SetBinContent(12,27.09578);
   hCCpi0inFV_stack_10->SetBinContent(13,29.12748);
   hCCpi0inFV_stack_10->SetBinContent(14,23.38393);
   hCCpi0inFV_stack_10->SetBinContent(15,24.43646);
   hCCpi0inFV_stack_10->SetBinContent(16,28.93144);
   hCCpi0inFV_stack_10->SetBinContent(17,20.28346);
   hCCpi0inFV_stack_10->SetBinContent(18,23.4118);
   hCCpi0inFV_stack_10->SetBinContent(19,23.97517);
   hCCpi0inFV_stack_10->SetBinContent(20,16.73161);
   hCCpi0inFV_stack_10->SetBinContent(21,20.30666);
   hCCpi0inFV_stack_10->SetBinContent(22,26.44358);
   hCCpi0inFV_stack_10->SetBinContent(23,25.73227);
   hCCpi0inFV_stack_10->SetBinContent(24,27.42774);
   hCCpi0inFV_stack_10->SetBinContent(25,25.41548);
   hCCpi0inFV_stack_10->SetBinError(1,2.517594);
   hCCpi0inFV_stack_10->SetBinError(2,2.20635);
   hCCpi0inFV_stack_10->SetBinError(3,2.475912);
   hCCpi0inFV_stack_10->SetBinError(4,2.283366);
   hCCpi0inFV_stack_10->SetBinError(5,1.905856);
   hCCpi0inFV_stack_10->SetBinError(6,2.085099);
   hCCpi0inFV_stack_10->SetBinError(7,2.270485);
   hCCpi0inFV_stack_10->SetBinError(8,2.388174);
   hCCpi0inFV_stack_10->SetBinError(9,2.068108);
   hCCpi0inFV_stack_10->SetBinError(10,2.644895);
   hCCpi0inFV_stack_10->SetBinError(11,2.544538);
   hCCpi0inFV_stack_10->SetBinError(12,2.605712);
   hCCpi0inFV_stack_10->SetBinError(13,2.75046);
   hCCpi0inFV_stack_10->SetBinError(14,2.434719);
   hCCpi0inFV_stack_10->SetBinError(15,2.483127);
   hCCpi0inFV_stack_10->SetBinError(16,2.695249);
   hCCpi0inFV_stack_10->SetBinError(17,2.194266);
   hCCpi0inFV_stack_10->SetBinError(18,2.383186);
   hCCpi0inFV_stack_10->SetBinError(19,2.513865);
   hCCpi0inFV_stack_10->SetBinError(20,2.043302);
   hCCpi0inFV_stack_10->SetBinError(21,2.253456);
   hCCpi0inFV_stack_10->SetBinError(22,2.601757);
   hCCpi0inFV_stack_10->SetBinError(23,2.578519);
   hCCpi0inFV_stack_10->SetBinError(24,2.638767);
   hCCpi0inFV_stack_10->SetBinError(25,2.506561);
   hCCpi0inFV_stack_10->SetEntries(2475);

   ci = 1482;
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
   hs4->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,7.361605);
   hNCinFV_stack_11->SetBinContent(2,9.958817);
   hNCinFV_stack_11->SetBinContent(3,10.73325);
   hNCinFV_stack_11->SetBinContent(4,11.45526);
   hNCinFV_stack_11->SetBinContent(5,6.259386);
   hNCinFV_stack_11->SetBinContent(6,10.18638);
   hNCinFV_stack_11->SetBinContent(7,10.03988);
   hNCinFV_stack_11->SetBinContent(8,8.517359);
   hNCinFV_stack_11->SetBinContent(9,9.190286);
   hNCinFV_stack_11->SetBinContent(10,8.252013);
   hNCinFV_stack_11->SetBinContent(11,9.230319);
   hNCinFV_stack_11->SetBinContent(12,8.667419);
   hNCinFV_stack_11->SetBinContent(13,6.823307);
   hNCinFV_stack_11->SetBinContent(14,9.763872);
   hNCinFV_stack_11->SetBinContent(15,10.61363);
   hNCinFV_stack_11->SetBinContent(16,9.808344);
   hNCinFV_stack_11->SetBinContent(17,7.596124);
   hNCinFV_stack_11->SetBinContent(18,12.65518);
   hNCinFV_stack_11->SetBinContent(19,8.508312);
   hNCinFV_stack_11->SetBinContent(20,7.982289);
   hNCinFV_stack_11->SetBinContent(21,9.599815);
   hNCinFV_stack_11->SetBinContent(22,8.836376);
   hNCinFV_stack_11->SetBinContent(23,7.687006);
   hNCinFV_stack_11->SetBinContent(24,8.134092);
   hNCinFV_stack_11->SetBinContent(25,13.96546);
   hNCinFV_stack_11->SetBinError(1,1.55356);
   hNCinFV_stack_11->SetBinError(2,1.811191);
   hNCinFV_stack_11->SetBinError(3,1.757527);
   hNCinFV_stack_11->SetBinError(4,1.828641);
   hNCinFV_stack_11->SetBinError(5,1.373326);
   hNCinFV_stack_11->SetBinError(6,1.728638);
   hNCinFV_stack_11->SetBinError(7,1.565461);
   hNCinFV_stack_11->SetBinError(8,1.477397);
   hNCinFV_stack_11->SetBinError(9,1.675091);
   hNCinFV_stack_11->SetBinError(10,1.523215);
   hNCinFV_stack_11->SetBinError(11,1.627425);
   hNCinFV_stack_11->SetBinError(12,1.490435);
   hNCinFV_stack_11->SetBinError(13,1.361578);
   hNCinFV_stack_11->SetBinError(14,1.545059);
   hNCinFV_stack_11->SetBinError(15,1.650684);
   hNCinFV_stack_11->SetBinError(16,1.566191);
   hNCinFV_stack_11->SetBinError(17,1.456767);
   hNCinFV_stack_11->SetBinError(18,1.988176);
   hNCinFV_stack_11->SetBinError(19,1.483272);
   hNCinFV_stack_11->SetBinError(20,1.470317);
   hNCinFV_stack_11->SetBinError(21,1.622431);
   hNCinFV_stack_11->SetBinError(22,1.459888);
   hNCinFV_stack_11->SetBinError(23,1.302199);
   hNCinFV_stack_11->SetBinError(24,1.555352);
   hNCinFV_stack_11->SetBinError(25,2.246027);
   hNCinFV_stack_11->SetEntries(996);

   ci = 1483;
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
   hs4->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,11.89033);
   hnumuCCinFV_stack_12->SetBinContent(2,12.69027);
   hnumuCCinFV_stack_12->SetBinContent(3,9.080544);
   hnumuCCinFV_stack_12->SetBinContent(4,9.49982);
   hnumuCCinFV_stack_12->SetBinContent(5,9.257357);
   hnumuCCinFV_stack_12->SetBinContent(6,8.009795);
   hnumuCCinFV_stack_12->SetBinContent(7,9.382106);
   hnumuCCinFV_stack_12->SetBinContent(8,8.955103);
   hnumuCCinFV_stack_12->SetBinContent(9,8.570482);
   hnumuCCinFV_stack_12->SetBinContent(10,10.27446);
   hnumuCCinFV_stack_12->SetBinContent(11,9.77296);
   hnumuCCinFV_stack_12->SetBinContent(12,11.58764);
   hnumuCCinFV_stack_12->SetBinContent(13,15.80798);
   hnumuCCinFV_stack_12->SetBinContent(14,13.48249);
   hnumuCCinFV_stack_12->SetBinContent(15,14.30291);
   hnumuCCinFV_stack_12->SetBinContent(16,8.163195);
   hnumuCCinFV_stack_12->SetBinContent(17,10.46195);
   hnumuCCinFV_stack_12->SetBinContent(18,9.090035);
   hnumuCCinFV_stack_12->SetBinContent(19,9.882097);
   hnumuCCinFV_stack_12->SetBinContent(20,7.658195);
   hnumuCCinFV_stack_12->SetBinContent(21,9.917401);
   hnumuCCinFV_stack_12->SetBinContent(22,12.34512);
   hnumuCCinFV_stack_12->SetBinContent(23,10.12709);
   hnumuCCinFV_stack_12->SetBinContent(24,13.24022);
   hnumuCCinFV_stack_12->SetBinContent(25,13.60644);
   hnumuCCinFV_stack_12->SetBinError(1,2.011601);
   hnumuCCinFV_stack_12->SetBinError(2,1.820834);
   hnumuCCinFV_stack_12->SetBinError(3,1.584957);
   hnumuCCinFV_stack_12->SetBinError(4,1.701485);
   hnumuCCinFV_stack_12->SetBinError(5,1.855682);
   hnumuCCinFV_stack_12->SetBinError(6,1.425088);
   hnumuCCinFV_stack_12->SetBinError(7,1.606714);
   hnumuCCinFV_stack_12->SetBinError(8,1.671089);
   hnumuCCinFV_stack_12->SetBinError(9,1.570474);
   hnumuCCinFV_stack_12->SetBinError(10,1.891301);
   hnumuCCinFV_stack_12->SetBinError(11,1.548224);
   hnumuCCinFV_stack_12->SetBinError(12,1.782488);
   hnumuCCinFV_stack_12->SetBinError(13,2.484587);
   hnumuCCinFV_stack_12->SetBinError(14,1.952743);
   hnumuCCinFV_stack_12->SetBinError(15,2.022369);
   hnumuCCinFV_stack_12->SetBinError(16,1.981592);
   hnumuCCinFV_stack_12->SetBinError(17,1.653735);
   hnumuCCinFV_stack_12->SetBinError(18,1.677416);
   hnumuCCinFV_stack_12->SetBinError(19,2.555511);
   hnumuCCinFV_stack_12->SetBinError(20,1.454027);
   hnumuCCinFV_stack_12->SetBinError(21,2.00032);
   hnumuCCinFV_stack_12->SetBinError(22,2.834615);
   hnumuCCinFV_stack_12->SetBinError(23,1.763081);
   hnumuCCinFV_stack_12->SetBinError(24,1.918124);
   hnumuCCinFV_stack_12->SetBinError(25,2.171889);
   hnumuCCinFV_stack_12->SetEntries(1051);

   ci = 1484;
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
   hs4->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.508753);
   hnueCCinFV_stack_13->SetBinContent(2,1.11703);
   hnueCCinFV_stack_13->SetBinContent(3,0.218026);
   hnueCCinFV_stack_13->SetBinContent(4,1.276705);
   hnueCCinFV_stack_13->SetBinContent(5,1.434726);
   hnueCCinFV_stack_13->SetBinContent(6,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(7,2.301073);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,2.090836);
   hnueCCinFV_stack_13->SetBinContent(10,1.233505);
   hnueCCinFV_stack_13->SetBinContent(11,1.008167);
   hnueCCinFV_stack_13->SetBinContent(12,1.546578);
   hnueCCinFV_stack_13->SetBinContent(13,1.568268);
   hnueCCinFV_stack_13->SetBinContent(14,1.467229);
   hnueCCinFV_stack_13->SetBinContent(16,1.704859);
   hnueCCinFV_stack_13->SetBinContent(17,1.995022);
   hnueCCinFV_stack_13->SetBinContent(18,2.701874);
   hnueCCinFV_stack_13->SetBinContent(19,1.0176);
   hnueCCinFV_stack_13->SetBinContent(20,1.916548);
   hnueCCinFV_stack_13->SetBinContent(21,1.568478);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.558937);
   hnueCCinFV_stack_13->SetBinContent(24,1.540506);
   hnueCCinFV_stack_13->SetBinContent(25,0.7330725);
   hnueCCinFV_stack_13->SetBinError(1,1.549207);
   hnueCCinFV_stack_13->SetBinError(2,0.5897007);
   hnueCCinFV_stack_13->SetBinError(3,0.2180157);
   hnueCCinFV_stack_13->SetBinError(4,1.093835);
   hnueCCinFV_stack_13->SetBinError(5,0.7254927);
   hnueCCinFV_stack_13->SetBinError(6,0.48078);
   hnueCCinFV_stack_13->SetBinError(7,0.8571817);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.7914692);
   hnueCCinFV_stack_13->SetBinError(10,0.8846879);
   hnueCCinFV_stack_13->SetBinError(11,0.7668684);
   hnueCCinFV_stack_13->SetBinError(12,0.736696);
   hnueCCinFV_stack_13->SetBinError(13,0.9033374);
   hnueCCinFV_stack_13->SetBinError(14,0.6161243);
   hnueCCinFV_stack_13->SetBinError(16,0.6757173);
   hnueCCinFV_stack_13->SetBinError(17,0.7234529);
   hnueCCinFV_stack_13->SetBinError(18,1.444123);
   hnueCCinFV_stack_13->SetBinError(19,0.5390909);
   hnueCCinFV_stack_13->SetBinError(20,0.9239832);
   hnueCCinFV_stack_13->SetBinError(21,0.6117005);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.3931235);
   hnueCCinFV_stack_13->SetBinError(24,0.7082662);
   hnueCCinFV_stack_13->SetBinError(25,0.4278236);
   hnueCCinFV_stack_13->SetEntries(115);

   ci = 1485;
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
   hs4->Add(hnueCCinFV_stack_13,"");
   hs4->Draw("hist same");
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);
   hmcerror__11->SetBinContent(1,141.2114);
   hmcerror__11->SetBinContent(2,146.2301);
   hmcerror__11->SetBinContent(3,149.9662);
   hmcerror__11->SetBinContent(4,150.5054);
   hmcerror__11->SetBinContent(5,130.8348);
   hmcerror__11->SetBinContent(6,139.5172);
   hmcerror__11->SetBinContent(7,167.3653);
   hmcerror__11->SetBinContent(8,141.9259);
   hmcerror__11->SetBinContent(9,140.5585);
   hmcerror__11->SetBinContent(10,145.0603);
   hmcerror__11->SetBinContent(11,144.1639);
   hmcerror__11->SetBinContent(12,153.1626);
   hmcerror__11->SetBinContent(13,149.9476);
   hmcerror__11->SetBinContent(14,147.3659);
   hmcerror__11->SetBinContent(15,155.1282);
   hmcerror__11->SetBinContent(16,151.0152);
   hmcerror__11->SetBinContent(17,147.7614);
   hmcerror__11->SetBinContent(18,163.3347);
   hmcerror__11->SetBinContent(19,147.5847);
   hmcerror__11->SetBinContent(20,141.2554);
   hmcerror__11->SetBinContent(21,144.6838);
   hmcerror__11->SetBinContent(22,152.5658);
   hmcerror__11->SetBinContent(23,153.4097);
   hmcerror__11->SetBinContent(24,163.0257);
   hmcerror__11->SetBinContent(25,161.881);
   hmcerror__11->SetBinError(1,35.69052);
   hmcerror__11->SetBinError(2,40.51889);
   hmcerror__11->SetBinError(3,40.29674);
   hmcerror__11->SetBinError(4,41.61874);
   hmcerror__11->SetBinError(5,33.48843);
   hmcerror__11->SetBinError(6,37.50064);
   hmcerror__11->SetBinError(7,36.70887);
   hmcerror__11->SetBinError(8,36.86154);
   hmcerror__11->SetBinError(9,36.66852);
   hmcerror__11->SetBinError(10,36.53793);
   hmcerror__11->SetBinError(11,37.08544);
   hmcerror__11->SetBinError(12,44.62069);
   hmcerror__11->SetBinError(13,39.99921);
   hmcerror__11->SetBinError(14,38.07586);
   hmcerror__11->SetBinError(15,44.56813);
   hmcerror__11->SetBinError(16,43.08269);
   hmcerror__11->SetBinError(17,38.07581);
   hmcerror__11->SetBinError(18,41.60832);
   hmcerror__11->SetBinError(19,39.11249);
   hmcerror__11->SetBinError(20,37.15849);
   hmcerror__11->SetBinError(21,36.86255);
   hmcerror__11->SetBinError(22,38.92153);
   hmcerror__11->SetBinError(23,44.57151);
   hmcerror__11->SetBinError(24,47.01358);
   hmcerror__11->SetBinError(25,49.56845);
   hmcerror__11->SetBinError(26,0.3895343);
   hmcerror__11->SetEntries(3864.24);

   ci = TColor::GetColor("#999999");
   hmcerror__11->SetFillColor(ci);
   hmcerror__11->SetFillStyle(3002);
   hmcerror__11->SetLineColor(12);
   hmcerror__11->SetLineWidth(0);
   hmcerror__11->SetMarkerColor(0);
   hmcerror__11->SetMarkerSize(0);
   hmcerror__11->GetXaxis()->SetLabelFont(42);
   hmcerror__11->GetXaxis()->SetTitleOffset(1);
   hmcerror__11->GetXaxis()->SetTitleFont(42);
   hmcerror__11->GetYaxis()->SetLabelFont(42);
   hmcerror__11->GetYaxis()->SetTitleFont(42);
   hmcerror__11->GetZaxis()->SetLabelFont(42);
   hmcerror__11->GetZaxis()->SetTitleOffset(1);
   hmcerror__11->GetZaxis()->SetTitleFont(42);
   hmcerror__11->Draw("same E2");
   
   Double_t _fx3013[25] = {
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
   Double_t _fy3013[25] = {
   172,
   132,
   143,
   142,
   145,
   136,
   140,
   175,
   140,
   158,
   151,
   147,
   163,
   200,
   134,
   146,
   171,
   154,
   138,
   154,
   140,
   153,
   189,
   151,
   149};
   Double_t _felx3013[25] = {
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
   Double_t _fely3013[25] = {
   13.11488,
   11.48913,
   11.95826,
   11.91638,
   12.04159,
   11.6619,
   11.83216,
   13.22876,
   11.83216,
   12.56981,
   12.28821,
   12.12436,
   12.76715,
   14.14214,
   11.57584,
   12.08305,
   13.0767,
   12.40967,
   11.74734,
   12.40967,
   11.83216,
   12.36932,
   13.74773,
   12.28821,
   12.20656};
   Double_t _fehx3013[25] = {
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
   Double_t _fehy3013[25] = {
   13.11488,
   11.48913,
   11.95826,
   11.91638,
   12.04159,
   11.6619,
   11.83216,
   13.22876,
   11.83216,
   12.56981,
   12.28821,
   12.12436,
   12.76715,
   14.14214,
   11.57584,
   12.08305,
   13.0767,
   12.40967,
   11.74734,
   12.40967,
   11.83216,
   12.36932,
   13.74773,
   12.28821,
   12.20656};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-3.78,3.78);
   Graph_Graph3013->SetMinimum(111.1477);
   Graph_Graph3013->SetMaximum(223.5053);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineWidth(2);
   Graph_Graph3013->SetMarkerStyle(20);
   Graph_Graph3013->GetXaxis()->SetNdivisions(509);
   Graph_Graph3013->GetXaxis()->SetLabelFont(132);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetXaxis()->SetTitleFont(132);
   Graph_Graph3013->GetYaxis()->SetNdivisions(509);
   Graph_Graph3013->GetYaxis()->SetLabelFont(132);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3013->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3013->GetYaxis()->SetTitleFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelFont(132);
   Graph_Graph3013->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3013->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3013->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.6","F");

   ci = 1473;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.4","F");

   ci = 1474;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

   ci = 1475;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 476.7","F");

   ci = 1476;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  110.0","F");

   ci = 1477;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.1","F");

   ci = 1478;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1154.5","F");

   ci = 1479;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  237.8","F");

   ci = 1480;
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

   ci = 1481;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

   ci = 1482;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 231.8","F");

   ci = 1483;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

   ci = 1484;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1485;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[25] = {
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
   Double_t _fy3014[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[25] = {
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
   Double_t _fely3014[25] = {
   0.2527454,
   0.27709,
   0.2687055,
   0.2765265,
   0.2559597,
   0.2687887,
   0.2193338,
   0.2597237,
   0.2608773,
   0.2518809,
   0.2572449,
   0.2913288,
   0.2667545,
   0.2583764,
   0.2872986,
   0.2852871,
   0.2576844,
   0.2547427,
   0.2650173,
   0.2630589,
   0.2547802,
   0.255113,
   0.290539,
   0.2883813,
   0.306203};
   Double_t _fehx3014[25] = {
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
   Double_t _fehy3014[25] = {
   0.2527454,
   0.27709,
   0.2687055,
   0.2765265,
   0.2559597,
   0.2687887,
   0.2193338,
   0.2597237,
   0.2608773,
   0.2518809,
   0.2572449,
   0.2913288,
   0.2667545,
   0.2583764,
   0.2872986,
   0.2852871,
   0.2576844,
   0.2547427,
   0.2650173,
   0.2630589,
   0.2547802,
   0.255113,
   0.290539,
   0.2883813,
   0.306203};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-3.78,3.78);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
   Graph_Graph3014->GetXaxis()->SetNdivisions(509);
   Graph_Graph3014->GetXaxis()->SetLabelFont(132);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3014->GetXaxis()->SetTitleFont(132);
   Graph_Graph3014->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3014->GetYaxis()->SetNdivisions(210);
   Graph_Graph3014->GetYaxis()->SetLabelFont(132);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3014->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3014->GetYaxis()->SetTitleFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelFont(132);
   Graph_Graph3014->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3014->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3014->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3014);
   
   grae->Draw("a2");
   
   Double_t _fx3015[25] = {
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
   Double_t _fy3015[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[25] = {
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
   Double_t _fely3015[25] = {
   0.2020188,
   0.2112195,
   0.1985359,
   0.2002235,
   0.1982984,
   0.1993057,
   0.1881393,
   0.1913922,
   0.1998938,
   0.1952028,
   0.2043976,
   0.2006034,
   0.2135642,
   0.2129116,
   0.2163761,
   0.2150828,
   0.2002166,
   0.1885883,
   0.2004111,
   0.2017903,
   0.1993893,
   0.2037721,
   0.2070484,
   0.205816,
   0.1927855};
   Double_t _fehx3015[25] = {
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
   Double_t _fehy3015[25] = {
   0.2020188,
   0.2112195,
   0.1985359,
   0.2002235,
   0.1982984,
   0.1993057,
   0.1881393,
   0.1913922,
   0.1998938,
   0.1952028,
   0.2043976,
   0.2006034,
   0.2135642,
   0.2129116,
   0.2163761,
   0.2150828,
   0.2002166,
   0.1885883,
   0.2004111,
   0.2017903,
   0.1993893,
   0.2037721,
   0.2070484,
   0.205816,
   0.1927855};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-3.78,3.78);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
   Graph_Graph3015->GetXaxis()->SetNdivisions(509);
   Graph_Graph3015->GetXaxis()->SetLabelFont(132);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetXaxis()->SetTitleFont(132);
   Graph_Graph3015->GetYaxis()->SetNdivisions(509);
   Graph_Graph3015->GetYaxis()->SetLabelFont(132);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3015->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3015->GetYaxis()->SetTitleFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelFont(132);
   Graph_Graph3015->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3015->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("2 ");
   
   Double_t _fx3016[25] = {
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
   Double_t _fy3016[25] = {
   1.218032,
   0.9026869,
   0.9535482,
   0.9434875,
   1.108268,
   0.9747902,
   0.8364938,
   1.233037,
   0.9960267,
   1.089202,
   1.047419,
   0.9597641,
   1.087046,
   1.357166,
   0.8638016,
   0.9667902,
   1.157271,
   0.9428493,
   0.9350564,
   1.090224,
   0.9676275,
   1.002846,
   1.231995,
   0.9262341,
   0.9204293};
   Double_t _felx3016[25] = {
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
   Double_t _fely3016[25] = {
   0.09287409,
   0.07856881,
   0.07973971,
   0.07917572,
   0.09203664,
   0.08358757,
   0.07069663,
   0.09320886,
   0.08417962,
   0.08665225,
   0.08523772,
   0.07916001,
   0.08514402,
   0.09596616,
   0.07462109,
   0.08001213,
   0.08849873,
   0.07597696,
   0.07959728,
   0.08785275,
   0.08177945,
   0.08107529,
   0.08961443,
   0.07537586,
   0.07540451};
   Double_t _fehx3016[25] = {
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
   Double_t _fehy3016[25] = {
   0.09287409,
   0.07856881,
   0.07973971,
   0.07917572,
   0.09203664,
   0.08358757,
   0.07069663,
   0.09320886,
   0.08417962,
   0.08665225,
   0.08523772,
   0.07916001,
   0.08514402,
   0.09596616,
   0.07462109,
   0.08001213,
   0.08849873,
   0.07597696,
   0.07959728,
   0.08785275,
   0.08177945,
   0.08107529,
   0.08961443,
   0.07537586,
   0.07540451};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-3.78,3.78);
   Graph_Graph3016->SetMinimum(0.6970636);
   Graph_Graph3016->SetMaximum(1.521866);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineWidth(2);
   Graph_Graph3016->SetMarkerStyle(20);
   Graph_Graph3016->GetXaxis()->SetNdivisions(509);
   Graph_Graph3016->GetXaxis()->SetLabelFont(132);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetXaxis()->SetTitleFont(132);
   Graph_Graph3016->GetYaxis()->SetNdivisions(509);
   Graph_Graph3016->GetYaxis()->SetLabelFont(132);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3016->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3016->GetYaxis()->SetTitleFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelFont(132);
   Graph_Graph3016->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3016->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3016->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3016);
   
   grae->Draw("p ");
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",25,-3.15,3.15);

   ci = TColor::GetColor("#000099");
   hist__12->SetLineColor(ci);
   hist__12->GetXaxis()->SetLabelFont(42);
   hist__12->GetXaxis()->SetTitleOffset(1);
   hist__12->GetXaxis()->SetTitleFont(42);
   hist__12->GetYaxis()->SetNdivisions(405);
   hist__12->GetYaxis()->SetLabelFont(42);
   hist__12->GetYaxis()->SetTitleFont(42);
   hist__12->GetZaxis()->SetLabelFont(42);
   hist__12->GetZaxis()->SetTitleOffset(1);
   hist__12->GetZaxis()->SetTitleFont(42);
   hist__12->Draw("axis same");
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
