#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Feb 18 13:51:04 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",86,109,1200,900);
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
   pad1->Range(-4.119231,-1.08,3.957692,119.4253);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__22->SetBinContent(1,38.84901);
   hmc__22->SetBinContent(2,36.95842);
   hmc__22->SetBinContent(3,40.78595);
   hmc__22->SetBinContent(4,41.69113);
   hmc__22->SetBinContent(5,36.99643);
   hmc__22->SetBinContent(6,44.69323);
   hmc__22->SetBinContent(7,42.78729);
   hmc__22->SetBinContent(8,38.47781);
   hmc__22->SetBinContent(9,39.10749);
   hmc__22->SetBinContent(10,36.97002);
   hmc__22->SetBinContent(11,38.70251);
   hmc__22->SetBinContent(12,35.71817);
   hmc__22->SetBinContent(13,41.85362);
   hmc__22->SetBinContent(14,39.39602);
   hmc__22->SetBinContent(15,37.14385);
   hmc__22->SetBinContent(16,37.07214);
   hmc__22->SetBinContent(17,45.38895);
   hmc__22->SetBinContent(18,39.8984);
   hmc__22->SetBinContent(19,35.69916);
   hmc__22->SetBinContent(20,43.93579);
   hmc__22->SetBinContent(21,43.36818);
   hmc__22->SetBinContent(22,37.24799);
   hmc__22->SetBinContent(23,45.74657);
   hmc__22->SetBinContent(24,45.50969);
   hmc__22->SetBinError(1,17.97128);
   hmc__22->SetBinError(2,15.88237);
   hmc__22->SetBinError(3,15.97611);
   hmc__22->SetBinError(4,14.60077);
   hmc__22->SetBinError(5,12.85443);
   hmc__22->SetBinError(6,15.1699);
   hmc__22->SetBinError(7,17.25276);
   hmc__22->SetBinError(8,15.88517);
   hmc__22->SetBinError(9,18.1557);
   hmc__22->SetBinError(10,18.1119);
   hmc__22->SetBinError(11,15.79811);
   hmc__22->SetBinError(12,20.93541);
   hmc__22->SetBinError(13,18.17031);
   hmc__22->SetBinError(14,14.9631);
   hmc__22->SetBinError(15,16.23918);
   hmc__22->SetBinError(16,14.65761);
   hmc__22->SetBinError(17,14.0997);
   hmc__22->SetBinError(18,14.42321);
   hmc__22->SetBinError(19,14.28309);
   hmc__22->SetBinError(20,15.5724);
   hmc__22->SetBinError(21,20.17405);
   hmc__22->SetBinError(22,18.15191);
   hmc__22->SetBinError(23,24.92417);
   hmc__22->SetBinError(24,19.21259);
   hmc__22->SetBinError(25,0.3895343);
   hmc__22->SetMinimum(-1.08);
   hmc__22->SetMaximum(113.4);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,-3.15,3.15);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(48.0339);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.127039);
   hbadmatch_stack_1->SetBinContent(2,1.549226);
   hbadmatch_stack_1->SetBinContent(3,2.695358);
   hbadmatch_stack_1->SetBinContent(4,1.509246);
   hbadmatch_stack_1->SetBinContent(5,1.179776);
   hbadmatch_stack_1->SetBinContent(6,2.060133);
   hbadmatch_stack_1->SetBinContent(7,1.207408);
   hbadmatch_stack_1->SetBinContent(8,1.020533);
   hbadmatch_stack_1->SetBinContent(9,2.308651);
   hbadmatch_stack_1->SetBinContent(10,1.856418);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.6218678);
   hbadmatch_stack_1->SetBinContent(13,0.6155995);
   hbadmatch_stack_1->SetBinContent(14,2.037187);
   hbadmatch_stack_1->SetBinContent(15,1.454438);
   hbadmatch_stack_1->SetBinContent(16,1.320237);
   hbadmatch_stack_1->SetBinContent(17,0.6803553);
   hbadmatch_stack_1->SetBinContent(18,1.961993);
   hbadmatch_stack_1->SetBinContent(19,0.9957047);
   hbadmatch_stack_1->SetBinContent(20,1.072098);
   hbadmatch_stack_1->SetBinContent(21,1.660918);
   hbadmatch_stack_1->SetBinContent(22,0.9269427);
   hbadmatch_stack_1->SetBinContent(23,0.9303237);
   hbadmatch_stack_1->SetBinContent(24,1.802323);
   hbadmatch_stack_1->SetBinError(1,0.5201044);
   hbadmatch_stack_1->SetBinError(2,0.6496635);
   hbadmatch_stack_1->SetBinError(3,0.8835606);
   hbadmatch_stack_1->SetBinError(4,0.6362647);
   hbadmatch_stack_1->SetBinError(5,0.5410744);
   hbadmatch_stack_1->SetBinError(6,0.7628245);
   hbadmatch_stack_1->SetBinError(7,0.5693764);
   hbadmatch_stack_1->SetBinError(8,0.5892049);
   hbadmatch_stack_1->SetBinError(9,0.9176655);
   hbadmatch_stack_1->SetBinError(10,1.140919);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.3601254);
   hbadmatch_stack_1->SetBinError(13,0.3560237);
   hbadmatch_stack_1->SetBinError(14,0.7448975);
   hbadmatch_stack_1->SetBinError(15,0.66492);
   hbadmatch_stack_1->SetBinError(16,0.6200829);
   hbadmatch_stack_1->SetBinError(17,0.4810838);
   hbadmatch_stack_1->SetBinError(18,0.8657011);
   hbadmatch_stack_1->SetBinError(19,0.5116729);
   hbadmatch_stack_1->SetBinError(20,0.5551335);
   hbadmatch_stack_1->SetBinError(21,0.6968091);
   hbadmatch_stack_1->SetBinError(22,0.4800908);
   hbadmatch_stack_1->SetBinError(23,0.4814682);
   hbadmatch_stack_1->SetBinError(24,0.7070809);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,4.468179);
   hext_stack_2->SetBinContent(2,7.601229);
   hext_stack_2->SetBinContent(3,6.374251);
   hext_stack_2->SetBinContent(4,11.4162);
   hext_stack_2->SetBinContent(5,11.87187);
   hext_stack_2->SetBinContent(6,13.5314);
   hext_stack_2->SetBinContent(7,15.80659);
   hext_stack_2->SetBinContent(8,11.49123);
   hext_stack_2->SetBinContent(9,8.275974);
   hext_stack_2->SetBinContent(10,4.613812);
   hext_stack_2->SetBinContent(11,6.620856);
   hext_stack_2->SetBinContent(12,3.725593);
   hext_stack_2->SetBinContent(13,7.187449);
   hext_stack_2->SetBinContent(14,7.015866);
   hext_stack_2->SetBinContent(15,6.146417);
   hext_stack_2->SetBinContent(16,6.78085);
   hext_stack_2->SetBinContent(17,12.5179);
   hext_stack_2->SetBinContent(18,11.23744);
   hext_stack_2->SetBinContent(19,6.959614);
   hext_stack_2->SetBinContent(20,10.51085);
   hext_stack_2->SetBinContent(21,4.874778);
   hext_stack_2->SetBinContent(22,4.207213);
   hext_stack_2->SetBinContent(23,8.581601);
   hext_stack_2->SetBinContent(24,7.302782);
   hext_stack_2->SetBinError(1,1.297469);
   hext_stack_2->SetBinError(2,1.865604);
   hext_stack_2->SetBinError(3,1.784857);
   hext_stack_2->SetBinError(4,2.195067);
   hext_stack_2->SetBinError(5,2.390274);
   hext_stack_2->SetBinError(6,2.388518);
   hext_stack_2->SetBinError(7,2.564523);
   hext_stack_2->SetBinError(8,2.253798);
   hext_stack_2->SetBinError(9,1.795123);
   hext_stack_2->SetBinError(10,1.439057);
   hext_stack_2->SetBinError(11,1.834661);
   hext_stack_2->SetBinError(12,1.216121);
   hext_stack_2->SetBinError(13,1.875196);
   hext_stack_2->SetBinError(14,1.896677);
   hext_stack_2->SetBinError(15,1.65474);
   hext_stack_2->SetBinError(16,1.830584);
   hext_stack_2->SetBinError(17,2.50204);
   hext_stack_2->SetBinError(18,2.258438);
   hext_stack_2->SetBinError(19,1.751802);
   hext_stack_2->SetBinError(20,2.228252);
   hext_stack_2->SetBinError(21,1.359687);
   hext_stack_2->SetBinError(22,1.380421);
   hext_stack_2->SetBinError(23,1.896043);
   hext_stack_2->SetBinError(24,1.704924);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(2,0.4950385);
   hdirt_stack_3->SetBinContent(3,0.9485314);
   hdirt_stack_3->SetBinContent(4,1.713947);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.8176458);
   hdirt_stack_3->SetBinContent(7,1.07622);
   hdirt_stack_3->SetBinContent(8,0.7431665);
   hdirt_stack_3->SetBinContent(9,1.226169);
   hdirt_stack_3->SetBinContent(10,0.3569671);
   hdirt_stack_3->SetBinContent(11,0.8534844);
   hdirt_stack_3->SetBinContent(12,0.89527);
   hdirt_stack_3->SetBinContent(13,0.1380715);
   hdirt_stack_3->SetBinContent(14,1.03727);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.8725539);
   hdirt_stack_3->SetBinContent(18,1.151725);
   hdirt_stack_3->SetBinContent(19,1.329689);
   hdirt_stack_3->SetBinContent(20,1.796039);
   hdirt_stack_3->SetBinContent(21,1.233073);
   hdirt_stack_3->SetBinContent(22,0.9018039);
   hdirt_stack_3->SetBinContent(23,0.7492774);
   hdirt_stack_3->SetBinContent(24,0.63311);
   hdirt_stack_3->SetBinError(2,0.2933304);
   hdirt_stack_3->SetBinError(3,0.4941443);
   hdirt_stack_3->SetBinError(4,0.7336522);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.4797697);
   hdirt_stack_3->SetBinError(7,0.5054947);
   hdirt_stack_3->SetBinError(8,0.4648968);
   hdirt_stack_3->SetBinError(9,0.6315351);
   hdirt_stack_3->SetBinError(10,0.258803);
   hdirt_stack_3->SetBinError(11,0.4543325);
   hdirt_stack_3->SetBinError(12,0.5259814);
   hdirt_stack_3->SetBinError(13,0.1380715);
   hdirt_stack_3->SetBinError(14,0.5438158);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.53408);
   hdirt_stack_3->SetBinError(18,0.4793627);
   hdirt_stack_3->SetBinError(19,0.6304943);
   hdirt_stack_3->SetBinError(20,1.071558);
   hdirt_stack_3->SetBinError(21,0.5611196);
   hdirt_stack_3->SetBinError(22,0.5039036);
   hdirt_stack_3->SetBinError(23,0.4699855);
   hdirt_stack_3->SetBinError(24,0.3242013);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,8.304445);
   houtFV_stack_4->SetBinContent(2,7.937001);
   houtFV_stack_4->SetBinContent(3,8.757318);
   houtFV_stack_4->SetBinContent(4,7.725049);
   houtFV_stack_4->SetBinContent(5,7.296178);
   houtFV_stack_4->SetBinContent(6,8.332467);
   houtFV_stack_4->SetBinContent(7,5.611623);
   houtFV_stack_4->SetBinContent(8,7.726695);
   houtFV_stack_4->SetBinContent(9,7.565938);
   houtFV_stack_4->SetBinContent(10,9.077459);
   houtFV_stack_4->SetBinContent(11,9.791422);
   houtFV_stack_4->SetBinContent(12,7.549183);
   houtFV_stack_4->SetBinContent(13,7.806563);
   houtFV_stack_4->SetBinContent(14,6.194522);
   houtFV_stack_4->SetBinContent(15,8.683971);
   houtFV_stack_4->SetBinContent(16,9.417532);
   houtFV_stack_4->SetBinContent(17,8.973627);
   houtFV_stack_4->SetBinContent(18,8.214327);
   houtFV_stack_4->SetBinContent(19,6.933891);
   houtFV_stack_4->SetBinContent(20,11.08075);
   houtFV_stack_4->SetBinContent(21,8.893734);
   houtFV_stack_4->SetBinContent(22,8.854632);
   houtFV_stack_4->SetBinContent(23,9.080696);
   houtFV_stack_4->SetBinContent(24,13.90309);
   houtFV_stack_4->SetBinError(1,1.455566);
   houtFV_stack_4->SetBinError(2,1.333628);
   houtFV_stack_4->SetBinError(3,1.548301);
   houtFV_stack_4->SetBinError(4,1.418122);
   houtFV_stack_4->SetBinError(5,1.334958);
   houtFV_stack_4->SetBinError(6,1.459554);
   houtFV_stack_4->SetBinError(7,1.188686);
   houtFV_stack_4->SetBinError(8,1.394209);
   houtFV_stack_4->SetBinError(9,1.35913);
   houtFV_stack_4->SetBinError(10,1.529958);
   houtFV_stack_4->SetBinError(11,1.837587);
   houtFV_stack_4->SetBinError(12,1.409602);
   houtFV_stack_4->SetBinError(13,1.407624);
   houtFV_stack_4->SetBinError(14,1.224577);
   houtFV_stack_4->SetBinError(15,1.500429);
   houtFV_stack_4->SetBinError(16,1.563451);
   houtFV_stack_4->SetBinError(17,1.551286);
   houtFV_stack_4->SetBinError(18,1.519838);
   houtFV_stack_4->SetBinError(19,1.255246);
   houtFV_stack_4->SetBinError(20,1.65779);
   houtFV_stack_4->SetBinError(21,1.489849);
   houtFV_stack_4->SetBinError(22,1.450378);
   houtFV_stack_4->SetBinError(23,1.510639);
   houtFV_stack_4->SetBinError(24,2.225237);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.5988538);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.502368);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.8511223);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.892472);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6413721);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.445904);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5015358);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.599022);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4178359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.9069222);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.4042178);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.6835541);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.6403718);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.03214);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.362868);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.502368);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.9052579);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.1922885);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2162644);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3588378);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3223657);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3113101);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2422936);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1658436);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2640716);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.158647);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3610006);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1342881);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3022172);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2118699);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.3749275);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2070706);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2162644);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.302967);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2501964);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,4.741024);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.047924);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.39535);
   hNCpi0inFVres_stack_7->SetBinContent(4,5.674182);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.183688);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.726326);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.338718);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.838342);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.969464);
   hNCpi0inFVres_stack_7->SetBinContent(10,6.927857);
   hNCpi0inFVres_stack_7->SetBinContent(11,5.282918);
   hNCpi0inFVres_stack_7->SetBinContent(12,6.496572);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.696448);
   hNCpi0inFVres_stack_7->SetBinContent(14,6.358072);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.779877);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.606596);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.215492);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.792752);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.351256);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.925122);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.853456);
   hNCpi0inFVres_stack_7->SetBinContent(22,6.329836);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.746175);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.565157);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6796061);
   hNCpi0inFVres_stack_7->SetBinError(2,0.6858768);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7611877);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7446018);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6578781);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7469501);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7473846);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6865386);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8123479);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8140623);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7463423);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8143414);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9348319);
   hNCpi0inFVres_stack_7->SetBinError(14,0.8433771);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6158092);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7855131);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7126404);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5969824);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6857353);
   hNCpi0inFVres_stack_7->SetBinError(20,0.820492);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6958766);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8031119);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8150976);
   hNCpi0inFVres_stack_7->SetBinError(24,0.807823);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.301266);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.034716);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.910994);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.087604);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.394672);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.8507857);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.71403);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.435694);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.17064);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.17164);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.896544);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.9057537);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.839912);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.9753399);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.310308);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.076066);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.8228858);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7949858);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.9489359);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.7941537);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.078226);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.421076);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.631658);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.855194);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.572069);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4917626);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4871906);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.2767844);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3434108);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2514891);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4397425);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4148453);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3040354);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3800824);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4592961);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.2133949);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4360389);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2949384);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3592889);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.465817);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2499367);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2483746);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3032882);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2059702);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4574563);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3360594);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4050343);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4855902);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,9.155256);
   hCCpi0inFV_stack_10->SetBinContent(2,7.332837);
   hCCpi0inFV_stack_10->SetBinContent(3,9.459256);
   hCCpi0inFV_stack_10->SetBinContent(4,6.015102);
   hCCpi0inFV_stack_10->SetBinContent(5,5.761753);
   hCCpi0inFV_stack_10->SetBinContent(6,6.595454);
   hCCpi0inFV_stack_10->SetBinContent(7,5.908596);
   hCCpi0inFV_stack_10->SetBinContent(8,7.569147);
   hCCpi0inFV_stack_10->SetBinContent(9,6.410223);
   hCCpi0inFV_stack_10->SetBinContent(10,8.74643);
   hCCpi0inFV_stack_10->SetBinContent(11,7.522655);
   hCCpi0inFV_stack_10->SetBinContent(12,8.713849);
   hCCpi0inFV_stack_10->SetBinContent(13,9.460732);
   hCCpi0inFV_stack_10->SetBinContent(14,7.867905);
   hCCpi0inFV_stack_10->SetBinContent(15,8.539807);
   hCCpi0inFV_stack_10->SetBinContent(16,6.315266);
   hCCpi0inFV_stack_10->SetBinContent(17,8.860384);
   hCCpi0inFV_stack_10->SetBinContent(18,7.327631);
   hCCpi0inFV_stack_10->SetBinContent(19,7.84023);
   hCCpi0inFV_stack_10->SetBinContent(20,5.843644);
   hCCpi0inFV_stack_10->SetBinContent(21,9.950232);
   hCCpi0inFV_stack_10->SetBinContent(22,9.866888);
   hCCpi0inFV_stack_10->SetBinContent(23,8.601515);
   hCCpi0inFV_stack_10->SetBinContent(24,7.323274);
   hCCpi0inFV_stack_10->SetBinError(1,1.545408);
   hCCpi0inFV_stack_10->SetBinError(2,1.368504);
   hCCpi0inFV_stack_10->SetBinError(3,1.549578);
   hCCpi0inFV_stack_10->SetBinError(4,1.193582);
   hCCpi0inFV_stack_10->SetBinError(5,1.192872);
   hCCpi0inFV_stack_10->SetBinError(6,1.264137);
   hCCpi0inFV_stack_10->SetBinError(7,1.225272);
   hCCpi0inFV_stack_10->SetBinError(8,1.387406);
   hCCpi0inFV_stack_10->SetBinError(9,1.225845);
   hCCpi0inFV_stack_10->SetBinError(10,1.5172);
   hCCpi0inFV_stack_10->SetBinError(11,1.402095);
   hCCpi0inFV_stack_10->SetBinError(12,1.512527);
   hCCpi0inFV_stack_10->SetBinError(13,1.549659);
   hCCpi0inFV_stack_10->SetBinError(14,1.44346);
   hCCpi0inFV_stack_10->SetBinError(15,1.52043);
   hCCpi0inFV_stack_10->SetBinError(16,1.235485);
   hCCpi0inFV_stack_10->SetBinError(17,1.492116);
   hCCpi0inFV_stack_10->SetBinError(18,1.388465);
   hCCpi0inFV_stack_10->SetBinError(19,1.37118);
   hCCpi0inFV_stack_10->SetBinError(20,1.207365);
   hCCpi0inFV_stack_10->SetBinError(21,1.611475);
   hCCpi0inFV_stack_10->SetBinError(22,1.638103);
   hCCpi0inFV_stack_10->SetBinError(23,1.484078);
   hCCpi0inFV_stack_10->SetBinError(24,1.337267);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.587494);
   hNCinFV_stack_11->SetBinContent(2,1.465526);
   hNCinFV_stack_11->SetBinContent(3,1.123658);
   hNCinFV_stack_11->SetBinContent(4,1.858957);
   hNCinFV_stack_11->SetBinContent(5,1.26712);
   hNCinFV_stack_11->SetBinContent(6,2.145881);
   hNCinFV_stack_11->SetBinContent(7,1.072095);
   hNCinFV_stack_11->SetBinContent(8,1.320373);
   hNCinFV_stack_11->SetBinContent(9,1.463836);
   hNCinFV_stack_11->SetBinContent(10,1.217248);
   hNCinFV_stack_11->SetBinContent(11,1.517089);
   hNCinFV_stack_11->SetBinContent(12,1.073786);
   hNCinFV_stack_11->SetBinContent(13,0.9269427);
   hNCinFV_stack_11->SetBinContent(14,1.712114);
   hNCinFV_stack_11->SetBinContent(15,1.318683);
   hNCinFV_stack_11->SetBinContent(16,0.536893);
   hNCinFV_stack_11->SetBinContent(17,1.857266);
   hNCinFV_stack_11->SetBinContent(18,2.640747);
   hNCinFV_stack_11->SetBinContent(20,2.199135);
   hNCinFV_stack_11->SetBinContent(21,2.782519);
   hNCinFV_stack_11->SetBinContent(22,1.318683);
   hNCinFV_stack_11->SetBinContent(23,1.320373);
   hNCinFV_stack_11->SetBinContent(24,1.557426);
   hNCinFV_stack_11->SetBinError(1,0.8087577);
   hNCinFV_stack_11->SetBinError(2,0.6209405);
   hNCinFV_stack_11->SetBinError(3,0.5188295);
   hNCinFV_stack_11->SetBinError(4,0.6804124);
   hNCinFV_stack_11->SetBinError(5,0.5883944);
   hNCinFV_stack_11->SetBinError(6,0.785499);
   hNCinFV_stack_11->SetBinError(7,0.5551335);
   hNCinFV_stack_11->SetBinError(8,0.5548703);
   hNCinFV_stack_11->SetBinError(9,0.620407);
   hNCinFV_stack_11->SetBinError(10,0.6211758);
   hNCinFV_stack_11->SetBinError(11,0.5887087);
   hNCinFV_stack_11->SetBinError(12,0.5557297);
   hNCinFV_stack_11->SetBinError(13,0.4800908);
   hNCinFV_stack_11->SetBinError(14,0.6201715);
   hNCinFV_stack_11->SetBinError(15,0.5542732);
   hNCinFV_stack_11->SetBinError(16,0.3929602);
   hNCinFV_stack_11->SetBinError(17,0.6799255);
   hNCinFV_stack_11->SetBinError(18,0.784705);
   hNCinFV_stack_11->SetBinError(20,0.7607114);
   hNCinFV_stack_11->SetBinError(21,0.8319397);
   hNCinFV_stack_11->SetBinError(22,0.5542732);
   hNCinFV_stack_11->SetBinError(23,0.5548703);
   hNCinFV_stack_11->SetBinError(24,0.7082233);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,5.368732);
   hnumuCCinFV_stack_12->SetBinContent(2,2.690008);
   hnumuCCinFV_stack_12->SetBinContent(3,3.019675);
   hnumuCCinFV_stack_12->SetBinContent(4,3.742569);
   hnumuCCinFV_stack_12->SetBinContent(5,3.234023);
   hnumuCCinFV_stack_12->SetBinContent(6,4.159331);
   hnumuCCinFV_stack_12->SetBinContent(7,3.979667);
   hnumuCCinFV_stack_12->SetBinContent(8,1.606487);
   hnumuCCinFV_stack_12->SetBinContent(9,4.325833);
   hnumuCCinFV_stack_12->SetBinContent(10,2.484957);
   hnumuCCinFV_stack_12->SetBinContent(11,4.169282);
   hnumuCCinFV_stack_12->SetBinContent(12,4.791523);
   hnumuCCinFV_stack_12->SetBinContent(13,5.020921);
   hnumuCCinFV_stack_12->SetBinContent(14,5.290819);
   hnumuCCinFV_stack_12->SetBinContent(15,4.112698);
   hnumuCCinFV_stack_12->SetBinContent(16,4.197075);
   hnumuCCinFV_stack_12->SetBinContent(17,4.706977);
   hnumuCCinFV_stack_12->SetBinContent(18,2.108531);
   hnumuCCinFV_stack_12->SetBinContent(19,4.600738);
   hnumuCCinFV_stack_12->SetBinContent(20,4.323226);
   hnumuCCinFV_stack_12->SetBinContent(21,6.34216);
   hnumuCCinFV_stack_12->SetBinContent(22,3.030144);
   hnumuCCinFV_stack_12->SetBinContent(23,6.77938);
   hnumuCCinFV_stack_12->SetBinContent(24,3.954034);
   hnumuCCinFV_stack_12->SetBinError(1,1.259504);
   hnumuCCinFV_stack_12->SetBinError(2,0.7484867);
   hnumuCCinFV_stack_12->SetBinError(3,0.857219);
   hnumuCCinFV_stack_12->SetBinError(4,0.9676849);
   hnumuCCinFV_stack_12->SetBinError(5,1.412956);
   hnumuCCinFV_stack_12->SetBinError(6,1.097687);
   hnumuCCinFV_stack_12->SetBinError(7,1.06883);
   hnumuCCinFV_stack_12->SetBinError(8,0.6136001);
   hnumuCCinFV_stack_12->SetBinError(9,1.206281);
   hnumuCCinFV_stack_12->SetBinError(10,0.7624809);
   hnumuCCinFV_stack_12->SetBinError(11,1.026117);
   hnumuCCinFV_stack_12->SetBinError(12,1.103743);
   hnumuCCinFV_stack_12->SetBinError(13,1.171673);
   hnumuCCinFV_stack_12->SetBinError(14,1.163016);
   hnumuCCinFV_stack_12->SetBinError(15,1.041802);
   hnumuCCinFV_stack_12->SetBinError(16,1.01867);
   hnumuCCinFV_stack_12->SetBinError(17,1.237784);
   hnumuCCinFV_stack_12->SetBinError(18,0.7655425);
   hnumuCCinFV_stack_12->SetBinError(19,2.092834);
   hnumuCCinFV_stack_12->SetBinError(20,1.039752);
   hnumuCCinFV_stack_12->SetBinError(21,2.539033);
   hnumuCCinFV_stack_12->SetBinError(22,0.8678292);
   hnumuCCinFV_stack_12->SetBinError(23,1.367663);
   hnumuCCinFV_stack_12->SetBinError(24,1.051892);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(2,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(7,0.47249);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(13,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(17,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(19,0.7069596);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.4203105);
   hnueCCinFV_stack_13->SetBinError(1,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.3025491);
   hnueCCinFV_stack_13->SetBinError(7,0.3344052);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.4566905);
   hnueCCinFV_stack_13->SetBinError(13,0.7431478);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(17,0.2781975);
   hnueCCinFV_stack_13->SetBinError(19,0.5353745);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.2979737);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__23->SetBinContent(1,38.84901);
   hmcerror__23->SetBinContent(2,36.95842);
   hmcerror__23->SetBinContent(3,40.78595);
   hmcerror__23->SetBinContent(4,41.69113);
   hmcerror__23->SetBinContent(5,36.99643);
   hmcerror__23->SetBinContent(6,44.69323);
   hmcerror__23->SetBinContent(7,42.78729);
   hmcerror__23->SetBinContent(8,38.47781);
   hmcerror__23->SetBinContent(9,39.10749);
   hmcerror__23->SetBinContent(10,36.97002);
   hmcerror__23->SetBinContent(11,38.70251);
   hmcerror__23->SetBinContent(12,35.71817);
   hmcerror__23->SetBinContent(13,41.85362);
   hmcerror__23->SetBinContent(14,39.39602);
   hmcerror__23->SetBinContent(15,37.14385);
   hmcerror__23->SetBinContent(16,37.07214);
   hmcerror__23->SetBinContent(17,45.38895);
   hmcerror__23->SetBinContent(18,39.8984);
   hmcerror__23->SetBinContent(19,35.69916);
   hmcerror__23->SetBinContent(20,43.93579);
   hmcerror__23->SetBinContent(21,43.36818);
   hmcerror__23->SetBinContent(22,37.24799);
   hmcerror__23->SetBinContent(23,45.74657);
   hmcerror__23->SetBinContent(24,45.50969);
   hmcerror__23->SetBinError(1,17.97128);
   hmcerror__23->SetBinError(2,15.88237);
   hmcerror__23->SetBinError(3,15.97611);
   hmcerror__23->SetBinError(4,14.60077);
   hmcerror__23->SetBinError(5,12.85443);
   hmcerror__23->SetBinError(6,15.1699);
   hmcerror__23->SetBinError(7,17.25276);
   hmcerror__23->SetBinError(8,15.88517);
   hmcerror__23->SetBinError(9,18.1557);
   hmcerror__23->SetBinError(10,18.1119);
   hmcerror__23->SetBinError(11,15.79811);
   hmcerror__23->SetBinError(12,20.93541);
   hmcerror__23->SetBinError(13,18.17031);
   hmcerror__23->SetBinError(14,14.9631);
   hmcerror__23->SetBinError(15,16.23918);
   hmcerror__23->SetBinError(16,14.65761);
   hmcerror__23->SetBinError(17,14.0997);
   hmcerror__23->SetBinError(18,14.42321);
   hmcerror__23->SetBinError(19,14.28309);
   hmcerror__23->SetBinError(20,15.5724);
   hmcerror__23->SetBinError(21,20.17405);
   hmcerror__23->SetBinError(22,18.15191);
   hmcerror__23->SetBinError(23,24.92417);
   hmcerror__23->SetBinError(24,19.21259);
   hmcerror__23->SetBinError(25,0.3895343);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3029[24] = {
   44,
   31,
   29,
   23,
   32,
   39,
   45,
   37,
   37,
   36,
   30,
   54,
   47,
   40,
   30,
   44,
   38,
   31,
   40,
   32,
   30,
   31,
   46,
   39};
   Double_t _felx3029[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3029[24] = {
   6.7671,
   5.7094,
   5.5285,
   4.9457,
   5.7977,
   6.3813,
   6.8416,
   6.2203,
   6.2203,
   6.1381,
   5.6197,
   7.4785,
   6.9882,
   6.4604,
   5.6197,
   6.7671,
   6.3013,
   5.7094,
   6.4604,
   5.7977,
   5.6197,
   5.7094,
   6.9153,
   6.3813};
   Double_t _fehx3029[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3029[24] = {
   6.5623,
   5.5017,
   5.3201,
   4.7346,
   5.5904,
   6.1757,
   6.637,
   6.0141,
   6.0141,
   5.9318,
   5.4117,
   7.275,
   6.7839,
   6.2549,
   5.4117,
   6.5623,
   6.0955,
   5.5017,
   6.2549,
   5.5904,
   5.4117,
   5.5017,
   6.7108,
   6.1757};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-3.78,3.78);
   Graph_Graph3029->SetMinimum(13.73223);
   Graph_Graph3029->SetMaximum(65.59707);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.2/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 885.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 199.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 203.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  133.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  34.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 187.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 36.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 98.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3030[24] = {
   0.4625931,
   0.429736,
   0.3917062,
   0.3502128,
   0.3474505,
   0.3394227,
   0.4032215,
   0.4128397,
   0.4642512,
   0.4899076,
   0.4081935,
   0.5861277,
   0.4341394,
   0.3798125,
   0.437197,
   0.3953807,
   0.3106416,
   0.3614984,
   0.400096,
   0.3544354,
   0.4651808,
   0.487326,
   0.5448315,
   0.4221647};
   Double_t _fehx3030[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3030[24] = {
   0.4625931,
   0.429736,
   0.3917062,
   0.3502128,
   0.3474505,
   0.3394227,
   0.4032215,
   0.4128397,
   0.4642512,
   0.4899076,
   0.4081935,
   0.5861277,
   0.4341394,
   0.3798125,
   0.437197,
   0.3953807,
   0.3106416,
   0.3614984,
   0.400096,
   0.3544354,
   0.4651808,
   0.487326,
   0.5448315,
   0.4221647};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-3.78,3.78);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3030->GetXaxis()->SetRange(9,92);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3031[24] = {
   0.1897114,
   0.1898475,
   0.2008646,
   0.1760331,
   0.1635124,
   0.1644792,
   0.1564588,
   0.1763809,
   0.1835917,
   0.20027,
   0.1938525,
   0.1988622,
   0.1952458,
   0.178255,
   0.2121909,
   0.1927872,
   0.1781541,
   0.1641465,
   0.1829658,
   0.1853046,
   0.2075935,
   0.1973394,
   0.1766453,
   0.1827941};
   Double_t _fehx3031[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3031[24] = {
   0.1897114,
   0.1898475,
   0.2008646,
   0.1760331,
   0.1635124,
   0.1644792,
   0.1564588,
   0.1763809,
   0.1835917,
   0.20027,
   0.1938525,
   0.1988622,
   0.1952458,
   0.178255,
   0.2121909,
   0.1927872,
   0.1781541,
   0.1641465,
   0.1829658,
   0.1853046,
   0.2075935,
   0.1973394,
   0.1766453,
   0.1827941};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-3.78,3.78);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(9,92);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3032[24] = {
   1.13259,
   0.8387804,
   0.7110292,
   0.5516761,
   0.8649484,
   0.8726155,
   1.051714,
   0.9615931,
   0.9461102,
   0.9737619,
   0.7751436,
   1.511835,
   1.122961,
   1.015331,
   0.8076708,
   1.186875,
   0.8372081,
   0.7769735,
   1.120475,
   0.7283355,
   0.6917514,
   0.8322598,
   1.00554,
   0.8569603};
   Double_t _felx3032[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3032[24] = {
   0.1741898,
   0.1544817,
   0.1355491,
   0.1186271,
   0.1567097,
   0.14278,
   0.159898,
   0.1616594,
   0.1590565,
   0.1660291,
   0.1452025,
   0.2093752,
   0.1669676,
   0.1639861,
   0.1512956,
   0.1825387,
   0.1388289,
   0.1430985,
   0.1809679,
   0.1319585,
   0.1295812,
   0.1532808,
   0.1511654,
   0.1402185};
   Double_t _fehx3032[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3032[24] = {
   0.1689181,
   0.1488619,
   0.1304395,
   0.1135637,
   0.1511065,
   0.1381798,
   0.1551162,
   0.1563005,
   0.1537838,
   0.1604489,
   0.1398282,
   0.2036778,
   0.1620863,
   0.1587699,
   0.1456957,
   0.1770143,
   0.1342948,
   0.1378927,
   0.1752114,
   0.1272402,
   0.124785,
   0.1477046,
   0.1466951,
   0.1357008};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-3.78,3.78);
   Graph_Graph3032->SetMinimum(0.3048025);
   Graph_Graph3032->SetMaximum(1.84376);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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
