#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sun Oct 23 18:44:00 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",164,172,1200,900);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmc__19->SetBinContent(1,79.67167);
   hmc__19->SetBinContent(2,88.87116);
   hmc__19->SetBinContent(3,91.22572);
   hmc__19->SetBinContent(4,79.65949);
   hmc__19->SetBinContent(5,90.82295);
   hmc__19->SetBinContent(6,99.2487);
   hmc__19->SetBinContent(7,103.478);
   hmc__19->SetBinContent(8,124.7208);
   hmc__19->SetBinContent(9,148.8898);
   hmc__19->SetBinContent(10,201.2867);
   hmc__19->SetBinContent(11,254.2289);
   hmc__19->SetBinContent(12,285.1078);
   hmc__19->SetBinContent(13,233.0677);
   hmc__19->SetBinContent(14,126.9084);
   hmc__19->SetBinContent(15,62.07589);
   hmc__19->SetBinContent(16,45.72684);
   hmc__19->SetBinContent(17,30.71848);
   hmc__19->SetBinContent(18,23.62915);
   hmc__19->SetBinContent(19,19.32769);
   hmc__19->SetBinContent(20,17.53387);
   hmc__19->SetBinContent(21,18.77617);
   hmc__19->SetBinContent(22,13.81473);
   hmc__19->SetBinContent(23,11.17054);
   hmc__19->SetBinContent(24,13.58222);
   hmc__19->SetBinContent(25,10.46463);
   hmc__19->SetBinContent(26,10.36422);
   hmc__19->SetBinContent(27,8.527244);
   hmc__19->SetBinContent(28,8.887197);
   hmc__19->SetBinContent(29,8.804893);
   hmc__19->SetBinContent(30,6.249835);
   hmc__19->SetBinContent(31,5.643788);
   hmc__19->SetBinContent(32,5.964115);
   hmc__19->SetBinContent(33,5.200068);
   hmc__19->SetBinContent(34,4.729022);
   hmc__19->SetBinContent(35,50.67764);
   hmc__19->SetBinError(1,30.10584);
   hmc__19->SetBinError(2,28.10227);
   hmc__19->SetBinError(3,27.0404);
   hmc__19->SetBinError(4,27.94093);
   hmc__19->SetBinError(5,32.08289);
   hmc__19->SetBinError(6,38.88401);
   hmc__19->SetBinError(7,40.65006);
   hmc__19->SetBinError(8,56.76453);
   hmc__19->SetBinError(9,61.31367);
   hmc__19->SetBinError(10,87.33683);
   hmc__19->SetBinError(11,113.4059);
   hmc__19->SetBinError(12,125.031);
   hmc__19->SetBinError(13,114.6969);
   hmc__19->SetBinError(14,81.13407);
   hmc__19->SetBinError(15,48.13235);
   hmc__19->SetBinError(16,18.9345);
   hmc__19->SetBinError(17,14.53716);
   hmc__19->SetBinError(18,11.95897);
   hmc__19->SetBinError(19,11.33661);
   hmc__19->SetBinError(20,14.90732);
   hmc__19->SetBinError(21,10.59949);
   hmc__19->SetBinError(22,8.166899);
   hmc__19->SetBinError(23,8.893953);
   hmc__19->SetBinError(24,9.463647);
   hmc__19->SetBinError(25,8.29247);
   hmc__19->SetBinError(26,8.184355);
   hmc__19->SetBinError(27,8.096568);
   hmc__19->SetBinError(28,7.075516);
   hmc__19->SetBinError(29,7.75492);
   hmc__19->SetBinError(30,6.632152);
   hmc__19->SetBinError(31,6.888805);
   hmc__19->SetBinError(32,6.091023);
   hmc__19->SetBinError(33,5.759741);
   hmc__19->SetBinError(34,5.624713);
   hmc__19->SetBinError(35,32.83597);
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
   hs7_stack_7->SetMaximum(299.3632);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hbadmatch_stack_1->SetBinContent(1,3.256907);
   hbadmatch_stack_1->SetBinContent(2,3.154908);
   hbadmatch_stack_1->SetBinContent(3,2.996607);
   hbadmatch_stack_1->SetBinContent(4,2.165618);
   hbadmatch_stack_1->SetBinContent(5,2.643758);
   hbadmatch_stack_1->SetBinContent(6,2.666984);
   hbadmatch_stack_1->SetBinContent(7,3.100101);
   hbadmatch_stack_1->SetBinContent(8,2.893236);
   hbadmatch_stack_1->SetBinContent(9,3.944989);
   hbadmatch_stack_1->SetBinContent(10,3.264215);
   hbadmatch_stack_1->SetBinContent(11,4.466153);
   hbadmatch_stack_1->SetBinContent(12,3.441882);
   hbadmatch_stack_1->SetBinContent(13,3.06041);
   hbadmatch_stack_1->SetBinContent(14,1.714944);
   hbadmatch_stack_1->SetBinContent(15,3.281362);
   hbadmatch_stack_1->SetBinContent(16,2.321311);
   hbadmatch_stack_1->SetBinContent(17,0.3204102);
   hbadmatch_stack_1->SetBinContent(18,0.004623768);
   hbadmatch_stack_1->SetBinContent(19,0.1950248);
   hbadmatch_stack_1->SetBinContent(20,0.6426004);
   hbadmatch_stack_1->SetBinContent(21,0.5639433);
   hbadmatch_stack_1->SetBinContent(22,0.4689584);
   hbadmatch_stack_1->SetBinContent(23,1.521455);
   hbadmatch_stack_1->SetBinContent(24,0.1967154);
   hbadmatch_stack_1->SetBinContent(25,0.1019266);
   hbadmatch_stack_1->SetBinContent(26,0.5867651);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinContent(28,0.4207742);
   hbadmatch_stack_1->SetBinContent(29,0.6722587);
   hbadmatch_stack_1->SetBinContent(33,0.185722);
   hbadmatch_stack_1->SetBinContent(34,0.1236948);
   hbadmatch_stack_1->SetBinContent(35,0.2552519);
   hbadmatch_stack_1->SetBinError(1,1.0276);
   hbadmatch_stack_1->SetBinError(2,0.8968679);
   hbadmatch_stack_1->SetBinError(3,0.9050389);
   hbadmatch_stack_1->SetBinError(4,0.7749654);
   hbadmatch_stack_1->SetBinError(5,0.9710492);
   hbadmatch_stack_1->SetBinError(6,1.017063);
   hbadmatch_stack_1->SetBinError(7,0.836665);
   hbadmatch_stack_1->SetBinError(8,0.8938853);
   hbadmatch_stack_1->SetBinError(9,1.006143);
   hbadmatch_stack_1->SetBinError(10,0.8392772);
   hbadmatch_stack_1->SetBinError(11,1.039098);
   hbadmatch_stack_1->SetBinError(12,1.039278);
   hbadmatch_stack_1->SetBinError(13,1.323572);
   hbadmatch_stack_1->SetBinError(14,0.6966735);
   hbadmatch_stack_1->SetBinError(15,2.013171);
   hbadmatch_stack_1->SetBinError(16,0.9976816);
   hbadmatch_stack_1->SetBinError(17,0.2323733);
   hbadmatch_stack_1->SetBinError(18,0.004623768);
   hbadmatch_stack_1->SetBinError(19,0.1950249);
   hbadmatch_stack_1->SetBinError(20,0.4065585);
   hbadmatch_stack_1->SetBinError(21,0.3753944);
   hbadmatch_stack_1->SetBinError(22,0.2882678);
   hbadmatch_stack_1->SetBinError(23,0.827871);
   hbadmatch_stack_1->SetBinError(24,0.1967154);
   hbadmatch_stack_1->SetBinError(25,0.1019266);
   hbadmatch_stack_1->SetBinError(26,0.3387718);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   houtFV_stack_4->SetBinContent(1,4.894282);
   houtFV_stack_4->SetBinContent(2,6.513417);
   houtFV_stack_4->SetBinContent(3,5.986617);
   houtFV_stack_4->SetBinContent(4,3.88313);
   houtFV_stack_4->SetBinContent(5,3.756711);
   houtFV_stack_4->SetBinContent(6,5.256546);
   houtFV_stack_4->SetBinContent(7,4.732555);
   houtFV_stack_4->SetBinContent(8,4.479856);
   houtFV_stack_4->SetBinContent(9,4.170187);
   houtFV_stack_4->SetBinContent(10,7.500359);
   houtFV_stack_4->SetBinContent(11,6.716784);
   houtFV_stack_4->SetBinContent(12,7.487035);
   houtFV_stack_4->SetBinContent(13,5.613594);
   houtFV_stack_4->SetBinContent(14,5.304589);
   houtFV_stack_4->SetBinContent(15,2.509212);
   houtFV_stack_4->SetBinContent(16,1.149016);
   houtFV_stack_4->SetBinContent(17,0.8547089);
   houtFV_stack_4->SetBinContent(18,0.3934307);
   houtFV_stack_4->SetBinContent(19,0.76063);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.05405266);
   houtFV_stack_4->SetBinContent(23,0.128524);
   houtFV_stack_4->SetBinContent(24,0.5867651);
   houtFV_stack_4->SetBinContent(25,0.1950248);
   houtFV_stack_4->SetBinContent(26,0.9448334);
   houtFV_stack_4->SetBinContent(27,0.5221819);
   houtFV_stack_4->SetBinContent(28,0.8770706);
   houtFV_stack_4->SetBinContent(29,0.1967154);
   houtFV_stack_4->SetBinContent(30,0.1967154);
   houtFV_stack_4->SetBinContent(31,0.1967154);
   houtFV_stack_4->SetBinContent(33,0.1967154);
   houtFV_stack_4->SetBinContent(35,0.3726301);
   houtFV_stack_4->SetBinError(1,1.136013);
   houtFV_stack_4->SetBinError(2,1.343533);
   houtFV_stack_4->SetBinError(3,1.19277);
   houtFV_stack_4->SetBinError(4,0.9320655);
   houtFV_stack_4->SetBinError(5,0.9589335);
   houtFV_stack_4->SetBinError(6,1.147727);
   houtFV_stack_4->SetBinError(7,1.073972);
   houtFV_stack_4->SetBinError(8,1.025536);
   houtFV_stack_4->SetBinError(9,0.9688186);
   houtFV_stack_4->SetBinError(10,1.361732);
   houtFV_stack_4->SetBinError(11,1.218802);
   houtFV_stack_4->SetBinError(12,1.259961);
   houtFV_stack_4->SetBinError(13,1.209107);
   houtFV_stack_4->SetBinError(14,1.143741);
   houtFV_stack_4->SetBinError(15,0.7101167);
   houtFV_stack_4->SetBinError(16,0.5399198);
   houtFV_stack_4->SetBinError(17,0.4558289);
   houtFV_stack_4->SetBinError(18,0.2781975);
   houtFV_stack_4->SetBinError(19,0.3896252);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(22,0.05405266);
   houtFV_stack_4->SetBinError(23,0.128524);
   houtFV_stack_4->SetBinError(24,0.3387718);
   houtFV_stack_4->SetBinError(25,0.1950249);
   houtFV_stack_4->SetBinError(26,0.5664214);
   houtFV_stack_4->SetBinError(27,0.3065464);
   houtFV_stack_4->SetBinError(28,0.5197486);
   houtFV_stack_4->SetBinError(29,0.1967154);
   houtFV_stack_4->SetBinError(30,0.1967154);
   houtFV_stack_4->SetBinError(31,0.1967154);
   houtFV_stack_4->SetBinError(33,0.1967154);
   houtFV_stack_4->SetBinError(35,0.3726301);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1238139);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1124771);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1284112);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2001703);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3026566);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1277531);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1386369);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4456523);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7856137);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3646449);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.5611124);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3096087);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1294625);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1294197);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2425242);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05048421);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.08854323);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.05541593);
   hNCpi0inFVcoh_stack_5->SetBinContent(35,0.06518023);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.06543029);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06596624);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.09894142);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.07586444);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1834172);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1036777);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.102232);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2130662);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3065297);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1771921);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3035899);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1680587);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.06635191);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.09770959);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1447144);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03255344);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.06260951);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.04315819);
   hNCpi0inFVcoh_stack_5->SetBinError(35,0.04656421);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1749277);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.4446933);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1662448);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2375662);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.3526234);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.584006);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.554857);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4490447);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.9405508);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.206055);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.366503);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.292852);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.01623);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8740258);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1955231);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.3453187);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1390032);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1920793);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.06562697);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.1417359);
   hNCpi0inFVqe_stack_6->SetBinContent(34,0.1282646);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.08566124);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1722092);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.08637495);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1537132);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1282996);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3376495);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1815874);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1466194);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2708124);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3319446);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3264724);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2581578);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2998293);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2773833);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1261713);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1517612);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1216524);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.1332985);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.06562698);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02414102);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,20.09833);
   hNCpi0inFVres_stack_7->SetBinContent(2,20.88476);
   hNCpi0inFVres_stack_7->SetBinContent(3,21.21512);
   hNCpi0inFVres_stack_7->SetBinContent(4,21.50826);
   hNCpi0inFVres_stack_7->SetBinContent(5,26.74368);
   hNCpi0inFVres_stack_7->SetBinContent(6,30.61469);
   hNCpi0inFVres_stack_7->SetBinContent(7,35.3227);
   hNCpi0inFVres_stack_7->SetBinContent(8,47.74268);
   hNCpi0inFVres_stack_7->SetBinContent(9,62.2714);
   hNCpi0inFVres_stack_7->SetBinContent(10,93.67393);
   hNCpi0inFVres_stack_7->SetBinContent(11,129.0647);
   hNCpi0inFVres_stack_7->SetBinContent(12,145.5931);
   hNCpi0inFVres_stack_7->SetBinContent(13,108.9863);
   hNCpi0inFVres_stack_7->SetBinContent(14,55.58099);
   hNCpi0inFVres_stack_7->SetBinContent(15,24.2624);
   hNCpi0inFVres_stack_7->SetBinContent(16,16.7261);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.432169);
   hNCpi0inFVres_stack_7->SetBinContent(18,6.313636);
   hNCpi0inFVres_stack_7->SetBinContent(19,4.909489);
   hNCpi0inFVres_stack_7->SetBinContent(20,2.823492);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.763709);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.1829);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.040145);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.304324);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.06619);
   hNCpi0inFVres_stack_7->SetBinContent(26,2.003988);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.195478);
   hNCpi0inFVres_stack_7->SetBinContent(28,1.012071);
   hNCpi0inFVres_stack_7->SetBinContent(29,1.383022);
   hNCpi0inFVres_stack_7->SetBinContent(30,0.8768008);
   hNCpi0inFVres_stack_7->SetBinContent(31,1.361923);
   hNCpi0inFVres_stack_7->SetBinContent(32,1.106436);
   hNCpi0inFVres_stack_7->SetBinContent(33,1.381432);
   hNCpi0inFVres_stack_7->SetBinContent(34,0.7504392);
   hNCpi0inFVres_stack_7->SetBinContent(35,5.945044);
   hNCpi0inFVres_stack_7->SetBinError(1,1.366221);
   hNCpi0inFVres_stack_7->SetBinError(2,1.55289);
   hNCpi0inFVres_stack_7->SetBinError(3,1.536846);
   hNCpi0inFVres_stack_7->SetBinError(4,1.413463);
   hNCpi0inFVres_stack_7->SetBinError(5,1.592235);
   hNCpi0inFVres_stack_7->SetBinError(6,1.691038);
   hNCpi0inFVres_stack_7->SetBinError(7,1.898651);
   hNCpi0inFVres_stack_7->SetBinError(8,2.108957);
   hNCpi0inFVres_stack_7->SetBinError(9,2.417833);
   hNCpi0inFVres_stack_7->SetBinError(10,2.904896);
   hNCpi0inFVres_stack_7->SetBinError(11,3.318095);
   hNCpi0inFVres_stack_7->SetBinError(12,3.493856);
   hNCpi0inFVres_stack_7->SetBinError(13,3.080216);
   hNCpi0inFVres_stack_7->SetBinError(14,2.365381);
   hNCpi0inFVres_stack_7->SetBinError(15,1.459988);
   hNCpi0inFVres_stack_7->SetBinError(16,1.551434);
   hNCpi0inFVres_stack_7->SetBinError(17,1.049241);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7617226);
   hNCpi0inFVres_stack_7->SetBinError(19,0.6230728);
   hNCpi0inFVres_stack_7->SetBinError(20,0.4502385);
   hNCpi0inFVres_stack_7->SetBinError(21,0.6747291);
   hNCpi0inFVres_stack_7->SetBinError(22,0.6084575);
   hNCpi0inFVres_stack_7->SetBinError(23,0.417593);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4565741);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3679623);
   hNCpi0inFVres_stack_7->SetBinError(26,0.6065153);
   hNCpi0inFVres_stack_7->SetBinError(27,0.3364209);
   hNCpi0inFVres_stack_7->SetBinError(28,0.2906369);
   hNCpi0inFVres_stack_7->SetBinError(29,0.3294615);
   hNCpi0inFVres_stack_7->SetBinError(30,0.2770818);
   hNCpi0inFVres_stack_7->SetBinError(31,0.443008);
   hNCpi0inFVres_stack_7->SetBinError(32,0.6240559);
   hNCpi0inFVres_stack_7->SetBinError(33,0.5311903);
   hNCpi0inFVres_stack_7->SetBinError(34,0.2822422);
   hNCpi0inFVres_stack_7->SetBinError(35,0.895196);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.814409);
   hNCpi0inFVdis_stack_8->SetBinContent(2,6.004996);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.1374);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.656349);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.521195);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.071952);
   hNCpi0inFVdis_stack_8->SetBinContent(7,9.548693);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.070201);
   hNCpi0inFVdis_stack_8->SetBinContent(9,12.14588);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.75394);
   hNCpi0inFVdis_stack_8->SetBinContent(11,23.65418);
   hNCpi0inFVdis_stack_8->SetBinContent(12,29.15646);
   hNCpi0inFVdis_stack_8->SetBinContent(13,23.31983);
   hNCpi0inFVdis_stack_8->SetBinContent(14,13.29825);
   hNCpi0inFVdis_stack_8->SetBinContent(15,5.814608);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.604983);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.918087);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.547724);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.43285);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.39583);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.14059);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.294093);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.9845508);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.9162766);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.5232924);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.3964069);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.5443934);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.6729754);
   hNCpi0inFVdis_stack_8->SetBinContent(29,0.9257938);
   hNCpi0inFVdis_stack_8->SetBinContent(30,0.6459833);
   hNCpi0inFVdis_stack_8->SetBinContent(31,0.202285);
   hNCpi0inFVdis_stack_8->SetBinContent(32,0.4841692);
   hNCpi0inFVdis_stack_8->SetBinContent(33,0.09433559);
   hNCpi0inFVdis_stack_8->SetBinContent(34,0.5743923);
   hNCpi0inFVdis_stack_8->SetBinContent(35,3.350221);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7122201);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8239706);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8088163);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6606133);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8478097);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.032154);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.053599);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8889187);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.221942);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.287196);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.591742);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.766193);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.503883);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.217927);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.7067281);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.7661954);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8877996);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4795711);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.4092806);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4909771);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2704498);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4094782);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3123873);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.381513);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2264737);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.1515297);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2035306);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.4304214);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.3721217);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.2531539);
   hNCpi0inFVdis_stack_8->SetBinError(31,0.1349643);
   hNCpi0inFVdis_stack_8->SetBinError(32,0.2255671);
   hNCpi0inFVdis_stack_8->SetBinError(33,0.05068045);
   hNCpi0inFVdis_stack_8->SetBinError(34,0.3073683);
   hNCpi0inFVdis_stack_8->SetBinError(35,0.6879847);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,7.416704);
   hCCpi0inFV_stack_10->SetBinContent(2,8.687595);
   hCCpi0inFV_stack_10->SetBinContent(3,7.487491);
   hCCpi0inFV_stack_10->SetBinContent(4,9.843325);
   hCCpi0inFV_stack_10->SetBinContent(5,9.139489);
   hCCpi0inFV_stack_10->SetBinContent(6,14.51119);
   hCCpi0inFV_stack_10->SetBinContent(7,16.59695);
   hCCpi0inFV_stack_10->SetBinContent(8,19.91589);
   hCCpi0inFV_stack_10->SetBinContent(9,28.45883);
   hCCpi0inFV_stack_10->SetBinContent(10,33.28151);
   hCCpi0inFV_stack_10->SetBinContent(11,41.63076);
   hCCpi0inFV_stack_10->SetBinContent(12,46.29219);
   hCCpi0inFV_stack_10->SetBinContent(13,38.02814);
   hCCpi0inFV_stack_10->SetBinContent(14,23.42962);
   hCCpi0inFV_stack_10->SetBinContent(15,10.74685);
   hCCpi0inFV_stack_10->SetBinContent(16,8.354318);
   hCCpi0inFV_stack_10->SetBinContent(17,6.890482);
   hCCpi0inFV_stack_10->SetBinContent(18,4.05471);
   hCCpi0inFV_stack_10->SetBinContent(19,4.479978);
   hCCpi0inFV_stack_10->SetBinContent(20,4.74122);
   hCCpi0inFV_stack_10->SetBinContent(21,4.634714);
   hCCpi0inFV_stack_10->SetBinContent(22,3.608027);
   hCCpi0inFV_stack_10->SetBinContent(23,1.268811);
   hCCpi0inFV_stack_10->SetBinContent(24,3.239722);
   hCCpi0inFV_stack_10->SetBinContent(25,4.198173);
   hCCpi0inFV_stack_10->SetBinContent(26,2.052291);
   hCCpi0inFV_stack_10->SetBinContent(27,1.858957);
   hCCpi0inFV_stack_10->SetBinContent(28,1.503783);
   hCCpi0inFV_stack_10->SetBinContent(29,2.1425);
   hCCpi0inFV_stack_10->SetBinContent(30,1.414021);
   hCCpi0inFV_stack_10->SetBinContent(31,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(32,1.123658);
   hCCpi0inFV_stack_10->SetBinContent(33,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(34,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(35,10.6084);
   hCCpi0inFV_stack_10->SetBinError(1,1.435158);
   hCCpi0inFV_stack_10->SetBinError(2,1.532404);
   hCCpi0inFV_stack_10->SetBinError(3,1.447791);
   hCCpi0inFV_stack_10->SetBinError(4,1.535049);
   hCCpi0inFV_stack_10->SetBinError(5,1.494371);
   hCCpi0inFV_stack_10->SetBinError(6,1.892094);
   hCCpi0inFV_stack_10->SetBinError(7,2.023551);
   hCCpi0inFV_stack_10->SetBinError(8,2.236493);
   hCCpi0inFV_stack_10->SetBinError(9,2.620467);
   hCCpi0inFV_stack_10->SetBinError(10,2.881546);
   hCCpi0inFV_stack_10->SetBinError(11,3.275425);
   hCCpi0inFV_stack_10->SetBinError(12,3.397646);
   hCCpi0inFV_stack_10->SetBinError(13,3.069615);
   hCCpi0inFV_stack_10->SetBinError(14,2.454153);
   hCCpi0inFV_stack_10->SetBinError(15,1.711334);
   hCCpi0inFV_stack_10->SetBinError(16,1.441881);
   hCCpi0inFV_stack_10->SetBinError(17,1.301582);
   hCCpi0inFV_stack_10->SetBinError(18,1.01996);
   hCCpi0inFV_stack_10->SetBinError(19,1.063603);
   hCCpi0inFV_stack_10->SetBinError(20,1.037199);
   hCCpi0inFV_stack_10->SetBinError(21,1.073516);
   hCCpi0inFV_stack_10->SetBinError(22,1.000625);
   hCCpi0inFV_stack_10->SetBinError(23,0.5889569);
   hCCpi0inFV_stack_10->SetBinError(24,0.8925513);
   hCCpi0inFV_stack_10->SetBinError(25,1.057044);
   hCCpi0inFV_stack_10->SetBinError(26,0.7073425);
   hCCpi0inFV_stack_10->SetBinError(27,0.6804124);
   hCCpi0inFV_stack_10->SetBinError(28,0.6339976);
   hCCpi0inFV_stack_10->SetBinError(29,0.7846555);
   hCCpi0inFV_stack_10->SetBinError(30,0.5355471);
   hCCpi0inFV_stack_10->SetBinError(31,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(32,0.5188295);
   hCCpi0inFV_stack_10->SetBinError(33,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(34,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(35,1.618653);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hNCinFV_stack_11->SetBinContent(1,11.64948);
   hNCinFV_stack_11->SetBinContent(2,10.96648);
   hNCinFV_stack_11->SetBinContent(3,8.283134);
   hNCinFV_stack_11->SetBinContent(4,10.66887);
   hNCinFV_stack_11->SetBinContent(5,14.04516);
   hNCinFV_stack_11->SetBinContent(6,7.644743);
   hNCinFV_stack_11->SetBinContent(7,10.71228);
   hNCinFV_stack_11->SetBinContent(8,9.671222);
   hNCinFV_stack_11->SetBinContent(9,11.60625);
   hNCinFV_stack_11->SetBinContent(10,12.39213);
   hNCinFV_stack_11->SetBinContent(11,16.57981);
   hNCinFV_stack_11->SetBinContent(12,12.81327);
   hNCinFV_stack_11->SetBinContent(13,13.61202);
   hNCinFV_stack_11->SetBinContent(14,10.73822);
   hNCinFV_stack_11->SetBinContent(15,6.692125);
   hNCinFV_stack_11->SetBinContent(16,5.709112);
   hNCinFV_stack_11->SetBinContent(17,4.700679);
   hNCinFV_stack_11->SetBinContent(18,5.359769);
   hNCinFV_stack_11->SetBinContent(19,4.413605);
   hNCinFV_stack_11->SetBinContent(20,5.147385);
   hNCinFV_stack_11->SetBinContent(21,5.211813);
   hNCinFV_stack_11->SetBinContent(22,2.229678);
   hNCinFV_stack_11->SetBinContent(23,2.346548);
   hNCinFV_stack_11->SetBinContent(24,3.591664);
   hNCinFV_stack_11->SetBinContent(25,2.038863);
   hNCinFV_stack_11->SetBinContent(26,1.865094);
   hNCinFV_stack_11->SetBinContent(27,3.144504);
   hNCinFV_stack_11->SetBinContent(28,2.247941);
   hNCinFV_stack_11->SetBinContent(29,2.214802);
   hNCinFV_stack_11->SetBinContent(30,2.191098);
   hNCinFV_stack_11->SetBinContent(31,1.880446);
   hNCinFV_stack_11->SetBinContent(32,2.140283);
   hNCinFV_stack_11->SetBinContent(33,1.900446);
   hNCinFV_stack_11->SetBinContent(34,1.831857);
   hNCinFV_stack_11->SetBinContent(35,19.3917);
   hNCinFV_stack_11->SetBinError(1,1.75336);
   hNCinFV_stack_11->SetBinError(2,1.737691);
   hNCinFV_stack_11->SetBinError(3,1.487481);
   hNCinFV_stack_11->SetBinError(4,1.626172);
   hNCinFV_stack_11->SetBinError(5,1.95352);
   hNCinFV_stack_11->SetBinError(6,1.576702);
   hNCinFV_stack_11->SetBinError(7,1.681365);
   hNCinFV_stack_11->SetBinError(8,1.588825);
   hNCinFV_stack_11->SetBinError(9,1.664832);
   hNCinFV_stack_11->SetBinError(10,1.782067);
   hNCinFV_stack_11->SetBinError(11,2.298302);
   hNCinFV_stack_11->SetBinError(12,1.948816);
   hNCinFV_stack_11->SetBinError(13,2.220369);
   hNCinFV_stack_11->SetBinError(14,1.77864);
   hNCinFV_stack_11->SetBinError(15,1.338822);
   hNCinFV_stack_11->SetBinError(16,1.604413);
   hNCinFV_stack_11->SetBinError(17,1.270401);
   hNCinFV_stack_11->SetBinError(18,1.514358);
   hNCinFV_stack_11->SetBinError(19,1.425157);
   hNCinFV_stack_11->SetBinError(20,1.28411);
   hNCinFV_stack_11->SetBinError(21,1.451414);
   hNCinFV_stack_11->SetBinError(22,1.083301);
   hNCinFV_stack_11->SetBinError(23,0.7997823);
   hNCinFV_stack_11->SetBinError(24,0.9996945);
   hNCinFV_stack_11->SetBinError(25,0.8789086);
   hNCinFV_stack_11->SetBinError(26,0.620874);
   hNCinFV_stack_11->SetBinError(27,0.9938798);
   hNCinFV_stack_11->SetBinError(28,0.781423);
   hNCinFV_stack_11->SetBinError(29,0.7111313);
   hNCinFV_stack_11->SetBinError(30,0.7976168);
   hNCinFV_stack_11->SetBinError(31,0.9230443);
   hNCinFV_stack_11->SetBinError(32,0.9731288);
   hNCinFV_stack_11->SetBinError(33,0.7441019);
   hNCinFV_stack_11->SetBinError(34,0.8914223);
   hNCinFV_stack_11->SetBinError(35,2.548307);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,15.09964);
   hnumuCCinFV_stack_12->SetBinContent(2,19.13436);
   hnumuCCinFV_stack_12->SetBinContent(3,23.05151);
   hnumuCCinFV_stack_12->SetBinContent(4,16.36386);
   hnumuCCinFV_stack_12->SetBinContent(5,18.36794);
   hnumuCCinFV_stack_12->SetBinContent(6,18.04318);
   hnumuCCinFV_stack_12->SetBinContent(7,14.8653);
   hnumuCCinFV_stack_12->SetBinContent(8,15.84142);
   hnumuCCinFV_stack_12->SetBinContent(9,14.22825);
   hnumuCCinFV_stack_12->SetBinContent(10,15.22092);
   hnumuCCinFV_stack_12->SetBinContent(11,14.22247);
   hnumuCCinFV_stack_12->SetBinContent(12,15.38609);
   hnumuCCinFV_stack_12->SetBinContent(13,12.67034);
   hnumuCCinFV_stack_12->SetBinContent(14,10.29334);
   hnumuCCinFV_stack_12->SetBinContent(15,5.269701);
   hnumuCCinFV_stack_12->SetBinContent(16,3.861376);
   hnumuCCinFV_stack_12->SetBinContent(17,3.962178);
   hnumuCCinFV_stack_12->SetBinContent(18,4.337584);
   hnumuCCinFV_stack_12->SetBinContent(19,2.290233);
   hnumuCCinFV_stack_12->SetBinContent(20,1.580094);
   hnumuCCinFV_stack_12->SetBinContent(21,2.811232);
   hnumuCCinFV_stack_12->SetBinContent(22,1.35105);
   hnumuCCinFV_stack_12->SetBinContent(23,2.103241);
   hnumuCCinFV_stack_12->SetBinContent(24,2.327459);
   hnumuCCinFV_stack_12->SetBinContent(25,0.5963737);
   hnumuCCinFV_stack_12->SetBinContent(26,1.873225);
   hnumuCCinFV_stack_12->SetBinContent(27,0.9269427);
   hnumuCCinFV_stack_12->SetBinContent(28,1.772769);
   hnumuCCinFV_stack_12->SetBinContent(29,0.9286332);
   hnumuCCinFV_stack_12->SetBinContent(30,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(31,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(32,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(33,0.4323627);
   hnumuCCinFV_stack_12->SetBinContent(34,0.5901461);
   hnumuCCinFV_stack_12->SetBinContent(35,8.229554);
   hnumuCCinFV_stack_12->SetBinError(1,2.102569);
   hnumuCCinFV_stack_12->SetBinError(2,2.950265);
   hnumuCCinFV_stack_12->SetBinError(3,3.130096);
   hnumuCCinFV_stack_12->SetBinError(4,2.489337);
   hnumuCCinFV_stack_12->SetBinError(5,2.600685);
   hnumuCCinFV_stack_12->SetBinError(6,2.356083);
   hnumuCCinFV_stack_12->SetBinError(7,2.15543);
   hnumuCCinFV_stack_12->SetBinError(8,2.128693);
   hnumuCCinFV_stack_12->SetBinError(9,2.093835);
   hnumuCCinFV_stack_12->SetBinError(10,2.120548);
   hnumuCCinFV_stack_12->SetBinError(11,1.935611);
   hnumuCCinFV_stack_12->SetBinError(12,2.450461);
   hnumuCCinFV_stack_12->SetBinError(13,2.970151);
   hnumuCCinFV_stack_12->SetBinError(14,1.731987);
   hnumuCCinFV_stack_12->SetBinError(15,1.16179);
   hnumuCCinFV_stack_12->SetBinError(16,1.001472);
   hnumuCCinFV_stack_12->SetBinError(17,1.065819);
   hnumuCCinFV_stack_12->SetBinError(18,1.05673);
   hnumuCCinFV_stack_12->SetBinError(19,0.7463877);
   hnumuCCinFV_stack_12->SetBinError(20,0.7517869);
   hnumuCCinFV_stack_12->SetBinError(21,0.9974642);
   hnumuCCinFV_stack_12->SetBinError(22,0.5736759);
   hnumuCCinFV_stack_12->SetBinError(23,1.10611);
   hnumuCCinFV_stack_12->SetBinError(24,0.8066566);
   hnumuCCinFV_stack_12->SetBinError(25,0.4207336);
   hnumuCCinFV_stack_12->SetBinError(26,0.7754413);
   hnumuCCinFV_stack_12->SetBinError(27,0.4800908);
   hnumuCCinFV_stack_12->SetBinError(28,0.6416781);
   hnumuCCinFV_stack_12->SetBinError(29,0.48078);
   hnumuCCinFV_stack_12->SetBinError(30,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(31,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(32,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(33,0.3069635);
   hnumuCCinFV_stack_12->SetBinError(34,0.340721);
   hnumuCCinFV_stack_12->SetBinError(35,1.397509);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,1.283801);
   hnueCCinFV_stack_13->SetBinContent(2,1.467536);
   hnueCCinFV_stack_13->SetBinContent(3,1.6075);
   hnueCCinFV_stack_13->SetBinContent(4,0.6850466);
   hnueCCinFV_stack_13->SetBinContent(5,0.5026693);
   hnueCCinFV_stack_13->SetBinContent(6,0.5817212);
   hnueCCinFV_stack_13->SetBinContent(7,0.4139598);
   hnueCCinFV_stack_13->SetBinContent(8,0.2107505);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,1.783327);
   hnueCCinFV_stack_13->SetBinContent(12,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(13,0.536893);
   hnueCCinFV_stack_13->SetBinContent(14,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,0.2538659);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(22,0.3405455);
   hnueCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(33,0.2107157);
   hnueCCinFV_stack_13->SetBinContent(34,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(35,1.322064);
   hnueCCinFV_stack_13->SetBinError(1,0.5950324);
   hnueCCinFV_stack_13->SetBinError(2,0.610627);
   hnueCCinFV_stack_13->SetBinError(3,0.7343427);
   hnueCCinFV_stack_13->SetBinError(4,0.3976338);
   hnueCCinFV_stack_13->SetBinError(5,0.3554931);
   hnueCCinFV_stack_13->SetBinError(6,0.4330921);
   hnueCCinFV_stack_13->SetBinError(7,0.4139598);
   hnueCCinFV_stack_13->SetBinError(8,0.2107505);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.8069925);
   hnueCCinFV_stack_13->SetBinError(12,0.3921167);
   hnueCCinFV_stack_13->SetBinError(13,0.3929602);
   hnueCCinFV_stack_13->SetBinError(14,0.438694);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.2538659);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(22,0.3401778);
   hnueCCinFV_stack_13->SetBinError(23,0.3401776);
   hnueCCinFV_stack_13->SetBinError(33,0.2107157);
   hnueCCinFV_stack_13->SetBinError(34,0.1950249);
   hnueCCinFV_stack_13->SetBinError(35,0.5554667);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);
   hmcerror__20->SetBinContent(1,79.67167);
   hmcerror__20->SetBinContent(2,88.87116);
   hmcerror__20->SetBinContent(3,91.22572);
   hmcerror__20->SetBinContent(4,79.65949);
   hmcerror__20->SetBinContent(5,90.82295);
   hmcerror__20->SetBinContent(6,99.2487);
   hmcerror__20->SetBinContent(7,103.478);
   hmcerror__20->SetBinContent(8,124.7208);
   hmcerror__20->SetBinContent(9,148.8898);
   hmcerror__20->SetBinContent(10,201.2867);
   hmcerror__20->SetBinContent(11,254.2289);
   hmcerror__20->SetBinContent(12,285.1078);
   hmcerror__20->SetBinContent(13,233.0677);
   hmcerror__20->SetBinContent(14,126.9084);
   hmcerror__20->SetBinContent(15,62.07589);
   hmcerror__20->SetBinContent(16,45.72684);
   hmcerror__20->SetBinContent(17,30.71848);
   hmcerror__20->SetBinContent(18,23.62915);
   hmcerror__20->SetBinContent(19,19.32769);
   hmcerror__20->SetBinContent(20,17.53387);
   hmcerror__20->SetBinContent(21,18.77617);
   hmcerror__20->SetBinContent(22,13.81473);
   hmcerror__20->SetBinContent(23,11.17054);
   hmcerror__20->SetBinContent(24,13.58222);
   hmcerror__20->SetBinContent(25,10.46463);
   hmcerror__20->SetBinContent(26,10.36422);
   hmcerror__20->SetBinContent(27,8.527244);
   hmcerror__20->SetBinContent(28,8.887197);
   hmcerror__20->SetBinContent(29,8.804893);
   hmcerror__20->SetBinContent(30,6.249835);
   hmcerror__20->SetBinContent(31,5.643788);
   hmcerror__20->SetBinContent(32,5.964115);
   hmcerror__20->SetBinContent(33,5.200068);
   hmcerror__20->SetBinContent(34,4.729022);
   hmcerror__20->SetBinContent(35,50.67764);
   hmcerror__20->SetBinError(1,30.10584);
   hmcerror__20->SetBinError(2,28.10227);
   hmcerror__20->SetBinError(3,27.0404);
   hmcerror__20->SetBinError(4,27.94093);
   hmcerror__20->SetBinError(5,32.08289);
   hmcerror__20->SetBinError(6,38.88401);
   hmcerror__20->SetBinError(7,40.65006);
   hmcerror__20->SetBinError(8,56.76453);
   hmcerror__20->SetBinError(9,61.31367);
   hmcerror__20->SetBinError(10,87.33683);
   hmcerror__20->SetBinError(11,113.4059);
   hmcerror__20->SetBinError(12,125.031);
   hmcerror__20->SetBinError(13,114.6969);
   hmcerror__20->SetBinError(14,81.13407);
   hmcerror__20->SetBinError(15,48.13235);
   hmcerror__20->SetBinError(16,18.9345);
   hmcerror__20->SetBinError(17,14.53716);
   hmcerror__20->SetBinError(18,11.95897);
   hmcerror__20->SetBinError(19,11.33661);
   hmcerror__20->SetBinError(20,14.90732);
   hmcerror__20->SetBinError(21,10.59949);
   hmcerror__20->SetBinError(22,8.166899);
   hmcerror__20->SetBinError(23,8.893953);
   hmcerror__20->SetBinError(24,9.463647);
   hmcerror__20->SetBinError(25,8.29247);
   hmcerror__20->SetBinError(26,8.184355);
   hmcerror__20->SetBinError(27,8.096568);
   hmcerror__20->SetBinError(28,7.075516);
   hmcerror__20->SetBinError(29,7.75492);
   hmcerror__20->SetBinError(30,6.632152);
   hmcerror__20->SetBinError(31,6.888805);
   hmcerror__20->SetBinError(32,6.091023);
   hmcerror__20->SetBinError(33,5.759741);
   hmcerror__20->SetBinError(34,5.624713);
   hmcerror__20->SetBinError(35,32.83597);
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
   8.1273,
   8.3726,
   8.6108,
   8.8995,
   9.1239,
   8.7275,
   10.63015,
   9.1239,
   11.83216,
   14.21267,
   15.09967,
   17.23369,
   14.24781,
   9.1239,
   7.8097,
   4.9457,
   4.7354,
   4.2835,
   4.1628,
   4.0385,
   3.4975,
   4.0385,
   3.0307,
   3.0307,
   2.143368,
   2.48995,
   2.85954,
   3.0307,
   2.143368,
   2.29683,
   2,
   2.29683,
   2,
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
   7.9246,
   8.1701,
   8.4085,
   8.6976,
   8.9221,
   8.5253,
   10.63015,
   8.9221,
   11.83216,
   14.21267,
   15.09967,
   17.23369,
   14.24781,
   8.9221,
   7.6066,
   4.7346,
   4.5229,
   4.0673,
   3.9454,
   3.8197,
   3.27,
   3.8197,
   2.7896,
   2.7896,
   1.72422,
   2.21064,
   2.61053,
   2.7896,
   1.72422,
   1.98186,
   1.51917,
   1.98186,
   1.51917,
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.1/34","");
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 86.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  908.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  198.3","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 373.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 228.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 262.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 12.5","F");

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
   0.3778738,
   0.3162136,
   0.296412,
   0.3507545,
   0.3532465,
   0.3917836,
   0.3928377,
   0.4551329,
   0.4118057,
   0.4338926,
   0.4460778,
   0.4385392,
   0.4921186,
   0.6393122,
   0.775379,
   0.4140784,
   0.4732382,
   0.506111,
   0.5865476,
   0.8502018,
   0.5645179,
   0.5911734,
   0.7961975,
   0.6967674,
   0.7924285,
   0.7896741,
   0.9494942,
   0.7961471,
   0.8807512,
   1.061172,
   1.2206,
   1.021279,
   1.107628,
   1.189403};
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
   0.3778738,
   0.3162136,
   0.296412,
   0.3507545,
   0.3532465,
   0.3917836,
   0.3928377,
   0.4551329,
   0.4118057,
   0.4338926,
   0.4460778,
   0.4385392,
   0.4921186,
   0.6393122,
   0.775379,
   0.4140784,
   0.4732382,
   0.506111,
   0.5865476,
   0.8502018,
   0.5645179,
   0.5911734,
   0.7961975,
   0.6967674,
   0.7924285,
   0.7896741,
   0.9494942,
   0.7961471,
   0.8807512,
   1.061172,
   1.2206,
   1.021279,
   1.107628,
   1.189403};
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
   0.2390827,
   0.2257591,
   0.2131297,
   0.269125,
   0.2924846,
   0.2872931,
   0.3159805,
   0.352973,
   0.3899101,
   0.4089629,
   0.4354892,
   0.4268787,
   0.3997065,
   0.3775845,
   0.3470437,
   0.2873774,
   0.2743387,
   0.3157299,
   0.2896456,
   0.2695446,
   0.277086,
   0.265097,
   0.3435598,
   0.282587,
   0.335677,
   0.2960701,
   0.346687,
   0.2989303,
   0.3659349,
   0.3737255,
   0.3842141,
   0.3765117,
   0.3585937,
   0.4126183};
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
   0.2390827,
   0.2257591,
   0.2131297,
   0.269125,
   0.2924846,
   0.2872931,
   0.3159805,
   0.352973,
   0.3899101,
   0.4089629,
   0.4354892,
   0.4268787,
   0.3997065,
   0.3775845,
   0.3470437,
   0.2873774,
   0.2743387,
   0.3157299,
   0.2896456,
   0.2695446,
   0.277086,
   0.265097,
   0.3435598,
   0.282587,
   0.335677,
   0.2960701,
   0.346687,
   0.2989303,
   0.3659349,
   0.3737255,
   0.3842141,
   0.3765117,
   0.3585937,
   0.4126183};
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
   0.8032968,
   0.7651526,
   0.7892511,
   0.9666142,
   0.891845,
   0.7456017,
   1.09202,
   0.6494508,
   0.9402927,
   1.003543,
   0.8968295,
   1.041711,
   0.8709917,
   0.6382558,
   0.9504495,
   0.5029869,
   0.6836275,
   0.7194504,
   0.8278279,
   0.8554873,
   0.5858489,
   1.085798,
   0.7161698,
   0.5890054,
   0.28668,
   0.482429,
   0.8208983,
   0.9001713,
   0.3407197,
   0.6400169,
   0.3543719,
   0.6706779,
   0.3846104,
   0.4229204};
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
   0.1020099,
   0.09421054,
   0.09439004,
   0.1117193,
   0.1004581,
   0.08793566,
   0.1027286,
   0.07315461,
   0.07946923,
   0.07060907,
   0.05939398,
   0.06044621,
   0.06113163,
   0.0718936,
   0.1258089,
   0.1081575,
   0.1541547,
   0.1812803,
   0.2153801,
   0.2303257,
   0.1862733,
   0.292333,
   0.271312,
   0.2231373,
   0.2048203,
   0.2402448,
   0.3353417,
   0.3410186,
   0.2434292,
   0.3675025,
   0.3543719,
   0.3851083,
   0.3846104,
   0.4229204};
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
   0.09946572,
   0.09193196,
   0.09217247,
   0.1091847,
   0.09823618,
   0.08589836,
   0.1027286,
   0.0715366,
   0.07946923,
   0.07060907,
   0.05939398,
   0.06044621,
   0.06113163,
   0.07030348,
   0.1225371,
   0.1035409,
   0.1472371,
   0.1721306,
   0.204132,
   0.217847,
   0.1741569,
   0.2764948,
   0.2497284,
   0.2053862,
   0.1647665,
   0.2132954,
   0.30614,
   0.3138897,
   0.1958252,
   0.317106,
   0.2691756,
   0.3322974,
   0.2921443,
   0.321244};
   grae = new TGraphAsymmErrors(34,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,440);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(1.498522);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_pi0_mass_gamma_all",34,0,400);

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
