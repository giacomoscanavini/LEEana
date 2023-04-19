#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 13:51:03 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",242,172,1200,900);
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
   pad1->Range(-4.119231,-3.8,3.957692,420.2);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmc__10->SetBinContent(1,155.9804);
   hmc__10->SetBinContent(2,159.094);
   hmc__10->SetBinContent(3,166.605);
   hmc__10->SetBinContent(4,160.1272);
   hmc__10->SetBinContent(5,141.7521);
   hmc__10->SetBinContent(6,161.6343);
   hmc__10->SetBinContent(7,169.6889);
   hmc__10->SetBinContent(8,155.7316);
   hmc__10->SetBinContent(9,156.7375);
   hmc__10->SetBinContent(10,150.6185);
   hmc__10->SetBinContent(11,168.3701);
   hmc__10->SetBinContent(12,159.3634);
   hmc__10->SetBinContent(13,167.4442);
   hmc__10->SetBinContent(14,165.2698);
   hmc__10->SetBinContent(15,167.2361);
   hmc__10->SetBinContent(16,160.3572);
   hmc__10->SetBinContent(17,178.4183);
   hmc__10->SetBinContent(18,166.0432);
   hmc__10->SetBinContent(19,149.3757);
   hmc__10->SetBinContent(20,166.97);
   hmc__10->SetBinContent(21,167.2644);
   hmc__10->SetBinContent(22,165.5206);
   hmc__10->SetBinContent(23,178.2577);
   hmc__10->SetBinContent(24,172.2448);
   hmc__10->SetBinError(1,39.81154);
   hmc__10->SetBinError(2,42.2191);
   hmc__10->SetBinError(3,42.5465);
   hmc__10->SetBinError(4,44.7309);
   hmc__10->SetBinError(5,34.94521);
   hmc__10->SetBinError(6,37.93195);
   hmc__10->SetBinError(7,38.99356);
   hmc__10->SetBinError(8,43.75466);
   hmc__10->SetBinError(9,39.75369);
   hmc__10->SetBinError(10,39.36929);
   hmc__10->SetBinError(11,53.3205);
   hmc__10->SetBinError(12,39.78676);
   hmc__10->SetBinError(13,44.36731);
   hmc__10->SetBinError(14,41.46885);
   hmc__10->SetBinError(15,49.03325);
   hmc__10->SetBinError(16,39.30092);
   hmc__10->SetBinError(17,47.51426);
   hmc__10->SetBinError(18,37.5101);
   hmc__10->SetBinError(19,38.79997);
   hmc__10->SetBinError(20,38.69806);
   hmc__10->SetBinError(21,43.35027);
   hmc__10->SetBinError(22,48.31453);
   hmc__10->SetBinError(23,48.46015);
   hmc__10->SetBinError(24,50.60505);
   hmc__10->SetBinError(25,0.3895343);
   hmc__10->SetMinimum(-3.8);
   hmc__10->SetMaximum(399);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,-3.15,3.15);
   hs4_stack_4->SetMinimum(-5.219833e-10);
   hs4_stack_4->SetMaximum(187.3392);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.834061);
   hbadmatch_stack_1->SetBinContent(2,4.790404);
   hbadmatch_stack_1->SetBinContent(3,5.202322);
   hbadmatch_stack_1->SetBinContent(4,5.451106);
   hbadmatch_stack_1->SetBinContent(5,2.50184);
   hbadmatch_stack_1->SetBinContent(6,5.917688);
   hbadmatch_stack_1->SetBinContent(7,5.647208);
   hbadmatch_stack_1->SetBinContent(8,3.849086);
   hbadmatch_stack_1->SetBinContent(9,4.132573);
   hbadmatch_stack_1->SetBinContent(10,2.683902);
   hbadmatch_stack_1->SetBinContent(11,2.444031);
   hbadmatch_stack_1->SetBinContent(12,1.446131);
   hbadmatch_stack_1->SetBinContent(13,2.615484);
   hbadmatch_stack_1->SetBinContent(14,6.042536);
   hbadmatch_stack_1->SetBinContent(15,4.389359);
   hbadmatch_stack_1->SetBinContent(16,4.220803);
   hbadmatch_stack_1->SetBinContent(17,3.497009);
   hbadmatch_stack_1->SetBinContent(18,3.790231);
   hbadmatch_stack_1->SetBinContent(19,3.566673);
   hbadmatch_stack_1->SetBinContent(20,5.187275);
   hbadmatch_stack_1->SetBinContent(21,5.14601);
   hbadmatch_stack_1->SetBinContent(22,4.390615);
   hbadmatch_stack_1->SetBinContent(23,3.840859);
   hbadmatch_stack_1->SetBinContent(24,4.366155);
   hbadmatch_stack_1->SetBinError(1,1.028097);
   hbadmatch_stack_1->SetBinError(2,1.143145);
   hbadmatch_stack_1->SetBinError(3,1.176617);
   hbadmatch_stack_1->SetBinError(4,1.227532);
   hbadmatch_stack_1->SetBinError(5,0.7754384);
   hbadmatch_stack_1->SetBinError(6,1.273509);
   hbadmatch_stack_1->SetBinError(7,1.262601);
   hbadmatch_stack_1->SetBinError(8,1.103993);
   hbadmatch_stack_1->SetBinError(9,1.137817);
   hbadmatch_stack_1->SetBinError(10,1.214252);
   hbadmatch_stack_1->SetBinError(11,0.759648);
   hbadmatch_stack_1->SetBinError(12,0.5486399);
   hbadmatch_stack_1->SetBinError(13,0.8130536);
   hbadmatch_stack_1->SetBinError(14,1.997005);
   hbadmatch_stack_1->SetBinError(15,1.129631);
   hbadmatch_stack_1->SetBinError(16,1.164147);
   hbadmatch_stack_1->SetBinError(17,0.9684169);
   hbadmatch_stack_1->SetBinError(18,1.124792);
   hbadmatch_stack_1->SetBinError(19,0.9588925);
   hbadmatch_stack_1->SetBinError(20,1.431365);
   hbadmatch_stack_1->SetBinError(21,1.225378);
   hbadmatch_stack_1->SetBinError(22,1.109389);
   hbadmatch_stack_1->SetBinError(23,1.784759);
   hbadmatch_stack_1->SetBinError(24,1.029484);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,12.99076);
   hext_stack_2->SetBinContent(2,14.25081);
   hext_stack_2->SetBinContent(3,17.24981);
   hext_stack_2->SetBinContent(4,23.00399);
   hext_stack_2->SetBinContent(5,22.56149);
   hext_stack_2->SetBinContent(6,29.71146);
   hext_stack_2->SetBinContent(7,37.41366);
   hext_stack_2->SetBinContent(8,26.53646);
   hext_stack_2->SetBinContent(9,21.93865);
   hext_stack_2->SetBinContent(10,11.51718);
   hext_stack_2->SetBinContent(11,22.11899);
   hext_stack_2->SetBinContent(12,13.81108);
   hext_stack_2->SetBinContent(13,15.64377);
   hext_stack_2->SetBinContent(14,13.97548);
   hext_stack_2->SetBinContent(15,13.51263);
   hext_stack_2->SetBinContent(16,18.00393);
   hext_stack_2->SetBinContent(17,27.65969);
   hext_stack_2->SetBinContent(18,26.92593);
   hext_stack_2->SetBinContent(19,18.29084);
   hext_stack_2->SetBinContent(20,25.93396);
   hext_stack_2->SetBinContent(21,14.56525);
   hext_stack_2->SetBinContent(22,16.54912);
   hext_stack_2->SetBinContent(23,18.70022);
   hext_stack_2->SetBinContent(24,14.57961);
   hext_stack_2->SetBinError(1,2.255251);
   hext_stack_2->SetBinError(2,2.457978);
   hext_stack_2->SetBinError(3,2.717567);
   hext_stack_2->SetBinError(4,3.091215);
   hext_stack_2->SetBinError(5,3.224329);
   hext_stack_2->SetBinError(6,3.621713);
   hext_stack_2->SetBinError(7,4.048468);
   hext_stack_2->SetBinError(8,3.42333);
   hext_stack_2->SetBinError(9,3.117266);
   hext_stack_2->SetBinError(10,2.147353);
   hext_stack_2->SetBinError(11,3.35216);
   hext_stack_2->SetBinError(12,2.558518);
   hext_stack_2->SetBinError(13,2.873753);
   hext_stack_2->SetBinError(14,2.581897);
   hext_stack_2->SetBinError(15,2.443829);
   hext_stack_2->SetBinError(16,2.975564);
   hext_stack_2->SetBinError(17,3.543652);
   hext_stack_2->SetBinError(18,3.55292);
   hext_stack_2->SetBinError(19,2.85716);
   hext_stack_2->SetBinError(20,3.546099);
   hext_stack_2->SetBinError(21,2.585423);
   hext_stack_2->SetBinError(22,2.848099);
   hext_stack_2->SetBinError(23,2.827077);
   hext_stack_2->SetBinError(24,2.506394);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.4356634);
   hdirt_stack_3->SetBinContent(2,1.730586);
   hdirt_stack_3->SetBinContent(3,2.400884);
   hdirt_stack_3->SetBinContent(4,3.685944);
   hdirt_stack_3->SetBinContent(5,1.39473);
   hdirt_stack_3->SetBinContent(6,3.177854);
   hdirt_stack_3->SetBinContent(7,2.047518);
   hdirt_stack_3->SetBinContent(8,2.864416);
   hdirt_stack_3->SetBinContent(9,2.501433);
   hdirt_stack_3->SetBinContent(10,3.232443);
   hdirt_stack_3->SetBinContent(11,2.475102);
   hdirt_stack_3->SetBinContent(12,1.033342);
   hdirt_stack_3->SetBinContent(13,2.432202);
   hdirt_stack_3->SetBinContent(14,2.56565);
   hdirt_stack_3->SetBinContent(15,1.752422);
   hdirt_stack_3->SetBinContent(16,2.238808);
   hdirt_stack_3->SetBinContent(17,2.675294);
   hdirt_stack_3->SetBinContent(18,2.38011);
   hdirt_stack_3->SetBinContent(19,2.870907);
   hdirt_stack_3->SetBinContent(20,3.906714);
   hdirt_stack_3->SetBinContent(21,3.389202);
   hdirt_stack_3->SetBinContent(22,1.714493);
   hdirt_stack_3->SetBinContent(23,2.123931);
   hdirt_stack_3->SetBinContent(24,2.023418);
   hdirt_stack_3->SetBinError(1,0.2521393);
   hdirt_stack_3->SetBinError(2,0.6970017);
   hdirt_stack_3->SetBinError(3,0.8265113);
   hdirt_stack_3->SetBinError(4,1.097235);
   hdirt_stack_3->SetBinError(5,0.5346675);
   hdirt_stack_3->SetBinError(6,0.9726444);
   hdirt_stack_3->SetBinError(7,0.6892039);
   hdirt_stack_3->SetBinError(8,0.8319813);
   hdirt_stack_3->SetBinError(9,0.8999524);
   hdirt_stack_3->SetBinError(10,1.28501);
   hdirt_stack_3->SetBinError(11,0.836509);
   hdirt_stack_3->SetBinError(12,0.5438016);
   hdirt_stack_3->SetBinError(13,0.8934416);
   hdirt_stack_3->SetBinError(14,0.823103);
   hdirt_stack_3->SetBinError(15,0.6508923);
   hdirt_stack_3->SetBinError(16,0.7033103);
   hdirt_stack_3->SetBinError(17,0.9099658);
   hdirt_stack_3->SetBinError(18,0.7619908);
   hdirt_stack_3->SetBinError(19,0.9047919);
   hdirt_stack_3->SetBinError(20,1.349791);
   hdirt_stack_3->SetBinError(21,0.9152322);
   hdirt_stack_3->SetBinError(22,0.6939301);
   hdirt_stack_3->SetBinError(23,0.7765693);
   hdirt_stack_3->SetBinError(24,0.6839632);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,21.72586);
   houtFV_stack_4->SetBinContent(2,20.62842);
   houtFV_stack_4->SetBinContent(3,21.66585);
   houtFV_stack_4->SetBinContent(4,19.5938);
   houtFV_stack_4->SetBinContent(5,18.68806);
   houtFV_stack_4->SetBinContent(6,17.46044);
   houtFV_stack_4->SetBinContent(7,15.97005);
   houtFV_stack_4->SetBinContent(8,16.90842);
   houtFV_stack_4->SetBinContent(9,19.44188);
   houtFV_stack_4->SetBinContent(10,22.72902);
   houtFV_stack_4->SetBinContent(11,23.61541);
   houtFV_stack_4->SetBinContent(12,21.34529);
   houtFV_stack_4->SetBinContent(13,19.83213);
   houtFV_stack_4->SetBinContent(14,20.29553);
   houtFV_stack_4->SetBinContent(15,23.58887);
   houtFV_stack_4->SetBinContent(16,24.62808);
   houtFV_stack_4->SetBinContent(17,20.60612);
   houtFV_stack_4->SetBinContent(18,21.41413);
   houtFV_stack_4->SetBinContent(19,18.01366);
   houtFV_stack_4->SetBinContent(20,21.69532);
   houtFV_stack_4->SetBinContent(21,23.00933);
   houtFV_stack_4->SetBinContent(22,23.40893);
   houtFV_stack_4->SetBinContent(23,22.08209);
   houtFV_stack_4->SetBinContent(24,27.51719);
   houtFV_stack_4->SetBinError(1,2.406224);
   houtFV_stack_4->SetBinError(2,2.199079);
   houtFV_stack_4->SetBinError(3,2.380749);
   houtFV_stack_4->SetBinError(4,2.230396);
   houtFV_stack_4->SetBinError(5,2.134389);
   houtFV_stack_4->SetBinError(6,2.075712);
   houtFV_stack_4->SetBinError(7,2.008144);
   houtFV_stack_4->SetBinError(8,2.029646);
   houtFV_stack_4->SetBinError(9,2.207931);
   houtFV_stack_4->SetBinError(10,2.449769);
   houtFV_stack_4->SetBinError(11,2.577948);
   houtFV_stack_4->SetBinError(12,2.349689);
   houtFV_stack_4->SetBinError(13,2.25588);
   houtFV_stack_4->SetBinError(14,2.24858);
   houtFV_stack_4->SetBinError(15,2.485584);
   houtFV_stack_4->SetBinError(16,2.500348);
   houtFV_stack_4->SetBinError(17,2.288642);
   houtFV_stack_4->SetBinError(18,2.376578);
   houtFV_stack_4->SetBinError(19,2.096326);
   houtFV_stack_4->SetBinError(20,2.287708);
   houtFV_stack_4->SetBinError(21,2.375941);
   houtFV_stack_4->SetBinError(22,2.375145);
   houtFV_stack_4->SetBinError(23,2.378865);
   houtFV_stack_4->SetBinError(24,2.859529);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.087033);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.542315);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.156124);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.308242);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.283918);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.707724);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.124816);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.096828);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.97477);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.228118);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.51392);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.417602);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.811114);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.54506);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,2.733375);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.128056);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,4.252442);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.95716);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.046268);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.045684);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.059134);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.810946);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.799904);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.182528);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6401875);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.5795598);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7053673);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6756815);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7804178);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6172829);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6133829);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6214197);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6482431);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7794198);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6175458);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6510892);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.775624);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6854986);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4489391);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6811796);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6745285);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.591195);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7592252);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6593065);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6395793);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7542106);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.8142222);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7018176);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.6682718);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.697004);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.473804);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.4746361);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.501704);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.213699);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2563433);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2438946);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2806257);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2454852);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,54.71295);
   hNCpi0inFVres_stack_7->SetBinContent(2,56.72641);
   hNCpi0inFVres_stack_7->SetBinContent(3,54.56348);
   hNCpi0inFVres_stack_7->SetBinContent(4,51.27177);
   hNCpi0inFVres_stack_7->SetBinContent(5,47.05052);
   hNCpi0inFVres_stack_7->SetBinContent(6,51.50875);
   hNCpi0inFVres_stack_7->SetBinContent(7,53.10583);
   hNCpi0inFVres_stack_7->SetBinContent(8,49.346);
   hNCpi0inFVres_stack_7->SetBinContent(9,53.45678);
   hNCpi0inFVres_stack_7->SetBinContent(10,47.4825);
   hNCpi0inFVres_stack_7->SetBinContent(11,54.89896);
   hNCpi0inFVres_stack_7->SetBinContent(12,53.66635);
   hNCpi0inFVres_stack_7->SetBinContent(13,59.31765);
   hNCpi0inFVres_stack_7->SetBinContent(14,57.36629);
   hNCpi0inFVres_stack_7->SetBinContent(15,55.46691);
   hNCpi0inFVres_stack_7->SetBinContent(16,51.27129);
   hNCpi0inFVres_stack_7->SetBinContent(17,56.56997);
   hNCpi0inFVres_stack_7->SetBinContent(18,51.51746);
   hNCpi0inFVres_stack_7->SetBinContent(19,55.17946);
   hNCpi0inFVres_stack_7->SetBinContent(20,53.43712);
   hNCpi0inFVres_stack_7->SetBinContent(21,51.18009);
   hNCpi0inFVres_stack_7->SetBinContent(22,56.12669);
   hNCpi0inFVres_stack_7->SetBinContent(23,61.74362);
   hNCpi0inFVres_stack_7->SetBinContent(24,54.77687);
   hNCpi0inFVres_stack_7->SetBinError(1,2.423002);
   hNCpi0inFVres_stack_7->SetBinError(2,2.444803);
   hNCpi0inFVres_stack_7->SetBinError(3,2.390279);
   hNCpi0inFVres_stack_7->SetBinError(4,2.330408);
   hNCpi0inFVres_stack_7->SetBinError(5,2.164952);
   hNCpi0inFVres_stack_7->SetBinError(6,2.309198);
   hNCpi0inFVres_stack_7->SetBinError(7,2.412955);
   hNCpi0inFVres_stack_7->SetBinError(8,2.290427);
   hNCpi0inFVres_stack_7->SetBinError(9,2.388488);
   hNCpi0inFVres_stack_7->SetBinError(10,2.212506);
   hNCpi0inFVres_stack_7->SetBinError(11,2.449151);
   hNCpi0inFVres_stack_7->SetBinError(12,2.357846);
   hNCpi0inFVres_stack_7->SetBinError(13,2.552987);
   hNCpi0inFVres_stack_7->SetBinError(14,2.492535);
   hNCpi0inFVres_stack_7->SetBinError(15,2.394563);
   hNCpi0inFVres_stack_7->SetBinError(16,2.387293);
   hNCpi0inFVres_stack_7->SetBinError(17,2.456318);
   hNCpi0inFVres_stack_7->SetBinError(18,2.372376);
   hNCpi0inFVres_stack_7->SetBinError(19,2.451917);
   hNCpi0inFVres_stack_7->SetBinError(20,2.348956);
   hNCpi0inFVres_stack_7->SetBinError(21,2.287877);
   hNCpi0inFVres_stack_7->SetBinError(22,2.387197);
   hNCpi0inFVres_stack_7->SetBinError(23,2.599419);
   hNCpi0inFVres_stack_7->SetBinError(24,2.380285);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.67993);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.94955);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.81238);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.55637);
   hNCpi0inFVdis_stack_8->SetBinContent(5,9.510779);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.058803);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.72535);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.705424);
   hNCpi0inFVdis_stack_8->SetBinContent(9,10.08224);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.009412);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.260511);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.11577);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.23627);
   hNCpi0inFVdis_stack_8->SetBinContent(14,10.9023);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.47733);
   hNCpi0inFVdis_stack_8->SetBinContent(16,12.85281);
   hNCpi0inFVdis_stack_8->SetBinContent(17,12.04454);
   hNCpi0inFVdis_stack_8->SetBinContent(18,10.05517);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.591656);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.00932);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.72768);
   hNCpi0inFVdis_stack_8->SetBinContent(22,13.05028);
   hNCpi0inFVdis_stack_8->SetBinContent(23,11.35469);
   hNCpi0inFVdis_stack_8->SetBinContent(24,9.883442);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.083958);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.146912);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.156094);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.028942);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9714801);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8209652);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.121229);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.052256);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.038387);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9741809);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.9777699);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.871966);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.073313);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.077927);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.142435);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.141554);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.140104);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.047251);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.9835247);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.9796585);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.13234);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.202249);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.158449);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.9813125);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1974492);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,24.56977);
   hCCpi0inFV_stack_10->SetBinContent(2,21.73783);
   hCCpi0inFV_stack_10->SetBinContent(3,26.67121);
   hCCpi0inFV_stack_10->SetBinContent(4,19.06584);
   hCCpi0inFV_stack_10->SetBinContent(5,17.3987);
   hCCpi0inFV_stack_10->SetBinContent(6,20.18558);
   hCCpi0inFV_stack_10->SetBinContent(7,21.38244);
   hCCpi0inFV_stack_10->SetBinContent(8,20.56597);
   hCCpi0inFV_stack_10->SetBinContent(9,22.04);
   hCCpi0inFV_stack_10->SetBinContent(10,27.4724);
   hCCpi0inFV_stack_10->SetBinContent(11,25.92434);
   hCCpi0inFV_stack_10->SetBinContent(12,31.90345);
   hCCpi0inFV_stack_10->SetBinContent(13,26.06948);
   hCCpi0inFV_stack_10->SetBinContent(14,24.18987);
   hCCpi0inFV_stack_10->SetBinContent(15,29.94586);
   hCCpi0inFV_stack_10->SetBinContent(16,21.34018);
   hCCpi0inFV_stack_10->SetBinContent(17,25.98213);
   hCCpi0inFV_stack_10->SetBinContent(18,23.89003);
   hCCpi0inFV_stack_10->SetBinContent(19,20.58792);
   hCCpi0inFV_stack_10->SetBinContent(20,18.0027);
   hCCpi0inFV_stack_10->SetBinContent(21,29.08771);
   hCCpi0inFV_stack_10->SetBinContent(22,26.48254);
   hCCpi0inFV_stack_10->SetBinContent(23,28.47979);
   hCCpi0inFV_stack_10->SetBinContent(24,26.14909);
   hCCpi0inFV_stack_10->SetBinError(1,2.532787);
   hCCpi0inFV_stack_10->SetBinError(2,2.335126);
   hCCpi0inFV_stack_10->SetBinError(3,2.561503);
   hCCpi0inFV_stack_10->SetBinError(4,2.149669);
   hCCpi0inFV_stack_10->SetBinError(5,2.014233);
   hCCpi0inFV_stack_10->SetBinError(6,2.148013);
   hCCpi0inFV_stack_10->SetBinError(7,2.350878);
   hCCpi0inFV_stack_10->SetBinError(8,2.284866);
   hCCpi0inFV_stack_10->SetBinError(9,2.312988);
   hCCpi0inFV_stack_10->SetBinError(10,2.689154);
   hCCpi0inFV_stack_10->SetBinError(11,2.626372);
   hCCpi0inFV_stack_10->SetBinError(12,2.848888);
   hCCpi0inFV_stack_10->SetBinError(13,2.549898);
   hCCpi0inFV_stack_10->SetBinError(14,2.483319);
   hCCpi0inFV_stack_10->SetBinError(15,2.729444);
   hCCpi0inFV_stack_10->SetBinError(16,2.278773);
   hCCpi0inFV_stack_10->SetBinError(17,2.504229);
   hCCpi0inFV_stack_10->SetBinError(18,2.491215);
   hCCpi0inFV_stack_10->SetBinError(19,2.275092);
   hCCpi0inFV_stack_10->SetBinError(20,2.139322);
   hCCpi0inFV_stack_10->SetBinError(21,2.717761);
   hCCpi0inFV_stack_10->SetBinError(22,2.63123);
   hCCpi0inFV_stack_10->SetBinError(23,2.681127);
   hCCpi0inFV_stack_10->SetBinError(24,2.544792);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,7.327023);
   hNCinFV_stack_11->SetBinContent(2,9.910053);
   hNCinFV_stack_11->SetBinContent(3,12.26049);
   hNCinFV_stack_11->SetBinContent(4,11.03371);
   hNCinFV_stack_11->SetBinContent(5,6.055439);
   hNCinFV_stack_11->SetBinContent(6,11.50963);
   hNCinFV_stack_11->SetBinContent(7,9.192742);
   hNCinFV_stack_11->SetBinContent(8,10.26991);
   hNCinFV_stack_11->SetBinContent(9,8.10773);
   hNCinFV_stack_11->SetBinContent(10,9.131644);
   hNCinFV_stack_11->SetBinContent(11,10.9435);
   hNCinFV_stack_11->SetBinContent(12,7.423994);
   hNCinFV_stack_11->SetBinContent(13,9.518312);
   hNCinFV_stack_11->SetBinContent(14,8.95907);
   hNCinFV_stack_11->SetBinContent(15,13.51808);
   hNCinFV_stack_11->SetBinContent(16,7.912705);
   hNCinFV_stack_11->SetBinContent(17,10.95365);
   hNCinFV_stack_11->SetBinContent(18,11.82734);
   hNCinFV_stack_11->SetBinContent(19,6.302027);
   hNCinFV_stack_11->SetBinContent(20,12.49924);
   hNCinFV_stack_11->SetBinContent(21,9.28126);
   hNCinFV_stack_11->SetBinContent(22,8.459133);
   hNCinFV_stack_11->SetBinContent(23,8.892901);
   hNCinFV_stack_11->SetBinContent(24,12.95099);
   hNCinFV_stack_11->SetBinError(1,1.314994);
   hNCinFV_stack_11->SetBinError(2,1.606218);
   hNCinFV_stack_11->SetBinError(3,1.743654);
   hNCinFV_stack_11->SetBinError(4,1.687934);
   hNCinFV_stack_11->SetBinError(5,1.256838);
   hNCinFV_stack_11->SetBinError(6,1.760495);
   hNCinFV_stack_11->SetBinError(7,1.481492);
   hNCinFV_stack_11->SetBinError(8,1.582712);
   hNCinFV_stack_11->SetBinError(9,1.442212);
   hNCinFV_stack_11->SetBinError(10,1.558352);
   hNCinFV_stack_11->SetBinError(11,1.653412);
   hNCinFV_stack_11->SetBinError(12,1.35912);
   hNCinFV_stack_11->SetBinError(13,1.582152);
   hNCinFV_stack_11->SetBinError(14,1.415077);
   hNCinFV_stack_11->SetBinError(15,1.892403);
   hNCinFV_stack_11->SetBinError(16,1.428965);
   hNCinFV_stack_11->SetBinError(17,1.654613);
   hNCinFV_stack_11->SetBinError(18,1.733943);
   hNCinFV_stack_11->SetBinError(19,1.256458);
   hNCinFV_stack_11->SetBinError(20,1.798524);
   hNCinFV_stack_11->SetBinError(21,1.519706);
   hNCinFV_stack_11->SetBinError(22,1.414816);
   hNCinFV_stack_11->SetBinError(23,1.494691);
   hNCinFV_stack_11->SetBinError(24,1.809901);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,12.85747);
   hnumuCCinFV_stack_12->SetBinContent(2,12.55752);
   hnumuCCinFV_stack_12->SetBinContent(3,9.736189);
   hnumuCCinFV_stack_12->SetBinContent(4,9.969284);
   hnumuCCinFV_stack_12->SetBinContent(5,9.549414);
   hnumuCCinFV_stack_12->SetBinContent(6,8.259978);
   hnumuCCinFV_stack_12->SetBinContent(7,8.558433);
   hnumuCCinFV_stack_12->SetBinContent(8,10.20443);
   hnumuCCinFV_stack_12->SetBinContent(9,8.454362);
   hnumuCCinFV_stack_12->SetBinContent(10,10.33943);
   hnumuCCinFV_stack_12->SetBinContent(11,12.12735);
   hnumuCCinFV_stack_12->SetBinContent(12,15.06723);
   hnumuCCinFV_stack_12->SetBinContent(13,13.50637);
   hnumuCCinFV_stack_12->SetBinContent(14,15.95416);
   hnumuCCinFV_stack_12->SetBinContent(15,8.488214);
   hnumuCCinFV_stack_12->SetBinContent(16,11.75981);
   hnumuCCinFV_stack_12->SetBinContent(17,10.38791);
   hnumuCCinFV_stack_12->SetBinContent(18,9.079874);
   hnumuCCinFV_stack_12->SetBinContent(19,8.491407);
   hnumuCCinFV_stack_12->SetBinContent(20,9.390387);
   hnumuCCinFV_stack_12->SetBinContent(21,15.00283);
   hnumuCCinFV_stack_12->SetBinContent(22,10.04837);
   hnumuCCinFV_stack_12->SetBinContent(23,12.88161);
   hnumuCCinFV_stack_12->SetBinContent(24,14.38395);
   hnumuCCinFV_stack_12->SetBinError(1,2.072275);
   hnumuCCinFV_stack_12->SetBinError(2,1.85135);
   hnumuCCinFV_stack_12->SetBinError(3,1.575168);
   hnumuCCinFV_stack_12->SetBinError(4,1.73545);
   hnumuCCinFV_stack_12->SetBinError(5,1.896954);
   hnumuCCinFV_stack_12->SetBinError(6,1.458095);
   hnumuCCinFV_stack_12->SetBinError(7,1.531203);
   hnumuCCinFV_stack_12->SetBinError(8,1.740024);
   hnumuCCinFV_stack_12->SetBinError(9,1.729505);
   hnumuCCinFV_stack_12->SetBinError(10,1.736695);
   hnumuCCinFV_stack_12->SetBinError(11,1.77735);
   hnumuCCinFV_stack_12->SetBinError(12,2.445033);
   hnumuCCinFV_stack_12->SetBinError(13,1.928045);
   hnumuCCinFV_stack_12->SetBinError(14,2.165287);
   hnumuCCinFV_stack_12->SetBinError(15,1.468479);
   hnumuCCinFV_stack_12->SetBinError(16,2.217741);
   hnumuCCinFV_stack_12->SetBinError(17,1.765773);
   hnumuCCinFV_stack_12->SetBinError(18,1.818964);
   hnumuCCinFV_stack_12->SetBinError(19,2.327814);
   hnumuCCinFV_stack_12->SetBinError(20,1.572246);
   hnumuCCinFV_stack_12->SetBinError(21,3.177814);
   hnumuCCinFV_stack_12->SetBinError(22,1.770882);
   hnumuCCinFV_stack_12->SetBinError(23,1.885481);
   hnumuCCinFV_stack_12->SetBinError(24,2.220229);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.508753);
   hnueCCinFV_stack_13->SetBinContent(2,1.11703);
   hnueCCinFV_stack_13->SetBinContent(3,0.218026);
   hnueCCinFV_stack_13->SetBinContent(4,1.963927);
   hnueCCinFV_stack_13->SetBinContent(5,1.282706);
   hnueCCinFV_stack_13->SetBinContent(6,1.885115);
   hnueCCinFV_stack_13->SetBinContent(7,0.8093879);
   hnueCCinFV_stack_13->SetBinContent(8,0.6876913);
   hnueCCinFV_stack_13->SetBinContent(9,2.439669);
   hnueCCinFV_stack_13->SetBinContent(10,1.401863);
   hnueCCinFV_stack_13->SetBinContent(11,0.6293085);
   hnueCCinFV_stack_13->SetBinContent(12,1.74239);
   hnueCCinFV_stack_13->SetBinContent(13,2.210377);
   hnueCCinFV_stack_13->SetBinContent(15,1.111822);
   hnueCCinFV_stack_13->SetBinContent(16,1.415288);
   hnueCCinFV_stack_13->SetBinContent(17,3.677929);
   hnueCCinFV_stack_13->SetBinContent(18,0.8013275);
   hnueCCinFV_stack_13->SetBinContent(19,1.295415);
   hnueCCinFV_stack_13->SetBinContent(20,2.178747);
   hnueCCinFV_stack_13->SetBinContent(21,0.6205657);
   hnueCCinFV_stack_13->SetBinContent(22,0.00488893);
   hnueCCinFV_stack_13->SetBinContent(23,1.897839);
   hnueCCinFV_stack_13->SetBinContent(24,0.9297878);
   hnueCCinFV_stack_13->SetBinError(1,1.549207);
   hnueCCinFV_stack_13->SetBinError(2,0.5897007);
   hnueCCinFV_stack_13->SetBinError(3,0.2180157);
   hnueCCinFV_stack_13->SetBinError(4,1.200491);
   hnueCCinFV_stack_13->SetBinError(5,0.6598412);
   hnueCCinFV_stack_13->SetBinError(6,0.7660538);
   hnueCCinFV_stack_13->SetBinError(7,0.4746746);
   hnueCCinFV_stack_13->SetBinError(8,0.4006146);
   hnueCCinFV_stack_13->SetBinError(9,1.099958);
   hnueCCinFV_stack_13->SetBinError(10,0.8157702);
   hnueCCinFV_stack_13->SetBinError(11,0.4752197);
   hnueCCinFV_stack_13->SetBinError(12,0.7619955);
   hnueCCinFV_stack_13->SetBinError(13,0.9653382);
   hnueCCinFV_stack_13->SetBinError(15,0.5107116);
   hnueCCinFV_stack_13->SetBinError(16,0.6545221);
   hnueCCinFV_stack_13->SetBinError(17,1.528904);
   hnueCCinFV_stack_13->SetBinError(18,0.4937343);
   hnueCCinFV_stack_13->SetBinError(19,0.6340776);
   hnueCCinFV_stack_13->SetBinError(20,0.9061585);
   hnueCCinFV_stack_13->SetBinError(21,0.3591437);
   hnueCCinFV_stack_13->SetBinError(22,0.00488893);
   hnueCCinFV_stack_13->SetBinError(23,0.7857902);
   hnueCCinFV_stack_13->SetBinError(24,0.4708821);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);
   hmcerror__11->SetBinContent(1,155.9804);
   hmcerror__11->SetBinContent(2,159.094);
   hmcerror__11->SetBinContent(3,166.605);
   hmcerror__11->SetBinContent(4,160.1272);
   hmcerror__11->SetBinContent(5,141.7521);
   hmcerror__11->SetBinContent(6,161.6343);
   hmcerror__11->SetBinContent(7,169.6889);
   hmcerror__11->SetBinContent(8,155.7316);
   hmcerror__11->SetBinContent(9,156.7375);
   hmcerror__11->SetBinContent(10,150.6185);
   hmcerror__11->SetBinContent(11,168.3701);
   hmcerror__11->SetBinContent(12,159.3634);
   hmcerror__11->SetBinContent(13,167.4442);
   hmcerror__11->SetBinContent(14,165.2698);
   hmcerror__11->SetBinContent(15,167.2361);
   hmcerror__11->SetBinContent(16,160.3572);
   hmcerror__11->SetBinContent(17,178.4183);
   hmcerror__11->SetBinContent(18,166.0432);
   hmcerror__11->SetBinContent(19,149.3757);
   hmcerror__11->SetBinContent(20,166.97);
   hmcerror__11->SetBinContent(21,167.2644);
   hmcerror__11->SetBinContent(22,165.5206);
   hmcerror__11->SetBinContent(23,178.2577);
   hmcerror__11->SetBinContent(24,172.2448);
   hmcerror__11->SetBinError(1,39.81154);
   hmcerror__11->SetBinError(2,42.2191);
   hmcerror__11->SetBinError(3,42.5465);
   hmcerror__11->SetBinError(4,44.7309);
   hmcerror__11->SetBinError(5,34.94521);
   hmcerror__11->SetBinError(6,37.93195);
   hmcerror__11->SetBinError(7,38.99356);
   hmcerror__11->SetBinError(8,43.75466);
   hmcerror__11->SetBinError(9,39.75369);
   hmcerror__11->SetBinError(10,39.36929);
   hmcerror__11->SetBinError(11,53.3205);
   hmcerror__11->SetBinError(12,39.78676);
   hmcerror__11->SetBinError(13,44.36731);
   hmcerror__11->SetBinError(14,41.46885);
   hmcerror__11->SetBinError(15,49.03325);
   hmcerror__11->SetBinError(16,39.30092);
   hmcerror__11->SetBinError(17,47.51426);
   hmcerror__11->SetBinError(18,37.5101);
   hmcerror__11->SetBinError(19,38.79997);
   hmcerror__11->SetBinError(20,38.69806);
   hmcerror__11->SetBinError(21,43.35027);
   hmcerror__11->SetBinError(22,48.31453);
   hmcerror__11->SetBinError(23,48.46015);
   hmcerror__11->SetBinError(24,50.60505);
   hmcerror__11->SetBinError(25,0.3895343);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3013[24] = {
   179,
   135,
   156,
   145,
   150,
   134,
   160,
   175,
   153,
   160,
   140,
   169,
   185,
   173,
   148,
   173,
   176,
   142,
   156,
   154,
   151,
   190,
   164,
   155};
   Double_t _felx3013[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3013[24] = {
   13.37909,
   11.61895,
   12.49,
   12.04159,
   12.24745,
   11.57584,
   12.64911,
   13.22876,
   12.36932,
   12.64911,
   11.83216,
   13,
   13.60147,
   13.15295,
   12.16553,
   13.15295,
   13.2665,
   11.91638,
   12.49,
   12.40967,
   12.28821,
   13.78405,
   12.80625,
   12.4499};
   Double_t _fehx3013[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3013[24] = {
   13.37909,
   11.61895,
   12.49,
   12.04159,
   12.24745,
   11.57584,
   12.64911,
   13.22876,
   12.36932,
   12.64911,
   11.83216,
   13,
   13.60147,
   13.15295,
   12.16553,
   13.15295,
   13.2665,
   11.91638,
   12.49,
   12.40967,
   12.28821,
   13.78405,
   12.80625,
   12.4499};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-3.78,3.78);
   Graph_Graph3013->SetMinimum(114.2882);
   Graph_Graph3013->SetMaximum(211.92);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.7/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 234.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3014[24] = {
   0.2552343,
   0.265372,
   0.2553734,
   0.2793461,
   0.2465234,
   0.2346776,
   0.2297944,
   0.2809619,
   0.2536323,
   0.2613842,
   0.3166863,
   0.2496606,
   0.2649677,
   0.2509161,
   0.2931977,
   0.2450836,
   0.2663082,
   0.2259057,
   0.2597475,
   0.2317665,
   0.2591722,
   0.2918943,
   0.2718545,
   0.2937973};
   Double_t _fehx3014[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3014[24] = {
   0.2552343,
   0.265372,
   0.2553734,
   0.2793461,
   0.2465234,
   0.2346776,
   0.2297944,
   0.2809619,
   0.2536323,
   0.2613842,
   0.3166863,
   0.2496606,
   0.2649677,
   0.2509161,
   0.2931977,
   0.2450836,
   0.2663082,
   0.2259057,
   0.2597475,
   0.2317665,
   0.2591722,
   0.2918943,
   0.2718545,
   0.2937973};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-3.78,3.78);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Azimuthal Angle #phi [rad]");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
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
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3015[24] = {
   0.1963063,
   0.2019851,
   0.1945223,
   0.1962271,
   0.1881274,
   0.1862516,
   0.1850957,
   0.1866946,
   0.1913281,
   0.2039177,
   0.1945105,
   0.2009457,
   0.2022951,
   0.200932,
   0.2125924,
   0.1964997,
   0.1850764,
   0.1857732,
   0.1968336,
   0.1897653,
   0.1948643,
   0.2040644,
   0.1973522,
   0.1914996};
   Double_t _fehx3015[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3015[24] = {
   0.1963063,
   0.2019851,
   0.1945223,
   0.1962271,
   0.1881274,
   0.1862516,
   0.1850957,
   0.1866946,
   0.1913281,
   0.2039177,
   0.1945105,
   0.2009457,
   0.2022951,
   0.200932,
   0.2125924,
   0.1964997,
   0.1850764,
   0.1857732,
   0.1968336,
   0.1897653,
   0.1948643,
   0.2040644,
   0.1973522,
   0.1914996};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-3.78,3.78);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
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
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3016[24] = {
   1.14758,
   0.8485548,
   0.9363462,
   0.9055301,
   1.058186,
   0.829032,
   0.942902,
   1.123728,
   0.9761546,
   1.062287,
   0.8315016,
   1.060469,
   1.104845,
   1.046773,
   0.8849762,
   1.078842,
   0.986446,
   0.8551994,
   1.044346,
   0.9223212,
   0.9027626,
   1.147893,
   0.9200166,
   0.8998822};
   Double_t _felx3016[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3016[24] = {
   0.08577417,
   0.07303197,
   0.0749677,
   0.07520018,
   0.0864005,
   0.07161746,
   0.07454295,
   0.08494586,
   0.07891742,
   0.08398112,
   0.07027471,
   0.08157457,
   0.08122985,
   0.07958471,
   0.0727446,
   0.08202281,
   0.07435616,
   0.07176674,
   0.08361463,
   0.07432276,
   0.07346577,
   0.08327692,
   0.07184122,
   0.07228028};
   Double_t _fehx3016[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3016[24] = {
   0.08577417,
   0.07303197,
   0.0749677,
   0.07520018,
   0.0864005,
   0.07161746,
   0.07454295,
   0.08494586,
   0.07891742,
   0.08398112,
   0.07027471,
   0.08157457,
   0.08122985,
   0.07958471,
   0.0727446,
   0.08202281,
   0.07435616,
   0.07176674,
   0.08361463,
   0.07432276,
   0.07346577,
   0.08327692,
   0.07184122,
   0.07228028};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-3.78,3.78);
   Graph_Graph3016->SetMinimum(0.7098205);
   Graph_Graph3016->SetMaximum(1.280948);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_phi_low_all",24,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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
