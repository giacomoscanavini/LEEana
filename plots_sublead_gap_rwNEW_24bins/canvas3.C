#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sat Feb 18 13:27:16 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-13.84615,-6.268351,101.5385,693.1476);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__7->SetBinContent(1,313.4175);
   hmc__7->SetBinContent(2,134.6174);
   hmc__7->SetBinContent(3,127.5388);
   hmc__7->SetBinContent(4,108.2894);
   hmc__7->SetBinContent(5,107.4578);
   hmc__7->SetBinContent(6,96.42552);
   hmc__7->SetBinContent(7,95.53673);
   hmc__7->SetBinContent(8,80.02826);
   hmc__7->SetBinContent(9,66.51128);
   hmc__7->SetBinContent(10,57.58875);
   hmc__7->SetBinContent(11,53.09682);
   hmc__7->SetBinContent(12,45.67489);
   hmc__7->SetBinContent(13,43.15959);
   hmc__7->SetBinContent(14,34.76308);
   hmc__7->SetBinContent(15,27.81596);
   hmc__7->SetBinContent(16,27.39037);
   hmc__7->SetBinContent(17,17.01686);
   hmc__7->SetBinContent(18,16.01461);
   hmc__7->SetBinContent(19,19.35104);
   hmc__7->SetBinContent(20,13.63138);
   hmc__7->SetBinContent(21,17.57012);
   hmc__7->SetBinContent(22,19.59154);
   hmc__7->SetBinContent(23,9.24797);
   hmc__7->SetBinContent(24,10.6452);
   hmc__7->SetBinContent(25,142.6746);
   hmc__7->SetBinError(1,62.27624);
   hmc__7->SetBinError(2,35.79859);
   hmc__7->SetBinError(3,35.01789);
   hmc__7->SetBinError(4,30.4695);
   hmc__7->SetBinError(5,30.53189);
   hmc__7->SetBinError(6,27.55526);
   hmc__7->SetBinError(7,29.5123);
   hmc__7->SetBinError(8,25.89905);
   hmc__7->SetBinError(9,22.0697);
   hmc__7->SetBinError(10,20.71199);
   hmc__7->SetBinError(11,21.6313);
   hmc__7->SetBinError(12,25.26734);
   hmc__7->SetBinError(13,18.65942);
   hmc__7->SetBinError(14,13.72652);
   hmc__7->SetBinError(15,13.09);
   hmc__7->SetBinError(16,15.15761);
   hmc__7->SetBinError(17,8.3463);
   hmc__7->SetBinError(18,9.423712);
   hmc__7->SetBinError(19,9.469095);
   hmc__7->SetBinError(20,10.41964);
   hmc__7->SetBinError(21,8.223076);
   hmc__7->SetBinError(22,10.77901);
   hmc__7->SetBinError(23,9.96423);
   hmc__7->SetBinError(24,10.98359);
   hmc__7->SetBinError(25,37.41274);
   hmc__7->SetMinimum(-6.268351);
   hmc__7->SetMaximum(658.1768);
   hmc__7->SetEntries(1653.165);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,0,90);
   hs3_stack_3->SetMinimum(-1.244044e-08);
   hs3_stack_3->SetMaximum(329.0884);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,12.48176);
   hbadmatch_stack_1->SetBinContent(2,4.048873);
   hbadmatch_stack_1->SetBinContent(3,3.270675);
   hbadmatch_stack_1->SetBinContent(4,2.546474);
   hbadmatch_stack_1->SetBinContent(5,1.83834);
   hbadmatch_stack_1->SetBinContent(6,2.284109);
   hbadmatch_stack_1->SetBinContent(7,3.541396);
   hbadmatch_stack_1->SetBinContent(8,0.8139223);
   hbadmatch_stack_1->SetBinContent(9,2.557527);
   hbadmatch_stack_1->SetBinContent(10,1.970164);
   hbadmatch_stack_1->SetBinContent(11,2.090938);
   hbadmatch_stack_1->SetBinContent(12,2.304649);
   hbadmatch_stack_1->SetBinContent(13,2.069946);
   hbadmatch_stack_1->SetBinContent(14,0.5866285);
   hbadmatch_stack_1->SetBinContent(15,1.827445);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,1.072095);
   hbadmatch_stack_1->SetBinContent(18,0.7954703);
   hbadmatch_stack_1->SetBinContent(19,0.9303237);
   hbadmatch_stack_1->SetBinContent(20,0.7843937);
   hbadmatch_stack_1->SetBinContent(21,0.5352025);
   hbadmatch_stack_1->SetBinContent(22,1.224884);
   hbadmatch_stack_1->SetBinContent(23,0.3934307);
   hbadmatch_stack_1->SetBinContent(24,1.039045);
   hbadmatch_stack_1->SetBinContent(25,5.254292);
   hbadmatch_stack_1->SetBinError(1,2.130576);
   hbadmatch_stack_1->SetBinError(2,1.017025);
   hbadmatch_stack_1->SetBinError(3,1.004363);
   hbadmatch_stack_1->SetBinError(4,0.7991118);
   hbadmatch_stack_1->SetBinError(5,0.7178504);
   hbadmatch_stack_1->SetBinError(6,0.7442811);
   hbadmatch_stack_1->SetBinError(7,0.9463896);
   hbadmatch_stack_1->SetBinError(8,0.4078808);
   hbadmatch_stack_1->SetBinError(9,0.7914129);
   hbadmatch_stack_1->SetBinError(10,0.8526731);
   hbadmatch_stack_1->SetBinError(11,0.8091189);
   hbadmatch_stack_1->SetBinError(12,0.8029474);
   hbadmatch_stack_1->SetBinError(13,0.7152433);
   hbadmatch_stack_1->SetBinError(14,0.4374793);
   hbadmatch_stack_1->SetBinError(15,0.6607483);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.5551335);
   hbadmatch_stack_1->SetBinError(18,0.4889066);
   hbadmatch_stack_1->SetBinError(19,0.4814682);
   hbadmatch_stack_1->SetBinError(20,0.4798395);
   hbadmatch_stack_1->SetBinError(21,0.3921167);
   hbadmatch_stack_1->SetBinError(22,0.6402476);
   hbadmatch_stack_1->SetBinError(23,0.2781975);
   hbadmatch_stack_1->SetBinError(24,0.5313579);
   hbadmatch_stack_1->SetBinError(25,1.218255);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,64.39577);
   hext_stack_2->SetBinContent(2,24.42725);
   hext_stack_2->SetBinContent(3,13.42325);
   hext_stack_2->SetBinContent(4,15.33933);
   hext_stack_2->SetBinContent(5,17.0451);
   hext_stack_2->SetBinContent(6,11.4162);
   hext_stack_2->SetBinContent(7,16.09786);
   hext_stack_2->SetBinContent(8,13.58047);
   hext_stack_2->SetBinContent(9,11.905);
   hext_stack_2->SetBinContent(10,9.608273);
   hext_stack_2->SetBinContent(11,8.56006);
   hext_stack_2->SetBinContent(12,6.884593);
   hext_stack_2->SetBinContent(13,8.254432);
   hext_stack_2->SetBinContent(14,7.250881);
   hext_stack_2->SetBinContent(15,3.241202);
   hext_stack_2->SetBinContent(16,5.363578);
   hext_stack_2->SetBinContent(17,3.57278);
   hext_stack_2->SetBinContent(18,1.219797);
   hext_stack_2->SetBinContent(19,4.442228);
   hext_stack_2->SetBinContent(20,1.779209);
   hext_stack_2->SetBinContent(21,6.78085);
   hext_stack_2->SetBinContent(22,6.538654);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,26.13427);
   hext_stack_2->SetBinError(1,5.556286);
   hext_stack_2->SetBinError(2,3.573439);
   hext_stack_2->SetBinError(3,2.472532);
   hext_stack_2->SetBinError(4,2.397449);
   hext_stack_2->SetBinError(5,2.852346);
   hext_stack_2->SetBinError(6,2.195067);
   hext_stack_2->SetBinError(7,2.711401);
   hext_stack_2->SetBinError(8,2.536689);
   hext_stack_2->SetBinError(9,2.245825);
   hext_stack_2->SetBinError(10,2.185309);
   hext_stack_2->SetBinError(11,2.049045);
   hext_stack_2->SetBinError(12,1.675566);
   hext_stack_2->SetBinError(13,1.956034);
   hext_stack_2->SetBinError(14,1.960543);
   hext_stack_2->SetBinError(15,1.178414);
   hext_stack_2->SetBinError(16,1.440195);
   hext_stack_2->SetBinError(17,1.136966);
   hext_stack_2->SetBinError(18,0.7042499);
   hext_stack_2->SetBinError(19,1.466939);
   hext_stack_2->SetBinError(20,0.9206235);
   hext_stack_2->SetBinError(21,1.830584);
   hext_stack_2->SetBinError(22,1.818211);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,3.418916);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,6.640795);
   hdirt_stack_3->SetBinContent(2,0.7952818);
   hdirt_stack_3->SetBinContent(3,2.50359);
   hdirt_stack_3->SetBinContent(4,1.590673);
   hdirt_stack_3->SetBinContent(5,1.570704);
   hdirt_stack_3->SetBinContent(6,1.977847);
   hdirt_stack_3->SetBinContent(7,0.7828965);
   hdirt_stack_3->SetBinContent(8,1.171176);
   hdirt_stack_3->SetBinContent(9,0.4377912);
   hdirt_stack_3->SetBinContent(10,0.4829878);
   hdirt_stack_3->SetBinContent(11,0.4950385);
   hdirt_stack_3->SetBinContent(12,0.3843746);
   hdirt_stack_3->SetBinContent(13,0.4377912);
   hdirt_stack_3->SetBinContent(14,0.4762587);
   hdirt_stack_3->SetBinContent(15,0.7277534);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,0.2188956);
   hdirt_stack_3->SetBinContent(19,0.5669618);
   hdirt_stack_3->SetBinContent(21,0.2623434);
   hdirt_stack_3->SetBinContent(22,0.4762587);
   hdirt_stack_3->SetBinContent(25,1.290705);
   hdirt_stack_3->SetBinError(1,1.529125);
   hdirt_stack_3->SetBinError(2,0.4680007);
   hdirt_stack_3->SetBinError(3,0.9617857);
   hdirt_stack_3->SetBinError(4,0.6392186);
   hdirt_stack_3->SetBinError(5,0.6886343);
   hdirt_stack_3->SetBinError(6,0.7343335);
   hdirt_stack_3->SetBinError(7,0.4525189);
   hdirt_stack_3->SetBinError(8,0.4516191);
   hdirt_stack_3->SetBinError(9,0.3095651);
   hdirt_stack_3->SetBinError(10,0.3653486);
   hdirt_stack_3->SetBinError(11,0.2933304);
   hdirt_stack_3->SetBinError(12,0.2744059);
   hdirt_stack_3->SetBinError(13,0.3095651);
   hdirt_stack_3->SetBinError(14,0.3652866);
   hdirt_stack_3->SetBinError(15,0.5158802);
   hdirt_stack_3->SetBinError(16,0.3381872);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,0.2188956);
   hdirt_stack_3->SetBinError(19,0.4361354);
   hdirt_stack_3->SetBinError(21,0.2623434);
   hdirt_stack_3->SetBinError(22,0.3652866);
   hdirt_stack_3->SetBinError(25,0.6174457);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,63.18467);
   houtFV_stack_4->SetBinContent(2,23.08249);
   houtFV_stack_4->SetBinContent(3,23.03084);
   houtFV_stack_4->SetBinContent(4,19.14317);
   houtFV_stack_4->SetBinContent(5,20.01909);
   houtFV_stack_4->SetBinContent(6,19.0785);
   houtFV_stack_4->SetBinContent(7,14.52377);
   houtFV_stack_4->SetBinContent(8,17.55536);
   houtFV_stack_4->SetBinContent(9,11.32729);
   houtFV_stack_4->SetBinContent(10,10.02886);
   houtFV_stack_4->SetBinContent(11,10.86133);
   houtFV_stack_4->SetBinContent(12,8.446218);
   houtFV_stack_4->SetBinContent(13,12.24635);
   houtFV_stack_4->SetBinContent(14,7.616302);
   houtFV_stack_4->SetBinContent(15,5.086475);
   houtFV_stack_4->SetBinContent(16,5.423265);
   houtFV_stack_4->SetBinContent(17,2.298783);
   houtFV_stack_4->SetBinContent(18,3.715181);
   houtFV_stack_4->SetBinContent(19,3.181737);
   houtFV_stack_4->SetBinContent(20,1.995657);
   houtFV_stack_4->SetBinContent(21,2.642437);
   houtFV_stack_4->SetBinContent(22,2.815808);
   houtFV_stack_4->SetBinContent(23,1.660551);
   houtFV_stack_4->SetBinContent(24,1.871656);
   houtFV_stack_4->SetBinContent(25,34.17258);
   houtFV_stack_4->SetBinError(1,4.064899);
   houtFV_stack_4->SetBinError(2,2.687984);
   houtFV_stack_4->SetBinError(3,2.475398);
   houtFV_stack_4->SetBinError(4,2.205256);
   houtFV_stack_4->SetBinError(5,2.221989);
   houtFV_stack_4->SetBinError(6,2.164995);
   houtFV_stack_4->SetBinError(7,1.926288);
   houtFV_stack_4->SetBinError(8,2.109242);
   houtFV_stack_4->SetBinError(9,1.689872);
   houtFV_stack_4->SetBinError(10,1.5777);
   houtFV_stack_4->SetBinError(11,1.657778);
   houtFV_stack_4->SetBinError(12,1.481564);
   houtFV_stack_4->SetBinError(13,1.7286);
   houtFV_stack_4->SetBinError(14,1.382913);
   houtFV_stack_4->SetBinError(15,1.092469);
   houtFV_stack_4->SetBinError(16,1.143628);
   houtFV_stack_4->SetBinError(17,0.8080976);
   houtFV_stack_4->SetBinError(18,0.9933165);
   houtFV_stack_4->SetBinError(19,0.9220277);
   houtFV_stack_4->SetBinError(20,0.733032);
   houtFV_stack_4->SetBinError(21,0.7851269);
   houtFV_stack_4->SetBinError(22,0.8460972);
   houtFV_stack_4->SetBinError(23,0.650847);
   houtFV_stack_4->SetBinError(24,0.6842273);
   houtFV_stack_4->SetBinError(25,3.046289);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,2.51168);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.323926);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.227608);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.673344);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.8644038);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.4042178);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.739354);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.7242399);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.044758);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.654822);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.4872539);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2791681);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4746361);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,1.086772);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.5878953);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3690854);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.4228219);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4524662);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2652967);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1342881);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3047819);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2828126);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3093236);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.267003);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1840142);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2013529);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2806257);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2394648);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2647179);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.118917);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.03945654);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,39.00368);
   hNCpi0inFVres_stack_7->SetBinContent(2,29.75563);
   hNCpi0inFVres_stack_7->SetBinContent(3,29.655);
   hNCpi0inFVres_stack_7->SetBinContent(4,23.24244);
   hNCpi0inFVres_stack_7->SetBinContent(5,22.72795);
   hNCpi0inFVres_stack_7->SetBinContent(6,21.30789);
   hNCpi0inFVres_stack_7->SetBinContent(7,18.93438);
   hNCpi0inFVres_stack_7->SetBinContent(8,13.00559);
   hNCpi0inFVres_stack_7->SetBinContent(9,12.243);
   hNCpi0inFVres_stack_7->SetBinContent(10,11.36515);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.451075);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.385547);
   hNCpi0inFVres_stack_7->SetBinContent(13,5.481378);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.86741);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.64321);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.709556);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.096084);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.660638);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.341616);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.762116);
   hNCpi0inFVres_stack_7->SetBinContent(21,1.296026);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.34328);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.9904539);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.172472);
   hNCpi0inFVres_stack_7->SetBinContent(25,12.71314);
   hNCpi0inFVres_stack_7->SetBinError(1,2.014751);
   hNCpi0inFVres_stack_7->SetBinError(2,1.739407);
   hNCpi0inFVres_stack_7->SetBinError(3,1.79668);
   hNCpi0inFVres_stack_7->SetBinError(4,1.482961);
   hNCpi0inFVres_stack_7->SetBinError(5,1.515114);
   hNCpi0inFVres_stack_7->SetBinError(6,1.542462);
   hNCpi0inFVres_stack_7->SetBinError(7,1.436818);
   hNCpi0inFVres_stack_7->SetBinError(8,1.117432);
   hNCpi0inFVres_stack_7->SetBinError(9,1.16172);
   hNCpi0inFVres_stack_7->SetBinError(10,1.142293);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9316343);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8107082);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7789619);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7462558);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7061482);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6725545);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5968199);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5102132);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5003928);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6050779);
   hNCpi0inFVres_stack_7->SetBinError(21,0.3680294);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5375177);
   hNCpi0inFVres_stack_7->SetBinError(23,0.316066);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4046342);
   hNCpi0inFVres_stack_7->SetBinError(25,1.125386);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,9.87116);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.036722);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.150818);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.814514);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.174638);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.686224);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.281174);
   hNCpi0inFVdis_stack_8->SetBinContent(8,5.590322);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.848224);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.514256);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.532507);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.132361);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.310972);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.311972);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.9625539);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.530268);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.6691039);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.7807039);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.3062359);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4467362);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.6556541);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.9628903);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.390768);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3899359);
   hNCpi0inFVdis_stack_8->SetBinContent(25,4.014792);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.036041);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8223872);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8586227);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7599935);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6974594);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7157742);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6892266);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8147798);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.661026);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6684913);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2886012);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4150791);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3399938);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4094153);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3148322);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2180566);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2548204);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2608584);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.14851);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2792353);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3009266);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.405755);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2089417);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.1561744);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.649892);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,51.32178);
   hCCpi0inFV_stack_10->SetBinContent(2,24.08231);
   hCCpi0inFV_stack_10->SetBinContent(3,26.15549);
   hCCpi0inFV_stack_10->SetBinContent(4,20.84363);
   hCCpi0inFV_stack_10->SetBinContent(5,24.23698);
   hCCpi0inFV_stack_10->SetBinContent(6,20.09058);
   hCCpi0inFV_stack_10->SetBinContent(7,22.57635);
   hCCpi0inFV_stack_10->SetBinContent(8,16.9087);
   hCCpi0inFV_stack_10->SetBinContent(9,11.50412);
   hCCpi0inFV_stack_10->SetBinContent(10,12.59763);
   hCCpi0inFV_stack_10->SetBinContent(11,10.2112);
   hCCpi0inFV_stack_10->SetBinContent(12,9.249041);
   hCCpi0inFV_stack_10->SetBinContent(13,7.037393);
   hCCpi0inFV_stack_10->SetBinContent(14,5.873075);
   hCCpi0inFV_stack_10->SetBinContent(15,5.120733);
   hCCpi0inFV_stack_10->SetBinContent(16,4.364791);
   hCCpi0inFV_stack_10->SetBinContent(17,4.037799);
   hCCpi0inFV_stack_10->SetBinContent(18,4.560704);
   hCCpi0inFV_stack_10->SetBinContent(19,3.223312);
   hCCpi0inFV_stack_10->SetBinContent(20,1.999038);
   hCCpi0inFV_stack_10->SetBinContent(21,3.367593);
   hCCpi0inFV_stack_10->SetBinContent(22,2.22676);
   hCCpi0inFV_stack_10->SetBinContent(23,2.254078);
   hCCpi0inFV_stack_10->SetBinContent(24,2.053982);
   hCCpi0inFV_stack_10->SetBinContent(25,23.19884);
   hCCpi0inFV_stack_10->SetBinError(1,3.620572);
   hCCpi0inFV_stack_10->SetBinError(2,2.483221);
   hCCpi0inFV_stack_10->SetBinError(3,2.596044);
   hCCpi0inFV_stack_10->SetBinError(4,2.300745);
   hCCpi0inFV_stack_10->SetBinError(5,2.492762);
   hCCpi0inFV_stack_10->SetBinError(6,2.230717);
   hCCpi0inFV_stack_10->SetBinError(7,2.430068);
   hCCpi0inFV_stack_10->SetBinError(8,2.011271);
   hCCpi0inFV_stack_10->SetBinError(9,1.743266);
   hCCpi0inFV_stack_10->SetBinError(10,1.810497);
   hCCpi0inFV_stack_10->SetBinError(11,1.575812);
   hCCpi0inFV_stack_10->SetBinError(12,1.562059);
   hCCpi0inFV_stack_10->SetBinError(13,1.35469);
   hCCpi0inFV_stack_10->SetBinError(14,1.212747);
   hCCpi0inFV_stack_10->SetBinError(15,1.186232);
   hCCpi0inFV_stack_10->SetBinError(16,1.032549);
   hCCpi0inFV_stack_10->SetBinError(17,0.9461802);
   hCCpi0inFV_stack_10->SetBinError(18,1.152304);
   hCCpi0inFV_stack_10->SetBinError(19,0.8887809);
   hCCpi0inFV_stack_10->SetBinError(20,0.7339349);
   hCCpi0inFV_stack_10->SetBinError(21,0.8979018);
   hCCpi0inFV_stack_10->SetBinError(22,0.7684514);
   hCCpi0inFV_stack_10->SetBinError(23,0.7355386);
   hCCpi0inFV_stack_10->SetBinError(24,0.7078105);
   hCCpi0inFV_stack_10->SetBinError(25,2.386372);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,8.783474);
   hNCinFV_stack_11->SetBinContent(2,5.081398);
   hNCinFV_stack_11->SetBinContent(3,7.714299);
   hNCinFV_stack_11->SetBinContent(4,6.835539);
   hNCinFV_stack_11->SetBinContent(5,3.521199);
   hNCinFV_stack_11->SetBinContent(6,5.365549);
   hNCinFV_stack_11->SetBinContent(7,4.498013);
   hNCinFV_stack_11->SetBinContent(8,4.53835);
   hNCinFV_stack_11->SetBinContent(9,4.143229);
   hNCinFV_stack_11->SetBinContent(10,1.465526);
   hNCinFV_stack_11->SetBinContent(11,2.692309);
   hNCinFV_stack_11->SetBinContent(12,2.199135);
   hNCinFV_stack_11->SetBinContent(13,1.712114);
   hNCinFV_stack_11->SetBinContent(14,1.857266);
   hNCinFV_stack_11->SetBinContent(15,1.713804);
   hNCinFV_stack_11->SetBinContent(16,2.002419);
   hNCinFV_stack_11->SetBinContent(17,0.5901461);
   hNCinFV_stack_11->SetBinContent(18,0.3917402);
   hNCinFV_stack_11->SetBinContent(19,1.020533);
   hNCinFV_stack_11->SetBinContent(20,0.5867651);
   hNCinFV_stack_11->SetBinContent(21,0.3934307);
   hNCinFV_stack_11->SetBinContent(22,0.9801958);
   hNCinFV_stack_11->SetBinContent(23,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.8770706);
   hNCinFV_stack_11->SetBinContent(25,4.157836);
   hNCinFV_stack_11->SetBinError(1,1.533822);
   hNCinFV_stack_11->SetBinError(2,1.09156);
   hNCinFV_stack_11->SetBinError(3,1.415126);
   hNCinFV_stack_11->SetBinError(4,1.315971);
   hNCinFV_stack_11->SetBinError(5,0.9419262);
   hNCinFV_stack_11->SetBinError(6,1.242116);
   hNCinFV_stack_11->SetBinError(7,1.038297);
   hNCinFV_stack_11->SetBinError(8,1.110434);
   hNCinFV_stack_11->SetBinError(9,1.074712);
   hNCinFV_stack_11->SetBinError(10,0.6209405);
   hNCinFV_stack_11->SetBinError(11,0.7594556);
   hNCinFV_stack_11->SetBinError(12,0.7607114);
   hNCinFV_stack_11->SetBinError(13,0.6201715);
   hNCinFV_stack_11->SetBinError(14,0.6799255);
   hNCinFV_stack_11->SetBinError(15,0.6207051);
   hNCinFV_stack_11->SetBinError(16,0.7348366);
   hNCinFV_stack_11->SetBinError(17,0.340721);
   hNCinFV_stack_11->SetBinError(18,0.2770047);
   hNCinFV_stack_11->SetBinError(19,0.5892049);
   hNCinFV_stack_11->SetBinError(20,0.3387718);
   hNCinFV_stack_11->SetBinError(21,0.2781975);
   hNCinFV_stack_11->SetBinError(22,0.4383608);
   hNCinFV_stack_11->SetBinError(23,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.5197486);
   hNCinFV_stack_11->SetBinError(25,0.9809893);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,54.38975);
   hnumuCCinFV_stack_12->SetBinContent(2,15.71883);
   hnumuCCinFV_stack_12->SetBinContent(3,14.10511);
   hnumuCCinFV_stack_12->SetBinContent(4,10.41752);
   hnumuCCinFV_stack_12->SetBinContent(5,9.730942);
   hnumuCCinFV_stack_12->SetBinContent(6,8.80206);
   hnumuCCinFV_stack_12->SetBinContent(7,9.171827);
   hnumuCCinFV_stack_12->SetBinContent(8,5.720494);
   hnumuCCinFV_stack_12->SetBinContent(9,7.164124);
   hnumuCCinFV_stack_12->SetBinContent(10,5.789473);
   hnumuCCinFV_stack_12->SetBinContent(11,7.715106);
   hnumuCCinFV_stack_12->SetBinContent(12,6.011876);
   hnumuCCinFV_stack_12->SetBinContent(13,4.078777);
   hnumuCCinFV_stack_12->SetBinContent(14,4.169517);
   hnumuCCinFV_stack_12->SetBinContent(15,3.859824);
   hnumuCCinFV_stack_12->SetBinContent(16,5.18242);
   hnumuCCinFV_stack_12->SetBinContent(17,1.458293);
   hnumuCCinFV_stack_12->SetBinContent(18,1.448117);
   hnumuCCinFV_stack_12->SetBinContent(19,3.24078);
   hnumuCCinFV_stack_12->SetBinContent(20,2.486808);
   hnumuCCinFV_stack_12->SetBinContent(21,1.580783);
   hnumuCCinFV_stack_12->SetBinContent(22,1.195958);
   hnumuCCinFV_stack_12->SetBinContent(23,2.995974);
   hnumuCCinFV_stack_12->SetBinContent(24,1.365775);
   hnumuCCinFV_stack_12->SetBinContent(25,26.55734);
   hnumuCCinFV_stack_12->SetBinError(1,4.235591);
   hnumuCCinFV_stack_12->SetBinError(2,2.924774);
   hnumuCCinFV_stack_12->SetBinError(3,2.101729);
   hnumuCCinFV_stack_12->SetBinError(4,1.569964);
   hnumuCCinFV_stack_12->SetBinError(5,1.688459);
   hnumuCCinFV_stack_12->SetBinError(6,1.577286);
   hnumuCCinFV_stack_12->SetBinError(7,2.357792);
   hnumuCCinFV_stack_12->SetBinError(8,1.233909);
   hnumuCCinFV_stack_12->SetBinError(9,1.425237);
   hnumuCCinFV_stack_12->SetBinError(10,1.480148);
   hnumuCCinFV_stack_12->SetBinError(11,1.482405);
   hnumuCCinFV_stack_12->SetBinError(12,1.277514);
   hnumuCCinFV_stack_12->SetBinError(13,1.018211);
   hnumuCCinFV_stack_12->SetBinError(14,1.447265);
   hnumuCCinFV_stack_12->SetBinError(15,1.027549);
   hnumuCCinFV_stack_12->SetBinError(16,1.386549);
   hnumuCCinFV_stack_12->SetBinError(17,0.5969779);
   hnumuCCinFV_stack_12->SetBinError(18,0.6601443);
   hnumuCCinFV_stack_12->SetBinError(19,1.204294);
   hnumuCCinFV_stack_12->SetBinError(20,0.8585229);
   hnumuCCinFV_stack_12->SetBinError(21,0.6598012);
   hnumuCCinFV_stack_12->SetBinError(22,0.5682175);
   hnumuCCinFV_stack_12->SetBinError(23,0.9578715);
   hnumuCCinFV_stack_12->SetBinError(24,0.5725424);
   hnumuCCinFV_stack_12->SetBinError(25,3.033801);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(3,0.2463303);
   hnueCCinFV_stack_13->SetBinContent(4,0.6195905);
   hnueCCinFV_stack_13->SetBinContent(5,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(6,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(7,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(8,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.3700248);
   hnueCCinFV_stack_13->SetBinContent(14,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(15,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(20,0.7069596);
   hnueCCinFV_stack_13->SetBinContent(22,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(24,1.550861);
   hnueCCinFV_stack_13->SetBinContent(25,4.038185);
   hnueCCinFV_stack_13->SetBinError(1,0.3025491);
   hnueCCinFV_stack_13->SetBinError(3,0.2463303);
   hnueCCinFV_stack_13->SetBinError(4,0.3585277);
   hnueCCinFV_stack_13->SetBinError(5,0.2781975);
   hnueCCinFV_stack_13->SetBinError(6,0.48078);
   hnueCCinFV_stack_13->SetBinError(7,0.2502081);
   hnueCCinFV_stack_13->SetBinError(8,0.2770047);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.2655531);
   hnueCCinFV_stack_13->SetBinError(14,0.2770047);
   hnueCCinFV_stack_13->SetBinError(15,0.3401776);
   hnueCCinFV_stack_13->SetBinError(20,0.5353745);
   hnueCCinFV_stack_13->SetBinError(22,0.7431478);
   hnueCCinFV_stack_13->SetBinError(24,1.190395);
   hnueCCinFV_stack_13->SetBinError(25,1.796992);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__8->SetBinContent(1,313.4175);
   hmcerror__8->SetBinContent(2,134.6174);
   hmcerror__8->SetBinContent(3,127.5388);
   hmcerror__8->SetBinContent(4,108.2894);
   hmcerror__8->SetBinContent(5,107.4578);
   hmcerror__8->SetBinContent(6,96.42552);
   hmcerror__8->SetBinContent(7,95.53673);
   hmcerror__8->SetBinContent(8,80.02826);
   hmcerror__8->SetBinContent(9,66.51128);
   hmcerror__8->SetBinContent(10,57.58875);
   hmcerror__8->SetBinContent(11,53.09682);
   hmcerror__8->SetBinContent(12,45.67489);
   hmcerror__8->SetBinContent(13,43.15959);
   hmcerror__8->SetBinContent(14,34.76308);
   hmcerror__8->SetBinContent(15,27.81596);
   hmcerror__8->SetBinContent(16,27.39037);
   hmcerror__8->SetBinContent(17,17.01686);
   hmcerror__8->SetBinContent(18,16.01461);
   hmcerror__8->SetBinContent(19,19.35104);
   hmcerror__8->SetBinContent(20,13.63138);
   hmcerror__8->SetBinContent(21,17.57012);
   hmcerror__8->SetBinContent(22,19.59154);
   hmcerror__8->SetBinContent(23,9.24797);
   hmcerror__8->SetBinContent(24,10.6452);
   hmcerror__8->SetBinContent(25,142.6746);
   hmcerror__8->SetBinError(1,62.27624);
   hmcerror__8->SetBinError(2,35.79859);
   hmcerror__8->SetBinError(3,35.01789);
   hmcerror__8->SetBinError(4,30.4695);
   hmcerror__8->SetBinError(5,30.53189);
   hmcerror__8->SetBinError(6,27.55526);
   hmcerror__8->SetBinError(7,29.5123);
   hmcerror__8->SetBinError(8,25.89905);
   hmcerror__8->SetBinError(9,22.0697);
   hmcerror__8->SetBinError(10,20.71199);
   hmcerror__8->SetBinError(11,21.6313);
   hmcerror__8->SetBinError(12,25.26734);
   hmcerror__8->SetBinError(13,18.65942);
   hmcerror__8->SetBinError(14,13.72652);
   hmcerror__8->SetBinError(15,13.09);
   hmcerror__8->SetBinError(16,15.15761);
   hmcerror__8->SetBinError(17,8.3463);
   hmcerror__8->SetBinError(18,9.423712);
   hmcerror__8->SetBinError(19,9.469095);
   hmcerror__8->SetBinError(20,10.41964);
   hmcerror__8->SetBinError(21,8.223076);
   hmcerror__8->SetBinError(22,10.77901);
   hmcerror__8->SetBinError(23,9.96423);
   hmcerror__8->SetBinError(24,10.98359);
   hmcerror__8->SetBinError(25,37.41274);
   hmcerror__8->SetEntries(1653.165);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3009[24] = {
   267,
   112,
   121,
   110,
   105,
   77,
   88,
   67,
   42,
   64,
   46,
   46,
   29,
   29,
   33,
   17,
   24,
   19,
   16,
   14,
   12,
   8,
   13,
   10};
   Double_t _felx3009[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3009[24] = {
   16.34013,
   10.58301,
   11,
   10.48809,
   10.24695,
   8.8995,
   9.5036,
   8.3119,
   6.6155,
   8.1273,
   6.9153,
   6.9153,
   5.5285,
   5.5285,
   5.8847,
   4.2835,
   5.0476,
   4.5151,
   4.1628,
   3.9102,
   3.64022,
   3.0307,
   3.77763,
   3.34883};
   Double_t _fehx3009[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3009[24] = {
   16.34013,
   10.58301,
   11,
   10.48809,
   10.24695,
   8.6976,
   9.3021,
   8.1094,
   6.4104,
   7.9246,
   6.7108,
   6.7108,
   5.3201,
   5.3201,
   5.6776,
   4.0673,
   4.837,
   4.3011,
   3.9454,
   3.6898,
   3.4155,
   2.7896,
   3.5552,
   3.1179};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,99);
   Graph_Graph3009->SetMinimum(4.47237);
   Graph_Graph3009->SetMaximum(311.1772);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.5/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1369.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 51.2","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 261.5","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 22.5","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 290.8","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.7","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  272.4","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  67.4","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 295.9","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 69.3","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 187.8","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.4","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-13.86,-0.5333333,101.64,2.133333);
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
   
   Double_t _fx3010[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3010[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3010[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3010[24] = {
   0.1987006,
   0.2659283,
   0.2745665,
   0.281371,
   0.2841293,
   0.2857672,
   0.3089106,
   0.3236238,
   0.3318189,
   0.3596535,
   0.4073935,
   0.5531998,
   0.4323354,
   0.3948592,
   0.470593,
   0.5533921,
   0.4904726,
   0.5884445,
   0.4893325,
   0.7643859,
   0.4680148,
   0.550187,
   1.077451,
   1.031789};
   Double_t _fehx3010[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3010[24] = {
   0.1987006,
   0.2659283,
   0.2745665,
   0.281371,
   0.2841293,
   0.2857672,
   0.3089106,
   0.3236238,
   0.3318189,
   0.3596535,
   0.4073935,
   0.5531998,
   0.4323354,
   0.3948592,
   0.470593,
   0.5533921,
   0.4904726,
   0.5884445,
   0.4893325,
   0.7643859,
   0.4680148,
   0.550187,
   1.077451,
   1.031789};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,99);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3011[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3011[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3011[24] = {
   0.1645578,
   0.2012282,
   0.2096407,
   0.2120004,
   0.2086036,
   0.2036598,
   0.211996,
   0.2026324,
   0.1954288,
   0.2124929,
   0.1963213,
   0.1962658,
   0.1928153,
   0.2019226,
   0.2090519,
   0.1873653,
   0.2403124,
   0.2266808,
   0.2162105,
   0.2243334,
   0.2098494,
   0.1961458,
   0.2855665,
   0.4961438};
   Double_t _fehx3011[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3011[24] = {
   0.1645578,
   0.2012282,
   0.2096407,
   0.2120004,
   0.2086036,
   0.2036598,
   0.211996,
   0.2026324,
   0.1954288,
   0.2124929,
   0.1963213,
   0.1962658,
   0.1928153,
   0.2019226,
   0.2090519,
   0.1873653,
   0.2403124,
   0.2266808,
   0.2162105,
   0.2243334,
   0.2098494,
   0.1961458,
   0.2855665,
   0.4961438};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,99);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[24] = {
   1.875,
   5.625,
   9.375,
   13.125,
   16.875,
   20.625,
   24.375,
   28.125,
   31.875,
   35.625,
   39.375,
   43.125,
   46.875,
   50.625,
   54.375,
   58.125,
   61.875,
   65.625,
   69.375,
   73.125,
   76.875,
   80.625,
   84.375,
   88.125};
   Double_t _fy3012[24] = {
   0.8518987,
   0.8319873,
   0.9487309,
   1.015796,
   0.9771282,
   0.7985438,
   0.9211117,
   0.8372043,
   0.6314719,
   1.111328,
   0.8663418,
   1.007118,
   0.6719249,
   0.8342183,
   1.186369,
   0.6206561,
   1.410366,
   1.186416,
   0.8268288,
   1.027042,
   0.6829777,
   0.4083396,
   1.405714,
   0.939391};
   Double_t _felx3012[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fely3012[24] = {
   0.05213535,
   0.07861541,
   0.08624826,
   0.09685239,
   0.09535794,
   0.09229403,
   0.09947588,
   0.1038621,
   0.09946434,
   0.1411265,
   0.1302394,
   0.1514027,
   0.1280944,
   0.1590336,
   0.2115584,
   0.1563871,
   0.2966235,
   0.2819362,
   0.2151202,
   0.2868528,
   0.2071824,
   0.1546944,
   0.4084821,
   0.3145861};
   Double_t _fehx3012[24] = {
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875,
   1.875};
   Double_t _fehy3012[24] = {
   0.05213535,
   0.07861541,
   0.08624826,
   0.09685239,
   0.09535794,
   0.09020019,
   0.09736674,
   0.1013317,
   0.09638065,
   0.1376067,
   0.126388,
   0.1469254,
   0.1232658,
   0.1530388,
   0.204113,
   0.1484938,
   0.2842476,
   0.2685734,
   0.2038856,
   0.2706842,
   0.1943925,
   0.142388,
   0.3844303,
   0.2928927};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,99);
   Graph_Graph3012->SetMinimum(0.09999535);
   Graph_Graph3012->SetMaximum(1.943794);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_gap_low_all",24,0,90);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
   TLine *line = new TLine(0,1,90,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
