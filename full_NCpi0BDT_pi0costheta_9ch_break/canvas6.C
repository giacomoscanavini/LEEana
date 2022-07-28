#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Wed Jun  8 13:23:07 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.307692,-11.36,1.25641,1256.177);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__16->SetBinContent(1,49.44821);
   hmc__16->SetBinContent(2,38.10014);
   hmc__16->SetBinContent(3,40.34376);
   hmc__16->SetBinContent(4,36.37473);
   hmc__16->SetBinContent(5,34.71334);
   hmc__16->SetBinContent(6,36.4453);
   hmc__16->SetBinContent(7,39.01964);
   hmc__16->SetBinContent(8,31.44017);
   hmc__16->SetBinContent(9,33.5425);
   hmc__16->SetBinContent(10,39.14236);
   hmc__16->SetBinContent(11,47.66788);
   hmc__16->SetBinContent(12,45.80224);
   hmc__16->SetBinContent(13,46.11473);
   hmc__16->SetBinContent(14,62.60202);
   hmc__16->SetBinContent(15,66.46168);
   hmc__16->SetBinContent(16,82.22199);
   hmc__16->SetBinContent(17,96.3183);
   hmc__16->SetBinContent(18,106.8319);
   hmc__16->SetBinContent(19,131.5473);
   hmc__16->SetBinContent(20,170.5842);
   hmc__16->SetBinContent(21,195.0506);
   hmc__16->SetBinContent(22,224.8199);
   hmc__16->SetBinContent(23,289.7175);
   hmc__16->SetBinContent(24,395.0178);
   hmc__16->SetBinContent(25,539.0494);
   hmc__16->SetBinError(1,12.3067);
   hmc__16->SetBinError(2,10.44717);
   hmc__16->SetBinError(3,10.78342);
   hmc__16->SetBinError(4,10.99702);
   hmc__16->SetBinError(5,9.835617);
   hmc__16->SetBinError(6,9.347845);
   hmc__16->SetBinError(7,9.493247);
   hmc__16->SetBinError(8,9.301381);
   hmc__16->SetBinError(9,8.736238);
   hmc__16->SetBinError(10,9.711758);
   hmc__16->SetBinError(11,12.14982);
   hmc__16->SetBinError(12,11.7196);
   hmc__16->SetBinError(13,11.39733);
   hmc__16->SetBinError(14,14.02435);
   hmc__16->SetBinError(15,15.92426);
   hmc__16->SetBinError(16,20.14422);
   hmc__16->SetBinError(17,23.89944);
   hmc__16->SetBinError(18,30.41827);
   hmc__16->SetBinError(19,31.77255);
   hmc__16->SetBinError(20,41.77465);
   hmc__16->SetBinError(21,48.53836);
   hmc__16->SetBinError(22,55.32497);
   hmc__16->SetBinError(23,63.16834);
   hmc__16->SetBinError(24,83.47414);
   hmc__16->SetBinError(25,119.5772);
   hmc__16->SetBinError(26,0.3895343);
   hmc__16->SetMinimum(-11.36);
   hmc__16->SetMaximum(1192.8);
   hmc__16->SetEntries(2848.296);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",25,-1,1);
   hs6_stack_6->SetMinimum(-1.293891e-08);
   hs6_stack_6->SetMaximum(566.0018);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.798743);
   hbadmatch_stack_1->SetBinContent(2,1.024199);
   hbadmatch_stack_1->SetBinContent(3,2.399163);
   hbadmatch_stack_1->SetBinContent(4,1.027414);
   hbadmatch_stack_1->SetBinContent(5,0.3917402);
   hbadmatch_stack_1->SetBinContent(6,1.077772);
   hbadmatch_stack_1->SetBinContent(7,1.412273);
   hbadmatch_stack_1->SetBinContent(8,1.507184);
   hbadmatch_stack_1->SetBinContent(9,1.254937);
   hbadmatch_stack_1->SetBinContent(10,0.7856014);
   hbadmatch_stack_1->SetBinContent(11,1.106776);
   hbadmatch_stack_1->SetBinContent(12,1.073786);
   hbadmatch_stack_1->SetBinContent(13,0.4694073);
   hbadmatch_stack_1->SetBinContent(14,3.924546);
   hbadmatch_stack_1->SetBinContent(15,2.002419);
   hbadmatch_stack_1->SetBinContent(16,1.605607);
   hbadmatch_stack_1->SetBinContent(17,2.454748);
   hbadmatch_stack_1->SetBinContent(18,1.914685);
   hbadmatch_stack_1->SetBinContent(19,2.267523);
   hbadmatch_stack_1->SetBinContent(20,5.197933);
   hbadmatch_stack_1->SetBinContent(21,2.319817);
   hbadmatch_stack_1->SetBinContent(22,6.383395);
   hbadmatch_stack_1->SetBinContent(23,4.798706);
   hbadmatch_stack_1->SetBinContent(24,7.437845);
   hbadmatch_stack_1->SetBinContent(25,10.52665);
   hbadmatch_stack_1->SetBinError(1,0.7313139);
   hbadmatch_stack_1->SetBinError(2,0.4597921);
   hbadmatch_stack_1->SetBinError(3,1.722553);
   hbadmatch_stack_1->SetBinError(4,0.4611437);
   hbadmatch_stack_1->SetBinError(5,0.2770047);
   hbadmatch_stack_1->SetBinError(6,0.6240045);
   hbadmatch_stack_1->SetBinError(7,0.6510715);
   hbadmatch_stack_1->SetBinError(8,0.6352565);
   hbadmatch_stack_1->SetBinError(9,0.5173424);
   hbadmatch_stack_1->SetBinError(10,0.4650523);
   hbadmatch_stack_1->SetBinError(11,0.5074988);
   hbadmatch_stack_1->SetBinError(12,0.5557297);
   hbadmatch_stack_1->SetBinError(13,0.3362408);
   hbadmatch_stack_1->SetBinError(14,1.802802);
   hbadmatch_stack_1->SetBinError(15,0.7348366);
   hbadmatch_stack_1->SetBinError(16,0.679166);
   hbadmatch_stack_1->SetBinError(17,0.8947705);
   hbadmatch_stack_1->SetBinError(18,0.7094207);
   hbadmatch_stack_1->SetBinError(19,0.7945672);
   hbadmatch_stack_1->SetBinError(20,1.209489);
   hbadmatch_stack_1->SetBinError(21,0.7545433);
   hbadmatch_stack_1->SetBinError(22,1.328687);
   hbadmatch_stack_1->SetBinError(23,1.077731);
   hbadmatch_stack_1->SetBinError(24,1.504978);
   hbadmatch_stack_1->SetBinError(25,1.824976);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1504;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,7.732501);
   hext_stack_2->SetBinContent(2,4.517249);
   hext_stack_2->SetBinContent(3,4.214394);
   hext_stack_2->SetBinContent(4,4.110651);
   hext_stack_2->SetBinContent(5,3.241202);
   hext_stack_2->SetBinContent(6,3.076798);
   hext_stack_2->SetBinContent(7,4.863188);
   hext_stack_2->SetBinContent(8,2.192989);
   hext_stack_2->SetBinContent(9,3.17059);
   hext_stack_2->SetBinContent(10,5.561054);
   hext_stack_2->SetBinContent(11,10.35086);
   hext_stack_2->SetBinContent(12,3.819384);
   hext_stack_2->SetBinContent(13,6.082985);
   hext_stack_2->SetBinContent(14,11.49123);
   hext_stack_2->SetBinContent(15,12.34631);
   hext_stack_2->SetBinContent(16,12.21504);
   hext_stack_2->SetBinContent(17,15.90032);
   hext_stack_2->SetBinContent(18,16.98167);
   hext_stack_2->SetBinContent(19,23.68472);
   hext_stack_2->SetBinContent(20,15.21405);
   hext_stack_2->SetBinContent(21,18.76805);
   hext_stack_2->SetBinContent(22,12.40817);
   hext_stack_2->SetBinContent(23,23.23624);
   hext_stack_2->SetBinContent(24,26.77148);
   hext_stack_2->SetBinContent(25,26.3737);
   hext_stack_2->SetBinError(1,2.06648);
   hext_stack_2->SetBinError(2,1.553448);
   hext_stack_2->SetBinError(3,1.305512);
   hext_stack_2->SetBinError(4,1.499292);
   hext_stack_2->SetBinError(5,1.178414);
   hext_stack_2->SetBinError(6,1.126269);
   hext_stack_2->SetBinError(7,1.383773);
   hext_stack_2->SetBinError(8,0.9009267);
   hext_stack_2->SetBinError(9,1.123607);
   hext_stack_2->SetBinError(10,1.689695);
   hext_stack_2->SetBinError(11,2.231603);
   hext_stack_2->SetBinError(12,1.213655);
   hext_stack_2->SetBinError(13,1.552674);
   hext_stack_2->SetBinError(14,2.253798);
   hext_stack_2->SetBinError(15,2.518179);
   hext_stack_2->SetBinError(16,2.356134);
   hext_stack_2->SetBinError(17,2.810907);
   hext_stack_2->SetBinError(18,2.794371);
   hext_stack_2->SetBinError(19,3.351802);
   hext_stack_2->SetBinError(20,2.625811);
   hext_stack_2->SetBinError(21,2.907723);
   hext_stack_2->SetBinError(22,2.206068);
   hext_stack_2->SetBinError(23,3.184067);
   hext_stack_2->SetBinError(24,3.459123);
   hext_stack_2->SetBinError(25,3.474256);
   hext_stack_2->SetEntries(657);

   ci = 1505;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.63311);
   hdirt_stack_3->SetBinContent(2,0.5768807);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,1.49082);
   hdirt_stack_3->SetBinContent(5,0.9574687);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,1.063747);
   hdirt_stack_3->SetBinContent(8,0.5940499);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,1.330383);
   hdirt_stack_3->SetBinContent(11,0.5872014);
   hdirt_stack_3->SetBinContent(12,0.1549346);
   hdirt_stack_3->SetBinContent(13,0.8509132);
   hdirt_stack_3->SetBinContent(14,0.9569958);
   hdirt_stack_3->SetBinContent(15,1.579876);
   hdirt_stack_3->SetBinContent(16,2.173024);
   hdirt_stack_3->SetBinContent(17,1.273736);
   hdirt_stack_3->SetBinContent(18,1.618943);
   hdirt_stack_3->SetBinContent(19,2.204876);
   hdirt_stack_3->SetBinContent(20,1.561708);
   hdirt_stack_3->SetBinContent(21,4.04951);
   hdirt_stack_3->SetBinContent(22,3.905673);
   hdirt_stack_3->SetBinContent(23,1.917984);
   hdirt_stack_3->SetBinContent(24,3.587456);
   hdirt_stack_3->SetBinContent(25,3.943822);
   hdirt_stack_3->SetBinError(1,0.3242013);
   hdirt_stack_3->SetBinError(2,0.2887178);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.6903232);
   hdirt_stack_3->SetBinError(5,0.5679742);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.5451665);
   hdirt_stack_3->SetBinError(8,0.4343456);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.6284736);
   hdirt_stack_3->SetBinError(11,0.3414378);
   hdirt_stack_3->SetBinError(12,0.1549346);
   hdirt_stack_3->SetBinError(13,0.5162367);
   hdirt_stack_3->SetBinError(14,0.4393598);
   hdirt_stack_3->SetBinError(15,0.7045013);
   hdirt_stack_3->SetBinError(16,0.7748584);
   hdirt_stack_3->SetBinError(17,0.591637);
   hdirt_stack_3->SetBinError(18,0.6625633);
   hdirt_stack_3->SetBinError(19,0.7616908);
   hdirt_stack_3->SetBinError(20,0.5749592);
   hdirt_stack_3->SetBinError(21,1.39701);
   hdirt_stack_3->SetBinError(22,1.063638);
   hdirt_stack_3->SetBinError(23,0.6160919);
   hdirt_stack_3->SetBinError(24,1.135713);
   hdirt_stack_3->SetBinError(25,1.05716);
   hdirt_stack_3->SetEntries(156);

   ci = 1506;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,3.851233);
   houtFV_stack_4->SetBinContent(2,3.679267);
   houtFV_stack_4->SetBinContent(3,5.417111);
   houtFV_stack_4->SetBinContent(4,5.898336);
   houtFV_stack_4->SetBinContent(5,4.3496);
   houtFV_stack_4->SetBinContent(6,5.518546);
   houtFV_stack_4->SetBinContent(7,5.862286);
   houtFV_stack_4->SetBinContent(8,2.688928);
   houtFV_stack_4->SetBinContent(9,6.381793);
   houtFV_stack_4->SetBinContent(10,4.102892);
   houtFV_stack_4->SetBinContent(11,5.007616);
   houtFV_stack_4->SetBinContent(12,6.217086);
   houtFV_stack_4->SetBinContent(13,7.041821);
   houtFV_stack_4->SetBinContent(14,6.887946);
   houtFV_stack_4->SetBinContent(15,7.606461);
   houtFV_stack_4->SetBinContent(16,9.285589);
   houtFV_stack_4->SetBinContent(17,10.6084);
   houtFV_stack_4->SetBinContent(18,13.72296);
   houtFV_stack_4->SetBinContent(19,15.19493);
   houtFV_stack_4->SetBinContent(20,22.24075);
   houtFV_stack_4->SetBinContent(21,24.35777);
   houtFV_stack_4->SetBinContent(22,25.71769);
   houtFV_stack_4->SetBinContent(23,31.96788);
   houtFV_stack_4->SetBinContent(24,32.99024);
   houtFV_stack_4->SetBinContent(25,35.55466);
   houtFV_stack_4->SetBinError(1,0.9994861);
   houtFV_stack_4->SetBinError(2,0.8783974);
   houtFV_stack_4->SetBinError(3,1.226321);
   houtFV_stack_4->SetBinError(4,1.202486);
   houtFV_stack_4->SetBinError(5,1.029747);
   houtFV_stack_4->SetBinError(6,1.193827);
   houtFV_stack_4->SetBinError(7,1.185386);
   houtFV_stack_4->SetBinError(8,0.7585831);
   houtFV_stack_4->SetBinError(9,1.245459);
   houtFV_stack_4->SetBinError(10,1.000002);
   houtFV_stack_4->SetBinError(11,1.069525);
   houtFV_stack_4->SetBinError(12,1.235467);
   houtFV_stack_4->SetBinError(13,1.355303);
   houtFV_stack_4->SetBinError(14,1.295984);
   houtFV_stack_4->SetBinError(15,1.396329);
   houtFV_stack_4->SetBinError(16,1.540364);
   houtFV_stack_4->SetBinError(17,1.618653);
   houtFV_stack_4->SetBinError(18,1.809023);
   houtFV_stack_4->SetBinError(19,1.952636);
   houtFV_stack_4->SetBinError(20,2.418386);
   houtFV_stack_4->SetBinError(21,2.362751);
   houtFV_stack_4->SetBinError(22,2.641656);
   houtFV_stack_4->SetBinError(23,2.83031);
   houtFV_stack_4->SetBinError(24,2.905231);
   houtFV_stack_4->SetBinError(25,2.970901);
   houtFV_stack_4->SetEntries(1301);

   ci = 1507;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.910994);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.478876);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.557504);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4593539);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.6971721);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.4457358);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.81318);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.162926);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,3.232919);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,6.5268);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,16.60871);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,48.04798);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4871906);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4674858);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2486359);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1818869);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3138005);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1610816);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5235795);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.5134458);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5191614);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.8300421);
   hNCpi0inFVcoh_stack_5->SetBinError(24,1.358759);
   hNCpi0inFVcoh_stack_5->SetBinError(25,2.269601);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1508;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4314539);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,1.19954);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.130122);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.08694);
   hNCpi0inFVqe_stack_6->SetBinContent(25,1.464922);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1797343);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.381105);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3695249);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3001705);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.381955);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1509;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,18.10004);
   hNCpi0inFVres_stack_7->SetBinContent(2,12.24682);
   hNCpi0inFVres_stack_7->SetBinContent(3,13.84693);
   hNCpi0inFVres_stack_7->SetBinContent(4,14.08208);
   hNCpi0inFVres_stack_7->SetBinContent(5,13.90412);
   hNCpi0inFVres_stack_7->SetBinContent(6,14.44745);
   hNCpi0inFVres_stack_7->SetBinContent(7,14.09886);
   hNCpi0inFVres_stack_7->SetBinContent(8,13.07834);
   hNCpi0inFVres_stack_7->SetBinContent(9,14.39031);
   hNCpi0inFVres_stack_7->SetBinContent(10,15.32363);
   hNCpi0inFVres_stack_7->SetBinContent(11,16.25612);
   hNCpi0inFVres_stack_7->SetBinContent(12,20.55092);
   hNCpi0inFVres_stack_7->SetBinContent(13,18.31837);
   hNCpi0inFVres_stack_7->SetBinContent(14,23.64734);
   hNCpi0inFVres_stack_7->SetBinContent(15,26.61736);
   hNCpi0inFVres_stack_7->SetBinContent(16,31.51301);
   hNCpi0inFVres_stack_7->SetBinContent(17,39.26277);
   hNCpi0inFVres_stack_7->SetBinContent(18,42.56375);
   hNCpi0inFVres_stack_7->SetBinContent(19,51.90269);
   hNCpi0inFVres_stack_7->SetBinContent(20,69.53722);
   hNCpi0inFVres_stack_7->SetBinContent(21,86.159);
   hNCpi0inFVres_stack_7->SetBinContent(22,99.48401);
   hNCpi0inFVres_stack_7->SetBinContent(23,120.1513);
   hNCpi0inFVres_stack_7->SetBinContent(24,167.9088);
   hNCpi0inFVres_stack_7->SetBinContent(25,200.5099);
   hNCpi0inFVres_stack_7->SetBinError(1,1.409653);
   hNCpi0inFVres_stack_7->SetBinError(2,1.1117);
   hNCpi0inFVres_stack_7->SetBinError(3,1.243232);
   hNCpi0inFVres_stack_7->SetBinError(4,1.173);
   hNCpi0inFVres_stack_7->SetBinError(5,1.248115);
   hNCpi0inFVres_stack_7->SetBinError(6,1.273237);
   hNCpi0inFVres_stack_7->SetBinError(7,1.253753);
   hNCpi0inFVres_stack_7->SetBinError(8,1.155168);
   hNCpi0inFVres_stack_7->SetBinError(9,1.225575);
   hNCpi0inFVres_stack_7->SetBinError(10,1.217716);
   hNCpi0inFVres_stack_7->SetBinError(11,1.260512);
   hNCpi0inFVres_stack_7->SetBinError(12,1.488485);
   hNCpi0inFVres_stack_7->SetBinError(13,1.377675);
   hNCpi0inFVres_stack_7->SetBinError(14,1.578852);
   hNCpi0inFVres_stack_7->SetBinError(15,1.635519);
   hNCpi0inFVres_stack_7->SetBinError(16,1.816072);
   hNCpi0inFVres_stack_7->SetBinError(17,2.064053);
   hNCpi0inFVres_stack_7->SetBinError(18,2.032716);
   hNCpi0inFVres_stack_7->SetBinError(19,2.359001);
   hNCpi0inFVres_stack_7->SetBinError(20,2.758188);
   hNCpi0inFVres_stack_7->SetBinError(21,3.04391);
   hNCpi0inFVres_stack_7->SetBinError(22,3.25881);
   hNCpi0inFVres_stack_7->SetBinError(23,3.543267);
   hNCpi0inFVres_stack_7->SetBinError(24,4.328939);
   hNCpi0inFVres_stack_7->SetBinError(25,4.599586);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1510;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.668702);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.94147);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.704316);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.49623);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.123488);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.923612);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.184753);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.438934);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.441926);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.663798);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.844816);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.803962);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.050326);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.746498);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.779302);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.632832);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.711627);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.42541);
   hNCpi0inFVdis_stack_8->SetBinContent(19,8.811288);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.76413);
   hNCpi0inFVdis_stack_8->SetBinContent(21,14.80981);
   hNCpi0inFVdis_stack_8->SetBinContent(22,19.21637);
   hNCpi0inFVdis_stack_8->SetBinContent(23,23.95623);
   hNCpi0inFVdis_stack_8->SetBinContent(24,34.95385);
   hNCpi0inFVdis_stack_8->SetBinContent(25,53.13526);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6564471);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5825744);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.510404);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5169081);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6349992);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4387085);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2309144);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5097683);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5209709);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.551927);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5625206);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5431599);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4566047);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5049094);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6180707);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7611024);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6747686);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7566148);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.982238);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.063508);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.251293);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.443529);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.568712);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.916437);
   hNCpi0inFVdis_stack_8->SetBinError(25,2.374268);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1511;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1512;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);

   ci = 1513;
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
   hs6->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_11->SetBinContent(1,6.695457);
   hCCpi0inFV_stack_11->SetBinContent(2,5.720192);
   hCCpi0inFV_stack_11->SetBinContent(3,6.441524);
   hCCpi0inFV_stack_11->SetBinContent(4,4.001457);
   hCCpi0inFV_stack_11->SetBinContent(5,4.304679);
   hCCpi0inFV_stack_11->SetBinContent(6,5.673234);
   hCCpi0inFV_stack_11->SetBinContent(7,5.818387);
   hCCpi0inFV_stack_11->SetBinContent(8,5.071053);
   hCCpi0inFV_stack_11->SetBinContent(9,3.124387);
   hCCpi0inFV_stack_11->SetBinContent(10,4.756265);
   hCCpi0inFV_stack_11->SetBinContent(11,4.74291);
   hCCpi0inFV_stack_11->SetBinContent(12,5.430027);
   hCCpi0inFV_stack_11->SetBinContent(13,7.14045);
   hCCpi0inFV_stack_11->SetBinContent(14,7.430757);
   hCCpi0inFV_stack_11->SetBinContent(15,7.23235);
   hCCpi0inFV_stack_11->SetBinContent(16,11.13237);
   hCCpi0inFV_stack_11->SetBinContent(17,13.00255);
   hCCpi0inFV_stack_11->SetBinContent(18,11.28875);
   hCCpi0inFV_stack_11->SetBinContent(19,16.97004);
   hCCpi0inFV_stack_11->SetBinContent(20,22.58916);
   hCCpi0inFV_stack_11->SetBinContent(21,27.67804);
   hCCpi0inFV_stack_11->SetBinContent(22,32.20165);
   hCCpi0inFV_stack_11->SetBinContent(23,46.79602);
   hCCpi0inFV_stack_11->SetBinContent(24,64.64616);
   hCCpi0inFV_stack_11->SetBinContent(25,94.10934);
   hCCpi0inFV_stack_11->SetBinError(1,1.286888);
   hCCpi0inFV_stack_11->SetBinError(2,1.152866);
   hCCpi0inFV_stack_11->SetBinError(3,1.231255);
   hCCpi0inFV_stack_11->SetBinError(4,1.038578);
   hCCpi0inFV_stack_11->SetBinError(5,1.020141);
   hCCpi0inFV_stack_11->SetBinError(6,1.14379);
   hCCpi0inFV_stack_11->SetBinError(7,1.17726);
   hCCpi0inFV_stack_11->SetBinError(8,1.117199);
   hCCpi0inFV_stack_11->SetBinError(9,0.89917);
   hCCpi0inFV_stack_11->SetBinError(10,1.168566);
   hCCpi0inFV_stack_11->SetBinError(11,1.037518);
   hCCpi0inFV_stack_11->SetBinError(12,1.144786);
   hCCpi0inFV_stack_11->SetBinError(13,1.301724);
   hCCpi0inFV_stack_11->SetBinError(14,1.360095);
   hCCpi0inFV_stack_11->SetBinError(15,1.345547);
   hCCpi0inFV_stack_11->SetBinError(16,1.722726);
   hCCpi0inFV_stack_11->SetBinError(17,1.799098);
   hCCpi0inFV_stack_11->SetBinError(18,1.688632);
   hCCpi0inFV_stack_11->SetBinError(19,2.060669);
   hCCpi0inFV_stack_11->SetBinError(20,2.377303);
   hCCpi0inFV_stack_11->SetBinError(21,2.702035);
   hCCpi0inFV_stack_11->SetBinError(22,2.838071);
   hCCpi0inFV_stack_11->SetBinError(23,3.427177);
   hCCpi0inFV_stack_11->SetBinError(24,4.031883);
   hCCpi0inFV_stack_11->SetBinError(25,4.808766);
   hCCpi0inFV_stack_11->SetEntries(1821);

   ci = 1514;
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
   hs6->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_12->SetBinContent(1,2.447412);
   hNCinFV_stack_12->SetBinContent(2,2.340906);
   hNCinFV_stack_12->SetBinContent(3,2.194063);
   hNCinFV_stack_12->SetBinContent(4,1.467217);
   hNCinFV_stack_12->SetBinContent(5,1.754141);
   hNCinFV_stack_12->SetBinContent(6,2.394159);
   hNCinFV_stack_12->SetBinContent(7,1.518779);
   hNCinFV_stack_12->SetBinContent(8,1.073786);
   hNCinFV_stack_12->SetBinContent(9,1.607298);
   hNCinFV_stack_12->SetBinContent(10,0.3917402);
   hNCinFV_stack_12->SetBinContent(11,2.442341);
   hNCinFV_stack_12->SetBinContent(12,1.217248);
   hNCinFV_stack_12->SetBinContent(13,2.252388);
   hNCinFV_stack_12->SetBinContent(14,3.071134);
   hNCinFV_stack_12->SetBinContent(15,2.498975);
   hNCinFV_stack_12->SetBinContent(16,2.730956);
   hNCinFV_stack_12->SetBinContent(17,2.78759);
   hNCinFV_stack_12->SetBinContent(18,4.644856);
   hNCinFV_stack_12->SetBinContent(19,4.106273);
   hNCinFV_stack_12->SetBinContent(20,8.697876);
   hNCinFV_stack_12->SetBinContent(21,5.284875);
   hNCinFV_stack_12->SetBinContent(22,9.069939);
   hNCinFV_stack_12->SetBinContent(23,13.14602);
   hNCinFV_stack_12->SetBinContent(24,21.44539);
   hNCinFV_stack_12->SetBinContent(25,29.64177);
   hNCinFV_stack_12->SetBinError(1,0.7605193);
   hNCinFV_stack_12->SetBinError(2,0.8093475);
   hNCinFV_stack_12->SetBinError(3,0.7594044);
   hNCinFV_stack_12->SetBinError(4,0.6214735);
   hNCinFV_stack_12->SetBinError(5,0.7350354);
   hNCinFV_stack_12->SetBinError(6,0.785313);
   hNCinFV_stack_12->SetBinError(7,0.5892709);
   hNCinFV_stack_12->SetBinError(8,0.5557297);
   hNCinFV_stack_12->SetBinError(9,0.6796534);
   hNCinFV_stack_12->SetBinError(10,0.2770047);
   hNCinFV_stack_12->SetBinError(11,0.759212);
   hNCinFV_stack_12->SetBinError(12,0.6211758);
   hNCinFV_stack_12->SetBinError(13,0.7350883);
   hNCinFV_stack_12->SetBinError(14,0.9202356);
   hNCinFV_stack_12->SetBinError(15,0.7344388);
   hNCinFV_stack_12->SetBinError(16,0.8550514);
   hNCinFV_stack_12->SetBinError(17,0.8331329);
   hNCinFV_stack_12->SetBinError(18,1.075365);
   hNCinFV_stack_12->SetBinError(19,1.000664);
   hNCinFV_stack_12->SetBinError(20,1.481913);
   hNCinFV_stack_12->SetBinError(21,1.110337);
   hNCinFV_stack_12->SetBinError(22,1.569547);
   hNCinFV_stack_12->SetBinError(23,1.820378);
   hNCinFV_stack_12->SetBinError(24,2.330335);
   hNCinFV_stack_12->SetBinError(25,2.73629);
   hNCinFV_stack_12->SetEntries(550);

   ci = 1515;
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
   hs6->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_13->SetBinContent(1,1.524477);
   hnumuCCinFV_stack_13->SetBinContent(2,2.46074);
   hnumuCCinFV_stack_13->SetBinContent(3,1.336956);
   hnumuCCinFV_stack_13->SetBinContent(4,1.396311);
   hnumuCCinFV_stack_13->SetBinContent(5,0.7834804);
   hnumuCCinFV_stack_13->SetBinContent(6,1.986736);
   hnumuCCinFV_stack_13->SetBinContent(7,2.598275);
   hnumuCCinFV_stack_13->SetBinContent(8,2.487839);
   hnumuCCinFV_stack_13->SetBinContent(9,0.4408511);
   hnumuCCinFV_stack_13->SetBinContent(10,3.780436);
   hnumuCCinFV_stack_13->SetBinContent(11,3.01902);
   hnumuCCinFV_stack_13->SetBinContent(12,3.949093);
   hnumuCCinFV_stack_13->SetBinContent(13,1.559934);
   hnumuCCinFV_stack_13->SetBinContent(14,1.664303);
   hnumuCCinFV_stack_13->SetBinContent(15,2.386093);
   hnumuCCinFV_stack_13->SetBinContent(16,5.215096);
   hnumuCCinFV_stack_13->SetBinContent(17,5.309325);
   hnumuCCinFV_stack_13->SetBinContent(18,5.328931);
   hnumuCCinFV_stack_13->SetBinContent(19,5.051097);
   hnumuCCinFV_stack_13->SetBinContent(20,11.19324);
   hnumuCCinFV_stack_13->SetBinContent(21,8.139853);
   hnumuCCinFV_stack_13->SetBinContent(22,11.12715);
   hnumuCCinFV_stack_13->SetBinContent(23,13.41357);
   hnumuCCinFV_stack_13->SetBinContent(24,15.90569);
   hnumuCCinFV_stack_13->SetBinContent(25,25.09823);
   hnumuCCinFV_stack_13->SetBinError(1,0.5600005);
   hnumuCCinFV_stack_13->SetBinError(2,0.8672735);
   hnumuCCinFV_stack_13->SetBinError(3,0.6077062);
   hnumuCCinFV_stack_13->SetBinError(4,0.5861091);
   hnumuCCinFV_stack_13->SetBinError(5,0.3917439);
   hnumuCCinFV_stack_13->SetBinError(6,0.7163633);
   hnumuCCinFV_stack_13->SetBinError(7,1.159614);
   hnumuCCinFV_stack_13->SetBinError(8,1.221675);
   hnumuCCinFV_stack_13->SetBinError(9,0.313527);
   hnumuCCinFV_stack_13->SetBinError(10,1.8264);
   hnumuCCinFV_stack_13->SetBinError(11,0.8585847);
   hnumuCCinFV_stack_13->SetBinError(12,1.21112);
   hnumuCCinFV_stack_13->SetBinError(13,0.6735625);
   hnumuCCinFV_stack_13->SetBinError(14,0.6508578);
   hnumuCCinFV_stack_13->SetBinError(15,0.8364539);
   hnumuCCinFV_stack_13->SetBinError(16,1.270293);
   hnumuCCinFV_stack_13->SetBinError(17,1.414176);
   hnumuCCinFV_stack_13->SetBinError(18,1.223063);
   hnumuCCinFV_stack_13->SetBinError(19,1.165714);
   hnumuCCinFV_stack_13->SetBinError(20,2.934223);
   hnumuCCinFV_stack_13->SetBinError(21,1.49295);
   hnumuCCinFV_stack_13->SetBinError(22,1.759821);
   hnumuCCinFV_stack_13->SetBinError(23,1.890358);
   hnumuCCinFV_stack_13->SetBinError(24,2.064363);
   hnumuCCinFV_stack_13->SetBinError(25,2.602538);
   hnumuCCinFV_stack_13->SetEntries(526);

   ci = 1516;
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
   hs6->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_14->SetBinContent(1,1.057646);
   hnueCCinFV_stack_14->SetBinContent(2,0.8064713);
   hnueCCinFV_stack_14->SetBinContent(3,0.7895325);
   hnueCCinFV_stack_14->SetBinContent(5,1.416171);
   hnueCCinFV_stack_14->SetBinContent(7,0.4316896);
   hnueCCinFV_stack_14->SetBinContent(11,1.031049);
   hnueCCinFV_stack_14->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(13,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(15,0.2451269);
   hnueCCinFV_stack_14->SetBinContent(16,0.2998007);
   hnueCCinFV_stack_14->SetBinContent(17,0.2542474);
   hnueCCinFV_stack_14->SetBinContent(18,2.673714);
   hnueCCinFV_stack_14->SetBinContent(19,0.5867651);
   hnueCCinFV_stack_14->SetBinContent(20,1.035547);
   hnueCCinFV_stack_14->SetBinContent(21,1.181475);
   hnueCCinFV_stack_14->SetBinContent(22,0.8733139);
   hnueCCinFV_stack_14->SetBinContent(23,2.620772);
   hnueCCinFV_stack_14->SetBinContent(24,1.619465);
   hnueCCinFV_stack_14->SetBinContent(25,10.44772);
   hnueCCinFV_stack_14->SetBinError(1,0.6523817);
   hnueCCinFV_stack_14->SetBinError(2,0.4036823);
   hnueCCinFV_stack_14->SetBinError(3,0.457675);
   hnueCCinFV_stack_14->SetBinError(5,1.128487);
   hnueCCinFV_stack_14->SetBinError(7,0.4316896);
   hnueCCinFV_stack_14->SetBinError(11,0.5334159);
   hnueCCinFV_stack_14->SetBinError(12,0.1950249);
   hnueCCinFV_stack_14->SetBinError(13,0.1950249);
   hnueCCinFV_stack_14->SetBinError(14,0.1967154);
   hnueCCinFV_stack_14->SetBinError(15,0.2451269);
   hnueCCinFV_stack_14->SetBinError(16,0.2998007);
   hnueCCinFV_stack_14->SetBinError(17,0.2542474);
   hnueCCinFV_stack_14->SetBinError(18,1.431139);
   hnueCCinFV_stack_14->SetBinError(19,0.3387718);
   hnueCCinFV_stack_14->SetBinError(20,0.6257405);
   hnueCCinFV_stack_14->SetBinError(21,0.6355789);
   hnueCCinFV_stack_14->SetBinError(22,0.5237584);
   hnueCCinFV_stack_14->SetBinError(23,0.9808651);
   hnueCCinFV_stack_14->SetBinError(24,0.5742989);
   hnueCCinFV_stack_14->SetBinError(25,2.373998);
   hnueCCinFV_stack_14->SetEntries(97);

   ci = 1517;
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
   hs6->Add(hnueCCinFV_stack_14,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__17->SetBinContent(1,49.44821);
   hmcerror__17->SetBinContent(2,38.10014);
   hmcerror__17->SetBinContent(3,40.34376);
   hmcerror__17->SetBinContent(4,36.37473);
   hmcerror__17->SetBinContent(5,34.71334);
   hmcerror__17->SetBinContent(6,36.4453);
   hmcerror__17->SetBinContent(7,39.01964);
   hmcerror__17->SetBinContent(8,31.44017);
   hmcerror__17->SetBinContent(9,33.5425);
   hmcerror__17->SetBinContent(10,39.14236);
   hmcerror__17->SetBinContent(11,47.66788);
   hmcerror__17->SetBinContent(12,45.80224);
   hmcerror__17->SetBinContent(13,46.11473);
   hmcerror__17->SetBinContent(14,62.60202);
   hmcerror__17->SetBinContent(15,66.46168);
   hmcerror__17->SetBinContent(16,82.22199);
   hmcerror__17->SetBinContent(17,96.3183);
   hmcerror__17->SetBinContent(18,106.8319);
   hmcerror__17->SetBinContent(19,131.5473);
   hmcerror__17->SetBinContent(20,170.5842);
   hmcerror__17->SetBinContent(21,195.0506);
   hmcerror__17->SetBinContent(22,224.8199);
   hmcerror__17->SetBinContent(23,289.7175);
   hmcerror__17->SetBinContent(24,395.0178);
   hmcerror__17->SetBinContent(25,539.0494);
   hmcerror__17->SetBinError(1,12.3067);
   hmcerror__17->SetBinError(2,10.44717);
   hmcerror__17->SetBinError(3,10.78342);
   hmcerror__17->SetBinError(4,10.99702);
   hmcerror__17->SetBinError(5,9.835617);
   hmcerror__17->SetBinError(6,9.347845);
   hmcerror__17->SetBinError(7,9.493247);
   hmcerror__17->SetBinError(8,9.301381);
   hmcerror__17->SetBinError(9,8.736238);
   hmcerror__17->SetBinError(10,9.711758);
   hmcerror__17->SetBinError(11,12.14982);
   hmcerror__17->SetBinError(12,11.7196);
   hmcerror__17->SetBinError(13,11.39733);
   hmcerror__17->SetBinError(14,14.02435);
   hmcerror__17->SetBinError(15,15.92426);
   hmcerror__17->SetBinError(16,20.14422);
   hmcerror__17->SetBinError(17,23.89944);
   hmcerror__17->SetBinError(18,30.41827);
   hmcerror__17->SetBinError(19,31.77255);
   hmcerror__17->SetBinError(20,41.77465);
   hmcerror__17->SetBinError(21,48.53836);
   hmcerror__17->SetBinError(22,55.32497);
   hmcerror__17->SetBinError(23,63.16834);
   hmcerror__17->SetBinError(24,83.47414);
   hmcerror__17->SetBinError(25,119.5772);
   hmcerror__17->SetBinError(26,0.3895343);
   hmcerror__17->SetEntries(2848.296);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[25] = {
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
   Double_t _fy3021[25] = {
   48,
   45,
   40,
   39,
   33,
   37,
   37,
   43,
   45,
   56,
   47,
   44,
   51,
   48,
   64,
   78,
   112,
   102,
   119,
   173,
   188,
   237,
   275,
   409,
   568};
   Double_t _felx3021[25] = {
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
   Double_t _fely3021[25] = {
   7.0604,
   6.8416,
   6.4604,
   6.3813,
   5.8847,
   6.2203,
   6.2203,
   6.6917,
   6.8416,
   7.6127,
   6.9882,
   6.7671,
   7.2725,
   7.0604,
   8.1273,
   8.9562,
   10.58301,
   10.0995,
   10.90871,
   13.15295,
   13.71131,
   15.3948,
   16.58312,
   20.22375,
   23.83275};
   Double_t _fehx3021[25] = {
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
   Double_t _fehy3021[25] = {
   6.8561,
   6.637,
   6.2549,
   6.1757,
   5.6776,
   6.0141,
   6.0141,
   6.4868,
   6.637,
   7.4094,
   6.7839,
   6.5623,
   7.0686,
   6.8561,
   7.9246,
   8.7542,
   10.58301,
   10.0995,
   10.90871,
   13.15295,
   13.71131,
   15.3948,
   16.58312,
   20.22375,
   23.83275};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,-1.2,1.2);
   Graph_Graph3021->SetMinimum(24.40377);
   Graph_Graph3021->SetMaximum(648.3045);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.1/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2938.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 66.2","F");

   ci = 1504;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 278.3","F");

   ci = 1505;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 37.8","F");

   ci = 1506;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 302.2","F");

   ci = 1507;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  87.2","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.7","F");

   ci = 1509;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1157.9","F");

   ci = 1510;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  221.2","F");

   ci = 1511;
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

   ci = 1512;
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

   ci = 1513;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 424.0","F");

   ci = 1514;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 130.2","F");

   ci = 1515;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 137.2","F");

   ci = 1516;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 28.0","F");

   ci = 1517;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[25] = {
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
   Double_t _fy3022[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[25] = {
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
   Double_t _fely3022[25] = {
   0.2488805,
   0.2742028,
   0.2672885,
   0.302326,
   0.2833382,
   0.2564898,
   0.2432941,
   0.2958439,
   0.2604528,
   0.2481137,
   0.2548848,
   0.255874,
   0.2471515,
   0.2240239,
   0.2396006,
   0.2449979,
   0.2481298,
   0.2847301,
   0.2415295,
   0.2448918,
   0.24885,
   0.2460858,
   0.2180343,
   0.2113174,
   0.2218297};
   Double_t _fehx3022[25] = {
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
   Double_t _fehy3022[25] = {
   0.2488805,
   0.2742028,
   0.2672885,
   0.302326,
   0.2833382,
   0.2564898,
   0.2432941,
   0.2958439,
   0.2604528,
   0.2481137,
   0.2548848,
   0.255874,
   0.2471515,
   0.2240239,
   0.2396006,
   0.2449979,
   0.2481298,
   0.2847301,
   0.2415295,
   0.2448918,
   0.24885,
   0.2460858,
   0.2180343,
   0.2113174,
   0.2218297};
   grae = new TGraphAsymmErrors(25,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,-1.2,1.2);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3022->GetXaxis()->SetRange(9,92);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[25] = {
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
   Double_t _fy3023[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[25] = {
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
   Double_t _fely3023[25] = {
   0.2000524,
   0.2025641,
   0.2013983,
   0.2123401,
   0.2336292,
   0.2122463,
   0.2061028,
   0.2359033,
   0.2241901,
   0.2165459,
   0.1910981,
   0.2212719,
   0.2188771,
   0.2012922,
   0.2187754,
   0.2228241,
   0.223391,
   0.234836,
   0.2303074,
   0.2257994,
   0.2310518,
   0.2229219,
   0.2050196,
   0.1949139,
   0.213886};
   Double_t _fehx3023[25] = {
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
   Double_t _fehy3023[25] = {
   0.2000524,
   0.2025641,
   0.2013983,
   0.2123401,
   0.2336292,
   0.2122463,
   0.2061028,
   0.2359033,
   0.2241901,
   0.2165459,
   0.1910981,
   0.2212719,
   0.2188771,
   0.2012922,
   0.2187754,
   0.2228241,
   0.223391,
   0.234836,
   0.2303074,
   0.2257994,
   0.2310518,
   0.2229219,
   0.2050196,
   0.1949139,
   0.213886};
   grae = new TGraphAsymmErrors(25,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,-1.2,1.2);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(9,92);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[25] = {
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
   Double_t _fy3024[25] = {
   0.9707126,
   1.181098,
   0.9914793,
   1.072173,
   0.9506432,
   1.01522,
   0.9482404,
   1.367677,
   1.341581,
   1.430675,
   0.9859889,
   0.9606517,
   1.105937,
   0.7667484,
   0.9629609,
   0.9486513,
   1.162811,
   0.9547706,
   0.9046177,
   1.014162,
   0.9638522,
   1.054177,
   0.9492006,
   1.035396,
   1.053707};
   Double_t _felx3024[25] = {
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
   Double_t _fely3024[25] = {
   0.1427837,
   0.1795689,
   0.1601338,
   0.1754323,
   0.1695227,
   0.170675,
   0.1594146,
   0.2128392,
   0.2039681,
   0.1944875,
   0.1466019,
   0.1477461,
   0.1577045,
   0.1127823,
   0.1222855,
   0.1089271,
   0.1098753,
   0.09453638,
   0.08292617,
   0.07710532,
   0.07029615,
   0.06847618,
   0.05723895,
   0.05119706,
   0.04421255};
   Double_t _fehx3024[25] = {
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
   Double_t _fehy3024[25] = {
   0.1386521,
   0.1741988,
   0.1550401,
   0.16978,
   0.1635567,
   0.1650172,
   0.1541301,
   0.2063221,
   0.1978684,
   0.1892936,
   0.142316,
   0.1432747,
   0.1532829,
   0.1095188,
   0.1192356,
   0.1064703,
   0.1098753,
   0.09453638,
   0.08292617,
   0.07710532,
   0.07029615,
   0.06847618,
   0.05723895,
   0.05119706,
   0.04421255};
   grae = new TGraphAsymmErrors(25,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,-1.2,1.2);
   Graph_Graph3024->SetMinimum(0.5573658);
   Graph_Graph3024->SetMaximum(1.716569);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_pi0_costheta_all",25,-1,1);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
