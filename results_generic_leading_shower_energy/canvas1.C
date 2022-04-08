#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Apr  7 22:02:14 2022) by ROOT version 6.26/00
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
   pad1->Range(-92.30769,-20.38452,676.9231,1717.664);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_bnb_10_kine_pio_energy_high_all",18,0,600);
   hmc__1->SetBinContent(0,12593.05);
   hmc__1->SetBinContent(1,1019.226);
   hmc__1->SetBinContent(2,682.9423);
   hmc__1->SetBinContent(3,553.2945);
   hmc__1->SetBinContent(4,526.5416);
   hmc__1->SetBinContent(5,463.0734);
   hmc__1->SetBinContent(6,375.9488);
   hmc__1->SetBinContent(7,316.3516);
   hmc__1->SetBinContent(8,261.276);
   hmc__1->SetBinContent(9,214.052);
   hmc__1->SetBinContent(10,180.8654);
   hmc__1->SetBinContent(11,151.6806);
   hmc__1->SetBinContent(12,125.7458);
   hmc__1->SetBinContent(13,110.0787);
   hmc__1->SetBinContent(14,94.44099);
   hmc__1->SetBinContent(15,83.57824);
   hmc__1->SetBinContent(16,64.24321);
   hmc__1->SetBinContent(17,62.37548);
   hmc__1->SetBinContent(18,50.55274);
   hmc__1->SetBinContent(19,579.9308);
   hmc__1->SetBinError(0,36.71901);
   hmc__1->SetBinError(1,222.5116);
   hmc__1->SetBinError(2,96.45614);
   hmc__1->SetBinError(3,88.46003);
   hmc__1->SetBinError(4,85.01065);
   hmc__1->SetBinError(5,83.28496);
   hmc__1->SetBinError(6,69.57544);
   hmc__1->SetBinError(7,58.41713);
   hmc__1->SetBinError(8,49.76039);
   hmc__1->SetBinError(9,39.05631);
   hmc__1->SetBinError(10,34.76072);
   hmc__1->SetBinError(11,30.33208);
   hmc__1->SetBinError(12,24.10784);
   hmc__1->SetBinError(13,21.01201);
   hmc__1->SetBinError(14,19.25878);
   hmc__1->SetBinError(15,16.21262);
   hmc__1->SetBinError(16,12.96572);
   hmc__1->SetBinError(17,12.9978);
   hmc__1->SetBinError(18,11.54189);
   hmc__1->SetBinError(19,102.4169);
   hmc__1->SetMinimum(-20.38452);
   hmc__1->SetMaximum(1630.761);
   hmc__1->SetEntries(16480.37);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",18,0,600);
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(1070.187);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_10_kine_pio_energy_high_all",18,0,600);
   hbadmatch_stack_1->SetBinContent(0,363.7249);
   hbadmatch_stack_1->SetBinContent(1,25.4227);
   hbadmatch_stack_1->SetBinContent(2,21.51136);
   hbadmatch_stack_1->SetBinContent(3,18.24083);
   hbadmatch_stack_1->SetBinContent(4,15.42726);
   hbadmatch_stack_1->SetBinContent(5,11.58671);
   hbadmatch_stack_1->SetBinContent(6,8.253587);
   hbadmatch_stack_1->SetBinContent(7,7.687798);
   hbadmatch_stack_1->SetBinContent(8,4.428878);
   hbadmatch_stack_1->SetBinContent(9,3.973192);
   hbadmatch_stack_1->SetBinContent(10,3.09059);
   hbadmatch_stack_1->SetBinContent(11,2.262793);
   hbadmatch_stack_1->SetBinContent(12,1.947993);
   hbadmatch_stack_1->SetBinContent(13,1.947844);
   hbadmatch_stack_1->SetBinContent(14,1.299637);
   hbadmatch_stack_1->SetBinContent(15,1.063768);
   hbadmatch_stack_1->SetBinContent(16,0.9992558);
   hbadmatch_stack_1->SetBinContent(17,1.006182);
   hbadmatch_stack_1->SetBinContent(18,0.5923092);
   hbadmatch_stack_1->SetBinContent(19,6.188578);
   hbadmatch_stack_1->SetBinError(0,5.422098);
   hbadmatch_stack_1->SetBinError(1,1.584598);
   hbadmatch_stack_1->SetBinError(2,1.398719);
   hbadmatch_stack_1->SetBinError(3,1.329484);
   hbadmatch_stack_1->SetBinError(4,1.536165);
   hbadmatch_stack_1->SetBinError(5,0.9059927);
   hbadmatch_stack_1->SetBinError(6,0.7501497);
   hbadmatch_stack_1->SetBinError(7,0.7075337);
   hbadmatch_stack_1->SetBinError(8,0.6429084);
   hbadmatch_stack_1->SetBinError(9,0.5276443);
   hbadmatch_stack_1->SetBinError(10,0.4936877);
   hbadmatch_stack_1->SetBinError(11,0.5280886);
   hbadmatch_stack_1->SetBinError(12,0.653154);
   hbadmatch_stack_1->SetBinError(13,0.3356403);
   hbadmatch_stack_1->SetBinError(14,0.2602602);
   hbadmatch_stack_1->SetBinError(15,0.2394263);
   hbadmatch_stack_1->SetBinError(16,0.2224229);
   hbadmatch_stack_1->SetBinError(17,0.2229115);
   hbadmatch_stack_1->SetBinError(18,0.1701968);
   hbadmatch_stack_1->SetBinError(19,0.590609);
   hbadmatch_stack_1->SetEntries(12616);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_10_kine_pio_energy_high_all",18,0,600);
   hext_stack_2->SetBinContent(0,1387.332);
   hext_stack_2->SetBinContent(1,112.3137);
   hext_stack_2->SetBinContent(2,117.1086);
   hext_stack_2->SetBinContent(3,90.17024);
   hext_stack_2->SetBinContent(4,65.59186);
   hext_stack_2->SetBinContent(5,49.74571);
   hext_stack_2->SetBinContent(6,41.52474);
   hext_stack_2->SetBinContent(7,31.97042);
   hext_stack_2->SetBinContent(8,26.45705);
   hext_stack_2->SetBinContent(9,20.64648);
   hext_stack_2->SetBinContent(10,16.34921);
   hext_stack_2->SetBinContent(11,15.67164);
   hext_stack_2->SetBinContent(12,12.78272);
   hext_stack_2->SetBinContent(13,14.14879);
   hext_stack_2->SetBinContent(14,13.05812);
   hext_stack_2->SetBinContent(15,10.77315);
   hext_stack_2->SetBinContent(16,9.070327);
   hext_stack_2->SetBinContent(17,10.28916);
   hext_stack_2->SetBinContent(18,5.342936);
   hext_stack_2->SetBinContent(19,107.6224);
   hext_stack_2->SetBinError(0,15.19935);
   hext_stack_2->SetBinError(1,4.341871);
   hext_stack_2->SetBinError(2,4.458398);
   hext_stack_2->SetBinError(3,3.888775);
   hext_stack_2->SetBinError(4,3.309753);
   hext_stack_2->SetBinError(5,2.888503);
   hext_stack_2->SetBinError(6,2.627577);
   hext_stack_2->SetBinError(7,2.31019);
   hext_stack_2->SetBinError(8,2.092141);
   hext_stack_2->SetBinError(9,1.837472);
   hext_stack_2->SetBinError(10,1.617773);
   hext_stack_2->SetBinError(11,1.603651);
   hext_stack_2->SetBinError(12,1.458523);
   hext_stack_2->SetBinError(13,1.538545);
   hext_stack_2->SetBinError(14,1.484933);
   hext_stack_2->SetBinError(15,1.34358);
   hext_stack_2->SetBinError(16,1.21938);
   hext_stack_2->SetBinError(17,1.313359);
   hext_stack_2->SetBinError(18,0.899512);
   hext_stack_2->SetBinError(19,4.231076);
   hext_stack_2->SetEntries(39405);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_10_kine_pio_energy_high_all",18,0,600);
   hdirt_stack_3->SetBinContent(0,486.1107);
   hdirt_stack_3->SetBinContent(1,31.07158);
   hdirt_stack_3->SetBinContent(2,23.9993);
   hdirt_stack_3->SetBinContent(3,17.75053);
   hdirt_stack_3->SetBinContent(4,13.58192);
   hdirt_stack_3->SetBinContent(5,9.140928);
   hdirt_stack_3->SetBinContent(6,5.825623);
   hdirt_stack_3->SetBinContent(7,5.177281);
   hdirt_stack_3->SetBinContent(8,2.850249);
   hdirt_stack_3->SetBinContent(9,2.486302);
   hdirt_stack_3->SetBinContent(10,1.516472);
   hdirt_stack_3->SetBinContent(11,1.269289);
   hdirt_stack_3->SetBinContent(12,1.571112);
   hdirt_stack_3->SetBinContent(13,1.098967);
   hdirt_stack_3->SetBinContent(14,0.9552811);
   hdirt_stack_3->SetBinContent(15,0.7921231);
   hdirt_stack_3->SetBinContent(16,1.360716);
   hdirt_stack_3->SetBinContent(17,0.556331);
   hdirt_stack_3->SetBinContent(18,0.4467213);
   hdirt_stack_3->SetBinContent(19,5.231597);
   hdirt_stack_3->SetBinError(0,5.644722);
   hdirt_stack_3->SetBinError(1,1.525689);
   hdirt_stack_3->SetBinError(2,1.432806);
   hdirt_stack_3->SetBinError(3,1.235953);
   hdirt_stack_3->SetBinError(4,1.064775);
   hdirt_stack_3->SetBinError(5,0.8436049);
   hdirt_stack_3->SetBinError(6,0.592845);
   hdirt_stack_3->SetBinError(7,0.5581041);
   hdirt_stack_3->SetBinError(8,0.3388665);
   hdirt_stack_3->SetBinError(9,0.3185356);
   hdirt_stack_3->SetBinError(10,0.2569745);
   hdirt_stack_3->SetBinError(11,0.2316453);
   hdirt_stack_3->SetBinError(12,0.3382678);
   hdirt_stack_3->SetBinError(13,0.2116017);
   hdirt_stack_3->SetBinError(14,0.1981365);
   hdirt_stack_3->SetBinError(15,0.1812045);
   hdirt_stack_3->SetBinError(16,0.4048153);
   hdirt_stack_3->SetBinError(17,0.1555998);
   hdirt_stack_3->SetBinError(18,0.1357749);
   hdirt_stack_3->SetBinError(19,0.4642909);
   hdirt_stack_3->SetEntries(20994);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_10_kine_pio_energy_high_all",18,0,600);
   houtFV_stack_4->SetBinContent(0,619.6235);
   houtFV_stack_4->SetBinContent(1,55.49891);
   houtFV_stack_4->SetBinContent(2,43.41062);
   houtFV_stack_4->SetBinContent(3,48.01726);
   houtFV_stack_4->SetBinContent(4,44.48857);
   houtFV_stack_4->SetBinContent(5,40.07383);
   houtFV_stack_4->SetBinContent(6,33.68713);
   houtFV_stack_4->SetBinContent(7,23.99231);
   houtFV_stack_4->SetBinContent(8,21.71598);
   houtFV_stack_4->SetBinContent(9,18.14484);
   houtFV_stack_4->SetBinContent(10,15.09278);
   houtFV_stack_4->SetBinContent(11,12.77579);
   houtFV_stack_4->SetBinContent(12,9.458954);
   houtFV_stack_4->SetBinContent(13,8.255105);
   houtFV_stack_4->SetBinContent(14,6.544054);
   houtFV_stack_4->SetBinContent(15,5.954407);
   houtFV_stack_4->SetBinContent(16,4.422552);
   houtFV_stack_4->SetBinContent(17,4.595915);
   houtFV_stack_4->SetBinContent(18,3.664847);
   houtFV_stack_4->SetBinContent(19,30.43866);
   houtFV_stack_4->SetBinError(0,7.303409);
   houtFV_stack_4->SetBinError(1,2.301432);
   houtFV_stack_4->SetBinError(2,1.704468);
   houtFV_stack_4->SetBinError(3,1.740621);
   houtFV_stack_4->SetBinError(4,1.606409);
   houtFV_stack_4->SetBinError(5,1.50856);
   houtFV_stack_4->SetBinError(6,1.405541);
   houtFV_stack_4->SetBinError(7,1.144734);
   houtFV_stack_4->SetBinError(8,1.095684);
   houtFV_stack_4->SetBinError(9,1.243083);
   houtFV_stack_4->SetBinError(10,1.112173);
   houtFV_stack_4->SetBinError(11,0.8671525);
   houtFV_stack_4->SetBinError(12,0.8167257);
   houtFV_stack_4->SetBinError(13,0.92721);
   houtFV_stack_4->SetBinError(14,0.592813);
   houtFV_stack_4->SetBinError(15,0.5703463);
   houtFV_stack_4->SetBinError(16,0.4893542);
   houtFV_stack_4->SetBinError(17,0.7264476);
   houtFV_stack_4->SetBinError(18,0.4716492);
   houtFV_stack_4->SetBinError(19,1.48121);
   houtFV_stack_4->SetEntries(25917);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","generic_bnb_10_kine_pio_energy_high_all",18,0,600);
   hNCpi0inFV_stack_5->SetBinContent(0,106.31);
   hNCpi0inFV_stack_5->SetBinContent(1,8.939278);
   hNCpi0inFV_stack_5->SetBinContent(2,20.39487);
   hNCpi0inFV_stack_5->SetBinContent(3,46.78118);
   hNCpi0inFV_stack_5->SetBinContent(4,67.90572);
   hNCpi0inFV_stack_5->SetBinContent(5,69.87342);
   hNCpi0inFV_stack_5->SetBinContent(6,59.77974);
   hNCpi0inFV_stack_5->SetBinContent(7,49.85925);
   hNCpi0inFV_stack_5->SetBinContent(8,40.97318);
   hNCpi0inFV_stack_5->SetBinContent(9,34.45249);
   hNCpi0inFV_stack_5->SetBinContent(10,28.15954);
   hNCpi0inFV_stack_5->SetBinContent(11,22.86399);
   hNCpi0inFV_stack_5->SetBinContent(12,18.74594);
   hNCpi0inFV_stack_5->SetBinContent(13,14.03207);
   hNCpi0inFV_stack_5->SetBinContent(14,12.28294);
   hNCpi0inFV_stack_5->SetBinContent(15,8.937484);
   hNCpi0inFV_stack_5->SetBinContent(16,7.000499);
   hNCpi0inFV_stack_5->SetBinContent(17,6.341078);
   hNCpi0inFV_stack_5->SetBinContent(18,4.447536);
   hNCpi0inFV_stack_5->SetBinContent(19,43.14191);
   hNCpi0inFV_stack_5->SetBinError(0,2.398533);
   hNCpi0inFV_stack_5->SetBinError(1,0.6926852);
   hNCpi0inFV_stack_5->SetBinError(2,1.045138);
   hNCpi0inFV_stack_5->SetBinError(3,1.595162);
   hNCpi0inFV_stack_5->SetBinError(4,1.912778);
   hNCpi0inFV_stack_5->SetBinError(5,1.940824);
   hNCpi0inFV_stack_5->SetBinError(6,1.788311);
   hNCpi0inFV_stack_5->SetBinError(7,1.639354);
   hNCpi0inFV_stack_5->SetBinError(8,1.492166);
   hNCpi0inFV_stack_5->SetBinError(9,1.36548);
   hNCpi0inFV_stack_5->SetBinError(10,1.233127);
   hNCpi0inFV_stack_5->SetBinError(11,1.117514);
   hNCpi0inFV_stack_5->SetBinError(12,1.006661);
   hNCpi0inFV_stack_5->SetBinError(13,0.8672102);
   hNCpi0inFV_stack_5->SetBinError(14,0.8177892);
   hNCpi0inFV_stack_5->SetBinError(15,0.6948659);
   hNCpi0inFV_stack_5->SetBinError(16,0.6080555);
   hNCpi0inFV_stack_5->SetBinError(17,0.5960088);
   hNCpi0inFV_stack_5->SetBinError(18,0.490596);
   hNCpi0inFV_stack_5->SetBinError(19,1.51355);
   hNCpi0inFV_stack_5->SetEntries(17673);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","generic_bnb_10_kine_pio_energy_high_all",18,0,600);
   hCCpi0inFV_stack_6->SetBinContent(0,173.4352);
   hCCpi0inFV_stack_6->SetBinContent(1,21.52406);
   hCCpi0inFV_stack_6->SetBinContent(2,42.32683);
   hCCpi0inFV_stack_6->SetBinContent(3,92.47247);
   hCCpi0inFV_stack_6->SetBinContent(4,123.2557);
   hCCpi0inFV_stack_6->SetBinContent(5,126.2966);
   hCCpi0inFV_stack_6->SetBinContent(6,108.8448);
   hCCpi0inFV_stack_6->SetBinContent(7,96.84699);
   hCCpi0inFV_stack_6->SetBinContent(8,83.84855);
   hCCpi0inFV_stack_6->SetBinContent(9,64.16246);
   hCCpi0inFV_stack_6->SetBinContent(10,56.60456);
   hCCpi0inFV_stack_6->SetBinContent(11,48.65589);
   hCCpi0inFV_stack_6->SetBinContent(12,38.27238);
   hCCpi0inFV_stack_6->SetBinContent(13,34.09163);
   hCCpi0inFV_stack_6->SetBinContent(14,26.63084);
   hCCpi0inFV_stack_6->SetBinContent(15,23.88215);
   hCCpi0inFV_stack_6->SetBinContent(16,18.08564);
   hCCpi0inFV_stack_6->SetBinContent(17,16.59016);
   hCCpi0inFV_stack_6->SetBinContent(18,16.58429);
   hCCpi0inFV_stack_6->SetBinContent(19,173.9437);
   hCCpi0inFV_stack_6->SetBinError(0,3.077649);
   hCCpi0inFV_stack_6->SetBinError(1,1.087996);
   hCCpi0inFV_stack_6->SetBinError(2,1.51849);
   hCCpi0inFV_stack_6->SetBinError(3,2.24506);
   hCCpi0inFV_stack_6->SetBinError(4,2.582209);
   hCCpi0inFV_stack_6->SetBinError(5,2.614481);
   hCCpi0inFV_stack_6->SetBinError(6,2.411427);
   hCCpi0inFV_stack_6->SetBinError(7,2.29478);
   hCCpi0inFV_stack_6->SetBinError(8,2.131398);
   hCCpi0inFV_stack_6->SetBinError(9,1.862614);
   hCCpi0inFV_stack_6->SetBinError(10,1.749753);
   hCCpi0inFV_stack_6->SetBinError(11,1.623208);
   hCCpi0inFV_stack_6->SetBinError(12,1.440663);
   hCCpi0inFV_stack_6->SetBinError(13,1.364164);
   hCCpi0inFV_stack_6->SetBinError(14,1.196577);
   hCCpi0inFV_stack_6->SetBinError(15,1.140312);
   hCCpi0inFV_stack_6->SetBinError(16,0.9921766);
   hCCpi0inFV_stack_6->SetBinError(17,0.934258);
   hCCpi0inFV_stack_6->SetBinError(18,0.9550375);
   hCCpi0inFV_stack_6->SetBinError(19,3.049441);
   hCCpi0inFV_stack_6->SetEntries(36603);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","generic_bnb_10_kine_pio_energy_high_all",18,0,600);
   hNCinFV_stack_7->SetBinContent(0,899.4496);
   hNCinFV_stack_7->SetBinContent(1,61.57256);
   hNCinFV_stack_7->SetBinContent(2,29.71325);
   hNCinFV_stack_7->SetBinContent(3,22.63421);
   hNCinFV_stack_7->SetBinContent(4,22.04937);
   hNCinFV_stack_7->SetBinContent(5,22.08328);
   hNCinFV_stack_7->SetBinContent(6,15.23833);
   hNCinFV_stack_7->SetBinContent(7,10.73582);
   hNCinFV_stack_7->SetBinContent(8,9.04128);
   hNCinFV_stack_7->SetBinContent(9,7.107883);
   hNCinFV_stack_7->SetBinContent(10,5.652193);
   hNCinFV_stack_7->SetBinContent(11,4.332976);
   hNCinFV_stack_7->SetBinContent(12,4.096107);
   hNCinFV_stack_7->SetBinContent(13,3.349042);
   hNCinFV_stack_7->SetBinContent(14,2.889847);
   hNCinFV_stack_7->SetBinContent(15,2.636638);
   hNCinFV_stack_7->SetBinContent(16,1.479585);
   hNCinFV_stack_7->SetBinContent(17,2.017075);
   hNCinFV_stack_7->SetBinContent(18,1.282761);
   hNCinFV_stack_7->SetBinContent(19,10.0561);
   hNCinFV_stack_7->SetBinError(0,6.951107);
   hNCinFV_stack_7->SetBinError(1,1.819336);
   hNCinFV_stack_7->SetBinError(2,1.266648);
   hNCinFV_stack_7->SetBinError(3,1.106018);
   hNCinFV_stack_7->SetBinError(4,1.0879);
   hNCinFV_stack_7->SetBinError(5,1.09448);
   hNCinFV_stack_7->SetBinError(6,0.90513);
   hNCinFV_stack_7->SetBinError(7,0.7548436);
   hNCinFV_stack_7->SetBinError(8,0.6936233);
   hNCinFV_stack_7->SetBinError(9,0.6177049);
   hNCinFV_stack_7->SetBinError(10,0.5511463);
   hNCinFV_stack_7->SetBinError(11,0.481733);
   hNCinFV_stack_7->SetBinError(12,0.4689357);
   hNCinFV_stack_7->SetBinError(13,0.4241334);
   hNCinFV_stack_7->SetBinError(14,0.3907607);
   hNCinFV_stack_7->SetBinError(15,0.3826446);
   hNCinFV_stack_7->SetBinError(16,0.2878996);
   hNCinFV_stack_7->SetBinError(17,0.3286808);
   hNCinFV_stack_7->SetBinError(18,0.261117);
   hNCinFV_stack_7->SetBinError(19,0.7242505);
   hNCinFV_stack_7->SetEntries(30232);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","generic_bnb_10_kine_pio_energy_high_all",18,0,600);
   hnumuCCinFV_stack_8->SetBinContent(0,8531.197);
   hnumuCCinFV_stack_8->SetBinContent(1,702.1721);
   hnumuCCinFV_stack_8->SetBinContent(2,383.788);
   hnumuCCinFV_stack_8->SetBinContent(3,216.5581);
   hnumuCCinFV_stack_8->SetBinContent(4,173.1568);
   hnumuCCinFV_stack_8->SetBinContent(5,133.0254);
   hnumuCCinFV_stack_8->SetBinContent(6,101.1063);
   hnumuCCinFV_stack_8->SetBinContent(7,89.18145);
   hnumuCCinFV_stack_8->SetBinContent(8,70.47234);
   hnumuCCinFV_stack_8->SetBinContent(9,62.09429);
   hnumuCCinFV_stack_8->SetBinContent(10,53.46923);
   hnumuCCinFV_stack_8->SetBinContent(11,42.62839);
   hnumuCCinFV_stack_8->SetBinContent(12,37.32931);
   hnumuCCinFV_stack_8->SetBinContent(13,31.44166);
   hnumuCCinFV_stack_8->SetBinContent(14,29.39784);
   hnumuCCinFV_stack_8->SetBinContent(15,27.8974);
   hnumuCCinFV_stack_8->SetBinContent(16,20.79359);
   hnumuCCinFV_stack_8->SetBinContent(17,18.5308);
   hnumuCCinFV_stack_8->SetBinContent(18,16.93613);
   hnumuCCinFV_stack_8->SetBinContent(19,168.6234);
   hnumuCCinFV_stack_8->SetBinError(0,30.59935);
   hnumuCCinFV_stack_8->SetBinError(1,8.813108);
   hnumuCCinFV_stack_8->SetBinError(2,6.368271);
   hnumuCCinFV_stack_8->SetBinError(3,4.387469);
   hnumuCCinFV_stack_8->SetBinError(4,3.749163);
   hnumuCCinFV_stack_8->SetBinError(5,3.261831);
   hnumuCCinFV_stack_8->SetBinError(6,2.780455);
   hnumuCCinFV_stack_8->SetBinError(7,2.836733);
   hnumuCCinFV_stack_8->SetBinError(8,2.275363);
   hnumuCCinFV_stack_8->SetBinError(9,2.064951);
   hnumuCCinFV_stack_8->SetBinError(10,2.065217);
   hnumuCCinFV_stack_8->SetBinError(11,1.820905);
   hnumuCCinFV_stack_8->SetBinError(12,1.613813);
   hnumuCCinFV_stack_8->SetBinError(13,1.441364);
   hnumuCCinFV_stack_8->SetBinError(14,1.56143);
   hnumuCCinFV_stack_8->SetBinError(15,1.761453);
   hnumuCCinFV_stack_8->SetBinError(16,1.196727);
   hnumuCCinFV_stack_8->SetBinError(17,1.244063);
   hnumuCCinFV_stack_8->SetBinError(18,1.171968);
   hnumuCCinFV_stack_8->SetBinError(19,4.097319);
   hnumuCCinFV_stack_8->SetEntries(241660);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","generic_bnb_10_kine_pio_energy_high_all",18,0,600);
   hnueCCinFV_stack_9->SetBinContent(0,25.86654);
   hnueCCinFV_stack_9->SetBinContent(1,0.7109714);
   hnueCCinFV_stack_9->SetBinContent(2,0.6894509);
   hnueCCinFV_stack_9->SetBinContent(3,0.6696634);
   hnueCCinFV_stack_9->SetBinContent(4,1.084523);
   hnueCCinFV_stack_9->SetBinContent(5,1.247603);
   hnueCCinFV_stack_9->SetBinContent(6,1.688468);
   hnueCCinFV_stack_9->SetBinContent(7,0.9002771);
   hnueCCinFV_stack_9->SetBinContent(8,1.488455);
   hnueCCinFV_stack_9->SetBinContent(9,0.9840523);
   hnueCCinFV_stack_9->SetBinContent(10,0.9308543);
   hnueCCinFV_stack_9->SetBinContent(11,1.219862);
   hnueCCinFV_stack_9->SetBinContent(12,1.541255);
   hnueCCinFV_stack_9->SetBinContent(13,1.713638);
   hnueCCinFV_stack_9->SetBinContent(14,1.382445);
   hnueCCinFV_stack_9->SetBinContent(15,1.641116);
   hnueCCinFV_stack_9->SetBinContent(16,1.031045);
   hnueCCinFV_stack_9->SetBinContent(17,2.448773);
   hnueCCinFV_stack_9->SetBinContent(18,1.255207);
   hnueCCinFV_stack_9->SetBinContent(19,34.68442);
   hnueCCinFV_stack_9->SetBinError(0,1.673547);
   hnueCCinFV_stack_9->SetBinError(1,0.2014027);
   hnueCCinFV_stack_9->SetBinError(2,0.1869492);
   hnueCCinFV_stack_9->SetBinError(3,0.2086291);
   hnueCCinFV_stack_9->SetBinError(4,0.2679308);
   hnueCCinFV_stack_9->SetBinError(5,0.2830138);
   hnueCCinFV_stack_9->SetBinError(6,0.3342717);
   hnueCCinFV_stack_9->SetBinError(7,0.2170782);
   hnueCCinFV_stack_9->SetBinError(8,0.3245099);
   hnueCCinFV_stack_9->SetBinError(9,0.2502522);
   hnueCCinFV_stack_9->SetBinError(10,0.2547021);
   hnueCCinFV_stack_9->SetBinError(11,0.2599831);
   hnueCCinFV_stack_9->SetBinError(12,0.2998709);
   hnueCCinFV_stack_9->SetBinError(13,0.3209405);
   hnueCCinFV_stack_9->SetBinError(14,0.2733358);
   hnueCCinFV_stack_9->SetBinError(15,0.4976693);
   hnueCCinFV_stack_9->SetBinError(16,0.2335903);
   hnueCCinFV_stack_9->SetBinError(17,0.6149368);
   hnueCCinFV_stack_9->SetBinError(18,0.2779732);
   hnueCCinFV_stack_9->SetBinError(19,1.725575);
   hnueCCinFV_stack_9->SetEntries(2003);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_bnb_10_kine_pio_energy_high_all",18,0,600);
   hmcerror__2->SetBinContent(0,12593.05);
   hmcerror__2->SetBinContent(1,1019.226);
   hmcerror__2->SetBinContent(2,682.9423);
   hmcerror__2->SetBinContent(3,553.2945);
   hmcerror__2->SetBinContent(4,526.5416);
   hmcerror__2->SetBinContent(5,463.0734);
   hmcerror__2->SetBinContent(6,375.9488);
   hmcerror__2->SetBinContent(7,316.3516);
   hmcerror__2->SetBinContent(8,261.276);
   hmcerror__2->SetBinContent(9,214.052);
   hmcerror__2->SetBinContent(10,180.8654);
   hmcerror__2->SetBinContent(11,151.6806);
   hmcerror__2->SetBinContent(12,125.7458);
   hmcerror__2->SetBinContent(13,110.0787);
   hmcerror__2->SetBinContent(14,94.44099);
   hmcerror__2->SetBinContent(15,83.57824);
   hmcerror__2->SetBinContent(16,64.24321);
   hmcerror__2->SetBinContent(17,62.37548);
   hmcerror__2->SetBinContent(18,50.55274);
   hmcerror__2->SetBinContent(19,579.9308);
   hmcerror__2->SetBinError(0,36.71901);
   hmcerror__2->SetBinError(1,222.5116);
   hmcerror__2->SetBinError(2,96.45614);
   hmcerror__2->SetBinError(3,88.46003);
   hmcerror__2->SetBinError(4,85.01065);
   hmcerror__2->SetBinError(5,83.28496);
   hmcerror__2->SetBinError(6,69.57544);
   hmcerror__2->SetBinError(7,58.41713);
   hmcerror__2->SetBinError(8,49.76039);
   hmcerror__2->SetBinError(9,39.05631);
   hmcerror__2->SetBinError(10,34.76072);
   hmcerror__2->SetBinError(11,30.33208);
   hmcerror__2->SetBinError(12,24.10784);
   hmcerror__2->SetBinError(13,21.01201);
   hmcerror__2->SetBinError(14,19.25878);
   hmcerror__2->SetBinError(15,16.21262);
   hmcerror__2->SetBinError(16,12.96572);
   hmcerror__2->SetBinError(17,12.9978);
   hmcerror__2->SetBinError(18,11.54189);
   hmcerror__2->SetBinError(19,102.4169);
   hmcerror__2->SetEntries(16480.37);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3001[18] = {
   16.66667,
   50,
   83.33333,
   116.6667,
   150,
   183.3333,
   216.6667,
   250,
   283.3333,
   316.6667,
   350,
   383.3333,
   416.6667,
   450,
   483.3333,
   516.6667,
   550,
   583.3333};
   Double_t _fy3001[18] = {
   978,
   729,
   533,
   569,
   414,
   376,
   321,
   227,
   169,
   156,
   128,
   141,
   101,
   80,
   73,
   51,
   60,
   36};
   Double_t _felx3001[18] = {
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667};
   Double_t _fely3001[18] = {
   31.27299,
   27,
   23.08679,
   23.85372,
   20.34699,
   19.39072,
   17.91647,
   15.06652,
   13,
   12.49,
   11.31371,
   11.87434,
   10.04988,
   9.0683,
   8.6693,
   7.2725,
   7.8743,
   6.1381};
   Double_t _fehx3001[18] = {
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667};
   Double_t _fehy3001[18] = {
   31.27299,
   27,
   23.08679,
   23.85372,
   20.34699,
   19.39072,
   17.91647,
   15.06652,
   13,
   12.49,
   11.31371,
   11.87434,
   10.04988,
   8.8665,
   8.4672,
   7.0686,
   7.6713,
   5.9318};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,660);
   Graph_Graph3001->SetMinimum(26.87571);
   Graph_Graph3001->SetMaximum(1107.214);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.96#pm0.01(data err)#pm0.15(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.55/18","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 5142.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 130.7","F");

   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 663.0","F");

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 121.5","F");

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 399.8","F");

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  521.8","F");

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 1039.0","F");

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 227.9","F");

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 2210.0","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 22.6","F");

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("generic_bnb_10_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[18] = {
   16.66667,
   50,
   83.33333,
   116.6667,
   150,
   183.3333,
   216.6667,
   250,
   283.3333,
   316.6667,
   350,
   383.3333,
   416.6667,
   450,
   483.3333,
   516.6667,
   550,
   583.3333};
   Double_t _fy3002[18] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[18] = {
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667};
   Double_t _fely3002[18] = {
   0.2183144,
   0.1412361,
   0.1598788,
   0.161451,
   0.1798526,
   0.1850663,
   0.1846589,
   0.1904514,
   0.1824618,
   0.192191,
   0.1999733,
   0.1917189,
   0.1908816,
   0.2039239,
   0.1939814,
   0.2018225,
   0.2083799,
   0.2283138};
   Double_t _fehx3002[18] = {
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667};
   Double_t _fehy3002[18] = {
   0.2183144,
   0.1412361,
   0.1598788,
   0.161451,
   0.1798526,
   0.1850663,
   0.1846589,
   0.1904514,
   0.1824618,
   0.192191,
   0.1999733,
   0.1917189,
   0.1908816,
   0.2039239,
   0.1939814,
   0.2018225,
   0.2083799,
   0.2283138};
   grae = new TGraphAsymmErrors(18,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,660);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Reconstructed E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3003[18] = {
   16.66667,
   50,
   83.33333,
   116.6667,
   150,
   183.3333,
   216.6667,
   250,
   283.3333,
   316.6667,
   350,
   383.3333,
   416.6667,
   450,
   483.3333,
   516.6667,
   550,
   583.3333};
   Double_t _fy3003[18] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[18] = {
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667};
   Double_t _fely3003[18] = {
   0.1465036,
   0.1327651,
   0.1360834,
   0.1498328,
   0.169997,
   0.1741239,
   0.1762538,
   0.1790192,
   0.168882,
   0.1728095,
   0.1696689,
   0.1651668,
   0.1585994,
   0.1577682,
   0.159068,
   0.1575313,
   0.1561697,
   0.1732255};
   Double_t _fehx3003[18] = {
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667};
   Double_t _fehy3003[18] = {
   0.1465036,
   0.1327651,
   0.1360834,
   0.1498328,
   0.169997,
   0.1741239,
   0.1762538,
   0.1790192,
   0.168882,
   0.1728095,
   0.1696689,
   0.1651668,
   0.1585994,
   0.1577682,
   0.159068,
   0.1575313,
   0.1561697,
   0.1732255};
   grae = new TGraphAsymmErrors(18,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,660);
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
   
   Double_t _fx3004[18] = {
   16.66667,
   50,
   83.33333,
   116.6667,
   150,
   183.3333,
   216.6667,
   250,
   283.3333,
   316.6667,
   350,
   383.3333,
   416.6667,
   450,
   483.3333,
   516.6667,
   550,
   583.3333};
   Double_t _fy3004[18] = {
   0.9595518,
   1.06744,
   0.9633206,
   1.080636,
   0.8940268,
   1.000136,
   1.014694,
   0.8688132,
   0.7895279,
   0.8625196,
   0.8438784,
   1.12131,
   0.9175251,
   0.8470898,
   0.8734331,
   0.7938582,
   0.9619164,
   0.7121275};
   Double_t _felx3004[18] = {
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667};
   Double_t _fely3004[18] = {
   0.03068308,
   0.03953482,
   0.04172605,
   0.04530263,
   0.04393902,
   0.05157809,
   0.05663469,
   0.05766515,
   0.06073291,
   0.06905684,
   0.07458902,
   0.09443135,
   0.09129716,
   0.0960208,
   0.1037268,
   0.1132026,
   0.1262403,
   0.1214197};
   Double_t _fehx3004[18] = {
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667,
   16.66667};
   Double_t _fehy3004[18] = {
   0.03068308,
   0.03953482,
   0.04172605,
   0.04530263,
   0.04393902,
   0.05157809,
   0.05663469,
   0.05766515,
   0.06073291,
   0.06905684,
   0.07458902,
   0.09443135,
   0.09129716,
   0.09388402,
   0.1013087,
   0.1100287,
   0.1229858,
   0.1173388};
   grae = new TGraphAsymmErrors(18,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,660);
   Graph_Graph3004->SetMinimum(0.5282045);
   Graph_Graph3004->SetMaximum(1.278245);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_bnb_10_kine_pio_energy_high_all",18,0,600);

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
   TLine *line = new TLine(0,1,600,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
