#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Fri Apr  8 15:01:40 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",112,135,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.30769,-0.7315808,676.9231,61.64531);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hmc__4->SetBinContent(1,1.196628);
   hmc__4->SetBinContent(2,4.695834);
   hmc__4->SetBinContent(3,15.99335);
   hmc__4->SetBinContent(4,26.10214);
   hmc__4->SetBinContent(5,34.5769);
   hmc__4->SetBinContent(6,36.57904);
   hmc__4->SetBinContent(7,35.11661);
   hmc__4->SetBinContent(8,26.07266);
   hmc__4->SetBinContent(9,20.31014);
   hmc__4->SetBinContent(10,17.20963);
   hmc__4->SetBinContent(11,15.40032);
   hmc__4->SetBinContent(12,12.92384);
   hmc__4->SetBinContent(13,10.65287);
   hmc__4->SetBinContent(14,8.883733);
   hmc__4->SetBinContent(15,7.173135);
   hmc__4->SetBinContent(16,4.826631);
   hmc__4->SetBinContent(17,4.710459);
   hmc__4->SetBinContent(18,3.646162);
   hmc__4->SetBinContent(19,3.642407);
   hmc__4->SetBinContent(20,2.351693);
   hmc__4->SetBinContent(21,1.706359);
   hmc__4->SetBinContent(22,1.16941);
   hmc__4->SetBinContent(23,1.100627);
   hmc__4->SetBinContent(24,1.381722);
   hmc__4->SetBinContent(25,8.102816);
   hmc__4->SetBinError(1,1.16391);
   hmc__4->SetBinError(2,2.220835);
   hmc__4->SetBinError(3,5.436787);
   hmc__4->SetBinError(4,6.457864);
   hmc__4->SetBinError(5,8.590474);
   hmc__4->SetBinError(6,9.524929);
   hmc__4->SetBinError(7,10.23854);
   hmc__4->SetBinError(8,8.579804);
   hmc__4->SetBinError(9,6.212769);
   hmc__4->SetBinError(10,5.502675);
   hmc__4->SetBinError(11,4.736463);
   hmc__4->SetBinError(12,5.807212);
   hmc__4->SetBinError(13,3.663196);
   hmc__4->SetBinError(14,3.475934);
   hmc__4->SetBinError(15,3.015745);
   hmc__4->SetBinError(16,2.41972);
   hmc__4->SetBinError(17,2.741914);
   hmc__4->SetBinError(18,2.7424);
   hmc__4->SetBinError(19,2.293601);
   hmc__4->SetBinError(20,1.327476);
   hmc__4->SetBinError(21,1.057066);
   hmc__4->SetBinError(22,1.115012);
   hmc__4->SetBinError(23,0.9424725);
   hmc__4->SetBinError(24,1.788007);
   hmc__4->SetBinError(25,2.743701);
   hmc__4->SetMinimum(-0.7315808);
   hmc__4->SetMaximum(58.52646);
   hmc__4->SetEntries(300.4418);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",24,0,600);
   hs2_stack_2->SetMinimum(-6.202043e-09);
   hs2_stack_2->SetMaximum(38.40799);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(2,0.2774512);
   hbadmatch_stack_1->SetBinContent(3,0.4724996);
   hbadmatch_stack_1->SetBinContent(4,0.5714973);
   hbadmatch_stack_1->SetBinContent(5,0.8118425);
   hbadmatch_stack_1->SetBinContent(6,0.9603148);
   hbadmatch_stack_1->SetBinContent(7,0.9152216);
   hbadmatch_stack_1->SetBinContent(8,0.5744539);
   hbadmatch_stack_1->SetBinContent(9,0.3148612);
   hbadmatch_stack_1->SetBinContent(10,0.2777128);
   hbadmatch_stack_1->SetBinContent(11,0.02550039);
   hbadmatch_stack_1->SetBinContent(12,0.1209287);
   hbadmatch_stack_1->SetBinContent(13,0.02550039);
   hbadmatch_stack_1->SetBinContent(14,0.04705126);
   hbadmatch_stack_1->SetBinContent(15,0.1458368);
   hbadmatch_stack_1->SetBinContent(18,0.02550039);
   hbadmatch_stack_1->SetBinContent(19,0.09123695);
   hbadmatch_stack_1->SetBinContent(21,0.0127502);
   hbadmatch_stack_1->SetBinContent(23,0.07470649);
   hbadmatch_stack_1->SetBinContent(25,0.1366628);
   hbadmatch_stack_1->SetBinError(2,0.1260997);
   hbadmatch_stack_1->SetBinError(3,0.1555795);
   hbadmatch_stack_1->SetBinError(4,0.1728535);
   hbadmatch_stack_1->SetBinError(5,0.2162051);
   hbadmatch_stack_1->SetBinError(6,0.4010455);
   hbadmatch_stack_1->SetBinError(7,0.2331809);
   hbadmatch_stack_1->SetBinError(8,0.1770165);
   hbadmatch_stack_1->SetBinError(9,0.1274999);
   hbadmatch_stack_1->SetBinError(10,0.112811);
   hbadmatch_stack_1->SetBinError(11,0.0180315);
   hbadmatch_stack_1->SetBinError(12,0.07322128);
   hbadmatch_stack_1->SetBinError(13,0.0180315);
   hbadmatch_stack_1->SetBinError(14,0.02753897);
   hbadmatch_stack_1->SetBinError(15,0.09518756);
   hbadmatch_stack_1->SetBinError(18,0.0180315);
   hbadmatch_stack_1->SetBinError(19,0.06537894);
   hbadmatch_stack_1->SetBinError(21,0.0127502);
   hbadmatch_stack_1->SetBinError(23,0.06325464);
   hbadmatch_stack_1->SetBinError(25,0.08854226);
   hbadmatch_stack_1->SetEntries(162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetTitleOffset(1);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,0.2235888);
   hext_stack_2->SetBinContent(2,0.1717779);
   hext_stack_2->SetBinContent(3,2.658526);
   hext_stack_2->SetBinContent(4,1.066133);
   hext_stack_2->SetBinContent(5,2.272698);
   hext_stack_2->SetBinContent(6,2.968004);
   hext_stack_2->SetBinContent(7,2.110458);
   hext_stack_2->SetBinContent(8,2.061379);
   hext_stack_2->SetBinContent(9,0.9311647);
   hext_stack_2->SetBinContent(10,0.7321157);
   hext_stack_2->SetBinContent(11,0.8698155);
   hext_stack_2->SetBinContent(12,0.5085269);
   hext_stack_2->SetBinContent(13,0.2603984);
   hext_stack_2->SetBinContent(14,0.6953062);
   hext_stack_2->SetBinContent(15,0.03680956);
   hext_stack_2->SetBinContent(16,0.1990491);
   hext_stack_2->SetBinContent(17,0.2235888);
   hext_stack_2->SetBinContent(18,0.01226985);
   hext_stack_2->SetBinContent(19,0.1990491);
   hext_stack_2->SetBinContent(20,0.02453971);
   hext_stack_2->SetBinContent(21,0.3980982);
   hext_stack_2->SetBinContent(22,0.01226985);
   hext_stack_2->SetBinContent(23,0.01226985);
   hext_stack_2->SetBinContent(25,0.3094778);
   hext_stack_2->SetBinError(1,0.199804);
   hext_stack_2->SetBinError(2,0.04590958);
   hext_stack_2->SetBinError(3,0.6919239);
   hext_stack_2->SetBinError(4,0.4022366);
   hext_stack_2->SetBinError(5,0.6321931);
   hext_stack_2->SetBinError(6,0.7209259);
   hext_stack_2->SetBinError(7,0.6004159);
   hext_stack_2->SetBinError(8,0.5999142);
   hext_stack_2->SetBinError(9,0.4001727);
   hext_stack_2->SetBinError(10,0.3471566);
   hext_stack_2->SetBinError(11,0.3992311);
   hext_stack_2->SetBinError(12,0.2838944);
   hext_stack_2->SetBinError(13,0.2009311);
   hext_stack_2->SetBinError(14,0.3465055);
   hext_stack_2->SetBinError(15,0.02125201);
   hext_stack_2->SetBinError(16,0.1990491);
   hext_stack_2->SetBinError(17,0.199804);
   hext_stack_2->SetBinError(18,0.01226985);
   hext_stack_2->SetBinError(19,0.1990491);
   hext_stack_2->SetBinError(20,0.01735219);
   hext_stack_2->SetBinError(21,0.2814979);
   hext_stack_2->SetBinError(22,0.01226985);
   hext_stack_2->SetBinError(23,0.01226985);
   hext_stack_2->SetBinError(25,0.202424);
   hext_stack_2->SetEntries(312);

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,0.2035515);
   hdirt_stack_3->SetBinContent(3,0.1268388);
   hdirt_stack_3->SetBinContent(4,0.1282712);
   hdirt_stack_3->SetBinContent(5,0.5355575);
   hdirt_stack_3->SetBinContent(6,0.1572861);
   hdirt_stack_3->SetBinContent(7,0.09950612);
   hdirt_stack_3->SetBinContent(8,0.0722151);
   hdirt_stack_3->SetBinContent(9,0.03254462);
   hdirt_stack_3->SetBinContent(10,0.04420907);
   hdirt_stack_3->SetBinContent(11,0.05242869);
   hdirt_stack_3->SetBinContent(12,0.06653658);
   hdirt_stack_3->SetBinContent(15,0.04420907);
   hdirt_stack_3->SetBinContent(25,0.008219617);
   hdirt_stack_3->SetBinError(2,0.09395385);
   hdirt_stack_3->SetBinError(3,0.07357573);
   hdirt_stack_3->SetBinError(4,0.07326222);
   hdirt_stack_3->SetBinError(5,0.3128044);
   hdirt_stack_3->SetBinError(6,0.07788461);
   hdirt_stack_3->SetBinError(7,0.06456416);
   hdirt_stack_3->SetBinError(8,0.04709308);
   hdirt_stack_3->SetBinError(9,0.01986222);
   hdirt_stack_3->SetBinError(10,0.04420907);
   hdirt_stack_3->SetBinError(11,0.0449667);
   hdirt_stack_3->SetBinError(12,0.05142829);
   hdirt_stack_3->SetBinError(15,0.04420907);
   hdirt_stack_3->SetBinError(25,0.008219618);
   hdirt_stack_3->SetEntries(54);

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetTitleOffset(1);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.08745668);
   houtFV_stack_4->SetBinContent(2,0.561812);
   houtFV_stack_4->SetBinContent(3,1.700056);
   houtFV_stack_4->SetBinContent(4,1.758862);
   houtFV_stack_4->SetBinContent(5,1.787566);
   houtFV_stack_4->SetBinContent(6,2.101048);
   houtFV_stack_4->SetBinContent(7,2.303608);
   houtFV_stack_4->SetBinContent(8,1.397442);
   houtFV_stack_4->SetBinContent(9,1.131553);
   houtFV_stack_4->SetBinContent(10,1.370466);
   houtFV_stack_4->SetBinContent(11,1.23035);
   houtFV_stack_4->SetBinContent(12,1.229965);
   houtFV_stack_4->SetBinContent(13,0.5594013);
   houtFV_stack_4->SetBinContent(14,0.597218);
   houtFV_stack_4->SetBinContent(15,0.2408196);
   houtFV_stack_4->SetBinContent(16,0.2988259);
   houtFV_stack_4->SetBinContent(17,0.05100079);
   houtFV_stack_4->SetBinContent(18,0.1290744);
   houtFV_stack_4->SetBinContent(19,0.2403266);
   houtFV_stack_4->SetBinContent(20,0.1366628);
   houtFV_stack_4->SetBinContent(21,0.1366628);
   houtFV_stack_4->SetBinContent(22,0.06195629);
   houtFV_stack_4->SetBinContent(23,0.0127502);
   houtFV_stack_4->SetBinContent(24,0.1858689);
   houtFV_stack_4->SetBinContent(25,0.3735324);
   houtFV_stack_4->SetBinError(1,0.06452687);
   houtFV_stack_4->SetBinError(2,0.1728316);
   houtFV_stack_4->SetBinError(3,0.3208599);
   houtFV_stack_4->SetBinError(4,0.3092807);
   houtFV_stack_4->SetBinError(5,0.3075579);
   houtFV_stack_4->SetBinError(6,0.3381618);
   houtFV_stack_4->SetBinError(7,0.3585316);
   houtFV_stack_4->SetBinError(8,0.2707527);
   houtFV_stack_4->SetBinError(9,0.2514071);
   houtFV_stack_4->SetBinError(10,0.2801962);
   houtFV_stack_4->SetBinError(11,0.2674681);
   houtFV_stack_4->SetBinError(12,0.2656268);
   houtFV_stack_4->SetBinError(13,0.1775429);
   houtFV_stack_4->SetBinError(14,0.1918854);
   houtFV_stack_4->SetBinError(15,0.1108257);
   houtFV_stack_4->SetBinError(16,0.1265093);
   houtFV_stack_4->SetBinError(17,0.02550039);
   houtFV_stack_4->SetBinError(18,0.06891024);
   houtFV_stack_4->SetBinError(19,0.1107525);
   houtFV_stack_4->SetBinError(20,0.08854226);
   houtFV_stack_4->SetBinError(21,0.08854226);
   houtFV_stack_4->SetBinError(22,0.06195629);
   houtFV_stack_4->SetBinError(23,0.0127502);
   houtFV_stack_4->SetBinError(24,0.1073114);
   houtFV_stack_4->SetBinError(25,0.1414417);
   houtFV_stack_4->SetEntries(494);

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetTitleOffset(1);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFV_stack_5->SetBinContent(1,0.2496199);
   hNCpi0inFV_stack_5->SetBinContent(2,1.783795);
   hNCpi0inFV_stack_5->SetBinContent(3,6.787334);
   hNCpi0inFV_stack_5->SetBinContent(4,13.92109);
   hNCpi0inFV_stack_5->SetBinContent(5,19.22904);
   hNCpi0inFV_stack_5->SetBinContent(6,19.80081);
   hNCpi0inFV_stack_5->SetBinContent(7,18.85139);
   hNCpi0inFV_stack_5->SetBinContent(8,14.45122);
   hNCpi0inFV_stack_5->SetBinContent(9,11.76896);
   hNCpi0inFV_stack_5->SetBinContent(10,9.997919);
   hNCpi0inFV_stack_5->SetBinContent(11,8.545816);
   hNCpi0inFV_stack_5->SetBinContent(12,6.794701);
   hNCpi0inFV_stack_5->SetBinContent(13,6.401052);
   hNCpi0inFV_stack_5->SetBinContent(14,4.830421);
   hNCpi0inFV_stack_5->SetBinContent(15,4.382183);
   hNCpi0inFV_stack_5->SetBinContent(16,2.713139);
   hNCpi0inFV_stack_5->SetBinContent(17,2.368697);
   hNCpi0inFV_stack_5->SetBinContent(18,2.498181);
   hNCpi0inFV_stack_5->SetBinContent(19,1.754705);
   hNCpi0inFV_stack_5->SetBinContent(20,1.565247);
   hNCpi0inFV_stack_5->SetBinContent(21,0.8108159);
   hNCpi0inFV_stack_5->SetBinContent(22,0.6960641);
   hNCpi0inFV_stack_5->SetBinContent(23,0.6851086);
   hNCpi0inFV_stack_5->SetBinContent(24,0.3990328);
   hNCpi0inFV_stack_5->SetBinContent(25,3.80087);
   hNCpi0inFV_stack_5->SetBinError(1,0.1110342);
   hNCpi0inFV_stack_5->SetBinError(2,0.2996891);
   hNCpi0inFV_stack_5->SetBinError(3,0.6007631);
   hNCpi0inFV_stack_5->SetBinError(4,0.8751467);
   hNCpi0inFV_stack_5->SetBinError(5,1.015879);
   hNCpi0inFV_stack_5->SetBinError(6,1.026768);
   hNCpi0inFV_stack_5->SetBinError(7,1.007356);
   hNCpi0inFV_stack_5->SetBinError(8,0.8841871);
   hNCpi0inFV_stack_5->SetBinError(9,0.7909756);
   hNCpi0inFV_stack_5->SetBinError(10,0.7321144);
   hNCpi0inFV_stack_5->SetBinError(11,0.6868388);
   hNCpi0inFV_stack_5->SetBinError(12,0.6084045);
   hNCpi0inFV_stack_5->SetBinError(13,0.5837362);
   hNCpi0inFV_stack_5->SetBinError(14,0.5096563);
   hNCpi0inFV_stack_5->SetBinError(15,0.4855334);
   hNCpi0inFV_stack_5->SetBinError(16,0.383917);
   hNCpi0inFV_stack_5->SetBinError(17,0.3487982);
   hNCpi0inFV_stack_5->SetBinError(18,0.3763016);
   hNCpi0inFV_stack_5->SetBinError(19,0.3090953);
   hNCpi0inFV_stack_5->SetBinError(20,0.300126);
   hNCpi0inFV_stack_5->SetBinError(21,0.2020503);
   hNCpi0inFV_stack_5->SetBinError(22,0.1983966);
   hNCpi0inFV_stack_5->SetBinError(23,0.1901918);
   hNCpi0inFV_stack_5->SetBinError(24,0.1425864);
   hNCpi0inFV_stack_5->SetBinError(25,0.4447972);
   hNCpi0inFV_stack_5->SetEntries(4368);

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_6->SetBinContent(1,0.1403287);
   hCCpi0inFV_stack_6->SetBinContent(2,0.2496199);
   hCCpi0inFV_stack_6->SetBinContent(3,1.704075);
   hCCpi0inFV_stack_6->SetBinContent(4,4.16485);
   hCCpi0inFV_stack_6->SetBinContent(5,6.113438);
   hCCpi0inFV_stack_6->SetBinContent(6,5.77714);
   hCCpi0inFV_stack_6->SetBinContent(7,5.649796);
   hCCpi0inFV_stack_6->SetBinContent(8,4.212773);
   hCCpi0inFV_stack_6->SetBinContent(9,2.671824);
   hCCpi0inFV_stack_6->SetBinContent(10,3.129846);
   hCCpi0inFV_stack_6->SetBinContent(11,2.635283);
   hCCpi0inFV_stack_6->SetBinContent(12,2.169267);
   hCCpi0inFV_stack_6->SetBinContent(13,2.028031);
   hCCpi0inFV_stack_6->SetBinContent(14,1.729205);
   hCCpi0inFV_stack_6->SetBinContent(15,1.523598);
   hCCpi0inFV_stack_6->SetBinContent(16,0.8754404);
   hCCpi0inFV_stack_6->SetBinContent(17,1.02039);
   hCCpi0inFV_stack_6->SetBinContent(18,0.5387589);
   hCCpi0inFV_stack_6->SetBinContent(19,0.9219782);
   hCCpi0inFV_stack_6->SetBinContent(20,0.2751203);
   hCCpi0inFV_stack_6->SetBinContent(21,0.2241195);
   hCCpi0inFV_stack_6->SetBinContent(22,0.2368697);
   hCCpi0inFV_stack_6->SetBinContent(23,0.2751203);
   hCCpi0inFV_stack_6->SetBinContent(24,0.5958572);
   hCCpi0inFV_stack_6->SetBinContent(25,1.951217);
   hCCpi0inFV_stack_6->SetBinError(1,0.09990405);
   hCCpi0inFV_stack_6->SetBinError(2,0.1110342);
   hCCpi0inFV_stack_6->SetBinError(3,0.305341);
   hCCpi0inFV_stack_6->SetBinError(4,0.4803217);
   hCCpi0inFV_stack_6->SetBinError(5,0.586215);
   hCCpi0inFV_stack_6->SetBinError(6,0.563123);
   hCCpi0inFV_stack_6->SetBinError(7,0.5636365);
   hCCpi0inFV_stack_6->SetBinError(8,0.4784644);
   hCCpi0inFV_stack_6->SetBinError(9,0.372892);
   hCCpi0inFV_stack_6->SetBinError(10,0.4135349);
   hCCpi0inFV_stack_6->SetBinError(11,0.3706066);
   hCCpi0inFV_stack_6->SetBinError(12,0.3387263);
   hCCpi0inFV_stack_6->SetBinError(13,0.3334957);
   hCCpi0inFV_stack_6->SetBinError(14,0.3085689);
   hCCpi0inFV_stack_6->SetBinError(15,0.3037213);
   hCCpi0inFV_stack_6->SetBinError(16,0.2115138);
   hCCpi0inFV_stack_6->SetBinError(17,0.2359893);
   hCCpi0inFV_stack_6->SetBinError(18,0.1681015);
   hCCpi0inFV_stack_6->SetBinError(19,0.2198612);
   hCCpi0inFV_stack_6->SetBinError(20,0.1124887);
   hCCpi0inFV_stack_6->SetBinError(21,0.1095603);
   hCCpi0inFV_stack_6->SetBinError(22,0.1102997);
   hCCpi0inFV_stack_6->SetBinError(23,0.1124887);
   hCCpi0inFV_stack_6->SetBinError(24,0.1871762);
   hCCpi0inFV_stack_6->SetBinError(25,0.3162659);
   hCCpi0inFV_stack_6->SetEntries(1314);

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_7->SetBinContent(1,0.1749134);
   hNCinFV_stack_7->SetBinContent(2,0.796271);
   hNCinFV_stack_7->SetBinContent(3,1.047651);
   hNCinFV_stack_7->SetBinContent(4,0.9857292);
   hNCinFV_stack_7->SetBinContent(5,1.182554);
   hNCinFV_stack_7->SetBinContent(6,1.50688);
   hNCinFV_stack_7->SetBinContent(7,1.643543);
   hNCinFV_stack_7->SetBinContent(8,1.082347);
   hNCinFV_stack_7->SetBinContent(9,0.7215645);
   hNCinFV_stack_7->SetBinContent(10,0.1876636);
   hNCinFV_stack_7->SetBinContent(11,0.5101952);
   hNCinFV_stack_7->SetBinContent(12,0.7343147);
   hNCinFV_stack_7->SetBinContent(13,0.3735324);
   hNCinFV_stack_7->SetBinContent(14,0.5211507);
   hNCinFV_stack_7->SetBinContent(15,0.4245332);
   hNCinFV_stack_7->SetBinContent(16,0.3243263);
   hNCinFV_stack_7->SetBinContent(17,0.3717377);
   hNCinFV_stack_7->SetBinContent(18,0.2241195);
   hNCinFV_stack_7->SetBinContent(19,0.1986191);
   hNCinFV_stack_7->SetBinContent(20,0.1858689);
   hNCinFV_stack_7->SetBinContent(21,0.1239126);
   hNCinFV_stack_7->SetBinContent(22,0.0127502);
   hNCinFV_stack_7->SetBinContent(23,0.0127502);
   hNCinFV_stack_7->SetBinContent(24,0.1239126);
   hNCinFV_stack_7->SetBinContent(25,0.3133708);
   hNCinFV_stack_7->SetBinError(1,0.09125478);
   hNCinFV_stack_7->SetBinError(2,0.2090156);
   hNCinFV_stack_7->SetBinError(3,0.2366837);
   hNCinFV_stack_7->SetBinError(4,0.221702);
   hNCinFV_stack_7->SetBinError(5,0.2526971);
   hNCinFV_stack_7->SetBinError(6,0.2831705);
   hNCinFV_stack_7->SetBinError(7,0.2966906);
   hNCinFV_stack_7->SetBinError(8,0.2439868);
   hNCinFV_stack_7->SetBinError(9,0.1992144);
   hNCinFV_stack_7->SetBinError(10,0.0921412);
   hNCinFV_stack_7->SetBinError(11,0.1668696);
   hNCinFV_stack_7->SetBinError(12,0.199622);
   hNCinFV_stack_7->SetBinError(13,0.1414417);
   hNCinFV_stack_7->SetBinError(14,0.1761641);
   hNCinFV_stack_7->SetBinError(15,0.143722);
   hNCinFV_stack_7->SetBinError(16,0.1277878);
   hNCinFV_stack_7->SetBinError(17,0.1517613);
   hNCinFV_stack_7->SetBinError(18,0.1095603);
   hNCinFV_stack_7->SetBinError(19,0.1080662);
   hNCinFV_stack_7->SetBinError(20,0.1073114);
   hNCinFV_stack_7->SetBinError(21,0.08761943);
   hNCinFV_stack_7->SetBinError(22,0.0127502);
   hNCinFV_stack_7->SetBinError(23,0.0127502);
   hNCinFV_stack_7->SetBinError(24,0.08761943);
   hNCinFV_stack_7->SetBinError(25,0.114636);
   hNCinFV_stack_7->SetEntries(368);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_8->SetBinContent(1,0.3207209);
   hnumuCCinFV_stack_8->SetBinContent(2,0.5895993);
   hnumuCCinFV_stack_8->SetBinContent(3,1.496365);
   hnumuCCinFV_stack_8->SetBinContent(4,3.443748);
   hnumuCCinFV_stack_8->SetBinContent(5,2.631457);
   hnumuCCinFV_stack_8->SetBinContent(6,3.282058);
   hnumuCCinFV_stack_8->SetBinContent(7,3.50299);
   hnumuCCinFV_stack_8->SetBinContent(8,2.20808);
   hnumuCCinFV_stack_8->SetBinContent(9,2.565167);
   hnumuCCinFV_stack_8->SetBinContent(10,1.4697);
   hnumuCCinFV_stack_8->SetBinContent(11,1.456226);
   hnumuCCinFV_stack_8->SetBinContent(12,1.299598);
   hnumuCCinFV_stack_8->SetBinContent(13,1.004955);
   hnumuCCinFV_stack_8->SetBinContent(14,0.4633811);
   hnumuCCinFV_stack_8->SetBinContent(15,0.3751328);
   hnumuCCinFV_stack_8->SetBinContent(16,0.3411438);
   hnumuCCinFV_stack_8->SetBinContent(17,0.582807);
   hnumuCCinFV_stack_8->SetBinContent(18,0.1563021);
   hnumuCCinFV_stack_8->SetBinContent(19,0.2364923);
   hnumuCCinFV_stack_8->SetBinContent(20,0.1642547);
   hnumuCCinFV_stack_8->SetBinContent(22,0.1494998);
   hnumuCCinFV_stack_8->SetBinContent(23,0.02792177);
   hnumuCCinFV_stack_8->SetBinContent(24,0.0770504);
   hnumuCCinFV_stack_8->SetBinContent(25,0.7165782);
   hnumuCCinFV_stack_8->SetBinError(1,0.2278806);
   hnumuCCinFV_stack_8->SetBinError(2,0.1809134);
   hnumuCCinFV_stack_8->SetBinError(3,0.2906634);
   hnumuCCinFV_stack_8->SetBinError(4,0.7749272);
   hnumuCCinFV_stack_8->SetBinError(5,0.4646596);
   hnumuCCinFV_stack_8->SetBinError(6,0.4543167);
   hnumuCCinFV_stack_8->SetBinError(7,0.6814356);
   hnumuCCinFV_stack_8->SetBinError(8,0.384089);
   hnumuCCinFV_stack_8->SetBinError(9,0.4283633);
   hnumuCCinFV_stack_8->SetBinError(10,0.3151994);
   hnumuCCinFV_stack_8->SetBinError(11,0.2977015);
   hnumuCCinFV_stack_8->SetBinError(12,0.2945859);
   hnumuCCinFV_stack_8->SetBinError(13,0.271479);
   hnumuCCinFV_stack_8->SetBinError(14,0.1601899);
   hnumuCCinFV_stack_8->SetBinError(15,0.1517134);
   hnumuCCinFV_stack_8->SetBinError(16,0.1346191);
   hnumuCCinFV_stack_8->SetBinError(17,0.1872909);
   hnumuCCinFV_stack_8->SetBinError(18,0.09773702);
   hnumuCCinFV_stack_8->SetBinError(19,0.1156507);
   hnumuCCinFV_stack_8->SetBinError(20,0.09665151);
   hnumuCCinFV_stack_8->SetBinError(22,0.08946798);
   hnumuCCinFV_stack_8->SetBinError(23,0.01981778);
   hnumuCCinFV_stack_8->SetBinError(24,0.06376844);
   hnumuCCinFV_stack_8->SetBinError(25,0.2051015);
   hnumuCCinFV_stack_8->SetEntries(659);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_9->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(4,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(5,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(6,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(7,0.04009316);
   hnueCCinFV_stack_9->SetBinContent(8,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(9,0.1724943);
   hnueCCinFV_stack_9->SetBinContent(11,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(15,1.378697e-05);
   hnueCCinFV_stack_9->SetBinContent(16,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(17,0.09223731);
   hnueCCinFV_stack_9->SetBinContent(18,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(25,0.4928869);
   hnueCCinFV_stack_9->SetBinError(2,0.06195629);
   hnueCCinFV_stack_9->SetBinError(4,0.06195629);
   hnueCCinFV_stack_9->SetBinError(5,0.0127502);
   hnueCCinFV_stack_9->SetBinError(6,0.0180315);
   hnueCCinFV_stack_9->SetBinError(7,0.02319664);
   hnueCCinFV_stack_9->SetBinError(8,0.0127502);
   hnueCCinFV_stack_9->SetBinError(9,0.1001866);
   hnueCCinFV_stack_9->SetBinError(11,0.06325464);
   hnueCCinFV_stack_9->SetBinError(15,1.378697e-05);
   hnueCCinFV_stack_9->SetBinError(16,0.06325464);
   hnueCCinFV_stack_9->SetBinError(17,0.08050323);
   hnueCCinFV_stack_9->SetBinError(18,0.06195629);
   hnueCCinFV_stack_9->SetBinError(25,0.1617847);
   hnueCCinFV_stack_9->SetEntries(34);

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_9,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hmcerror__5->SetBinContent(1,1.196628);
   hmcerror__5->SetBinContent(2,4.695834);
   hmcerror__5->SetBinContent(3,15.99335);
   hmcerror__5->SetBinContent(4,26.10214);
   hmcerror__5->SetBinContent(5,34.5769);
   hmcerror__5->SetBinContent(6,36.57904);
   hmcerror__5->SetBinContent(7,35.11661);
   hmcerror__5->SetBinContent(8,26.07266);
   hmcerror__5->SetBinContent(9,20.31014);
   hmcerror__5->SetBinContent(10,17.20963);
   hmcerror__5->SetBinContent(11,15.40032);
   hmcerror__5->SetBinContent(12,12.92384);
   hmcerror__5->SetBinContent(13,10.65287);
   hmcerror__5->SetBinContent(14,8.883733);
   hmcerror__5->SetBinContent(15,7.173135);
   hmcerror__5->SetBinContent(16,4.826631);
   hmcerror__5->SetBinContent(17,4.710459);
   hmcerror__5->SetBinContent(18,3.646162);
   hmcerror__5->SetBinContent(19,3.642407);
   hmcerror__5->SetBinContent(20,2.351693);
   hmcerror__5->SetBinContent(21,1.706359);
   hmcerror__5->SetBinContent(22,1.16941);
   hmcerror__5->SetBinContent(23,1.100627);
   hmcerror__5->SetBinContent(24,1.381722);
   hmcerror__5->SetBinContent(25,8.102816);
   hmcerror__5->SetBinError(1,1.16391);
   hmcerror__5->SetBinError(2,2.220835);
   hmcerror__5->SetBinError(3,5.436787);
   hmcerror__5->SetBinError(4,6.457864);
   hmcerror__5->SetBinError(5,8.590474);
   hmcerror__5->SetBinError(6,9.524929);
   hmcerror__5->SetBinError(7,10.23854);
   hmcerror__5->SetBinError(8,8.579804);
   hmcerror__5->SetBinError(9,6.212769);
   hmcerror__5->SetBinError(10,5.502675);
   hmcerror__5->SetBinError(11,4.736463);
   hmcerror__5->SetBinError(12,5.807212);
   hmcerror__5->SetBinError(13,3.663196);
   hmcerror__5->SetBinError(14,3.475934);
   hmcerror__5->SetBinError(15,3.015745);
   hmcerror__5->SetBinError(16,2.41972);
   hmcerror__5->SetBinError(17,2.741914);
   hmcerror__5->SetBinError(18,2.7424);
   hmcerror__5->SetBinError(19,2.293601);
   hmcerror__5->SetBinError(20,1.327476);
   hmcerror__5->SetBinError(21,1.057066);
   hmcerror__5->SetBinError(22,1.115012);
   hmcerror__5->SetBinError(23,0.9424725);
   hmcerror__5->SetBinError(24,1.788007);
   hmcerror__5->SetBinError(25,2.743701);
   hmcerror__5->SetEntries(300.4418);

   ci = TColor::GetColor("#666666");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[24] = {
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
   Double_t _fy3005[24] = {
   1,
   2,
   12,
   23,
   23,
   30,
   17,
   22,
   18,
   16,
   11,
   9,
   2,
   1,
   4,
   5,
   0,
   4,
   2,
   0,
   1,
   0,
   0,
   1};
   Double_t _felx3005[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3005[24] = {
   1,
   2,
   3.64022,
   4.9457,
   4.9457,
   5.6197,
   4.2835,
   4.8417,
   4.4008,
   4.1628,
   3.4975,
   3.19354,
   2,
   1,
   2.29683,
   2.48995,
   0,
   2.29683,
   2,
   0,
   1,
   0,
   0,
   1};
   Double_t _fehx3005[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3005[24] = {
   1.35971,
   1.51917,
   3.4155,
   4.7346,
   4.7346,
   5.4117,
   4.0673,
   4.6299,
   4.1858,
   3.9454,
   3.27,
   2.9582,
   1.51917,
   1.35971,
   1.98186,
   2.21064,
   1.1478,
   1.98186,
   1.51917,
   1.1478,
   1.35971,
   1.1478,
   1.1478,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,660);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(38.95287);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.69#pm0.05(data err)#pm0.15(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.88/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 204.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 5.7","F");

   ci = 1443;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 18.6","F");

   ci = 1444;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.6","F");

   ci = 1445;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 19.3","F");

   ci = 1446;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  161.3","F");

   ci = 1447;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 48.9","F");

   ci = 1448;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 13.5","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 27.8","F");

   ci = 1450;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.7","F");

   ci = 1451;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[24] = {
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
   Double_t _fy3006[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3006[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3006[24] = {
   0.972658,
   0.4729372,
   0.3399406,
   0.2474074,
   0.2484454,
   0.2603931,
   0.2915584,
   0.3290729,
   0.305895,
   0.3197439,
   0.3075562,
   0.4493411,
   0.3438693,
   0.3912696,
   0.4204221,
   0.501327,
   0.5820907,
   0.7521333,
   0.6296938,
   0.5644768,
   0.6194864,
   0.9534825,
   0.8563049,
   1.294043};
   Double_t _fehx3006[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3006[24] = {
   0.972658,
   0.4729372,
   0.3399406,
   0.2474074,
   0.2484454,
   0.2603931,
   0.2915584,
   0.3290729,
   0.305895,
   0.3197439,
   0.3075562,
   0.4493411,
   0.3438693,
   0.3912696,
   0.4204221,
   0.501327,
   0.5820907,
   0.7521333,
   0.6296938,
   0.5644768,
   0.6194864,
   0.9534825,
   0.8563049,
   1.294043};
   grae = new TGraphAsymmErrors(24,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,660);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[24] = {
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
   Double_t _fy3007[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3007[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3007[24] = {
   0.3905813,
   0.2256666,
   0.1804032,
   0.205198,
   0.2112599,
   0.1996622,
   0.2212129,
   0.2238902,
   0.2474633,
   0.2450376,
   0.2321833,
   0.2208086,
   0.2357177,
   0.2327868,
   0.2464947,
   0.2345513,
   0.292472,
   0.2896167,
   0.2944527,
   0.2980845,
   0.3093835,
   0.3433043,
   0.3875025,
   0.3667266};
   Double_t _fehx3007[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3007[24] = {
   0.3905813,
   0.2256666,
   0.1804032,
   0.205198,
   0.2112599,
   0.1996622,
   0.2212129,
   0.2238902,
   0.2474633,
   0.2450376,
   0.2321833,
   0.2208086,
   0.2357177,
   0.2327868,
   0.2464947,
   0.2345513,
   0.292472,
   0.2896167,
   0.2944527,
   0.2980845,
   0.3093835,
   0.3433043,
   0.3875025,
   0.3667266};
   grae = new TGraphAsymmErrors(24,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,660);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[24] = {
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
   Double_t _fy3008[24] = {
   0.8356814,
   0.4259094,
   0.7503121,
   0.8811537,
   0.6651839,
   0.8201418,
   0.4841014,
   0.8437958,
   0.886257,
   0.929712,
   0.7142708,
   0.6963876,
   0.1877428,
   0.1125653,
   0.5576362,
   1.035919,
   0,
   1.097044,
   0.5490874,
   0,
   0.5860432,
   0,
   0,
   0.7237347};
   Double_t _felx3008[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3008[24] = {
   0.8356814,
   0.4259094,
   0.2276084,
   0.1894749,
   0.1430348,
   0.1536317,
   0.1219793,
   0.1857003,
   0.21668,
   0.2418878,
   0.2271057,
   0.2471046,
   0.1877428,
   0.1125653,
   0.3201989,
   0.5158775,
   0,
   0.6299309,
   0.5490874,
   0,
   0.5860432,
   0,
   0,
   0.7237347};
   Double_t _fehx3008[24] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3008[24] = {
   1.136284,
   0.3235144,
   0.2135576,
   0.1813874,
   0.1369296,
   0.1479454,
   0.1158227,
   0.1775768,
   0.2060941,
   0.2292554,
   0.2123332,
   0.2288949,
   0.1426066,
   0.1530562,
   0.2762892,
   0.4580089,
   0.2436705,
   0.5435469,
   0.4170785,
   0.4880739,
   0.7968488,
   0.9815207,
   1.04286,
   0.9840693};
   grae = new TGraphAsymmErrors(24,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,660);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(2.169162);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_10_kine_pio_energy_high_all",24,0,600);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
   TLine *line = new TLine(0,1,600,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
