#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Thu Mar  9 16:16:03 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",60,83,1200,900);
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
   pad1->Range(-0.4846154,-2.92558,3.553846,323.5076);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmc__7->SetBinContent(1,45.63634);
   hmc__7->SetBinContent(2,99.43977);
   hmc__7->SetBinContent(3,142.2018);
   hmc__7->SetBinContent(4,146.279);
   hmc__7->SetBinContent(5,145.1199);
   hmc__7->SetBinContent(6,125.8064);
   hmc__7->SetBinContent(7,121.6135);
   hmc__7->SetBinContent(8,106.3002);
   hmc__7->SetBinContent(9,94.67497);
   hmc__7->SetBinContent(10,74.106);
   hmc__7->SetBinContent(11,63.83699);
   hmc__7->SetBinContent(12,65.9716);
   hmc__7->SetBinContent(13,46.57862);
   hmc__7->SetBinContent(14,48.45072);
   hmc__7->SetBinContent(15,44.8804);
   hmc__7->SetBinContent(16,45.4763);
   hmc__7->SetBinContent(17,39.46379);
   hmc__7->SetBinContent(18,34.87649);
   hmc__7->SetBinContent(19,29.89793);
   hmc__7->SetBinContent(20,33.92062);
   hmc__7->SetBinContent(21,28.80772);
   hmc__7->SetBinContent(22,26.46974);
   hmc__7->SetBinContent(23,18.45022);
   hmc__7->SetBinContent(24,6.534346);
   hmc__7->SetBinError(1,19.18736);
   hmc__7->SetBinError(2,36.30844);
   hmc__7->SetBinError(3,35.81775);
   hmc__7->SetBinError(4,39.5519);
   hmc__7->SetBinError(5,39.13255);
   hmc__7->SetBinError(6,39.7702);
   hmc__7->SetBinError(7,34.37372);
   hmc__7->SetBinError(8,30.43021);
   hmc__7->SetBinError(9,28.10287);
   hmc__7->SetBinError(10,22.51974);
   hmc__7->SetBinError(11,18.95484);
   hmc__7->SetBinError(12,19.9493);
   hmc__7->SetBinError(13,18.09474);
   hmc__7->SetBinError(14,17.27244);
   hmc__7->SetBinError(15,15.72221);
   hmc__7->SetBinError(16,23.81474);
   hmc__7->SetBinError(17,18.088);
   hmc__7->SetBinError(18,15.41308);
   hmc__7->SetBinError(19,16.42353);
   hmc__7->SetBinError(20,24.91137);
   hmc__7->SetBinError(21,14.78917);
   hmc__7->SetBinError(22,12.95797);
   hmc__7->SetBinError(23,11.01396);
   hmc__7->SetBinError(24,5.694171);
   hmc__7->SetBinError(25,0.3895343);
   hmc__7->SetMinimum(-2.92558);
   hmc__7->SetMaximum(307.1859);
   hmc__7->SetEntries(1602.903);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,0,3.15);
   hs3_stack_3->SetMinimum(-1.244044e-08);
   hs3_stack_3->SetMaximum(153.593);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.127039);
   hbadmatch_stack_1->SetBinContent(2,2.740407);
   hbadmatch_stack_1->SetBinContent(3,3.199755);
   hbadmatch_stack_1->SetBinContent(4,4.246354);
   hbadmatch_stack_1->SetBinContent(5,2.808037);
   hbadmatch_stack_1->SetBinContent(6,2.711418);
   hbadmatch_stack_1->SetBinContent(7,3.656045);
   hbadmatch_stack_1->SetBinContent(8,4.044496);
   hbadmatch_stack_1->SetBinContent(9,3.92604);
   hbadmatch_stack_1->SetBinContent(10,2.363614);
   hbadmatch_stack_1->SetBinContent(11,4.060904);
   hbadmatch_stack_1->SetBinContent(12,1.936493);
   hbadmatch_stack_1->SetBinContent(13,2.04943);
   hbadmatch_stack_1->SetBinContent(14,3.702824);
   hbadmatch_stack_1->SetBinContent(15,2.550486);
   hbadmatch_stack_1->SetBinContent(16,1.752451);
   hbadmatch_stack_1->SetBinContent(17,2.079658);
   hbadmatch_stack_1->SetBinContent(18,1.413964);
   hbadmatch_stack_1->SetBinContent(19,1.152536);
   hbadmatch_stack_1->SetBinContent(20,0.774857);
   hbadmatch_stack_1->SetBinContent(21,1.572789);
   hbadmatch_stack_1->SetBinContent(22,0.9024922);
   hbadmatch_stack_1->SetBinContent(23,1.270501);
   hbadmatch_stack_1->SetBinContent(24,0.4161119);
   hbadmatch_stack_1->SetBinError(1,0.5201044);
   hbadmatch_stack_1->SetBinError(2,1.286629);
   hbadmatch_stack_1->SetBinError(3,0.9282579);
   hbadmatch_stack_1->SetBinError(4,1.0378);
   hbadmatch_stack_1->SetBinError(5,0.8382408);
   hbadmatch_stack_1->SetBinError(6,0.810243);
   hbadmatch_stack_1->SetBinError(7,1.067253);
   hbadmatch_stack_1->SetBinError(8,1.047655);
   hbadmatch_stack_1->SetBinError(9,1.097545);
   hbadmatch_stack_1->SetBinError(10,0.7259292);
   hbadmatch_stack_1->SetBinError(11,1.207138);
   hbadmatch_stack_1->SetBinError(12,0.7046088);
   hbadmatch_stack_1->SetBinError(13,0.8662755);
   hbadmatch_stack_1->SetBinError(14,0.9613861);
   hbadmatch_stack_1->SetBinError(15,0.8950171);
   hbadmatch_stack_1->SetBinError(16,0.7345848);
   hbadmatch_stack_1->SetBinError(17,0.7153109);
   hbadmatch_stack_1->SetBinError(18,0.6515799);
   hbadmatch_stack_1->SetBinError(19,0.5303601);
   hbadmatch_stack_1->SetBinError(20,0.459396);
   hbadmatch_stack_1->SetBinError(21,0.6094309);
   hbadmatch_stack_1->SetBinError(22,0.4526115);
   hbadmatch_stack_1->SetBinError(23,0.5895188);
   hbadmatch_stack_1->SetBinError(24,0.2946723);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,2.916804);
   hext_stack_2->SetBinContent(2,8.186592);
   hext_stack_2->SetBinContent(3,14.98898);
   hext_stack_2->SetBinContent(4,12.9604);
   hext_stack_2->SetBinContent(5,16.37041);
   hext_stack_2->SetBinContent(6,17.41422);
   hext_stack_2->SetBinContent(7,15.54562);
   hext_stack_2->SetBinContent(8,15.95222);
   hext_stack_2->SetBinContent(9,16.44102);
   hext_stack_2->SetBinContent(10,17.69395);
   hext_stack_2->SetBinContent(11,10.69239);
   hext_stack_2->SetBinContent(12,15.13021);
   hext_stack_2->SetBinContent(13,9.141014);
   hext_stack_2->SetBinContent(14,11.98721);
   hext_stack_2->SetBinContent(15,9.014151);
   hext_stack_2->SetBinContent(16,10.81648);
   hext_stack_2->SetBinContent(17,7.850605);
   hext_stack_2->SetBinContent(18,6.710238);
   hext_stack_2->SetBinContent(19,3.483397);
   hext_stack_2->SetBinContent(20,4.620993);
   hext_stack_2->SetBinContent(21,3.483397);
   hext_stack_2->SetBinContent(22,2.185808);
   hext_stack_2->SetBinContent(23,2.517386);
   hext_stack_2->SetBinContent(24,1.219797);
   hext_stack_2->SetBinError(1,1.132884);
   hext_stack_2->SetBinError(2,1.834006);
   hext_stack_2->SetBinError(3,2.472046);
   hext_stack_2->SetBinError(4,2.327986);
   hext_stack_2->SetBinError(5,2.657721);
   hext_stack_2->SetBinError(6,2.739589);
   hext_stack_2->SetBinError(7,2.607473);
   hext_stack_2->SetBinError(8,2.638984);
   hext_stack_2->SetBinError(9,2.681352);
   hext_stack_2->SetBinError(10,2.64876);
   hext_stack_2->SetBinError(11,2.08484);
   hext_stack_2->SetBinError(12,2.522567);
   hext_stack_2->SetBinError(13,1.986595);
   hext_stack_2->SetBinError(14,2.259163);
   hext_stack_2->SetBinError(15,1.814337);
   hext_stack_2->SetBinError(16,2.310329);
   hext_stack_2->SetBinError(17,1.8233);
   hext_stack_2->SetBinError(18,1.795792);
   hext_stack_2->SetBinError(19,1.197416);
   hext_stack_2->SetBinError(20,1.367364);
   hext_stack_2->SetBinError(21,1.197416);
   hext_stack_2->SetBinError(22,1.006415);
   hext_stack_2->SetBinError(23,0.9575503);
   hext_stack_2->SetBinError(24,0.7042499);
   hext_stack_2->SetEntries(595);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.6097389);
   hdirt_stack_3->SetBinContent(2,0.9525174);
   hdirt_stack_3->SetBinContent(3,2.432193);
   hdirt_stack_3->SetBinContent(4,2.123665);
   hdirt_stack_3->SetBinContent(5,1.891371);
   hdirt_stack_3->SetBinContent(6,1.380093);
   hdirt_stack_3->SetBinContent(7,1.640457);
   hdirt_stack_3->SetBinContent(8,1.491792);
   hdirt_stack_3->SetBinContent(9,2.093622);
   hdirt_stack_3->SetBinContent(10,0.4142144);
   hdirt_stack_3->SetBinContent(12,0.3381872);
   hdirt_stack_3->SetBinContent(13,0.4377912);
   hdirt_stack_3->SetBinContent(14,1.472087);
   hdirt_stack_3->SetBinContent(15,0.811899);
   hdirt_stack_3->SetBinContent(16,0.5090927);
   hdirt_stack_3->SetBinContent(17,0.6143302);
   hdirt_stack_3->SetBinContent(18,0.8606333);
   hdirt_stack_3->SetBinContent(19,1.551925);
   hdirt_stack_3->SetBinContent(20,0.4762587);
   hdirt_stack_3->SetBinContent(21,0.6123907);
   hdirt_stack_3->SetBinContent(22,0.3569671);
   hdirt_stack_3->SetBinContent(23,0.6951543);
   hdirt_stack_3->SetBinError(1,0.3899956);
   hdirt_stack_3->SetBinError(2,0.5165933);
   hdirt_stack_3->SetBinError(3,0.884326);
   hdirt_stack_3->SetBinError(4,0.7833706);
   hdirt_stack_3->SetBinError(5,0.6118382);
   hdirt_stack_3->SetBinError(6,0.6465947);
   hdirt_stack_3->SetBinError(7,0.7255896);
   hdirt_stack_3->SetBinError(8,0.6050722);
   hdirt_stack_3->SetBinError(9,0.7764114);
   hdirt_stack_3->SetBinError(10,0.2391468);
   hdirt_stack_3->SetBinError(12,0.3381872);
   hdirt_stack_3->SetBinError(13,0.3095651);
   hdirt_stack_3->SetBinError(14,0.6414173);
   hdirt_stack_3->SetBinError(15,0.476673);
   hdirt_stack_3->SetBinError(16,0.3601374);
   hdirt_stack_3->SetBinError(17,0.39051);
   hdirt_stack_3->SetBinError(18,0.456873);
   hdirt_stack_3->SetBinError(19,1.035988);
   hdirt_stack_3->SetBinError(20,0.3652866);
   hdirt_stack_3->SetBinError(21,0.4468697);
   hdirt_stack_3->SetBinError(22,0.258803);
   hdirt_stack_3->SetBinError(23,0.4258516);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,7.054893);
   houtFV_stack_4->SetBinContent(2,16.48861);
   houtFV_stack_4->SetBinContent(3,28.51121);
   houtFV_stack_4->SetBinContent(4,26.49375);
   houtFV_stack_4->SetBinContent(5,30.16947);
   houtFV_stack_4->SetBinContent(6,24.72588);
   houtFV_stack_4->SetBinContent(7,21.49478);
   houtFV_stack_4->SetBinContent(8,19.57776);
   houtFV_stack_4->SetBinContent(9,13.58673);
   houtFV_stack_4->SetBinContent(10,11.63682);
   houtFV_stack_4->SetBinContent(11,10.48314);
   houtFV_stack_4->SetBinContent(12,11.99439);
   houtFV_stack_4->SetBinContent(13,8.629081);
   houtFV_stack_4->SetBinContent(14,9.086452);
   houtFV_stack_4->SetBinContent(15,9.552485);
   houtFV_stack_4->SetBinContent(16,11.44072);
   houtFV_stack_4->SetBinContent(17,9.960721);
   houtFV_stack_4->SetBinContent(18,9.481829);
   houtFV_stack_4->SetBinContent(19,7.938059);
   houtFV_stack_4->SetBinContent(20,10.41485);
   houtFV_stack_4->SetBinContent(21,9.0767);
   houtFV_stack_4->SetBinContent(22,9.102308);
   houtFV_stack_4->SetBinContent(23,5.858724);
   houtFV_stack_4->SetBinContent(24,2.249007);
   houtFV_stack_4->SetBinError(1,1.420596);
   houtFV_stack_4->SetBinError(2,2.063784);
   houtFV_stack_4->SetBinError(3,2.715904);
   houtFV_stack_4->SetBinError(4,2.65297);
   houtFV_stack_4->SetBinError(5,2.686221);
   houtFV_stack_4->SetBinError(6,2.524389);
   houtFV_stack_4->SetBinError(7,2.341051);
   houtFV_stack_4->SetBinError(8,2.414074);
   houtFV_stack_4->SetBinError(9,1.792426);
   houtFV_stack_4->SetBinError(10,1.766597);
   houtFV_stack_4->SetBinError(11,1.658212);
   houtFV_stack_4->SetBinError(12,1.719343);
   houtFV_stack_4->SetBinError(13,1.500781);
   houtFV_stack_4->SetBinError(14,1.482894);
   houtFV_stack_4->SetBinError(15,1.617174);
   houtFV_stack_4->SetBinError(16,2.068737);
   houtFV_stack_4->SetBinError(17,1.573005);
   houtFV_stack_4->SetBinError(18,1.528312);
   houtFV_stack_4->SetBinError(19,1.323026);
   houtFV_stack_4->SetBinError(20,1.563669);
   houtFV_stack_4->SetBinError(21,1.57039);
   houtFV_stack_4->SetBinError(22,1.489557);
   houtFV_stack_4->SetBinError(23,1.241348);
   houtFV_stack_4->SetBinError(24,0.7341869);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.909162);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.165502);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.80313);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.63357);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.855194);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.87819);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5304361);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.4075087);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6040582);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5251252);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5280202);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4855902);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3320795);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.283386);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.04832419);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,6.3594);
   hNCpi0inFVres_stack_7->SetBinContent(2,15.44585);
   hNCpi0inFVres_stack_7->SetBinContent(3,21.99043);
   hNCpi0inFVres_stack_7->SetBinContent(4,27.79334);
   hNCpi0inFVres_stack_7->SetBinContent(5,28.80353);
   hNCpi0inFVres_stack_7->SetBinContent(6,24.4453);
   hNCpi0inFVres_stack_7->SetBinContent(7,23.3167);
   hNCpi0inFVres_stack_7->SetBinContent(8,23.65763);
   hNCpi0inFVres_stack_7->SetBinContent(9,14.91942);
   hNCpi0inFVres_stack_7->SetBinContent(10,13.55097);
   hNCpi0inFVres_stack_7->SetBinContent(11,13.8431);
   hNCpi0inFVres_stack_7->SetBinContent(12,12.34149);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.851469);
   hNCpi0inFVres_stack_7->SetBinContent(14,8.114948);
   hNCpi0inFVres_stack_7->SetBinContent(15,7.517095);
   hNCpi0inFVres_stack_7->SetBinContent(16,7.307176);
   hNCpi0inFVres_stack_7->SetBinContent(17,5.368778);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.725414);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.239488);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.997598);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.94787);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.07997);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.021762);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.515986);
   hNCpi0inFVres_stack_7->SetBinError(1,0.827224);
   hNCpi0inFVres_stack_7->SetBinError(2,1.217183);
   hNCpi0inFVres_stack_7->SetBinError(3,1.507969);
   hNCpi0inFVres_stack_7->SetBinError(4,1.758694);
   hNCpi0inFVres_stack_7->SetBinError(5,1.699779);
   hNCpi0inFVres_stack_7->SetBinError(6,1.556111);
   hNCpi0inFVres_stack_7->SetBinError(7,1.606164);
   hNCpi0inFVres_stack_7->SetBinError(8,1.602302);
   hNCpi0inFVres_stack_7->SetBinError(9,1.268592);
   hNCpi0inFVres_stack_7->SetBinError(10,1.144165);
   hNCpi0inFVres_stack_7->SetBinError(11,1.170591);
   hNCpi0inFVres_stack_7->SetBinError(12,1.201602);
   hNCpi0inFVres_stack_7->SetBinError(13,0.92475);
   hNCpi0inFVres_stack_7->SetBinError(14,0.9410563);
   hNCpi0inFVres_stack_7->SetBinError(15,0.949019);
   hNCpi0inFVres_stack_7->SetBinError(16,0.9143454);
   hNCpi0inFVres_stack_7->SetBinError(17,0.7427266);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7037095);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6590602);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5117999);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6866337);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5396849);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4703213);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2321763);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.557102);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.242727);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.807712);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.35958);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.943804);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.898382);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.24664);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.24837);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.263652);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.49623);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.840408);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.300266);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.813508);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.38039);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.827294);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.8501219);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.046422);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.05904);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5717859);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.017522);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.06004);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.697004);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.8096042);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6540713);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7225839);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9008366);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.0918);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8335902);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7827415);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.860773);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5898774);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.6273941);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5169081);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3793129);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5246312);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4417295);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3525453);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4847881);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2770189);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3663515);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2988711);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.2355051);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2853243);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3759641);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2563433);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3476357);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.02789998);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,12.23818);
   hCCpi0inFV_stack_10->SetBinContent(2,25.13061);
   hCCpi0inFV_stack_10->SetBinContent(3,32.1691);
   hCCpi0inFV_stack_10->SetBinContent(4,30.62045);
   hCCpi0inFV_stack_10->SetBinContent(5,28.38251);
   hCCpi0inFV_stack_10->SetBinContent(6,24.2987);
   hCCpi0inFV_stack_10->SetBinContent(7,25.23599);
   hCCpi0inFV_stack_10->SetBinContent(8,21.98848);
   hCCpi0inFV_stack_10->SetBinContent(9,19.49226);
   hCCpi0inFV_stack_10->SetBinContent(10,11.55775);
   hCCpi0inFV_stack_10->SetBinContent(11,10.22209);
   hCCpi0inFV_stack_10->SetBinContent(12,9.069206);
   hCCpi0inFV_stack_10->SetBinContent(13,7.003108);
   hCCpi0inFV_stack_10->SetBinContent(14,6.467199);
   hCCpi0inFV_stack_10->SetBinContent(15,6.451564);
   hCCpi0inFV_stack_10->SetBinContent(16,6.783976);
   hCCpi0inFV_stack_10->SetBinContent(17,7.237651);
   hCCpi0inFV_stack_10->SetBinContent(18,5.678306);
   hCCpi0inFV_stack_10->SetBinContent(19,6.248935);
   hCCpi0inFV_stack_10->SetBinContent(20,7.101194);
   hCCpi0inFV_stack_10->SetBinContent(21,4.05471);
   hCCpi0inFV_stack_10->SetBinContent(22,6.869471);
   hCCpi0inFV_stack_10->SetBinContent(23,3.617562);
   hCCpi0inFV_stack_10->SetBinContent(24,1.176911);
   hCCpi0inFV_stack_10->SetBinError(1,1.758289);
   hCCpi0inFV_stack_10->SetBinError(2,2.519593);
   hCCpi0inFV_stack_10->SetBinError(3,2.947612);
   hCCpi0inFV_stack_10->SetBinError(4,2.782154);
   hCCpi0inFV_stack_10->SetBinError(5,2.674139);
   hCCpi0inFV_stack_10->SetBinError(6,2.524799);
   hCCpi0inFV_stack_10->SetBinError(7,2.571685);
   hCCpi0inFV_stack_10->SetBinError(8,2.364702);
   hCCpi0inFV_stack_10->SetBinError(9,2.258813);
   hCCpi0inFV_stack_10->SetBinError(10,1.629607);
   hCCpi0inFV_stack_10->SetBinError(11,1.527268);
   hCCpi0inFV_stack_10->SetBinError(12,1.524836);
   hCCpi0inFV_stack_10->SetBinError(13,1.319458);
   hCCpi0inFV_stack_10->SetBinError(14,1.260346);
   hCCpi0inFV_stack_10->SetBinError(15,1.290868);
   hCCpi0inFV_stack_10->SetBinError(16,1.330702);
   hCCpi0inFV_stack_10->SetBinError(17,1.347738);
   hCCpi0inFV_stack_10->SetBinError(18,1.144658);
   hCCpi0inFV_stack_10->SetBinError(19,1.248655);
   hCCpi0inFV_stack_10->SetBinError(20,1.364434);
   hCCpi0inFV_stack_10->SetBinError(21,1.01996);
   hCCpi0inFV_stack_10->SetBinError(22,1.321241);
   hCCpi0inFV_stack_10->SetBinError(23,0.8981079);
   hCCpi0inFV_stack_10->SetBinError(24,0.4804759);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,3.034178);
   hNCinFV_stack_11->SetBinContent(2,8.091433);
   hNCinFV_stack_11->SetBinContent(3,7.727216);
   hNCinFV_stack_11->SetBinContent(4,8.409262);
   hNCinFV_stack_11->SetBinContent(5,9.663465);
   hNCinFV_stack_11->SetBinContent(6,6.245393);
   hNCinFV_stack_11->SetBinContent(7,6.734104);
   hNCinFV_stack_11->SetBinContent(8,2.199135);
   hNCinFV_stack_11->SetBinContent(9,3.806432);
   hNCinFV_stack_11->SetBinContent(10,1.91221);
   hNCinFV_stack_11->SetBinContent(11,2.732646);
   hNCinFV_stack_11->SetBinContent(12,1.180292);
   hNCinFV_stack_11->SetBinContent(13,0.7319179);
   hNCinFV_stack_11->SetBinContent(14,0.9286332);
   hNCinFV_stack_11->SetBinContent(15,1.752451);
   hNCinFV_stack_11->SetBinContent(16,0.9303237);
   hNCinFV_stack_11->SetBinContent(17,0.9768147);
   hNCinFV_stack_11->SetBinContent(18,1.125349);
   hNCinFV_stack_11->SetBinContent(19,1.072095);
   hNCinFV_stack_11->SetBinContent(20,1.858957);
   hNCinFV_stack_11->SetBinContent(21,1.170609);
   hNCinFV_stack_11->SetBinContent(22,0.3917402);
   hNCinFV_stack_11->SetBinContent(23,0.5901461);
   hNCinFV_stack_11->SetBinContent(24,0.1967154);
   hNCinFV_stack_11->SetBinError(1,0.8325598);
   hNCinFV_stack_11->SetBinError(2,1.507309);
   hNCinFV_stack_11->SetBinError(3,1.345084);
   hNCinFV_stack_11->SetBinError(4,1.42876);
   hNCinFV_stack_11->SetBinError(5,1.606516);
   hNCinFV_stack_11->SetBinError(6,1.271098);
   hNCinFV_stack_11->SetBinError(7,1.345519);
   hNCinFV_stack_11->SetBinError(8,0.7607114);
   hNCinFV_stack_11->SetBinError(9,1.020103);
   hNCinFV_stack_11->SetBinError(10,0.6516395);
   hNCinFV_stack_11->SetBinError(11,0.8554385);
   hNCinFV_stack_11->SetBinError(12,0.4818523);
   hNCinFV_stack_11->SetBinError(13,0.438694);
   hNCinFV_stack_11->SetBinError(14,0.48078);
   hNCinFV_stack_11->SetBinError(15,0.7345848);
   hNCinFV_stack_11->SetBinError(16,0.4814682);
   hNCinFV_stack_11->SetBinError(17,0.4368475);
   hNCinFV_stack_11->SetBinError(18,0.5194673);
   hNCinFV_stack_11->SetBinError(19,0.5551335);
   hNCinFV_stack_11->SetBinError(20,0.6804124);
   hNCinFV_stack_11->SetBinError(21,0.5209496);
   hNCinFV_stack_11->SetBinError(22,0.2770047);
   hNCinFV_stack_11->SetBinError(23,0.340721);
   hNCinFV_stack_11->SetBinError(24,0.1967154);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.850344);
   hnumuCCinFV_stack_12->SetBinContent(2,9.003841);
   hnumuCCinFV_stack_12->SetBinContent(3,19.50179);
   hnumuCCinFV_stack_12->SetBinContent(4,19.43165);
   hnumuCCinFV_stack_12->SetBinContent(5,17.75706);
   hnumuCCinFV_stack_12->SetBinContent(6,16.98096);
   hnumuCCinFV_stack_12->SetBinContent(7,16.84859);
   hnumuCCinFV_stack_12->SetBinContent(8,13.76255);
   hnumuCCinFV_stack_12->SetBinContent(9,16.89453);
   hnumuCCinFV_stack_12->SetBinContent(10,12.08231);
   hnumuCCinFV_stack_12->SetBinContent(11,9.850708);
   hnumuCCinFV_stack_12->SetBinContent(12,11.59737);
   hnumuCCinFV_stack_12->SetBinContent(13,7.893401);
   hnumuCCinFV_stack_12->SetBinContent(14,5.255181);
   hnumuCCinFV_stack_12->SetBinContent(15,5.347176);
   hnumuCCinFV_stack_12->SetBinContent(16,5.085953);
   hnumuCCinFV_stack_12->SetBinContent(17,3.998356);
   hnumuCCinFV_stack_12->SetBinContent(18,3.152671);
   hnumuCCinFV_stack_12->SetBinContent(19,3.583907);
   hnumuCCinFV_stack_12->SetBinContent(20,4.113527);
   hnumuCCinFV_stack_12->SetBinContent(21,3.451478);
   hnumuCCinFV_stack_12->SetBinContent(22,2.19652);
   hnumuCCinFV_stack_12->SetBinContent(23,0.9856797);
   hnumuCCinFV_stack_12->SetBinContent(24,0.7319179);
   hnumuCCinFV_stack_12->SetBinError(1,1.550512);
   hnumuCCinFV_stack_12->SetBinError(2,1.651537);
   hnumuCCinFV_stack_12->SetBinError(3,3.072855);
   hnumuCCinFV_stack_12->SetBinError(4,3.324171);
   hnumuCCinFV_stack_12->SetBinError(5,2.495753);
   hnumuCCinFV_stack_12->SetBinError(6,2.123998);
   hnumuCCinFV_stack_12->SetBinError(7,2.257646);
   hnumuCCinFV_stack_12->SetBinError(8,1.942348);
   hnumuCCinFV_stack_12->SetBinError(9,2.28672);
   hnumuCCinFV_stack_12->SetBinError(10,1.904704);
   hnumuCCinFV_stack_12->SetBinError(11,1.687498);
   hnumuCCinFV_stack_12->SetBinError(12,1.831293);
   hnumuCCinFV_stack_12->SetBinError(13,1.550914);
   hnumuCCinFV_stack_12->SetBinError(14,1.56709);
   hnumuCCinFV_stack_12->SetBinError(15,1.190968);
   hnumuCCinFV_stack_12->SetBinError(16,1.214054);
   hnumuCCinFV_stack_12->SetBinError(17,1.053596);
   hnumuCCinFV_stack_12->SetBinError(18,0.9793421);
   hnumuCCinFV_stack_12->SetBinError(19,1.036762);
   hnumuCCinFV_stack_12->SetBinError(20,1.018448);
   hnumuCCinFV_stack_12->SetBinError(21,0.9435708);
   hnumuCCinFV_stack_12->SetBinError(22,0.7607907);
   hnumuCCinFV_stack_12->SetBinError(23,0.5068013);
   hnumuCCinFV_stack_12->SetBinError(24,0.438694);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,1.75613);
   hnueCCinFV_stack_13->SetBinContent(2,4.90797);
   hnueCCinFV_stack_13->SetBinContent(3,0.7353273);
   hnueCCinFV_stack_13->SetBinContent(4,0.8441336);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.3700248);
   hnueCCinFV_stack_13->SetBinContent(17,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(18,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,0.5901461);
   hnueCCinFV_stack_13->SetBinError(1,0.7021187);
   hnueCCinFV_stack_13->SetBinError(2,2.194873);
   hnueCCinFV_stack_13->SetBinError(3,0.5475369);
   hnueCCinFV_stack_13->SetBinError(4,0.4232719);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.3921167);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.2655531);
   hnueCCinFV_stack_13->SetBinError(17,0.3025491);
   hnueCCinFV_stack_13->SetBinError(18,0.2502081);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,0.340721);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);
   hmcerror__8->SetBinContent(1,45.63634);
   hmcerror__8->SetBinContent(2,99.43977);
   hmcerror__8->SetBinContent(3,142.2018);
   hmcerror__8->SetBinContent(4,146.279);
   hmcerror__8->SetBinContent(5,145.1199);
   hmcerror__8->SetBinContent(6,125.8064);
   hmcerror__8->SetBinContent(7,121.6135);
   hmcerror__8->SetBinContent(8,106.3002);
   hmcerror__8->SetBinContent(9,94.67497);
   hmcerror__8->SetBinContent(10,74.106);
   hmcerror__8->SetBinContent(11,63.83699);
   hmcerror__8->SetBinContent(12,65.9716);
   hmcerror__8->SetBinContent(13,46.57862);
   hmcerror__8->SetBinContent(14,48.45072);
   hmcerror__8->SetBinContent(15,44.8804);
   hmcerror__8->SetBinContent(16,45.4763);
   hmcerror__8->SetBinContent(17,39.46379);
   hmcerror__8->SetBinContent(18,34.87649);
   hmcerror__8->SetBinContent(19,29.89793);
   hmcerror__8->SetBinContent(20,33.92062);
   hmcerror__8->SetBinContent(21,28.80772);
   hmcerror__8->SetBinContent(22,26.46974);
   hmcerror__8->SetBinContent(23,18.45022);
   hmcerror__8->SetBinContent(24,6.534346);
   hmcerror__8->SetBinError(1,19.18736);
   hmcerror__8->SetBinError(2,36.30844);
   hmcerror__8->SetBinError(3,35.81775);
   hmcerror__8->SetBinError(4,39.5519);
   hmcerror__8->SetBinError(5,39.13255);
   hmcerror__8->SetBinError(6,39.7702);
   hmcerror__8->SetBinError(7,34.37372);
   hmcerror__8->SetBinError(8,30.43021);
   hmcerror__8->SetBinError(9,28.10287);
   hmcerror__8->SetBinError(10,22.51974);
   hmcerror__8->SetBinError(11,18.95484);
   hmcerror__8->SetBinError(12,19.9493);
   hmcerror__8->SetBinError(13,18.09474);
   hmcerror__8->SetBinError(14,17.27244);
   hmcerror__8->SetBinError(15,15.72221);
   hmcerror__8->SetBinError(16,23.81474);
   hmcerror__8->SetBinError(17,18.088);
   hmcerror__8->SetBinError(18,15.41308);
   hmcerror__8->SetBinError(19,16.42353);
   hmcerror__8->SetBinError(20,24.91137);
   hmcerror__8->SetBinError(21,14.78917);
   hmcerror__8->SetBinError(22,12.95797);
   hmcerror__8->SetBinError(23,11.01396);
   hmcerror__8->SetBinError(24,5.694171);
   hmcerror__8->SetBinError(25,0.3895343);
   hmcerror__8->SetEntries(1602.903);

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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3009[24] = {
   37,
   88,
   133,
   137,
   136,
   135,
   94,
   89,
   76,
   61,
   60,
   51,
   55,
   34,
   43,
   29,
   28,
   29,
   40,
   38,
   29,
   27,
   17,
   4};
   Double_t _felx3009[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3009[24] = {
   6.2203,
   9.5036,
   11.53256,
   11.7047,
   11.6619,
   11.61895,
   9.8173,
   9.5566,
   8.8425,
   7.9383,
   7.8743,
   7.2725,
   7.546,
   5.9703,
   6.6917,
   5.5285,
   5.4358,
   5.5285,
   6.4604,
   6.3013,
   5.5285,
   5.3414,
   4.2835,
   2.29683};
   Double_t _fehx3009[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3009[24] = {
   6.0141,
   9.3021,
   11.53256,
   11.7047,
   11.6619,
   11.61895,
   9.616,
   9.3552,
   8.6406,
   7.7354,
   7.6713,
   7.0686,
   7.3425,
   5.7635,
   6.4868,
   5.3201,
   5.2271,
   5.3201,
   6.2549,
   6.0955,
   5.3201,
   5.1322,
   4.0673,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,3.465);
   Graph_Graph3009->SetMinimum(1.532853);
   Graph_Graph3009->SetMaximum(163.4049);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1470.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 237.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 325.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  285.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  71.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 319.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 73.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 214.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3010[24] = {
   0.4204403,
   0.36513,
   0.2518797,
   0.2703867,
   0.2696567,
   0.3161224,
   0.2826473,
   0.2862668,
   0.2968352,
   0.3038856,
   0.2969257,
   0.3023922,
   0.3884775,
   0.356495,
   0.3503136,
   0.5236737,
   0.4583444,
   0.4419332,
   0.5493201,
   0.734402,
   0.5133751,
   0.489539,
   0.5969553,
   0.8714218};
   Double_t _fehx3010[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3010[24] = {
   0.4204403,
   0.36513,
   0.2518797,
   0.2703867,
   0.2696567,
   0.3161224,
   0.2826473,
   0.2862668,
   0.2968352,
   0.3038856,
   0.2969257,
   0.3023922,
   0.3884775,
   0.356495,
   0.3503136,
   0.5236737,
   0.4583444,
   0.4419332,
   0.5493201,
   0.734402,
   0.5133751,
   0.489539,
   0.5969553,
   0.8714218};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,3.465);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Leading shower Polar Angle #theta [rad]");
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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
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
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3011[24] = {
   0.2020886,
   0.1968663,
   0.1903307,
   0.199199,
   0.2040575,
   0.2093036,
   0.2135431,
   0.2153854,
   0.2054375,
   0.1966317,
   0.2042599,
   0.1954494,
   0.214857,
   0.1834427,
   0.1951922,
   0.1957241,
   0.202081,
   0.2049953,
   0.2227418,
   0.2054299,
   0.2185951,
   0.2125006,
   0.2250832,
   0.3234999};
   Double_t _fehx3011[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3011[24] = {
   0.2020886,
   0.1968663,
   0.1903307,
   0.199199,
   0.2040575,
   0.2093036,
   0.2135431,
   0.2153854,
   0.2054375,
   0.1966317,
   0.2042599,
   0.1954494,
   0.214857,
   0.1834427,
   0.1951922,
   0.1957241,
   0.202081,
   0.2049953,
   0.2227418,
   0.2054299,
   0.2185951,
   0.2125006,
   0.2250832,
   0.3234999};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,3.465);
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
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3012[24] = {
   0.8107574,
   0.8849578,
   0.9352904,
   0.9365664,
   0.937156,
   1.073078,
   0.7729406,
   0.8372517,
   0.8027465,
   0.8231452,
   0.9398939,
   0.7730599,
   1.180799,
   0.7017439,
   0.9581019,
   0.6376949,
   0.7095112,
   0.8315057,
   1.337885,
   1.120263,
   1.006675,
   1.020033,
   0.9213983,
   0.61215};
   Double_t _felx3012[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3012[24] = {
   0.1363015,
   0.09557142,
   0.08109996,
   0.08001627,
   0.08036046,
   0.09235583,
   0.08072543,
   0.08990202,
   0.0933985,
   0.1071209,
   0.1233501,
   0.1102368,
   0.1620057,
   0.1232242,
   0.1491007,
   0.1215688,
   0.1377415,
   0.1585165,
   0.2160819,
   0.1857661,
   0.1919104,
   0.2017927,
   0.2321653,
   0.3515011};
   Double_t _fehx3012[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3012[24] = {
   0.1317831,
   0.09354506,
   0.08109996,
   0.08001627,
   0.08036046,
   0.09235583,
   0.07907018,
   0.08800738,
   0.09126594,
   0.1043829,
   0.1201701,
   0.1071461,
   0.1576367,
   0.1189559,
   0.1445352,
   0.1169862,
   0.1324531,
   0.1525412,
   0.2092085,
   0.179699,
   0.1846762,
   0.1938893,
   0.2204473,
   0.3032989};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,3.465);
   Graph_Graph3012->SetMinimum(0.1320044);
   Graph_Graph3012->SetMaximum(1.675738);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_kine_pio_theta_high_all",24,0,3.15);

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
