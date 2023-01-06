#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 10:30:54 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",164,172,1200,900);
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
   pad1->Range(-1.307692,-4.02936,1.25641,445.5624);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hmc__22->SetBinContent(1,20.63031);
   hmc__22->SetBinContent(2,18.75349);
   hmc__22->SetBinContent(3,15.58128);
   hmc__22->SetBinContent(4,11.83809);
   hmc__22->SetBinContent(5,14.55428);
   hmc__22->SetBinContent(6,15.37186);
   hmc__22->SetBinContent(7,17.12849);
   hmc__22->SetBinContent(8,11.66242);
   hmc__22->SetBinContent(9,12.6994);
   hmc__22->SetBinContent(10,10.03094);
   hmc__22->SetBinContent(11,15.88193);
   hmc__22->SetBinContent(12,21.30779);
   hmc__22->SetBinContent(13,24.77707);
   hmc__22->SetBinContent(14,21.43381);
   hmc__22->SetBinContent(15,17.40644);
   hmc__22->SetBinContent(16,20.90438);
   hmc__22->SetBinContent(17,24.25702);
   hmc__22->SetBinContent(18,25.25583);
   hmc__22->SetBinContent(19,35.0437);
   hmc__22->SetBinContent(20,37.52574);
   hmc__22->SetBinContent(21,53.0927);
   hmc__22->SetBinContent(22,69.60115);
   hmc__22->SetBinContent(23,95.31323);
   hmc__22->SetBinContent(24,122.0449);
   hmc__22->SetBinContent(25,201.468);
   hmc__22->SetBinError(1,14.10649);
   hmc__22->SetBinError(2,12.15975);
   hmc__22->SetBinError(3,8.947943);
   hmc__22->SetBinError(4,11.41607);
   hmc__22->SetBinError(5,13.1634);
   hmc__22->SetBinError(6,11.13939);
   hmc__22->SetBinError(7,8.285068);
   hmc__22->SetBinError(8,8.540868);
   hmc__22->SetBinError(9,7.259935);
   hmc__22->SetBinError(10,5.593261);
   hmc__22->SetBinError(11,9.845832);
   hmc__22->SetBinError(12,13.52691);
   hmc__22->SetBinError(13,10.46073);
   hmc__22->SetBinError(14,12.54315);
   hmc__22->SetBinError(15,15.81358);
   hmc__22->SetBinError(16,10.96634);
   hmc__22->SetBinError(17,11.4197);
   hmc__22->SetBinError(18,13.47533);
   hmc__22->SetBinError(19,13.74398);
   hmc__22->SetBinError(20,12.95422);
   hmc__22->SetBinError(21,27.165);
   hmc__22->SetBinError(22,20.63453);
   hmc__22->SetBinError(23,28.53802);
   hmc__22->SetBinError(24,33.44097);
   hmc__22->SetBinError(25,52.02692);
   hmc__22->SetBinError(26,0.3895343);
   hmc__22->SetMinimum(-4.02936);
   hmc__22->SetMaximum(423.0828);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",25,-1,1);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(211.5414);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hbadmatch_stack_1->SetBinContent(1,1.049126);
   hbadmatch_stack_1->SetBinContent(2,0.474294);
   hbadmatch_stack_1->SetBinContent(3,0.6803553);
   hbadmatch_stack_1->SetBinContent(4,0.9286332);
   hbadmatch_stack_1->SetBinContent(5,0.8108466);
   hbadmatch_stack_1->SetBinContent(6,0.4687016);
   hbadmatch_stack_1->SetBinContent(7,0.9082963);
   hbadmatch_stack_1->SetBinContent(8,2.648355e-06);
   hbadmatch_stack_1->SetBinContent(10,0.2221688);
   hbadmatch_stack_1->SetBinContent(11,1.617123);
   hbadmatch_stack_1->SetBinContent(12,1.279809);
   hbadmatch_stack_1->SetBinContent(13,0.2421255);
   hbadmatch_stack_1->SetBinContent(14,2.540304);
   hbadmatch_stack_1->SetBinContent(15,1.072095);
   hbadmatch_stack_1->SetBinContent(16,0.7319179);
   hbadmatch_stack_1->SetBinContent(17,1.1109);
   hbadmatch_stack_1->SetBinContent(18,0.1950248);
   hbadmatch_stack_1->SetBinContent(19,1.546007);
   hbadmatch_stack_1->SetBinContent(20,1.266923);
   hbadmatch_stack_1->SetBinContent(21,2.05393);
   hbadmatch_stack_1->SetBinContent(22,1.889724);
   hbadmatch_stack_1->SetBinContent(23,2.459223);
   hbadmatch_stack_1->SetBinContent(24,4.126504);
   hbadmatch_stack_1->SetBinContent(25,5.310548);
   hbadmatch_stack_1->SetBinError(1,0.5565279);
   hbadmatch_stack_1->SetBinError(2,0.3355234);
   hbadmatch_stack_1->SetBinError(3,0.4810838);
   hbadmatch_stack_1->SetBinError(4,0.48078);
   hbadmatch_stack_1->SetBinError(5,0.4059551);
   hbadmatch_stack_1->SetBinError(6,0.3636471);
   hbadmatch_stack_1->SetBinError(7,0.5852183);
   hbadmatch_stack_1->SetBinError(8,2.648355e-06);
   hbadmatch_stack_1->SetBinError(10,0.2221688);
   hbadmatch_stack_1->SetBinError(11,0.7598103);
   hbadmatch_stack_1->SetBinError(12,0.6947597);
   hbadmatch_stack_1->SetBinError(13,0.2421255);
   hbadmatch_stack_1->SetBinError(14,1.062745);
   hbadmatch_stack_1->SetBinError(15,0.5551335);
   hbadmatch_stack_1->SetBinError(16,0.438694);
   hbadmatch_stack_1->SetBinError(17,0.5698701);
   hbadmatch_stack_1->SetBinError(18,0.1950249);
   hbadmatch_stack_1->SetBinError(19,0.7242067);
   hbadmatch_stack_1->SetBinError(20,0.5524454);
   hbadmatch_stack_1->SetBinError(21,0.8122346);
   hbadmatch_stack_1->SetBinError(22,0.7676467);
   hbadmatch_stack_1->SetBinError(23,0.7777234);
   hbadmatch_stack_1->SetBinError(24,1.046126);
   hbadmatch_stack_1->SetBinError(25,1.554115);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hext_stack_2->SetBinContent(1,3.330584);
   hext_stack_2->SetBinContent(2,4.435048);
   hext_stack_2->SetBinContent(3,4.021268);
   hext_stack_2->SetBinContent(4,2.192989);
   hext_stack_2->SetBinContent(5,4.125011);
   hext_stack_2->SetBinContent(6,4.919439);
   hext_stack_2->SetBinContent(7,7.015866);
   hext_stack_2->SetBinContent(8,2.345802);
   hext_stack_2->SetBinContent(9,4.620993);
   hext_stack_2->SetBinContent(10,3.864046);
   hext_stack_2->SetBinContent(11,5.027592);
   hext_stack_2->SetBinContent(12,8.802256);
   hext_stack_2->SetBinContent(13,10.73428);
   hext_stack_2->SetBinContent(14,6.325181);
   hext_stack_2->SetBinContent(15,5.173224);
   hext_stack_2->SetBinContent(16,4.863188);
   hext_stack_2->SetBinContent(17,6.254569);
   hext_stack_2->SetBinContent(18,7.105247);
   hext_stack_2->SetBinContent(19,5.281377);
   hext_stack_2->SetBinContent(20,8.663803);
   hext_stack_2->SetBinContent(21,11.56625);
   hext_stack_2->SetBinContent(22,13.03983);
   hext_stack_2->SetBinContent(23,19.02184);
   hext_stack_2->SetBinContent(24,15.91033);
   hext_stack_2->SetBinContent(25,30.47993);
   hext_stack_2->SetBinError(1,1.116937);
   hext_stack_2->SetBinError(2,1.533985);
   hext_stack_2->SetBinError(3,1.545635);
   hext_stack_2->SetBinError(4,0.9009267);
   hext_stack_2->SetBinError(5,1.358482);
   hext_stack_2->SetBinError(6,1.563138);
   hext_stack_2->SetBinError(7,1.896677);
   hext_stack_2->SetBinError(8,0.9989624);
   hext_stack_2->SetBinError(9,1.367364);
   hext_stack_2->SetBinError(10,1.437918);
   hext_stack_2->SetBinError(11,1.426537);
   hext_stack_2->SetBinError(12,2.060031);
   hext_stack_2->SetBinError(13,2.297288);
   hext_stack_2->SetBinError(14,1.567144);
   hext_stack_2->SetBinError(15,1.556427);
   hext_stack_2->SetBinError(16,1.383773);
   hext_stack_2->SetBinError(17,1.526359);
   hext_stack_2->SetBinError(18,1.859105);
   hext_stack_2->SetBinError(19,1.41918);
   hext_stack_2->SetBinError(20,1.911823);
   hext_stack_2->SetBinError(21,2.311038);
   hext_stack_2->SetBinError(22,2.411624);
   hext_stack_2->SetBinError(23,2.904121);
   hext_stack_2->SetBinError(24,2.45627);
   hext_stack_2->SetBinError(25,3.76606);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hdirt_stack_3->SetBinContent(1,0.8371547);
   hdirt_stack_3->SetBinContent(2,0.4377912);
   hdirt_stack_3->SetBinContent(3,0.3569671);
   hdirt_stack_3->SetBinContent(4,0.6084618);
   hdirt_stack_3->SetBinContent(5,1.880635);
   hdirt_stack_3->SetBinContent(6,0.165479);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(10,0.804172);
   hdirt_stack_3->SetBinContent(11,0.4377912);
   hdirt_stack_3->SetBinContent(12,0.260563);
   hdirt_stack_3->SetBinContent(13,0.5570828);
   hdirt_stack_3->SetBinContent(15,0.5930034);
   hdirt_stack_3->SetBinContent(16,0.5570828);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.1583301);
   hdirt_stack_3->SetBinContent(19,0.30685);
   hdirt_stack_3->SetBinContent(20,1.4492);
   hdirt_stack_3->SetBinContent(21,0.9140499);
   hdirt_stack_3->SetBinContent(22,2.285562);
   hdirt_stack_3->SetBinContent(23,1.940291);
   hdirt_stack_3->SetBinContent(24,1.980797);
   hdirt_stack_3->SetBinContent(25,2.43779);
   hdirt_stack_3->SetBinError(1,0.4476927);
   hdirt_stack_3->SetBinError(2,0.3095651);
   hdirt_stack_3->SetBinError(3,0.258803);
   hdirt_stack_3->SetBinError(4,0.4468525);
   hdirt_stack_3->SetBinError(5,1.062201);
   hdirt_stack_3->SetBinError(6,0.165479);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(10,0.4725875);
   hdirt_stack_3->SetBinError(11,0.3095651);
   hdirt_stack_3->SetBinError(12,0.260563);
   hdirt_stack_3->SetBinError(13,0.4028472);
   hdirt_stack_3->SetBinError(15,0.4234405);
   hdirt_stack_3->SetBinError(16,0.4028472);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.1583301);
   hdirt_stack_3->SetBinError(19,0.2130001);
   hdirt_stack_3->SetBinError(20,0.5865551);
   hdirt_stack_3->SetBinError(21,0.4788161);
   hdirt_stack_3->SetBinError(22,0.8444637);
   hdirt_stack_3->SetBinError(23,0.7358752);
   hdirt_stack_3->SetBinError(24,0.7131444);
   hdirt_stack_3->SetBinError(25,0.8792524);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   houtFV_stack_4->SetBinContent(1,5.526727);
   houtFV_stack_4->SetBinContent(2,6.322417);
   houtFV_stack_4->SetBinContent(3,5.149631);
   houtFV_stack_4->SetBinContent(4,2.875769);
   houtFV_stack_4->SetBinContent(5,3.812516);
   houtFV_stack_4->SetBinContent(6,4.23476);
   houtFV_stack_4->SetBinContent(7,4.517569);
   houtFV_stack_4->SetBinContent(8,4.630836);
   houtFV_stack_4->SetBinContent(9,4.037811);
   houtFV_stack_4->SetBinContent(10,2.147326);
   houtFV_stack_4->SetBinContent(11,2.773263);
   houtFV_stack_4->SetBinContent(12,3.402522);
   houtFV_stack_4->SetBinContent(13,4.747364);
   houtFV_stack_4->SetBinContent(14,4.633319);
   houtFV_stack_4->SetBinContent(15,4.535012);
   houtFV_stack_4->SetBinContent(16,3.04634);
   houtFV_stack_4->SetBinContent(17,6.919231);
   houtFV_stack_4->SetBinContent(18,5.251869);
   houtFV_stack_4->SetBinContent(19,7.824303);
   houtFV_stack_4->SetBinContent(20,7.256417);
   houtFV_stack_4->SetBinContent(21,10.61223);
   houtFV_stack_4->SetBinContent(22,17.09097);
   houtFV_stack_4->SetBinContent(23,19.81736);
   houtFV_stack_4->SetBinContent(24,22.22676);
   houtFV_stack_4->SetBinContent(25,29.04783);
   houtFV_stack_4->SetBinError(1,1.166296);
   houtFV_stack_4->SetBinError(2,1.279809);
   houtFV_stack_4->SetBinError(3,1.193955);
   houtFV_stack_4->SetBinError(4,0.755217);
   houtFV_stack_4->SetBinError(5,0.8886911);
   houtFV_stack_4->SetBinError(6,0.9841986);
   houtFV_stack_4->SetBinError(7,1.09196);
   houtFV_stack_4->SetBinError(8,1.601863);
   houtFV_stack_4->SetBinError(9,1.01996);
   houtFV_stack_4->SetBinError(10,0.6930639);
   houtFV_stack_4->SetBinError(11,0.7860998);
   houtFV_stack_4->SetBinError(12,0.9487303);
   houtFV_stack_4->SetBinError(13,1.07859);
   houtFV_stack_4->SetBinError(14,1.101312);
   houtFV_stack_4->SetBinError(15,1.087281);
   houtFV_stack_4->SetBinError(16,0.9301007);
   houtFV_stack_4->SetBinError(17,1.308564);
   houtFV_stack_4->SetBinError(18,1.13768);
   houtFV_stack_4->SetBinError(19,1.467035);
   houtFV_stack_4->SetBinError(20,1.383461);
   houtFV_stack_4->SetBinError(21,1.585513);
   houtFV_stack_4->SetBinError(22,2.271593);
   houtFV_stack_4->SetBinError(23,2.213373);
   houtFV_stack_4->SetBinError(24,2.33408);
   houtFV_stack_4->SetBinError(25,2.733222);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.2698112);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.07136732);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1472927);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.202419);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.04354476);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.4796972);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.7636995);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,3.186372);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,9.41906);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.167389);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.05092153);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1472927);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2024189);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03228062);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2456235);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.3804454);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6166991);
   hNCpi0inFVcoh_stack_5->SetBinError(25,1.11938);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02142406);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.03664741);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.09600664);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.5443716);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1218652);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.0750488);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.007068991);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.01732447);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.0151491);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02591398);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.05798428);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.3207817);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.05562072);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.024952);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.776871);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.9819351);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.6381928);
   hNCpi0inFVres_stack_7->SetBinContent(5,1.147035);
   hNCpi0inFVres_stack_7->SetBinContent(6,1.034355);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.195729);
   hNCpi0inFVres_stack_7->SetBinContent(8,0.7806571);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.61687);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.9609437);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.859336);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.9273384);
   hNCpi0inFVres_stack_7->SetBinContent(13,3.307416);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.546989);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.653128);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.958487);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.279798);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.764017);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.253693);
   hNCpi0inFVres_stack_7->SetBinContent(20,5.630707);
   hNCpi0inFVres_stack_7->SetBinContent(21,8.197924);
   hNCpi0inFVres_stack_7->SetBinContent(22,10.99638);
   hNCpi0inFVres_stack_7->SetBinContent(23,12.61302);
   hNCpi0inFVres_stack_7->SetBinContent(24,15.25272);
   hNCpi0inFVres_stack_7->SetBinContent(25,26.29646);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4876905);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4557415);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3646474);
   hNCpi0inFVres_stack_7->SetBinError(4,0.2083827);
   hNCpi0inFVres_stack_7->SetBinError(5,0.3152334);
   hNCpi0inFVres_stack_7->SetBinError(6,0.2841338);
   hNCpi0inFVres_stack_7->SetBinError(7,0.3450055);
   hNCpi0inFVres_stack_7->SetBinError(8,0.2872269);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4540495);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3248564);
   hNCpi0inFVres_stack_7->SetBinError(11,0.3988999);
   hNCpi0inFVres_stack_7->SetBinError(12,0.2301604);
   hNCpi0inFVres_stack_7->SetBinError(13,0.6655138);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3320546);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6103803);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4757027);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4246013);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7461942);
   hNCpi0inFVres_stack_7->SetBinError(19,0.73774);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8122918);
   hNCpi0inFVres_stack_7->SetBinError(21,1.047041);
   hNCpi0inFVres_stack_7->SetBinError(22,1.144535);
   hNCpi0inFVres_stack_7->SetBinError(23,1.132759);
   hNCpi0inFVres_stack_7->SetBinError(24,1.20155);
   hNCpi0inFVres_stack_7->SetBinError(25,1.78049);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.5002276);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.5687502);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.01976117);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.3943424);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.2935316);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.6457713);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.0992533);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.1042471);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1873476);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.2883345);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.164185);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.08032021);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.6016689);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.07319527);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.137841);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7254261);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3190376);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5009937);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.09715);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.271558);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.212556);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.433888);
   hNCpi0inFVdis_stack_8->SetBinContent(23,4.134728);
   hNCpi0inFVdis_stack_8->SetBinContent(24,6.192863);
   hNCpi0inFVdis_stack_8->SetBinContent(25,10.02062);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3755972);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2175618);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.01452797);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.173978);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.1547314);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3662588);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.04616674);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.05612256);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1348708);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.201096);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.06263936);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.04830003);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.330876);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.03930843);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.07636298);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3396347);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1014352);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1729137);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3246869);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3808895);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.5217661);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6575292);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6776098);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.021643);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.202641);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01732447);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,4.918614);
   hCCpi0inFV_stack_10->SetBinContent(2,1.94838);
   hCCpi0inFV_stack_10->SetBinContent(3,3.188301);
   hCCpi0inFV_stack_10->SetBinContent(4,2.250697);
   hCCpi0inFV_stack_10->SetBinContent(5,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(6,1.319923);
   hCCpi0inFV_stack_10->SetBinContent(7,1.607298);
   hCCpi0inFV_stack_10->SetBinContent(8,2.138387);
   hCCpi0inFV_stack_10->SetBinContent(9,1.303918);
   hCCpi0inFV_stack_10->SetBinContent(10,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(11,2.587494);
   hCCpi0inFV_stack_10->SetBinContent(12,4.816816);
   hCCpi0inFV_stack_10->SetBinContent(13,2.488698);
   hCCpi0inFV_stack_10->SetBinContent(14,4.394888);
   hCCpi0inFV_stack_10->SetBinContent(15,2.447412);
   hCCpi0inFV_stack_10->SetBinContent(16,4.636404);
   hCCpi0inFV_stack_10->SetBinContent(17,3.424227);
   hCCpi0inFV_stack_10->SetBinContent(18,3.072824);
   hCCpi0inFV_stack_10->SetBinContent(19,7.868469);
   hCCpi0inFV_stack_10->SetBinContent(20,6.771529);
   hCCpi0inFV_stack_10->SetBinContent(21,9.032598);
   hCCpi0inFV_stack_10->SetBinContent(22,12.21908);
   hCCpi0inFV_stack_10->SetBinContent(23,22.91063);
   hCCpi0inFV_stack_10->SetBinContent(24,28.9822);
   hCCpi0inFV_stack_10->SetBinContent(25,50.74876);
   hCCpi0inFV_stack_10->SetBinError(1,1.080141);
   hCCpi0inFV_stack_10->SetBinError(2,0.6634553);
   hCCpi0inFV_stack_10->SetBinError(3,0.924489);
   hCCpi0inFV_stack_10->SetBinError(4,0.7346377);
   hCCpi0inFV_stack_10->SetBinError(5,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(6,0.6079408);
   hCCpi0inFV_stack_10->SetBinError(7,0.6796534);
   hCCpi0inFV_stack_10->SetBinError(8,0.6899324);
   hCCpi0inFV_stack_10->SetBinError(9,0.601495);
   hCCpi0inFV_stack_10->SetBinError(10,0.340721);
   hCCpi0inFV_stack_10->SetBinError(11,0.8087577);
   hCCpi0inFV_stack_10->SetBinError(12,1.115957);
   hCCpi0inFV_stack_10->SetBinError(13,0.7721381);
   hCCpi0inFV_stack_10->SetBinError(14,1.075193);
   hCCpi0inFV_stack_10->SetBinError(15,0.7605193);
   hCCpi0inFV_stack_10->SetBinError(16,1.073824);
   hCCpi0inFV_stack_10->SetBinError(17,0.8770549);
   hCCpi0inFV_stack_10->SetBinError(18,0.9205954);
   hCCpi0inFV_stack_10->SetBinError(19,1.445866);
   hCCpi0inFV_stack_10->SetBinError(20,1.275742);
   hCCpi0inFV_stack_10->SetBinError(21,1.473856);
   hCCpi0inFV_stack_10->SetBinError(22,1.75593);
   hCCpi0inFV_stack_10->SetBinError(23,2.440357);
   hCCpi0inFV_stack_10->SetBinError(24,2.72789);
   hCCpi0inFV_stack_10->SetBinError(25,3.635079);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,0.9724091);
   hNCinFV_stack_11->SetBinContent(4,0.6011997);
   hNCinFV_stack_11->SetBinContent(5,0.574264);
   hNCinFV_stack_11->SetBinContent(6,0.1950248);
   hNCinFV_stack_11->SetBinContent(8,0.3401776);
   hNCinFV_stack_11->SetBinContent(9,0.3917402);
   hNCinFV_stack_11->SetBinContent(10,0.3401776);
   hNCinFV_stack_11->SetBinContent(11,0.2536664);
   hNCinFV_stack_11->SetBinContent(13,0.2305382);
   hNCinFV_stack_11->SetBinContent(14,0.5360561);
   hNCinFV_stack_11->SetBinContent(15,0.1073979);
   hNCinFV_stack_11->SetBinContent(16,0.3934307);
   hNCinFV_stack_11->SetBinContent(17,1.079735);
   hNCinFV_stack_11->SetBinContent(18,0.4421043);
   hNCinFV_stack_11->SetBinContent(19,1.211287);
   hNCinFV_stack_11->SetBinContent(20,0.4199372);
   hNCinFV_stack_11->SetBinContent(21,1.687467);
   hNCinFV_stack_11->SetBinContent(22,1.709904);
   hNCinFV_stack_11->SetBinContent(23,4.405592);
   hNCinFV_stack_11->SetBinContent(24,7.175431);
   hNCinFV_stack_11->SetBinContent(25,11.16638);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.4463022);
   hNCinFV_stack_11->SetBinError(4,0.3274434);
   hNCinFV_stack_11->SetBinError(5,0.574264);
   hNCinFV_stack_11->SetBinError(6,0.1950249);
   hNCinFV_stack_11->SetBinError(8,0.3401776);
   hNCinFV_stack_11->SetBinError(9,0.2770047);
   hNCinFV_stack_11->SetBinError(10,0.3401776);
   hNCinFV_stack_11->SetBinError(11,0.1794914);
   hNCinFV_stack_11->SetBinError(13,0.1631475);
   hNCinFV_stack_11->SetBinError(14,0.2791907);
   hNCinFV_stack_11->SetBinError(15,0.1073979);
   hNCinFV_stack_11->SetBinError(16,0.2781975);
   hNCinFV_stack_11->SetBinError(17,0.5676645);
   hNCinFV_stack_11->SetBinError(18,0.3551195);
   hNCinFV_stack_11->SetBinError(19,0.4954263);
   hNCinFV_stack_11->SetBinError(20,0.2975314);
   hNCinFV_stack_11->SetBinError(21,0.6143811);
   hNCinFV_stack_11->SetBinError(22,0.6985733);
   hNCinFV_stack_11->SetBinError(23,1.160765);
   hNCinFV_stack_11->SetBinError(24,1.52516);
   hNCinFV_stack_11->SetBinError(25,1.811692);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,1.90304);
   hnumuCCinFV_stack_12->SetBinContent(2,1.156011);
   hnumuCCinFV_stack_12->SetBinContent(3,1.152193);
   hnumuCCinFV_stack_12->SetBinContent(4,1.347811);
   hnumuCCinFV_stack_12->SetBinContent(5,0.590071);
   hnumuCCinFV_stack_12->SetBinContent(6,2.054985);
   hnumuCCinFV_stack_12->SetBinContent(7,1.646409);
   hnumuCCinFV_stack_12->SetBinContent(8,1.322309);
   hnumuCCinFV_stack_12->SetBinContent(9,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(10,0.8136301);
   hnumuCCinFV_stack_12->SetBinContent(11,1.154407);
   hnumuCCinFV_stack_12->SetBinContent(12,1.73816);
   hnumuCCinFV_stack_12->SetBinContent(13,1.867896);
   hnumuCCinFV_stack_12->SetBinContent(14,1.366549);
   hnumuCCinFV_stack_12->SetBinContent(15,0.679665);
   hnumuCCinFV_stack_12->SetBinContent(16,2.992101);
   hnumuCCinFV_stack_12->SetBinContent(17,2.690958);
   hnumuCCinFV_stack_12->SetBinContent(18,3.539617);
   hnumuCCinFV_stack_12->SetBinContent(19,4.42412);
   hnumuCCinFV_stack_12->SetBinContent(20,4.795667);
   hnumuCCinFV_stack_12->SetBinContent(21,6.557899);
   hnumuCCinFV_stack_12->SetBinContent(22,7.419486);
   hnumuCCinFV_stack_12->SetBinContent(23,6.955839);
   hnumuCCinFV_stack_12->SetBinContent(24,16.26984);
   hnumuCCinFV_stack_12->SetBinContent(25,23.2067);
   hnumuCCinFV_stack_12->SetBinError(1,0.6944408);
   hnumuCCinFV_stack_12->SetBinError(2,0.5318366);
   hnumuCCinFV_stack_12->SetBinError(3,0.598262);
   hnumuCCinFV_stack_12->SetBinError(4,0.5526787);
   hnumuCCinFV_stack_12->SetBinError(5,0.4398017);
   hnumuCCinFV_stack_12->SetBinError(6,0.7505007);
   hnumuCCinFV_stack_12->SetBinError(7,0.7752373);
   hnumuCCinFV_stack_12->SetBinError(8,0.5439279);
   hnumuCCinFV_stack_12->SetBinError(9,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(10,0.4774413);
   hnumuCCinFV_stack_12->SetBinError(11,0.5178159);
   hnumuCCinFV_stack_12->SetBinError(12,0.7361302);
   hnumuCCinFV_stack_12->SetBinError(13,0.7369458);
   hnumuCCinFV_stack_12->SetBinError(14,0.6369102);
   hnumuCCinFV_stack_12->SetBinError(15,0.3941811);
   hnumuCCinFV_stack_12->SetBinError(16,0.9350973);
   hnumuCCinFV_stack_12->SetBinError(17,0.8864792);
   hnumuCCinFV_stack_12->SetBinError(18,1.015611);
   hnumuCCinFV_stack_12->SetBinError(19,1.126324);
   hnumuCCinFV_stack_12->SetBinError(20,1.314395);
   hnumuCCinFV_stack_12->SetBinError(21,1.313505);
   hnumuCCinFV_stack_12->SetBinError(22,1.408503);
   hnumuCCinFV_stack_12->SetBinError(23,1.307794);
   hnumuCCinFV_stack_12->SetBinError(24,2.914006);
   hnumuCCinFV_stack_12->SetBinError(25,3.248049);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hnueCCinFV_stack_13->SetBinContent(2,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,3.19472);
   hnueCCinFV_stack_13->SetBinError(2,0.340721);
   hnueCCinFV_stack_13->SetBinError(6,0.3025491);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.1950249);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,1.151578);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);
   hmcerror__23->SetBinContent(1,20.63031);
   hmcerror__23->SetBinContent(2,18.75349);
   hmcerror__23->SetBinContent(3,15.58128);
   hmcerror__23->SetBinContent(4,11.83809);
   hmcerror__23->SetBinContent(5,14.55428);
   hmcerror__23->SetBinContent(6,15.37186);
   hmcerror__23->SetBinContent(7,17.12849);
   hmcerror__23->SetBinContent(8,11.66242);
   hmcerror__23->SetBinContent(9,12.6994);
   hmcerror__23->SetBinContent(10,10.03094);
   hmcerror__23->SetBinContent(11,15.88193);
   hmcerror__23->SetBinContent(12,21.30779);
   hmcerror__23->SetBinContent(13,24.77707);
   hmcerror__23->SetBinContent(14,21.43381);
   hmcerror__23->SetBinContent(15,17.40644);
   hmcerror__23->SetBinContent(16,20.90438);
   hmcerror__23->SetBinContent(17,24.25702);
   hmcerror__23->SetBinContent(18,25.25583);
   hmcerror__23->SetBinContent(19,35.0437);
   hmcerror__23->SetBinContent(20,37.52574);
   hmcerror__23->SetBinContent(21,53.0927);
   hmcerror__23->SetBinContent(22,69.60115);
   hmcerror__23->SetBinContent(23,95.31323);
   hmcerror__23->SetBinContent(24,122.0449);
   hmcerror__23->SetBinContent(25,201.468);
   hmcerror__23->SetBinError(1,14.10649);
   hmcerror__23->SetBinError(2,12.15975);
   hmcerror__23->SetBinError(3,8.947943);
   hmcerror__23->SetBinError(4,11.41607);
   hmcerror__23->SetBinError(5,13.1634);
   hmcerror__23->SetBinError(6,11.13939);
   hmcerror__23->SetBinError(7,8.285068);
   hmcerror__23->SetBinError(8,8.540868);
   hmcerror__23->SetBinError(9,7.259935);
   hmcerror__23->SetBinError(10,5.593261);
   hmcerror__23->SetBinError(11,9.845832);
   hmcerror__23->SetBinError(12,13.52691);
   hmcerror__23->SetBinError(13,10.46073);
   hmcerror__23->SetBinError(14,12.54315);
   hmcerror__23->SetBinError(15,15.81358);
   hmcerror__23->SetBinError(16,10.96634);
   hmcerror__23->SetBinError(17,11.4197);
   hmcerror__23->SetBinError(18,13.47533);
   hmcerror__23->SetBinError(19,13.74398);
   hmcerror__23->SetBinError(20,12.95422);
   hmcerror__23->SetBinError(21,27.165);
   hmcerror__23->SetBinError(22,20.63453);
   hmcerror__23->SetBinError(23,28.53802);
   hmcerror__23->SetBinError(24,33.44097);
   hmcerror__23->SetBinError(25,52.02692);
   hmcerror__23->SetBinError(26,0.3895343);
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
   
   Double_t _fx3029[25] = {
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
   Double_t _fy3029[25] = {
   27,
   13,
   11,
   9,
   14,
   11,
   12,
   13,
   16,
   15,
   14,
   17,
   15,
   15,
   15,
   17,
   26,
   24,
   31,
   43,
   48,
   64,
   95,
   131,
   189};
   Double_t _felx3029[25] = {
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
   Double_t _fely3029[25] = {
   5.3414,
   3.77763,
   3.4975,
   3.19354,
   3.9102,
   3.4975,
   3.64022,
   3.77763,
   4.1628,
   4.0385,
   3.9102,
   4.2835,
   4.0385,
   4.0385,
   4.0385,
   4.2835,
   5.2453,
   5.0476,
   5.7094,
   6.6917,
   7.0604,
   8.1273,
   9.8686,
   11.44552,
   13.74773};
   Double_t _fehx3029[25] = {
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
   Double_t _fehy3029[25] = {
   5.1322,
   3.5552,
   3.27,
   2.9582,
   3.6898,
   3.27,
   3.4155,
   3.5552,
   3.9454,
   3.8197,
   3.6898,
   4.0673,
   3.8197,
   3.8197,
   3.8197,
   4.0673,
   5.0358,
   4.837,
   5.5017,
   6.4868,
   6.8561,
   7.9246,
   9.667,
   11.44552,
   13.74773};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,-1.2,1.2);
   Graph_Graph3029->SetMinimum(5.225814);
   Graph_Graph3029->SetMaximum(222.4419);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.2/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 33.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 192.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  116.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  33.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[25] = {
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
   Double_t _fy3030[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[25] = {
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
   Double_t _fely3030[25] = {
   0.6837748,
   0.6483996,
   0.5742751,
   0.9643503,
   0.904435,
   0.7246615,
   0.4837009,
   0.732341,
   0.5716753,
   0.5576006,
   0.6199394,
   0.634834,
   0.4221938,
   0.5852042,
   0.9084899,
   0.5245955,
   0.4707791,
   0.5335531,
   0.3921954,
   0.3452088,
   0.5116522,
   0.2964683,
   0.299413,
   0.2740054,
   0.2582391};
   Double_t _fehx3030[25] = {
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
   Double_t _fehy3030[25] = {
   0.6837748,
   0.6483996,
   0.5742751,
   0.9643503,
   0.904435,
   0.7246615,
   0.4837009,
   0.732341,
   0.5716753,
   0.5576006,
   0.6199394,
   0.634834,
   0.4221938,
   0.5852042,
   0.9084899,
   0.5245955,
   0.4707791,
   0.5335531,
   0.3921954,
   0.3452088,
   0.5116522,
   0.2964683,
   0.299413,
   0.2740054,
   0.2582391};
   grae = new TGraphAsymmErrors(25,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,-1.2,1.2);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} cos #theta");
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
   
   Double_t _fx3031[25] = {
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
   Double_t _fy3031[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[25] = {
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
   Double_t _fely3031[25] = {
   0.2364181,
   0.19947,
   0.2078796,
   0.2492472,
   0.2486938,
   0.2334946,
   0.204962,
   0.2635289,
   0.236059,
   0.2428231,
   0.2319242,
   0.1931024,
   0.1986311,
   0.2068376,
   0.2281367,
   0.2276067,
   0.221832,
   0.2175663,
   0.238814,
   0.1953426,
   0.2043573,
   0.1846423,
   0.1855018,
   0.1818927,
   0.173323};
   Double_t _fehx3031[25] = {
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
   Double_t _fehy3031[25] = {
   0.2364181,
   0.19947,
   0.2078796,
   0.2492472,
   0.2486938,
   0.2334946,
   0.204962,
   0.2635289,
   0.236059,
   0.2428231,
   0.2319242,
   0.1931024,
   0.1986311,
   0.2068376,
   0.2281367,
   0.2276067,
   0.221832,
   0.2175663,
   0.238814,
   0.1953426,
   0.2043573,
   0.1846423,
   0.1855018,
   0.1818927,
   0.173323};
   grae = new TGraphAsymmErrors(25,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,-1.2,1.2);
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
   
   Double_t _fx3032[25] = {
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
   Double_t _fy3032[25] = {
   1.308754,
   0.6932044,
   0.7059753,
   0.7602575,
   0.9619163,
   0.7155934,
   0.7005871,
   1.114692,
   1.259902,
   1.495373,
   0.8815051,
   0.7978305,
   0.6053985,
   0.699829,
   0.8617498,
   0.8132268,
   1.071854,
   0.9502755,
   0.8846099,
   1.14588,
   0.904079,
   0.919525,
   0.9967137,
   1.073375,
   0.9381142};
   Double_t _felx3032[25] = {
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
   Double_t _fely3032[25] = {
   0.2589103,
   0.2014361,
   0.2244681,
   0.2697681,
   0.2686632,
   0.2275262,
   0.2125243,
   0.3239148,
   0.3277949,
   0.4026041,
   0.2462044,
   0.2010298,
   0.1629935,
   0.1884173,
   0.2320118,
   0.2049092,
   0.2162384,
   0.1998588,
   0.1629223,
   0.1783229,
   0.1329825,
   0.1167696,
   0.1035386,
   0.09378124,
   0.06823777};
   Double_t _fehx3032[25] = {
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
   Double_t _fehy3032[25] = {
   0.2487699,
   0.1895754,
   0.2098672,
   0.2498882,
   0.2535199,
   0.2127264,
   0.1994046,
   0.3048424,
   0.310676,
   0.3807916,
   0.232327,
   0.1908833,
   0.1541627,
   0.1782091,
   0.2194417,
   0.1945669,
   0.2076017,
   0.1915201,
   0.1569954,
   0.1728627,
   0.1291345,
   0.1138573,
   0.1014235,
   0.09378124,
   0.06823777};
   grae = new TGraphAsymmErrors(25,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,-1.2,1.2);
   Graph_Graph3032->SetMinimum(0.2990291);
   Graph_Graph3032->SetMaximum(2.01954);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_costheta_all",25,-1,1);

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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec. + Reweight","F");

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
