#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 14:17:35 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
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
   pad1->Range(-0.4846154,-6.02,3.553846,665.6853);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmc__10->SetBinContent(1,46.80132);
   hmc__10->SetBinContent(2,158.208);
   hmc__10->SetBinContent(3,227.2327);
   hmc__10->SetBinContent(4,278.7101);
   hmc__10->SetBinContent(5,287.3446);
   hmc__10->SetBinContent(6,290.276);
   hmc__10->SetBinContent(7,269.3778);
   hmc__10->SetBinContent(8,255.8933);
   hmc__10->SetBinContent(9,243.2091);
   hmc__10->SetBinContent(10,221.1607);
   hmc__10->SetBinContent(11,188.8606);
   hmc__10->SetBinContent(12,187.6446);
   hmc__10->SetBinContent(13,159.5173);
   hmc__10->SetBinContent(14,139.1315);
   hmc__10->SetBinContent(15,147.535);
   hmc__10->SetBinContent(16,134.2512);
   hmc__10->SetBinContent(17,117.7336);
   hmc__10->SetBinContent(18,112.9554);
   hmc__10->SetBinContent(19,107.4334);
   hmc__10->SetBinContent(20,110.183);
   hmc__10->SetBinContent(21,91.99812);
   hmc__10->SetBinContent(22,75.42437);
   hmc__10->SetBinContent(23,43.72904);
   hmc__10->SetBinContent(24,15.49413);
   hmc__10->SetBinError(1,16.71937);
   hmc__10->SetBinError(2,40.58123);
   hmc__10->SetBinError(3,57.98007);
   hmc__10->SetBinError(4,63.29568);
   hmc__10->SetBinError(5,72.66583);
   hmc__10->SetBinError(6,71.56732);
   hmc__10->SetBinError(7,69.21755);
   hmc__10->SetBinError(8,64.57301);
   hmc__10->SetBinError(9,59.37885);
   hmc__10->SetBinError(10,53.42337);
   hmc__10->SetBinError(11,53.49303);
   hmc__10->SetBinError(12,44.67628);
   hmc__10->SetBinError(13,37.43846);
   hmc__10->SetBinError(14,43.61083);
   hmc__10->SetBinError(15,45.5554);
   hmc__10->SetBinError(16,43.92088);
   hmc__10->SetBinError(17,33.53866);
   hmc__10->SetBinError(18,34.44122);
   hmc__10->SetBinError(19,31.0509);
   hmc__10->SetBinError(20,33.67496);
   hmc__10->SetBinError(21,27.12308);
   hmc__10->SetBinError(22,23.39333);
   hmc__10->SetBinError(23,17.28828);
   hmc__10->SetBinError(24,14.11676);
   hmc__10->SetBinError(25,0.3895343);
   hmc__10->SetMinimum(-6.02);
   hmc__10->SetMaximum(632.1);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,0,3.15);
   hs4_stack_4->SetMinimum(-1.479728e-08);
   hs4_stack_4->SetMaximum(304.7898);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,3.22718);
   hbadmatch_stack_1->SetBinContent(3,6.228226);
   hbadmatch_stack_1->SetBinContent(4,5.775495);
   hbadmatch_stack_1->SetBinContent(5,8.926287);
   hbadmatch_stack_1->SetBinContent(6,6.868219);
   hbadmatch_stack_1->SetBinContent(7,4.931951);
   hbadmatch_stack_1->SetBinContent(8,6.807167);
   hbadmatch_stack_1->SetBinContent(9,8.436676);
   hbadmatch_stack_1->SetBinContent(10,4.274726);
   hbadmatch_stack_1->SetBinContent(11,6.062312);
   hbadmatch_stack_1->SetBinContent(12,3.759731);
   hbadmatch_stack_1->SetBinContent(13,4.024161);
   hbadmatch_stack_1->SetBinContent(14,2.105975);
   hbadmatch_stack_1->SetBinContent(15,3.668297);
   hbadmatch_stack_1->SetBinContent(16,5.858299);
   hbadmatch_stack_1->SetBinContent(17,2.24216);
   hbadmatch_stack_1->SetBinContent(18,3.026433);
   hbadmatch_stack_1->SetBinContent(19,4.536476);
   hbadmatch_stack_1->SetBinContent(20,2.473095);
   hbadmatch_stack_1->SetBinContent(21,1.631214);
   hbadmatch_stack_1->SetBinContent(22,1.431461);
   hbadmatch_stack_1->SetBinContent(23,2.461105);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.8901112);
   hbadmatch_stack_1->SetBinError(3,1.320343);
   hbadmatch_stack_1->SetBinError(4,1.231847);
   hbadmatch_stack_1->SetBinError(5,1.753702);
   hbadmatch_stack_1->SetBinError(6,1.401088);
   hbadmatch_stack_1->SetBinError(7,1.152523);
   hbadmatch_stack_1->SetBinError(8,1.374469);
   hbadmatch_stack_1->SetBinError(9,2.119592);
   hbadmatch_stack_1->SetBinError(10,1.1353);
   hbadmatch_stack_1->SetBinError(11,1.284206);
   hbadmatch_stack_1->SetBinError(12,0.9718141);
   hbadmatch_stack_1->SetBinError(13,1.076631);
   hbadmatch_stack_1->SetBinError(14,0.7239852);
   hbadmatch_stack_1->SetBinError(15,1.108891);
   hbadmatch_stack_1->SetBinError(16,1.991128);
   hbadmatch_stack_1->SetBinError(17,0.7751375);
   hbadmatch_stack_1->SetBinError(18,0.9521735);
   hbadmatch_stack_1->SetBinError(19,1.18048);
   hbadmatch_stack_1->SetBinError(20,0.7676877);
   hbadmatch_stack_1->SetBinError(21,0.631232);
   hbadmatch_stack_1->SetBinError(22,0.7874159);
   hbadmatch_stack_1->SetBinError(23,1.121656);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,4.296596);
   hext_stack_2->SetBinContent(2,17.55985);
   hext_stack_2->SetBinContent(3,19.8494);
   hext_stack_2->SetBinContent(4,28.56668);
   hext_stack_2->SetBinContent(5,28.5551);
   hext_stack_2->SetBinContent(6,29.57855);
   hext_stack_2->SetBinContent(7,26.57677);
   hext_stack_2->SetBinContent(8,30.24769);
   hext_stack_2->SetBinContent(9,29.9277);
   hext_stack_2->SetBinContent(10,29.42895);
   hext_stack_2->SetBinContent(11,20.20693);
   hext_stack_2->SetBinContent(12,34.96405);
   hext_stack_2->SetBinContent(13,35.0981);
   hext_stack_2->SetBinContent(14,21.2942);
   hext_stack_2->SetBinContent(15,24.97073);
   hext_stack_2->SetBinContent(16,21.08356);
   hext_stack_2->SetBinContent(17,14.3446);
   hext_stack_2->SetBinContent(18,12.48042);
   hext_stack_2->SetBinContent(19,11.36436);
   hext_stack_2->SetBinContent(20,12.73855);
   hext_stack_2->SetBinContent(21,12.74573);
   hext_stack_2->SetBinContent(22,7.359033);
   hext_stack_2->SetBinContent(23,1.697008);
   hext_stack_2->SetBinContent(24,2.510206);
   hext_stack_2->SetBinError(1,1.328326);
   hext_stack_2->SetBinError(2,2.809414);
   hext_stack_2->SetBinError(3,2.89174);
   hext_stack_2->SetBinError(4,3.589168);
   hext_stack_2->SetBinError(5,3.598361);
   hext_stack_2->SetBinError(6,3.443181);
   hext_stack_2->SetBinError(7,3.293676);
   hext_stack_2->SetBinError(8,3.687891);
   hext_stack_2->SetBinError(9,3.691941);
   hext_stack_2->SetBinError(10,3.733971);
   hext_stack_2->SetBinError(11,2.792438);
   hext_stack_2->SetBinError(12,4.155249);
   hext_stack_2->SetBinError(13,4.209469);
   hext_stack_2->SetBinError(14,3.312463);
   hext_stack_2->SetBinError(15,3.423681);
   hext_stack_2->SetBinError(16,2.907873);
   hext_stack_2->SetBinError(17,2.456759);
   hext_stack_2->SetBinError(18,2.337595);
   hext_stack_2->SetBinError(19,2.103537);
   hext_stack_2->SetBinError(20,2.628489);
   hext_stack_2->SetBinError(21,2.589933);
   hext_stack_2->SetBinError(22,1.853466);
   hext_stack_2->SetBinError(23,0.8873887);
   hext_stack_2->SetBinError(24,1.057404);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2591704);
   hdirt_stack_3->SetBinContent(2,2.566992);
   hdirt_stack_3->SetBinContent(3,1.728496);
   hdirt_stack_3->SetBinContent(4,3.817883);
   hdirt_stack_3->SetBinContent(5,2.180258);
   hdirt_stack_3->SetBinContent(6,3.922311);
   hdirt_stack_3->SetBinContent(7,5.00987);
   hdirt_stack_3->SetBinContent(8,2.88812);
   hdirt_stack_3->SetBinContent(9,5.073561);
   hdirt_stack_3->SetBinContent(10,4.303503);
   hdirt_stack_3->SetBinContent(11,2.76743);
   hdirt_stack_3->SetBinContent(12,2.317136);
   hdirt_stack_3->SetBinContent(13,2.377454);
   hdirt_stack_3->SetBinContent(14,1.309016);
   hdirt_stack_3->SetBinContent(15,2.115194);
   hdirt_stack_3->SetBinContent(16,2.956047);
   hdirt_stack_3->SetBinContent(17,1.24744);
   hdirt_stack_3->SetBinContent(18,1.84688);
   hdirt_stack_3->SetBinContent(19,3.765049);
   hdirt_stack_3->SetBinContent(20,0.8371547);
   hdirt_stack_3->SetBinContent(21,1.51498);
   hdirt_stack_3->SetBinContent(22,0.9968856);
   hdirt_stack_3->SetBinContent(23,1.114166);
   hdirt_stack_3->SetBinContent(24,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2591705);
   hdirt_stack_3->SetBinError(2,0.8626343);
   hdirt_stack_3->SetBinError(3,0.6907024);
   hdirt_stack_3->SetBinError(4,1.077486);
   hdirt_stack_3->SetBinError(5,0.7016884);
   hdirt_stack_3->SetBinError(6,1.063966);
   hdirt_stack_3->SetBinError(7,1.20949);
   hdirt_stack_3->SetBinError(8,0.9004198);
   hdirt_stack_3->SetBinError(9,1.163484);
   hdirt_stack_3->SetBinError(10,1.609019);
   hdirt_stack_3->SetBinError(11,0.8655057);
   hdirt_stack_3->SetBinError(12,0.791098);
   hdirt_stack_3->SetBinError(13,0.7817256);
   hdirt_stack_3->SetBinError(14,0.5734455);
   hdirt_stack_3->SetBinError(15,0.7508688);
   hdirt_stack_3->SetBinError(16,0.9298715);
   hdirt_stack_3->SetBinError(17,0.5075476);
   hdirt_stack_3->SetBinError(18,0.6412006);
   hdirt_stack_3->SetBinError(19,1.163456);
   hdirt_stack_3->SetBinError(20,0.4476927);
   hdirt_stack_3->SetBinError(21,0.5463913);
   hdirt_stack_3->SetBinError(22,0.4766528);
   hdirt_stack_3->SetBinError(23,0.569712);
   hdirt_stack_3->SetBinError(24,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,5.554626);
   houtFV_stack_4->SetBinContent(2,15.95071);
   houtFV_stack_4->SetBinContent(3,28.01083);
   houtFV_stack_4->SetBinContent(4,34.22897);
   houtFV_stack_4->SetBinContent(5,32.33714);
   houtFV_stack_4->SetBinContent(6,36.28259);
   houtFV_stack_4->SetBinContent(7,33.38613);
   houtFV_stack_4->SetBinContent(8,31.97305);
   houtFV_stack_4->SetBinContent(9,27.40705);
   houtFV_stack_4->SetBinContent(10,23.30838);
   houtFV_stack_4->SetBinContent(11,22.30368);
   houtFV_stack_4->SetBinContent(12,25.46277);
   houtFV_stack_4->SetBinContent(13,16.04671);
   houtFV_stack_4->SetBinContent(14,17.34641);
   houtFV_stack_4->SetBinContent(15,19.50144);
   houtFV_stack_4->SetBinContent(16,20.80473);
   houtFV_stack_4->SetBinContent(17,18.68927);
   houtFV_stack_4->SetBinContent(18,18.80113);
   houtFV_stack_4->SetBinContent(19,18.77892);
   houtFV_stack_4->SetBinContent(20,24.81305);
   houtFV_stack_4->SetBinContent(21,14.97818);
   houtFV_stack_4->SetBinContent(22,9.47483);
   houtFV_stack_4->SetBinContent(23,8.619309);
   houtFV_stack_4->SetBinContent(24,1.804013);
   houtFV_stack_4->SetBinError(1,1.237231);
   houtFV_stack_4->SetBinError(2,1.990853);
   houtFV_stack_4->SetBinError(3,2.686505);
   houtFV_stack_4->SetBinError(4,3.088461);
   houtFV_stack_4->SetBinError(5,2.815719);
   houtFV_stack_4->SetBinError(6,2.979584);
   houtFV_stack_4->SetBinError(7,2.881414);
   houtFV_stack_4->SetBinError(8,2.866945);
   houtFV_stack_4->SetBinError(9,2.608423);
   houtFV_stack_4->SetBinError(10,2.491093);
   houtFV_stack_4->SetBinError(11,2.446283);
   houtFV_stack_4->SetBinError(12,2.768836);
   houtFV_stack_4->SetBinError(13,2.007491);
   houtFV_stack_4->SetBinError(14,2.044946);
   houtFV_stack_4->SetBinError(15,2.236049);
   houtFV_stack_4->SetBinError(16,2.293916);
   houtFV_stack_4->SetBinError(17,2.07083);
   houtFV_stack_4->SetBinError(18,2.162193);
   houtFV_stack_4->SetBinError(19,2.113535);
   houtFV_stack_4->SetBinError(20,2.602808);
   houtFV_stack_4->SetBinError(21,1.901014);
   houtFV_stack_4->SetBinError(22,1.507919);
   houtFV_stack_4->SetBinError(23,1.49462);
   houtFV_stack_4->SetBinError(24,0.7075491);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.026666);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,7.726012);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,10.45706);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,11.73764);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,10.54159);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.605362);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,7.582511);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.456222);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.352168);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.586577);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.887662);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.207852);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.162926);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.20378);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.244466);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.018354);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.618544);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.561576);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.948272);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.674176);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.784944);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.603094);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.239394);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.5862361);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5894927);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.9556263);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.0439);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.070863);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.054196);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9817097);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8373942);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8602453);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7300413);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6912469);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5453053);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6261522);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5134458);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5338851);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.5231453);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.317295);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5051672);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4109174);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3247714);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4732778);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4558939);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.4204368);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3385597);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2861196);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.059208);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5430539);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.06004);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.445904);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4467362);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2368179);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3494035);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1881969);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3759641);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2422936);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2792353);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1155977);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,14.40476);
   hNCpi0inFVres_stack_7->SetBinContent(2,43.08307);
   hNCpi0inFVres_stack_7->SetBinContent(3,74.79605);
   hNCpi0inFVres_stack_7->SetBinContent(4,92.32961);
   hNCpi0inFVres_stack_7->SetBinContent(5,100.8873);
   hNCpi0inFVres_stack_7->SetBinContent(6,97.27672);
   hNCpi0inFVres_stack_7->SetBinContent(7,93.28368);
   hNCpi0inFVres_stack_7->SetBinContent(8,84.51474);
   hNCpi0inFVres_stack_7->SetBinContent(9,83.63344);
   hNCpi0inFVres_stack_7->SetBinContent(10,76.24824);
   hNCpi0inFVres_stack_7->SetBinContent(11,63.38372);
   hNCpi0inFVres_stack_7->SetBinContent(12,63.06821);
   hNCpi0inFVres_stack_7->SetBinContent(13,52.92467);
   hNCpi0inFVres_stack_7->SetBinContent(14,50.79699);
   hNCpi0inFVres_stack_7->SetBinContent(15,45.47703);
   hNCpi0inFVres_stack_7->SetBinContent(16,42.92979);
   hNCpi0inFVres_stack_7->SetBinContent(17,39.42269);
   hNCpi0inFVres_stack_7->SetBinContent(18,39.50407);
   hNCpi0inFVres_stack_7->SetBinContent(19,34.17347);
   hNCpi0inFVres_stack_7->SetBinContent(20,33.48535);
   hNCpi0inFVres_stack_7->SetBinContent(21,26.82412);
   hNCpi0inFVres_stack_7->SetBinContent(22,21.2124);
   hNCpi0inFVres_stack_7->SetBinContent(23,13.39787);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.685728);
   hNCpi0inFVres_stack_7->SetBinError(1,1.236299);
   hNCpi0inFVres_stack_7->SetBinError(2,2.06468);
   hNCpi0inFVres_stack_7->SetBinError(3,2.811691);
   hNCpi0inFVres_stack_7->SetBinError(4,3.152903);
   hNCpi0inFVres_stack_7->SetBinError(5,3.347749);
   hNCpi0inFVres_stack_7->SetBinError(6,3.185498);
   hNCpi0inFVres_stack_7->SetBinError(7,3.122107);
   hNCpi0inFVres_stack_7->SetBinError(8,2.968154);
   hNCpi0inFVres_stack_7->SetBinError(9,3.027627);
   hNCpi0inFVres_stack_7->SetBinError(10,2.81229);
   hNCpi0inFVres_stack_7->SetBinError(11,2.547696);
   hNCpi0inFVres_stack_7->SetBinError(12,2.595223);
   hNCpi0inFVres_stack_7->SetBinError(13,2.332703);
   hNCpi0inFVres_stack_7->SetBinError(14,2.398516);
   hNCpi0inFVres_stack_7->SetBinError(15,2.217251);
   hNCpi0inFVres_stack_7->SetBinError(16,2.088935);
   hNCpi0inFVres_stack_7->SetBinError(17,2.041855);
   hNCpi0inFVres_stack_7->SetBinError(18,2.071472);
   hNCpi0inFVres_stack_7->SetBinError(19,1.838789);
   hNCpi0inFVres_stack_7->SetBinError(20,1.908918);
   hNCpi0inFVres_stack_7->SetBinError(21,1.641714);
   hNCpi0inFVres_stack_7->SetBinError(22,1.562373);
   hNCpi0inFVres_stack_7->SetBinError(23,1.201089);
   hNCpi0inFVres_stack_7->SetBinError(24,0.747385);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.086538);
   hNCpi0inFVdis_stack_8->SetBinContent(2,12.49826);
   hNCpi0inFVdis_stack_8->SetBinContent(3,16.52617);
   hNCpi0inFVdis_stack_8->SetBinContent(4,19.12534);
   hNCpi0inFVdis_stack_8->SetBinContent(5,19.64948);
   hNCpi0inFVdis_stack_8->SetBinContent(6,22.26795);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.0394);
   hNCpi0inFVdis_stack_8->SetBinContent(8,20.66403);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.04264);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.93196);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.69731);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.605601);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.788292);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.612411);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.810951);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.821666);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.982746);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.98649);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.226445);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.936739);
   hNCpi0inFVdis_stack_8->SetBinContent(21,5.311314);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.16791);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.910658);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.9617218);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6753456);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.205375);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.33572);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.340252);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.417774);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.555799);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.325971);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.539157);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.231067);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.233278);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.28235);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.94628);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.04418);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8978072);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9483004);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9402978);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7755816);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8874518);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6514863);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7591392);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7152298);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6583215);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4145321);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2825829);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,8.591387);
   hCCpi0inFV_stack_10->SetBinContent(2,27.47077);
   hCCpi0inFV_stack_10->SetBinContent(3,33.5307);
   hCCpi0inFV_stack_10->SetBinContent(4,42.97487);
   hCCpi0inFV_stack_10->SetBinContent(5,44.42071);
   hCCpi0inFV_stack_10->SetBinContent(6,42.24534);
   hCCpi0inFV_stack_10->SetBinContent(7,42.61826);
   hCCpi0inFV_stack_10->SetBinContent(8,39.28318);
   hCCpi0inFV_stack_10->SetBinContent(9,35.74648);
   hCCpi0inFV_stack_10->SetBinContent(10,34.6266);
   hCCpi0inFV_stack_10->SetBinContent(11,31.19097);
   hCCpi0inFV_stack_10->SetBinContent(12,24.47342);
   hCCpi0inFV_stack_10->SetBinContent(13,19.67725);
   hCCpi0inFV_stack_10->SetBinContent(14,17.18605);
   hCCpi0inFV_stack_10->SetBinContent(15,19.39824);
   hCCpi0inFV_stack_10->SetBinContent(16,17.87831);
   hCCpi0inFV_stack_10->SetBinContent(17,16.1639);
   hCCpi0inFV_stack_10->SetBinContent(18,16.14029);
   hCCpi0inFV_stack_10->SetBinContent(19,16.1558);
   hCCpi0inFV_stack_10->SetBinContent(20,12.99065);
   hCCpi0inFV_stack_10->SetBinContent(21,14.21642);
   hCCpi0inFV_stack_10->SetBinContent(22,13.21317);
   hCCpi0inFV_stack_10->SetBinContent(23,6.341196);
   hCCpi0inFV_stack_10->SetBinContent(24,2.590875);
   hCCpi0inFV_stack_10->SetBinError(1,1.461065);
   hCCpi0inFV_stack_10->SetBinError(2,2.673937);
   hCCpi0inFV_stack_10->SetBinError(3,2.850053);
   hCCpi0inFV_stack_10->SetBinError(4,3.364718);
   hCCpi0inFV_stack_10->SetBinError(5,3.289741);
   hCCpi0inFV_stack_10->SetBinError(6,3.257072);
   hCCpi0inFV_stack_10->SetBinError(7,3.291706);
   hCCpi0inFV_stack_10->SetBinError(8,3.115801);
   hCCpi0inFV_stack_10->SetBinError(9,3.004538);
   hCCpi0inFV_stack_10->SetBinError(10,2.936248);
   hCCpi0inFV_stack_10->SetBinError(11,2.798817);
   hCCpi0inFV_stack_10->SetBinError(12,2.513881);
   hCCpi0inFV_stack_10->SetBinError(13,2.298147);
   hCCpi0inFV_stack_10->SetBinError(14,2.023917);
   hCCpi0inFV_stack_10->SetBinError(15,2.221977);
   hCCpi0inFV_stack_10->SetBinError(16,2.109743);
   hCCpi0inFV_stack_10->SetBinError(17,2.049131);
   hCCpi0inFV_stack_10->SetBinError(18,1.993639);
   hCCpi0inFV_stack_10->SetBinError(19,2.014242);
   hCCpi0inFV_stack_10->SetBinError(20,1.725147);
   hCCpi0inFV_stack_10->SetBinError(21,1.902968);
   hCCpi0inFV_stack_10->SetBinError(22,1.834906);
   hCCpi0inFV_stack_10->SetBinError(23,1.207568);
   hCCpi0inFV_stack_10->SetBinError(24,0.8095761);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,3.168105);
   hNCinFV_stack_11->SetBinContent(2,11.71407);
   hNCinFV_stack_11->SetBinContent(3,15.627);
   hNCinFV_stack_11->SetBinContent(4,18.91453);
   hNCinFV_stack_11->SetBinContent(5,16.56855);
   hNCinFV_stack_11->SetBinContent(6,19.56688);
   hNCinFV_stack_11->SetBinContent(7,15.73967);
   hNCinFV_stack_11->SetBinContent(8,12.21569);
   hNCinFV_stack_11->SetBinContent(9,15.57991);
   hNCinFV_stack_11->SetBinContent(10,11.33524);
   hNCinFV_stack_11->SetBinContent(11,12.64946);
   hNCinFV_stack_11->SetBinContent(12,8.751129);
   hNCinFV_stack_11->SetBinContent(13,7.733978);
   hNCinFV_stack_11->SetBinContent(14,8.646314);
   hNCinFV_stack_11->SetBinContent(15,8.649694);
   hNCinFV_stack_11->SetBinContent(16,5.187903);
   hNCinFV_stack_11->SetBinContent(17,8.19963);
   hNCinFV_stack_11->SetBinContent(18,5.619981);
   hNCinFV_stack_11->SetBinContent(19,5.463603);
   hNCinFV_stack_11->SetBinContent(20,6.055439);
   hNCinFV_stack_11->SetBinContent(21,6.295873);
   hNCinFV_stack_11->SetBinContent(22,5.327985);
   hNCinFV_stack_11->SetBinContent(23,4.05302);
   hNCinFV_stack_11->SetBinContent(24,1.176911);
   hNCinFV_stack_11->SetBinError(1,0.9822593);
   hNCinFV_stack_11->SetBinError(2,1.755153);
   hNCinFV_stack_11->SetBinError(3,2.011099);
   hNCinFV_stack_11->SetBinError(4,2.17701);
   hNCinFV_stack_11->SetBinError(5,2.02048);
   hNCinFV_stack_11->SetBinError(6,2.240612);
   hNCinFV_stack_11->SetBinError(7,1.942135);
   hNCinFV_stack_11->SetBinError(8,1.755553);
   hNCinFV_stack_11->SetBinError(9,1.971514);
   hNCinFV_stack_11->SetBinError(10,1.676455);
   hNCinFV_stack_11->SetBinError(11,1.820539);
   hNCinFV_stack_11->SetBinError(12,1.468924);
   hNCinFV_stack_11->SetBinError(13,1.346068);
   hNCinFV_stack_11->SetBinError(14,1.49501);
   hNCinFV_stack_11->SetBinError(15,1.495453);
   hNCinFV_stack_11->SetBinError(16,1.055864);
   hNCinFV_stack_11->SetBinError(17,1.481886);
   hNCinFV_stack_11->SetBinError(18,1.160423);
   hNCinFV_stack_11->SetBinError(19,1.209499);
   hNCinFV_stack_11->SetBinError(20,1.256838);
   hNCinFV_stack_11->SetBinError(21,1.332165);
   hNCinFV_stack_11->SetBinError(22,1.091122);
   hNCinFV_stack_11->SetBinError(23,1.019635);
   hNCinFV_stack_11->SetBinError(24,0.4804759);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,2.66944);
   hnumuCCinFV_stack_12->SetBinContent(2,12.9806);
   hnumuCCinFV_stack_12->SetBinContent(3,15.8154);
   hnumuCCinFV_stack_12->SetBinContent(4,17.65743);
   hnumuCCinFV_stack_12->SetBinContent(5,21.65667);
   hnumuCCinFV_stack_12->SetBinContent(6,19.31594);
   hnumuCCinFV_stack_12->SetBinContent(7,18.61168);
   hnumuCCinFV_stack_12->SetBinContent(8,18.16544);
   hnumuCCinFV_stack_12->SetBinContent(9,15.12081);
   hnumuCCinFV_stack_12->SetBinContent(10,16.95501);
   hnumuCCinFV_stack_12->SetBinContent(11,12.71404);
   hnumuCCinFV_stack_12->SetBinContent(12,9.987738);
   hnumuCCinFV_stack_12->SetBinContent(13,9.320857);
   hnumuCCinFV_stack_12->SetBinContent(14,9.987778);
   hnumuCCinFV_stack_12->SetBinContent(15,11.33179);
   hnumuCCinFV_stack_12->SetBinContent(16,7.175105);
   hnumuCCinFV_stack_12->SetBinContent(17,9.514273);
   hnumuCCinFV_stack_12->SetBinContent(18,5.874549);
   hnumuCCinFV_stack_12->SetBinContent(19,5.613471);
   hnumuCCinFV_stack_12->SetBinContent(20,7.803311);
   hnumuCCinFV_stack_12->SetBinContent(21,6.387036);
   hnumuCCinFV_stack_12->SetBinContent(22,9.263825);
   hnumuCCinFV_stack_12->SetBinContent(23,2.121328);
   hnumuCCinFV_stack_12->SetBinContent(24,1.012466);
   hnumuCCinFV_stack_12->SetBinError(1,0.8476423);
   hnumuCCinFV_stack_12->SetBinError(2,1.861522);
   hnumuCCinFV_stack_12->SetBinError(3,2.089729);
   hnumuCCinFV_stack_12->SetBinError(4,2.122204);
   hnumuCCinFV_stack_12->SetBinError(5,2.774487);
   hnumuCCinFV_stack_12->SetBinError(6,2.940028);
   hnumuCCinFV_stack_12->SetBinError(7,2.48914);
   hnumuCCinFV_stack_12->SetBinError(8,2.143497);
   hnumuCCinFV_stack_12->SetBinError(9,2.276039);
   hnumuCCinFV_stack_12->SetBinError(10,2.565261);
   hnumuCCinFV_stack_12->SetBinError(11,1.860851);
   hnumuCCinFV_stack_12->SetBinError(12,1.934644);
   hnumuCCinFV_stack_12->SetBinError(13,1.626163);
   hnumuCCinFV_stack_12->SetBinError(14,1.865319);
   hnumuCCinFV_stack_12->SetBinError(15,2.12592);
   hnumuCCinFV_stack_12->SetBinError(16,1.41166);
   hnumuCCinFV_stack_12->SetBinError(17,2.080236);
   hnumuCCinFV_stack_12->SetBinError(18,1.457609);
   hnumuCCinFV_stack_12->SetBinError(19,1.205572);
   hnumuCCinFV_stack_12->SetBinError(20,1.476009);
   hnumuCCinFV_stack_12->SetBinError(21,1.283901);
   hnumuCCinFV_stack_12->SetBinError(22,2.574224);
   hnumuCCinFV_stack_12->SetBinError(23,0.7866309);
   hnumuCCinFV_stack_12->SetBinError(24,0.4537595);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.4915121);
   hnueCCinFV_stack_13->SetBinContent(2,3.291008);
   hnueCCinFV_stack_13->SetBinContent(3,3.576221);
   hnueCCinFV_stack_13->SetBinContent(4,2.745194);
   hnueCCinFV_stack_13->SetBinContent(5,1.2588);
   hnueCCinFV_stack_13->SetBinContent(6,3.803108);
   hnueCCinFV_stack_13->SetBinContent(7,3.067418);
   hnueCCinFV_stack_13->SetBinContent(8,1.562117);
   hnueCCinFV_stack_13->SetBinContent(9,1.190851);
   hnueCCinFV_stack_13->SetBinContent(10,1.910451);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,1.447315);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,1.199815);
   hnueCCinFV_stack_13->SetBinContent(16,1.174613);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.6668286);
   hnueCCinFV_stack_13->SetBinContent(19,1.142779);
   hnueCCinFV_stack_13->SetBinContent(20,1.29174);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,1.220651);
   hnueCCinFV_stack_13->SetBinContent(23,0.6623923);
   hnueCCinFV_stack_13->SetBinError(1,0.4915121);
   hnueCCinFV_stack_13->SetBinError(2,1.288593);
   hnueCCinFV_stack_13->SetBinError(3,1.676374);
   hnueCCinFV_stack_13->SetBinError(4,0.9574489);
   hnueCCinFV_stack_13->SetBinError(5,0.5149863);
   hnueCCinFV_stack_13->SetBinError(6,1.49328);
   hnueCCinFV_stack_13->SetBinError(7,0.9878105);
   hnueCCinFV_stack_13->SetBinError(8,0.6633886);
   hnueCCinFV_stack_13->SetBinError(9,0.565802);
   hnueCCinFV_stack_13->SetBinError(10,1.32621);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.6206021);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.7040641);
   hnueCCinFV_stack_13->SetBinError(16,0.5910469);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.471616);
   hnueCCinFV_stack_13->SetBinError(19,0.6492259);
   hnueCCinFV_stack_13->SetBinError(20,0.6088521);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.6602962);
   hnueCCinFV_stack_13->SetBinError(23,0.3872778);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);
   hmcerror__11->SetBinContent(1,46.80132);
   hmcerror__11->SetBinContent(2,158.208);
   hmcerror__11->SetBinContent(3,227.2327);
   hmcerror__11->SetBinContent(4,278.7101);
   hmcerror__11->SetBinContent(5,287.3446);
   hmcerror__11->SetBinContent(6,290.276);
   hmcerror__11->SetBinContent(7,269.3778);
   hmcerror__11->SetBinContent(8,255.8933);
   hmcerror__11->SetBinContent(9,243.2091);
   hmcerror__11->SetBinContent(10,221.1607);
   hmcerror__11->SetBinContent(11,188.8606);
   hmcerror__11->SetBinContent(12,187.6446);
   hmcerror__11->SetBinContent(13,159.5173);
   hmcerror__11->SetBinContent(14,139.1315);
   hmcerror__11->SetBinContent(15,147.535);
   hmcerror__11->SetBinContent(16,134.2512);
   hmcerror__11->SetBinContent(17,117.7336);
   hmcerror__11->SetBinContent(18,112.9554);
   hmcerror__11->SetBinContent(19,107.4334);
   hmcerror__11->SetBinContent(20,110.183);
   hmcerror__11->SetBinContent(21,91.99812);
   hmcerror__11->SetBinContent(22,75.42437);
   hmcerror__11->SetBinContent(23,43.72904);
   hmcerror__11->SetBinContent(24,15.49413);
   hmcerror__11->SetBinError(1,16.71937);
   hmcerror__11->SetBinError(2,40.58123);
   hmcerror__11->SetBinError(3,57.98007);
   hmcerror__11->SetBinError(4,63.29568);
   hmcerror__11->SetBinError(5,72.66583);
   hmcerror__11->SetBinError(6,71.56732);
   hmcerror__11->SetBinError(7,69.21755);
   hmcerror__11->SetBinError(8,64.57301);
   hmcerror__11->SetBinError(9,59.37885);
   hmcerror__11->SetBinError(10,53.42337);
   hmcerror__11->SetBinError(11,53.49303);
   hmcerror__11->SetBinError(12,44.67628);
   hmcerror__11->SetBinError(13,37.43846);
   hmcerror__11->SetBinError(14,43.61083);
   hmcerror__11->SetBinError(15,45.5554);
   hmcerror__11->SetBinError(16,43.92088);
   hmcerror__11->SetBinError(17,33.53866);
   hmcerror__11->SetBinError(18,34.44122);
   hmcerror__11->SetBinError(19,31.0509);
   hmcerror__11->SetBinError(20,33.67496);
   hmcerror__11->SetBinError(21,27.12308);
   hmcerror__11->SetBinError(22,23.39333);
   hmcerror__11->SetBinError(23,17.28828);
   hmcerror__11->SetBinError(24,14.11676);
   hmcerror__11->SetBinError(25,0.3895343);
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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3013[24] = {
   49,
   151,
   231,
   301,
   282,
   280,
   262,
   248,
   218,
   210,
   184,
   170,
   153,
   144,
   131,
   136,
   130,
   97,
   102,
   105,
   92,
   80,
   44,
   23};
   Double_t _felx3013[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3013[24] = {
   7.1318,
   12.28821,
   15.19868,
   17.34935,
   16.79286,
   16.7332,
   16.18641,
   15.74802,
   14.76482,
   14.49138,
   13.56466,
   13.0384,
   12.36932,
   12,
   11.44552,
   11.6619,
   11.40175,
   9.9704,
   10.0995,
   10.24695,
   9.7138,
   9.0683,
   6.7671,
   4.9457};
   Double_t _fehx3013[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3013[24] = {
   6.9277,
   12.28821,
   15.19868,
   17.34935,
   16.79286,
   16.7332,
   16.18641,
   15.74802,
   14.76482,
   14.49138,
   13.56466,
   13.0384,
   12.36932,
   12,
   11.44552,
   11.6619,
   11.40175,
   9.769,
   10.0995,
   10.24695,
   9.513,
   8.8665,
   6.5623,
   4.7346};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,3.465);
   Graph_Graph3013->SetMinimum(16.24887);
   Graph_Graph3013->SetMaximum(348.3789);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.7/24","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 234.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3014[24] = {
   0.3572414,
   0.2565055,
   0.2551573,
   0.2271022,
   0.2528874,
   0.2465492,
   0.2569535,
   0.2523435,
   0.2441473,
   0.241559,
   0.2832408,
   0.2380899,
   0.2346985,
   0.3134503,
   0.3087768,
   0.3271544,
   0.2848692,
   0.3049099,
   0.2890248,
   0.3056276,
   0.2948222,
   0.3101562,
   0.39535,
   0.9111038};
   Double_t _fehx3014[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3014[24] = {
   0.3572414,
   0.2565055,
   0.2551573,
   0.2271022,
   0.2528874,
   0.2465492,
   0.2569535,
   0.2523435,
   0.2441473,
   0.241559,
   0.2832408,
   0.2380899,
   0.2346985,
   0.3134503,
   0.3087768,
   0.3271544,
   0.2848692,
   0.3049099,
   0.2890248,
   0.3056276,
   0.2948222,
   0.3101562,
   0.39535,
   0.9111038};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,3.465);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3015[24] = {
   0.2187845,
   0.1912717,
   0.2030125,
   0.1974829,
   0.2008732,
   0.1998114,
   0.2079148,
   0.1985659,
   0.2065446,
   0.2011609,
   0.1969198,
   0.1973429,
   0.1814012,
   0.1976418,
   0.1953243,
   0.1910161,
   0.2040558,
   0.208071,
   0.2013765,
   0.1939387,
   0.1882348,
   0.1976677,
   0.2157144,
   0.2458394};
   Double_t _fehx3015[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3015[24] = {
   0.2187845,
   0.1912717,
   0.2030125,
   0.1974829,
   0.2008732,
   0.1998114,
   0.2079148,
   0.1985659,
   0.2065446,
   0.2011609,
   0.1969198,
   0.1973429,
   0.1814012,
   0.1976418,
   0.1953243,
   0.1910161,
   0.2040558,
   0.208071,
   0.2013765,
   0.1939387,
   0.1882348,
   0.1976677,
   0.2157144,
   0.2458394};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,3.465);
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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3016[24] = {
   1.046979,
   0.9544395,
   1.016579,
   1.079975,
   0.9814,
   0.9645991,
   0.9726118,
   0.9691539,
   0.896348,
   0.9495357,
   0.9742636,
   0.9059679,
   0.9591439,
   1.034992,
   0.8879247,
   1.013026,
   1.104188,
   0.8587461,
   0.9494258,
   0.9529605,
   1.00002,
   1.060665,
   1.006196,
   1.484433};
   Double_t _felx3016[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3016[24] = {
   0.1523846,
   0.07767118,
   0.066886,
   0.06224873,
   0.05844152,
   0.05764582,
   0.06008816,
   0.06154133,
   0.06070834,
   0.06552419,
   0.07182366,
   0.06948456,
   0.07754219,
   0.08624931,
   0.07757834,
   0.08686627,
   0.09684369,
   0.08826847,
   0.09400716,
   0.09299942,
   0.1055869,
   0.1202304,
   0.1547507,
   0.3191983};
   Double_t _fehx3016[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3016[24] = {
   0.1480236,
   0.07767118,
   0.066886,
   0.06224873,
   0.05844152,
   0.05764582,
   0.06008816,
   0.06154133,
   0.06070834,
   0.06552419,
   0.07182366,
   0.06948456,
   0.07754219,
   0.08624931,
   0.07757834,
   0.08686627,
   0.09684369,
   0.08648547,
   0.09400716,
   0.09299942,
   0.1034043,
   0.1175548,
   0.1500673,
   0.3055738};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,3.465);
   Graph_Graph3016->SetMinimum(0.6685247);
   Graph_Graph3016->SetMaximum(1.89196);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",24,0,3.15);

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
   TLine *line = new TLine(0,1,3.15,1);
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
