#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Jun  1 17:00:39 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-170,-93.3,163.3333,9825.963);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__1->SetBinContent(0,13.6885);
   hmc__1->SetBinContent(1,5.655269);
   hmc__1->SetBinContent(2,280.6853);
   hmc__1->SetBinContent(3,1704.508);
   hmc__1->SetBinContent(4,2494.512);
   hmc__1->SetBinContent(5,3256.99);
   hmc__1->SetBinContent(6,3716.575);
   hmc__1->SetBinContent(7,3911.628);
   hmc__1->SetBinContent(8,4039.679);
   hmc__1->SetBinContent(9,4087.941);
   hmc__1->SetBinContent(10,4160.013);
   hmc__1->SetBinContent(11,4189.883);
   hmc__1->SetBinContent(12,4152.268);
   hmc__1->SetBinContent(13,4390.732);
   hmc__1->SetBinContent(14,4275.184);
   hmc__1->SetBinContent(15,4168.742);
   hmc__1->SetBinContent(16,4222.796);
   hmc__1->SetBinContent(17,4143.654);
   hmc__1->SetBinContent(18,4102.645);
   hmc__1->SetBinContent(19,4121.937);
   hmc__1->SetBinContent(20,4174.426);
   hmc__1->SetBinContent(21,4081.783);
   hmc__1->SetBinContent(22,3860.468);
   hmc__1->SetBinContent(23,3275.724);
   hmc__1->SetBinContent(24,2564.979);
   hmc__1->SetBinContent(25,772.133);
   hmc__1->SetBinContent(26,5.882832);
   hmc__1->SetBinContent(27,20.86321);
   hmc__1->SetBinError(0,2.095244);
   hmc__1->SetBinError(1,6.107167);
   hmc__1->SetBinError(2,54.79247);
   hmc__1->SetBinError(3,243.0533);
   hmc__1->SetBinError(4,360.0483);
   hmc__1->SetBinError(5,473.636);
   hmc__1->SetBinError(6,546.9418);
   hmc__1->SetBinError(7,562.3288);
   hmc__1->SetBinError(8,597.1938);
   hmc__1->SetBinError(9,598.639);
   hmc__1->SetBinError(10,591.4557);
   hmc__1->SetBinError(11,609.0852);
   hmc__1->SetBinError(12,602.0966);
   hmc__1->SetBinError(13,606.8642);
   hmc__1->SetBinError(14,625.2164);
   hmc__1->SetBinError(15,586.904);
   hmc__1->SetBinError(16,599.2577);
   hmc__1->SetBinError(17,584.1);
   hmc__1->SetBinError(18,559.6131);
   hmc__1->SetBinError(19,561.0771);
   hmc__1->SetBinError(20,556.0639);
   hmc__1->SetBinError(21,497.9926);
   hmc__1->SetBinError(22,472.9395);
   hmc__1->SetBinError(23,379.4982);
   hmc__1->SetBinError(24,272.0738);
   hmc__1->SetBinError(25,112.5574);
   hmc__1->SetBinError(26,3.698815);
   hmc__1->SetBinError(27,10.76617);
   hmc__1->SetMinimum(-93.3);
   hmc__1->SetMaximum(9330);
   hmc__1->SetEntries(75744.3);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",26,-130,130);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(4610.269);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(0,0.7049129);
   hbadmatch_stack_1->SetBinContent(1,0.6047786);
   hbadmatch_stack_1->SetBinContent(2,44.32805);
   hbadmatch_stack_1->SetBinContent(3,217.777);
   hbadmatch_stack_1->SetBinContent(4,112.9268);
   hbadmatch_stack_1->SetBinContent(5,108.9771);
   hbadmatch_stack_1->SetBinContent(6,113.873);
   hbadmatch_stack_1->SetBinContent(7,103.5088);
   hbadmatch_stack_1->SetBinContent(8,96.89817);
   hbadmatch_stack_1->SetBinContent(9,95.97368);
   hbadmatch_stack_1->SetBinContent(10,104.62);
   hbadmatch_stack_1->SetBinContent(11,117.0194);
   hbadmatch_stack_1->SetBinContent(12,102.97);
   hbadmatch_stack_1->SetBinContent(13,125.5545);
   hbadmatch_stack_1->SetBinContent(14,101.934);
   hbadmatch_stack_1->SetBinContent(15,91.97856);
   hbadmatch_stack_1->SetBinContent(16,96.00092);
   hbadmatch_stack_1->SetBinContent(17,98.53671);
   hbadmatch_stack_1->SetBinContent(18,90.03444);
   hbadmatch_stack_1->SetBinContent(19,119.5902);
   hbadmatch_stack_1->SetBinContent(20,119.7383);
   hbadmatch_stack_1->SetBinContent(21,130.3989);
   hbadmatch_stack_1->SetBinContent(22,116.4183);
   hbadmatch_stack_1->SetBinContent(23,129.366);
   hbadmatch_stack_1->SetBinContent(24,269.5083);
   hbadmatch_stack_1->SetBinContent(25,102.6176);
   hbadmatch_stack_1->SetBinContent(26,0.7039564);
   hbadmatch_stack_1->SetBinContent(27,2.145881);
   hbadmatch_stack_1->SetBinError(0,0.4176302);
   hbadmatch_stack_1->SetBinError(1,0.3494525);
   hbadmatch_stack_1->SetBinError(2,5.616923);
   hbadmatch_stack_1->SetBinError(3,9.649448);
   hbadmatch_stack_1->SetBinError(4,7.097845);
   hbadmatch_stack_1->SetBinError(5,7.200736);
   hbadmatch_stack_1->SetBinError(6,7.133634);
   hbadmatch_stack_1->SetBinError(7,5.914728);
   hbadmatch_stack_1->SetBinError(8,5.891529);
   hbadmatch_stack_1->SetBinError(9,5.454777);
   hbadmatch_stack_1->SetBinError(10,7.008599);
   hbadmatch_stack_1->SetBinError(11,7.29562);
   hbadmatch_stack_1->SetBinError(12,6.299447);
   hbadmatch_stack_1->SetBinError(13,6.289411);
   hbadmatch_stack_1->SetBinError(14,7.0727);
   hbadmatch_stack_1->SetBinError(15,8.548336);
   hbadmatch_stack_1->SetBinError(16,5.796109);
   hbadmatch_stack_1->SetBinError(17,6.336527);
   hbadmatch_stack_1->SetBinError(18,5.844999);
   hbadmatch_stack_1->SetBinError(19,9.071903);
   hbadmatch_stack_1->SetBinError(20,6.871133);
   hbadmatch_stack_1->SetBinError(21,6.672223);
   hbadmatch_stack_1->SetBinError(22,5.938404);
   hbadmatch_stack_1->SetBinError(23,7.741276);
   hbadmatch_stack_1->SetBinError(24,13.87268);
   hbadmatch_stack_1->SetBinError(25,6.376748);
   hbadmatch_stack_1->SetBinError(26,0.498052);
   hbadmatch_stack_1->SetBinError(27,0.785499);
   hbadmatch_stack_1->SetEntries(10625);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(0,2.681789);
   hext_stack_2->SetBinContent(2,37.51299);
   hext_stack_2->SetBinContent(3,310.2198);
   hext_stack_2->SetBinContent(4,166.7322);
   hext_stack_2->SetBinContent(5,168.7652);
   hext_stack_2->SetBinContent(6,206.9302);
   hext_stack_2->SetBinContent(7,203.5677);
   hext_stack_2->SetBinContent(8,248.8482);
   hext_stack_2->SetBinContent(9,220.93);
   hext_stack_2->SetBinContent(10,261.6912);
   hext_stack_2->SetBinContent(11,271.5279);
   hext_stack_2->SetBinContent(12,280.5316);
   hext_stack_2->SetBinContent(13,393.769);
   hext_stack_2->SetBinContent(14,326.3513);
   hext_stack_2->SetBinContent(15,348.8063);
   hext_stack_2->SetBinContent(16,401.7396);
   hext_stack_2->SetBinContent(17,449.0419);
   hext_stack_2->SetBinContent(18,490.879);
   hext_stack_2->SetBinContent(19,551.7693);
   hext_stack_2->SetBinContent(20,673.9874);
   hext_stack_2->SetBinContent(21,780.2856);
   hext_stack_2->SetBinContent(22,850.5768);
   hext_stack_2->SetBinContent(23,884.6368);
   hext_stack_2->SetBinContent(24,1029.144);
   hext_stack_2->SetBinContent(25,301.774);
   hext_stack_2->SetBinContent(26,1.78639);
   hext_stack_2->SetBinContent(27,6.393022);
   hext_stack_2->SetBinError(0,1.018372);
   hext_stack_2->SetBinError(2,3.963768);
   hext_stack_2->SetBinError(3,11.38947);
   hext_stack_2->SetBinError(4,8.626017);
   hext_stack_2->SetBinError(5,8.750154);
   hext_stack_2->SetBinError(6,9.734496);
   hext_stack_2->SetBinError(7,9.593976);
   hext_stack_2->SetBinError(8,10.8825);
   hext_stack_2->SetBinError(9,9.957724);
   hext_stack_2->SetBinError(10,10.95657);
   hext_stack_2->SetBinError(11,11.1901);
   hext_stack_2->SetBinError(12,11.24447);
   hext_stack_2->SetBinError(13,13.18166);
   hext_stack_2->SetBinError(14,12.26006);
   hext_stack_2->SetBinError(15,12.71162);
   hext_stack_2->SetBinError(16,13.61039);
   hext_stack_2->SetBinError(17,14.32349);
   hext_stack_2->SetBinError(18,14.96568);
   hext_stack_2->SetBinError(19,15.85573);
   hext_stack_2->SetBinError(20,17.70331);
   hext_stack_2->SetBinError(21,19.21349);
   hext_stack_2->SetBinError(22,20.06124);
   hext_stack_2->SetBinError(23,20.40582);
   hext_stack_2->SetBinError(24,21.58086);
   hext_stack_2->SetBinError(25,11.76212);
   hext_stack_2->SetBinError(26,0.8039566);
   hext_stack_2->SetBinError(27,1.708342);
   hext_stack_2->SetEntries(23297);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,0.1380715);
   hdirt_stack_3->SetBinContent(2,26.18241);
   hdirt_stack_3->SetBinContent(3,117.7959);
   hdirt_stack_3->SetBinContent(4,109.5719);
   hdirt_stack_3->SetBinContent(5,113.4465);
   hdirt_stack_3->SetBinContent(6,116.9842);
   hdirt_stack_3->SetBinContent(7,86.40096);
   hdirt_stack_3->SetBinContent(8,96.46945);
   hdirt_stack_3->SetBinContent(9,92.4416);
   hdirt_stack_3->SetBinContent(10,81.42386);
   hdirt_stack_3->SetBinContent(11,70.5108);
   hdirt_stack_3->SetBinContent(12,66.31946);
   hdirt_stack_3->SetBinContent(13,79.03898);
   hdirt_stack_3->SetBinContent(14,64.9796);
   hdirt_stack_3->SetBinContent(15,62.39938);
   hdirt_stack_3->SetBinContent(16,64.34316);
   hdirt_stack_3->SetBinContent(17,69.68714);
   hdirt_stack_3->SetBinContent(18,76.99615);
   hdirt_stack_3->SetBinContent(19,77.71564);
   hdirt_stack_3->SetBinContent(20,104.0356);
   hdirt_stack_3->SetBinContent(21,93.76071);
   hdirt_stack_3->SetBinContent(22,100.7445);
   hdirt_stack_3->SetBinContent(23,121.5701);
   hdirt_stack_3->SetBinContent(24,109.9564);
   hdirt_stack_3->SetBinContent(25,54.61989);
   hdirt_stack_3->SetBinContent(27,1.144541);
   hdirt_stack_3->SetBinError(0,0.1380715);
   hdirt_stack_3->SetBinError(2,2.798481);
   hdirt_stack_3->SetBinError(3,6.458574);
   hdirt_stack_3->SetBinError(4,6.694334);
   hdirt_stack_3->SetBinError(5,7.236037);
   hdirt_stack_3->SetBinError(6,7.035283);
   hdirt_stack_3->SetBinError(7,5.566014);
   hdirt_stack_3->SetBinError(8,6.830939);
   hdirt_stack_3->SetBinError(9,6.664349);
   hdirt_stack_3->SetBinError(10,5.011305);
   hdirt_stack_3->SetBinError(11,4.693787);
   hdirt_stack_3->SetBinError(12,5.079796);
   hdirt_stack_3->SetBinError(13,5.209506);
   hdirt_stack_3->SetBinError(14,4.369088);
   hdirt_stack_3->SetBinError(15,4.137602);
   hdirt_stack_3->SetBinError(16,4.683566);
   hdirt_stack_3->SetBinError(17,4.704411);
   hdirt_stack_3->SetBinError(18,5.919712);
   hdirt_stack_3->SetBinError(19,6.240136);
   hdirt_stack_3->SetBinError(20,7.875488);
   hdirt_stack_3->SetBinError(21,5.386535);
   hdirt_stack_3->SetBinError(22,5.352228);
   hdirt_stack_3->SetBinError(23,8.422348);
   hdirt_stack_3->SetBinError(24,5.63733);
   hdirt_stack_3->SetBinError(25,5.683175);
   hdirt_stack_3->SetBinError(27,0.5882511);
   hdirt_stack_3->SetEntries(8365);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,3.31513);
   houtFV_stack_4->SetBinContent(1,3.57107);
   houtFV_stack_4->SetBinContent(2,77.7219);
   houtFV_stack_4->SetBinContent(3,147.2884);
   houtFV_stack_4->SetBinContent(4,163.2494);
   houtFV_stack_4->SetBinContent(5,160.3242);
   houtFV_stack_4->SetBinContent(6,131.8227);
   houtFV_stack_4->SetBinContent(7,118.7005);
   houtFV_stack_4->SetBinContent(8,107.3361);
   houtFV_stack_4->SetBinContent(9,103.7952);
   houtFV_stack_4->SetBinContent(10,103.7591);
   houtFV_stack_4->SetBinContent(11,93.11474);
   houtFV_stack_4->SetBinContent(12,89.1487);
   houtFV_stack_4->SetBinContent(13,90.78828);
   houtFV_stack_4->SetBinContent(14,97.59741);
   houtFV_stack_4->SetBinContent(15,90.78056);
   houtFV_stack_4->SetBinContent(16,93.90067);
   houtFV_stack_4->SetBinContent(17,92.44668);
   houtFV_stack_4->SetBinContent(18,99.73086);
   houtFV_stack_4->SetBinContent(19,101.8047);
   houtFV_stack_4->SetBinContent(20,123.4874);
   houtFV_stack_4->SetBinContent(21,120.792);
   houtFV_stack_4->SetBinContent(22,142.082);
   houtFV_stack_4->SetBinContent(23,149.0843);
   houtFV_stack_4->SetBinContent(24,139.8046);
   houtFV_stack_4->SetBinContent(25,110.1394);
   houtFV_stack_4->SetBinContent(26,2.736028);
   houtFV_stack_4->SetBinContent(27,1.857266);
   houtFV_stack_4->SetBinError(0,0.9517907);
   houtFV_stack_4->SetBinError(1,0.9206376);
   houtFV_stack_4->SetBinError(2,4.475557);
   houtFV_stack_4->SetBinError(3,6.230919);
   houtFV_stack_4->SetBinError(4,6.665958);
   houtFV_stack_4->SetBinError(5,6.646437);
   houtFV_stack_4->SetBinError(6,6.805033);
   houtFV_stack_4->SetBinError(7,5.512272);
   houtFV_stack_4->SetBinError(8,5.288806);
   houtFV_stack_4->SetBinError(9,5.802627);
   houtFV_stack_4->SetBinError(10,5.553707);
   houtFV_stack_4->SetBinError(11,5.120833);
   houtFV_stack_4->SetBinError(12,5.211881);
   houtFV_stack_4->SetBinError(13,5.277518);
   houtFV_stack_4->SetBinError(14,5.846968);
   houtFV_stack_4->SetBinError(15,5.221869);
   houtFV_stack_4->SetBinError(16,4.989848);
   houtFV_stack_4->SetBinError(17,4.870972);
   houtFV_stack_4->SetBinError(18,5.613912);
   houtFV_stack_4->SetBinError(19,5.568383);
   houtFV_stack_4->SetBinError(20,6.012226);
   houtFV_stack_4->SetBinError(21,5.70545);
   houtFV_stack_4->SetBinError(22,6.065191);
   houtFV_stack_4->SetBinError(23,6.78745);
   houtFV_stack_4->SetBinError(24,6.583921);
   houtFV_stack_4->SetBinError(25,5.848863);
   houtFV_stack_4->SetBinError(26,0.8562123);
   houtFV_stack_4->SetBinError(27,0.6799255);
   houtFV_stack_4->SetEntries(11501);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.197044);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.611565);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.539754);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.166676);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.793429);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,7.667212);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.061308);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,9.217339);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,7.877793);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,7.182791);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,6.428313);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,6.733549);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,8.352598);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,8.674116);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,8.799502);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,7.962167);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,7.585176);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,5.534513);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,6.107131);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,6.902958);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.48105);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.827294);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.6691039);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2957067);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5584112);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8423765);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8832386);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9043582);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8692465);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9361148);
   hNCpi0inFVcoh_stack_5->SetBinError(10,1.026702);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8981683);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9192631);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7711778);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7514953);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.9582358);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.9929447);
   hNCpi0inFVcoh_stack_5->SetBinError(17,1.01437);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.9695757);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8898239);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.71957);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7697466);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.9044304);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.8281257);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.4847881);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2548204);
   hNCpi0inFVcoh_stack_5->SetEntries(2722);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,2.25958);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,0.1115999);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,16.08989);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,85.80527);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,174.3981);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,240.1995);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,259.3775);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,298.8039);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,296.5917);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,292.2699);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,286.2955);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,303.4958);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,294.5342);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,311.226);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,290.7931);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,289.7975);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,292.5633);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,272.2779);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,268.037);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,273.6502);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,278.0516);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,247.3226);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,230.946);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,176.5355);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,110.3735);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,33.8455);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,0.2647179);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,2.467834);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.5353411);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,0.05579997);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,1.2919);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.979268);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,4.314608);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,5.04049);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,5.217022);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,5.70555);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,5.627898);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,5.5708);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,5.478188);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,5.689245);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,5.613823);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,5.698605);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,5.538815);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,5.594409);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,5.62947);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,5.327779);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,5.271125);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,5.379454);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,5.522547);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,5.124368);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,5.017322);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,4.359445);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,3.476055);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,1.924376);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,0.118917);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.5591665);
   hNCpi0inFVnoncoh_stack_6->SetEntries(104509);

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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_7->SetBinContent(0,1.412273);
   hCCpi0inFV_stack_7->SetBinContent(1,0.536893);
   hCCpi0inFV_stack_7->SetBinContent(2,12.26516);
   hCCpi0inFV_stack_7->SetBinContent(3,96.85239);
   hCCpi0inFV_stack_7->SetBinContent(4,174.1864);
   hCCpi0inFV_stack_7->SetBinContent(5,261.7045);
   hCCpi0inFV_stack_7->SetBinContent(6,293.1656);
   hCCpi0inFV_stack_7->SetBinContent(7,321.4985);
   hCCpi0inFV_stack_7->SetBinContent(8,344.0185);
   hCCpi0inFV_stack_7->SetBinContent(9,353.5287);
   hCCpi0inFV_stack_7->SetBinContent(10,367.8641);
   hCCpi0inFV_stack_7->SetBinContent(11,375.8449);
   hCCpi0inFV_stack_7->SetBinContent(12,357.6838);
   hCCpi0inFV_stack_7->SetBinContent(13,371.4099);
   hCCpi0inFV_stack_7->SetBinContent(14,365.8226);
   hCCpi0inFV_stack_7->SetBinContent(15,365.644);
   hCCpi0inFV_stack_7->SetBinContent(16,358.1944);
   hCCpi0inFV_stack_7->SetBinContent(17,331.1602);
   hCCpi0inFV_stack_7->SetBinContent(18,325.9852);
   hCCpi0inFV_stack_7->SetBinContent(19,310.3959);
   hCCpi0inFV_stack_7->SetBinContent(20,294.1472);
   hCCpi0inFV_stack_7->SetBinContent(21,266.4911);
   hCCpi0inFV_stack_7->SetBinContent(22,239.7708);
   hCCpi0inFV_stack_7->SetBinContent(23,170.1883);
   hCCpi0inFV_stack_7->SetBinContent(24,101.6272);
   hCCpi0inFV_stack_7->SetBinContent(25,18.36569);
   hCCpi0inFV_stack_7->SetBinContent(27,0.8753801);
   hCCpi0inFV_stack_7->SetBinError(0,0.6510715);
   hCCpi0inFV_stack_7->SetBinError(1,0.3929602);
   hCCpi0inFV_stack_7->SetBinError(2,1.761781);
   hCCpi0inFV_stack_7->SetBinError(3,4.983497);
   hCCpi0inFV_stack_7->SetBinError(4,6.642252);
   hCCpi0inFV_stack_7->SetBinError(5,8.329254);
   hCCpi0inFV_stack_7->SetBinError(6,8.558388);
   hCCpi0inFV_stack_7->SetBinError(7,8.997964);
   hCCpi0inFV_stack_7->SetBinError(8,9.33881);
   hCCpi0inFV_stack_7->SetBinError(9,9.445347);
   hCCpi0inFV_stack_7->SetBinError(10,9.64089);
   hCCpi0inFV_stack_7->SetBinError(11,9.744451);
   hCCpi0inFV_stack_7->SetBinError(12,9.48165);
   hCCpi0inFV_stack_7->SetBinError(13,9.630042);
   hCCpi0inFV_stack_7->SetBinError(14,9.571788);
   hCCpi0inFV_stack_7->SetBinError(15,9.552455);
   hCCpi0inFV_stack_7->SetBinError(16,9.479094);
   hCCpi0inFV_stack_7->SetBinError(17,9.102289);
   hCCpi0inFV_stack_7->SetBinError(18,9.046626);
   hCCpi0inFV_stack_7->SetBinError(19,8.823167);
   hCCpi0inFV_stack_7->SetBinError(20,8.613707);
   hCCpi0inFV_stack_7->SetBinError(21,8.184287);
   hCCpi0inFV_stack_7->SetBinError(22,7.741052);
   hCCpi0inFV_stack_7->SetBinError(23,6.565251);
   hCCpi0inFV_stack_7->SetBinError(24,5.040447);
   hCCpi0inFV_stack_7->SetBinError(25,2.107663);
   hCCpi0inFV_stack_7->SetBinError(27,0.5191111);
   hCCpi0inFV_stack_7->SetEntries(27759);

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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_8->SetBinContent(0,0.9286332);
   hNCinFV_stack_8->SetBinContent(1,0.7336084);
   hNCinFV_stack_8->SetBinContent(2,17.7761);
   hNCinFV_stack_8->SetBinContent(3,164.0252);
   hNCinFV_stack_8->SetBinContent(4,336.9808);
   hNCinFV_stack_8->SetBinContent(5,452.6725);
   hNCinFV_stack_8->SetBinContent(6,528.2214);
   hNCinFV_stack_8->SetBinContent(7,562.0624);
   hNCinFV_stack_8->SetBinContent(8,538.3849);
   hNCinFV_stack_8->SetBinContent(9,565.4291);
   hNCinFV_stack_8->SetBinContent(10,566.3137);
   hNCinFV_stack_8->SetBinContent(11,588.3184);
   hNCinFV_stack_8->SetBinContent(12,533.5433);
   hNCinFV_stack_8->SetBinContent(13,569.127);
   hNCinFV_stack_8->SetBinContent(14,539.975);
   hNCinFV_stack_8->SetBinContent(15,528.4531);
   hNCinFV_stack_8->SetBinContent(16,555.0617);
   hNCinFV_stack_8->SetBinContent(17,536.0615);
   hNCinFV_stack_8->SetBinContent(18,530.113);
   hNCinFV_stack_8->SetBinContent(19,549.8575);
   hNCinFV_stack_8->SetBinContent(20,516.2111);
   hNCinFV_stack_8->SetBinContent(21,500.6024);
   hNCinFV_stack_8->SetBinContent(22,460.0851);
   hNCinFV_stack_8->SetBinContent(23,345.3745);
   hNCinFV_stack_8->SetBinContent(24,174.0676);
   hNCinFV_stack_8->SetBinContent(25,33.66278);
   hNCinFV_stack_8->SetBinContent(26,0.1967154);
   hNCinFV_stack_8->SetBinContent(27,2.394159);
   hNCinFV_stack_8->SetBinError(0,0.48078);
   hNCinFV_stack_8->SetBinError(1,0.4394482);
   hNCinFV_stack_8->SetBinError(2,2.159211);
   hNCinFV_stack_8->SetBinError(3,6.496629);
   hNCinFV_stack_8->SetBinError(4,9.150473);
   hNCinFV_stack_8->SetBinError(5,10.61139);
   hNCinFV_stack_8->SetBinError(6,11.5346);
   hNCinFV_stack_8->SetBinError(7,11.87907);
   hNCinFV_stack_8->SetBinError(8,11.5741);
   hNCinFV_stack_8->SetBinError(9,11.89962);
   hNCinFV_stack_8->SetBinError(10,11.88776);
   hNCinFV_stack_8->SetBinError(11,12.1902);
   hNCinFV_stack_8->SetBinError(12,11.57989);
   hNCinFV_stack_8->SetBinError(13,12.05734);
   hNCinFV_stack_8->SetBinError(14,11.65687);
   hNCinFV_stack_8->SetBinError(15,11.50567);
   hNCinFV_stack_8->SetBinError(16,11.81981);
   hNCinFV_stack_8->SetBinError(17,11.64848);
   hNCinFV_stack_8->SetBinError(18,11.57236);
   hNCinFV_stack_8->SetBinError(19,11.7574);
   hNCinFV_stack_8->SetBinError(20,11.36632);
   hNCinFV_stack_8->SetBinError(21,11.2235);
   hNCinFV_stack_8->SetBinError(22,10.8126);
   hNCinFV_stack_8->SetBinError(23,9.274583);
   hNCinFV_stack_8->SetBinError(24,6.725692);
   hNCinFV_stack_8->SetBinError(25,2.91772);
   hNCinFV_stack_8->SetBinError(26,0.1967154);
   hNCinFV_stack_8->SetBinError(27,0.785313);
   hNCinFV_stack_8->SetEntries(45707);

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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_9->SetBinContent(0,2.164412);
   hnumuCCinFV_stack_9->SetBinContent(2,48.75298);
   hnumuCCinFV_stack_9->SetBinContent(3,559.08);
   hnumuCCinFV_stack_9->SetBinContent(4,1242.507);
   hnumuCCinFV_stack_9->SetBinContent(5,1723.072);
   hnumuCCinFV_stack_9->SetBinContent(6,2033.964);
   hnumuCCinFV_stack_9->SetBinContent(7,2178.706);
   hnumuCCinFV_stack_9->SetBinContent(8,2266.645);
   hnumuCCinFV_stack_9->SetBinContent(9,2325.325);
   hnumuCCinFV_stack_9->SetBinContent(10,2340.47);
   hnumuCCinFV_stack_9->SetBinContent(11,2325.152);
   hnumuCCinFV_stack_9->SetBinContent(12,2387.017);
   hnumuCCinFV_stack_9->SetBinContent(13,2406.456);
   hnumuCCinFV_stack_9->SetBinContent(14,2439.494);
   hnumuCCinFV_stack_9->SetBinContent(15,2351.575);
   hnumuCCinFV_stack_9->SetBinContent(16,2308.972);
   hnumuCCinFV_stack_9->SetBinContent(17,2254.341);
   hnumuCCinFV_stack_9->SetBinContent(18,2173.438);
   hnumuCCinFV_stack_9->SetBinContent(19,2101.002);
   hnumuCCinFV_stack_9->SetBinContent(20,2032.335);
   hnumuCCinFV_stack_9->SetBinContent(21,1915.198);
   hnumuCCinFV_stack_9->SetBinContent(22,1691.159);
   hnumuCCinFV_stack_9->SetBinContent(23,1278.642);
   hnumuCCinFV_stack_9->SetBinContent(24,623.1875);
   hnumuCCinFV_stack_9->SetBinContent(25,114.8723);
   hnumuCCinFV_stack_9->SetBinContent(26,0.1950248);
   hnumuCCinFV_stack_9->SetBinContent(27,3.244949);
   hnumuCCinFV_stack_9->SetBinError(0,1.144383);
   hnumuCCinFV_stack_9->SetBinError(2,4.83713);
   hnumuCCinFV_stack_9->SetBinError(3,16.20656);
   hnumuCCinFV_stack_9->SetBinError(4,24.87703);
   hnumuCCinFV_stack_9->SetBinError(5,29.27357);
   hnumuCCinFV_stack_9->SetBinError(6,31.94511);
   hnumuCCinFV_stack_9->SetBinError(7,32.69665);
   hnumuCCinFV_stack_9->SetBinError(8,33.2836);
   hnumuCCinFV_stack_9->SetBinError(9,34.59312);
   hnumuCCinFV_stack_9->SetBinError(10,32.96607);
   hnumuCCinFV_stack_9->SetBinError(11,33.09811);
   hnumuCCinFV_stack_9->SetBinError(12,34.56092);
   hnumuCCinFV_stack_9->SetBinError(13,34.56534);
   hnumuCCinFV_stack_9->SetBinError(14,35.02416);
   hnumuCCinFV_stack_9->SetBinError(15,34.23021);
   hnumuCCinFV_stack_9->SetBinError(16,33.75174);
   hnumuCCinFV_stack_9->SetBinError(17,34.25847);
   hnumuCCinFV_stack_9->SetBinError(18,33.18574);
   hnumuCCinFV_stack_9->SetBinError(19,32.22946);
   hnumuCCinFV_stack_9->SetBinError(20,32.3218);
   hnumuCCinFV_stack_9->SetBinError(21,31.76668);
   hnumuCCinFV_stack_9->SetBinError(22,30.61582);
   hnumuCCinFV_stack_9->SetBinError(23,25.64506);
   hnumuCCinFV_stack_9->SetBinError(24,17.05241);
   hnumuCCinFV_stack_9->SetBinError(25,7.562299);
   hnumuCCinFV_stack_9->SetBinError(26,0.1950249);
   hnumuCCinFV_stack_9->SetBinError(27,1.107276);
   hnumuCCinFV_stack_9->SetEntries(151344);

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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_10->SetBinContent(2,8.263349e-07);
   hnueCCinFV_stack_10->SetBinContent(3,4.467028);
   hnueCCinFV_stack_10->SetBinContent(4,10.3482);
   hnueCCinFV_stack_10->SetBinContent(5,21.28904);
   hnueCCinFV_stack_10->SetBinContent(6,25.06918);
   hnueCCinFV_stack_10->SetBinContent(7,30.58546);
   hnueCCinFV_stack_10->SetBinContent(8,36.82037);
   hnueCCinFV_stack_10->SetBinContent(9,30.18692);
   hnueCCinFV_stack_10->SetBinContent(10,38.35851);
   hnueCCinFV_stack_10->SetBinContent(11,37.02232);
   hnueCCinFV_stack_10->SetBinContent(12,33.33704);
   hnueCCinFV_stack_10->SetBinContent(13,36.93392);
   hnueCCinFV_stack_10->SetBinContent(14,41.50234);
   hnueCCinFV_stack_10->SetBinContent(15,30.95456);
   hnueCCinFV_stack_10->SetBinContent(16,43.34567);
   hnueCCinFV_stack_10->SetBinContent(17,31.30126);
   hnueCCinFV_stack_10->SetBinContent(18,39.4687);
   hnueCCinFV_stack_10->SetBinContent(19,28.56546);
   hnueCCinFV_stack_10->SetBinContent(20,26.89793);
   hnueCCinFV_stack_10->SetBinContent(21,20.82492);
   hnueCCinFV_stack_10->SetBinContent(22,21.78171);
   hnueCCinFV_stack_10->SetBinContent(23,14.84525);
   hnueCCinFV_stack_10->SetBinContent(24,5.482877);
   hnueCCinFV_stack_10->SetBinContent(25,1.566735);
   hnueCCinFV_stack_10->SetBinContent(27,0.3401776);
   hnueCCinFV_stack_10->SetBinError(2,8.263349e-07);
   hnueCCinFV_stack_10->SetBinError(3,1.162178);
   hnueCCinFV_stack_10->SetBinError(4,2.593071);
   hnueCCinFV_stack_10->SetBinError(5,3.169696);
   hnueCCinFV_stack_10->SetBinError(6,2.751862);
   hnueCCinFV_stack_10->SetBinError(7,3.648596);
   hnueCCinFV_stack_10->SetBinError(8,4.452362);
   hnueCCinFV_stack_10->SetBinError(9,3.080885);
   hnueCCinFV_stack_10->SetBinError(10,4.085717);
   hnueCCinFV_stack_10->SetBinError(11,4.050553);
   hnueCCinFV_stack_10->SetBinError(12,3.668451);
   hnueCCinFV_stack_10->SetBinError(13,3.641013);
   hnueCCinFV_stack_10->SetBinError(14,4.067853);
   hnueCCinFV_stack_10->SetBinError(15,3.247217);
   hnueCCinFV_stack_10->SetBinError(16,4.420706);
   hnueCCinFV_stack_10->SetBinError(17,3.005405);
   hnueCCinFV_stack_10->SetBinError(18,5.019715);
   hnueCCinFV_stack_10->SetBinError(19,3.471449);
   hnueCCinFV_stack_10->SetBinError(20,3.707876);
   hnueCCinFV_stack_10->SetBinError(21,3.029946);
   hnueCCinFV_stack_10->SetBinError(22,2.860152);
   hnueCCinFV_stack_10->SetBinError(23,2.39393);
   hnueCCinFV_stack_10->SetBinError(24,1.274164);
   hnueCCinFV_stack_10->SetBinError(25,0.7294033);
   hnueCCinFV_stack_10->SetBinError(27,0.3401776);
   hnueCCinFV_stack_10->SetEntries(2305);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__2->SetBinContent(0,13.6885);
   hmcerror__2->SetBinContent(1,5.655269);
   hmcerror__2->SetBinContent(2,280.6853);
   hmcerror__2->SetBinContent(3,1704.508);
   hmcerror__2->SetBinContent(4,2494.512);
   hmcerror__2->SetBinContent(5,3256.99);
   hmcerror__2->SetBinContent(6,3716.575);
   hmcerror__2->SetBinContent(7,3911.628);
   hmcerror__2->SetBinContent(8,4039.679);
   hmcerror__2->SetBinContent(9,4087.941);
   hmcerror__2->SetBinContent(10,4160.013);
   hmcerror__2->SetBinContent(11,4189.883);
   hmcerror__2->SetBinContent(12,4152.268);
   hmcerror__2->SetBinContent(13,4390.732);
   hmcerror__2->SetBinContent(14,4275.184);
   hmcerror__2->SetBinContent(15,4168.742);
   hmcerror__2->SetBinContent(16,4222.796);
   hmcerror__2->SetBinContent(17,4143.654);
   hmcerror__2->SetBinContent(18,4102.645);
   hmcerror__2->SetBinContent(19,4121.937);
   hmcerror__2->SetBinContent(20,4174.426);
   hmcerror__2->SetBinContent(21,4081.783);
   hmcerror__2->SetBinContent(22,3860.468);
   hmcerror__2->SetBinContent(23,3275.724);
   hmcerror__2->SetBinContent(24,2564.979);
   hmcerror__2->SetBinContent(25,772.133);
   hmcerror__2->SetBinContent(26,5.882832);
   hmcerror__2->SetBinContent(27,20.86321);
   hmcerror__2->SetBinError(0,2.095244);
   hmcerror__2->SetBinError(1,6.107167);
   hmcerror__2->SetBinError(2,54.79247);
   hmcerror__2->SetBinError(3,243.0533);
   hmcerror__2->SetBinError(4,360.0483);
   hmcerror__2->SetBinError(5,473.636);
   hmcerror__2->SetBinError(6,546.9418);
   hmcerror__2->SetBinError(7,562.3288);
   hmcerror__2->SetBinError(8,597.1938);
   hmcerror__2->SetBinError(9,598.639);
   hmcerror__2->SetBinError(10,591.4557);
   hmcerror__2->SetBinError(11,609.0852);
   hmcerror__2->SetBinError(12,602.0966);
   hmcerror__2->SetBinError(13,606.8642);
   hmcerror__2->SetBinError(14,625.2164);
   hmcerror__2->SetBinError(15,586.904);
   hmcerror__2->SetBinError(16,599.2577);
   hmcerror__2->SetBinError(17,584.1);
   hmcerror__2->SetBinError(18,559.6131);
   hmcerror__2->SetBinError(19,561.0771);
   hmcerror__2->SetBinError(20,556.0639);
   hmcerror__2->SetBinError(21,497.9926);
   hmcerror__2->SetBinError(22,472.9395);
   hmcerror__2->SetBinError(23,379.4982);
   hmcerror__2->SetBinError(24,272.0738);
   hmcerror__2->SetBinError(25,112.5574);
   hmcerror__2->SetBinError(26,3.698815);
   hmcerror__2->SetBinError(27,10.76617);
   hmcerror__2->SetEntries(75744.3);

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
   
   Double_t _fx3001[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3001[26] = {
   6,
   211,
   1510,
   2575,
   3499,
   3933,
   3923,
   4096,
   4287,
   4438,
   4392,
   4351,
   4665,
   4376,
   4400,
   4440,
   4291,
   4090,
   4239,
   4214,
   4032,
   3810,
   3221,
   2249,
   613,
   5};
   Double_t _felx3001[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3001[26] = {
   2.67925,
   14.52584,
   38.85872,
   50.74446,
   59.15235,
   62.71363,
   62.63386,
   64,
   65.47519,
   66.61832,
   66.27217,
   65.96211,
   68.30081,
   66.15134,
   66.3325,
   66.63332,
   65.50572,
   63.95311,
   65.1076,
   64.91533,
   63.49803,
   61.7252,
   56.75385,
   47.42362,
   24.75884,
   2.48995};
   Double_t _fehx3001[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3001[26] = {
   2.41858,
   14.52584,
   38.85872,
   50.74446,
   59.15235,
   62.71363,
   62.63386,
   64,
   65.47519,
   66.61832,
   66.27217,
   65.96211,
   68.30081,
   66.15134,
   66.3325,
   66.63332,
   65.50572,
   63.95311,
   65.1076,
   64.91533,
   63.49803,
   61.7252,
   56.75385,
   47.42362,
   24.75884,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-156,156);
   Graph_Graph3001->SetMinimum(2.259045);
   Graph_Graph3001->SetMaximum(5206.38);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.14","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=26.3/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 85866.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 2811.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 9861.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2057.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 2755.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  147.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  5623.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 6478.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 10693.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 43121.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 611.0","F");

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
   TText *pt_LaTex = pt->AddText("generic_FC_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3002[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3002[26] = {
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
   1,
   1};
   Double_t _felx3002[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3002[26] = {
   1.079907,
   0.1952096,
   0.1425944,
   0.1443362,
   0.1454214,
   0.1471629,
   0.1437583,
   0.147832,
   0.1464402,
   0.1421764,
   0.1453705,
   0.1450043,
   0.1382148,
   0.1462432,
   0.1407869,
   0.1419102,
   0.1409626,
   0.136403,
   0.1361198,
   0.1332073,
   0.1220037,
   0.1225084,
   0.1158517,
   0.1060725,
   0.1457746,
   0.6287473};
   Double_t _fehx3002[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3002[26] = {
   1.079907,
   0.1952096,
   0.1425944,
   0.1443362,
   0.1454214,
   0.1471629,
   0.1437583,
   0.147832,
   0.1464402,
   0.1421764,
   0.1453705,
   0.1450043,
   0.1382148,
   0.1462432,
   0.1407869,
   0.1419102,
   0.1409626,
   0.136403,
   0.1361198,
   0.1332073,
   0.1220037,
   0.1225084,
   0.1158517,
   0.1060725,
   0.1457746,
   0.6287473};
   grae = new TGraphAsymmErrors(26,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-156,156);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3003[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3003[26] = {
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
   1,
   1};
   Double_t _felx3003[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3003[26] = {
   0.3455261,
   0.1484469,
   0.1290646,
   0.1412182,
   0.1435673,
   0.1453854,
   0.1420089,
   0.1439142,
   0.1442416,
   0.1394222,
   0.1410181,
   0.1424382,
   0.1340704,
   0.1422063,
   0.1369266,
   0.1389669,
   0.1348068,
   0.1337584,
   0.1339269,
   0.1308229,
   0.1208717,
   0.1216533,
   0.1131334,
   0.09443752,
   0.104304,
   0.3223347};
   Double_t _fehx3003[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3003[26] = {
   0.3455261,
   0.1484469,
   0.1290646,
   0.1412182,
   0.1435673,
   0.1453854,
   0.1420089,
   0.1439142,
   0.1442416,
   0.1394222,
   0.1410181,
   0.1424382,
   0.1340704,
   0.1422063,
   0.1369266,
   0.1389669,
   0.1348068,
   0.1337584,
   0.1339269,
   0.1308229,
   0.1208717,
   0.1216533,
   0.1131334,
   0.09443752,
   0.104304,
   0.3223347};
   grae = new TGraphAsymmErrors(26,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-156,156);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3004[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3004[26] = {
   1.060958,
   0.7517316,
   0.8858862,
   1.032266,
   1.074305,
   1.058232,
   1.002907,
   1.013942,
   1.048694,
   1.066824,
   1.048239,
   1.047861,
   1.062465,
   1.023582,
   1.055474,
   1.051436,
   1.035559,
   0.996918,
   1.0284,
   1.00948,
   0.9878036,
   0.986927,
   0.9832942,
   0.8768101,
   0.7939047,
   0.8499308};
   Double_t _felx3004[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3004[26] = {
   0.4737618,
   0.05175134,
   0.02279762,
   0.02034244,
   0.01816166,
   0.01687404,
   0.01601222,
   0.01584284,
   0.01601667,
   0.01601397,
   0.01581719,
   0.0158858,
   0.01555568,
   0.01547333,
   0.01591187,
   0.01577943,
   0.01580869,
   0.01558826,
   0.01579539,
   0.01555072,
   0.01555644,
   0.01598905,
   0.01732559,
   0.01848889,
   0.03206551,
   0.423257};
   Double_t _fehx3004[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3004[26] = {
   0.4276685,
   0.05175134,
   0.02279762,
   0.02034244,
   0.01816166,
   0.01687404,
   0.01601222,
   0.01584284,
   0.01601667,
   0.01601397,
   0.01581719,
   0.0158858,
   0.01555568,
   0.01547333,
   0.01591187,
   0.01577943,
   0.01580869,
   0.01558826,
   0.01579539,
   0.01555072,
   0.01555644,
   0.01598905,
   0.01732559,
   0.01848889,
   0.03206551,
   0.3757782};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-156,156);
   Graph_Graph3004->SetMinimum(0.3204785);
   Graph_Graph3004->SetMaximum(1.594821);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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
