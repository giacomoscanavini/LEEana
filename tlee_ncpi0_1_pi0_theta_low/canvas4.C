#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 23:09:35 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",216,172,1200,900);
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
   pad1->Range(-0.4846154,-5.9,3.553846,652.4158);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmc__10->SetBinContent(1,40.84432);
   hmc__10->SetBinContent(2,143.8864);
   hmc__10->SetBinContent(3,206.8889);
   hmc__10->SetBinContent(4,246.184);
   hmc__10->SetBinContent(5,266.9456);
   hmc__10->SetBinContent(6,263.2988);
   hmc__10->SetBinContent(7,249.5455);
   hmc__10->SetBinContent(8,251.1423);
   hmc__10->SetBinContent(9,220.78);
   hmc__10->SetBinContent(10,209.7682);
   hmc__10->SetBinContent(11,182.1508);
   hmc__10->SetBinContent(12,167.4831);
   hmc__10->SetBinContent(13,162.6217);
   hmc__10->SetBinContent(14,141.8139);
   hmc__10->SetBinContent(15,126.8648);
   hmc__10->SetBinContent(16,128.7612);
   hmc__10->SetBinContent(17,123.1871);
   hmc__10->SetBinContent(18,100.3732);
   hmc__10->SetBinContent(19,106.1489);
   hmc__10->SetBinContent(20,96.19817);
   hmc__10->SetBinContent(21,98.45935);
   hmc__10->SetBinContent(22,83.53304);
   hmc__10->SetBinContent(23,61.65124);
   hmc__10->SetBinContent(24,38.19612);
   hmc__10->SetBinContent(25,12.73383);
   hmc__10->SetBinError(1,15.26521);
   hmc__10->SetBinError(2,37.43092);
   hmc__10->SetBinError(3,62.70498);
   hmc__10->SetBinError(4,59.98511);
   hmc__10->SetBinError(5,67.46992);
   hmc__10->SetBinError(6,66.91412);
   hmc__10->SetBinError(7,61.16329);
   hmc__10->SetBinError(8,58.08881);
   hmc__10->SetBinError(9,55.35598);
   hmc__10->SetBinError(10,51.79688);
   hmc__10->SetBinError(11,46.43085);
   hmc__10->SetBinError(12,44.75124);
   hmc__10->SetBinError(13,39.5574);
   hmc__10->SetBinError(14,33.88978);
   hmc__10->SetBinError(15,35.74839);
   hmc__10->SetBinError(16,38.65521);
   hmc__10->SetBinError(17,34.67641);
   hmc__10->SetBinError(18,29.64321);
   hmc__10->SetBinError(19,30.23344);
   hmc__10->SetBinError(20,29.00045);
   hmc__10->SetBinError(21,33.64621);
   hmc__10->SetBinError(22,25.40813);
   hmc__10->SetBinError(23,22.62818);
   hmc__10->SetBinError(24,18.53869);
   hmc__10->SetBinError(25,11.82348);
   hmc__10->SetBinError(26,0.3895343);
   hmc__10->SetMinimum(-5.9);
   hmc__10->SetMaximum(619.5);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,0,3.15);
   hs4_stack_4->SetMinimum(-2.766408e-08);
   hs4_stack_4->SetMaximum(280.2928);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,0.2037106);
   hbadmatch_stack_1->SetBinContent(2,2.73224);
   hbadmatch_stack_1->SetBinContent(3,6.080367);
   hbadmatch_stack_1->SetBinContent(4,5.17626);
   hbadmatch_stack_1->SetBinContent(5,8.047088);
   hbadmatch_stack_1->SetBinContent(6,6.67134);
   hbadmatch_stack_1->SetBinContent(7,4.477531);
   hbadmatch_stack_1->SetBinContent(8,7.517775);
   hbadmatch_stack_1->SetBinContent(9,6.756982);
   hbadmatch_stack_1->SetBinContent(10,5.672235);
   hbadmatch_stack_1->SetBinContent(11,6.367044);
   hbadmatch_stack_1->SetBinContent(12,2.346246);
   hbadmatch_stack_1->SetBinContent(13,4.653693);
   hbadmatch_stack_1->SetBinContent(14,2.977596);
   hbadmatch_stack_1->SetBinContent(15,2.022596);
   hbadmatch_stack_1->SetBinContent(16,4.436399);
   hbadmatch_stack_1->SetBinContent(17,4.72043);
   hbadmatch_stack_1->SetBinContent(18,2.778324);
   hbadmatch_stack_1->SetBinContent(19,3.138751);
   hbadmatch_stack_1->SetBinContent(20,3.562926);
   hbadmatch_stack_1->SetBinContent(21,2.042342);
   hbadmatch_stack_1->SetBinContent(22,2.092986);
   hbadmatch_stack_1->SetBinContent(23,0.8002283);
   hbadmatch_stack_1->SetBinContent(24,2.310192);
   hbadmatch_stack_1->SetBinError(1,0.2037106);
   hbadmatch_stack_1->SetBinError(2,0.7984391);
   hbadmatch_stack_1->SetBinError(3,1.362539);
   hbadmatch_stack_1->SetBinError(4,1.164781);
   hbadmatch_stack_1->SetBinError(5,1.687632);
   hbadmatch_stack_1->SetBinError(6,1.416042);
   hbadmatch_stack_1->SetBinError(7,1.077934);
   hbadmatch_stack_1->SetBinError(8,1.548716);
   hbadmatch_stack_1->SetBinError(9,2.011882);
   hbadmatch_stack_1->SetBinError(10,1.292221);
   hbadmatch_stack_1->SetBinError(11,1.414167);
   hbadmatch_stack_1->SetBinError(12,0.709952);
   hbadmatch_stack_1->SetBinError(13,1.142813);
   hbadmatch_stack_1->SetBinError(14,0.9086398);
   hbadmatch_stack_1->SetBinError(15,0.6886735);
   hbadmatch_stack_1->SetBinError(16,1.264609);
   hbadmatch_stack_1->SetBinError(17,1.899005);
   hbadmatch_stack_1->SetBinError(18,0.8829138);
   hbadmatch_stack_1->SetBinError(19,1.023417);
   hbadmatch_stack_1->SetBinError(20,1.00086);
   hbadmatch_stack_1->SetBinError(21,0.6595116);
   hbadmatch_stack_1->SetBinError(22,0.8501009);
   hbadmatch_stack_1->SetBinError(23,0.5299338);
   hbadmatch_stack_1->SetBinError(24,1.109311);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hext_stack_2->SetBinContent(1,3.972198);
   hext_stack_2->SetBinContent(2,16.42225);
   hext_stack_2->SetBinContent(3,19.28999);
   hext_stack_2->SetBinContent(4,23.22905);
   hext_stack_2->SetBinContent(5,31.47908);
   hext_stack_2->SetBinContent(6,28.73663);
   hext_stack_2->SetBinContent(7,25.61076);
   hext_stack_2->SetBinContent(8,29.75171);
   hext_stack_2->SetBinContent(9,26.07361);
   hext_stack_2->SetBinContent(10,29.01517);
   hext_stack_2->SetBinContent(11,22.53119);
   hext_stack_2->SetBinContent(12,24.36665);
   hext_stack_2->SetBinContent(13,36.95233);
   hext_stack_2->SetBinContent(14,29.5111);
   hext_stack_2->SetBinContent(15,21.5723);
   hext_stack_2->SetBinContent(16,19.91006);
   hext_stack_2->SetBinContent(17,20.73762);
   hext_stack_2->SetBinContent(18,9.662945);
   hext_stack_2->SetBinContent(19,13.03983);
   hext_stack_2->SetBinContent(20,12.23381);
   hext_stack_2->SetBinContent(21,11.92535);
   hext_stack_2->SetBinContent(22,12.82793);
   hext_stack_2->SetBinContent(23,4.792576);
   hext_stack_2->SetBinContent(24,1.290409);
   hext_stack_2->SetBinContent(25,2.510206);
   hext_stack_2->SetBinError(1,1.288106);
   hext_stack_2->SetBinError(2,2.730738);
   hext_stack_2->SetBinError(3,2.830297);
   hext_stack_2->SetBinError(4,3.215506);
   hext_stack_2->SetBinError(5,3.745721);
   hext_stack_2->SetBinError(6,3.511361);
   hext_stack_2->SetBinError(7,3.21425);
   hext_stack_2->SetBinError(8,3.684607);
   hext_stack_2->SetBinError(9,3.320436);
   hext_stack_2->SetBinError(10,3.738773);
   hext_stack_2->SetBinError(11,3.065818);
   hext_stack_2->SetBinError(12,3.282584);
   hext_stack_2->SetBinError(13,4.339178);
   hext_stack_2->SetBinError(14,3.915743);
   hext_stack_2->SetBinError(15,3.164103);
   hext_stack_2->SetBinError(16,3.004306);
   hext_stack_2->SetBinError(17,2.99234);
   hext_stack_2->SetBinError(18,1.87144);
   hext_stack_2->SetBinError(19,2.411624);
   hext_stack_2->SetBinError(20,2.298714);
   hext_stack_2->SetBinError(21,2.564821);
   hext_stack_2->SetBinError(22,2.601507);
   hext_stack_2->SetBinError(23,1.337408);
   hext_stack_2->SetBinError(24,0.788756);
   hext_stack_2->SetBinError(25,1.057404);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.2591704);
   hdirt_stack_3->SetBinContent(2,2.010706);
   hdirt_stack_3->SetBinContent(3,1.727699);
   hdirt_stack_3->SetBinContent(4,4.107397);
   hdirt_stack_3->SetBinContent(5,2.228932);
   hdirt_stack_3->SetBinContent(6,2.815543);
   hdirt_stack_3->SetBinContent(7,5.220357);
   hdirt_stack_3->SetBinContent(8,3.267913);
   hdirt_stack_3->SetBinContent(9,3.791191);
   hdirt_stack_3->SetBinContent(10,3.345071);
   hdirt_stack_3->SetBinContent(11,4.071587);
   hdirt_stack_3->SetBinContent(12,2.914132);
   hdirt_stack_3->SetBinContent(13,2.682397);
   hdirt_stack_3->SetBinContent(14,1.396956);
   hdirt_stack_3->SetBinContent(15,1.533529);
   hdirt_stack_3->SetBinContent(16,2.70594);
   hdirt_stack_3->SetBinContent(17,1.651991);
   hdirt_stack_3->SetBinContent(18,1.804523);
   hdirt_stack_3->SetBinContent(19,1.589517);
   hdirt_stack_3->SetBinContent(20,3.327258);
   hdirt_stack_3->SetBinContent(21,0.9752261);
   hdirt_stack_3->SetBinContent(22,1.540569);
   hdirt_stack_3->SetBinContent(23,0.8332258);
   hdirt_stack_3->SetBinContent(24,1.114166);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinError(1,0.2591705);
   hdirt_stack_3->SetBinError(2,0.7417352);
   hdirt_stack_3->SetBinError(3,0.7132677);
   hdirt_stack_3->SetBinError(4,1.134357);
   hdirt_stack_3->SetBinError(5,0.6935035);
   hdirt_stack_3->SetBinError(6,0.8876615);
   hdirt_stack_3->SetBinError(7,1.227799);
   hdirt_stack_3->SetBinError(8,1.008854);
   hdirt_stack_3->SetBinError(9,0.9722457);
   hdirt_stack_3->SetBinError(10,0.9183505);
   hdirt_stack_3->SetBinError(11,1.606903);
   hdirt_stack_3->SetBinError(12,0.8627823);
   hdirt_stack_3->SetBinError(13,0.846286);
   hdirt_stack_3->SetBinError(14,0.6275077);
   hdirt_stack_3->SetBinError(15,0.6204248);
   hdirt_stack_3->SetBinError(16,0.855503);
   hdirt_stack_3->SetBinError(17,0.7095344);
   hdirt_stack_3->SetBinError(18,0.6479895);
   hdirt_stack_3->SetBinError(19,0.5706305);
   hdirt_stack_3->SetBinError(20,1.121517);
   hdirt_stack_3->SetBinError(21,0.4685003);
   hdirt_stack_3->SetBinError(22,0.5534115);
   hdirt_stack_3->SetBinError(23,0.4476755);
   hdirt_stack_3->SetBinError(24,0.569712);
   hdirt_stack_3->SetBinError(25,0.1380715);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   houtFV_stack_4->SetBinContent(1,5.139194);
   houtFV_stack_4->SetBinContent(2,13.4873);
   houtFV_stack_4->SetBinContent(3,25.58548);
   houtFV_stack_4->SetBinContent(4,29.25251);
   houtFV_stack_4->SetBinContent(5,29.90763);
   houtFV_stack_4->SetBinContent(6,30.07249);
   houtFV_stack_4->SetBinContent(7,31.51325);
   houtFV_stack_4->SetBinContent(8,32.39677);
   houtFV_stack_4->SetBinContent(9,26.61348);
   houtFV_stack_4->SetBinContent(10,22.36761);
   houtFV_stack_4->SetBinContent(11,20.17836);
   houtFV_stack_4->SetBinContent(12,20.97281);
   houtFV_stack_4->SetBinContent(13,17.91397);
   houtFV_stack_4->SetBinContent(14,16.18552);
   houtFV_stack_4->SetBinContent(15,18.14228);
   houtFV_stack_4->SetBinContent(16,15.29644);
   houtFV_stack_4->SetBinContent(17,19.19444);
   houtFV_stack_4->SetBinContent(18,16.88943);
   houtFV_stack_4->SetBinContent(19,16.90863);
   houtFV_stack_4->SetBinContent(20,18.97514);
   houtFV_stack_4->SetBinContent(21,20.96347);
   houtFV_stack_4->SetBinContent(22,11.48964);
   houtFV_stack_4->SetBinContent(23,9.068858);
   houtFV_stack_4->SetBinContent(24,6.829921);
   houtFV_stack_4->SetBinContent(25,1.397729);
   houtFV_stack_4->SetBinError(1,1.174549);
   houtFV_stack_4->SetBinError(2,1.838767);
   houtFV_stack_4->SetBinError(3,2.536524);
   houtFV_stack_4->SetBinError(4,2.84673);
   houtFV_stack_4->SetBinError(5,2.751167);
   houtFV_stack_4->SetBinError(6,2.712115);
   houtFV_stack_4->SetBinError(7,2.822089);
   houtFV_stack_4->SetBinError(8,2.899767);
   houtFV_stack_4->SetBinError(9,2.609834);
   houtFV_stack_4->SetBinError(10,2.426574);
   houtFV_stack_4->SetBinError(11,2.327091);
   houtFV_stack_4->SetBinError(12,2.289418);
   houtFV_stack_4->SetBinError(13,2.424004);
   houtFV_stack_4->SetBinError(14,1.978983);
   houtFV_stack_4->SetBinError(15,2.136657);
   houtFV_stack_4->SetBinError(16,1.906686);
   houtFV_stack_4->SetBinError(17,2.218134);
   houtFV_stack_4->SetBinError(18,1.997396);
   houtFV_stack_4->SetBinError(19,2.067399);
   houtFV_stack_4->SetBinError(20,2.110814);
   houtFV_stack_4->SetBinError(21,2.334979);
   houtFV_stack_4->SetBinError(22,1.61603);
   houtFV_stack_4->SetBinError(23,1.470503);
   houtFV_stack_4->SetBinError(24,1.326775);
   houtFV_stack_4->SetBinError(25,0.6027161);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.922135);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,8.302599);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,9.100821);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,11.92323);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.44127);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,9.422121);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,8.107728);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.212492);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.213959);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.58327);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.082088);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.043018);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.07944);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.37926);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.759096);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.50988);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,1.110611);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.999523);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.4994);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.371947);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.225313);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.947068);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,1.725649);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.498292);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.5816284);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6342929);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.241652);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.061221);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.214557);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.244944);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.163941);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.9783291);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.8639882);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.010843);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7395184);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.9458205);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6205003);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6448317);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.5466884);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.52712);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5918682);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5065509);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6243723);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4649776);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4682492);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4115258);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.5491727);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.42923);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.4721422);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.3112157);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.04354476);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.09391464);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.7418195);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5993604);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2691272);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3370483);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4678603);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.820207);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1523458);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5371692);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3008002);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4152738);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2205362);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5762795);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1039893);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2074883);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1857967);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.07105225);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3542736);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2518886);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03399719);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1348768);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1107695);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03228062);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04719809);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3344889);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.155679);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.09306658);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1280295);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1980306);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3850355);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06689776);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2353808);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1791355);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1693249);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.08383054);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3057148);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.07797017);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.08121499);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.09920089);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04385956);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.181466);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1522468);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02411083);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.07208906);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.01458148);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.05949881);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.01754354);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,10.94533);
   hNCpi0inFVres_stack_7->SetBinContent(2,37.0909);
   hNCpi0inFVres_stack_7->SetBinContent(3,61.70918);
   hNCpi0inFVres_stack_7->SetBinContent(4,77.70408);
   hNCpi0inFVres_stack_7->SetBinContent(5,86.27289);
   hNCpi0inFVres_stack_7->SetBinContent(6,83.94803);
   hNCpi0inFVres_stack_7->SetBinContent(7,79.02043);
   hNCpi0inFVres_stack_7->SetBinContent(8,79.28823);
   hNCpi0inFVres_stack_7->SetBinContent(9,72.79478);
   hNCpi0inFVres_stack_7->SetBinContent(10,66.33083);
   hNCpi0inFVres_stack_7->SetBinContent(11,56.36903);
   hNCpi0inFVres_stack_7->SetBinContent(12,56.27285);
   hNCpi0inFVres_stack_7->SetBinContent(13,48.5769);
   hNCpi0inFVres_stack_7->SetBinContent(14,47.45948);
   hNCpi0inFVres_stack_7->SetBinContent(15,41.54871);
   hNCpi0inFVres_stack_7->SetBinContent(16,38.32107);
   hNCpi0inFVres_stack_7->SetBinContent(17,35.10122);
   hNCpi0inFVres_stack_7->SetBinContent(18,36.30437);
   hNCpi0inFVres_stack_7->SetBinContent(19,31.51606);
   hNCpi0inFVres_stack_7->SetBinContent(20,27.41398);
   hNCpi0inFVres_stack_7->SetBinContent(21,27.73732);
   hNCpi0inFVres_stack_7->SetBinContent(22,23.25054);
   hNCpi0inFVres_stack_7->SetBinContent(23,16.1397);
   hNCpi0inFVres_stack_7->SetBinContent(24,9.939184);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.439541);
   hNCpi0inFVres_stack_7->SetBinError(1,1.059519);
   hNCpi0inFVres_stack_7->SetBinError(2,2.069792);
   hNCpi0inFVres_stack_7->SetBinError(3,2.749925);
   hNCpi0inFVres_stack_7->SetBinError(4,3.201255);
   hNCpi0inFVres_stack_7->SetBinError(5,3.26787);
   hNCpi0inFVres_stack_7->SetBinError(6,3.141646);
   hNCpi0inFVres_stack_7->SetBinError(7,2.954974);
   hNCpi0inFVres_stack_7->SetBinError(8,3.098774);
   hNCpi0inFVres_stack_7->SetBinError(9,2.965772);
   hNCpi0inFVres_stack_7->SetBinError(10,2.693744);
   hNCpi0inFVres_stack_7->SetBinError(11,2.44975);
   hNCpi0inFVres_stack_7->SetBinError(12,2.616244);
   hNCpi0inFVres_stack_7->SetBinError(13,2.345757);
   hNCpi0inFVres_stack_7->SetBinError(14,2.414237);
   hNCpi0inFVres_stack_7->SetBinError(15,2.352458);
   hNCpi0inFVres_stack_7->SetBinError(16,2.136394);
   hNCpi0inFVres_stack_7->SetBinError(17,1.989413);
   hNCpi0inFVres_stack_7->SetBinError(18,2.120481);
   hNCpi0inFVres_stack_7->SetBinError(19,1.893157);
   hNCpi0inFVres_stack_7->SetBinError(20,1.619794);
   hNCpi0inFVres_stack_7->SetBinError(21,1.782997);
   hNCpi0inFVres_stack_7->SetBinError(22,1.771272);
   hNCpi0inFVres_stack_7->SetBinError(23,1.364287);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9603702);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6386147);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.456216);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.72514);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.12842);
   hNCpi0inFVdis_stack_8->SetBinContent(4,18.08991);
   hNCpi0inFVdis_stack_8->SetBinContent(5,18.55703);
   hNCpi0inFVdis_stack_8->SetBinContent(6,19.90526);
   hNCpi0inFVdis_stack_8->SetBinContent(7,17.7571);
   hNCpi0inFVdis_stack_8->SetBinContent(8,17.46791);
   hNCpi0inFVdis_stack_8->SetBinContent(9,14.464);
   hNCpi0inFVdis_stack_8->SetBinContent(10,11.5022);
   hNCpi0inFVdis_stack_8->SetBinContent(11,12.85718);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.037863);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.370277);
   hNCpi0inFVdis_stack_8->SetBinContent(14,7.148924);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.089975);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.107871);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.957572);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.199927);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.925277);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.143123);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.723749);
   hNCpi0inFVdis_stack_8->SetBinContent(22,5.027323);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.985781);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.533199);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.6685257);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.609676);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.383835);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.326612);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.489772);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.603117);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.652233);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.459747);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.488136);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.337319);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.191149);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.285414);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9824422);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.107242);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9248653);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9266719);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8046876);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8320575);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.80856);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9653602);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.599218);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6198268);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.8301532);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5006409);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3391864);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2000694);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08239723);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06630798);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.01568944);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,7.714316);
   hCCpi0inFV_stack_10->SetBinContent(2,25.90381);
   hCCpi0inFV_stack_10->SetBinContent(3,32.34964);
   hCCpi0inFV_stack_10->SetBinContent(4,38.13681);
   hCCpi0inFV_stack_10->SetBinContent(5,45.99);
   hCCpi0inFV_stack_10->SetBinContent(6,38.97918);
   hCCpi0inFV_stack_10->SetBinContent(7,40.37878);
   hCCpi0inFV_stack_10->SetBinContent(8,40.24538);
   hCCpi0inFV_stack_10->SetBinContent(9,35.06335);
   hCCpi0inFV_stack_10->SetBinContent(10,34.81209);
   hCCpi0inFV_stack_10->SetBinContent(11,29.47391);
   hCCpi0inFV_stack_10->SetBinContent(12,26.79969);
   hCCpi0inFV_stack_10->SetBinContent(13,21.34734);
   hCCpi0inFV_stack_10->SetBinContent(14,16.49393);
   hCCpi0inFV_stack_10->SetBinContent(15,17.36839);
   hCCpi0inFV_stack_10->SetBinContent(16,17.47278);
   hCCpi0inFV_stack_10->SetBinContent(17,18.84025);
   hCCpi0inFV_stack_10->SetBinContent(18,13.03532);
   hCCpi0inFV_stack_10->SetBinContent(19,18.50748);
   hCCpi0inFV_stack_10->SetBinContent(20,12.82383);
   hCCpi0inFV_stack_10->SetBinContent(21,13.47429);
   hCCpi0inFV_stack_10->SetBinContent(22,13.28441);
   hCCpi0inFV_stack_10->SetBinContent(23,12.23298);
   hCCpi0inFV_stack_10->SetBinContent(24,6.146171);
   hCCpi0inFV_stack_10->SetBinContent(25,2.250697);
   hCCpi0inFV_stack_10->SetBinError(1,1.365493);
   hCCpi0inFV_stack_10->SetBinError(2,2.615915);
   hCCpi0inFV_stack_10->SetBinError(3,2.794864);
   hCCpi0inFV_stack_10->SetBinError(4,3.139936);
   hCCpi0inFV_stack_10->SetBinError(5,3.387874);
   hCCpi0inFV_stack_10->SetBinError(6,3.118277);
   hCCpi0inFV_stack_10->SetBinError(7,3.178308);
   hCCpi0inFV_stack_10->SetBinError(8,3.176747);
   hCCpi0inFV_stack_10->SetBinError(9,2.998852);
   hCCpi0inFV_stack_10->SetBinError(10,2.975607);
   hCCpi0inFV_stack_10->SetBinError(11,2.680908);
   hCCpi0inFV_stack_10->SetBinError(12,2.586984);
   hCCpi0inFV_stack_10->SetBinError(13,2.34743);
   hCCpi0inFV_stack_10->SetBinError(14,2.076219);
   hCCpi0inFV_stack_10->SetBinError(15,2.094919);
   hCCpi0inFV_stack_10->SetBinError(16,2.094608);
   hCCpi0inFV_stack_10->SetBinError(17,2.180412);
   hCCpi0inFV_stack_10->SetBinError(18,1.803076);
   hCCpi0inFV_stack_10->SetBinError(19,2.185921);
   hCCpi0inFV_stack_10->SetBinError(20,1.733988);
   hCCpi0inFV_stack_10->SetBinError(21,1.780134);
   hCCpi0inFV_stack_10->SetBinError(22,1.840873);
   hCCpi0inFV_stack_10->SetBinError(23,1.781775);
   hCCpi0inFV_stack_10->SetBinError(24,1.191715);
   hCCpi0inFV_stack_10->SetBinError(25,0.7346377);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,3.420976);
   hNCinFV_stack_11->SetBinContent(2,11.42917);
   hNCinFV_stack_11->SetBinContent(3,14.93973);
   hNCinFV_stack_11->SetBinContent(4,18.70982);
   hNCinFV_stack_11->SetBinContent(5,14.01294);
   hNCinFV_stack_11->SetBinContent(6,16.66536);
   hNCinFV_stack_11->SetBinContent(7,17.29694);
   hNCinFV_stack_11->SetBinContent(8,13.95562);
   hNCinFV_stack_11->SetBinContent(9,11.25229);
   hNCinFV_stack_11->SetBinContent(10,13.85419);
   hNCinFV_stack_11->SetBinContent(11,10.46736);
   hNCinFV_stack_11->SetBinContent(12,10.38943);
   hNCinFV_stack_11->SetBinContent(13,7.422359);
   hNCinFV_stack_11->SetBinContent(14,7.314188);
   hNCinFV_stack_11->SetBinContent(15,8.650228);
   hNCinFV_stack_11->SetBinContent(16,7.975554);
   hNCinFV_stack_11->SetBinContent(17,5.227967);
   hNCinFV_stack_11->SetBinContent(18,6.554856);
   hNCinFV_stack_11->SetBinContent(19,4.676227);
   hNCinFV_stack_11->SetBinContent(20,5.571223);
   hNCinFV_stack_11->SetBinContent(21,7.060478);
   hNCinFV_stack_11->SetBinContent(22,5.335385);
   hNCinFV_stack_11->SetBinContent(23,4.090946);
   hNCinFV_stack_11->SetBinContent(24,4.640099);
   hNCinFV_stack_11->SetBinContent(25,0.9124456);
   hNCinFV_stack_11->SetBinError(1,1.089856);
   hNCinFV_stack_11->SetBinError(2,2.161243);
   hNCinFV_stack_11->SetBinError(3,2.063778);
   hNCinFV_stack_11->SetBinError(4,2.295199);
   hNCinFV_stack_11->SetBinError(5,1.87552);
   hNCinFV_stack_11->SetBinError(6,2.175611);
   hNCinFV_stack_11->SetBinError(7,2.159212);
   hNCinFV_stack_11->SetBinError(8,1.96838);
   hNCinFV_stack_11->SetBinError(9,1.646563);
   hNCinFV_stack_11->SetBinError(10,2.098739);
   hNCinFV_stack_11->SetBinError(11,1.731737);
   hNCinFV_stack_11->SetBinError(12,1.767772);
   hNCinFV_stack_11->SetBinError(13,1.305598);
   hNCinFV_stack_11->SetBinError(14,1.278926);
   hNCinFV_stack_11->SetBinError(15,1.584667);
   hNCinFV_stack_11->SetBinError(16,1.522134);
   hNCinFV_stack_11->SetBinError(17,1.084379);
   hNCinFV_stack_11->SetBinError(18,1.25898);
   hNCinFV_stack_11->SetBinError(19,1.145907);
   hNCinFV_stack_11->SetBinError(20,1.320101);
   hNCinFV_stack_11->SetBinError(21,1.412125);
   hNCinFV_stack_11->SetBinError(22,1.218839);
   hNCinFV_stack_11->SetBinError(23,0.9808581);
   hNCinFV_stack_11->SetBinError(24,1.182417);
   hNCinFV_stack_11->SetBinError(25,0.4136285);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,2.276009);
   hnumuCCinFV_stack_12->SetBinContent(2,11.47889);
   hnumuCCinFV_stack_12->SetBinContent(3,16.53748);
   hnumuCCinFV_stack_12->SetBinContent(4,16.49305);
   hnumuCCinFV_stack_12->SetBinContent(5,17.5951);
   hnumuCCinFV_stack_12->SetBinContent(6,22.20838);
   hnumuCCinFV_stack_12->SetBinContent(7,17.0352);
   hnumuCCinFV_stack_12->SetBinContent(8,17.83458);
   hnumuCCinFV_stack_12->SetBinContent(9,15.78749);
   hnumuCCinFV_stack_12->SetBinContent(10,15.49795);
   hnumuCCinFV_stack_12->SetBinContent(11,13.652);
   hnumuCCinFV_stack_12->SetBinContent(12,10.06626);
   hnumuCCinFV_stack_12->SetBinContent(13,9.81403);
   hnumuCCinFV_stack_12->SetBinContent(14,10.17401);
   hnumuCCinFV_stack_12->SetBinContent(15,6.571922);
   hnumuCCinFV_stack_12->SetBinContent(16,11.80976);
   hnumuCCinFV_stack_12->SetBinContent(17,9.5757);
   hnumuCCinFV_stack_12->SetBinContent(18,5.876199);
   hnumuCCinFV_stack_12->SetBinContent(19,6.758272);
   hnumuCCinFV_stack_12->SetBinContent(20,5.250707);
   hnumuCCinFV_stack_12->SetBinContent(21,7.68826);
   hnumuCCinFV_stack_12->SetBinContent(22,6.389908);
   hnumuCCinFV_stack_12->SetBinContent(23,7.551032);
   hnumuCCinFV_stack_12->SetBinContent(24,2.316353);
   hnumuCCinFV_stack_12->SetBinContent(25,0.8174411);
   hnumuCCinFV_stack_12->SetBinError(1,0.8006895);
   hnumuCCinFV_stack_12->SetBinError(2,1.729518);
   hnumuCCinFV_stack_12->SetBinError(3,2.151418);
   hnumuCCinFV_stack_12->SetBinError(4,2.053278);
   hnumuCCinFV_stack_12->SetBinError(5,2.442347);
   hnumuCCinFV_stack_12->SetBinError(6,3.074619);
   hnumuCCinFV_stack_12->SetBinError(7,2.492201);
   hnumuCCinFV_stack_12->SetBinError(8,2.160465);
   hnumuCCinFV_stack_12->SetBinError(9,2.259156);
   hnumuCCinFV_stack_12->SetBinError(10,2.52201);
   hnumuCCinFV_stack_12->SetBinError(11,1.941808);
   hnumuCCinFV_stack_12->SetBinError(12,1.92764);
   hnumuCCinFV_stack_12->SetBinError(13,1.624771);
   hnumuCCinFV_stack_12->SetBinError(14,1.941736);
   hnumuCCinFV_stack_12->SetBinError(15,1.346257);
   hnumuCCinFV_stack_12->SetBinError(16,2.127179);
   hnumuCCinFV_stack_12->SetBinError(17,1.623883);
   hnumuCCinFV_stack_12->SetBinError(18,1.842809);
   hnumuCCinFV_stack_12->SetBinError(19,1.515168);
   hnumuCCinFV_stack_12->SetBinError(20,1.143102);
   hnumuCCinFV_stack_12->SetBinError(21,1.486963);
   hnumuCCinFV_stack_12->SetBinError(22,1.284385);
   hnumuCCinFV_stack_12->SetBinError(23,2.485945);
   hnumuCCinFV_stack_12->SetBinError(24,0.8104461);
   hnumuCCinFV_stack_12->SetBinError(25,0.4097108);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.4915121);
   hnueCCinFV_stack_13->SetBinContent(2,3.209492);
   hnueCCinFV_stack_13->SetBinContent(3,3.657737);
   hnueCCinFV_stack_13->SetBinContent(4,2.745194);
   hnueCCinFV_stack_13->SetBinContent(5,1.062084);
   hnueCCinFV_stack_13->SetBinContent(6,3.537428);
   hnueCCinFV_stack_13->SetBinContent(7,2.530563);
   hnueCCinFV_stack_13->SetBinContent(8,2.366342);
   hnueCCinFV_stack_13->SetBinContent(9,0.8008012);
   hnueCCinFV_stack_13->SetBinContent(10,2.250398);
   hnueCCinFV_stack_13->SetBinContent(11,0.7820199);
   hnueCCinFV_stack_13->SetBinContent(12,0.8588594);
   hnueCCinFV_stack_13->SetBinContent(13,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.5017868);
   hnueCCinFV_stack_13->SetBinContent(16,1.007966);
   hnueCCinFV_stack_13->SetBinContent(17,0.8646749);
   hnueCCinFV_stack_13->SetBinContent(18,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,1.219462);
   hnueCCinFV_stack_13->SetBinContent(20,1.272342);
   hnueCCinFV_stack_13->SetBinContent(21,0.609544);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,1.415675);
   hnueCCinFV_stack_13->SetBinContent(24,0.4673674);
   hnueCCinFV_stack_13->SetBinError(1,0.4915121);
   hnueCCinFV_stack_13->SetBinError(2,1.286012);
   hnueCCinFV_stack_13->SetBinError(3,1.678355);
   hnueCCinFV_stack_13->SetBinError(4,0.9574489);
   hnueCCinFV_stack_13->SetBinError(5,0.4759348);
   hnueCCinFV_stack_13->SetBinError(6,1.470153);
   hnueCCinFV_stack_13->SetBinError(7,0.8448575);
   hnueCCinFV_stack_13->SetBinError(8,0.8782183);
   hnueCCinFV_stack_13->SetBinError(9,0.4940269);
   hnueCCinFV_stack_13->SetBinError(10,1.346421);
   hnueCCinFV_stack_13->SetBinError(11,0.4631468);
   hnueCCinFV_stack_13->SetBinError(12,0.5193442);
   hnueCCinFV_stack_13->SetBinError(13,0.3397478);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.5017869);
   hnueCCinFV_stack_13->SetBinError(16,0.5830762);
   hnueCCinFV_stack_13->SetBinError(17,0.5032641);
   hnueCCinFV_stack_13->SetBinError(18,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.7265158);
   hnueCCinFV_stack_13->SetBinError(20,0.6022254);
   hnueCCinFV_stack_13->SetBinError(21,0.3523015);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.6884953);
   hnueCCinFV_stack_13->SetBinError(24,0.3345885);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);
   hmcerror__11->SetBinContent(1,40.84432);
   hmcerror__11->SetBinContent(2,143.8864);
   hmcerror__11->SetBinContent(3,206.8889);
   hmcerror__11->SetBinContent(4,246.184);
   hmcerror__11->SetBinContent(5,266.9456);
   hmcerror__11->SetBinContent(6,263.2988);
   hmcerror__11->SetBinContent(7,249.5455);
   hmcerror__11->SetBinContent(8,251.1423);
   hmcerror__11->SetBinContent(9,220.78);
   hmcerror__11->SetBinContent(10,209.7682);
   hmcerror__11->SetBinContent(11,182.1508);
   hmcerror__11->SetBinContent(12,167.4831);
   hmcerror__11->SetBinContent(13,162.6217);
   hmcerror__11->SetBinContent(14,141.8139);
   hmcerror__11->SetBinContent(15,126.8648);
   hmcerror__11->SetBinContent(16,128.7612);
   hmcerror__11->SetBinContent(17,123.1871);
   hmcerror__11->SetBinContent(18,100.3732);
   hmcerror__11->SetBinContent(19,106.1489);
   hmcerror__11->SetBinContent(20,96.19817);
   hmcerror__11->SetBinContent(21,98.45935);
   hmcerror__11->SetBinContent(22,83.53304);
   hmcerror__11->SetBinContent(23,61.65124);
   hmcerror__11->SetBinContent(24,38.19612);
   hmcerror__11->SetBinContent(25,12.73383);
   hmcerror__11->SetBinError(1,15.26521);
   hmcerror__11->SetBinError(2,37.43092);
   hmcerror__11->SetBinError(3,62.70498);
   hmcerror__11->SetBinError(4,59.98511);
   hmcerror__11->SetBinError(5,67.46992);
   hmcerror__11->SetBinError(6,66.91412);
   hmcerror__11->SetBinError(7,61.16329);
   hmcerror__11->SetBinError(8,58.08881);
   hmcerror__11->SetBinError(9,55.35598);
   hmcerror__11->SetBinError(10,51.79688);
   hmcerror__11->SetBinError(11,46.43085);
   hmcerror__11->SetBinError(12,44.75124);
   hmcerror__11->SetBinError(13,39.5574);
   hmcerror__11->SetBinError(14,33.88978);
   hmcerror__11->SetBinError(15,35.74839);
   hmcerror__11->SetBinError(16,38.65521);
   hmcerror__11->SetBinError(17,34.67641);
   hmcerror__11->SetBinError(18,29.64321);
   hmcerror__11->SetBinError(19,30.23344);
   hmcerror__11->SetBinError(20,29.00045);
   hmcerror__11->SetBinError(21,33.64621);
   hmcerror__11->SetBinError(22,25.40813);
   hmcerror__11->SetBinError(23,22.62818);
   hmcerror__11->SetBinError(24,18.53869);
   hmcerror__11->SetBinError(25,11.82348);
   hmcerror__11->SetBinError(26,0.3895343);
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
   
   Double_t _fx3013[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3013[25] = {
   45,
   145,
   208,
   280,
   295,
   250,
   250,
   246,
   222,
   211,
   192,
   158,
   152,
   143,
   143,
   125,
   132,
   106,
   93,
   108,
   94,
   91,
   69,
   44,
   21};
   Double_t _felx3013[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3013[25] = {
   6.8416,
   12.04159,
   14.42221,
   16.7332,
   17.17556,
   15.81139,
   15.81139,
   15.68439,
   14.89966,
   14.52584,
   13.85641,
   12.56981,
   12.32883,
   11.95826,
   11.95826,
   11.18034,
   11.48913,
   10.29563,
   9.7658,
   10.3923,
   9.8173,
   9.6617,
   8.4327,
   6.7671,
   4.7354};
   Double_t _fehx3013[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3013[25] = {
   6.637,
   12.04159,
   14.42221,
   16.7332,
   17.17556,
   15.81139,
   15.81139,
   15.68439,
   14.89966,
   14.52584,
   13.85641,
   12.56981,
   12.32883,
   11.95826,
   11.95826,
   11.18034,
   11.48913,
   10.29563,
   9.564,
   10.3923,
   9.616,
   9.46,
   8.2304,
   6.5623,
   4.5229};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,3.465);
   Graph_Graph3013->SetMinimum(14.63814);
   Graph_Graph3013->SetMaximum(341.7667);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.4/25","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 476.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  110.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1154.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  237.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 231.8","F");

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
   
   Double_t _fx3014[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3014[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3014[25] = {
   0.3737412,
   0.2601422,
   0.3030853,
   0.2436597,
   0.2527479,
   0.2541376,
   0.2450987,
   0.2312984,
   0.2507292,
   0.2469244,
   0.2549034,
   0.2671986,
   0.2432479,
   0.2389735,
   0.2817834,
   0.3002085,
   0.2814939,
   0.2953299,
   0.2848211,
   0.3014657,
   0.3417269,
   0.3041686,
   0.3670353,
   0.4853552,
   0.928509};
   Double_t _fehx3014[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3014[25] = {
   0.3737412,
   0.2601422,
   0.3030853,
   0.2436597,
   0.2527479,
   0.2541376,
   0.2450987,
   0.2312984,
   0.2507292,
   0.2469244,
   0.2549034,
   0.2671986,
   0.2432479,
   0.2389735,
   0.2817834,
   0.3002085,
   0.2814939,
   0.2953299,
   0.2848211,
   0.3014657,
   0.3417269,
   0.3041686,
   0.3670353,
   0.4853552,
   0.928509};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
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
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Polar Angle #theta [rad]");
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
   
   Double_t _fx3015[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3015[25] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3015[25] = {
   0.2327875,
   0.1915553,
   0.2056904,
   0.2039344,
   0.2008442,
   0.207354,
   0.2075488,
   0.2019915,
   0.2117207,
   0.2092671,
   0.2026049,
   0.2034572,
   0.1926559,
   0.1868978,
   0.2156801,
   0.1930916,
   0.1971698,
   0.2191575,
   0.2113182,
   0.2223874,
   0.210084,
   0.1993421,
   0.223465,
   0.2325033,
   0.2785214};
   Double_t _fehx3015[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3015[25] = {
   0.2327875,
   0.1915553,
   0.2056904,
   0.2039344,
   0.2008442,
   0.207354,
   0.2075488,
   0.2019915,
   0.2117207,
   0.2092671,
   0.2026049,
   0.2034572,
   0.1926559,
   0.1868978,
   0.2156801,
   0.1930916,
   0.1971698,
   0.2191575,
   0.2113182,
   0.2223874,
   0.210084,
   0.1993421,
   0.223465,
   0.2325033,
   0.2785214};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
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
   
   Double_t _fx3016[25] = {
   0.063,
   0.189,
   0.315,
   0.441,
   0.567,
   0.693,
   0.819,
   0.945,
   1.071,
   1.197,
   1.323,
   1.449,
   1.575,
   1.701,
   1.827,
   1.953,
   2.079,
   2.205,
   2.331,
   2.457,
   2.583,
   2.709,
   2.835,
   2.961,
   3.087};
   Double_t _fy3016[25] = {
   1.101744,
   1.007739,
   1.005371,
   1.137361,
   1.105094,
   0.9494915,
   1.001821,
   0.9795245,
   1.005526,
   1.005872,
   1.054072,
   0.9433789,
   0.9346845,
   1.008363,
   1.127184,
   0.9707892,
   1.071541,
   1.056059,
   0.8761281,
   1.122683,
   0.9547087,
   1.089389,
   1.119199,
   1.151949,
   1.64915};
   Double_t _felx3016[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fely3016[25] = {
   0.1675043,
   0.08368821,
   0.06970992,
   0.06797031,
   0.06434107,
   0.06005112,
   0.06336073,
   0.0624522,
   0.06748648,
   0.0692471,
   0.07607108,
   0.07505119,
   0.07581292,
   0.08432359,
   0.09425987,
   0.08683003,
   0.09326567,
   0.1025735,
   0.09200098,
   0.1080302,
   0.09970917,
   0.1156632,
   0.1367807,
   0.1771672,
   0.3718756};
   Double_t _fehx3016[25] = {
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063,
   0.063};
   Double_t _fehy3016[25] = {
   0.1624951,
   0.08368821,
   0.06970992,
   0.06797031,
   0.06434107,
   0.06005112,
   0.06336073,
   0.0624522,
   0.06748648,
   0.0692471,
   0.07607108,
   0.07505119,
   0.07581292,
   0.08432359,
   0.09425987,
   0.08683003,
   0.09326567,
   0.1025735,
   0.09009988,
   0.1080302,
   0.09766467,
   0.1132486,
   0.1334993,
   0.1718054,
   0.3551877};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,3.465);
   Graph_Graph3016->SetMinimum(0.662106);
   Graph_Graph3016->SetMaximum(2.126359);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_theta_low_all",25,0,3.15);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
