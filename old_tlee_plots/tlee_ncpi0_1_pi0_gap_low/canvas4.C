#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Oct 22 21:57:09 2022) by ROOT version 6.26/00
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
   pad1->Range(-7.692308,-13.24,56.41026,1464.065);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmc__10->SetBinContent(1,630.5472);
   hmc__10->SetBinContent(2,142.8066);
   hmc__10->SetBinContent(3,165.3904);
   hmc__10->SetBinContent(4,157.384);
   hmc__10->SetBinContent(5,154.7331);
   hmc__10->SetBinContent(6,154.0431);
   hmc__10->SetBinContent(7,153.3935);
   hmc__10->SetBinContent(8,148.4989);
   hmc__10->SetBinContent(9,146.0173);
   hmc__10->SetBinContent(10,137.7591);
   hmc__10->SetBinContent(11,122.2358);
   hmc__10->SetBinContent(12,129.8346);
   hmc__10->SetBinContent(13,109.9903);
   hmc__10->SetBinContent(14,105.2686);
   hmc__10->SetBinContent(15,98.66599);
   hmc__10->SetBinContent(16,82.49223);
   hmc__10->SetBinContent(17,82.15423);
   hmc__10->SetBinContent(18,74.53208);
   hmc__10->SetBinContent(19,69.84373);
   hmc__10->SetBinContent(20,60.88461);
   hmc__10->SetBinContent(21,802.9847);
   hmc__10->SetBinError(1,141.435);
   hmc__10->SetBinError(2,41.84044);
   hmc__10->SetBinError(3,42.13137);
   hmc__10->SetBinError(4,39.6944);
   hmc__10->SetBinError(5,41.12093);
   hmc__10->SetBinError(6,45.11434);
   hmc__10->SetBinError(7,38.67541);
   hmc__10->SetBinError(8,43.30763);
   hmc__10->SetBinError(9,37.81334);
   hmc__10->SetBinError(10,42.78762);
   hmc__10->SetBinError(11,41.47324);
   hmc__10->SetBinError(12,34.1922);
   hmc__10->SetBinError(13,34.40972);
   hmc__10->SetBinError(14,26.5646);
   hmc__10->SetBinError(15,27.66746);
   hmc__10->SetBinError(16,26.23641);
   hmc__10->SetBinError(17,25.21446);
   hmc__10->SetBinError(18,22.39786);
   hmc__10->SetBinError(19,19.77121);
   hmc__10->SetBinError(20,17.31029);
   hmc__10->SetBinError(21,165.7216);
   hmc__10->SetMinimum(-13.24);
   hmc__10->SetMaximum(1390.2);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,0,50);
   hs4_stack_4->SetMinimum(-1.683776e-08);
   hs4_stack_4->SetMaximum(662.0746);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,20.21332);
   hbadmatch_stack_1->SetBinContent(2,1.867643);
   hbadmatch_stack_1->SetBinContent(3,1.485526);
   hbadmatch_stack_1->SetBinContent(4,4.420323);
   hbadmatch_stack_1->SetBinContent(5,2.400032);
   hbadmatch_stack_1->SetBinContent(6,3.443416);
   hbadmatch_stack_1->SetBinContent(7,2.990381);
   hbadmatch_stack_1->SetBinContent(8,1.375739);
   hbadmatch_stack_1->SetBinContent(9,3.828499);
   hbadmatch_stack_1->SetBinContent(10,4.219818);
   hbadmatch_stack_1->SetBinContent(11,1.490061);
   hbadmatch_stack_1->SetBinContent(12,3.132628);
   hbadmatch_stack_1->SetBinContent(13,2.089441);
   hbadmatch_stack_1->SetBinContent(14,2.435039);
   hbadmatch_stack_1->SetBinContent(15,4.861545);
   hbadmatch_stack_1->SetBinContent(16,1.567349);
   hbadmatch_stack_1->SetBinContent(17,2.282428);
   hbadmatch_stack_1->SetBinContent(18,2.013926);
   hbadmatch_stack_1->SetBinContent(19,1.787343);
   hbadmatch_stack_1->SetBinContent(20,1.624953);
   hbadmatch_stack_1->SetBinContent(21,28.05588);
   hbadmatch_stack_1->SetBinError(1,2.611118);
   hbadmatch_stack_1->SetBinError(2,0.6829526);
   hbadmatch_stack_1->SetBinError(3,0.6004235);
   hbadmatch_stack_1->SetBinError(4,1.148697);
   hbadmatch_stack_1->SetBinError(5,0.7743634);
   hbadmatch_stack_1->SetBinError(6,0.9247167);
   hbadmatch_stack_1->SetBinError(7,1.087508);
   hbadmatch_stack_1->SetBinError(8,0.5770459);
   hbadmatch_stack_1->SetBinError(9,1.012727);
   hbadmatch_stack_1->SetBinError(10,1.066849);
   hbadmatch_stack_1->SetBinError(11,0.6476325);
   hbadmatch_stack_1->SetBinError(12,1.157691);
   hbadmatch_stack_1->SetBinError(13,0.8747669);
   hbadmatch_stack_1->SetBinError(14,0.9141434);
   hbadmatch_stack_1->SetBinError(15,1.903764);
   hbadmatch_stack_1->SetBinError(16,0.627995);
   hbadmatch_stack_1->SetBinError(17,0.8010829);
   hbadmatch_stack_1->SetBinError(18,0.786092);
   hbadmatch_stack_1->SetBinError(19,0.606045);
   hbadmatch_stack_1->SetBinError(20,0.6878723);
   hbadmatch_stack_1->SetBinError(21,3.202886);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hext_stack_2->SetBinContent(1,91.79733);
   hext_stack_2->SetBinContent(2,14.66459);
   hext_stack_2->SetBinContent(3,23.39781);
   hext_stack_2->SetBinContent(4,20.87166);
   hext_stack_2->SetBinContent(5,15.08995);
   hext_stack_2->SetBinContent(6,20.87166);
   hext_stack_2->SetBinContent(7,20.08164);
   hext_stack_2->SetBinContent(8,17.93332);
   hext_stack_2->SetBinContent(9,15.92627);
   hext_stack_2->SetBinContent(10,11.89782);
   hext_stack_2->SetBinContent(11,12.32319);
   hext_stack_2->SetBinContent(12,22.33523);
   hext_stack_2->SetBinContent(13,14.47146);
   hext_stack_2->SetBinContent(14,13.11762);
   hext_stack_2->SetBinContent(15,14.15147);
   hext_stack_2->SetBinContent(16,6.813981);
   hext_stack_2->SetBinContent(17,10.34645);
   hext_stack_2->SetBinContent(18,10.35363);
   hext_stack_2->SetBinContent(19,7.455595);
   hext_stack_2->SetBinContent(20,8.428787);
   hext_stack_2->SetBinContent(21,105.1153);
   hext_stack_2->SetBinError(1,6.479597);
   hext_stack_2->SetBinError(2,2.450668);
   hext_stack_2->SetBinError(3,3.453288);
   hext_stack_2->SetBinError(4,3.067187);
   hext_stack_2->SetBinError(5,2.429777);
   hext_stack_2->SetBinError(6,3.067187);
   hext_stack_2->SetBinError(7,2.990791);
   hext_stack_2->SetBinError(8,2.954287);
   hext_stack_2->SetBinError(9,2.726301);
   hext_stack_2->SetBinError(10,2.290181);
   hext_stack_2->SetBinError(11,2.267812);
   hext_stack_2->SetBinError(12,3.427916);
   hext_stack_2->SetBinError(13,2.586581);
   hext_stack_2->SetBinError(14,2.396017);
   hext_stack_2->SetBinError(15,2.592353);
   hext_stack_2->SetBinError(16,1.637484);
   hext_stack_2->SetBinError(17,2.20112);
   hext_stack_2->SetBinError(18,2.154931);
   hext_stack_2->SetBinError(19,1.758699);
   hext_stack_2->SetBinError(20,1.846273);
   hext_stack_2->SetBinError(21,6.843994);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,11.52863);
   hdirt_stack_3->SetBinContent(2,1.132946);
   hdirt_stack_3->SetBinContent(3,2.35902);
   hdirt_stack_3->SetBinContent(4,2.659172);
   hdirt_stack_3->SetBinContent(5,4.392825);
   hdirt_stack_3->SetBinContent(6,1.296085);
   hdirt_stack_3->SetBinContent(7,2.231884);
   hdirt_stack_3->SetBinContent(8,3.766363);
   hdirt_stack_3->SetBinContent(9,3.340124);
   hdirt_stack_3->SetBinContent(10,1.73055);
   hdirt_stack_3->SetBinContent(11,1.07489);
   hdirt_stack_3->SetBinContent(12,1.529382);
   hdirt_stack_3->SetBinContent(13,2.088449);
   hdirt_stack_3->SetBinContent(14,0.7036907);
   hdirt_stack_3->SetBinContent(15,0.6399186);
   hdirt_stack_3->SetBinContent(16,1.289797);
   hdirt_stack_3->SetBinContent(17,0.5570828);
   hdirt_stack_3->SetBinContent(18,0.7798091);
   hdirt_stack_3->SetBinContent(19,0.8434126);
   hdirt_stack_3->SetBinContent(20,0.8126886);
   hdirt_stack_3->SetBinContent(21,12.29635);
   hdirt_stack_3->SetBinError(1,1.903022);
   hdirt_stack_3->SetBinError(2,0.526479);
   hdirt_stack_3->SetBinError(3,0.8115647);
   hdirt_stack_3->SetBinError(4,0.8795486);
   hdirt_stack_3->SetBinError(5,1.144376);
   hdirt_stack_3->SetBinError(6,0.5006278);
   hdirt_stack_3->SetBinError(7,0.8380707);
   hdirt_stack_3->SetBinError(8,1.133128);
   hdirt_stack_3->SetBinError(9,0.944959);
   hdirt_stack_3->SetBinError(10,0.6707299);
   hdirt_stack_3->SetBinError(11,0.5051084);
   hdirt_stack_3->SetBinError(12,0.6358845);
   hdirt_stack_3->SetBinError(13,1.158006);
   hdirt_stack_3->SetBinError(14,0.4037885);
   hdirt_stack_3->SetBinError(15,0.4002735);
   hdirt_stack_3->SetBinError(16,0.498851);
   hdirt_stack_3->SetBinError(17,0.4028472);
   hdirt_stack_3->SetBinError(18,0.4241242);
   hdirt_stack_3->SetBinError(19,0.4509214);
   hdirt_stack_3->SetBinError(20,0.4770956);
   hdirt_stack_3->SetBinError(21,1.886667);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,82.50717);
   houtFV_stack_4->SetBinContent(2,18.36397);
   houtFV_stack_4->SetBinContent(3,19.42063);
   houtFV_stack_4->SetBinContent(4,21.16901);
   houtFV_stack_4->SetBinContent(5,19.33949);
   houtFV_stack_4->SetBinContent(6,18.35741);
   houtFV_stack_4->SetBinContent(7,17.79931);
   houtFV_stack_4->SetBinContent(8,16.28501);
   houtFV_stack_4->SetBinContent(9,20.35473);
   houtFV_stack_4->SetBinContent(10,15.61006);
   houtFV_stack_4->SetBinContent(11,13.2518);
   houtFV_stack_4->SetBinContent(12,15.83519);
   houtFV_stack_4->SetBinContent(13,12.55816);
   houtFV_stack_4->SetBinContent(14,11.84031);
   houtFV_stack_4->SetBinContent(15,14.31037);
   houtFV_stack_4->SetBinContent(16,11.01604);
   houtFV_stack_4->SetBinContent(17,12.64234);
   houtFV_stack_4->SetBinContent(18,9.983767);
   houtFV_stack_4->SetBinContent(19,10.79506);
   houtFV_stack_4->SetBinContent(20,9.541855);
   houtFV_stack_4->SetBinContent(21,105.7607);
   houtFV_stack_4->SetBinError(1,4.668256);
   houtFV_stack_4->SetBinError(2,2.17277);
   houtFV_stack_4->SetBinError(3,2.427013);
   houtFV_stack_4->SetBinError(4,2.286944);
   houtFV_stack_4->SetBinError(5,2.27659);
   houtFV_stack_4->SetBinError(6,2.174135);
   houtFV_stack_4->SetBinError(7,2.071959);
   houtFV_stack_4->SetBinError(8,2.047813);
   houtFV_stack_4->SetBinError(9,2.218466);
   houtFV_stack_4->SetBinError(10,1.919196);
   houtFV_stack_4->SetBinError(11,1.76366);
   houtFV_stack_4->SetBinError(12,1.976334);
   houtFV_stack_4->SetBinError(13,1.749631);
   houtFV_stack_4->SetBinError(14,1.68231);
   houtFV_stack_4->SetBinError(15,1.909721);
   houtFV_stack_4->SetBinError(16,1.674924);
   houtFV_stack_4->SetBinError(17,1.817051);
   houtFV_stack_4->SetBinError(18,1.641027);
   houtFV_stack_4->SetBinError(19,1.632082);
   houtFV_stack_4->SetBinError(20,1.500913);
   houtFV_stack_4->SetBinError(21,5.198802);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,13.44322);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.814026);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.907493);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.242401);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,5.472613);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.034817);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.665767);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.203433);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.612188);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.331096);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.518387);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.671224);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.050841);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.547977);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.922807);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.544031);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.646706);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.992957);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.329144);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.8624);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,25.22831);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.384266);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.9009495);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8013443);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8543832);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.8735023);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7879955);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6741386);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.04475);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6333709);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5502575);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8403837);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8171693);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5410807);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.665978);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4156835);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.72255);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.692989);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3686469);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5665083);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7282403);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.842591);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.00232);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.028309);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1555753);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2563833);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.08963924);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4058204);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1868343);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2950618);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08195394);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.276972);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4372247);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1105049);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1809886);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2704124);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2466075);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.07124697);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4582561);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.164949);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1255435);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05127166);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.16567);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2405286);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3919569);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06984828);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1352187);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.05006448);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.211942);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.07458049);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1789536);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03988994);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1431927);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2676555);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05672345);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.07517215);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1171449);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1240076);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04725523);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.242294);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1151649);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06135201);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.0392955);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.3640768);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,175.0246);
   hNCpi0inFVres_stack_7->SetBinContent(2,48.58192);
   hNCpi0inFVres_stack_7->SetBinContent(3,53.53903);
   hNCpi0inFVres_stack_7->SetBinContent(4,49.40416);
   hNCpi0inFVres_stack_7->SetBinContent(5,51.40439);
   hNCpi0inFVres_stack_7->SetBinContent(6,52.96649);
   hNCpi0inFVres_stack_7->SetBinContent(7,50.84033);
   hNCpi0inFVres_stack_7->SetBinContent(8,53.3218);
   hNCpi0inFVres_stack_7->SetBinContent(9,47.65269);
   hNCpi0inFVres_stack_7->SetBinContent(10,47.89219);
   hNCpi0inFVres_stack_7->SetBinContent(11,41.53096);
   hNCpi0inFVres_stack_7->SetBinContent(12,40.50848);
   hNCpi0inFVres_stack_7->SetBinContent(13,36.74584);
   hNCpi0inFVres_stack_7->SetBinContent(14,33.45756);
   hNCpi0inFVres_stack_7->SetBinContent(15,31.70256);
   hNCpi0inFVres_stack_7->SetBinContent(16,26.70787);
   hNCpi0inFVres_stack_7->SetBinContent(17,23.85395);
   hNCpi0inFVres_stack_7->SetBinContent(18,21.88372);
   hNCpi0inFVres_stack_7->SetBinContent(19,20.29872);
   hNCpi0inFVres_stack_7->SetBinContent(20,19.03465);
   hNCpi0inFVres_stack_7->SetBinContent(21,228.1426);
   hNCpi0inFVres_stack_7->SetBinError(1,4.545356);
   hNCpi0inFVres_stack_7->SetBinError(2,2.41716);
   hNCpi0inFVres_stack_7->SetBinError(3,2.495986);
   hNCpi0inFVres_stack_7->SetBinError(4,2.349751);
   hNCpi0inFVres_stack_7->SetBinError(5,2.431689);
   hNCpi0inFVres_stack_7->SetBinError(6,2.512055);
   hNCpi0inFVres_stack_7->SetBinError(7,2.370237);
   hNCpi0inFVres_stack_7->SetBinError(8,2.57598);
   hNCpi0inFVres_stack_7->SetBinError(9,2.407603);
   hNCpi0inFVres_stack_7->SetBinError(10,2.462806);
   hNCpi0inFVres_stack_7->SetBinError(11,2.153593);
   hNCpi0inFVres_stack_7->SetBinError(12,2.180865);
   hNCpi0inFVres_stack_7->SetBinError(13,2.090438);
   hNCpi0inFVres_stack_7->SetBinError(14,2.042042);
   hNCpi0inFVres_stack_7->SetBinError(15,1.977395);
   hNCpi0inFVres_stack_7->SetBinError(16,1.683494);
   hNCpi0inFVres_stack_7->SetBinError(17,1.681402);
   hNCpi0inFVres_stack_7->SetBinError(18,1.577443);
   hNCpi0inFVres_stack_7->SetBinError(19,1.536559);
   hNCpi0inFVres_stack_7->SetBinError(20,1.428377);
   hNCpi0inFVres_stack_7->SetBinError(21,5.254413);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,36.02774);
   hNCpi0inFVdis_stack_8->SetBinContent(2,8.517365);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.42689);
   hNCpi0inFVdis_stack_8->SetBinContent(4,13.44364);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.88008);
   hNCpi0inFVdis_stack_8->SetBinContent(6,9.973705);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.47915);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.980435);
   hNCpi0inFVdis_stack_8->SetBinContent(9,9.245722);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.169634);
   hNCpi0inFVdis_stack_8->SetBinContent(11,9.073939);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.232347);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.719545);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.244147);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.083757);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.034992);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.342846);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.289831);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.447882);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.756338);
   hNCpi0inFVdis_stack_8->SetBinContent(21,44.45974);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.189479);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9121927);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.141879);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.321607);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.121449);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.054291);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9359035);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.018416);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8998894);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.076828);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.097153);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.057825);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.272239);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.875843);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.00881);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8832495);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8018533);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.147725);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7258541);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6777808);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.24921);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.07927215);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1883562);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.06548985);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1365517);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,90.69696);
   hCCpi0inFV_stack_10->SetBinContent(2,22.11171);
   hCCpi0inFV_stack_10->SetBinContent(3,23.76724);
   hCCpi0inFV_stack_10->SetBinContent(4,21.21395);
   hCCpi0inFV_stack_10->SetBinContent(5,24.40602);
   hCCpi0inFV_stack_10->SetBinContent(6,22.36887);
   hCCpi0inFV_stack_10->SetBinContent(7,28.64059);
   hCCpi0inFV_stack_10->SetBinContent(8,23.9129);
   hCCpi0inFV_stack_10->SetBinContent(9,23.5106);
   hCCpi0inFV_stack_10->SetBinContent(10,27.14851);
   hCCpi0inFV_stack_10->SetBinContent(11,22.13174);
   hCCpi0inFV_stack_10->SetBinContent(12,19.93507);
   hCCpi0inFV_stack_10->SetBinContent(13,17.53683);
   hCCpi0inFV_stack_10->SetBinContent(14,17.18948);
   hCCpi0inFV_stack_10->SetBinContent(15,15.31507);
   hCCpi0inFV_stack_10->SetBinContent(16,11.78024);
   hCCpi0inFV_stack_10->SetBinContent(17,14.07709);
   hCCpi0inFV_stack_10->SetBinContent(18,11.52259);
   hCCpi0inFV_stack_10->SetBinContent(19,9.386076);
   hCCpi0inFV_stack_10->SetBinContent(20,9.489794);
   hCCpi0inFV_stack_10->SetBinContent(21,122.9835);
   hCCpi0inFV_stack_10->SetBinError(1,4.76259);
   hCCpi0inFV_stack_10->SetBinError(2,2.332882);
   hCCpi0inFV_stack_10->SetBinError(3,2.449608);
   hCCpi0inFV_stack_10->SetBinError(4,2.285575);
   hCCpi0inFV_stack_10->SetBinError(5,2.492791);
   hCCpi0inFV_stack_10->SetBinError(6,2.368186);
   hCCpi0inFV_stack_10->SetBinError(7,2.726118);
   hCCpi0inFV_stack_10->SetBinError(8,2.454335);
   hCCpi0inFV_stack_10->SetBinError(9,2.395301);
   hCCpi0inFV_stack_10->SetBinError(10,2.677138);
   hCCpi0inFV_stack_10->SetBinError(11,2.308486);
   hCCpi0inFV_stack_10->SetBinError(12,2.255334);
   hCCpi0inFV_stack_10->SetBinError(13,2.080992);
   hCCpi0inFV_stack_10->SetBinError(14,2.138851);
   hCCpi0inFV_stack_10->SetBinError(15,1.97134);
   hCCpi0inFV_stack_10->SetBinError(16,1.687871);
   hCCpi0inFV_stack_10->SetBinError(17,1.905213);
   hCCpi0inFV_stack_10->SetBinError(18,1.704746);
   hCCpi0inFV_stack_10->SetBinError(19,1.494052);
   hCCpi0inFV_stack_10->SetBinError(20,1.56001);
   hCCpi0inFV_stack_10->SetBinError(21,5.548914);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,38.8261);
   hNCinFV_stack_11->SetBinContent(2,9.797801);
   hNCinFV_stack_11->SetBinContent(3,10.63798);
   hNCinFV_stack_11->SetBinContent(4,7.74249);
   hNCinFV_stack_11->SetBinContent(5,10.32691);
   hNCinFV_stack_11->SetBinContent(6,9.461346);
   hNCinFV_stack_11->SetBinContent(7,8.59577);
   hNCinFV_stack_11->SetBinContent(8,9.30584);
   hNCinFV_stack_11->SetBinContent(9,8.65794);
   hNCinFV_stack_11->SetBinContent(10,8.401499);
   hNCinFV_stack_11->SetBinContent(11,7.997075);
   hNCinFV_stack_11->SetBinContent(12,6.921891);
   hNCinFV_stack_11->SetBinContent(13,6.487957);
   hNCinFV_stack_11->SetBinContent(14,8.370606);
   hNCinFV_stack_11->SetBinContent(15,4.612413);
   hNCinFV_stack_11->SetBinContent(16,5.105371);
   hNCinFV_stack_11->SetBinContent(17,4.666723);
   hNCinFV_stack_11->SetBinContent(18,4.56039);
   hNCinFV_stack_11->SetBinContent(19,7.310155);
   hNCinFV_stack_11->SetBinContent(20,2.985652);
   hNCinFV_stack_11->SetBinContent(21,51.05388);
   hNCinFV_stack_11->SetBinError(1,3.491236);
   hNCinFV_stack_11->SetBinError(2,1.668802);
   hNCinFV_stack_11->SetBinError(3,1.814434);
   hNCinFV_stack_11->SetBinError(4,1.390716);
   hNCinFV_stack_11->SetBinError(5,1.656076);
   hNCinFV_stack_11->SetBinError(6,1.779907);
   hNCinFV_stack_11->SetBinError(7,1.584454);
   hNCinFV_stack_11->SetBinError(8,1.595149);
   hNCinFV_stack_11->SetBinError(9,1.495268);
   hNCinFV_stack_11->SetBinError(10,1.55086);
   hNCinFV_stack_11->SetBinError(11,1.369996);
   hNCinFV_stack_11->SetBinError(12,1.384533);
   hNCinFV_stack_11->SetBinError(13,1.458595);
   hNCinFV_stack_11->SetBinError(14,1.498624);
   hNCinFV_stack_11->SetBinError(15,1.033154);
   hNCinFV_stack_11->SetBinError(16,1.104071);
   hNCinFV_stack_11->SetBinError(17,1.018868);
   hNCinFV_stack_11->SetBinError(18,1.081483);
   hNCinFV_stack_11->SetBinError(19,1.610736);
   hNCinFV_stack_11->SetBinError(20,0.874233);
   hNCinFV_stack_11->SetBinError(21,3.685461);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,65.18395);
   hnumuCCinFV_stack_12->SetBinContent(2,11.51554);
   hnumuCCinFV_stack_12->SetBinContent(3,12.41898);
   hnumuCCinFV_stack_12->SetBinContent(4,10.11033);
   hnumuCCinFV_stack_12->SetBinContent(5,10.31159);
   hnumuCCinFV_stack_12->SetBinContent(6,9.109159);
   hnumuCCinFV_stack_12->SetBinContent(7,7.344925);
   hnumuCCinFV_stack_12->SetBinContent(8,6.106148);
   hnumuCCinFV_stack_12->SetBinContent(9,7.369342);
   hnumuCCinFV_stack_12->SetBinContent(10,6.937923);
   hnumuCCinFV_stack_12->SetBinContent(11,9.056772);
   hnumuCCinFV_stack_12->SetBinContent(12,7.230891);
   hnumuCCinFV_stack_12->SetBinContent(13,4.864032);
   hnumuCCinFV_stack_12->SetBinContent(14,7.413532);
   hnumuCCinFV_stack_12->SetBinContent(15,2.838328);
   hnumuCCinFV_stack_12->SetBinContent(16,8.292488);
   hnumuCCinFV_stack_12->SetBinContent(17,5.062679);
   hnumuCCinFV_stack_12->SetBinContent(18,3.350365);
   hnumuCCinFV_stack_12->SetBinContent(19,4.394888);
   hnumuCCinFV_stack_12->SetBinContent(20,3.083863);
   hnumuCCinFV_stack_12->SetBinContent(21,65.06026);
   hnumuCCinFV_stack_12->SetBinError(1,4.485361);
   hnumuCCinFV_stack_12->SetBinError(2,1.950253);
   hnumuCCinFV_stack_12->SetBinError(3,2.732862);
   hnumuCCinFV_stack_12->SetBinError(4,1.705767);
   hnumuCCinFV_stack_12->SetBinError(5,2.508592);
   hnumuCCinFV_stack_12->SetBinError(6,1.518803);
   hnumuCCinFV_stack_12->SetBinError(7,1.365419);
   hnumuCCinFV_stack_12->SetBinError(8,1.20401);
   hnumuCCinFV_stack_12->SetBinError(9,1.345688);
   hnumuCCinFV_stack_12->SetBinError(10,1.377374);
   hnumuCCinFV_stack_12->SetBinError(11,2.34556);
   hnumuCCinFV_stack_12->SetBinError(12,1.603271);
   hnumuCCinFV_stack_12->SetBinError(13,1.119293);
   hnumuCCinFV_stack_12->SetBinError(14,1.583049);
   hnumuCCinFV_stack_12->SetBinError(15,0.9048642);
   hnumuCCinFV_stack_12->SetBinError(16,1.738778);
   hnumuCCinFV_stack_12->SetBinError(17,1.153418);
   hnumuCCinFV_stack_12->SetBinError(18,0.8962874);
   hnumuCCinFV_stack_12->SetBinError(19,1.075193);
   hnumuCCinFV_stack_12->SetBinError(20,0.8815373);
   hnumuCCinFV_stack_12->SetBinError(21,4.616372);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,4.216591);
   hnueCCinFV_stack_13->SetBinContent(2,0.3934356);
   hnueCCinFV_stack_13->SetBinContent(3,1.874292);
   hnueCCinFV_stack_13->SetBinContent(4,0.8347859);
   hnueCCinFV_stack_13->SetBinContent(5,0.6195905);
   hnueCCinFV_stack_13->SetBinContent(6,0.7542815);
   hnueCCinFV_stack_13->SetBinContent(7,0.536893);
   hnueCCinFV_stack_13->SetBinContent(8,1.012886);
   hnueCCinFV_stack_13->SetBinContent(9,2.421602);
   hnueCCinFV_stack_13->SetBinContent(10,1.143066);
   hnueCCinFV_stack_13->SetBinContent(11,0.3315399);
   hnueCCinFV_stack_13->SetBinContent(12,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.678202);
   hnueCCinFV_stack_13->SetBinContent(15,0.962329);
   hnueCCinFV_stack_13->SetBinContent(16,1.268828);
   hnueCCinFV_stack_13->SetBinContent(17,0.2176802);
   hnueCCinFV_stack_13->SetBinContent(18,0.6361428);
   hnueCCinFV_stack_13->SetBinContent(19,0.6699017);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,13.47433);
   hnueCCinFV_stack_13->SetBinError(1,1.474355);
   hnueCCinFV_stack_13->SetBinError(2,0.2781975);
   hnueCCinFV_stack_13->SetBinError(3,0.8314997);
   hnueCCinFV_stack_13->SetBinError(4,0.4196513);
   hnueCCinFV_stack_13->SetBinError(5,0.3585277);
   hnueCCinFV_stack_13->SetBinError(6,0.4416112);
   hnueCCinFV_stack_13->SetBinError(7,0.3929602);
   hnueCCinFV_stack_13->SetBinError(8,0.5436636);
   hnueCCinFV_stack_13->SetBinError(9,1.381025);
   hnueCCinFV_stack_13->SetBinError(10,0.5752823);
   hnueCCinFV_stack_13->SetBinError(11,0.3266876);
   hnueCCinFV_stack_13->SetBinError(12,0.2770047);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.5201215);
   hnueCCinFV_stack_13->SetBinError(15,0.5601026);
   hnueCCinFV_stack_13->SetBinError(16,0.743831);
   hnueCCinFV_stack_13->SetBinError(17,0.2176802);
   hnueCCinFV_stack_13->SetBinError(18,0.3692352);
   hnueCCinFV_stack_13->SetBinError(19,0.3925627);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,2.618074);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmcerror__11->SetBinContent(1,630.5472);
   hmcerror__11->SetBinContent(2,142.8066);
   hmcerror__11->SetBinContent(3,165.3904);
   hmcerror__11->SetBinContent(4,157.384);
   hmcerror__11->SetBinContent(5,154.7331);
   hmcerror__11->SetBinContent(6,154.0431);
   hmcerror__11->SetBinContent(7,153.3935);
   hmcerror__11->SetBinContent(8,148.4989);
   hmcerror__11->SetBinContent(9,146.0173);
   hmcerror__11->SetBinContent(10,137.7591);
   hmcerror__11->SetBinContent(11,122.2358);
   hmcerror__11->SetBinContent(12,129.8346);
   hmcerror__11->SetBinContent(13,109.9903);
   hmcerror__11->SetBinContent(14,105.2686);
   hmcerror__11->SetBinContent(15,98.66599);
   hmcerror__11->SetBinContent(16,82.49223);
   hmcerror__11->SetBinContent(17,82.15423);
   hmcerror__11->SetBinContent(18,74.53208);
   hmcerror__11->SetBinContent(19,69.84373);
   hmcerror__11->SetBinContent(20,60.88461);
   hmcerror__11->SetBinContent(21,802.9847);
   hmcerror__11->SetBinError(1,141.435);
   hmcerror__11->SetBinError(2,41.84044);
   hmcerror__11->SetBinError(3,42.13137);
   hmcerror__11->SetBinError(4,39.6944);
   hmcerror__11->SetBinError(5,41.12093);
   hmcerror__11->SetBinError(6,45.11434);
   hmcerror__11->SetBinError(7,38.67541);
   hmcerror__11->SetBinError(8,43.30763);
   hmcerror__11->SetBinError(9,37.81334);
   hmcerror__11->SetBinError(10,42.78762);
   hmcerror__11->SetBinError(11,41.47324);
   hmcerror__11->SetBinError(12,34.1922);
   hmcerror__11->SetBinError(13,34.40972);
   hmcerror__11->SetBinError(14,26.5646);
   hmcerror__11->SetBinError(15,27.66746);
   hmcerror__11->SetBinError(16,26.23641);
   hmcerror__11->SetBinError(17,25.21446);
   hmcerror__11->SetBinError(18,22.39786);
   hmcerror__11->SetBinError(19,19.77121);
   hmcerror__11->SetBinError(20,17.31029);
   hmcerror__11->SetBinError(21,165.7216);
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
   
   Double_t _fx3013[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3013[20] = {
   662,
   145,
   155,
   178,
   157,
   186,
   150,
   139,
   139,
   148,
   113,
   113,
   90,
   108,
   96,
   95,
   93,
   70,
   76,
   64};
   Double_t _felx3013[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3013[20] = {
   25.72936,
   12.04159,
   12.4499,
   13.34166,
   12.52996,
   13.63818,
   12.24745,
   11.78983,
   11.78983,
   12.16553,
   10.63015,
   10.63015,
   9.6093,
   10.3923,
   9.9196,
   9.8686,
   9.7658,
   8.4925,
   8.8425,
   8.1273};
   Double_t _fehx3013[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3013[20] = {
   25.72936,
   12.04159,
   12.4499,
   13.34166,
   12.52996,
   13.63818,
   12.24745,
   11.78983,
   11.78983,
   12.16553,
   10.63015,
   10.63015,
   9.4079,
   10.3923,
   9.718,
   9.667,
   9.564,
   8.2902,
   8.6406,
   7.9246};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,55);
   Graph_Graph3013->SetMinimum(50.28543);
   Graph_Graph3013->SetMaximum(750.915);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.9/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2977.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 69.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 372.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 44.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 371.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  84.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  5.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  926.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  193.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 456.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 180.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 202.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 19.4","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3014[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3014[20] = {
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
   Double_t _felx3014[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3014[20] = {
   0.2243051,
   0.2929868,
   0.2547388,
   0.2522137,
   0.2657539,
   0.2928683,
   0.252132,
   0.2916359,
   0.2589647,
   0.3105973,
   0.3392888,
   0.2633521,
   0.3128433,
   0.2523507,
   0.2804153,
   0.318047,
   0.3069162,
   0.300513,
   0.2830779,
   0.2843131};
   Double_t _fehx3014[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3014[20] = {
   0.2243051,
   0.2929868,
   0.2547388,
   0.2522137,
   0.2657539,
   0.2928683,
   0.252132,
   0.2916359,
   0.2589647,
   0.3105973,
   0.3392888,
   0.2633521,
   0.3128433,
   0.2523507,
   0.2804153,
   0.318047,
   0.3069162,
   0.300513,
   0.2830779,
   0.2843131};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,55);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
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
   
   Double_t _fx3015[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3015[20] = {
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
   Double_t _felx3015[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3015[20] = {
   0.1990576,
   0.2211008,
   0.1985236,
   0.205837,
   0.2114247,
   0.2170893,
   0.1987427,
   0.206125,
   0.2069381,
   0.2154085,
   0.2126022,
   0.196497,
   0.1981642,
   0.2070206,
   0.208551,
   0.2158334,
   0.205397,
   0.1969344,
   0.212644,
   0.2070573};
   Double_t _fehx3015[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3015[20] = {
   0.1990576,
   0.2211008,
   0.1985236,
   0.205837,
   0.2114247,
   0.2170893,
   0.1987427,
   0.206125,
   0.2069381,
   0.2154085,
   0.2126022,
   0.196497,
   0.1981642,
   0.2070206,
   0.208551,
   0.2158334,
   0.205397,
   0.1969344,
   0.212644,
   0.2070573};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,55);
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
   
   Double_t _fx3016[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3016[20] = {
   1.049882,
   1.015359,
   0.9371763,
   1.130992,
   1.01465,
   1.207455,
   0.9778772,
   0.9360337,
   0.9519417,
   1.074339,
   0.9244426,
   0.8703383,
   0.8182542,
   1.025947,
   0.9729797,
   1.151624,
   1.132017,
   0.9391929,
   1.088144,
   1.051169};
   Double_t _felx3016[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3016[20] = {
   0.04080481,
   0.08432102,
   0.07527581,
   0.08477141,
   0.0809779,
   0.08853487,
   0.07984334,
   0.07939334,
   0.08074264,
   0.08831011,
   0.08696424,
   0.08187454,
   0.087365,
   0.09872182,
   0.1005372,
   0.1196307,
   0.1188715,
   0.1139442,
   0.1266041,
   0.1334869};
   Double_t _fehx3016[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3016[20] = {
   0.04080481,
   0.08432102,
   0.07527581,
   0.08477141,
   0.0809779,
   0.08853487,
   0.07984334,
   0.07939334,
   0.08074264,
   0.08831011,
   0.08696424,
   0.08187454,
   0.08553393,
   0.09872182,
   0.09849392,
   0.1171868,
   0.1164152,
   0.11123,
   0.1237133,
   0.1301577};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,55);
   Graph_Graph3016->SetMinimum(0.6743792);
   Graph_Graph3016->SetMaximum(1.352499);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_gap_low_all",20,0,50);

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
   TLine *line = new TLine(0,1,50,1);
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
