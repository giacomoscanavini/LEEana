#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Thu Mar  9 16:38:21 2023) by ROOT version 6.26/00
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
   pad1->Range(-13.84615,-4.952775,101.5385,547.6726);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmc__19->SetBinContent(1,247.6387);
   hmc__19->SetBinContent(2,168.7938);
   hmc__19->SetBinContent(3,174.1062);
   hmc__19->SetBinContent(4,156.6903);
   hmc__19->SetBinContent(5,150.4668);
   hmc__19->SetBinContent(6,127.2713);
   hmc__19->SetBinContent(7,114.0066);
   hmc__19->SetBinContent(8,93.86953);
   hmc__19->SetBinContent(9,87.5996);
   hmc__19->SetBinContent(10,73.75751);
   hmc__19->SetBinContent(11,63.53077);
   hmc__19->SetBinContent(12,61.61213);
   hmc__19->SetBinContent(13,50.50846);
   hmc__19->SetBinContent(14,45.86032);
   hmc__19->SetBinContent(15,34.74039);
   hmc__19->SetBinContent(16,32.4944);
   hmc__19->SetBinContent(17,25.26456);
   hmc__19->SetBinContent(18,29.18508);
   hmc__19->SetBinContent(19,23.71);
   hmc__19->SetBinContent(20,16.91252);
   hmc__19->SetBinContent(21,18.97167);
   hmc__19->SetBinContent(22,18.2615);
   hmc__19->SetBinContent(23,14.28511);
   hmc__19->SetBinContent(24,12.18208);
   hmc__19->SetBinContent(25,174.7874);
   hmc__19->SetBinError(1,90.91529);
   hmc__19->SetBinError(2,77.77783);
   hmc__19->SetBinError(3,70.45094);
   hmc__19->SetBinError(4,66.17477);
   hmc__19->SetBinError(5,62.23696);
   hmc__19->SetBinError(6,55.83062);
   hmc__19->SetBinError(7,45.50908);
   hmc__19->SetBinError(8,40.79022);
   hmc__19->SetBinError(9,35.93287);
   hmc__19->SetBinError(10,28.94379);
   hmc__19->SetBinError(11,26.613);
   hmc__19->SetBinError(12,26.40423);
   hmc__19->SetBinError(13,22.87327);
   hmc__19->SetBinError(14,19.87944);
   hmc__19->SetBinError(15,16.99631);
   hmc__19->SetBinError(16,16.24529);
   hmc__19->SetBinError(17,11.38874);
   hmc__19->SetBinError(18,14.64064);
   hmc__19->SetBinError(19,12.99005);
   hmc__19->SetBinError(20,10.08573);
   hmc__19->SetBinError(21,10.05696);
   hmc__19->SetBinError(22,10.16884);
   hmc__19->SetBinError(23,9.969924);
   hmc__19->SetBinError(24,7.513573);
   hmc__19->SetBinError(25,60.13179);
   hmc__19->SetMinimum(-4.952775);
   hmc__19->SetMaximum(520.0413);
   hmc__19->SetEntries(1993.425);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",24,0,90);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(260.0207);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hbadmatch_stack_1->SetBinContent(1,3.770296);
   hbadmatch_stack_1->SetBinContent(2,1.553976);
   hbadmatch_stack_1->SetBinContent(3,3.051885);
   hbadmatch_stack_1->SetBinContent(4,4.105752);
   hbadmatch_stack_1->SetBinContent(5,2.050601);
   hbadmatch_stack_1->SetBinContent(6,0.9920881);
   hbadmatch_stack_1->SetBinContent(7,1.677961);
   hbadmatch_stack_1->SetBinContent(8,1.849652);
   hbadmatch_stack_1->SetBinContent(9,1.178602);
   hbadmatch_stack_1->SetBinContent(10,1.260179);
   hbadmatch_stack_1->SetBinContent(11,2.077816);
   hbadmatch_stack_1->SetBinContent(12,1.465526);
   hbadmatch_stack_1->SetBinContent(13,0.8566728);
   hbadmatch_stack_1->SetBinContent(14,1.86769);
   hbadmatch_stack_1->SetBinContent(15,0.7868615);
   hbadmatch_stack_1->SetBinContent(16,1.003227);
   hbadmatch_stack_1->SetBinContent(17,1.282979);
   hbadmatch_stack_1->SetBinContent(18,1.176911);
   hbadmatch_stack_1->SetBinContent(19,0.1967154);
   hbadmatch_stack_1->SetBinContent(20,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,1.539964);
   hbadmatch_stack_1->SetBinContent(23,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.8539582);
   hbadmatch_stack_1->SetBinContent(25,5.358644);
   hbadmatch_stack_1->SetBinError(1,1.035249);
   hbadmatch_stack_1->SetBinError(2,0.6003738);
   hbadmatch_stack_1->SetBinError(3,0.8846686);
   hbadmatch_stack_1->SetBinError(4,1.430612);
   hbadmatch_stack_1->SetBinError(5,0.7068742);
   hbadmatch_stack_1->SetBinError(6,0.439234);
   hbadmatch_stack_1->SetBinError(7,0.7171291);
   hbadmatch_stack_1->SetBinError(8,0.7297043);
   hbadmatch_stack_1->SetBinError(9,0.4811646);
   hbadmatch_stack_1->SetBinError(10,0.6456859);
   hbadmatch_stack_1->SetBinError(11,0.774093);
   hbadmatch_stack_1->SetBinError(12,0.6209405);
   hbadmatch_stack_1->SetBinError(13,0.4297967);
   hbadmatch_stack_1->SetBinError(14,0.6829883);
   hbadmatch_stack_1->SetBinError(15,0.3934307);
   hbadmatch_stack_1->SetBinError(16,0.512989);
   hbadmatch_stack_1->SetBinError(17,0.7035072);
   hbadmatch_stack_1->SetBinError(18,0.4804759);
   hbadmatch_stack_1->SetBinError(19,0.1967154);
   hbadmatch_stack_1->SetBinError(20,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.6394507);
   hbadmatch_stack_1->SetBinError(23,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.523061);
   hbadmatch_stack_1->SetBinError(25,1.311174);
   hbadmatch_stack_1->SetEntries(164);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hext_stack_2->SetBinContent(1,11.02119);
   hext_stack_2->SetBinContent(2,4.628173);
   hext_stack_2->SetBinContent(3,5.102613);
   hext_stack_2->SetBinContent(4,8.10439);
   hext_stack_2->SetBinContent(5,7.930035);
   hext_stack_2->SetBinContent(6,6.299231);
   hext_stack_2->SetBinContent(7,4.054399);
   hext_stack_2->SetBinContent(8,4.449409);
   hext_stack_2->SetBinContent(9,3.476217);
   hext_stack_2->SetBinContent(10,5.008821);
   hext_stack_2->SetBinContent(11,2.517386);
   hext_stack_2->SetBinContent(12,4.054399);
   hext_stack_2->SetBinContent(13,1.78639);
   hext_stack_2->SetBinContent(14,2.435184);
   hext_stack_2->SetBinContent(15,1.461993);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinContent(17,3.069618);
   hext_stack_2->SetBinContent(18,1.048213);
   hext_stack_2->SetBinContent(19,1.454812);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,0.3243973);
   hext_stack_2->SetBinContent(22,1.697008);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,12.31878);
   hext_stack_2->SetBinError(1,2.141709);
   hext_stack_2->SetBinError(2,1.291697);
   hext_stack_2->SetBinError(3,1.515354);
   hext_stack_2->SetBinError(4,1.81755);
   hext_stack_2->SetBinError(5,1.928947);
   hext_stack_2->SetBinError(6,1.710094);
   hext_stack_2->SetBinError(7,1.311223);
   hext_stack_2->SetBinError(8,1.396677);
   hext_stack_2->SetBinError(9,1.278674);
   hext_stack_2->SetBinError(10,1.517329);
   hext_stack_2->SetBinError(11,0.9575503);
   hext_stack_2->SetBinError(12,1.311223);
   hext_stack_2->SetBinError(13,0.8039566);
   hext_stack_2->SetBinError(14,0.9256422);
   hext_stack_2->SetBinError(15,0.7356036);
   hext_stack_2->SetBinError(16,0.4065989);
   hext_stack_2->SetBinError(17,1.212305);
   hext_stack_2->SetBinError(18,0.7595995);
   hext_stack_2->SetBinError(19,0.8615765);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,0.3243973);
   hext_stack_2->SetBinError(22,0.8873887);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,2.237823);
   hext_stack_2->SetEntries(235);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hdirt_stack_3->SetBinContent(1,0.3790882);
   hdirt_stack_3->SetBinContent(2,0.5570828);
   hdirt_stack_3->SetBinContent(3,0.2188956);
   hdirt_stack_3->SetBinContent(4,0.2188956);
   hdirt_stack_3->SetBinContent(5,0.9263791);
   hdirt_stack_3->SetBinContent(6,0.4377912);
   hdirt_stack_3->SetBinContent(7,0.1753185);
   hdirt_stack_3->SetBinContent(8,0.6085784);
   hdirt_stack_3->SetBinContent(12,0.00255526);
   hdirt_stack_3->SetBinContent(14,0.4377912);
   hdirt_stack_3->SetBinContent(16,0.2188956);
   hdirt_stack_3->SetBinContent(18,0.9067342);
   hdirt_stack_3->SetBinContent(19,0.1380715);
   hdirt_stack_3->SetBinContent(20,0.1651799);
   hdirt_stack_3->SetBinContent(23,0.3381872);
   hdirt_stack_3->SetBinContent(25,1.434139);
   hdirt_stack_3->SetBinError(1,0.2712507);
   hdirt_stack_3->SetBinError(2,0.4028472);
   hdirt_stack_3->SetBinError(3,0.2188956);
   hdirt_stack_3->SetBinError(4,0.2188956);
   hdirt_stack_3->SetBinError(5,0.5179861);
   hdirt_stack_3->SetBinError(6,0.3095651);
   hdirt_stack_3->SetBinError(7,0.1753185);
   hdirt_stack_3->SetBinError(8,0.3609533);
   hdirt_stack_3->SetBinError(12,0.00255526);
   hdirt_stack_3->SetBinError(14,0.3095651);
   hdirt_stack_3->SetBinError(16,0.2188956);
   hdirt_stack_3->SetBinError(18,0.4601815);
   hdirt_stack_3->SetBinError(19,0.1380715);
   hdirt_stack_3->SetBinError(20,0.1651799);
   hdirt_stack_3->SetBinError(23,0.3381872);
   hdirt_stack_3->SetBinError(25,0.6755433);
   hdirt_stack_3->SetEntries(33);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   houtFV_stack_4->SetBinContent(1,6.497518);
   houtFV_stack_4->SetBinContent(2,1.932541);
   houtFV_stack_4->SetBinContent(3,4.106273);
   houtFV_stack_4->SetBinContent(4,1.805704);
   houtFV_stack_4->SetBinContent(5,3.620943);
   houtFV_stack_4->SetBinContent(6,3.466255);
   houtFV_stack_4->SetBinContent(7,1.80248);
   houtFV_stack_4->SetBinContent(8,2.195754);
   houtFV_stack_4->SetBinContent(9,1.371936);
   houtFV_stack_4->SetBinContent(10,3.183643);
   houtFV_stack_4->SetBinContent(11,3.321102);
   houtFV_stack_4->SetBinContent(12,2.199135);
   houtFV_stack_4->SetBinContent(13,2.052291);
   houtFV_stack_4->SetBinContent(14,1.465817);
   houtFV_stack_4->SetBinContent(15,0.8753801);
   houtFV_stack_4->SetBinContent(16,1.41849);
   houtFV_stack_4->SetBinContent(17,0.7319179);
   houtFV_stack_4->SetBinContent(18,1.610679);
   houtFV_stack_4->SetBinContent(19,0.6221858);
   houtFV_stack_4->SetBinContent(20,1.268811);
   houtFV_stack_4->SetBinContent(21,0.9269427);
   houtFV_stack_4->SetBinContent(22,0.3900497);
   houtFV_stack_4->SetBinContent(23,0.8770706);
   houtFV_stack_4->SetBinContent(24,0.6803553);
   houtFV_stack_4->SetBinContent(25,7.616705);
   houtFV_stack_4->SetBinError(1,1.333831);
   houtFV_stack_4->SetBinError(2,0.65818);
   houtFV_stack_4->SetBinError(3,1.000664);
   houtFV_stack_4->SetBinError(4,0.7080169);
   houtFV_stack_4->SetBinError(5,0.8988449);
   houtFV_stack_4->SetBinError(6,0.9617119);
   houtFV_stack_4->SetBinError(7,0.6016806);
   houtFV_stack_4->SetBinError(8,0.7598403);
   houtFV_stack_4->SetBinError(9,0.5185478);
   houtFV_stack_4->SetBinError(10,0.9232191);
   houtFV_stack_4->SetBinError(11,0.9204367);
   houtFV_stack_4->SetBinError(12,0.7607114);
   houtFV_stack_4->SetBinError(13,0.7073425);
   houtFV_stack_4->SetBinError(14,0.6209406);
   houtFV_stack_4->SetBinError(15,0.5191111);
   houtFV_stack_4->SetBinError(16,0.5930641);
   houtFV_stack_4->SetBinError(17,0.438694);
   houtFV_stack_4->SetBinError(18,0.6806271);
   houtFV_stack_4->SetBinError(19,0.3601704);
   houtFV_stack_4->SetBinError(20,0.5889569);
   houtFV_stack_4->SetBinError(21,0.4800908);
   houtFV_stack_4->SetBinError(22,0.2758068);
   houtFV_stack_4->SetBinError(23,0.5197486);
   houtFV_stack_4->SetBinError(24,0.4810838);
   houtFV_stack_4->SetBinError(25,1.342593);
   houtFV_stack_4->SetEntries(240);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2201295);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.06834073);
   hNCpi0inFVcoh_stack_5->SetEntries(23);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.046086);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.9059218);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.7111177);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.604926);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.059872);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5709538);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6554859);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.7538042);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.5996859);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.8232222);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.9069222);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2620985);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2798147);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1630822);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4980546);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3295301);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1902537);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2404119);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3453893);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.237152);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3577516);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.3610006);
   hNCpi0inFVqe_stack_6->SetEntries(242);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVres_stack_7->SetBinContent(1,92.89775);
   hNCpi0inFVres_stack_7->SetBinContent(2,97.87095);
   hNCpi0inFVres_stack_7->SetBinContent(3,91.91438);
   hNCpi0inFVres_stack_7->SetBinContent(4,85.95927);
   hNCpi0inFVres_stack_7->SetBinContent(5,74.7655);
   hNCpi0inFVres_stack_7->SetBinContent(6,65.06107);
   hNCpi0inFVres_stack_7->SetBinContent(7,58.57246);
   hNCpi0inFVres_stack_7->SetBinContent(8,51.118);
   hNCpi0inFVres_stack_7->SetBinContent(9,42.87384);
   hNCpi0inFVres_stack_7->SetBinContent(10,33.97667);
   hNCpi0inFVres_stack_7->SetBinContent(11,28.93008);
   hNCpi0inFVres_stack_7->SetBinContent(12,28.47256);
   hNCpi0inFVres_stack_7->SetBinContent(13,25.52014);
   hNCpi0inFVres_stack_7->SetBinContent(14,21.87887);
   hNCpi0inFVres_stack_7->SetBinContent(15,17.07818);
   hNCpi0inFVres_stack_7->SetBinContent(16,16.03227);
   hNCpi0inFVres_stack_7->SetBinContent(17,10.3619);
   hNCpi0inFVres_stack_7->SetBinContent(18,12.06099);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.60155);
   hNCpi0inFVres_stack_7->SetBinContent(20,7.725508);
   hNCpi0inFVres_stack_7->SetBinContent(21,7.392204);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.127383);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.123414);
   hNCpi0inFVres_stack_7->SetBinContent(24,4.726742);
   hNCpi0inFVres_stack_7->SetBinContent(25,54.26773);
   hNCpi0inFVres_stack_7->SetBinError(1,3.15139);
   hNCpi0inFVres_stack_7->SetBinError(2,3.262739);
   hNCpi0inFVres_stack_7->SetBinError(3,3.125694);
   hNCpi0inFVres_stack_7->SetBinError(4,3.068795);
   hNCpi0inFVres_stack_7->SetBinError(5,2.846634);
   hNCpi0inFVres_stack_7->SetBinError(6,2.654828);
   hNCpi0inFVres_stack_7->SetBinError(7,2.479004);
   hNCpi0inFVres_stack_7->SetBinError(8,2.361736);
   hNCpi0inFVres_stack_7->SetBinError(9,2.149044);
   hNCpi0inFVres_stack_7->SetBinError(10,1.835735);
   hNCpi0inFVres_stack_7->SetBinError(11,1.694849);
   hNCpi0inFVres_stack_7->SetBinError(12,1.747927);
   hNCpi0inFVres_stack_7->SetBinError(13,1.673104);
   hNCpi0inFVres_stack_7->SetBinError(14,1.56501);
   hNCpi0inFVres_stack_7->SetBinError(15,1.277534);
   hNCpi0inFVres_stack_7->SetBinError(16,1.31935);
   hNCpi0inFVres_stack_7->SetBinError(17,1.035634);
   hNCpi0inFVres_stack_7->SetBinError(18,1.133914);
   hNCpi0inFVres_stack_7->SetBinError(19,1.099644);
   hNCpi0inFVres_stack_7->SetBinError(20,0.9027429);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9007649);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5770355);
   hNCpi0inFVres_stack_7->SetBinError(23,0.8307845);
   hNCpi0inFVres_stack_7->SetBinError(24,0.6842672);
   hNCpi0inFVres_stack_7->SetBinError(25,2.453742);
   hNCpi0inFVres_stack_7->SetEntries(17544);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVdis_stack_8->SetBinContent(1,15.41663);
   hNCpi0inFVdis_stack_8->SetBinContent(2,15.35104);
   hNCpi0inFVdis_stack_8->SetBinContent(3,15.5294);
   hNCpi0inFVdis_stack_8->SetBinContent(4,14.37753);
   hNCpi0inFVdis_stack_8->SetBinContent(5,14.9988);
   hNCpi0inFVdis_stack_8->SetBinContent(6,11.09793);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.429248);
   hNCpi0inFVdis_stack_8->SetBinContent(8,6.918063);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.761393);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.760626);
   hNCpi0inFVdis_stack_8->SetBinContent(11,6.688711);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.480714);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.655995);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.849552);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.502046);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.091844);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.110703);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.259244);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.587644);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.9760038);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.645444);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.43719);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.129122);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.7385219);
   hNCpi0inFVdis_stack_8->SetBinContent(25,11.72551);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.227901);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.293982);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.263186);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.230514);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.275578);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.043248);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.038387);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8284775);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.068438);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8311353);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.7901233);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.787575);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6975061);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.640289);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6754413);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4651901);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6444801);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4701832);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3135924);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2711014);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4516052);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4217465);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2907294);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2713408);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.070227);
   hNCpi0inFVdis_stack_8->SetEntries(3191);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.4188362);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.277838);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(25,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(20);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hCCpi0inFV_stack_10->SetBinContent(1,39.95102);
   hCCpi0inFV_stack_10->SetBinContent(2,21.48066);
   hCCpi0inFV_stack_10->SetBinContent(3,26.07956);
   hCCpi0inFV_stack_10->SetBinContent(4,20.25334);
   hCCpi0inFV_stack_10->SetBinContent(5,20.60697);
   hCCpi0inFV_stack_10->SetBinContent(6,20.73483);
   hCCpi0inFV_stack_10->SetBinContent(7,15.6121);
   hCCpi0inFV_stack_10->SetBinContent(8,12.44767);
   hCCpi0inFV_stack_10->SetBinContent(9,13.80546);
   hCCpi0inFV_stack_10->SetBinContent(10,10.79328);
   hCCpi0inFV_stack_10->SetBinContent(11,7.556231);
   hCCpi0inFV_stack_10->SetBinContent(12,8.501161);
   hCCpi0inFV_stack_10->SetBinContent(13,8.613148);
   hCCpi0inFV_stack_10->SetBinContent(14,6.018483);
   hCCpi0inFV_stack_10->SetBinContent(15,2.249007);
   hCCpi0inFV_stack_10->SetBinContent(16,5.188933);
   hCCpi0inFV_stack_10->SetBinContent(17,1.710423);
   hCCpi0inFV_stack_10->SetBinContent(18,4.05302);
   hCCpi0inFV_stack_10->SetBinContent(19,3.174259);
   hCCpi0inFV_stack_10->SetBinContent(20,1.712114);
   hCCpi0inFV_stack_10->SetBinContent(21,1.557426);
   hCCpi0inFV_stack_10->SetBinContent(22,4.158184);
   hCCpi0inFV_stack_10->SetBinContent(23,1.552875);
   hCCpi0inFV_stack_10->SetBinContent(24,0.9269427);
   hCCpi0inFV_stack_10->SetBinContent(25,15.10516);
   hCCpi0inFV_stack_10->SetBinError(1,3.154215);
   hCCpi0inFV_stack_10->SetBinError(2,2.362938);
   hCCpi0inFV_stack_10->SetBinError(3,2.499305);
   hCCpi0inFV_stack_10->SetBinError(4,2.280907);
   hCCpi0inFV_stack_10->SetBinError(5,2.305355);
   hCCpi0inFV_stack_10->SetBinError(6,2.303948);
   hCCpi0inFV_stack_10->SetBinError(7,1.962117);
   hCCpi0inFV_stack_10->SetBinError(8,1.809331);
   hCCpi0inFV_stack_10->SetBinError(9,1.896721);
   hCCpi0inFV_stack_10->SetBinError(10,1.62914);
   hCCpi0inFV_stack_10->SetBinError(11,1.455412);
   hCCpi0inFV_stack_10->SetBinError(12,1.468798);
   hCCpi0inFV_stack_10->SetBinError(13,1.464363);
   hCCpi0inFV_stack_10->SetBinError(14,1.194137);
   hCCpi0inFV_stack_10->SetBinError(15,0.7341869);
   hCCpi0inFV_stack_10->SetBinError(16,1.18094);
   hCCpi0inFV_stack_10->SetBinError(17,0.6196373);
   hCCpi0inFV_stack_10->SetBinError(18,1.019635);
   hCCpi0inFV_stack_10->SetBinError(19,0.8768439);
   hCCpi0inFV_stack_10->SetBinError(20,0.6201715);
   hCCpi0inFV_stack_10->SetBinError(21,0.7082233);
   hCCpi0inFV_stack_10->SetBinError(22,1.088497);
   hCCpi0inFV_stack_10->SetBinError(23,0.6015122);
   hCCpi0inFV_stack_10->SetBinError(24,0.4800908);
   hCCpi0inFV_stack_10->SetBinError(25,1.911224);
   hCCpi0inFV_stack_10->SetEntries(1165);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hNCinFV_stack_11->SetBinContent(1,20.29431);
   hNCinFV_stack_11->SetBinContent(2,15.15459);
   hNCinFV_stack_11->SetBinContent(3,14.93989);
   hNCinFV_stack_11->SetBinContent(4,11.25349);
   hNCinFV_stack_11->SetBinContent(5,14.89002);
   hNCinFV_stack_11->SetBinContent(6,10.16002);
   hNCinFV_stack_11->SetBinContent(7,11.27076);
   hNCinFV_stack_11->SetBinContent(8,6.83892);
   hNCinFV_stack_11->SetBinContent(9,7.429066);
   hNCinFV_stack_11->SetBinContent(10,4.162908);
   hNCinFV_stack_11->SetBinContent(11,6.594023);
   hNCinFV_stack_11->SetBinContent(12,4.575306);
   hNCinFV_stack_11->SetBinContent(13,2.732646);
   hNCinFV_stack_11->SetBinContent(14,3.284146);
   hNCinFV_stack_11->SetBinContent(15,4.588223);
   hNCinFV_stack_11->SetBinContent(16,2.9226);
   hNCinFV_stack_11->SetBinContent(17,1.518779);
   hNCinFV_stack_11->SetBinContent(18,3.072824);
   hNCinFV_stack_11->SetBinContent(19,1.858957);
   hNCinFV_stack_11->SetBinContent(20,1.463836);
   hNCinFV_stack_11->SetBinContent(21,2.732646);
   hNCinFV_stack_11->SetBinContent(22,2.484368);
   hNCinFV_stack_11->SetBinContent(23,1.660551);
   hNCinFV_stack_11->SetBinContent(24,1.610679);
   hNCinFV_stack_11->SetBinContent(25,18.9498);
   hNCinFV_stack_11->SetBinError(1,2.193843);
   hNCinFV_stack_11->SetBinError(2,1.912533);
   hNCinFV_stack_11->SetBinError(3,1.952032);
   hNCinFV_stack_11->SetBinError(4,1.6427);
   hNCinFV_stack_11->SetBinError(5,1.962162);
   hNCinFV_stack_11->SetBinError(6,1.606334);
   hNCinFV_stack_11->SetBinError(7,1.744368);
   hNCinFV_stack_11->SetBinError(8,1.316474);
   hNCinFV_stack_11->SetBinError(9,1.359851);
   hNCinFV_stack_11->SetBinError(10,0.9820014);
   hNCinFV_stack_11->SetBinError(11,1.317088);
   hNCinFV_stack_11->SetBinError(12,1.1776);
   hNCinFV_stack_11->SetBinError(13,0.8554385);
   hNCinFV_stack_11->SetBinError(14,0.832782);
   hNCinFV_stack_11->SetBinError(15,1.092434);
   hNCinFV_stack_11->SetBinError(16,0.8762551);
   hNCinFV_stack_11->SetBinError(17,0.5892709);
   hNCinFV_stack_11->SetBinError(18,0.9205954);
   hNCinFV_stack_11->SetBinError(19,0.6804124);
   hNCinFV_stack_11->SetBinError(20,0.620407);
   hNCinFV_stack_11->SetBinError(21,0.8554385);
   hNCinFV_stack_11->SetBinError(22,0.8556093);
   hNCinFV_stack_11->SetBinError(23,0.650847);
   hNCinFV_stack_11->SetBinError(24,0.6806271);
   hNCinFV_stack_11->SetBinError(25,2.211874);
   hNCinFV_stack_11->SetEntries(747);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnumuCCinFV_stack_12->SetBinContent(1,54.30499);
   hnumuCCinFV_stack_12->SetBinContent(2,9.162208);
   hnumuCCinFV_stack_12->SetBinContent(3,12.22925);
   hnumuCCinFV_stack_12->SetBinContent(4,8.295832);
   hnumuCCinFV_stack_12->SetBinContent(5,9.338943);
   hnumuCCinFV_stack_12->SetBinContent(6,8.002781);
   hnumuCCinFV_stack_12->SetBinContent(7,9.99958);
   hnumuCCinFV_stack_12->SetBinContent(8,6.355702);
   hnumuCCinFV_stack_12->SetBinContent(9,6.15339);
   hnumuCCinFV_stack_12->SetBinContent(10,7.983798);
   hnumuCCinFV_stack_12->SetBinContent(11,5.204213);
   hnumuCCinFV_stack_12->SetBinContent(12,6.540257);
   hnumuCCinFV_stack_12->SetBinContent(13,4.138056);
   hnumuCCinFV_stack_12->SetBinContent(14,4.218847);
   hnumuCCinFV_stack_12->SetBinContent(15,2.04354);
   hnumuCCinFV_stack_12->SetBinContent(16,2.167076);
   hnumuCCinFV_stack_12->SetBinContent(17,3.325125);
   hnumuCCinFV_stack_12->SetBinContent(18,2.968565);
   hnumuCCinFV_stack_12->SetBinContent(19,3.679822);
   hnumuCCinFV_stack_12->SetBinContent(20,2.306526);
   hnumuCCinFV_stack_12->SetBinContent(21,4.1401);
   hnumuCCinFV_stack_12->SetBinContent(22,2.021724);
   hnumuCCinFV_stack_12->SetBinContent(23,1.524722);
   hnumuCCinFV_stack_12->SetBinContent(24,1.959556);
   hnumuCCinFV_stack_12->SetBinContent(25,43.29861);
   hnumuCCinFV_stack_12->SetBinError(1,4.388229);
   hnumuCCinFV_stack_12->SetBinError(2,1.728762);
   hnumuCCinFV_stack_12->SetBinError(3,2.159216);
   hnumuCCinFV_stack_12->SetBinError(4,1.782589);
   hnumuCCinFV_stack_12->SetBinError(5,1.703775);
   hnumuCCinFV_stack_12->SetBinError(6,1.402469);
   hnumuCCinFV_stack_12->SetBinError(7,2.103439);
   hnumuCCinFV_stack_12->SetBinError(8,1.228741);
   hnumuCCinFV_stack_12->SetBinError(9,1.290061);
   hnumuCCinFV_stack_12->SetBinError(10,1.579051);
   hnumuCCinFV_stack_12->SetBinError(11,1.57422);
   hnumuCCinFV_stack_12->SetBinError(12,1.412113);
   hnumuCCinFV_stack_12->SetBinError(13,1.045397);
   hnumuCCinFV_stack_12->SetBinError(14,1.061198);
   hnumuCCinFV_stack_12->SetBinError(15,0.7373442);
   hnumuCCinFV_stack_12->SetBinError(16,0.6883788);
   hnumuCCinFV_stack_12->SetBinError(17,0.9463822);
   hnumuCCinFV_stack_12->SetBinError(18,0.8869721);
   hnumuCCinFV_stack_12->SetBinError(19,1.022829);
   hnumuCCinFV_stack_12->SetBinError(20,0.8427658);
   hnumuCCinFV_stack_12->SetBinError(21,2.530315);
   hnumuCCinFV_stack_12->SetBinError(22,0.7500174);
   hnumuCCinFV_stack_12->SetBinError(23,0.6347052);
   hnumuCCinFV_stack_12->SetBinError(24,0.7201684);
   hnumuCCinFV_stack_12->SetBinError(25,3.771805);
   hnumuCCinFV_stack_12->SetEntries(869);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hnueCCinFV_stack_13->SetBinContent(1,1.725724);
   hnueCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.1970832);
   hnueCCinFV_stack_13->SetBinContent(7,0.7855579);
   hnueCCinFV_stack_13->SetBinContent(9,0.795898);
   hnueCCinFV_stack_13->SetBinContent(14,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(15,0.2346262);
   hnueCCinFV_stack_13->SetBinContent(16,0.8770706);
   hnueCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.3866963);
   hnueCCinFV_stack_13->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(25,3.610069);
   hnueCCinFV_stack_13->SetBinError(1,0.8297576);
   hnueCCinFV_stack_13->SetBinError(2,0.1967154);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.1967157);
   hnueCCinFV_stack_13->SetBinError(7,0.465029);
   hnueCCinFV_stack_13->SetBinError(9,0.469411);
   hnueCCinFV_stack_13->SetBinError(14,0.1950249);
   hnueCCinFV_stack_13->SetBinError(15,0.2346262);
   hnueCCinFV_stack_13->SetBinError(16,0.5197486);
   hnueCCinFV_stack_13->SetBinError(19,0.3401776);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.3866963);
   hnueCCinFV_stack_13->SetBinError(24,0.1950249);
   hnueCCinFV_stack_13->SetBinError(25,0.9959957);
   hnueCCinFV_stack_13->SetEntries(40);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);
   hmcerror__20->SetBinContent(1,247.6387);
   hmcerror__20->SetBinContent(2,168.7938);
   hmcerror__20->SetBinContent(3,174.1062);
   hmcerror__20->SetBinContent(4,156.6903);
   hmcerror__20->SetBinContent(5,150.4668);
   hmcerror__20->SetBinContent(6,127.2713);
   hmcerror__20->SetBinContent(7,114.0066);
   hmcerror__20->SetBinContent(8,93.86953);
   hmcerror__20->SetBinContent(9,87.5996);
   hmcerror__20->SetBinContent(10,73.75751);
   hmcerror__20->SetBinContent(11,63.53077);
   hmcerror__20->SetBinContent(12,61.61213);
   hmcerror__20->SetBinContent(13,50.50846);
   hmcerror__20->SetBinContent(14,45.86032);
   hmcerror__20->SetBinContent(15,34.74039);
   hmcerror__20->SetBinContent(16,32.4944);
   hmcerror__20->SetBinContent(17,25.26456);
   hmcerror__20->SetBinContent(18,29.18508);
   hmcerror__20->SetBinContent(19,23.71);
   hmcerror__20->SetBinContent(20,16.91252);
   hmcerror__20->SetBinContent(21,18.97167);
   hmcerror__20->SetBinContent(22,18.2615);
   hmcerror__20->SetBinContent(23,14.28511);
   hmcerror__20->SetBinContent(24,12.18208);
   hmcerror__20->SetBinContent(25,174.7874);
   hmcerror__20->SetBinError(1,90.91529);
   hmcerror__20->SetBinError(2,77.77783);
   hmcerror__20->SetBinError(3,70.45094);
   hmcerror__20->SetBinError(4,66.17477);
   hmcerror__20->SetBinError(5,62.23696);
   hmcerror__20->SetBinError(6,55.83062);
   hmcerror__20->SetBinError(7,45.50908);
   hmcerror__20->SetBinError(8,40.79022);
   hmcerror__20->SetBinError(9,35.93287);
   hmcerror__20->SetBinError(10,28.94379);
   hmcerror__20->SetBinError(11,26.613);
   hmcerror__20->SetBinError(12,26.40423);
   hmcerror__20->SetBinError(13,22.87327);
   hmcerror__20->SetBinError(14,19.87944);
   hmcerror__20->SetBinError(15,16.99631);
   hmcerror__20->SetBinError(16,16.24529);
   hmcerror__20->SetBinError(17,11.38874);
   hmcerror__20->SetBinError(18,14.64064);
   hmcerror__20->SetBinError(19,12.99005);
   hmcerror__20->SetBinError(20,10.08573);
   hmcerror__20->SetBinError(21,10.05696);
   hmcerror__20->SetBinError(22,10.16884);
   hmcerror__20->SetBinError(23,9.969924);
   hmcerror__20->SetBinError(24,7.513573);
   hmcerror__20->SetBinError(25,60.13179);
   hmcerror__20->SetEntries(1993.425);

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
   
   Double_t _fx3025[24] = {
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
   Double_t _fy3025[24] = {
   205,
   124,
   116,
   120,
   118,
   74,
   88,
   71,
   56,
   54,
   49,
   39,
   36,
   31,
   26,
   16,
   20,
   14,
   18,
   14,
   17,
   15,
   8,
   6};
   Double_t _felx3025[24] = {
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
   Double_t _fely3025[24] = {
   14.31782,
   11.13553,
   10.77033,
   10.95445,
   10.86278,
   8.7275,
   9.5036,
   8.5518,
   7.6127,
   7.4785,
   7.1318,
   6.3813,
   6.1381,
   5.7094,
   5.2453,
   4.1628,
   4.6266,
   3.9102,
   4.4008,
   3.9102,
   4.2835,
   4.0385,
   3.0307,
   2.67925};
   Double_t _fehx3025[24] = {
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
   Double_t _fehy3025[24] = {
   14.31782,
   11.13553,
   10.77033,
   10.95445,
   10.86278,
   8.5253,
   9.3021,
   8.3496,
   7.4094,
   7.275,
   6.9277,
   6.1757,
   5.9318,
   5.5017,
   5.0358,
   3.9454,
   4.4133,
   3.6898,
   4.1858,
   3.6898,
   4.0673,
   3.8197,
   2.7896,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,99);
   Graph_Graph3025->SetMinimum(2.988675);
   Graph_Graph3025->SetMaximum(240.9175);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72#pm0.27","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.9/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1335.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 35.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 81.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 5.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 48.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  896.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  159.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 258.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 157.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 178.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[24] = {
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
   Double_t _fy3026[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[24] = {
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
   Double_t _fely3026[24] = {
   0.3671287,
   0.4607859,
   0.4046436,
   0.4223284,
   0.413626,
   0.4386741,
   0.3991793,
   0.4345417,
   0.4101944,
   0.3924182,
   0.4188994,
   0.4285557,
   0.4528602,
   0.433478,
   0.4892376,
   0.4999411,
   0.4507792,
   0.501648,
   0.5478722,
   0.5963467,
   0.5301041,
   0.5568458,
   0.6979241,
   0.6167727};
   Double_t _fehx3026[24] = {
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
   Double_t _fehy3026[24] = {
   0.3671287,
   0.4607859,
   0.4046436,
   0.4223284,
   0.413626,
   0.4386741,
   0.3991793,
   0.4345417,
   0.4101944,
   0.3924182,
   0.4188994,
   0.4285557,
   0.4528602,
   0.433478,
   0.4892376,
   0.4999411,
   0.4507792,
   0.501648,
   0.5478722,
   0.5963467,
   0.5301041,
   0.5568458,
   0.6979241,
   0.6167727};
   grae = new TGraphAsymmErrors(24,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,99);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
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
   
   Double_t _fx3027[24] = {
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
   Double_t _fy3027[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[24] = {
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
   Double_t _fely3027[24] = {
   0.3431848,
   0.4282277,
   0.3882216,
   0.3996215,
   0.3838172,
   0.3782194,
   0.3652048,
   0.3916239,
   0.3645774,
   0.3517889,
   0.3672844,
   0.3430694,
   0.3943519,
   0.3493684,
   0.3746483,
   0.3616922,
   0.311037,
   0.312811,
   0.3166767,
   0.3353451,
   0.3582885,
   0.3062994,
   0.3651008,
   0.3287925};
   Double_t _fehx3027[24] = {
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
   Double_t _fehy3027[24] = {
   0.3431848,
   0.4282277,
   0.3882216,
   0.3996215,
   0.3838172,
   0.3782194,
   0.3652048,
   0.3916239,
   0.3645774,
   0.3517889,
   0.3672844,
   0.3430694,
   0.3943519,
   0.3493684,
   0.3746483,
   0.3616922,
   0.311037,
   0.312811,
   0.3166767,
   0.3353451,
   0.3582885,
   0.3062994,
   0.3651008,
   0.3287925};
   grae = new TGraphAsymmErrors(24,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,99);
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
   
   Double_t _fx3028[24] = {
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
   Double_t _fy3028[24] = {
   0.8278188,
   0.734624,
   0.6662601,
   0.7658418,
   0.7842263,
   0.5814351,
   0.7718849,
   0.756369,
   0.6392723,
   0.7321289,
   0.7712799,
   0.6329922,
   0.7127519,
   0.6759656,
   0.7484083,
   0.4923925,
   0.7916226,
   0.4796972,
   0.7591734,
   0.8277891,
   0.8960727,
   0.8214001,
   0.5600236,
   0.4925268};
   Double_t _felx3028[24] = {
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
   Double_t _fely3028[24] = {
   0.05781737,
   0.06597118,
   0.0618607,
   0.06991147,
   0.07219389,
   0.06857399,
   0.08336006,
   0.09110305,
   0.08690336,
   0.1013931,
   0.1122574,
   0.1035721,
   0.1215262,
   0.1244954,
   0.1509856,
   0.1281082,
   0.1831261,
   0.1339794,
   0.1856095,
   0.2312015,
   0.225784,
   0.2211483,
   0.2121579,
   0.2199337};
   Double_t _fehx3028[24] = {
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
   Double_t _fehy3028[24] = {
   0.05781737,
   0.06597118,
   0.0618607,
   0.06991147,
   0.07219389,
   0.06698525,
   0.08159262,
   0.08894899,
   0.08458258,
   0.09863403,
   0.1090448,
   0.1002351,
   0.1174417,
   0.1199664,
   0.1449552,
   0.1214178,
   0.1746834,
   0.1264276,
   0.1765416,
   0.2181697,
   0.214388,
   0.2091668,
   0.1952802,
   0.1985359};
   grae = new TGraphAsymmErrors(24,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,99);
   Graph_Graph3028->SetMinimum(0.1888063);
   Graph_Graph3028->SetMaximum(1.194248);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_low_all",24,0,90);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
