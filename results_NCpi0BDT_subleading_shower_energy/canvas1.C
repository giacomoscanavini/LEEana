#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 12:44:06 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-92.30769,-1.441947,676.9231,121.503);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);
   hmc__1->SetBinContent(1,2.055311);
   hmc__1->SetBinContent(2,7.658675);
   hmc__1->SetBinContent(3,25.15418);
   hmc__1->SetBinContent(4,46.03065);
   hmc__1->SetBinContent(5,68.26687);
   hmc__1->SetBinContent(6,72.09733);
   hmc__1->SetBinContent(7,71.06921);
   hmc__1->SetBinContent(8,57.57865);
   hmc__1->SetBinContent(9,46.14563);
   hmc__1->SetBinContent(10,40.26766);
   hmc__1->SetBinContent(11,34.36843);
   hmc__1->SetBinContent(12,26.85482);
   hmc__1->SetBinContent(13,24.17362);
   hmc__1->SetBinContent(14,19.37437);
   hmc__1->SetBinContent(15,15.69866);
   hmc__1->SetBinContent(16,12.00857);
   hmc__1->SetBinContent(17,10.64099);
   hmc__1->SetBinContent(18,7.410382);
   hmc__1->SetBinContent(19,7.94939);
   hmc__1->SetBinContent(20,5.823535);
   hmc__1->SetBinContent(21,3.75941);
   hmc__1->SetBinContent(22,2.763747);
   hmc__1->SetBinContent(23,2.773394);
   hmc__1->SetBinContent(24,2.8248);
   hmc__1->SetBinContent(25,18.28954);
   hmc__1->SetBinError(1,2.49796);
   hmc__1->SetBinError(2,3.668962);
   hmc__1->SetBinError(3,7.227585);
   hmc__1->SetBinError(4,12.63077);
   hmc__1->SetBinError(5,13.95315);
   hmc__1->SetBinError(6,15.44697);
   hmc__1->SetBinError(7,18.34207);
   hmc__1->SetBinError(8,13.44165);
   hmc__1->SetBinError(9,11.06703);
   hmc__1->SetBinError(10,10.41846);
   hmc__1->SetBinError(11,8.763123);
   hmc__1->SetBinError(12,8.412972);
   hmc__1->SetBinError(13,6.067944);
   hmc__1->SetBinError(14,5.777834);
   hmc__1->SetBinError(15,4.610004);
   hmc__1->SetBinError(16,3.948923);
   hmc__1->SetBinError(17,3.311548);
   hmc__1->SetBinError(18,3.746018);
   hmc__1->SetBinError(19,3.06131);
   hmc__1->SetBinError(20,2.534378);
   hmc__1->SetBinError(21,2.960631);
   hmc__1->SetBinError(22,1.558465);
   hmc__1->SetBinError(23,1.632762);
   hmc__1->SetBinError(24,2.120021);
   hmc__1->SetBinError(25,4.72996);
   hmc__1->SetMinimum(-1.441947);
   hmc__1->SetMaximum(115.3557);
   hmc__1->SetEntries(622.1566);
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
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(75.7022);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,0.3403182);
   hbadmatch_stack_1->SetBinContent(2,0.4656498);
   hbadmatch_stack_1->SetBinContent(3,1.416205);
   hbadmatch_stack_1->SetBinContent(4,1.476154);
   hbadmatch_stack_1->SetBinContent(5,1.920372);
   hbadmatch_stack_1->SetBinContent(6,2.219129);
   hbadmatch_stack_1->SetBinContent(7,1.924458);
   hbadmatch_stack_1->SetBinContent(8,1.286609);
   hbadmatch_stack_1->SetBinContent(9,0.9771032);
   hbadmatch_stack_1->SetBinContent(10,0.4675219);
   hbadmatch_stack_1->SetBinContent(11,0.2368697);
   hbadmatch_stack_1->SetBinContent(12,0.3136451);
   hbadmatch_stack_1->SetBinContent(13,0.05292828);
   hbadmatch_stack_1->SetBinContent(14,0.04705126);
   hbadmatch_stack_1->SetBinContent(15,0.1458368);
   hbadmatch_stack_1->SetBinContent(17,0.06195629);
   hbadmatch_stack_1->SetBinContent(18,0.02550039);
   hbadmatch_stack_1->SetBinContent(19,0.1039871);
   hbadmatch_stack_1->SetBinContent(21,0.0127502);
   hbadmatch_stack_1->SetBinContent(23,0.08955649);
   hbadmatch_stack_1->SetBinContent(24,0.0127502);
   hbadmatch_stack_1->SetBinContent(25,0.1366628);
   hbadmatch_stack_1->SetBinError(1,0.3403182);
   hbadmatch_stack_1->SetBinError(2,0.1562212);
   hbadmatch_stack_1->SetBinError(3,0.3675448);
   hbadmatch_stack_1->SetBinError(4,0.2772034);
   hbadmatch_stack_1->SetBinError(5,0.3338035);
   hbadmatch_stack_1->SetBinError(6,0.4800965);
   hbadmatch_stack_1->SetBinError(7,0.3310778);
   hbadmatch_stack_1->SetBinError(8,0.2699321);
   hbadmatch_stack_1->SetBinError(9,0.2246998);
   hbadmatch_stack_1->SetBinError(10,0.1520573);
   hbadmatch_stack_1->SetBinError(11,0.1102997);
   hbadmatch_stack_1->SetBinError(12,0.1183458);
   hbadmatch_stack_1->SetBinError(13,0.02651673);
   hbadmatch_stack_1->SetBinError(14,0.02753897);
   hbadmatch_stack_1->SetBinError(15,0.09518756);
   hbadmatch_stack_1->SetBinError(17,0.06195629);
   hbadmatch_stack_1->SetBinError(18,0.0180315);
   hbadmatch_stack_1->SetBinError(19,0.06661061);
   hbadmatch_stack_1->SetBinError(21,0.0127502);
   hbadmatch_stack_1->SetBinError(23,0.06497439);
   hbadmatch_stack_1->SetBinError(24,0.0127502);
   hbadmatch_stack_1->SetBinError(25,0.08854226);
   hbadmatch_stack_1->SetEntries(370);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,0.4349078);
   hext_stack_2->SetBinContent(2,0.8793539);
   hext_stack_2->SetBinContent(3,3.736929);
   hext_stack_2->SetBinContent(4,2.451283);
   hext_stack_2->SetBinContent(5,6.766282);
   hext_stack_2->SetBinContent(6,6.84944);
   hext_stack_2->SetBinContent(7,6.120055);
   hext_stack_2->SetBinContent(8,5.5011);
   hext_stack_2->SetBinContent(9,2.989812);
   hext_stack_2->SetBinContent(10,2.294506);
   hext_stack_2->SetBinContent(11,2.569906);
   hext_stack_2->SetBinContent(12,0.9038936);
   hext_stack_2->SetBinContent(13,1.252912);
   hext_stack_2->SetBinContent(14,1.252912);
   hext_stack_2->SetBinContent(15,0.7443856);
   hext_stack_2->SetBinContent(16,0.4349078);
   hext_stack_2->SetBinContent(17,0.6584966);
   hext_stack_2->SetBinContent(18,0.03680956);
   hext_stack_2->SetBinContent(19,0.6216871);
   hext_stack_2->SetBinContent(20,0.2358586);
   hext_stack_2->SetBinContent(21,0.4103681);
   hext_stack_2->SetBinContent(22,0.01226985);
   hext_stack_2->SetBinContent(23,0.02453971);
   hext_stack_2->SetBinContent(24,0.211319);
   hext_stack_2->SetBinContent(25,0.3585572);
   hext_stack_2->SetBinError(1,0.282299);
   hext_stack_2->SetBinError(2,0.3497489);
   hext_stack_2->SetBinError(3,0.8004395);
   hext_stack_2->SetBinError(4,0.5722786);
   hext_stack_2->SetBinError(5,1.077585);
   hext_stack_2->SetBinError(6,1.060675);
   hext_stack_2->SetBinError(7,1.02065);
   hext_stack_2->SetBinError(8,0.9796813);
   hext_stack_2->SetBinError(9,0.694855);
   hext_stack_2->SetBinError(10,0.6022935);
   hext_stack_2->SetBinError(11,0.6636965);
   hext_stack_2->SetBinError(12,0.3501791);
   hext_stack_2->SetBinError(13,0.4486249);
   hext_stack_2->SetBinError(14,0.4486249);
   hext_stack_2->SetBinError(15,0.3473733);
   hext_stack_2->SetBinError(16,0.282299);
   hext_stack_2->SetBinError(17,0.3458531);
   hext_stack_2->SetBinError(18,0.02125201);
   hext_stack_2->SetBinError(19,0.3451996);
   hext_stack_2->SetBinError(20,0.2001804);
   hext_stack_2->SetBinError(21,0.2817652);
   hext_stack_2->SetBinError(22,0.01226985);
   hext_stack_2->SetBinError(23,0.01735219);
   hext_stack_2->SetBinError(24,0.1994269);
   hext_stack_2->SetBinError(25,0.2039061);
   hext_stack_2->SetEntries(893);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(1,0.008219617);
   hdirt_stack_3->SetBinContent(2,0.4050466);
   hdirt_stack_3->SetBinContent(3,0.4297258);
   hdirt_stack_3->SetBinContent(4,0.7510104);
   hdirt_stack_3->SetBinContent(5,1.138216);
   hdirt_stack_3->SetBinContent(6,1.00251);
   hdirt_stack_3->SetBinContent(7,0.8076484);
   hdirt_stack_3->SetBinContent(8,0.2818942);
   hdirt_stack_3->SetBinContent(9,0.2714453);
   hdirt_stack_3->SetBinContent(10,0.1235338);
   hdirt_stack_3->SetBinContent(11,0.1883179);
   hdirt_stack_3->SetBinContent(12,0.180521);
   hdirt_stack_3->SetBinContent(13,0.1248368);
   hdirt_stack_3->SetBinContent(14,0.1045323);
   hdirt_stack_3->SetBinContent(15,0.09823215);
   hdirt_stack_3->SetBinContent(16,0.1035832);
   hdirt_stack_3->SetBinContent(17,0.04420907);
   hdirt_stack_3->SetBinContent(18,0.04997326);
   hdirt_stack_3->SetBinContent(25,0.008219617);
   hdirt_stack_3->SetBinError(1,0.008219618);
   hdirt_stack_3->SetBinError(2,0.129799);
   hdirt_stack_3->SetBinError(3,0.1281945);
   hdirt_stack_3->SetBinError(4,0.1765074);
   hdirt_stack_3->SetBinError(5,0.3499188);
   hdirt_stack_3->SetBinError(6,0.1983038);
   hdirt_stack_3->SetBinError(7,0.2562743);
   hdirt_stack_3->SetBinError(8,0.09337537);
   hdirt_stack_3->SetBinError(9,0.09772973);
   hdirt_stack_3->SetBinError(10,0.06495169);
   hdirt_stack_3->SetBinError(11,0.09046746);
   hdirt_stack_3->SetBinError(12,0.08229326);
   hdirt_stack_3->SetBinError(13,0.08523457);
   hdirt_stack_3->SetBinError(14,0.06882436);
   hdirt_stack_3->SetBinError(15,0.05793584);
   hdirt_stack_3->SetBinError(16,0.07326385);
   hdirt_stack_3->SetBinError(17,0.04420907);
   hdirt_stack_3->SetBinError(18,0.04158944);
   hdirt_stack_3->SetBinError(25,0.008219618);
   hdirt_stack_3->SetEntries(224);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.2368697);
   houtFV_stack_4->SetBinContent(2,1.010051);
   houtFV_stack_4->SetBinContent(3,4.362419);
   houtFV_stack_4->SetBinContent(4,5.591761);
   houtFV_stack_4->SetBinContent(5,7.937643);
   houtFV_stack_4->SetBinContent(6,7.528909);
   houtFV_stack_4->SetBinContent(7,7.801334);
   houtFV_stack_4->SetBinContent(8,5.334853);
   houtFV_stack_4->SetBinContent(9,4.42826);
   houtFV_stack_4->SetBinContent(10,3.854581);
   houtFV_stack_4->SetBinContent(11,2.814949);
   houtFV_stack_4->SetBinContent(12,2.801961);
   houtFV_stack_4->SetBinContent(13,2.331359);
   houtFV_stack_4->SetBinContent(14,1.382453);
   houtFV_stack_4->SetBinContent(15,0.7764154);
   houtFV_stack_4->SetBinContent(16,0.9693896);
   houtFV_stack_4->SetBinContent(17,0.5389171);
   houtFV_stack_4->SetBinContent(18,0.3659441);
   houtFV_stack_4->SetBinContent(19,0.6912404);
   houtFV_stack_4->SetBinContent(20,0.4846948);
   houtFV_stack_4->SetBinContent(21,0.2733256);
   houtFV_stack_4->SetBinContent(22,0.2733256);
   houtFV_stack_4->SetBinContent(23,0.1512077);
   houtFV_stack_4->SetBinContent(24,0.4464442);
   houtFV_stack_4->SetBinContent(25,0.7144217);
   houtFV_stack_4->SetBinError(1,0.1102997);
   houtFV_stack_4->SetBinError(2,0.2321156);
   houtFV_stack_4->SetBinError(3,0.5066833);
   houtFV_stack_4->SetBinError(4,0.5548096);
   houtFV_stack_4->SetBinError(5,0.6565217);
   houtFV_stack_4->SetBinError(6,0.6384245);
   houtFV_stack_4->SetBinError(7,0.6553363);
   houtFV_stack_4->SetBinError(8,0.5311503);
   houtFV_stack_4->SetBinError(9,0.4914563);
   houtFV_stack_4->SetBinError(10,0.4650802);
   houtFV_stack_4->SetBinError(11,0.39473);
   houtFV_stack_4->SetBinError(12,0.393284);
   houtFV_stack_4->SetBinError(13,0.3687777);
   houtFV_stack_4->SetBinError(14,0.2808685);
   houtFV_stack_4->SetBinError(15,0.1956192);
   houtFV_stack_4->SetBinError(16,0.2346075);
   houtFV_stack_4->SetBinError(17,0.1681165);
   houtFV_stack_4->SetBinError(18,0.1300563);
   houtFV_stack_4->SetBinError(19,0.1906525);
   houtFV_stack_4->SetBinError(20,0.1658926);
   houtFV_stack_4->SetBinError(21,0.1252177);
   houtFV_stack_4->SetBinError(22,0.1252177);
   houtFV_stack_4->SetBinError(23,0.0705447);
   houtFV_stack_4->SetBinError(24,0.1644161);
   houtFV_stack_4->SetBinError(25,0.1913369);
   houtFV_stack_4->SetEntries(1630);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFV_stack_5->SetBinContent(1,0.26237);
   hNCpi0inFV_stack_5->SetBinContent(2,2.370491);
   hNCpi0inFV_stack_5->SetBinContent(3,9.857667);
   hNCpi0inFV_stack_5->SetBinContent(4,22.52329);
   hNCpi0inFV_stack_5->SetBinContent(5,33.72947);
   hNCpi0inFV_stack_5->SetBinContent(6,36.21092);
   hNCpi0inFV_stack_5->SetBinContent(7,35.50915);
   hNCpi0inFV_stack_5->SetBinContent(8,29.92443);
   hNCpi0inFV_stack_5->SetBinContent(9,24.95215);
   hNCpi0inFV_stack_5->SetBinContent(10,22.0896);
   hNCpi0inFV_stack_5->SetBinContent(11,18.21526);
   hNCpi0inFV_stack_5->SetBinContent(12,14.85941);
   hNCpi0inFV_stack_5->SetBinContent(13,13.63182);
   hNCpi0inFV_stack_5->SetBinContent(14,10.48082);
   hNCpi0inFV_stack_5->SetBinContent(15,8.850027);
   hNCpi0inFV_stack_5->SetBinContent(16,6.01477);
   hNCpi0inFV_stack_5->SetBinContent(17,5.169292);
   hNCpi0inFV_stack_5->SetBinContent(18,4.677419);
   hNCpi0inFV_stack_5->SetBinContent(19,3.842897);
   hNCpi0inFV_stack_5->SetBinContent(20,2.950009);
   hNCpi0inFV_stack_5->SetBinContent(21,1.683588);
   hNCpi0inFV_stack_5->SetBinContent(22,1.654498);
   hNCpi0inFV_stack_5->SetBinContent(23,1.468629);
   hNCpi0inFV_stack_5->SetBinContent(24,1.045891);
   hNCpi0inFV_stack_5->SetBinContent(25,8.611175);
   hNCpi0inFV_stack_5->SetBinError(1,0.1117638);
   hNCpi0inFV_stack_5->SetBinError(2,0.3444335);
   hNCpi0inFV_stack_5->SetBinError(3,0.7308921);
   hNCpi0inFV_stack_5->SetBinError(4,1.108694);
   hNCpi0inFV_stack_5->SetBinError(5,1.348137);
   hNCpi0inFV_stack_5->SetBinError(6,1.3984);
   hNCpi0inFV_stack_5->SetBinError(7,1.382045);
   hNCpi0inFV_stack_5->SetBinError(8,1.262892);
   hNCpi0inFV_stack_5->SetBinError(9,1.165215);
   hNCpi0inFV_stack_5->SetBinError(10,1.096509);
   hNCpi0inFV_stack_5->SetBinError(11,0.996186);
   hNCpi0inFV_stack_5->SetBinError(12,0.8990727);
   hNCpi0inFV_stack_5->SetBinError(13,0.8589764);
   hNCpi0inFV_stack_5->SetBinError(14,0.7526869);
   hNCpi0inFV_stack_5->SetBinError(15,0.6918633);
   hNCpi0inFV_stack_5->SetBinError(16,0.5661975);
   hNCpi0inFV_stack_5->SetBinError(17,0.5227008);
   hNCpi0inFV_stack_5->SetBinError(18,0.5077389);
   hNCpi0inFV_stack_5->SetBinError(19,0.4621943);
   hNCpi0inFV_stack_5->SetBinError(20,0.3994475);
   hNCpi0inFV_stack_5->SetBinError(21,0.292382);
   hNCpi0inFV_stack_5->SetBinError(22,0.3020159);
   hNCpi0inFV_stack_5->SetBinError(23,0.2823081);
   hNCpi0inFV_stack_5->SetBinError(24,0.2366772);
   hNCpi0inFV_stack_5->SetBinError(25,0.6694713);
   hNCpi0inFV_stack_5->SetEntries(8416);

   ci = 1438;
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
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_6->SetBinContent(1,0.2150352);
   hCCpi0inFV_stack_6->SetBinContent(2,0.6104021);
   hCCpi0inFV_stack_6->SetBinContent(3,2.165064);
   hCCpi0inFV_stack_6->SetBinContent(4,6.950023);
   hCCpi0inFV_stack_6->SetBinContent(5,9.951057);
   hCCpi0inFV_stack_6->SetBinContent(6,9.833026);
   hCCpi0inFV_stack_6->SetBinContent(7,10.27701);
   hCCpi0inFV_stack_6->SetBinContent(8,9.114955);
   hCCpi0inFV_stack_6->SetBinContent(9,6.830133);
   hCCpi0inFV_stack_6->SetBinContent(10,7.771439);
   hCCpi0inFV_stack_6->SetBinContent(11,6.941557);
   hCCpi0inFV_stack_6->SetBinContent(12,4.502307);
   hCCpi0inFV_stack_6->SetBinContent(13,4.54614);
   hCCpi0inFV_stack_6->SetBinContent(14,4.192724);
   hCCpi0inFV_stack_6->SetBinContent(15,3.13248);
   hCCpi0inFV_stack_6->SetBinContent(16,2.760358);
   hCCpi0inFV_stack_6->SetBinContent(17,2.139193);
   hCCpi0inFV_stack_6->SetBinContent(18,1.263913);
   hCCpi0inFV_stack_6->SetBinContent(19,1.867662);
   hCCpi0inFV_stack_6->SetBinContent(20,1.45242);
   hCCpi0inFV_stack_6->SetBinContent(21,1.069597);
   hCCpi0inFV_stack_6->SetBinContent(22,0.5739462);
   hCCpi0inFV_stack_6->SetBinContent(23,0.8090212);
   hCCpi0inFV_stack_6->SetBinContent(24,0.7580204);
   hCCpi0inFV_stack_6->SetBinContent(25,4.6279);
   hCCpi0inFV_stack_6->SetBinError(1,0.1182454);
   hCCpi0inFV_stack_6->SetBinError(2,0.1793649);
   hCCpi0inFV_stack_6->SetBinError(3,0.3426406);
   hCCpi0inFV_stack_6->SetBinError(4,0.620586);
   hCCpi0inFV_stack_6->SetBinError(5,0.7469592);
   hCCpi0inFV_stack_6->SetBinError(6,0.7342301);
   hCCpi0inFV_stack_6->SetBinError(7,0.7481112);
   hCCpi0inFV_stack_6->SetBinError(8,0.7009813);
   hCCpi0inFV_stack_6->SetBinError(9,0.607428);
   hCCpi0inFV_stack_6->SetBinError(10,0.6451991);
   hCCpi0inFV_stack_6->SetBinError(11,0.612543);
   hCCpi0inFV_stack_6->SetBinError(12,0.4857786);
   hCCpi0inFV_stack_6->SetBinError(13,0.4907971);
   hCCpi0inFV_stack_6->SetBinError(14,0.4798733);
   hCCpi0inFV_stack_6->SetBinError(15,0.4168126);
   hCCpi0inFV_stack_6->SetBinError(16,0.3899351);
   hCCpi0inFV_stack_6->SetBinError(17,0.3445779);
   hCCpi0inFV_stack_6->SetBinError(18,0.248783);
   hCCpi0inFV_stack_6->SetBinError(19,0.3162732);
   hCCpi0inFV_stack_6->SetBinError(20,0.2839196);
   hCCpi0inFV_stack_6->SetBinError(21,0.2436534);
   hCCpi0inFV_stack_6->SetBinError(22,0.1692877);
   hCCpi0inFV_stack_6->SetBinError(23,0.2094041);
   hCCpi0inFV_stack_6->SetBinError(24,0.2078456);
   hCCpi0inFV_stack_6->SetBinError(25,0.4938653);
   hCCpi0inFV_stack_6->SetEntries(2725);

   ci = 1439;
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
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_7->SetBinContent(1,0.2368697);
   hNCinFV_stack_7->SetBinContent(2,0.9329337);
   hNCinFV_stack_7->SetBinContent(3,1.333726);
   hNCinFV_stack_7->SetBinContent(4,1.931413);
   hNCinFV_stack_7->SetBinContent(5,2.093576);
   hNCinFV_stack_7->SetBinContent(6,2.702184);
   hNCinFV_stack_7->SetBinContent(7,3.199629);
   hNCinFV_stack_7->SetBinContent(8,2.388813);
   hNCinFV_stack_7->SetBinContent(9,1.395718);
   hNCinFV_stack_7->SetBinContent(10,1.034935);
   hNCinFV_stack_7->SetBinContent(11,1.122392);
   hNCinFV_stack_7->SetBinContent(12,1.045891);
   hNCinFV_stack_7->SetBinContent(13,0.5994466);
   hNCinFV_stack_7->SetBinContent(14,0.9438893);
   hNCinFV_stack_7->SetBinContent(15,0.7853155);
   hNCinFV_stack_7->SetBinContent(16,0.6851086);
   hNCinFV_stack_7->SetBinContent(17,0.8072265);
   hNCinFV_stack_7->SetBinContent(18,0.5229454);
   hNCinFV_stack_7->SetBinContent(19,0.3480321);
   hNCinFV_stack_7->SetBinContent(20,0.1986191);
   hNCinFV_stack_7->SetBinContent(21,0.2478252);
   hNCinFV_stack_7->SetBinContent(22,0.08745668);
   hNCinFV_stack_7->SetBinContent(23,0.1002069);
   hNCinFV_stack_7->SetBinContent(24,0.1366628);
   hNCinFV_stack_7->SetBinContent(25,0.8600219);
   hNCinFV_stack_7->SetBinError(1,0.1102997);
   hNCinFV_stack_7->SetBinError(2,0.2269961);
   hNCinFV_stack_7->SetBinError(3,0.2680694);
   hNCinFV_stack_7->SetBinError(4,0.3175556);
   hNCinFV_stack_7->SetBinError(5,0.3301612);
   hNCinFV_stack_7->SetBinError(6,0.379742);
   hNCinFV_stack_7->SetBinError(7,0.4145924);
   hNCinFV_stack_7->SetBinError(8,0.3620256);
   hNCinFV_stack_7->SetBinError(9,0.2695755);
   hNCinFV_stack_7->SetBinError(10,0.2298429);
   hNCinFV_stack_7->SetBinError(11,0.2387289);
   hNCinFV_stack_7->SetBinError(12,0.2366772);
   hNCinFV_stack_7->SetBinError(13,0.1702453);
   hNCinFV_stack_7->SetBinError(14,0.2339136);
   hNCinFV_stack_7->SetBinError(15,0.2012441);
   hNCinFV_stack_7->SetBinError(16,0.1901918);
   hNCinFV_stack_7->SetBinError(17,0.2165082);
   hNCinFV_stack_7->SetBinError(18,0.167356);
   hNCinFV_stack_7->SetBinError(19,0.1402876);
   hNCinFV_stack_7->SetBinError(20,0.1080662);
   hNCinFV_stack_7->SetBinError(21,0.1239126);
   hNCinFV_stack_7->SetBinError(22,0.06452687);
   hNCinFV_stack_7->SetBinError(23,0.0657745);
   hNCinFV_stack_7->SetBinError(24,0.08854226);
   hNCinFV_stack_7->SetBinError(25,0.2109511);
   hNCinFV_stack_7->SetEntries(696);

   ci = 1440;
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
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_8->SetBinContent(1,0.3207209);
   hnumuCCinFV_stack_8->SetBinContent(2,0.8608342);
   hnumuCCinFV_stack_8->SetBinContent(3,1.790483);
   hnumuCCinFV_stack_8->SetBinContent(4,4.149208);
   hnumuCCinFV_stack_8->SetBinContent(5,4.655551);
   hnumuCCinFV_stack_8->SetBinContent(6,5.583689);
   hnumuCCinFV_stack_8->SetBinContent(7,5.216157);
   hnumuCCinFV_stack_8->SetBinContent(8,3.704273);
   hnumuCCinFV_stack_8->SetBinContent(9,4.047743);
   hnumuCCinFV_stack_8->SetBinContent(10,2.618795);
   hnumuCCinFV_stack_8->SetBinContent(11,2.204474);
   hnumuCCinFV_stack_8->SetBinContent(12,2.229146);
   hnumuCCinFV_stack_8->SetBinContent(13,1.618884);
   hnumuCCinFV_stack_8->SetBinContent(14,0.9699891);
   hnumuCCinFV_stack_8->SetBinContent(15,1.165958);
   hnumuCCinFV_stack_8->SetBinContent(16,0.9644758);
   hnumuCCinFV_stack_8->SetBinContent(17,1.116708);
   hnumuCCinFV_stack_8->SetBinContent(18,0.3439657);
   hnumuCCinFV_stack_8->SetBinContent(19,0.3960199);
   hnumuCCinFV_stack_8->SetBinContent(20,0.3780214);
   hnumuCCinFV_stack_8->SetBinContent(22,0.16225);
   hnumuCCinFV_stack_8->SetBinContent(23,0.1153785);
   hnumuCCinFV_stack_8->SetBinContent(24,0.2137132);
   hnumuCCinFV_stack_8->SetBinContent(25,1.22071);
   hnumuCCinFV_stack_8->SetBinError(1,0.2278806);
   hnumuCCinFV_stack_8->SetBinError(2,0.2275276);
   hnumuCCinFV_stack_8->SetBinError(3,0.3180051);
   hnumuCCinFV_stack_8->SetBinError(4,0.8010974);
   hnumuCCinFV_stack_8->SetBinError(5,0.6931503);
   hnumuCCinFV_stack_8->SetBinError(6,0.7905013);
   hnumuCCinFV_stack_8->SetBinError(7,0.7515523);
   hnumuCCinFV_stack_8->SetBinError(8,0.4838404);
   hnumuCCinFV_stack_8->SetBinError(9,0.559561);
   hnumuCCinFV_stack_8->SetBinError(10,0.4057088);
   hnumuCCinFV_stack_8->SetBinError(11,0.3621701);
   hnumuCCinFV_stack_8->SetBinError(12,0.380857);
   hnumuCCinFV_stack_8->SetBinError(13,0.3344958);
   hnumuCCinFV_stack_8->SetBinError(14,0.2705076);
   hnumuCCinFV_stack_8->SetBinError(15,0.269163);
   hnumuCCinFV_stack_8->SetBinError(16,0.2345196);
   hnumuCCinFV_stack_8->SetBinError(17,0.2574378);
   hnumuCCinFV_stack_8->SetBinError(18,0.1343225);
   hnumuCCinFV_stack_8->SetBinError(19,0.1507748);
   hnumuCCinFV_stack_8->SetBinError(20,0.1457713);
   hnumuCCinFV_stack_8->SetBinError(22,0.09037194);
   hnumuCCinFV_stack_8->SetBinError(23,0.06750156);
   hnumuCCinFV_stack_8->SetBinError(24,0.1091153);
   hnumuCCinFV_stack_8->SetBinError(25,0.2633772);
   hnumuCCinFV_stack_8->SetEntries(1072);

   ci = 1441;
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
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_9->SetBinContent(2,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(3,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(4,0.2064981);
   hnueCCinFV_stack_9->SetBinContent(5,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(6,0.1675229);
   hnueCCinFV_stack_9->SetBinContent(7,0.2137789);
   hnueCCinFV_stack_9->SetBinContent(8,0.04171441);
   hnueCCinFV_stack_9->SetBinContent(9,0.2532581);
   hnueCCinFV_stack_9->SetBinContent(10,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(11,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(12,0.0180466);
   hnueCCinFV_stack_9->SetBinContent(13,0.01528837);
   hnueCCinFV_stack_9->SetBinContent(15,1.378697e-05);
   hnueCCinFV_stack_9->SetBinContent(16,0.07597598);
   hnueCCinFV_stack_9->SetBinContent(17,0.1049875);
   hnueCCinFV_stack_9->SetBinContent(18,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(19,0.07786438);
   hnueCCinFV_stack_9->SetBinContent(20,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(21,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(23,0.01485452);
   hnueCCinFV_stack_9->SetBinContent(25,1.751868);
   hnueCCinFV_stack_9->SetBinError(2,0.08761943);
   hnueCCinFV_stack_9->SetBinError(3,0.06195629);
   hnueCCinFV_stack_9->SetBinError(4,0.1028195);
   hnueCCinFV_stack_9->SetBinError(5,0.06325464);
   hnueCCinFV_stack_9->SetBinError(6,0.1087673);
   hnueCCinFV_stack_9->SetBinError(7,0.1079663);
   hnueCCinFV_stack_9->SetBinError(8,0.02424932);
   hnueCCinFV_stack_9->SetBinError(9,0.1192881);
   hnueCCinFV_stack_9->SetBinError(10,0.0127502);
   hnueCCinFV_stack_9->SetBinError(11,0.06325464);
   hnueCCinFV_stack_9->SetBinError(12,0.0180466);
   hnueCCinFV_stack_9->SetBinError(13,0.01528837);
   hnueCCinFV_stack_9->SetBinError(15,1.378697e-05);
   hnueCCinFV_stack_9->SetBinError(16,0.06326738);
   hnueCCinFV_stack_9->SetBinError(17,0.08150667);
   hnueCCinFV_stack_9->SetBinError(18,0.08761943);
   hnueCCinFV_stack_9->SetBinError(19,0.063966);
   hnueCCinFV_stack_9->SetBinError(20,0.08761943);
   hnueCCinFV_stack_9->SetBinError(21,0.06195629);
   hnueCCinFV_stack_9->SetBinError(23,0.01485452);
   hnueCCinFV_stack_9->SetBinError(25,0.5408163);
   hnueCCinFV_stack_9->SetEntries(85);

   ci = 1442;
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
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);
   hmcerror__2->SetBinContent(1,2.055311);
   hmcerror__2->SetBinContent(2,7.658675);
   hmcerror__2->SetBinContent(3,25.15418);
   hmcerror__2->SetBinContent(4,46.03065);
   hmcerror__2->SetBinContent(5,68.26687);
   hmcerror__2->SetBinContent(6,72.09733);
   hmcerror__2->SetBinContent(7,71.06921);
   hmcerror__2->SetBinContent(8,57.57865);
   hmcerror__2->SetBinContent(9,46.14563);
   hmcerror__2->SetBinContent(10,40.26766);
   hmcerror__2->SetBinContent(11,34.36843);
   hmcerror__2->SetBinContent(12,26.85482);
   hmcerror__2->SetBinContent(13,24.17362);
   hmcerror__2->SetBinContent(14,19.37437);
   hmcerror__2->SetBinContent(15,15.69866);
   hmcerror__2->SetBinContent(16,12.00857);
   hmcerror__2->SetBinContent(17,10.64099);
   hmcerror__2->SetBinContent(18,7.410382);
   hmcerror__2->SetBinContent(19,7.94939);
   hmcerror__2->SetBinContent(20,5.823535);
   hmcerror__2->SetBinContent(21,3.75941);
   hmcerror__2->SetBinContent(22,2.763747);
   hmcerror__2->SetBinContent(23,2.773394);
   hmcerror__2->SetBinContent(24,2.8248);
   hmcerror__2->SetBinContent(25,18.28954);
   hmcerror__2->SetBinError(1,2.49796);
   hmcerror__2->SetBinError(2,3.668962);
   hmcerror__2->SetBinError(3,7.227585);
   hmcerror__2->SetBinError(4,12.63077);
   hmcerror__2->SetBinError(5,13.95315);
   hmcerror__2->SetBinError(6,15.44697);
   hmcerror__2->SetBinError(7,18.34207);
   hmcerror__2->SetBinError(8,13.44165);
   hmcerror__2->SetBinError(9,11.06703);
   hmcerror__2->SetBinError(10,10.41846);
   hmcerror__2->SetBinError(11,8.763123);
   hmcerror__2->SetBinError(12,8.412972);
   hmcerror__2->SetBinError(13,6.067944);
   hmcerror__2->SetBinError(14,5.777834);
   hmcerror__2->SetBinError(15,4.610004);
   hmcerror__2->SetBinError(16,3.948923);
   hmcerror__2->SetBinError(17,3.311548);
   hmcerror__2->SetBinError(18,3.746018);
   hmcerror__2->SetBinError(19,3.06131);
   hmcerror__2->SetBinError(20,2.534378);
   hmcerror__2->SetBinError(21,2.960631);
   hmcerror__2->SetBinError(22,1.558465);
   hmcerror__2->SetBinError(23,1.632762);
   hmcerror__2->SetBinError(24,2.120021);
   hmcerror__2->SetBinError(25,4.72996);
   hmcerror__2->SetEntries(622.1566);

   ci = TColor::GetColor("#666666");
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
   1,
   5,
   22,
   37,
   58,
   69,
   48,
   63,
   39,
   41,
   25,
   23,
   13,
   10,
   9,
   14,
   4,
   9,
   5,
   2,
   4,
   0,
   0,
   2};
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
   1,
   2.48995,
   4.8417,
   6.2203,
   7.7446,
   8.4327,
   7.0604,
   8.0648,
   6.3813,
   6.5384,
   5.1474,
   4.9457,
   3.77763,
   3.34883,
   3.19354,
   3.9102,
   2.29683,
   3.19354,
   2.48995,
   2,
   2.29683,
   0,
   0,
   2};
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
   1.35971,
   2.21064,
   4.6299,
   6.0141,
   7.5415,
   8.2304,
   6.8561,
   7.862,
   6.1757,
   6.3331,
   4.9374,
   4.7346,
   3.5552,
   3.1179,
   2.9582,
   3.6898,
   1.98186,
   2.9582,
   2.21064,
   1.51917,
   1.98186,
   1.1478,
   1.1478,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,660);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(84.95344);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.82#pm0.04(data err)#pm0.16(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.18/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 503.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 13.6","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 47.4","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 62.4","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  312.0","F");

   ci = 1438;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 99.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 24.9","F");

   ci = 1440;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 44.8","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.8","F");

   ci = 1442;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_10_kine_pio_energy_high_all");
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
   1.215369,
   0.4790596,
   0.2873314,
   0.274399,
   0.2043912,
   0.2142516,
   0.2580875,
   0.2334485,
   0.2398284,
   0.2587301,
   0.254976,
   0.313276,
   0.2510151,
   0.2982205,
   0.2936558,
   0.3288421,
   0.3112069,
   0.5055095,
   0.3850999,
   0.4351957,
   0.7875254,
   0.5638959,
   0.5887235,
   0.7505028};
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
   1.215369,
   0.4790596,
   0.2873314,
   0.274399,
   0.2043912,
   0.2142516,
   0.2580875,
   0.2334485,
   0.2398284,
   0.2587301,
   0.254976,
   0.313276,
   0.2510151,
   0.2982205,
   0.2936558,
   0.3288421,
   0.3112069,
   0.5055095,
   0.3850999,
   0.4351957,
   0.7875254,
   0.5638959,
   0.5887235,
   0.7505028};
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
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
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
   0.4548445,
   0.1865599,
   0.1706798,
   0.1927103,
   0.1822022,
   0.1901116,
   0.2057832,
   0.2069886,
   0.2150773,
   0.2198749,
   0.2067335,
   0.2070496,
   0.2091615,
   0.2099361,
   0.2053068,
   0.2032697,
   0.2138173,
   0.2378653,
   0.2275976,
   0.2217993,
   0.2368836,
   0.2644345,
   0.2872626,
   0.2875262};
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
   0.4548445,
   0.1865599,
   0.1706798,
   0.1927103,
   0.1822022,
   0.1901116,
   0.2057832,
   0.2069886,
   0.2150773,
   0.2198749,
   0.2067335,
   0.2070496,
   0.2091615,
   0.2099361,
   0.2053068,
   0.2032697,
   0.2138173,
   0.2378653,
   0.2275976,
   0.2217993,
   0.2368836,
   0.2644345,
   0.2872626,
   0.2875262};
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
   0.4865444,
   0.6528544,
   0.8746062,
   0.8038123,
   0.8496069,
   0.9570396,
   0.6753979,
   1.094156,
   0.8451505,
   1.018187,
   0.7274117,
   0.856457,
   0.5377763,
   0.5161458,
   0.5732972,
   1.165834,
   0.375905,
   1.214512,
   0.628979,
   0.343434,
   1.063997,
   0,
   0,
   0.7080146};
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
   0.4865444,
   0.325115,
   0.1924809,
   0.1351339,
   0.113446,
   0.1169627,
   0.09934541,
   0.1400658,
   0.1382861,
   0.1623735,
   0.1497712,
   0.1841643,
   0.1562708,
   0.1728485,
   0.2034275,
   0.3256175,
   0.2158475,
   0.4309548,
   0.3132253,
   0.343434,
   0.6109549,
   0,
   0,
   0.7080146};
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
   0.6615593,
   0.2886452,
   0.1840609,
   0.1306543,
   0.1104709,
   0.1141568,
   0.09647074,
   0.1365437,
   0.1338307,
   0.1572751,
   0.1436609,
   0.1763035,
   0.1470694,
   0.1609291,
   0.1884364,
   0.3072639,
   0.1862478,
   0.3991967,
   0.2780892,
   0.2608673,
   0.5271732,
   0.4153058,
   0.4138611,
   0.5377973};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,660);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(1.77508);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_10_kine_pio_energy_high_all",24,0,600);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
