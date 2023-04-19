#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Thu Mar  9 15:06:04 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
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
   pad1->Range(-92.30769,-11.5,676.9231,1271.658);
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
   hmc__10->SetBinContent(1,8.435106);
   hmc__10->SetBinContent(2,49.68648);
   hmc__10->SetBinContent(3,143.703);
   hmc__10->SetBinContent(4,314.8486);
   hmc__10->SetBinContent(5,493.7469);
   hmc__10->SetBinContent(6,525.1965);
   hmc__10->SetBinContent(7,533.0187);
   hmc__10->SetBinContent(8,456.0596);
   hmc__10->SetBinContent(9,373.8804);
   hmc__10->SetBinContent(10,328.186);
   hmc__10->SetBinContent(11,270.7808);
   hmc__10->SetBinContent(12,223.4402);
   hmc__10->SetBinContent(13,190.2003);
   hmc__10->SetBinContent(14,153.3685);
   hmc__10->SetBinContent(15,123.5259);
   hmc__10->SetBinContent(16,107.084);
   hmc__10->SetBinContent(17,88.58028);
   hmc__10->SetBinContent(18,69.74818);
   hmc__10->SetBinContent(19,65.48377);
   hmc__10->SetBinContent(20,47.38471);
   hmc__10->SetBinContent(21,34.46788);
   hmc__10->SetBinContent(22,28.02257);
   hmc__10->SetBinContent(23,25.74155);
   hmc__10->SetBinContent(24,19.31902);
   hmc__10->SetBinContent(25,163.3541);
   hmc__10->SetBinError(1,11.5129);
   hmc__10->SetBinError(2,22.62251);
   hmc__10->SetBinError(3,38.79911);
   hmc__10->SetBinError(4,94.66967);
   hmc__10->SetBinError(5,114.0776);
   hmc__10->SetBinError(6,115.4316);
   hmc__10->SetBinError(7,125.2029);
   hmc__10->SetBinError(8,107.6306);
   hmc__10->SetBinError(9,94.14893);
   hmc__10->SetBinError(10,90.56599);
   hmc__10->SetBinError(11,73.96418);
   hmc__10->SetBinError(12,62.01392);
   hmc__10->SetBinError(13,59.95675);
   hmc__10->SetBinError(14,51.10605);
   hmc__10->SetBinError(15,43.01995);
   hmc__10->SetBinError(16,40.92841);
   hmc__10->SetBinError(17,31.67396);
   hmc__10->SetBinError(18,29.72966);
   hmc__10->SetBinError(19,26.03016);
   hmc__10->SetBinError(20,20.24981);
   hmc__10->SetBinError(21,23.90481);
   hmc__10->SetBinError(22,14.06654);
   hmc__10->SetBinError(23,13.19354);
   hmc__10->SetBinError(24,15.21609);
   hmc__10->SetBinError(25,45.88195);
   hmc__10->SetMinimum(-11.5);
   hmc__10->SetMaximum(1207.5);
   hmc__10->SetEntries(4778.995);
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
   hs4_stack_4->SetMaximum(559.6697);
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
   hbadmatch_stack_1->SetBinContent(2,4.161001);
   hbadmatch_stack_1->SetBinContent(3,10.61377);
   hbadmatch_stack_1->SetBinContent(4,13.86934);
   hbadmatch_stack_1->SetBinContent(5,14.42334);
   hbadmatch_stack_1->SetBinContent(6,16.70093);
   hbadmatch_stack_1->SetBinContent(7,16.6528);
   hbadmatch_stack_1->SetBinContent(8,14.41026);
   hbadmatch_stack_1->SetBinContent(9,8.849751);
   hbadmatch_stack_1->SetBinContent(10,4.050037);
   hbadmatch_stack_1->SetBinContent(11,2.505615);
   hbadmatch_stack_1->SetBinContent(12,5.215058);
   hbadmatch_stack_1->SetBinContent(13,1.85882);
   hbadmatch_stack_1->SetBinContent(14,1.192617);
   hbadmatch_stack_1->SetBinContent(15,0.3934307);
   hbadmatch_stack_1->SetBinContent(16,0.5901461);
   hbadmatch_stack_1->SetBinContent(17,0.5884556);
   hbadmatch_stack_1->SetBinContent(18,0.9303237);
   hbadmatch_stack_1->SetBinContent(19,0.536893);
   hbadmatch_stack_1->SetBinContent(20,0.4241887);
   hbadmatch_stack_1->SetBinContent(21,0.536893);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.9330936);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,1.180292);
   hbadmatch_stack_1->SetBinError(1,1.089159);
   hbadmatch_stack_1->SetBinError(2,1.046081);
   hbadmatch_stack_1->SetBinError(3,1.931865);
   hbadmatch_stack_1->SetBinError(4,1.945703);
   hbadmatch_stack_1->SetBinError(5,1.87848);
   hbadmatch_stack_1->SetBinError(6,2.081194);
   hbadmatch_stack_1->SetBinError(7,2.243267);
   hbadmatch_stack_1->SetBinError(8,3.119163);
   hbadmatch_stack_1->SetBinError(9,1.637263);
   hbadmatch_stack_1->SetBinError(10,1.048711);
   hbadmatch_stack_1->SetBinError(11,0.7761417);
   hbadmatch_stack_1->SetBinError(12,1.961593);
   hbadmatch_stack_1->SetBinError(13,0.734563);
   hbadmatch_stack_1->SetBinError(14,0.5651773);
   hbadmatch_stack_1->SetBinError(15,0.2781975);
   hbadmatch_stack_1->SetBinError(16,0.340721);
   hbadmatch_stack_1->SetBinError(17,0.3397478);
   hbadmatch_stack_1->SetBinError(18,0.4814682);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.3007342);
   hbadmatch_stack_1->SetBinError(21,0.3929602);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.5580257);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.4818523);
   hbadmatch_stack_1->SetEntries(466);

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
   hext_stack_2->SetBinContent(1,1.697008);
   hext_stack_2->SetBinContent(2,15.7288);
   hext_stack_2->SetBinContent(3,29.90181);
   hext_stack_2->SetBinContent(4,50.28146);
   hext_stack_2->SetBinContent(5,69.80968);
   hext_stack_2->SetBinContent(6,69.37549);
   hext_stack_2->SetBinContent(7,59.94485);
   hext_stack_2->SetBinContent(8,47.7557);
   hext_stack_2->SetBinContent(9,28.88509);
   hext_stack_2->SetBinContent(10,25.26482);
   hext_stack_2->SetBinContent(11,22.20679);
   hext_stack_2->SetBinContent(12,15.9594);
   hext_stack_2->SetBinContent(13,9.237576);
   hext_stack_2->SetBinContent(14,8.910407);
   hext_stack_2->SetBinContent(15,3.889996);
   hext_stack_2->SetBinContent(16,6.068624);
   hext_stack_2->SetBinContent(17,2.517386);
   hext_stack_2->SetBinContent(18,4.371616);
   hext_stack_2->SetBinContent(19,2.185808);
   hext_stack_2->SetBinContent(20,2.592407);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,0.9660115);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(25,5.199175);
   hext_stack_2->SetBinError(1,0.8873887);
   hext_stack_2->SetBinError(2,2.57911);
   hext_stack_2->SetBinError(3,3.573304);
   hext_stack_2->SetBinError(4,4.435923);
   hext_stack_2->SetBinError(5,5.496149);
   hext_stack_2->SetBinError(6,5.480818);
   hext_stack_2->SetBinError(7,5.07832);
   hext_stack_2->SetBinError(8,4.593463);
   hext_stack_2->SetBinError(9,3.324211);
   hext_stack_2->SetBinError(10,3.290862);
   hext_stack_2->SetBinError(11,3.048608);
   hext_stack_2->SetBinError(12,2.600583);
   hext_stack_2->SetBinError(13,1.898485);
   hext_stack_2->SetBinError(14,1.958401);
   hext_stack_2->SetBinError(15,1.264566);
   hext_stack_2->SetBinError(16,1.677259);
   hext_stack_2->SetBinError(17,0.9575503);
   hext_stack_2->SetBinError(18,1.423285);
   hext_stack_2->SetBinError(19,1.006415);
   hext_stack_2->SetBinError(20,1.085446);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,0.7189592);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(25,1.397849);
   hext_stack_2->SetEntries(1214);

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
   hdirt_stack_3->SetBinContent(3,4.109475);
   hdirt_stack_3->SetBinContent(4,8.138678);
   hdirt_stack_3->SetBinContent(5,9.693376);
   hdirt_stack_3->SetBinContent(6,11.61952);
   hdirt_stack_3->SetBinContent(7,6.244131);
   hdirt_stack_3->SetBinContent(8,4.479935);
   hdirt_stack_3->SetBinContent(9,3.525503);
   hdirt_stack_3->SetBinContent(10,1.941801);
   hdirt_stack_3->SetBinContent(11,1.657859);
   hdirt_stack_3->SetBinContent(12,2.959599);
   hdirt_stack_3->SetBinContent(13,0.5831082);
   hdirt_stack_3->SetBinContent(14,1.333719);
   hdirt_stack_3->SetBinContent(15,1.576753);
   hdirt_stack_3->SetBinContent(16,0.3235058);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(18,1.730123);
   hdirt_stack_3->SetBinContent(19,0.4080678);
   hdirt_stack_3->SetBinContent(20,0.3381872);
   hdirt_stack_3->SetBinContent(25,0.2188956);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.7629888);
   hdirt_stack_3->SetBinError(3,0.9829398);
   hdirt_stack_3->SetBinError(4,1.492771);
   hdirt_stack_3->SetBinError(5,1.790956);
   hdirt_stack_3->SetBinError(6,1.779778);
   hdirt_stack_3->SetBinError(7,1.358115);
   hdirt_stack_3->SetBinError(8,1.10806);
   hdirt_stack_3->SetBinError(9,1.007426);
   hdirt_stack_3->SetBinError(10,0.7253579);
   hdirt_stack_3->SetBinError(11,0.6716659);
   hdirt_stack_3->SetBinError(12,0.9008491);
   hdirt_stack_3->SetBinError(13,0.3436842);
   hdirt_stack_3->SetBinError(14,0.65183);
   hdirt_stack_3->SetBinError(15,1.006703);
   hdirt_stack_3->SetBinError(16,0.2288138);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(18,1.17734);
   hdirt_stack_3->SetBinError(19,0.4080678);
   hdirt_stack_3->SetBinError(20,0.3381872);
   hdirt_stack_3->SetBinError(25,0.2188956);
   hdirt_stack_3->SetEntries(263);

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
   houtFV_stack_4->SetBinContent(1,2.000729);
   houtFV_stack_4->SetBinContent(2,7.490205);
   houtFV_stack_4->SetBinContent(3,30.11826);
   houtFV_stack_4->SetBinContent(4,50.57171);
   houtFV_stack_4->SetBinContent(5,77.81323);
   houtFV_stack_4->SetBinContent(6,75.80797);
   houtFV_stack_4->SetBinContent(7,73.1093);
   houtFV_stack_4->SetBinContent(8,58.89393);
   houtFV_stack_4->SetBinContent(9,42.57985);
   houtFV_stack_4->SetBinContent(10,35.4512);
   houtFV_stack_4->SetBinContent(11,25.4313);
   houtFV_stack_4->SetBinContent(12,22.60564);
   houtFV_stack_4->SetBinContent(13,18.30396);
   houtFV_stack_4->SetBinContent(14,10.63268);
   houtFV_stack_4->SetBinContent(15,9.917949);
   houtFV_stack_4->SetBinContent(16,8.1675);
   houtFV_stack_4->SetBinContent(17,7.059856);
   houtFV_stack_4->SetBinContent(18,4.933472);
   houtFV_stack_4->SetBinContent(19,7.500432);
   houtFV_stack_4->SetBinContent(20,3.317721);
   houtFV_stack_4->SetBinContent(21,1.72443);
   houtFV_stack_4->SetBinContent(22,1.897291);
   houtFV_stack_4->SetBinContent(23,2.826237);
   houtFV_stack_4->SetBinContent(24,1.710423);
   houtFV_stack_4->SetBinContent(25,7.386361);
   houtFV_stack_4->SetBinError(1,0.7343859);
   houtFV_stack_4->SetBinError(2,1.36933);
   houtFV_stack_4->SetBinError(3,2.733247);
   houtFV_stack_4->SetBinError(4,3.637858);
   houtFV_stack_4->SetBinError(5,4.469081);
   houtFV_stack_4->SetBinError(6,4.527519);
   houtFV_stack_4->SetBinError(7,4.27989);
   houtFV_stack_4->SetBinError(8,3.876306);
   houtFV_stack_4->SetBinError(9,3.274327);
   houtFV_stack_4->SetBinError(10,2.942715);
   houtFV_stack_4->SetBinError(11,2.52548);
   houtFV_stack_4->SetBinError(12,2.421952);
   houtFV_stack_4->SetBinError(13,2.126844);
   houtFV_stack_4->SetBinError(14,1.64078);
   houtFV_stack_4->SetBinError(15,1.631665);
   houtFV_stack_4->SetBinError(16,1.380984);
   houtFV_stack_4->SetBinError(17,1.316904);
   houtFV_stack_4->SetBinError(18,1.145041);
   houtFV_stack_4->SetBinError(19,1.379436);
   houtFV_stack_4->SetBinError(20,0.9197169);
   houtFV_stack_4->SetBinError(21,0.6241874);
   houtFV_stack_4->SetBinError(22,0.6926678);
   houtFV_stack_4->SetBinError(23,0.9211137);
   houtFV_stack_4->SetBinError(24,0.6196373);
   houtFV_stack_4->SetBinError(25,1.383117);
   houtFV_stack_4->SetEntries(2510);

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
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6539899);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.43727);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.810114);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.398758);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,8.826906);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.720267);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.087543);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,7.276443);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,6.276028);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,7.225973);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.814018);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,5.310818);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.701506);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.870491);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.276934);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,2.176544);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,3.137275);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,2.231512);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.118416);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,1.004736);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5860679);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.9489359);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,9.075333);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2280886);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4704586);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7413281);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8366198);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.037293);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7893843);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.9157275);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.8437611);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.776501);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.944188);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7898366);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7468636);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7469945);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8697323);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5790001);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.5203481);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6656715);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5030435);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4941312);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.305844);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2215976);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3032882);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.9208133);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

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
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.9902858);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.966962);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.017522);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.743258);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.9474399);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.800058);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9617218);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6139679);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.7538042);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3206861);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.473804);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2591116);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5212201);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2853243);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4088599);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2936159);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4698386);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2825829);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2233471);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3453893);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2201295);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2438946);
   hNCpi0inFVqe_stack_6->SetEntries(258);

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
   hNCpi0inFVres_stack_7->SetBinContent(1,1.228104);
   hNCpi0inFVres_stack_7->SetBinContent(2,9.219498);
   hNCpi0inFVres_stack_7->SetBinContent(3,35.04305);
   hNCpi0inFVres_stack_7->SetBinContent(4,96.37743);
   hNCpi0inFVres_stack_7->SetBinContent(5,172.8768);
   hNCpi0inFVres_stack_7->SetBinContent(6,187.8415);
   hNCpi0inFVres_stack_7->SetBinContent(7,192.1576);
   hNCpi0inFVres_stack_7->SetBinContent(8,164.9039);
   hNCpi0inFVres_stack_7->SetBinContent(9,151.9355);
   hNCpi0inFVres_stack_7->SetBinContent(10,127.5854);
   hNCpi0inFVres_stack_7->SetBinContent(11,102.0764);
   hNCpi0inFVres_stack_7->SetBinContent(12,81.85707);
   hNCpi0inFVres_stack_7->SetBinContent(13,72.33897);
   hNCpi0inFVres_stack_7->SetBinContent(14,60.14584);
   hNCpi0inFVres_stack_7->SetBinContent(15,42.76008);
   hNCpi0inFVres_stack_7->SetBinContent(16,37.76564);
   hNCpi0inFVres_stack_7->SetBinContent(17,29.85146);
   hNCpi0inFVres_stack_7->SetBinContent(18,21.32499);
   hNCpi0inFVres_stack_7->SetBinContent(19,21.29411);
   hNCpi0inFVres_stack_7->SetBinContent(20,15.2989);
   hNCpi0inFVres_stack_7->SetBinContent(21,10.94681);
   hNCpi0inFVres_stack_7->SetBinContent(22,10.77659);
   hNCpi0inFVres_stack_7->SetBinContent(23,6.676421);
   hNCpi0inFVres_stack_7->SetBinContent(24,7.057572);
   hNCpi0inFVres_stack_7->SetBinContent(25,34.61822);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3640422);
   hNCpi0inFVres_stack_7->SetBinError(2,1.022935);
   hNCpi0inFVres_stack_7->SetBinError(3,1.97204);
   hNCpi0inFVres_stack_7->SetBinError(4,3.151853);
   hNCpi0inFVres_stack_7->SetBinError(5,4.3651);
   hNCpi0inFVres_stack_7->SetBinError(6,4.481791);
   hNCpi0inFVres_stack_7->SetBinError(7,4.566054);
   hNCpi0inFVres_stack_7->SetBinError(8,4.069149);
   hNCpi0inFVres_stack_7->SetBinError(9,4.068656);
   hNCpi0inFVres_stack_7->SetBinError(10,3.705213);
   hNCpi0inFVres_stack_7->SetBinError(11,3.254168);
   hNCpi0inFVres_stack_7->SetBinError(12,2.887742);
   hNCpi0inFVres_stack_7->SetBinError(13,2.795182);
   hNCpi0inFVres_stack_7->SetBinError(14,2.557189);
   hNCpi0inFVres_stack_7->SetBinError(15,2.134491);
   hNCpi0inFVres_stack_7->SetBinError(16,2.051017);
   hNCpi0inFVres_stack_7->SetBinError(17,1.788424);
   hNCpi0inFVres_stack_7->SetBinError(18,1.533499);
   hNCpi0inFVres_stack_7->SetBinError(19,1.576015);
   hNCpi0inFVres_stack_7->SetBinError(20,1.292628);
   hNCpi0inFVres_stack_7->SetBinError(21,1.086917);
   hNCpi0inFVres_stack_7->SetBinError(22,1.0945);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7682278);
   hNCpi0inFVres_stack_7->SetBinError(24,0.9136714);
   hNCpi0inFVres_stack_7->SetBinError(25,1.908959);
   hNCpi0inFVres_stack_7->SetEntries(31278);

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
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.561408);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.623286);
   hNCpi0inFVdis_stack_8->SetBinContent(4,19.74015);
   hNCpi0inFVdis_stack_8->SetBinContent(5,32.92131);
   hNCpi0inFVdis_stack_8->SetBinContent(6,30.72648);
   hNCpi0inFVdis_stack_8->SetBinContent(7,29.6339);
   hNCpi0inFVdis_stack_8->SetBinContent(8,26.50676);
   hNCpi0inFVdis_stack_8->SetBinContent(9,23.95624);
   hNCpi0inFVdis_stack_8->SetBinContent(10,19.95389);
   hNCpi0inFVdis_stack_8->SetBinContent(11,19.32831);
   hNCpi0inFVdis_stack_8->SetBinContent(12,15.41846);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.85141);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.55347);
   hNCpi0inFVdis_stack_8->SetBinContent(15,11.78299);
   hNCpi0inFVdis_stack_8->SetBinContent(16,8.352925);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.2645);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.139608);
   hNCpi0inFVdis_stack_8->SetBinContent(19,6.914744);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.61855);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.560342);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.52413);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.180616);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.775566);
   hNCpi0inFVdis_stack_8->SetBinContent(25,22.157);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3689095);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8241205);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.417728);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.888839);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.75932);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.767799);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.650404);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.61412);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.450992);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.467109);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.256595);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.271656);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.16915);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.153257);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.9160815);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.103765);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8936432);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.8682388);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7652673);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7180364);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.5176605);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.6146506);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5835203);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.503122);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

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
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(15);

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
   hCCpi0inFV_stack_10->SetBinContent(1,0.7302274);
   hCCpi0inFV_stack_10->SetBinContent(2,3.462874);
   hCCpi0inFV_stack_10->SetBinContent(3,9.271731);
   hCCpi0inFV_stack_10->SetBinContent(4,36.39003);
   hCCpi0inFV_stack_10->SetBinContent(5,51.63746);
   hCCpi0inFV_stack_10->SetBinContent(6,60.60061);
   hCCpi0inFV_stack_10->SetBinContent(7,68.37135);
   hCCpi0inFV_stack_10->SetBinContent(8,65.94028);
   hCCpi0inFV_stack_10->SetBinContent(9,54.07113);
   hCCpi0inFV_stack_10->SetBinContent(10,58.5114);
   hCCpi0inFV_stack_10->SetBinContent(11,52.5697);
   hCCpi0inFV_stack_10->SetBinContent(12,39.67041);
   hCCpi0inFV_stack_10->SetBinContent(13,38.11892);
   hCCpi0inFV_stack_10->SetBinContent(14,28.77029);
   hCCpi0inFV_stack_10->SetBinContent(15,27.26259);
   hCCpi0inFV_stack_10->SetBinContent(16,21.66193);
   hCCpi0inFV_stack_10->SetBinContent(17,15.8647);
   hCCpi0inFV_stack_10->SetBinContent(18,14.2001);
   hCCpi0inFV_stack_10->SetBinContent(19,12.72434);
   hCCpi0inFV_stack_10->SetBinContent(20,9.708814);
   hCCpi0inFV_stack_10->SetBinContent(21,8.891211);
   hCCpi0inFV_stack_10->SetBinContent(22,6.595713);
   hCCpi0inFV_stack_10->SetBinContent(23,5.138031);
   hCCpi0inFV_stack_10->SetBinContent(24,3.517817);
   hCCpi0inFV_stack_10->SetBinContent(25,34.28146);
   hCCpi0inFV_stack_10->SetBinError(1,0.4379386);
   hCCpi0inFV_stack_10->SetBinError(2,0.961023);
   hCCpi0inFV_stack_10->SetBinError(3,1.538192);
   hCCpi0inFV_stack_10->SetBinError(4,3.002813);
   hCCpi0inFV_stack_10->SetBinError(5,3.575938);
   hCCpi0inFV_stack_10->SetBinError(6,3.910952);
   hCCpi0inFV_stack_10->SetBinError(7,4.155659);
   hCCpi0inFV_stack_10->SetBinError(8,4.082901);
   hCCpi0inFV_stack_10->SetBinError(9,3.641584);
   hCCpi0inFV_stack_10->SetBinError(10,3.866068);
   hCCpi0inFV_stack_10->SetBinError(11,3.615894);
   hCCpi0inFV_stack_10->SetBinError(12,3.143176);
   hCCpi0inFV_stack_10->SetBinError(13,3.113812);
   hCCpi0inFV_stack_10->SetBinError(14,2.661232);
   hCCpi0inFV_stack_10->SetBinError(15,2.622293);
   hCCpi0inFV_stack_10->SetBinError(16,2.310706);
   hCCpi0inFV_stack_10->SetBinError(17,1.940141);
   hCCpi0inFV_stack_10->SetBinError(18,1.939984);
   hCCpi0inFV_stack_10->SetBinError(19,1.812645);
   hCCpi0inFV_stack_10->SetBinError(20,1.569761);
   hCCpi0inFV_stack_10->SetBinError(21,1.494469);
   hCCpi0inFV_stack_10->SetBinError(22,1.317339);
   hCCpi0inFV_stack_10->SetBinError(23,1.074477);
   hCCpi0inFV_stack_10->SetBinError(24,0.9412229);
   hCCpi0inFV_stack_10->SetBinError(25,2.97338);
   hCCpi0inFV_stack_10->SetEntries(3118);

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
   hNCinFV_stack_11->SetBinContent(2,2.394159);
   hNCinFV_stack_11->SetBinContent(3,6.452103);
   hNCinFV_stack_11->SetBinContent(4,16.23007);
   hNCinFV_stack_11->SetBinContent(5,25.02153);
   hNCinFV_stack_11->SetBinContent(6,26.38671);
   hNCinFV_stack_11->SetBinContent(7,33.7496);
   hNCinFV_stack_11->SetBinContent(8,30.43309);
   hNCinFV_stack_11->SetBinContent(9,22.48898);
   hNCinFV_stack_11->SetBinContent(10,22.96586);
   hNCinFV_stack_11->SetBinContent(11,17.81998);
   hNCinFV_stack_11->SetBinContent(12,14.56444);
   hNCinFV_stack_11->SetBinContent(13,12.98795);
   hNCinFV_stack_11->SetBinContent(14,9.387767);
   hNCinFV_stack_11->SetBinContent(15,9.727944);
   hNCinFV_stack_11->SetBinContent(16,9.428104);
   hNCinFV_stack_11->SetBinContent(17,8.639552);
   hNCinFV_stack_11->SetBinContent(18,7.320868);
   hNCinFV_stack_11->SetBinContent(19,6.156874);
   hNCinFV_stack_11->SetBinContent(20,3.771167);
   hNCinFV_stack_11->SetBinContent(21,3.372665);
   hNCinFV_stack_11->SetBinContent(22,2.78759);
   hNCinFV_stack_11->SetBinContent(23,2.590875);
   hNCinFV_stack_11->SetBinContent(24,1.127039);
   hNCinFV_stack_11->SetBinContent(25,16.73268);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.785313);
   hNCinFV_stack_11->SetBinError(3,1.225933);
   hNCinFV_stack_11->SetBinError(4,1.991804);
   hNCinFV_stack_11->SetBinError(5,2.505997);
   hNCinFV_stack_11->SetBinError(6,2.558567);
   hNCinFV_stack_11->SetBinError(7,2.937195);
   hNCinFV_stack_11->SetBinError(8,2.728632);
   hNCinFV_stack_11->SetBinError(9,2.363952);
   hNCinFV_stack_11->SetBinError(10,2.403823);
   hNCinFV_stack_11->SetBinError(11,2.195263);
   hNCinFV_stack_11->SetBinError(12,1.881939);
   hNCinFV_stack_11->SetBinError(13,1.851869);
   hNCinFV_stack_11->SetBinError(14,1.494273);
   hNCinFV_stack_11->SetBinError(15,1.532506);
   hNCinFV_stack_11->SetBinError(16,1.545269);
   hNCinFV_stack_11->SetBinError(17,1.494124);
   hNCinFV_stack_11->SetBinError(18,1.387511);
   hNCinFV_stack_11->SetBinError(19,1.225153);
   hNCinFV_stack_11->SetBinError(20,0.9421226);
   hNCinFV_stack_11->SetBinError(21,0.8990075);
   hNCinFV_stack_11->SetBinError(22,0.8331329);
   hNCinFV_stack_11->SetBinError(23,0.8095761);
   hNCinFV_stack_11->SetBinError(24,0.5201044);
   hNCinFV_stack_11->SetBinError(25,2.12251);
   hNCinFV_stack_11->SetEntries(1336);

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
   hnumuCCinFV_stack_12->SetBinContent(1,0.817987);
   hnumuCCinFV_stack_12->SetBinContent(2,2.804693);
   hnumuCCinFV_stack_12->SetBinContent(3,9.965794);
   hnumuCCinFV_stack_12->SetBinContent(4,17.20084);
   hnumuCCinFV_stack_12->SetBinContent(5,31.98794);
   hnumuCCinFV_stack_12->SetBinContent(6,36.39209);
   hnumuCCinFV_stack_12->SetBinContent(7,39.1656);
   hnumuCCinFV_stack_12->SetBinContent(8,32.39004);
   hnumuCCinFV_stack_12->SetBinContent(9,26.39993);
   hnumuCCinFV_stack_12->SetBinContent(10,23.32175);
   hnumuCCinFV_stack_12->SetBinContent(11,19.28312);
   hnumuCCinFV_stack_12->SetBinContent(12,15.77156);
   hnumuCCinFV_stack_12->SetBinContent(13,14.05173);
   hnumuCCinFV_stack_12->SetBinContent(14,13.37707);
   hnumuCCinFV_stack_12->SetBinContent(15,10.4468);
   hnumuCCinFV_stack_12->SetBinContent(16,8.375204);
   hnumuCCinFV_stack_12->SetBinContent(17,8.534125);
   hnumuCCinFV_stack_12->SetBinContent(18,4.880219);
   hnumuCCinFV_stack_12->SetBinContent(19,3.977871);
   hnumuCCinFV_stack_12->SetBinContent(20,3.468593);
   hnumuCCinFV_stack_12->SetBinContent(21,1.518779);
   hnumuCCinFV_stack_12->SetBinContent(22,1.91052);
   hnumuCCinFV_stack_12->SetBinContent(23,2.197444);
   hnumuCCinFV_stack_12->SetBinContent(24,1.517089);
   hnumuCCinFV_stack_12->SetBinContent(25,15.99545);
   hnumuCCinFV_stack_12->SetBinError(1,0.47945);
   hnumuCCinFV_stack_12->SetBinError(2,0.8678515);
   hnumuCCinFV_stack_12->SetBinError(3,2.223799);
   hnumuCCinFV_stack_12->SetBinError(4,2.275391);
   hnumuCCinFV_stack_12->SetBinError(5,3.570636);
   hnumuCCinFV_stack_12->SetBinError(6,3.777293);
   hnumuCCinFV_stack_12->SetBinError(7,4.157321);
   hnumuCCinFV_stack_12->SetBinError(8,3.449153);
   hnumuCCinFV_stack_12->SetBinError(9,2.803351);
   hnumuCCinFV_stack_12->SetBinError(10,2.586817);
   hnumuCCinFV_stack_12->SetBinError(11,2.270862);
   hnumuCCinFV_stack_12->SetBinError(12,2.174299);
   hnumuCCinFV_stack_12->SetBinError(13,1.900543);
   hnumuCCinFV_stack_12->SetBinError(14,1.940441);
   hnumuCCinFV_stack_12->SetBinError(15,2.011901);
   hnumuCCinFV_stack_12->SetBinError(16,1.427448);
   hnumuCCinFV_stack_12->SetBinError(17,1.447731);
   hnumuCCinFV_stack_12->SetBinError(18,1.161657);
   hnumuCCinFV_stack_12->SetBinError(19,0.9958022);
   hnumuCCinFV_stack_12->SetBinError(20,0.9794853);
   hnumuCCinFV_stack_12->SetBinError(21,0.5892709);
   hnumuCCinFV_stack_12->SetBinError(22,0.6511312);
   hnumuCCinFV_stack_12->SetBinError(23,0.760276);
   hnumuCCinFV_stack_12->SetBinError(24,0.5887087);
   hnumuCCinFV_stack_12->SetBinError(25,2.073207);
   hnumuCCinFV_stack_12->SetEntries(1360);

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
   hnueCCinFV_stack_13->SetBinContent(2,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(3,0.4753021);
   hnueCCinFV_stack_13->SetBinContent(4,2.593448);
   hnueCCinFV_stack_13->SetBinContent(5,0.785171);
   hnueCCinFV_stack_13->SetBinContent(6,2.245225);
   hnueCCinFV_stack_13->SetBinContent(7,3.238467);
   hnueCCinFV_stack_13->SetBinContent(8,2.650149);
   hnueCCinFV_stack_13->SetBinContent(9,1.300823);
   hnueCCinFV_stack_13->SetBinContent(10,0.8737744);
   hnueCCinFV_stack_13->SetBinContent(11,1.011775);
   hnueCCinFV_stack_13->SetBinContent(12,1.801617);
   hnueCCinFV_stack_13->SetBinContent(13,0.9980428);
   hnueCCinFV_stack_13->SetBinContent(15,0.7868615);
   hnueCCinFV_stack_13->SetBinContent(16,0.2007115);
   hnueCCinFV_stack_13->SetBinContent(17,0.7336411);
   hnueCCinFV_stack_13->SetBinContent(18,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(19,0.6194557);
   hnueCCinFV_stack_13->SetBinContent(20,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(21,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(22,0.00488893);
   hnueCCinFV_stack_13->SetBinContent(23,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(25,16.03547);
   hnueCCinFV_stack_13->SetBinError(2,0.2758068);
   hnueCCinFV_stack_13->SetBinError(3,0.3414528);
   hnueCCinFV_stack_13->SetBinError(4,1.461711);
   hnueCCinFV_stack_13->SetBinError(5,0.3925882);
   hnueCCinFV_stack_13->SetBinError(6,0.9570168);
   hnueCCinFV_stack_13->SetBinError(7,0.9770065);
   hnueCCinFV_stack_13->SetBinError(8,0.9034206);
   hnueCCinFV_stack_13->SetBinError(9,0.6454064);
   hnueCCinFV_stack_13->SetBinError(10,0.5175972);
   hnueCCinFV_stack_13->SetBinError(11,0.5200851);
   hnueCCinFV_stack_13->SetBinError(12,1.203825);
   hnueCCinFV_stack_13->SetBinError(13,0.5314795);
   hnueCCinFV_stack_13->SetBinError(15,0.3934307);
   hnueCCinFV_stack_13->SetBinError(16,0.196756);
   hnueCCinFV_stack_13->SetBinError(17,0.4394482);
   hnueCCinFV_stack_13->SetBinError(18,0.2770047);
   hnueCCinFV_stack_13->SetBinError(19,0.4670934);
   hnueCCinFV_stack_13->SetBinError(20,0.3387718);
   hnueCCinFV_stack_13->SetBinError(21,0.2770047);
   hnueCCinFV_stack_13->SetBinError(22,0.00488893);
   hnueCCinFV_stack_13->SetBinError(23,0.3963213);
   hnueCCinFV_stack_13->SetBinError(25,2.889986);
   hnueCCinFV_stack_13->SetEntries(135);

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
   hmcerror__11->SetBinContent(1,8.435106);
   hmcerror__11->SetBinContent(2,49.68648);
   hmcerror__11->SetBinContent(3,143.703);
   hmcerror__11->SetBinContent(4,314.8486);
   hmcerror__11->SetBinContent(5,493.7469);
   hmcerror__11->SetBinContent(6,525.1965);
   hmcerror__11->SetBinContent(7,533.0187);
   hmcerror__11->SetBinContent(8,456.0596);
   hmcerror__11->SetBinContent(9,373.8804);
   hmcerror__11->SetBinContent(10,328.186);
   hmcerror__11->SetBinContent(11,270.7808);
   hmcerror__11->SetBinContent(12,223.4402);
   hmcerror__11->SetBinContent(13,190.2003);
   hmcerror__11->SetBinContent(14,153.3685);
   hmcerror__11->SetBinContent(15,123.5259);
   hmcerror__11->SetBinContent(16,107.084);
   hmcerror__11->SetBinContent(17,88.58028);
   hmcerror__11->SetBinContent(18,69.74818);
   hmcerror__11->SetBinContent(19,65.48377);
   hmcerror__11->SetBinContent(20,47.38471);
   hmcerror__11->SetBinContent(21,34.46788);
   hmcerror__11->SetBinContent(22,28.02257);
   hmcerror__11->SetBinContent(23,25.74155);
   hmcerror__11->SetBinContent(24,19.31902);
   hmcerror__11->SetBinContent(25,163.3541);
   hmcerror__11->SetBinError(1,11.5129);
   hmcerror__11->SetBinError(2,22.62251);
   hmcerror__11->SetBinError(3,38.79911);
   hmcerror__11->SetBinError(4,94.66967);
   hmcerror__11->SetBinError(5,114.0776);
   hmcerror__11->SetBinError(6,115.4316);
   hmcerror__11->SetBinError(7,125.2029);
   hmcerror__11->SetBinError(8,107.6306);
   hmcerror__11->SetBinError(9,94.14893);
   hmcerror__11->SetBinError(10,90.56599);
   hmcerror__11->SetBinError(11,73.96418);
   hmcerror__11->SetBinError(12,62.01392);
   hmcerror__11->SetBinError(13,59.95675);
   hmcerror__11->SetBinError(14,51.10605);
   hmcerror__11->SetBinError(15,43.01995);
   hmcerror__11->SetBinError(16,40.92841);
   hmcerror__11->SetBinError(17,31.67396);
   hmcerror__11->SetBinError(18,29.72966);
   hmcerror__11->SetBinError(19,26.03016);
   hmcerror__11->SetBinError(20,20.24981);
   hmcerror__11->SetBinError(21,23.90481);
   hmcerror__11->SetBinError(22,14.06654);
   hmcerror__11->SetBinError(23,13.19354);
   hmcerror__11->SetBinError(24,15.21609);
   hmcerror__11->SetBinError(25,45.88195);
   hmcerror__11->SetEntries(4778.995);

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
   3,
   48,
   155,
   402,
   506,
   575,
   479,
   450,
   379,
   288,
   242,
   214,
   142,
   105,
   92,
   86,
   69,
   71,
   45,
   30,
   31,
   21,
   13,
   24};
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
   2.143368,
   7.0604,
   12.4499,
   20.04994,
   22.49444,
   23.97916,
   21.88607,
   21.2132,
   19.46792,
   16.97056,
   15.55635,
   14.62874,
   11.91638,
   10.24695,
   9.7138,
   9.3967,
   8.4327,
   8.5518,
   6.8416,
   5.6197,
   5.7094,
   4.7354,
   3.77763,
   5.0476};
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
   1.72422,
   6.8561,
   12.4499,
   20.04994,
   22.49444,
   23.97916,
   21.88607,
   21.2132,
   19.46792,
   16.97056,
   15.55635,
   14.62874,
   11.91638,
   10.24695,
   9.513,
   9.1951,
   8.2304,
   8.3496,
   6.637,
   5.4117,
   5.5017,
   4.5229,
   3.5552,
   4.837};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,660);
   Graph_Graph3013->SetMinimum(0.7709688);
   Graph_Graph3013->SetMaximum(658.7914);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=13.0/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4470.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 121.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 478.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 63.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 579.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  96.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  12.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1659.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  320.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 693.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 296.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 329.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 22.5","F");

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
   1.364879,
   0.4553052,
   0.2699951,
   0.3006832,
   0.2310446,
   0.2197875,
   0.2348941,
   0.2360012,
   0.2518156,
   0.2759593,
   0.2731515,
   0.2775415,
   0.3152295,
   0.333224,
   0.3482666,
   0.3822085,
   0.3575735,
   0.4262428,
   0.3975055,
   0.427349,
   0.6935387,
   0.5019718,
   0.5125387,
   0.7876223};
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
   1.364879,
   0.4553052,
   0.2699951,
   0.3006832,
   0.2310446,
   0.2197875,
   0.2348941,
   0.2360012,
   0.2518156,
   0.2759593,
   0.2731515,
   0.2775415,
   0.3152295,
   0.333224,
   0.3482666,
   0.3822085,
   0.3575735,
   0.4262428,
   0.3975055,
   0.427349,
   0.6935387,
   0.5019718,
   0.5125387,
   0.7876223};
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
   0.3619736,
   0.1672274,
   0.1689964,
   0.188575,
   0.1963061,
   0.19988,
   0.2076738,
   0.2173231,
   0.2291212,
   0.2382796,
   0.2427745,
   0.2490556,
   0.2834347,
   0.2917965,
   0.3004727,
   0.3134298,
   0.3111737,
   0.3024712,
   0.3062667,
   0.3009245,
   0.3227855,
   0.3192911,
   0.269762,
   0.3085886};
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
   0.3619736,
   0.1672274,
   0.1689964,
   0.188575,
   0.1963061,
   0.19988,
   0.2076738,
   0.2173231,
   0.2291212,
   0.2382796,
   0.2427745,
   0.2490556,
   0.2834347,
   0.2917965,
   0.3004727,
   0.3134298,
   0.3111737,
   0.3024712,
   0.3062667,
   0.3009245,
   0.3227855,
   0.3192911,
   0.269762,
   0.3085886};
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
   0.3556565,
   0.9660575,
   1.078613,
   1.276804,
   1.024817,
   1.094828,
   0.8986551,
   0.9867131,
   1.013693,
   0.8775511,
   0.8937117,
   0.9577508,
   0.7465813,
   0.6846257,
   0.7447831,
   0.8031081,
   0.7789544,
   1.017948,
   0.6871932,
   0.6331156,
   0.899388,
   0.7493959,
   0.50502,
   1.242299};
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
   0.2541009,
   0.142099,
   0.0866363,
   0.0636812,
   0.04555865,
   0.04565749,
   0.0410606,
   0.0465141,
   0.05206992,
   0.0517102,
   0.05744997,
   0.0654705,
   0.06265171,
   0.06681263,
   0.07863776,
   0.08775076,
   0.09519839,
   0.1226096,
   0.1044778,
   0.1185973,
   0.1656441,
   0.1689852,
   0.1467522,
   0.2612762};
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
   0.20441,
   0.1379872,
   0.0866363,
   0.0636812,
   0.04555865,
   0.04565749,
   0.0410606,
   0.0465141,
   0.05206992,
   0.0517102,
   0.05744997,
   0.0654705,
   0.06265171,
   0.06681263,
   0.07701219,
   0.08586813,
   0.09291459,
   0.1197106,
   0.1013534,
   0.1142077,
   0.1596182,
   0.161402,
   0.1381113,
   0.2503751};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,660);
   Graph_Graph3016->SetMinimum(0.09140001);
   Graph_Graph3016->SetMaximum(1.631786);
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
