#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Feb 18 12:26:06 2023) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
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
   pad1->Range(-4.119231,-5.447823,3.957692,602.4146);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__4->SetBinContent(1,265.5634);
   hmc__4->SetBinContent(2,272.3912);
   hmc__4->SetBinContent(3,269.1263);
   hmc__4->SetBinContent(4,268.8506);
   hmc__4->SetBinContent(5,215.9377);
   hmc__4->SetBinContent(6,219.7513);
   hmc__4->SetBinContent(7,218.017);
   hmc__4->SetBinContent(8,213.5578);
   hmc__4->SetBinContent(9,242.5679);
   hmc__4->SetBinContent(10,236.3772);
   hmc__4->SetBinContent(11,255.0173);
   hmc__4->SetBinContent(12,228.0661);
   hmc__4->SetBinContent(13,239.233);
   hmc__4->SetBinContent(14,246.0757);
   hmc__4->SetBinContent(15,259.9511);
   hmc__4->SetBinContent(16,241.2478);
   hmc__4->SetBinContent(17,225.052);
   hmc__4->SetBinContent(18,215.1814);
   hmc__4->SetBinContent(19,216.085);
   hmc__4->SetBinContent(20,226.9455);
   hmc__4->SetBinContent(21,250.6948);
   hmc__4->SetBinContent(22,259.5627);
   hmc__4->SetBinContent(23,259.5106);
   hmc__4->SetBinContent(24,243.9922);
   hmc__4->SetBinError(1,74.93302);
   hmc__4->SetBinError(2,78.16908);
   hmc__4->SetBinError(3,70.83305);
   hmc__4->SetBinError(4,69.21632);
   hmc__4->SetBinError(5,57.26069);
   hmc__4->SetBinError(6,54.3874);
   hmc__4->SetBinError(7,59.98777);
   hmc__4->SetBinError(8,60.63264);
   hmc__4->SetBinError(9,70.34526);
   hmc__4->SetBinError(10,66.60082);
   hmc__4->SetBinError(11,70.54235);
   hmc__4->SetBinError(12,64.61862);
   hmc__4->SetBinError(13,64.84346);
   hmc__4->SetBinError(14,67.60256);
   hmc__4->SetBinError(15,70.53203);
   hmc__4->SetBinError(16,63.10988);
   hmc__4->SetBinError(17,60.01187);
   hmc__4->SetBinError(18,72.66947);
   hmc__4->SetBinError(19,56.6133);
   hmc__4->SetBinError(20,58.2216);
   hmc__4->SetBinError(21,66.49702);
   hmc__4->SetBinError(22,68.81752);
   hmc__4->SetBinError(23,72.5846);
   hmc__4->SetBinError(24,64.11151);
   hmc__4->SetBinError(25,0.3895343);
   hmc__4->SetMinimum(-5.447823);
   hmc__4->SetMaximum(572.0215);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,-3.15,3.15);
   hs2_stack_2->SetMinimum(-1.310782e-08);
   hs2_stack_2->SetMaximum(286.0107);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,4.695265);
   hbadmatch_stack_1->SetBinContent(2,6.218768);
   hbadmatch_stack_1->SetBinContent(3,6.424543);
   hbadmatch_stack_1->SetBinContent(4,5.639688);
   hbadmatch_stack_1->SetBinContent(5,8.084675);
   hbadmatch_stack_1->SetBinContent(6,6.356609);
   hbadmatch_stack_1->SetBinContent(7,5.893303);
   hbadmatch_stack_1->SetBinContent(8,3.90062);
   hbadmatch_stack_1->SetBinContent(9,6.315663);
   hbadmatch_stack_1->SetBinContent(10,3.19274);
   hbadmatch_stack_1->SetBinContent(11,4.710277);
   hbadmatch_stack_1->SetBinContent(12,4.618873);
   hbadmatch_stack_1->SetBinContent(13,4.013404);
   hbadmatch_stack_1->SetBinContent(14,4.742633);
   hbadmatch_stack_1->SetBinContent(15,5.858022);
   hbadmatch_stack_1->SetBinContent(16,6.709286);
   hbadmatch_stack_1->SetBinContent(17,7.591734);
   hbadmatch_stack_1->SetBinContent(18,4.1891);
   hbadmatch_stack_1->SetBinContent(19,4.723576);
   hbadmatch_stack_1->SetBinContent(20,5.387528);
   hbadmatch_stack_1->SetBinContent(21,3.486462);
   hbadmatch_stack_1->SetBinContent(22,5.383171);
   hbadmatch_stack_1->SetBinContent(23,3.808252);
   hbadmatch_stack_1->SetBinContent(24,2.130542);
   hbadmatch_stack_1->SetBinError(1,1.15552);
   hbadmatch_stack_1->SetBinError(2,1.241346);
   hbadmatch_stack_1->SetBinError(3,1.372397);
   hbadmatch_stack_1->SetBinError(4,1.22438);
   hbadmatch_stack_1->SetBinError(5,1.551457);
   hbadmatch_stack_1->SetBinError(6,1.35766);
   hbadmatch_stack_1->SetBinError(7,1.757197);
   hbadmatch_stack_1->SetBinError(8,0.9882908);
   hbadmatch_stack_1->SetBinError(9,1.423438);
   hbadmatch_stack_1->SetBinError(10,0.8385067);
   hbadmatch_stack_1->SetBinError(11,1.119957);
   hbadmatch_stack_1->SetBinError(12,1.066718);
   hbadmatch_stack_1->SetBinError(13,0.9632943);
   hbadmatch_stack_1->SetBinError(14,1.86272);
   hbadmatch_stack_1->SetBinError(15,1.952638);
   hbadmatch_stack_1->SetBinError(16,1.448689);
   hbadmatch_stack_1->SetBinError(17,2.332386);
   hbadmatch_stack_1->SetBinError(18,1.177226);
   hbadmatch_stack_1->SetBinError(19,1.057961);
   hbadmatch_stack_1->SetBinError(20,1.196666);
   hbadmatch_stack_1->SetBinError(21,1.00889);
   hbadmatch_stack_1->SetBinError(22,1.19095);
   hbadmatch_stack_1->SetBinError(23,0.9965344);
   hbadmatch_stack_1->SetBinError(24,0.7309043);
   hbadmatch_stack_1->SetEntries(480);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,15.58033);
   hext_stack_2->SetBinContent(2,13.35982);
   hext_stack_2->SetBinContent(3,19.23532);
   hext_stack_2->SetBinContent(4,25.19138);
   hext_stack_2->SetBinContent(5,18.05142);
   hext_stack_2->SetBinContent(6,31.831);
   hext_stack_2->SetBinContent(7,24.34788);
   hext_stack_2->SetBinContent(8,20.26318);
   hext_stack_2->SetBinContent(9,20.01097);
   hext_stack_2->SetBinContent(10,18.21305);
   hext_stack_2->SetBinContent(11,14.15865);
   hext_stack_2->SetBinContent(12,8.428787);
   hext_stack_2->SetBinContent(13,9.46982);
   hext_stack_2->SetBinContent(14,11.18119);
   hext_stack_2->SetBinContent(15,16.00407);
   hext_stack_2->SetBinContent(16,22.49529);
   hext_stack_2->SetBinContent(17,21.06196);
   hext_stack_2->SetBinContent(18,28.23788);
   hext_stack_2->SetBinContent(19,28.71232);
   hext_stack_2->SetBinContent(20,28.60417);
   hext_stack_2->SetBinContent(21,20.43911);
   hext_stack_2->SetBinContent(22,21.34169);
   hext_stack_2->SetBinContent(23,13.97989);
   hext_stack_2->SetBinContent(24,16.55353);
   hext_stack_2->SetBinError(1,2.816219);
   hext_stack_2->SetBinError(2,2.405419);
   hext_stack_2->SetBinError(3,3.046944);
   hext_stack_2->SetBinError(4,3.517149);
   hext_stack_2->SetBinError(5,2.789605);
   hext_stack_2->SetBinError(6,3.93307);
   hext_stack_2->SetBinError(7,3.323047);
   hext_stack_2->SetBinError(8,2.88553);
   hext_stack_2->SetBinError(9,3.185761);
   hext_stack_2->SetBinError(10,2.870261);
   hext_stack_2->SetBinError(11,2.553251);
   hext_stack_2->SetBinError(12,1.846273);
   hext_stack_2->SetBinError(13,2.046195);
   hext_stack_2->SetBinError(14,2.138217);
   hext_stack_2->SetBinError(15,2.712505);
   hext_stack_2->SetBinError(16,3.225717);
   hext_stack_2->SetBinError(17,3.223312);
   hext_stack_2->SetBinError(18,3.555527);
   hext_stack_2->SetBinError(19,3.642744);
   hext_stack_2->SetBinError(20,3.698375);
   hext_stack_2->SetBinError(21,3.116215);
   hext_stack_2->SetBinError(22,3.146479);
   hext_stack_2->SetBinError(23,2.607933);
   hext_stack_2->SetBinError(24,2.871722);
   hext_stack_2->SetEntries(1085);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.3896828);
   hdirt_stack_3->SetBinContent(2,1.573004);
   hdirt_stack_3->SetBinContent(3,2.662945);
   hdirt_stack_3->SetBinContent(4,2.717397);
   hdirt_stack_3->SetBinContent(5,2.380386);
   hdirt_stack_3->SetBinContent(6,1.876838);
   hdirt_stack_3->SetBinContent(7,2.486629);
   hdirt_stack_3->SetBinContent(8,1.833654);
   hdirt_stack_3->SetBinContent(9,1.440565);
   hdirt_stack_3->SetBinContent(10,1.844359);
   hdirt_stack_3->SetBinContent(11,3.201819);
   hdirt_stack_3->SetBinContent(12,1.29895);
   hdirt_stack_3->SetBinContent(13,1.927704);
   hdirt_stack_3->SetBinContent(14,1.729169);
   hdirt_stack_3->SetBinContent(15,1.993855);
   hdirt_stack_3->SetBinContent(16,3.617293);
   hdirt_stack_3->SetBinContent(17,3.621164);
   hdirt_stack_3->SetBinContent(18,1.757753);
   hdirt_stack_3->SetBinContent(19,3.614173);
   hdirt_stack_3->SetBinContent(20,1.24744);
   hdirt_stack_3->SetBinContent(21,1.999105);
   hdirt_stack_3->SetBinContent(22,2.574047);
   hdirt_stack_3->SetBinContent(23,1.041957);
   hdirt_stack_3->SetBinContent(24,0.4347737);
   hdirt_stack_3->SetBinError(1,0.2870053);
   hdirt_stack_3->SetBinError(2,0.664504);
   hdirt_stack_3->SetBinError(3,0.8102292);
   hdirt_stack_3->SetBinError(4,0.8938457);
   hdirt_stack_3->SetBinError(5,0.7312897);
   hdirt_stack_3->SetBinError(6,0.7300601);
   hdirt_stack_3->SetBinError(7,0.7498513);
   hdirt_stack_3->SetBinError(8,0.8929871);
   hdirt_stack_3->SetBinError(9,0.5696477);
   hdirt_stack_3->SetBinError(10,1.046298);
   hdirt_stack_3->SetBinError(11,1.32161);
   hdirt_stack_3->SetBinError(12,0.5520304);
   hdirt_stack_3->SetBinError(13,0.6633172);
   hdirt_stack_3->SetBinError(14,0.7399444);
   hdirt_stack_3->SetBinError(15,0.7098791);
   hdirt_stack_3->SetBinError(16,1.023349);
   hdirt_stack_3->SetBinError(17,1.030156);
   hdirt_stack_3->SetBinError(18,0.6984257);
   hdirt_stack_3->SetBinError(19,0.9740107);
   hdirt_stack_3->SetBinError(20,0.5075476);
   hdirt_stack_3->SetBinError(21,0.7232046);
   hdirt_stack_3->SetBinError(22,0.8708309);
   hdirt_stack_3->SetBinError(23,0.5121617);
   hdirt_stack_3->SetBinError(24,0.2515774);
   hdirt_stack_3->SetEntries(206);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,13.85625);
   houtFV_stack_4->SetBinContent(2,20.39626);
   houtFV_stack_4->SetBinContent(3,19.16025);
   houtFV_stack_4->SetBinContent(4,21.71193);
   houtFV_stack_4->SetBinContent(5,13.38062);
   houtFV_stack_4->SetBinContent(6,15.21381);
   houtFV_stack_4->SetBinContent(7,15.97277);
   houtFV_stack_4->SetBinContent(8,17.03212);
   houtFV_stack_4->SetBinContent(9,16.59227);
   houtFV_stack_4->SetBinContent(10,18.40031);
   houtFV_stack_4->SetBinContent(11,17.31012);
   houtFV_stack_4->SetBinContent(12,13.262);
   houtFV_stack_4->SetBinContent(13,16.61567);
   houtFV_stack_4->SetBinContent(14,16.11973);
   houtFV_stack_4->SetBinContent(15,18.34417);
   houtFV_stack_4->SetBinContent(16,15.46516);
   houtFV_stack_4->SetBinContent(17,15.59653);
   houtFV_stack_4->SetBinContent(18,16.18962);
   houtFV_stack_4->SetBinContent(19,12.94254);
   houtFV_stack_4->SetBinContent(20,13.40613);
   houtFV_stack_4->SetBinContent(21,18.88778);
   houtFV_stack_4->SetBinContent(22,17.3);
   houtFV_stack_4->SetBinContent(23,17.84853);
   houtFV_stack_4->SetBinContent(24,16.21884);
   houtFV_stack_4->SetBinError(1,1.905099);
   houtFV_stack_4->SetBinError(2,2.27559);
   houtFV_stack_4->SetBinError(3,2.178161);
   houtFV_stack_4->SetBinError(4,2.368685);
   houtFV_stack_4->SetBinError(5,1.893758);
   houtFV_stack_4->SetBinError(6,1.919425);
   houtFV_stack_4->SetBinError(7,1.956177);
   houtFV_stack_4->SetBinError(8,2.080204);
   houtFV_stack_4->SetBinError(9,1.993921);
   houtFV_stack_4->SetBinError(10,2.207117);
   houtFV_stack_4->SetBinError(11,2.080092);
   houtFV_stack_4->SetBinError(12,1.722396);
   houtFV_stack_4->SetBinError(13,1.952162);
   houtFV_stack_4->SetBinError(14,1.976045);
   houtFV_stack_4->SetBinError(15,2.139345);
   houtFV_stack_4->SetBinError(16,1.964541);
   houtFV_stack_4->SetBinError(17,1.934751);
   houtFV_stack_4->SetBinError(18,2.066838);
   houtFV_stack_4->SetBinError(19,1.808986);
   houtFV_stack_4->SetBinError(20,1.800976);
   houtFV_stack_4->SetBinError(21,2.21668);
   houtFV_stack_4->SetBinError(22,2.096831);
   houtFV_stack_4->SetBinError(23,2.12098);
   houtFV_stack_4->SetBinError(24,2.03992);
   houtFV_stack_4->SetEntries(1712);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.23816);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.69577);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,3.932588);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.598452);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.024665);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.52737);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.031075);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.77523);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.35781);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.698683);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.84872);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.500134);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.610069);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.764356);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.811442);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.239824);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.427723);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.581674);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.900055);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.164502);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.164165);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.434292);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.655084);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.751738);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6792244);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6422111);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.6525319);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6347947);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4934079);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.596439);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7211468);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5243835);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5989894);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7610602);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.625063);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5843529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5532175);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6339253);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7228983);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7070207);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5667707);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5928936);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.8920454);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.55934);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4973363);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6971807);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6509895);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6683942);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.6968357);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.142908);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.158022);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7247357);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.046254);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.25534);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.502368);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.324758);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.33904);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7670858);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.948272);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.01769);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.198708);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.031972);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.8086039);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.465258);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.228104);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.7391858);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.017522);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.948272);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.906754);
   hNCpi0inFVqe_stack_6->SetBinContent(24,1.213822);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1815295);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3527294);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3705767);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.183661);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3185193);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3831421);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2162644);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3943225);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3861776);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2468026);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3247714);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3378888);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3549294);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3283469);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2623461);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4597906);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3640422);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2452205);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2853243);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3247714);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3123499);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3726713);
   hNCpi0inFVqe_stack_6->SetEntries(471);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,110.5785);
   hNCpi0inFVres_stack_7->SetBinContent(2,112.3413);
   hNCpi0inFVres_stack_7->SetBinContent(3,110.8554);
   hNCpi0inFVres_stack_7->SetBinContent(4,116.3847);
   hNCpi0inFVres_stack_7->SetBinContent(5,95.18172);
   hNCpi0inFVres_stack_7->SetBinContent(6,90.93991);
   hNCpi0inFVres_stack_7->SetBinContent(7,91.852);
   hNCpi0inFVres_stack_7->SetBinContent(8,96.86783);
   hNCpi0inFVres_stack_7->SetBinContent(9,107.51);
   hNCpi0inFVres_stack_7->SetBinContent(10,103.6693);
   hNCpi0inFVres_stack_7->SetBinContent(11,107.4965);
   hNCpi0inFVres_stack_7->SetBinContent(12,93.97223);
   hNCpi0inFVres_stack_7->SetBinContent(13,99.05167);
   hNCpi0inFVres_stack_7->SetBinContent(14,106.586);
   hNCpi0inFVres_stack_7->SetBinContent(15,112.698);
   hNCpi0inFVres_stack_7->SetBinContent(16,103.9766);
   hNCpi0inFVres_stack_7->SetBinContent(17,96.28146);
   hNCpi0inFVres_stack_7->SetBinContent(18,91.59027);
   hNCpi0inFVres_stack_7->SetBinContent(19,90.40868);
   hNCpi0inFVres_stack_7->SetBinContent(20,96.43576);
   hNCpi0inFVres_stack_7->SetBinContent(21,113.9364);
   hNCpi0inFVres_stack_7->SetBinContent(22,113.1042);
   hNCpi0inFVres_stack_7->SetBinContent(23,108.2031);
   hNCpi0inFVres_stack_7->SetBinContent(24,100.3007);
   hNCpi0inFVres_stack_7->SetBinError(1,3.489484);
   hNCpi0inFVres_stack_7->SetBinError(2,3.465148);
   hNCpi0inFVres_stack_7->SetBinError(3,3.412718);
   hNCpi0inFVres_stack_7->SetBinError(4,3.595562);
   hNCpi0inFVres_stack_7->SetBinError(5,3.156624);
   hNCpi0inFVres_stack_7->SetBinError(6,3.082998);
   hNCpi0inFVres_stack_7->SetBinError(7,3.150886);
   hNCpi0inFVres_stack_7->SetBinError(8,3.239314);
   hNCpi0inFVres_stack_7->SetBinError(9,3.413009);
   hNCpi0inFVres_stack_7->SetBinError(10,3.351963);
   hNCpi0inFVres_stack_7->SetBinError(11,3.399864);
   hNCpi0inFVres_stack_7->SetBinError(12,3.155073);
   hNCpi0inFVres_stack_7->SetBinError(13,3.171293);
   hNCpi0inFVres_stack_7->SetBinError(14,3.383923);
   hNCpi0inFVres_stack_7->SetBinError(15,3.495195);
   hNCpi0inFVres_stack_7->SetBinError(16,3.308043);
   hNCpi0inFVres_stack_7->SetBinError(17,3.191673);
   hNCpi0inFVres_stack_7->SetBinError(18,3.173329);
   hNCpi0inFVres_stack_7->SetBinError(19,3.149043);
   hNCpi0inFVres_stack_7->SetBinError(20,3.189347);
   hNCpi0inFVres_stack_7->SetBinError(21,3.545144);
   hNCpi0inFVres_stack_7->SetBinError(22,3.491983);
   hNCpi0inFVres_stack_7->SetBinError(23,3.369997);
   hNCpi0inFVres_stack_7->SetBinError(24,3.281918);
   hNCpi0inFVres_stack_7->SetEntries(45533);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,22.17196);
   hNCpi0inFVdis_stack_8->SetBinContent(2,19.92415);
   hNCpi0inFVdis_stack_8->SetBinContent(3,21.80542);
   hNCpi0inFVdis_stack_8->SetBinContent(4,21.40786);
   hNCpi0inFVdis_stack_8->SetBinContent(5,15.80026);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.16031);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.38992);
   hNCpi0inFVdis_stack_8->SetBinContent(8,16.41407);
   hNCpi0inFVdis_stack_8->SetBinContent(9,20.20184);
   hNCpi0inFVdis_stack_8->SetBinContent(10,21.58305);
   hNCpi0inFVdis_stack_8->SetBinContent(11,21.99045);
   hNCpi0inFVdis_stack_8->SetBinContent(12,19.24277);
   hNCpi0inFVdis_stack_8->SetBinContent(13,20.10601);
   hNCpi0inFVdis_stack_8->SetBinContent(14,22.15185);
   hNCpi0inFVdis_stack_8->SetBinContent(15,19.21387);
   hNCpi0inFVdis_stack_8->SetBinContent(16,19.39422);
   hNCpi0inFVdis_stack_8->SetBinContent(17,19.20822);
   hNCpi0inFVdis_stack_8->SetBinContent(18,14.1206);
   hNCpi0inFVdis_stack_8->SetBinContent(19,16.9254);
   hNCpi0inFVdis_stack_8->SetBinContent(20,19.2584);
   hNCpi0inFVdis_stack_8->SetBinContent(21,19.73981);
   hNCpi0inFVdis_stack_8->SetBinContent(22,19.4668);
   hNCpi0inFVdis_stack_8->SetBinContent(23,24.5898);
   hNCpi0inFVdis_stack_8->SetBinContent(24,19.75876);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.544038);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.374328);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.482765);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.527969);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.23333);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.315189);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.418644);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.297211);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.487483);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.487155);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.600946);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.441798);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.436795);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.501848);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.423368);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.38085);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.387037);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.17145);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.353186);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.479854);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.39443);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.399909);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.659049);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.460372);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.222536);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.1404279);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(34);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,37.86632);
   hCCpi0inFV_stack_10->SetBinContent(2,38.38691);
   hCCpi0inFV_stack_10->SetBinContent(3,37.24536);
   hCCpi0inFV_stack_10->SetBinContent(4,41.40858);
   hCCpi0inFV_stack_10->SetBinContent(5,30.40336);
   hCCpi0inFV_stack_10->SetBinContent(6,23.86285);
   hCCpi0inFV_stack_10->SetBinContent(7,27.16001);
   hCCpi0inFV_stack_10->SetBinContent(8,25.33392);
   hCCpi0inFV_stack_10->SetBinContent(9,33.10159);
   hCCpi0inFV_stack_10->SetBinContent(10,27.10233);
   hCCpi0inFV_stack_10->SetBinContent(11,34.04218);
   hCCpi0inFV_stack_10->SetBinContent(12,35.19694);
   hCCpi0inFV_stack_10->SetBinContent(13,32.92831);
   hCCpi0inFV_stack_10->SetBinContent(14,33.56522);
   hCCpi0inFV_stack_10->SetBinContent(15,36.54034);
   hCCpi0inFV_stack_10->SetBinContent(16,30.90893);
   hCCpi0inFV_stack_10->SetBinContent(17,27.76421);
   hCCpi0inFV_stack_10->SetBinContent(18,24.3216);
   hCCpi0inFV_stack_10->SetBinContent(19,25.23221);
   hCCpi0inFV_stack_10->SetBinContent(20,31.17494);
   hCCpi0inFV_stack_10->SetBinContent(21,34.45805);
   hCCpi0inFV_stack_10->SetBinContent(22,33.52308);
   hCCpi0inFV_stack_10->SetBinContent(23,40.01376);
   hCCpi0inFV_stack_10->SetBinContent(24,34.38028);
   hCCpi0inFV_stack_10->SetBinError(1,3.034158);
   hCCpi0inFV_stack_10->SetBinError(2,3.139157);
   hCCpi0inFV_stack_10->SetBinError(3,3.005538);
   hCCpi0inFV_stack_10->SetBinError(4,3.227643);
   hCCpi0inFV_stack_10->SetBinError(5,2.754777);
   hCCpi0inFV_stack_10->SetBinError(6,2.453262);
   hCCpi0inFV_stack_10->SetBinError(7,2.637491);
   hCCpi0inFV_stack_10->SetBinError(8,2.550835);
   hCCpi0inFV_stack_10->SetBinError(9,2.899945);
   hCCpi0inFV_stack_10->SetBinError(10,2.632627);
   hCCpi0inFV_stack_10->SetBinError(11,2.956094);
   hCCpi0inFV_stack_10->SetBinError(12,2.954465);
   hCCpi0inFV_stack_10->SetBinError(13,2.896663);
   hCCpi0inFV_stack_10->SetBinError(14,2.838685);
   hCCpi0inFV_stack_10->SetBinError(15,2.984804);
   hCCpi0inFV_stack_10->SetBinError(16,2.798864);
   hCCpi0inFV_stack_10->SetBinError(17,2.545738);
   hCCpi0inFV_stack_10->SetBinError(18,2.465956);
   hCCpi0inFV_stack_10->SetBinError(19,2.527172);
   hCCpi0inFV_stack_10->SetBinError(20,2.849451);
   hCCpi0inFV_stack_10->SetBinError(21,2.959986);
   hCCpi0inFV_stack_10->SetBinError(22,2.915341);
   hCCpi0inFV_stack_10->SetBinError(23,3.228582);
   hCCpi0inFV_stack_10->SetBinError(24,2.891895);
   hCCpi0inFV_stack_10->SetEntries(3326);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,18.38041);
   hNCinFV_stack_11->SetBinContent(2,19.99001);
   hNCinFV_stack_11->SetBinContent(3,26.56544);
   hNCinFV_stack_11->SetBinContent(4,17.58124);
   hNCinFV_stack_11->SetBinContent(5,16.9586);
   hNCinFV_stack_11->SetBinContent(6,15.39503);
   hNCinFV_stack_11->SetBinContent(7,15.50768);
   hNCinFV_stack_11->SetBinContent(8,16.43016);
   hNCinFV_stack_11->SetBinContent(9,19.35506);
   hNCinFV_stack_11->SetBinContent(10,18.05643);
   hNCinFV_stack_11->SetBinContent(11,16.29286);
   hNCinFV_stack_11->SetBinContent(12,19.82856);
   hNCinFV_stack_11->SetBinContent(13,19.63969);
   hNCinFV_stack_11->SetBinContent(14,19.05123);
   hNCinFV_stack_11->SetBinContent(15,22.745);
   hNCinFV_stack_11->SetBinContent(16,18.11137);
   hNCinFV_stack_11->SetBinContent(17,17.14748);
   hNCinFV_stack_11->SetBinContent(18,14.35819);
   hNCinFV_stack_11->SetBinContent(19,16.10063);
   hNCinFV_stack_11->SetBinContent(20,15.11594);
   hNCinFV_stack_11->SetBinContent(21,18.90777);
   hNCinFV_stack_11->SetBinContent(22,20.99533);
   hNCinFV_stack_11->SetBinContent(23,22.23394);
   hNCinFV_stack_11->SetBinContent(24,13.88071);
   hNCinFV_stack_11->SetBinError(1,2.094672);
   hNCinFV_stack_11->SetBinError(2,2.246969);
   hNCinFV_stack_11->SetBinError(3,2.603134);
   hNCinFV_stack_11->SetBinError(4,2.150539);
   hNCinFV_stack_11->SetBinError(5,2.039218);
   hNCinFV_stack_11->SetBinError(6,1.962857);
   hNCinFV_stack_11->SetBinError(7,1.892135);
   hNCinFV_stack_11->SetBinError(8,2.001825);
   hNCinFV_stack_11->SetBinError(9,2.23034);
   hNCinFV_stack_11->SetBinError(10,2.19414);
   hNCinFV_stack_11->SetBinError(11,1.932434);
   hNCinFV_stack_11->SetBinError(12,2.272265);
   hNCinFV_stack_11->SetBinError(13,2.220174);
   hNCinFV_stack_11->SetBinError(14,2.194025);
   hNCinFV_stack_11->SetBinError(15,2.475275);
   hNCinFV_stack_11->SetBinError(16,2.185541);
   hNCinFV_stack_11->SetBinError(17,2.095811);
   hNCinFV_stack_11->SetBinError(18,1.922927);
   hNCinFV_stack_11->SetBinError(19,2.023722);
   hNCinFV_stack_11->SetBinError(20,1.871749);
   hNCinFV_stack_11->SetBinError(21,2.176401);
   hNCinFV_stack_11->SetBinError(22,2.321653);
   hNCinFV_stack_11->SetBinError(23,2.363453);
   hNCinFV_stack_11->SetBinError(24,1.819046);
   hNCinFV_stack_11->SetEntries(1870);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,34.84803);
   hnumuCCinFV_stack_12->SetBinContent(2,32.51524);
   hnumuCCinFV_stack_12->SetBinContent(3,18.29821);
   hnumuCCinFV_stack_12->SetBinContent(4,10.76158);
   hnumuCCinFV_stack_12->SetBinContent(5,9.911221);
   hnumuCCinFV_stack_12->SetBinContent(6,12.99991);
   hnumuCCinFV_stack_12->SetBinContent(7,10.50884);
   hnumuCCinFV_stack_12->SetBinContent(8,11.10183);
   hnumuCCinFV_stack_12->SetBinContent(9,12.39422);
   hnumuCCinFV_stack_12->SetBinContent(10,15.23238);
   hnumuCCinFV_stack_12->SetBinContent(11,29.2459);
   hnumuCCinFV_stack_12->SetBinContent(12,26.08466);
   hnumuCCinFV_stack_12->SetBinContent(13,29.27485);
   hnumuCCinFV_stack_12->SetBinContent(14,24.60423);
   hnumuCCinFV_stack_12->SetBinContent(15,18.99405);
   hnumuCCinFV_stack_12->SetBinContent(16,13.48346);
   hnumuCCinFV_stack_12->SetBinContent(17,11.71029);
   hnumuCCinFV_stack_12->SetBinContent(18,11.29069);
   hnumuCCinFV_stack_12->SetBinContent(19,8.800075);
   hnumuCCinFV_stack_12->SetBinContent(20,9.925005);
   hnumuCCinFV_stack_12->SetBinContent(21,13.37965);
   hnumuCCinFV_stack_12->SetBinContent(22,19.51708);
   hnumuCCinFV_stack_12->SetBinContent(23,21.00867);
   hnumuCCinFV_stack_12->SetBinContent(24,33.51373);
   hnumuCCinFV_stack_12->SetBinError(1,3.261068);
   hnumuCCinFV_stack_12->SetBinError(2,4.063521);
   hnumuCCinFV_stack_12->SetBinError(3,2.327742);
   hnumuCCinFV_stack_12->SetBinError(4,1.823603);
   hnumuCCinFV_stack_12->SetBinError(5,1.654134);
   hnumuCCinFV_stack_12->SetBinError(6,1.909446);
   hnumuCCinFV_stack_12->SetBinError(7,1.668932);
   hnumuCCinFV_stack_12->SetBinError(8,1.918041);
   hnumuCCinFV_stack_12->SetBinError(9,2.116409);
   hnumuCCinFV_stack_12->SetBinError(10,2.047104);
   hnumuCCinFV_stack_12->SetBinError(11,3.609587);
   hnumuCCinFV_stack_12->SetBinError(12,2.78456);
   hnumuCCinFV_stack_12->SetBinError(13,2.941333);
   hnumuCCinFV_stack_12->SetBinError(14,3.082002);
   hnumuCCinFV_stack_12->SetBinError(15,2.235918);
   hnumuCCinFV_stack_12->SetBinError(16,1.883412);
   hnumuCCinFV_stack_12->SetBinError(17,2.132368);
   hnumuCCinFV_stack_12->SetBinError(18,2.123464);
   hnumuCCinFV_stack_12->SetBinError(19,1.454756);
   hnumuCCinFV_stack_12->SetBinError(20,1.711344);
   hnumuCCinFV_stack_12->SetBinError(21,2.147847);
   hnumuCCinFV_stack_12->SetBinError(22,2.726907);
   hnumuCCinFV_stack_12->SetBinError(23,2.531041);
   hnumuCCinFV_stack_12->SetBinError(24,3.513838);
   hnumuCCinFV_stack_12->SetEntries(1728);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.23372);
   hnueCCinFV_stack_13->SetBinContent(2,2.819118);
   hnueCCinFV_stack_13->SetBinContent(3,1.754805);
   hnueCCinFV_stack_13->SetBinContent(4,1.723115);
   hnueCCinFV_stack_13->SetBinContent(5,1.658687);
   hnueCCinFV_stack_13->SetBinContent(6,0.2486649);
   hnueCCinFV_stack_13->SetBinContent(7,1.960175);
   hnueCCinFV_stack_13->SetBinContent(8,1.047007);
   hnueCCinFV_stack_13->SetBinContent(9,0.9352454);
   hnueCCinFV_stack_13->SetBinContent(10,2.961864);
   hnueCCinFV_stack_13->SetBinContent(11,1.924866);
   hnueCCinFV_stack_13->SetBinContent(12,1.656066);
   hnueCCinFV_stack_13->SetBinContent(13,1.898842);
   hnueCCinFV_stack_13->SetBinContent(14,1.366893);
   hnueCCinFV_stack_13->SetBinContent(15,1.327045);
   hnueCCinFV_stack_13->SetBinContent(16,1.591038);
   hnueCCinFV_stack_13->SetBinContent(17,0.8325927);
   hnueCCinFV_stack_13->SetBinContent(18,4.078736);
   hnueCCinFV_stack_13->SetBinContent(19,1.469349);
   hnueCCinFV_stack_13->SetBinContent(20,2.402822);
   hnueCCinFV_stack_13->SetBinContent(21,1.027643);
   hnueCCinFV_stack_13->SetBinContent(22,0.9467431);
   hnueCCinFV_stack_13->SetBinContent(23,2.220862);
   hnueCCinFV_stack_13->SetBinContent(24,1.659256);
   hnueCCinFV_stack_13->SetBinError(1,0.8491834);
   hnueCCinFV_stack_13->SetBinError(2,1.631941);
   hnueCCinFV_stack_13->SetBinError(3,0.6236879);
   hnueCCinFV_stack_13->SetBinError(4,0.7331378);
   hnueCCinFV_stack_13->SetBinError(5,0.699663);
   hnueCCinFV_stack_13->SetBinError(6,0.2486649);
   hnueCCinFV_stack_13->SetBinError(7,0.9206903);
   hnueCCinFV_stack_13->SetBinError(8,0.4691143);
   hnueCCinFV_stack_13->SetBinError(9,0.481493);
   hnueCCinFV_stack_13->SetBinError(10,1.231513);
   hnueCCinFV_stack_13->SetBinError(11,0.6463163);
   hnueCCinFV_stack_13->SetBinError(12,0.6494816);
   hnueCCinFV_stack_13->SetBinError(13,0.6422145);
   hnueCCinFV_stack_13->SetBinError(14,0.8674883);
   hnueCCinFV_stack_13->SetBinError(15,0.6095226);
   hnueCCinFV_stack_13->SetBinError(16,0.6653424);
   hnueCCinFV_stack_13->SetBinError(17,0.4183677);
   hnueCCinFV_stack_13->SetBinError(18,1.51386);
   hnueCCinFV_stack_13->SetBinError(19,0.6702839);
   hnueCCinFV_stack_13->SetBinError(20,1.412774);
   hnueCCinFV_stack_13->SetBinError(21,0.4941397);
   hnueCCinFV_stack_13->SetBinError(22,0.4937596);
   hnueCCinFV_stack_13->SetBinError(23,0.8126468);
   hnueCCinFV_stack_13->SetBinError(24,0.6493905);
   hnueCCinFV_stack_13->SetEntries(151);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__5->SetBinContent(1,265.5634);
   hmcerror__5->SetBinContent(2,272.3912);
   hmcerror__5->SetBinContent(3,269.1263);
   hmcerror__5->SetBinContent(4,268.8506);
   hmcerror__5->SetBinContent(5,215.9377);
   hmcerror__5->SetBinContent(6,219.7513);
   hmcerror__5->SetBinContent(7,218.017);
   hmcerror__5->SetBinContent(8,213.5578);
   hmcerror__5->SetBinContent(9,242.5679);
   hmcerror__5->SetBinContent(10,236.3772);
   hmcerror__5->SetBinContent(11,255.0173);
   hmcerror__5->SetBinContent(12,228.0661);
   hmcerror__5->SetBinContent(13,239.233);
   hmcerror__5->SetBinContent(14,246.0757);
   hmcerror__5->SetBinContent(15,259.9511);
   hmcerror__5->SetBinContent(16,241.2478);
   hmcerror__5->SetBinContent(17,225.052);
   hmcerror__5->SetBinContent(18,215.1814);
   hmcerror__5->SetBinContent(19,216.085);
   hmcerror__5->SetBinContent(20,226.9455);
   hmcerror__5->SetBinContent(21,250.6948);
   hmcerror__5->SetBinContent(22,259.5627);
   hmcerror__5->SetBinContent(23,259.5106);
   hmcerror__5->SetBinContent(24,243.9922);
   hmcerror__5->SetBinError(1,74.93302);
   hmcerror__5->SetBinError(2,78.16908);
   hmcerror__5->SetBinError(3,70.83305);
   hmcerror__5->SetBinError(4,69.21632);
   hmcerror__5->SetBinError(5,57.26069);
   hmcerror__5->SetBinError(6,54.3874);
   hmcerror__5->SetBinError(7,59.98777);
   hmcerror__5->SetBinError(8,60.63264);
   hmcerror__5->SetBinError(9,70.34526);
   hmcerror__5->SetBinError(10,66.60082);
   hmcerror__5->SetBinError(11,70.54235);
   hmcerror__5->SetBinError(12,64.61862);
   hmcerror__5->SetBinError(13,64.84346);
   hmcerror__5->SetBinError(14,67.60256);
   hmcerror__5->SetBinError(15,70.53203);
   hmcerror__5->SetBinError(16,63.10988);
   hmcerror__5->SetBinError(17,60.01187);
   hmcerror__5->SetBinError(18,72.66947);
   hmcerror__5->SetBinError(19,56.6133);
   hmcerror__5->SetBinError(20,58.2216);
   hmcerror__5->SetBinError(21,66.49702);
   hmcerror__5->SetBinError(22,68.81752);
   hmcerror__5->SetBinError(23,72.5846);
   hmcerror__5->SetBinError(24,64.11151);
   hmcerror__5->SetBinError(25,0.3895343);
   hmcerror__5->SetEntries(5727.925);

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
   
   Double_t _fx3005[24] = {
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
   Double_t _fy3005[24] = {
   256,
   230,
   232,
   219,
   237,
   196,
   190,
   180,
   199,
   192,
   182,
   208,
   212,
   214,
   249,
   205,
   177,
   195,
   189,
   183,
   205,
   220,
   199,
   205};
   Double_t _felx3005[24] = {
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
   Double_t _fely3005[24] = {
   16,
   15.16575,
   15.23155,
   14.79865,
   15.3948,
   14,
   13.78405,
   13.41641,
   14.10674,
   13.85641,
   13.49074,
   14.42221,
   14.56022,
   14.62874,
   15.77973,
   14.31782,
   13.30413,
   13.96424,
   13.74773,
   13.52775,
   14.31782,
   14.8324,
   14.10674,
   14.31782};
   Double_t _fehx3005[24] = {
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
   Double_t _fehy3005[24] = {
   16,
   15.16575,
   15.23155,
   14.79865,
   15.3948,
   14,
   13.78405,
   13.41641,
   14.10674,
   13.85641,
   13.49074,
   14.42221,
   14.56022,
   14.62874,
   15.77973,
   14.31782,
   13.30413,
   13.96424,
   13.74773,
   13.52775,
   14.31782,
   14.8324,
   14.10674,
   14.31782};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-3.78,3.78);
   Graph_Graph3005->SetMinimum(152.8655);
   Graph_Graph3005->SetMaximum(282.8304);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4974.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 124.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 466.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 49.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 397.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  91.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  24.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2470.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  468.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 775.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 438.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 439.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 41.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[24] = {
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
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
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
   Double_t _fely3006[24] = {
   0.2821663,
   0.2869736,
   0.2631963,
   0.2574527,
   0.2651723,
   0.2474952,
   0.2751518,
   0.2839168,
   0.2900024,
   0.2817565,
   0.2766179,
   0.2833328,
   0.2710473,
   0.2747227,
   0.271328,
   0.2615978,
   0.2666578,
   0.3377127,
   0.2619955,
   0.2565444,
   0.2652509,
   0.2651287,
   0.279698,
   0.2627605};
   Double_t _fehx3006[24] = {
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
   Double_t _fehy3006[24] = {
   0.2821663,
   0.2869736,
   0.2631963,
   0.2574527,
   0.2651723,
   0.2474952,
   0.2751518,
   0.2839168,
   0.2900024,
   0.2817565,
   0.2766179,
   0.2833328,
   0.2710473,
   0.2747227,
   0.271328,
   0.2615978,
   0.2666578,
   0.3377127,
   0.2619955,
   0.2565444,
   0.2652509,
   0.2651287,
   0.279698,
   0.2627605};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-3.78,3.78);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
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
   
   Double_t _fx3007[24] = {
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
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
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
   Double_t _fely3007[24] = {
   0.2505662,
   0.2504677,
   0.2447575,
   0.242355,
   0.2444443,
   0.2280973,
   0.2467477,
   0.2577541,
   0.2513573,
   0.2539148,
   0.2547802,
   0.2571368,
   0.2484173,
   0.2458782,
   0.2505242,
   0.2408135,
   0.2461131,
   0.2289593,
   0.2277946,
   0.2382713,
   0.2480863,
   0.2472902,
   0.2523969,
   0.2460531};
   Double_t _fehx3007[24] = {
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
   Double_t _fehy3007[24] = {
   0.2505662,
   0.2504677,
   0.2447575,
   0.242355,
   0.2444443,
   0.2280973,
   0.2467477,
   0.2577541,
   0.2513573,
   0.2539148,
   0.2547802,
   0.2571368,
   0.2484173,
   0.2458782,
   0.2505242,
   0.2408135,
   0.2461131,
   0.2289593,
   0.2277946,
   0.2382713,
   0.2480863,
   0.2472902,
   0.2523969,
   0.2460531};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-3.78,3.78);
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
   
   Double_t _fx3008[24] = {
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
   Double_t _fy3008[24] = {
   0.9639884,
   0.8443739,
   0.8620489,
   0.8145787,
   1.097539,
   0.8919172,
   0.8714916,
   0.8428631,
   0.8203889,
   0.812261,
   0.7136771,
   0.9120162,
   0.8861653,
   0.8696512,
   0.9578723,
   0.8497488,
   0.786485,
   0.9062122,
   0.8746558,
   0.806361,
   0.8177273,
   0.8475795,
   0.766828,
   0.8401908};
   Double_t _felx3008[24] = {
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
   Double_t _fely3008[24] = {
   0.06024928,
   0.05567637,
   0.05659629,
   0.05504412,
   0.07129282,
   0.06370837,
   0.06322464,
   0.06282331,
   0.05815583,
   0.05861989,
   0.05290126,
   0.06323694,
   0.06086208,
   0.05944813,
   0.06070269,
   0.05934903,
   0.05911583,
   0.06489521,
   0.06362185,
   0.05960792,
   0.05711255,
   0.0571438,
   0.05435899,
   0.05868147};
   Double_t _fehx3008[24] = {
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
   Double_t _fehy3008[24] = {
   0.06024928,
   0.05567637,
   0.05659629,
   0.05504412,
   0.07129282,
   0.06370837,
   0.06322464,
   0.06282331,
   0.05815583,
   0.05861989,
   0.05290126,
   0.06323694,
   0.06086208,
   0.05944813,
   0.06070269,
   0.05934903,
   0.05911583,
   0.06489521,
   0.06362185,
   0.05960792,
   0.05711255,
   0.0571438,
   0.05435899,
   0.05868147};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-3.78,3.78);
   Graph_Graph3008->SetMinimum(0.6099702);
   Graph_Graph3008->SetMaximum(1.219637);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
