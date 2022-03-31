void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Thu Mar 31 00:19:47 2022) by ROOT version 6.14/06
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-27.69231,-1.099633,203.0769,92.65855);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hmc__7->SetBinContent(1,13.25863);
   hmc__7->SetBinContent(2,33.33069);
   hmc__7->SetBinContent(3,48.7261);
   hmc__7->SetBinContent(4,54.35273);
   hmc__7->SetBinContent(5,54.98165);
   hmc__7->SetBinContent(6,48.60912);
   hmc__7->SetBinContent(7,49.07539);
   hmc__7->SetBinContent(8,43.32106);
   hmc__7->SetBinContent(9,40.61184);
   hmc__7->SetBinContent(10,32.60597);
   hmc__7->SetBinContent(11,28.24149);
   hmc__7->SetBinContent(12,26.66826);
   hmc__7->SetBinContent(13,21.28909);
   hmc__7->SetBinContent(14,17.75917);
   hmc__7->SetBinContent(15,18.32119);
   hmc__7->SetBinContent(16,17.71618);
   hmc__7->SetBinContent(17,16.0051);
   hmc__7->SetBinContent(18,13.38192);
   hmc__7->SetBinContent(19,14.23181);
   hmc__7->SetBinContent(20,12.5321);
   hmc__7->SetBinContent(21,9.217999);
   hmc__7->SetBinContent(22,9.200483);
   hmc__7->SetBinContent(23,5.729421);
   hmc__7->SetBinContent(24,1.870448);
   hmc__7->SetBinError(1,4.440388);
   hmc__7->SetBinError(2,9.194812);
   hmc__7->SetBinError(3,11.18314);
   hmc__7->SetBinError(4,11.36915);
   hmc__7->SetBinError(5,12.1407);
   hmc__7->SetBinError(6,11.98022);
   hmc__7->SetBinError(7,12.33443);
   hmc__7->SetBinError(8,11.05509);
   hmc__7->SetBinError(9,10.07568);
   hmc__7->SetBinError(10,8.400902);
   hmc__7->SetBinError(11,7.140469);
   hmc__7->SetBinError(12,6.673008);
   hmc__7->SetBinError(13,7.245771);
   hmc__7->SetBinError(14,4.919535);
   hmc__7->SetBinError(15,4.698932);
   hmc__7->SetBinError(16,4.709982);
   hmc__7->SetBinError(17,4.214386);
   hmc__7->SetBinError(18,3.871622);
   hmc__7->SetBinError(19,5.237617);
   hmc__7->SetBinError(20,4.838869);
   hmc__7->SetBinError(21,3.314761);
   hmc__7->SetBinError(22,3.030278);
   hmc__7->SetBinError(23,2.661722);
   hmc__7->SetBinError(24,1.241395);
   hmc__7->SetBinError(25,0.125509);
   hmc__7->SetMinimum(-1.099633);
   hmc__7->SetMaximum(87.97064);
   hmc__7->SetEntries(622.1566);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetLabelSize(0.035);
   hmc__7->GetXaxis()->SetTitleSize(0.035);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetLabelSize(0.035);
   hmc__7->GetZaxis()->SetTitleSize(0.035);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,0,180);
   hs3_stack_3->SetMinimum(-1.084988e-09);
   hs3_stack_3->SetMaximum(57.73073);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hbadmatch_stack_1->SetBinContent(1,0.3063874);
   hbadmatch_stack_1->SetBinContent(2,0.8216732);
   hbadmatch_stack_1->SetBinContent(3,0.9930453);
   hbadmatch_stack_1->SetBinContent(4,1.085363);
   hbadmatch_stack_1->SetBinContent(5,1.033861);
   hbadmatch_stack_1->SetBinContent(6,0.9553894);
   hbadmatch_stack_1->SetBinContent(7,0.6941842);
   hbadmatch_stack_1->SetBinContent(8,1.11187);
   hbadmatch_stack_1->SetBinContent(9,0.5101864);
   hbadmatch_stack_1->SetBinContent(10,0.8501939);
   hbadmatch_stack_1->SetBinContent(11,0.6804798);
   hbadmatch_stack_1->SetBinContent(12,1.193573);
   hbadmatch_stack_1->SetBinContent(13,0.34506);
   hbadmatch_stack_1->SetBinContent(14,0.4813761);
   hbadmatch_stack_1->SetBinContent(15,0.6990499);
   hbadmatch_stack_1->SetBinContent(16,0.4238371);
   hbadmatch_stack_1->SetBinContent(17,0.3425559);
   hbadmatch_stack_1->SetBinContent(18,0.1129571);
   hbadmatch_stack_1->SetBinContent(19,0.2095878);
   hbadmatch_stack_1->SetBinContent(20,0.2733256);
   hbadmatch_stack_1->SetBinContent(21,0.2285128);
   hbadmatch_stack_1->SetBinContent(22,0.1878309);
   hbadmatch_stack_1->SetBinContent(23,0.1927164);
   hbadmatch_stack_1->SetBinError(1,0.2690447);
   hbadmatch_stack_1->SetBinError(2,0.3746496);
   hbadmatch_stack_1->SetBinError(3,0.2528587);
   hbadmatch_stack_1->SetBinError(4,0.244163);
   hbadmatch_stack_1->SetBinError(5,0.2405007);
   hbadmatch_stack_1->SetBinError(6,0.2254388);
   hbadmatch_stack_1->SetBinError(7,0.1887361);
   hbadmatch_stack_1->SetBinError(8,0.2441106);
   hbadmatch_stack_1->SetBinError(9,0.1533861);
   hbadmatch_stack_1->SetBinError(10,0.2136104);
   hbadmatch_stack_1->SetBinError(11,0.1914357);
   hbadmatch_stack_1->SetBinError(12,0.4212852);
   hbadmatch_stack_1->SetBinError(13,0.1359954);
   hbadmatch_stack_1->SetBinError(14,0.1555999);
   hbadmatch_stack_1->SetBinError(15,0.2007774);
   hbadmatch_stack_1->SetBinError(16,0.1436619);
   hbadmatch_stack_1->SetBinError(17,0.134981);
   hbadmatch_stack_1->SetBinError(18,0.0669989);
   hbadmatch_stack_1->SetBinError(19,0.09936553);
   hbadmatch_stack_1->SetBinError(20,0.1252177);
   hbadmatch_stack_1->SetBinError(21,0.110158);
   hbadmatch_stack_1->SetBinError(22,0.1080764);
   hbadmatch_stack_1->SetBinError(23,0.09297517);
   hbadmatch_stack_1->SetEntries(370);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1452;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetXaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetYaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetYaxis()->SetTitleOffset(0);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetZaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hext_stack_2->SetBinContent(1,0.6462268);
   hext_stack_2->SetBinContent(2,0.8057348);
   hext_stack_2->SetBinContent(3,1.847328);
   hext_stack_2->SetBinContent(4,2.419936);
   hext_stack_2->SetBinContent(5,3.56242);
   hext_stack_2->SetBinContent(6,3.53788);
   hext_stack_2->SetBinContent(7,4.321806);
   hext_stack_2->SetBinContent(8,3.672848);
   hext_stack_2->SetBinContent(9,4.009597);
   hext_stack_2->SetBinContent(10,3.32383);
   hext_stack_2->SetBinContent(11,3.090702);
   hext_stack_2->SetBinContent(12,3.237941);
   hext_stack_2->SetBinContent(13,1.923679);
   hext_stack_2->SetBinContent(14,1.935949);
   hext_stack_2->SetBinContent(15,1.014322);
   hext_stack_2->SetBinContent(16,2.569906);
   hext_stack_2->SetBinContent(17,1.862329);
   hext_stack_2->SetBinContent(18,1.105674);
   hext_stack_2->SetBinContent(19,0.8180047);
   hext_stack_2->SetBinContent(20,0.7689253);
   hext_stack_2->SetBinContent(21,0.3217476);
   hext_stack_2->SetBinContent(22,0.833006);
   hext_stack_2->SetBinContent(23,0.09815882);
   hext_stack_2->SetBinContent(24,0.02453971);
   hext_stack_2->SetBinError(1,0.3456354);
   hext_stack_2->SetBinError(2,0.3484551);
   hext_stack_2->SetBinError(3,0.5318967);
   hext_stack_2->SetBinError(4,0.6336203);
   hext_stack_2->SetBinError(5,0.7754895);
   hext_stack_2->SetBinError(6,0.7752954);
   hext_stack_2->SetBinError(7,0.8714439);
   hext_stack_2->SetBinError(8,0.7763626);
   hext_stack_2->SetBinError(9,0.825365);
   hext_stack_2->SetBinError(10,0.7239476);
   hext_stack_2->SetBinError(11,0.7219693);
   hext_stack_2->SetBinError(12,0.7232193);
   hext_stack_2->SetBinError(13,0.5665944);
   hext_stack_2->SetBinError(14,0.5667272);
   hext_stack_2->SetBinError(15,0.3521084);
   hext_stack_2->SetBinError(16,0.6636965);
   hext_stack_2->SetBinError(17,0.5659297);
   hext_stack_2->SetBinError(18,0.4466068);
   hext_stack_2->SetBinError(19,0.3486711);
   hext_stack_2->SetBinError(20,0.3478065);
   hext_stack_2->SetBinError(21,0.2027956);
   hext_stack_2->SetBinError(22,0.3986651);
   hext_stack_2->SetBinError(23,0.03470438);
   hext_stack_2->SetBinError(24,0.01735219);
   hext_stack_2->SetEntries(893);

   ci = 1453;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   hext_stack_2->SetLineColor(ci);
   hext_stack_2->GetXaxis()->SetLabelFont(42);
   hext_stack_2->GetXaxis()->SetLabelSize(0.035);
   hext_stack_2->GetXaxis()->SetTitleSize(0.035);
   hext_stack_2->GetXaxis()->SetTitleFont(42);
   hext_stack_2->GetYaxis()->SetLabelFont(42);
   hext_stack_2->GetYaxis()->SetLabelSize(0.035);
   hext_stack_2->GetYaxis()->SetTitleSize(0.035);
   hext_stack_2->GetYaxis()->SetTitleOffset(0);
   hext_stack_2->GetYaxis()->SetTitleFont(42);
   hext_stack_2->GetZaxis()->SetLabelFont(42);
   hext_stack_2->GetZaxis()->SetLabelSize(0.035);
   hext_stack_2->GetZaxis()->SetTitleSize(0.035);
   hext_stack_2->GetZaxis()->SetTitleFont(42);
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hdirt_stack_3->SetBinContent(1,0.0951677);
   hdirt_stack_3->SetBinContent(2,0.1668185);
   hdirt_stack_3->SetBinContent(3,0.4212111);
   hdirt_stack_3->SetBinContent(4,0.3831713);
   hdirt_stack_3->SetBinContent(5,0.4015135);
   hdirt_stack_3->SetBinContent(6,0.5066528);
   hdirt_stack_3->SetBinContent(7,0.5250982);
   hdirt_stack_3->SetBinContent(8,0.5479087);
   hdirt_stack_3->SetBinContent(9,0.5019112);
   hdirt_stack_3->SetBinContent(10,0.4103823);
   hdirt_stack_3->SetBinContent(11,0.08567724);
   hdirt_stack_3->SetBinContent(12,0.1316823);
   hdirt_stack_3->SetBinContent(13,0.02465885);
   hdirt_stack_3->SetBinContent(14,0.4799128);
   hdirt_stack_3->SetBinContent(15,0.2358724);
   hdirt_stack_3->SetBinContent(16,0.1419831);
   hdirt_stack_3->SetBinContent(17,0.1655057);
   hdirt_stack_3->SetBinContent(18,0.2020511);
   hdirt_stack_3->SetBinContent(19,0.1314889);
   hdirt_stack_3->SetBinContent(20,0.06074426);
   hdirt_stack_3->SetBinContent(21,0.1704892);
   hdirt_stack_3->SetBinContent(22,0.1467181);
   hdirt_stack_3->SetBinContent(23,0.1850559);
   hdirt_stack_3->SetBinError(1,0.06273184);
   hdirt_stack_3->SetBinError(2,0.07846578);
   hdirt_stack_3->SetBinError(3,0.1284204);
   hdirt_stack_3->SetBinError(4,0.2153012);
   hdirt_stack_3->SetBinError(5,0.1169078);
   hdirt_stack_3->SetBinError(6,0.1431046);
   hdirt_stack_3->SetBinError(7,0.155911);
   hdirt_stack_3->SetBinError(8,0.1560965);
   hdirt_stack_3->SetBinError(9,0.1413481);
   hdirt_stack_3->SetBinError(10,0.1342011);
   hdirt_stack_3->SetBinError(11,0.04794239);
   hdirt_stack_3->SetBinError(12,0.0654577);
   hdirt_stack_3->SetBinError(13,0.0142368);
   hdirt_stack_3->SetBinError(14,0.3092692);
   hdirt_stack_3->SetBinError(15,0.09797387);
   hdirt_stack_3->SetBinError(16,0.06625922);
   hdirt_stack_3->SetBinError(17,0.07831714);
   hdirt_stack_3->SetBinError(18,0.09383936);
   hdirt_stack_3->SetBinError(19,0.07204894);
   hdirt_stack_3->SetBinError(20,0.04571187);
   hdirt_stack_3->SetBinError(21,0.08504731);
   hdirt_stack_3->SetBinError(22,0.07975998);
   hdirt_stack_3->SetBinError(23,0.08879938);
   hdirt_stack_3->SetEntries(224);

   ci = 1454;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetXaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetYaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetYaxis()->SetTitleOffset(0);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetZaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);
   houtFV_stack_4->SetBinContent(1,0.7553159);
   houtFV_stack_4->SetBinContent(2,2.306328);
   houtFV_stack_4->SetBinContent(3,4.239532);
   houtFV_stack_4->SetBinContent(4,6.547116);
   houtFV_stack_4->SetBinContent(5,5.321677);
   houtFV_stack_4->SetBinContent(6,5.116197);
   houtFV_stack_4->SetBinContent(7,5.959949);
   houtFV_stack_4->SetBinContent(8,4.145622);
   houtFV_stack_4->SetBinContent(9,3.826308);
   houtFV_stack_4->SetBinContent(10,2.655039);
   houtFV_stack_4->SetBinContent(11,2.258206);
   houtFV_stack_4->SetBinContent(12,2.245126);
   houtFV_stack_4->SetBinContent(13,1.999119);
   houtFV_stack_4->SetBinContent(14,1.746037);
   houtFV_stack_4->SetBinContent(15,1.990032);
   houtFV_stack_4->SetBinContent(16,1.709232);
   houtFV_stack_4->SetBinContent(17,1.646585);
   houtFV_stack_4->SetBinContent(18,1.570889);
   houtFV_stack_4->SetBinContent(19,1.862215);
   houtFV_stack_4->SetBinContent(20,1.417629);
   houtFV_stack_4->SetBinContent(21,1.400872);
   houtFV_stack_4->SetBinContent(22,1.210229);
   houtFV_stack_4->SetBinContent(23,0.9366082);
   houtFV_stack_4->SetBinContent(24,0.2368697);
   houtFV_stack_4->SetBinError(1,0.1927861);
   houtFV_stack_4->SetBinError(2,0.3535669);
   houtFV_stack_4->SetBinError(3,0.4740328);
   houtFV_stack_4->SetBinError(4,0.6088554);
   houtFV_stack_4->SetBinError(5,0.5406145);
   houtFV_stack_4->SetBinError(6,0.5225524);
   houtFV_stack_4->SetBinError(7,0.5773917);
   houtFV_stack_4->SetBinError(8,0.4734429);
   houtFV_stack_4->SetBinError(9,0.4700285);
   houtFV_stack_4->SetBinError(10,0.3767948);
   houtFV_stack_4->SetBinError(11,0.3516853);
   houtFV_stack_4->SetBinError(12,0.3518515);
   houtFV_stack_4->SetBinError(13,0.3266285);
   houtFV_stack_4->SetBinError(14,0.3152019);
   houtFV_stack_4->SetBinError(15,0.334121);
   houtFV_stack_4->SetBinError(16,0.3096375);
   houtFV_stack_4->SetBinError(17,0.291604);
   houtFV_stack_4->SetBinError(18,0.2986934);
   houtFV_stack_4->SetBinError(19,0.3276981);
   houtFV_stack_4->SetBinError(20,0.281154);
   houtFV_stack_4->SetBinError(21,0.2698443);
   houtFV_stack_4->SetBinError(22,0.2534584);
   houtFV_stack_4->SetBinError(23,0.2280868);
   houtFV_stack_4->SetBinError(24,0.1102997);
   houtFV_stack_4->SetEntries(1630);

   ci = 1455;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetXaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetYaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetYaxis()->SetTitleOffset(0);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetZaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hNCpi0inFV_stack_5->SetBinContent(1,7.128188);
   hNCpi0inFV_stack_5->SetBinContent(2,18.70033);
   hNCpi0inFV_stack_5->SetBinContent(3,26.70308);
   hNCpi0inFV_stack_5->SetBinContent(4,28.33427);
   hNCpi0inFV_stack_5->SetBinContent(5,29.369);
   hNCpi0inFV_stack_5->SetBinContent(6,25.99804);
   hNCpi0inFV_stack_5->SetBinContent(7,24.51468);
   hNCpi0inFV_stack_5->SetBinContent(8,21.90014);
   hNCpi0inFV_stack_5->SetBinContent(9,20.3168);
   hNCpi0inFV_stack_5->SetBinContent(10,16.03782);
   hNCpi0inFV_stack_5->SetBinContent(11,14.2925);
   hNCpi0inFV_stack_5->SetBinContent(12,12.73835);
   hNCpi0inFV_stack_5->SetBinContent(13,10.44795);
   hNCpi0inFV_stack_5->SetBinContent(14,8.835295);
   hNCpi0inFV_stack_5->SetBinContent(15,8.705997);
   hNCpi0inFV_stack_5->SetBinContent(16,7.532605);
   hNCpi0inFV_stack_5->SetBinContent(17,7.627581);
   hNCpi0inFV_stack_5->SetBinContent(18,6.872997);
   hNCpi0inFV_stack_5->SetBinContent(19,6.56142);
   hNCpi0inFV_stack_5->SetBinContent(20,6.583332);
   hNCpi0inFV_stack_5->SetBinContent(21,4.542551);
   hNCpi0inFV_stack_5->SetBinContent(22,3.892104);
   hNCpi0inFV_stack_5->SetBinContent(23,2.314106);
   hNCpi0inFV_stack_5->SetBinContent(24,0.6359025);
   hNCpi0inFV_stack_5->SetBinError(1,0.6266577);
   hNCpi0inFV_stack_5->SetBinError(2,1.001817);
   hNCpi0inFV_stack_5->SetBinError(3,1.199156);
   hNCpi0inFV_stack_5->SetBinError(4,1.227838);
   hNCpi0inFV_stack_5->SetBinError(5,1.264914);
   hNCpi0inFV_stack_5->SetBinError(6,1.189009);
   hNCpi0inFV_stack_5->SetBinError(7,1.146981);
   hNCpi0inFV_stack_5->SetBinError(8,1.094015);
   hNCpi0inFV_stack_5->SetBinError(9,1.047685);
   hNCpi0inFV_stack_5->SetBinError(10,0.9344329);
   hNCpi0inFV_stack_5->SetBinError(11,0.8796146);
   hNCpi0inFV_stack_5->SetBinError(12,0.8250352);
   hNCpi0inFV_stack_5->SetBinError(13,0.746306);
   hNCpi0inFV_stack_5->SetBinError(14,0.6783769);
   hNCpi0inFV_stack_5->SetBinError(15,0.6794081);
   hNCpi0inFV_stack_5->SetBinError(16,0.6355734);
   hNCpi0inFV_stack_5->SetBinError(17,0.6507826);
   hNCpi0inFV_stack_5->SetBinError(18,0.6067172);
   hNCpi0inFV_stack_5->SetBinError(19,0.5932441);
   hNCpi0inFV_stack_5->SetBinError(20,0.5985944);
   hNCpi0inFV_stack_5->SetBinError(21,0.4969238);
   hNCpi0inFV_stack_5->SetBinError(22,0.466154);
   hNCpi0inFV_stack_5->SetBinError(23,0.3564567);
   hNCpi0inFV_stack_5->SetBinError(24,0.180269);
   hNCpi0inFV_stack_5->SetEntries(8416);

   ci = 1456;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleOffset(0);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hCCpi0inFV_stack_6->SetBinContent(1,2.94929);
   hCCpi0inFV_stack_6->SetBinContent(2,6.153539);
   hCCpi0inFV_stack_6->SetBinContent(3,9.753734);
   hCCpi0inFV_stack_6->SetBinContent(4,9.239189);
   hCCpi0inFV_stack_6->SetBinContent(5,9.319906);
   hCCpi0inFV_stack_6->SetBinContent(6,7.529456);
   hCCpi0inFV_stack_6->SetBinContent(7,8.484488);
   hCCpi0inFV_stack_6->SetBinContent(8,6.468154);
   hCCpi0inFV_stack_6->SetBinContent(9,5.784439);
   hCCpi0inFV_stack_6->SetBinContent(10,4.774997);
   hCCpi0inFV_stack_6->SetBinContent(11,4.24193);
   hCCpi0inFV_stack_6->SetBinContent(12,3.473503);
   hCCpi0inFV_stack_6->SetBinContent(13,3.454223);
   hCCpi0inFV_stack_6->SetBinContent(14,2.260128);
   hCCpi0inFV_stack_6->SetBinContent(15,3.289021);
   hCCpi0inFV_stack_6->SetBinContent(16,3.025472);
   hCCpi0inFV_stack_6->SetBinContent(17,1.942761);
   hCCpi0inFV_stack_6->SetBinContent(18,2.374268);
   hCCpi0inFV_stack_6->SetBinContent(19,2.926249);
   hCCpi0inFV_stack_6->SetBinContent(20,2.125504);
   hCCpi0inFV_stack_6->SetBinContent(21,1.220804);
   hCCpi0inFV_stack_6->SetBinContent(22,1.646784);
   hCCpi0inFV_stack_6->SetBinContent(23,1.416434);
   hCCpi0inFV_stack_6->SetBinContent(24,0.501111);
   hCCpi0inFV_stack_6->SetBinError(1,0.3991611);
   hCCpi0inFV_stack_6->SetBinError(2,0.5742319);
   hCCpi0inFV_stack_6->SetBinError(3,0.7215916);
   hCCpi0inFV_stack_6->SetBinError(4,0.7045584);
   hCCpi0inFV_stack_6->SetBinError(5,0.7210478);
   hCCpi0inFV_stack_6->SetBinError(6,0.6281338);
   hCCpi0inFV_stack_6->SetBinError(7,0.6762229);
   hCCpi0inFV_stack_6->SetBinError(8,0.5828092);
   hCCpi0inFV_stack_6->SetBinError(9,0.5539252);
   hCCpi0inFV_stack_6->SetBinError(10,0.5177083);
   hCCpi0inFV_stack_6->SetBinError(11,0.4836884);
   hCCpi0inFV_stack_6->SetBinError(12,0.4346819);
   hCCpi0inFV_stack_6->SetBinError(13,0.4430131);
   hCCpi0inFV_stack_6->SetBinError(14,0.3498317);
   hCCpi0inFV_stack_6->SetBinError(15,0.4290204);
   hCCpi0inFV_stack_6->SetBinError(16,0.4082361);
   hCCpi0inFV_stack_6->SetBinError(17,0.3272861);
   hCCpi0inFV_stack_6->SetBinError(18,0.3659586);
   hCCpi0inFV_stack_6->SetBinError(19,0.4044982);
   hCCpi0inFV_stack_6->SetBinError(20,0.3416497);
   hCCpi0inFV_stack_6->SetBinError(21,0.2536603);
   hCCpi0inFV_stack_6->SetBinError(22,0.3001667);
   hCCpi0inFV_stack_6->SetBinError(23,0.2829378);
   hCCpi0inFV_stack_6->SetBinError(24,0.1726963);
   hCCpi0inFV_stack_6->SetEntries(2725);

   ci = 1457;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleOffset(0);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs3->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hNCinFV_stack_7->SetBinContent(1,0.3370765);
   hNCinFV_stack_7->SetBinContent(2,1.916868);
   hNCinFV_stack_7->SetBinContent(3,2.104532);
   hNCinFV_stack_7->SetBinContent(4,2.689434);
   hNCinFV_stack_7->SetBinContent(5,2.922714);
   hNCinFV_stack_7->SetBinContent(6,2.106327);
   hNCinFV_stack_7->SetBinContent(7,1.295511);
   hNCinFV_stack_7->SetBinContent(8,1.382967);
   hNCinFV_stack_7->SetBinContent(9,1.791161);
   hNCinFV_stack_7->SetBinContent(10,0.9329337);
   hNCinFV_stack_7->SetBinContent(11,0.6869032);
   hNCinFV_stack_7->SetBinContent(12,0.7725652);
   hNCinFV_stack_7->SetBinContent(13,1.02398);
   hNCinFV_stack_7->SetBinContent(14,0.26237);
   hNCinFV_stack_7->SetBinContent(15,0.7088143);
   hNCinFV_stack_7->SetBinContent(16,0.8946831);
   hNCinFV_stack_7->SetBinContent(17,0.6960641);
   hNCinFV_stack_7->SetBinContent(18,0.5119899);
   hNCinFV_stack_7->SetBinContent(19,0.6104021);
   hNCinFV_stack_7->SetBinContent(20,0.3498267);
   hNCinFV_stack_7->SetBinContent(21,0.5374554);
   hNCinFV_stack_7->SetBinContent(22,0.6833139);
   hNCinFV_stack_7->SetBinContent(23,0.2860757);
   hNCinFV_stack_7->SetBinContent(24,0.2368697);
   hNCinFV_stack_7->SetBinError(1,0.1284224);
   hNCinFV_stack_7->SetBinError(2,0.3220322);
   hNCinFV_stack_7->SetBinError(3,0.3349549);
   hNCinFV_stack_7->SetBinError(4,0.3795278);
   hNCinFV_stack_7->SetBinError(5,0.4028137);
   hNCinFV_stack_7->SetBinError(6,0.3304073);
   hNCinFV_stack_7->SetBinError(7,0.2614281);
   hNCinFV_stack_7->SetBinError(8,0.2692738);
   hNCinFV_stack_7->SetBinError(9,0.3147274);
   hNCinFV_stack_7->SetBinError(10,0.2269961);
   hNCinFV_stack_7->SetBinError(11,0.1820636);
   hNCinFV_stack_7->SetBinError(12,0.2008398);
   hNCinFV_stack_7->SetBinError(13,0.2227992);
   hNCinFV_stack_7->SetBinError(14,0.1117638);
   hNCinFV_stack_7->SetBinError(15,0.1988059);
   hNCinFV_stack_7->SetBinError(16,0.2259193);
   hNCinFV_stack_7->SetBinError(17,0.1983966);
   hNCinFV_stack_7->SetBinError(18,0.1575428);
   hNCinFV_stack_7->SetBinError(19,0.1793649);
   hNCinFV_stack_7->SetBinError(20,0.1290537);
   hNCinFV_stack_7->SetBinError(21,0.1678503);
   hNCinFV_stack_7->SetBinError(22,0.1979865);
   hNCinFV_stack_7->SetBinError(23,0.1258651);
   hNCinFV_stack_7->SetBinError(24,0.1102997);
   hNCinFV_stack_7->SetEntries(696);

   ci = 1458;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetXaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetYaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetYaxis()->SetTitleOffset(0);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetZaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs3->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hnumuCCinFV_stack_8->SetBinContent(1,0.6794837);
   hnumuCCinFV_stack_8->SetBinContent(2,1.582796);
   hnumuCCinFV_stack_8->SetBinContent(3,2.239626);
   hnumuCCinFV_stack_8->SetBinContent(4,3.505473);
   hnumuCCinFV_stack_8->SetBinContent(5,2.787446);
   hnumuCCinFV_stack_8->SetBinContent(6,2.732213);
   hnumuCCinFV_stack_8->SetBinContent(7,2.973445);
   hnumuCCinFV_stack_8->SetBinContent(8,3.967629);
   hnumuCCinFV_stack_8->SetBinContent(9,3.678936);
   hnumuCCinFV_stack_8->SetBinContent(10,3.515147);
   hnumuCCinFV_stack_8->SetBinContent(11,2.843137);
   hnumuCCinFV_stack_8->SetBinContent(12,2.875514);
   hnumuCCinFV_stack_8->SetBinContent(13,1.995709);
   hnumuCCinFV_stack_8->SetBinContent(14,1.696149);
   hnumuCCinFV_stack_8->SetBinContent(15,1.554164);
   hnumuCCinFV_stack_8->SetBinContent(16,1.40571);
   hnumuCCinFV_stack_8->SetBinContent(17,1.721715);
   hnumuCCinFV_stack_8->SetBinContent(18,0.5388414);
   hnumuCCinFV_stack_8->SetBinContent(19,1.112443);
   hnumuCCinFV_stack_8->SetBinContent(20,0.8734042);
   hnumuCCinFV_stack_8->SetBinContent(21,0.7137192);
   hnumuCCinFV_stack_8->SetBinContent(22,0.5190219);
   hnumuCCinFV_stack_8->SetBinContent(23,0.3002653);
   hnumuCCinFV_stack_8->SetBinContent(24,0.2351556);
   hnumuCCinFV_stack_8->SetBinError(1,0.190293);
   hnumuCCinFV_stack_8->SetBinError(2,0.3021817);
   hnumuCCinFV_stack_8->SetBinError(3,0.3540595);
   hnumuCCinFV_stack_8->SetBinError(4,0.637235);
   hnumuCCinFV_stack_8->SetBinError(5,0.5960676);
   hnumuCCinFV_stack_8->SetBinError(6,0.3925826);
   hnumuCCinFV_stack_8->SetBinError(7,0.5232134);
   hnumuCCinFV_stack_8->SetBinError(8,0.6702897);
   hnumuCCinFV_stack_8->SetBinError(9,0.5343235);
   hnumuCCinFV_stack_8->SetBinError(10,0.5645495);
   hnumuCCinFV_stack_8->SetBinError(11,0.5036981);
   hnumuCCinFV_stack_8->SetBinError(12,0.585508);
   hnumuCCinFV_stack_8->SetBinError(13,0.389698);
   hnumuCCinFV_stack_8->SetBinError(14,0.3157426);
   hnumuCCinFV_stack_8->SetBinError(15,0.3237394);
   hnumuCCinFV_stack_8->SetBinError(16,0.3175817);
   hnumuCCinFV_stack_8->SetBinError(17,0.4896083);
   hnumuCCinFV_stack_8->SetBinError(18,0.1673687);
   hnumuCCinFV_stack_8->SetBinError(19,0.2645472);
   hnumuCCinFV_stack_8->SetBinError(20,0.2255951);
   hnumuCCinFV_stack_8->SetBinError(21,0.2063071);
   hnumuCCinFV_stack_8->SetBinError(22,0.1665888);
   hnumuCCinFV_stack_8->SetBinError(23,0.1334228);
   hnumuCCinFV_stack_8->SetBinError(24,0.1161583);
   hnumuCCinFV_stack_8->SetEntries(1072);

   ci = 1459;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleOffset(0);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hnueCCinFV_stack_9->SetBinContent(1,0.3614944);
   hnueCCinFV_stack_9->SetBinContent(2,0.8766088);
   hnueCCinFV_stack_9->SetBinContent(3,0.4240035);
   hnueCCinFV_stack_9->SetBinContent(4,0.1487855);
   hnueCCinFV_stack_9->SetBinContent(5,0.2631135);
   hnueCCinFV_stack_9->SetBinContent(6,0.1269595);
   hnueCCinFV_stack_9->SetBinContent(7,0.3062267);
   hnueCCinFV_stack_9->SetBinContent(8,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(9,0.1924905);
   hnueCCinFV_stack_9->SetBinContent(10,0.1056282);
   hnueCCinFV_stack_9->SetBinContent(11,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(13,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(14,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(15,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(16,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(18,0.0922511);
   hnueCCinFV_stack_9->SetBinContent(20,0.07940594);
   hnueCCinFV_stack_9->SetBinContent(21,0.08184811);
   hnueCCinFV_stack_9->SetBinContent(22,0.08147465);
   hnueCCinFV_stack_9->SetBinError(1,0.1425372);
   hnueCCinFV_stack_9->SetBinError(2,0.4896389);
   hnueCCinFV_stack_9->SetBinError(3,0.1624135);
   hnueCCinFV_stack_9->SetBinError(4,0.09741042);
   hnueCCinFV_stack_9->SetBinError(5,0.1248522);
   hnueCCinFV_stack_9->SetBinError(6,0.07011062);
   hnueCCinFV_stack_9->SetBinError(7,0.1273805);
   hnueCCinFV_stack_9->SetBinError(8,0.08761943);
   hnueCCinFV_stack_9->SetBinError(9,0.1138987);
   hnueCCinFV_stack_9->SetBinError(10,0.0564206);
   hnueCCinFV_stack_9->SetBinError(11,0.06195629);
   hnueCCinFV_stack_9->SetBinError(13,0.06325464);
   hnueCCinFV_stack_9->SetBinError(14,0.06195629);
   hnueCCinFV_stack_9->SetBinError(15,0.08761943);
   hnueCCinFV_stack_9->SetBinError(16,0.0127502);
   hnueCCinFV_stack_9->SetBinError(18,0.08050323);
   hnueCCinFV_stack_9->SetBinError(20,0.06404679);
   hnueCCinFV_stack_9->SetBinError(21,0.07026443);
   hnueCCinFV_stack_9->SetBinError(22,0.06495805);
   hnueCCinFV_stack_9->SetEntries(85);

   ci = 1460;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleOffset(0);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs3->Add(hnueCCinFV_stack_9,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);
   hmcerror__8->SetBinContent(1,13.25863);
   hmcerror__8->SetBinContent(2,33.33069);
   hmcerror__8->SetBinContent(3,48.7261);
   hmcerror__8->SetBinContent(4,54.35273);
   hmcerror__8->SetBinContent(5,54.98165);
   hmcerror__8->SetBinContent(6,48.60912);
   hmcerror__8->SetBinContent(7,49.07539);
   hmcerror__8->SetBinContent(8,43.32106);
   hmcerror__8->SetBinContent(9,40.61184);
   hmcerror__8->SetBinContent(10,32.60597);
   hmcerror__8->SetBinContent(11,28.24149);
   hmcerror__8->SetBinContent(12,26.66826);
   hmcerror__8->SetBinContent(13,21.28909);
   hmcerror__8->SetBinContent(14,17.75917);
   hmcerror__8->SetBinContent(15,18.32119);
   hmcerror__8->SetBinContent(16,17.71618);
   hmcerror__8->SetBinContent(17,16.0051);
   hmcerror__8->SetBinContent(18,13.38192);
   hmcerror__8->SetBinContent(19,14.23181);
   hmcerror__8->SetBinContent(20,12.5321);
   hmcerror__8->SetBinContent(21,9.217999);
   hmcerror__8->SetBinContent(22,9.200483);
   hmcerror__8->SetBinContent(23,5.729421);
   hmcerror__8->SetBinContent(24,1.870448);
   hmcerror__8->SetBinError(1,4.440388);
   hmcerror__8->SetBinError(2,9.194812);
   hmcerror__8->SetBinError(3,11.18314);
   hmcerror__8->SetBinError(4,11.36915);
   hmcerror__8->SetBinError(5,12.1407);
   hmcerror__8->SetBinError(6,11.98022);
   hmcerror__8->SetBinError(7,12.33443);
   hmcerror__8->SetBinError(8,11.05509);
   hmcerror__8->SetBinError(9,10.07568);
   hmcerror__8->SetBinError(10,8.400902);
   hmcerror__8->SetBinError(11,7.140469);
   hmcerror__8->SetBinError(12,6.673008);
   hmcerror__8->SetBinError(13,7.245771);
   hmcerror__8->SetBinError(14,4.919535);
   hmcerror__8->SetBinError(15,4.698932);
   hmcerror__8->SetBinError(16,4.709982);
   hmcerror__8->SetBinError(17,4.214386);
   hmcerror__8->SetBinError(18,3.871622);
   hmcerror__8->SetBinError(19,5.237617);
   hmcerror__8->SetBinError(20,4.838869);
   hmcerror__8->SetBinError(21,3.314761);
   hmcerror__8->SetBinError(22,3.030278);
   hmcerror__8->SetBinError(23,2.661722);
   hmcerror__8->SetBinError(24,1.241395);
   hmcerror__8->SetBinError(25,0.125509);
   hmcerror__8->SetEntries(622.1566);

   ci = TColor::GetColor("#666666");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetLabelSize(0.035);
   hmcerror__8->GetXaxis()->SetTitleSize(0.035);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetLabelSize(0.035);
   hmcerror__8->GetYaxis()->SetTitleSize(0.035);
   hmcerror__8->GetYaxis()->SetTitleOffset(0);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetLabelSize(0.035);
   hmcerror__8->GetZaxis()->SetTitleSize(0.035);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3009[24] = {
   13,
   30,
   35,
   49,
   37,
   44,
   35,
   39,
   24,
   19,
   26,
   24,
   27,
   15,
   13,
   15,
   13,
   11,
   10,
   11,
   9,
   7,
   5,
   3};
   Double_t _felx3009[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3009[24] = {
   3.77763,
   5.6197,
   6.0548,
   7.1318,
   6.2203,
   6.7671,
   6.0548,
   6.3813,
   5.0476,
   4.5151,
   5.2453,
   5.0476,
   5.3414,
   4.0385,
   3.77763,
   4.0385,
   3.77763,
   3.4975,
   3.34883,
   3.4975,
   3.19354,
   2.85954,
   2.48995,
   2.143368};
   Double_t _fehx3009[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3009[24] = {
   3.5552,
   5.4117,
   5.8483,
   6.9277,
   6.0141,
   6.5623,
   5.8483,
   6.1757,
   4.837,
   4.3011,
   5.0358,
   4.837,
   5.1322,
   3.8197,
   3.5552,
   3.8197,
   3.5552,
   3.27,
   3.1179,
   3.27,
   2.9582,
   2.61053,
   2.21064,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,198);
   Graph_Graph3009->SetMinimum(0.7709688);
   Graph_Graph3009->SetMaximum(61.43481);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.81#pm0.04(data err)#pm0.15(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.37/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 514.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 13.7","F");

   ci = 1452;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 47.8","F");

   ci = 1453;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

   ci = 1454;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 63.1","F");

   ci = 1455;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  320.6","F");

   ci = 1456;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 104.4","F");

   ci = 1457;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 25.7","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 46.0","F");

   ci = 1459;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 3.6","F");

   ci = 1460;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT2_bnb_10_kine_pio_costheta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-27.72,-0.5333333,203.28,2.133333);
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
   
   Double_t _fx3010[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3010[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3010[24] = {
   0.3349055,
   0.2758662,
   0.2295104,
   0.2091734,
   0.2208136,
   0.2464604,
   0.2513363,
   0.2551898,
   0.248097,
   0.2576492,
   0.2528361,
   0.2502228,
   0.3403514,
   0.2770138,
   0.2564753,
   0.2658577,
   0.2633152,
   0.2893174,
   0.3680218,
   0.3861181,
   0.3595966,
   0.3293608,
   0.4645709,
   0.6636884};
   Double_t _fehx3010[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3010[24] = {
   0.3349055,
   0.2758662,
   0.2295104,
   0.2091734,
   0.2208136,
   0.2464604,
   0.2513363,
   0.2551898,
   0.248097,
   0.2576492,
   0.2528361,
   0.2502228,
   0.3403514,
   0.2770138,
   0.2564753,
   0.2658577,
   0.2633152,
   0.2893174,
   0.3680218,
   0.3861181,
   0.3595966,
   0.3293608,
   0.4645709,
   0.6636884};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,198);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Reconstructed cos#theta");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3011[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3011[24] = {
   0.2244212,
   0.2069258,
   0.1877163,
   0.1835378,
   0.196907,
   0.2213821,
   0.2236335,
   0.2278383,
   0.221822,
   0.2088683,
   0.2015004,
   0.2045692,
   0.20655,
   0.2060921,
   0.207149,
   0.2025155,
   0.1934896,
   0.2140956,
   0.2035748,
   0.207442,
   0.2169294,
   0.2060673,
   0.2255228,
   0.3052263};
   Double_t _fehx3011[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3011[24] = {
   0.2244212,
   0.2069258,
   0.1877163,
   0.1835378,
   0.196907,
   0.2213821,
   0.2236335,
   0.2278383,
   0.221822,
   0.2088683,
   0.2015004,
   0.2045692,
   0.20655,
   0.2060921,
   0.207149,
   0.2025155,
   0.1934896,
   0.2140956,
   0.2035748,
   0.207442,
   0.2169294,
   0.2060673,
   0.2255228,
   0.3052263};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,198);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[24] = {
   3.75,
   11.25,
   18.75,
   26.25,
   33.75,
   41.25,
   48.75,
   56.25,
   63.75,
   71.25,
   78.75,
   86.25,
   93.75,
   101.25,
   108.75,
   116.25,
   123.75,
   131.25,
   138.75,
   146.25,
   153.75,
   161.25,
   168.75,
   176.25};
   Double_t _fy3012[24] = {
   0.9804935,
   0.9000714,
   0.7183009,
   0.9015186,
   0.6729518,
   0.9051799,
   0.7131884,
   0.9002551,
   0.5909607,
   0.5827153,
   0.9206312,
   0.8999463,
   1.268255,
   0.844634,
   0.709561,
   0.8466837,
   0.8122413,
   0.8220047,
   0.7026512,
   0.8777462,
   0.9763507,
   0.7608296,
   0.8726885,
   1.603894};
   Double_t _felx3012[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fely3012[24] = {
   0.2849186,
   0.1686044,
   0.124262,
   0.1312133,
   0.1131341,
   0.1392146,
   0.1233775,
   0.1473025,
   0.1242889,
   0.1384746,
   0.1857303,
   0.1892737,
   0.2508985,
   0.2274036,
   0.2061892,
   0.2279555,
   0.2360267,
   0.2613601,
   0.235306,
   0.2790834,
   0.3464461,
   0.3108032,
   0.4345902,
   1.145912};
   Double_t _fehx3012[24] = {
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75,
   3.75};
   Double_t _fehy3012[24] = {
   0.2681424,
   0.1623639,
   0.120024,
   0.1274582,
   0.1093838,
   0.1350014,
   0.1191697,
   0.1425565,
   0.1191032,
   0.1319114,
   0.1783121,
   0.1813767,
   0.2410719,
   0.2150832,
   0.1940486,
   0.2156052,
   0.2221292,
   0.2443596,
   0.2190796,
   0.26093,
   0.3209156,
   0.2837384,
   0.38584,
   0.9218219};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,198);
   Graph_Graph3012->SetMinimum(0.2293366);
   Graph_Graph3012->SetMaximum(2.734478);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT2_bnb_10_kine_pio_costheta_high_all",24,0,180);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetLabelSize(0.035);
   hist__9->GetXaxis()->SetTitleSize(0.035);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetLabelSize(0.035);
   hist__9->GetYaxis()->SetTitleSize(0.035);
   hist__9->GetYaxis()->SetTitleOffset(0);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetLabelSize(0.035);
   hist__9->GetZaxis()->SetTitleSize(0.035);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,180,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
