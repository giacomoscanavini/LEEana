#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Fri Oct 21 23:07:16 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-40,-2.448051,293.3333,270.7029);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__19->SetBinContent(0,0.6259439);
   hmc__19->SetBinContent(1,28.7443);
   hmc__19->SetBinContent(2,42.55082);
   hmc__19->SetBinContent(3,59.90779);
   hmc__19->SetBinContent(4,75.77228);
   hmc__19->SetBinContent(5,83.81198);
   hmc__19->SetBinContent(6,86.89085);
   hmc__19->SetBinContent(7,86.23674);
   hmc__19->SetBinContent(8,98.57541);
   hmc__19->SetBinContent(9,100.5878);
   hmc__19->SetBinContent(10,96.95083);
   hmc__19->SetBinContent(11,117.1035);
   hmc__19->SetBinContent(12,105.0135);
   hmc__19->SetBinContent(13,115.8788);
   hmc__19->SetBinContent(14,112.4584);
   hmc__19->SetBinContent(15,100.2052);
   hmc__19->SetBinContent(16,107.2189);
   hmc__19->SetBinContent(17,116.8142);
   hmc__19->SetBinContent(18,112.9458);
   hmc__19->SetBinContent(19,122.4025);
   hmc__19->SetBinContent(20,118.2237);
   hmc__19->SetBinContent(21,121.393);
   hmc__19->SetBinContent(22,103.2508);
   hmc__19->SetBinContent(23,102.0349);
   hmc__19->SetBinContent(24,80.8242);
   hmc__19->SetBinContent(25,62.99892);
   hmc__19->SetBinContent(26,27.4977);
   hmc__19->SetBinContent(27,2.138124);
   hmc__19->SetBinError(0,0.3485054);
   hmc__19->SetBinError(1,12.48048);
   hmc__19->SetBinError(2,21.01014);
   hmc__19->SetBinError(3,26.11312);
   hmc__19->SetBinError(4,29.84416);
   hmc__19->SetBinError(5,38.48616);
   hmc__19->SetBinError(6,36.26022);
   hmc__19->SetBinError(7,36.12746);
   hmc__19->SetBinError(8,43.13768);
   hmc__19->SetBinError(9,41.20721);
   hmc__19->SetBinError(10,37.64367);
   hmc__19->SetBinError(11,41.7831);
   hmc__19->SetBinError(12,44.78843);
   hmc__19->SetBinError(13,41.71959);
   hmc__19->SetBinError(14,41.46649);
   hmc__19->SetBinError(15,43.5331);
   hmc__19->SetBinError(16,43.40132);
   hmc__19->SetBinError(17,41.17956);
   hmc__19->SetBinError(18,40.5385);
   hmc__19->SetBinError(19,41.53233);
   hmc__19->SetBinError(20,42.14962);
   hmc__19->SetBinError(21,42.4715);
   hmc__19->SetBinError(22,39.42547);
   hmc__19->SetBinError(23,36.93837);
   hmc__19->SetBinError(24,31.60841);
   hmc__19->SetBinError(25,24.0732);
   hmc__19->SetBinError(26,14.50972);
   hmc__19->SetBinError(27,3.963446);
   hmc__19->SetMinimum(-2.448051);
   hmc__19->SetMaximum(257.0453);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",26,0,260);
   hs7_stack_7->SetMinimum(-2.083393e-08);
   hs7_stack_7->SetMaximum(128.5227);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(1,1.484405);
   hbadmatch_stack_1->SetBinContent(2,0.1967154);
   hbadmatch_stack_1->SetBinContent(3,1.048682);
   hbadmatch_stack_1->SetBinContent(4,0.4716938);
   hbadmatch_stack_1->SetBinContent(5,2.928446);
   hbadmatch_stack_1->SetBinContent(6,1.104085);
   hbadmatch_stack_1->SetBinContent(7,1.823401);
   hbadmatch_stack_1->SetBinContent(8,1.302059);
   hbadmatch_stack_1->SetBinContent(9,2.596792);
   hbadmatch_stack_1->SetBinContent(10,1.866951);
   hbadmatch_stack_1->SetBinContent(11,2.697227);
   hbadmatch_stack_1->SetBinContent(12,2.869482);
   hbadmatch_stack_1->SetBinContent(13,4.118744);
   hbadmatch_stack_1->SetBinContent(14,3.010226);
   hbadmatch_stack_1->SetBinContent(15,1.834941);
   hbadmatch_stack_1->SetBinContent(16,1.311317);
   hbadmatch_stack_1->SetBinContent(17,3.276806);
   hbadmatch_stack_1->SetBinContent(18,3.38808);
   hbadmatch_stack_1->SetBinContent(19,3.834384);
   hbadmatch_stack_1->SetBinContent(20,2.831323);
   hbadmatch_stack_1->SetBinContent(21,1.466701);
   hbadmatch_stack_1->SetBinContent(22,2.357375);
   hbadmatch_stack_1->SetBinContent(23,2.837695);
   hbadmatch_stack_1->SetBinContent(24,1.701622);
   hbadmatch_stack_1->SetBinContent(25,1.728732);
   hbadmatch_stack_1->SetBinContent(26,0.5456259);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinError(1,0.6271263);
   hbadmatch_stack_1->SetBinError(2,0.1967154);
   hbadmatch_stack_1->SetBinError(3,0.4500836);
   hbadmatch_stack_1->SetBinError(4,0.3647154);
   hbadmatch_stack_1->SetBinError(5,1.991238);
   hbadmatch_stack_1->SetBinError(6,0.454037);
   hbadmatch_stack_1->SetBinError(7,0.6282556);
   hbadmatch_stack_1->SetBinError(8,0.5835995);
   hbadmatch_stack_1->SetBinError(9,1.07315);
   hbadmatch_stack_1->SetBinError(10,0.7170185);
   hbadmatch_stack_1->SetBinError(11,1.002225);
   hbadmatch_stack_1->SetBinError(12,0.8963078);
   hbadmatch_stack_1->SetBinError(13,1.095637);
   hbadmatch_stack_1->SetBinError(14,0.9031674);
   hbadmatch_stack_1->SetBinError(15,0.7212498);
   hbadmatch_stack_1->SetBinError(16,0.6790059);
   hbadmatch_stack_1->SetBinError(17,1.012593);
   hbadmatch_stack_1->SetBinError(18,0.94502);
   hbadmatch_stack_1->SetBinError(19,1.528298);
   hbadmatch_stack_1->SetBinError(20,0.8426135);
   hbadmatch_stack_1->SetBinError(21,0.6008557);
   hbadmatch_stack_1->SetBinError(22,0.8441457);
   hbadmatch_stack_1->SetBinError(23,0.8131269);
   hbadmatch_stack_1->SetBinError(24,0.6227622);
   hbadmatch_stack_1->SetBinError(25,0.61422);
   hbadmatch_stack_1->SetBinError(26,0.3974038);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(1,0.973192);
   hext_stack_2->SetBinContent(2,0.7309963);
   hext_stack_2->SetBinContent(3,2.752401);
   hext_stack_2->SetBinContent(4,6.616447);
   hext_stack_2->SetBinContent(5,6.132056);
   hext_stack_2->SetBinContent(6,4.710375);
   hext_stack_2->SetBinContent(7,5.601365);
   hext_stack_2->SetBinContent(8,2.345802);
   hext_stack_2->SetBinContent(9,5.269787);
   hext_stack_2->SetBinContent(10,9.746725);
   hext_stack_2->SetBinContent(11,12.32754);
   hext_stack_2->SetBinContent(12,7.511847);
   hext_stack_2->SetBinContent(13,8.071259);
   hext_stack_2->SetBinContent(14,3.972198);
   hext_stack_2->SetBinContent(15,6.553016);
   hext_stack_2->SetBinContent(16,10.00769);
   hext_stack_2->SetBinContent(17,10.82089);
   hext_stack_2->SetBinContent(18,7.537797);
   hext_stack_2->SetBinContent(19,9.526072);
   hext_stack_2->SetBinContent(20,11.77531);
   hext_stack_2->SetBinContent(21,18.54898);
   hext_stack_2->SetBinContent(22,7.67625);
   hext_stack_2->SetBinContent(23,12.36067);
   hext_stack_2->SetBinContent(24,5.687976);
   hext_stack_2->SetBinContent(25,6.012373);
   hext_stack_2->SetBinContent(26,5.158864);
   hext_stack_2->SetBinError(1,0.5618727);
   hext_stack_2->SetBinError(2,0.5201503);
   hext_stack_2->SetBinError(3,1.07854);
   hext_stack_2->SetBinError(4,1.797459);
   hext_stack_2->SetBinError(5,1.772165);
   hext_stack_2->SetBinError(6,1.314751);
   hext_stack_2->SetBinError(7,1.40861);
   hext_stack_2->SetBinError(8,0.9989624);
   hext_stack_2->SetBinError(9,1.442273);
   hext_stack_2->SetBinError(10,2.316082);
   hext_stack_2->SetBinError(11,2.570702);
   hext_stack_2->SetBinError(12,1.903048);
   hext_stack_2->SetBinError(13,1.993282);
   hext_stack_2->SetBinError(14,1.288106);
   hext_stack_2->SetBinError(15,1.703963);
   hext_stack_2->SetBinError(16,2.26762);
   hext_stack_2->SetBinError(17,2.33939);
   hext_stack_2->SetBinError(18,1.7757);
   hext_stack_2->SetBinError(19,2.171517);
   hext_stack_2->SetBinError(20,2.460838);
   hext_stack_2->SetBinError(21,3.099671);
   hext_stack_2->SetBinError(22,1.934366);
   hext_stack_2->SetBinError(23,2.43697);
   hext_stack_2->SetBinError(24,1.476277);
   hext_stack_2->SetBinError(25,1.511499);
   hext_stack_2->SetBinError(26,1.680734);
   hext_stack_2->SetEntries(428);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,0.4048706);
   hdirt_stack_3->SetBinContent(3,0.9987812);
   hdirt_stack_3->SetBinContent(4,0.1753185);
   hdirt_stack_3->SetBinContent(5,1.586995);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(9,0.7043164);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.2605212);
   hdirt_stack_3->SetBinContent(13,0.3381872);
   hdirt_stack_3->SetBinContent(14,0.2516114);
   hdirt_stack_3->SetBinContent(16,0.9600414);
   hdirt_stack_3->SetBinContent(17,0.6763744);
   hdirt_stack_3->SetBinContent(18,0.4377912);
   hdirt_stack_3->SetBinContent(19,0.4001057);
   hdirt_stack_3->SetBinContent(21,1.033342);
   hdirt_stack_3->SetBinContent(22,0.3569671);
   hdirt_stack_3->SetBinContent(23,1.257959);
   hdirt_stack_3->SetBinContent(24,0.4618821);
   hdirt_stack_3->SetBinContent(25,0.4950385);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.2872316);
   hdirt_stack_3->SetBinError(3,0.5311599);
   hdirt_stack_3->SetBinError(4,0.1753185);
   hdirt_stack_3->SetBinError(5,1.0046);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(9,0.428047);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.2605212);
   hdirt_stack_3->SetBinError(13,0.3381872);
   hdirt_stack_3->SetBinError(14,0.2516114);
   hdirt_stack_3->SetBinError(16,0.4360368);
   hdirt_stack_3->SetBinError(17,0.4782689);
   hdirt_stack_3->SetBinError(18,0.3095651);
   hdirt_stack_3->SetBinError(19,0.2961852);
   hdirt_stack_3->SetBinError(21,0.5438016);
   hdirt_stack_3->SetBinError(22,0.258803);
   hdirt_stack_3->SetBinError(23,0.6170997);
   hdirt_stack_3->SetBinError(24,0.267417);
   hdirt_stack_3->SetBinError(25,0.2933304);
   hdirt_stack_3->SetEntries(50);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,0.451345);
   houtFV_stack_4->SetBinContent(1,11.03002);
   houtFV_stack_4->SetBinContent(2,3.203942);
   houtFV_stack_4->SetBinContent(3,3.074155);
   houtFV_stack_4->SetBinContent(4,2.138153);
   houtFV_stack_4->SetBinContent(5,2.527657);
   houtFV_stack_4->SetBinContent(6,3.253413);
   houtFV_stack_4->SetBinContent(7,2.76896);
   houtFV_stack_4->SetBinContent(8,3.846467);
   houtFV_stack_4->SetBinContent(9,2.234432);
   houtFV_stack_4->SetBinContent(10,2.446914);
   houtFV_stack_4->SetBinContent(11,2.842534);
   houtFV_stack_4->SetBinContent(12,2.188355);
   houtFV_stack_4->SetBinContent(13,2.005853);
   houtFV_stack_4->SetBinContent(14,2.66114);
   houtFV_stack_4->SetBinContent(15,3.706363);
   houtFV_stack_4->SetBinContent(16,2.456332);
   houtFV_stack_4->SetBinContent(17,3.469786);
   houtFV_stack_4->SetBinContent(18,2.634775);
   houtFV_stack_4->SetBinContent(19,3.102877);
   houtFV_stack_4->SetBinContent(20,2.02281);
   houtFV_stack_4->SetBinContent(21,2.784808);
   houtFV_stack_4->SetBinContent(22,1.916863);
   houtFV_stack_4->SetBinContent(23,2.448464);
   houtFV_stack_4->SetBinContent(24,2.212565);
   houtFV_stack_4->SetBinContent(25,4.695779);
   houtFV_stack_4->SetBinContent(26,7.714001);
   houtFV_stack_4->SetBinContent(27,0.9835768);
   houtFV_stack_4->SetBinError(0,0.3220787);
   houtFV_stack_4->SetBinError(1,1.606835);
   houtFV_stack_4->SetBinError(2,0.9463502);
   houtFV_stack_4->SetBinError(3,0.8608051);
   houtFV_stack_4->SetBinError(4,0.7191047);
   houtFV_stack_4->SetBinError(5,0.7129649);
   houtFV_stack_4->SetBinError(6,0.8627172);
   houtFV_stack_4->SetBinError(7,0.7411708);
   houtFV_stack_4->SetBinError(8,0.9639899);
   houtFV_stack_4->SetBinError(9,0.7214836);
   houtFV_stack_4->SetBinError(10,0.743295);
   houtFV_stack_4->SetBinError(11,0.8102133);
   houtFV_stack_4->SetBinError(12,0.7612853);
   houtFV_stack_4->SetBinError(13,0.7357751);
   houtFV_stack_4->SetBinError(14,0.7957182);
   houtFV_stack_4->SetBinError(15,0.9906561);
   houtFV_stack_4->SetBinError(16,0.7775318);
   houtFV_stack_4->SetBinError(17,0.9355996);
   houtFV_stack_4->SetBinError(18,0.8415579);
   houtFV_stack_4->SetBinError(19,0.7999211);
   houtFV_stack_4->SetBinError(20,0.6157927);
   houtFV_stack_4->SetBinError(21,0.8962432);
   houtFV_stack_4->SetBinError(22,0.6751126);
   houtFV_stack_4->SetBinError(23,0.7473665);
   houtFV_stack_4->SetBinError(24,0.6467579);
   houtFV_stack_4->SetBinError(25,1.082355);
   houtFV_stack_4->SetBinError(26,1.442835);
   houtFV_stack_4->SetBinError(27,0.4398689);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05763867);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.06425367);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.06968138);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.314373);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4009035);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.1771287);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.03556623);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1214161);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1249247);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1527339);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2815107);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1056831);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.6644922);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.182898);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.4382001);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2361128);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3130573);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.3227555);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2082682);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.07024993);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.0401208);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04582575);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04150762);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2615932);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2320654);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.148796);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.02893407);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.07214738);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.06337503);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1064585);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1814872);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.05790597);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2691196);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1632145);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1944726);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.09306444);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1668264);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.1478731);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02414102);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.08858551);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.05067948);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.10808);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.09111521);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4637906);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3500555);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2105851);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4316958);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5786688);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5915838);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.000131);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4557459);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4586421);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.21356);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6138932);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.372564);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.9387465);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2519115);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4848928);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2533135);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.8402213);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5064898);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1508572);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4228222);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.5497696);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.3943195);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1353046);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.07633901);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.04764111);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04076728);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1940875);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1597391);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.08568626);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2229896);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1858047);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2132819);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3263631);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1887398);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1359842);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.06822217);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2356358);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2102022);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.28096);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.08273766);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2043121);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.09907405);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3779787);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1708382);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.05892709);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1505059);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2033254);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1856106);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.04808919);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.06649547);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.1478583);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.174169);
   hNCpi0inFVres_stack_7->SetBinContent(2,17.43324);
   hNCpi0inFVres_stack_7->SetBinContent(3,24.32177);
   hNCpi0inFVres_stack_7->SetBinContent(4,27.93456);
   hNCpi0inFVres_stack_7->SetBinContent(5,33.86979);
   hNCpi0inFVres_stack_7->SetBinContent(6,39.3578);
   hNCpi0inFVres_stack_7->SetBinContent(7,34.82035);
   hNCpi0inFVres_stack_7->SetBinContent(8,42.58184);
   hNCpi0inFVres_stack_7->SetBinContent(9,41.38851);
   hNCpi0inFVres_stack_7->SetBinContent(10,39.69074);
   hNCpi0inFVres_stack_7->SetBinContent(11,47.78873);
   hNCpi0inFVres_stack_7->SetBinContent(12,41.03053);
   hNCpi0inFVres_stack_7->SetBinContent(13,42.71737);
   hNCpi0inFVres_stack_7->SetBinContent(14,47.07542);
   hNCpi0inFVres_stack_7->SetBinContent(15,41.77301);
   hNCpi0inFVres_stack_7->SetBinContent(16,43.6214);
   hNCpi0inFVres_stack_7->SetBinContent(17,47.50431);
   hNCpi0inFVres_stack_7->SetBinContent(18,41.4026);
   hNCpi0inFVres_stack_7->SetBinContent(19,44.14825);
   hNCpi0inFVres_stack_7->SetBinContent(20,42.28345);
   hNCpi0inFVres_stack_7->SetBinContent(21,42.11448);
   hNCpi0inFVres_stack_7->SetBinContent(22,41.57522);
   hNCpi0inFVres_stack_7->SetBinContent(23,31.90438);
   hNCpi0inFVres_stack_7->SetBinContent(24,28.24217);
   hNCpi0inFVres_stack_7->SetBinContent(25,18.96446);
   hNCpi0inFVres_stack_7->SetBinContent(26,4.901056);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.375413);
   hNCpi0inFVres_stack_7->SetBinError(0,0.1304081);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6104138);
   hNCpi0inFVres_stack_7->SetBinError(2,1.174583);
   hNCpi0inFVres_stack_7->SetBinError(3,1.373827);
   hNCpi0inFVres_stack_7->SetBinError(4,1.460798);
   hNCpi0inFVres_stack_7->SetBinError(5,1.629665);
   hNCpi0inFVres_stack_7->SetBinError(6,1.903337);
   hNCpi0inFVres_stack_7->SetBinError(7,1.668475);
   hNCpi0inFVres_stack_7->SetBinError(8,2.131838);
   hNCpi0inFVres_stack_7->SetBinError(9,1.906633);
   hNCpi0inFVres_stack_7->SetBinError(10,1.898675);
   hNCpi0inFVres_stack_7->SetBinError(11,2.160222);
   hNCpi0inFVres_stack_7->SetBinError(12,1.831875);
   hNCpi0inFVres_stack_7->SetBinError(13,2.085091);
   hNCpi0inFVres_stack_7->SetBinError(14,2.232119);
   hNCpi0inFVres_stack_7->SetBinError(15,2.014712);
   hNCpi0inFVres_stack_7->SetBinError(16,1.991225);
   hNCpi0inFVres_stack_7->SetBinError(17,2.301687);
   hNCpi0inFVres_stack_7->SetBinError(18,2.031798);
   hNCpi0inFVres_stack_7->SetBinError(19,2.086962);
   hNCpi0inFVres_stack_7->SetBinError(20,2.011918);
   hNCpi0inFVres_stack_7->SetBinError(21,2.013176);
   hNCpi0inFVres_stack_7->SetBinError(22,1.973105);
   hNCpi0inFVres_stack_7->SetBinError(23,1.609205);
   hNCpi0inFVres_stack_7->SetBinError(24,1.591798);
   hNCpi0inFVres_stack_7->SetBinError(25,1.318931);
   hNCpi0inFVres_stack_7->SetBinError(26,0.8019155);
   hNCpi0inFVres_stack_7->SetBinError(27,0.166432);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02674065);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.011995);
   hNCpi0inFVdis_stack_8->SetBinContent(2,3.482141);
   hNCpi0inFVdis_stack_8->SetBinContent(3,4.714888);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.053653);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.682917);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.596177);
   hNCpi0inFVdis_stack_8->SetBinContent(7,8.374832);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.679159);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.309238);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.375472);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.65765);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.558271);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.657422);
   hNCpi0inFVdis_stack_8->SetBinContent(14,9.847157);
   hNCpi0inFVdis_stack_8->SetBinContent(15,10.17225);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.25685);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.460046);
   hNCpi0inFVdis_stack_8->SetBinContent(18,9.292933);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.52958);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.69853);
   hNCpi0inFVdis_stack_8->SetBinContent(21,7.699606);
   hNCpi0inFVdis_stack_8->SetBinContent(22,9.157202);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.181055);
   hNCpi0inFVdis_stack_8->SetBinContent(24,6.472211);
   hNCpi0inFVdis_stack_8->SetBinContent(25,4.236469);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.3875959);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.04552541);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02674065);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1901529);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.6000181);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6880487);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8916462);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6929858);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8413763);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9430444);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7547547);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.12161);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8727527);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.110084);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.92011);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.054716);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.0929);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.088725);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.369744);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7851241);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.053876);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.106664);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.274993);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.8465753);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.0348);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.149888);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.848118);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.6729914);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.09975986);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.02629165);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.1459375);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.0341084);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.08404593);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.1847543);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1290034);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02419538);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.06816273);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.1388276);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.01568944);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(1,4.786628);
   hCCpi0inFV_stack_10->SetBinContent(2,6.90295);
   hCCpi0inFV_stack_10->SetBinContent(3,12.42647);
   hCCpi0inFV_stack_10->SetBinContent(4,14.27405);
   hCCpi0inFV_stack_10->SetBinContent(5,11.96911);
   hCCpi0inFV_stack_10->SetBinContent(6,12.87201);
   hCCpi0inFV_stack_10->SetBinContent(7,14.50612);
   hCCpi0inFV_stack_10->SetBinContent(8,19.30944);
   hCCpi0inFV_stack_10->SetBinContent(9,15.63076);
   hCCpi0inFV_stack_10->SetBinContent(10,13.71987);
   hCCpi0inFV_stack_10->SetBinContent(11,13.82591);
   hCCpi0inFV_stack_10->SetBinContent(12,15.42483);
   hCCpi0inFV_stack_10->SetBinContent(13,18.46447);
   hCCpi0inFV_stack_10->SetBinContent(14,16.55797);
   hCCpi0inFV_stack_10->SetBinContent(15,13.32245);
   hCCpi0inFV_stack_10->SetBinContent(16,16.34418);
   hCCpi0inFV_stack_10->SetBinContent(17,18.11975);
   hCCpi0inFV_stack_10->SetBinContent(18,20.21144);
   hCCpi0inFV_stack_10->SetBinContent(19,18.7967);
   hCCpi0inFV_stack_10->SetBinContent(20,21.65285);
   hCCpi0inFV_stack_10->SetBinContent(21,21.27492);
   hCCpi0inFV_stack_10->SetBinContent(22,16.61328);
   hCCpi0inFV_stack_10->SetBinContent(23,15.97841);
   hCCpi0inFV_stack_10->SetBinContent(24,15.53809);
   hCCpi0inFV_stack_10->SetBinContent(25,10.63679);
   hCCpi0inFV_stack_10->SetBinContent(26,4.428343);
   hCCpi0inFV_stack_10->SetBinContent(27,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(1,1.110302);
   hCCpi0inFV_stack_10->SetBinError(2,1.334719);
   hCCpi0inFV_stack_10->SetBinError(3,1.846912);
   hCCpi0inFV_stack_10->SetBinError(4,1.916161);
   hCCpi0inFV_stack_10->SetBinError(5,1.755825);
   hCCpi0inFV_stack_10->SetBinError(6,1.722324);
   hCCpi0inFV_stack_10->SetBinError(7,1.891569);
   hCCpi0inFV_stack_10->SetBinError(8,2.227228);
   hCCpi0inFV_stack_10->SetBinError(9,1.970058);
   hCCpi0inFV_stack_10->SetBinError(10,1.903122);
   hCCpi0inFV_stack_10->SetBinError(11,1.851296);
   hCCpi0inFV_stack_10->SetBinError(12,1.966185);
   hCCpi0inFV_stack_10->SetBinError(13,2.167713);
   hCCpi0inFV_stack_10->SetBinError(14,2.073473);
   hCCpi0inFV_stack_10->SetBinError(15,1.828805);
   hCCpi0inFV_stack_10->SetBinError(16,1.988739);
   hCCpi0inFV_stack_10->SetBinError(17,2.122299);
   hCCpi0inFV_stack_10->SetBinError(18,2.247984);
   hCCpi0inFV_stack_10->SetBinError(19,2.144104);
   hCCpi0inFV_stack_10->SetBinError(20,2.399961);
   hCCpi0inFV_stack_10->SetBinError(21,2.27791);
   hCCpi0inFV_stack_10->SetBinError(22,2.076691);
   hCCpi0inFV_stack_10->SetBinError(23,1.991545);
   hCCpi0inFV_stack_10->SetBinError(24,1.947416);
   hCCpi0inFV_stack_10->SetBinError(25,1.622484);
   hCCpi0inFV_stack_10->SetBinError(26,1.081814);
   hCCpi0inFV_stack_10->SetBinError(27,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(1,2.688101);
   hNCinFV_stack_11->SetBinContent(2,6.257452);
   hNCinFV_stack_11->SetBinContent(3,5.002962);
   hNCinFV_stack_11->SetBinContent(4,9.616294);
   hNCinFV_stack_11->SetBinContent(5,10.40853);
   hNCinFV_stack_11->SetBinContent(6,10.46228);
   hNCinFV_stack_11->SetBinContent(7,9.310773);
   hNCinFV_stack_11->SetBinContent(8,11.92047);
   hNCinFV_stack_11->SetBinContent(9,12.42986);
   hNCinFV_stack_11->SetBinContent(10,8.921815);
   hNCinFV_stack_11->SetBinContent(11,11.3121);
   hNCinFV_stack_11->SetBinContent(12,11.65185);
   hNCinFV_stack_11->SetBinContent(13,14.38459);
   hNCinFV_stack_11->SetBinContent(14,12.91947);
   hNCinFV_stack_11->SetBinContent(15,8.542112);
   hNCinFV_stack_11->SetBinContent(16,9.972141);
   hNCinFV_stack_11->SetBinContent(17,10.4949);
   hNCinFV_stack_11->SetBinContent(18,10.87751);
   hNCinFV_stack_11->SetBinContent(19,11.67544);
   hNCinFV_stack_11->SetBinContent(20,11.63072);
   hNCinFV_stack_11->SetBinContent(21,10.52188);
   hNCinFV_stack_11->SetBinContent(22,9.581002);
   hNCinFV_stack_11->SetBinContent(23,12.72029);
   hNCinFV_stack_11->SetBinContent(24,7.051845);
   hNCinFV_stack_11->SetBinContent(25,6.324);
   hNCinFV_stack_11->SetBinContent(26,0.6139081);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,1.000047);
   hNCinFV_stack_11->SetBinError(2,1.202641);
   hNCinFV_stack_11->SetBinError(3,1.246345);
   hNCinFV_stack_11->SetBinError(4,1.676334);
   hNCinFV_stack_11->SetBinError(5,1.781711);
   hNCinFV_stack_11->SetBinError(6,2.036361);
   hNCinFV_stack_11->SetBinError(7,1.518911);
   hNCinFV_stack_11->SetBinError(8,1.821174);
   hNCinFV_stack_11->SetBinError(9,2.179778);
   hNCinFV_stack_11->SetBinError(10,1.50799);
   hNCinFV_stack_11->SetBinError(11,1.935729);
   hNCinFV_stack_11->SetBinError(12,1.994447);
   hNCinFV_stack_11->SetBinError(13,2.233653);
   hNCinFV_stack_11->SetBinError(14,2.071994);
   hNCinFV_stack_11->SetBinError(15,1.594249);
   hNCinFV_stack_11->SetBinError(16,1.573621);
   hNCinFV_stack_11->SetBinError(17,1.671166);
   hNCinFV_stack_11->SetBinError(18,1.837101);
   hNCinFV_stack_11->SetBinError(19,1.95499);
   hNCinFV_stack_11->SetBinError(20,1.931131);
   hNCinFV_stack_11->SetBinError(21,1.679553);
   hNCinFV_stack_11->SetBinError(22,1.705825);
   hNCinFV_stack_11->SetBinError(23,2.034372);
   hNCinFV_stack_11->SetBinError(24,1.313754);
   hNCinFV_stack_11->SetBinError(25,1.339624);
   hNCinFV_stack_11->SetBinError(26,0.3283318);
   hNCinFV_stack_11->SetBinError(27,0.3401776);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(2,3.821418);
   hnumuCCinFV_stack_12->SetBinContent(3,4.790612);
   hnumuCCinFV_stack_12->SetBinContent(4,6.881086);
   hnumuCCinFV_stack_12->SetBinContent(5,7.009616);
   hnumuCCinFV_stack_12->SetBinContent(6,5.785669);
   hnumuCCinFV_stack_12->SetBinContent(7,7.73212);
   hnumuCCinFV_stack_12->SetBinContent(8,8.087877);
   hnumuCCinFV_stack_12->SetBinContent(9,9.223469);
   hnumuCCinFV_stack_12->SetBinContent(10,10.84577);
   hnumuCCinFV_stack_12->SetBinContent(11,14.13963);
   hnumuCCinFV_stack_12->SetBinContent(12,14.44054);
   hnumuCCinFV_stack_12->SetBinContent(13,14.77715);
   hnumuCCinFV_stack_12->SetBinContent(14,15.44119);
   hnumuCCinFV_stack_12->SetBinContent(15,12.05735);
   hnumuCCinFV_stack_12->SetBinContent(16,10.93142);
   hnumuCCinFV_stack_12->SetBinContent(17,13.10833);
   hnumuCCinFV_stack_12->SetBinContent(18,15.46444);
   hnumuCCinFV_stack_12->SetBinContent(19,18.48978);
   hnumuCCinFV_stack_12->SetBinContent(20,12.54735);
   hnumuCCinFV_stack_12->SetBinContent(21,14.70228);
   hnumuCCinFV_stack_12->SetBinContent(22,12.6941);
   hnumuCCinFV_stack_12->SetBinContent(23,11.21052);
   hnumuCCinFV_stack_12->SetBinContent(24,12.11697);
   hnumuCCinFV_stack_12->SetBinContent(25,9.487321);
   hnumuCCinFV_stack_12->SetBinContent(26,3.671967);
   hnumuCCinFV_stack_12->SetBinError(1,0.48078);
   hnumuCCinFV_stack_12->SetBinError(2,0.9493297);
   hnumuCCinFV_stack_12->SetBinError(3,1.079665);
   hnumuCCinFV_stack_12->SetBinError(4,1.38162);
   hnumuCCinFV_stack_12->SetBinError(5,1.669213);
   hnumuCCinFV_stack_12->SetBinError(6,1.255676);
   hnumuCCinFV_stack_12->SetBinError(7,1.424489);
   hnumuCCinFV_stack_12->SetBinError(8,1.649865);
   hnumuCCinFV_stack_12->SetBinError(9,1.95224);
   hnumuCCinFV_stack_12->SetBinError(10,1.881307);
   hnumuCCinFV_stack_12->SetBinError(11,2.069683);
   hnumuCCinFV_stack_12->SetBinError(12,2.141038);
   hnumuCCinFV_stack_12->SetBinError(13,2.17821);
   hnumuCCinFV_stack_12->SetBinError(14,2.514369);
   hnumuCCinFV_stack_12->SetBinError(15,1.846291);
   hnumuCCinFV_stack_12->SetBinError(16,1.850418);
   hnumuCCinFV_stack_12->SetBinError(17,2.240156);
   hnumuCCinFV_stack_12->SetBinError(18,2.066383);
   hnumuCCinFV_stack_12->SetBinError(19,2.89954);
   hnumuCCinFV_stack_12->SetBinError(20,2.03418);
   hnumuCCinFV_stack_12->SetBinError(21,1.978745);
   hnumuCCinFV_stack_12->SetBinError(22,1.95226);
   hnumuCCinFV_stack_12->SetBinError(23,1.81919);
   hnumuCCinFV_stack_12->SetBinError(24,1.853244);
   hnumuCCinFV_stack_12->SetBinError(25,2.839803);
   hnumuCCinFV_stack_12->SetBinError(26,1.568437);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(3,0.2556436);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(5,0.4424184);
   hnueCCinFV_stack_13->SetBinContent(6,0.2476759);
   hnueCCinFV_stack_13->SetBinContent(7,0.4057753);
   hnueCCinFV_stack_13->SetBinContent(8,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(9,0.5888425);
   hnueCCinFV_stack_13->SetBinContent(10,0.6193069);
   hnueCCinFV_stack_13->SetBinContent(11,0.6048714);
   hnueCCinFV_stack_13->SetBinContent(12,0.9686825);
   hnueCCinFV_stack_13->SetBinContent(13,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(14,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(15,0.9864399);
   hnueCCinFV_stack_13->SetBinContent(17,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(18,1.244012);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,1.020533);
   hnueCCinFV_stack_13->SetBinContent(21,0.7820846);
   hnueCCinFV_stack_13->SetBinContent(22,0.5769502);
   hnueCCinFV_stack_13->SetBinContent(23,1.37683);
   hnueCCinFV_stack_13->SetBinContent(24,0.6263665);
   hnueCCinFV_stack_13->SetBinContent(25,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.3401776);
   hnueCCinFV_stack_13->SetBinError(3,0.2556436);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(5,0.3147324);
   hnueCCinFV_stack_13->SetBinError(6,0.2476759);
   hnueCCinFV_stack_13->SetBinError(7,0.2871419);
   hnueCCinFV_stack_13->SetBinError(8,0.2538659);
   hnueCCinFV_stack_13->SetBinError(9,0.4213728);
   hnueCCinFV_stack_13->SetBinError(10,0.4458496);
   hnueCCinFV_stack_13->SetBinError(11,0.3494005);
   hnueCCinFV_stack_13->SetBinError(12,0.5111352);
   hnueCCinFV_stack_13->SetBinError(13,0.3387718);
   hnueCCinFV_stack_13->SetBinError(14,0.1967154);
   hnueCCinFV_stack_13->SetBinError(15,0.6560483);
   hnueCCinFV_stack_13->SetBinError(17,0.4394482);
   hnueCCinFV_stack_13->SetBinError(18,0.5789449);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,0.5892049);
   hnueCCinFV_stack_13->SetBinError(21,0.463181);
   hnueCCinFV_stack_13->SetBinError(22,0.414466);
   hnueCCinFV_stack_13->SetBinError(23,0.6997158);
   hnueCCinFV_stack_13->SetBinError(24,0.3630167);
   hnueCCinFV_stack_13->SetBinError(25,0.1967154);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__20->SetBinContent(0,0.6259439);
   hmcerror__20->SetBinContent(1,28.7443);
   hmcerror__20->SetBinContent(2,42.55082);
   hmcerror__20->SetBinContent(3,59.90779);
   hmcerror__20->SetBinContent(4,75.77228);
   hmcerror__20->SetBinContent(5,83.81198);
   hmcerror__20->SetBinContent(6,86.89085);
   hmcerror__20->SetBinContent(7,86.23674);
   hmcerror__20->SetBinContent(8,98.57541);
   hmcerror__20->SetBinContent(9,100.5878);
   hmcerror__20->SetBinContent(10,96.95083);
   hmcerror__20->SetBinContent(11,117.1035);
   hmcerror__20->SetBinContent(12,105.0135);
   hmcerror__20->SetBinContent(13,115.8788);
   hmcerror__20->SetBinContent(14,112.4584);
   hmcerror__20->SetBinContent(15,100.2052);
   hmcerror__20->SetBinContent(16,107.2189);
   hmcerror__20->SetBinContent(17,116.8142);
   hmcerror__20->SetBinContent(18,112.9458);
   hmcerror__20->SetBinContent(19,122.4025);
   hmcerror__20->SetBinContent(20,118.2237);
   hmcerror__20->SetBinContent(21,121.393);
   hmcerror__20->SetBinContent(22,103.2508);
   hmcerror__20->SetBinContent(23,102.0349);
   hmcerror__20->SetBinContent(24,80.8242);
   hmcerror__20->SetBinContent(25,62.99892);
   hmcerror__20->SetBinContent(26,27.4977);
   hmcerror__20->SetBinContent(27,2.138124);
   hmcerror__20->SetBinError(0,0.3485054);
   hmcerror__20->SetBinError(1,12.48048);
   hmcerror__20->SetBinError(2,21.01014);
   hmcerror__20->SetBinError(3,26.11312);
   hmcerror__20->SetBinError(4,29.84416);
   hmcerror__20->SetBinError(5,38.48616);
   hmcerror__20->SetBinError(6,36.26022);
   hmcerror__20->SetBinError(7,36.12746);
   hmcerror__20->SetBinError(8,43.13768);
   hmcerror__20->SetBinError(9,41.20721);
   hmcerror__20->SetBinError(10,37.64367);
   hmcerror__20->SetBinError(11,41.7831);
   hmcerror__20->SetBinError(12,44.78843);
   hmcerror__20->SetBinError(13,41.71959);
   hmcerror__20->SetBinError(14,41.46649);
   hmcerror__20->SetBinError(15,43.5331);
   hmcerror__20->SetBinError(16,43.40132);
   hmcerror__20->SetBinError(17,41.17956);
   hmcerror__20->SetBinError(18,40.5385);
   hmcerror__20->SetBinError(19,41.53233);
   hmcerror__20->SetBinError(20,42.14962);
   hmcerror__20->SetBinError(21,42.4715);
   hmcerror__20->SetBinError(22,39.42547);
   hmcerror__20->SetBinError(23,36.93837);
   hmcerror__20->SetBinError(24,31.60841);
   hmcerror__20->SetBinError(25,24.0732);
   hmcerror__20->SetBinError(26,14.50972);
   hmcerror__20->SetBinError(27,3.963446);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[26] = {
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
   Double_t _fy3025[26] = {
   26,
   27,
   67,
   71,
   62,
   70,
   84,
   79,
   96,
   98,
   105,
   91,
   100,
   88,
   104,
   101,
   94,
   101,
   101,
   84,
   97,
   88,
   68,
   64,
   51,
   17};
   Double_t _felx3025[26] = {
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
   Double_t _fely3025[26] = {
   5.2453,
   5.3414,
   8.3119,
   8.5518,
   8.0018,
   8.4925,
   9.2886,
   9.0124,
   9.9196,
   10.0209,
   10.24695,
   9.6617,
   10.1212,
   9.5036,
   10.19804,
   10.04988,
   9.8173,
   10.04988,
   10.04988,
   9.2886,
   9.9704,
   9.5036,
   8.3726,
   8.1273,
   7.2725,
   4.2835};
   Double_t _fehx3025[26] = {
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
   Double_t _fehy3025[26] = {
   5.0358,
   5.1322,
   8.1094,
   8.3496,
   7.7989,
   8.2902,
   9.0869,
   8.8105,
   9.718,
   9.82,
   10.24695,
   9.46,
   9.92,
   9.3021,
   10.19804,
   10.04988,
   9.616,
   10.04988,
   10.04988,
   9.0869,
   9.769,
   9.3021,
   8.1701,
   7.9246,
   7.0686,
   4.0673};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,286);
   Graph_Graph3025->SetMinimum(2.463455);
   Graph_Graph3025->SetMaximum(125.5);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.1/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2034.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.6","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 188.4","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 85.4","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.4","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.9","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  913.6","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  201.5","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 383.6","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 247.3","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 270.4","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.8","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[26] = {
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
   Double_t _fy3026[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[26] = {
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
   Double_t _fely3026[26] = {
   0.4341898,
   0.4937659,
   0.4358885,
   0.3938665,
   0.4591964,
   0.4173077,
   0.4189335,
   0.437611,
   0.4096641,
   0.3882759,
   0.3568048,
   0.4265018,
   0.3600276,
   0.3687274,
   0.4344394,
   0.4047915,
   0.3525219,
   0.3589199,
   0.3393094,
   0.3565242,
   0.3498679,
   0.3818419,
   0.362017,
   0.391076,
   0.3821209,
   0.5276704};
   Double_t _fehx3026[26] = {
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
   Double_t _fehy3026[26] = {
   0.4341898,
   0.4937659,
   0.4358885,
   0.3938665,
   0.4591964,
   0.4173077,
   0.4189335,
   0.437611,
   0.4096641,
   0.3882759,
   0.3568048,
   0.4265018,
   0.3600276,
   0.3687274,
   0.4344394,
   0.4047915,
   0.3525219,
   0.3589199,
   0.3393094,
   0.3565242,
   0.3498679,
   0.3818419,
   0.362017,
   0.391076,
   0.3821209,
   0.5276704};
   grae = new TGraphAsymmErrors(26,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,286);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[26] = {
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
   Double_t _fy3027[26] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[26] = {
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
   Double_t _fely3027[26] = {
   0.3444576,
   0.4203493,
   0.3795978,
   0.343657,
   0.4195935,
   0.3914925,
   0.3811657,
   0.3871747,
   0.3456899,
   0.3511882,
   0.3341041,
   0.3489579,
   0.3114999,
   0.3475631,
   0.3526851,
   0.3477175,
   0.3237747,
   0.3236255,
   0.3148881,
   0.3169334,
   0.3187008,
   0.3437904,
   0.3269236,
   0.3390387,
   0.3178202,
   0.3141505};
   Double_t _fehx3027[26] = {
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
   Double_t _fehy3027[26] = {
   0.3444576,
   0.4203493,
   0.3795978,
   0.343657,
   0.4195935,
   0.3914925,
   0.3811657,
   0.3871747,
   0.3456899,
   0.3511882,
   0.3341041,
   0.3489579,
   0.3114999,
   0.3475631,
   0.3526851,
   0.3477175,
   0.3237747,
   0.3236255,
   0.3148881,
   0.3169334,
   0.3187008,
   0.3437904,
   0.3269236,
   0.3390387,
   0.3178202,
   0.3141505};
   grae = new TGraphAsymmErrors(26,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,286);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[26] = {
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
   Double_t _fy3028[26] = {
   0.9045272,
   0.6345354,
   1.118385,
   0.9370182,
   0.739751,
   0.8056084,
   0.9740628,
   0.8014169,
   0.9543902,
   1.010822,
   0.8966425,
   0.8665555,
   0.8629703,
   0.7825117,
   1.03787,
   0.9419977,
   0.8046967,
   0.8942342,
   0.8251463,
   0.7105173,
   0.7990577,
   0.8522938,
   0.6664385,
   0.7918421,
   0.8095376,
   0.6182335};
   Double_t _felx3028[26] = {
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
   Double_t _fely3028[26] = {
   0.1824814,
   0.1255299,
   0.1387449,
   0.1128619,
   0.09547322,
   0.09773756,
   0.1077105,
   0.09142645,
   0.09861635,
   0.1033606,
   0.08750335,
   0.09200439,
   0.08734295,
   0.08450771,
   0.1017715,
   0.09373227,
   0.08404201,
   0.08897962,
   0.08210512,
   0.07856799,
   0.08213325,
   0.09204386,
   0.08205622,
   0.1005553,
   0.1154385,
   0.1557767};
   Double_t _fehx3028[26] = {
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
   Double_t _fehy3028[26] = {
   0.175193,
   0.1206134,
   0.1353647,
   0.1101933,
   0.09305233,
   0.09540935,
   0.1053716,
   0.08937827,
   0.09661213,
   0.1012885,
   0.08750335,
   0.09008369,
   0.08560665,
   0.08271593,
   0.1017715,
   0.09373227,
   0.08231876,
   0.08897962,
   0.08210512,
   0.0768619,
   0.08047417,
   0.0900923,
   0.0800716,
   0.09804737,
   0.1122019,
   0.1479142};
   grae = new TGraphAsymmErrors(26,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,286);
   Graph_Graph3028->SetMinimum(0.3833275);
   Graph_Graph3028->SetMaximum(1.332879);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_reco_nuvtxX_all",26,0,260);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
