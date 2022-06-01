#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu May 26 10:49:40 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas1->SetHighLightColor(2);
   canvas1->Range(0,0,1,1);
   canvas1->SetFillColor(0);
   canvas1->SetBorderMode(0);
   canvas1->SetBorderSize(2);
   canvas1->SetLeftMargin(0.12);
   canvas1->SetRightMargin(0.12);
   canvas1->SetTopMargin(0.05);
   canvas1->SetBottomMargin(0.12);
   canvas1->SetFrameLineWidth(2);
   canvas1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.30769,-9.22,676.9231,776.9063);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__1->SetBinContent(1,8.152354);
   hmc__1->SetBinContent(2,36.8968);
   hmc__1->SetBinContent(3,107.3332);
   hmc__1->SetBinContent(4,248.3717);
   hmc__1->SetBinContent(5,390.7923);
   hmc__1->SetBinContent(6,425.3566);
   hmc__1->SetBinContent(7,426.3248);
   hmc__1->SetBinContent(8,373.9564);
   hmc__1->SetBinContent(9,314.494);
   hmc__1->SetBinContent(10,259.1337);
   hmc__1->SetBinContent(11,215.4816);
   hmc__1->SetBinContent(12,175.1339);
   hmc__1->SetBinContent(13,154.6095);
   hmc__1->SetBinContent(14,119.1741);
   hmc__1->SetBinContent(15,97.00862);
   hmc__1->SetBinContent(16,76.64879);
   hmc__1->SetBinContent(17,64.86088);
   hmc__1->SetBinContent(18,48.8473);
   hmc__1->SetBinContent(19,51.07649);
   hmc__1->SetBinContent(20,36.35119);
   hmc__1->SetBinContent(21,26.13848);
   hmc__1->SetBinContent(22,20.84905);
   hmc__1->SetBinContent(23,19.01814);
   hmc__1->SetBinContent(24,16.27812);
   hmc__1->SetBinContent(25,108.713);
   hmc__1->SetBinError(1,5.141043);
   hmc__1->SetBinError(2,10.03691);
   hmc__1->SetBinError(3,23.18597);
   hmc__1->SetBinError(4,57.56497);
   hmc__1->SetBinError(5,82.64039);
   hmc__1->SetBinError(6,87.24835);
   hmc__1->SetBinError(7,87.09972);
   hmc__1->SetBinError(8,80.37759);
   hmc__1->SetBinError(9,64.29608);
   hmc__1->SetBinError(10,56.20959);
   hmc__1->SetBinError(11,45.18298);
   hmc__1->SetBinError(12,35.54322);
   hmc__1->SetBinError(13,33.81495);
   hmc__1->SetBinError(14,24.61025);
   hmc__1->SetBinError(15,20.59372);
   hmc__1->SetBinError(16,17.73678);
   hmc__1->SetBinError(17,14.58095);
   hmc__1->SetBinError(18,12.22485);
   hmc__1->SetBinError(19,11.81854);
   hmc__1->SetBinError(20,9.932884);
   hmc__1->SetBinError(21,7.01933);
   hmc__1->SetBinError(22,6.74597);
   hmc__1->SetBinError(23,5.918567);
   hmc__1->SetBinError(24,5.833464);
   hmc__1->SetBinError(25,25.36949);
   hmc__1->SetMinimum(-9.22);
   hmc__1->SetMaximum(737.6);
   hmc__1->SetEntries(3775.136);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetTitleOffset(1);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetLabelSize(0.04);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetTitleOffset(1);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,600);
   hs1_stack_1->SetMinimum(-1.150846e-08);
   hs1_stack_1->SetMaximum(447.641);
   hs1_stack_1->SetDirectory(0);
   hs1_stack_1->SetStats(0);
   hs1_stack_1->SetLineWidth(2);
   hs1_stack_1->SetMarkerStyle(20);
   hs1_stack_1->GetXaxis()->SetNdivisions(509);
   hs1_stack_1->GetXaxis()->SetLabelFont(132);
   hs1_stack_1->GetXaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetXaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetXaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetXaxis()->SetTitleFont(132);
   hs1_stack_1->GetYaxis()->SetNdivisions(509);
   hs1_stack_1->GetYaxis()->SetLabelFont(132);
   hs1_stack_1->GetYaxis()->SetLabelOffset(0.01);
   hs1_stack_1->GetYaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetYaxis()->SetTitleOffset(0.95);
   hs1_stack_1->GetYaxis()->SetTitleFont(132);
   hs1_stack_1->GetZaxis()->SetLabelFont(132);
   hs1_stack_1->GetZaxis()->SetLabelSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleSize(0.08);
   hs1_stack_1->GetZaxis()->SetTitleOffset(1.2);
   hs1_stack_1->GetZaxis()->SetTitleFont(132);
   hs1->SetHistogram(hs1_stack_1);
   
   
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
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,2.890854);
   hext_stack_2->SetBinContent(2,10.5368);
   hext_stack_2->SetBinContent(3,25.26205);
   hext_stack_2->SetBinContent(4,46.40904);
   hext_stack_2->SetBinContent(5,60.19857);
   hext_stack_2->SetBinContent(6,66.62026);
   hext_stack_2->SetBinContent(7,56.48016);
   hext_stack_2->SetBinContent(8,50.25312);
   hext_stack_2->SetBinContent(9,39.68879);
   hext_stack_2->SetBinContent(10,22.03798);
   hext_stack_2->SetBinContent(11,26.74993);
   hext_stack_2->SetBinContent(12,15.07559);
   hext_stack_2->SetBinContent(13,16.48569);
   hext_stack_2->SetBinContent(14,9.051632);
   hext_stack_2->SetBinContent(15,7.690611);
   hext_stack_2->SetBinContent(16,2.428004);
   hext_stack_2->SetBinContent(17,3.476217);
   hext_stack_2->SetBinContent(18,1.868591);
   hext_stack_2->SetBinContent(19,5.88986);
   hext_stack_2->SetBinContent(20,1.779209);
   hext_stack_2->SetBinContent(21,1.950793);
   hext_stack_2->SetBinContent(22,0.4065989);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.9660115);
   hext_stack_2->SetBinContent(25,2.923985);
   hext_stack_2->SetBinError(1,1.323597);
   hext_stack_2->SetBinError(2,2.120525);
   hext_stack_2->SetBinError(3,3.341571);
   hext_stack_2->SetBinError(4,4.466452);
   hext_stack_2->SetBinError(5,5.205652);
   hext_stack_2->SetBinError(6,5.526559);
   hext_stack_2->SetBinError(7,5.041692);
   hext_stack_2->SetBinError(8,4.941889);
   hext_stack_2->SetBinError(9,4.311874);
   hext_stack_2->SetBinError(10,3.006444);
   hext_stack_2->SetBinError(11,3.545298);
   hext_stack_2->SetBinError(12,2.511219);
   hext_stack_2->SetBinError(13,2.790035);
   hext_stack_2->SetBinError(14,2.021799);
   hext_stack_2->SetBinError(15,1.827394);
   hext_stack_2->SetBinError(16,1.028599);
   hext_stack_2->SetBinError(17,1.278674);
   hext_stack_2->SetBinError(18,0.840497);
   hext_stack_2->SetBinError(19,1.759382);
   hext_stack_2->SetBinError(20,0.9206235);
   hext_stack_2->SetBinError(21,0.8755137);
   hext_stack_2->SetBinError(22,0.4065989);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.7189592);
   hext_stack_2->SetBinError(25,1.040301);
   hext_stack_2->SetEntries(1136);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
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

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
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

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
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

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,1.116504);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,7.420104);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,28.89123);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,84.26247);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,160.483);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,172.3192);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,171.631);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,150.9337);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,139.4584);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,115.5661);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,91.48959);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,75.75128);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,66.50468);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,57.2067);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,38.96283);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,34.51977);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,29.7925);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,20.55608);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,20.67897);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,15.60281);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,11.3801);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,9.395691);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,7.234589);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,8.089048);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,37.47913);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,0.3597403);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,0.9011969);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,1.760592);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.952651);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.209337);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,4.2699);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,4.253308);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.886663);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,3.890634);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.51269);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.054142);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,2.804298);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,2.651025);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,2.494967);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,2.009431);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,1.979018);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,1.768587);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,1.489771);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,1.532695);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,1.291473);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.133571);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,0.9876055);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,0.7990626);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,0.9944138);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,1.932985);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_7->SetBinContent(1,0.5352025);
   hCCpi0inFV_stack_7->SetBinContent(2,2.925981);
   hCCpi0inFV_stack_7->SetBinContent(3,7.092269);
   hCCpi0inFV_stack_7->SetBinContent(4,30.10314);
   hCCpi0inFV_stack_7->SetBinContent(5,38.81153);
   hCCpi0inFV_stack_7->SetBinContent(6,47.63334);
   hCCpi0inFV_stack_7->SetBinContent(7,60.24095);
   hCCpi0inFV_stack_7->SetBinContent(8,59.70622);
   hCCpi0inFV_stack_7->SetBinContent(9,47.96153);
   hCCpi0inFV_stack_7->SetBinContent(10,53.82661);
   hCCpi0inFV_stack_7->SetBinContent(11,46.18594);
   hCCpi0inFV_stack_7->SetBinContent(12,34.44048);
   hCCpi0inFV_stack_7->SetBinContent(13,34.15273);
   hCCpi0inFV_stack_7->SetBinContent(14,25.67779);
   hCCpi0inFV_stack_7->SetBinContent(15,24.78171);
   hCCpi0inFV_stack_7->SetBinContent(16,18.04376);
   hCCpi0inFV_stack_7->SetBinContent(17,12.62035);
   hCCpi0inFV_stack_7->SetBinContent(18,12.40456);
   hCCpi0inFV_stack_7->SetBinContent(19,9.424723);
   hCCpi0inFV_stack_7->SetBinContent(20,9.615224);
   hCCpi0inFV_stack_7->SetBinContent(21,7.225589);
   hCCpi0inFV_stack_7->SetBinContent(22,5.521927);
   hCCpi0inFV_stack_7->SetBinContent(23,4.744601);
   hCCpi0inFV_stack_7->SetBinContent(24,3.181021);
   hCCpi0inFV_stack_7->SetBinContent(25,30.13989);
   hCCpi0inFV_stack_7->SetBinError(1,0.3921167);
   hCCpi0inFV_stack_7->SetBinError(2,0.8770106);
   hCCpi0inFV_stack_7->SetBinError(3,1.317118);
   hCCpi0inFV_stack_7->SetBinError(4,2.742405);
   hCCpi0inFV_stack_7->SetBinError(5,3.107504);
   hCCpi0inFV_stack_7->SetBinError(6,3.463046);
   hCCpi0inFV_stack_7->SetBinError(7,3.92148);
   hCCpi0inFV_stack_7->SetBinError(8,3.88734);
   hCCpi0inFV_stack_7->SetBinError(9,3.43189);
   hCCpi0inFV_stack_7->SetBinError(10,3.737121);
   hCCpi0inFV_stack_7->SetBinError(11,3.371313);
   hCCpi0inFV_stack_7->SetBinError(12,2.934117);
   hCCpi0inFV_stack_7->SetBinError(13,2.961451);
   hCCpi0inFV_stack_7->SetBinError(14,2.534826);
   hCCpi0inFV_stack_7->SetBinError(15,2.506716);
   hCCpi0inFV_stack_7->SetBinError(16,2.081859);
   hCCpi0inFV_stack_7->SetBinError(17,1.722024);
   hCCpi0inFV_stack_7->SetBinError(18,1.820983);
   hCCpi0inFV_stack_7->SetBinError(19,1.54484);
   hCCpi0inFV_stack_7->SetBinError(20,1.532147);
   hCCpi0inFV_stack_7->SetBinError(21,1.344563);
   hCCpi0inFV_stack_7->SetBinError(22,1.194382);
   hCCpi0inFV_stack_7->SetBinError(23,1.037837);
   hCCpi0inFV_stack_7->SetBinError(24,0.8783531);
   hCCpi0inFV_stack_7->SetBinError(25,2.761377);
   hCCpi0inFV_stack_7->SetEntries(2680);

   ci = 1440;
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
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_8->SetBinContent(1,0.1950248);
   hNCinFV_stack_8->SetBinContent(2,1.320373);
   hNCinFV_stack_8->SetBinContent(3,2.587494);
   hNCinFV_stack_8->SetBinContent(4,10.4083);
   hNCinFV_stack_8->SetBinContent(5,14.56336);
   hNCinFV_stack_8->SetBinContent(6,13.87456);
   hNCinFV_stack_8->SetBinContent(7,16.21039);
   hNCinFV_stack_8->SetBinContent(8,14.35325);
   hNCinFV_stack_8->SetBinContent(9,11.43728);
   hNCinFV_stack_8->SetBinContent(10,10.69861);
   hNCinFV_stack_8->SetBinContent(11,8.488245);
   hNCinFV_stack_8->SetBinContent(12,5.431718);
   hNCinFV_stack_8->SetBinContent(13,4.685194);
   hNCinFV_stack_8->SetBinContent(14,3.711152);
   hNCinFV_stack_8->SetBinContent(15,4.499704);
   hNCinFV_stack_8->SetBinContent(16,3.909558);
   hNCinFV_stack_8->SetBinContent(17,4.248045);
   hNCinFV_stack_8->SetBinContent(18,2.730956);
   hNCinFV_stack_8->SetBinContent(19,2.250697);
   hNCinFV_stack_8->SetBinContent(20,1.52047);
   hNCinFV_stack_8->SetBinContent(21,0.9801958);
   hNCinFV_stack_8->SetBinContent(22,1.125349);
   hNCinFV_stack_8->SetBinContent(23,1.072095);
   hNCinFV_stack_8->SetBinContent(24,0.536893);
   hNCinFV_stack_8->SetBinContent(25,4.297917);
   hNCinFV_stack_8->SetBinError(1,0.1950249);
   hNCinFV_stack_8->SetBinError(2,0.5548703);
   hNCinFV_stack_8->SetBinError(3,0.8087577);
   hNCinFV_stack_8->SetBinError(4,1.606243);
   hNCinFV_stack_8->SetBinError(5,1.93382);
   hNCinFV_stack_8->SetBinError(6,1.872139);
   hNCinFV_stack_8->SetBinError(7,2.039108);
   hNCinFV_stack_8->SetBinError(8,1.886219);
   hNCinFV_stack_8->SetBinError(9,1.711867);
   hNCinFV_stack_8->SetBinError(10,1.653901);
   hNCinFV_stack_8->SetBinError(11,1.533198);
   hNCinFV_stack_8->SetBinError(12,1.145075);
   hNCinFV_stack_8->SetBinError(13,1.145169);
   hNCinFV_stack_8->SetBinError(14,0.960871);
   hNCinFV_stack_8->SetBinError(15,1.038616);
   hNCinFV_stack_8->SetBinError(16,0.9811382);
   hNCinFV_stack_8->SetBinError(17,1.038119);
   hNCinFV_stack_8->SetBinError(18,0.8550514);
   hNCinFV_stack_8->SetBinError(19,0.7346377);
   hNCinFV_stack_8->SetBinError(20,0.5898325);
   hNCinFV_stack_8->SetBinError(21,0.4383608);
   hNCinFV_stack_8->SetBinError(22,0.5194673);
   hNCinFV_stack_8->SetBinError(23,0.5551335);
   hNCinFV_stack_8->SetBinError(24,0.3929602);
   hNCinFV_stack_8->SetBinError(25,1.018842);
   hNCinFV_stack_8->SetEntries(615);

   ci = 1441;
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
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_9->SetBinContent(1,0.2394598);
   hnumuCCinFV_stack_9->SetBinContent(2,2.147347);
   hnumuCCinFV_stack_9->SetBinContent(3,6.53973);
   hnumuCCinFV_stack_9->SetBinContent(4,10.47139);
   hnumuCCinFV_stack_9->SetBinContent(5,22.42391);
   hnumuCCinFV_stack_9->SetBinContent(6,26.25898);
   hnumuCCinFV_stack_9->SetBinContent(7,27.96001);
   hnumuCCinFV_stack_9->SetBinContent(8,23.05265);
   hnumuCCinFV_stack_9->SetBinContent(9,17.82829);
   hnumuCCinFV_stack_9->SetBinContent(10,13.39438);
   hnumuCCinFV_stack_9->SetBinContent(11,11.14465);
   hnumuCCinFV_stack_9->SetBinContent(12,10.50778);
   hnumuCCinFV_stack_9->SetBinContent(13,7.511005);
   hnumuCCinFV_stack_9->SetBinContent(14,6.804272);
   hnumuCCinFV_stack_9->SetBinContent(15,6.223209);
   hnumuCCinFV_stack_9->SetBinContent(16,4.412394);
   hnumuCCinFV_stack_9->SetBinContent(17,4.871156);
   hnumuCCinFV_stack_9->SetBinContent(18,2.877799);
   hnumuCCinFV_stack_9->SetBinContent(19,2.31732);
   hnumuCCinFV_stack_9->SetBinContent(20,1.722826);
   hnumuCCinFV_stack_9->SetBinContent(21,0.7868615);
   hnumuCCinFV_stack_9->SetBinContent(22,1.323754);
   hnumuCCinFV_stack_9->SetBinContent(23,1.268811);
   hnumuCCinFV_stack_9->SetBinContent(24,0.9269427);
   hnumuCCinFV_stack_9->SetBinContent(25,6.168846);
   hnumuCCinFV_stack_9->SetBinError(1,0.2394598);
   hnumuCCinFV_stack_9->SetBinError(2,0.7799832);
   hnumuCCinFV_stack_9->SetBinError(3,2.027162);
   hnumuCCinFV_stack_9->SetBinError(4,1.799124);
   hnumuCCinFV_stack_9->SetBinError(5,3.033442);
   hnumuCCinFV_stack_9->SetBinError(6,3.398999);
   hnumuCCinFV_stack_9->SetBinError(7,3.526996);
   hnumuCCinFV_stack_9->SetBinError(8,3.067001);
   hnumuCCinFV_stack_9->SetBinError(9,2.323504);
   hnumuCCinFV_stack_9->SetBinError(10,1.946411);
   hnumuCCinFV_stack_9->SetBinError(11,1.77324);
   hnumuCCinFV_stack_9->SetBinError(12,1.831864);
   hnumuCCinFV_stack_9->SetBinError(13,1.403129);
   hnumuCCinFV_stack_9->SetBinError(14,1.48058);
   hnumuCCinFV_stack_9->SetBinError(15,1.24594);
   hnumuCCinFV_stack_9->SetBinError(16,1.055132);
   hnumuCCinFV_stack_9->SetBinError(17,1.064114);
   hnumuCCinFV_stack_9->SetBinError(18,0.8997006);
   hnumuCCinFV_stack_9->SetBinError(19,0.7536711);
   hnumuCCinFV_stack_9->SetBinError(20,0.6859666);
   hnumuCCinFV_stack_9->SetBinError(21,0.3934307);
   hnumuCCinFV_stack_9->SetBinError(22,0.5560625);
   hnumuCCinFV_stack_9->SetBinError(23,0.5889569);
   hnumuCCinFV_stack_9->SetBinError(24,0.4800908);
   hnumuCCinFV_stack_9->SetBinError(25,1.353127);
   hnumuCCinFV_stack_9->SetEntries(846);

   ci = 1442;
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
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_10->SetBinContent(2,0.1950248);
   hnueCCinFV_stack_10->SetBinContent(3,0.4753021);
   hnueCCinFV_stack_10->SetBinContent(4,2.398423);
   hnueCCinFV_stack_10->SetBinContent(5,0.785171);
   hnueCCinFV_stack_10->SetBinContent(6,1.905048);
   hnueCCinFV_stack_10->SetBinContent(7,2.316936);
   hnueCCinFV_stack_10->SetBinContent(8,2.650149);
   hnueCCinFV_stack_10->SetBinContent(9,1.147898);
   hnueCCinFV_stack_10->SetBinContent(10,0.8737744);
   hnueCCinFV_stack_10->SetBinContent(11,0.4748818);
   hnueCCinFV_stack_10->SetBinContent(12,1.801617);
   hnueCCinFV_stack_10->SetBinContent(13,0.8013275);
   hnueCCinFV_stack_10->SetBinContent(15,0.5901461);
   hnueCCinFV_stack_10->SetBinContent(16,0.2007115);
   hnueCCinFV_stack_10->SetBinContent(17,0.7336411);
   hnueCCinFV_stack_10->SetBinContent(18,0.3917402);
   hnueCCinFV_stack_10->SetBinContent(19,0.6194557);
   hnueCCinFV_stack_10->SetBinContent(20,0.5867651);
   hnueCCinFV_stack_10->SetBinContent(21,0.3917402);
   hnueCCinFV_stack_10->SetBinContent(22,0.00488893);
   hnueCCinFV_stack_10->SetBinContent(23,0.3963213);
   hnueCCinFV_stack_10->SetBinContent(25,13.08889);
   hnueCCinFV_stack_10->SetBinError(2,0.1950249);
   hnueCCinFV_stack_10->SetBinError(3,0.3414528);
   hnueCCinFV_stack_10->SetBinError(4,1.448642);
   hnueCCinFV_stack_10->SetBinError(5,0.3925882);
   hnueCCinFV_stack_10->SetBinError(6,0.8945168);
   hnueCCinFV_stack_10->SetBinError(7,0.8089282);
   hnueCCinFV_stack_10->SetBinError(8,0.9034206);
   hnueCCinFV_stack_10->SetBinError(9,0.6270275);
   hnueCCinFV_stack_10->SetBinError(10,0.5175972);
   hnueCCinFV_stack_10->SetBinError(11,0.3406916);
   hnueCCinFV_stack_10->SetBinError(12,1.203825);
   hnueCCinFV_stack_10->SetBinError(13,0.4937343);
   hnueCCinFV_stack_10->SetBinError(15,0.340721);
   hnueCCinFV_stack_10->SetBinError(16,0.196756);
   hnueCCinFV_stack_10->SetBinError(17,0.4394482);
   hnueCCinFV_stack_10->SetBinError(18,0.2770047);
   hnueCCinFV_stack_10->SetBinError(19,0.4670934);
   hnueCCinFV_stack_10->SetBinError(20,0.3387718);
   hnueCCinFV_stack_10->SetBinError(21,0.2770047);
   hnueCCinFV_stack_10->SetBinError(22,0.00488893);
   hnueCCinFV_stack_10->SetBinError(23,0.3963213);
   hnueCCinFV_stack_10->SetBinError(25,2.56528);
   hnueCCinFV_stack_10->SetEntries(115);

   ci = 1443;
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
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__2->SetBinContent(1,8.152354);
   hmcerror__2->SetBinContent(2,36.8968);
   hmcerror__2->SetBinContent(3,107.3332);
   hmcerror__2->SetBinContent(4,248.3717);
   hmcerror__2->SetBinContent(5,390.7923);
   hmcerror__2->SetBinContent(6,425.3566);
   hmcerror__2->SetBinContent(7,426.3248);
   hmcerror__2->SetBinContent(8,373.9564);
   hmcerror__2->SetBinContent(9,314.494);
   hmcerror__2->SetBinContent(10,259.1337);
   hmcerror__2->SetBinContent(11,215.4816);
   hmcerror__2->SetBinContent(12,175.1339);
   hmcerror__2->SetBinContent(13,154.6095);
   hmcerror__2->SetBinContent(14,119.1741);
   hmcerror__2->SetBinContent(15,97.00862);
   hmcerror__2->SetBinContent(16,76.64879);
   hmcerror__2->SetBinContent(17,64.86088);
   hmcerror__2->SetBinContent(18,48.8473);
   hmcerror__2->SetBinContent(19,51.07649);
   hmcerror__2->SetBinContent(20,36.35119);
   hmcerror__2->SetBinContent(21,26.13848);
   hmcerror__2->SetBinContent(22,20.84905);
   hmcerror__2->SetBinContent(23,19.01814);
   hmcerror__2->SetBinContent(24,16.27812);
   hmcerror__2->SetBinContent(25,108.713);
   hmcerror__2->SetBinError(1,5.141043);
   hmcerror__2->SetBinError(2,10.03691);
   hmcerror__2->SetBinError(3,23.18597);
   hmcerror__2->SetBinError(4,57.56497);
   hmcerror__2->SetBinError(5,82.64039);
   hmcerror__2->SetBinError(6,87.24835);
   hmcerror__2->SetBinError(7,87.09972);
   hmcerror__2->SetBinError(8,80.37759);
   hmcerror__2->SetBinError(9,64.29608);
   hmcerror__2->SetBinError(10,56.20959);
   hmcerror__2->SetBinError(11,45.18298);
   hmcerror__2->SetBinError(12,35.54322);
   hmcerror__2->SetBinError(13,33.81495);
   hmcerror__2->SetBinError(14,24.61025);
   hmcerror__2->SetBinError(15,20.59372);
   hmcerror__2->SetBinError(16,17.73678);
   hmcerror__2->SetBinError(17,14.58095);
   hmcerror__2->SetBinError(18,12.22485);
   hmcerror__2->SetBinError(19,11.81854);
   hmcerror__2->SetBinError(20,9.932884);
   hmcerror__2->SetBinError(21,7.01933);
   hmcerror__2->SetBinError(22,6.74597);
   hmcerror__2->SetBinError(23,5.918567);
   hmcerror__2->SetBinError(24,5.833464);
   hmcerror__2->SetBinError(25,25.36949);
   hmcerror__2->SetEntries(3775.136);

   ci = TColor::GetColor("#999999");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetTitleOffset(1);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetTitleOffset(1);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[24] = {
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
   Double_t _fy3001[24] = {
   2,
   32,
   93,
   264,
   380,
   461,
   432,
   400,
   305,
   273,
   217,
   173,
   142,
   111,
   65,
   71,
   71,
   57,
   52,
   34,
   23,
   22,
   11,
   13};
   Double_t _felx3001[24] = {
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
   Double_t _fely3001[24] = {
   2,
   5.7977,
   9.7658,
   16.24808,
   19.49359,
   21.47091,
   20.78461,
   20,
   17.46425,
   16.52271,
   14.73092,
   13.15295,
   11.91638,
   10.53565,
   8.1893,
   8.5518,
   8.5518,
   7.679,
   7.3419,
   5.9703,
   4.9457,
   4.8417,
   3.4975,
   3.77763};
   Double_t _fehx3001[24] = {
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
   Double_t _fehy3001[24] = {
   1.51917,
   5.5904,
   9.564,
   16.24808,
   19.49359,
   21.47091,
   20.78461,
   20,
   17.46425,
   16.52271,
   14.73092,
   13.15295,
   11.91638,
   10.53565,
   7.9866,
   8.3496,
   8.3496,
   7.4757,
   7.1381,
   5.7635,
   4.7346,
   4.6299,
   3.27,
   3.5552};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,660);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(530.718);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(509);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetNdivisions(509);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.9/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3704.0","lp");
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

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 474.5","F");

   ci = 1435;
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

   ci = 1436;
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

   ci = 1437;
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

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1519.2","F");

   ci = 1439;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 596.9","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 140.8","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 213.0","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 19.7","F");

   ci = 1443;
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
   canvas1->cd();
  
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
   
   Double_t _fx3002[24] = {
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
   Double_t _fy3002[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[24] = {
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
   Double_t _fely3002[24] = {
   0.6306207,
   0.2720266,
   0.2160186,
   0.2317694,
   0.2114689,
   0.2051181,
   0.2043037,
   0.2149384,
   0.204443,
   0.2169135,
   0.2096838,
   0.2029488,
   0.218712,
   0.2065066,
   0.2122875,
   0.2314033,
   0.2248034,
   0.2502668,
   0.2313891,
   0.2732478,
   0.2685439,
   0.3235624,
   0.3112064,
   0.3583622};
   Double_t _fehx3002[24] = {
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
   Double_t _fehy3002[24] = {
   0.6306207,
   0.2720266,
   0.2160186,
   0.2317694,
   0.2114689,
   0.2051181,
   0.2043037,
   0.2149384,
   0.204443,
   0.2169135,
   0.2096838,
   0.2029488,
   0.218712,
   0.2065066,
   0.2122875,
   0.2314033,
   0.2248034,
   0.2502668,
   0.2313891,
   0.2732478,
   0.2685439,
   0.3235624,
   0.3112064,
   0.3583622};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,660);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3002->GetYaxis()->SetNdivisions(210);
   Graph_Graph3002->GetYaxis()->SetLabelFont(132);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3002->GetYaxis()->SetTitleFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelFont(132);
   Graph_Graph3002->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3002->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3002);
   
   grae->Draw("a2");
   
   Double_t _fx3003[24] = {
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
   Double_t _fy3003[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[24] = {
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
   Double_t _fely3003[24] = {
   0.3811622,
   0.1776496,
   0.1612236,
   0.1690172,
   0.1771091,
   0.183374,
   0.1885702,
   0.1961509,
   0.1927835,
   0.2034582,
   0.194507,
   0.1964821,
   0.1970927,
   0.1978582,
   0.1968414,
   0.2154138,
   0.2073355,
   0.2303865,
   0.1995362,
   0.2351198,
   0.240693,
   0.2552403,
   0.2370123,
   0.2593875};
   Double_t _fehx3003[24] = {
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
   Double_t _fehy3003[24] = {
   0.3811622,
   0.1776496,
   0.1612236,
   0.1690172,
   0.1771091,
   0.183374,
   0.1885702,
   0.1961509,
   0.1927835,
   0.2034582,
   0.194507,
   0.1964821,
   0.1970927,
   0.1978582,
   0.1968414,
   0.2154138,
   0.2073355,
   0.2303865,
   0.1995362,
   0.2351198,
   0.240693,
   0.2552403,
   0.2370123,
   0.2593875};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,660);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(1,91);
   Graph_Graph3003->GetXaxis()->SetNdivisions(509);
   Graph_Graph3003->GetXaxis()->SetLabelFont(132);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetXaxis()->SetTitleFont(132);
   Graph_Graph3003->GetYaxis()->SetNdivisions(509);
   Graph_Graph3003->GetYaxis()->SetLabelFont(132);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3003->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3003->GetYaxis()->SetTitleFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelFont(132);
   Graph_Graph3003->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3003->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("2 ");
   
   Double_t _fx3004[24] = {
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
   Double_t _fy3004[24] = {
   0.2453279,
   0.8672839,
   0.8664605,
   1.062923,
   0.9723836,
   1.083797,
   1.013312,
   1.069643,
   0.9698119,
   1.05351,
   1.007047,
   0.9878155,
   0.9184428,
   0.9314101,
   0.6700435,
   0.926303,
   1.094651,
   1.166902,
   1.018081,
   0.9353202,
   0.8799286,
   1.055204,
   0.5783952,
   0.7986179};
   Double_t _felx3004[24] = {
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
   Double_t _fely3004[24] = {
   0.2453279,
   0.1571329,
   0.09098581,
   0.06541839,
   0.04988223,
   0.05047744,
   0.04875299,
   0.05348217,
   0.05553127,
   0.06376134,
   0.06836278,
   0.07510222,
   0.07707401,
   0.08840554,
   0.08441827,
   0.1115712,
   0.1318484,
   0.1572042,
   0.1437432,
   0.1642395,
   0.1892114,
   0.2322264,
   0.1839034,
   0.2320679};
   Double_t _fehx3004[24] = {
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
   Double_t _fehy3004[24] = {
   0.1863474,
   0.1515145,
   0.08910568,
   0.06541839,
   0.04988223,
   0.05047744,
   0.04875299,
   0.05348217,
   0.05553127,
   0.06376134,
   0.06836278,
   0.07510222,
   0.07707401,
   0.08840554,
   0.08232877,
   0.1089332,
   0.1287309,
   0.1530422,
   0.1397531,
   0.1585505,
   0.1811352,
   0.2220676,
   0.1719411,
   0.2184036};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,660);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(1.451938);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineWidth(2);
   Graph_Graph3004->SetMarkerStyle(20);
   Graph_Graph3004->GetXaxis()->SetNdivisions(509);
   Graph_Graph3004->GetXaxis()->SetLabelFont(132);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetXaxis()->SetTitleFont(132);
   Graph_Graph3004->GetYaxis()->SetNdivisions(509);
   Graph_Graph3004->GetYaxis()->SetLabelFont(132);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3004->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3004->GetYaxis()->SetTitleFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelFont(132);
   Graph_Graph3004->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3004->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("p ");
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_kine_pio_energy_high_all",24,0,600);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetTitleOffset(1);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetTitleOffset(1);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
