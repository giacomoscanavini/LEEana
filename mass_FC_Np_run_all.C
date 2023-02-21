#ifdef __CLING__
#pragma cling optimize(0)
#endif
void mass_FC_Np_run_all()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Feb 18 20:45:42 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",190,172,1200,900);
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
   pad1->Range(-61.53846,-7.336849,451.2821,811.301);
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
   
   TH1F *hmc__3 = new TH1F("hmc__3","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__3->SetBinContent(1,88.75661);
   hmc__3->SetBinContent(2,95.7385);
   hmc__3->SetBinContent(3,97.19659);
   hmc__3->SetBinContent(4,89.79826);
   hmc__3->SetBinContent(5,102.7798);
   hmc__3->SetBinContent(6,111.717);
   hmc__3->SetBinContent(7,121.5694);
   hmc__3->SetBinContent(8,149.6702);
   hmc__3->SetBinContent(9,183.3367);
   hmc__3->SetBinContent(10,253.5642);
   hmc__3->SetBinContent(11,329.0325);
   hmc__3->SetBinContent(12,366.8424);
   hmc__3->SetBinContent(13,293.6953);
   hmc__3->SetBinContent(14,154.0272);
   hmc__3->SetBinContent(15,74.03778);
   hmc__3->SetBinContent(16,48.74167);
   hmc__3->SetBinContent(17,32.80809);
   hmc__3->SetBinContent(18,25.80717);
   hmc__3->SetBinContent(19,20.86257);
   hmc__3->SetBinContent(20,18.2112);
   hmc__3->SetBinContent(21,19.36928);
   hmc__3->SetBinContent(22,13.8863);
   hmc__3->SetBinContent(23,11.90526);
   hmc__3->SetBinContent(24,14.64555);
   hmc__3->SetBinContent(25,11.288);
   hmc__3->SetBinContent(26,11.14341);
   hmc__3->SetBinContent(27,8.57971);
   hmc__3->SetBinContent(28,8.67303);
   hmc__3->SetBinContent(29,10.05555);
   hmc__3->SetBinContent(30,6.735259);
   hmc__3->SetBinContent(31,5.57837);
   hmc__3->SetBinContent(32,5.097555);
   hmc__3->SetBinContent(33,5.388772);
   hmc__3->SetBinContent(34,4.595507);
   hmc__3->SetBinContent(35,47.51381);
   hmc__3->SetBinError(1,4.636434);
   hmc__3->SetBinError(2,5.075733);
   hmc__3->SetBinError(3,5.191632);
   hmc__3->SetBinError(4,4.543039);
   hmc__3->SetBinError(5,4.778873);
   hmc__3->SetBinError(6,4.994747);
   hmc__3->SetBinError(7,4.862624);
   hmc__3->SetBinError(8,5.460465);
   hmc__3->SetBinError(9,5.70308);
   hmc__3->SetBinError(10,6.718685);
   hmc__3->SetBinError(11,7.327987);
   hmc__3->SetBinError(12,7.878186);
   hmc__3->SetBinError(13,7.721016);
   hmc__3->SetBinError(14,5.187682);
   hmc__3->SetBinError(15,4.081675);
   hmc__3->SetBinError(16,3.10142);
   hmc__3->SetBinError(17,2.472946);
   hmc__3->SetBinError(18,2.285555);
   hmc__3->SetBinError(19,2.016293);
   hmc__3->SetBinError(20,1.978313);
   hmc__3->SetBinError(21,2.102112);
   hmc__3->SetBinError(22,1.737988);
   hmc__3->SetBinError(23,1.774053);
   hmc__3->SetBinError(24,1.795024);
   hmc__3->SetBinError(25,1.587689);
   hmc__3->SetBinError(26,1.624782);
   hmc__3->SetBinError(27,1.317114);
   hmc__3->SetBinError(28,1.36395);
   hmc__3->SetBinError(29,1.506741);
   hmc__3->SetBinError(30,1.134512);
   hmc__3->SetBinError(31,1.128825);
   hmc__3->SetBinError(32,1.066739);
   hmc__3->SetBinError(33,1.118788);
   hmc__3->SetBinError(34,0.9557954);
   hmc__3->SetBinError(35,3.259779);
   hmc__3->SetMinimum(-7.336849);
   hmc__3->SetMaximum(770.3691);
   hmc__3->SetEntries(2811.899);
   hmc__3->SetLineWidth(5);
   hmc__3->GetXaxis()->SetLabelFont(42);
   hmc__3->GetXaxis()->SetTitleOffset(1);
   hmc__3->GetXaxis()->SetTitleFont(42);
   hmc__3->GetYaxis()->SetTitle("Event counts");
   hmc__3->GetYaxis()->SetLabelFont(42);
   hmc__3->GetYaxis()->SetTitleFont(42);
   hmc__3->GetZaxis()->SetLabelFont(42);
   hmc__3->GetZaxis()->SetTitleOffset(1);
   hmc__3->GetZaxis()->SetTitleFont(42);
   hmc__3->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_2 = new TH1F("hs7_stack_2","",34,0,400);
   hs7_stack_2->SetMinimum(-2.083393e-08);
   hs7_stack_2->SetMaximum(385.1846);
   hs7_stack_2->SetDirectory(0);
   hs7_stack_2->SetStats(0);
   hs7_stack_2->SetLineWidth(2);
   hs7_stack_2->SetMarkerStyle(20);
   hs7_stack_2->GetXaxis()->SetNdivisions(509);
   hs7_stack_2->GetXaxis()->SetLabelFont(132);
   hs7_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_2->GetXaxis()->SetTitleFont(132);
   hs7_stack_2->GetYaxis()->SetNdivisions(509);
   hs7_stack_2->GetYaxis()->SetLabelFont(132);
   hs7_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_2->GetYaxis()->SetTitleFont(132);
   hs7_stack_2->GetZaxis()->SetLabelFont(132);
   hs7_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_2->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,3.256907);
   hbadmatch_stack_1->SetBinContent(2,3.10966);
   hbadmatch_stack_1->SetBinContent(3,3.046406);
   hbadmatch_stack_1->SetBinContent(4,2.254168);
   hbadmatch_stack_1->SetBinContent(5,2.927994);
   hbadmatch_stack_1->SetBinContent(6,2.502046);
   hbadmatch_stack_1->SetBinContent(7,3.350523);
   hbadmatch_stack_1->SetBinContent(8,3.300281);
   hbadmatch_stack_1->SetBinContent(9,4.261628);
   hbadmatch_stack_1->SetBinContent(10,3.805517);
   hbadmatch_stack_1->SetBinContent(11,5.095655);
   hbadmatch_stack_1->SetBinContent(12,3.447119);
   hbadmatch_stack_1->SetBinContent(13,3.315595);
   hbadmatch_stack_1->SetBinContent(14,2.070662);
   hbadmatch_stack_1->SetBinContent(15,3.430242);
   hbadmatch_stack_1->SetBinContent(16,2.229022);
   hbadmatch_stack_1->SetBinContent(17,0.3934307);
   hbadmatch_stack_1->SetBinContent(18,0.004623768);
   hbadmatch_stack_1->SetBinContent(19,0.1950248);
   hbadmatch_stack_1->SetBinContent(20,0.7319179);
   hbadmatch_stack_1->SetBinContent(21,0.7336084);
   hbadmatch_stack_1->SetBinContent(22,0.5901461);
   hbadmatch_stack_1->SetBinContent(23,1.217248);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,0.5867651);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinContent(28,0.1967154);
   hbadmatch_stack_1->SetBinContent(29,0.536893);
   hbadmatch_stack_1->SetBinContent(33,0.3401776);
   hbadmatch_stack_1->SetBinContent(34,0.1967154);
   hbadmatch_stack_1->SetBinContent(35,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.0276);
   hbadmatch_stack_1->SetBinError(2,0.8497213);
   hbadmatch_stack_1->SetBinError(3,0.9061648);
   hbadmatch_stack_1->SetBinError(4,0.7920033);
   hbadmatch_stack_1->SetBinError(5,1.011635);
   hbadmatch_stack_1->SetBinError(6,0.8830122);
   hbadmatch_stack_1->SetBinError(7,0.8802656);
   hbadmatch_stack_1->SetBinError(8,0.9947341);
   hbadmatch_stack_1->SetBinError(9,1.046434);
   hbadmatch_stack_1->SetBinError(10,0.982069);
   hbadmatch_stack_1->SetBinError(11,1.154148);
   hbadmatch_stack_1->SetBinError(12,0.9887256);
   hbadmatch_stack_1->SetBinError(13,1.35214);
   hbadmatch_stack_1->SetBinError(14,0.8131534);
   hbadmatch_stack_1->SetBinError(15,2.032728);
   hbadmatch_stack_1->SetBinError(16,0.903739);
   hbadmatch_stack_1->SetBinError(17,0.2781975);
   hbadmatch_stack_1->SetBinError(18,0.004623768);
   hbadmatch_stack_1->SetBinError(19,0.1950249);
   hbadmatch_stack_1->SetBinError(20,0.438694);
   hbadmatch_stack_1->SetBinError(21,0.4394482);
   hbadmatch_stack_1->SetBinError(22,0.340721);
   hbadmatch_stack_1->SetBinError(23,0.6211758);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.3387718);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetBinError(28,0.1967154);
   hbadmatch_stack_1->SetBinError(29,0.3929602);
   hbadmatch_stack_1->SetBinError(33,0.3401776);
   hbadmatch_stack_1->SetBinError(34,0.1967154);
   hbadmatch_stack_1->SetBinError(35,0.1967154);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1518;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hext_stack_2->SetBinContent(1,10.3205);
   hext_stack_2->SetBinContent(2,11.31964);
   hext_stack_2->SetBinContent(3,14.97903);
   hext_stack_2->SetBinContent(4,8.510989);
   hext_stack_2->SetBinContent(5,7.462776);
   hext_stack_2->SetBinContent(6,10.63054);
   hext_stack_2->SetBinContent(7,7.048997);
   hext_stack_2->SetBinContent(8,13.54734);
   hext_stack_2->SetBinContent(9,9.779857);
   hext_stack_2->SetBinContent(10,16.13093);
   hext_stack_2->SetBinContent(11,13.18546);
   hext_stack_2->SetBinContent(12,21.13421);
   hext_stack_2->SetBinContent(13,24.82667);
   hext_stack_2->SetBinContent(14,4.45659);
   hext_stack_2->SetBinContent(15,3.159);
   hext_stack_2->SetBinContent(16,3.412785);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,0.973192);
   hext_stack_2->SetBinContent(19,0.4065989);
   hext_stack_2->SetBinContent(20,0.8131978);
   hext_stack_2->SetBinContent(21,0.4065989);
   hext_stack_2->SetBinContent(22,1.219797);
   hext_stack_2->SetBinContent(23,0.3243973);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,0.6416141);
   hext_stack_2->SetBinContent(28,0.3243973);
   hext_stack_2->SetBinContent(29,0.3243973);
   hext_stack_2->SetBinContent(32,0.3243973);
   hext_stack_2->SetBinContent(33,0.4065989);
   hext_stack_2->SetBinContent(35,1.137595);
   hext_stack_2->SetBinError(1,2.305084);
   hext_stack_2->SetBinError(2,2.271702);
   hext_stack_2->SetBinError(3,2.578475);
   hext_stack_2->SetBinError(4,1.862475);
   hext_stack_2->SetBinError(5,1.700535);
   hext_stack_2->SetBinError(6,2.412685);
   hext_stack_2->SetBinError(7,1.711052);
   hext_stack_2->SetBinError(8,2.665422);
   hext_stack_2->SetBinError(9,2.166691);
   hext_stack_2->SetBinError(10,2.830622);
   hext_stack_2->SetBinError(11,2.490661);
   hext_stack_2->SetBinError(12,3.314718);
   hext_stack_2->SetBinError(13,3.624361);
   hext_stack_2->SetBinError(14,1.322689);
   hext_stack_2->SetBinError(15,1.152637);
   hext_stack_2->SetBinError(16,1.14352);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,0.5618727);
   hext_stack_2->SetBinError(19,0.4065989);
   hext_stack_2->SetBinError(20,0.5750177);
   hext_stack_2->SetBinError(21,0.4065989);
   hext_stack_2->SetBinError(22,0.7042499);
   hext_stack_2->SetBinError(23,0.3243973);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,0.6416141);
   hext_stack_2->SetBinError(28,0.3243973);
   hext_stack_2->SetBinError(29,0.3243973);
   hext_stack_2->SetBinError(32,0.3243973);
   hext_stack_2->SetBinError(33,0.4065989);
   hext_stack_2->SetBinError(35,0.6602113);
   hext_stack_2->SetEntries(428);

   ci = 1519;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hdirt_stack_3->SetBinContent(1,0.5388689);
   hdirt_stack_3->SetBinContent(2,0.1380715);
   hdirt_stack_3->SetBinContent(3,0.1678385);
   hdirt_stack_3->SetBinContent(4,0.9363116);
   hdirt_stack_3->SetBinContent(5,0.9842969);
   hdirt_stack_3->SetBinContent(6,1.489913);
   hdirt_stack_3->SetBinContent(7,0.4247338);
   hdirt_stack_3->SetBinContent(8,0.4377912);
   hdirt_stack_3->SetBinContent(9,0.3240464);
   hdirt_stack_3->SetBinContent(10,1.487391);
   hdirt_stack_3->SetBinContent(11,1.188972);
   hdirt_stack_3->SetBinContent(12,1.21377);
   hdirt_stack_3->SetBinContent(13,1.058728);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.2516114);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinContent(27,0.1380715);
   hdirt_stack_3->SetBinError(1,0.4239131);
   hdirt_stack_3->SetBinError(2,0.1380715);
   hdirt_stack_3->SetBinError(3,0.165303);
   hdirt_stack_3->SetBinError(4,0.430901);
   hdirt_stack_3->SetBinError(5,0.5081655);
   hdirt_stack_3->SetBinError(6,0.5866508);
   hdirt_stack_3->SetBinError(7,0.4247338);
   hdirt_stack_3->SetBinError(8,0.3095651);
   hdirt_stack_3->SetBinError(9,0.2316256);
   hdirt_stack_3->SetBinError(10,1.013785);
   hdirt_stack_3->SetBinError(11,0.4913873);
   hdirt_stack_3->SetBinError(12,0.5532013);
   hdirt_stack_3->SetBinError(13,0.5001967);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(18,0.2516114);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetBinError(27,0.1380715);
   hdirt_stack_3->SetEntries(50);

   ci = 1520;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,5.270268);
   houtFV_stack_4->SetBinContent(2,6.82859);
   houtFV_stack_4->SetBinContent(3,6.498742);
   houtFV_stack_4->SetBinContent(4,4.643166);
   houtFV_stack_4->SetBinContent(5,4.299228);
   houtFV_stack_4->SetBinContent(6,5.868636);
   houtFV_stack_4->SetBinContent(7,5.355898);
   houtFV_stack_4->SetBinContent(8,5.071757);
   houtFV_stack_4->SetBinContent(9,4.691622);
   houtFV_stack_4->SetBinContent(10,8.065899);
   houtFV_stack_4->SetBinContent(11,7.075153);
   houtFV_stack_4->SetBinContent(12,8.877773);
   houtFV_stack_4->SetBinContent(13,6.379261);
   houtFV_stack_4->SetBinContent(14,5.570109);
   houtFV_stack_4->SetBinContent(15,2.548847);
   houtFV_stack_4->SetBinContent(16,1.127039);
   houtFV_stack_4->SetBinContent(17,0.9286332);
   houtFV_stack_4->SetBinContent(18,0.3934307);
   houtFV_stack_4->SetBinContent(19,0.8278986);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(24,0.5867651);
   houtFV_stack_4->SetBinContent(25,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.7336084);
   houtFV_stack_4->SetBinContent(27,0.5884556);
   houtFV_stack_4->SetBinContent(28,0.8770706);
   houtFV_stack_4->SetBinContent(29,0.1967154);
   houtFV_stack_4->SetBinContent(30,0.1967154);
   houtFV_stack_4->SetBinContent(31,0.1967154);
   houtFV_stack_4->SetBinContent(33,0.1967154);
   houtFV_stack_4->SetBinContent(35,0.1967154);
   houtFV_stack_4->SetBinError(1,1.19395);
   houtFV_stack_4->SetBinError(2,1.36537);
   houtFV_stack_4->SetBinError(3,1.271764);
   houtFV_stack_4->SetBinError(4,1.075057);
   houtFV_stack_4->SetBinError(5,1.056313);
   houtFV_stack_4->SetBinError(6,1.237723);
   houtFV_stack_4->SetBinError(7,1.183568);
   houtFV_stack_4->SetBinError(8,1.117347);
   houtFV_stack_4->SetBinError(9,1.0578);
   houtFV_stack_4->SetBinError(10,1.44335);
   houtFV_stack_4->SetBinError(11,1.260811);
   houtFV_stack_4->SetBinError(12,1.466885);
   houtFV_stack_4->SetBinError(13,1.311986);
   houtFV_stack_4->SetBinError(14,1.177384);
   houtFV_stack_4->SetBinError(15,0.7069292);
   houtFV_stack_4->SetBinError(16,0.5201044);
   houtFV_stack_4->SetBinError(17,0.48078);
   houtFV_stack_4->SetBinError(18,0.2781975);
   houtFV_stack_4->SetBinError(19,0.4156459);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(24,0.3387718);
   houtFV_stack_4->SetBinError(25,0.1950249);
   houtFV_stack_4->SetBinError(26,0.4394482);
   houtFV_stack_4->SetBinError(27,0.3397478);
   houtFV_stack_4->SetBinError(28,0.5197486);
   houtFV_stack_4->SetBinError(29,0.1967154);
   houtFV_stack_4->SetBinError(30,0.1967154);
   houtFV_stack_4->SetBinError(31,0.1967154);
   houtFV_stack_4->SetBinError(33,0.1967154);
   houtFV_stack_4->SetBinError(35,0.1967154);
   houtFV_stack_4->SetEntries(411);

   ci = 1521;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.6260899);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2263758);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1376284);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1522;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.613304);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.6701043);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7798718);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.7391858);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.478708);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.772158);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.966458);
   hNCpi0inFVqe_stack_6->SetBinContent(12,2.133858);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.40829);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.31114);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.557504);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2517472);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3419921);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.220864);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2452205);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4310268);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.4690095);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.4164057);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.4219765);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3536475);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3851684);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2486359);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(34,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1523;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,27.75198);
   hNCpi0inFVres_stack_7->SetBinContent(2,26.85934);
   hNCpi0inFVres_stack_7->SetBinContent(3,26.00406);
   hNCpi0inFVres_stack_7->SetBinContent(4,29.35008);
   hNCpi0inFVres_stack_7->SetBinContent(5,36.23875);
   hNCpi0inFVres_stack_7->SetBinContent(6,42.3645);
   hNCpi0inFVres_stack_7->SetBinContent(7,50.05546);
   hNCpi0inFVres_stack_7->SetBinContent(8,68.17259);
   hNCpi0inFVres_stack_7->SetBinContent(9,91.44211);
   hNCpi0inFVres_stack_7->SetBinContent(10,139.5718);
   hNCpi0inFVres_stack_7->SetBinContent(11,195.1085);
   hNCpi0inFVres_stack_7->SetBinContent(12,217.5652);
   hNCpi0inFVres_stack_7->SetBinContent(13,161.5365);
   hNCpi0inFVres_stack_7->SetBinContent(14,79.15068);
   hNCpi0inFVres_stack_7->SetBinContent(15,34.27913);
   hNCpi0inFVres_stack_7->SetBinContent(16,20.83343);
   hNCpi0inFVres_stack_7->SetBinContent(17,11.52989);
   hNCpi0inFVres_stack_7->SetBinContent(18,8.237501);
   hNCpi0inFVres_stack_7->SetBinContent(19,6.538922);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.680151);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.435788);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.582338);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.664294);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.956416);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.969202);
   hNCpi0inFVres_stack_7->SetBinContent(26,2.440595);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.54879);
   hNCpi0inFVres_stack_7->SetBinContent(28,1.408458);
   hNCpi0inFVres_stack_7->SetBinContent(29,2.159934);
   hNCpi0inFVres_stack_7->SetBinContent(30,1.11484);
   hNCpi0inFVres_stack_7->SetBinContent(31,1.758044);
   hNCpi0inFVres_stack_7->SetBinContent(32,0.753636);
   hNCpi0inFVres_stack_7->SetBinContent(33,1.493158);
   hNCpi0inFVres_stack_7->SetBinContent(34,1.018522);
   hNCpi0inFVres_stack_7->SetBinContent(35,5.746601);
   hNCpi0inFVres_stack_7->SetBinError(1,1.724332);
   hNCpi0inFVres_stack_7->SetBinError(2,1.684233);
   hNCpi0inFVres_stack_7->SetBinError(3,1.616028);
   hNCpi0inFVres_stack_7->SetBinError(4,1.741979);
   hNCpi0inFVres_stack_7->SetBinError(5,1.964393);
   hNCpi0inFVres_stack_7->SetBinError(6,2.138711);
   hNCpi0inFVres_stack_7->SetBinError(7,2.319191);
   hNCpi0inFVres_stack_7->SetBinError(8,2.682102);
   hNCpi0inFVres_stack_7->SetBinError(9,3.08527);
   hNCpi0inFVres_stack_7->SetBinError(10,3.858911);
   hNCpi0inFVres_stack_7->SetBinError(11,4.638807);
   hNCpi0inFVres_stack_7->SetBinError(12,4.792708);
   hNCpi0inFVres_stack_7->SetBinError(13,4.199281);
   hNCpi0inFVres_stack_7->SetBinError(14,3.029116);
   hNCpi0inFVres_stack_7->SetBinError(15,1.967825);
   hNCpi0inFVres_stack_7->SetBinError(16,1.574079);
   hNCpi0inFVres_stack_7->SetBinError(17,1.104059);
   hNCpi0inFVres_stack_7->SetBinError(18,0.8973732);
   hNCpi0inFVres_stack_7->SetBinError(19,0.8308622);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5488618);
   hNCpi0inFVres_stack_7->SetBinError(21,0.701309);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5814036);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5083028);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5652814);
   hNCpi0inFVres_stack_7->SetBinError(25,0.5544478);
   hNCpi0inFVres_stack_7->SetBinError(26,0.5684114);
   hNCpi0inFVres_stack_7->SetBinError(27,0.4254218);
   hNCpi0inFVres_stack_7->SetBinError(28,0.3972726);
   hNCpi0inFVres_stack_7->SetBinError(29,0.5020753);
   hNCpi0inFVres_stack_7->SetBinError(30,0.3014643);
   hNCpi0inFVres_stack_7->SetBinError(31,0.5090049);
   hNCpi0inFVres_stack_7->SetBinError(32,0.2941681);
   hNCpi0inFVres_stack_7->SetBinError(33,0.4606363);
   hNCpi0inFVres_stack_7->SetBinError(34,0.3652876);
   hNCpi0inFVres_stack_7->SetBinError(35,0.8480564);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1524;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,5.480874);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.539922);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.465432);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.508942);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.484529);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.738789);
   hNCpi0inFVdis_stack_8->SetBinContent(7,11.54301);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.38017);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.47758);
   hNCpi0inFVdis_stack_8->SetBinContent(10,20.91211);
   hNCpi0inFVdis_stack_8->SetBinContent(11,30.00473);
   hNCpi0inFVdis_stack_8->SetBinContent(12,37.74902);
   hNCpi0inFVdis_stack_8->SetBinContent(13,31.25726);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.82235);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.348526);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.527538);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.139682);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.855194);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.756212);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.491326);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.169808);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.436526);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.268958);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.850954);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.585404);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.654822);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.682722);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.5719541);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.00424);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.8087721);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.2089179);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.501704);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.5440542);
   hNCpi0inFVdis_stack_8->SetBinContent(35,2.913234);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7130953);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8616015);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.758028);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7362352);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8397922);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.869806);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.127978);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.152582);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.230092);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.38956);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.753004);
   hNCpi0inFVdis_stack_8->SetBinError(12,2.010835);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.839989);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.294633);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9006568);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6232964);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7152758);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4855902);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4333528);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3753592);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.270502);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4374504);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3923435);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.3098478);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2501964);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.267003);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2684567);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.2970212);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.3738879);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.3187231);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.1121803);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2454852);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.2957079);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.5225865);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1525;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.5440542);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.307068);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.2957079);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.2032767);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1526;
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
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);

   ci = 1527;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   hNCpi0inFVother_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#990099");
   hNCpi0inFVother_stack_10->SetLineColor(ci);
   hNCpi0inFVother_stack_10->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVother_stack_10->GetZaxis()->SetTitleFont(42);
   hs7->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_11->SetBinContent(1,7.416704);
   hCCpi0inFV_stack_11->SetBinContent(2,8.687595);
   hCCpi0inFV_stack_11->SetBinContent(3,7.487491);
   hCCpi0inFV_stack_11->SetBinContent(4,9.843325);
   hCCpi0inFV_stack_11->SetBinContent(5,9.139489);
   hCCpi0inFV_stack_11->SetBinContent(6,14.51119);
   hCCpi0inFV_stack_11->SetBinContent(7,16.59695);
   hCCpi0inFV_stack_11->SetBinContent(8,19.91589);
   hCCpi0inFV_stack_11->SetBinContent(9,28.45883);
   hCCpi0inFV_stack_11->SetBinContent(10,33.28151);
   hCCpi0inFV_stack_11->SetBinContent(11,41.63076);
   hCCpi0inFV_stack_11->SetBinContent(12,46.29219);
   hCCpi0inFV_stack_11->SetBinContent(13,38.02814);
   hCCpi0inFV_stack_11->SetBinContent(14,23.42962);
   hCCpi0inFV_stack_11->SetBinContent(15,10.74685);
   hCCpi0inFV_stack_11->SetBinContent(16,8.354318);
   hCCpi0inFV_stack_11->SetBinContent(17,6.890482);
   hCCpi0inFV_stack_11->SetBinContent(18,4.05471);
   hCCpi0inFV_stack_11->SetBinContent(19,4.479978);
   hCCpi0inFV_stack_11->SetBinContent(20,4.74122);
   hCCpi0inFV_stack_11->SetBinContent(21,4.634714);
   hCCpi0inFV_stack_11->SetBinContent(22,3.608027);
   hCCpi0inFV_stack_11->SetBinContent(23,1.268811);
   hCCpi0inFV_stack_11->SetBinContent(24,3.239722);
   hCCpi0inFV_stack_11->SetBinContent(25,4.198173);
   hCCpi0inFV_stack_11->SetBinContent(26,2.052291);
   hCCpi0inFV_stack_11->SetBinContent(27,1.858957);
   hCCpi0inFV_stack_11->SetBinContent(28,1.503783);
   hCCpi0inFV_stack_11->SetBinContent(29,2.1425);
   hCCpi0inFV_stack_11->SetBinContent(30,1.414021);
   hCCpi0inFV_stack_11->SetBinContent(31,1.217248);
   hCCpi0inFV_stack_11->SetBinContent(32,1.123658);
   hCCpi0inFV_stack_11->SetBinContent(33,0.3917402);
   hCCpi0inFV_stack_11->SetBinContent(34,0.5352025);
   hCCpi0inFV_stack_11->SetBinContent(35,10.6084);
   hCCpi0inFV_stack_11->SetBinError(1,1.435158);
   hCCpi0inFV_stack_11->SetBinError(2,1.532404);
   hCCpi0inFV_stack_11->SetBinError(3,1.447791);
   hCCpi0inFV_stack_11->SetBinError(4,1.535049);
   hCCpi0inFV_stack_11->SetBinError(5,1.494371);
   hCCpi0inFV_stack_11->SetBinError(6,1.892094);
   hCCpi0inFV_stack_11->SetBinError(7,2.023551);
   hCCpi0inFV_stack_11->SetBinError(8,2.236493);
   hCCpi0inFV_stack_11->SetBinError(9,2.620467);
   hCCpi0inFV_stack_11->SetBinError(10,2.881546);
   hCCpi0inFV_stack_11->SetBinError(11,3.275425);
   hCCpi0inFV_stack_11->SetBinError(12,3.397646);
   hCCpi0inFV_stack_11->SetBinError(13,3.069615);
   hCCpi0inFV_stack_11->SetBinError(14,2.454153);
   hCCpi0inFV_stack_11->SetBinError(15,1.711334);
   hCCpi0inFV_stack_11->SetBinError(16,1.441881);
   hCCpi0inFV_stack_11->SetBinError(17,1.301582);
   hCCpi0inFV_stack_11->SetBinError(18,1.01996);
   hCCpi0inFV_stack_11->SetBinError(19,1.063603);
   hCCpi0inFV_stack_11->SetBinError(20,1.037199);
   hCCpi0inFV_stack_11->SetBinError(21,1.073516);
   hCCpi0inFV_stack_11->SetBinError(22,1.000625);
   hCCpi0inFV_stack_11->SetBinError(23,0.5889569);
   hCCpi0inFV_stack_11->SetBinError(24,0.8925513);
   hCCpi0inFV_stack_11->SetBinError(25,1.057044);
   hCCpi0inFV_stack_11->SetBinError(26,0.7073425);
   hCCpi0inFV_stack_11->SetBinError(27,0.6804124);
   hCCpi0inFV_stack_11->SetBinError(28,0.6339976);
   hCCpi0inFV_stack_11->SetBinError(29,0.7846555);
   hCCpi0inFV_stack_11->SetBinError(30,0.5355471);
   hCCpi0inFV_stack_11->SetBinError(31,0.6211758);
   hCCpi0inFV_stack_11->SetBinError(32,0.5188295);
   hCCpi0inFV_stack_11->SetBinError(33,0.2770047);
   hCCpi0inFV_stack_11->SetBinError(34,0.3921167);
   hCCpi0inFV_stack_11->SetBinError(35,1.618653);
   hCCpi0inFV_stack_11->SetEntries(1641);

   ci = 1528;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_11->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_11->SetLineColor(ci);
   hCCpi0inFV_stack_11->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_11->GetZaxis()->SetTitleFont(42);
   hs7->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_12->SetBinContent(1,11.8626);
   hNCinFV_stack_12->SetBinContent(2,10.9289);
   hNCinFV_stack_12->SetBinContent(3,8.442837);
   hNCinFV_stack_12->SetBinContent(4,11.22874);
   hNCinFV_stack_12->SetBinContent(5,14.50842);
   hNCinFV_stack_12->SetBinContent(6,7.135379);
   hNCinFV_stack_12->SetBinContent(7,10.95365);
   hNCinFV_stack_12->SetBinContent(8,9.690989);
   hNCinFV_stack_12->SetBinContent(9,12.31544);
   hNCinFV_stack_12->SetBinContent(10,12.85571);
   hNCinFV_stack_12->SetBinContent(11,17.19904);
   hNCinFV_stack_12->SetBinContent(12,11.79653);
   hNCinFV_stack_12->SetBinContent(13,12.21738);
   hNCinFV_stack_12->SetBinContent(14,10.64366);
   hNCinFV_stack_12->SetBinContent(15,6.697148);
   hNCinFV_stack_12->SetBinContent(16,4.588223);
   hNCinFV_stack_12->SetBinContent(17,4.304679);
   hNCinFV_stack_12->SetBinContent(18,5.222087);
   hNCinFV_stack_12->SetBinContent(19,3.808123);
   hNCinFV_stack_12->SetBinContent(20,4.783247);
   hNCinFV_stack_12->SetBinContent(21,4.925019);
   hNCinFV_stack_12->SetBinContent(22,1.463836);
   hNCinFV_stack_12->SetBinContent(23,2.298879);
   hNCinFV_stack_12->SetBinContent(24,4.05302);
   hNCinFV_stack_12->SetBinContent(25,1.804013);
   hNCinFV_stack_12->SetBinContent(26,2.160488);
   hNCinFV_stack_12->SetBinContent(27,2.639056);
   hNCinFV_stack_12->SetBinContent(28,1.962082);
   hNCinFV_stack_12->SetBinContent(29,2.734337);
   hNCinFV_stack_12->SetBinContent(30,2.194063);
   hNCinFV_stack_12->SetBinContent(31,1.412273);
   hNCinFV_stack_12->SetBinContent(32,1.608988);
   hNCinFV_stack_12->SetBinContent(33,1.805704);
   hNCinFV_stack_12->SetBinContent(34,1.320373);
   hNCinFV_stack_12->SetBinContent(35,17.10714);
   hNCinFV_stack_12->SetBinError(1,1.777519);
   hNCinFV_stack_12->SetBinError(2,1.710683);
   hNCinFV_stack_12->SetBinError(3,1.481117);
   hNCinFV_stack_12->SetBinError(4,1.699163);
   hNCinFV_stack_12->SetBinError(5,1.943534);
   hNCinFV_stack_12->SetBinError(6,1.300961);
   hNCinFV_stack_12->SetBinError(7,1.654613);
   hNCinFV_stack_12->SetBinError(8,1.481518);
   hNCinFV_stack_12->SetBinError(9,1.732819);
   hNCinFV_stack_12->SetBinError(10,1.77719);
   hNCinFV_stack_12->SetBinError(11,2.086488);
   hNCinFV_stack_12->SetBinError(12,1.630001);
   hNCinFV_stack_12->SetBinError(13,1.755741);
   hNCinFV_stack_12->SetBinError(14,1.665248);
   hNCinFV_stack_12->SetBinError(15,1.287145);
   hNCinFV_stack_12->SetBinError(16,1.092434);
   hNCinFV_stack_12->SetBinError(17,1.020141);
   hNCinFV_stack_12->SetBinError(18,1.210714);
   hNCinFV_stack_12->SetBinError(19,1.020428);
   hNCinFV_stack_12->SetBinError(20,1.109705);
   hNCinFV_stack_12->SetBinError(21,1.143594);
   hNCinFV_stack_12->SetBinError(22,0.620407);
   hNCinFV_stack_12->SetBinError(23,0.7066675);
   hNCinFV_stack_12->SetBinError(24,1.019635);
   hNCinFV_stack_12->SetBinError(25,0.7075491);
   hNCinFV_stack_12->SetBinError(26,0.6514152);
   hNCinFV_stack_12->SetBinError(27,0.784283);
   hNCinFV_stack_12->SetBinError(28,0.6204697);
   hNCinFV_stack_12->SetBinError(29,0.8558255);
   hNCinFV_stack_12->SetBinError(30,0.7594044);
   hNCinFV_stack_12->SetBinError(31,0.6510715);
   hNCinFV_stack_12->SetBinError(32,0.6801404);
   hNCinFV_stack_12->SetBinError(33,0.7080169);
   hNCinFV_stack_12->SetBinError(34,0.5548703);
   hNCinFV_stack_12->SetBinError(35,2.0585);
   hNCinFV_stack_12->SetEntries(1026);

   ci = 1529;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_12->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_12->SetLineColor(ci);
   hNCinFV_stack_12->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_12->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_12->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_12->GetZaxis()->SetTitleFont(42);
   hs7->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_13->SetBinContent(1,15.09964);
   hnumuCCinFV_stack_13->SetBinContent(2,19.13436);
   hnumuCCinFV_stack_13->SetBinContent(3,23.05151);
   hnumuCCinFV_stack_13->SetBinContent(4,16.36386);
   hnumuCCinFV_stack_13->SetBinContent(5,18.36794);
   hnumuCCinFV_stack_13->SetBinContent(6,18.04318);
   hnumuCCinFV_stack_13->SetBinContent(7,14.8653);
   hnumuCCinFV_stack_13->SetBinContent(8,15.84142);
   hnumuCCinFV_stack_13->SetBinContent(9,14.22825);
   hnumuCCinFV_stack_13->SetBinContent(10,15.22092);
   hnumuCCinFV_stack_13->SetBinContent(11,14.22247);
   hnumuCCinFV_stack_13->SetBinContent(12,15.38609);
   hnumuCCinFV_stack_13->SetBinContent(13,12.67034);
   hnumuCCinFV_stack_13->SetBinContent(14,10.29334);
   hnumuCCinFV_stack_13->SetBinContent(15,5.269701);
   hnumuCCinFV_stack_13->SetBinContent(16,3.861376);
   hnumuCCinFV_stack_13->SetBinContent(17,3.962178);
   hnumuCCinFV_stack_13->SetBinContent(18,4.337584);
   hnumuCCinFV_stack_13->SetBinContent(19,2.290233);
   hnumuCCinFV_stack_13->SetBinContent(20,1.580094);
   hnumuCCinFV_stack_13->SetBinContent(21,2.811232);
   hnumuCCinFV_stack_13->SetBinContent(22,1.35105);
   hnumuCCinFV_stack_13->SetBinContent(23,2.103241);
   hnumuCCinFV_stack_13->SetBinContent(24,2.327459);
   hnumuCCinFV_stack_13->SetBinContent(25,0.5963737);
   hnumuCCinFV_stack_13->SetBinContent(26,1.873225);
   hnumuCCinFV_stack_13->SetBinContent(27,0.9269427);
   hnumuCCinFV_stack_13->SetBinContent(28,1.772769);
   hnumuCCinFV_stack_13->SetBinContent(29,0.9286332);
   hnumuCCinFV_stack_13->SetBinContent(30,0.7834804);
   hnumuCCinFV_stack_13->SetBinContent(31,0.785171);
   hnumuCCinFV_stack_13->SetBinContent(32,0.785171);
   hnumuCCinFV_stack_13->SetBinContent(33,0.4323627);
   hnumuCCinFV_stack_13->SetBinContent(34,0.5901461);
   hnumuCCinFV_stack_13->SetBinContent(35,8.229554);
   hnumuCCinFV_stack_13->SetBinError(1,2.102569);
   hnumuCCinFV_stack_13->SetBinError(2,2.950265);
   hnumuCCinFV_stack_13->SetBinError(3,3.130096);
   hnumuCCinFV_stack_13->SetBinError(4,2.489337);
   hnumuCCinFV_stack_13->SetBinError(5,2.600685);
   hnumuCCinFV_stack_13->SetBinError(6,2.356083);
   hnumuCCinFV_stack_13->SetBinError(7,2.15543);
   hnumuCCinFV_stack_13->SetBinError(8,2.128693);
   hnumuCCinFV_stack_13->SetBinError(9,2.093835);
   hnumuCCinFV_stack_13->SetBinError(10,2.120548);
   hnumuCCinFV_stack_13->SetBinError(11,1.935611);
   hnumuCCinFV_stack_13->SetBinError(12,2.450461);
   hnumuCCinFV_stack_13->SetBinError(13,2.970151);
   hnumuCCinFV_stack_13->SetBinError(14,1.731987);
   hnumuCCinFV_stack_13->SetBinError(15,1.16179);
   hnumuCCinFV_stack_13->SetBinError(16,1.001472);
   hnumuCCinFV_stack_13->SetBinError(17,1.065819);
   hnumuCCinFV_stack_13->SetBinError(18,1.05673);
   hnumuCCinFV_stack_13->SetBinError(19,0.7463877);
   hnumuCCinFV_stack_13->SetBinError(20,0.7517869);
   hnumuCCinFV_stack_13->SetBinError(21,0.9974642);
   hnumuCCinFV_stack_13->SetBinError(22,0.5736759);
   hnumuCCinFV_stack_13->SetBinError(23,1.10611);
   hnumuCCinFV_stack_13->SetBinError(24,0.8066566);
   hnumuCCinFV_stack_13->SetBinError(25,0.4207336);
   hnumuCCinFV_stack_13->SetBinError(26,0.7754413);
   hnumuCCinFV_stack_13->SetBinError(27,0.4800908);
   hnumuCCinFV_stack_13->SetBinError(28,0.6416781);
   hnumuCCinFV_stack_13->SetBinError(29,0.48078);
   hnumuCCinFV_stack_13->SetBinError(30,0.3917439);
   hnumuCCinFV_stack_13->SetBinError(31,0.3925882);
   hnumuCCinFV_stack_13->SetBinError(32,0.3925882);
   hnumuCCinFV_stack_13->SetBinError(33,0.3069635);
   hnumuCCinFV_stack_13->SetBinError(34,0.340721);
   hnumuCCinFV_stack_13->SetBinError(35,1.397509);
   hnumuCCinFV_stack_13->SetEntries(1066);

   ci = 1530;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_13->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_13->SetLineColor(ci);
   hnumuCCinFV_stack_13->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_13->GetZaxis()->SetTitleFont(42);
   hs7->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_14->SetBinContent(1,1.283801);
   hnueCCinFV_stack_14->SetBinContent(2,1.467536);
   hnueCCinFV_stack_14->SetBinContent(3,1.6075);
   hnueCCinFV_stack_14->SetBinContent(4,0.6850466);
   hnueCCinFV_stack_14->SetBinContent(5,0.5026693);
   hnueCCinFV_stack_14->SetBinContent(6,0.5817212);
   hnueCCinFV_stack_14->SetBinContent(7,0.4139598);
   hnueCCinFV_stack_14->SetBinContent(8,0.2107505);
   hnueCCinFV_stack_14->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(11,1.783327);
   hnueCCinFV_stack_14->SetBinContent(12,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(13,0.536893);
   hnueCCinFV_stack_14->SetBinContent(14,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(18,0.2538659);
   hnueCCinFV_stack_14->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(22,0.3405455);
   hnueCCinFV_stack_14->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(33,0.2107157);
   hnueCCinFV_stack_14->SetBinContent(34,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(35,1.322064);
   hnueCCinFV_stack_14->SetBinError(1,0.5950324);
   hnueCCinFV_stack_14->SetBinError(2,0.610627);
   hnueCCinFV_stack_14->SetBinError(3,0.7343427);
   hnueCCinFV_stack_14->SetBinError(4,0.3976338);
   hnueCCinFV_stack_14->SetBinError(5,0.3554931);
   hnueCCinFV_stack_14->SetBinError(6,0.4330921);
   hnueCCinFV_stack_14->SetBinError(7,0.4139598);
   hnueCCinFV_stack_14->SetBinError(8,0.2107505);
   hnueCCinFV_stack_14->SetBinError(9,0.1967154);
   hnueCCinFV_stack_14->SetBinError(11,0.8069925);
   hnueCCinFV_stack_14->SetBinError(12,0.3921167);
   hnueCCinFV_stack_14->SetBinError(13,0.3929602);
   hnueCCinFV_stack_14->SetBinError(14,0.438694);
   hnueCCinFV_stack_14->SetBinError(17,0.1967154);
   hnueCCinFV_stack_14->SetBinError(18,0.2538659);
   hnueCCinFV_stack_14->SetBinError(19,0.1967154);
   hnueCCinFV_stack_14->SetBinError(20,0.1950249);
   hnueCCinFV_stack_14->SetBinError(22,0.3401778);
   hnueCCinFV_stack_14->SetBinError(23,0.3401776);
   hnueCCinFV_stack_14->SetBinError(33,0.2107157);
   hnueCCinFV_stack_14->SetBinError(34,0.1950249);
   hnueCCinFV_stack_14->SetBinError(35,0.5554667);
   hnueCCinFV_stack_14->SetEntries(54);

   ci = 1531;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_14->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_14->SetLineColor(ci);
   hnueCCinFV_stack_14->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_14->GetZaxis()->SetTitleFont(42);
   hs7->Add(hnueCCinFV_stack_14,"");
   hs7->Draw("hist same");
   
   Double_t _fx3004[34] = {
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
   Double_t _fy3004[34] = {
   64,
   68,
   72,
   77,
   81,
   74,
   113,
   81,
   140,
   202,
   228,
   297,
   203,
   81,
   59,
   23,
   21,
   17,
   16,
   15,
   11,
   15,
   8,
   8,
   3,
   5,
   7,
   8,
   3,
   4,
   2,
   4,
   2,
   2};
   Double_t _felx3004[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3004[34] = {
   8,
   8.246211,
   8.485281,
   8.774964,
   9,
   8.602325,
   10.63015,
   9,
   11.83216,
   14.21267,
   15.09967,
   17.23369,
   14.24781,
   9,
   7.681146,
   4.795832,
   4.582576,
   4.123106,
   4,
   3.872983,
   3.316625,
   3.872983,
   2.828427,
   2.828427,
   1.732051,
   2.236068,
   2.645751,
   2.828427,
   1.732051,
   2,
   1.414214,
   2,
   1.414214,
   1.414214};
   Double_t _fehx3004[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3004[34] = {
   8,
   8.246211,
   8.485281,
   8.774964,
   9,
   8.602325,
   10.63015,
   9,
   11.83216,
   14.21267,
   15.09967,
   17.23369,
   14.24781,
   9,
   7.681146,
   4.795832,
   4.582576,
   4.123106,
   4,
   3.872983,
   3.316625,
   3.872983,
   2.828427,
   2.828427,
   1.732051,
   2.236068,
   2.645751,
   2.828427,
   1.732051,
   2,
   1.414214,
   2,
   1.414214,
   1.414214};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,440);
   Graph_Graph3004->SetMinimum(0.5272078);
   Graph_Graph3004->SetMaximum(345.5985);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.72","h");
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
   entry=leg->AddEntry("","BNB Data, 2014.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.7","F");

   ci = 1518;
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

   ci = 1519;
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

   ci = 1520;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 94.9","F");

   ci = 1521;
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

   ci = 1522;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

   ci = 1523;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1306.6","F");

   ci = 1524;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  243.9","F");

   ci = 1525;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1526;
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
   entry=leg->AddEntry("hNCpi0inFVother_stack_10","NC#pi^{0} other,  0.0","F");

   ci = 1527;
   color = new TColor(ci, 0.6, 0, 0.6, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 373.2","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 223.6","F");

   ci = 1529;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 262.2","F");

   ci = 1530;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 12.5","F");

   ci = 1531;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all");
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
   
   Double_t _fx3005[34] = {
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
   Double_t _fy3005[34] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3005[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3005[34] = {
   0.05223762,
   0.05301664,
   0.05341373,
   0.05059162,
   0.04649621,
   0.04470893,
   0.03999876,
   0.03648331,
   0.03110714,
   0.02649698,
   0.02227132,
   0.02147567,
   0.02628921,
   0.0336803,
   0.05512963,
   0.06362975,
   0.0753761,
   0.08856278,
   0.09664644,
   0.1086317,
   0.1085281,
   0.1251585,
   0.1490143,
   0.1225645,
   0.1406529,
   0.1458065,
   0.153515,
   0.1572634,
   0.1498418,
   0.1684437,
   0.2023575,
   0.2092648,
   0.2076147,
   0.2079848};
   Double_t _fehx3005[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3005[34] = {
   0.05223762,
   0.05301664,
   0.05341373,
   0.05059162,
   0.04649621,
   0.04470893,
   0.03999876,
   0.03648331,
   0.03110714,
   0.02649698,
   0.02227132,
   0.02147567,
   0.02628921,
   0.0336803,
   0.05512963,
   0.06362975,
   0.0753761,
   0.08856278,
   0.09664644,
   0.1086317,
   0.1085281,
   0.1251585,
   0.1490143,
   0.1225645,
   0.1406529,
   0.1458065,
   0.153515,
   0.1572634,
   0.1498418,
   0.1684437,
   0.2023575,
   0.2092648,
   0.2076147,
   0.2079848};
   grae = new TGraphAsymmErrors(34,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#cccccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,440);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(2);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetTitle("Reco #pi^{0} mass [MeV]");
   Graph_Graph3005->GetXaxis()->SetRange(1,91);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("a2");
   
   Double_t _fx3006[34] = {
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
   Double_t _fy3006[34] = {
   0.721073,
   0.7102681,
   0.7407668,
   0.8574777,
   0.7880924,
   0.662388,
   0.9295105,
   0.5411899,
   0.7636224,
   0.7966425,
   0.6929407,
   0.8096119,
   0.6911926,
   0.5258812,
   0.7968904,
   0.4718755,
   0.6400861,
   0.6587317,
   0.7669236,
   0.8236688,
   0.5679095,
   1.080202,
   0.6719721,
   0.546241,
   0.265769,
   0.4486957,
   0.8158784,
   0.9223997,
   0.2983427,
   0.5938896,
   0.3585277,
   0.78469,
   0.371142,
   0.4352077};
   Double_t _felx3006[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fely3006[34] = {
   0.09013413,
   0.08613265,
   0.0873002,
   0.09771865,
   0.08756582,
   0.07700104,
   0.08744099,
   0.06013221,
   0.06453787,
   0.05605157,
   0.04589112,
   0.04697845,
   0.04851221,
   0.05843125,
   0.1037463,
   0.09839284,
   0.1396782,
   0.1597659,
   0.1917309,
   0.2126704,
   0.1712312,
   0.2789068,
   0.237578,
   0.1931254,
   0.1534418,
   0.2006628,
   0.308373,
   0.3261175,
   0.1722482,
   0.2969448,
   0.2535173,
   0.392345,
   0.2624371,
   0.3077383};
   Double_t _fehx3006[34] = {
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
   5.882353,
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
   Double_t _fehy3006[34] = {
   0.09013413,
   0.08613265,
   0.0873002,
   0.09771865,
   0.08756582,
   0.07700104,
   0.08744099,
   0.06013221,
   0.06453787,
   0.05605157,
   0.04589112,
   0.04697845,
   0.04851221,
   0.05843125,
   0.1037463,
   0.09839284,
   0.1396782,
   0.1597659,
   0.1917309,
   0.2126704,
   0.1712312,
   0.2789068,
   0.237578,
   0.1931254,
   0.1534418,
   0.2006628,
   0.308373,
   0.3261175,
   0.1722482,
   0.2969448,
   0.2535173,
   0.392345,
   0.2624371,
   0.3077383};
   grae = new TGraphAsymmErrors(34,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,440);
   Graph_Graph3006->SetMinimum(0.09450929);
   Graph_Graph3006->SetMaximum(1.484518);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetNdivisions(509);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("p ");
   
   TH1F *hist__4 = new TH1F("hist__4","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);

   ci = TColor::GetColor("#000099");
   hist__4->SetLineColor(ci);
   hist__4->GetXaxis()->SetLabelFont(42);
   hist__4->GetXaxis()->SetTitleOffset(1);
   hist__4->GetXaxis()->SetTitleFont(42);
   hist__4->GetYaxis()->SetLabelFont(42);
   hist__4->GetYaxis()->SetTitleFont(42);
   hist__4->GetZaxis()->SetLabelFont(42);
   hist__4->GetZaxis()->SetTitleOffset(1);
   hist__4->GetZaxis()->SetTitleFont(42);
   hist__4->Draw("axis same");
   TLine *line = new TLine(0,1,400,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.15,0.75,0.7,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.07);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred stat. uncertainty (Bayesian)","F");

   ci = TColor::GetColor("#cccccc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1000);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","Data stat. uncertainty (Bayesian)","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   leg->Draw();
   pad2->Modified();
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
