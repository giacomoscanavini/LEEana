#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed May 25 14:29:00 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",242,172,1200,900);
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
   pad1->Range(-40,-3.425978,293.3333,288.6838);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__4->SetBinContent(0,1.430254);
   hmc__4->SetBinContent(1,68.5838);
   hmc__4->SetBinContent(2,78.35352);
   hmc__4->SetBinContent(3,98.31731);
   hmc__4->SetBinContent(4,108.3187);
   hmc__4->SetBinContent(5,116.1086);
   hmc__4->SetBinContent(6,119.5407);
   hmc__4->SetBinContent(7,118.4807);
   hmc__4->SetBinContent(8,130.5429);
   hmc__4->SetBinContent(9,130.9016);
   hmc__4->SetBinContent(10,134.1338);
   hmc__4->SetBinContent(11,151.6486);
   hmc__4->SetBinContent(12,143.1747);
   hmc__4->SetBinContent(13,152.406);
   hmc__4->SetBinContent(14,154.5112);
   hmc__4->SetBinContent(15,134.4017);
   hmc__4->SetBinContent(16,148.5118);
   hmc__4->SetBinContent(17,159.5945);
   hmc__4->SetBinContent(18,155.7946);
   hmc__4->SetBinContent(19,163.8521);
   hmc__4->SetBinContent(20,159.4046);
   hmc__4->SetBinContent(21,171.2989);
   hmc__4->SetBinContent(22,159.0394);
   hmc__4->SetBinContent(23,161.8398);
   hmc__4->SetBinContent(24,137.9641);
   hmc__4->SetBinContent(25,114.8334);
   hmc__4->SetBinContent(26,67.03267);
   hmc__4->SetBinContent(27,3.577243);
   hmc__4->SetBinError(0,0.5548118);
   hmc__4->SetBinError(1,16.2761);
   hmc__4->SetBinError(2,20.278);
   hmc__4->SetBinError(3,24.5834);
   hmc__4->SetBinError(4,27.35822);
   hmc__4->SetBinError(5,30.94011);
   hmc__4->SetBinError(6,30.97119);
   hmc__4->SetBinError(7,29.30634);
   hmc__4->SetBinError(8,35.76743);
   hmc__4->SetBinError(9,32.60386);
   hmc__4->SetBinError(10,31.32585);
   hmc__4->SetBinError(11,37.0773);
   hmc__4->SetBinError(12,35.66915);
   hmc__4->SetBinError(13,34.87006);
   hmc__4->SetBinError(14,36.24115);
   hmc__4->SetBinError(15,34.18843);
   hmc__4->SetBinError(16,35.5641);
   hmc__4->SetBinError(17,37.69861);
   hmc__4->SetBinError(18,38.37211);
   hmc__4->SetBinError(19,38.55756);
   hmc__4->SetBinError(20,35.14352);
   hmc__4->SetBinError(21,37.59286);
   hmc__4->SetBinError(22,36.57079);
   hmc__4->SetBinError(23,35.31124);
   hmc__4->SetBinError(24,32.74565);
   hmc__4->SetBinError(25,26.14394);
   hmc__4->SetBinError(26,16.4854);
   hmc__4->SetBinError(27,4.071082);
   hmc__4->SetMinimum(-3.425978);
   hmc__4->SetMaximum(274.0783);
   hmc__4->SetEntries(3396.741);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",26,0,260);
   hs2_stack_2->SetMinimum(-2.083393e-08);
   hs2_stack_2->SetMaximum(179.8639);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,2.344287);
   hbadmatch_stack_1->SetBinContent(2,0.7336084);
   hbadmatch_stack_1->SetBinContent(3,2.073401);
   hbadmatch_stack_1->SetBinContent(4,1.314389);
   hbadmatch_stack_1->SetBinContent(5,3.395825);
   hbadmatch_stack_1->SetBinContent(6,2.033572);
   hbadmatch_stack_1->SetBinContent(7,2.053982);
   hbadmatch_stack_1->SetBinContent(8,2.146967);
   hbadmatch_stack_1->SetBinContent(9,2.750074);
   hbadmatch_stack_1->SetBinContent(10,2.447412);
   hbadmatch_stack_1->SetBinContent(11,3.725988);
   hbadmatch_stack_1->SetBinContent(12,4.410072);
   hbadmatch_stack_1->SetBinContent(13,5.654841);
   hbadmatch_stack_1->SetBinContent(14,4.877523);
   hbadmatch_stack_1->SetBinContent(15,2.96625);
   hbadmatch_stack_1->SetBinContent(16,1.925845);
   hbadmatch_stack_1->SetBinContent(17,4.290279);
   hbadmatch_stack_1->SetBinContent(18,4.872954);
   hbadmatch_stack_1->SetBinContent(19,4.497405);
   hbadmatch_stack_1->SetBinContent(20,3.69551);
   hbadmatch_stack_1->SetBinContent(21,2.666938);
   hbadmatch_stack_1->SetBinContent(22,3.713599);
   hbadmatch_stack_1->SetBinContent(23,5.464501);
   hbadmatch_stack_1->SetBinContent(24,2.181023);
   hbadmatch_stack_1->SetBinContent(25,2.957843);
   hbadmatch_stack_1->SetBinContent(26,2.189268);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.8101654);
   hbadmatch_stack_1->SetBinError(2,0.4394482);
   hbadmatch_stack_1->SetBinError(3,0.7135016);
   hbadmatch_stack_1->SetBinError(4,0.6058377);
   hbadmatch_stack_1->SetBinError(5,2.029159);
   hbadmatch_stack_1->SetBinError(6,0.6432743);
   hbadmatch_stack_1->SetBinError(7,0.7078105);
   hbadmatch_stack_1->SetBinError(8,0.7893415);
   hbadmatch_stack_1->SetBinError(9,0.9750045);
   hbadmatch_stack_1->SetBinError(10,0.7605193);
   hbadmatch_stack_1->SetBinError(11,1.062086);
   hbadmatch_stack_1->SetBinError(12,1.172817);
   hbadmatch_stack_1->SetBinError(13,1.288478);
   hbadmatch_stack_1->SetBinError(14,1.140301);
   hbadmatch_stack_1->SetBinError(15,0.9311484);
   hbadmatch_stack_1->SetBinError(16,0.7011362);
   hbadmatch_stack_1->SetBinError(17,1.052715);
   hbadmatch_stack_1->SetBinError(18,1.142117);
   hbadmatch_stack_1->SetBinError(19,1.573181);
   hbadmatch_stack_1->SetBinError(20,0.9652514);
   hbadmatch_stack_1->SetBinError(21,0.8244779);
   hbadmatch_stack_1->SetBinError(22,0.9805772);
   hbadmatch_stack_1->SetBinError(23,1.222641);
   hbadmatch_stack_1->SetBinError(24,0.7034287);
   hbadmatch_stack_1->SetBinError(25,0.8427043);
   hbadmatch_stack_1->SetBinError(26,0.8036832);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1444;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,0.3243973);
   hext_stack_2->SetBinContent(1,1.78639);
   hext_stack_2->SetBinContent(2,3.15182);
   hext_stack_2->SetBinContent(3,4.214394);
   hext_stack_2->SetBinContent(4,8.402838);
   hext_stack_2->SetBinContent(5,7.911264);
   hext_stack_2->SetBinContent(6,6.082985);
   hext_stack_2->SetBinContent(7,6.24298);
   hext_stack_2->SetBinContent(8,3.636211);
   hext_stack_2->SetBinContent(9,8.802256);
   hext_stack_2->SetBinContent(10,11.52593);
   hext_stack_2->SetBinContent(11,13.05854);
   hext_stack_2->SetBinContent(12,10.66367);
   hext_stack_2->SetBinContent(13,10.18205);
   hext_stack_2->SetBinContent(14,10.64931);
   hext_stack_2->SetBinContent(15,8.015008);
   hext_stack_2->SetBinContent(16,13.17387);
   hext_stack_2->SetBinContent(17,11.95848);
   hext_stack_2->SetBinContent(18,13.91205);
   hext_stack_2->SetBinContent(19,10.90586);
   hext_stack_2->SetBinContent(20,13.46514);
   hext_stack_2->SetBinContent(21,23.79723);
   hext_stack_2->SetBinContent(22,15.32655);
   hext_stack_2->SetBinContent(23,21.38358);
   hext_stack_2->SetBinContent(24,12.71102);
   hext_stack_2->SetBinContent(25,12.15161);
   hext_stack_2->SetBinContent(26,13.45796);
   hext_stack_2->SetBinError(0,0.3243973);
   hext_stack_2->SetBinError(1,0.8039566);
   hext_stack_2->SetBinError(2,1.23684);
   hext_stack_2->SetBinError(3,1.305512);
   hext_stack_2->SetBinError(4,1.969062);
   hext_stack_2->SetBinError(5,1.997027);
   hext_stack_2->SetBinError(6,1.552674);
   hext_stack_2->SetBinError(7,1.547854);
   hext_stack_2->SetBinError(8,1.272817);
   hext_stack_2->SetBinError(9,2.060031);
   hext_stack_2->SetBinError(10,2.492345);
   hext_stack_2->SetBinError(11,2.622797);
   hext_stack_2->SetBinError(12,2.269662);
   hext_stack_2->SetBinError(13,2.173649);
   hext_stack_2->SetBinError(14,2.356643);
   hext_stack_2->SetBinError(15,1.855964);
   hext_stack_2->SetBinError(16,2.503891);
   hext_stack_2->SetBinError(17,2.430766);
   hext_stack_2->SetBinError(18,2.517702);
   hext_stack_2->SetBinError(19,2.279585);
   hext_stack_2->SetBinError(20,2.654126);
   hext_stack_2->SetBinError(21,3.505955);
   hext_stack_2->SetBinError(22,2.819933);
   hext_stack_2->SetBinError(23,3.291094);
   hext_stack_2->SetBinError(24,2.361266);
   hext_stack_2->SetBinError(25,2.285606);
   hext_stack_2->SetBinError(26,2.691763);
   hext_stack_2->SetEntries(621);

   ci = 1445;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.6381768);
   hdirt_stack_3->SetBinContent(2,0.4048706);
   hdirt_stack_3->SetBinContent(3,0.9987812);
   hdirt_stack_3->SetBinContent(4,0.5902398);
   hdirt_stack_3->SetBinContent(5,1.586995);
   hdirt_stack_3->SetBinContent(8,0.4377912);
   hdirt_stack_3->SetBinContent(9,0.7043164);
   hdirt_stack_3->SetBinContent(10,0.5570828);
   hdirt_stack_3->SetBinContent(11,0.2605212);
   hdirt_stack_3->SetBinContent(13,0.4762587);
   hdirt_stack_3->SetBinContent(14,0.2516114);
   hdirt_stack_3->SetBinContent(16,0.9600414);
   hdirt_stack_3->SetBinContent(17,1.076449);
   hdirt_stack_3->SetBinContent(18,0.4377912);
   hdirt_stack_3->SetBinContent(19,0.6762486);
   hdirt_stack_3->SetBinContent(21,1.371529);
   hdirt_stack_3->SetBinContent(22,0.9239391);
   hdirt_stack_3->SetBinContent(23,1.658375);
   hdirt_stack_3->SetBinContent(24,0.8667945);
   hdirt_stack_3->SetBinContent(25,0.49739);
   hdirt_stack_3->SetBinContent(26,0.6027733);
   hdirt_stack_3->SetBinError(1,0.3761246);
   hdirt_stack_3->SetBinError(2,0.2872316);
   hdirt_stack_3->SetBinError(3,0.5311599);
   hdirt_stack_3->SetBinError(4,0.4504401);
   hdirt_stack_3->SetBinError(5,1.0046);
   hdirt_stack_3->SetBinError(8,0.3095651);
   hdirt_stack_3->SetBinError(9,0.428047);
   hdirt_stack_3->SetBinError(10,0.4028472);
   hdirt_stack_3->SetBinError(11,0.2605212);
   hdirt_stack_3->SetBinError(13,0.3652866);
   hdirt_stack_3->SetBinError(14,0.2516114);
   hdirt_stack_3->SetBinError(16,0.4360368);
   hdirt_stack_3->SetBinError(17,0.5625396);
   hdirt_stack_3->SetBinError(18,0.3095651);
   hdirt_stack_3->SetBinError(19,0.3547578);
   hdirt_stack_3->SetBinError(21,0.6403833);
   hdirt_stack_3->SetBinError(22,0.5196137);
   hdirt_stack_3->SetBinError(23,0.6846166);
   hdirt_stack_3->SetBinError(24,0.4852483);
   hdirt_stack_3->SetBinError(25,0.2933399);
   hdirt_stack_3->SetBinError(26,0.4293907);
   hdirt_stack_3->SetEntries(69);

   ci = 1446;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,0.5884556);
   houtFV_stack_4->SetBinContent(1,34.4303);
   houtFV_stack_4->SetBinContent(2,6.532317);
   houtFV_stack_4->SetBinContent(3,7.036787);
   houtFV_stack_4->SetBinContent(4,5.372599);
   houtFV_stack_4->SetBinContent(5,6.015102);
   houtFV_stack_4->SetBinContent(6,6.64893);
   houtFV_stack_4->SetBinContent(7,6.548757);
   houtFV_stack_4->SetBinContent(8,7.423994);
   houtFV_stack_4->SetBinContent(9,3.91571);
   houtFV_stack_4->SetBinContent(10,6.892132);
   houtFV_stack_4->SetBinContent(11,4.449832);
   houtFV_stack_4->SetBinContent(12,6.242491);
   houtFV_stack_4->SetBinContent(13,6.057778);
   houtFV_stack_4->SetBinContent(14,5.743671);
   houtFV_stack_4->SetBinContent(15,6.693504);
   houtFV_stack_4->SetBinContent(16,6.482072);
   houtFV_stack_4->SetBinContent(17,9.755266);
   houtFV_stack_4->SetBinContent(18,5.963736);
   houtFV_stack_4->SetBinContent(19,6.885851);
   houtFV_stack_4->SetBinContent(20,7.267382);
   houtFV_stack_4->SetBinContent(21,5.312746);
   houtFV_stack_4->SetBinContent(22,4.922584);
   houtFV_stack_4->SetBinContent(23,7.066141);
   houtFV_stack_4->SetBinContent(24,6.895554);
   houtFV_stack_4->SetBinContent(25,11.15059);
   houtFV_stack_4->SetBinContent(26,22.23534);
   houtFV_stack_4->SetBinContent(27,1.838253);
   houtFV_stack_4->SetBinError(0,0.3397478);
   houtFV_stack_4->SetBinError(1,2.931321);
   houtFV_stack_4->SetBinError(2,1.330314);
   houtFV_stack_4->SetBinError(3,1.331895);
   houtFV_stack_4->SetBinError(4,1.127348);
   houtFV_stack_4->SetBinError(5,1.193582);
   houtFV_stack_4->SetBinError(6,1.262387);
   houtFV_stack_4->SetBinError(7,1.303546);
   houtFV_stack_4->SetBinError(8,1.35912);
   houtFV_stack_4->SetBinError(9,1.013546);
   houtFV_stack_4->SetBinError(10,1.304355);
   houtFV_stack_4->SetBinError(11,1.057532);
   houtFV_stack_4->SetBinError(12,1.250709);
   houtFV_stack_4->SetBinError(13,1.281555);
   houtFV_stack_4->SetBinError(14,1.214829);
   houtFV_stack_4->SetBinError(15,1.287398);
   houtFV_stack_4->SetBinError(16,1.327866);
   houtFV_stack_4->SetBinError(17,1.576589);
   houtFV_stack_4->SetBinError(18,1.273804);
   houtFV_stack_4->SetBinError(19,1.246887);
   houtFV_stack_4->SetBinError(20,1.351159);
   houtFV_stack_4->SetBinError(21,1.165576);
   houtFV_stack_4->SetBinError(22,1.081274);
   houtFV_stack_4->SetBinError(23,1.283487);
   houtFV_stack_4->SetBinError(24,1.302345);
   houtFV_stack_4->SetBinError(25,1.676493);
   houtFV_stack_4->SetBinError(26,2.429713);
   houtFV_stack_4->SetBinError(27,0.6888013);
   houtFV_stack_4->SetEntries(931);

   ci = 1447;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.291954);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.57029);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.529604);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.6692721);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.460186);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.3205179);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1685597);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2229107);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2470656);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3125578);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2287991);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1252919);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1448;
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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,0.3206861);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,15.18363);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,41.25978);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,54.67706);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,58.73022);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,67.13347);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,75.88184);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,68.50157);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,77.14087);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,76.37673);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,72.83437);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,87.3425);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,76.58429);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,79.88918);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,82.0408);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,76.4325);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,80.88557);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,81.75515);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,75.08583);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,82.82119);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,79.86606);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,79.87506);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,81.98948);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,70.94916);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,62.54042);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,46.9682);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,12.67579);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,0.7385219);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.2201295);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,1.234986);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,2.092968);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,2.366112);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.432593);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.641587);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.888687);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.658599);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.919458);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.854985);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.702569);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.142703);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.797118);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.993345);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,3.016143);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.889613);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,2.932001);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.989181);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.792348);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,3.064099);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,2.920789);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.975685);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,3.005877);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.754305);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.569222);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,2.30508);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,1.164007);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.2713408);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

   ci = 1449;
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
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_7->SetBinContent(0,0.1967154);
   hCCpi0inFV_stack_7->SetBinContent(1,8.794847);
   hCCpi0inFV_stack_7->SetBinContent(2,16.29866);
   hCCpi0inFV_stack_7->SetBinContent(3,18.01118);
   hCCpi0inFV_stack_7->SetBinContent(4,19.07645);
   hCCpi0inFV_stack_7->SetBinContent(5,16.52037);
   hCCpi0inFV_stack_7->SetBinContent(6,18.05038);
   hCCpi0inFV_stack_7->SetBinContent(7,18.3757);
   hCCpi0inFV_stack_7->SetBinContent(8,23.40862);
   hCCpi0inFV_stack_7->SetBinContent(9,20.42345);
   hCCpi0inFV_stack_7->SetBinContent(10,22.60603);
   hCCpi0inFV_stack_7->SetBinContent(11,20.61496);
   hCCpi0inFV_stack_7->SetBinContent(12,21.61217);
   hCCpi0inFV_stack_7->SetBinContent(13,24.03965);
   hCCpi0inFV_stack_7->SetBinContent(14,24.54051);
   hCCpi0inFV_stack_7->SetBinContent(15,19.05744);
   hCCpi0inFV_stack_7->SetBinContent(16,24.3617);
   hCCpi0inFV_stack_7->SetBinContent(17,24.9107);
   hCCpi0inFV_stack_7->SetBinContent(18,28.82317);
   hCCpi0inFV_stack_7->SetBinContent(19,26.66638);
   hCCpi0inFV_stack_7->SetBinContent(20,29.16886);
   hCCpi0inFV_stack_7->SetBinContent(21,30.14688);
   hCCpi0inFV_stack_7->SetBinContent(22,25.16524);
   hCCpi0inFV_stack_7->SetBinContent(23,26.53501);
   hCCpi0inFV_stack_7->SetBinContent(24,28.26649);
   hCCpi0inFV_stack_7->SetBinContent(25,20.69398);
   hCCpi0inFV_stack_7->SetBinContent(26,10.41335);
   hCCpi0inFV_stack_7->SetBinContent(27,0.1967154);
   hCCpi0inFV_stack_7->SetBinError(0,0.1967154);
   hCCpi0inFV_stack_7->SetBinError(1,1.521205);
   hCCpi0inFV_stack_7->SetBinError(2,2.024189);
   hCCpi0inFV_stack_7->SetBinError(3,2.145845);
   hCCpi0inFV_stack_7->SetBinError(4,2.184935);
   hCCpi0inFV_stack_7->SetBinError(5,2.030432);
   hCCpi0inFV_stack_7->SetBinError(6,2.067826);
   hCCpi0inFV_stack_7->SetBinError(7,2.108933);
   hCCpi0inFV_stack_7->SetBinError(8,2.453638);
   hCCpi0inFV_stack_7->SetBinError(9,2.245725);
   hCCpi0inFV_stack_7->SetBinError(10,2.432029);
   hCCpi0inFV_stack_7->SetBinError(11,2.280362);
   hCCpi0inFV_stack_7->SetBinError(12,2.354432);
   hCCpi0inFV_stack_7->SetBinError(13,2.467225);
   hCCpi0inFV_stack_7->SetBinError(14,2.527261);
   hCCpi0inFV_stack_7->SetBinError(15,2.213826);
   hCCpi0inFV_stack_7->SetBinError(16,2.433045);
   hCCpi0inFV_stack_7->SetBinError(17,2.490176);
   hCCpi0inFV_stack_7->SetBinError(18,2.694072);
   hCCpi0inFV_stack_7->SetBinError(19,2.574196);
   hCCpi0inFV_stack_7->SetBinError(20,2.744418);
   hCCpi0inFV_stack_7->SetBinError(21,2.745403);
   hCCpi0inFV_stack_7->SetBinError(22,2.520623);
   hCCpi0inFV_stack_7->SetBinError(23,2.598041);
   hCCpi0inFV_stack_7->SetBinError(24,2.6204);
   hCCpi0inFV_stack_7->SetBinError(25,2.299876);
   hCCpi0inFV_stack_7->SetBinError(26,1.685753);
   hCCpi0inFV_stack_7->SetBinError(27,0.1967154);
   hCCpi0inFV_stack_7->SetEntries(2425);

   ci = 1450;
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
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_8->SetBinContent(1,1.660551);
   hNCinFV_stack_8->SetBinContent(2,3.766095);
   hNCinFV_stack_8->SetBinContent(3,5.073553);
   hNCinFV_stack_8->SetBinContent(4,6.408533);
   hNCinFV_stack_8->SetBinContent(5,5.0203);
   hNCinFV_stack_8->SetBinContent(6,4.446451);
   hNCinFV_stack_8->SetBinContent(7,6.54077);
   hNCinFV_stack_8->SetBinContent(8,6.935283);
   hNCinFV_stack_8->SetBinContent(9,6.895554);
   hNCinFV_stack_8->SetBinContent(10,5.323521);
   hNCinFV_stack_8->SetBinContent(11,7.037326);
   hNCinFV_stack_8->SetBinContent(12,7.092269);
   hNCinFV_stack_8->SetBinContent(13,9.367006);
   hNCinFV_stack_8->SetBinContent(14,8.544271);
   hNCinFV_stack_8->SetBinContent(15,4.443069);
   hNCinFV_stack_8->SetBinContent(16,6.97731);
   hNCinFV_stack_8->SetBinContent(17,7.677343);
   hNCinFV_stack_8->SetBinContent(18,8.007838);
   hNCinFV_stack_8->SetBinContent(19,6.351899);
   hNCinFV_stack_8->SetBinContent(20,7.23235);
   hNCinFV_stack_8->SetBinContent(21,7.875749);
   hNCinFV_stack_8->SetBinContent(22,7.429066);
   hNCinFV_stack_8->SetBinContent(23,7.464331);
   hNCinFV_stack_8->SetBinContent(24,5.236693);
   hNCinFV_stack_8->SetBinContent(25,4.301298);
   hNCinFV_stack_8->SetBinContent(26,0.1950248);
   hNCinFV_stack_8->SetBinContent(27,0.3401776);
   hNCinFV_stack_8->SetBinError(1,0.650847);
   hNCinFV_stack_8->SetBinError(2,0.9410676);
   hNCinFV_stack_8->SetBinError(3,1.177633);
   hNCinFV_stack_8->SetBinError(4,1.225574);
   hNCinFV_stack_8->SetBinError(5,1.193795);
   hNCinFV_stack_8->SetBinError(6,1.056906);
   hNCinFV_stack_8->SetBinError(7,1.331558);
   hNCinFV_stack_8->SetBinError(8,1.285487);
   hNCinFV_stack_8->SetBinError(9,1.302345);
   hNCinFV_stack_8->SetBinError(10,1.17779);
   hNCinFV_stack_8->SetBinError(11,1.331339);
   hNCinFV_stack_8->SetBinError(12,1.317118);
   hNCinFV_stack_8->SetBinError(13,1.619104);
   hNCinFV_stack_8->SetBinError(14,1.454327);
   hNCinFV_stack_8->SetBinError(15,1.056279);
   hNCinFV_stack_8->SetBinError(16,1.344671);
   hNCinFV_stack_8->SetBinError(17,1.359744);
   hNCinFV_stack_8->SetBinError(18,1.415567);
   hNCinFV_stack_8->SetBinError(19,1.240579);
   hNCinFV_stack_8->SetBinError(20,1.345547);
   hNCinFV_stack_8->SetBinError(21,1.37414);
   hNCinFV_stack_8->SetBinError(22,1.359851);
   hNCinFV_stack_8->SetBinError(23,1.414995);
   hNCinFV_stack_8->SetBinError(24,1.128345);
   hNCinFV_stack_8->SetBinError(25,1.019492);
   hNCinFV_stack_8->SetBinError(26,0.1950249);
   hNCinFV_stack_8->SetBinError(27,0.3401776);
   hNCinFV_stack_8->SetEntries(671);

   ci = 1451;
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
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_9->SetBinContent(1,3.37754);
   hnumuCCinFV_stack_9->SetBinContent(2,6.178455);
   hnumuCCinFV_stack_9->SetBinContent(3,5.499499);
   hnumuCCinFV_stack_9->SetBinContent(4,7.725684);
   hnumuCCinFV_stack_9->SetBinContent(5,7.957656);
   hnumuCCinFV_stack_9->SetBinContent(6,5.778664);
   hnumuCCinFV_stack_9->SetBinContent(7,9.587748);
   hnumuCCinFV_stack_9->SetBinContent(8,8.867376);
   hnumuCCinFV_stack_9->SetBinContent(9,10.29156);
   hnumuCCinFV_stack_9->SetBinContent(10,10.11479);
   hnumuCCinFV_stack_9->SetBinContent(11,14.26508);
   hnumuCCinFV_stack_9->SetBinContent(12,15.12143);
   hnumuCCinFV_stack_9->SetBinContent(13,16.04084);
   hnumuCCinFV_stack_9->SetBinContent(14,17.51372);
   hnumuCCinFV_stack_9->SetBinContent(15,15.58498);
   hnumuCCinFV_stack_9->SetBinContent(16,13.63378);
   hnumuCCinFV_stack_9->SetBinContent(17,16.69569);
   hnumuCCinFV_stack_9->SetBinContent(18,17.06948);
   hnumuCCinFV_stack_9->SetBinContent(19,23.51967);
   hnumuCCinFV_stack_9->SetBinContent(20,17.1592);
   hnumuCCinFV_stack_9->SetBinContent(21,18.80144);
   hnumuCCinFV_stack_9->SetBinContent(22,18.37889);
   hnumuCCinFV_stack_9->SetBinContent(23,17.75702);
   hnumuCCinFV_stack_9->SetBinContent(24,18.31921);
   hnumuCCinFV_stack_9->SetBinContent(25,14.8805);
   hnumuCCinFV_stack_9->SetBinContent(26,5.235258);
   hnumuCCinFV_stack_9->SetBinContent(27,0.2668606);
   hnumuCCinFV_stack_9->SetBinError(1,0.9764986);
   hnumuCCinFV_stack_9->SetBinError(2,1.219268);
   hnumuCCinFV_stack_9->SetBinError(3,1.220101);
   hnumuCCinFV_stack_9->SetBinError(4,1.478507);
   hnumuCCinFV_stack_9->SetBinError(5,1.753062);
   hnumuCCinFV_stack_9->SetBinError(6,1.248908);
   hnumuCCinFV_stack_9->SetBinError(7,1.819676);
   hnumuCCinFV_stack_9->SetBinError(8,1.742058);
   hnumuCCinFV_stack_9->SetBinError(9,2.040572);
   hnumuCCinFV_stack_9->SetBinError(10,1.816762);
   hnumuCCinFV_stack_9->SetBinError(11,2.165174);
   hnumuCCinFV_stack_9->SetBinError(12,2.300473);
   hnumuCCinFV_stack_9->SetBinError(13,2.263368);
   hnumuCCinFV_stack_9->SetBinError(14,2.646091);
   hnumuCCinFV_stack_9->SetBinError(15,2.160345);
   hnumuCCinFV_stack_9->SetBinError(16,2.412307);
   hnumuCCinFV_stack_9->SetBinError(17,2.433105);
   hnumuCCinFV_stack_9->SetBinError(18,2.205662);
   hnumuCCinFV_stack_9->SetBinError(19,3.139304);
   hnumuCCinFV_stack_9->SetBinError(20,2.43927);
   hnumuCCinFV_stack_9->SetBinError(21,2.330731);
   hnumuCCinFV_stack_9->SetBinError(22,2.480494);
   hnumuCCinFV_stack_9->SetBinError(23,2.307598);
   hnumuCCinFV_stack_9->SetBinError(24,2.636266);
   hnumuCCinFV_stack_9->SetBinError(25,3.119425);
   hnumuCCinFV_stack_9->SetBinError(26,1.68656);
   hnumuCCinFV_stack_9->SetBinError(27,0.2668606);
   hnumuCCinFV_stack_9->SetEntries(1290);

   ci = 1452;
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
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_10->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(3,0.6210482);
   hnueCCinFV_stack_10->SetBinContent(4,0.6419483);
   hnueCCinFV_stack_10->SetBinContent(5,0.4424184);
   hnueCCinFV_stack_10->SetBinContent(6,0.4647761);
   hnueCCinFV_stack_10->SetBinContent(7,0.4057753);
   hnueCCinFV_stack_10->SetBinContent(8,0.2538659);
   hnueCCinFV_stack_10->SetBinContent(9,0.5888425);
   hnueCCinFV_stack_10->SetBinContent(10,1.776738);
   hnueCCinFV_stack_10->SetBinContent(11,0.8380547);
   hnueCCinFV_stack_10->SetBinContent(12,1.30886);
   hnueCCinFV_stack_10->SetBinContent(13,0.5867651);
   hnueCCinFV_stack_10->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(15,0.9864399);
   hnueCCinFV_stack_10->SetBinContent(17,0.9047992);
   hnueCCinFV_stack_10->SetBinContent(18,1.440728);
   hnueCCinFV_stack_10->SetBinContent(19,1.137711);
   hnueCCinFV_stack_10->SetBinContent(20,1.020533);
   hnueCCinFV_stack_10->SetBinContent(21,0.7820846);
   hnueCCinFV_stack_10->SetBinContent(22,0.7298748);
   hnueCCinFV_stack_10->SetBinContent(23,3.338256);
   hnueCCinFV_stack_10->SetBinContent(24,0.6263665);
   hnueCCinFV_stack_10->SetBinContent(25,0.9528184);
   hnueCCinFV_stack_10->SetBinError(1,0.3401776);
   hnueCCinFV_stack_10->SetBinError(3,0.4459531);
   hnueCCinFV_stack_10->SetBinError(4,0.373277);
   hnueCCinFV_stack_10->SetBinError(5,0.3147324);
   hnueCCinFV_stack_10->SetBinError(6,0.3293567);
   hnueCCinFV_stack_10->SetBinError(7,0.2871419);
   hnueCCinFV_stack_10->SetBinError(8,0.2538659);
   hnueCCinFV_stack_10->SetBinError(9,0.4213728);
   hnueCCinFV_stack_10->SetBinError(10,1.240334);
   hnueCCinFV_stack_10->SetBinError(11,0.4200657);
   hnueCCinFV_stack_10->SetBinError(12,0.613987);
   hnueCCinFV_stack_10->SetBinError(13,0.3387718);
   hnueCCinFV_stack_10->SetBinError(14,0.1967154);
   hnueCCinFV_stack_10->SetBinError(15,0.6560483);
   hnueCCinFV_stack_10->SetBinError(17,0.4716153);
   hnueCCinFV_stack_10->SetBinError(18,0.6114525);
   hnueCCinFV_stack_10->SetBinError(19,0.5970042);
   hnueCCinFV_stack_10->SetBinError(20,0.5892049);
   hnueCCinFV_stack_10->SetBinError(21,0.463181);
   hnueCCinFV_stack_10->SetBinError(22,0.4417782);
   hnueCCinFV_stack_10->SetBinError(23,1.740761);
   hnueCCinFV_stack_10->SetBinError(24,0.3630167);
   hnueCCinFV_stack_10->SetBinError(25,0.4910883);
   hnueCCinFV_stack_10->SetEntries(72);

   ci = 1453;
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
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__5->SetBinContent(0,1.430254);
   hmcerror__5->SetBinContent(1,68.5838);
   hmcerror__5->SetBinContent(2,78.35352);
   hmcerror__5->SetBinContent(3,98.31731);
   hmcerror__5->SetBinContent(4,108.3187);
   hmcerror__5->SetBinContent(5,116.1086);
   hmcerror__5->SetBinContent(6,119.5407);
   hmcerror__5->SetBinContent(7,118.4807);
   hmcerror__5->SetBinContent(8,130.5429);
   hmcerror__5->SetBinContent(9,130.9016);
   hmcerror__5->SetBinContent(10,134.1338);
   hmcerror__5->SetBinContent(11,151.6486);
   hmcerror__5->SetBinContent(12,143.1747);
   hmcerror__5->SetBinContent(13,152.406);
   hmcerror__5->SetBinContent(14,154.5112);
   hmcerror__5->SetBinContent(15,134.4017);
   hmcerror__5->SetBinContent(16,148.5118);
   hmcerror__5->SetBinContent(17,159.5945);
   hmcerror__5->SetBinContent(18,155.7946);
   hmcerror__5->SetBinContent(19,163.8521);
   hmcerror__5->SetBinContent(20,159.4046);
   hmcerror__5->SetBinContent(21,171.2989);
   hmcerror__5->SetBinContent(22,159.0394);
   hmcerror__5->SetBinContent(23,161.8398);
   hmcerror__5->SetBinContent(24,137.9641);
   hmcerror__5->SetBinContent(25,114.8334);
   hmcerror__5->SetBinContent(26,67.03267);
   hmcerror__5->SetBinContent(27,3.577243);
   hmcerror__5->SetBinError(0,0.5548118);
   hmcerror__5->SetBinError(1,16.2761);
   hmcerror__5->SetBinError(2,20.278);
   hmcerror__5->SetBinError(3,24.5834);
   hmcerror__5->SetBinError(4,27.35822);
   hmcerror__5->SetBinError(5,30.94011);
   hmcerror__5->SetBinError(6,30.97119);
   hmcerror__5->SetBinError(7,29.30634);
   hmcerror__5->SetBinError(8,35.76743);
   hmcerror__5->SetBinError(9,32.60386);
   hmcerror__5->SetBinError(10,31.32585);
   hmcerror__5->SetBinError(11,37.0773);
   hmcerror__5->SetBinError(12,35.66915);
   hmcerror__5->SetBinError(13,34.87006);
   hmcerror__5->SetBinError(14,36.24115);
   hmcerror__5->SetBinError(15,34.18843);
   hmcerror__5->SetBinError(16,35.5641);
   hmcerror__5->SetBinError(17,37.69861);
   hmcerror__5->SetBinError(18,38.37211);
   hmcerror__5->SetBinError(19,38.55756);
   hmcerror__5->SetBinError(20,35.14352);
   hmcerror__5->SetBinError(21,37.59286);
   hmcerror__5->SetBinError(22,36.57079);
   hmcerror__5->SetBinError(23,35.31124);
   hmcerror__5->SetBinError(24,32.74565);
   hmcerror__5->SetBinError(25,26.14394);
   hmcerror__5->SetBinError(26,16.4854);
   hmcerror__5->SetBinError(27,4.071082);
   hmcerror__5->SetEntries(3396.741);

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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3005[26] = {
   54,
   45,
   94,
   91,
   78,
   86,
   102,
   91,
   115,
   114,
   124,
   103,
   119,
   100,
   120,
   118,
   120,
   122,
   123,
   110,
   132,
   122,
   99,
   98,
   89,
   46};
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
   7.4785,
   6.8416,
   9.8173,
   9.6617,
   8.9562,
   9.3967,
   10.0995,
   9.6617,
   10.72381,
   10.67708,
   11.13553,
   10.14889,
   10.90871,
   10.1212,
   10.95445,
   10.86278,
   10.95445,
   11.04536,
   11.09054,
   10.48809,
   11.48913,
   11.04536,
   10.0712,
   10.0209,
   9.5566,
   6.9153};
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
   7.275,
   6.637,
   9.616,
   9.46,
   8.7542,
   9.1951,
   10.0995,
   9.46,
   10.72381,
   10.67708,
   11.13553,
   10.14889,
   10.90871,
   9.92,
   10.95445,
   10.86278,
   10.95445,
   11.04536,
   11.09054,
   10.48809,
   11.48913,
   11.04536,
   9.87,
   9.82,
   9.3552,
   6.7108};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,286);
   Graph_Graph3005->SetMinimum(27.62533);
   Graph_Graph3005->SetMaximum(154.0222);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.2/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2615.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.4","F");

   ci = 1444;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.6","F");

   ci = 1445;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1446;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 213.9","F");

   ci = 1447;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1765.4","F");

   ci = 1449;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 566.6","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 157.3","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 335.4","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1453;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
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
   0.2373169,
   0.2588014,
   0.2500415,
   0.2525716,
   0.2664756,
   0.2590849,
   0.2473513,
   0.2739897,
   0.2490715,
   0.2335418,
   0.2444949,
   0.2491302,
   0.2287972,
   0.2345535,
   0.2543749,
   0.2394699,
   0.236215,
   0.2462994,
   0.2353192,
   0.2204674,
   0.2194576,
   0.229948,
   0.2181864,
   0.2373491,
   0.2276684,
   0.2459309};
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
   0.2373169,
   0.2588014,
   0.2500415,
   0.2525716,
   0.2664756,
   0.2590849,
   0.2473513,
   0.2739897,
   0.2490715,
   0.2335418,
   0.2444949,
   0.2491302,
   0.2287972,
   0.2345535,
   0.2543749,
   0.2394699,
   0.236215,
   0.2462994,
   0.2353192,
   0.2204674,
   0.2194576,
   0.229948,
   0.2181864,
   0.2373491,
   0.2276684,
   0.2459309};
   grae = new TGraphAsymmErrors(26,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,286);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
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
   0.2082103,
   0.2218631,
   0.2335564,
   0.2178777,
   0.2441615,
   0.2387673,
   0.2345227,
   0.2439615,
   0.2279482,
   0.2194036,
   0.2318852,
   0.2247658,
   0.2125686,
   0.2277653,
   0.2282464,
   0.2229506,
   0.2208087,
   0.2188432,
   0.2200871,
   0.2132637,
   0.2026467,
   0.215003,
   0.1966028,
   0.2107946,
   0.1949882,
   0.1894582};
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
   0.2082103,
   0.2218631,
   0.2335564,
   0.2178777,
   0.2441615,
   0.2387673,
   0.2345227,
   0.2439615,
   0.2279482,
   0.2194036,
   0.2318852,
   0.2247658,
   0.2125686,
   0.2277653,
   0.2282464,
   0.2229506,
   0.2208087,
   0.2188432,
   0.2200871,
   0.2132637,
   0.2026467,
   0.215003,
   0.1966028,
   0.2107946,
   0.1949882,
   0.1894582};
   grae = new TGraphAsymmErrors(26,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,286);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3008[26] = {
   0.7873579,
   0.5743201,
   0.956088,
   0.8401135,
   0.6717847,
   0.7194202,
   0.8609001,
   0.6970886,
   0.8785224,
   0.8498975,
   0.8176799,
   0.7194006,
   0.7808094,
   0.6472021,
   0.8928456,
   0.7945497,
   0.7519058,
   0.7830824,
   0.7506768,
   0.6900677,
   0.7705828,
   0.7671055,
   0.6117162,
   0.7103297,
   0.7750358,
   0.6862326};
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
   0.1090418,
   0.08731708,
   0.09985322,
   0.08919698,
   0.07713639,
   0.07860669,
   0.08524181,
   0.07401166,
   0.08192264,
   0.0796002,
   0.07342982,
   0.07088465,
   0.07157668,
   0.06550462,
   0.08150528,
   0.07314423,
   0.06863929,
   0.07089695,
   0.06768625,
   0.06579537,
   0.06707062,
   0.06945047,
   0.06222946,
   0.07263411,
   0.08322143,
   0.1031631};
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
   0.1060746,
   0.08470584,
   0.09780577,
   0.08733488,
   0.07539664,
   0.07692024,
   0.08524181,
   0.07246658,
   0.08192264,
   0.0796002,
   0.07342982,
   0.07088465,
   0.07157668,
   0.06420245,
   0.08150528,
   0.07314423,
   0.06863929,
   0.07089695,
   0.06768625,
   0.06579537,
   0.06707062,
   0.06945047,
   0.06098625,
   0.07117794,
   0.08146758,
   0.1001124};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,286);
   Graph_Graph3008->SetMinimum(0.430314);
   Graph_Graph3008->SetMaximum(1.110583);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
