#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 15:23:41 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
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
   pad1->Range(-13.84615,-1.462901,101.5385,123.2687);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);
   hmc__4->SetBinContent(1,73.14505);
   hmc__4->SetBinContent(2,46.24295);
   hmc__4->SetBinContent(3,36.89981);
   hmc__4->SetBinContent(4,29.19741);
   hmc__4->SetBinContent(5,25.10917);
   hmc__4->SetBinContent(6,17.93534);
   hmc__4->SetBinContent(7,14.42574);
   hmc__4->SetBinContent(8,12.58);
   hmc__4->SetBinContent(9,10.52756);
   hmc__4->SetBinContent(10,7.777267);
   hmc__4->SetBinContent(11,5.977695);
   hmc__4->SetBinContent(12,3.509946);
   hmc__4->SetBinContent(13,3.56072);
   hmc__4->SetBinContent(14,2.661551);
   hmc__4->SetBinContent(15,2.824482);
   hmc__4->SetBinContent(16,1.791547);
   hmc__4->SetBinContent(17,1.489406);
   hmc__4->SetBinContent(18,1.15694);
   hmc__4->SetBinContent(19,8.712538);
   hmc__4->SetBinError(1,16.03021);
   hmc__4->SetBinError(2,12.10281);
   hmc__4->SetBinError(3,9.994153);
   hmc__4->SetBinError(4,7.644213);
   hmc__4->SetBinError(5,6.746361);
   hmc__4->SetBinError(6,5.318729);
   hmc__4->SetBinError(7,4.716229);
   hmc__4->SetBinError(8,4.346985);
   hmc__4->SetBinError(9,3.392544);
   hmc__4->SetBinError(10,3.577102);
   hmc__4->SetBinError(11,3.587767);
   hmc__4->SetBinError(12,2.008532);
   hmc__4->SetBinError(13,1.838375);
   hmc__4->SetBinError(14,1.428513);
   hmc__4->SetBinError(15,1.593218);
   hmc__4->SetBinError(16,1.425309);
   hmc__4->SetBinError(17,1.104369);
   hmc__4->SetBinError(18,1.183232);
   hmc__4->SetBinError(19,3.450051);
   hmc__4->SetMinimum(-1.462901);
   hmc__4->SetMaximum(117.0321);
   hmc__4->SetEntries(300.4418);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",18,0,90);
   hs2_stack_2->SetMinimum(-1.084988e-09);
   hs2_stack_2->SetMaximum(76.8023);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);
   hbadmatch_stack_1->SetBinContent(1,1.04619);
   hbadmatch_stack_1->SetBinContent(2,0.4032854);
   hbadmatch_stack_1->SetBinContent(3,0.5711433);
   hbadmatch_stack_1->SetBinContent(4,0.5802366);
   hbadmatch_stack_1->SetBinContent(5,0.2988333);
   hbadmatch_stack_1->SetBinContent(6,0.1781249);
   hbadmatch_stack_1->SetBinContent(7,0.5227136);
   hbadmatch_stack_1->SetBinContent(8,0.3964069);
   hbadmatch_stack_1->SetBinContent(9,0.3073503);
   hbadmatch_stack_1->SetBinContent(10,0.158587);
   hbadmatch_stack_1->SetBinContent(11,0.102792);
   hbadmatch_stack_1->SetBinContent(12,0.1076774);
   hbadmatch_stack_1->SetBinContent(13,0.2080617);
   hbadmatch_stack_1->SetBinContent(14,0.1834687);
   hbadmatch_stack_1->SetBinContent(15,0.123166);
   hbadmatch_stack_1->SetBinContent(16,0.06195629);
   hbadmatch_stack_1->SetBinContent(17,0.03184314);
   hbadmatch_stack_1->SetBinContent(18,0.06195629);
   hbadmatch_stack_1->SetBinContent(19,0.5377367);
   hbadmatch_stack_1->SetBinError(1,0.2475766);
   hbadmatch_stack_1->SetBinError(2,0.1318099);
   hbadmatch_stack_1->SetBinError(3,0.1726338);
   hbadmatch_stack_1->SetBinError(4,0.1844924);
   hbadmatch_stack_1->SetBinError(5,0.1265093);
   hbadmatch_stack_1->SetBinError(6,0.09175862);
   hbadmatch_stack_1->SetBinError(7,0.3649635);
   hbadmatch_stack_1->SetBinError(8,0.1519928);
   hbadmatch_stack_1->SetBinError(9,0.1214311);
   hbadmatch_stack_1->SetBinError(10,0.09603769);
   hbadmatch_stack_1->SetBinError(11,0.06632413);
   hbadmatch_stack_1->SetBinError(12,0.08141956);
   hbadmatch_stack_1->SetBinError(13,0.1122285);
   hbadmatch_stack_1->SetBinError(14,0.1147122);
   hbadmatch_stack_1->SetBinError(15,0.06914088);
   hbadmatch_stack_1->SetBinError(16,0.06195629);
   hbadmatch_stack_1->SetBinError(17,0.02295883);
   hbadmatch_stack_1->SetBinError(18,0.06195629);
   hbadmatch_stack_1->SetBinError(19,0.1665025);
   hbadmatch_stack_1->SetEntries(162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);
   hext_stack_2->SetBinContent(1,5.439751);
   hext_stack_2->SetBinContent(2,1.923679);
   hext_stack_2->SetBinContent(3,1.179293);
   hext_stack_2->SetBinContent(4,1.252912);
   hext_stack_2->SetBinContent(5,1.78871);
   hext_stack_2->SetBinContent(6,1.280184);
   hext_stack_2->SetBinContent(7,1.154754);
   hext_stack_2->SetBinContent(8,0.8698155);
   hext_stack_2->SetBinContent(9,1.130214);
   hext_stack_2->SetBinContent(10,1.142484);
   hext_stack_2->SetBinContent(11,0.2849381);
   hext_stack_2->SetBinContent(12,0.02453971);
   hext_stack_2->SetBinContent(13,0.04907941);
   hext_stack_2->SetBinContent(14,0.08588897);
   hext_stack_2->SetBinContent(15,0.4349078);
   hext_stack_2->SetBinContent(16,0.02453971);
   hext_stack_2->SetBinContent(17,0.2235888);
   hext_stack_2->SetBinContent(18,0.211319);
   hext_stack_2->SetBinContent(19,0.456716);
   hext_stack_2->SetBinError(1,0.9792971);
   hext_stack_2->SetBinError(2,0.5665944);
   hext_stack_2->SetBinError(3,0.447617);
   hext_stack_2->SetBinError(4,0.4486249);
   hext_stack_2->SetBinError(5,0.5651311);
   hext_stack_2->SetBinError(6,0.4886483);
   hext_stack_2->SetBinError(7,0.4472805);
   hext_stack_2->SetBinError(8,0.3992311);
   hext_stack_2->SetBinError(9,0.4469438);
   hext_stack_2->SetBinError(10,0.4471122);
   hext_stack_2->SetBinError(11,0.2016789);
   hext_stack_2->SetBinError(12,0.01735219);
   hext_stack_2->SetBinError(13,0.0245397);
   hext_stack_2->SetBinError(14,0.03246298);
   hext_stack_2->SetBinError(15,0.282299);
   hext_stack_2->SetBinError(16,0.01735219);
   hext_stack_2->SetBinError(17,0.199804);
   hext_stack_2->SetBinError(18,0.1994269);
   hext_stack_2->SetBinError(19,0.2068383);
   hext_stack_2->SetEntries(312);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);
   hdirt_stack_3->SetBinContent(1,0.5942917);
   hdirt_stack_3->SetBinContent(2,0.1909442);
   hdirt_stack_3->SetBinContent(3,0.1053176);
   hdirt_stack_3->SetBinContent(4,0.1074661);
   hdirt_stack_3->SetBinContent(5,0.02465885);
   hdirt_stack_3->SetBinContent(6,0.09673371);
   hdirt_stack_3->SetBinContent(7,0.008972538);
   hdirt_stack_3->SetBinContent(8,0.00983949);
   hdirt_stack_3->SetBinContent(9,0.06886792);
   hdirt_stack_3->SetBinContent(11,0.08242553);
   hdirt_stack_3->SetBinContent(12,0.04420907);
   hdirt_stack_3->SetBinContent(13,0.009838338);
   hdirt_stack_3->SetBinContent(18,0.008219617);
   hdirt_stack_3->SetBinContent(19,0.2195893);
   hdirt_stack_3->SetBinError(1,0.3159953);
   hdirt_stack_3->SetBinError(2,0.09187291);
   hdirt_stack_3->SetBinError(3,0.06942075);
   hdirt_stack_3->SetBinError(4,0.07081144);
   hdirt_stack_3->SetBinError(5,0.0142368);
   hdirt_stack_3->SetBinError(6,0.06305914);
   hdirt_stack_3->SetBinError(7,0.008254029);
   hdirt_stack_3->SetBinError(8,0.00983949);
   hdirt_stack_3->SetBinError(9,0.04644489);
   hdirt_stack_3->SetBinError(11,0.05816638);
   hdirt_stack_3->SetBinError(12,0.04420907);
   hdirt_stack_3->SetBinError(13,0.009838337);
   hdirt_stack_3->SetBinError(18,0.008219618);
   hdirt_stack_3->SetBinError(19,0.09388445);
   hdirt_stack_3->SetEntries(54);

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);
   houtFV_stack_4->SetBinContent(1,3.79556);
   houtFV_stack_4->SetBinContent(2,2.938475);
   houtFV_stack_4->SetBinContent(3,1.971875);
   houtFV_stack_4->SetBinContent(4,2.09625);
   houtFV_stack_4->SetBinContent(5,1.889573);
   houtFV_stack_4->SetBinContent(6,1.154524);
   houtFV_stack_4->SetBinContent(7,0.7396253);
   houtFV_stack_4->SetBinContent(8,0.8217714);
   houtFV_stack_4->SetBinContent(9,0.900316);
   houtFV_stack_4->SetBinContent(10,0.426512);
   houtFV_stack_4->SetBinContent(11,0.4354887);
   houtFV_stack_4->SetBinContent(12,0.422074);
   houtFV_stack_4->SetBinContent(13,0.3480321);
   houtFV_stack_4->SetBinContent(14,0.2403543);
   houtFV_stack_4->SetBinContent(15,0.3352818);
   houtFV_stack_4->SetBinContent(16,0.1366628);
   houtFV_stack_4->SetBinContent(17,0.149413);
   houtFV_stack_4->SetBinContent(18,0.03825059);
   houtFV_stack_4->SetBinContent(19,0.8442453);
   houtFV_stack_4->SetBinError(1,0.4595365);
   houtFV_stack_4->SetBinError(2,0.4125734);
   houtFV_stack_4->SetBinError(3,0.3374223);
   houtFV_stack_4->SetBinError(4,0.3367407);
   houtFV_stack_4->SetBinError(5,0.3261983);
   houtFV_stack_4->SetBinError(6,0.2438484);
   houtFV_stack_4->SetBinError(7,0.204329);
   houtFV_stack_4->SetBinError(8,0.2097919);
   houtFV_stack_4->SetBinError(9,0.2193773);
   houtFV_stack_4->SetBinError(10,0.1553373);
   houtFV_stack_4->SetBinError(11,0.1544161);
   houtFV_stack_4->SetBinError(12,0.1470378);
   houtFV_stack_4->SetBinError(13,0.1402876);
   houtFV_stack_4->SetBinError(14,0.1107566);
   houtFV_stack_4->SetBinError(15,0.139707);
   houtFV_stack_4->SetBinError(16,0.08854226);
   houtFV_stack_4->SetBinError(17,0.08945557);
   houtFV_stack_4->SetBinError(18,0.02208399);
   houtFV_stack_4->SetBinError(19,0.2167029);
   houtFV_stack_4->SetEntries(494);

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);
   hNCpi0inFV_stack_5->SetBinContent(1,39.19559);
   hNCpi0inFV_stack_5->SetBinContent(2,26.57737);
   hNCpi0inFV_stack_5->SetBinContent(3,20.88357);
   hNCpi0inFV_stack_5->SetBinContent(4,17.01869);
   hNCpi0inFV_stack_5->SetBinContent(5,12.78364);
   hNCpi0inFV_stack_5->SetBinContent(6,9.784755);
   hNCpi0inFV_stack_5->SetBinContent(7,8.399806);
   hNCpi0inFV_stack_5->SetBinContent(8,7.06066);
   hNCpi0inFV_stack_5->SetBinContent(9,5.439029);
   hNCpi0inFV_stack_5->SetBinContent(10,4.012239);
   hNCpi0inFV_stack_5->SetBinContent(11,2.950009);
   hNCpi0inFV_stack_5->SetBinContent(12,1.882207);
   hNCpi0inFV_stack_5->SetBinContent(13,1.95153);
   hNCpi0inFV_stack_5->SetBinContent(14,1.25726);
   hNCpi0inFV_stack_5->SetBinContent(15,0.9219782);
   hNCpi0inFV_stack_5->SetBinContent(16,0.646858);
   hNCpi0inFV_stack_5->SetBinContent(17,0.7835208);
   hNCpi0inFV_stack_5->SetBinContent(18,0.3607822);
   hNCpi0inFV_stack_5->SetBinContent(19,3.177718);
   hNCpi0inFV_stack_5->SetBinError(1,1.456579);
   hNCpi0inFV_stack_5->SetBinError(2,1.197215);
   hNCpi0inFV_stack_5->SetBinError(3,1.066961);
   hNCpi0inFV_stack_5->SetBinError(4,0.9598366);
   hNCpi0inFV_stack_5->SetBinError(5,0.8217172);
   hNCpi0inFV_stack_5->SetBinError(6,0.7260691);
   hNCpi0inFV_stack_5->SetBinError(7,0.6605686);
   hNCpi0inFV_stack_5->SetBinError(8,0.613674);
   hNCpi0inFV_stack_5->SetBinError(9,0.5430903);
   hNCpi0inFV_stack_5->SetBinError(10,0.4579142);
   hNCpi0inFV_stack_5->SetBinError(11,0.3994475);
   hNCpi0inFV_stack_5->SetBinError(12,0.3117139);
   hNCpi0inFV_stack_5->SetBinError(13,0.33203);
   hNCpi0inFV_stack_5->SetBinError(14,0.2604937);
   hNCpi0inFV_stack_5->SetBinError(15,0.2198612);
   hNCpi0inFV_stack_5->SetBinError(16,0.1889053);
   hNCpi0inFV_stack_5->SetBinError(17,0.2086263);
   hNCpi0inFV_stack_5->SetBinError(18,0.1408658);
   hNCpi0inFV_stack_5->SetBinError(19,0.4068295);
   hNCpi0inFV_stack_5->SetEntries(4368);

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);
   hCCpi0inFV_stack_6->SetBinContent(1,12.00638);
   hCCpi0inFV_stack_6->SetBinContent(2,7.262695);
   hCCpi0inFV_stack_6->SetBinContent(3,6.371918);
   hCCpi0inFV_stack_6->SetBinContent(4,4.65818);
   hCCpi0inFV_stack_6->SetBinContent(5,4.953601);
   hCCpi0inFV_stack_6->SetBinContent(6,3.029943);
   hCCpi0inFV_stack_6->SetBinContent(7,2.44793);
   hCCpi0inFV_stack_6->SetBinContent(8,2.25703);
   hCCpi0inFV_stack_6->SetBinContent(9,1.794097);
   hCCpi0inFV_stack_6->SetBinContent(10,0.9247951);
   hCCpi0inFV_stack_6->SetBinContent(11,1.132361);
   hCCpi0inFV_stack_6->SetBinContent(12,0.5111053);
   hCCpi0inFV_stack_6->SetBinContent(13,0.5697885);
   hCCpi0inFV_stack_6->SetBinContent(14,0.6144029);
   hCCpi0inFV_stack_6->SetBinContent(15,0.4027028);
   hCCpi0inFV_stack_6->SetBinContent(16,0.3644482);
   hCCpi0inFV_stack_6->SetBinContent(17,0.1239126);
   hCCpi0inFV_stack_6->SetBinContent(18,0.1621632);
   hCCpi0inFV_stack_6->SetBinContent(19,1.226496);
   hCCpi0inFV_stack_6->SetBinError(1,0.8072407);
   hCCpi0inFV_stack_6->SetBinError(2,0.6321518);
   hCCpi0inFV_stack_6->SetBinError(3,0.5936628);
   hCCpi0inFV_stack_6->SetBinError(4,0.5014952);
   hCCpi0inFV_stack_6->SetBinError(5,0.5230289);
   hCCpi0inFV_stack_6->SetBinError(6,0.3987851);
   hCCpi0inFV_stack_6->SetBinError(7,0.3732985);
   hCCpi0inFV_stack_6->SetBinError(8,0.3538905);
   hCCpi0inFV_stack_6->SetBinError(9,0.3152247);
   hCCpi0inFV_stack_6->SetBinError(10,0.2200425);
   hCCpi0inFV_stack_6->SetBinError(11,0.2482203);
   hCCpi0inFV_stack_6->SetBinError(12,0.1620749);
   hCCpi0inFV_stack_6->SetBinError(13,0.1814291);
   hCCpi0inFV_stack_6->SetBinError(14,0.1796936);
   hCCpi0inFV_stack_6->SetBinError(15,0.1429613);
   hCCpi0inFV_stack_6->SetBinError(16,0.1482709);
   hCCpi0inFV_stack_6->SetBinError(17,0.08761943);
   hCCpi0inFV_stack_6->SetBinError(18,0.09035965);
   hCCpi0inFV_stack_6->SetBinError(19,0.2539795);
   hCCpi0inFV_stack_6->SetEntries(1314);

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);
   hNCinFV_stack_7->SetBinContent(1,3.511205);
   hNCinFV_stack_7->SetBinContent(2,1.406673);
   hNCinFV_stack_7->SetBinContent(3,1.492335);
   hNCinFV_stack_7->SetBinContent(4,1.24451);
   hNCinFV_stack_7->SetBinContent(5,0.9966847);
   hNCinFV_stack_7->SetBinContent(6,0.909228);
   hNCinFV_stack_7->SetBinContent(7,0.6213576);
   hNCinFV_stack_7->SetBinContent(8,0.4008275);
   hNCinFV_stack_7->SetBinContent(9,0.3990328);
   hNCinFV_stack_7->SetBinContent(10,0.5211507);
   hNCinFV_stack_7->SetBinContent(11,0.2496199);
   hNCinFV_stack_7->SetBinContent(12,0.1621632);
   hNCinFV_stack_7->SetBinContent(13,0.1621632);
   hNCinFV_stack_7->SetBinContent(14,0.2113693);
   hNCinFV_stack_7->SetBinContent(15,0.3480321);
   hNCinFV_stack_7->SetBinContent(16,0.08921645);
   hNCinFV_stack_7->SetBinContent(17,0.06195629);
   hNCinFV_stack_7->SetBinContent(18,0.0127502);
   hNCinFV_stack_7->SetBinContent(19,0.9839345);
   hNCinFV_stack_7->SetBinError(1,0.433652);
   hNCinFV_stack_7->SetBinError(2,0.2754256);
   hNCinFV_stack_7->SetBinError(3,0.2881818);
   hNCinFV_stack_7->SetBinError(4,0.2601815);
   hNCinFV_stack_7->SetBinError(5,0.2287795);
   hNCinFV_stack_7->SetBinError(6,0.2194911);
   hNCinFV_stack_7->SetBinError(7,0.1880427);
   hNCinFV_stack_7->SetBinError(8,0.131549);
   hNCinFV_stack_7->SetBinError(9,0.1425864);
   hNCinFV_stack_7->SetBinError(10,0.1761641);
   hNCinFV_stack_7->SetBinError(11,0.1110342);
   hNCinFV_stack_7->SetBinError(12,0.09035965);
   hNCinFV_stack_7->SetBinError(13,0.09035965);
   hNCinFV_stack_7->SetBinError(14,0.1088158);
   hNCinFV_stack_7->SetBinError(15,0.1402876);
   hNCinFV_stack_7->SetBinError(16,0.06455086);
   hNCinFV_stack_7->SetBinError(17,0.06195629);
   hNCinFV_stack_7->SetBinError(18,0.0127502);
   hNCinFV_stack_7->SetBinError(19,0.228424);
   hNCinFV_stack_7->SetEntries(368);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);
   hnumuCCinFV_stack_8->SetBinContent(1,6.790495);
   hnumuCCinFV_stack_8->SetBinContent(2,5.422089);
   hnumuCCinFV_stack_8->SetBinContent(3,4.249646);
   hnumuCCinFV_stack_8->SetBinContent(4,2.177211);
   hnumuCCinFV_stack_8->SetBinContent(5,2.373461);
   hnumuCCinFV_stack_8->SetBinContent(6,1.50185);
   hnumuCCinFV_stack_8->SetBinContent(7,0.5178281);
   hnumuCCinFV_stack_8->SetBinContent(8,0.7636518);
   hnumuCCinFV_stack_8->SetBinContent(9,0.4758984);
   hnumuCCinFV_stack_8->SetBinContent(10,0.5295427);
   hnumuCCinFV_stack_8->SetBinContent(11,0.7400604);
   hnumuCCinFV_stack_8->SetBinContent(12,0.35597);
   hnumuCCinFV_stack_8->SetBinContent(13,0.2622274);
   hnumuCCinFV_stack_8->SetBinContent(14,0.06880716);
   hnumuCCinFV_stack_8->SetBinContent(15,0.2584134);
   hnumuCCinFV_stack_8->SetBinContent(16,0.4059094);
   hnumuCCinFV_stack_8->SetBinContent(17,0.1151717);
   hnumuCCinFV_stack_8->SetBinContent(18,0.3014986);
   hnumuCCinFV_stack_8->SetBinContent(19,1.251496);
   hnumuCCinFV_stack_8->SetBinError(1,0.8507634);
   hnumuCCinFV_stack_8->SetBinError(2,0.6094619);
   hnumuCCinFV_stack_8->SetBinError(3,0.5899765);
   hnumuCCinFV_stack_8->SetBinError(4,0.4614852);
   hnumuCCinFV_stack_8->SetBinError(5,0.5642477);
   hnumuCCinFV_stack_8->SetBinError(6,0.399403);
   hnumuCCinFV_stack_8->SetBinError(7,0.1667449);
   hnumuCCinFV_stack_8->SetBinError(8,0.2266329);
   hnumuCCinFV_stack_8->SetBinError(9,0.1631703);
   hnumuCCinFV_stack_8->SetBinError(10,0.1774659);
   hnumuCCinFV_stack_8->SetBinError(11,0.2417718);
   hnumuCCinFV_stack_8->SetBinError(12,0.1297344);
   hnumuCCinFV_stack_8->SetBinError(13,0.1172649);
   hnumuCCinFV_stack_8->SetBinError(14,0.03090791);
   hnumuCCinFV_stack_8->SetBinError(15,0.1235825);
   hnumuCCinFV_stack_8->SetBinError(16,0.1757581);
   hnumuCCinFV_stack_8->SetBinError(17,0.04100753);
   hnumuCCinFV_stack_8->SetBinError(18,0.1903721);
   hnumuCCinFV_stack_8->SetBinError(19,0.2809532);
   hnumuCCinFV_stack_8->SetEntries(659);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);
   hnueCCinFV_stack_9->SetBinContent(1,0.7655881);
   hnueCCinFV_stack_9->SetBinContent(2,0.1177377);
   hnueCCinFV_stack_9->SetBinContent(3,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(4,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(7,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(9,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(10,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(16,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(19,0.01460656);
   hnueCCinFV_stack_9->SetBinError(1,0.2013403);
   hnueCCinFV_stack_9->SetBinError(2,0.08249791);
   hnueCCinFV_stack_9->SetBinError(3,0.06325464);
   hnueCCinFV_stack_9->SetBinError(4,0.06195629);
   hnueCCinFV_stack_9->SetBinError(7,0.0127502);
   hnueCCinFV_stack_9->SetBinError(9,0.0127502);
   hnueCCinFV_stack_9->SetBinError(10,0.06195629);
   hnueCCinFV_stack_9->SetBinError(16,0.06195629);
   hnueCCinFV_stack_9->SetBinError(19,0.01459278);
   hnueCCinFV_stack_9->SetEntries(34);

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);
   hmcerror__5->SetBinContent(1,73.14505);
   hmcerror__5->SetBinContent(2,46.24295);
   hmcerror__5->SetBinContent(3,36.89981);
   hmcerror__5->SetBinContent(4,29.19741);
   hmcerror__5->SetBinContent(5,25.10917);
   hmcerror__5->SetBinContent(6,17.93534);
   hmcerror__5->SetBinContent(7,14.42574);
   hmcerror__5->SetBinContent(8,12.58);
   hmcerror__5->SetBinContent(9,10.52756);
   hmcerror__5->SetBinContent(10,7.777267);
   hmcerror__5->SetBinContent(11,5.977695);
   hmcerror__5->SetBinContent(12,3.509946);
   hmcerror__5->SetBinContent(13,3.56072);
   hmcerror__5->SetBinContent(14,2.661551);
   hmcerror__5->SetBinContent(15,2.824482);
   hmcerror__5->SetBinContent(16,1.791547);
   hmcerror__5->SetBinContent(17,1.489406);
   hmcerror__5->SetBinContent(18,1.15694);
   hmcerror__5->SetBinContent(19,8.712538);
   hmcerror__5->SetBinError(1,16.03021);
   hmcerror__5->SetBinError(2,12.10281);
   hmcerror__5->SetBinError(3,9.994153);
   hmcerror__5->SetBinError(4,7.644213);
   hmcerror__5->SetBinError(5,6.746361);
   hmcerror__5->SetBinError(6,5.318729);
   hmcerror__5->SetBinError(7,4.716229);
   hmcerror__5->SetBinError(8,4.346985);
   hmcerror__5->SetBinError(9,3.392544);
   hmcerror__5->SetBinError(10,3.577102);
   hmcerror__5->SetBinError(11,3.587767);
   hmcerror__5->SetBinError(12,2.008532);
   hmcerror__5->SetBinError(13,1.838375);
   hmcerror__5->SetBinError(14,1.428513);
   hmcerror__5->SetBinError(15,1.593218);
   hmcerror__5->SetBinError(16,1.425309);
   hmcerror__5->SetBinError(17,1.104369);
   hmcerror__5->SetBinError(18,1.183232);
   hmcerror__5->SetBinError(19,3.450051);
   hmcerror__5->SetEntries(300.4418);

   ci = TColor::GetColor("#666666");
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
   
   Double_t _fx3005[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3005[18] = {
   48,
   28,
   30,
   13,
   21,
   17,
   6,
   6,
   6,
   4,
   5,
   4,
   2,
   3,
   3,
   2,
   0,
   1};
   Double_t _felx3005[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3005[18] = {
   7.0604,
   5.4358,
   5.6197,
   3.77763,
   4.7354,
   4.2835,
   2.67925,
   2.67925,
   2.67925,
   2.29683,
   2.48995,
   2.29683,
   2,
   2.143368,
   2.143368,
   2,
   0,
   1};
   Double_t _fehx3005[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3005[18] = {
   6.8561,
   5.2271,
   5.4117,
   3.5552,
   4.5229,
   4.0673,
   2.41858,
   2.41858,
   2.41858,
   1.98186,
   2.21064,
   1.98186,
   1.51917,
   1.72422,
   1.72422,
   1.51917,
   1.1478,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(18,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,99);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(60.34171);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.67#pm0.05(data err)#pm0.15(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.75/18","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 199.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.3","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 18.5","F");

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.4","F");

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 18.8","F");

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  161.9","F");

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 49.6","F");

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.8","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 27.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.2","F");

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3006[18] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3006[18] = {
   0.2191564,
   0.2617222,
   0.2708457,
   0.2618113,
   0.2686812,
   0.2965502,
   0.3269316,
   0.3455472,
   0.3222537,
   0.4599434,
   0.6001924,
   0.5722401,
   0.5162931,
   0.5367219,
   0.5640744,
   0.7955746,
   0.7414827,
   1.022726};
   Double_t _fehx3006[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3006[18] = {
   0.2191564,
   0.2617222,
   0.2708457,
   0.2618113,
   0.2686812,
   0.2965502,
   0.3269316,
   0.3455472,
   0.3222537,
   0.4599434,
   0.6001924,
   0.5722401,
   0.5162931,
   0.5367219,
   0.5640744,
   0.7955746,
   0.7414827,
   1.022726};
   grae = new TGraphAsymmErrors(18,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,99);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3007[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3007[18] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3007[18] = {
   0.1999067,
   0.2123723,
   0.2081704,
   0.224058,
   0.2125511,
   0.2210188,
   0.22206,
   0.2213988,
   0.2146481,
   0.2176097,
   0.2312623,
   0.3311006,
   0.2756731,
   0.284805,
   0.2646768,
   0.300922,
   0.304075,
   0.3482005};
   Double_t _fehx3007[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3007[18] = {
   0.1999067,
   0.2123723,
   0.2081704,
   0.224058,
   0.2125511,
   0.2210188,
   0.22206,
   0.2213988,
   0.2146481,
   0.2176097,
   0.2312623,
   0.3311006,
   0.2756731,
   0.284805,
   0.2646768,
   0.300922,
   0.304075,
   0.3482005};
   grae = new TGraphAsymmErrors(18,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,99);
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
   
   Double_t _fx3008[18] = {
   2.5,
   7.5,
   12.5,
   17.5,
   22.5,
   27.5,
   32.5,
   37.5,
   42.5,
   47.5,
   52.5,
   57.5,
   62.5,
   67.5,
   72.5,
   77.5,
   82.5,
   87.5};
   Double_t _fy3008[18] = {
   0.6562303,
   0.6054976,
   0.8130124,
   0.4452449,
   0.8363479,
   0.9478492,
   0.4159233,
   0.4769474,
   0.5699328,
   0.5143195,
   0.8364429,
   1.139619,
   0.5616842,
   1.127162,
   1.062142,
   1.116354,
   0,
   0.8643493};
   Double_t _felx3008[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fely3008[18] = {
   0.09652601,
   0.1175487,
   0.1522962,
   0.1293824,
   0.1885925,
   0.2388301,
   0.1857271,
   0.2129769,
   0.2544988,
   0.2953261,
   0.4165402,
   0.6543777,
   0.5616842,
   0.8053077,
   0.7588535,
   1.116354,
   0,
   0.8643493};
   Double_t _fehx3008[18] = {
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5,
   2.5};
   Double_t _fehy3008[18] = {
   0.09373293,
   0.1130356,
   0.1466593,
   0.1217642,
   0.1801294,
   0.2267757,
   0.1676573,
   0.1922559,
   0.229738,
   0.2548273,
   0.3698148,
   0.5646412,
   0.4266469,
   0.6478252,
   0.6104553,
   0.8479654,
   0.7706426,
   1.175264};
   grae = new TGraphAsymmErrors(18,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,99);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.243575);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_10_kine_pio_gap_high_all",18,0,90);

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
   TLine *line = new TLine(0,1,90,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
