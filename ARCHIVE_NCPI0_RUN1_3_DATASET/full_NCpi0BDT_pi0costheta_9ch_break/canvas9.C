#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Sun Jun  5 00:28:05 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",242,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-1.99764,1.25641,220.897);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__25->SetBinContent(1,28.48988);
   hmc__25->SetBinContent(2,14.34378);
   hmc__25->SetBinContent(3,12.98748);
   hmc__25->SetBinContent(4,17.13112);
   hmc__25->SetBinContent(5,11.55407);
   hmc__25->SetBinContent(6,10.78234);
   hmc__25->SetBinContent(7,16.19203);
   hmc__25->SetBinContent(8,12.84124);
   hmc__25->SetBinContent(9,14.99222);
   hmc__25->SetBinContent(10,17.17076);
   hmc__25->SetBinContent(11,15.10486);
   hmc__25->SetBinContent(12,19.97321);
   hmc__25->SetBinContent(13,17.49438);
   hmc__25->SetBinContent(14,18.81803);
   hmc__25->SetBinContent(15,20.07807);
   hmc__25->SetBinContent(16,18.84953);
   hmc__25->SetBinContent(17,28.2447);
   hmc__25->SetBinContent(18,30.23666);
   hmc__25->SetBinContent(19,29.23519);
   hmc__25->SetBinContent(20,31.91095);
   hmc__25->SetBinContent(21,47.12544);
   hmc__25->SetBinContent(22,48.44097);
   hmc__25->SetBinContent(23,51.01789);
   hmc__25->SetBinContent(24,67.5891);
   hmc__25->SetBinContent(25,99.88201);
   hmc__25->SetBinError(1,7.925265);
   hmc__25->SetBinError(2,7.347038);
   hmc__25->SetBinError(3,5.325946);
   hmc__25->SetBinError(4,5.272036);
   hmc__25->SetBinError(5,6.383131);
   hmc__25->SetBinError(6,4.786501);
   hmc__25->SetBinError(7,4.521497);
   hmc__25->SetBinError(8,5.201096);
   hmc__25->SetBinError(9,6.064985);
   hmc__25->SetBinError(10,5.02328);
   hmc__25->SetBinError(11,6.252458);
   hmc__25->SetBinError(12,6.13862);
   hmc__25->SetBinError(13,5.945783);
   hmc__25->SetBinError(14,5.937437);
   hmc__25->SetBinError(15,7.844755);
   hmc__25->SetBinError(16,6.114253);
   hmc__25->SetBinError(17,8.087684);
   hmc__25->SetBinError(18,7.855038);
   hmc__25->SetBinError(19,9.373628);
   hmc__25->SetBinError(20,9.94369);
   hmc__25->SetBinError(21,12.23984);
   hmc__25->SetBinError(22,14.24375);
   hmc__25->SetBinError(23,13.52583);
   hmc__25->SetBinError(24,18.17269);
   hmc__25->SetBinError(25,25.05532);
   hmc__25->SetBinError(26,0.3895343);
   hmc__25->SetMinimum(-1.99764);
   hmc__25->SetMaximum(209.7522);
   hmc__25->SetEntries(684.3796);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,-1,1);
   hs9_stack_9->SetMinimum(-1.244044e-08);
   hs9_stack_9->SetMaximum(104.8761);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.400445);
   hbadmatch_stack_1->SetBinContent(2,0.3401776);
   hbadmatch_stack_1->SetBinContent(3,0.7607957);
   hbadmatch_stack_1->SetBinContent(4,0.7319179);
   hbadmatch_stack_1->SetBinContent(6,0.536893);
   hbadmatch_stack_1->SetBinContent(7,0.5352025);
   hbadmatch_stack_1->SetBinContent(8,0.536893);
   hbadmatch_stack_1->SetBinContent(9,1.363313);
   hbadmatch_stack_1->SetBinContent(10,0.4117681);
   hbadmatch_stack_1->SetBinContent(11,2.035308);
   hbadmatch_stack_1->SetBinContent(12,0.6181809);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinContent(14,1.302863);
   hbadmatch_stack_1->SetBinContent(15,1.207088);
   hbadmatch_stack_1->SetBinContent(16,0.5841618);
   hbadmatch_stack_1->SetBinContent(17,0.7319179);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,1.694428);
   hbadmatch_stack_1->SetBinContent(20,1.086111);
   hbadmatch_stack_1->SetBinContent(21,1.88303);
   hbadmatch_stack_1->SetBinContent(22,1.163358);
   hbadmatch_stack_1->SetBinContent(23,1.301447);
   hbadmatch_stack_1->SetBinContent(24,0.5352025);
   hbadmatch_stack_1->SetBinContent(25,2.319254);
   hbadmatch_stack_1->SetBinError(1,0.5854992);
   hbadmatch_stack_1->SetBinError(2,0.3401776);
   hbadmatch_stack_1->SetBinError(3,0.4522722);
   hbadmatch_stack_1->SetBinError(4,0.438694);
   hbadmatch_stack_1->SetBinError(6,0.3929602);
   hbadmatch_stack_1->SetBinError(7,0.3921167);
   hbadmatch_stack_1->SetBinError(8,0.3929602);
   hbadmatch_stack_1->SetBinError(9,0.5713784);
   hbadmatch_stack_1->SetBinError(10,0.2914526);
   hbadmatch_stack_1->SetBinError(11,0.8144911);
   hbadmatch_stack_1->SetBinError(12,0.3576402);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetBinError(14,0.5376026);
   hbadmatch_stack_1->SetBinError(15,0.493496);
   hbadmatch_stack_1->SetBinError(16,0.4186276);
   hbadmatch_stack_1->SetBinError(17,0.438694);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.7246435);
   hbadmatch_stack_1->SetBinError(20,0.6293483);
   hbadmatch_stack_1->SetBinError(21,0.7273553);
   hbadmatch_stack_1->SetBinError(22,0.5351444);
   hbadmatch_stack_1->SetBinError(23,0.6007424);
   hbadmatch_stack_1->SetBinError(24,0.3921167);
   hbadmatch_stack_1->SetBinError(25,0.7544221);
   hbadmatch_stack_1->SetEntries(97);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1546;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,5.654845);
   hext_stack_2->SetBinContent(2,1.379791);
   hext_stack_2->SetBinContent(3,1.78639);
   hext_stack_2->SetBinContent(4,2.973055);
   hext_stack_2->SetBinContent(5,0.9660115);
   hext_stack_2->SetBinContent(6,0.4065989);
   hext_stack_2->SetBinContent(7,3.864046);
   hext_stack_2->SetBinContent(8,1.779209);
   hext_stack_2->SetBinContent(9,2.021405);
   hext_stack_2->SetBinContent(10,4.841647);
   hext_stack_2->SetBinContent(11,0.973192);
   hext_stack_2->SetBinContent(12,4.994461);
   hext_stack_2->SetBinContent(13,1.697008);
   hext_stack_2->SetBinContent(14,2.919576);
   hext_stack_2->SetBinContent(15,2.185808);
   hext_stack_2->SetBinContent(16,4.110651);
   hext_stack_2->SetBinContent(17,6.684288);
   hext_stack_2->SetBinContent(18,4.345666);
   hext_stack_2->SetBinContent(19,1.055394);
   hext_stack_2->SetBinContent(20,5.076662);
   hext_stack_2->SetBinContent(21,6.456453);
   hext_stack_2->SetBinContent(22,7.105247);
   hext_stack_2->SetBinContent(23,6.049854);
   hext_stack_2->SetBinContent(24,4.759445);
   hext_stack_2->SetBinContent(25,4.378797);
   hext_stack_2->SetBinError(1,1.687921);
   hext_stack_2->SetBinError(2,0.6935586);
   hext_stack_2->SetBinError(3,0.8039566);
   hext_stack_2->SetBinError(4,1.346105);
   hext_stack_2->SetBinError(5,0.7189592);
   hext_stack_2->SetBinError(6,0.4065989);
   hext_stack_2->SetBinError(7,1.437918);
   hext_stack_2->SetBinError(8,0.9206235);
   hext_stack_2->SetBinError(9,0.9448239);
   hext_stack_2->SetBinError(10,1.586957);
   hext_stack_2->SetBinError(11,0.5618727);
   hext_stack_2->SetBinError(12,1.644594);
   hext_stack_2->SetBinError(13,0.8873887);
   hext_stack_2->SetBinError(14,0.973192);
   hext_stack_2->SetBinError(15,1.006415);
   hext_stack_2->SetBinError(16,1.499292);
   hext_stack_2->SetBinError(17,1.921809);
   hext_stack_2->SetBinError(18,1.579311);
   hext_stack_2->SetBinError(19,0.6130171);
   hext_stack_2->SetBinError(20,1.662762);
   hext_stack_2->SetBinError(21,1.801611);
   hext_stack_2->SetBinError(22,1.859105);
   hext_stack_2->SetBinError(23,1.75513);
   hext_stack_2->SetBinError(24,1.567911);
   hext_stack_2->SetBinError(25,1.350755);
   hext_stack_2->SetEntries(193);

   ci = 1547;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(3,0.4049124);
   hdirt_stack_3->SetBinContent(6,0.4762587);
   hdirt_stack_3->SetBinContent(12,0.1380715);
   hdirt_stack_3->SetBinContent(13,0.2620035);
   hdirt_stack_3->SetBinContent(17,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.2623434);
   hdirt_stack_3->SetBinContent(19,0.2669376);
   hdirt_stack_3->SetBinContent(20,0.1380715);
   hdirt_stack_3->SetBinContent(22,0.4008912);
   hdirt_stack_3->SetBinContent(23,0.6338169);
   hdirt_stack_3->SetBinContent(25,1.199692);
   hdirt_stack_3->SetBinError(3,0.4049124);
   hdirt_stack_3->SetBinError(6,0.3652866);
   hdirt_stack_3->SetBinError(12,0.1380715);
   hdirt_stack_3->SetBinError(13,0.2620035);
   hdirt_stack_3->SetBinError(17,0.3381872);
   hdirt_stack_3->SetBinError(18,0.2623434);
   hdirt_stack_3->SetBinError(19,0.2645965);
   hdirt_stack_3->SetBinError(20,0.1380715);
   hdirt_stack_3->SetBinError(22,0.2968804);
   hdirt_stack_3->SetBinError(23,0.4691215);
   hdirt_stack_3->SetBinError(25,0.6007778);
   hdirt_stack_3->SetEntries(19);

   ci = 1548;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,8.297684);
   houtFV_stack_4->SetBinContent(2,4.253116);
   houtFV_stack_4->SetBinContent(3,3.541418);
   houtFV_stack_4->SetBinContent(4,4.431363);
   houtFV_stack_4->SetBinContent(5,3.43135);
   houtFV_stack_4->SetBinContent(6,2.094208);
   houtFV_stack_4->SetBinContent(7,2.497284);
   houtFV_stack_4->SetBinContent(8,2.383296);
   houtFV_stack_4->SetBinContent(9,2.589184);
   houtFV_stack_4->SetBinContent(10,2.934433);
   houtFV_stack_4->SetBinContent(11,3.85769);
   houtFV_stack_4->SetBinContent(12,3.167727);
   houtFV_stack_4->SetBinContent(13,2.635161);
   houtFV_stack_4->SetBinContent(14,2.732646);
   houtFV_stack_4->SetBinContent(15,2.262379);
   houtFV_stack_4->SetBinContent(16,1.513708);
   houtFV_stack_4->SetBinContent(17,2.155416);
   houtFV_stack_4->SetBinContent(18,5.078625);
   houtFV_stack_4->SetBinContent(19,4.76273);
   houtFV_stack_4->SetBinContent(20,3.851233);
   houtFV_stack_4->SetBinContent(21,5.469903);
   houtFV_stack_4->SetBinContent(22,7.691779);
   houtFV_stack_4->SetBinContent(23,9.281417);
   houtFV_stack_4->SetBinContent(24,12.94178);
   houtFV_stack_4->SetBinContent(25,17.44073);
   houtFV_stack_4->SetBinError(1,1.454655);
   houtFV_stack_4->SetBinError(2,1.039075);
   houtFV_stack_4->SetBinError(3,0.9207726);
   houtFV_stack_4->SetBinError(4,1.003462);
   houtFV_stack_4->SetBinError(5,0.9555882);
   houtFV_stack_4->SetBinError(6,0.720028);
   houtFV_stack_4->SetBinError(7,0.7339878);
   houtFV_stack_4->SetBinError(8,0.8205939);
   houtFV_stack_4->SetBinError(9,0.809167);
   houtFV_stack_4->SetBinError(10,0.8788963);
   houtFV_stack_4->SetBinError(11,0.9639098);
   houtFV_stack_4->SetBinError(12,0.8670673);
   houtFV_stack_4->SetBinError(13,0.8770177);
   houtFV_stack_4->SetBinError(14,0.8554385);
   houtFV_stack_4->SetBinError(15,0.6862057);
   houtFV_stack_4->SetBinError(16,0.5875827);
   houtFV_stack_4->SetBinError(17,0.6498885);
   houtFV_stack_4->SetBinError(18,1.178476);
   houtFV_stack_4->SetBinError(19,1.070353);
   houtFV_stack_4->SetBinError(20,0.9994861);
   houtFV_stack_4->SetBinError(21,1.178398);
   houtFV_stack_4->SetBinError(22,1.391815);
   houtFV_stack_4->SetBinError(23,1.473796);
   houtFV_stack_4->SetBinError(24,1.845945);
   houtFV_stack_4->SetBinError(25,2.205337);
   houtFV_stack_4->SetEntries(520);

   ci = 1549;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.8366721);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3199419);
   hNCpi0inFVcoh_stack_5->SetEntries(17);

   ci = 1550;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.283386);
   hNCpi0inFVqe_stack_6->SetEntries(33);

   ci = 1551;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.332238);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.952176);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.706644);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.565816);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.064608);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.01993);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.360306);
   hNCpi0inFVres_stack_7->SetBinContent(8,2.344112);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.166998);
   hNCpi0inFVres_stack_7->SetBinContent(10,2.439598);
   hNCpi0inFVres_stack_7->SetBinContent(11,2.842984);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.574128);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.416265);
   hNCpi0inFVres_stack_7->SetBinContent(14,3.387374);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.688968);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.686056);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.247968);
   hNCpi0inFVres_stack_7->SetBinContent(18,7.60029);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.012221);
   hNCpi0inFVres_stack_7->SetBinContent(20,8.255112);
   hNCpi0inFVres_stack_7->SetBinContent(21,11.18529);
   hNCpi0inFVres_stack_7->SetBinContent(22,11.81255);
   hNCpi0inFVres_stack_7->SetBinContent(23,12.38466);
   hNCpi0inFVres_stack_7->SetBinContent(24,16.10201);
   hNCpi0inFVres_stack_7->SetBinContent(25,20.16381);
   hNCpi0inFVres_stack_7->SetBinError(1,0.61891);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4239703);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5343706);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5555585);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4495894);
   hNCpi0inFVres_stack_7->SetBinError(6,0.3871832);
   hNCpi0inFVres_stack_7->SetBinError(7,0.6454354);
   hNCpi0inFVres_stack_7->SetBinError(8,0.55515);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6088184);
   hNCpi0inFVres_stack_7->SetBinError(10,0.4963577);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4951142);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7452991);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5535108);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6309509);
   hNCpi0inFVres_stack_7->SetBinError(15,0.8039599);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6925127);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8449525);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8970483);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8071802);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9359414);
   hNCpi0inFVres_stack_7->SetBinError(21,1.110533);
   hNCpi0inFVres_stack_7->SetBinError(22,1.170177);
   hNCpi0inFVres_stack_7->SetBinError(23,1.160071);
   hNCpi0inFVres_stack_7->SetBinError(24,1.292427);
   hNCpi0inFVres_stack_7->SetBinError(25,1.473087);
   hNCpi0inFVres_stack_7->SetEntries(2792);

   ci = 1552;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.06004);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.5860679);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.488086);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.5151539);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.7259042);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.473804);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.6699361);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.6275859);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.488086);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.8366721);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.729312);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.8358399);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.3347998);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.14374);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9202038);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.172472);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.78644);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.226608);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.579434);
   hNCpi0inFVdis_stack_8->SetBinContent(22,3.02617);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.663798);
   hNCpi0inFVdis_stack_8->SetBinContent(24,4.684896);
   hNCpi0inFVdis_stack_8->SetBinContent(25,7.935257);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3759641);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2215976);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2304939);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1861173);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3442606);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.07381642);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2438946);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.2901718);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1155977);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.2387875);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2304939);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3199419);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4889186);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2882649);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.09664838);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.379057);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2682147);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4046342);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4621826);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3560243);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5619438);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6274976);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.551927);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7343829);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.9202149);
   hNCpi0inFVdis_stack_8->SetEntries(645);

   ci = 1553;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1554;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);

   ci = 1555;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs9->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,6.247083);
   hCCpi0inFV_stack_11->SetBinContent(2,3.7393);
   hCCpi0inFV_stack_11->SetBinContent(3,1.370245);
   hCCpi0inFV_stack_11->SetBinContent(4,3.911248);
   hCCpi0inFV_stack_11->SetBinContent(5,1.564724);
   hCCpi0inFV_stack_11->SetBinContent(6,3.929052);
   hCCpi0inFV_stack_11->SetBinContent(7,2.929362);
   hCCpi0inFV_stack_11->SetBinContent(8,2.961458);
   hCCpi0inFV_stack_11->SetBinContent(9,3.17764);
   hCCpi0inFV_stack_11->SetBinContent(10,4.249787);
   hCCpi0inFV_stack_11->SetBinContent(11,2.534629);
   hCCpi0inFV_stack_11->SetBinContent(12,2.22367);
   hCCpi0inFV_stack_11->SetBinContent(13,3.203867);
   hCCpi0inFV_stack_11->SetBinContent(14,3.57107);
   hCCpi0inFV_stack_11->SetBinContent(15,3.967882);
   hCCpi0inFV_stack_11->SetBinContent(16,3.902046);
   hCCpi0inFV_stack_11->SetBinContent(17,6.20873);
   hCCpi0inFV_stack_11->SetBinContent(18,6.012077);
   hCCpi0inFV_stack_11->SetBinContent(19,6.289474);
   hCCpi0inFV_stack_11->SetBinContent(20,5.983166);
   hCCpi0inFV_stack_11->SetBinContent(21,11.48175);
   hCCpi0inFV_stack_11->SetBinContent(22,9.542583);
   hCCpi0inFV_stack_11->SetBinContent(23,12.47309);
   hCCpi0inFV_stack_11->SetBinContent(24,14.07104);
   hCCpi0inFV_stack_11->SetBinContent(25,26.72822);
   hCCpi0inFV_stack_11->SetBinError(1,1.271358);
   hCCpi0inFV_stack_11->SetBinError(2,0.9670784);
   hCCpi0inFV_stack_11->SetBinError(3,0.5179089);
   hCCpi0inFV_stack_11->SetBinError(4,0.9814756);
   hCCpi0inFV_stack_11->SetBinError(5,0.6062906);
   hCCpi0inFV_stack_11->SetBinError(6,0.9458132);
   hCCpi0inFV_stack_11->SetBinError(7,0.8777653);
   hCCpi0inFV_stack_11->SetBinError(8,0.855107);
   hCCpi0inFV_stack_11->SetBinError(9,0.8775989);
   hCCpi0inFV_stack_11->SetBinError(10,1.104191);
   hCCpi0inFV_stack_11->SetBinError(11,0.7447001);
   hCCpi0inFV_stack_11->SetBinError(12,0.7676066);
   hCCpi0inFV_stack_11->SetBinError(13,0.8839008);
   hCCpi0inFV_stack_11->SetBinError(14,0.9206376);
   hCCpi0inFV_stack_11->SetBinError(15,0.9624406);
   hCCpi0inFV_stack_11->SetBinError(16,1.01018);
   hCCpi0inFV_stack_11->SetBinError(17,1.234541);
   hCCpi0inFV_stack_11->SetBinError(18,1.187295);
   hCCpi0inFV_stack_11->SetBinError(19,1.277827);
   hCCpi0inFV_stack_11->SetBinError(20,1.247445);
   hCCpi0inFV_stack_11->SetBinError(21,1.779951);
   hCCpi0inFV_stack_11->SetBinError(22,1.549876);
   hCCpi0inFV_stack_11->SetBinError(23,1.79164);
   hCCpi0inFV_stack_11->SetBinError(24,1.874148);
   hCCpi0inFV_stack_11->SetBinError(25,2.660923);
   hCCpi0inFV_stack_11->SetEntries(647);

   ci = 1556;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs9->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,0.5901461);
   hNCinFV_stack_12->SetBinContent(2,0.1950248);
   hNCinFV_stack_12->SetBinContent(3,0.1950248);
   hNCinFV_stack_12->SetBinContent(4,0.3401776);
   hNCinFV_stack_12->SetBinContent(5,0.1950248);
   hNCinFV_stack_12->SetBinContent(6,0.1967154);
   hNCinFV_stack_12->SetBinContent(7,0.536893);
   hNCinFV_stack_12->SetBinContent(8,0.3917402);
   hNCinFV_stack_12->SetBinContent(9,0.5838439);
   hNCinFV_stack_12->SetBinContent(10,0.1967154);
   hNCinFV_stack_12->SetBinContent(11,0.1967154);
   hNCinFV_stack_12->SetBinContent(12,0.536893);
   hNCinFV_stack_12->SetBinContent(13,0.3401776);
   hNCinFV_stack_12->SetBinContent(14,0.3401776);
   hNCinFV_stack_12->SetBinContent(15,0.1950248);
   hNCinFV_stack_12->SetBinContent(17,0.536893);
   hNCinFV_stack_12->SetBinContent(18,0.3401776);
   hNCinFV_stack_12->SetBinContent(20,0.9303237);
   hNCinFV_stack_12->SetBinContent(21,0.3934307);
   hNCinFV_stack_12->SetBinContent(22,0.5352025);
   hNCinFV_stack_12->SetBinContent(23,2.394159);
   hNCinFV_stack_12->SetBinContent(24,3.766095);
   hNCinFV_stack_12->SetBinContent(25,2.679393);
   hNCinFV_stack_12->SetBinError(1,0.340721);
   hNCinFV_stack_12->SetBinError(2,0.1950249);
   hNCinFV_stack_12->SetBinError(3,0.1950249);
   hNCinFV_stack_12->SetBinError(4,0.3401776);
   hNCinFV_stack_12->SetBinError(5,0.1950249);
   hNCinFV_stack_12->SetBinError(6,0.1967154);
   hNCinFV_stack_12->SetBinError(7,0.3929602);
   hNCinFV_stack_12->SetBinError(8,0.2770047);
   hNCinFV_stack_12->SetBinError(9,0.3957551);
   hNCinFV_stack_12->SetBinError(10,0.1967154);
   hNCinFV_stack_12->SetBinError(11,0.1967154);
   hNCinFV_stack_12->SetBinError(12,0.3929602);
   hNCinFV_stack_12->SetBinError(13,0.3401776);
   hNCinFV_stack_12->SetBinError(14,0.3401776);
   hNCinFV_stack_12->SetBinError(15,0.1950249);
   hNCinFV_stack_12->SetBinError(17,0.3929602);
   hNCinFV_stack_12->SetBinError(18,0.3401776);
   hNCinFV_stack_12->SetBinError(20,0.4814682);
   hNCinFV_stack_12->SetBinError(21,0.2781975);
   hNCinFV_stack_12->SetBinError(22,0.3921167);
   hNCinFV_stack_12->SetBinError(23,0.785313);
   hNCinFV_stack_12->SetBinError(24,0.9410676);
   hNCinFV_stack_12->SetBinError(25,0.8775546);
   hNCinFV_stack_12->SetEntries(70);

   ci = 1557;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs9->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,1.458165);
   hnumuCCinFV_stack_13->SetBinContent(2,1.870225);
   hnumuCCinFV_stack_13->SetBinContent(3,1.70606);
   hnumuCCinFV_stack_13->SetBinContent(4,1.356386);
   hnumuCCinFV_stack_13->SetBinContent(5,2.411426);
   hnumuCCinFV_stack_13->SetBinContent(6,0.7319179);
   hnumuCCinFV_stack_13->SetBinContent(7,1.967231);
   hnumuCCinFV_stack_13->SetBinContent(8,1.77459);
   hnumuCCinFV_stack_13->SetBinContent(9,1.853018);
   hnumuCCinFV_stack_13->SetBinContent(10,1.441329);
   hnumuCCinFV_stack_13->SetBinContent(11,2.17626);
   hnumuCCinFV_stack_13->SetBinContent(12,2.827602);
   hnumuCCinFV_stack_13->SetBinContent(13,3.818847);
   hnumuCCinFV_stack_13->SetBinContent(14,3.672682);
   hnumuCCinFV_stack_13->SetBinContent(15,4.236118);
   hnumuCCinFV_stack_13->SetBinContent(16,2.853369);
   hnumuCCinFV_stack_13->SetBinContent(17,4.365298);
   hnumuCCinFV_stack_13->SetBinContent(18,5.019567);
   hnumuCCinFV_stack_13->SetBinContent(19,6.122566);
   hnumuCCinFV_stack_13->SetBinContent(20,5.335761);
   hnumuCCinFV_stack_13->SetBinContent(21,7.676146);
   hnumuCCinFV_stack_13->SetBinContent(22,7.037973);
   hnumuCCinFV_stack_13->SetBinContent(23,3.459599);
   hnumuCCinFV_stack_13->SetBinContent(24,9.973948);
   hnumuCCinFV_stack_13->SetBinContent(25,11.00725);
   hnumuCCinFV_stack_13->SetBinError(1,0.6071984);
   hnumuCCinFV_stack_13->SetBinError(2,0.6744417);
   hnumuCCinFV_stack_13->SetBinError(3,0.6062509);
   hnumuCCinFV_stack_13->SetBinError(4,0.6925055);
   hnumuCCinFV_stack_13->SetBinError(5,0.8303771);
   hnumuCCinFV_stack_13->SetBinError(6,0.438694);
   hnumuCCinFV_stack_13->SetBinError(7,0.7254072);
   hnumuCCinFV_stack_13->SetBinError(8,0.7366465);
   hnumuCCinFV_stack_13->SetBinError(9,0.7837669);
   hnumuCCinFV_stack_13->SetBinError(10,0.6677131);
   hnumuCCinFV_stack_13->SetBinError(11,0.735264);
   hnumuCCinFV_stack_13->SetBinError(12,1.344714);
   hnumuCCinFV_stack_13->SetBinError(13,1.034923);
   hnumuCCinFV_stack_13->SetBinError(14,1.086169);
   hnumuCCinFV_stack_13->SetBinError(15,1.094738);
   hnumuCCinFV_stack_13->SetBinError(16,0.8876072);
   hnumuCCinFV_stack_13->SetBinError(17,1.397745);
   hnumuCCinFV_stack_13->SetBinError(18,1.272663);
   hnumuCCinFV_stack_13->SetBinError(19,1.372649);
   hnumuCCinFV_stack_13->SetBinError(20,1.385603);
   hnumuCCinFV_stack_13->SetBinError(21,1.454953);
   hnumuCCinFV_stack_13->SetBinError(22,1.374395);
   hnumuCCinFV_stack_13->SetBinError(23,0.8977805);
   hnumuCCinFV_stack_13->SetBinError(24,2.168131);
   hnumuCCinFV_stack_13->SetBinError(25,2.293465);
   hnumuCCinFV_stack_13->SetEntries(361);

   ci = 1558;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs9->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(1,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(4,0.2502081);
   hnueCCinFV_stack_14->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(18,0.1529246);
   hnueCCinFV_stack_14->SetBinContent(19,0.2171002);
   hnueCCinFV_stack_14->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(24,0.5593877);
   hnueCCinFV_stack_14->SetBinContent(25,4.634607);
   hnueCCinFV_stack_14->SetBinError(1,0.2781975);
   hnueCCinFV_stack_14->SetBinError(4,0.2502081);
   hnueCCinFV_stack_14->SetBinError(5,0.1950249);
   hnueCCinFV_stack_14->SetBinError(18,0.1529246);
   hnueCCinFV_stack_14->SetBinError(19,0.2171002);
   hnueCCinFV_stack_14->SetBinError(23,0.1950249);
   hnueCCinFV_stack_14->SetBinError(24,0.4046898);
   hnueCCinFV_stack_14->SetBinError(25,2.09217);
   hnueCCinFV_stack_14->SetEntries(18);

   ci = 1559;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs9->Add(hnueCCinFV_stack_14,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__26->SetBinContent(1,28.48988);
   hmcerror__26->SetBinContent(2,14.34378);
   hmcerror__26->SetBinContent(3,12.98748);
   hmcerror__26->SetBinContent(4,17.13112);
   hmcerror__26->SetBinContent(5,11.55407);
   hmcerror__26->SetBinContent(6,10.78234);
   hmcerror__26->SetBinContent(7,16.19203);
   hmcerror__26->SetBinContent(8,12.84124);
   hmcerror__26->SetBinContent(9,14.99222);
   hmcerror__26->SetBinContent(10,17.17076);
   hmcerror__26->SetBinContent(11,15.10486);
   hmcerror__26->SetBinContent(12,19.97321);
   hmcerror__26->SetBinContent(13,17.49438);
   hmcerror__26->SetBinContent(14,18.81803);
   hmcerror__26->SetBinContent(15,20.07807);
   hmcerror__26->SetBinContent(16,18.84953);
   hmcerror__26->SetBinContent(17,28.2447);
   hmcerror__26->SetBinContent(18,30.23666);
   hmcerror__26->SetBinContent(19,29.23519);
   hmcerror__26->SetBinContent(20,31.91095);
   hmcerror__26->SetBinContent(21,47.12544);
   hmcerror__26->SetBinContent(22,48.44097);
   hmcerror__26->SetBinContent(23,51.01789);
   hmcerror__26->SetBinContent(24,67.5891);
   hmcerror__26->SetBinContent(25,99.88201);
   hmcerror__26->SetBinError(1,7.925265);
   hmcerror__26->SetBinError(2,7.347038);
   hmcerror__26->SetBinError(3,5.325946);
   hmcerror__26->SetBinError(4,5.272036);
   hmcerror__26->SetBinError(5,6.383131);
   hmcerror__26->SetBinError(6,4.786501);
   hmcerror__26->SetBinError(7,4.521497);
   hmcerror__26->SetBinError(8,5.201096);
   hmcerror__26->SetBinError(9,6.064985);
   hmcerror__26->SetBinError(10,5.02328);
   hmcerror__26->SetBinError(11,6.252458);
   hmcerror__26->SetBinError(12,6.13862);
   hmcerror__26->SetBinError(13,5.945783);
   hmcerror__26->SetBinError(14,5.937437);
   hmcerror__26->SetBinError(15,7.844755);
   hmcerror__26->SetBinError(16,6.114253);
   hmcerror__26->SetBinError(17,8.087684);
   hmcerror__26->SetBinError(18,7.855038);
   hmcerror__26->SetBinError(19,9.373628);
   hmcerror__26->SetBinError(20,9.94369);
   hmcerror__26->SetBinError(21,12.23984);
   hmcerror__26->SetBinError(22,14.24375);
   hmcerror__26->SetBinError(23,13.52583);
   hmcerror__26->SetBinError(24,18.17269);
   hmcerror__26->SetBinError(25,25.05532);
   hmcerror__26->SetBinError(26,0.3895343);
   hmcerror__26->SetEntries(684.3796);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3033[25] = {
   25,
   20,
   6,
   15,
   11,
   12,
   11,
   13,
   11,
   9,
   13,
   20,
   13,
   22,
   17,
   19,
   18,
   19,
   23,
   29,
   26,
   35,
   44,
   63,
   91};
   Double_t _felx3033[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3033[25] = {
   5.1474,
   4.6266,
   2.67925,
   4.0385,
   3.4975,
   3.64022,
   3.4975,
   3.77763,
   3.4975,
   3.19354,
   3.77763,
   4.6266,
   3.77763,
   4.8417,
   4.2835,
   4.5151,
   4.4008,
   4.5151,
   4.9457,
   5.5285,
   5.2453,
   6.0548,
   6.7671,
   8.0648,
   9.6617};
   Double_t _fehx3033[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3033[25] = {
   4.9374,
   4.4133,
   2.41858,
   3.8197,
   3.27,
   3.4155,
   3.27,
   3.5552,
   3.27,
   2.9582,
   3.5552,
   4.4133,
   3.5552,
   4.6299,
   4.0673,
   4.3011,
   4.1858,
   4.3011,
   4.7346,
   5.3201,
   5.0358,
   5.8483,
   6.5623,
   7.862,
   9.46};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,-1.2,1.2);
   Graph_Graph3033->SetMinimum(2.988675);
   Graph_Graph3033->SetMaximum(110.1739);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.84#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 585.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 23.7","F");

   ci = 1546;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 88.5","F");

   ci = 1547;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.5","F");

   ci = 1548;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 121.3","F");

   ci = 1549;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.2","F");

   ci = 1550;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.3","F");

   ci = 1551;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  151.3","F");

   ci = 1552;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  36.9","F");

   ci = 1553;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1554;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1555;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 152.3","F");

   ci = 1556;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 16.6","F");

   ci = 1557;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 96.2","F");

   ci = 1558;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 6.6","F");

   ci = 1559;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3034[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3034[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3034[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3034[25] = {
   0.2781783,
   0.5122108,
   0.4100832,
   0.3077461,
   0.5524572,
   0.4439203,
   0.2792421,
   0.4050308,
   0.4045422,
   0.2925484,
   0.4139367,
   0.3073427,
   0.3398681,
   0.3155185,
   0.3907126,
   0.3243716,
   0.2863434,
   0.2597852,
   0.3206282,
   0.3116075,
   0.2597288,
   0.2940434,
   0.2651194,
   0.2688701,
   0.2508492};
   Double_t _fehx3034[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3034[25] = {
   0.2781783,
   0.5122108,
   0.4100832,
   0.3077461,
   0.5524572,
   0.4439203,
   0.2792421,
   0.4050308,
   0.4045422,
   0.2925484,
   0.4139367,
   0.3073427,
   0.3398681,
   0.3155185,
   0.3907126,
   0.3243716,
   0.2863434,
   0.2597852,
   0.3206282,
   0.3116075,
   0.2597288,
   0.2940434,
   0.2651194,
   0.2688701,
   0.2508492};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,-1.2,1.2);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3034->GetXaxis()->SetRange(9,92);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3035[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3035[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3035[25] = {
   0.2017668,
   0.2557627,
   0.2335357,
   0.2268888,
   0.2610703,
   0.2743612,
   0.2037326,
   0.2441384,
   0.2595424,
   0.2160413,
   0.2465939,
   0.2071765,
   0.2210865,
   0.2227647,
   0.2372823,
   0.2257001,
   0.2224467,
   0.226562,
   0.2539068,
   0.2382451,
   0.2096204,
   0.2162731,
   0.219408,
   0.2134978,
   0.197155};
   Double_t _fehx3035[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3035[25] = {
   0.2017668,
   0.2557627,
   0.2335357,
   0.2268888,
   0.2610703,
   0.2743612,
   0.2037326,
   0.2441384,
   0.2595424,
   0.2160413,
   0.2465939,
   0.2071765,
   0.2210865,
   0.2227647,
   0.2372823,
   0.2257001,
   0.2224467,
   0.226562,
   0.2539068,
   0.2382451,
   0.2096204,
   0.2162731,
   0.219408,
   0.2134978,
   0.197155};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,-1.2,1.2);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(9,92);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[25] = {
   -0.96,
   -0.88,
   -0.8,
   -0.72,
   -0.64,
   -0.56,
   -0.48,
   -0.4,
   -0.32,
   -0.24,
   -0.16,
   -0.08,
   -3.469447e-17,
   0.08,
   0.16,
   0.24,
   0.32,
   0.4,
   0.48,
   0.56,
   0.64,
   0.72,
   0.8,
   0.88,
   0.96};
   Double_t _fy3036[25] = {
   0.8775046,
   1.394333,
   0.4619835,
   0.8755993,
   0.9520451,
   1.112931,
   0.6793466,
   1.012364,
   0.7337139,
   0.5241468,
   0.8606499,
   1.001342,
   0.7430957,
   1.169092,
   0.846695,
   1.007983,
   0.6372876,
   0.6283763,
   0.7867231,
   0.908779,
   0.551719,
   0.7225289,
   0.8624426,
   0.9321029,
   0.911075};
   Double_t _felx3036[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fely3036[25] = {
   0.1806747,
   0.322551,
   0.2062949,
   0.2357405,
   0.3027071,
   0.3376094,
   0.2160013,
   0.2941796,
   0.2332877,
   0.1859871,
   0.2500936,
   0.2316403,
   0.2159339,
   0.2572905,
   0.2133422,
   0.2395338,
   0.1558097,
   0.1493254,
   0.1691694,
   0.1732478,
   0.1113051,
   0.1249934,
   0.1326417,
   0.119321,
   0.09673113};
   Double_t _fehx3036[25] = {
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04,
   0.04};
   Double_t _fehy3036[25] = {
   0.1733037,
   0.3076804,
   0.186224,
   0.2229684,
   0.283017,
   0.3167679,
   0.2019512,
   0.2768581,
   0.2181131,
   0.1722812,
   0.2353679,
   0.220961,
   0.2032195,
   0.2460353,
   0.2025743,
   0.2281807,
   0.1481977,
   0.1422479,
   0.1619487,
   0.1667171,
   0.1068595,
   0.1207304,
   0.1286274,
   0.1163205,
   0.09471175};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,-1.2,1.2);
   Graph_Graph3036->SetMinimum(0.1110562);
   Graph_Graph3036->SetMaximum(1.846646);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_pi0_costheta_all",25,-1,1);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
   TLine *line = new TLine(-1,1,1,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
