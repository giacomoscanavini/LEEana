#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sun Oct 23 14:05:13 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",60,83,1200,900);
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
   pad1->Range(-61.53846,-5.94,451.2821,656.8389);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hmc__19->SetBinContent(1,75.44189);
   hmc__19->SetBinContent(2,84.97694);
   hmc__19->SetBinContent(3,95.30667);
   hmc__19->SetBinContent(4,76.71544);
   hmc__19->SetBinContent(5,94.23587);
   hmc__19->SetBinContent(6,99.39124);
   hmc__19->SetBinContent(7,104.0389);
   hmc__19->SetBinContent(8,122.4221);
   hmc__19->SetBinContent(9,150.736);
   hmc__19->SetBinContent(10,204.4146);
   hmc__19->SetBinContent(11,252.3455);
   hmc__19->SetBinContent(12,284.6279);
   hmc__19->SetBinContent(13,237.2894);
   hmc__19->SetBinContent(14,122.6351);
   hmc__19->SetBinContent(15,64.19942);
   hmc__19->SetBinContent(16,42.5961);
   hmc__19->SetBinContent(17,33.59606);
   hmc__19->SetBinContent(18,23.36103);
   hmc__19->SetBinContent(19,17.90589);
   hmc__19->SetBinContent(20,17.88938);
   hmc__19->SetBinContent(21,18.29439);
   hmc__19->SetBinContent(22,14.38641);
   hmc__19->SetBinContent(23,9.433455);
   hmc__19->SetBinContent(24,13.46828);
   hmc__19->SetBinContent(25,11.39757);
   hmc__19->SetBinContent(26,9.902531);
   hmc__19->SetBinContent(27,9.910763);
   hmc__19->SetBinContent(28,9.402149);
   hmc__19->SetBinContent(29,9.19859);
   hmc__19->SetBinContent(30,5.838834);
   hmc__19->SetBinContent(31,6.845032);
   hmc__19->SetBinContent(32,5.4);
   hmc__19->SetBinContent(33,5.540882);
   hmc__19->SetBinContent(34,3.611449);
   hmc__19->SetBinContent(35,52.30028);
   hmc__19->SetBinError(1,26.68283);
   hmc__19->SetBinError(2,25.56349);
   hmc__19->SetBinError(3,31.42854);
   hmc__19->SetBinError(4,27.57081);
   hmc__19->SetBinError(5,31.63022);
   hmc__19->SetBinError(6,35.99196);
   hmc__19->SetBinError(7,42.43569);
   hmc__19->SetBinError(8,53.86567);
   hmc__19->SetBinError(9,62.43579);
   hmc__19->SetBinError(10,88.46168);
   hmc__19->SetBinError(11,112.0243);
   hmc__19->SetBinError(12,125.6674);
   hmc__19->SetBinError(13,113.085);
   hmc__19->SetBinError(14,76.02216);
   hmc__19->SetBinError(15,43.82691);
   hmc__19->SetBinError(16,17.61523);
   hmc__19->SetBinError(17,17.72168);
   hmc__19->SetBinError(18,11.95456);
   hmc__19->SetBinError(19,10.9294);
   hmc__19->SetBinError(20,19.07971);
   hmc__19->SetBinError(21,10.89054);
   hmc__19->SetBinError(22,8.23015);
   hmc__19->SetBinError(23,7.586266);
   hmc__19->SetBinError(24,12.42662);
   hmc__19->SetBinError(25,9.99184);
   hmc__19->SetBinError(26,7.934843);
   hmc__19->SetBinError(27,8.222928);
   hmc__19->SetBinError(28,8.099787);
   hmc__19->SetBinError(29,8.561663);
   hmc__19->SetBinError(30,6.616814);
   hmc__19->SetBinError(31,11.01943);
   hmc__19->SetBinError(32,5.207375);
   hmc__19->SetBinError(33,6.694486);
   hmc__19->SetBinError(34,4.051383);
   hmc__19->SetBinError(35,31.67636);
   hmc__19->SetMinimum(-5.94);
   hmc__19->SetMaximum(623.7);
   hmc__19->SetEntries(2811.899);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",34,0,400);
   hs7_stack_7->SetMinimum(-2.083393e-08);
   hs7_stack_7->SetMaximum(298.8593);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,2.91673);
   hbadmatch_stack_1->SetBinContent(2,3.495085);
   hbadmatch_stack_1->SetBinContent(3,3.193322);
   hbadmatch_stack_1->SetBinContent(4,1.968903);
   hbadmatch_stack_1->SetBinContent(5,2.624235);
   hbadmatch_stack_1->SetBinContent(6,2.8637);
   hbadmatch_stack_1->SetBinContent(7,2.985278);
   hbadmatch_stack_1->SetBinContent(8,2.698211);
   hbadmatch_stack_1->SetBinContent(9,3.944989);
   hbadmatch_stack_1->SetBinContent(10,3.292559);
   hbadmatch_stack_1->SetBinContent(11,5.123401);
   hbadmatch_stack_1->SetBinContent(12,3.319853);
   hbadmatch_stack_1->SetBinContent(13,3.06041);
   hbadmatch_stack_1->SetBinContent(14,1.284038);
   hbadmatch_stack_1->SetBinContent(15,3.281362);
   hbadmatch_stack_1->SetBinContent(16,2.321311);
   hbadmatch_stack_1->SetBinContent(17,0.3204102);
   hbadmatch_stack_1->SetBinContent(18,0.004623768);
   hbadmatch_stack_1->SetBinContent(19,0.1950248);
   hbadmatch_stack_1->SetBinContent(20,0.7877532);
   hbadmatch_stack_1->SetBinContent(21,0.4943182);
   hbadmatch_stack_1->SetBinContent(22,0.3934307);
   hbadmatch_stack_1->SetBinContent(23,1.718171);
   hbadmatch_stack_1->SetBinContent(24,0.1950248);
   hbadmatch_stack_1->SetBinContent(25,0.1019266);
   hbadmatch_stack_1->SetBinContent(26,0.3917402);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinContent(28,0.4207742);
   hbadmatch_stack_1->SetBinContent(29,0.6722587);
   hbadmatch_stack_1->SetBinContent(33,0.185722);
   hbadmatch_stack_1->SetBinContent(34,0.1236948);
   hbadmatch_stack_1->SetBinContent(35,0.2552519);
   hbadmatch_stack_1->SetBinError(1,0.9696604);
   hbadmatch_stack_1->SetBinError(2,0.9592147);
   hbadmatch_stack_1->SetBinError(3,0.9261708);
   hbadmatch_stack_1->SetBinError(4,0.7495829);
   hbadmatch_stack_1->SetBinError(5,0.9947414);
   hbadmatch_stack_1->SetBinError(6,1.035912);
   hbadmatch_stack_1->SetBinError(7,0.7969784);
   hbadmatch_stack_1->SetBinError(8,0.872351);
   hbadmatch_stack_1->SetBinError(9,1.006143);
   hbadmatch_stack_1->SetBinError(10,0.8588456);
   hbadmatch_stack_1->SetBinError(11,1.131061);
   hbadmatch_stack_1->SetBinError(12,1.024975);
   hbadmatch_stack_1->SetBinError(13,1.323572);
   hbadmatch_stack_1->SetBinError(14,0.5474244);
   hbadmatch_stack_1->SetBinError(15,2.013171);
   hbadmatch_stack_1->SetBinError(16,0.9976816);
   hbadmatch_stack_1->SetBinError(17,0.2323733);
   hbadmatch_stack_1->SetBinError(18,0.004623768);
   hbadmatch_stack_1->SetBinError(19,0.1950249);
   hbadmatch_stack_1->SetBinError(20,0.4929259);
   hbadmatch_stack_1->SetBinError(21,0.2625629);
   hbadmatch_stack_1->SetBinError(22,0.2781975);
   hbadmatch_stack_1->SetBinError(23,0.8509215);
   hbadmatch_stack_1->SetBinError(24,0.1950249);
   hbadmatch_stack_1->SetBinError(25,0.1019266);
   hbadmatch_stack_1->SetBinError(26,0.2770047);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetBinError(28,0.4207742);
   hbadmatch_stack_1->SetBinError(29,0.4753932);
   hbadmatch_stack_1->SetBinError(33,0.185722);
   hbadmatch_stack_1->SetBinError(34,0.1236948);
   hbadmatch_stack_1->SetBinError(35,0.255252);
   hbadmatch_stack_1->SetEntries(226);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hext_stack_2->SetBinContent(1,7.105247);
   hext_stack_2->SetBinContent(2,13.8039);
   hext_stack_2->SetBinContent(3,15.30343);
   hext_stack_2->SetBinContent(4,8.593191);
   hext_stack_2->SetBinContent(5,6.973976);
   hext_stack_2->SetBinContent(6,9.988921);
   hext_stack_2->SetBinContent(7,7.862194);
   hext_stack_2->SetBinContent(8,13.95394);
   hext_stack_2->SetBinContent(9,8.235662);
   hext_stack_2->SetBinContent(10,18.37299);
   hext_stack_2->SetBinContent(11,11.17842);
   hext_stack_2->SetBinContent(12,17.51954);
   hext_stack_2->SetBinContent(13,26.68808);
   hext_stack_2->SetBinContent(14,5.918582);
   hext_stack_2->SetBinContent(15,5.40106);
   hext_stack_2->SetBinContent(16,2.192989);
   hext_stack_2->SetBinContent(17,1.219797);
   hext_stack_2->SetBinContent(18,0.973192);
   hext_stack_2->SetBinContent(19,0.4065989);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,1.626396);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,0.6416141);
   hext_stack_2->SetBinContent(28,0.7309963);
   hext_stack_2->SetBinContent(29,0.3243973);
   hext_stack_2->SetBinContent(32,0.3243973);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,1.137595);
   hext_stack_2->SetBinError(1,1.859105);
   hext_stack_2->SetBinError(2,2.597541);
   hext_stack_2->SetBinError(3,2.598801);
   hext_stack_2->SetBinError(4,1.878537);
   hext_stack_2->SetBinError(5,1.632914);
   hext_stack_2->SetBinError(6,2.325807);
   hext_stack_2->SetBinError(7,1.805088);
   hext_stack_2->SetBinError(8,2.696256);
   hext_stack_2->SetBinError(9,2.023203);
   hext_stack_2->SetBinError(10,3.090933);
   hext_stack_2->SetBinError(11,2.215467);
   hext_stack_2->SetBinError(12,2.960353);
   hext_stack_2->SetBinError(13,3.747483);
   hext_stack_2->SetBinError(14,1.513479);
   hext_stack_2->SetBinError(15,1.694111);
   hext_stack_2->SetBinError(16,0.9009267);
   hext_stack_2->SetBinError(17,0.7042499);
   hext_stack_2->SetBinError(18,0.5618727);
   hext_stack_2->SetBinError(19,0.4065989);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,0.8131978);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,0.6416141);
   hext_stack_2->SetBinError(28,0.5201503);
   hext_stack_2->SetBinError(29,0.3243973);
   hext_stack_2->SetBinError(32,0.3243973);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,0.6602113);
   hext_stack_2->SetEntries(428);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,0.5388689);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.5060257);
   hdirt_stack_3->SetBinContent(4,0.9363116);
   hdirt_stack_3->SetBinContent(5,0.9842969);
   hdirt_stack_3->SetBinContent(6,1.151725);
   hdirt_stack_3->SetBinContent(7,0.4247338);
   hdirt_stack_3->SetBinContent(8,0.4377912);
   hdirt_stack_3->SetBinContent(9,0.3240464);
   hdirt_stack_3->SetBinContent(10,1.487391);
   hdirt_stack_3->SetBinContent(11,1.188972);
   hdirt_stack_3->SetBinContent(12,0.994874);
   hdirt_stack_3->SetBinContent(13,1.277624);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.2516114);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinError(1,0.4239131);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.3764248);
   hdirt_stack_3->SetBinError(4,0.430901);
   hdirt_stack_3->SetBinError(5,0.5081655);
   hdirt_stack_3->SetBinError(6,0.4793627);
   hdirt_stack_3->SetBinError(7,0.4247338);
   hdirt_stack_3->SetBinError(8,0.3095651);
   hdirt_stack_3->SetBinError(9,0.2316256);
   hdirt_stack_3->SetBinError(10,1.013785);
   hdirt_stack_3->SetBinError(11,0.4913873);
   hdirt_stack_3->SetBinError(12,0.5080516);
   hdirt_stack_3->SetBinError(13,0.5459963);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(18,0.2516114);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetBinError(27,0.1380715);
   hdirt_stack_3->SetEntries(50);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,4.894282);
   houtFV_stack_4->SetBinContent(2,6.173239);
   houtFV_stack_4->SetBinContent(3,6.326795);
   houtFV_stack_4->SetBinContent(4,3.659911);
   houtFV_stack_4->SetBinContent(5,3.913824);
   houtFV_stack_4->SetBinContent(6,5.943208);
   houtFV_stack_4->SetBinContent(7,4.450486);
   houtFV_stack_4->SetBinContent(8,3.967687);
   houtFV_stack_4->SetBinContent(9,4.632514);
   houtFV_stack_4->SetBinContent(10,7.136714);
   houtFV_stack_4->SetBinContent(11,5.958264);
   houtFV_stack_4->SetBinContent(12,8.67908);
   houtFV_stack_4->SetBinContent(13,6.138938);
   houtFV_stack_4->SetBinContent(14,4.578397);
   houtFV_stack_4->SetBinContent(15,2.188802);
   houtFV_stack_4->SetBinContent(16,0.8411137);
   houtFV_stack_4->SetBinContent(17,0.9959697);
   houtFV_stack_4->SetBinContent(18,0.7228023);
   houtFV_stack_4->SetBinContent(19,0.9556549);
   houtFV_stack_4->SetBinContent(21,0.250768);
   houtFV_stack_4->SetBinContent(23,0.3235489);
   houtFV_stack_4->SetBinContent(24,0.1950248);
   houtFV_stack_4->SetBinContent(25,0.3917402);
   houtFV_stack_4->SetBinContent(26,0.9448334);
   houtFV_stack_4->SetBinContent(27,0.1967154);
   houtFV_stack_4->SetBinContent(28,1.202537);
   houtFV_stack_4->SetBinContent(29,0.1967154);
   houtFV_stack_4->SetBinContent(30,0.1967154);
   houtFV_stack_4->SetBinContent(31,0.5693454);
   houtFV_stack_4->SetBinContent(33,0.1967154);
   houtFV_stack_4->SetBinError(1,1.136013);
   houtFV_stack_4->SetBinError(2,1.299754);
   houtFV_stack_4->SetBinError(3,1.240331);
   houtFV_stack_4->SetBinError(4,0.9057176);
   houtFV_stack_4->SetBinError(5,0.9727986);
   houtFV_stack_4->SetBinError(6,1.232346);
   houtFV_stack_4->SetBinError(7,1.043413);
   houtFV_stack_4->SetBinError(8,0.9584359);
   houtFV_stack_4->SetBinError(9,1.034046);
   houtFV_stack_4->SetBinError(10,1.276898);
   houtFV_stack_4->SetBinError(11,1.132189);
   houtFV_stack_4->SetBinError(12,1.42752);
   houtFV_stack_4->SetBinError(13,1.247877);
   houtFV_stack_4->SetBinError(14,1.083102);
   houtFV_stack_4->SetBinError(15,0.6710204);
   houtFV_stack_4->SetBinError(16,0.3842156);
   houtFV_stack_4->SetBinError(17,0.5037217);
   houtFV_stack_4->SetBinError(18,0.3656343);
   houtFV_stack_4->SetBinError(19,0.4357091);
   houtFV_stack_4->SetBinError(21,0.2040064);
   houtFV_stack_4->SetBinError(23,0.2335661);
   houtFV_stack_4->SetBinError(24,0.1950249);
   houtFV_stack_4->SetBinError(25,0.2770047);
   houtFV_stack_4->SetBinError(26,0.5664214);
   houtFV_stack_4->SetBinError(27,0.1967154);
   houtFV_stack_4->SetBinError(28,0.5704492);
   houtFV_stack_4->SetBinError(29,0.1967154);
   houtFV_stack_4->SetBinError(30,0.1967154);
   houtFV_stack_4->SetBinError(31,0.4213669);
   houtFV_stack_4->SetBinError(33,0.1967154);
   houtFV_stack_4->SetEntries(411);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1232231);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1130679);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1207449);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1852523);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.4403017);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5556625);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7932799);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3290787);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.2529709);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.5355324);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1600902);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1277333);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.303546);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.0783842);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.08854323);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.05541593);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.07115688);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.05974416);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.09864397);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.07438324);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2109767);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2345828);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3066255);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1748138);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.159698);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3012462);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.08054258);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06526503);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.04222718);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1675438);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04287349);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.06260951);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.04315819);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1749277);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4446933);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1439753);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2780641);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4626596);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4369268);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.554857);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4463718);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.9361547);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.211949);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.357746);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.202343);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.133262);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8506051);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.315114);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2799981);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1563276);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.146128);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.08976799);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1417359);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.08566124);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1722092);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07843994);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1589586);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1805002);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3117714);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1815874);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1469739);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2705279);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3335094);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.324733);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2383189);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3164937);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2772238);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1451451);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1373528);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1228798);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1290305);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06992631);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1296664);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetEntries(314);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,19.95732);
   hNCpi0inFVres_stack_7->SetBinContent(2,19.87742);
   hNCpi0inFVres_stack_7->SetBinContent(3,21.47714);
   hNCpi0inFVres_stack_7->SetBinContent(4,19.65796);
   hNCpi0inFVres_stack_7->SetBinContent(5,28.27753);
   hNCpi0inFVres_stack_7->SetBinContent(6,30.04543);
   hNCpi0inFVres_stack_7->SetBinContent(7,36.35432);
   hNCpi0inFVres_stack_7->SetBinContent(8,48.25491);
   hNCpi0inFVres_stack_7->SetBinContent(9,63.27038);
   hNCpi0inFVres_stack_7->SetBinContent(10,93.11244);
   hNCpi0inFVres_stack_7->SetBinContent(11,130.7258);
   hNCpi0inFVres_stack_7->SetBinContent(12,146.6375);
   hNCpi0inFVres_stack_7->SetBinContent(13,107.6519);
   hNCpi0inFVres_stack_7->SetBinContent(14,52.52229);
   hNCpi0inFVres_stack_7->SetBinContent(15,24.86694);
   hNCpi0inFVres_stack_7->SetBinContent(16,15.2403);
   hNCpi0inFVres_stack_7->SetBinContent(17,10.91643);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.200751);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.019528);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.199712);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.645876);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.82784);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.197235);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.395814);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.885059);
   hNCpi0inFVres_stack_7->SetBinContent(26,1.458079);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.54054);
   hNCpi0inFVres_stack_7->SetBinContent(28,1.159239);
   hNCpi0inFVres_stack_7->SetBinContent(29,1.429407);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.7686334);
   hNCpi0inFVres_stack_7->SetBinContent(31,1.488647);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.3468461);
   hNCpi0inFVres_stack_7->SetBinContent(33,2.113681);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.6184691);
   hNCpi0inFVres_stack_7->SetBinContent(35,6.000423);
   hNCpi0inFVres_stack_7->SetBinError(1,1.365557);
   hNCpi0inFVres_stack_7->SetBinError(2,1.519121);
   hNCpi0inFVres_stack_7->SetBinError(3,1.530362);
   hNCpi0inFVres_stack_7->SetBinError(4,1.324833);
   hNCpi0inFVres_stack_7->SetBinError(5,1.691406);
   hNCpi0inFVres_stack_7->SetBinError(6,1.664986);
   hNCpi0inFVres_stack_7->SetBinError(7,1.924342);
   hNCpi0inFVres_stack_7->SetBinError(8,2.149385);
   hNCpi0inFVres_stack_7->SetBinError(9,2.444052);
   hNCpi0inFVres_stack_7->SetBinError(10,2.861419);
   hNCpi0inFVres_stack_7->SetBinError(11,3.371061);
   hNCpi0inFVres_stack_7->SetBinError(12,3.525254);
   hNCpi0inFVres_stack_7->SetBinError(13,3.015107);
   hNCpi0inFVres_stack_7->SetBinError(14,2.252323);
   hNCpi0inFVres_stack_7->SetBinError(15,1.523885);
   hNCpi0inFVres_stack_7->SetBinError(16,1.41665);
   hNCpi0inFVres_stack_7->SetBinError(17,1.226793);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6671078);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6344119);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5351263);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6771022);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5696372);
   hNCpi0inFVres_stack_7->SetBinError(23,0.4270254);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5404997);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6597662);
   hNCpi0inFVres_stack_7->SetBinError(26,0.4212076);
   hNCpi0inFVres_stack_7->SetBinError(27,0.3916209);
   hNCpi0inFVres_stack_7->SetBinError(28,0.3152474);
   hNCpi0inFVres_stack_7->SetBinError(29,0.3363377);
   hNCpi0inFVres_stack_7->SetBinError(30,0.2246083);
   hNCpi0inFVres_stack_7->SetBinError(31,0.459984);
   hNCpi0inFVres_stack_7->SetBinError(32,0.202593);
   hNCpi0inFVres_stack_7->SetBinError(33,0.7956483);
   hNCpi0inFVres_stack_7->SetBinError(34,0.246735);
   hNCpi0inFVres_stack_7->SetBinError(35,0.8831716);
   hNCpi0inFVres_stack_7->SetEntries(24018);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.105113);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.296849);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.38519);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.506604);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.3172);
   hNCpi0inFVdis_stack_8->SetBinContent(6,6.345863);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.448173);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.795588);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.31967);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.42264);
   hNCpi0inFVdis_stack_8->SetBinContent(11,24.3438);
   hNCpi0inFVdis_stack_8->SetBinContent(12,27.93593);
   hNCpi0inFVdis_stack_8->SetBinContent(13,23.44995);
   hNCpi0inFVdis_stack_8->SetBinContent(14,14.78567);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.34143);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.164428);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.95156);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.814878);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.475866);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.620325);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.043115);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.126957);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.8822239);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.8146561);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.2537305);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.2992821);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.932516);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.9253597);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.9279949);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.5304134);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.3190996);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.6779539);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.05876937);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.4695168);
   hNCpi0inFVdis_stack_8->SetBinContent(35,3.529264);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7682866);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7315367);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8142437);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6522452);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.038705);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8404199);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.060584);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8440397);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.253239);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.281507);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.617635);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.73209);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.467804);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.287979);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7499438);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7942585);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7893998);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5336737);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3972485);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5041094);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2798482);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3238006);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2897915);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3671574);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1431923);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1096174);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.3457624);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4659919);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.3672431);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.2428091);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.1860917);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2448138);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.04160923);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.1973075);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.7461266);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02548795);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.03723348);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01071203);
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
   hNCpi0inFVmec_stack_9->SetBinError(8,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02632953);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.1853775);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1328217);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02114295);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01822846);
   hNCpi0inFVmec_stack_9->SetEntries(24);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,7.024964);
   hCCpi0inFV_stack_10->SetBinContent(2,7.667062);
   hCCpi0inFV_stack_10->SetBinContent(3,8.84651);
   hCCpi0inFV_stack_10->SetBinContent(4,9.6483);
   hCCpi0inFV_stack_10->SetBinContent(5,10.50973);
   hCCpi0inFV_stack_10->SetBinContent(6,13.9743);
   hCCpi0inFV_stack_10->SetBinContent(7,16.70526);
   hCCpi0inFV_stack_10->SetBinContent(8,19.33069);
   hCCpi0inFV_stack_10->SetBinContent(9,27.87558);
   hCCpi0inFV_stack_10->SetBinContent(10,34.51669);
   hCCpi0inFV_stack_10->SetBinContent(11,39.29326);
   hCCpi0inFV_stack_10->SetBinContent(12,48.63816);
   hCCpi0inFV_stack_10->SetBinContent(13,40.23512);
   hCCpi0inFV_stack_10->SetBinContent(14,22.48807);
   hCCpi0inFV_stack_10->SetBinContent(15,9.506495);
   hCCpi0inFV_stack_10->SetBinContent(16,8.212546);
   hCCpi0inFV_stack_10->SetBinContent(17,7.22897);
   hCCpi0inFV_stack_10->SetBinContent(18,3.991287);
   hCCpi0inFV_stack_10->SetBinContent(19,3.66128);
   hCCpi0inFV_stack_10->SetBinContent(20,5.13465);
   hCCpi0inFV_stack_10->SetBinContent(21,3.512746);
   hCCpi0inFV_stack_10->SetBinContent(22,4.481716);
   hCCpi0inFV_stack_10->SetBinContent(23,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(24,3.633153);
   hCCpi0inFV_stack_10->SetBinContent(25,2.931052);
   hCCpi0inFV_stack_10->SetBinContent(26,2.734337);
   hCCpi0inFV_stack_10->SetBinContent(27,1.857266);
   hCCpi0inFV_stack_10->SetBinContent(28,1.163606);
   hCCpi0inFV_stack_10->SetBinContent(29,2.679393);
   hCCpi0inFV_stack_10->SetBinContent(30,1.217305);
   hCCpi0inFV_stack_10->SetBinContent(31,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(32,0.9286332);
   hCCpi0inFV_stack_10->SetBinContent(33,0.5867651);
   hCCpi0inFV_stack_10->SetBinContent(34,0.5687294);
   hCCpi0inFV_stack_10->SetBinContent(35,10.65996);
   hCCpi0inFV_stack_10->SetBinError(1,1.408172);
   hCCpi0inFV_stack_10->SetBinError(2,1.414602);
   hCCpi0inFV_stack_10->SetBinError(3,1.599474);
   hCCpi0inFV_stack_10->SetBinError(4,1.52261);
   hCCpi0inFV_stack_10->SetBinError(5,1.581574);
   hCCpi0inFV_stack_10->SetBinError(6,1.850838);
   hCCpi0inFV_stack_10->SetBinError(7,2.038802);
   hCCpi0inFV_stack_10->SetBinError(8,2.210837);
   hCCpi0inFV_stack_10->SetBinError(9,2.598731);
   hCCpi0inFV_stack_10->SetBinError(10,2.954962);
   hCCpi0inFV_stack_10->SetBinError(11,3.181894);
   hCCpi0inFV_stack_10->SetBinError(12,3.492997);
   hCCpi0inFV_stack_10->SetBinError(13,3.131438);
   hCCpi0inFV_stack_10->SetBinError(14,2.446435);
   hCCpi0inFV_stack_10->SetBinError(15,1.536307);
   hCCpi0inFV_stack_10->SetBinError(16,1.415153);
   hCCpi0inFV_stack_10->SetBinError(17,1.345055);
   hCCpi0inFV_stack_10->SetBinError(18,1.012382);
   hCCpi0inFV_stack_10->SetBinError(19,0.9812871);
   hCCpi0inFV_stack_10->SetBinError(20,1.07386);
   hCCpi0inFV_stack_10->SetBinError(21,0.9401669);
   hCCpi0inFV_stack_10->SetBinError(22,1.126972);
   hCCpi0inFV_stack_10->SetBinError(23,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(24,0.934902);
   hCCpi0inFV_stack_10->SetBinError(25,0.8781425);
   hCCpi0inFV_stack_10->SetBinError(26,0.8558255);
   hCCpi0inFV_stack_10->SetBinError(27,0.6799255);
   hCCpi0inFV_stack_10->SetBinError(28,0.5350067);
   hCCpi0inFV_stack_10->SetBinError(29,0.8775546);
   hCCpi0inFV_stack_10->SetBinError(30,0.4981102);
   hCCpi0inFV_stack_10->SetBinError(31,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(32,0.48078);
   hCCpi0inFV_stack_10->SetBinError(33,0.3387718);
   hCCpi0inFV_stack_10->SetBinError(34,0.4098252);
   hCCpi0inFV_stack_10->SetBinError(35,1.606564);
   hCCpi0inFV_stack_10->SetEntries(1641);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,11.64948);
   hNCinFV_stack_11->SetBinContent(2,9.755584);
   hNCinFV_stack_11->SetBinContent(3,8.719061);
   hNCinFV_stack_11->SetBinContent(4,11.05209);
   hNCinFV_stack_11->SetBinContent(5,13.63559);
   hNCinFV_stack_11->SetBinContent(6,8.470251);
   hNCinFV_stack_11->SetBinContent(7,10.13801);
   hNCinFV_stack_11->SetBinContent(8,9.342669);
   hNCinFV_stack_11->SetBinContent(9,12.80183);
   hNCinFV_stack_11->SetBinContent(10,12.17927);
   hNCinFV_stack_11->SetBinContent(11,17.60196);
   hNCinFV_stack_11->SetBinContent(12,12.39865);
   hNCinFV_stack_11->SetBinContent(13,14.28259);
   hNCinFV_stack_11->SetBinContent(14,9.330169);
   hNCinFV_stack_11->SetBinContent(15,7.215775);
   hNCinFV_stack_11->SetBinContent(16,4.980079);
   hNCinFV_stack_11->SetBinContent(17,5.330956);
   hNCinFV_stack_11->SetBinContent(18,5.025224);
   hNCinFV_stack_11->SetBinContent(19,4.412489);
   hNCinFV_stack_11->SetBinContent(20,4.428325);
   hNCinFV_stack_11->SetBinContent(21,5.32075);
   hNCinFV_stack_11->SetBinContent(22,1.97662);
   hNCinFV_stack_11->SetBinContent(23,1.988816);
   hNCinFV_stack_11->SetBinContent(24,3.907148);
   hNCinFV_stack_11->SetBinContent(25,2.481781);
   hNCinFV_stack_11->SetBinContent(26,1.55942);
   hNCinFV_stack_11->SetBinContent(27,3.634975);
   hNCinFV_stack_11->SetBinContent(28,1.973143);
   hNCinFV_stack_11->SetBinContent(29,2.218045);
   hNCinFV_stack_11->SetBinContent(30,2.200549);
   hNCinFV_stack_11->SetBinContent(31,2.075471);
   hNCinFV_stack_11->SetBinContent(32,2.140283);
   hNCinFV_stack_11->SetBinContent(33,1.560268);
   hNCinFV_stack_11->SetBinContent(34,1.506059);
   hNCinFV_stack_11->SetBinContent(35,20.33909);
   hNCinFV_stack_11->SetBinError(1,1.75336);
   hNCinFV_stack_11->SetBinError(2,1.596505);
   hNCinFV_stack_11->SetBinError(3,1.524071);
   hNCinFV_stack_11->SetBinError(4,1.711214);
   hNCinFV_stack_11->SetBinError(5,1.909686);
   hNCinFV_stack_11->SetBinError(6,1.671861);
   hNCinFV_stack_11->SetBinError(7,1.580255);
   hNCinFV_stack_11->SetBinError(8,1.554484);
   hNCinFV_stack_11->SetBinError(9,1.840345);
   hNCinFV_stack_11->SetBinError(10,1.719058);
   hNCinFV_stack_11->SetBinError(11,2.453629);
   hNCinFV_stack_11->SetBinError(12,1.888069);
   hNCinFV_stack_11->SetBinError(13,2.175898);
   hNCinFV_stack_11->SetBinError(14,1.62269);
   hNCinFV_stack_11->SetBinError(15,1.443915);
   hNCinFV_stack_11->SetBinError(16,1.54358);
   hNCinFV_stack_11->SetBinError(17,1.368451);
   hNCinFV_stack_11->SetBinError(18,1.461384);
   hNCinFV_stack_11->SetBinError(19,1.425056);
   hNCinFV_stack_11->SetBinError(20,1.176321);
   hNCinFV_stack_11->SetBinError(21,1.446945);
   hNCinFV_stack_11->SetBinError(22,1.053329);
   hNCinFV_stack_11->SetBinError(23,0.6607114);
   hNCinFV_stack_11->SetBinError(24,1.112711);
   hNCinFV_stack_11->SetBinError(25,0.9531496);
   hNCinFV_stack_11->SetBinError(26,0.5177188);
   hNCinFV_stack_11->SetBinError(27,1.097693);
   hNCinFV_stack_11->SetBinError(28,0.7027554);
   hNCinFV_stack_11->SetBinError(29,0.767312);
   hNCinFV_stack_11->SetBinError(30,0.7999802);
   hNCinFV_stack_11->SetBinError(31,0.9434222);
   hNCinFV_stack_11->SetBinError(32,0.9731288);
   hNCinFV_stack_11->SetBinError(33,0.6617907);
   hNCinFV_stack_11->SetBinError(34,0.8598107);
   hNCinFV_stack_11->SetBinError(35,2.593635);
   hNCinFV_stack_11->SetEntries(1026);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,14.87101);
   hnumuCCinFV_stack_12->SetBinContent(2,17.134);
   hnumuCCinFV_stack_12->SetBinContent(3,24.13258);
   hnumuCCinFV_stack_12->SetBinContent(4,15.85999);
   hnumuCCinFV_stack_12->SetBinContent(5,18.10259);
   hnumuCCinFV_stack_12->SetBinContent(6,19.632);
   hnumuCCinFV_stack_12->SetBinContent(7,14.44523);
   hnumuCCinFV_stack_12->SetBinContent(8,14.42622);
   hnumuCCinFV_stack_12->SetBinContent(9,15.36793);
   hnumuCCinFV_stack_12->SetBinContent(10,15.58802);
   hnumuCCinFV_stack_12->SetBinContent(11,13.98544);
   hnumuCCinFV_stack_12->SetBinContent(12,15.24087);
   hnumuCCinFV_stack_12->SetBinContent(13,12.59574);
   hnumuCCinFV_stack_12->SetBinContent(14,9.856203);
   hnumuCCinFV_stack_12->SetBinContent(15,5.813786);
   hnumuCCinFV_stack_12->SetBinContent(16,4.059782);
   hnumuCCinFV_stack_12->SetBinContent(17,4.398795);
   hnumuCCinFV_stack_12->SetBinContent(18,4.19243);
   hnumuCCinFV_stack_12->SetBinContent(19,1.359909);
   hnumuCCinFV_stack_12->SetBinContent(20,2.115297);
   hnumuCCinFV_stack_12->SetBinContent(21,3.348125);
   hnumuCCinFV_stack_12->SetBinContent(22,1.154334);
   hnumuCCinFV_stack_12->SetBinContent(23,0.7868615);
   hnumuCCinFV_stack_12->SetBinContent(24,2.327459);
   hnumuCCinFV_stack_12->SetBinContent(25,1.607493);
   hnumuCCinFV_stack_12->SetBinContent(26,1.873225);
   hnumuCCinFV_stack_12->SetBinContent(27,1.413964);
   hnumuCCinFV_stack_12->SetBinContent(28,1.771078);
   hnumuCCinFV_stack_12->SetBinContent(29,0.7336084);
   hnumuCCinFV_stack_12->SetBinContent(30,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(31,1.175221);
   hnumuCCinFV_stack_12->SetBinContent(32,0.9818863);
   hnumuCCinFV_stack_12->SetBinContent(33,0.4323627);
   hnumuCCinFV_stack_12->SetBinContent(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(35,8.622985);
   hnumuCCinFV_stack_12->SetBinError(1,2.089474);
   hnumuCCinFV_stack_12->SetBinError(2,2.581065);
   hnumuCCinFV_stack_12->SetBinError(3,3.17991);
   hnumuCCinFV_stack_12->SetBinError(4,2.342833);
   hnumuCCinFV_stack_12->SetBinError(5,2.708351);
   hnumuCCinFV_stack_12->SetBinError(6,2.41974);
   hnumuCCinFV_stack_12->SetBinError(7,2.129621);
   hnumuCCinFV_stack_12->SetBinError(8,2.047167);
   hnumuCCinFV_stack_12->SetBinError(9,2.169574);
   hnumuCCinFV_stack_12->SetBinError(10,2.142332);
   hnumuCCinFV_stack_12->SetBinError(11,1.917418);
   hnumuCCinFV_stack_12->SetBinError(12,2.190104);
   hnumuCCinFV_stack_12->SetBinError(13,3.14346);
   hnumuCCinFV_stack_12->SetBinError(14,1.732784);
   hnumuCCinFV_stack_12->SetBinError(15,1.486185);
   hnumuCCinFV_stack_12->SetBinError(16,1.020933);
   hnumuCCinFV_stack_12->SetBinError(17,1.110054);
   hnumuCCinFV_stack_12->SetBinError(18,1.019309);
   hnumuCCinFV_stack_12->SetBinError(19,0.5703358);
   hnumuCCinFV_stack_12->SetBinError(20,0.8479028);
   hnumuCCinFV_stack_12->SetBinError(21,1.072079);
   hnumuCCinFV_stack_12->SetBinError(22,0.5388944);
   hnumuCCinFV_stack_12->SetBinError(23,0.3934307);
   hnumuCCinFV_stack_12->SetBinError(24,0.8066566);
   hnumuCCinFV_stack_12->SetBinError(25,1.373791);
   hnumuCCinFV_stack_12->SetBinError(26,0.7754413);
   hnumuCCinFV_stack_12->SetBinError(27,0.6515799);
   hnumuCCinFV_stack_12->SetBinError(28,0.6411618);
   hnumuCCinFV_stack_12->SetBinError(29,0.4394482);
   hnumuCCinFV_stack_12->SetBinError(30,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(31,0.4797863);
   hnumuCCinFV_stack_12->SetBinError(32,0.4391155);
   hnumuCCinFV_stack_12->SetBinError(33,0.3069635);
   hnumuCCinFV_stack_12->SetBinError(34,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(35,1.42493);
   hnumuCCinFV_stack_12->SetEntries(1066);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,1.080719);
   hnueCCinFV_stack_13->SetBinContent(2,1.035739);
   hnueCCinFV_stack_13->SetBinContent(3,1.133086);
   hnueCCinFV_stack_13->SetBinContent(4,0.3688623);
   hnueCCinFV_stack_13->SetBinContent(5,0.9939284);
   hnueCCinFV_stack_13->SetBinContent(6,0.5007306);
   hnueCCinFV_stack_13->SetBinContent(7,0.6234689);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.7541375);
   hnueCCinFV_stack_13->SetBinContent(11,0.9936023);
   hnueCCinFV_stack_13->SetBinContent(12,1.324927);
   hnueCCinFV_stack_13->SetBinContent(13,0.5867651);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.2107505);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(20,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(22,0.680723);
   hnueCCinFV_stack_13->SetBinContent(35,1.727805);
   hnueCCinFV_stack_13->SetBinError(1,0.5593042);
   hnueCCinFV_stack_13->SetBinError(2,0.5279862);
   hnueCCinFV_stack_13->SetBinError(3,0.5852594);
   hnueCCinFV_stack_13->SetBinError(4,0.3688623);
   hnueCCinFV_stack_13->SetBinError(5,0.5102466);
   hnueCCinFV_stack_13->SetBinError(6,0.3541015);
   hnueCCinFV_stack_13->SetBinError(7,0.4534262);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.5358018);
   hnueCCinFV_stack_13->SetBinError(11,0.5094453);
   hnueCCinFV_stack_13->SetBinError(12,0.7385512);
   hnueCCinFV_stack_13->SetBinError(13,0.3387718);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.2107505);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(20,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.2538659);
   hnueCCinFV_stack_13->SetBinError(22,0.4810839);
   hnueCCinFV_stack_13->SetBinError(35,0.6252832);
   hnueCCinFV_stack_13->SetEntries(54);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);
   hmcerror__20->SetBinContent(1,75.44189);
   hmcerror__20->SetBinContent(2,84.97694);
   hmcerror__20->SetBinContent(3,95.30667);
   hmcerror__20->SetBinContent(4,76.71544);
   hmcerror__20->SetBinContent(5,94.23587);
   hmcerror__20->SetBinContent(6,99.39124);
   hmcerror__20->SetBinContent(7,104.0389);
   hmcerror__20->SetBinContent(8,122.4221);
   hmcerror__20->SetBinContent(9,150.736);
   hmcerror__20->SetBinContent(10,204.4146);
   hmcerror__20->SetBinContent(11,252.3455);
   hmcerror__20->SetBinContent(12,284.6279);
   hmcerror__20->SetBinContent(13,237.2894);
   hmcerror__20->SetBinContent(14,122.6351);
   hmcerror__20->SetBinContent(15,64.19942);
   hmcerror__20->SetBinContent(16,42.5961);
   hmcerror__20->SetBinContent(17,33.59606);
   hmcerror__20->SetBinContent(18,23.36103);
   hmcerror__20->SetBinContent(19,17.90589);
   hmcerror__20->SetBinContent(20,17.88938);
   hmcerror__20->SetBinContent(21,18.29439);
   hmcerror__20->SetBinContent(22,14.38641);
   hmcerror__20->SetBinContent(23,9.433455);
   hmcerror__20->SetBinContent(24,13.46828);
   hmcerror__20->SetBinContent(25,11.39757);
   hmcerror__20->SetBinContent(26,9.902531);
   hmcerror__20->SetBinContent(27,9.910763);
   hmcerror__20->SetBinContent(28,9.402149);
   hmcerror__20->SetBinContent(29,9.19859);
   hmcerror__20->SetBinContent(30,5.838834);
   hmcerror__20->SetBinContent(31,6.845032);
   hmcerror__20->SetBinContent(32,5.4);
   hmcerror__20->SetBinContent(33,5.540882);
   hmcerror__20->SetBinContent(34,3.611449);
   hmcerror__20->SetBinContent(35,52.30028);
   hmcerror__20->SetBinError(1,26.68283);
   hmcerror__20->SetBinError(2,25.56349);
   hmcerror__20->SetBinError(3,31.42854);
   hmcerror__20->SetBinError(4,27.57081);
   hmcerror__20->SetBinError(5,31.63022);
   hmcerror__20->SetBinError(6,35.99196);
   hmcerror__20->SetBinError(7,42.43569);
   hmcerror__20->SetBinError(8,53.86567);
   hmcerror__20->SetBinError(9,62.43579);
   hmcerror__20->SetBinError(10,88.46168);
   hmcerror__20->SetBinError(11,112.0243);
   hmcerror__20->SetBinError(12,125.6674);
   hmcerror__20->SetBinError(13,113.085);
   hmcerror__20->SetBinError(14,76.02216);
   hmcerror__20->SetBinError(15,43.82691);
   hmcerror__20->SetBinError(16,17.61523);
   hmcerror__20->SetBinError(17,17.72168);
   hmcerror__20->SetBinError(18,11.95456);
   hmcerror__20->SetBinError(19,10.9294);
   hmcerror__20->SetBinError(20,19.07971);
   hmcerror__20->SetBinError(21,10.89054);
   hmcerror__20->SetBinError(22,8.23015);
   hmcerror__20->SetBinError(23,7.586266);
   hmcerror__20->SetBinError(24,12.42662);
   hmcerror__20->SetBinError(25,9.99184);
   hmcerror__20->SetBinError(26,7.934843);
   hmcerror__20->SetBinError(27,8.222928);
   hmcerror__20->SetBinError(28,8.099787);
   hmcerror__20->SetBinError(29,8.561663);
   hmcerror__20->SetBinError(30,6.616814);
   hmcerror__20->SetBinError(31,11.01943);
   hmcerror__20->SetBinError(32,5.207375);
   hmcerror__20->SetBinError(33,6.694486);
   hmcerror__20->SetBinError(34,4.051383);
   hmcerror__20->SetBinError(35,31.67636);
   hmcerror__20->SetEntries(2811.899);

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
   
   Double_t _fx3025[34] = {
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
   Double_t _fy3025[34] = {
   66,
   71,
   69,
   71,
   87,
   72,
   112,
   91,
   133,
   206,
   231,
   297,
   196,
   84,
   52,
   20,
   21,
   22,
   16,
   12,
   10,
   16,
   8,
   8,
   5,
   4,
   5,
   12,
   3,
   3,
   2,
   3,
   4,
   2};
   Double_t _felx3025[34] = {
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
   Double_t _fely3025[34] = {
   8.2509,
   8.5518,
   8.4327,
   8.5518,
   9.4503,
   8.6108,
   10.58301,
   9.6617,
   11.53256,
   14.3527,
   15.19868,
   17.23369,
   14,
   9.2886,
   7.3419,
   4.6266,
   4.7354,
   4.8417,
   4.1628,
   3.64022,
   3.34883,
   4.1628,
   3.0307,
   3.0307,
   2.48995,
   2.29683,
   2.48995,
   3.64022,
   2.143368,
   2.143368,
   2,
   2.143368,
   2.29683,
   2};
   Double_t _fehx3025[34] = {
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
   Double_t _fehy3025[34] = {
   8.0483,
   8.3496,
   8.2304,
   8.3496,
   9.2488,
   8.4085,
   10.58301,
   9.46,
   11.53256,
   14.3527,
   15.19868,
   17.23369,
   14,
   9.0869,
   7.1381,
   4.4133,
   4.5229,
   4.6299,
   3.9454,
   3.4155,
   3.1179,
   3.9454,
   2.7896,
   2.7896,
   2.21064,
   1.98186,
   2.21064,
   3.4155,
   1.72422,
   1.72422,
   1.51917,
   1.72422,
   1.98186,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,440);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(345.6571);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.3/34","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2014.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 54.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 187.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  10.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  908.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  198.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 373.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 227.3","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 261.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 12.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_mass_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[34] = {
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
   Double_t _fy3026[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[34] = {
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
   Double_t _fely3026[34] = {
   0.3536873,
   0.3008285,
   0.3297622,
   0.3593906,
   0.3356494,
   0.3621241,
   0.4078831,
   0.4399994,
   0.4142064,
   0.4327562,
   0.4439322,
   0.4415146,
   0.47657,
   0.6199056,
   0.6826683,
   0.413541,
   0.5274928,
   0.5117308,
   0.6103804,
   1.066539,
   0.5952941,
   0.5720781,
   0.8041874,
   0.9226586,
   0.8766642,
   0.8012944,
   0.8296968,
   0.8614825,
   0.9307582,
   1.133242,
   1.609844,
   0.9643287,
   1.208199,
   1.121817};
   Double_t _fehx3026[34] = {
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
   Double_t _fehy3026[34] = {
   0.3536873,
   0.3008285,
   0.3297622,
   0.3593906,
   0.3356494,
   0.3621241,
   0.4078831,
   0.4399994,
   0.4142064,
   0.4327562,
   0.4439322,
   0.4415146,
   0.47657,
   0.6199056,
   0.6826683,
   0.413541,
   0.5274928,
   0.5117308,
   0.6103804,
   1.066539,
   0.5952941,
   0.5720781,
   0.8041874,
   0.9226586,
   0.8766642,
   0.8012944,
   0.8296968,
   0.8614825,
   0.9307582,
   1.133242,
   1.609844,
   0.9643287,
   1.208199,
   1.121817};
   grae = new TGraphAsymmErrors(34,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,440);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} Mass [MeV/c^{2}]");
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
   
   Double_t _fx3027[34] = {
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
   Double_t _fy3027[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[34] = {
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
   Double_t _fely3027[34] = {
   0.25266,
   0.2240558,
   0.2086809,
   0.2663921,
   0.2846704,
   0.2820788,
   0.3249359,
   0.3583613,
   0.3934553,
   0.4071135,
   0.4360773,
   0.4280581,
   0.3978226,
   0.3696016,
   0.3259371,
   0.2938126,
   0.2965193,
   0.3135883,
   0.3028246,
   0.2681574,
   0.2798778,
   0.2582446,
   0.3684545,
   0.283586,
   0.3148671,
   0.3011185,
   0.327721,
   0.3007531,
   0.3562622,
   0.3992462,
   0.3413232,
   0.3559362,
   0.3656246,
   0.4824145};
   Double_t _fehx3027[34] = {
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
   Double_t _fehy3027[34] = {
   0.25266,
   0.2240558,
   0.2086809,
   0.2663921,
   0.2846704,
   0.2820788,
   0.3249359,
   0.3583613,
   0.3934553,
   0.4071135,
   0.4360773,
   0.4280581,
   0.3978226,
   0.3696016,
   0.3259371,
   0.2938126,
   0.2965193,
   0.3135883,
   0.3028246,
   0.2681574,
   0.2798778,
   0.2582446,
   0.3684545,
   0.283586,
   0.3148671,
   0.3011185,
   0.327721,
   0.3007531,
   0.3562622,
   0.3992462,
   0.3413232,
   0.3559362,
   0.3656246,
   0.4824145};
   grae = new TGraphAsymmErrors(34,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,440);
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
   
   Double_t _fx3028[34] = {
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
   Double_t _fy3028[34] = {
   0.8748456,
   0.8355208,
   0.7239787,
   0.9254982,
   0.9232153,
   0.72441,
   1.076521,
   0.7433296,
   0.8823376,
   1.007756,
   0.9154115,
   1.043468,
   0.8259955,
   0.6849591,
   0.8099761,
   0.4695266,
   0.6250733,
   0.9417394,
   0.8935609,
   0.6707892,
   0.5466156,
   1.112161,
   0.8480456,
   0.5939883,
   0.4386901,
   0.4039371,
   0.504502,
   1.276304,
   0.3261369,
   0.5138012,
   0.2921827,
   0.5555555,
   0.7219068,
   0.5537943};
   Double_t _felx3028[34] = {
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
   Double_t _fely3028[34] = {
   0.1093676,
   0.1006367,
   0.08847964,
   0.1114743,
   0.1002835,
   0.08663541,
   0.1017216,
   0.07892118,
   0.07650837,
   0.07021368,
   0.06022966,
   0.06054813,
   0.05899968,
   0.0757418,
   0.1143608,
   0.1086156,
   0.1409511,
   0.2072554,
   0.2324822,
   0.203485,
   0.1830523,
   0.2893564,
   0.3212715,
   0.225025,
   0.2184633,
   0.2319437,
   0.251237,
   0.3871689,
   0.2330105,
   0.3670884,
   0.2921827,
   0.39692,
   0.4145243,
   0.5537943};
   Double_t _fehx3028[34] = {
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
   Double_t _fehy3028[34] = {
   0.1066821,
   0.09825725,
   0.08635702,
   0.1088386,
   0.09814522,
   0.08460001,
   0.1017216,
   0.0772736,
   0.07650837,
   0.07021368,
   0.06022966,
   0.06054813,
   0.05899968,
   0.07409708,
   0.1111864,
   0.1036081,
   0.1346259,
   0.1981891,
   0.220341,
   0.1909234,
   0.1704293,
   0.2742449,
   0.2957135,
   0.2071237,
   0.1939572,
   0.2001367,
   0.2230545,
   0.363268,
   0.1874439,
   0.2953021,
   0.2219376,
   0.3193,
   0.3576795,
   0.4206538};
   grae = new TGraphAsymmErrors(34,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,440);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.803529);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_pi0_mass_all",34,0,400);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
