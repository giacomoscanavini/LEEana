#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Tue Mar 14 01:32:25 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",216,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-170,-93.3,163.3333,10317.02);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__4->SetBinContent(0,13.6885);
   hmc__4->SetBinContent(1,5.655269);
   hmc__4->SetBinContent(2,281.1635);
   hmc__4->SetBinContent(3,1673.53);
   hmc__4->SetBinContent(4,2478.888);
   hmc__4->SetBinContent(5,3246.215);
   hmc__4->SetBinContent(6,3698.422);
   hmc__4->SetBinContent(7,3905.434);
   hmc__4->SetBinContent(8,4000.618);
   hmc__4->SetBinContent(9,4078.173);
   hmc__4->SetBinContent(10,4131.965);
   hmc__4->SetBinContent(11,4154.337);
   hmc__4->SetBinContent(12,4130.434);
   hmc__4->SetBinContent(13,4356.393);
   hmc__4->SetBinContent(14,4241.332);
   hmc__4->SetBinContent(15,4127.131);
   hmc__4->SetBinContent(16,4175.727);
   hmc__4->SetBinContent(17,4074.352);
   hmc__4->SetBinContent(18,4053.34);
   hmc__4->SetBinContent(19,4056.782);
   hmc__4->SetBinContent(20,4069.079);
   hmc__4->SetBinContent(21,3933.868);
   hmc__4->SetBinContent(22,3703.235);
   hmc__4->SetBinContent(23,3115.693);
   hmc__4->SetBinContent(24,2402.397);
   hmc__4->SetBinContent(25,721.3197);
   hmc__4->SetBinContent(26,5.882832);
   hmc__4->SetBinContent(27,21.26981);
   hmc__4->SetBinError(0,2.095244);
   hmc__4->SetBinError(1,16.35371);
   hmc__4->SetBinError(2,58.13574);
   hmc__4->SetBinError(3,251.0686);
   hmc__4->SetBinError(4,367.5944);
   hmc__4->SetBinError(5,484.282);
   hmc__4->SetBinError(6,559.2787);
   hmc__4->SetBinError(7,571.7329);
   hmc__4->SetBinError(8,598.1618);
   hmc__4->SetBinError(9,606.7758);
   hmc__4->SetBinError(10,603.7628);
   hmc__4->SetBinError(11,619.5565);
   hmc__4->SetBinError(12,615.9556);
   hmc__4->SetBinError(13,623.3727);
   hmc__4->SetBinError(14,634.2941);
   hmc__4->SetBinError(15,594.7142);
   hmc__4->SetBinError(16,607.3626);
   hmc__4->SetBinError(17,588.0511);
   hmc__4->SetBinError(18,570.8326);
   hmc__4->SetBinError(19,572.1567);
   hmc__4->SetBinError(20,565.1406);
   hmc__4->SetBinError(21,513.0449);
   hmc__4->SetBinError(22,482.3377);
   hmc__4->SetBinError(23,384.6473);
   hmc__4->SetBinError(24,295.3322);
   hmc__4->SetBinError(25,120.2714);
   hmc__4->SetBinError(26,4.317316);
   hmc__4->SetBinError(27,16.90797);
   hmc__4->SetMinimum(-93.3);
   hmc__4->SetMaximum(9796.5);
   hmc__4->SetEntries(74404.59);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",26,-130,130);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(4574.213);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
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
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(0,2.681789);
   hext_stack_2->SetBinContent(2,36.8642);
   hext_stack_2->SetBinContent(3,274.712);
   hext_stack_2->SetBinContent(4,140.5199);
   hext_stack_2->SetBinContent(5,143.1194);
   hext_stack_2->SetBinContent(6,171.578);
   hext_stack_2->SetBinContent(7,173.0427);
   hext_stack_2->SetBinContent(8,192.3531);
   hext_stack_2->SetBinContent(9,187.5849);
   hext_stack_2->SetBinContent(10,211.1047);
   hext_stack_2->SetBinContent(11,219.8038);
   hext_stack_2->SetBinContent(12,236.1263);
   hext_stack_2->SetBinContent(13,337.6502);
   hext_stack_2->SetBinContent(14,271.5388);
   hext_stack_2->SetBinContent(15,285.2346);
   hext_stack_2->SetBinContent(16,334.8633);
   hext_stack_2->SetBinContent(17,361.8877);
   hext_stack_2->SetBinContent(18,422.5104);
   hext_stack_2->SetBinContent(19,461.9594);
   hext_stack_2->SetBinContent(20,547.8735);
   hext_stack_2->SetBinContent(21,611.038);
   hext_stack_2->SetBinContent(22,678.4572);
   hext_stack_2->SetBinContent(23,713.8047);
   hext_stack_2->SetBinContent(24,859.2306);
   hext_stack_2->SetBinContent(25,249.8336);
   hext_stack_2->SetBinContent(26,1.78639);
   hext_stack_2->SetBinContent(27,6.799621);
   hext_stack_2->SetBinError(0,1.018372);
   hext_stack_2->SetBinError(2,3.937129);
   hext_stack_2->SetBinError(3,10.33929);
   hext_stack_2->SetBinError(4,7.584442);
   hext_stack_2->SetBinError(5,7.735061);
   hext_stack_2->SetBinError(6,8.472973);
   hext_stack_2->SetBinError(7,8.485049);
   hext_stack_2->SetBinError(8,9.030018);
   hext_stack_2->SetBinError(9,8.802398);
   hext_stack_2->SetBinError(10,9.344378);
   hext_stack_2->SetBinError(11,9.594449);
   hext_stack_2->SetBinError(12,9.878228);
   hext_stack_2->SetBinError(13,11.72038);
   hext_stack_2->SetBinError(14,10.70567);
   hext_stack_2->SetBinError(15,10.97436);
   hext_stack_2->SetBinError(16,11.93223);
   hext_stack_2->SetBinError(17,12.21079);
   hext_stack_2->SetBinError(18,13.40033);
   hext_stack_2->SetBinError(19,13.92263);
   hext_stack_2->SetBinError(20,15.23005);
   hext_stack_2->SetBinError(21,16.11632);
   hext_stack_2->SetBinError(22,17.05907);
   hext_stack_2->SetBinError(23,17.49041);
   hext_stack_2->SetBinError(24,18.8902);
   hext_stack_2->SetBinError(25,10.23078);
   hext_stack_2->SetBinError(26,0.8039566);
   hext_stack_2->SetBinError(27,1.756063);
   hext_stack_2->SetEntries(20609);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
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

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
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

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
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

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.170808);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.546462);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.35249);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.993694);
   hNCpi0inFVqe_stack_6->SetBinContent(7,3.459784);
   hNCpi0inFVqe_stack_6->SetBinContent(8,2.162262);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.008976);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.602758);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.881926);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.608998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,2.287976);
   hNCpi0inFVqe_stack_6->SetBinContent(14,2.203612);
   hNCpi0inFVqe_stack_6->SetBinContent(15,2.371844);
   hNCpi0inFVqe_stack_6->SetBinContent(16,2.29993);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.854194);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.435358);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.980908);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.910826);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.39484);
   hNCpi0inFVqe_stack_6->SetBinContent(22,2.551534);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.394672);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.031804);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3485861);
   hNCpi0inFVqe_stack_6->SetBinError(0,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3538311);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3948975);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3514395);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.433203);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.6467909);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.5264212);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4830453);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3335405);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3896052);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.5958957);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.4910365);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.5022692);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.5255578);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.457952);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.4286872);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3264641);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4469848);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.4523226);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.388188);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.5612508);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3434108);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2739576);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2218905);
   hNCpi0inFVqe_stack_6->SetEntries(825);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,1.603926);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.1115999);
   hNCpi0inFVres_stack_7->SetBinContent(2,13.90322);
   hNCpi0inFVres_stack_7->SetBinContent(3,70.19118);
   hNCpi0inFVres_stack_7->SetBinContent(4,139.5034);
   hNCpi0inFVres_stack_7->SetBinContent(5,197.1603);
   hNCpi0inFVres_stack_7->SetBinContent(6,209.5132);
   hNCpi0inFVres_stack_7->SetBinContent(7,236.2959);
   hNCpi0inFVres_stack_7->SetBinContent(8,239.7437);
   hNCpi0inFVres_stack_7->SetBinContent(9,230.9478);
   hNCpi0inFVres_stack_7->SetBinContent(10,227.0712);
   hNCpi0inFVres_stack_7->SetBinContent(11,244.1971);
   hNCpi0inFVres_stack_7->SetBinContent(12,234.8414);
   hNCpi0inFVres_stack_7->SetBinContent(13,246.7757);
   hNCpi0inFVres_stack_7->SetBinContent(14,226.6913);
   hNCpi0inFVres_stack_7->SetBinContent(15,230.9232);
   hNCpi0inFVres_stack_7->SetBinContent(16,231.7415);
   hNCpi0inFVres_stack_7->SetBinContent(17,219.4461);
   hNCpi0inFVres_stack_7->SetBinContent(18,213.831);
   hNCpi0inFVres_stack_7->SetBinContent(19,216.481);
   hNCpi0inFVres_stack_7->SetBinContent(20,224.8728);
   hNCpi0inFVres_stack_7->SetBinContent(21,198.366);
   hNCpi0inFVres_stack_7->SetBinContent(22,189.9229);
   hNCpi0inFVres_stack_7->SetBinContent(23,145.5617);
   hNCpi0inFVres_stack_7->SetBinContent(24,89.84586);
   hNCpi0inFVres_stack_7->SetBinContent(25,28.33855);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.2089179);
   hNCpi0inFVres_stack_7->SetBinContent(27,2.132866);
   hNCpi0inFVres_stack_7->SetBinError(0,0.4427564);
   hNCpi0inFVres_stack_7->SetBinError(1,0.05579997);
   hNCpi0inFVres_stack_7->SetBinError(2,1.225125);
   hNCpi0inFVres_stack_7->SetBinError(3,2.68813);
   hNCpi0inFVres_stack_7->SetBinError(4,3.834934);
   hNCpi0inFVres_stack_7->SetBinError(5,4.601803);
   hNCpi0inFVres_stack_7->SetBinError(6,4.709711);
   hNCpi0inFVres_stack_7->SetBinError(7,5.067686);
   hNCpi0inFVres_stack_7->SetBinError(8,5.067936);
   hNCpi0inFVres_stack_7->SetBinError(9,4.958741);
   hNCpi0inFVres_stack_7->SetBinError(10,4.908604);
   hNCpi0inFVres_stack_7->SetBinError(11,5.130991);
   hNCpi0inFVres_stack_7->SetBinError(12,5.020888);
   hNCpi0inFVres_stack_7->SetBinError(13,5.071551);
   hNCpi0inFVres_stack_7->SetBinError(14,4.886157);
   hNCpi0inFVres_stack_7->SetBinError(15,5.003686);
   hNCpi0inFVres_stack_7->SetBinError(16,5.01886);
   hNCpi0inFVres_stack_7->SetBinError(17,4.819226);
   hNCpi0inFVres_stack_7->SetBinError(18,4.716092);
   hNCpi0inFVres_stack_7->SetBinError(19,4.760043);
   hNCpi0inFVres_stack_7->SetBinError(20,4.989382);
   hNCpi0inFVres_stack_7->SetBinError(21,4.591702);
   hNCpi0inFVres_stack_7->SetBinError(22,4.557807);
   hNCpi0inFVres_stack_7->SetBinError(23,3.945469);
   hNCpi0inFVres_stack_7->SetBinError(24,3.133379);
   hNCpi0inFVres_stack_7->SetBinError(25,1.766551);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1121803);
   hNCpi0inFVres_stack_7->SetBinError(27,0.5201609);
   hNCpi0inFVres_stack_7->SetEntries(83560);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.6277541);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.93623);
   hNCpi0inFVdis_stack_8->SetBinContent(3,14.41539);
   hNCpi0inFVdis_stack_8->SetBinContent(4,33.19515);
   hNCpi0inFVdis_stack_8->SetBinContent(5,41.46336);
   hNCpi0inFVdis_stack_8->SetBinContent(6,47.61933);
   hNCpi0inFVdis_stack_8->SetBinContent(7,58.60236);
   hNCpi0inFVdis_stack_8->SetBinContent(8,54.62991);
   hNCpi0inFVdis_stack_8->SetBinContent(9,59.03397);
   hNCpi0inFVdis_stack_8->SetBinContent(10,57.50991);
   hNCpi0inFVdis_stack_8->SetBinContent(11,57.36095);
   hNCpi0inFVdis_stack_8->SetBinContent(12,57.00008);
   hNCpi0inFVdis_stack_8->SetBinContent(13,61.47855);
   hNCpi0inFVdis_stack_8->SetBinContent(14,61.71719);
   hNCpi0inFVdis_stack_8->SetBinContent(15,56.41884);
   hNCpi0inFVdis_stack_8->SetBinContent(16,58.46602);
   hNCpi0inFVdis_stack_8->SetBinContent(17,50.72636);
   hNCpi0inFVdis_stack_8->SetBinContent(18,52.71483);
   hNCpi0inFVdis_stack_8->SetBinContent(19,54.90909);
   hNCpi0inFVdis_stack_8->SetBinContent(20,51.15635);
   hNCpi0inFVdis_stack_8->SetBinContent(21,47.28255);
   hNCpi0inFVdis_stack_8->SetBinContent(22,38.4716);
   hNCpi0inFVdis_stack_8->SetBinContent(23,29.426);
   hNCpi0inFVdis_stack_8->SetBinContent(24,19.49588);
   hNCpi0inFVdis_stack_8->SetBinContent(25,5.158364);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.334968);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2996304);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3841557);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.234514);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.934462);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.016793);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.192833);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.528798);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.389682);
   hNCpi0inFVdis_stack_8->SetBinError(9,2.484114);
   hNCpi0inFVdis_stack_8->SetBinError(10,2.408689);
   hNCpi0inFVdis_stack_8->SetBinError(11,2.426332);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.438905);
   hNCpi0inFVdis_stack_8->SetBinError(13,2.527501);
   hNCpi0inFVdis_stack_8->SetBinError(14,2.557315);
   hNCpi0inFVdis_stack_8->SetBinError(15,2.445811);
   hNCpi0inFVdis_stack_8->SetBinError(16,2.508127);
   hNCpi0inFVdis_stack_8->SetBinError(17,2.221882);
   hNCpi0inFVdis_stack_8->SetBinError(18,2.331332);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.457678);
   hNCpi0inFVdis_stack_8->SetBinError(20,2.323118);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.232528);
   hNCpi0inFVdis_stack_8->SetBinError(22,2.021116);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.819088);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.47981);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.7302636);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2051824);
   hNCpi0inFVdis_stack_8->SetEntries(20062);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.445904);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.2422936);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetEntries(55);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,1.412273);
   hCCpi0inFV_stack_10->SetBinContent(1,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(2,10.60292);
   hCCpi0inFV_stack_10->SetBinContent(3,90.40352);
   hCCpi0inFV_stack_10->SetBinContent(4,160.0182);
   hCCpi0inFV_stack_10->SetBinContent(5,242.6112);
   hCCpi0inFV_stack_10->SetBinContent(6,271.0734);
   hCCpi0inFV_stack_10->SetBinContent(7,296.9313);
   hCCpi0inFV_stack_10->SetBinContent(8,312.7414);
   hCCpi0inFV_stack_10->SetBinContent(9,319.7276);
   hCCpi0inFV_stack_10->SetBinContent(10,338.0867);
   hCCpi0inFV_stack_10->SetBinContent(11,342.6685);
   hCCpi0inFV_stack_10->SetBinContent(12,328.2809);
   hCCpi0inFV_stack_10->SetBinContent(13,341.2435);
   hCCpi0inFV_stack_10->SetBinContent(14,333.8736);
   hCCpi0inFV_stack_10->SetBinContent(15,333.6787);
   hCCpi0inFV_stack_10->SetBinContent(16,323.6241);
   hCCpi0inFV_stack_10->SetBinContent(17,305.8093);
   hCCpi0inFV_stack_10->SetBinContent(18,296.7509);
   hCCpi0inFV_stack_10->SetBinContent(19,279.5594);
   hCCpi0inFV_stack_10->SetBinContent(20,265.5726);
   hCCpi0inFV_stack_10->SetBinContent(21,243.6317);
   hCCpi0inFV_stack_10->SetBinContent(22,221.8999);
   hCCpi0inFV_stack_10->SetBinContent(23,160.7552);
   hCCpi0inFV_stack_10->SetBinContent(24,95.03041);
   hCCpi0inFV_stack_10->SetBinContent(25,17.43874);
   hCCpi0inFV_stack_10->SetBinContent(27,0.8753801);
   hCCpi0inFV_stack_10->SetBinError(0,0.6510715);
   hCCpi0inFV_stack_10->SetBinError(1,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(2,1.636951);
   hCCpi0inFV_stack_10->SetBinError(3,4.814375);
   hCCpi0inFV_stack_10->SetBinError(4,6.360654);
   hCCpi0inFV_stack_10->SetBinError(5,8.025402);
   hCCpi0inFV_stack_10->SetBinError(6,8.230216);
   hCCpi0inFV_stack_10->SetBinError(7,8.640868);
   hCCpi0inFV_stack_10->SetBinError(8,8.905823);
   hCCpi0inFV_stack_10->SetBinError(9,8.979223);
   hCCpi0inFV_stack_10->SetBinError(10,9.261945);
   hCCpi0inFV_stack_10->SetBinError(11,9.297133);
   hCCpi0inFV_stack_10->SetBinError(12,9.08135);
   hCCpi0inFV_stack_10->SetBinError(13,9.235829);
   hCCpi0inFV_stack_10->SetBinError(14,9.137358);
   hCCpi0inFV_stack_10->SetBinError(15,9.127627);
   hCCpi0inFV_stack_10->SetBinError(16,8.992108);
   hCCpi0inFV_stack_10->SetBinError(17,8.755486);
   hCCpi0inFV_stack_10->SetBinError(18,8.639256);
   hCCpi0inFV_stack_10->SetBinError(19,8.377567);
   hCCpi0inFV_stack_10->SetBinError(20,8.177836);
   hCCpi0inFV_stack_10->SetBinError(21,7.81841);
   hCCpi0inFV_stack_10->SetBinError(22,7.439242);
   hCCpi0inFV_stack_10->SetBinError(23,6.380649);
   hCCpi0inFV_stack_10->SetBinError(24,4.885559);
   hCCpi0inFV_stack_10->SetBinError(25,2.052257);
   hCCpi0inFV_stack_10->SetBinError(27,0.5191111);
   hCCpi0inFV_stack_10->SetEntries(25433);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(0,0.9286332);
   hNCinFV_stack_11->SetBinContent(1,0.7336084);
   hNCinFV_stack_11->SetBinContent(2,18.90314);
   hNCinFV_stack_11->SetBinContent(3,168.5551);
   hNCinFV_stack_11->SetBinContent(4,347.6665);
   hNCinFV_stack_11->SetBinContent(5,467.7385);
   hNCinFV_stack_11->SetBinContent(6,545.4216);
   hNCinFV_stack_11->SetBinContent(7,586.3934);
   hNCinFV_stack_11->SetBinContent(8,555.8187);
   hNCinFV_stack_11->SetBinContent(9,589.0057);
   hNCinFV_stack_11->SetBinContent(10,588.852);
   hNCinFV_stack_11->SetBinContent(11,604.4958);
   hNCinFV_stack_11->SetBinContent(12,556.1146);
   hNCinFV_stack_11->SetBinContent(13,591.5912);
   hNCinFV_stack_11->SetBinContent(14,560.9368);
   hNCinFV_stack_11->SetBinContent(15,550.4136);
   hNCinFV_stack_11->SetBinContent(16,574.8696);
   hNCinFV_stack_11->SetBinContent(17,553.9135);
   hNCinFV_stack_11->SetBinContent(18,549.1772);
   hNCinFV_stack_11->SetBinContent(19,574.5125);
   hNCinFV_stack_11->SetBinContent(20,536.9778);
   hNCinFV_stack_11->SetBinContent(21,521.9351);
   hNCinFV_stack_11->SetBinContent(22,474.9717);
   hNCinFV_stack_11->SetBinContent(23,356.2733);
   hNCinFV_stack_11->SetBinContent(24,181.3986);
   hNCinFV_stack_11->SetBinContent(25,34.78981);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinContent(27,2.394159);
   hNCinFV_stack_11->SetBinError(0,0.48078);
   hNCinFV_stack_11->SetBinError(1,0.4394482);
   hNCinFV_stack_11->SetBinError(2,2.220969);
   hNCinFV_stack_11->SetBinError(3,6.590595);
   hNCinFV_stack_11->SetBinError(4,9.309128);
   hNCinFV_stack_11->SetBinError(5,10.77704);
   hNCinFV_stack_11->SetBinError(6,11.71335);
   hNCinFV_stack_11->SetBinError(7,12.13083);
   hNCinFV_stack_11->SetBinError(8,11.76043);
   hNCinFV_stack_11->SetBinError(9,12.159);
   hNCinFV_stack_11->SetBinError(10,12.11069);
   hNCinFV_stack_11->SetBinError(11,12.36144);
   hNCinFV_stack_11->SetBinError(12,11.83185);
   hNCinFV_stack_11->SetBinError(13,12.29457);
   hNCinFV_stack_11->SetBinError(14,11.87941);
   hNCinFV_stack_11->SetBinError(15,11.73378);
   hNCinFV_stack_11->SetBinError(16,12.02188);
   hNCinFV_stack_11->SetBinError(17,11.82894);
   hNCinFV_stack_11->SetBinError(18,11.7703);
   hNCinFV_stack_11->SetBinError(19,12.0245);
   hNCinFV_stack_11->SetBinError(20,11.59279);
   hNCinFV_stack_11->SetBinError(21,11.47476);
   hNCinFV_stack_11->SetBinError(22,10.98914);
   hNCinFV_stack_11->SetBinError(23,9.42302);
   hNCinFV_stack_11->SetBinError(24,6.867612);
   hNCinFV_stack_11->SetBinError(25,2.963714);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetBinError(27,0.785313);
   hNCinFV_stack_11->SetEntries(47406);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(0,2.164412);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,50.41521);
   hnumuCCinFV_stack_12->SetBinContent(3,565.5288);
   hnumuCCinFV_stack_12->SetBinContent(4,1256.675);
   hnumuCCinFV_stack_12->SetBinContent(5,1742.165);
   hnumuCCinFV_stack_12->SetBinContent(6,2056.056);
   hnumuCCinFV_stack_12->SetBinContent(7,2203.273);
   hnumuCCinFV_stack_12->SetBinContent(8,2297.922);
   hnumuCCinFV_stack_12->SetBinContent(9,2359.126);
   hnumuCCinFV_stack_12->SetBinContent(10,2370.247);
   hnumuCCinFV_stack_12->SetBinContent(11,2358.328);
   hnumuCCinFV_stack_12->SetBinContent(12,2416.42);
   hnumuCCinFV_stack_12->SetBinContent(13,2436.622);
   hnumuCCinFV_stack_12->SetBinContent(14,2471.443);
   hnumuCCinFV_stack_12->SetBinContent(15,2383.541);
   hnumuCCinFV_stack_12->SetBinContent(16,2343.542);
   hnumuCCinFV_stack_12->SetBinContent(17,2279.692);
   hnumuCCinFV_stack_12->SetBinContent(18,2202.672);
   hnumuCCinFV_stack_12->SetBinContent(19,2131.839);
   hnumuCCinFV_stack_12->SetBinContent(20,2060.91);
   hnumuCCinFV_stack_12->SetBinContent(21,1938.057);
   hnumuCCinFV_stack_12->SetBinContent(22,1709.03);
   hnumuCCinFV_stack_12->SetBinContent(23,1288.075);
   hnumuCCinFV_stack_12->SetBinContent(24,629.7843);
   hnumuCCinFV_stack_12->SetBinContent(25,115.7993);
   hnumuCCinFV_stack_12->SetBinContent(26,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(27,3.244949);
   hnumuCCinFV_stack_12->SetBinError(0,1.144383);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,4.880788);
   hnumuCCinFV_stack_12->SetBinError(3,16.2576);
   hnumuCCinFV_stack_12->SetBinError(4,24.95051);
   hnumuCCinFV_stack_12->SetBinError(5,29.35833);
   hnumuCCinFV_stack_12->SetBinError(6,32.03122);
   hnumuCCinFV_stack_12->SetBinError(7,32.79283);
   hnumuCCinFV_stack_12->SetBinError(8,33.40207);
   hnumuCCinFV_stack_12->SetBinError(9,34.71702);
   hnumuCCinFV_stack_12->SetBinError(10,33.07454);
   hnumuCCinFV_stack_12->SetBinError(11,33.22654);
   hnumuCCinFV_stack_12->SetBinError(12,34.66826);
   hnumuCCinFV_stack_12->SetBinError(13,34.67275);
   hnumuCCinFV_stack_12->SetBinError(14,35.14);
   hnumuCCinFV_stack_12->SetBinError(15,34.34593);
   hnumuCCinFV_stack_12->SetBinError(16,33.88473);
   hnumuCCinFV_stack_12->SetBinError(17,34.34874);
   hnumuCCinFV_stack_12->SetBinError(18,33.29412);
   hnumuCCinFV_stack_12->SetBinError(19,32.34814);
   hnumuCCinFV_stack_12->SetBinError(20,32.43483);
   hnumuCCinFV_stack_12->SetBinError(21,31.8587);
   hnumuCCinFV_stack_12->SetBinError(22,30.69055);
   hnumuCCinFV_stack_12->SetBinError(23,25.69161);
   hnumuCCinFV_stack_12->SetBinError(24,17.09743);
   hnumuCCinFV_stack_12->SetBinError(25,7.577523);
   hnumuCCinFV_stack_12->SetBinError(26,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(27,1.107276);
   hnumuCCinFV_stack_12->SetEntries(153670);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(2,8.263349e-07);
   hnueCCinFV_stack_13->SetBinContent(3,4.467028);
   hnueCCinFV_stack_13->SetBinContent(4,10.3482);
   hnueCCinFV_stack_13->SetBinContent(5,21.28904);
   hnueCCinFV_stack_13->SetBinContent(6,25.06918);
   hnueCCinFV_stack_13->SetBinContent(7,30.58546);
   hnueCCinFV_stack_13->SetBinContent(8,36.82037);
   hnueCCinFV_stack_13->SetBinContent(9,30.18692);
   hnueCCinFV_stack_13->SetBinContent(10,38.35851);
   hnueCCinFV_stack_13->SetBinContent(11,37.02232);
   hnueCCinFV_stack_13->SetBinContent(12,33.33704);
   hnueCCinFV_stack_13->SetBinContent(13,36.93392);
   hnueCCinFV_stack_13->SetBinContent(14,41.50234);
   hnueCCinFV_stack_13->SetBinContent(15,30.95456);
   hnueCCinFV_stack_13->SetBinContent(16,43.34567);
   hnueCCinFV_stack_13->SetBinContent(17,31.30126);
   hnueCCinFV_stack_13->SetBinContent(18,39.4687);
   hnueCCinFV_stack_13->SetBinContent(19,28.56546);
   hnueCCinFV_stack_13->SetBinContent(20,26.89793);
   hnueCCinFV_stack_13->SetBinContent(21,20.82492);
   hnueCCinFV_stack_13->SetBinContent(22,21.78171);
   hnueCCinFV_stack_13->SetBinContent(23,14.84525);
   hnueCCinFV_stack_13->SetBinContent(24,5.482877);
   hnueCCinFV_stack_13->SetBinContent(25,1.566735);
   hnueCCinFV_stack_13->SetBinContent(27,0.3401776);
   hnueCCinFV_stack_13->SetBinError(2,8.263349e-07);
   hnueCCinFV_stack_13->SetBinError(3,1.162178);
   hnueCCinFV_stack_13->SetBinError(4,2.593071);
   hnueCCinFV_stack_13->SetBinError(5,3.169696);
   hnueCCinFV_stack_13->SetBinError(6,2.751862);
   hnueCCinFV_stack_13->SetBinError(7,3.648596);
   hnueCCinFV_stack_13->SetBinError(8,4.452362);
   hnueCCinFV_stack_13->SetBinError(9,3.080885);
   hnueCCinFV_stack_13->SetBinError(10,4.085717);
   hnueCCinFV_stack_13->SetBinError(11,4.050553);
   hnueCCinFV_stack_13->SetBinError(12,3.668451);
   hnueCCinFV_stack_13->SetBinError(13,3.641013);
   hnueCCinFV_stack_13->SetBinError(14,4.067853);
   hnueCCinFV_stack_13->SetBinError(15,3.247217);
   hnueCCinFV_stack_13->SetBinError(16,4.420706);
   hnueCCinFV_stack_13->SetBinError(17,3.005405);
   hnueCCinFV_stack_13->SetBinError(18,5.019715);
   hnueCCinFV_stack_13->SetBinError(19,3.471449);
   hnueCCinFV_stack_13->SetBinError(20,3.707876);
   hnueCCinFV_stack_13->SetBinError(21,3.029946);
   hnueCCinFV_stack_13->SetBinError(22,2.860152);
   hnueCCinFV_stack_13->SetBinError(23,2.39393);
   hnueCCinFV_stack_13->SetBinError(24,1.274164);
   hnueCCinFV_stack_13->SetBinError(25,0.7294033);
   hnueCCinFV_stack_13->SetBinError(27,0.3401776);
   hnueCCinFV_stack_13->SetEntries(2305);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__5->SetBinContent(0,13.6885);
   hmcerror__5->SetBinContent(1,5.655269);
   hmcerror__5->SetBinContent(2,281.1635);
   hmcerror__5->SetBinContent(3,1673.53);
   hmcerror__5->SetBinContent(4,2478.888);
   hmcerror__5->SetBinContent(5,3246.215);
   hmcerror__5->SetBinContent(6,3698.422);
   hmcerror__5->SetBinContent(7,3905.434);
   hmcerror__5->SetBinContent(8,4000.618);
   hmcerror__5->SetBinContent(9,4078.173);
   hmcerror__5->SetBinContent(10,4131.965);
   hmcerror__5->SetBinContent(11,4154.337);
   hmcerror__5->SetBinContent(12,4130.434);
   hmcerror__5->SetBinContent(13,4356.393);
   hmcerror__5->SetBinContent(14,4241.332);
   hmcerror__5->SetBinContent(15,4127.131);
   hmcerror__5->SetBinContent(16,4175.727);
   hmcerror__5->SetBinContent(17,4074.352);
   hmcerror__5->SetBinContent(18,4053.34);
   hmcerror__5->SetBinContent(19,4056.782);
   hmcerror__5->SetBinContent(20,4069.079);
   hmcerror__5->SetBinContent(21,3933.868);
   hmcerror__5->SetBinContent(22,3703.235);
   hmcerror__5->SetBinContent(23,3115.693);
   hmcerror__5->SetBinContent(24,2402.397);
   hmcerror__5->SetBinContent(25,721.3197);
   hmcerror__5->SetBinContent(26,5.882832);
   hmcerror__5->SetBinContent(27,21.26981);
   hmcerror__5->SetBinError(0,2.095244);
   hmcerror__5->SetBinError(1,16.35371);
   hmcerror__5->SetBinError(2,58.13574);
   hmcerror__5->SetBinError(3,251.0686);
   hmcerror__5->SetBinError(4,367.5944);
   hmcerror__5->SetBinError(5,484.282);
   hmcerror__5->SetBinError(6,559.2787);
   hmcerror__5->SetBinError(7,571.7329);
   hmcerror__5->SetBinError(8,598.1618);
   hmcerror__5->SetBinError(9,606.7758);
   hmcerror__5->SetBinError(10,603.7628);
   hmcerror__5->SetBinError(11,619.5565);
   hmcerror__5->SetBinError(12,615.9556);
   hmcerror__5->SetBinError(13,623.3727);
   hmcerror__5->SetBinError(14,634.2941);
   hmcerror__5->SetBinError(15,594.7142);
   hmcerror__5->SetBinError(16,607.3626);
   hmcerror__5->SetBinError(17,588.0511);
   hmcerror__5->SetBinError(18,570.8326);
   hmcerror__5->SetBinError(19,572.1567);
   hmcerror__5->SetBinError(20,565.1406);
   hmcerror__5->SetBinError(21,513.0449);
   hmcerror__5->SetBinError(22,482.3377);
   hmcerror__5->SetBinError(23,384.6473);
   hmcerror__5->SetBinError(24,295.3322);
   hmcerror__5->SetBinError(25,120.2714);
   hmcerror__5->SetBinError(26,4.317316);
   hmcerror__5->SetBinError(27,16.90797);
   hmcerror__5->SetEntries(74404.59);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[26] = {
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
   Double_t _fy3005[26] = {
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
   Double_t _felx3005[26] = {
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
   Double_t _fely3005[26] = {
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
   Double_t _fehx3005[26] = {
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
   Double_t _fehy3005[26] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-156,156);
   Graph_Graph3005->SetMinimum(2.259045);
   Graph_Graph3005->SetMaximum(5206.38);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.04#pm0.14","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.3/26","");
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

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 8124.5","F");

   ci = 1448;
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

   ci = 1449;
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

   ci = 1450;
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

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  43.1","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  4506.5","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  1070.2","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  2.7","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5932.2","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 11091.7","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 43667.7","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 611.0","F");

   ci = 1459;
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
   canvas2->cd();
  
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
   
   Double_t _fx3006[26] = {
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
   Double_t _fy3006[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[26] = {
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
   Double_t _fely3006[26] = {
   2.891765,
   0.2067684,
   0.1500234,
   0.14829,
   0.1491836,
   0.1512209,
   0.1463942,
   0.1495173,
   0.1487862,
   0.14612,
   0.1491349,
   0.1491261,
   0.1430938,
   0.1495507,
   0.1440987,
   0.1454507,
   0.14433,
   0.1408302,
   0.1410371,
   0.1388866,
   0.1304174,
   0.1302477,
   0.1234548,
   0.1229323,
   0.166738,
   0.7338839};
   Double_t _fehx3006[26] = {
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
   Double_t _fehy3006[26] = {
   2.891765,
   0.2067684,
   0.1500234,
   0.14829,
   0.1491836,
   0.1512209,
   0.1463942,
   0.1495173,
   0.1487862,
   0.14612,
   0.1491349,
   0.1491261,
   0.1430938,
   0.1495507,
   0.1440987,
   0.1454507,
   0.14433,
   0.1408302,
   0.1410371,
   0.1388866,
   0.1304174,
   0.1302477,
   0.1234548,
   0.1229323,
   0.166738,
   0.7338839};
   grae = new TGraphAsymmErrors(26,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-156,156);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[26] = {
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
   Double_t _fy3007[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[26] = {
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
   Double_t _fely3007[26] = {
   0.3557472,
   0.1464183,
   0.1305529,
   0.1430011,
   0.1452132,
   0.1473925,
   0.1441591,
   0.1469659,
   0.1463475,
   0.142086,
   0.1439173,
   0.1451315,
   0.137075,
   0.1451408,
   0.1401837,
   0.1421773,
   0.1386421,
   0.1370706,
   0.1378954,
   0.1357573,
   0.1267268,
   0.127973,
   0.1193593,
   0.100695,
   0.1098804,
   0.3269651};
   Double_t _fehx3007[26] = {
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
   Double_t _fehy3007[26] = {
   0.3557472,
   0.1464183,
   0.1305529,
   0.1430011,
   0.1452132,
   0.1473925,
   0.1441591,
   0.1469659,
   0.1463475,
   0.142086,
   0.1439173,
   0.1451315,
   0.137075,
   0.1451408,
   0.1401837,
   0.1421773,
   0.1386421,
   0.1370706,
   0.1378954,
   0.1357573,
   0.1267268,
   0.127973,
   0.1193593,
   0.100695,
   0.1098804,
   0.3269651};
   grae = new TGraphAsymmErrors(26,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-156,156);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[26] = {
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
   Double_t _fy3008[26] = {
   1.060958,
   0.750453,
   0.9022843,
   1.038772,
   1.077871,
   1.063426,
   1.004498,
   1.023842,
   1.051206,
   1.074065,
   1.057208,
   1.0534,
   1.07084,
   1.031751,
   1.066116,
   1.063288,
   1.053174,
   1.009044,
   1.044917,
   1.035615,
   1.024945,
   1.02883,
   1.033799,
   0.9361484,
   0.8498312,
   0.8499308};
   Double_t _felx3008[26] = {
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
   Double_t _fely3008[26] = {
   0.4737618,
   0.05166331,
   0.02321961,
   0.02047065,
   0.01822194,
   0.01695686,
   0.01603762,
   0.01599753,
   0.01605503,
   0.01612267,
   0.01595253,
   0.01596978,
   0.01567829,
   0.01559683,
   0.0160723,
   0.0159573,
   0.01607758,
   0.01577788,
   0.01604908,
   0.01595332,
   0.01614137,
   0.01666791,
   0.01821548,
   0.01974013,
   0.03432436,
   0.423257};
   Double_t _fehx3008[26] = {
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
   Double_t _fehy3008[26] = {
   0.4276685,
   0.05166331,
   0.02321961,
   0.02047065,
   0.01822194,
   0.01695686,
   0.01603762,
   0.01599753,
   0.01605503,
   0.01612267,
   0.01595253,
   0.01596978,
   0.01567829,
   0.01559683,
   0.0160723,
   0.0159573,
   0.01607758,
   0.01577788,
   0.01604908,
   0.01595332,
   0.01614137,
   0.01666791,
   0.01821548,
   0.01974013,
   0.03432436,
   0.3757782};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-156,156);
   Graph_Graph3008->SetMinimum(0.3204785);
   Graph_Graph3008->SetMaximum(1.594821);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","generic_FC_bnb_12_reco_nuvtxY_all",26,-130,130);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
