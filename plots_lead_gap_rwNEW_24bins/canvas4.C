#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 11:58:35 2023) by ROOT version 6.26/00
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
   pad1->Range(-13.84615,-34.18922,101.5385,3780.608);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmc__10->SetBinContent(1,1709.461);
   hmc__10->SetBinContent(2,277.2306);
   hmc__10->SetBinContent(3,257.2336);
   hmc__10->SetBinContent(4,235.5936);
   hmc__10->SetBinContent(5,203.513);
   hmc__10->SetBinContent(6,185.8901);
   hmc__10->SetBinContent(7,167.1584);
   hmc__10->SetBinContent(8,127.8172);
   hmc__10->SetBinContent(9,106.1989);
   hmc__10->SetBinContent(10,79.50896);
   hmc__10->SetBinContent(11,75.42958);
   hmc__10->SetBinContent(12,66.95091);
   hmc__10->SetBinContent(13,57.3071);
   hmc__10->SetBinContent(14,45.26445);
   hmc__10->SetBinContent(15,39.86592);
   hmc__10->SetBinContent(16,26.78155);
   hmc__10->SetBinContent(17,24.47153);
   hmc__10->SetBinContent(18,24.80718);
   hmc__10->SetBinContent(19,19.71334);
   hmc__10->SetBinContent(20,15.43852);
   hmc__10->SetBinContent(21,15.22489);
   hmc__10->SetBinContent(22,11.46777);
   hmc__10->SetBinContent(23,11.64744);
   hmc__10->SetBinContent(24,4.864529);
   hmc__10->SetBinContent(25,121.2646);
   hmc__10->SetBinError(1,365.7134);
   hmc__10->SetBinError(2,74.08395);
   hmc__10->SetBinError(3,68.84355);
   hmc__10->SetBinError(4,62.12492);
   hmc__10->SetBinError(5,50.32293);
   hmc__10->SetBinError(6,56.38764);
   hmc__10->SetBinError(7,42.44679);
   hmc__10->SetBinError(8,34.16674);
   hmc__10->SetBinError(9,28.50046);
   hmc__10->SetBinError(10,24.72626);
   hmc__10->SetBinError(11,26.05201);
   hmc__10->SetBinError(12,20.1795);
   hmc__10->SetBinError(13,18.42669);
   hmc__10->SetBinError(14,16.60314);
   hmc__10->SetBinError(15,19.85738);
   hmc__10->SetBinError(16,12.8384);
   hmc__10->SetBinError(17,11.66476);
   hmc__10->SetBinError(18,11.92893);
   hmc__10->SetBinError(19,8.343531);
   hmc__10->SetBinError(20,7.769806);
   hmc__10->SetBinError(21,9.613696);
   hmc__10->SetBinError(22,7.503299);
   hmc__10->SetBinError(23,10.21646);
   hmc__10->SetBinError(24,3.757755);
   hmc__10->SetBinError(25,39.89827);
   hmc__10->SetMinimum(-34.18922);
   hmc__10->SetMaximum(3589.868);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,0,90);
   hs4_stack_4->SetMinimum(-6.289654e-09);
   hs4_stack_4->SetMaximum(1794.934);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,37.36097);
   hbadmatch_stack_1->SetBinContent(2,4.923448);
   hbadmatch_stack_1->SetBinContent(3,4.960404);
   hbadmatch_stack_1->SetBinContent(4,5.545852);
   hbadmatch_stack_1->SetBinContent(5,3.175504);
   hbadmatch_stack_1->SetBinContent(6,4.714639);
   hbadmatch_stack_1->SetBinContent(7,3.223847);
   hbadmatch_stack_1->SetBinContent(8,1.957548);
   hbadmatch_stack_1->SetBinContent(9,2.681084);
   hbadmatch_stack_1->SetBinContent(10,3.327494);
   hbadmatch_stack_1->SetBinContent(11,0.9421104);
   hbadmatch_stack_1->SetBinContent(12,2.789223);
   hbadmatch_stack_1->SetBinContent(13,1.856935);
   hbadmatch_stack_1->SetBinContent(14,2.026191);
   hbadmatch_stack_1->SetBinContent(15,1.858957);
   hbadmatch_stack_1->SetBinContent(16,0.3917402);
   hbadmatch_stack_1->SetBinContent(17,0.4588116);
   hbadmatch_stack_1->SetBinContent(18,1.932592);
   hbadmatch_stack_1->SetBinContent(19,0.7948169);
   hbadmatch_stack_1->SetBinContent(20,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.9625913);
   hbadmatch_stack_1->SetBinContent(22,1.468071);
   hbadmatch_stack_1->SetBinContent(23,0.9646727);
   hbadmatch_stack_1->SetBinContent(25,10.43914);
   hbadmatch_stack_1->SetBinError(1,3.28777);
   hbadmatch_stack_1->SetBinError(2,1.109333);
   hbadmatch_stack_1->SetBinError(3,1.91655);
   hbadmatch_stack_1->SetBinError(4,1.530052);
   hbadmatch_stack_1->SetBinError(5,0.8328706);
   hbadmatch_stack_1->SetBinError(6,1.136534);
   hbadmatch_stack_1->SetBinError(7,0.9115143);
   hbadmatch_stack_1->SetBinError(8,0.724081);
   hbadmatch_stack_1->SetBinError(9,0.8779318);
   hbadmatch_stack_1->SetBinError(10,1.090234);
   hbadmatch_stack_1->SetBinError(11,0.5644634);
   hbadmatch_stack_1->SetBinError(12,0.9087259);
   hbadmatch_stack_1->SetBinError(13,0.7239257);
   hbadmatch_stack_1->SetBinError(14,0.7390173);
   hbadmatch_stack_1->SetBinError(15,0.6804124);
   hbadmatch_stack_1->SetBinError(16,0.2770047);
   hbadmatch_stack_1->SetBinError(17,0.3277063);
   hbadmatch_stack_1->SetBinError(18,0.6582624);
   hbadmatch_stack_1->SetBinError(19,0.4890828);
   hbadmatch_stack_1->SetBinError(20,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.4956437);
   hbadmatch_stack_1->SetBinError(22,0.682385);
   hbadmatch_stack_1->SetBinError(23,0.4966158);
   hbadmatch_stack_1->SetBinError(25,2.341441);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hext_stack_2->SetBinContent(1,211.5589);
   hext_stack_2->SetBinContent(2,28.56668);
   hext_stack_2->SetBinContent(3,28.47566);
   hext_stack_2->SetBinContent(4,27.41309);
   hext_stack_2->SetBinContent(5,23.92975);
   hext_stack_2->SetBinContent(6,23.12531);
   hext_stack_2->SetBinContent(7,20.4507);
   hext_stack_2->SetBinContent(8,15.14621);
   hext_stack_2->SetBinContent(9,14.87088);
   hext_stack_2->SetBinContent(10,3.889996);
   hext_stack_2->SetBinContent(11,7.709381);
   hext_stack_2->SetBinContent(12,12.34631);
   hext_stack_2->SetBinContent(13,8.099981);
   hext_stack_2->SetBinContent(14,6.303639);
   hext_stack_2->SetBinContent(15,4.06158);
   hext_stack_2->SetBinContent(16,2.014225);
   hext_stack_2->SetBinContent(17,2.428004);
   hext_stack_2->SetBinContent(18,4.662883);
   hext_stack_2->SetBinContent(19,3.946247);
   hext_stack_2->SetBinContent(20,1.626396);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,1.704188);
   hext_stack_2->SetBinContent(23,1.697008);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,21.95578);
   hext_stack_2->SetBinError(1,9.884742);
   hext_stack_2->SetBinError(2,3.589168);
   hext_stack_2->SetBinError(3,3.542851);
   hext_stack_2->SetBinError(4,3.518125);
   hext_stack_2->SetBinError(5,3.100481);
   hext_stack_2->SetBinError(6,3.298939);
   hext_stack_2->SetBinError(7,3.105594);
   hext_stack_2->SetBinError(8,2.536215);
   hext_stack_2->SetBinError(9,2.656488);
   hext_stack_2->SetBinError(10,1.264566);
   hext_stack_2->SetBinError(11,1.752737);
   hext_stack_2->SetBinError(12,2.518179);
   hext_stack_2->SetBinError(13,1.779991);
   hext_stack_2->SetBinError(14,1.749156);
   hext_stack_2->SetBinError(15,1.232114);
   hext_stack_2->SetBinError(16,1.045894);
   hext_stack_2->SetBinError(17,1.028599);
   hext_stack_2->SetBinError(18,1.673517);
   hext_stack_2->SetBinError(19,1.458663);
   hext_stack_2->SetBinError(20,0.8131978);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,0.7656743);
   hext_stack_2->SetBinError(23,0.8873887);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,2.996434);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,24.08844);
   hdirt_stack_3->SetBinContent(2,3.303751);
   hdirt_stack_3->SetBinContent(3,2.861934);
   hdirt_stack_3->SetBinContent(4,3.59418);
   hdirt_stack_3->SetBinContent(5,4.627143);
   hdirt_stack_3->SetBinContent(6,2.039774);
   hdirt_stack_3->SetBinContent(7,2.799101);
   hdirt_stack_3->SetBinContent(8,2.15813);
   hdirt_stack_3->SetBinContent(9,1.132148);
   hdirt_stack_3->SetBinContent(10,1.845047);
   hdirt_stack_3->SetBinContent(11,0.7374783);
   hdirt_stack_3->SetBinContent(12,1.300933);
   hdirt_stack_3->SetBinContent(13,0.4713104);
   hdirt_stack_3->SetBinContent(14,1.274014);
   hdirt_stack_3->SetBinContent(15,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.1567191);
   hdirt_stack_3->SetBinContent(17,0.1443594);
   hdirt_stack_3->SetBinContent(18,0.4377912);
   hdirt_stack_3->SetBinContent(19,0.2556058);
   hdirt_stack_3->SetBinContent(20,0.4336264);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(23,0.165479);
   hdirt_stack_3->SetBinContent(25,2.549723);
   hdirt_stack_3->SetBinError(1,2.712418);
   hdirt_stack_3->SetBinError(2,0.9027274);
   hdirt_stack_3->SetBinError(3,0.8728728);
   hdirt_stack_3->SetBinError(4,0.9793882);
   hdirt_stack_3->SetBinError(5,1.120865);
   hdirt_stack_3->SetBinError(6,0.6958541);
   hdirt_stack_3->SetBinError(7,1.180921);
   hdirt_stack_3->SetBinError(8,0.7606892);
   hdirt_stack_3->SetBinError(9,0.5557528);
   hdirt_stack_3->SetBinError(10,0.7618951);
   hdirt_stack_3->SetBinError(11,0.5232628);
   hdirt_stack_3->SetBinError(12,0.5736152);
   hdirt_stack_3->SetBinError(13,0.3341085);
   hdirt_stack_3->SetBinError(14,0.6240675);
   hdirt_stack_3->SetBinError(15,0.3381872);
   hdirt_stack_3->SetBinError(16,0.1567191);
   hdirt_stack_3->SetBinError(17,0.1443594);
   hdirt_stack_3->SetBinError(18,0.3095651);
   hdirt_stack_3->SetBinError(19,0.2556058);
   hdirt_stack_3->SetBinError(20,0.4336264);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(23,0.165479);
   hdirt_stack_3->SetBinError(25,0.9351519);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,200.6064);
   houtFV_stack_4->SetBinContent(2,27.88615);
   houtFV_stack_4->SetBinContent(3,30.81768);
   houtFV_stack_4->SetBinContent(4,27.21532);
   houtFV_stack_4->SetBinContent(5,25.32643);
   houtFV_stack_4->SetBinContent(6,26.95571);
   houtFV_stack_4->SetBinContent(7,27.82808);
   houtFV_stack_4->SetBinContent(8,19.22274);
   houtFV_stack_4->SetBinContent(9,14.48699);
   houtFV_stack_4->SetBinContent(10,10.55346);
   houtFV_stack_4->SetBinContent(11,12.06716);
   houtFV_stack_4->SetBinContent(12,9.202776);
   houtFV_stack_4->SetBinContent(13,8.983798);
   houtFV_stack_4->SetBinContent(14,6.993899);
   houtFV_stack_4->SetBinContent(15,7.297333);
   houtFV_stack_4->SetBinContent(16,4.985198);
   houtFV_stack_4->SetBinContent(17,4.381598);
   houtFV_stack_4->SetBinContent(18,4.443859);
   houtFV_stack_4->SetBinContent(19,3.182711);
   houtFV_stack_4->SetBinContent(20,3.436918);
   houtFV_stack_4->SetBinContent(21,3.851233);
   houtFV_stack_4->SetBinContent(22,2.502482);
   houtFV_stack_4->SetBinContent(23,1.268811);
   houtFV_stack_4->SetBinContent(24,1.407209);
   houtFV_stack_4->SetBinContent(25,20.95997);
   houtFV_stack_4->SetBinError(1,7.083205);
   houtFV_stack_4->SetBinError(2,2.661134);
   houtFV_stack_4->SetBinError(3,2.80223);
   houtFV_stack_4->SetBinError(4,2.555577);
   houtFV_stack_4->SetBinError(5,2.566712);
   houtFV_stack_4->SetBinError(6,2.589164);
   houtFV_stack_4->SetBinError(7,2.991825);
   houtFV_stack_4->SetBinError(8,2.214278);
   houtFV_stack_4->SetBinError(9,1.848339);
   houtFV_stack_4->SetBinError(10,1.630246);
   houtFV_stack_4->SetBinError(11,1.732904);
   houtFV_stack_4->SetBinError(12,1.548479);
   houtFV_stack_4->SetBinError(13,1.517035);
   houtFV_stack_4->SetBinError(14,1.356068);
   houtFV_stack_4->SetBinError(15,1.376195);
   houtFV_stack_4->SetBinError(16,1.154519);
   houtFV_stack_4->SetBinError(17,1.038114);
   houtFV_stack_4->SetBinError(18,1.085);
   houtFV_stack_4->SetBinError(19,0.87873);
   houtFV_stack_4->SetBinError(20,0.9139152);
   houtFV_stack_4->SetBinError(21,0.9994861);
   houtFV_stack_4->SetBinError(22,0.8299499);
   houtFV_stack_4->SetBinError(23,0.5889569);
   houtFV_stack_4->SetBinError(24,0.6049994);
   houtFV_stack_4->SetBinError(25,2.377352);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,49.30698);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,6.708818);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,7.831451);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.716036);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.907264);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.85396);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.778638);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.923612);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.942966);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.436685);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.757044);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.8507857);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.99403);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.6554859);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9476081);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.6961718);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.7250721);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,2.009144);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.332482);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8676411);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8461407);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7923785);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7254511);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7632307);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6288912);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4387085);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5875086);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2821229);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4550394);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2514891);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5031726);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2404119);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3449191);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2155126);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2983287);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3150384);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.5158407);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,4.058301);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.725736);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5015358);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8502901);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3764861);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.624336);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2928421);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1658436);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3309054);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2236377);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.04832419);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,580.0732);
   hNCpi0inFVres_stack_7->SetBinContent(2,101.3478);
   hNCpi0inFVres_stack_7->SetBinContent(3,92.45583);
   hNCpi0inFVres_stack_7->SetBinContent(4,79.49711);
   hNCpi0inFVres_stack_7->SetBinContent(5,71.61777);
   hNCpi0inFVres_stack_7->SetBinContent(6,59.00957);
   hNCpi0inFVres_stack_7->SetBinContent(7,51.17595);
   hNCpi0inFVres_stack_7->SetBinContent(8,43.08192);
   hNCpi0inFVres_stack_7->SetBinContent(9,34.22529);
   hNCpi0inFVres_stack_7->SetBinContent(10,26.84869);
   hNCpi0inFVres_stack_7->SetBinContent(11,26.0597);
   hNCpi0inFVres_stack_7->SetBinContent(12,19.24411);
   hNCpi0inFVres_stack_7->SetBinContent(13,16.74687);
   hNCpi0inFVres_stack_7->SetBinContent(14,12.63576);
   hNCpi0inFVres_stack_7->SetBinContent(15,12.60371);
   hNCpi0inFVres_stack_7->SetBinContent(16,9.120189);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.945309);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.09982);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.684223);
   hNCpi0inFVres_stack_7->SetBinContent(20,4.937492);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.526706);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.261988);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.999598);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.017354);
   hNCpi0inFVres_stack_7->SetBinContent(25,24.52769);
   hNCpi0inFVres_stack_7->SetBinError(1,7.822873);
   hNCpi0inFVres_stack_7->SetBinError(2,3.300259);
   hNCpi0inFVres_stack_7->SetBinError(3,3.152162);
   hNCpi0inFVres_stack_7->SetBinError(4,2.89878);
   hNCpi0inFVres_stack_7->SetBinError(5,2.774415);
   hNCpi0inFVres_stack_7->SetBinError(6,2.505967);
   hNCpi0inFVres_stack_7->SetBinError(7,2.329615);
   hNCpi0inFVres_stack_7->SetBinError(8,2.11357);
   hNCpi0inFVres_stack_7->SetBinError(9,1.899523);
   hNCpi0inFVres_stack_7->SetBinError(10,1.618314);
   hNCpi0inFVres_stack_7->SetBinError(11,1.650719);
   hNCpi0inFVres_stack_7->SetBinError(12,1.482);
   hNCpi0inFVres_stack_7->SetBinError(13,1.316274);
   hNCpi0inFVres_stack_7->SetBinError(14,1.163087);
   hNCpi0inFVres_stack_7->SetBinError(15,1.183296);
   hNCpi0inFVres_stack_7->SetBinError(16,1.037981);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9193337);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6306421);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6389699);
   hNCpi0inFVres_stack_7->SetBinError(20,0.7430325);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6076448);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5958951);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6049706);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2205698);
   hNCpi0inFVres_stack_7->SetBinError(25,1.611003);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,114.6468);
   hNCpi0inFVdis_stack_8->SetBinContent(2,20.06034);
   hNCpi0inFVdis_stack_8->SetBinContent(3,20.09723);
   hNCpi0inFVdis_stack_8->SetBinContent(4,17.57193);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.06289);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.24805);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.15756);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.253032);
   hNCpi0inFVdis_stack_8->SetBinContent(9,6.068278);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.165764);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.474641);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.790591);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.859098);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.830534);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.937894);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.604758);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.7112858);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9202038);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.050662);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.8087721);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.6277541);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3899359);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.362868);
   hNCpi0inFVdis_stack_8->SetBinContent(25,4.295456);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.436263);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.450746);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.511493);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.389911);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.120708);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.042999);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.124839);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8535073);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8216771);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8469847);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6396803);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.603413);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5568413);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5681431);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4314023);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4640037);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2436282);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2682147);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5234555);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3187231);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2996304);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1561744);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2070706);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6845992);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.390768);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2089417);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.097318);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,243.7279);
   hCCpi0inFV_stack_10->SetBinContent(2,42.72867);
   hCCpi0inFV_stack_10->SetBinContent(3,35.4281);
   hCCpi0inFV_stack_10->SetBinContent(4,33.54262);
   hCCpi0inFV_stack_10->SetBinContent(5,32.47421);
   hCCpi0inFV_stack_10->SetBinContent(6,32.31898);
   hCCpi0inFV_stack_10->SetBinContent(7,25.06144);
   hCCpi0inFV_stack_10->SetBinContent(8,23.76862);
   hCCpi0inFV_stack_10->SetBinContent(9,16.48801);
   hCCpi0inFV_stack_10->SetBinContent(10,14.64364);
   hCCpi0inFV_stack_10->SetBinContent(11,12.214);
   hCCpi0inFV_stack_10->SetBinContent(12,8.510696);
   hCCpi0inFV_stack_10->SetBinContent(13,10.20421);
   hCCpi0inFV_stack_10->SetBinContent(14,7.359515);
   hCCpi0inFV_stack_10->SetBinContent(15,5.611876);
   hCCpi0inFV_stack_10->SetBinContent(16,4.510929);
   hCCpi0inFV_stack_10->SetBinContent(17,3.857995);
   hCCpi0inFV_stack_10->SetBinContent(18,3.56938);
   hCCpi0inFV_stack_10->SetBinContent(19,2.209262);
   hCCpi0inFV_stack_10->SetBinContent(20,1.857266);
   hCCpi0inFV_stack_10->SetBinContent(21,1.373626);
   hCCpi0inFV_stack_10->SetBinContent(22,0.5884556);
   hCCpi0inFV_stack_10->SetBinContent(23,1.175221);
   hCCpi0inFV_stack_10->SetBinContent(24,0.9385811);
   hCCpi0inFV_stack_10->SetBinContent(25,14.96162);
   hCCpi0inFV_stack_10->SetBinError(1,7.814236);
   hCCpi0inFV_stack_10->SetBinError(2,3.326832);
   hCCpi0inFV_stack_10->SetBinError(3,2.943985);
   hCCpi0inFV_stack_10->SetBinError(4,2.94019);
   hCCpi0inFV_stack_10->SetBinError(5,2.843621);
   hCCpi0inFV_stack_10->SetBinError(6,2.849748);
   hCCpi0inFV_stack_10->SetBinError(7,2.538343);
   hCCpi0inFV_stack_10->SetBinError(8,2.413391);
   hCCpi0inFV_stack_10->SetBinError(9,1.95783);
   hCCpi0inFV_stack_10->SetBinError(10,1.926835);
   hCCpi0inFV_stack_10->SetBinError(11,1.755364);
   hCCpi0inFV_stack_10->SetBinError(12,1.400969);
   hCCpi0inFV_stack_10->SetBinError(13,1.672858);
   hCCpi0inFV_stack_10->SetBinError(14,1.442056);
   hCCpi0inFV_stack_10->SetBinError(15,1.185141);
   hCCpi0inFV_stack_10->SetBinError(16,0.9406017);
   hCCpi0inFV_stack_10->SetBinError(17,1.00081);
   hCCpi0inFV_stack_10->SetBinError(18,0.9202779);
   hCCpi0inFV_stack_10->SetBinError(19,0.8145231);
   hCCpi0inFV_stack_10->SetBinError(20,0.6799255);
   hCCpi0inFV_stack_10->SetBinError(21,0.519186);
   hCCpi0inFV_stack_10->SetBinError(22,0.3397478);
   hCCpi0inFV_stack_10->SetBinError(23,0.4797863);
   hCCpi0inFV_stack_10->SetBinError(24,0.5460057);
   hCCpi0inFV_stack_10->SetBinError(25,2.004534);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,112.0565);
   hNCinFV_stack_11->SetBinContent(2,15.85222);
   hNCinFV_stack_11->SetBinContent(3,13.63412);
   hNCinFV_stack_11->SetBinContent(4,13.3309);
   hNCinFV_stack_11->SetBinContent(5,10.64197);
   hNCinFV_stack_11->SetBinContent(6,8.067393);
   hNCinFV_stack_11->SetBinContent(7,9.326669);
   hNCinFV_stack_11->SetBinContent(8,6.052058);
   hNCinFV_stack_11->SetBinContent(9,6.395617);
   hNCinFV_stack_11->SetBinContent(10,4.199863);
   hNCinFV_stack_11->SetBinContent(11,6.110383);
   hNCinFV_stack_11->SetBinContent(12,4.678432);
   hNCinFV_stack_11->SetBinContent(13,3.216286);
   hNCinFV_stack_11->SetBinContent(14,1.907138);
   hNCinFV_stack_11->SetBinContent(15,2.107235);
   hNCinFV_stack_11->SetBinContent(16,2.145881);
   hNCinFV_stack_11->SetBinContent(17,1.322064);
   hNCinFV_stack_11->SetBinContent(18,1.322064);
   hNCinFV_stack_11->SetBinContent(19,1.465526);
   hNCinFV_stack_11->SetBinContent(20,1.127039);
   hNCinFV_stack_11->SetBinContent(21,0.7834804);
   hNCinFV_stack_11->SetBinContent(22,0.3934307);
   hNCinFV_stack_11->SetBinContent(23,0.7336084);
   hNCinFV_stack_11->SetBinContent(24,0.5352025);
   hNCinFV_stack_11->SetBinContent(25,6.835539);
   hNCinFV_stack_11->SetBinError(1,5.27894);
   hNCinFV_stack_11->SetBinError(2,2.057567);
   hNCinFV_stack_11->SetBinError(3,1.819308);
   hNCinFV_stack_11->SetBinError(4,1.82971);
   hNCinFV_stack_11->SetBinError(5,1.66505);
   hNCinFV_stack_11->SetBinError(6,1.387434);
   hNCinFV_stack_11->SetBinError(7,1.570508);
   hNCinFV_stack_11->SetBinError(8,1.256311);
   hNCinFV_stack_11->SetBinError(9,1.302061);
   hNCinFV_stack_11->SetBinError(10,1.057357);
   hNCinFV_stack_11->SetBinError(11,1.241763);
   hNCinFV_stack_11->SetBinError(12,1.144012);
   hNCinFV_stack_11->SetBinError(13,0.9615195);
   hNCinFV_stack_11->SetBinError(14,0.6501133);
   hNCinFV_stack_11->SetBinError(15,0.6801976);
   hNCinFV_stack_11->SetBinError(16,0.785499);
   hNCinFV_stack_11->SetBinError(17,0.5554667);
   hNCinFV_stack_11->SetBinError(18,0.5554667);
   hNCinFV_stack_11->SetBinError(19,0.6209405);
   hNCinFV_stack_11->SetBinError(20,0.5201044);
   hNCinFV_stack_11->SetBinError(21,0.3917439);
   hNCinFV_stack_11->SetBinError(22,0.2781975);
   hNCinFV_stack_11->SetBinError(23,0.4394482);
   hNCinFV_stack_11->SetBinError(24,0.3921167);
   hNCinFV_stack_11->SetBinError(25,1.315971);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,109.657);
   hnumuCCinFV_stack_12->SetBinContent(2,24.41744);
   hnumuCCinFV_stack_12->SetBinContent(3,19.44952);
   hnumuCCinFV_stack_12->SetBinContent(4,19.92299);
   hnumuCCinFV_stack_12->SetBinContent(5,12.01034);
   hnumuCCinFV_stack_12->SetBinContent(6,10.90996);
   hnumuCCinFV_stack_12->SetBinContent(7,11.12062);
   hnumuCCinFV_stack_12->SetBinContent(8,6.79362);
   hnumuCCinFV_stack_12->SetBinContent(9,6.377861);
   hnumuCCinFV_stack_12->SetBinContent(10,5.170101);
   hnumuCCinFV_stack_12->SetBinContent(11,2.981199);
   hnumuCCinFV_stack_12->SetBinContent(12,3.789511);
   hnumuCCinFV_stack_12->SetBinContent(13,2.818782);
   hnumuCCinFV_stack_12->SetBinContent(14,2.560794);
   hnumuCCinFV_stack_12->SetBinContent(15,3.073638);
   hnumuCCinFV_stack_12->SetBinContent(16,1.155735);
   hnumuCCinFV_stack_12->SetBinContent(17,3.873682);
   hnumuCCinFV_stack_12->SetBinContent(18,3.306991);
   hnumuCCinFV_stack_12->SetBinContent(19,0.8172121);
   hnumuCCinFV_stack_12->SetBinContent(20,0.5675569);
   hnumuCCinFV_stack_12->SetBinContent(21,2.11011);
   hnumuCCinFV_stack_12->SetBinContent(22,0.5832107);
   hnumuCCinFV_stack_12->SetBinContent(23,1.765022);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,11.62634);
   hnumuCCinFV_stack_12->SetBinError(1,6.100746);
   hnumuCCinFV_stack_12->SetBinError(2,2.955487);
   hnumuCCinFV_stack_12->SetBinError(3,2.286304);
   hnumuCCinFV_stack_12->SetBinError(4,3.249131);
   hnumuCCinFV_stack_12->SetBinError(5,1.829694);
   hnumuCCinFV_stack_12->SetBinError(6,1.79353);
   hnumuCCinFV_stack_12->SetBinError(7,1.745802);
   hnumuCCinFV_stack_12->SetBinError(8,1.360832);
   hnumuCCinFV_stack_12->SetBinError(9,1.273731);
   hnumuCCinFV_stack_12->SetBinError(10,1.251944);
   hnumuCCinFV_stack_12->SetBinError(11,0.810242);
   hnumuCCinFV_stack_12->SetBinError(12,0.9050107);
   hnumuCCinFV_stack_12->SetBinError(13,0.8693963);
   hnumuCCinFV_stack_12->SetBinError(14,0.801903);
   hnumuCCinFV_stack_12->SetBinError(15,1.614865);
   hnumuCCinFV_stack_12->SetBinError(16,0.521619);
   hnumuCCinFV_stack_12->SetBinError(17,1.175393);
   hnumuCCinFV_stack_12->SetBinError(18,1.162159);
   hnumuCCinFV_stack_12->SetBinError(19,0.4095828);
   hnumuCCinFV_stack_12->SetBinError(20,0.4091718);
   hnumuCCinFV_stack_12->SetBinError(21,0.766076);
   hnumuCCinFV_stack_12->SetBinError(22,0.4180738);
   hnumuCCinFV_stack_12->SetBinError(23,0.9645459);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,2.007101);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,21.92911);
   hnueCCinFV_stack_13->SetBinContent(2,0.654338);
   hnueCCinFV_stack_13->SetBinContent(3,0.6777201);
   hnueCCinFV_stack_13->SetBinContent(4,1.517861);
   hnueCCinFV_stack_13->SetBinContent(5,1.238217);
   hnueCCinFV_stack_13->SetBinContent(6,1.74061);
   hnueCCinFV_stack_13->SetBinContent(7,0.9566132);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(9,0.4182166);
   hnueCCinFV_stack_13->SetBinContent(10,1.372419);
   hnueCCinFV_stack_13->SetBinContent(12,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(14,0.7174736);
   hnueCCinFV_stack_13->SetBinContent(25,1.020507);
   hnueCCinFV_stack_13->SetBinError(1,3.24426);
   hnueCCinFV_stack_13->SetBinError(2,0.3788402);
   hnueCCinFV_stack_13->SetBinError(3,0.4972163);
   hnueCCinFV_stack_13->SetBinError(4,0.7137061);
   hnueCCinFV_stack_13->SetBinError(5,0.6329025);
   hnueCCinFV_stack_13->SetBinError(6,1.189702);
   hnueCCinFV_stack_13->SetBinError(7,0.4866822);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
   hnueCCinFV_stack_13->SetBinError(9,0.293294);
   hnueCCinFV_stack_13->SetBinError(10,0.6626564);
   hnueCCinFV_stack_13->SetBinError(12,0.2770047);
   hnueCCinFV_stack_13->SetBinError(14,0.5566696);
   hnueCCinFV_stack_13->SetBinError(25,0.5406067);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);
   hmcerror__11->SetBinContent(1,1709.461);
   hmcerror__11->SetBinContent(2,277.2306);
   hmcerror__11->SetBinContent(3,257.2336);
   hmcerror__11->SetBinContent(4,235.5936);
   hmcerror__11->SetBinContent(5,203.513);
   hmcerror__11->SetBinContent(6,185.8901);
   hmcerror__11->SetBinContent(7,167.1584);
   hmcerror__11->SetBinContent(8,127.8172);
   hmcerror__11->SetBinContent(9,106.1989);
   hmcerror__11->SetBinContent(10,79.50896);
   hmcerror__11->SetBinContent(11,75.42958);
   hmcerror__11->SetBinContent(12,66.95091);
   hmcerror__11->SetBinContent(13,57.3071);
   hmcerror__11->SetBinContent(14,45.26445);
   hmcerror__11->SetBinContent(15,39.86592);
   hmcerror__11->SetBinContent(16,26.78155);
   hmcerror__11->SetBinContent(17,24.47153);
   hmcerror__11->SetBinContent(18,24.80718);
   hmcerror__11->SetBinContent(19,19.71334);
   hmcerror__11->SetBinContent(20,15.43852);
   hmcerror__11->SetBinContent(21,15.22489);
   hmcerror__11->SetBinContent(22,11.46777);
   hmcerror__11->SetBinContent(23,11.64744);
   hmcerror__11->SetBinContent(24,4.864529);
   hmcerror__11->SetBinContent(25,121.2646);
   hmcerror__11->SetBinError(1,365.7134);
   hmcerror__11->SetBinError(2,74.08395);
   hmcerror__11->SetBinError(3,68.84355);
   hmcerror__11->SetBinError(4,62.12492);
   hmcerror__11->SetBinError(5,50.32293);
   hmcerror__11->SetBinError(6,56.38764);
   hmcerror__11->SetBinError(7,42.44679);
   hmcerror__11->SetBinError(8,34.16674);
   hmcerror__11->SetBinError(9,28.50046);
   hmcerror__11->SetBinError(10,24.72626);
   hmcerror__11->SetBinError(11,26.05201);
   hmcerror__11->SetBinError(12,20.1795);
   hmcerror__11->SetBinError(13,18.42669);
   hmcerror__11->SetBinError(14,16.60314);
   hmcerror__11->SetBinError(15,19.85738);
   hmcerror__11->SetBinError(16,12.8384);
   hmcerror__11->SetBinError(17,11.66476);
   hmcerror__11->SetBinError(18,11.92893);
   hmcerror__11->SetBinError(19,8.343531);
   hmcerror__11->SetBinError(20,7.769806);
   hmcerror__11->SetBinError(21,9.613696);
   hmcerror__11->SetBinError(22,7.503299);
   hmcerror__11->SetBinError(23,10.21646);
   hmcerror__11->SetBinError(24,3.757755);
   hmcerror__11->SetBinError(25,39.89827);
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
   
   Double_t _fx3013[24] = {
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
   Double_t _fy3013[24] = {
   1708,
   258,
   258,
   222,
   153,
   214,
   155,
   116,
   101,
   92,
   75,
   55,
   48,
   44,
   30,
   38,
   19,
   27,
   20,
   23,
   16,
   11,
   5,
   10};
   Double_t _felx3013[24] = {
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
   Double_t _fely3013[24] = {
   41.32796,
   16.06238,
   16.06238,
   14.89966,
   12.36932,
   14.62874,
   12.4499,
   10.77033,
   10.04988,
   9.7138,
   8.7852,
   7.546,
   7.0604,
   6.7671,
   5.6197,
   6.3013,
   4.5151,
   5.3414,
   4.6266,
   4.9457,
   4.1628,
   3.4975,
   2.48995,
   3.34883};
   Double_t _fehx3013[24] = {
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
   Double_t _fehy3013[24] = {
   41.32796,
   16.06238,
   16.06238,
   14.89966,
   12.36932,
   14.62874,
   12.4499,
   10.77033,
   10.04988,
   9.513,
   8.5831,
   7.3425,
   6.8561,
   6.5623,
   5.4117,
   6.0955,
   4.3011,
   5.1322,
   4.4133,
   4.7346,
   3.9454,
   3.27,
   2.21064,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,99);
   Graph_Graph3013->SetMinimum(2.259045);
   Graph_Graph3013->SetMaximum(1924.01);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.8/24","");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 455.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 54.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 484.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  98.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1267.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  251.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 564.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 227.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 255.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 31.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[24] = {
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
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
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
   Double_t _fely3014[24] = {
   0.2139349,
   0.2672287,
   0.2676305,
   0.2636952,
   0.2472713,
   0.3033386,
   0.2539315,
   0.2673094,
   0.2683686,
   0.3109871,
   0.3453819,
   0.3014074,
   0.3215429,
   0.3668032,
   0.498104,
   0.4793747,
   0.4766666,
   0.480866,
   0.423243,
   0.5032741,
   0.6314462,
   0.6542947,
   0.8771418,
   0.7724809};
   Double_t _fehx3014[24] = {
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
   Double_t _fehy3014[24] = {
   0.2139349,
   0.2672287,
   0.2676305,
   0.2636952,
   0.2472713,
   0.3033386,
   0.2539315,
   0.2673094,
   0.2683686,
   0.3109871,
   0.3453819,
   0.3014074,
   0.3215429,
   0.3668032,
   0.498104,
   0.4793747,
   0.4766666,
   0.480866,
   0.423243,
   0.5032741,
   0.6314462,
   0.6542947,
   0.8771418,
   0.7724809};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,99);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3015[24] = {
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
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
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
   Double_t _fely3015[24] = {
   0.1995872,
   0.2049241,
   0.2022842,
   0.1988622,
   0.1984156,
   0.195894,
   0.1860231,
   0.2082826,
   0.198039,
   0.2067882,
   0.2138902,
   0.1814279,
   0.1982259,
   0.1975166,
   0.221455,
   0.2458589,
   0.2244079,
   0.2100012,
   0.2090411,
   0.2446957,
   0.2637216,
   0.2449898,
   0.2513371,
   0.3437136};
   Double_t _fehx3015[24] = {
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
   Double_t _fehy3015[24] = {
   0.1995872,
   0.2049241,
   0.2022842,
   0.1988622,
   0.1984156,
   0.195894,
   0.1860231,
   0.2082826,
   0.198039,
   0.2067882,
   0.2138902,
   0.1814279,
   0.1982259,
   0.1975166,
   0.221455,
   0.2458589,
   0.2244079,
   0.2100012,
   0.2090411,
   0.2446957,
   0.2637216,
   0.2449898,
   0.2513371,
   0.3437136};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,99);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3016[24] = {
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
   Double_t _fy3016[24] = {
   0.9991452,
   0.9306333,
   1.00298,
   0.9423005,
   0.7517947,
   1.151218,
   0.9272643,
   0.9075459,
   0.9510452,
   1.157102,
   0.9943049,
   0.8214974,
   0.8375926,
   0.9720653,
   0.7525224,
   1.418887,
   0.7764126,
   1.088394,
   1.014542,
   1.48978,
   1.050911,
   0.9592102,
   0.4292788,
   2.055698};
   Double_t _felx3016[24] = {
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
   Double_t _fely3016[24] = {
   0.02417601,
   0.0579387,
   0.06244278,
   0.06324307,
   0.060779,
   0.07869564,
   0.07447966,
   0.08426352,
   0.09463254,
   0.1221724,
   0.1164689,
   0.1127094,
   0.1232029,
   0.1495014,
   0.140965,
   0.2352852,
   0.1845042,
   0.2153167,
   0.2346939,
   0.3203481,
   0.2734208,
   0.3049852,
   0.2137766,
   0.6884182};
   Double_t _fehx3016[24] = {
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
   Double_t _fehy3016[24] = {
   0.02417601,
   0.0579387,
   0.06244278,
   0.06324307,
   0.060779,
   0.07869564,
   0.07447966,
   0.08426352,
   0.09463254,
   0.1196469,
   0.1137896,
   0.1096699,
   0.1196379,
   0.1449769,
   0.1357475,
   0.2276008,
   0.1757594,
   0.2068836,
   0.2238738,
   0.3066745,
   0.2591415,
   0.285147,
   0.1897962,
   0.640946};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,99);
   Graph_Graph3016->SetMinimum(0.193952);
   Graph_Graph3016->SetMaximum(2.944758);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_gap_high_all",24,0,90);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
