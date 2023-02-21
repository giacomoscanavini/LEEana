#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sun Oct 23 18:44:01 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",190,172,1200,900);
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
   pad1->Range(-61.53846,-1.7,451.2821,187.9842);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__22->SetBinContent(1,29.0086);
   hmc__22->SetBinContent(2,31.65039);
   hmc__22->SetBinContent(3,40.88653);
   hmc__22->SetBinContent(4,41.25984);
   hmc__22->SetBinContent(5,40.86704);
   hmc__22->SetBinContent(6,54.6412);
   hmc__22->SetBinContent(7,65.18913);
   hmc__22->SetBinContent(8,57.77243);
   hmc__22->SetBinContent(9,61.07932);
   hmc__22->SetBinContent(10,70.54393);
   hmc__22->SetBinContent(11,70.96274);
   hmc__22->SetBinContent(12,68.82023);
   hmc__22->SetBinContent(13,66.2339);
   hmc__22->SetBinContent(14,41.71303);
   hmc__22->SetBinContent(15,30.58961);
   hmc__22->SetBinContent(16,22.41826);
   hmc__22->SetBinContent(17,15.23302);
   hmc__22->SetBinContent(18,14.24383);
   hmc__22->SetBinContent(19,9.760361);
   hmc__22->SetBinContent(20,11.56678);
   hmc__22->SetBinContent(21,8.238682);
   hmc__22->SetBinContent(22,7.651506);
   hmc__22->SetBinContent(23,10.90547);
   hmc__22->SetBinContent(24,5.994234);
   hmc__22->SetBinContent(25,5.209461);
   hmc__22->SetBinContent(26,5.433187);
   hmc__22->SetBinContent(27,4.526416);
   hmc__22->SetBinContent(28,3.453093);
   hmc__22->SetBinContent(29,3.647307);
   hmc__22->SetBinContent(30,4.328735);
   hmc__22->SetBinContent(31,2.485563);
   hmc__22->SetBinContent(32,1.716929);
   hmc__22->SetBinContent(33,1.998647);
   hmc__22->SetBinContent(34,2.517235);
   hmc__22->SetBinContent(35,21.01766);
   hmc__22->SetBinError(1,20.15552);
   hmc__22->SetBinError(2,22.27272);
   hmc__22->SetBinError(3,16.14354);
   hmc__22->SetBinError(4,20.55429);
   hmc__22->SetBinError(5,16.32122);
   hmc__22->SetBinError(6,16.97399);
   hmc__22->SetBinError(7,30.85556);
   hmc__22->SetBinError(8,18.426);
   hmc__22->SetBinError(9,17.89285);
   hmc__22->SetBinError(10,22.0257);
   hmc__22->SetBinError(11,21.97994);
   hmc__22->SetBinError(12,28.1425);
   hmc__22->SetBinError(13,22.64005);
   hmc__22->SetBinError(14,14.36306);
   hmc__22->SetBinError(15,12.31909);
   hmc__22->SetBinError(16,16.74569);
   hmc__22->SetBinError(17,9.252956);
   hmc__22->SetBinError(18,14.10413);
   hmc__22->SetBinError(19,7.316843);
   hmc__22->SetBinError(20,10.50698);
   hmc__22->SetBinError(21,8.102188);
   hmc__22->SetBinError(22,7.284204);
   hmc__22->SetBinError(23,13.18677);
   hmc__22->SetBinError(24,11.59885);
   hmc__22->SetBinError(25,9.324908);
   hmc__22->SetBinError(26,7.588368);
   hmc__22->SetBinError(27,4.930874);
   hmc__22->SetBinError(28,8.30366);
   hmc__22->SetBinError(29,6.416269);
   hmc__22->SetBinError(30,5.976877);
   hmc__22->SetBinError(31,3.121899);
   hmc__22->SetBinError(32,2.613277);
   hmc__22->SetBinError(33,3.323595);
   hmc__22->SetBinError(34,6.190899);
   hmc__22->SetBinError(35,13.85458);
   hmc__22->SetMinimum(-1.7);
   hmc__22->SetMaximum(178.5);
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
   hs8_stack_8->SetMaximum(74.51087);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,1.516553);
   hbadmatch_stack_1->SetBinContent(2,2.318612);
   hbadmatch_stack_1->SetBinContent(3,2.071919);
   hbadmatch_stack_1->SetBinContent(4,0.924938);
   hbadmatch_stack_1->SetBinContent(5,1.094571);
   hbadmatch_stack_1->SetBinContent(6,3.093038);
   hbadmatch_stack_1->SetBinContent(7,3.737882);
   hbadmatch_stack_1->SetBinContent(8,3.118663);
   hbadmatch_stack_1->SetBinContent(9,1.103788);
   hbadmatch_stack_1->SetBinContent(10,1.227231);
   hbadmatch_stack_1->SetBinContent(11,1.410583);
   hbadmatch_stack_1->SetBinContent(12,1.419034);
   hbadmatch_stack_1->SetBinContent(13,2.121563);
   hbadmatch_stack_1->SetBinContent(14,1.016693);
   hbadmatch_stack_1->SetBinContent(15,1.095674);
   hbadmatch_stack_1->SetBinContent(16,1.197122);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(19,0.7319179);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,0.5625357);
   hbadmatch_stack_1->SetBinContent(22,0.5734949);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.3401776);
   hbadmatch_stack_1->SetBinContent(27,0.4140642);
   hbadmatch_stack_1->SetBinContent(30,0.1950248);
   hbadmatch_stack_1->SetBinContent(34,0.2855402);
   hbadmatch_stack_1->SetBinContent(35,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.6402337);
   hbadmatch_stack_1->SetBinError(2,1.186722);
   hbadmatch_stack_1->SetBinError(3,0.817746);
   hbadmatch_stack_1->SetBinError(4,0.5513961);
   hbadmatch_stack_1->SetBinError(5,0.5069008);
   hbadmatch_stack_1->SetBinError(6,0.9897861);
   hbadmatch_stack_1->SetBinError(7,1.098725);
   hbadmatch_stack_1->SetBinError(8,1.109428);
   hbadmatch_stack_1->SetBinError(9,0.551377);
   hbadmatch_stack_1->SetBinError(10,0.5658051);
   hbadmatch_stack_1->SetBinError(11,0.6505627);
   hbadmatch_stack_1->SetBinError(12,0.6882187);
   hbadmatch_stack_1->SetBinError(13,0.8808553);
   hbadmatch_stack_1->SetBinError(14,0.4701395);
   hbadmatch_stack_1->SetBinError(15,0.5638492);
   hbadmatch_stack_1->SetBinError(16,0.5722868);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.438694);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.3355922);
   hbadmatch_stack_1->SetBinError(22,0.4317845);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.3401776);
   hbadmatch_stack_1->SetBinError(27,0.313132);
   hbadmatch_stack_1->SetBinError(30,0.1950249);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,9.256346);
   hext_stack_2->SetBinContent(2,8.275974);
   hext_stack_2->SetBinContent(3,16.0835);
   hext_stack_2->SetBinContent(4,14.96744);
   hext_stack_2->SetBinContent(5,10.85679);
   hext_stack_2->SetBinContent(6,17.62769);
   hext_stack_2->SetBinContent(7,16.50446);
   hext_stack_2->SetBinContent(8,15.42311);
   hext_stack_2->SetBinContent(9,13.52422);
   hext_stack_2->SetBinContent(10,11.81562);
   hext_stack_2->SetBinContent(11,10.67803);
   hext_stack_2->SetBinContent(12,10.69957);
   hext_stack_2->SetBinContent(13,12.91291);
   hext_stack_2->SetBinContent(14,5.180405);
   hext_stack_2->SetBinContent(15,7.098067);
   hext_stack_2->SetBinContent(16,3.311814);
   hext_stack_2->SetBinContent(17,3.323403);
   hext_stack_2->SetBinContent(18,1.055394);
   hext_stack_2->SetBinContent(19,1.137595);
   hext_stack_2->SetBinContent(20,1.055394);
   hext_stack_2->SetBinContent(21,1.461993);
   hext_stack_2->SetBinContent(22,0.6487947);
   hext_stack_2->SetBinContent(23,2.566457);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(27,0.6487947);
   hext_stack_2->SetBinContent(29,0.4065989);
   hext_stack_2->SetBinContent(31,0.6487947);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,1.219797);
   hext_stack_2->SetBinError(1,1.826736);
   hext_stack_2->SetBinError(2,1.795123);
   hext_stack_2->SetBinError(3,2.784618);
   hext_stack_2->SetBinError(4,2.591257);
   hext_stack_2->SetBinError(5,2.113466);
   hext_stack_2->SetBinError(6,2.890553);
   hext_stack_2->SetBinError(7,2.741718);
   hext_stack_2->SetBinError(8,2.75857);
   hext_stack_2->SetBinError(9,2.430272);
   hext_stack_2->SetBinError(10,2.277025);
   hext_stack_2->SetBinError(11,2.179211);
   hext_stack_2->SetBinError(12,2.036015);
   hext_stack_2->SetBinError(13,2.547863);
   hext_stack_2->SetBinError(14,1.49039);
   hext_stack_2->SetBinError(15,1.912452);
   hext_stack_2->SetBinError(16,1.230784);
   hext_stack_2->SetBinError(17,1.20364);
   hext_stack_2->SetBinError(18,0.6130171);
   hext_stack_2->SetBinError(19,0.6602113);
   hext_stack_2->SetBinError(20,0.6130171);
   hext_stack_2->SetBinError(21,0.7356036);
   hext_stack_2->SetBinError(22,0.4587671);
   hext_stack_2->SetBinError(23,1.283228);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(27,0.4587671);
   hext_stack_2->SetBinError(29,0.4065989);
   hext_stack_2->SetBinError(31,0.4587671);
   hext_stack_2->SetBinError(33,0.4065989);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,1.082577);
   hdirt_stack_3->SetBinContent(2,1.313864);
   hdirt_stack_3->SetBinContent(3,0.8517935);
   hdirt_stack_3->SetBinContent(4,0.4417201);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,1.072902);
   hdirt_stack_3->SetBinContent(7,1.623719);
   hdirt_stack_3->SetBinContent(8,2.278375);
   hdirt_stack_3->SetBinContent(9,1.479639);
   hdirt_stack_3->SetBinContent(10,2.639593);
   hdirt_stack_3->SetBinContent(11,1.396596);
   hdirt_stack_3->SetBinContent(12,0.5523413);
   hdirt_stack_3->SetBinContent(13,1.444487);
   hdirt_stack_3->SetBinContent(14,0.2761429);
   hdirt_stack_3->SetBinContent(15,0.5758626);
   hdirt_stack_3->SetBinContent(16,0.2761429);
   hdirt_stack_3->SetBinContent(17,0.5930034);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.2188956);
   hdirt_stack_3->SetBinContent(20,0.165479);
   hdirt_stack_3->SetBinContent(23,0.3861994);
   hdirt_stack_3->SetBinContent(28,0.2188956);
   hdirt_stack_3->SetBinError(1,0.5124346);
   hdirt_stack_3->SetBinError(2,0.6670182);
   hdirt_stack_3->SetBinError(3,0.3924407);
   hdirt_stack_3->SetBinError(4,0.3095901);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.4721125);
   hdirt_stack_3->SetBinError(7,0.7161553);
   hdirt_stack_3->SetBinError(8,0.8334935);
   hdirt_stack_3->SetBinError(9,0.5654142);
   hdirt_stack_3->SetBinError(10,0.9119285);
   hdirt_stack_3->SetBinError(11,0.6037177);
   hdirt_stack_3->SetBinError(12,0.4366729);
   hdirt_stack_3->SetBinError(13,1.011719);
   hdirt_stack_3->SetBinError(14,0.1952625);
   hdirt_stack_3->SetBinError(15,0.3389606);
   hdirt_stack_3->SetBinError(16,0.1952625);
   hdirt_stack_3->SetBinError(17,0.4234405);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.2188956);
   hdirt_stack_3->SetBinError(20,0.165479);
   hdirt_stack_3->SetBinError(23,0.3861995);
   hdirt_stack_3->SetBinError(28,0.2188956);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,6.445608);
   houtFV_stack_4->SetBinContent(2,8.175628);
   houtFV_stack_4->SetBinContent(3,10.23736);
   houtFV_stack_4->SetBinContent(4,11.7993);
   houtFV_stack_4->SetBinContent(5,10.28324);
   houtFV_stack_4->SetBinContent(6,10.68001);
   houtFV_stack_4->SetBinContent(7,16.71855);
   houtFV_stack_4->SetBinContent(8,11.40944);
   houtFV_stack_4->SetBinContent(9,13.50971);
   houtFV_stack_4->SetBinContent(10,12.50487);
   houtFV_stack_4->SetBinContent(11,9.913746);
   houtFV_stack_4->SetBinContent(12,15.17129);
   houtFV_stack_4->SetBinContent(13,11.74204);
   houtFV_stack_4->SetBinContent(14,8.963936);
   houtFV_stack_4->SetBinContent(15,5.539055);
   houtFV_stack_4->SetBinContent(16,4.858357);
   houtFV_stack_4->SetBinContent(17,3.251862);
   houtFV_stack_4->SetBinContent(18,3.359639);
   houtFV_stack_4->SetBinContent(19,2.433506);
   houtFV_stack_4->SetBinContent(20,2.232924);
   houtFV_stack_4->SetBinContent(21,1.447639);
   houtFV_stack_4->SetBinContent(22,1.50703);
   houtFV_stack_4->SetBinContent(23,1.025987);
   houtFV_stack_4->SetBinContent(24,0.9577006);
   houtFV_stack_4->SetBinContent(25,0.8268861);
   houtFV_stack_4->SetBinContent(26,0.7868615);
   houtFV_stack_4->SetBinContent(27,1.656816);
   houtFV_stack_4->SetBinContent(28,0.6803553);
   houtFV_stack_4->SetBinContent(29,0.5901461);
   houtFV_stack_4->SetBinContent(30,0.4448081);
   houtFV_stack_4->SetBinContent(31,0.05405266);
   houtFV_stack_4->SetBinContent(34,0.1967154);
   houtFV_stack_4->SetBinContent(35,3.035087);
   houtFV_stack_4->SetBinError(1,1.214003);
   houtFV_stack_4->SetBinError(2,1.431597);
   houtFV_stack_4->SetBinError(3,1.588798);
   houtFV_stack_4->SetBinError(4,1.992187);
   houtFV_stack_4->SetBinError(5,1.64449);
   houtFV_stack_4->SetBinError(6,1.562684);
   houtFV_stack_4->SetBinError(7,2.096696);
   houtFV_stack_4->SetBinError(8,1.729623);
   houtFV_stack_4->SetBinError(9,1.752432);
   houtFV_stack_4->SetBinError(10,1.761777);
   houtFV_stack_4->SetBinError(11,1.53474);
   houtFV_stack_4->SetBinError(12,1.9633);
   houtFV_stack_4->SetBinError(13,2.078227);
   houtFV_stack_4->SetBinError(14,1.565169);
   houtFV_stack_4->SetBinError(15,1.180533);
   houtFV_stack_4->SetBinError(16,1.09115);
   houtFV_stack_4->SetBinError(17,0.9508475);
   houtFV_stack_4->SetBinError(18,0.9692815);
   houtFV_stack_4->SetBinError(19,0.8027556);
   houtFV_stack_4->SetBinError(20,0.8051041);
   houtFV_stack_4->SetBinError(21,0.6309824);
   houtFV_stack_4->SetBinError(22,0.5861953);
   houtFV_stack_4->SetBinError(23,0.4953911);
   houtFV_stack_4->SetBinError(24,0.4286555);
   houtFV_stack_4->SetBinError(25,0.4150635);
   houtFV_stack_4->SetBinError(26,0.3934307);
   houtFV_stack_4->SetBinError(27,0.695749);
   houtFV_stack_4->SetBinError(28,0.4810838);
   houtFV_stack_4->SetBinError(29,0.340721);
   houtFV_stack_4->SetBinError(30,0.263211);
   houtFV_stack_4->SetBinError(31,0.05405266);
   houtFV_stack_4->SetBinError(34,0.1967154);
   houtFV_stack_4->SetBinError(35,0.8198928);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05541593);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1851234);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1410446);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2442491);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3197);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.9470453);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.464478);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.7934922);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.185181);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.798377);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.02745);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.254387);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.357716);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.172433);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2896074);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.7905077);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.0527678);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3543688);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.08272513);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3040882);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.1840595);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.05714516);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(31,0.1197911);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(34,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.2877032);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04315819);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.08456616);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06795842);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1413534);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1605006);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4592894);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.4395477);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2897463);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.383953);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5625698);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2957646);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4558929);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3886032);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.3044346);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1126368);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.3578524);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03744705);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3276589);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.05850828);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.284117);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1306191);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.04478483);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(31,0.09412756);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(34,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.1231278);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.0437164);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.03861202);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4335563);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1101543);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02640148);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02802275);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(33,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02686085);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02988573);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2942463);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07808443);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01899753);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02802274);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04049794);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.709806);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.490348);
   hNCpi0inFVres_stack_7->SetBinContent(3,3.032484);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.171888);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.968202);
   hNCpi0inFVres_stack_7->SetBinContent(6,5.032665);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.431536);
   hNCpi0inFVres_stack_7->SetBinContent(8,6.887616);
   hNCpi0inFVres_stack_7->SetBinContent(9,9.857559);
   hNCpi0inFVres_stack_7->SetBinContent(10,10.38175);
   hNCpi0inFVres_stack_7->SetBinContent(11,14.93741);
   hNCpi0inFVres_stack_7->SetBinContent(12,11.75701);
   hNCpi0inFVres_stack_7->SetBinContent(13,11.31732);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.64738);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.861905);
   hNCpi0inFVres_stack_7->SetBinContent(16,2.143888);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.96884);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.382252);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.222558);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.068099);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.176317);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.72967);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.5927588);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.5807326);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.6981636);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.3558791);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.107955);
   hNCpi0inFVres_stack_7->SetBinContent(28,0.1188656);
   hNCpi0inFVres_stack_7->SetBinContent(29,0.114597);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.2490277);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.09178328);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.1082974);
   hNCpi0inFVres_stack_7->SetBinContent(33,0.2251374);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.2523906);
   hNCpi0inFVres_stack_7->SetBinContent(35,2.022847);
   hNCpi0inFVres_stack_7->SetBinError(1,0.4703515);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4557572);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5827431);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7054998);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6819315);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8180032);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9087845);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8510297);
   hNCpi0inFVres_stack_7->SetBinError(9,1.004472);
   hNCpi0inFVres_stack_7->SetBinError(10,1.090677);
   hNCpi0inFVres_stack_7->SetBinError(11,1.303642);
   hNCpi0inFVres_stack_7->SetBinError(12,1.208455);
   hNCpi0inFVres_stack_7->SetBinError(13,1.157281);
   hNCpi0inFVres_stack_7->SetBinError(14,0.789156);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4932999);
   hNCpi0inFVres_stack_7->SetBinError(16,0.4362609);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4123692);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3780881);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3762404);
   hNCpi0inFVres_stack_7->SetBinError(20,0.2849176);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3951641);
   hNCpi0inFVres_stack_7->SetBinError(22,0.2890642);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2318613);
   hNCpi0inFVres_stack_7->SetBinError(24,0.1781045);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2219966);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1434668);
   hNCpi0inFVres_stack_7->SetBinError(27,0.0417972);
   hNCpi0inFVres_stack_7->SetBinError(28,0.04759017);
   hNCpi0inFVres_stack_7->SetBinError(29,0.05399714);
   hNCpi0inFVres_stack_7->SetBinError(30,0.1468873);
   hNCpi0inFVres_stack_7->SetBinError(31,0.04772446);
   hNCpi0inFVres_stack_7->SetBinError(32,0.04982849);
   hNCpi0inFVres_stack_7->SetBinError(33,0.1037826);
   hNCpi0inFVres_stack_7->SetBinError(34,0.1067943);
   hNCpi0inFVres_stack_7->SetBinError(35,0.482591);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.922138);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.8546891);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.7856621);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.6924622);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.7683224);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.9768534);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.49213);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.986184);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.343327);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.978089);
   hNCpi0inFVdis_stack_8->SetBinContent(11,4.053503);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.89783);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.767886);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.877793);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.5956466);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.47957);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.3644094);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1924984);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.4168886);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1451971);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.2387955);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.4399356);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3164419);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.09140432);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.07103481);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.1679291);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.07305959);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.1028988);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.193119);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.5764853);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.1318151);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.01841896);
   hNCpi0inFVdis_stack_8->SetBinContent(35,1.055185);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5781737);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.463625);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2255485);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.170189);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.2675446);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.226778);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3739864);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.560779);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4625658);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7143187);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.779066);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9130538);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5996399);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4530462);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.228193);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1446883);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.1468134);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.1030031);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2672131);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.111915);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1071263);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2746686);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.1675083);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.05541866);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.050114);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.08988861);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.04281039);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.06144197);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.08259321);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.3563229);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.1318151);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.01841896);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.4614768);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,3.01788);
   hCCpi0inFV_stack_10->SetBinContent(2,4.919894);
   hCCpi0inFV_stack_10->SetBinContent(3,4.443069);
   hCCpi0inFV_stack_10->SetBinContent(4,4.524458);
   hCCpi0inFV_stack_10->SetBinContent(5,7.62409);
   hCCpi0inFV_stack_10->SetBinContent(6,8.251192);
   hCCpi0inFV_stack_10->SetBinContent(7,9.73099);
   hCCpi0inFV_stack_10->SetBinContent(8,9.004286);
   hCCpi0inFV_stack_10->SetBinContent(9,10.67093);
   hCCpi0inFV_stack_10->SetBinContent(10,18.24418);
   hCCpi0inFV_stack_10->SetBinContent(11,18.04985);
   hCCpi0inFV_stack_10->SetBinContent(12,14.09041);
   hCCpi0inFV_stack_10->SetBinContent(13,14.48743);
   hCCpi0inFV_stack_10->SetBinContent(14,8.9832);
   hCCpi0inFV_stack_10->SetBinContent(15,6.038356);
   hCCpi0inFV_stack_10->SetBinContent(16,5.229931);
   hCCpi0inFV_stack_10->SetBinContent(17,3.298786);
   hCCpi0inFV_stack_10->SetBinContent(18,4.35286);
   hCCpi0inFV_stack_10->SetBinContent(19,1.857266);
   hCCpi0inFV_stack_10->SetBinContent(20,4.341635);
   hCCpi0inFV_stack_10->SetBinContent(21,1.566961);
   hCCpi0inFV_stack_10->SetBinContent(22,1.713804);
   hCCpi0inFV_stack_10->SetBinContent(23,2.002419);
   hCCpi0inFV_stack_10->SetBinContent(24,2.644128);
   hCCpi0inFV_stack_10->SetBinContent(25,1.663932);
   hCCpi0inFV_stack_10->SetBinContent(26,2.439308);
   hCCpi0inFV_stack_10->SetBinContent(27,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(28,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(29,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(30,1.65886);
   hCCpi0inFV_stack_10->SetBinContent(31,0.7868615);
   hCCpi0inFV_stack_10->SetBinContent(32,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(33,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(34,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(35,6.209677);
   hCCpi0inFV_stack_10->SetBinError(1,0.9408297);
   hCCpi0inFV_stack_10->SetBinError(2,1.108723);
   hCCpi0inFV_stack_10->SetBinError(3,1.056279);
   hCCpi0inFV_stack_10->SetBinError(4,1.134973);
   hCCpi0inFV_stack_10->SetBinError(5,1.373765);
   hCCpi0inFV_stack_10->SetBinError(6,1.468672);
   hCCpi0inFV_stack_10->SetBinError(7,1.622378);
   hCCpi0inFV_stack_10->SetBinError(8,1.516235);
   hCCpi0inFV_stack_10->SetBinError(9,1.652783);
   hCCpi0inFV_stack_10->SetBinError(10,2.184574);
   hCCpi0inFV_stack_10->SetBinError(11,2.150127);
   hCCpi0inFV_stack_10->SetBinError(12,1.88617);
   hCCpi0inFV_stack_10->SetBinError(13,1.927516);
   hCCpi0inFV_stack_10->SetBinError(14,1.468624);
   hCCpi0inFV_stack_10->SetBinError(15,1.278087);
   hCCpi0inFV_stack_10->SetBinError(16,1.12717);
   hCCpi0inFV_stack_10->SetBinError(17,0.947869);
   hCCpi0inFV_stack_10->SetBinError(18,1.000187);
   hCCpi0inFV_stack_10->SetBinError(19,0.6799255);
   hCCpi0inFV_stack_10->SetBinError(20,1.092871);
   hCCpi0inFV_stack_10->SetBinError(21,0.5540095);
   hCCpi0inFV_stack_10->SetBinError(22,0.6207051);
   hCCpi0inFV_stack_10->SetBinError(23,0.7348366);
   hCCpi0inFV_stack_10->SetBinError(24,0.7855485);
   hCCpi0inFV_stack_10->SetBinError(25,0.6518637);
   hCCpi0inFV_stack_10->SetBinError(26,0.797725);
   hCCpi0inFV_stack_10->SetBinError(27,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(28,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(29,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(30,0.650338);
   hCCpi0inFV_stack_10->SetBinError(31,0.3934307);
   hCCpi0inFV_stack_10->SetBinError(32,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(33,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(34,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(35,1.23466);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,0.4296668);
   hNCinFV_stack_11->SetBinContent(3,0.4956042);
   hNCinFV_stack_11->SetBinContent(4,0.8392236);
   hNCinFV_stack_11->SetBinContent(5,1.557378);
   hNCinFV_stack_11->SetBinContent(6,1.890414);
   hNCinFV_stack_11->SetBinContent(7,2.420418);
   hNCinFV_stack_11->SetBinContent(8,1.586169);
   hNCinFV_stack_11->SetBinContent(9,1.002333);
   hNCinFV_stack_11->SetBinContent(10,3.003691);
   hNCinFV_stack_11->SetBinContent(11,1.618514);
   hNCinFV_stack_11->SetBinContent(12,2.498474);
   hNCinFV_stack_11->SetBinContent(13,1.517516);
   hNCinFV_stack_11->SetBinContent(14,0.6803553);
   hNCinFV_stack_11->SetBinContent(15,0.8755184);
   hNCinFV_stack_11->SetBinContent(16,0.9385076);
   hNCinFV_stack_11->SetBinContent(17,0.5744153);
   hNCinFV_stack_11->SetBinContent(18,0.8253905);
   hNCinFV_stack_11->SetBinContent(19,0.8366046);
   hNCinFV_stack_11->SetBinContent(20,0.6192375);
   hNCinFV_stack_11->SetBinContent(21,0.6443849);
   hNCinFV_stack_11->SetBinContent(22,0.1182429);
   hNCinFV_stack_11->SetBinContent(23,1.234084);
   hNCinFV_stack_11->SetBinContent(24,0.1950248);
   hNCinFV_stack_11->SetBinContent(25,0.8251065);
   hNCinFV_stack_11->SetBinContent(26,0.9226648);
   hNCinFV_stack_11->SetBinContent(27,0.4212931);
   hNCinFV_stack_11->SetBinContent(29,0.331149);
   hNCinFV_stack_11->SetBinContent(30,0.3917402);
   hNCinFV_stack_11->SetBinContent(31,0.3942303);
   hNCinFV_stack_11->SetBinContent(32,0.1547526);
   hNCinFV_stack_11->SetBinContent(33,0.5681612);
   hNCinFV_stack_11->SetBinContent(34,0.4545487);
   hNCinFV_stack_11->SetBinContent(35,3.369109);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.3517515);
   hNCinFV_stack_11->SetBinError(3,0.2914978);
   hNCinFV_stack_11->SetBinError(4,0.3962918);
   hNCinFV_stack_11->SetBinError(5,0.6571082);
   hNCinFV_stack_11->SetBinError(6,0.6434975);
   hNCinFV_stack_11->SetBinError(7,0.8267997);
   hNCinFV_stack_11->SetBinError(8,0.6337072);
   hNCinFV_stack_11->SetBinError(9,0.4402249);
   hNCinFV_stack_11->SetBinError(10,0.9264664);
   hNCinFV_stack_11->SetBinError(11,0.6313414);
   hNCinFV_stack_11->SetBinError(12,0.7762675);
   hNCinFV_stack_11->SetBinError(13,0.6603022);
   hNCinFV_stack_11->SetBinError(14,0.4810838);
   hNCinFV_stack_11->SetBinError(15,0.4637211);
   hNCinFV_stack_11->SetBinError(16,0.4290437);
   hNCinFV_stack_11->SetBinError(17,0.3590063);
   hNCinFV_stack_11->SetBinError(18,0.4485416);
   hNCinFV_stack_11->SetBinError(19,0.50637);
   hNCinFV_stack_11->SetBinError(20,0.3762173);
   hNCinFV_stack_11->SetBinError(21,0.6443849);
   hNCinFV_stack_11->SetBinError(22,0.1182429);
   hNCinFV_stack_11->SetBinError(23,0.534666);
   hNCinFV_stack_11->SetBinError(24,0.1950249);
   hNCinFV_stack_11->SetBinError(25,0.5072842);
   hNCinFV_stack_11->SetBinError(26,0.7533223);
   hNCinFV_stack_11->SetBinError(27,0.29855);
   hNCinFV_stack_11->SetBinError(29,0.2428976);
   hNCinFV_stack_11->SetBinError(30,0.2770047);
   hNCinFV_stack_11->SetBinError(31,0.3444452);
   hNCinFV_stack_11->SetBinError(32,0.1547526);
   hNCinFV_stack_11->SetBinError(33,0.5681613);
   hNCinFV_stack_11->SetBinError(34,0.4545487);
   hNCinFV_stack_11->SetBinError(35,1.091821);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,4.807248);
   hnumuCCinFV_stack_12->SetBinContent(2,2.033179);
   hnumuCCinFV_stack_12->SetBinContent(3,2.744099);
   hnumuCCinFV_stack_12->SetBinContent(4,2.610439);
   hnumuCCinFV_stack_12->SetBinContent(5,4.061649);
   hnumuCCinFV_stack_12->SetBinContent(6,4.743639);
   hnumuCCinFV_stack_12->SetBinContent(7,4.026366);
   hnumuCCinFV_stack_12->SetBinContent(8,4.599388);
   hnumuCCinFV_stack_12->SetBinContent(9,6.366277);
   hnumuCCinFV_stack_12->SetBinContent(10,5.516959);
   hnumuCCinFV_stack_12->SetBinContent(11,7.552856);
   hnumuCCinFV_stack_12->SetBinContent(12,6.455748);
   hnumuCCinFV_stack_12->SetBinContent(13,5.570193);
   hnumuCCinFV_stack_12->SetBinContent(14,7.914691);
   hnumuCCinFV_stack_12->SetBinContent(15,4.963049);
   hnumuCCinFV_stack_12->SetBinContent(16,3.164403);
   hnumuCCinFV_stack_12->SetBinContent(17,1.765041);
   hnumuCCinFV_stack_12->SetBinContent(18,1.925143);
   hnumuCCinFV_stack_12->SetBinContent(19,0.8454494);
   hnumuCCinFV_stack_12->SetBinContent(20,1.515909);
   hnumuCCinFV_stack_12->SetBinContent(21,0.8359684);
   hnumuCCinFV_stack_12->SetBinContent(22,1.736475);
   hnumuCCinFV_stack_12->SetBinContent(23,2.421425);
   hnumuCCinFV_stack_12->SetBinContent(24,0.8201706);
   hnumuCCinFV_stack_12->SetBinContent(25,0.5874447);
   hnumuCCinFV_stack_12->SetBinContent(26,0.7319179);
   hnumuCCinFV_stack_12->SetBinContent(27,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(28,0.8665517);
   hnumuCCinFV_stack_12->SetBinContent(29,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(30,0.594825);
   hnumuCCinFV_stack_12->SetBinContent(31,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(32,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(33,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(35,3.424825);
   hnumuCCinFV_stack_12->SetBinError(1,1.591162);
   hnumuCCinFV_stack_12->SetBinError(2,0.6447031);
   hnumuCCinFV_stack_12->SetBinError(3,0.8493949);
   hnumuCCinFV_stack_12->SetBinError(4,0.8563876);
   hnumuCCinFV_stack_12->SetBinError(5,1.052602);
   hnumuCCinFV_stack_12->SetBinError(6,1.097635);
   hnumuCCinFV_stack_12->SetBinError(7,1.046854);
   hnumuCCinFV_stack_12->SetBinError(8,1.098689);
   hnumuCCinFV_stack_12->SetBinError(9,1.46308);
   hnumuCCinFV_stack_12->SetBinError(10,1.220533);
   hnumuCCinFV_stack_12->SetBinError(11,1.523093);
   hnumuCCinFV_stack_12->SetBinError(12,1.322474);
   hnumuCCinFV_stack_12->SetBinError(13,1.224386);
   hnumuCCinFV_stack_12->SetBinError(14,2.324547);
   hnumuCCinFV_stack_12->SetBinError(15,1.144959);
   hnumuCCinFV_stack_12->SetBinError(16,0.9073814);
   hnumuCCinFV_stack_12->SetBinError(17,0.6377678);
   hnumuCCinFV_stack_12->SetBinError(18,0.7009382);
   hnumuCCinFV_stack_12->SetBinError(19,0.4238811);
   hnumuCCinFV_stack_12->SetBinError(20,0.6385588);
   hnumuCCinFV_stack_12->SetBinError(21,0.4201422);
   hnumuCCinFV_stack_12->SetBinError(22,0.7426409);
   hnumuCCinFV_stack_12->SetBinError(23,2.234926);
   hnumuCCinFV_stack_12->SetBinError(24,0.4958507);
   hnumuCCinFV_stack_12->SetBinError(25,0.4205494);
   hnumuCCinFV_stack_12->SetBinError(26,0.438694);
   hnumuCCinFV_stack_12->SetBinError(27,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(28,0.4354267);
   hnumuCCinFV_stack_12->SetBinError(29,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(30,0.4440588);
   hnumuCCinFV_stack_12->SetBinError(31,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(32,0.48078);
   hnumuCCinFV_stack_12->SetBinError(33,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(35,0.9117458);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(2,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.6857124);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.9684335);
   hnueCCinFV_stack_13->SetBinContent(15,0.6195905);
   hnueCCinFV_stack_13->SetBinContent(23,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(27,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(29,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(30,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(35,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.4972556);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.5270816);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.7765451);
   hnueCCinFV_stack_13->SetBinError(15,0.3585277);
   hnueCCinFV_stack_13->SetBinError(23,0.3025491);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(27,0.1967154);
   hnueCCinFV_stack_13->SetBinError(29,0.2463303);
   hnueCCinFV_stack_13->SetBinError(30,0.2179626);
   hnueCCinFV_stack_13->SetBinError(35,0.1967154);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__23->SetBinContent(1,29.0086);
   hmcerror__23->SetBinContent(2,31.65039);
   hmcerror__23->SetBinContent(3,40.88653);
   hmcerror__23->SetBinContent(4,41.25984);
   hmcerror__23->SetBinContent(5,40.86704);
   hmcerror__23->SetBinContent(6,54.6412);
   hmcerror__23->SetBinContent(7,65.18913);
   hmcerror__23->SetBinContent(8,57.77243);
   hmcerror__23->SetBinContent(9,61.07932);
   hmcerror__23->SetBinContent(10,70.54393);
   hmcerror__23->SetBinContent(11,70.96274);
   hmcerror__23->SetBinContent(12,68.82023);
   hmcerror__23->SetBinContent(13,66.2339);
   hmcerror__23->SetBinContent(14,41.71303);
   hmcerror__23->SetBinContent(15,30.58961);
   hmcerror__23->SetBinContent(16,22.41826);
   hmcerror__23->SetBinContent(17,15.23302);
   hmcerror__23->SetBinContent(18,14.24383);
   hmcerror__23->SetBinContent(19,9.760361);
   hmcerror__23->SetBinContent(20,11.56678);
   hmcerror__23->SetBinContent(21,8.238682);
   hmcerror__23->SetBinContent(22,7.651506);
   hmcerror__23->SetBinContent(23,10.90547);
   hmcerror__23->SetBinContent(24,5.994234);
   hmcerror__23->SetBinContent(25,5.209461);
   hmcerror__23->SetBinContent(26,5.433187);
   hmcerror__23->SetBinContent(27,4.526416);
   hmcerror__23->SetBinContent(28,3.453093);
   hmcerror__23->SetBinContent(29,3.647307);
   hmcerror__23->SetBinContent(30,4.328735);
   hmcerror__23->SetBinContent(31,2.485563);
   hmcerror__23->SetBinContent(32,1.716929);
   hmcerror__23->SetBinContent(33,1.998647);
   hmcerror__23->SetBinContent(34,2.517235);
   hmcerror__23->SetBinContent(35,21.01766);
   hmcerror__23->SetBinError(1,20.15552);
   hmcerror__23->SetBinError(2,22.27272);
   hmcerror__23->SetBinError(3,16.14354);
   hmcerror__23->SetBinError(4,20.55429);
   hmcerror__23->SetBinError(5,16.32122);
   hmcerror__23->SetBinError(6,16.97399);
   hmcerror__23->SetBinError(7,30.85556);
   hmcerror__23->SetBinError(8,18.426);
   hmcerror__23->SetBinError(9,17.89285);
   hmcerror__23->SetBinError(10,22.0257);
   hmcerror__23->SetBinError(11,21.97994);
   hmcerror__23->SetBinError(12,28.1425);
   hmcerror__23->SetBinError(13,22.64005);
   hmcerror__23->SetBinError(14,14.36306);
   hmcerror__23->SetBinError(15,12.31909);
   hmcerror__23->SetBinError(16,16.74569);
   hmcerror__23->SetBinError(17,9.252956);
   hmcerror__23->SetBinError(18,14.10413);
   hmcerror__23->SetBinError(19,7.316843);
   hmcerror__23->SetBinError(20,10.50698);
   hmcerror__23->SetBinError(21,8.102188);
   hmcerror__23->SetBinError(22,7.284204);
   hmcerror__23->SetBinError(23,13.18677);
   hmcerror__23->SetBinError(24,11.59885);
   hmcerror__23->SetBinError(25,9.324908);
   hmcerror__23->SetBinError(26,7.588368);
   hmcerror__23->SetBinError(27,4.930874);
   hmcerror__23->SetBinError(28,8.30366);
   hmcerror__23->SetBinError(29,6.416269);
   hmcerror__23->SetBinError(30,5.976877);
   hmcerror__23->SetBinError(31,3.121899);
   hmcerror__23->SetBinError(32,2.613277);
   hmcerror__23->SetBinError(33,3.323595);
   hmcerror__23->SetBinError(34,6.190899);
   hmcerror__23->SetBinError(35,13.85458);
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
   27,
   31,
   39,
   38,
   51,
   59,
   47,
   55,
   77,
   85,
   53,
   57,
   61,
   31,
   33,
   23,
   14,
   11,
   11,
   8,
   8,
   13,
   11,
   5,
   3,
   5,
   3,
   0,
   2,
   5,
   4,
   0,
   1,
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
   5.3414,
   5.7094,
   6.3813,
   6.3013,
   7.2725,
   7.8097,
   6.9882,
   7.546,
   8.8995,
   9.3428,
   7.4105,
   7.679,
   7.9383,
   5.7094,
   5.8847,
   4.9457,
   3.9102,
   3.4975,
   3.4975,
   3.0307,
   3.0307,
   3.77763,
   3.4975,
   2.48995,
   2.143368,
   2.48995,
   2.143368,
   0,
   2,
   2.48995,
   2.29683,
   0,
   1,
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
   5.1322,
   5.5017,
   6.1757,
   6.0955,
   7.0686,
   7.6066,
   6.7839,
   7.3425,
   8.6976,
   9.1411,
   7.2068,
   7.4757,
   7.7354,
   5.5017,
   5.6776,
   4.7346,
   3.6898,
   3.27,
   3.27,
   2.7896,
   2.7896,
   3.5552,
   3.27,
   2.21064,
   1.72422,
   2.21064,
   1.72422,
   1.1478,
   1.51917,
   2.21064,
   1.98186,
   1.1478,
   1.35971,
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
   Graph_Graph3029->SetMaximum(103.5552);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.0/34","");
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 189.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  114.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 180.8","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 31.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 94.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all");
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
   0.6948121,
   0.7037109,
   0.3948376,
   0.498167,
   0.3993736,
   0.3106444,
   0.4733236,
   0.318941,
   0.2929445,
   0.3122267,
   0.3097392,
   0.4089277,
   0.3418196,
   0.3443303,
   0.4027213,
   0.7469665,
   0.6074273,
   0.990192,
   0.7496488,
   0.9083757,
   0.9834326,
   0.9519962,
   1.209189,
   1.935001,
   1.789995,
   1.39667,
   1.089355,
   2.404702,
   1.75918,
   1.380745,
   1.256013,
   1.522065,
   1.662922,
   2.459405};
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
   0.6948121,
   0.7037109,
   0.3948376,
   0.498167,
   0.3993736,
   0.3106444,
   0.4733236,
   0.318941,
   0.2929445,
   0.3122267,
   0.3097392,
   0.4089277,
   0.3418196,
   0.3443303,
   0.4027213,
   0.7469665,
   0.6074273,
   0.990192,
   0.7496488,
   0.9083757,
   0.9834326,
   0.9519962,
   1.209189,
   1.935001,
   1.789995,
   1.39667,
   1.089355,
   2.404702,
   1.75918,
   1.380745,
   1.256013,
   1.522065,
   1.662922,
   2.459405};
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
   0.1815303,
   0.1921931,
   0.1562173,
   0.167382,
   0.2013652,
   0.1672139,
   0.1597573,
   0.1656328,
   0.1863849,
   0.1841193,
   0.1917445,
   0.1957624,
   0.1801225,
   0.1989303,
   0.18052,
   0.2348984,
   0.2204783,
   0.2626639,
   0.2726748,
   0.239773,
   0.2686725,
   0.2936652,
   0.4087311,
   0.3092818,
   0.3675998,
   0.3360433,
   0.3357046,
   0.3771875,
   0.3865816,
   0.3553649,
   0.4738485,
   0.5683979,
   0.6692805,
   0.5006731};
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
   0.1815303,
   0.1921931,
   0.1562173,
   0.167382,
   0.2013652,
   0.1672139,
   0.1597573,
   0.1656328,
   0.1863849,
   0.1841193,
   0.1917445,
   0.1957624,
   0.1801225,
   0.1989303,
   0.18052,
   0.2348984,
   0.2204783,
   0.2626639,
   0.2726748,
   0.239773,
   0.2686725,
   0.2936652,
   0.4087311,
   0.3092818,
   0.3675998,
   0.3360433,
   0.3357046,
   0.3771875,
   0.3865816,
   0.3553649,
   0.4738485,
   0.5683979,
   0.6692805,
   0.5006731};
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
   0.9307586,
   0.9794509,
   0.9538594,
   0.9209924,
   1.247949,
   1.079771,
   0.7209791,
   0.9520111,
   1.260656,
   1.204923,
   0.7468708,
   0.8282449,
   0.9209785,
   0.7431731,
   1.078798,
   1.025949,
   0.9190558,
   0.7722641,
   1.127008,
   0.691636,
   0.9710291,
   1.699012,
   1.008669,
   0.8341349,
   0.5758753,
   0.9202702,
   0.662776,
   0,
   0.5483498,
   1.155072,
   1.609293,
   0,
   0.5003384,
   0.3972613};
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
   0.1841316,
   0.1803896,
   0.1560734,
   0.1527223,
   0.1779551,
   0.1429269,
   0.1071988,
   0.1306159,
   0.145704,
   0.1324395,
   0.104428,
   0.1115806,
   0.1198525,
   0.1368733,
   0.1923758,
   0.2206103,
   0.2566923,
   0.2455449,
   0.3583372,
   0.2620177,
   0.3678622,
   0.4937107,
   0.3207108,
   0.4153909,
   0.4114376,
   0.4582853,
   0.4735243,
   0,
   0.5483498,
   0.5752143,
   0.9240682,
   0,
   0.5003384,
   0.3972613};
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
   0.17692,
   0.1738273,
   0.1510449,
   0.1477344,
   0.1729658,
   0.13921,
   0.1040649,
   0.1270935,
   0.1423985,
   0.1295802,
   0.1015575,
   0.1086265,
   0.1167891,
   0.131894,
   0.1856055,
   0.2111939,
   0.2422237,
   0.2295731,
   0.3350286,
   0.2411735,
   0.3385979,
   0.4646406,
   0.2998497,
   0.3687944,
   0.3309786,
   0.4068772,
   0.3809239,
   0.3323976,
   0.4165183,
   0.5106896,
   0.7973484,
   0.6685192,
   0.6803152,
   0.5401602};
   grae = new TGraphAsymmErrors(34,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,440);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.647306);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_pi0_mass_gamma_all",34,0,400);

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
