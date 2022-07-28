#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Apr  7 22:43:46 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",216,172,1200,900);
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
   pad1->Range(-92.30769,-68.5815,676.9231,5778.894);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_bnb_10_kine_pio_energy_low_all",18,0,600);
   hmc__1->SetBinContent(0,12593.05);
   hmc__1->SetBinContent(1,3429.075);
   hmc__1->SetBinContent(2,928.1626);
   hmc__1->SetBinContent(3,566.3538);
   hmc__1->SetBinContent(4,353.6928);
   hmc__1->SetBinContent(5,219.6638);
   hmc__1->SetBinContent(6,135.0752);
   hmc__1->SetBinContent(7,91.14294);
   hmc__1->SetBinContent(8,56.01065);
   hmc__1->SetBinContent(9,36.54609);
   hmc__1->SetBinContent(10,25.99172);
   hmc__1->SetBinContent(11,18.70167);
   hmc__1->SetBinContent(12,12.51358);
   hmc__1->SetBinContent(13,9.685509);
   hmc__1->SetBinContent(14,5.14764);
   hmc__1->SetBinContent(15,4.243587);
   hmc__1->SetBinContent(16,4.572837);
   hmc__1->SetBinContent(17,2.590967);
   hmc__1->SetBinContent(18,2.448494);
   hmc__1->SetBinContent(19,14.57451);
   hmc__1->SetBinError(0,36.71901);
   hmc__1->SetBinError(1,531.2271);
   hmc__1->SetBinError(2,153.4494);
   hmc__1->SetBinError(3,103.4578);
   hmc__1->SetBinError(4,70.16952);
   hmc__1->SetBinError(5,44.22884);
   hmc__1->SetBinError(6,29.06034);
   hmc__1->SetBinError(7,19.88766);
   hmc__1->SetBinError(8,14.17867);
   hmc__1->SetBinError(9,10.37956);
   hmc__1->SetBinError(10,7.937611);
   hmc__1->SetBinError(11,5.294112);
   hmc__1->SetBinError(12,6.862344);
   hmc__1->SetBinError(13,4.390033);
   hmc__1->SetBinError(14,4.51652);
   hmc__1->SetBinError(15,1.80209);
   hmc__1->SetBinError(16,2.006518);
   hmc__1->SetBinError(17,1.341783);
   hmc__1->SetBinError(18,2.528344);
   hmc__1->SetBinError(19,4.155153);
   hmc__1->SetMinimum(-68.5815);
   hmc__1->SetMaximum(5486.52);
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
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(3600.529);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_bnb_10_kine_pio_energy_low_all",18,0,600);
   hbadmatch_stack_1->SetBinContent(0,363.7249);
   hbadmatch_stack_1->SetBinContent(1,87.48887);
   hbadmatch_stack_1->SetBinContent(2,22.76088);
   hbadmatch_stack_1->SetBinContent(3,12.41987);
   hbadmatch_stack_1->SetBinContent(4,5.269303);
   hbadmatch_stack_1->SetBinContent(5,2.580122);
   hbadmatch_stack_1->SetBinContent(6,1.671124);
   hbadmatch_stack_1->SetBinContent(7,2.099877);
   hbadmatch_stack_1->SetBinContent(8,1.002997);
   hbadmatch_stack_1->SetBinContent(9,0.6152261);
   hbadmatch_stack_1->SetBinContent(10,0.307807);
   hbadmatch_stack_1->SetBinContent(11,0.1129571);
   hbadmatch_stack_1->SetBinContent(12,0.1649959);
   hbadmatch_stack_1->SetBinContent(13,0.05263399);
   hbadmatch_stack_1->SetBinContent(14,0.06195629);
   hbadmatch_stack_1->SetBinContent(15,0.06195629);
   hbadmatch_stack_1->SetBinContent(16,0.03825059);
   hbadmatch_stack_1->SetBinContent(18,0.06195629);
   hbadmatch_stack_1->SetBinContent(19,0.1604998);
   hbadmatch_stack_1->SetBinError(0,5.422098);
   hbadmatch_stack_1->SetBinError(1,2.822082);
   hbadmatch_stack_1->SetBinError(2,1.711278);
   hbadmatch_stack_1->SetBinError(3,0.9797739);
   hbadmatch_stack_1->SetBinError(4,0.5464227);
   hbadmatch_stack_1->SetBinError(5,0.3484869);
   hbadmatch_stack_1->SetBinError(6,0.3004561);
   hbadmatch_stack_1->SetBinError(7,0.5744091);
   hbadmatch_stack_1->SetBinError(8,0.2381056);
   hbadmatch_stack_1->SetBinError(9,0.1757581);
   hbadmatch_stack_1->SetBinError(10,0.1311416);
   hbadmatch_stack_1->SetBinError(11,0.0669989);
   hbadmatch_stack_1->SetBinError(12,0.1008764);
   hbadmatch_stack_1->SetBinError(13,0.02635497);
   hbadmatch_stack_1->SetBinError(14,0.06195629);
   hbadmatch_stack_1->SetBinError(15,0.06195629);
   hbadmatch_stack_1->SetBinError(16,0.02208399);
   hbadmatch_stack_1->SetBinError(18,0.06195629);
   hbadmatch_stack_1->SetBinError(19,0.09746292);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_bnb_10_kine_pio_energy_low_all",18,0,600);
   hext_stack_2->SetBinContent(0,1387.332);
   hext_stack_2->SetBinContent(1,481.5238);
   hext_stack_2->SetBinContent(2,137.7428);
   hext_stack_2->SetBinContent(3,55.05592);
   hext_stack_2->SetBinContent(4,30.75159);
   hext_stack_2->SetBinContent(5,18.86323);
   hext_stack_2->SetBinContent(6,11.95925);
   hext_stack_2->SetBinContent(7,8.674959);
   hext_stack_2->SetBinContent(8,4.537201);
   hext_stack_2->SetBinContent(9,2.291774);
   hext_stack_2->SetBinContent(10,2.854844);
   hext_stack_2->SetBinContent(11,2.346317);
   hext_stack_2->SetBinContent(12,2.034107);
   hext_stack_2->SetBinContent(13,1.899139);
   hext_stack_2->SetBinContent(14,0.5698761);
   hext_stack_2->SetBinContent(15,0.992514);
   hext_stack_2->SetBinContent(16,1.304723);
   hext_stack_2->SetBinContent(17,0.3340175);
   hext_stack_2->SetBinContent(18,0.7443856);
   hext_stack_2->SetBinContent(19,6.156865);
   hext_stack_2->SetBinError(0,15.19935);
   hext_stack_2->SetBinError(1,8.998394);
   hext_stack_2->SetBinError(2,4.787365);
   hext_stack_2->SetBinError(3,3.006765);
   hext_stack_2->SetBinError(4,2.258086);
   hext_stack_2->SetBinError(5,1.769563);
   hext_stack_2->SetBinError(6,1.38971);
   hext_stack_2->SetBinError(7,1.202022);
   hext_stack_2->SetBinError(8,0.8292774);
   hext_stack_2->SetBinError(9,0.5705661);
   hext_stack_2->SetBinError(10,0.6936623);
   hext_stack_2->SetBinError(11,0.6329071);
   hext_stack_2->SetBinError(12,0.5677888);
   hext_stack_2->SetBinError(13,0.5663286);
   hext_stack_2->SetBinError(14,0.2852171);
   hext_stack_2->SetBinError(15,0.4011122);
   hext_stack_2->SetBinError(16,0.4889563);
   hext_stack_2->SetBinError(17,0.2031664);
   hext_stack_2->SetBinError(18,0.3473733);
   hext_stack_2->SetBinError(19,1.020871);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_bnb_10_kine_pio_energy_low_all",18,0,600);
   hdirt_stack_3->SetBinContent(0,486.1107);
   hdirt_stack_3->SetBinContent(1,97.36299);
   hdirt_stack_3->SetBinContent(2,18.57598);
   hdirt_stack_3->SetBinContent(3,5.37984);
   hdirt_stack_3->SetBinContent(4,2.529801);
   hdirt_stack_3->SetBinContent(5,0.8492358);
   hdirt_stack_3->SetBinContent(6,0.8005475);
   hdirt_stack_3->SetBinContent(7,0.3063182);
   hdirt_stack_3->SetBinContent(8,0.2607212);
   hdirt_stack_3->SetBinContent(9,0.2113009);
   hdirt_stack_3->SetBinContent(10,0.07654632);
   hdirt_stack_3->SetBinContent(11,0.1086103);
   hdirt_stack_3->SetBinContent(12,0.04420907);
   hdirt_stack_3->SetBinContent(13,0.05755966);
   hdirt_stack_3->SetBinContent(14,0.04420907);
   hdirt_stack_3->SetBinContent(15,0.00937892);
   hdirt_stack_3->SetBinContent(17,0.0570113);
   hdirt_stack_3->SetBinContent(19,0.008088746);
   hdirt_stack_3->SetBinError(0,5.644722);
   hdirt_stack_3->SetBinError(1,2.728326);
   hdirt_stack_3->SetBinError(2,1.205126);
   hdirt_stack_3->SetBinError(3,0.5371887);
   hdirt_stack_3->SetBinError(4,0.3215201);
   hdirt_stack_3->SetBinError(5,0.1789945);
   hdirt_stack_3->SetBinError(6,0.1840892);
   hdirt_stack_3->SetBinError(7,0.1229561);
   hdirt_stack_3->SetBinError(8,0.1068656);
   hdirt_stack_3->SetBinError(9,0.09241951);
   hdirt_stack_3->SetBinError(10,0.05170541);
   hdirt_stack_3->SetBinError(11,0.07053765);
   hdirt_stack_3->SetBinError(12,0.04420907);
   hdirt_stack_3->SetBinError(13,0.05002002);
   hdirt_stack_3->SetBinError(14,0.04420907);
   hdirt_stack_3->SetBinError(15,0.00937892);
   hdirt_stack_3->SetBinError(17,0.05209236);
   hdirt_stack_3->SetBinError(19,0.008088746);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_bnb_10_kine_pio_energy_low_all",18,0,600);
   houtFV_stack_4->SetBinContent(0,619.6235);
   houtFV_stack_4->SetBinContent(1,247.4697);
   houtFV_stack_4->SetBinContent(2,75.67818);
   houtFV_stack_4->SetBinContent(3,42.993);
   houtFV_stack_4->SetBinContent(4,23.647);
   houtFV_stack_4->SetBinContent(5,13.85174);
   houtFV_stack_4->SetBinContent(6,9.629346);
   houtFV_stack_4->SetBinContent(7,5.12858);
   houtFV_stack_4->SetBinContent(8,3.91606);
   houtFV_stack_4->SetBinContent(9,2.95566);
   houtFV_stack_4->SetBinContent(10,1.312771);
   houtFV_stack_4->SetBinContent(11,1.063682);
   houtFV_stack_4->SetBinContent(12,0.5502405);
   houtFV_stack_4->SetBinContent(13,0.6104021);
   houtFV_stack_4->SetBinContent(14,0.4717821);
   houtFV_stack_4->SetBinContent(15,0.2241195);
   houtFV_stack_4->SetBinContent(16,0.2988259);
   houtFV_stack_4->SetBinContent(17,0.0127502);
   houtFV_stack_4->SetBinContent(18,0.0127502);
   houtFV_stack_4->SetBinContent(19,0.4058775);
   houtFV_stack_4->SetBinError(0,7.303409);
   houtFV_stack_4->SetBinError(1,4.207425);
   houtFV_stack_4->SetBinError(2,2.241503);
   houtFV_stack_4->SetBinError(3,1.672796);
   houtFV_stack_4->SetBinError(4,1.190938);
   houtFV_stack_4->SetBinError(5,0.8498726);
   houtFV_stack_4->SetBinError(6,0.7236511);
   houtFV_stack_4->SetBinError(7,0.5104885);
   houtFV_stack_4->SetBinError(8,0.4582123);
   houtFV_stack_4->SetBinError(9,0.7583631);
   houtFV_stack_4->SetBinError(10,0.261888);
   houtFV_stack_4->SetBinError(11,0.2446775);
   houtFV_stack_4->SetBinError(12,0.1590831);
   houtFV_stack_4->SetBinError(13,0.1793649);
   houtFV_stack_4->SetBinError(14,0.1585672);
   houtFV_stack_4->SetBinError(15,0.1095603);
   houtFV_stack_4->SetBinError(16,0.1265093);
   houtFV_stack_4->SetBinError(17,0.0127502);
   houtFV_stack_4->SetBinError(18,0.0127502);
   houtFV_stack_4->SetBinError(19,0.145691);
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","generic_bnb_10_kine_pio_energy_low_all",18,0,600);
   hNCpi0inFV_stack_5->SetBinContent(0,106.31);
   hNCpi0inFV_stack_5->SetBinContent(1,159.1414);
   hNCpi0inFV_stack_5->SetBinContent(2,140.0322);
   hNCpi0inFV_stack_5->SetBinContent(3,105.3999);
   hNCpi0inFV_stack_5->SetBinContent(4,61.01566);
   hNCpi0inFV_stack_5->SetBinContent(5,39.52247);
   hNCpi0inFV_stack_5->SetBinContent(6,22.19568);
   hNCpi0inFV_stack_5->SetBinContent(7,14.10139);
   hNCpi0inFV_stack_5->SetBinContent(8,8.276081);
   hNCpi0inFV_stack_5->SetBinContent(9,4.752125);
   hNCpi0inFV_stack_5->SetBinContent(10,2.918937);
   hNCpi0inFV_stack_5->SetBinContent(11,2.341402);
   hNCpi0inFV_stack_5->SetBinContent(12,1.417629);
   hNCpi0inFV_stack_5->SetBinContent(13,0.7980657);
   hNCpi0inFV_stack_5->SetBinContent(14,0.5594013);
   hNCpi0inFV_stack_5->SetBinContent(15,0.7452702);
   hNCpi0inFV_stack_5->SetBinContent(16,0.4227385);
   hNCpi0inFV_stack_5->SetBinContent(17,0.5101952);
   hNCpi0inFV_stack_5->SetBinContent(18,0.2113693);
   hNCpi0inFV_stack_5->SetBinContent(19,0.5502405);
   hNCpi0inFV_stack_5->SetBinError(0,2.398533);
   hNCpi0inFV_stack_5->SetBinError(1,2.939396);
   hNCpi0inFV_stack_5->SetBinError(2,2.74805);
   hNCpi0inFV_stack_5->SetBinError(3,2.385003);
   hNCpi0inFV_stack_5->SetBinError(4,1.806275);
   hNCpi0inFV_stack_5->SetBinError(5,1.460455);
   hNCpi0inFV_stack_5->SetBinError(6,1.074671);
   hNCpi0inFV_stack_5->SetBinError(7,0.8747182);
   hNCpi0inFV_stack_5->SetBinError(8,0.6708327);
   hNCpi0inFV_stack_5->SetBinError(9,0.5116639);
   hNCpi0inFV_stack_5->SetBinError(10,0.3833635);
   hNCpi0inFV_stack_5->SetBinError(11,0.3526482);
   hNCpi0inFV_stack_5->SetBinError(12,0.281154);
   hNCpi0inFV_stack_5->SetBinError(13,0.2016476);
   hNCpi0inFV_stack_5->SetBinError(14,0.1775429);
   hNCpi0inFV_stack_5->SetBinError(15,0.2074542);
   hNCpi0inFV_stack_5->SetBinError(16,0.1538888);
   hNCpi0inFV_stack_5->SetBinError(17,0.1668696);
   hNCpi0inFV_stack_5->SetBinError(18,0.1088158);
   hNCpi0inFV_stack_5->SetBinError(19,0.1590831);
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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","generic_bnb_10_kine_pio_energy_low_all",18,0,600);
   hCCpi0inFV_stack_6->SetBinContent(0,173.4352);
   hCCpi0inFV_stack_6->SetBinContent(1,274.7867);
   hCCpi0inFV_stack_6->SetBinContent(2,273.2697);
   hCCpi0inFV_stack_6->SetBinContent(3,221.8482);
   hCCpi0inFV_stack_6->SetBinContent(4,155.4011);
   hCCpi0inFV_stack_6->SetBinContent(5,100.9105);
   hCCpi0inFV_stack_6->SetBinContent(6,61.41067);
   hCCpi0inFV_stack_6->SetBinContent(7,41.06682);
   hCCpi0inFV_stack_6->SetBinContent(8,24.76862);
   hCCpi0inFV_stack_6->SetBinContent(9,16.4678);
   hCCpi0inFV_stack_6->SetBinContent(10,11.36299);
   hCCpi0inFV_stack_6->SetBinContent(11,8.425019);
   hCCpi0inFV_stack_6->SetBinContent(12,5.421132);
   hCCpi0inFV_stack_6->SetBinContent(13,4.812873);
   hCCpi0inFV_stack_6->SetBinContent(14,2.16983);
   hCCpi0inFV_stack_6->SetBinContent(15,1.406673);
   hCCpi0inFV_stack_6->SetBinContent(16,1.831206);
   hCCpi0inFV_stack_6->SetBinContent(17,1.235349);
   hCCpi0inFV_stack_6->SetBinContent(18,0.9839345);
   hCCpi0inFV_stack_6->SetBinContent(19,5.340617);
   hCCpi0inFV_stack_6->SetBinError(0,3.077649);
   hCCpi0inFV_stack_6->SetBinError(1,3.867856);
   hCCpi0inFV_stack_6->SetBinError(2,3.856701);
   hCCpi0inFV_stack_6->SetBinError(3,3.447084);
   hCCpi0inFV_stack_6->SetBinError(4,2.899049);
   hCCpi0inFV_stack_6->SetBinError(5,2.324911);
   hCCpi0inFV_stack_6->SetBinError(6,1.815097);
   hCCpi0inFV_stack_6->SetBinError(7,1.488527);
   hCCpi0inFV_stack_6->SetBinError(8,1.154914);
   hCCpi0inFV_stack_6->SetBinError(9,0.9368537);
   hCCpi0inFV_stack_6->SetBinError(10,0.7745574);
   hCCpi0inFV_stack_6->SetBinError(11,0.6801821);
   hCCpi0inFV_stack_6->SetBinError(12,0.5431952);
   hCCpi0inFV_stack_6->SetBinError(13,0.5151009);
   hCCpi0inFV_stack_6->SetBinError(14,0.3388525);
   hCCpi0inFV_stack_6->SetBinError(15,0.2754256);
   hCCpi0inFV_stack_6->SetBinError(16,0.3106691);
   hCCpi0inFV_stack_6->SetBinError(17,0.2479523);
   hCCpi0inFV_stack_6->SetBinError(18,0.228424);
   hCCpi0inFV_stack_6->SetBinError(19,0.5362789);
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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","generic_bnb_10_kine_pio_energy_low_all",18,0,600);
   hNCinFV_stack_7->SetBinContent(0,899.4496);
   hNCinFV_stack_7->SetBinContent(1,174.3111);
   hNCinFV_stack_7->SetBinContent(2,24.20484);
   hNCinFV_stack_7->SetBinContent(3,13.75317);
   hNCinFV_stack_7->SetBinContent(4,9.46416);
   hNCinFV_stack_7->SetBinContent(5,5.378867);
   hNCinFV_stack_7->SetBinContent(6,3.434704);
   hNCinFV_stack_7->SetBinContent(7,2.702184);
   hNCinFV_stack_7->SetBinContent(8,1.282761);
   hNCinFV_stack_7->SetBinContent(9,1.034935);
   hNCinFV_stack_7->SetBinContent(10,0.6851086);
   hNCinFV_stack_7->SetBinContent(11,0.6851086);
   hNCinFV_stack_7->SetBinContent(12,0.1986191);
   hNCinFV_stack_7->SetBinContent(13,0.1858689);
   hNCinFV_stack_7->SetBinContent(14,0.3225317);
   hNCinFV_stack_7->SetBinContent(15,0.07470649);
   hNCinFV_stack_7->SetBinContent(16,0.1239126);
   hNCinFV_stack_7->SetBinContent(17,0.0127502);
   hNCinFV_stack_7->SetBinContent(19,0.1129571);
   hNCinFV_stack_7->SetBinError(0,6.951107);
   hNCinFV_stack_7->SetBinError(1,3.062891);
   hNCinFV_stack_7->SetBinError(2,1.142048);
   hNCinFV_stack_7->SetBinError(3,0.8509457);
   hNCinFV_stack_7->SetBinError(4,0.7126528);
   hNCinFV_stack_7->SetBinError(5,0.5367334);
   hNCinFV_stack_7->SetBinError(6,0.4325259);
   hNCinFV_stack_7->SetBinError(7,0.379742);
   hNCinFV_stack_7->SetBinError(8,0.261117);
   hNCinFV_stack_7->SetBinError(9,0.2298429);
   hNCinFV_stack_7->SetBinError(10,0.1901918);
   hNCinFV_stack_7->SetBinError(11,0.1901918);
   hNCinFV_stack_7->SetBinError(12,0.1080662);
   hNCinFV_stack_7->SetBinError(13,0.1073114);
   hNCinFV_stack_7->SetBinError(14,0.139124);
   hNCinFV_stack_7->SetBinError(15,0.06325464);
   hNCinFV_stack_7->SetBinError(16,0.08761943);
   hNCinFV_stack_7->SetBinError(17,0.0127502);
   hNCinFV_stack_7->SetBinError(19,0.0669989);
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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","generic_bnb_10_kine_pio_energy_low_all",18,0,600);
   hnumuCCinFV_stack_8->SetBinContent(0,8531.197);
   hnumuCCinFV_stack_8->SetBinContent(1,1877.18);
   hnumuCCinFV_stack_8->SetBinContent(2,227.7254);
   hnumuCCinFV_stack_8->SetBinContent(3,105.0383);
   hnumuCCinFV_stack_8->SetBinContent(4,62.41574);
   hnumuCCinFV_stack_8->SetBinContent(5,35.44022);
   hnumuCCinFV_stack_8->SetBinContent(6,21.77507);
   hnumuCCinFV_stack_8->SetBinContent(7,15.4589);
   hnumuCCinFV_stack_8->SetBinContent(8,11.12656);
   hnumuCCinFV_stack_8->SetBinContent(9,7.238609);
   hnumuCCinFV_stack_8->SetBinContent(10,5.594345);
   hnumuCCinFV_stack_8->SetBinContent(11,2.911963);
   hnumuCCinFV_stack_8->SetBinContent(12,2.393541);
   hnumuCCinFV_stack_8->SetBinContent(13,0.8657827);
   hnumuCCinFV_stack_8->SetBinContent(14,0.7968456);
   hnumuCCinFV_stack_8->SetBinContent(15,0.5048487);
   hnumuCCinFV_stack_8->SetBinContent(16,0.2416037);
   hnumuCCinFV_stack_8->SetBinContent(17,0.3414372);
   hnumuCCinFV_stack_8->SetBinContent(18,0.3466417);
   hnumuCCinFV_stack_8->SetBinContent(19,1.202299);
   hnumuCCinFV_stack_8->SetBinError(0,30.59935);
   hnumuCCinFV_stack_8->SetBinError(1,13.6537);
   hnumuCCinFV_stack_8->SetBinError(2,4.465774);
   hnumuCCinFV_stack_8->SetBinError(3,2.890237);
   hnumuCCinFV_stack_8->SetBinError(4,2.112319);
   hnumuCCinFV_stack_8->SetBinError(5,1.582546);
   hnumuCCinFV_stack_8->SetBinError(6,1.151985);
   hnumuCCinFV_stack_8->SetBinError(7,0.9981962);
   hnumuCCinFV_stack_8->SetBinError(8,1.004907);
   hnumuCCinFV_stack_8->SetBinError(9,0.6277469);
   hnumuCCinFV_stack_8->SetBinError(10,0.6130178);
   hnumuCCinFV_stack_8->SetBinError(11,0.452229);
   hnumuCCinFV_stack_8->SetBinError(12,0.3585793);
   hnumuCCinFV_stack_8->SetBinError(13,0.196237);
   hnumuCCinFV_stack_8->SetBinError(14,0.1874285);
   hnumuCCinFV_stack_8->SetBinError(15,0.1575316);
   hnumuCCinFV_stack_8->SetBinError(16,0.1108978);
   hnumuCCinFV_stack_8->SetBinError(17,0.1207249);
   hnumuCCinFV_stack_8->SetBinError(18,0.1451025);
   hnumuCCinFV_stack_8->SetBinError(19,0.258015);
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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","generic_bnb_10_kine_pio_energy_low_all",18,0,600);
   hnueCCinFV_stack_9->SetBinContent(0,25.86654);
   hnueCCinFV_stack_9->SetBinContent(1,29.81067);
   hnueCCinFV_stack_9->SetBinContent(2,8.172726);
   hnueCCinFV_stack_9->SetBinContent(3,4.465595);
   hnueCCinFV_stack_9->SetBinContent(4,3.1985);
   hnueCCinFV_stack_9->SetBinContent(5,2.267444);
   hnueCCinFV_stack_9->SetBinContent(6,2.19877);
   hnueCCinFV_stack_9->SetBinContent(7,1.603912);
   hnueCCinFV_stack_9->SetBinContent(8,0.8396514);
   hnueCCinFV_stack_9->SetBinContent(9,0.9786584);
   hnueCCinFV_stack_9->SetBinContent(10,0.878376);
   hnueCCinFV_stack_9->SetBinContent(11,0.7066115);
   hnueCCinFV_stack_9->SetBinContent(12,0.2891105);
   hnueCCinFV_stack_9->SetBinContent(13,0.4031843);
   hnueCCinFV_stack_9->SetBinContent(14,0.1512077);
   hnueCCinFV_stack_9->SetBinContent(15,0.2241195);
   hnueCCinFV_stack_9->SetBinContent(16,0.3115761);
   hnueCCinFV_stack_9->SetBinContent(17,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(18,0.08745668);
   hnueCCinFV_stack_9->SetBinContent(19,0.6370634);
   hnueCCinFV_stack_9->SetBinError(0,1.673547);
   hnueCCinFV_stack_9->SetBinError(1,1.712459);
   hnueCCinFV_stack_9->SetBinError(2,0.8089441);
   hnueCCinFV_stack_9->SetBinError(3,0.5035192);
   hnueCCinFV_stack_9->SetBinError(4,0.5062429);
   hnueCCinFV_stack_9->SetBinError(5,0.3445246);
   hnueCCinFV_stack_9->SetBinError(6,0.347159);
   hnueCCinFV_stack_9->SetBinError(7,0.3015894);
   hnueCCinFV_stack_9->SetBinError(8,0.214662);
   hnueCCinFV_stack_9->SetBinError(9,0.2347815);
   hnueCCinFV_stack_9->SetBinError(10,0.2257282);
   hnueCCinFV_stack_9->SetBinError(11,0.1959471);
   hnueCCinFV_stack_9->SetBinError(12,0.1262087);
   hnueCCinFV_stack_9->SetBinError(13,0.1553344);
   hnueCCinFV_stack_9->SetBinError(14,0.0705447);
   hnueCCinFV_stack_9->SetBinError(15,0.1095603);
   hnueCCinFV_stack_9->SetBinError(16,0.1271502);
   hnueCCinFV_stack_9->SetBinError(17,0.06452687);
   hnueCCinFV_stack_9->SetBinError(18,0.06452687);
   hnueCCinFV_stack_9->SetBinError(19,0.1846828);
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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_bnb_10_kine_pio_energy_low_all",18,0,600);
   hmcerror__2->SetBinContent(0,12593.05);
   hmcerror__2->SetBinContent(1,3429.075);
   hmcerror__2->SetBinContent(2,928.1626);
   hmcerror__2->SetBinContent(3,566.3538);
   hmcerror__2->SetBinContent(4,353.6928);
   hmcerror__2->SetBinContent(5,219.6638);
   hmcerror__2->SetBinContent(6,135.0752);
   hmcerror__2->SetBinContent(7,91.14294);
   hmcerror__2->SetBinContent(8,56.01065);
   hmcerror__2->SetBinContent(9,36.54609);
   hmcerror__2->SetBinContent(10,25.99172);
   hmcerror__2->SetBinContent(11,18.70167);
   hmcerror__2->SetBinContent(12,12.51358);
   hmcerror__2->SetBinContent(13,9.685509);
   hmcerror__2->SetBinContent(14,5.14764);
   hmcerror__2->SetBinContent(15,4.243587);
   hmcerror__2->SetBinContent(16,4.572837);
   hmcerror__2->SetBinContent(17,2.590967);
   hmcerror__2->SetBinContent(18,2.448494);
   hmcerror__2->SetBinContent(19,14.57451);
   hmcerror__2->SetBinError(0,36.71901);
   hmcerror__2->SetBinError(1,531.2271);
   hmcerror__2->SetBinError(2,153.4494);
   hmcerror__2->SetBinError(3,103.4578);
   hmcerror__2->SetBinError(4,70.16952);
   hmcerror__2->SetBinError(5,44.22884);
   hmcerror__2->SetBinError(6,29.06034);
   hmcerror__2->SetBinError(7,19.88766);
   hmcerror__2->SetBinError(8,14.17867);
   hmcerror__2->SetBinError(9,10.37956);
   hmcerror__2->SetBinError(10,7.937611);
   hmcerror__2->SetBinError(11,5.294112);
   hmcerror__2->SetBinError(12,6.862344);
   hmcerror__2->SetBinError(13,4.390033);
   hmcerror__2->SetBinError(14,4.51652);
   hmcerror__2->SetBinError(15,1.80209);
   hmcerror__2->SetBinError(16,2.006518);
   hmcerror__2->SetBinError(17,1.341783);
   hmcerror__2->SetBinError(18,2.528344);
   hmcerror__2->SetBinError(19,4.155153);
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
   3327,
   927,
   574,
   308,
   183,
   109,
   77,
   37,
   34,
   17,
   13,
   9,
   6,
   5,
   7,
   8,
   1,
   3};
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
   57.68015,
   30.44667,
   23.9583,
   17.54993,
   13.52775,
   10.44031,
   8.8995,
   6.2203,
   5.9703,
   4.2835,
   3.77763,
   3.19354,
   2.67925,
   2.48995,
   2.85954,
   3.0307,
   1,
   2.143368};
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
   57.68015,
   30.44667,
   23.9583,
   17.54993,
   13.52775,
   10.44031,
   8.6976,
   6.0141,
   5.7635,
   4.0673,
   3.5552,
   2.9582,
   2.41858,
   2.21064,
   2.61053,
   2.7896,
   1.35971,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,660);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(3723.148);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.67/18","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 5645.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 136.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 764.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 126.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 429.8","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  564.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 1207.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 237.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 2377.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 56.7","F");

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
   TText *pt_LaTex = pt->AddText("generic_bnb_10_kine_pio_energy_low_all");
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
   0.1549185,
   0.165326,
   0.1826734,
   0.1983911,
   0.2013479,
   0.215142,
   0.218203,
   0.2531424,
   0.284013,
   0.3053899,
   0.2830823,
   0.5483916,
   0.4532579,
   0.8773963,
   0.424662,
   0.4387906,
   0.5178696,
   1.032612};
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
   0.1549185,
   0.165326,
   0.1826734,
   0.1983911,
   0.2013479,
   0.215142,
   0.218203,
   0.2531424,
   0.284013,
   0.3053899,
   0.2830823,
   0.5483916,
   0.4532579,
   0.8773963,
   0.424662,
   0.4387906,
   0.5178696,
   1.032612};
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
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
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
   0.1360129,
   0.1531879,
   0.1747044,
   0.1839001,
   0.1878667,
   0.1953497,
   0.1831585,
   0.1995489,
   0.2000922,
   0.1936162,
   0.1834,
   0.1958256,
   0.1844331,
   0.2097052,
   0.204897,
   0.1983566,
   0.2311707,
   0.2382241};
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
   0.1360129,
   0.1531879,
   0.1747044,
   0.1839001,
   0.1878667,
   0.1953497,
   0.1831585,
   0.1995489,
   0.2000922,
   0.1936162,
   0.1834,
   0.1958256,
   0.1844331,
   0.2097052,
   0.204897,
   0.1983566,
   0.2311707,
   0.2382241};
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
   0.9702324,
   0.9987474,
   1.013501,
   0.8708121,
   0.8330913,
   0.8069581,
   0.8448268,
   0.6605886,
   0.9303321,
   0.6540544,
   0.695125,
   0.7192185,
   0.6194822,
   0.9713189,
   1.649548,
   1.749461,
   0.3859563,
   1.225243};
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
   0.01682091,
   0.03280317,
   0.04230271,
   0.04961912,
   0.06158388,
   0.07729257,
   0.09764332,
   0.1110557,
   0.1633636,
   0.1648025,
   0.2019942,
   0.2552059,
   0.2766246,
   0.4837071,
   0.6738497,
   0.6627614,
   0.3859563,
   0.875382};
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
   0.01682091,
   0.03280317,
   0.04230271,
   0.04961912,
   0.06158388,
   0.07729257,
   0.09542812,
   0.1073742,
   0.157705,
   0.1564844,
   0.1901007,
   0.2363991,
   0.2497112,
   0.4294473,
   0.6151706,
   0.610037,
   0.5247886,
   0.704196};
   grae = new TGraphAsymmErrors(18,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,660);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2.595448);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_bnb_10_kine_pio_energy_low_all",18,0,600);

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
