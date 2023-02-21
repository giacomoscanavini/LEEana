#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Feb 18 13:27:17 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",216,172,1200,900);
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
   pad1->Range(-13.84615,-3.985956,101.5385,440.7629);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__22->SetBinContent(1,199.2978);
   hmc__22->SetBinContent(2,72.65489);
   hmc__22->SetBinContent(3,64.57248);
   hmc__22->SetBinContent(4,61.50418);
   hmc__22->SetBinContent(5,61.19426);
   hmc__22->SetBinContent(6,54.6822);
   hmc__22->SetBinContent(7,53.30584);
   hmc__22->SetBinContent(8,44.4399);
   hmc__22->SetBinContent(9,36.11324);
   hmc__22->SetBinContent(10,33.5265);
   hmc__22->SetBinContent(11,27.63613);
   hmc__22->SetBinContent(12,26.76874);
   hmc__22->SetBinContent(13,21.858);
   hmc__22->SetBinContent(14,16.89821);
   hmc__22->SetBinContent(15,14.23191);
   hmc__22->SetBinContent(16,16.34942);
   hmc__22->SetBinContent(17,11.40568);
   hmc__22->SetBinContent(18,9.59938);
   hmc__22->SetBinContent(19,9.787513);
   hmc__22->SetBinContent(20,6.806833);
   hmc__22->SetBinContent(21,12.13724);
   hmc__22->SetBinContent(22,12.23414);
   hmc__22->SetBinContent(23,5.724825);
   hmc__22->SetBinContent(24,5.669293);
   hmc__22->SetBinContent(25,85.59918);
   hmc__22->SetBinError(1,48.21078);
   hmc__22->SetBinError(2,20.8386);
   hmc__22->SetBinError(3,20.21371);
   hmc__22->SetBinError(4,20.74976);
   hmc__22->SetBinError(5,18.23748);
   hmc__22->SetBinError(6,20.74456);
   hmc__22->SetBinError(7,19.66096);
   hmc__22->SetBinError(8,20.54731);
   hmc__22->SetBinError(9,16.52628);
   hmc__22->SetBinError(10,14.67527);
   hmc__22->SetBinError(11,13.07461);
   hmc__22->SetBinError(12,26.22009);
   hmc__22->SetBinError(13,11.84806);
   hmc__22->SetBinError(14,8.913989);
   hmc__22->SetBinError(15,9.863117);
   hmc__22->SetBinError(16,9.554148);
   hmc__22->SetBinError(17,6.370983);
   hmc__22->SetBinError(18,7.330472);
   hmc__22->SetBinError(19,6.773431);
   hmc__22->SetBinError(20,5.977326);
   hmc__22->SetBinError(21,8.379742);
   hmc__22->SetBinError(22,9.840012);
   hmc__22->SetBinError(23,10.55652);
   hmc__22->SetBinError(24,7.647898);
   hmc__22->SetBinError(25,32.52847);
   hmc__22->SetMinimum(-3.985956);
   hmc__22->SetMaximum(418.5254);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,0,90);
   hs8_stack_8->SetMinimum(-1.146215e-08);
   hs8_stack_8->SetMaximum(209.2627);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,8.874024);
   hbadmatch_stack_1->SetBinContent(2,1.805707);
   hbadmatch_stack_1->SetBinContent(3,1.593674);
   hbadmatch_stack_1->SetBinContent(4,1.324834);
   hbadmatch_stack_1->SetBinContent(5,0.9269427);
   hbadmatch_stack_1->SetBinContent(6,1.015298);
   hbadmatch_stack_1->SetBinContent(7,1.68582);
   hbadmatch_stack_1->SetBinContent(8,0.4238726);
   hbadmatch_stack_1->SetBinContent(9,1.314571);
   hbadmatch_stack_1->SetBinContent(10,1.773449);
   hbadmatch_stack_1->SetBinContent(11,0.8753801);
   hbadmatch_stack_1->SetBinContent(12,1.714503);
   hbadmatch_stack_1->SetBinContent(13,1.4798);
   hbadmatch_stack_1->SetBinContent(14,0.3916036);
   hbadmatch_stack_1->SetBinContent(15,1.190729);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.4020396);
   hbadmatch_stack_1->SetBinContent(19,0.7336084);
   hbadmatch_stack_1->SetBinContent(20,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.5352025);
   hbadmatch_stack_1->SetBinContent(22,0.7838478);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.5608781);
   hbadmatch_stack_1->SetBinContent(25,2.796248);
   hbadmatch_stack_1->SetBinError(1,1.846636);
   hbadmatch_stack_1->SetBinError(2,0.7080169);
   hbadmatch_stack_1->SetBinError(3,0.7191352);
   hbadmatch_stack_1->SetBinError(4,0.6229963);
   hbadmatch_stack_1->SetBinError(5,0.4800908);
   hbadmatch_stack_1->SetBinError(6,0.455065);
   hbadmatch_stack_1->SetBinError(7,0.6587994);
   hbadmatch_stack_1->SetBinError(8,0.3004951);
   hbadmatch_stack_1->SetBinError(9,0.6059111);
   hbadmatch_stack_1->SetBinError(10,0.8296713);
   hbadmatch_stack_1->SetBinError(11,0.5191111);
   hbadmatch_stack_1->SetBinError(12,0.727072);
   hbadmatch_stack_1->SetBinError(13,0.6288738);
   hbadmatch_stack_1->SetBinError(14,0.3916037);
   hbadmatch_stack_1->SetBinError(15,0.54758);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.4020395);
   hbadmatch_stack_1->SetBinError(19,0.4394482);
   hbadmatch_stack_1->SetBinError(20,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.3921167);
   hbadmatch_stack_1->SetBinError(22,0.4641168);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.4054991);
   hbadmatch_stack_1->SetBinError(25,0.8710046);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,46.34996);
   hext_stack_2->SetBinContent(2,18.56334);
   hext_stack_2->SetBinContent(3,9.380438);
   hext_stack_2->SetBinContent(4,12.90415);
   hext_stack_2->SetBinContent(5,14.6993);
   hext_stack_2->SetBinContent(6,7.608409);
   hext_stack_2->SetBinContent(7,10.93181);
   hext_stack_2->SetBinContent(8,9.608273);
   hext_stack_2->SetBinContent(9,6.090166);
   hext_stack_2->SetBinContent(10,5.102613);
   hext_stack_2->SetBinContent(11,4.856008);
   hext_stack_2->SetBinContent(12,4.780987);
   hext_stack_2->SetBinContent(13,3.248382);
   hext_stack_2->SetBinContent(14,3.394015);
   hext_stack_2->SetBinContent(15,0.8131978);
   hext_stack_2->SetBinContent(16,4.632582);
   hext_stack_2->SetBinContent(17,2.923985);
   hext_stack_2->SetBinContent(18,0.8131978);
   hext_stack_2->SetBinContent(19,3.069618);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,5.40106);
   hext_stack_2->SetBinContent(22,4.352847);
   hext_stack_2->SetBinContent(25,18.86462);
   hext_stack_2->SetBinError(1,4.592097);
   hext_stack_2->SetBinError(2,3.034067);
   hext_stack_2->SetBinError(3,2.080391);
   hext_stack_2->SetBinError(4,2.211549);
   hext_stack_2->SetBinError(5,2.671694);
   hext_stack_2->SetBinError(6,1.810878);
   hext_stack_2->SetBinError(7,2.174403);
   hext_stack_2->SetBinError(8,2.185309);
   hext_stack_2->SetBinError(9,1.486471);
   hext_stack_2->SetBinError(10,1.515354);
   hext_stack_2->SetBinError(11,1.454658);
   hext_stack_2->SetBinError(12,1.361888);
   hext_stack_2->SetBinError(13,1.089706);
   hext_stack_2->SetBinError(14,1.254957);
   hext_stack_2->SetBinError(15,0.5750177);
   hext_stack_2->SetBinError(16,1.342984);
   hext_stack_2->SetBinError(17,1.040301);
   hext_stack_2->SetBinError(18,0.5750177);
   hext_stack_2->SetBinError(19,1.212305);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,1.694111);
   hext_stack_2->SetBinError(22,1.514272);
   hext_stack_2->SetBinError(25,2.848252);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,5.372776);
   hdirt_stack_3->SetBinContent(2,0.7952818);
   hdirt_stack_3->SetBinContent(3,1.659768);
   hdirt_stack_3->SetBinContent(4,1.434211);
   hdirt_stack_3->SetBinContent(5,1.432632);
   hdirt_stack_3->SetBinContent(6,1.977847);
   hdirt_stack_3->SetBinContent(7,0.6448251);
   hdirt_stack_3->SetBinContent(8,1.033105);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,0.1448005);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.3843746);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(15,0.7277534);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.1620494);
   hdirt_stack_3->SetBinContent(22,0.4762587);
   hdirt_stack_3->SetBinContent(25,0.9525174);
   hdirt_stack_3->SetBinError(1,1.413173);
   hdirt_stack_3->SetBinError(2,0.4680007);
   hdirt_stack_3->SetBinError(3,0.7542654);
   hdirt_stack_3->SetBinError(4,0.6197743);
   hdirt_stack_3->SetBinError(5,0.6746507);
   hdirt_stack_3->SetBinError(6,0.7343335);
   hdirt_stack_3->SetBinError(7,0.4309404);
   hdirt_stack_3->SetBinError(8,0.4299955);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.1382353);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.2744059);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(15,0.5158802);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.1620494);
   hdirt_stack_3->SetBinError(22,0.3652866);
   hdirt_stack_3->SetBinError(25,0.5165933);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,42.89524);
   houtFV_stack_4->SetBinContent(2,13.42944);
   houtFV_stack_4->SetBinContent(3,15.43609);
   houtFV_stack_4->SetBinContent(4,12.82823);
   houtFV_stack_4->SetBinContent(5,11.87965);
   houtFV_stack_4->SetBinContent(6,11.98792);
   houtFV_stack_4->SetBinContent(7,8.93134);
   houtFV_stack_4->SetBinContent(8,9.569563);
   houtFV_stack_4->SetBinContent(9,6.833013);
   houtFV_stack_4->SetBinContent(10,6.484106);
   houtFV_stack_4->SetBinContent(11,6.281867);
   houtFV_stack_4->SetBinContent(12,4.53666);
   houtFV_stack_4->SetBinContent(13,7.239424);
   houtFV_stack_4->SetBinContent(14,4.567689);
   houtFV_stack_4->SetBinContent(15,2.84085);
   houtFV_stack_4->SetBinContent(16,2.977543);
   houtFV_stack_4->SetBinContent(17,1.476323);
   houtFV_stack_4->SetBinContent(18,2.39585);
   houtFV_stack_4->SetBinContent(19,1.521186);
   houtFV_stack_4->SetBinContent(20,1.65548);
   houtFV_stack_4->SetBinContent(21,2.250697);
   houtFV_stack_4->SetBinContent(22,1.69215);
   houtFV_stack_4->SetBinContent(23,1.26712);
   houtFV_stack_4->SetBinContent(24,0.7479978);
   houtFV_stack_4->SetBinContent(25,21.9867);
   houtFV_stack_4->SetBinError(1,3.393531);
   houtFV_stack_4->SetBinError(2,2.199345);
   houtFV_stack_4->SetBinError(3,2.007987);
   houtFV_stack_4->SetBinError(4,1.864885);
   houtFV_stack_4->SetBinError(5,1.686382);
   houtFV_stack_4->SetBinError(6,1.718449);
   houtFV_stack_4->SetBinError(7,1.500279);
   houtFV_stack_4->SetBinError(8,1.525354);
   houtFV_stack_4->SetBinError(9,1.287215);
   houtFV_stack_4->SetBinError(10,1.248073);
   houtFV_stack_4->SetBinError(11,1.27696);
   houtFV_stack_4->SetBinError(12,1.110135);
   houtFV_stack_4->SetBinError(13,1.323459);
   houtFV_stack_4->SetBinError(14,1.063506);
   houtFV_stack_4->SetBinError(15,0.8098046);
   houtFV_stack_4->SetBinError(16,0.854493);
   houtFV_stack_4->SetBinError(17,0.6244789);
   houtFV_stack_4->SetBinError(18,0.7857345);
   houtFV_stack_4->SetBinError(19,0.6530952);
   houtFV_stack_4->SetBinError(20,0.6493189);
   houtFV_stack_4->SetBinError(21,0.7346377);
   houtFV_stack_4->SetBinError(22,0.6683534);
   houtFV_stack_4->SetBinError(23,0.5883944);
   houtFV_stack_4->SetBinError(24,0.4460751);
   houtFV_stack_4->SetBinError(25,2.435088);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.288312);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.268126);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.227608);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.477876);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.8365039);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4042178);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.626922);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.9889579);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.626922);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4593539);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4746361);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.9615536);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.553746);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3669704);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4228219);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.408066);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2638255);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1342881);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2655413);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3067967);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2655413);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1818869);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2806257);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.217012);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,23.26039);
   hNCpi0inFVres_stack_7->SetBinContent(2,11.31963);
   hNCpi0inFVres_stack_7->SetBinContent(3,13.08847);
   hNCpi0inFVres_stack_7->SetBinContent(4,9.535351);
   hNCpi0inFVres_stack_7->SetBinContent(5,10.36007);
   hNCpi0inFVres_stack_7->SetBinContent(6,9.382906);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.518333);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.743431);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.564414);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.787951);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.889237);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.748241);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.161926);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.576522);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.076561);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.938062);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.686962);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.462762);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.560912);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.157358);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.7943219);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.7112858);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.6554859);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.6420361);
   hNCpi0inFVres_stack_7->SetBinContent(25,7.219979);
   hNCpi0inFVres_stack_7->SetBinError(1,1.574779);
   hNCpi0inFVres_stack_7->SetBinError(2,1.043465);
   hNCpi0inFVres_stack_7->SetBinError(3,1.173138);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9313899);
   hNCpi0inFVres_stack_7->SetBinError(5,1.000623);
   hNCpi0inFVres_stack_7->SetBinError(6,0.993728);
   hNCpi0inFVres_stack_7->SetBinError(7,0.940401);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7282619);
   hNCpi0inFVres_stack_7->SetBinError(9,0.7890561);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8332795);
   hNCpi0inFVres_stack_7->SetBinError(11,0.5887212);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5804542);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4600016);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3860094);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4131995);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4678321);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4602838);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3919296);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4270197);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3883553);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2741946);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2436282);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2404119);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2888274);
   hNCpi0inFVres_stack_7->SetBinError(25,0.8508047);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.683559);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.690034);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.194402);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.508679);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.62128);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.686458);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.09118);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.830039);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.76062);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.492326);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.5015358);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.22644);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.5581679);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9491041);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.4744679);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2231999);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.460186);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.2510999);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.4188362);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.2504359);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.798226);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6494423);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.516594);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6462893);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4353683);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4946557);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.337023);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4794732);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6074851);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6002881);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4392262);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.1658436);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.306585);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2198343);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3531893);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2144572);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.07891307);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2287991);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.08369995);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.277838);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1431726);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3865967);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,32.54167);
   hCCpi0inFV_stack_10->SetBinContent(2,12.64052);
   hCCpi0inFV_stack_10->SetBinContent(3,10.89755);
   hCCpi0inFV_stack_10->SetBinContent(4,10.32115);
   hCCpi0inFV_stack_10->SetBinContent(5,13.20663);
   hCCpi0inFV_stack_10->SetBinContent(6,13.01727);
   hCCpi0inFV_stack_10->SetBinContent(7,11.97157);
   hCCpi0inFV_stack_10->SetBinContent(8,9.981295);
   hCCpi0inFV_stack_10->SetBinContent(9,6.849581);
   hCCpi0inFV_stack_10->SetBinContent(10,7.616246);
   hCCpi0inFV_stack_10->SetBinContent(11,5.421575);
   hCCpi0inFV_stack_10->SetBinContent(12,7.001725);
   hCCpi0inFV_stack_10->SetBinContent(13,4.196482);
   hCCpi0inFV_stack_10->SetBinContent(14,2.664536);
   hCCpi0inFV_stack_10->SetBinContent(15,4.58384);
   hCCpi0inFV_stack_10->SetBinContent(16,3.350348);
   hCCpi0inFV_stack_10->SetBinContent(17,3.254319);
   hCCpi0inFV_stack_10->SetBinContent(18,2.955097);
   hCCpi0inFV_stack_10->SetBinContent(19,1.417608);
   hCCpi0inFV_stack_10->SetBinContent(20,0.8753801);
   hCCpi0inFV_stack_10->SetBinContent(21,1.708733);
   hCCpi0inFV_stack_10->SetBinContent(22,1.608988);
   hCCpi0inFV_stack_10->SetBinContent(23,1.270501);
   hCCpi0inFV_stack_10->SetBinContent(24,1.662242);
   hCCpi0inFV_stack_10->SetBinContent(25,15.9732);
   hCCpi0inFV_stack_10->SetBinError(1,2.879949);
   hCCpi0inFV_stack_10->SetBinError(2,1.781342);
   hCCpi0inFV_stack_10->SetBinError(3,1.66128);
   hCCpi0inFV_stack_10->SetBinError(4,1.616722);
   hCCpi0inFV_stack_10->SetBinError(5,1.79603);
   hCCpi0inFV_stack_10->SetBinError(6,1.823717);
   hCCpi0inFV_stack_10->SetBinError(7,1.778465);
   hCCpi0inFV_stack_10->SetBinError(8,1.533059);
   hCCpi0inFV_stack_10->SetBinError(9,1.348186);
   hCCpi0inFV_stack_10->SetBinError(10,1.443103);
   hCCpi0inFV_stack_10->SetBinError(11,1.143339);
   hCCpi0inFV_stack_10->SetBinError(12,1.379007);
   hCCpi0inFV_stack_10->SetBinError(13,1.056731);
   hCCpi0inFV_stack_10->SetBinError(14,0.791004);
   hCCpi0inFV_stack_10->SetBinError(15,1.119253);
   hCCpi0inFV_stack_10->SetBinError(16,0.9270741);
   hCCpi0inFV_stack_10->SetBinError(17,0.8612744);
   hCCpi0inFV_stack_10->SetBinError(18,0.9308807);
   hCCpi0inFV_stack_10->SetBinError(19,0.5372556);
   hCCpi0inFV_stack_10->SetBinError(20,0.5191111);
   hCCpi0inFV_stack_10->SetBinError(21,0.6191027);
   hCCpi0inFV_stack_10->SetBinError(22,0.6801404);
   hCCpi0inFV_stack_10->SetBinError(23,0.5895188);
   hCCpi0inFV_stack_10->SetBinError(24,0.6513556);
   hCCpi0inFV_stack_10->SetBinError(25,2.006249);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,5.713571);
   hNCinFV_stack_11->SetBinContent(2,2.245626);
   hNCinFV_stack_11->SetBinContent(3,2.929362);
   hNCinFV_stack_11->SetBinContent(4,2.979234);
   hNCinFV_stack_11->SetBinContent(5,1.467217);
   hNCinFV_stack_11->SetBinContent(6,3.219667);
   hNCinFV_stack_11->SetBinContent(7,2.102163);
   hNCinFV_stack_11->SetBinContent(8,1.999038);
   hNCinFV_stack_11->SetBinContent(9,2.144191);
   hNCinFV_stack_11->SetBinContent(10,0.7319179);
   hNCinFV_stack_11->SetBinContent(11,1.322064);
   hNCinFV_stack_11->SetBinContent(12,0.9286332);
   hNCinFV_stack_11->SetBinContent(13,0.785171);
   hNCinFV_stack_11->SetBinContent(14,0.7336084);
   hNCinFV_stack_11->SetBinContent(15,0.9269427);
   hNCinFV_stack_11->SetBinContent(16,1.073786);
   hNCinFV_stack_11->SetBinContent(17,0.3934307);
   hNCinFV_stack_11->SetBinContent(19,0.6803553);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.1967154);
   hNCinFV_stack_11->SetBinContent(22,0.3917402);
   hNCinFV_stack_11->SetBinContent(24,0.6803553);
   hNCinFV_stack_11->SetBinContent(25,2.442341);
   hNCinFV_stack_11->SetBinError(1,1.209652);
   hNCinFV_stack_11->SetBinError(2,0.7332843);
   hNCinFV_stack_11->SetBinError(3,0.8777653);
   hNCinFV_stack_11->SetBinError(4,0.8548804);
   hNCinFV_stack_11->SetBinError(5,0.6214735);
   hNCinFV_stack_11->SetBinError(6,0.962208);
   hNCinFV_stack_11->SetBinError(7,0.6787356);
   hNCinFV_stack_11->SetBinError(8,0.7339349);
   hNCinFV_stack_11->SetBinError(9,0.7850774);
   hNCinFV_stack_11->SetBinError(10,0.438694);
   hNCinFV_stack_11->SetBinError(11,0.5554667);
   hNCinFV_stack_11->SetBinError(12,0.48078);
   hNCinFV_stack_11->SetBinError(13,0.3925882);
   hNCinFV_stack_11->SetBinError(14,0.4394482);
   hNCinFV_stack_11->SetBinError(15,0.4800908);
   hNCinFV_stack_11->SetBinError(16,0.5557297);
   hNCinFV_stack_11->SetBinError(17,0.2781975);
   hNCinFV_stack_11->SetBinError(19,0.4810838);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.1967154);
   hNCinFV_stack_11->SetBinError(22,0.2770047);
   hNCinFV_stack_11->SetBinError(24,0.4810838);
   hNCinFV_stack_11->SetBinError(25,0.759212);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,26.7645);
   hnumuCCinFV_stack_12->SetBinContent(2,7.897189);
   hnumuCCinFV_stack_12->SetBinContent(3,4.890878);
   hnumuCCinFV_stack_12->SetBinContent(4,5.515089);
   hnumuCCinFV_stack_12->SetBinContent(5,3.314807);
   hnumuCCinFV_stack_12->SetBinContent(6,3.793755);
   hnumuCCinFV_stack_12->SetBinContent(7,5.829117);
   hnumuCCinFV_stack_12->SetBinContent(8,2.596462);
   hnumuCCinFV_stack_12->SetBinContent(9,3.046232);
   hnumuCCinFV_stack_12->SetBinContent(10,3.710368);
   hnumuCCinFV_stack_12->SetBinContent(11,3.672142);
   hnumuCCinFV_stack_12->SetBinContent(12,2.168012);
   hnumuCCinFV_stack_12->SetBinContent(13,1.467217);
   hnumuCCinFV_stack_12->SetBinContent(14,1.807896);
   hnumuCCinFV_stack_12->SetBinContent(15,0.4021032);
   hnumuCCinFV_stack_12->SetBinContent(16,1.564439);
   hnumuCCinFV_stack_12->SetBinContent(17,0.7936751);
   hnumuCCinFV_stack_12->SetBinContent(18,0.8770706);
   hnumuCCinFV_stack_12->SetBinContent(19,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(20,1.175629);
   hnumuCCinFV_stack_12->SetBinContent(21,0.7624196);
   hnumuCCinFV_stack_12->SetBinContent(22,0.9992422);
   hnumuCCinFV_stack_12->SetBinContent(23,1.972967);
   hnumuCCinFV_stack_12->SetBinContent(24,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(25,11.6972);
   hnumuCCinFV_stack_12->SetBinError(1,2.792129);
   hnumuCCinFV_stack_12->SetBinError(2,2.525907);
   hnumuCCinFV_stack_12->SetBinError(3,1.124216);
   hnumuCCinFV_stack_12->SetBinError(4,1.148495);
   hnumuCCinFV_stack_12->SetBinError(5,0.8710792);
   hnumuCCinFV_stack_12->SetBinError(6,0.9056577);
   hnumuCCinFV_stack_12->SetBinError(7,2.155769);
   hnumuCCinFV_stack_12->SetBinError(8,0.8042088);
   hnumuCCinFV_stack_12->SetBinError(9,0.9062375);
   hnumuCCinFV_stack_12->SetBinError(10,1.295889);
   hnumuCCinFV_stack_12->SetBinError(11,0.9130987);
   hnumuCCinFV_stack_12->SetBinError(12,0.756173);
   hnumuCCinFV_stack_12->SetBinError(13,0.6214735);
   hnumuCCinFV_stack_12->SetBinError(14,0.7220495);
   hnumuCCinFV_stack_12->SetBinError(15,0.2844576);
   hnumuCCinFV_stack_12->SetBinError(16,0.7342197);
   hnumuCCinFV_stack_12->SetBinError(17,0.4696419);
   hnumuCCinFV_stack_12->SetBinError(18,0.5197486);
   hnumuCCinFV_stack_12->SetBinError(19,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(20,0.6098118);
   hnumuCCinFV_stack_12->SetBinError(21,0.4530784);
   hnumuCCinFV_stack_12->SetBinError(22,0.53308);
   hnumuCCinFV_stack_12->SetBinError(23,0.7327291);
   hnumuCCinFV_stack_12->SetBinError(24,0.48078);
   hnumuCCinFV_stack_12->SetBinError(25,2.046337);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(3,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(4,0.6195905);
   hnueCCinFV_stack_13->SetBinContent(5,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(6,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.7069596);
   hnueCCinFV_stack_13->SetBinContent(22,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,0.8786915);
   hnueCCinFV_stack_13->SetBinError(1,0.3025491);
   hnueCCinFV_stack_13->SetBinError(3,0.2463303);
   hnueCCinFV_stack_13->SetBinError(4,0.3585277);
   hnueCCinFV_stack_13->SetBinError(5,0.2781975);
   hnueCCinFV_stack_13->SetBinError(6,0.3397478);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.5353745);
   hnueCCinFV_stack_13->SetBinError(22,0.7431478);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,0.5459091);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__23->SetBinContent(1,199.2978);
   hmcerror__23->SetBinContent(2,72.65489);
   hmcerror__23->SetBinContent(3,64.57248);
   hmcerror__23->SetBinContent(4,61.50418);
   hmcerror__23->SetBinContent(5,61.19426);
   hmcerror__23->SetBinContent(6,54.6822);
   hmcerror__23->SetBinContent(7,53.30584);
   hmcerror__23->SetBinContent(8,44.4399);
   hmcerror__23->SetBinContent(9,36.11324);
   hmcerror__23->SetBinContent(10,33.5265);
   hmcerror__23->SetBinContent(11,27.63613);
   hmcerror__23->SetBinContent(12,26.76874);
   hmcerror__23->SetBinContent(13,21.858);
   hmcerror__23->SetBinContent(14,16.89821);
   hmcerror__23->SetBinContent(15,14.23191);
   hmcerror__23->SetBinContent(16,16.34942);
   hmcerror__23->SetBinContent(17,11.40568);
   hmcerror__23->SetBinContent(18,9.59938);
   hmcerror__23->SetBinContent(19,9.787513);
   hmcerror__23->SetBinContent(20,6.806833);
   hmcerror__23->SetBinContent(21,12.13724);
   hmcerror__23->SetBinContent(22,12.23414);
   hmcerror__23->SetBinContent(23,5.724825);
   hmcerror__23->SetBinContent(24,5.669293);
   hmcerror__23->SetBinContent(25,85.59918);
   hmcerror__23->SetBinError(1,48.21078);
   hmcerror__23->SetBinError(2,20.8386);
   hmcerror__23->SetBinError(3,20.21371);
   hmcerror__23->SetBinError(4,20.74976);
   hmcerror__23->SetBinError(5,18.23748);
   hmcerror__23->SetBinError(6,20.74456);
   hmcerror__23->SetBinError(7,19.66096);
   hmcerror__23->SetBinError(8,20.54731);
   hmcerror__23->SetBinError(9,16.52628);
   hmcerror__23->SetBinError(10,14.67527);
   hmcerror__23->SetBinError(11,13.07461);
   hmcerror__23->SetBinError(12,26.22009);
   hmcerror__23->SetBinError(13,11.84806);
   hmcerror__23->SetBinError(14,8.913989);
   hmcerror__23->SetBinError(15,9.863117);
   hmcerror__23->SetBinError(16,9.554148);
   hmcerror__23->SetBinError(17,6.370983);
   hmcerror__23->SetBinError(18,7.330472);
   hmcerror__23->SetBinError(19,6.773431);
   hmcerror__23->SetBinError(20,5.977326);
   hmcerror__23->SetBinError(21,8.379742);
   hmcerror__23->SetBinError(22,9.840012);
   hmcerror__23->SetBinError(23,10.55652);
   hmcerror__23->SetBinError(24,7.647898);
   hmcerror__23->SetBinError(25,32.52847);
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
   Double_t _fy3029[24] = {
   175,
   61,
   70,
   69,
   57,
   45,
   52,
   39,
   25,
   40,
   32,
   29,
   15,
   14,
   22,
   11,
   11,
   7,
   11,
   11,
   8,
   7,
   7,
   6};
   Double_t _felx3029[24] = {
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
   Double_t _fely3029[24] = {
   13.22876,
   7.9383,
   8.4925,
   8.4327,
   7.679,
   6.8416,
   7.3419,
   6.3813,
   5.1474,
   6.4604,
   5.7977,
   5.5285,
   4.0385,
   3.9102,
   4.8417,
   3.4975,
   3.4975,
   2.85954,
   3.4975,
   3.4975,
   3.0307,
   2.85954,
   2.85954,
   2.67925};
   Double_t _fehx3029[24] = {
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
   Double_t _fehy3029[24] = {
   13.22876,
   7.7354,
   8.2902,
   8.2304,
   7.4757,
   6.637,
   7.1381,
   6.1757,
   4.9374,
   6.2549,
   5.5904,
   5.3201,
   3.8197,
   3.6898,
   4.6299,
   3.27,
   3.27,
   2.61053,
   3.27,
   3.27,
   2.7896,
   2.61053,
   2.61053,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,99);
   Graph_Graph3029->SetMinimum(2.988675);
   Graph_Graph3029->SetMaximum(206.7196);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.1/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 824.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 30.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 180.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 18.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 181.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  126.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  32.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 171.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 33.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 86.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[24] = {
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
   Double_t _fely3030[24] = {
   0.2419032,
   0.2868162,
   0.313039,
   0.3373716,
   0.298026,
   0.3793659,
   0.3688331,
   0.4623619,
   0.4576238,
   0.4377215,
   0.4730983,
   0.9795038,
   0.542047,
   0.5275108,
   0.6930281,
   0.5843724,
   0.5585799,
   0.7636401,
   0.6920482,
   0.8781362,
   0.6904161,
   0.8043074,
   1.84399,
   1.349004};
   Double_t _fehx3030[24] = {
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
   Double_t _fehy3030[24] = {
   0.2419032,
   0.2868162,
   0.313039,
   0.3373716,
   0.298026,
   0.3793659,
   0.3688331,
   0.4623619,
   0.4576238,
   0.4377215,
   0.4730983,
   0.9795038,
   0.542047,
   0.5275108,
   0.6930281,
   0.5843724,
   0.5585799,
   0.7636401,
   0.6920482,
   0.8781362,
   0.6904161,
   0.8043074,
   1.84399,
   1.349004};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,99);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
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
   Double_t _fely3031[24] = {
   0.1584877,
   0.173918,
   0.1875645,
   0.1752264,
   0.1830757,
   0.1890676,
   0.1853873,
   0.1889656,
   0.1893519,
   0.2109242,
   0.2047267,
   0.1863189,
   0.2130951,
   0.2182684,
   0.2456354,
   0.1906559,
   0.2371043,
   0.2583625,
   0.2348863,
   0.2749002,
   0.2362998,
   0.2342546,
   0.3318731,
   0.3581019};
   Double_t _fehx3031[24] = {
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
   Double_t _fehy3031[24] = {
   0.1584877,
   0.173918,
   0.1875645,
   0.1752264,
   0.1830757,
   0.1890676,
   0.1853873,
   0.1889656,
   0.1893519,
   0.2109242,
   0.2047267,
   0.1863189,
   0.2130951,
   0.2182684,
   0.2456354,
   0.1906559,
   0.2371043,
   0.2583625,
   0.2348863,
   0.2749002,
   0.2362998,
   0.2342546,
   0.3318731,
   0.3581019};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,99);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
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
   Double_t _fy3032[24] = {
   0.8780829,
   0.8395856,
   1.084053,
   1.121875,
   0.9314599,
   0.8229369,
   0.9755028,
   0.8775898,
   0.6922669,
   1.193086,
   1.157904,
   1.083353,
   0.6862475,
   0.82849,
   1.545822,
   0.6728069,
   0.9644319,
   0.7292137,
   1.123881,
   1.616023,
   0.6591287,
   0.5721692,
   1.222745,
   1.058333};
   Double_t _felx3032[24] = {
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
   Double_t _fely3032[24] = {
   0.06637682,
   0.1092604,
   0.1315189,
   0.1371077,
   0.1254856,
   0.1251157,
   0.1377316,
   0.1435939,
   0.142535,
   0.1926953,
   0.209787,
   0.2065282,
   0.1847607,
   0.2313973,
   0.3402002,
   0.213922,
   0.3066455,
   0.297888,
   0.3573431,
   0.5138219,
   0.2497027,
   0.2337344,
   0.4994982,
   0.4725898};
   Double_t _fehx3032[24] = {
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
   Double_t _fehy3032[24] = {
   0.06637682,
   0.1064677,
   0.128386,
   0.1338185,
   0.1221634,
   0.121374,
   0.1339084,
   0.1389675,
   0.1367199,
   0.1865658,
   0.2022859,
   0.198743,
   0.1747506,
   0.2183545,
   0.3253182,
   0.2000071,
   0.2866993,
   0.2719478,
   0.3340992,
   0.4803996,
   0.2298382,
   0.2133807,
   0.4560017,
   0.4266105};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,99);
   Graph_Graph3032->SetMinimum(0.162636);
   Graph_Graph3032->SetMaximum(2.272222);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_gap_low_all",24,0,90);

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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
