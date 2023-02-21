#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 18:59:34 2022) by ROOT version 6.26/00
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
   pad1->Range(-69.23077,-20.86,507.6923,2306.677);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmc__10->SetBinContent(1,806.9359);
   hmc__10->SetBinContent(2,971.2427);
   hmc__10->SetBinContent(3,744.0624);
   hmc__10->SetBinContent(4,501.5559);
   hmc__10->SetBinContent(5,304.5654);
   hmc__10->SetBinContent(6,167.3802);
   hmc__10->SetBinContent(7,99.35211);
   hmc__10->SetBinContent(8,51.5306);
   hmc__10->SetBinContent(9,26.19922);
   hmc__10->SetBinContent(10,24.35327);
   hmc__10->SetBinContent(11,12.96575);
   hmc__10->SetBinContent(12,7.675631);
   hmc__10->SetBinContent(13,4.588764);
   hmc__10->SetBinContent(14,1.331937);
   hmc__10->SetBinContent(15,2.211554);
   hmc__10->SetBinContent(16,3.508662);
   hmc__10->SetBinError(1,179.392);
   hmc__10->SetBinError(2,203.2567);
   hmc__10->SetBinError(3,170.189);
   hmc__10->SetBinError(4,120.6458);
   hmc__10->SetBinError(5,75.91392);
   hmc__10->SetBinError(6,47.27099);
   hmc__10->SetBinError(7,34.5618);
   hmc__10->SetBinError(8,19.76926);
   hmc__10->SetBinError(9,11.46334);
   hmc__10->SetBinError(10,13.11871);
   hmc__10->SetBinError(11,8.376146);
   hmc__10->SetBinError(12,7.446268);
   hmc__10->SetBinError(13,7.28865);
   hmc__10->SetBinError(14,2.068206);
   hmc__10->SetBinError(15,7.312418);
   hmc__10->SetBinError(16,7.168499);
   hmc__10->SetMinimum(-20.86);
   hmc__10->SetMaximum(2190.3);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",15,0,450);
   hs4_stack_4->SetMinimum(-1.150846e-08);
   hs4_stack_4->SetMaximum(1019.805);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hbadmatch_stack_1->SetBinContent(1,21.07682);
   hbadmatch_stack_1->SetBinContent(2,27.97996);
   hbadmatch_stack_1->SetBinContent(3,22.99216);
   hbadmatch_stack_1->SetBinContent(4,13.21575);
   hbadmatch_stack_1->SetBinContent(5,5.696466);
   hbadmatch_stack_1->SetBinContent(6,2.311939);
   hbadmatch_stack_1->SetBinContent(7,1.167822);
   hbadmatch_stack_1->SetBinContent(8,1.425625);
   hbadmatch_stack_1->SetBinContent(9,0.8174938);
   hbadmatch_stack_1->SetBinContent(10,0.3401776);
   hbadmatch_stack_1->SetBinContent(16,0.5610657);
   hbadmatch_stack_1->SetBinError(1,2.562332);
   hbadmatch_stack_1->SetBinError(2,3.277331);
   hbadmatch_stack_1->SetBinError(3,2.647603);
   hbadmatch_stack_1->SetBinError(4,1.860112);
   hbadmatch_stack_1->SetBinError(5,2.037241);
   hbadmatch_stack_1->SetBinError(6,0.7536292);
   hbadmatch_stack_1->SetBinError(7,0.5369923);
   hbadmatch_stack_1->SetBinError(8,0.6138869);
   hbadmatch_stack_1->SetBinError(9,0.4960918);
   hbadmatch_stack_1->SetBinError(10,0.3401776);
   hbadmatch_stack_1->SetBinError(16,0.5610657);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hext_stack_2->SetBinContent(1,144.1061);
   hext_stack_2->SetBinContent(2,169.1839);
   hext_stack_2->SetBinContent(3,80.02209);
   hext_stack_2->SetBinContent(4,47.86102);
   hext_stack_2->SetBinContent(5,17.07105);
   hext_stack_2->SetBinContent(6,10.92463);
   hext_stack_2->SetBinContent(7,3.979379);
   hext_stack_2->SetBinContent(8,1.137595);
   hext_stack_2->SetBinContent(9,1.461993);
   hext_stack_2->SetBinContent(10,0.9660115);
   hext_stack_2->SetBinContent(11,0.4065989);
   hext_stack_2->SetBinContent(13,0.3243973);
   hext_stack_2->SetBinError(1,8.113118);
   hext_stack_2->SetBinError(2,8.82857);
   hext_stack_2->SetBinError(3,5.882095);
   hext_stack_2->SetBinError(4,4.72845);
   hext_stack_2->SetBinError(5,2.769006);
   hext_stack_2->SetBinError(6,2.220187);
   hext_stack_2->SetBinError(7,1.207483);
   hext_stack_2->SetBinError(8,0.6602113);
   hext_stack_2->SetBinError(9,0.7356036);
   hext_stack_2->SetBinError(10,0.7189592);
   hext_stack_2->SetBinError(11,0.4065989);
   hext_stack_2->SetBinError(13,0.3243973);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hdirt_stack_3->SetBinContent(1,15.9409);
   hdirt_stack_3->SetBinContent(2,19.27015);
   hdirt_stack_3->SetBinContent(3,11.74297);
   hdirt_stack_3->SetBinContent(4,6.981999);
   hdirt_stack_3->SetBinContent(5,1.866161);
   hdirt_stack_3->SetBinContent(6,0.8366207);
   hdirt_stack_3->SetBinContent(7,0.4142698);
   hdirt_stack_3->SetBinError(1,2.085803);
   hdirt_stack_3->SetBinError(2,2.366841);
   hdirt_stack_3->SetBinError(3,1.834975);
   hdirt_stack_3->SetBinError(4,1.693814);
   hdirt_stack_3->SetBinError(5,0.7143893);
   hdirt_stack_3->SetBinError(6,0.5048718);
   hdirt_stack_3->SetBinError(7,0.4142698);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   houtFV_stack_4->SetBinContent(1,116.725);
   houtFV_stack_4->SetBinContent(2,148.907);
   houtFV_stack_4->SetBinContent(3,109.2316);
   houtFV_stack_4->SetBinContent(4,46.46135);
   houtFV_stack_4->SetBinContent(5,24.92777);
   houtFV_stack_4->SetBinContent(6,14.77422);
   houtFV_stack_4->SetBinContent(7,8.105257);
   houtFV_stack_4->SetBinContent(8,3.578618);
   houtFV_stack_4->SetBinContent(9,2.018627);
   houtFV_stack_4->SetBinContent(10,0.8753801);
   houtFV_stack_4->SetBinContent(11,0.5352025);
   houtFV_stack_4->SetBinContent(12,0.1967154);
   houtFV_stack_4->SetBinContent(14,0.1967154);
   houtFV_stack_4->SetBinContent(15,0.2090315);
   houtFV_stack_4->SetBinError(1,5.41735);
   houtFV_stack_4->SetBinError(2,6.28544);
   houtFV_stack_4->SetBinError(3,5.266815);
   houtFV_stack_4->SetBinError(4,3.38881);
   houtFV_stack_4->SetBinError(5,2.49723);
   houtFV_stack_4->SetBinError(6,1.893487);
   houtFV_stack_4->SetBinError(7,1.424912);
   houtFV_stack_4->SetBinError(8,0.9557769);
   houtFV_stack_4->SetBinError(9,0.7393034);
   houtFV_stack_4->SetBinError(10,0.5191111);
   houtFV_stack_4->SetBinError(11,0.3921167);
   houtFV_stack_4->SetBinError(12,0.1967154);
   houtFV_stack_4->SetBinError(14,0.1967154);
   houtFV_stack_4->SetBinError(15,0.2090315);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,22.64178);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,24.9814);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,19.23405);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,14.08939);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.81097);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,7.253811);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.206814);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.56858);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3790322);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.104168);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8766301);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7326903);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.06518023);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.832014);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.810908);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.487722);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.331058);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.420549);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9387413);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8219424);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7287678);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1039847);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.4097263);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5741882);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3936933);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04656421);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.097318);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.239955);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.524779);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.177816);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9115398);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2683625);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7775519);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.06563845);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.04146549);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.3245981);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3673211);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4570806);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2821497);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1339807);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3361537);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03300438);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02971407);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03728024);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVres_stack_7->SetBinContent(1,244.5846);
   hNCpi0inFVres_stack_7->SetBinContent(2,300.3589);
   hNCpi0inFVres_stack_7->SetBinContent(3,236.6323);
   hNCpi0inFVres_stack_7->SetBinContent(4,164.515);
   hNCpi0inFVres_stack_7->SetBinContent(5,100.4362);
   hNCpi0inFVres_stack_7->SetBinContent(6,49.30979);
   hNCpi0inFVres_stack_7->SetBinContent(7,26.09803);
   hNCpi0inFVres_stack_7->SetBinContent(8,14.29272);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.572998);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.04559);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.870177);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.392204);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.7721903);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.2769832);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.1691078);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.1671536);
   hNCpi0inFVres_stack_7->SetBinError(1,5.451452);
   hNCpi0inFVres_stack_7->SetBinError(2,5.930746);
   hNCpi0inFVres_stack_7->SetBinError(3,5.237475);
   hNCpi0inFVres_stack_7->SetBinError(4,4.490939);
   hNCpi0inFVres_stack_7->SetBinError(5,3.395117);
   hNCpi0inFVres_stack_7->SetBinError(6,2.271537);
   hNCpi0inFVres_stack_7->SetBinError(7,1.706809);
   hNCpi0inFVres_stack_7->SetBinError(8,1.243834);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9083007);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8682227);
   hNCpi0inFVres_stack_7->SetBinError(11,1.035266);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4708046);
   hNCpi0inFVres_stack_7->SetBinError(13,0.229391);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1210821);
   hNCpi0inFVres_stack_7->SetBinError(15,0.09071981);
   hNCpi0inFVres_stack_7->SetBinError(16,0.1033061);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVdis_stack_8->SetBinContent(1,42.45563);
   hNCpi0inFVdis_stack_8->SetBinContent(2,55.52523);
   hNCpi0inFVdis_stack_8->SetBinContent(3,50.7457);
   hNCpi0inFVdis_stack_8->SetBinContent(4,34.93661);
   hNCpi0inFVdis_stack_8->SetBinContent(5,20.58437);
   hNCpi0inFVdis_stack_8->SetBinContent(6,13.16752);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.756062);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.630328);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.063137);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.738181);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.9413562);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.280592);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.563671);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.07644836);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.1681847);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.1967451);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.333269);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.55131);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.563812);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.16221);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.511593);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.232896);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9179356);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.734495);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3295432);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7044705);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2614781);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4984989);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3253089);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.06198963);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.08885005);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.1086639);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.1472722);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1253403);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1303248);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.05555773);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.06358271);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hCCpi0inFV_stack_10->SetBinContent(1,94.25722);
   hCCpi0inFV_stack_10->SetBinContent(2,118.4949);
   hCCpi0inFV_stack_10->SetBinContent(3,115.3997);
   hCCpi0inFV_stack_10->SetBinContent(4,92.30905);
   hCCpi0inFV_stack_10->SetBinContent(5,69.86478);
   hCCpi0inFV_stack_10->SetBinContent(6,33.21966);
   hCCpi0inFV_stack_10->SetBinContent(7,22.57602);
   hCCpi0inFV_stack_10->SetBinContent(8,12.70415);
   hCCpi0inFV_stack_10->SetBinContent(9,8.015831);
   hCCpi0inFV_stack_10->SetBinContent(10,4.609591);
   hCCpi0inFV_stack_10->SetBinContent(11,2.7859);
   hCCpi0inFV_stack_10->SetBinContent(12,1.320373);
   hCCpi0inFV_stack_10->SetBinContent(13,1.517089);
   hCCpi0inFV_stack_10->SetBinContent(15,1.26712);
   hCCpi0inFV_stack_10->SetBinContent(16,0.7834804);
   hCCpi0inFV_stack_10->SetBinError(1,4.893898);
   hCCpi0inFV_stack_10->SetBinError(2,5.416858);
   hCCpi0inFV_stack_10->SetBinError(3,5.397661);
   hCCpi0inFV_stack_10->SetBinError(4,4.839463);
   hCCpi0inFV_stack_10->SetBinError(5,4.210732);
   hCCpi0inFV_stack_10->SetBinError(6,2.839551);
   hCCpi0inFV_stack_10->SetBinError(7,2.446269);
   hCCpi0inFV_stack_10->SetBinError(8,1.771823);
   hCCpi0inFV_stack_10->SetBinError(9,1.401414);
   hCCpi0inFV_stack_10->SetBinError(10,1.001695);
   hCCpi0inFV_stack_10->SetBinError(11,0.8327353);
   hCCpi0inFV_stack_10->SetBinError(12,0.5548703);
   hCCpi0inFV_stack_10->SetBinError(13,0.5887087);
   hCCpi0inFV_stack_10->SetBinError(15,0.5883944);
   hCCpi0inFV_stack_10->SetBinError(16,0.3917439);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hNCinFV_stack_11->SetBinContent(1,42.31667);
   hNCinFV_stack_11->SetBinContent(2,41.40176);
   hNCinFV_stack_11->SetBinContent(3,38.82609);
   hNCinFV_stack_11->SetBinContent(4,36.22948);
   hNCinFV_stack_11->SetBinContent(5,23.58676);
   hNCinFV_stack_11->SetBinContent(6,16.87008);
   hNCinFV_stack_11->SetBinContent(7,13.21892);
   hNCinFV_stack_11->SetBinContent(8,5.054024);
   hNCinFV_stack_11->SetBinContent(9,2.4123);
   hNCinFV_stack_11->SetBinContent(10,5.114672);
   hNCinFV_stack_11->SetBinContent(11,2.227819);
   hNCinFV_stack_11->SetBinContent(12,1.911505);
   hNCinFV_stack_11->SetBinContent(13,0.9544964);
   hNCinFV_stack_11->SetBinContent(14,0.3917402);
   hNCinFV_stack_11->SetBinContent(16,1.309469);
   hNCinFV_stack_11->SetBinError(1,3.361138);
   hNCinFV_stack_11->SetBinError(2,3.338049);
   hNCinFV_stack_11->SetBinError(3,3.040777);
   hNCinFV_stack_11->SetBinError(4,3.260341);
   hNCinFV_stack_11->SetBinError(5,2.578098);
   hNCinFV_stack_11->SetBinError(6,2.091859);
   hNCinFV_stack_11->SetBinError(7,2.292447);
   hNCinFV_stack_11->SetBinError(8,1.309565);
   hNCinFV_stack_11->SetBinError(9,0.8324589);
   hNCinFV_stack_11->SetBinError(10,1.320374);
   hNCinFV_stack_11->SetBinError(11,0.9534236);
   hNCinFV_stack_11->SetBinError(12,0.8726052);
   hNCinFV_stack_11->SetBinError(13,0.6262496);
   hNCinFV_stack_11->SetBinError(14,0.2770047);
   hNCinFV_stack_11->SetBinError(16,0.7243826);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnumuCCinFV_stack_12->SetBinContent(1,49.56106);
   hnumuCCinFV_stack_12->SetBinContent(2,57.16803);
   hnumuCCinFV_stack_12->SetBinContent(3,53.40074);
   hnumuCCinFV_stack_12->SetBinContent(4,40.45584);
   hnumuCCinFV_stack_12->SetBinContent(5,26.49102);
   hnumuCCinFV_stack_12->SetBinContent(6,16.61233);
   hnumuCCinFV_stack_12->SetBinContent(7,10.68791);
   hnumuCCinFV_stack_12->SetBinContent(8,5.209786);
   hnumuCCinFV_stack_12->SetBinContent(9,2.44065);
   hnumuCCinFV_stack_12->SetBinContent(10,2.278376);
   hnumuCCinFV_stack_12->SetBinContent(11,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(12,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(13,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(14,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(15,0.3981096);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3934307);
   hnumuCCinFV_stack_12->SetBinError(1,4.046098);
   hnumuCCinFV_stack_12->SetBinError(2,4.355864);
   hnumuCCinFV_stack_12->SetBinError(3,4.313438);
   hnumuCCinFV_stack_12->SetBinError(4,4.380112);
   hnumuCCinFV_stack_12->SetBinError(5,2.757475);
   hnumuCCinFV_stack_12->SetBinError(6,2.0763);
   hnumuCCinFV_stack_12->SetBinError(7,1.688958);
   hnumuCCinFV_stack_12->SetBinError(8,1.150362);
   hnumuCCinFV_stack_12->SetBinError(9,0.7587757);
   hnumuCCinFV_stack_12->SetBinError(10,0.7425285);
   hnumuCCinFV_stack_12->SetBinError(11,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(12,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(13,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(14,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(15,0.3981096);
   hnumuCCinFV_stack_12->SetBinError(16,0.2781975);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hnueCCinFV_stack_13->SetBinContent(1,11.88279);
   hnueCCinFV_stack_13->SetBinContent(2,6.321341);
   hnueCCinFV_stack_13->SetBinContent(3,3.622677);
   hnueCCinFV_stack_13->SetBinContent(4,3.588838);
   hnueCCinFV_stack_13->SetBinContent(5,1.897891);
   hnueCCinFV_stack_13->SetBinContent(6,1.322064);
   hnueCCinFV_stack_13->SetBinContent(7,1.075993);
   hnueCCinFV_stack_13->SetBinContent(8,0.8877128);
   hnueCCinFV_stack_13->SetBinContent(10,1.281124);
   hnueCCinFV_stack_13->SetBinContent(11,0.536893);
   hnueCCinFV_stack_13->SetBinContent(12,0.41253);
   hnueCCinFV_stack_13->SetBinError(1,2.578576);
   hnueCCinFV_stack_13->SetBinError(2,1.364828);
   hnueCCinFV_stack_13->SetBinError(3,1.001801);
   hnueCCinFV_stack_13->SetBinError(4,1.53409);
   hnueCCinFV_stack_13->SetBinError(5,0.6859952);
   hnueCCinFV_stack_13->SetBinError(6,0.5554667);
   hnueCCinFV_stack_13->SetBinError(7,1.075993);
   hnueCCinFV_stack_13->SetBinError(8,0.4469403);
   hnueCCinFV_stack_13->SetBinError(10,0.6891595);
   hnueCCinFV_stack_13->SetBinError(11,0.3929602);
   hnueCCinFV_stack_13->SetBinError(12,0.2921355);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);
   hmcerror__11->SetBinContent(1,806.9359);
   hmcerror__11->SetBinContent(2,971.2427);
   hmcerror__11->SetBinContent(3,744.0624);
   hmcerror__11->SetBinContent(4,501.5559);
   hmcerror__11->SetBinContent(5,304.5654);
   hmcerror__11->SetBinContent(6,167.3802);
   hmcerror__11->SetBinContent(7,99.35211);
   hmcerror__11->SetBinContent(8,51.5306);
   hmcerror__11->SetBinContent(9,26.19922);
   hmcerror__11->SetBinContent(10,24.35327);
   hmcerror__11->SetBinContent(11,12.96575);
   hmcerror__11->SetBinContent(12,7.675631);
   hmcerror__11->SetBinContent(13,4.588764);
   hmcerror__11->SetBinContent(14,1.331937);
   hmcerror__11->SetBinContent(15,2.211554);
   hmcerror__11->SetBinContent(16,3.508662);
   hmcerror__11->SetBinError(1,179.392);
   hmcerror__11->SetBinError(2,203.2567);
   hmcerror__11->SetBinError(3,170.189);
   hmcerror__11->SetBinError(4,120.6458);
   hmcerror__11->SetBinError(5,75.91392);
   hmcerror__11->SetBinError(6,47.27099);
   hmcerror__11->SetBinError(7,34.5618);
   hmcerror__11->SetBinError(8,19.76926);
   hmcerror__11->SetBinError(9,11.46334);
   hmcerror__11->SetBinError(10,13.11871);
   hmcerror__11->SetBinError(11,8.376146);
   hmcerror__11->SetBinError(12,7.446268);
   hmcerror__11->SetBinError(13,7.28865);
   hmcerror__11->SetBinError(14,2.068206);
   hmcerror__11->SetBinError(15,7.312418);
   hmcerror__11->SetBinError(16,7.168499);
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
   
   Double_t _fx3013[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3013[15] = {
   826,
   1043,
   803,
   521,
   270,
   152,
   81,
   51,
   25,
   22,
   10,
   8,
   3,
   1,
   3};
   Double_t _felx3013[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3013[15] = {
   28.74022,
   32.29551,
   28.33725,
   22.82542,
   16.43168,
   12.32883,
   9.1239,
   7.2725,
   5.1474,
   4.8417,
   3.34883,
   3.0307,
   2.143368,
   1,
   2.143368};
   Double_t _fehx3013[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3013[15] = {
   28.74022,
   32.29551,
   28.33725,
   22.82542,
   16.43168,
   12.32883,
   8.9221,
   7.0686,
   4.9374,
   4.6299,
   3.1179,
   2.7896,
   1.72422,
   1.35971,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(15,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,495);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(1182.825);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.3/15","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3819.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  109.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1154.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  237.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 578.3","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 230.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 266.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-69.3,-0.5333333,508.2,2.133333);
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
   
   Double_t _fx3014[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3014[15] = {
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3014[15] = {
   0.2223126,
   0.2092749,
   0.2287295,
   0.2405431,
   0.2492533,
   0.2824168,
   0.3478718,
   0.3836412,
   0.4375453,
   0.5386836,
   0.6460211,
   0.9701181,
   1.588369,
   1.552781,
   3.306461};
   Double_t _fehx3014[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3014[15] = {
   0.2223126,
   0.2092749,
   0.2287295,
   0.2405431,
   0.2492533,
   0.2824168,
   0.3478718,
   0.3836412,
   0.4375453,
   0.5386836,
   0.6460211,
   0.9701181,
   1.588369,
   1.552781,
   3.306461};
   grae = new TGraphAsymmErrors(15,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,495);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3015[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3015[15] = {
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3015[15] = {
   0.1836538,
   0.1845058,
   0.2023057,
   0.2101475,
   0.2253735,
   0.2387595,
   0.2655149,
   0.2656162,
   0.2548932,
   0.2567428,
   0.3665933,
   0.3697769,
   0.3746255,
   0.6354015,
   0.449684};
   Double_t _fehx3015[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3015[15] = {
   0.1836538,
   0.1845058,
   0.2023057,
   0.2101475,
   0.2253735,
   0.2387595,
   0.2655149,
   0.2656162,
   0.2548932,
   0.2567428,
   0.3665933,
   0.3697769,
   0.3746255,
   0.6354015,
   0.449684};
   grae = new TGraphAsymmErrors(15,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,495);
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
   
   Double_t _fx3016[15] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435};
   Double_t _fy3016[15] = {
   1.023625,
   1.073882,
   1.079211,
   1.038768,
   0.8865092,
   0.908112,
   0.8152821,
   0.9897032,
   0.954227,
   0.9033694,
   0.771263,
   1.04226,
   0.6537708,
   0.7507864,
   1.356512};
   Double_t _felx3016[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3016[15] = {
   0.03561648,
   0.03325174,
   0.03808451,
   0.04550923,
   0.05395123,
   0.07365761,
   0.09183398,
   0.1411297,
   0.1964715,
   0.1988111,
   0.2582829,
   0.394847,
   0.4670905,
   0.7507864,
   0.9691683};
   Double_t _fehx3016[15] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3016[15] = {
   0.03561648,
   0.03325174,
   0.03808451,
   0.04550923,
   0.05395123,
   0.07365761,
   0.08980282,
   0.1371729,
   0.188456,
   0.1901141,
   0.2404721,
   0.3634359,
   0.3757482,
   1.020852,
   0.7796418};
   grae = new TGraphAsymmErrors(15,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,495);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(2.349769);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",15,0,450);

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
   TLine *line = new TLine(0,1,450,1);
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
