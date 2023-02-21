#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 11:38:28 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",112,135,1200,900);
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
   pad1->Range(-92.30769,-9.88,676.9231,1092.52);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__10->SetBinContent(1,8.152355);
   hmc__10->SetBinContent(2,39.90298);
   hmc__10->SetBinContent(3,111.1046);
   hmc__10->SetBinContent(4,255.8048);
   hmc__10->SetBinContent(5,400.811);
   hmc__10->SetBinContent(6,435.6238);
   hmc__10->SetBinContent(7,437.8004);
   hmc__10->SetBinContent(8,385.758);
   hmc__10->SetBinContent(9,307.3698);
   hmc__10->SetBinContent(10,267.5371);
   hmc__10->SetBinContent(11,219.7229);
   hmc__10->SetBinContent(12,182.212);
   hmc__10->SetBinContent(13,153.196);
   hmc__10->SetBinContent(14,121.0878);
   hmc__10->SetBinContent(15,94.0405);
   hmc__10->SetBinContent(16,81.22798);
   hmc__10->SetBinContent(17,66.38564);
   hmc__10->SetBinContent(18,56.0095);
   hmc__10->SetBinContent(19,49.55503);
   hmc__10->SetBinContent(20,37.25469);
   hmc__10->SetBinContent(21,26.25484);
   hmc__10->SetBinContent(22,21.8922);
   hmc__10->SetBinContent(23,20.2499);
   hmc__10->SetBinContent(24,15.83322);
   hmc__10->SetBinContent(25,115.3178);
   hmc__10->SetBinError(1,13.71744);
   hmc__10->SetBinError(2,20.44609);
   hmc__10->SetBinError(3,30.30744);
   hmc__10->SetBinError(4,86.78394);
   hmc__10->SetBinError(5,95.3317);
   hmc__10->SetBinError(6,99.12061);
   hmc__10->SetBinError(7,106.8401);
   hmc__10->SetBinError(8,93.25564);
   hmc__10->SetBinError(9,77.64545);
   hmc__10->SetBinError(10,74.17188);
   hmc__10->SetBinError(11,59.9379);
   hmc__10->SetBinError(12,47.96143);
   hmc__10->SetBinError(13,47.74693);
   hmc__10->SetBinError(14,40.10289);
   hmc__10->SetBinError(15,34.12768);
   hmc__10->SetBinError(16,32.34534);
   hmc__10->SetBinError(17,24.86881);
   hmc__10->SetBinError(18,21.08753);
   hmc__10->SetBinError(19,20.76281);
   hmc__10->SetBinError(20,17.16602);
   hmc__10->SetBinError(21,20.55137);
   hmc__10->SetBinError(22,11.48125);
   hmc__10->SetBinError(23,10.78246);
   hmc__10->SetBinError(24,11.34462);
   hmc__10->SetBinError(25,34.41255);
   hmc__10->SetMinimum(-9.88);
   hmc__10->SetMaximum(1037.4);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,0,600);
   hs4_stack_4->SetMinimum(-1.150846e-08);
   hs4_stack_4->SetMaximum(459.6905);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,1.267963);
   hbadmatch_stack_1->SetBinContent(2,3.76757);
   hbadmatch_stack_1->SetBinContent(3,8.083429);
   hbadmatch_stack_1->SetBinContent(4,11.13163);
   hbadmatch_stack_1->SetBinContent(5,10.92918);
   hbadmatch_stack_1->SetBinContent(6,14.56474);
   hbadmatch_stack_1->SetBinContent(7,13.56867);
   hbadmatch_stack_1->SetBinContent(8,10.68023);
   hbadmatch_stack_1->SetBinContent(9,8.042938);
   hbadmatch_stack_1->SetBinContent(10,3.174657);
   hbadmatch_stack_1->SetBinContent(11,2.3089);
   hbadmatch_stack_1->SetBinContent(12,4.48145);
   hbadmatch_stack_1->SetBinContent(13,1.518643);
   hbadmatch_stack_1->SetBinContent(14,0.7868615);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.5884556);
   hbadmatch_stack_1->SetBinContent(18,0.5901461);
   hbadmatch_stack_1->SetBinContent(19,0.536893);
   hbadmatch_stack_1->SetBinContent(20,0.4241887);
   hbadmatch_stack_1->SetBinContent(21,0.1967154);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.592916);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.9835768);
   hbadmatch_stack_1->SetBinError(1,1.089159);
   hbadmatch_stack_1->SetBinError(2,1.008411);
   hbadmatch_stack_1->SetBinError(3,1.619119);
   hbadmatch_stack_1->SetBinError(4,1.746997);
   hbadmatch_stack_1->SetBinError(5,1.624058);
   hbadmatch_stack_1->SetBinError(6,1.945408);
   hbadmatch_stack_1->SetBinError(7,2.077766);
   hbadmatch_stack_1->SetBinError(8,2.347152);
   hbadmatch_stack_1->SetBinError(9,1.58667);
   hbadmatch_stack_1->SetBinError(10,0.9112182);
   hbadmatch_stack_1->SetBinError(11,0.7507989);
   hbadmatch_stack_1->SetBinError(12,1.911735);
   hbadmatch_stack_1->SetBinError(13,0.6510468);
   hbadmatch_stack_1->SetBinError(14,0.3934307);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.3397478);
   hbadmatch_stack_1->SetBinError(18,0.340721);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.3007342);
   hbadmatch_stack_1->SetBinError(21,0.1967154);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.4423482);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.4398689);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,2.890854);
   hext_stack_2->SetBinContent(2,13.54299);
   hext_stack_2->SetBinContent(3,28.6417);
   hext_stack_2->SetBinContent(4,50.86122);
   hext_stack_2->SetBinContent(5,66.11439);
   hext_stack_2->SetBinContent(6,72.09634);
   hext_stack_2->SetBinContent(7,59.11446);
   hext_stack_2->SetBinContent(8,52.58015);
   hext_stack_2->SetBinContent(9,25.47231);
   hext_stack_2->SetBinContent(10,22.08705);
   hext_stack_2->SetBinContent(11,24.98232);
   hext_stack_2->SetBinContent(12,18.19428);
   hext_stack_2->SetBinContent(13,9.700426);
   hext_stack_2->SetBinContent(14,8.179411);
   hext_stack_2->SetBinContent(15,2.6702);
   hext_stack_2->SetBinContent(16,3.882816);
   hext_stack_2->SetBinContent(17,1.78639);
   hext_stack_2->SetBinContent(18,6.296459);
   hext_stack_2->SetBinContent(19,1.779209);
   hext_stack_2->SetBinContent(20,1.950793);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,0.9660115);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,2.599588);
   hext_stack_2->SetBinError(1,1.323597);
   hext_stack_2->SetBinError(2,2.374645);
   hext_stack_2->SetBinError(3,3.625385);
   hext_stack_2->SetBinError(4,4.64366);
   hext_stack_2->SetBinError(5,5.452133);
   hext_stack_2->SetBinError(6,5.802944);
   hext_stack_2->SetBinError(7,5.246697);
   hext_stack_2->SetBinError(8,5.068281);
   hext_stack_2->SetBinError(9,3.121336);
   hext_stack_2->SetBinError(10,3.125457);
   hext_stack_2->SetBinError(11,3.414017);
   hext_stack_2->SetBinError(12,2.916449);
   hext_stack_2->SetBinError(13,2.073195);
   hext_stack_2->SetBinError(14,1.888062);
   hext_stack_2->SetBinError(15,1.050314);
   hext_stack_2->SetBinError(16,1.341763);
   hext_stack_2->SetBinError(17,0.8039566);
   hext_stack_2->SetBinError(18,1.805754);
   hext_stack_2->SetBinError(19,0.9206235);
   hext_stack_2->SetBinError(20,0.8755137);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.7189592);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,0.9884288);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,2.2506);
   hdirt_stack_3->SetBinContent(3,3.731948);
   hdirt_stack_3->SetBinContent(4,7.613855);
   hdirt_stack_3->SetBinContent(5,7.881938);
   hdirt_stack_3->SetBinContent(6,10.667);
   hdirt_stack_3->SetBinContent(7,6.10606);
   hdirt_stack_3->SetBinContent(8,4.26104);
   hdirt_stack_3->SetBinContent(9,3.096602);
   hdirt_stack_3->SetBinContent(10,1.465542);
   hdirt_stack_3->SetBinContent(11,1.438964);
   hdirt_stack_3->SetBinContent(12,2.027159);
   hdirt_stack_3->SetBinContent(13,0.5831082);
   hdirt_stack_3->SetBinContent(14,1.333719);
   hdirt_stack_3->SetBinContent(15,1.438682);
   hdirt_stack_3->SetBinContent(16,0.3235058);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,1.730123);
   hdirt_stack_3->SetBinContent(19,0.4080678);
   hdirt_stack_3->SetBinContent(20,0.3381872);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.7629888);
   hdirt_stack_3->SetBinError(3,0.9450353);
   hdirt_stack_3->SetBinError(4,1.445907);
   hdirt_stack_3->SetBinError(5,1.45812);
   hdirt_stack_3->SetBinError(6,1.703157);
   hdirt_stack_3->SetBinError(7,1.351079);
   hdirt_stack_3->SetBinError(8,1.086224);
   hdirt_stack_3->SetBinError(9,0.9115656);
   hdirt_stack_3->SetBinError(10,0.6266656);
   hdirt_stack_3->SetBinError(11,0.6349959);
   hdirt_stack_3->SetBinError(12,0.7595049);
   hdirt_stack_3->SetBinError(13,0.3436842);
   hdirt_stack_3->SetBinError(14,0.65183);
   hdirt_stack_3->SetBinError(15,0.9971899);
   hdirt_stack_3->SetBinError(16,0.2288138);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,1.17734);
   hdirt_stack_3->SetBinError(19,0.4080678);
   hdirt_stack_3->SetBinError(20,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,1.660551);
   houtFV_stack_4->SetBinContent(2,6.221394);
   houtFV_stack_4->SetBinContent(3,24.1131);
   houtFV_stack_4->SetBinContent(4,43.23352);
   houtFV_stack_4->SetBinContent(5,70.21172);
   houtFV_stack_4->SetBinContent(6,65.47675);
   houtFV_stack_4->SetBinContent(7,63.20625);
   houtFV_stack_4->SetBinContent(8,51.84663);
   houtFV_stack_4->SetBinContent(9,37.82849);
   houtFV_stack_4->SetBinContent(10,30.90332);
   houtFV_stack_4->SetBinContent(11,21.23151);
   houtFV_stack_4->SetBinContent(12,18.64215);
   houtFV_stack_4->SetBinContent(13,16.63682);
   houtFV_stack_4->SetBinContent(14,9.416423);
   houtFV_stack_4->SetBinContent(15,8.14812);
   houtFV_stack_4->SetBinContent(16,6.896999);
   houtFV_stack_4->SetBinContent(17,5.199209);
   houtFV_stack_4->SetBinContent(18,3.716223);
   houtFV_stack_4->SetBinContent(19,6.036596);
   houtFV_stack_4->SetBinContent(20,2.585803);
   houtFV_stack_4->SetBinContent(21,1.135974);
   houtFV_stack_4->SetBinContent(22,1.897291);
   houtFV_stack_4->SetBinContent(23,2.826237);
   houtFV_stack_4->SetBinContent(24,1.316992);
   houtFV_stack_4->SetBinContent(25,5.475842);
   houtFV_stack_4->SetBinError(1,0.650847);
   houtFV_stack_4->SetBinError(2,1.236202);
   houtFV_stack_4->SetBinError(3,2.447224);
   houtFV_stack_4->SetBinError(4,3.368067);
   houtFV_stack_4->SetBinError(5,4.236295);
   houtFV_stack_4->SetBinError(6,4.218722);
   houtFV_stack_4->SetBinError(7,3.984727);
   houtFV_stack_4->SetBinError(8,3.621372);
   houtFV_stack_4->SetBinError(9,3.10507);
   houtFV_stack_4->SetBinError(10,2.760646);
   houtFV_stack_4->SetBinError(11,2.306542);
   houtFV_stack_4->SetBinError(12,2.177731);
   houtFV_stack_4->SetBinError(13,2.042674);
   houtFV_stack_4->SetBinError(14,1.563327);
   houtFV_stack_4->SetBinError(15,1.500688);
   houtFV_stack_4->SetBinError(16,1.248833);
   houtFV_stack_4->SetBinError(17,1.127214);
   houtFV_stack_4->SetBinError(18,0.9619042);
   houtFV_stack_4->SetBinError(19,1.232046);
   houtFV_stack_4->SetBinError(20,0.8083481);
   houtFV_stack_4->SetBinError(21,0.5236232);
   houtFV_stack_4->SetBinError(22,0.6926678);
   houtFV_stack_4->SetBinError(23,0.9211137);
   houtFV_stack_4->SetBinError(24,0.5536755);
   houtFV_stack_4->SetBinError(25,1.220262);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5566719);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.339952);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.503878);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.036722);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,8.60437);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.219395);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.003843);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.192743);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.968959);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,6.974705);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.730318);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,5.1856);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.673606);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.717373);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.193234);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.981076);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.913907);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.175712);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.090516);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.9768358);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5581679);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.9210359);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,8.154961);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2062853);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4602831);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7263003);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8223872);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.027744);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7629749);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9144515);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8423761);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7494213);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9228902);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7883569);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7399703);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7464732);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8633694);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5769799);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.4822389);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.635714);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5014937);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4933429);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.3045688);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2198343);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3020022);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.8620899);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.7255678);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6691039);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.492158);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5717859);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.241722);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7385219);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.125218);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.222536);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.473804);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.230212);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2548204);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4002008);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2355051);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3737142);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2713408);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.09253378);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1012383);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1404279);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2438946);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.8652359);
   hNCpi0inFVres_stack_7->SetBinContent(2,6.26225);
   hNCpi0inFVres_stack_7->SetBinContent(3,23.62027);
   hNCpi0inFVres_stack_7->SetBinContent(4,69.65129);
   hNCpi0inFVres_stack_7->SetBinContent(5,134.0309);
   hNCpi0inFVres_stack_7->SetBinContent(6,147.4906);
   hNCpi0inFVres_stack_7->SetBinContent(7,147.9367);
   hNCpi0inFVres_stack_7->SetBinContent(8,130.8121);
   hNCpi0inFVres_stack_7->SetBinContent(9,118.4703);
   hNCpi0inFVres_stack_7->SetBinContent(10,100.7579);
   hNCpi0inFVres_stack_7->SetBinContent(11,76.68093);
   hNCpi0inFVres_stack_7->SetBinContent(12,63.12083);
   hNCpi0inFVres_stack_7->SetBinContent(13,54.90571);
   hNCpi0inFVres_stack_7->SetBinContent(14,46.24726);
   hNCpi0inFVres_stack_7->SetBinContent(15,30.33207);
   hNCpi0inFVres_stack_7->SetBinContent(16,28.28558);
   hNCpi0inFVres_stack_7->SetBinContent(17,21.83383);
   hNCpi0inFVres_stack_7->SetBinContent(18,15.55083);
   hNCpi0inFVres_stack_7->SetBinContent(19,15.67439);
   hNCpi0inFVres_stack_7->SetBinContent(20,11.42145);
   hNCpi0inFVres_stack_7->SetBinContent(21,7.641976);
   hNCpi0inFVres_stack_7->SetBinContent(22,7.680334);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.445573);
   hNCpi0inFVres_stack_7->SetBinContent(24,5.70425);
   hNCpi0inFVres_stack_7->SetBinContent(25,22.32107);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2994136);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8411823);
   hNCpi0inFVres_stack_7->SetBinError(3,1.584696);
   hNCpi0inFVres_stack_7->SetBinError(4,2.689782);
   hNCpi0inFVres_stack_7->SetBinError(5,3.842777);
   hNCpi0inFVres_stack_7->SetBinError(6,3.97439);
   hNCpi0inFVres_stack_7->SetBinError(7,3.95792);
   hNCpi0inFVres_stack_7->SetBinError(8,3.615953);
   hNCpi0inFVres_stack_7->SetBinError(9,3.575897);
   hNCpi0inFVres_stack_7->SetBinError(10,3.288128);
   hNCpi0inFVres_stack_7->SetBinError(11,2.775303);
   hNCpi0inFVres_stack_7->SetBinError(12,2.558887);
   hNCpi0inFVres_stack_7->SetBinError(13,2.421944);
   hNCpi0inFVres_stack_7->SetBinError(14,2.25574);
   hNCpi0inFVres_stack_7->SetBinError(15,1.769486);
   hNCpi0inFVres_stack_7->SetBinError(16,1.800684);
   hNCpi0inFVres_stack_7->SetBinError(17,1.515799);
   hNCpi0inFVres_stack_7->SetBinError(18,1.302751);
   hNCpi0inFVres_stack_7->SetBinError(19,1.346627);
   hNCpi0inFVres_stack_7->SetBinError(20,1.122559);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9194392);
   hNCpi0inFVres_stack_7->SetBinError(22,0.8994313);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5688835);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8318771);
   hNCpi0inFVres_stack_7->SetBinError(25,1.478844);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.102054);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.131464);
   hNCpi0inFVdis_stack_8->SetBinContent(4,13.85772);
   hNCpi0inFVdis_stack_8->SetBinContent(5,25.62908);
   hNCpi0inFVdis_stack_8->SetBinContent(6,24.10369);
   hNCpi0inFVdis_stack_8->SetBinContent(7,22.02116);
   hNCpi0inFVdis_stack_8->SetBinContent(8,19.52193);
   hNCpi0inFVdis_stack_8->SetBinContent(9,19.74631);
   hNCpi0inFVdis_stack_8->SetBinContent(10,14.06962);
   hNCpi0inFVdis_stack_8->SetBinContent(11,14.50175);
   hNCpi0inFVdis_stack_8->SetBinContent(12,12.43497);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.59897);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.42899);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.379665);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.955014);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.84707);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.852128);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.976682);
   hNCpi0inFVdis_stack_8->SetBinContent(20,4.15346);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.73812);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.715358);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.56648);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.384798);
   hNCpi0inFVdis_stack_8->SetBinContent(25,14.68426);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3209538);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7645467);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.195594);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.690078);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.539409);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.501178);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.405274);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.48672);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.205644);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.27158);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.130476);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.078017);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.027711);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.94854);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7959317);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9094723);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7150033);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7314176);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6379542);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6630349);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4079068);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5432795);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5448296);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.220642);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(2,2.925981);
   hCCpi0inFV_stack_10->SetBinContent(3,6.358661);
   hCCpi0inFV_stack_10->SetBinContent(4,28.29913);
   hCCpi0inFV_stack_10->SetBinContent(5,38.02805);
   hCCpi0inFV_stack_10->SetBinContent(6,45.29074);
   hCCpi0inFV_stack_10->SetBinContent(7,57.47664);
   hCCpi0inFV_stack_10->SetBinContent(8,55.31471);
   hCCpi0inFV_stack_10->SetBinContent(9,45.17901);
   hCCpi0inFV_stack_10->SetBinContent(10,47.82104);
   hCCpi0inFV_stack_10->SetBinContent(11,43.68866);
   hCCpi0inFV_stack_10->SetBinContent(12,32.57983);
   hCCpi0inFV_stack_10->SetBinContent(13,30.63322);
   hCCpi0inFV_stack_10->SetBinContent(14,23.18388);
   hCCpi0inFV_stack_10->SetBinContent(15,22.53101);
   hCCpi0inFV_stack_10->SetBinContent(16,16.4768);
   hCCpi0inFV_stack_10->SetBinContent(17,10.95811);
   hCCpi0inFV_stack_10->SetBinContent(18,10.79389);
   hCCpi0inFV_stack_10->SetBinContent(19,9.032983);
   hCCpi0inFV_stack_10->SetBinContent(20,8.29485);
   hCCpi0inFV_stack_10->SetBinContent(21,6.690386);
   hCCpi0inFV_stack_10->SetBinContent(22,5.326902);
   hCCpi0inFV_stack_10->SetBinContent(23,3.815968);
   hCCpi0inFV_stack_10->SetBinContent(24,2.78759);
   hCCpi0inFV_stack_10->SetBinContent(25,25.1016);
   hCCpi0inFV_stack_10->SetBinError(1,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(2,0.8770106);
   hCCpi0inFV_stack_10->SetBinError(3,1.241646);
   hCCpi0inFV_stack_10->SetBinError(4,2.649558);
   hCCpi0inFV_stack_10->SetBinError(5,3.082712);
   hCCpi0inFV_stack_10->SetBinError(6,3.367043);
   hCCpi0inFV_stack_10->SetBinError(7,3.82532);
   hCCpi0inFV_stack_10->SetBinError(8,3.735866);
   hCCpi0inFV_stack_10->SetBinError(9,3.329526);
   hCCpi0inFV_stack_10->SetBinError(10,3.513798);
   hCCpi0inFV_stack_10->SetBinError(11,3.290443);
   hCCpi0inFV_stack_10->SetBinError(12,2.854018);
   hCCpi0inFV_stack_10->SetBinError(13,2.807781);
   hCCpi0inFV_stack_10->SetBinError(14,2.426505);
   hCCpi0inFV_stack_10->SetBinError(15,2.39665);
   hCCpi0inFV_stack_10->SetBinError(16,2.006791);
   hCCpi0inFV_stack_10->SetBinError(17,1.594084);
   hCCpi0inFV_stack_10->SetBinError(18,1.689001);
   hCCpi0inFV_stack_10->SetBinError(19,1.519802);
   hCCpi0inFV_stack_10->SetBinError(20,1.428143);
   hCCpi0inFV_stack_10->SetBinError(21,1.286116);
   hCCpi0inFV_stack_10->SetBinError(22,1.178352);
   hCCpi0inFV_stack_10->SetBinError(23,0.9197592);
   hCCpi0inFV_stack_10->SetBinError(24,0.8331329);
   hCCpi0inFV_stack_10->SetBinError(25,2.528122);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,1.320373);
   hNCinFV_stack_11->SetBinContent(3,2.979234);
   hNCinFV_stack_11->SetBinContent(4,13.38922);
   hNCinFV_stack_11->SetBinContent(5,18.66625);
   hNCinFV_stack_11->SetBinContent(6,18.66565);
   hNCinFV_stack_11->SetBinContent(7,25.05173);
   hNCinFV_stack_11->SetBinContent(8,23.82784);
   hNCinFV_stack_11->SetBinContent(9,18.52955);
   hNCinFV_stack_11->SetBinContent(10,19.05292);
   hNCinFV_stack_11->SetBinContent(11,14.49719);
   hNCinFV_stack_11->SetBinContent(12,9.391149);
   hNCinFV_stack_11->SetBinContent(13,10.0569);
   hNCinFV_stack_11->SetBinContent(14,6.497051);
   hNCinFV_stack_11->SetBinContent(15,6.551995);
   hNCinFV_stack_11->SetBinContent(16,7.033944);
   hNCinFV_stack_11->SetBinContent(17,7.462641);
   hNCinFV_stack_11->SetBinContent(18,5.465293);
   hNCinFV_stack_11->SetBinContent(19,4.839881);
   hNCinFV_stack_11->SetBinContent(20,2.252388);
   hNCinFV_stack_11->SetBinContent(21,2.640747);
   hNCinFV_stack_11->SetBinContent(22,2.250697);
   hNCinFV_stack_11->SetBinContent(23,1.662242);
   hNCinFV_stack_11->SetBinContent(24,0.7336084);
   hNCinFV_stack_11->SetBinContent(25,11.22705);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.5548703);
   hNCinFV_stack_11->SetBinError(3,0.8548804);
   hNCinFV_stack_11->SetBinError(4,1.819752);
   hNCinFV_stack_11->SetBinError(5,2.177077);
   hNCinFV_stack_11->SetBinError(6,2.130971);
   hNCinFV_stack_11->SetBinError(7,2.535952);
   hNCinFV_stack_11->SetBinError(8,2.42996);
   hNCinFV_stack_11->SetBinError(9,2.159928);
   hNCinFV_stack_11->SetBinError(10,2.194176);
   hNCinFV_stack_11->SetBinError(11,1.992816);
   hNCinFV_stack_11->SetBinError(12,1.494717);
   hNCinFV_stack_11->SetBinError(13,1.630425);
   hNCinFV_stack_11->SetBinError(14,1.271503);
   hNCinFV_stack_11->SetBinError(15,1.256605);
   hNCinFV_stack_11->SetBinError(16,1.330841);
   hNCinFV_stack_11->SetBinError(17,1.414761);
   hNCinFV_stack_11->SetBinError(18,1.209773);
   hNCinFV_stack_11->SetBinError(19,1.092906);
   hNCinFV_stack_11->SetBinError(20,0.7350883);
   hNCinFV_stack_11->SetBinError(21,0.784705);
   hNCinFV_stack_11->SetBinError(22,0.7346377);
   hNCinFV_stack_11->SetBinError(23,0.6513556);
   hNCinFV_stack_11->SetBinError(24,0.4394482);
   hNCinFV_stack_11->SetBinError(25,1.698969);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,0.2394598);
   hnumuCCinFV_stack_12->SetBinContent(2,2.147347);
   hnumuCCinFV_stack_12->SetBinContent(3,7.273338);
   hnumuCCinFV_stack_12->SetBinContent(4,12.2754);
   hnumuCCinFV_stack_12->SetBinContent(5,23.20739);
   hnumuCCinFV_stack_12->SetBinContent(6,28.60157);
   hnumuCCinFV_stack_12->SetBinContent(7,30.72433);
   hnumuCCinFV_stack_12->SetBinContent(8,27.44416);
   hnumuCCinFV_stack_12->SetBinContent(9,20.6108);
   hnumuCCinFV_stack_12->SetBinContent(10,19.39995);
   hnumuCCinFV_stack_12->SetBinContent(11,13.64193);
   hnumuCCinFV_stack_12->SetBinContent(12,12.36843);
   hnumuCCinFV_stack_12->SetBinContent(13,11.03051);
   hnumuCCinFV_stack_12->SetBinContent(14,9.298175);
   hnumuCCinFV_stack_12->SetBinContent(15,8.473906);
   hnumuCCinFV_stack_12->SetBinContent(16,5.979354);
   hnumuCCinFV_stack_12->SetBinContent(17,6.533398);
   hnumuCCinFV_stack_12->SetBinContent(18,4.488478);
   hnumuCCinFV_stack_12->SetBinContent(19,2.70906);
   hnumuCCinFV_stack_12->SetBinContent(20,3.043199);
   hnumuCCinFV_stack_12->SetBinContent(21,1.322064);
   hnumuCCinFV_stack_12->SetBinContent(22,1.518779);
   hnumuCCinFV_stack_12->SetBinContent(23,2.197444);
   hnumuCCinFV_stack_12->SetBinContent(24,1.320373);
   hnumuCCinFV_stack_12->SetBinContent(25,11.20713);
   hnumuCCinFV_stack_12->SetBinError(1,0.2394598);
   hnumuCCinFV_stack_12->SetBinError(2,0.7799832);
   hnumuCCinFV_stack_12->SetBinError(3,2.074247);
   hnumuCCinFV_stack_12->SetBinError(4,1.933254);
   hnumuCCinFV_stack_12->SetBinError(5,3.058633);
   hnumuCCinFV_stack_12->SetBinError(6,3.494124);
   hnumuCCinFV_stack_12->SetBinError(7,3.631065);
   hnumuCCinFV_stack_12->SetBinError(8,3.249801);
   hnumuCCinFV_stack_12->SetBinError(9,2.467953);
   hnumuCCinFV_stack_12->SetBinError(10,2.325469);
   hnumuCCinFV_stack_12->SetBinError(11,1.919145);
   hnumuCCinFV_stack_12->SetBinError(12,1.954316);
   hnumuCCinFV_stack_12->SetBinError(13,1.689773);
   hnumuCCinFV_stack_12->SetBinError(14,1.652129);
   hnumuCCinFV_stack_12->SetBinError(15,1.446395);
   hnumuCCinFV_stack_12->SetBinError(16,1.191734);
   hnumuCCinFV_stack_12->SetBinError(17,1.247639);
   hnumuCCinFV_stack_12->SetBinError(18,1.128146);
   hnumuCCinFV_stack_12->SetBinError(19,0.8029643);
   hnumuCCinFV_stack_12->SetBinError(20,0.8822875);
   hnumuCCinFV_stack_12->SetBinError(21,0.5554667);
   hnumuCCinFV_stack_12->SetBinError(22,0.5892709);
   hnumuCCinFV_stack_12->SetBinError(23,0.760276);
   hnumuCCinFV_stack_12->SetBinError(24,0.5548703);
   hnumuCCinFV_stack_12->SetBinError(25,1.750644);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(2,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(3,0.4753021);
   hnueCCinFV_stack_13->SetBinContent(4,2.398423);
   hnueCCinFV_stack_13->SetBinContent(5,0.785171);
   hnueCCinFV_stack_13->SetBinContent(6,1.905048);
   hnueCCinFV_stack_13->SetBinContent(7,2.316936);
   hnueCCinFV_stack_13->SetBinContent(8,2.650149);
   hnueCCinFV_stack_13->SetBinContent(9,1.147898);
   hnueCCinFV_stack_13->SetBinContent(10,0.8737744);
   hnueCCinFV_stack_13->SetBinContent(11,0.4748818);
   hnueCCinFV_stack_13->SetBinContent(12,1.801617);
   hnueCCinFV_stack_13->SetBinContent(13,0.8013275);
   hnueCCinFV_stack_13->SetBinContent(15,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(16,0.2007115);
   hnueCCinFV_stack_13->SetBinContent(17,0.7336411);
   hnueCCinFV_stack_13->SetBinContent(18,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(19,0.6194557);
   hnueCCinFV_stack_13->SetBinContent(20,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(21,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(22,0.00488893);
   hnueCCinFV_stack_13->SetBinContent(23,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(25,13.08889);
   hnueCCinFV_stack_13->SetBinError(2,0.1950249);
   hnueCCinFV_stack_13->SetBinError(3,0.3414528);
   hnueCCinFV_stack_13->SetBinError(4,1.448642);
   hnueCCinFV_stack_13->SetBinError(5,0.3925882);
   hnueCCinFV_stack_13->SetBinError(6,0.8945168);
   hnueCCinFV_stack_13->SetBinError(7,0.8089282);
   hnueCCinFV_stack_13->SetBinError(8,0.9034206);
   hnueCCinFV_stack_13->SetBinError(9,0.6270275);
   hnueCCinFV_stack_13->SetBinError(10,0.5175972);
   hnueCCinFV_stack_13->SetBinError(11,0.3406916);
   hnueCCinFV_stack_13->SetBinError(12,1.203825);
   hnueCCinFV_stack_13->SetBinError(13,0.4937343);
   hnueCCinFV_stack_13->SetBinError(15,0.340721);
   hnueCCinFV_stack_13->SetBinError(16,0.196756);
   hnueCCinFV_stack_13->SetBinError(17,0.4394482);
   hnueCCinFV_stack_13->SetBinError(18,0.2770047);
   hnueCCinFV_stack_13->SetBinError(19,0.4670934);
   hnueCCinFV_stack_13->SetBinError(20,0.3387718);
   hnueCCinFV_stack_13->SetBinError(21,0.2770047);
   hnueCCinFV_stack_13->SetBinError(22,0.00488893);
   hnueCCinFV_stack_13->SetBinError(23,0.3963213);
   hnueCCinFV_stack_13->SetBinError(25,2.56528);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__11->SetBinContent(1,8.152355);
   hmcerror__11->SetBinContent(2,39.90298);
   hmcerror__11->SetBinContent(3,111.1046);
   hmcerror__11->SetBinContent(4,255.8048);
   hmcerror__11->SetBinContent(5,400.811);
   hmcerror__11->SetBinContent(6,435.6238);
   hmcerror__11->SetBinContent(7,437.8004);
   hmcerror__11->SetBinContent(8,385.758);
   hmcerror__11->SetBinContent(9,307.3698);
   hmcerror__11->SetBinContent(10,267.5371);
   hmcerror__11->SetBinContent(11,219.7229);
   hmcerror__11->SetBinContent(12,182.212);
   hmcerror__11->SetBinContent(13,153.196);
   hmcerror__11->SetBinContent(14,121.0878);
   hmcerror__11->SetBinContent(15,94.0405);
   hmcerror__11->SetBinContent(16,81.22798);
   hmcerror__11->SetBinContent(17,66.38564);
   hmcerror__11->SetBinContent(18,56.0095);
   hmcerror__11->SetBinContent(19,49.55503);
   hmcerror__11->SetBinContent(20,37.25469);
   hmcerror__11->SetBinContent(21,26.25484);
   hmcerror__11->SetBinContent(22,21.8922);
   hmcerror__11->SetBinContent(23,20.2499);
   hmcerror__11->SetBinContent(24,15.83322);
   hmcerror__11->SetBinContent(25,115.3178);
   hmcerror__11->SetBinError(1,13.71744);
   hmcerror__11->SetBinError(2,20.44609);
   hmcerror__11->SetBinError(3,30.30744);
   hmcerror__11->SetBinError(4,86.78394);
   hmcerror__11->SetBinError(5,95.3317);
   hmcerror__11->SetBinError(6,99.12061);
   hmcerror__11->SetBinError(7,106.8401);
   hmcerror__11->SetBinError(8,93.25564);
   hmcerror__11->SetBinError(9,77.64545);
   hmcerror__11->SetBinError(10,74.17188);
   hmcerror__11->SetBinError(11,59.9379);
   hmcerror__11->SetBinError(12,47.96143);
   hmcerror__11->SetBinError(13,47.74693);
   hmcerror__11->SetBinError(14,40.10289);
   hmcerror__11->SetBinError(15,34.12768);
   hmcerror__11->SetBinError(16,32.34534);
   hmcerror__11->SetBinError(17,24.86881);
   hmcerror__11->SetBinError(18,21.08753);
   hmcerror__11->SetBinError(19,20.76281);
   hmcerror__11->SetBinError(20,17.16602);
   hmcerror__11->SetBinError(21,20.55137);
   hmcerror__11->SetBinError(22,11.48125);
   hmcerror__11->SetBinError(23,10.78246);
   hmcerror__11->SetBinError(24,11.34462);
   hmcerror__11->SetBinError(25,34.41255);
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
   
   Double_t _fx3013[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3013[24] = {
   2,
   34,
   114,
   326,
   418,
   494,
   406,
   393,
   329,
   237,
   198,
   184,
   119,
   81,
   75,
   70,
   60,
   56,
   39,
   23,
   24,
   12,
   13,
   20};
   Double_t _felx3013[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3013[24] = {
   2,
   5.9703,
   10.67708,
   18.05547,
   20.44505,
   22.22611,
   20.14944,
   19.82423,
   18.13836,
   15.3948,
   14.07125,
   13.56466,
   10.90871,
   9.1239,
   8.7852,
   8.4925,
   7.8743,
   7.6127,
   6.3813,
   4.9457,
   5.0476,
   3.64022,
   3.77763,
   4.6266};
   Double_t _fehx3013[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3013[24] = {
   1.51917,
   5.7635,
   10.67708,
   18.05547,
   20.44505,
   22.22611,
   20.14944,
   19.82423,
   18.13836,
   15.3948,
   14.07125,
   13.56466,
   10.90871,
   8.9221,
   8.5831,
   8.2902,
   7.6713,
   7.4094,
   6.1757,
   4.7346,
   4.837,
   3.4155,
   3.5552,
   4.4133};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,660);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(567.8487);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.3/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3727.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 98.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 474.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 500.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  92.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1269.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  241.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 554.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 223.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 255.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 19.7","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-92.4,-0.5333333,677.6,2.133333);
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
   
   Double_t _fx3014[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3014[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3014[24] = {
   1.682635,
   0.512395,
   0.2727829,
   0.3392584,
   0.237847,
   0.2275372,
   0.2440383,
   0.2417465,
   0.2526125,
   0.2772396,
   0.2727886,
   0.2632177,
   0.3116723,
   0.3311885,
   0.3629041,
   0.3982044,
   0.3746112,
   0.3764991,
   0.4189849,
   0.4607748,
   0.782765,
   0.5244447,
   0.5324701,
   0.7165075};
   Double_t _fehx3014[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3014[24] = {
   1.682635,
   0.512395,
   0.2727829,
   0.3392584,
   0.237847,
   0.2275372,
   0.2440383,
   0.2417465,
   0.2526125,
   0.2772396,
   0.2727886,
   0.2632177,
   0.3116723,
   0.3311885,
   0.3629041,
   0.3982044,
   0.3746112,
   0.3764991,
   0.4189849,
   0.4607748,
   0.782765,
   0.5244447,
   0.5324701,
   0.7165075};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,660);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
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
   
   Double_t _fx3015[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3015[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3015[24] = {
   0.3811608,
   0.1702618,
   0.1667939,
   0.1845408,
   0.1972822,
   0.1957192,
   0.2002863,
   0.2041652,
   0.2152024,
   0.2231143,
   0.2230999,
   0.2311872,
   0.2657326,
   0.2790191,
   0.2932769,
   0.3190608,
   0.3120663,
   0.290557,
   0.2950434,
   0.3066332,
   0.3247428,
   0.329498,
   0.2709052,
   0.325249};
   Double_t _fehx3015[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3015[24] = {
   0.3811608,
   0.1702618,
   0.1667939,
   0.1845408,
   0.1972822,
   0.1957192,
   0.2002863,
   0.2041652,
   0.2152024,
   0.2231143,
   0.2230999,
   0.2311872,
   0.2657326,
   0.2790191,
   0.2932769,
   0.3190608,
   0.3120663,
   0.290557,
   0.2950434,
   0.3066332,
   0.3247428,
   0.329498,
   0.2709052,
   0.325249};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,660);
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
   
   Double_t _fx3016[24] = {
   12.5,
   37.5,
   62.5,
   87.5,
   112.5,
   137.5,
   162.5,
   187.5,
   212.5,
   237.5,
   262.5,
   287.5,
   312.5,
   337.5,
   362.5,
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3016[24] = {
   0.2453279,
   0.8520666,
   1.02606,
   1.274409,
   1.042886,
   1.134006,
   0.9273631,
   1.018773,
   1.070372,
   0.8858585,
   0.901135,
   1.009813,
   0.7767828,
   0.6689361,
   0.7975287,
   0.861772,
   0.9038099,
   0.9998303,
   0.7870038,
   0.6173719,
   0.9141172,
   0.5481404,
   0.6419786,
   1.263167};
   Double_t _felx3016[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3016[24] = {
   0.2453279,
   0.1496204,
   0.09609932,
   0.07058299,
   0.0510092,
   0.05102134,
   0.04602426,
   0.05139032,
   0.05901151,
   0.05754269,
   0.06404088,
   0.07444437,
   0.07120757,
   0.07534945,
   0.09341932,
   0.1045514,
   0.1186145,
   0.135918,
   0.128772,
   0.1327537,
   0.1922541,
   0.1662793,
   0.1865506,
   0.2922083};
   Double_t _fehx3016[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3016[24] = {
   0.1863474,
   0.1444378,
   0.09609932,
   0.07058299,
   0.0510092,
   0.05102134,
   0.04602426,
   0.05139032,
   0.05901151,
   0.05754269,
   0.06404088,
   0.07444437,
   0.07120757,
   0.07368289,
   0.09127025,
   0.1020609,
   0.1155566,
   0.1322883,
   0.1246231,
   0.1270873,
   0.1842327,
   0.1560145,
   0.1755663,
   0.2787367};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,660);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(1.696094);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);

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
   TLine *line = new TLine(0,1,600,1);
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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
