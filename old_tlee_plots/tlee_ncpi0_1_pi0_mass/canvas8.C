#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sun Oct 23 14:05:13 2022) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-1.58,451.2821,174.7147);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hmc__22->SetBinContent(1,27.84177);
   hmc__22->SetBinContent(2,31.79138);
   hmc__22->SetBinContent(3,37.76702);
   hmc__22->SetBinContent(4,37.16088);
   hmc__22->SetBinContent(5,42.54376);
   hmc__22->SetBinContent(6,52.9136);
   hmc__22->SetBinContent(7,71.68616);
   hmc__22->SetBinContent(8,59.67332);
   hmc__22->SetBinContent(9,57.70923);
   hmc__22->SetBinContent(10,74.30728);
   hmc__22->SetBinContent(11,73.81198);
   hmc__22->SetBinContent(12,70.32597);
   hmc__22->SetBinContent(13,65.81488);
   hmc__22->SetBinContent(14,41.72803);
   hmc__22->SetBinContent(15,30.69529);
   hmc__22->SetBinContent(16,19.87648);
   hmc__22->SetBinContent(17,15.38952);
   hmc__22->SetBinContent(18,14.18728);
   hmc__22->SetBinContent(19,9.685738);
   hmc__22->SetBinContent(20,8.244081);
   hmc__22->SetBinContent(21,7.233242);
   hmc__22->SetBinContent(22,11.07325);
   hmc__22->SetBinContent(23,7.550988);
   hmc__22->SetBinContent(24,7.237804);
   hmc__22->SetBinContent(25,5.720907);
   hmc__22->SetBinContent(26,4.087209);
   hmc__22->SetBinContent(27,5.272105);
   hmc__22->SetBinContent(28,2.870656);
   hmc__22->SetBinContent(29,2.733176);
   hmc__22->SetBinContent(30,5.001493);
   hmc__22->SetBinContent(31,2.129752);
   hmc__22->SetBinContent(32,2.146468);
   hmc__22->SetBinContent(33,3.554455);
   hmc__22->SetBinContent(34,2.78081);
   hmc__22->SetBinContent(35,21.01827);
   hmc__22->SetBinError(1,19.18253);
   hmc__22->SetBinError(2,20.60331);
   hmc__22->SetBinError(3,14.44225);
   hmc__22->SetBinError(4,19.56041);
   hmc__22->SetBinError(5,17.73562);
   hmc__22->SetBinError(6,19.59632);
   hmc__22->SetBinError(7,29.44238);
   hmc__22->SetBinError(8,19.72967);
   hmc__22->SetBinError(9,17.95458);
   hmc__22->SetBinError(10,24.71783);
   hmc__22->SetBinError(11,24.4556);
   hmc__22->SetBinError(12,24.63163);
   hmc__22->SetBinError(13,22.67346);
   hmc__22->SetBinError(14,18.1151);
   hmc__22->SetBinError(15,13.27076);
   hmc__22->SetBinError(16,15.96439);
   hmc__22->SetBinError(17,10.3679);
   hmc__22->SetBinError(18,9.682303);
   hmc__22->SetBinError(19,8.421346);
   hmc__22->SetBinError(20,6.357534);
   hmc__22->SetBinError(21,6.572465);
   hmc__22->SetBinError(22,8.620588);
   hmc__22->SetBinError(23,10.86128);
   hmc__22->SetBinError(24,14.62427);
   hmc__22->SetBinError(25,6.447909);
   hmc__22->SetBinError(26,6.00704);
   hmc__22->SetBinError(27,6.443166);
   hmc__22->SetBinError(28,4.252949);
   hmc__22->SetBinError(29,4.807381);
   hmc__22->SetBinError(30,7.312681);
   hmc__22->SetBinError(31,2.789948);
   hmc__22->SetBinError(32,3.882232);
   hmc__22->SetBinError(33,7.94083);
   hmc__22->SetBinError(34,5.285433);
   hmc__22->SetBinError(35,15.94407);
   hmc__22->SetMinimum(-1.58);
   hmc__22->SetMaximum(165.9);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",34,0,400);
   hs8_stack_8->SetMinimum(-1.429819e-08);
   hs8_stack_8->SetMaximum(78.02265);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,1.516553);
   hbadmatch_stack_1->SetBinContent(2,2.318612);
   hbadmatch_stack_1->SetBinContent(3,2.071919);
   hbadmatch_stack_1->SetBinContent(4,0.924938);
   hbadmatch_stack_1->SetBinContent(5,1.434749);
   hbadmatch_stack_1->SetBinContent(6,2.299258);
   hbadmatch_stack_1->SetBinContent(7,4.675124);
   hbadmatch_stack_1->SetBinContent(8,2.646969);
   hbadmatch_stack_1->SetBinContent(9,0.5578842);
   hbadmatch_stack_1->SetBinContent(10,1.564474);
   hbadmatch_stack_1->SetBinContent(11,1.410583);
   hbadmatch_stack_1->SetBinContent(12,2.274077);
   hbadmatch_stack_1->SetBinContent(13,1.946875);
   hbadmatch_stack_1->SetBinContent(14,1.153804);
   hbadmatch_stack_1->SetBinContent(15,1.651783);
   hbadmatch_stack_1->SetBinContent(16,0.5571548);
   hbadmatch_stack_1->SetBinContent(18,0.3401776);
   hbadmatch_stack_1->SetBinContent(19,0.3917402);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,0.5625357);
   hbadmatch_stack_1->SetBinContent(22,0.3916036);
   hbadmatch_stack_1->SetBinContent(23,0.1818913);
   hbadmatch_stack_1->SetBinContent(24,0.6803553);
   hbadmatch_stack_1->SetBinContent(26,0.2855402);
   hbadmatch_stack_1->SetBinContent(27,0.3235489);
   hbadmatch_stack_1->SetBinContent(34,0.2855402);
   hbadmatch_stack_1->SetBinContent(35,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.6402337);
   hbadmatch_stack_1->SetBinError(2,1.186722);
   hbadmatch_stack_1->SetBinError(3,0.817746);
   hbadmatch_stack_1->SetBinError(4,0.5513961);
   hbadmatch_stack_1->SetBinError(5,0.6104664);
   hbadmatch_stack_1->SetBinError(6,0.860993);
   hbadmatch_stack_1->SetBinError(7,1.233932);
   hbadmatch_stack_1->SetBinError(8,1.047766);
   hbadmatch_stack_1->SetBinError(9,0.3747614);
   hbadmatch_stack_1->SetBinError(10,0.6207106);
   hbadmatch_stack_1->SetBinError(11,0.6505627);
   hbadmatch_stack_1->SetBinError(12,0.9243659);
   hbadmatch_stack_1->SetBinError(13,0.7915429);
   hbadmatch_stack_1->SetBinError(14,0.4824158);
   hbadmatch_stack_1->SetBinError(15,0.709277);
   hbadmatch_stack_1->SetBinError(16,0.3038805);
   hbadmatch_stack_1->SetBinError(18,0.3401776);
   hbadmatch_stack_1->SetBinError(19,0.2770047);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.3355922);
   hbadmatch_stack_1->SetBinError(22,0.3916037);
   hbadmatch_stack_1->SetBinError(23,0.1818913);
   hbadmatch_stack_1->SetBinError(24,0.4810838);
   hbadmatch_stack_1->SetBinError(26,0.2855402);
   hbadmatch_stack_1->SetBinError(27,0.2335661);
   hbadmatch_stack_1->SetBinError(34,0.2855402);
   hbadmatch_stack_1->SetBinError(35,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hext_stack_2->SetBinContent(1,8.443149);
   hext_stack_2->SetBinContent(2,9.737967);
   hext_stack_2->SetBinContent(3,13.89051);
   hext_stack_2->SetBinContent(4,11.51);
   hext_stack_2->SetBinContent(5,11.72624);
   hext_stack_2->SetBinContent(6,17.54549);
   hext_stack_2->SetBinContent(7,21.41672);
   hext_stack_2->SetBinContent(8,15.78064);
   hext_stack_2->SetBinContent(9,13.1551);
   hext_stack_2->SetBinContent(10,14.73243);
   hext_stack_2->SetBinContent(11,12.71102);
   hext_stack_2->SetBinContent(12,10.03918);
   hext_stack_2->SetBinContent(13,10.43583);
   hext_stack_2->SetBinContent(14,5.504803);
   hext_stack_2->SetBinContent(15,5.654845);
   hext_stack_2->SetBinContent(16,3.476217);
   hext_stack_2->SetBinContent(17,1.048213);
   hext_stack_2->SetBinContent(18,1.461993);
   hext_stack_2->SetBinContent(19,1.379791);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,0.8131978);
   hext_stack_2->SetBinContent(22,3.215251);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinContent(26,0.3243973);
   hext_stack_2->SetBinContent(27,0.6487947);
   hext_stack_2->SetBinContent(29,0.4065989);
   hext_stack_2->SetBinContent(31,0.3243973);
   hext_stack_2->SetBinContent(33,0.7309963);
   hext_stack_2->SetBinContent(35,1.219797);
   hext_stack_2->SetBinError(1,1.733874);
   hext_stack_2->SetBinError(2,1.939994);
   hext_stack_2->SetBinError(3,2.634849);
   hext_stack_2->SetBinError(4,2.193702);
   hext_stack_2->SetBinError(5,2.307803);
   hext_stack_2->SetBinError(6,2.880141);
   hext_stack_2->SetBinError(7,3.187729);
   hext_stack_2->SetBinError(8,2.654291);
   hext_stack_2->SetBinError(9,2.556707);
   hext_stack_2->SetBinError(10,2.543279);
   hext_stack_2->SetBinError(11,2.361266);
   hext_stack_2->SetBinError(12,2.000242);
   hext_stack_2->SetBinError(13,2.168829);
   hext_stack_2->SetBinError(14,1.525286);
   hext_stack_2->SetBinError(15,1.687921);
   hext_stack_2->SetBinError(16,1.278674);
   hext_stack_2->SetBinError(17,0.7595995);
   hext_stack_2->SetBinError(18,0.7356036);
   hext_stack_2->SetBinError(19,0.6935586);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,0.5750177);
   hext_stack_2->SetBinError(22,1.36277);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetBinError(26,0.3243973);
   hext_stack_2->SetBinError(27,0.4587671);
   hext_stack_2->SetBinError(29,0.4065989);
   hext_stack_2->SetBinError(31,0.3243973);
   hext_stack_2->SetBinError(33,0.5201503);
   hext_stack_2->SetBinError(35,0.7042499);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,0.6951543);
   hdirt_stack_3->SetBinContent(2,1.163924);
   hdirt_stack_3->SetBinContent(3,1.251085);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.6951543);
   hdirt_stack_3->SetBinContent(6,0.8726653);
   hdirt_stack_3->SetBinContent(7,1.761911);
   hdirt_stack_3->SetBinContent(8,2.5012);
   hdirt_stack_3->SetBinContent(9,1.479639);
   hdirt_stack_3->SetBinContent(10,2.58547);
   hdirt_stack_3->SetBinContent(11,1.231824);
   hdirt_stack_3->SetBinContent(12,0.6904128);
   hdirt_stack_3->SetBinContent(13,1.444487);
   hdirt_stack_3->SetBinContent(14,0.3569671);
   hdirt_stack_3->SetBinContent(15,0.3569671);
   hdirt_stack_3->SetBinContent(16,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.5930034);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.165479);
   hdirt_stack_3->SetBinContent(21,0.2188956);
   hdirt_stack_3->SetBinContent(22,0.3861994);
   hdirt_stack_3->SetBinContent(29,0.2188956);
   hdirt_stack_3->SetBinError(1,0.4258516);
   hdirt_stack_3->SetBinError(2,0.5896235);
   hdirt_stack_3->SetBinError(3,0.5598599);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.4258516);
   hdirt_stack_3->SetBinError(6,0.3571881);
   hdirt_stack_3->SetBinError(7,0.7293437);
   hdirt_stack_3->SetBinError(8,0.8617669);
   hdirt_stack_3->SetBinError(9,0.5654142);
   hdirt_stack_3->SetBinError(10,0.889987);
   hdirt_stack_3->SetBinError(11,0.5967383);
   hdirt_stack_3->SetBinError(12,0.4579814);
   hdirt_stack_3->SetBinError(13,1.011719);
   hdirt_stack_3->SetBinError(14,0.258803);
   hdirt_stack_3->SetBinError(15,0.258803);
   hdirt_stack_3->SetBinError(16,0.1380715);
   hdirt_stack_3->SetBinError(17,0.4234405);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(20,0.165479);
   hdirt_stack_3->SetBinError(21,0.2188956);
   hdirt_stack_3->SetBinError(22,0.3861995);
   hdirt_stack_3->SetBinError(29,0.2188956);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,6.970344);
   houtFV_stack_4->SetBinContent(2,7.817154);
   houtFV_stack_4->SetBinContent(3,8.742025);
   houtFV_stack_4->SetBinContent(4,10.94906);
   houtFV_stack_4->SetBinContent(5,10.76859);
   houtFV_stack_4->SetBinContent(6,11.79686);
   houtFV_stack_4->SetBinContent(7,17.36085);
   houtFV_stack_4->SetBinContent(8,11.00265);
   houtFV_stack_4->SetBinContent(9,13.56606);
   houtFV_stack_4->SetBinContent(10,13.31434);
   houtFV_stack_4->SetBinContent(11,9.052801);
   houtFV_stack_4->SetBinContent(12,15.24947);
   houtFV_stack_4->SetBinContent(13,10.93639);
   houtFV_stack_4->SetBinContent(14,9.253223);
   houtFV_stack_4->SetBinContent(15,5.803205);
   houtFV_stack_4->SetBinContent(16,3.563138);
   houtFV_stack_4->SetBinContent(17,4.479918);
   houtFV_stack_4->SetBinContent(18,3.398986);
   houtFV_stack_4->SetBinContent(19,1.712114);
   houtFV_stack_4->SetBinContent(20,1.894437);
   houtFV_stack_4->SetBinContent(21,1.438934);
   houtFV_stack_4->SetBinContent(22,1.83269);
   houtFV_stack_4->SetBinContent(23,1.090402);
   houtFV_stack_4->SetBinContent(24,0.9739087);
   houtFV_stack_4->SetBinContent(25,1.167064);
   houtFV_stack_4->SetBinContent(26,0.785171);
   houtFV_stack_4->SetBinContent(27,1.800279);
   houtFV_stack_4->SetBinContent(28,1.127039);
   houtFV_stack_4->SetBinContent(29,0.3934307);
   houtFV_stack_4->SetBinContent(30,0.4448081);
   houtFV_stack_4->SetBinContent(31,0.1828038);
   houtFV_stack_4->SetBinContent(33,0.1950248);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,3.180239);
   houtFV_stack_4->SetBinError(1,1.302382);
   houtFV_stack_4->SetBinError(2,1.380728);
   houtFV_stack_4->SetBinError(3,1.479046);
   houtFV_stack_4->SetBinError(4,1.725642);
   houtFV_stack_4->SetBinError(5,1.87903);
   houtFV_stack_4->SetBinError(6,1.663851);
   houtFV_stack_4->SetBinError(7,2.160149);
   houtFV_stack_4->SetBinError(8,1.653648);
   houtFV_stack_4->SetBinError(9,1.795309);
   houtFV_stack_4->SetBinError(10,1.79121);
   houtFV_stack_4->SetBinError(11,1.49166);
   houtFV_stack_4->SetBinError(12,1.970849);
   houtFV_stack_4->SetBinError(13,2.021865);
   houtFV_stack_4->SetBinError(14,1.588099);
   houtFV_stack_4->SetBinError(15,1.204688);
   houtFV_stack_4->SetBinError(16,0.8823678);
   houtFV_stack_4->SetBinError(17,1.106602);
   houtFV_stack_4->SetBinError(18,0.9834666);
   houtFV_stack_4->SetBinError(19,0.6201715);
   houtFV_stack_4->SetBinError(20,0.7301603);
   houtFV_stack_4->SetBinError(21,0.6343338);
   houtFV_stack_4->SetBinError(22,0.6733671);
   houtFV_stack_4->SetBinError(23,0.5161281);
   houtFV_stack_4->SetBinError(24,0.4362685);
   houtFV_stack_4->SetBinError(25,0.5366549);
   houtFV_stack_4->SetBinError(26,0.3925882);
   houtFV_stack_4->SetBinError(27,0.7490598);
   houtFV_stack_4->SetBinError(28,0.5201044);
   houtFV_stack_4->SetBinError(29,0.2781975);
   houtFV_stack_4->SetBinError(30,0.263211);
   houtFV_stack_4->SetBinError(31,0.1396372);
   houtFV_stack_4->SetBinError(33,0.1950249);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,0.8659737);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1385251);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1281569);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4115524);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.5280485);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4301597);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.058877);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.089541);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.365105);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.902214);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.310295);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.228582);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.387873);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.218767);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.4445357);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.3953067);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3669668);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08757805);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3386491);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1840595);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.08128619);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(30,0.08892176);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(32,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.2568338);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.07056938);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.0579819);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.194166);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.317876);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.219036);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3784361);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4206399);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4059325);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5721147);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.409473);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4302206);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3841391);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3284451);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2007363);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1881555);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3289711);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.06587777);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2871355);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1306191);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.05087701);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(30,0.08892176);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(32,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.1191953);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.0437164);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.07910996);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1101543);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4394689);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02640148);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.06852069);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02686085);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.0503313);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07808443);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2946717);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01899753);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04924792);
   hNCpi0inFVqe_stack_6->SetBinError(33,0.01754354);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.777804);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.844123);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.88773);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.959341);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.809584);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.93905);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.216369);
   hNCpi0inFVres_stack_7->SetBinContent(8,8.608142);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.301596);
   hNCpi0inFVres_stack_7->SetBinContent(10,10.58511);
   hNCpi0inFVres_stack_7->SetBinContent(11,14.91438);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.72027);
   hNCpi0inFVres_stack_7->SetBinContent(13,11.92497);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.408385);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.122443);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.966384);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.843171);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.583599);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.425073);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.175325);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.9411232);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.8386627);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.6962698);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.4843665);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.4228033);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.2086646);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.3230659);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.1023007);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.07845018);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.1493562);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.01754354);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.1663201);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.1565412);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.2339716);
   hNCpi0inFVres_stack_7->SetBinContent(35,1.862661);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4778719);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3605359);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5609344);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8488304);
   hNCpi0inFVres_stack_7->SetBinError(5,0.5916923);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8105975);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9387063);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9549669);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8243903);
   hNCpi0inFVres_stack_7->SetBinError(10,1.052217);
   hNCpi0inFVres_stack_7->SetBinError(11,1.375737);
   hNCpi0inFVres_stack_7->SetBinError(12,1.137199);
   hNCpi0inFVres_stack_7->SetBinError(13,1.236127);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7597767);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5107383);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4083694);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4231669);
   hNCpi0inFVres_stack_7->SetBinError(18,0.4056705);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3916709);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3097863);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3575547);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3278055);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2429029);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1624111);
   hNCpi0inFVres_stack_7->SetBinError(25,0.1559817);
   hNCpi0inFVres_stack_7->SetBinError(26,0.0971293);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1278282);
   hNCpi0inFVres_stack_7->SetBinError(28,0.04457783);
   hNCpi0inFVres_stack_7->SetBinError(29,0.04045079);
   hNCpi0inFVres_stack_7->SetBinError(30,0.07733364);
   hNCpi0inFVres_stack_7->SetBinError(31,0.01754354);
   hNCpi0inFVres_stack_7->SetBinError(32,0.06274501);
   hNCpi0inFVres_stack_7->SetBinError(33,0.09448044);
   hNCpi0inFVres_stack_7->SetBinError(34,0.1051939);
   hNCpi0inFVres_stack_7->SetBinError(35,0.4762637);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.9166952);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.7332377);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.8645497);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.5345607);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.8272831);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.055295);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.037157);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.234372);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.581239);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.136594);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.010452);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.525842);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.900385);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.924073);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.7252592);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.402479);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.4131061);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5919167);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.1424938);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.02035842);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.4193467);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.2129579);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3484587);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.09140432);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.1730099);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.2074927);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.07301892);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.06551776);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.111388);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.5764853);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.1318151);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.04427161);
   hNCpi0inFVdis_stack_8->SetBinContent(35,1.035087);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5788739);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4394885);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2327418);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1364329);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2740664);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.2916788);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2440035);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5806447);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5670017);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7756404);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7354924);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8369165);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.67399);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3852709);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2196977);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1332374);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1757323);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2635581);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.08071456);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.01482777);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2671475);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1782047);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1732565);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.05541866);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1161097);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1026178);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.04082879);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.05057228);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.05728707);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.3563229);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.1318151);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.04427161);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.4600617);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01732447);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,2.676012);
   hCCpi0inFV_stack_10->SetBinContent(2,4.724869);
   hCCpi0inFV_stack_10->SetBinContent(3,4.299607);
   hCCpi0inFV_stack_10->SetBinContent(4,5.203123);
   hCCpi0inFV_stack_10->SetBinContent(5,7.035635);
   hCCpi0inFV_stack_10->SetBinContent(6,7.71599);
   hCCpi0inFV_stack_10->SetBinContent(7,9.639091);
   hCCpi0inFV_stack_10->SetBinContent(8,8.606701);
   hCCpi0inFV_stack_10->SetBinContent(9,11.40869);
   hCCpi0inFV_stack_10->SetBinContent(10,16.82515);
   hCCpi0inFV_stack_10->SetBinContent(11,19.52213);
   hCCpi0inFV_stack_10->SetBinContent(12,13.48504);
   hCCpi0inFV_stack_10->SetBinContent(13,15.65894);
   hCCpi0inFV_stack_10->SetBinContent(14,9.660664);
   hCCpi0inFV_stack_10->SetBinContent(15,6.877532);
   hCCpi0inFV_stack_10->SetBinContent(16,5.716952);
   hCCpi0inFV_stack_10->SetBinContent(17,4.001457);
   hCCpi0inFV_stack_10->SetBinContent(18,3.425918);
   hCCpi0inFV_stack_10->SetBinContent(19,2.339216);
   hCCpi0inFV_stack_10->SetBinContent(20,2.053982);
   hCCpi0inFV_stack_10->SetBinContent(21,1.763676);
   hCCpi0inFV_stack_10->SetBinContent(22,1.908829);
   hCCpi0inFV_stack_10->SetBinContent(23,1.412273);
   hCCpi0inFV_stack_10->SetBinContent(24,2.394159);
   hCCpi0inFV_stack_10->SetBinContent(25,1.663932);
   hCCpi0inFV_stack_10->SetBinContent(26,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(27,1.127039);
   hCCpi0inFV_stack_10->SetBinContent(28,0.7834804);
   hCCpi0inFV_stack_10->SetBinContent(29,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(30,2.150693);
   hCCpi0inFV_stack_10->SetBinContent(31,0.9303237);
   hCCpi0inFV_stack_10->SetBinContent(32,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(33,0.7319179);
   hCCpi0inFV_stack_10->SetBinContent(34,1.463836);
   hCCpi0inFV_stack_10->SetBinContent(35,6.355279);
   hCCpi0inFV_stack_10->SetBinError(1,0.8767996);
   hCCpi0inFV_stack_10->SetBinError(2,1.091436);
   hCCpi0inFV_stack_10->SetBinError(3,1.019167);
   hCCpi0inFV_stack_10->SetBinError(4,1.232454);
   hCCpi0inFV_stack_10->SetBinError(5,1.33109);
   hCCpi0inFV_stack_10->SetBinError(6,1.41536);
   hCCpi0inFV_stack_10->SetBinError(7,1.586221);
   hCCpi0inFV_stack_10->SetBinError(8,1.463179);
   hCCpi0inFV_stack_10->SetBinError(9,1.733634);
   hCCpi0inFV_stack_10->SetBinError(10,2.084664);
   hCCpi0inFV_stack_10->SetBinError(11,2.238585);
   hCCpi0inFV_stack_10->SetBinError(12,1.836125);
   hCCpi0inFV_stack_10->SetBinError(13,2.016998);
   hCCpi0inFV_stack_10->SetBinError(14,1.588976);
   hCCpi0inFV_stack_10->SetBinError(15,1.293757);
   hCCpi0inFV_stack_10->SetBinError(16,1.210199);
   hCCpi0inFV_stack_10->SetBinError(17,1.038578);
   hCCpi0inFV_stack_10->SetBinError(18,0.8774323);
   hCCpi0inFV_stack_10->SetBinError(19,0.8089383);
   hCCpi0inFV_stack_10->SetBinError(20,0.7078105);
   hCCpi0inFV_stack_10->SetBinError(21,0.5878975);
   hCCpi0inFV_stack_10->SetBinError(22,0.6506224);
   hCCpi0inFV_stack_10->SetBinError(23,0.6510715);
   hCCpi0inFV_stack_10->SetBinError(24,0.785313);
   hCCpi0inFV_stack_10->SetBinError(25,0.6518637);
   hCCpi0inFV_stack_10->SetBinError(26,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(27,0.5201044);
   hCCpi0inFV_stack_10->SetBinError(28,0.3917439);
   hCCpi0inFV_stack_10->SetBinError(29,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(30,0.6940139);
   hCCpi0inFV_stack_10->SetBinError(31,0.4814682);
   hCCpi0inFV_stack_10->SetBinError(32,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(33,0.438694);
   hCCpi0inFV_stack_10->SetBinError(34,0.620407);
   hCCpi0inFV_stack_10->SetBinError(35,1.241112);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,0.4296668);
   hNCinFV_stack_11->SetBinContent(3,0.8873445);
   hNCinFV_stack_11->SetBinContent(4,0.6441988);
   hNCinFV_stack_11->SetBinContent(5,1.610793);
   hNCinFV_stack_11->SetBinContent(6,1.5506);
   hNCinFV_stack_11->SetBinContent(7,2.475356);
   hNCinFV_stack_11->SetBinContent(8,1.960898);
   hNCinFV_stack_11->SetBinContent(9,1.058076);
   hNCinFV_stack_11->SetBinContent(10,2.583289);
   hNCinFV_stack_11->SetBinContent(11,1.655492);
   hNCinFV_stack_11->SetBinContent(12,2.657637);
   hNCinFV_stack_11->SetBinContent(13,1.897072);
   hNCinFV_stack_11->SetBinContent(14,1.001567);
   hNCinFV_stack_11->SetBinContent(15,0.6408997);
   hNCinFV_stack_11->SetBinContent(16,0.7320562);
   hNCinFV_stack_11->SetBinContent(17,0.679951);
   hNCinFV_stack_11->SetBinContent(18,0.5352025);
   hNCinFV_stack_11->SetBinContent(19,0.4336503);
   hNCinFV_stack_11->SetBinContent(20,0.1298672);
   hNCinFV_stack_11->SetBinContent(21,0.2943455);
   hNCinFV_stack_11->SetBinContent(22,0.3149582);
   hNCinFV_stack_11->SetBinContent(23,1.016432);
   hNCinFV_stack_11->SetBinContent(24,0.6443849);
   hNCinFV_stack_11->SetBinContent(25,1.239474);
   hNCinFV_stack_11->SetBinContent(26,0.3900497);
   hNCinFV_stack_11->SetBinContent(27,0.9522176);
   hNCinFV_stack_11->SetBinContent(28,0.1547526);
   hNCinFV_stack_11->SetBinContent(29,0.1199161);
   hNCinFV_stack_11->SetBinContent(30,0.6029732);
   hNCinFV_stack_11->SetBinContent(31,0.3401776);
   hNCinFV_stack_11->SetBinContent(32,0.2088052);
   hNCinFV_stack_11->SetBinContent(33,0.5681612);
   hNCinFV_stack_11->SetBinContent(34,0.5564754);
   hNCinFV_stack_11->SetBinContent(35,3.267183);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.3517515);
   hNCinFV_stack_11->SetBinError(3,0.4021226);
   hNCinFV_stack_11->SetBinError(4,0.3449819);
   hNCinFV_stack_11->SetBinError(5,0.6516554);
   hNCinFV_stack_11->SetBinError(6,0.5380424);
   hNCinFV_stack_11->SetBinError(7,0.8770944);
   hNCinFV_stack_11->SetBinError(8,0.7245729);
   hNCinFV_stack_11->SetBinError(9,0.4442768);
   hNCinFV_stack_11->SetBinError(10,0.8773625);
   hNCinFV_stack_11->SetBinError(11,0.6541794);
   hNCinFV_stack_11->SetBinError(12,0.7945565);
   hNCinFV_stack_11->SetBinError(13,0.7276099);
   hNCinFV_stack_11->SetBinError(14,0.5160935);
   hNCinFV_stack_11->SetBinError(15,0.4103029);
   hNCinFV_stack_11->SetBinError(16,0.3715016);
   hNCinFV_stack_11->SetBinError(17,0.3986376);
   hNCinFV_stack_11->SetBinError(18,0.3921167);
   hNCinFV_stack_11->SetBinError(19,0.352786);
   hNCinFV_stack_11->SetBinError(20,0.1298672);
   hNCinFV_stack_11->SetBinError(21,0.2943455);
   hNCinFV_stack_11->SetBinError(22,0.2295176);
   hNCinFV_stack_11->SetBinError(23,0.48836);
   hNCinFV_stack_11->SetBinError(24,0.6443849);
   hNCinFV_stack_11->SetBinError(25,0.5860089);
   hNCinFV_stack_11->SetBinError(26,0.2758068);
   hNCinFV_stack_11->SetBinError(27,0.7615084);
   hNCinFV_stack_11->SetBinError(28,0.1547526);
   hNCinFV_stack_11->SetBinError(29,0.1199161);
   hNCinFV_stack_11->SetBinError(30,0.3483547);
   hNCinFV_stack_11->SetBinError(31,0.3401776);
   hNCinFV_stack_11->SetBinError(32,0.1639209);
   hNCinFV_stack_11->SetBinError(33,0.5681613);
   hNCinFV_stack_11->SetBinError(34,0.4658364);
   hNCinFV_stack_11->SetBinError(35,1.087053);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,4.610533);
   hnumuCCinFV_stack_12->SetBinContent(2,2.42661);
   hnumuCCinFV_stack_12->SetBinContent(3,2.744099);
   hnumuCCinFV_stack_12->SetBinContent(4,1.761497);
   hnumuCCinFV_stack_12->SetBinContent(5,3.910971);
   hnumuCCinFV_stack_12->SetBinContent(6,4.187454);
   hnumuCCinFV_stack_12->SetBinContent(7,4.965603);
   hnumuCCinFV_stack_12->SetBinContent(8,5.045497);
   hnumuCCinFV_stack_12->SetBinContent(9,4.199486);
   hnumuCCinFV_stack_12->SetBinContent(10,6.374278);
   hnumuCCinFV_stack_12->SetBinContent(11,7.639365);
   hnumuCCinFV_stack_12->SetBinContent(12,8.015987);
   hnumuCCinFV_stack_12->SetBinContent(13,6.512496);
   hnumuCCinFV_stack_12->SetBinContent(14,6.245782);
   hnumuCCinFV_stack_12->SetBinContent(15,5.183823);
   hnumuCCinFV_stack_12->SetBinContent(16,2.703439);
   hnumuCCinFV_stack_12->SetBinContent(17,1.868752);
   hnumuCCinFV_stack_12->SetBinContent(18,2.26363);
   hnumuCCinFV_stack_12->SetBinContent(19,1.774083);
   hnumuCCinFV_stack_12->SetBinContent(20,1.319194);
   hnumuCCinFV_stack_12->SetBinContent(21,0.4425378);
   hnumuCCinFV_stack_12->SetBinContent(22,1.788037);
   hnumuCCinFV_stack_12->SetBinContent(23,2.421425);
   hnumuCCinFV_stack_12->SetBinContent(24,1.407615);
   hnumuCCinFV_stack_12->SetBinContent(25,0.7302274);
   hnumuCCinFV_stack_12->SetBinContent(26,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(28,0.6375661);
   hnumuCCinFV_stack_12->SetBinContent(29,0.3934307);
   hnumuCCinFV_stack_12->SetBinContent(30,0.9882557);
   hnumuCCinFV_stack_12->SetBinContent(31,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(32,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(33,0.8770706);
   hnumuCCinFV_stack_12->SetBinContent(35,3.2298);
   hnumuCCinFV_stack_12->SetBinError(1,1.578955);
   hnumuCCinFV_stack_12->SetBinError(2,0.7021652);
   hnumuCCinFV_stack_12->SetBinError(3,0.8493949);
   hnumuCCinFV_stack_12->SetBinError(4,0.6831231);
   hnumuCCinFV_stack_12->SetBinError(5,1.00671);
   hnumuCCinFV_stack_12->SetBinError(6,1.05695);
   hnumuCCinFV_stack_12->SetBinError(7,1.190787);
   hnumuCCinFV_stack_12->SetBinError(8,1.320638);
   hnumuCCinFV_stack_12->SetBinError(9,1.042623);
   hnumuCCinFV_stack_12->SetBinError(10,1.29564);
   hnumuCCinFV_stack_12->SetBinError(11,1.535424);
   hnumuCCinFV_stack_12->SetBinError(12,1.546028);
   hnumuCCinFV_stack_12->SetBinError(13,1.294298);
   hnumuCCinFV_stack_12->SetBinError(14,2.173771);
   hnumuCCinFV_stack_12->SetBinError(15,1.20885);
   hnumuCCinFV_stack_12->SetBinError(16,0.8376854);
   hnumuCCinFV_stack_12->SetBinError(17,0.6915118);
   hnumuCCinFV_stack_12->SetBinError(18,0.7786995);
   hnumuCCinFV_stack_12->SetBinError(19,0.6409559);
   hnumuCCinFV_stack_12->SetBinError(20,0.6075034);
   hnumuCCinFV_stack_12->SetBinError(21,0.3148422);
   hnumuCCinFV_stack_12->SetBinError(22,0.7159095);
   hnumuCCinFV_stack_12->SetBinError(23,2.234926);
   hnumuCCinFV_stack_12->SetBinError(24,0.6501767);
   hnumuCCinFV_stack_12->SetBinError(25,0.4379386);
   hnumuCCinFV_stack_12->SetBinError(26,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(28,0.3703539);
   hnumuCCinFV_stack_12->SetBinError(29,0.2781975);
   hnumuCCinFV_stack_12->SetBinError(30,0.5240058);
   hnumuCCinFV_stack_12->SetBinError(31,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(32,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(33,0.5197486);
   hnumuCCinFV_stack_12->SetBinError(35,0.8906435);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(2,0.4566905);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(11,0.2261597);
   hnueCCinFV_stack_13->SetBinContent(13,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.2252857);
   hnueCCinFV_stack_13->SetBinContent(17,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(23,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(33,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(35,0.414678);
   hnueCCinFV_stack_13->SetBinError(2,0.4566905);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.2770047);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.5270816);
   hnueCCinFV_stack_13->SetBinError(11,0.2261597);
   hnueCCinFV_stack_13->SetBinError(13,0.7431478);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.2252857);
   hnueCCinFV_stack_13->SetBinError(17,0.2781975);
   hnueCCinFV_stack_13->SetBinError(23,0.3025491);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(33,0.2463303);
   hnueCCinFV_stack_13->SetBinError(35,0.2936063);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);
   hmcerror__23->SetBinContent(1,27.84177);
   hmcerror__23->SetBinContent(2,31.79138);
   hmcerror__23->SetBinContent(3,37.76702);
   hmcerror__23->SetBinContent(4,37.16088);
   hmcerror__23->SetBinContent(5,42.54376);
   hmcerror__23->SetBinContent(6,52.9136);
   hmcerror__23->SetBinContent(7,71.68616);
   hmcerror__23->SetBinContent(8,59.67332);
   hmcerror__23->SetBinContent(9,57.70923);
   hmcerror__23->SetBinContent(10,74.30728);
   hmcerror__23->SetBinContent(11,73.81198);
   hmcerror__23->SetBinContent(12,70.32597);
   hmcerror__23->SetBinContent(13,65.81488);
   hmcerror__23->SetBinContent(14,41.72803);
   hmcerror__23->SetBinContent(15,30.69529);
   hmcerror__23->SetBinContent(16,19.87648);
   hmcerror__23->SetBinContent(17,15.38952);
   hmcerror__23->SetBinContent(18,14.18728);
   hmcerror__23->SetBinContent(19,9.685738);
   hmcerror__23->SetBinContent(20,8.244081);
   hmcerror__23->SetBinContent(21,7.233242);
   hmcerror__23->SetBinContent(22,11.07325);
   hmcerror__23->SetBinContent(23,7.550988);
   hmcerror__23->SetBinContent(24,7.237804);
   hmcerror__23->SetBinContent(25,5.720907);
   hmcerror__23->SetBinContent(26,4.087209);
   hmcerror__23->SetBinContent(27,5.272105);
   hmcerror__23->SetBinContent(28,2.870656);
   hmcerror__23->SetBinContent(29,2.733176);
   hmcerror__23->SetBinContent(30,5.001493);
   hmcerror__23->SetBinContent(31,2.129752);
   hmcerror__23->SetBinContent(32,2.146468);
   hmcerror__23->SetBinContent(33,3.554455);
   hmcerror__23->SetBinContent(34,2.78081);
   hmcerror__23->SetBinContent(35,21.01827);
   hmcerror__23->SetBinError(1,19.18253);
   hmcerror__23->SetBinError(2,20.60331);
   hmcerror__23->SetBinError(3,14.44225);
   hmcerror__23->SetBinError(4,19.56041);
   hmcerror__23->SetBinError(5,17.73562);
   hmcerror__23->SetBinError(6,19.59632);
   hmcerror__23->SetBinError(7,29.44238);
   hmcerror__23->SetBinError(8,19.72967);
   hmcerror__23->SetBinError(9,17.95458);
   hmcerror__23->SetBinError(10,24.71783);
   hmcerror__23->SetBinError(11,24.4556);
   hmcerror__23->SetBinError(12,24.63163);
   hmcerror__23->SetBinError(13,22.67346);
   hmcerror__23->SetBinError(14,18.1151);
   hmcerror__23->SetBinError(15,13.27076);
   hmcerror__23->SetBinError(16,15.96439);
   hmcerror__23->SetBinError(17,10.3679);
   hmcerror__23->SetBinError(18,9.682303);
   hmcerror__23->SetBinError(19,8.421346);
   hmcerror__23->SetBinError(20,6.357534);
   hmcerror__23->SetBinError(21,6.572465);
   hmcerror__23->SetBinError(22,8.620588);
   hmcerror__23->SetBinError(23,10.86128);
   hmcerror__23->SetBinError(24,14.62427);
   hmcerror__23->SetBinError(25,6.447909);
   hmcerror__23->SetBinError(26,6.00704);
   hmcerror__23->SetBinError(27,6.443166);
   hmcerror__23->SetBinError(28,4.252949);
   hmcerror__23->SetBinError(29,4.807381);
   hmcerror__23->SetBinError(30,7.312681);
   hmcerror__23->SetBinError(31,2.789948);
   hmcerror__23->SetBinError(32,3.882232);
   hmcerror__23->SetBinError(33,7.94083);
   hmcerror__23->SetBinError(34,5.285433);
   hmcerror__23->SetBinError(35,15.94407);
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
   
   Double_t _fx3029[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3029[34] = {
   26,
   28,
   36,
   38,
   50,
   60,
   46,
   46,
   75,
   79,
   66,
   54,
   64,
   32,
   37,
   19,
   17,
   14,
   9,
   7,
   9,
   16,
   14,
   7,
   1,
   7,
   5,
   0,
   0,
   5,
   3,
   1,
   0,
   1};
   Double_t _felx3029[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3029[34] = {
   5.2453,
   5.4358,
   6.1381,
   6.3013,
   7.2025,
   7.8743,
   6.9153,
   6.9153,
   8.7852,
   9.0124,
   8.2509,
   7.4785,
   8.1273,
   5.7977,
   6.2203,
   4.5151,
   4.2835,
   3.9102,
   3.19354,
   2.85954,
   3.19354,
   4.1628,
   3.9102,
   2.85954,
   1,
   2.85954,
   2.48995,
   0,
   0,
   2.48995,
   2.143368,
   1,
   0,
   1};
   Double_t _fehx3029[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3029[34] = {
   5.0358,
   5.2271,
   5.9318,
   6.0955,
   6.9985,
   7.6713,
   6.7108,
   6.7108,
   8.5831,
   8.8105,
   8.0483,
   7.275,
   7.9246,
   5.5904,
   6.0141,
   4.3011,
   4.0673,
   3.6898,
   2.9582,
   2.61053,
   2.9582,
   3.9454,
   3.6898,
   2.61053,
   1.35971,
   2.61053,
   2.21064,
   1.1478,
   1.1478,
   2.21064,
   1.72422,
   1.35971,
   1.1478,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,440);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(96.59155);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.6/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 872.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 197.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 189.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  114.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  32.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 180.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 31.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 94.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3030[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3030[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3030[34] = {
   0.6889841,
   0.6480785,
   0.3824039,
   0.5263711,
   0.4168794,
   0.3703457,
   0.4107121,
   0.330628,
   0.3111215,
   0.3326435,
   0.3313229,
   0.3502495,
   0.3445035,
   0.434123,
   0.4323386,
   0.80318,
   0.6736989,
   0.6824635,
   0.8694584,
   0.7711635,
   0.9086472,
   0.7785058,
   1.438392,
   2.020539,
   1.127078,
   1.469717,
   1.222124,
   1.481525,
   1.7589,
   1.4621,
   1.309987,
   1.808661,
   2.23405,
   1.900681};
   Double_t _fehx3030[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3030[34] = {
   0.6889841,
   0.6480785,
   0.3824039,
   0.5263711,
   0.4168794,
   0.3703457,
   0.4107121,
   0.330628,
   0.3111215,
   0.3326435,
   0.3313229,
   0.3502495,
   0.3445035,
   0.434123,
   0.4323386,
   0.80318,
   0.6736989,
   0.6824635,
   0.8694584,
   0.7711635,
   0.9086472,
   0.7785058,
   1.438392,
   2.020539,
   1.127078,
   1.469717,
   1.222124,
   1.481525,
   1.7589,
   1.4621,
   1.309987,
   1.808661,
   2.23405,
   1.900681};
   grae = new TGraphAsymmErrors(34,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,440);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3031[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3031[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3031[34] = {
   0.1854698,
   0.1892678,
   0.1608662,
   0.1852344,
   0.1872601,
   0.1659536,
   0.152647,
   0.171787,
   0.1879979,
   0.1828927,
   0.1810794,
   0.1937858,
   0.1809991,
   0.2045399,
   0.1868598,
   0.229772,
   0.2550666,
   0.2435709,
   0.2827708,
   0.2800251,
   0.2727109,
   0.2448824,
   0.5566716,
   0.3196415,
   0.3534734,
   0.3862533,
   0.3180156,
   0.4338568,
   0.4343678,
   0.3380316,
   0.5025924,
   0.528301,
   0.4452962,
   0.4783945};
   Double_t _fehx3031[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3031[34] = {
   0.1854698,
   0.1892678,
   0.1608662,
   0.1852344,
   0.1872601,
   0.1659536,
   0.152647,
   0.171787,
   0.1879979,
   0.1828927,
   0.1810794,
   0.1937858,
   0.1809991,
   0.2045399,
   0.1868598,
   0.229772,
   0.2550666,
   0.2435709,
   0.2827708,
   0.2800251,
   0.2727109,
   0.2448824,
   0.5566716,
   0.3196415,
   0.3534734,
   0.3862533,
   0.3180156,
   0.4338568,
   0.4343678,
   0.3380316,
   0.5025924,
   0.528301,
   0.4452962,
   0.4783945};
   grae = new TGraphAsymmErrors(34,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,440);
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
   
   Double_t _fx3032[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3032[34] = {
   0.9338488,
   0.8807419,
   0.9532126,
   1.022581,
   1.17526,
   1.133924,
   0.6416859,
   0.7708637,
   1.299619,
   1.063153,
   0.8941638,
   0.7678529,
   0.9724245,
   0.7668705,
   1.205397,
   0.9559035,
   1.104648,
   0.9867992,
   0.9292013,
   0.8490941,
   1.244255,
   1.444924,
   1.854062,
   0.9671441,
   0.1747975,
   1.71266,
   0.9483878,
   0,
   0,
   0.9997014,
   1.408615,
   0.4658817,
   0,
   0.3596075};
   Double_t _felx3032[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3032[34] = {
   0.1883968,
   0.1709835,
   0.1625254,
   0.1695681,
   0.1692963,
   0.1488143,
   0.09646631,
   0.115886,
   0.1522321,
   0.1212856,
   0.1117827,
   0.1063405,
   0.1234873,
   0.1389402,
   0.2026467,
   0.2271579,
   0.2783387,
   0.275613,
   0.3297157,
   0.3468598,
   0.4415088,
   0.375933,
   0.5178395,
   0.3950839,
   0.1747975,
   0.6996315,
   0.4722877,
   0,
   0,
   0.4978413,
   1.006393,
   0.4658817,
   0,
   0.3596075};
   Double_t _fehx3032[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3032[34] = {
   0.1808721,
   0.1644188,
   0.157063,
   0.16403,
   0.1645012,
   0.1449778,
   0.0936136,
   0.112459,
   0.1487301,
   0.1185685,
   0.1090379,
   0.1034468,
   0.1204074,
   0.1339723,
   0.1959291,
   0.2163914,
   0.2642902,
   0.260078,
   0.3054181,
   0.3166551,
   0.4089729,
   0.3563001,
   0.4886513,
   0.3606798,
   0.2376738,
   0.6387073,
   0.4193088,
   0.3998389,
   0.4199511,
   0.441996,
   0.8095872,
   0.633464,
   0.3229187,
   0.4889619};
   grae = new TGraphAsymmErrors(34,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,440);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.586504);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_mass_all",34,0,400);

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
   TLine *line = new TLine(0,1,400,1);
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
