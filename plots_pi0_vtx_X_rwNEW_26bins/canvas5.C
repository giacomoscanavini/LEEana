#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Feb 17 20:27:23 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-40,-3.517844,293.3333,388.9995);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__13->SetBinContent(0,1.430254);
   hmc__13->SetBinContent(1,70.67812);
   hmc__13->SetBinContent(2,83.92699);
   hmc__13->SetBinContent(3,100.5646);
   hmc__13->SetBinContent(4,112.4283);
   hmc__13->SetBinContent(5,122.1624);
   hmc__13->SetBinContent(6,125.6037);
   hmc__13->SetBinContent(7,122.4967);
   hmc__13->SetBinContent(8,136.2582);
   hmc__13->SetBinContent(9,136.8506);
   hmc__13->SetBinContent(10,138.8252);
   hmc__13->SetBinContent(11,156.1018);
   hmc__13->SetBinContent(12,148.5936);
   hmc__13->SetBinContent(13,158.0646);
   hmc__13->SetBinContent(14,158.0291);
   hmc__13->SetBinContent(15,138.9048);
   hmc__13->SetBinContent(16,152.8663);
   hmc__13->SetBinContent(17,163.3605);
   hmc__13->SetBinContent(18,159.7574);
   hmc__13->SetBinContent(19,168.5452);
   hmc__13->SetBinContent(20,164.9714);
   hmc__13->SetBinContent(21,175.8922);
   hmc__13->SetBinContent(22,162.6122);
   hmc__13->SetBinContent(23,169.994);
   hmc__13->SetBinContent(24,141.877);
   hmc__13->SetBinContent(25,120.3906);
   hmc__13->SetBinContent(26,68.94319);
   hmc__13->SetBinContent(27,3.577243);
   hmc__13->SetBinError(0,0.5548118);
   hmc__13->SetBinError(1,23.85822);
   hmc__13->SetBinError(2,35.22683);
   hmc__13->SetBinError(3,38.67195);
   hmc__13->SetBinError(4,42.10482);
   hmc__13->SetBinError(5,51.32475);
   hmc__13->SetBinError(6,49.12206);
   hmc__13->SetBinError(7,46.98617);
   hmc__13->SetBinError(8,54.50039);
   hmc__13->SetBinError(9,53.4363);
   hmc__13->SetBinError(10,49.98537);
   hmc__13->SetBinError(11,55.41035);
   hmc__13->SetBinError(12,60.94821);
   hmc__13->SetBinError(13,60.08842);
   hmc__13->SetBinError(14,53.42727);
   hmc__13->SetBinError(15,53.19064);
   hmc__13->SetBinError(16,54.13265);
   hmc__13->SetBinError(17,53.23607);
   hmc__13->SetBinError(18,51.5748);
   hmc__13->SetBinError(19,54.39857);
   hmc__13->SetBinError(20,56.70352);
   hmc__13->SetBinError(21,61.64842);
   hmc__13->SetBinError(22,53.17993);
   hmc__13->SetBinError(23,53.64269);
   hmc__13->SetBinError(24,44.98162);
   hmc__13->SetBinError(25,41.93672);
   hmc__13->SetBinError(26,23.73897);
   hmc__13->SetBinError(27,5.891471);
   hmc__13->SetMinimum(-3.517844);
   hmc__13->SetMaximum(369.3736);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",26,0,260);
   hs5_stack_5->SetMinimum(-2.083393e-08);
   hs5_stack_5->SetMaximum(184.6868);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
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
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
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

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
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

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
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

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
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

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.767254);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.585404);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3763178);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8096042);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.9625539);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.9491041);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.450144);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.697836);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7240718);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3626998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.018522);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.32559);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.4600178);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.6267538);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.9348222);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.8222219);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.7807039);
   hNCpi0inFVqe_stack_6->SetBinContent(23,1.046422);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.6275859);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.125218);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3060563);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2501964);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1313578);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3476357);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3148322);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3531893);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4455316);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.29151);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.217311);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1005948);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3652876);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.4180388);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1399647);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1943021);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3620771);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2756104);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2608584);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3663515);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2387875);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.1012383);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.2233681);
   hNCpi0inFVres_stack_7->SetBinContent(1,12.43664);
   hNCpi0inFVres_stack_7->SetBinContent(2,34.59515);
   hNCpi0inFVres_stack_7->SetBinContent(3,46.09163);
   hNCpi0inFVres_stack_7->SetBinContent(4,47.45126);
   hNCpi0inFVres_stack_7->SetBinContent(5,56.79284);
   hNCpi0inFVres_stack_7->SetBinContent(6,62.32703);
   hNCpi0inFVres_stack_7->SetBinContent(7,56.52295);
   hNCpi0inFVres_stack_7->SetBinContent(8,65.27486);
   hNCpi0inFVres_stack_7->SetBinContent(9,63.14361);
   hNCpi0inFVres_stack_7->SetBinContent(10,60.07705);
   hNCpi0inFVres_stack_7->SetBinContent(11,71.54671);
   hNCpi0inFVres_stack_7->SetBinContent(12,64.01994);
   hNCpi0inFVres_stack_7->SetBinContent(13,65.59468);
   hNCpi0inFVres_stack_7->SetBinContent(14,69.2144);
   hNCpi0inFVres_stack_7->SetBinContent(15,62.55999);
   hNCpi0inFVres_stack_7->SetBinContent(16,67.66774);
   hNCpi0inFVres_stack_7->SetBinContent(17,70.09805);
   hNCpi0inFVres_stack_7->SetBinContent(18,62.39542);
   hNCpi0inFVres_stack_7->SetBinContent(19,68.16782);
   hNCpi0inFVres_stack_7->SetBinContent(20,64.38);
   hNCpi0inFVres_stack_7->SetBinContent(21,67.63089);
   hNCpi0inFVres_stack_7->SetBinContent(22,68.53033);
   hNCpi0inFVres_stack_7->SetBinContent(23,56.68523);
   hNCpi0inFVres_stack_7->SetBinContent(24,51.20251);
   hNCpi0inFVres_stack_7->SetBinContent(25,37.76365);
   hNCpi0inFVres_stack_7->SetBinContent(26,10.58477);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.654822);
   hNCpi0inFVres_stack_7->SetBinError(0,0.1974492);
   hNCpi0inFVres_stack_7->SetBinError(1,1.147392);
   hNCpi0inFVres_stack_7->SetBinError(2,1.930333);
   hNCpi0inFVres_stack_7->SetBinError(3,2.174967);
   hNCpi0inFVres_stack_7->SetBinError(4,2.161668);
   hNCpi0inFVres_stack_7->SetBinError(5,2.473608);
   hNCpi0inFVres_stack_7->SetBinError(6,2.619171);
   hNCpi0inFVres_stack_7->SetBinError(7,2.410749);
   hNCpi0inFVres_stack_7->SetBinError(8,2.705907);
   hNCpi0inFVres_stack_7->SetBinError(9,2.60134);
   hNCpi0inFVres_stack_7->SetBinError(10,2.436989);
   hNCpi0inFVres_stack_7->SetBinError(11,2.843192);
   hNCpi0inFVres_stack_7->SetBinError(12,2.5659);
   hNCpi0inFVres_stack_7->SetBinError(13,2.705042);
   hNCpi0inFVres_stack_7->SetBinError(14,2.790874);
   hNCpi0inFVres_stack_7->SetBinError(15,2.61314);
   hNCpi0inFVres_stack_7->SetBinError(16,2.694128);
   hNCpi0inFVres_stack_7->SetBinError(17,2.783251);
   hNCpi0inFVres_stack_7->SetBinError(18,2.526487);
   hNCpi0inFVres_stack_7->SetBinError(19,2.78685);
   hNCpi0inFVres_stack_7->SetBinError(20,2.621077);
   hNCpi0inFVres_stack_7->SetBinError(21,2.750428);
   hNCpi0inFVres_stack_7->SetBinError(22,2.76881);
   hNCpi0inFVres_stack_7->SetBinError(23,2.456556);
   hNCpi0inFVres_stack_7->SetBinError(24,2.304418);
   hNCpi0inFVres_stack_7->SetBinError(25,2.060861);
   hNCpi0inFVres_stack_7->SetBinError(26,1.076);
   hNCpi0inFVres_stack_7->SetBinError(27,0.267003);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.579594);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.441436);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.81817);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.69355);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.908508);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.64789);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.01606);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.86111);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.72718);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.03159);
   hNCpi0inFVdis_stack_8->SetBinContent(11,14.84835);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.14585);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.22018);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.36639);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.49111);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.75782);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.05741);
   hNCpi0inFVdis_stack_8->SetBinContent(18,11.97995);
   hNCpi0inFVdis_stack_8->SetBinContent(19,13.59333);
   hNCpi0inFVdis_stack_8->SetBinContent(20,14.63593);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.82549);
   hNCpi0inFVdis_stack_8->SetBinContent(22,12.65054);
   hNCpi0inFVdis_stack_8->SetBinContent(23,12.96624);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.48696);
   hNCpi0inFVdis_stack_8->SetBinContent(25,8.841852);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.965794);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4516762);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.805048);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8799638);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.087245);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9167531);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.163672);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.075789);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.036823);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.08808);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.131021);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.30638);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.108311);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.227955);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.135143);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.159763);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.148353);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.064179);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.172171);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.21689);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.258659);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.115981);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.140247);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.173691);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.092958);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.027681);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.4323036);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.04832419);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(1,8.257955);
   hCCpi0inFV_stack_10->SetBinContent(2,14.97828);
   hCCpi0inFV_stack_10->SetBinContent(3,16.83427);
   hCCpi0inFV_stack_10->SetBinContent(4,16.97091);
   hCCpi0inFV_stack_10->SetBinContent(5,15.00328);
   hCCpi0inFV_stack_10->SetBinContent(6,16.78326);
   hCCpi0inFV_stack_10->SetBinContent(7,16.85692);
   hCCpi0inFV_stack_10->SetBinContent(8,21.4062);
   hCCpi0inFV_stack_10->SetBinContent(9,19.24485);
   hCCpi0inFV_stack_10->SetBinContent(10,19.04957);
   hCCpi0inFV_stack_10->SetBinContent(11,16.9503);
   hCCpi0inFV_stack_10->SetBinContent(12,19.16645);
   hCCpi0inFV_stack_10->SetBinContent(13,21.11198);
   hCCpi0inFV_stack_10->SetBinContent(14,22.68325);
   hCCpi0inFV_stack_10->SetBinContent(15,17.53697);
   hCCpi0inFV_stack_10->SetBinContent(16,21.82239);
   hCCpi0inFV_stack_10->SetBinContent(17,22.85672);
   hCCpi0inFV_stack_10->SetBinContent(18,27.44955);
   hCCpi0inFV_stack_10->SetBinContent(19,23.68545);
   hCCpi0inFV_stack_10->SetBinContent(20,26.81166);
   hCCpi0inFV_stack_10->SetBinContent(21,27.75441);
   hCCpi0inFV_stack_10->SetBinContent(22,23.45144);
   hCCpi0inFV_stack_10->SetBinContent(23,24.38743);
   hCCpi0inFV_stack_10->SetBinContent(24,25.679);
   hCCpi0inFV_stack_10->SetBinContent(25,19.23014);
   hCCpi0inFV_stack_10->SetBinContent(26,9.536283);
   hCCpi0inFV_stack_10->SetBinContent(27,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(0,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,1.469574);
   hCCpi0inFV_stack_10->SetBinError(2,1.946653);
   hCCpi0inFV_stack_10->SetBinError(3,2.091362);
   hCCpi0inFV_stack_10->SetBinError(4,2.076519);
   hCCpi0inFV_stack_10->SetBinError(5,1.943213);
   hCCpi0inFV_stack_10->SetBinError(6,1.982346);
   hCCpi0inFV_stack_10->SetBinError(7,2.024934);
   hCCpi0inFV_stack_10->SetBinError(8,2.341015);
   hCCpi0inFV_stack_10->SetBinError(9,2.193573);
   hCCpi0inFV_stack_10->SetBinError(10,2.207833);
   hCCpi0inFV_stack_10->SetBinError(11,2.058107);
   hCCpi0inFV_stack_10->SetBinError(12,2.228367);
   hCCpi0inFV_stack_10->SetBinError(13,2.305947);
   hCCpi0inFV_stack_10->SetBinError(14,2.43408);
   hCCpi0inFV_stack_10->SetBinError(15,2.133804);
   hCCpi0inFV_stack_10->SetBinError(16,2.285893);
   hCCpi0inFV_stack_10->SetBinError(17,2.387464);
   hCCpi0inFV_stack_10->SetBinError(18,2.643572);
   hCCpi0inFV_stack_10->SetBinError(19,2.427963);
   hCCpi0inFV_stack_10->SetBinError(20,2.65872);
   hCCpi0inFV_stack_10->SetBinError(21,2.630814);
   hCCpi0inFV_stack_10->SetBinError(22,2.443004);
   hCCpi0inFV_stack_10->SetBinError(23,2.476317);
   hCCpi0inFV_stack_10->SetBinError(24,2.49247);
   hCCpi0inFV_stack_10->SetBinError(25,2.214616);
   hCCpi0inFV_stack_10->SetBinError(26,1.603628);
   hCCpi0inFV_stack_10->SetBinError(27,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,3.75487);
   hNCinFV_stack_11->SetBinContent(2,9.339585);
   hNCinFV_stack_11->SetBinContent(3,7.320868);
   hNCinFV_stack_11->SetBinContent(4,10.51819);
   hNCinFV_stack_11->SetBinContent(5,11.07405);
   hNCinFV_stack_11->SetBinContent(6,10.60671);
   hNCinFV_stack_11->SetBinContent(7,10.55683);
   hNCinFV_stack_11->SetBinContent(8,12.65054);
   hNCinFV_stack_11->SetBinContent(9,12.84449);
   hNCinFV_stack_11->SetBinContent(10,10.01487);
   hNCinFV_stack_11->SetBinContent(11,11.49054);
   hNCinFV_stack_11->SetBinContent(12,12.51107);
   hNCinFV_stack_11->SetBinContent(13,15.02563);
   hNCinFV_stack_11->SetBinContent(14,12.06209);
   hNCinFV_stack_11->SetBinContent(15,8.946155);
   hNCinFV_stack_11->SetBinContent(16,11.33186);
   hNCinFV_stack_11->SetBinContent(17,11.44344);
   hNCinFV_stack_11->SetBinContent(18,11.97065);
   hNCinFV_stack_11->SetBinContent(19,11.04494);
   hNCinFV_stack_11->SetBinContent(20,12.79908);
   hNCinFV_stack_11->SetBinContent(21,12.46904);
   hNCinFV_stack_11->SetBinContent(22,11.00183);
   hNCinFV_stack_11->SetBinContent(23,15.61855);
   hNCinFV_stack_11->SetBinContent(24,9.149632);
   hNCinFV_stack_11->SetBinContent(25,9.85849);
   hNCinFV_stack_11->SetBinContent(26,2.105544);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,1.039038);
   hNCinFV_stack_11->SetBinError(2,1.507702);
   hNCinFV_stack_11->SetBinError(3,1.387511);
   hNCinFV_stack_11->SetBinError(4,1.58262);
   hNCinFV_stack_11->SetBinError(5,1.733241);
   hNCinFV_stack_11->SetBinError(6,1.618448);
   hNCinFV_stack_11->SetBinError(7,1.630652);
   hNCinFV_stack_11->SetBinError(8,1.765332);
   hNCinFV_stack_11->SetBinError(9,1.830955);
   hNCinFV_stack_11->SetBinError(10,1.581968);
   hNCinFV_stack_11->SetBinError(11,1.700636);
   hNCinFV_stack_11->SetBinError(12,1.799812);
   hNCinFV_stack_11->SetBinError(13,2.030375);
   hNCinFV_stack_11->SetBinError(14,1.73233);
   hNCinFV_stack_11->SetBinError(15,1.481814);
   hNCinFV_stack_11->SetBinError(16,1.67606);
   hNCinFV_stack_11->SetBinError(17,1.653636);
   hNCinFV_stack_11->SetBinError(18,1.71118);
   hNCinFV_stack_11->SetBinError(19,1.629457);
   hNCinFV_stack_11->SetBinError(20,1.78757);
   hNCinFV_stack_11->SetBinError(21,1.756035);
   hNCinFV_stack_11->SetBinError(22,1.642386);
   hNCinFV_stack_11->SetBinError(23,2.010276);
   hNCinFV_stack_11->SetBinError(24,1.4957);
   hNCinFV_stack_11->SetBinError(25,1.61831);
   hNCinFV_stack_11->SetBinError(26,0.6797106);
   hNCinFV_stack_11->SetBinError(27,0.3401776);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,3.914433);
   hnumuCCinFV_stack_12->SetBinContent(2,7.498828);
   hnumuCCinFV_stack_12->SetBinContent(3,6.67641);
   hnumuCCinFV_stack_12->SetBinContent(4,9.831228);
   hnumuCCinFV_stack_12->SetBinContent(5,9.474745);
   hnumuCCinFV_stack_12->SetBinContent(6,7.045784);
   hnumuCCinFV_stack_12->SetBinContent(7,11.10653);
   hnumuCCinFV_stack_12->SetBinContent(8,10.86979);
   hnumuCCinFV_stack_12->SetBinContent(9,11.47017);
   hnumuCCinFV_stack_12->SetBinContent(10,13.67126);
   hnumuCCinFV_stack_12->SetBinContent(11,17.92974);
   hnumuCCinFV_stack_12->SetBinContent(12,17.56715);
   hnumuCCinFV_stack_12->SetBinContent(13,18.96851);
   hnumuCCinFV_stack_12->SetBinContent(14,19.37099);
   hnumuCCinFV_stack_12->SetBinContent(15,17.10545);
   hnumuCCinFV_stack_12->SetBinContent(16,16.17309);
   hnumuCCinFV_stack_12->SetBinContent(17,18.74968);
   hnumuCCinFV_stack_12->SetBinContent(18,18.44311);
   hnumuCCinFV_stack_12->SetBinContent(19,26.5006);
   hnumuCCinFV_stack_12->SetBinContent(20,19.51641);
   hnumuCCinFV_stack_12->SetBinContent(21,21.19391);
   hnumuCCinFV_stack_12->SetBinContent(22,20.09269);
   hnumuCCinFV_stack_12->SetBinContent(23,19.90459);
   hnumuCCinFV_stack_12->SetBinContent(24,20.9067);
   hnumuCCinFV_stack_12->SetBinContent(25,16.34433);
   hnumuCCinFV_stack_12->SetBinContent(26,6.112329);
   hnumuCCinFV_stack_12->SetBinContent(27,0.2668606);
   hnumuCCinFV_stack_12->SetBinError(1,1.0526);
   hnumuCCinFV_stack_12->SetBinError(2,1.339588);
   hnumuCCinFV_stack_12->SetBinError(3,1.311299);
   hnumuCCinFV_stack_12->SetBinError(4,1.627264);
   hnumuCCinFV_stack_12->SetBinError(5,1.849271);
   hnumuCCinFV_stack_12->SetBinError(6,1.380572);
   hnumuCCinFV_stack_12->SetBinError(7,1.91271);
   hnumuCCinFV_stack_12->SetBinError(8,1.890701);
   hnumuCCinFV_stack_12->SetBinError(9,2.096534);
   hnumuCCinFV_stack_12->SetBinError(10,2.083474);
   hnumuCCinFV_stack_12->SetBinError(11,2.377441);
   hnumuCCinFV_stack_12->SetBinError(12,2.422788);
   hnumuCCinFV_stack_12->SetBinError(13,2.427477);
   hnumuCCinFV_stack_12->SetBinError(14,2.73205);
   hnumuCCinFV_stack_12->SetBinError(15,2.239418);
   hnumuCCinFV_stack_12->SetBinError(16,2.552181);
   hnumuCCinFV_stack_12->SetBinError(17,2.533968);
   hnumuCCinFV_stack_12->SetBinError(18,2.265943);
   hnumuCCinFV_stack_12->SetBinError(19,3.253722);
   hnumuCCinFV_stack_12->SetBinError(20,2.532405);
   hnumuCCinFV_stack_12->SetBinError(21,2.459342);
   hnumuCCinFV_stack_12->SetBinError(22,2.556976);
   hnumuCCinFV_stack_12->SetBinError(23,2.437761);
   hnumuCCinFV_stack_12->SetBinError(24,2.757533);
   hnumuCCinFV_stack_12->SetBinError(25,3.180521);
   hnumuCCinFV_stack_12->SetBinError(26,1.76483);
   hnumuCCinFV_stack_12->SetBinError(27,0.2668606);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.6210482);
   hnueCCinFV_stack_13->SetBinContent(4,0.6419483);
   hnueCCinFV_stack_13->SetBinContent(5,0.4424184);
   hnueCCinFV_stack_13->SetBinContent(6,0.4647761);
   hnueCCinFV_stack_13->SetBinContent(7,0.4057753);
   hnueCCinFV_stack_13->SetBinContent(8,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(9,0.5888425);
   hnueCCinFV_stack_13->SetBinContent(10,1.776738);
   hnueCCinFV_stack_13->SetBinContent(11,0.8380547);
   hnueCCinFV_stack_13->SetBinContent(12,1.30886);
   hnueCCinFV_stack_13->SetBinContent(13,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.9864399);
   hnueCCinFV_stack_13->SetBinContent(17,0.9047992);
   hnueCCinFV_stack_13->SetBinContent(18,1.440728);
   hnueCCinFV_stack_13->SetBinContent(19,1.137711);
   hnueCCinFV_stack_13->SetBinContent(20,1.020533);
   hnueCCinFV_stack_13->SetBinContent(21,0.7820846);
   hnueCCinFV_stack_13->SetBinContent(22,0.7298748);
   hnueCCinFV_stack_13->SetBinContent(23,3.338256);
   hnueCCinFV_stack_13->SetBinContent(24,0.6263665);
   hnueCCinFV_stack_13->SetBinContent(25,0.9528184);
   hnueCCinFV_stack_13->SetBinError(1,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.4459531);
   hnueCCinFV_stack_13->SetBinError(4,0.373277);
   hnueCCinFV_stack_13->SetBinError(5,0.3147324);
   hnueCCinFV_stack_13->SetBinError(6,0.3293567);
   hnueCCinFV_stack_13->SetBinError(7,0.2871419);
   hnueCCinFV_stack_13->SetBinError(8,0.2538659);
   hnueCCinFV_stack_13->SetBinError(9,0.4213728);
   hnueCCinFV_stack_13->SetBinError(10,1.240334);
   hnueCCinFV_stack_13->SetBinError(11,0.4200657);
   hnueCCinFV_stack_13->SetBinError(12,0.613987);
   hnueCCinFV_stack_13->SetBinError(13,0.3387718);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.6560483);
   hnueCCinFV_stack_13->SetBinError(17,0.4716153);
   hnueCCinFV_stack_13->SetBinError(18,0.6114525);
   hnueCCinFV_stack_13->SetBinError(19,0.5970042);
   hnueCCinFV_stack_13->SetBinError(20,0.5892049);
   hnueCCinFV_stack_13->SetBinError(21,0.463181);
   hnueCCinFV_stack_13->SetBinError(22,0.4417782);
   hnueCCinFV_stack_13->SetBinError(23,1.740761);
   hnueCCinFV_stack_13->SetBinError(24,0.3630167);
   hnueCCinFV_stack_13->SetBinError(25,0.4910883);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__14->SetBinContent(0,1.430254);
   hmcerror__14->SetBinContent(1,70.67812);
   hmcerror__14->SetBinContent(2,83.92699);
   hmcerror__14->SetBinContent(3,100.5646);
   hmcerror__14->SetBinContent(4,112.4283);
   hmcerror__14->SetBinContent(5,122.1624);
   hmcerror__14->SetBinContent(6,125.6037);
   hmcerror__14->SetBinContent(7,122.4967);
   hmcerror__14->SetBinContent(8,136.2582);
   hmcerror__14->SetBinContent(9,136.8506);
   hmcerror__14->SetBinContent(10,138.8252);
   hmcerror__14->SetBinContent(11,156.1018);
   hmcerror__14->SetBinContent(12,148.5936);
   hmcerror__14->SetBinContent(13,158.0646);
   hmcerror__14->SetBinContent(14,158.0291);
   hmcerror__14->SetBinContent(15,138.9048);
   hmcerror__14->SetBinContent(16,152.8663);
   hmcerror__14->SetBinContent(17,163.3605);
   hmcerror__14->SetBinContent(18,159.7574);
   hmcerror__14->SetBinContent(19,168.5452);
   hmcerror__14->SetBinContent(20,164.9714);
   hmcerror__14->SetBinContent(21,175.8922);
   hmcerror__14->SetBinContent(22,162.6122);
   hmcerror__14->SetBinContent(23,169.994);
   hmcerror__14->SetBinContent(24,141.877);
   hmcerror__14->SetBinContent(25,120.3906);
   hmcerror__14->SetBinContent(26,68.94319);
   hmcerror__14->SetBinContent(27,3.577243);
   hmcerror__14->SetBinError(0,0.5548118);
   hmcerror__14->SetBinError(1,23.85822);
   hmcerror__14->SetBinError(2,35.22683);
   hmcerror__14->SetBinError(3,38.67195);
   hmcerror__14->SetBinError(4,42.10482);
   hmcerror__14->SetBinError(5,51.32475);
   hmcerror__14->SetBinError(6,49.12206);
   hmcerror__14->SetBinError(7,46.98617);
   hmcerror__14->SetBinError(8,54.50039);
   hmcerror__14->SetBinError(9,53.4363);
   hmcerror__14->SetBinError(10,49.98537);
   hmcerror__14->SetBinError(11,55.41035);
   hmcerror__14->SetBinError(12,60.94821);
   hmcerror__14->SetBinError(13,60.08842);
   hmcerror__14->SetBinError(14,53.42727);
   hmcerror__14->SetBinError(15,53.19064);
   hmcerror__14->SetBinError(16,54.13265);
   hmcerror__14->SetBinError(17,53.23607);
   hmcerror__14->SetBinError(18,51.5748);
   hmcerror__14->SetBinError(19,54.39857);
   hmcerror__14->SetBinError(20,56.70352);
   hmcerror__14->SetBinError(21,61.64842);
   hmcerror__14->SetBinError(22,53.17993);
   hmcerror__14->SetBinError(23,53.64269);
   hmcerror__14->SetBinError(24,44.98162);
   hmcerror__14->SetBinError(25,41.93672);
   hmcerror__14->SetBinError(26,23.73897);
   hmcerror__14->SetBinError(27,5.891471);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[26] = {
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
   Double_t _fy3017[26] = {
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
   Double_t _felx3017[26] = {
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
   Double_t _fely3017[26] = {
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
   Double_t _fehx3017[26] = {
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
   Double_t _fehy3017[26] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,286);
   Graph_Graph3017->SetMinimum(27.62533);
   Graph_Graph3017->SetMaximum(154.0222);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.73#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.8/26","");
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

   ci = 1486;
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

   ci = 1487;
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

   ci = 1488;
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

   ci = 1489;
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

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1462.8","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  283.6","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.5","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 277.5","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.4","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1498;
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
   canvas5->cd();
  
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
   
   Double_t _fx3018[26] = {
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
   Double_t _fy3018[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3018[26] = {
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
   Double_t _fely3018[26] = {
   0.3375616,
   0.4197318,
   0.3845482,
   0.3745036,
   0.4201355,
   0.3910878,
   0.3835709,
   0.3999788,
   0.3904719,
   0.3600598,
   0.3549629,
   0.4101672,
   0.380151,
   0.3380851,
   0.3829288,
   0.3541175,
   0.3258808,
   0.322832,
   0.3227536,
   0.3437174,
   0.3504898,
   0.3270354,
   0.3155564,
   0.3170466,
   0.3483389,
   0.3443265};
   Double_t _fehx3018[26] = {
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
   Double_t _fehy3018[26] = {
   0.3375616,
   0.4197318,
   0.3845482,
   0.3745036,
   0.4201355,
   0.3910878,
   0.3835709,
   0.3999788,
   0.3904719,
   0.3600598,
   0.3549629,
   0.4101672,
   0.380151,
   0.3380851,
   0.3829288,
   0.3541175,
   0.3258808,
   0.322832,
   0.3227536,
   0.3437174,
   0.3504898,
   0.3270354,
   0.3155564,
   0.3170466,
   0.3483389,
   0.3443265};
   grae = new TGraphAsymmErrors(26,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,286);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[26] = {
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
   Double_t _fy3019[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3019[26] = {
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
   Double_t _fely3019[26] = {
   0.2523961,
   0.3231691,
   0.341836,
   0.3136035,
   0.3639743,
   0.3675632,
   0.3463654,
   0.3594066,
   0.3418721,
   0.3248172,
   0.3315602,
   0.3261553,
   0.3048806,
   0.3210793,
   0.3333165,
   0.3138848,
   0.3043707,
   0.300223,
   0.3038397,
   0.3054824,
   0.2868782,
   0.3018168,
   0.2747854,
   0.276163,
   0.2600439,
   0.215792};
   Double_t _fehx3019[26] = {
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
   Double_t _fehy3019[26] = {
   0.2523961,
   0.3231691,
   0.341836,
   0.3136035,
   0.3639743,
   0.3675632,
   0.3463654,
   0.3594066,
   0.3418721,
   0.3248172,
   0.3315602,
   0.3261553,
   0.3048806,
   0.3210793,
   0.3333165,
   0.3138848,
   0.3043707,
   0.300223,
   0.3038397,
   0.3054824,
   0.2868782,
   0.3018168,
   0.2747854,
   0.276163,
   0.2600439,
   0.215792};
   grae = new TGraphAsymmErrors(26,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,286);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[26] = {
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
   Double_t _fy3020[26] = {
   0.7640272,
   0.5361803,
   0.9347224,
   0.8094045,
   0.6384945,
   0.6846935,
   0.8326755,
   0.6678497,
   0.8403327,
   0.8211767,
   0.7943533,
   0.693166,
   0.7528568,
   0.632795,
   0.8639011,
   0.7719161,
   0.7345715,
   0.7636579,
   0.7297746,
   0.6667824,
   0.7504597,
   0.7502514,
   0.5823736,
   0.690739,
   0.7392605,
   0.667216};
   Double_t _felx3020[26] = {
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
   Double_t _fely3020[26] = {
   0.1058107,
   0.08151847,
   0.09762181,
   0.08593652,
   0.0733139,
   0.07481231,
   0.08244716,
   0.0709073,
   0.07836143,
   0.07691024,
   0.07133503,
   0.06829968,
   0.06901427,
   0.06404644,
   0.07886302,
   0.07106064,
   0.06705689,
   0.06913834,
   0.06580156,
   0.06357521,
   0.06531913,
   0.06792457,
   0.05924446,
   0.07063088,
   0.07937996,
   0.1003043};
   Double_t _fehx3020[26] = {
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
   Double_t _fehy3020[26] = {
   0.1029314,
   0.07908063,
   0.09562011,
   0.08414249,
   0.07166037,
   0.07320727,
   0.08244716,
   0.06942702,
   0.07836143,
   0.07691024,
   0.07133503,
   0.06829968,
   0.06901427,
   0.06277326,
   0.07886302,
   0.07106064,
   0.06705689,
   0.06913834,
   0.06580156,
   0.06357521,
   0.06531913,
   0.06792457,
   0.05806089,
   0.06921487,
   0.07770707,
   0.09733811};
   grae = new TGraphAsymmErrors(26,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,286);
   Graph_Graph3020->SetMinimum(0.3970938);
   Graph_Graph3020->SetMaximum(1.087911);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_reco_nuvtxX_all",26,0,260);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
