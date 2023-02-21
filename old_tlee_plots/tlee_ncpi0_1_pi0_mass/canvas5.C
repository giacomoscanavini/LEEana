#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sun Oct 23 14:05:12 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-61.53846,-7.14,451.2821,789.5337);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hmc__13->SetBinContent(1,92.92659);
   hmc__13->SetBinContent(2,104.6553);
   hmc__13->SetBinContent(3,120.0316);
   hmc__13->SetBinContent(4,101.5409);
   hmc__13->SetBinContent(5,121.0013);
   hmc__13->SetBinContent(6,141.4855);
   hmc__13->SetBinContent(7,153.1443);
   hmc__13->SetBinContent(8,166.6123);
   hmc__13->SetBinContent(9,198.431);
   hmc__13->SetBinContent(10,265.3531);
   hmc__13->SetBinContent(11,308.4661);
   hmc__13->SetBinContent(12,345.0218);
   hmc__13->SetBinContent(13,285.2846);
   hmc__13->SetBinContent(14,147.0225);
   hmc__13->SetBinContent(15,81.61736);
   hmc__13->SetBinContent(16,54.94913);
   hmc__13->SetBinContent(17,41.67979);
   hmc__13->SetBinContent(18,31.49061);
   hmc__13->SetBinContent(19,22.32336);
   hmc__13->SetBinContent(20,23.61936);
   hmc__13->SetBinContent(21,23.18011);
   hmc__13->SetBinContent(22,18.36148);
   hmc__13->SetBinContent(23,12.24888);
   hmc__13->SetBinContent(24,16.46988);
   hmc__13->SetBinContent(25,14.18409);
   hmc__13->SetBinContent(26,13.35041);
   hmc__13->SetBinContent(27,12.9721);
   hmc__13->SetBinContent(28,11.49092);
   hmc__13->SetBinContent(29,11.95128);
   hmc__13->SetBinContent(30,8.91565);
   hmc__13->SetBinContent(31,8.975363);
   hmc__13->SetBinContent(32,8.044006);
   hmc__13->SetBinContent(33,6.24428);
   hmc__13->SetBinContent(34,5.159378);
   hmc__13->SetBinContent(35,71.4405);
   hmc__13->SetBinError(1,29.71303);
   hmc__13->SetBinError(2,30.03594);
   hmc__13->SetBinError(3,37.40623);
   hmc__13->SetBinError(4,35.10756);
   hmc__13->SetBinError(5,37.94338);
   hmc__13->SetBinError(6,43.88944);
   hmc__13->SetBinError(7,53.65842);
   hmc__13->SetBinError(8,61.82888);
   hmc__13->SetBinError(9,76.7727);
   hmc__13->SetBinError(10,107.8009);
   hmc__13->SetBinError(11,130.8931);
   hmc__13->SetBinError(12,143.1873);
   hmc__13->SetBinError(13,132.0455);
   hmc__13->SetBinError(14,85.16006);
   hmc__13->SetBinError(15,47.95968);
   hmc__13->SetBinError(16,20.7573);
   hmc__13->SetBinError(17,18.83012);
   hmc__13->SetBinError(18,14.38368);
   hmc__13->SetBinError(19,16.66425);
   hmc__13->SetBinError(20,20.38324);
   hmc__13->SetBinError(21,14.17331);
   hmc__13->SetBinError(22,10.78532);
   hmc__13->SetBinError(23,9.14684);
   hmc__13->SetBinError(24,12.20669);
   hmc__13->SetBinError(25,11.49642);
   hmc__13->SetBinError(26,10.36764);
   hmc__13->SetBinError(27,9.828987);
   hmc__13->SetBinError(28,10.86914);
   hmc__13->SetBinError(29,9.777431);
   hmc__13->SetBinError(30,9.830462);
   hmc__13->SetBinError(31,12.18609);
   hmc__13->SetBinError(32,6.749455);
   hmc__13->SetBinError(33,6.818129);
   hmc__13->SetBinError(34,5.747215);
   hmc__13->SetBinError(35,46.67607);
   hmc__13->SetMinimum(-7.14);
   hmc__13->SetMaximum(749.7);
   hmc__13->SetEntries(3516.85);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",34,0,400);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(362.2729);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,2.91673);
   hbadmatch_stack_1->SetBinContent(2,3.911197);
   hbadmatch_stack_1->SetBinContent(3,4.139636);
   hbadmatch_stack_1->SetBinContent(4,2.310567);
   hbadmatch_stack_1->SetBinContent(5,3.696331);
   hbadmatch_stack_1->SetBinContent(6,4.464375);
   hbadmatch_stack_1->SetBinContent(7,4.074038);
   hbadmatch_stack_1->SetBinContent(8,3.695156);
   hbadmatch_stack_1->SetBinContent(9,6.335758);
   hbadmatch_stack_1->SetBinContent(10,6.073062);
   hbadmatch_stack_1->SetBinContent(11,7.555244);
   hbadmatch_stack_1->SetBinContent(12,5.017391);
   hbadmatch_stack_1->SetBinContent(13,4.425184);
   hbadmatch_stack_1->SetBinContent(14,1.480753);
   hbadmatch_stack_1->SetBinContent(15,3.866515);
   hbadmatch_stack_1->SetBinContent(16,2.431933);
   hbadmatch_stack_1->SetBinContent(17,0.5171255);
   hbadmatch_stack_1->SetBinContent(18,0.2013391);
   hbadmatch_stack_1->SetBinContent(19,0.6562108);
   hbadmatch_stack_1->SetBinContent(20,0.9827781);
   hbadmatch_stack_1->SetBinContent(21,0.4943182);
   hbadmatch_stack_1->SetBinContent(22,0.3934307);
   hbadmatch_stack_1->SetBinContent(23,1.718171);
   hbadmatch_stack_1->SetBinContent(24,0.5204914);
   hbadmatch_stack_1->SetBinContent(25,0.948718);
   hbadmatch_stack_1->SetBinContent(26,0.3917402);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinContent(28,0.6571898);
   hbadmatch_stack_1->SetBinContent(29,0.6722587);
   hbadmatch_stack_1->SetBinContent(32,0.2239027);
   hbadmatch_stack_1->SetBinContent(33,0.185722);
   hbadmatch_stack_1->SetBinContent(34,0.1236948);
   hbadmatch_stack_1->SetBinContent(35,0.5971297);
   hbadmatch_stack_1->SetBinError(1,0.9696604);
   hbadmatch_stack_1->SetBinError(2,1.003456);
   hbadmatch_stack_1->SetBinError(3,1.020556);
   hbadmatch_stack_1->SetBinError(4,0.792144);
   hbadmatch_stack_1->SetBinError(5,1.139159);
   hbadmatch_stack_1->SetBinError(6,1.219673);
   hbadmatch_stack_1->SetBinError(7,0.9368641);
   hbadmatch_stack_1->SetBinError(8,0.9711951);
   hbadmatch_stack_1->SetBinError(9,1.312008);
   hbadmatch_stack_1->SetBinError(10,1.270602);
   hbadmatch_stack_1->SetBinError(11,1.402582);
   hbadmatch_stack_1->SetBinError(12,1.182792);
   hbadmatch_stack_1->SetBinError(13,1.452993);
   hbadmatch_stack_1->SetBinError(14,0.5816961);
   hbadmatch_stack_1->SetBinError(15,2.056354);
   hbadmatch_stack_1->SetBinError(16,1.003796);
   hbadmatch_stack_1->SetBinError(17,0.3044574);
   hbadmatch_stack_1->SetBinError(18,0.1967697);
   hbadmatch_stack_1->SetBinError(19,0.3801179);
   hbadmatch_stack_1->SetBinError(20,0.5301044);
   hbadmatch_stack_1->SetBinError(21,0.2625629);
   hbadmatch_stack_1->SetBinError(22,0.2781975);
   hbadmatch_stack_1->SetBinError(23,0.8509215);
   hbadmatch_stack_1->SetBinError(24,0.3054644);
   hbadmatch_stack_1->SetBinError(25,0.6078974);
   hbadmatch_stack_1->SetBinError(26,0.2770047);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetBinError(28,0.482642);
   hbadmatch_stack_1->SetBinError(29,0.4753932);
   hbadmatch_stack_1->SetBinError(32,0.2239027);
   hbadmatch_stack_1->SetBinError(33,0.185722);
   hbadmatch_stack_1->SetBinError(34,0.1236948);
   hbadmatch_stack_1->SetBinError(35,0.3567713);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hext_stack_2->SetBinContent(1,8.395657);
   hext_stack_2->SetBinContent(2,16.72788);
   hext_stack_2->SetBinContent(3,17.90302);
   hext_stack_2->SetBinContent(4,11.33841);
   hext_stack_2->SetBinContent(5,11.82998);
   hext_stack_2->SetBinContent(6,17.23262);
   hext_stack_2->SetBinContent(7,18.32115);
   hext_stack_2->SetBinContent(8,21.83925);
   hext_stack_2->SetBinContent(9,12.45006);
   hext_stack_2->SetBinContent(10,29.99549);
   hext_stack_2->SetBinContent(11,16.82167);
   hext_stack_2->SetBinContent(12,23.58098);
   hext_stack_2->SetBinContent(13,32.41354);
   hext_stack_2->SetBinContent(14,8.029369);
   hext_stack_2->SetBinContent(15,6.049854);
   hext_stack_2->SetBinContent(16,4.06158);
   hext_stack_2->SetBinContent(17,4.192852);
   hext_stack_2->SetBinContent(18,1.939204);
   hext_stack_2->SetBinContent(19,0.4065989);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,0.8131978);
   hext_stack_2->SetBinContent(22,1.950793);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,1.048213);
   hext_stack_2->SetBinContent(28,0.7309963);
   hext_stack_2->SetBinContent(29,0.3243973);
   hext_stack_2->SetBinContent(32,0.7309963);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,5.572643);
   hext_stack_2->SetBinError(1,2.019506);
   hext_stack_2->SetBinError(2,2.798114);
   hext_stack_2->SetBinError(3,2.780424);
   hext_stack_2->SetBinError(4,2.212092);
   hext_stack_2->SetBinError(5,2.186879);
   hext_stack_2->SetBinError(6,3.074786);
   hext_stack_2->SetBinError(7,3.026618);
   hext_stack_2->SetBinError(8,3.424383);
   hext_stack_2->SetBinError(9,2.407844);
   hext_stack_2->SetBinError(10,3.927255);
   hext_stack_2->SetBinError(11,2.797043);
   hext_stack_2->SetBinError(12,3.431923);
   hext_stack_2->SetBinError(13,4.125394);
   hext_stack_2->SetBinError(14,1.74419);
   hext_stack_2->SetBinError(15,1.75513);
   hext_stack_2->SetBinError(16,1.232114);
   hext_stack_2->SetBinError(17,1.519199);
   hext_stack_2->SetBinError(18,0.912471);
   hext_stack_2->SetBinError(19,0.4065989);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,0.5750177);
   hext_stack_2->SetBinError(22,0.8755137);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,0.7595995);
   hext_stack_2->SetBinError(28,0.5201503);
   hext_stack_2->SetBinError(29,0.3243973);
   hext_stack_2->SetBinError(32,0.5201503);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,1.670027);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,0.5388689);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.9064405);
   hdirt_stack_3->SetBinContent(4,1.477041);
   hdirt_stack_3->SetBinContent(5,0.9842969);
   hdirt_stack_3->SetBinContent(6,2.282423);
   hdirt_stack_3->SetBinContent(7,1.363112);
   hdirt_stack_3->SetBinContent(8,0.7759784);
   hdirt_stack_3->SetBinContent(9,0.5868663);
   hdirt_stack_3->SetBinContent(10,1.487391);
   hdirt_stack_3->SetBinContent(11,1.741965);
   hdirt_stack_3->SetBinContent(12,1.132946);
   hdirt_stack_3->SetBinContent(13,1.496519);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.2516114);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinError(1,0.4239131);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.4791487);
   hdirt_stack_3->SetBinError(4,0.5420414);
   hdirt_stack_3->SetBinError(5,0.5081655);
   hdirt_stack_3->SetBinError(6,0.7881927);
   hdirt_stack_3->SetBinError(7,0.6912205);
   hdirt_stack_3->SetBinError(8,0.458477);
   hdirt_stack_3->SetBinError(9,0.3503208);
   hdirt_stack_3->SetBinError(10,1.013785);
   hdirt_stack_3->SetBinError(11,0.6577878);
   hdirt_stack_3->SetBinError(12,0.526479);
   hdirt_stack_3->SetBinError(13,0.5882408);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(18,0.2516114);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetBinError(27,0.1380715);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,9.304186);
   houtFV_stack_4->SetBinContent(2,10.9691);
   houtFV_stack_4->SetBinContent(3,14.39459);
   houtFV_stack_4->SetBinContent(4,9.30233);
   houtFV_stack_4->SetBinContent(5,9.162994);
   houtFV_stack_4->SetBinContent(6,11.7707);
   houtFV_stack_4->SetBinContent(7,13.45494);
   houtFV_stack_4->SetBinContent(8,11.48668);
   houtFV_stack_4->SetBinContent(9,13.03349);
   houtFV_stack_4->SetBinContent(10,14.65924);
   houtFV_stack_4->SetBinContent(11,16.48267);
   houtFV_stack_4->SetBinContent(12,18.63614);
   houtFV_stack_4->SetBinContent(13,16.04377);
   houtFV_stack_4->SetBinContent(14,9.413733);
   houtFV_stack_4->SetBinContent(15,4.949265);
   houtFV_stack_4->SetBinContent(16,3.091897);
   houtFV_stack_4->SetBinContent(17,1.509316);
   houtFV_stack_4->SetBinContent(18,1.56903);
   houtFV_stack_4->SetBinContent(19,1.405429);
   houtFV_stack_4->SetBinContent(20,0.656303);
   houtFV_stack_4->SetBinContent(21,0.4474834);
   houtFV_stack_4->SetBinContent(22,1.312521);
   houtFV_stack_4->SetBinContent(23,1.111302);
   houtFV_stack_4->SetBinContent(24,0.9534492);
   houtFV_stack_4->SetBinContent(25,0.3917402);
   houtFV_stack_4->SetBinContent(26,1.336574);
   houtFV_stack_4->SetBinContent(27,0.3934307);
   houtFV_stack_4->SetBinContent(28,1.399252);
   houtFV_stack_4->SetBinContent(29,0.7319179);
   houtFV_stack_4->SetBinContent(30,0.536893);
   houtFV_stack_4->SetBinContent(31,0.7643703);
   houtFV_stack_4->SetBinContent(32,0.1967154);
   houtFV_stack_4->SetBinContent(33,0.3917402);
   houtFV_stack_4->SetBinContent(34,4.828564e-09);
   houtFV_stack_4->SetBinContent(35,1.806412);
   houtFV_stack_4->SetBinError(1,1.535725);
   houtFV_stack_4->SetBinError(2,1.669984);
   houtFV_stack_4->SetBinError(3,1.940587);
   houtFV_stack_4->SetBinError(4,1.473368);
   houtFV_stack_4->SetBinError(5,1.455088);
   houtFV_stack_4->SetBinError(6,1.709739);
   houtFV_stack_4->SetBinError(7,1.940627);
   houtFV_stack_4->SetBinError(8,1.78934);
   houtFV_stack_4->SetBinError(9,1.753829);
   houtFV_stack_4->SetBinError(10,1.858278);
   houtFV_stack_4->SetBinError(11,1.992737);
   houtFV_stack_4->SetBinError(12,2.168895);
   houtFV_stack_4->SetBinError(13,2.096523);
   houtFV_stack_4->SetBinError(14,1.584556);
   houtFV_stack_4->SetBinError(15,1.06718);
   houtFV_stack_4->SetBinError(16,0.9271275);
   houtFV_stack_4->SetBinError(17,0.5878004);
   houtFV_stack_4->SetBinError(18,0.5904935);
   houtFV_stack_4->SetBinError(19,0.5409048);
   houtFV_stack_4->SetBinError(20,0.4103911);
   houtFV_stack_4->SetBinError(21,0.2834);
   houtFV_stack_4->SetBinError(22,0.5783978);
   houtFV_stack_4->SetBinError(23,0.5454622);
   houtFV_stack_4->SetBinError(24,0.4915467);
   houtFV_stack_4->SetBinError(25,0.2770047);
   houtFV_stack_4->SetBinError(26,0.6305274);
   houtFV_stack_4->SetBinError(27,0.2781975);
   houtFV_stack_4->SetBinError(28,0.6034147);
   houtFV_stack_4->SetBinError(29,0.438694);
   houtFV_stack_4->SetBinError(30,0.3929602);
   houtFV_stack_4->SetBinError(31,0.4643111);
   houtFV_stack_4->SetBinError(32,0.1967154);
   houtFV_stack_4->SetBinError(33,0.2770047);
   houtFV_stack_4->SetBinError(34,4.828564e-09);
   houtFV_stack_4->SetBinError(35,0.7195721);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1232231);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1130679);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1486449);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3261218);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4403017);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.04059216);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.04131896);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5556625);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.002939);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3290787);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2808709);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.8283185);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1600902);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1277333);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1499027);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.303546);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.1025252);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.1164432);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.05541593);
   hNCpi0inFVcoh_stack_5->SetBinContent(33,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.07115688);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.05974416);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1025136);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1333342);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2109767);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03065127);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03131428);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2345828);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3411632);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1748138);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1621168);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3720589);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.08054258);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06526503);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1156597);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1675438);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04920289);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.06854459);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.04315819);
   hNCpi0inFVcoh_stack_5->SetBinError(33,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.1974492);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2003044);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4446933);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1627898);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2780641);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4626596);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4369268);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.6445292);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5326118);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.012727);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.319485);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.422905);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.22065);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.224673);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.012103);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3430139);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2799981);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1563276);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.146128);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08976799);
   hNCpi0inFVqe_stack_6->SetBinContent(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1417359);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.08788056);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1722092);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08066481);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1589586);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1805002);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3117714);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.187749);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1598214);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2735193);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3391437);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3264285);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2390211);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3191252);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3063638);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1478023);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1373528);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1228798);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1290305);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06992631);
   hNCpi0inFVqe_stack_6->SetBinError(28,0.106717);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1296664);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,21.11844);
   hNCpi0inFVres_stack_7->SetBinContent(2,21.10335);
   hNCpi0inFVres_stack_7->SetBinContent(3,23.6256);
   hNCpi0inFVres_stack_7->SetBinContent(4,22.62463);
   hNCpi0inFVres_stack_7->SetBinContent(5,31.04809);
   hNCpi0inFVres_stack_7->SetBinContent(6,35.71766);
   hNCpi0inFVres_stack_7->SetBinContent(7,44.18499);
   hNCpi0inFVres_stack_7->SetBinContent(8,56.75382);
   hNCpi0inFVres_stack_7->SetBinContent(9,74.1853);
   hNCpi0inFVres_stack_7->SetBinContent(10,105.1055);
   hNCpi0inFVres_stack_7->SetBinContent(11,143.7359);
   hNCpi0inFVres_stack_7->SetBinContent(12,159.311);
   hNCpi0inFVres_stack_7->SetBinContent(13,115.9566);
   hNCpi0inFVres_stack_7->SetBinContent(14,57.00152);
   hNCpi0inFVres_stack_7->SetBinContent(15,27.6941);
   hNCpi0inFVres_stack_7->SetBinContent(16,16.12316);
   hNCpi0inFVres_stack_7->SetBinContent(17,11.40138);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.676366);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.944086);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.497842);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.196607);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.172918);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.308682);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.690154);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.925557);
   hNCpi0inFVres_stack_7->SetBinContent(26,1.629132);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.727813);
   hNCpi0inFVres_stack_7->SetBinContent(28,1.528709);
   hNCpi0inFVres_stack_7->SetBinContent(29,1.492344);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.7859579);
   hNCpi0inFVres_stack_7->SetBinContent(31,2.013228);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.6817895);
   hNCpi0inFVres_stack_7->SetBinContent(33,2.191412);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.6609505);
   hNCpi0inFVres_stack_7->SetBinContent(35,6.85735);
   hNCpi0inFVres_stack_7->SetBinError(1,1.397192);
   hNCpi0inFVres_stack_7->SetBinError(2,1.545432);
   hNCpi0inFVres_stack_7->SetBinError(3,1.606329);
   hNCpi0inFVres_stack_7->SetBinError(4,1.417085);
   hNCpi0inFVres_stack_7->SetBinError(5,1.739506);
   hNCpi0inFVres_stack_7->SetBinError(6,1.856554);
   hNCpi0inFVres_stack_7->SetBinError(7,2.127986);
   hNCpi0inFVres_stack_7->SetBinError(8,2.348086);
   hNCpi0inFVres_stack_7->SetBinError(9,2.636305);
   hNCpi0inFVres_stack_7->SetBinError(10,3.023403);
   hNCpi0inFVres_stack_7->SetBinError(11,3.518257);
   hNCpi0inFVres_stack_7->SetBinError(12,3.669792);
   hNCpi0inFVres_stack_7->SetBinError(13,3.140689);
   hNCpi0inFVres_stack_7->SetBinError(14,2.321205);
   hNCpi0inFVres_stack_7->SetBinError(15,1.615672);
   hNCpi0inFVres_stack_7->SetBinError(16,1.440167);
   hNCpi0inFVres_stack_7->SetBinError(17,1.240473);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6908967);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6962196);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5448305);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7292052);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5916765);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4306443);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5605083);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6610079);
   hNCpi0inFVres_stack_7->SetBinError(26,0.4295299);
   hNCpi0inFVres_stack_7->SetBinError(27,0.4008433);
   hNCpi0inFVres_stack_7->SetBinError(28,0.3911541);
   hNCpi0inFVres_stack_7->SetBinError(29,0.3384245);
   hNCpi0inFVres_stack_7->SetBinError(30,0.2252755);
   hNCpi0inFVres_stack_7->SetBinError(31,0.6192372);
   hNCpi0inFVres_stack_7->SetBinError(32,0.2571913);
   hNCpi0inFVres_stack_7->SetBinError(33,0.7971133);
   hNCpi0inFVres_stack_7->SetBinError(34,0.2487351);
   hNCpi0inFVres_stack_7->SetBinError(35,0.9475058);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.595664);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.196568);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.94771);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.291135);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.43848);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.69904);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.39954);
   hNCpi0inFVdis_stack_8->SetBinContent(8,10.88723);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.27678);
   hNCpi0inFVdis_stack_8->SetBinContent(10,19.55342);
   hNCpi0inFVdis_stack_8->SetBinContent(11,27.79348);
   hNCpi0inFVdis_stack_8->SetBinContent(12,33.21581);
   hNCpi0inFVdis_stack_8->SetBinContent(13,25.98808);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.89662);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.261214);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.144489);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.247413);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.964286);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.634498);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.766897);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.172159);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.262812);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.9004524);
   hNCpi0inFVdis_stack_8->SetBinContent(24,1.157476);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.324112);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.5233771);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.9796149);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.9811597);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.423682);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.023544);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.3932073);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.9838107);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.08666935);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.4695168);
   hNCpi0inFVdis_stack_8->SetBinContent(35,4.618704);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7972581);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8093063);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.845885);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7049466);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.091903);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8983497);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.246341);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9316924);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.434669);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.4323);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.716127);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.071209);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.594886);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.338644);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.8732022);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8872875);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8151842);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5408441);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4088948);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5204933);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3081677);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3363816);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2903642);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4358896);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.149243);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2259275);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.3489555);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4676594);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.5076617);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4859545);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.1911076);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.3594605);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.05009727);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.1973075);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.9489959);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05546193);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05228499);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.3418667);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.2007022);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02894049);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01972888);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03202375);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02765616);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1853775);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1328217);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,9.896813);
   hCCpi0inFV_stack_10->SetBinContent(2,10.26419);
   hCCpi0inFV_stack_10->SetBinContent(3,12.41758);
   hCCpi0inFV_stack_10->SetBinContent(4,14.17423);
   hCCpi0inFV_stack_10->SetBinContent(5,13.68568);
   hCCpi0inFV_stack_10->SetBinContent(6,22.40269);
   hCCpi0inFV_stack_10->SetBinContent(7,23.15681);
   hCCpi0inFV_stack_10->SetBinContent(8,25.91964);
   hCCpi0inFV_stack_10->SetBinContent(9,36.8761);
   hCCpi0inFV_stack_10->SetBinContent(10,44.96772);
   hCCpi0inFV_stack_10->SetBinContent(11,49.17036);
   hCCpi0inFV_stack_10->SetBinContent(12,64.38435);
   hCCpi0inFV_stack_10->SetBinContent(13,51.8988);
   hCCpi0inFV_stack_10->SetBinContent(14,28.31602);
   hCCpi0inFV_stack_10->SetBinContent(15,14.7263);
   hCCpi0inFV_stack_10->SetBinContent(16,11.45033);
   hCCpi0inFV_stack_10->SetBinContent(17,10.2082);
   hCCpi0inFV_stack_10->SetBinContent(18,5.510067);
   hCCpi0inFV_stack_10->SetBinContent(19,4.77368);
   hCCpi0inFV_stack_10->SetBinContent(20,5.723106);
   hCCpi0inFV_stack_10->SetBinContent(21,5.10906);
   hCCpi0inFV_stack_10->SetBinContent(22,5.555502);
   hCCpi0inFV_stack_10->SetBinContent(23,2.587494);
   hCCpi0inFV_stack_10->SetBinContent(24,4.596034);
   hCCpi0inFV_stack_10->SetBinContent(25,3.857995);
   hCCpi0inFV_stack_10->SetBinContent(26,4.061786);
   hCCpi0inFV_stack_10->SetBinContent(27,2.859457);
   hCCpi0inFV_stack_10->SetBinContent(28,1.895524);
   hCCpi0inFV_stack_10->SetBinContent(29,3.072824);
   hCCpi0inFV_stack_10->SetBinContent(30,2.487807);
   hCCpi0inFV_stack_10->SetBinContent(31,1.82364);
   hCCpi0inFV_stack_10->SetBinContent(32,1.322064);
   hCCpi0inFV_stack_10->SetBinContent(33,0.9768147);
   hCCpi0inFV_stack_10->SetBinContent(34,1.103932);
   hCCpi0inFV_stack_10->SetBinContent(35,14.65973);
   hCCpi0inFV_stack_10->SetBinError(1,1.628463);
   hCCpi0inFV_stack_10->SetBinError(2,1.654951);
   hCCpi0inFV_stack_10->SetBinError(3,1.845506);
   hCCpi0inFV_stack_10->SetBinError(4,1.846148);
   hCCpi0inFV_stack_10->SetBinError(5,1.808561);
   hCCpi0inFV_stack_10->SetBinError(6,2.352981);
   hCCpi0inFV_stack_10->SetBinError(7,2.421389);
   hCCpi0inFV_stack_10->SetBinError(8,2.57304);
   hCCpi0inFV_stack_10->SetBinError(9,3.028407);
   hCCpi0inFV_stack_10->SetBinError(10,3.386911);
   hCCpi0inFV_stack_10->SetBinError(11,3.53162);
   hCCpi0inFV_stack_10->SetBinError(12,4.049702);
   hCCpi0inFV_stack_10->SetBinError(13,3.537188);
   hCCpi0inFV_stack_10->SetBinError(14,2.690312);
   hCCpi0inFV_stack_10->SetBinError(15,1.940907);
   hCCpi0inFV_stack_10->SetBinError(16,1.697386);
   hCCpi0inFV_stack_10->SetBinError(17,1.593736);
   hCCpi0inFV_stack_10->SetBinError(18,1.171391);
   hCCpi0inFV_stack_10->SetBinError(19,1.128384);
   hCCpi0inFV_stack_10->SetBinError(20,1.126323);
   hCCpi0inFV_stack_10->SetBinError(21,1.096928);
   hCCpi0inFV_stack_10->SetBinError(22,1.256543);
   hCCpi0inFV_stack_10->SetBinError(23,0.8087577);
   hCCpi0inFV_stack_10->SetBinError(24,1.058169);
   hCCpi0inFV_stack_10->SetBinError(25,1.00081);
   hCCpi0inFV_stack_10->SetBinError(26,1.051675);
   hCCpi0inFV_stack_10->SetBinError(27,0.8649686);
   hCCpi0inFV_stack_10->SetBinError(28,0.6918704);
   hCCpi0inFV_stack_10->SetBinError(29,0.9205954);
   hCCpi0inFV_stack_10->SetBinError(30,0.7717812);
   hCCpi0inFV_stack_10->SetBinError(31,0.7701405);
   hCCpi0inFV_stack_10->SetBinError(32,0.5554667);
   hCCpi0inFV_stack_10->SetBinError(33,0.4368475);
   hCCpi0inFV_stack_10->SetBinError(34,0.5671968);
   hCCpi0inFV_stack_10->SetBinError(35,1.912859);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,12.07026);
   hNCinFV_stack_11->SetBinContent(2,10.61289);
   hNCinFV_stack_11->SetBinContent(3,9.485609);
   hNCinFV_stack_11->SetBinContent(4,11.86302);
   hNCinFV_stack_11->SetBinContent(5,15.45413);
   hNCinFV_stack_11->SetBinContent(6,10.00179);
   hNCinFV_stack_11->SetBinContent(7,12.83396);
   hNCinFV_stack_11->SetBinContent(8,11.1867);
   hNCinFV_stack_11->SetBinContent(9,14.34968);
   hNCinFV_stack_11->SetBinContent(10,15.06108);
   hNCinFV_stack_11->SetBinContent(11,20.562);
   hNCinFV_stack_11->SetBinContent(12,13.33553);
   hNCinFV_stack_11->SetBinContent(13,17.3909);
   hNCinFV_stack_11->SetBinContent(14,10.58444);
   hNCinFV_stack_11->SetBinContent(15,8.144485);
   hNCinFV_stack_11->SetBinContent(16,5.568042);
   hNCinFV_stack_11->SetBinContent(17,5.540123);
   hNCinFV_stack_11->SetBinContent(18,6.221014);
   hNCinFV_stack_11->SetBinContent(19,5.110819);
   hNCinFV_stack_11->SetBinContent(20,5.593864);
   hNCinFV_stack_11->SetBinContent(21,6.500337);
   hNCinFV_stack_11->SetBinContent(22,2.097575);
   hNCinFV_stack_11->SetBinContent(23,2.200049);
   hNCinFV_stack_11->SetBinContent(24,4.028104);
   hNCinFV_stack_11->SetBinContent(25,2.481781);
   hNCinFV_stack_11->SetBinContent(26,1.55942);
   hNCinFV_stack_11->SetBinContent(27,4.293745);
   hNCinFV_stack_11->SetBinContent(28,2.169858);
   hNCinFV_stack_11->SetBinContent(29,2.218045);
   hNCinFV_stack_11->SetBinContent(30,2.200549);
   hNCinFV_stack_11->SetBinContent(31,2.805698);
   hNCinFV_stack_11->SetBinContent(32,2.472364);
   hNCinFV_stack_11->SetBinContent(33,1.560268);
   hNCinFV_stack_11->SetBinContent(34,2.476304);
   hNCinFV_stack_11->SetBinContent(35,23.38073);
   hNCinFV_stack_11->SetBinError(1,1.803142);
   hNCinFV_stack_11->SetBinError(2,1.660495);
   hNCinFV_stack_11->SetBinError(3,1.564173);
   hNCinFV_stack_11->SetBinError(4,1.766442);
   hNCinFV_stack_11->SetBinError(5,2.037503);
   hNCinFV_stack_11->SetBinError(6,1.770506);
   hNCinFV_stack_11->SetBinError(7,1.858155);
   hNCinFV_stack_11->SetBinError(8,1.663852);
   hNCinFV_stack_11->SetBinError(9,1.907293);
   hNCinFV_stack_11->SetBinError(10,1.979434);
   hNCinFV_stack_11->SetBinError(11,2.620907);
   hNCinFV_stack_11->SetBinError(12,1.943425);
   hNCinFV_stack_11->SetBinError(13,2.366998);
   hNCinFV_stack_11->SetBinError(14,1.708615);
   hNCinFV_stack_11->SetBinError(15,1.500921);
   hNCinFV_stack_11->SetBinError(16,1.585478);
   hNCinFV_stack_11->SetBinError(17,1.384345);
   hNCinFV_stack_11->SetBinError(18,1.568157);
   hNCinFV_stack_11->SetBinError(19,1.488525);
   hNCinFV_stack_11->SetBinError(20,1.418269);
   hNCinFV_stack_11->SetBinError(21,1.631759);
   hNCinFV_stack_11->SetBinError(22,1.060251);
   hNCinFV_stack_11->SetBinError(23,0.6936562);
   hNCinFV_stack_11->SetBinError(24,1.119266);
   hNCinFV_stack_11->SetBinError(25,0.9531496);
   hNCinFV_stack_11->SetBinError(26,0.5177188);
   hNCinFV_stack_11->SetBinError(27,1.17379);
   hNCinFV_stack_11->SetBinError(28,0.7297685);
   hNCinFV_stack_11->SetBinError(29,0.767312);
   hNCinFV_stack_11->SetBinError(30,0.7999802);
   hNCinFV_stack_11->SetBinError(31,1.040113);
   hNCinFV_stack_11->SetBinError(32,1.02823);
   hNCinFV_stack_11->SetBinError(33,0.6617907);
   hNCinFV_stack_11->SetBinError(34,1.296398);
   hNCinFV_stack_11->SetBinError(35,2.742828);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,21.48901);
   hnumuCCinFV_stack_12->SetBinContent(2,23.09638);
   hnumuCCinFV_stack_12->SetBinContent(3,29.52887);
   hnumuCCinFV_stack_12->SetBinContent(4,22.18647);
   hnumuCCinFV_stack_12->SetBinContent(5,24.57123);
   hnumuCCinFV_stack_12->SetBinContent(6,28.56083);
   hnumuCCinFV_stack_12->SetBinContent(7,22.83148);
   hnumuCCinFV_stack_12->SetBinContent(8,22.38298);
   hnumuCCinFV_stack_12->SetBinContent(9,21.57154);
   hnumuCCinFV_stack_12->SetBinContent(10,25.99521);
   hnumuCCinFV_stack_12->SetBinContent(11,21.36858);
   hnumuCCinFV_stack_12->SetBinContent(12,22.25778);
   hnumuCCinFV_stack_12->SetBinContent(13,17.67073);
   hnumuCCinFV_stack_12->SetBinContent(14,14.2669);
   hnumuCCinFV_stack_12->SetBinContent(15,9.009557);
   hnumuCCinFV_stack_12->SetBinContent(16,6.494152);
   hnumuCCinFV_stack_12->SetBinContent(17,4.799337);
   hnumuCCinFV_stack_12->SetBinContent(18,5.153574);
   hnumuCCinFV_stack_12->SetBinContent(19,1.948364);
   hnumuCCinFV_stack_12->SetBinContent(20,4.275827);
   hnumuCCinFV_stack_12->SetBinContent(21,3.834682);
   hnumuCCinFV_stack_12->SetBinContent(22,1.816808);
   hnumuCCinFV_stack_12->SetBinContent(23,0.9818863);
   hnumuCCinFV_stack_12->SetBinContent(24,2.524174);
   hnumuCCinFV_stack_12->SetBinContent(25,2.185007);
   hnumuCCinFV_stack_12->SetBinContent(26,2.800168);
   hnumuCCinFV_stack_12->SetBinContent(27,2.383255);
   hnumuCCinFV_stack_12->SetBinContent(28,1.966103);
   hnumuCCinFV_stack_12->SetBinContent(29,1.999038);
   hnumuCCinFV_stack_12->SetBinContent(30,1.739164);
   hnumuCCinFV_stack_12->SetBinContent(31,1.175221);
   hnumuCCinFV_stack_12->SetBinContent(32,1.432364);
   hnumuCCinFV_stack_12->SetBinContent(33,0.4323627);
   hnumuCCinFV_stack_12->SetBinContent(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(35,11.77953);
   hnumuCCinFV_stack_12->SetBinError(1,2.592695);
   hnumuCCinFV_stack_12->SetBinError(2,2.944163);
   hnumuCCinFV_stack_12->SetBinError(3,3.438831);
   hnumuCCinFV_stack_12->SetBinError(4,2.690586);
   hnumuCCinFV_stack_12->SetBinError(5,3.267863);
   hnumuCCinFV_stack_12->SetBinError(6,3.156695);
   hnumuCCinFV_stack_12->SetBinError(7,2.771533);
   hnumuCCinFV_stack_12->SetBinError(8,2.543306);
   hnumuCCinFV_stack_12->SetBinError(9,2.511114);
   hnumuCCinFV_stack_12->SetBinError(10,2.827444);
   hnumuCCinFV_stack_12->SetBinError(11,2.54005);
   hnumuCCinFV_stack_12->SetBinError(12,2.700955);
   hnumuCCinFV_stack_12->SetBinError(13,3.356256);
   hnumuCCinFV_stack_12->SetBinError(14,2.052332);
   hnumuCCinFV_stack_12->SetBinError(15,1.747471);
   hnumuCCinFV_stack_12->SetBinError(16,1.294781);
   hnumuCCinFV_stack_12->SetBinError(17,1.143853);
   hnumuCCinFV_stack_12->SetBinError(18,1.133183);
   hnumuCCinFV_stack_12->SetBinError(19,0.6638611);
   hnumuCCinFV_stack_12->SetBinError(20,1.174386);
   hnumuCCinFV_stack_12->SetBinError(21,1.126181);
   hnumuCCinFV_stack_12->SetBinError(22,0.6615181);
   hnumuCCinFV_stack_12->SetBinError(23,0.4391155);
   hnumuCCinFV_stack_12->SetBinError(24,0.8302962);
   hnumuCCinFV_stack_12->SetBinError(25,1.435044);
   hnumuCCinFV_stack_12->SetBinError(26,0.9120287);
   hnumuCCinFV_stack_12->SetBinError(27,0.820582);
   hnumuCCinFV_stack_12->SetBinError(28,0.6701665);
   hnumuCCinFV_stack_12->SetBinError(29,0.7339349);
   hnumuCCinFV_stack_12->SetBinError(30,0.6292747);
   hnumuCCinFV_stack_12->SetBinError(31,0.4797863);
   hnumuCCinFV_stack_12->SetBinError(32,0.5439802);
   hnumuCCinFV_stack_12->SetBinError(33,0.3069635);
   hnumuCCinFV_stack_12->SetBinError(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(35,1.689003);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,1.277434);
   hnueCCinFV_stack_13->SetBinContent(2,1.035739);
   hnueCCinFV_stack_13->SetBinContent(3,1.352296);
   hnueCCinFV_stack_13->SetBinContent(4,0.3688623);
   hnueCCinFV_stack_13->SetBinContent(5,1.227112);
   hnueCCinFV_stack_13->SetBinContent(6,0.8503706);
   hnueCCinFV_stack_13->SetBinContent(7,0.8201842);
   hnueCCinFV_stack_13->SetBinContent(8,0.56212);
   hnueCCinFV_stack_13->SetBinContent(9,1.694324);
   hnueCCinFV_stack_13->SetBinContent(10,0.7541375);
   hnueCCinFV_stack_13->SetBinContent(11,1.188627);
   hnueCCinFV_stack_13->SetBinContent(12,1.900221);
   hnueCCinFV_stack_13->SetBinContent(13,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.4074658);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,1.819894);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(21,0.5940435);
   hnueCCinFV_stack_13->SetBinContent(22,0.680723);
   hnueCCinFV_stack_13->SetBinContent(35,1.944905);
   hnueCCinFV_stack_13->SetBinError(1,0.5928896);
   hnueCCinFV_stack_13->SetBinError(2,0.5279862);
   hnueCCinFV_stack_13->SetBinError(3,0.6249653);
   hnueCCinFV_stack_13->SetBinError(4,0.3688623);
   hnueCCinFV_stack_13->SetBinError(5,0.5610045);
   hnueCCinFV_stack_13->SetBinError(6,0.4329789);
   hnueCCinFV_stack_13->SetBinError(7,0.4942593);
   hnueCCinFV_stack_13->SetBinError(8,0.4149909);
   hnueCCinFV_stack_13->SetBinError(9,1.222319);
   hnueCCinFV_stack_13->SetBinError(10,0.5358018);
   hnueCCinFV_stack_13->SetBinError(11,0.545499);
   hnueCCinFV_stack_13->SetBinError(12,0.8591063);
   hnueCCinFV_stack_13->SetBinError(13,0.3387718);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.2882927);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,1.589502);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.2770047);
   hnueCCinFV_stack_13->SetBinError(21,0.4244628);
   hnueCCinFV_stack_13->SetBinError(22,0.4810839);
   hnueCCinFV_stack_13->SetBinError(35,0.6618999);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);
   hmcerror__14->SetBinContent(1,92.92659);
   hmcerror__14->SetBinContent(2,104.6553);
   hmcerror__14->SetBinContent(3,120.0316);
   hmcerror__14->SetBinContent(4,101.5409);
   hmcerror__14->SetBinContent(5,121.0013);
   hmcerror__14->SetBinContent(6,141.4855);
   hmcerror__14->SetBinContent(7,153.1443);
   hmcerror__14->SetBinContent(8,166.6123);
   hmcerror__14->SetBinContent(9,198.431);
   hmcerror__14->SetBinContent(10,265.3531);
   hmcerror__14->SetBinContent(11,308.4661);
   hmcerror__14->SetBinContent(12,345.0218);
   hmcerror__14->SetBinContent(13,285.2846);
   hmcerror__14->SetBinContent(14,147.0225);
   hmcerror__14->SetBinContent(15,81.61736);
   hmcerror__14->SetBinContent(16,54.94913);
   hmcerror__14->SetBinContent(17,41.67979);
   hmcerror__14->SetBinContent(18,31.49061);
   hmcerror__14->SetBinContent(19,22.32336);
   hmcerror__14->SetBinContent(20,23.61936);
   hmcerror__14->SetBinContent(21,23.18011);
   hmcerror__14->SetBinContent(22,18.36148);
   hmcerror__14->SetBinContent(23,12.24888);
   hmcerror__14->SetBinContent(24,16.46988);
   hmcerror__14->SetBinContent(25,14.18409);
   hmcerror__14->SetBinContent(26,13.35041);
   hmcerror__14->SetBinContent(27,12.9721);
   hmcerror__14->SetBinContent(28,11.49092);
   hmcerror__14->SetBinContent(29,11.95128);
   hmcerror__14->SetBinContent(30,8.91565);
   hmcerror__14->SetBinContent(31,8.975363);
   hmcerror__14->SetBinContent(32,8.044006);
   hmcerror__14->SetBinContent(33,6.24428);
   hmcerror__14->SetBinContent(34,5.159378);
   hmcerror__14->SetBinContent(35,71.4405);
   hmcerror__14->SetBinError(1,29.71303);
   hmcerror__14->SetBinError(2,30.03594);
   hmcerror__14->SetBinError(3,37.40623);
   hmcerror__14->SetBinError(4,35.10756);
   hmcerror__14->SetBinError(5,37.94338);
   hmcerror__14->SetBinError(6,43.88944);
   hmcerror__14->SetBinError(7,53.65842);
   hmcerror__14->SetBinError(8,61.82888);
   hmcerror__14->SetBinError(9,76.7727);
   hmcerror__14->SetBinError(10,107.8009);
   hmcerror__14->SetBinError(11,130.8931);
   hmcerror__14->SetBinError(12,143.1873);
   hmcerror__14->SetBinError(13,132.0455);
   hmcerror__14->SetBinError(14,85.16006);
   hmcerror__14->SetBinError(15,47.95968);
   hmcerror__14->SetBinError(16,20.7573);
   hmcerror__14->SetBinError(17,18.83012);
   hmcerror__14->SetBinError(18,14.38368);
   hmcerror__14->SetBinError(19,16.66425);
   hmcerror__14->SetBinError(20,20.38324);
   hmcerror__14->SetBinError(21,14.17331);
   hmcerror__14->SetBinError(22,10.78532);
   hmcerror__14->SetBinError(23,9.14684);
   hmcerror__14->SetBinError(24,12.20669);
   hmcerror__14->SetBinError(25,11.49642);
   hmcerror__14->SetBinError(26,10.36764);
   hmcerror__14->SetBinError(27,9.828987);
   hmcerror__14->SetBinError(28,10.86914);
   hmcerror__14->SetBinError(29,9.777431);
   hmcerror__14->SetBinError(30,9.830462);
   hmcerror__14->SetBinError(31,12.18609);
   hmcerror__14->SetBinError(32,6.749455);
   hmcerror__14->SetBinError(33,6.818129);
   hmcerror__14->SetBinError(34,5.747215);
   hmcerror__14->SetBinError(35,46.67607);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3017[34] = {
   85,
   88,
   97,
   103,
   108,
   113,
   158,
   146,
   177,
   262,
   283,
   357,
   224,
   99,
   65,
   25,
   24,
   31,
   17,
   17,
   12,
   19,
   11,
   10,
   8,
   6,
   5,
   15,
   3,
   6,
   4,
   4,
   4,
   3};
   Double_t _felx3017[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3017[34] = {
   9.3428,
   9.5036,
   9.9704,
   10.14889,
   10.3923,
   10.63015,
   12.56981,
   12.08305,
   13.30413,
   16.18641,
   16.8226,
   18.89444,
   14.96663,
   10.0712,
   8.1893,
   5.1474,
   5.0476,
   5.7094,
   4.2835,
   4.2835,
   3.64022,
   4.5151,
   3.4975,
   3.34883,
   3.0307,
   2.67925,
   2.48995,
   4.0385,
   2.143368,
   2.67925,
   2.29683,
   2.29683,
   2.29683,
   2.143368};
   Double_t _fehx3017[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3017[34] = {
   9.1411,
   9.3021,
   9.769,
   10.14889,
   10.3923,
   10.63015,
   12.56981,
   12.08305,
   13.30413,
   16.18641,
   16.8226,
   18.89444,
   14.96663,
   9.87,
   7.9866,
   4.9374,
   4.837,
   5.5017,
   4.0673,
   4.0673,
   3.4155,
   4.3011,
   3.27,
   3.1179,
   2.7896,
   2.41858,
   2.21064,
   3.8197,
   1.72422,
   2.41858,
   1.98186,
   1.98186,
   1.98186,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,440);
   Graph_Graph3017->SetMinimum(0.7709688);
   Graph_Graph3017->SetMaximum(413.3982);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.29","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.9/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2589.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.3","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 271.3","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 201.3","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.3","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1010.8","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  230.9","F");

   ci = 1493;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 501.2","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 260.0","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 374.9","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 18.4","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-61.6,-0.5333333,451.7333,2.133333);
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
   
   Double_t _fx3018[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3018[34] = {
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
   Double_t _felx3018[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3018[34] = {
   0.3197473,
   0.2869986,
   0.3116366,
   0.3457481,
   0.3135783,
   0.3102045,
   0.3503782,
   0.3710943,
   0.3868987,
   0.4062544,
   0.4243353,
   0.4150094,
   0.4628553,
   0.5792316,
   0.5876162,
   0.3777549,
   0.4517805,
   0.4567607,
   0.7464937,
   0.8629888,
   0.6114426,
   0.5873887,
   0.7467492,
   0.7411522,
   0.810515,
   0.7765786,
   0.7577019,
   0.9458891,
   0.8181076,
   1.102607,
   1.357727,
   0.8390663,
   1.0919,
   1.113936};
   Double_t _fehx3018[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3018[34] = {
   0.3197473,
   0.2869986,
   0.3116366,
   0.3457481,
   0.3135783,
   0.3102045,
   0.3503782,
   0.3710943,
   0.3868987,
   0.4062544,
   0.4243353,
   0.4150094,
   0.4628553,
   0.5792316,
   0.5876162,
   0.3777549,
   0.4517805,
   0.4567607,
   0.7464937,
   0.8629888,
   0.6114426,
   0.5873887,
   0.7467492,
   0.7411522,
   0.810515,
   0.7765786,
   0.7577019,
   0.9458891,
   0.8181076,
   1.102607,
   1.357727,
   0.8390663,
   1.0919,
   1.113936};
   grae = new TGraphAsymmErrors(34,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,440);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
   Graph_Graph3018->GetXaxis()->SetRange(1,91);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3019[34] = {
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
   Double_t _felx3019[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3019[34] = {
   0.2398548,
   0.2124434,
   0.2014423,
   0.2521857,
   0.2626352,
   0.2657873,
   0.291153,
   0.3320006,
   0.3725987,
   0.3855767,
   0.4151493,
   0.401387,
   0.3721036,
   0.3511052,
   0.3036625,
   0.2682962,
   0.2693535,
   0.2859498,
   0.288923,
   0.2581242,
   0.2512957,
   0.2412419,
   0.3474463,
   0.2774462,
   0.286521,
   0.281806,
   0.2967946,
   0.2929838,
   0.3449774,
   0.3661968,
   0.357935,
   0.3152375,
   0.3403298,
   0.4671372};
   Double_t _fehx3019[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3019[34] = {
   0.2398548,
   0.2124434,
   0.2014423,
   0.2521857,
   0.2626352,
   0.2657873,
   0.291153,
   0.3320006,
   0.3725987,
   0.3855767,
   0.4151493,
   0.401387,
   0.3721036,
   0.3511052,
   0.3036625,
   0.2682962,
   0.2693535,
   0.2859498,
   0.288923,
   0.2581242,
   0.2512957,
   0.2412419,
   0.3474463,
   0.2774462,
   0.286521,
   0.281806,
   0.2967946,
   0.2929838,
   0.3449774,
   0.3661968,
   0.357935,
   0.3152375,
   0.3403298,
   0.4671372};
   grae = new TGraphAsymmErrors(34,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,440);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(1,91);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[34] = {
   5.882353,
   17.64706,
   29.41176,
   41.17647,
   52.94118,
   64.70588,
   76.47059,
   88.23529,
   100,
   111.7647,
   123.5294,
   135.2941,
   147.0588,
   158.8235,
   170.5882,
   182.3529,
   194.1176,
   205.8824,
   217.6471,
   229.4118,
   241.1765,
   252.9412,
   264.7059,
   276.4706,
   288.2353,
   300,
   311.7647,
   323.5294,
   335.2941,
   347.0588,
   358.8235,
   370.5882,
   382.3529,
   394.1176};
   Double_t _fy3020[34] = {
   0.9147005,
   0.8408553,
   0.8081207,
   1.01437,
   0.8925524,
   0.7986683,
   1.031707,
   0.8762857,
   0.8919977,
   0.9873638,
   0.9174428,
   1.034717,
   0.7851807,
   0.6733664,
   0.7963992,
   0.4549662,
   0.5758186,
   0.9844204,
   0.761534,
   0.7197487,
   0.5176851,
   1.034775,
   0.8980415,
   0.6071689,
   0.5640121,
   0.4494244,
   0.3854425,
   1.305378,
   0.2510192,
   0.6729739,
   0.4456644,
   0.4972646,
   0.6405862,
   0.5814655};
   Double_t _felx3020[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fely3020[34] = {
   0.1005396,
   0.09080855,
   0.08306481,
   0.09994883,
   0.0858859,
   0.07513239,
   0.08207819,
   0.07252192,
   0.06704665,
   0.06099954,
   0.05453631,
   0.05476304,
   0.05246209,
   0.06850109,
   0.1003377,
   0.09367573,
   0.1211042,
   0.1813048,
   0.1918842,
   0.1813555,
   0.1570406,
   0.2459007,
   0.2855364,
   0.2033306,
   0.2136689,
   0.2006867,
   0.1919465,
   0.3514513,
   0.1793422,
   0.3005109,
   0.2559039,
   0.2855331,
   0.3678294,
   0.4154315};
   Double_t _fehx3020[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353};
   Double_t _fehy3020[34] = {
   0.09836905,
   0.08888318,
   0.08138692,
   0.09994883,
   0.0858859,
   0.07513239,
   0.08207819,
   0.07252192,
   0.06704665,
   0.06099954,
   0.05453631,
   0.05476304,
   0.05246209,
   0.06713259,
   0.09785418,
   0.08985401,
   0.1160514,
   0.1747092,
   0.1821993,
   0.172202,
   0.1473461,
   0.2342459,
   0.2669632,
   0.1893092,
   0.196671,
   0.1811615,
   0.1704149,
   0.3324101,
   0.1442708,
   0.2712735,
   0.2208111,
   0.2463772,
   0.3173881,
   0.3341915};
   grae = new TGraphAsymmErrors(34,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,440);
   Graph_Graph3020->SetMinimum(0.06450933);
   Graph_Graph3020->SetMaximum(1.794399);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_pi0_mass_all",34,0,400);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
   TLine *line = new TLine(0,1,400,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
