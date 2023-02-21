#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Jun  8 12:45:27 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",60,83,1200,900);
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
   pad1->Range(-184.6154,-31.27066,1353.846,3457.877);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hmc__1->SetBinContent(1,63.78239);
   hmc__1->SetBinContent(2,413.1949);
   hmc__1->SetBinContent(3,1229.046);
   hmc__1->SetBinContent(4,1563.533);
   hmc__1->SetBinContent(5,1213.109);
   hmc__1->SetBinContent(6,847.0326);
   hmc__1->SetBinContent(7,625.5372);
   hmc__1->SetBinContent(8,425.4853);
   hmc__1->SetBinContent(9,269.5117);
   hmc__1->SetBinContent(10,181.5688);
   hmc__1->SetBinContent(11,125.3815);
   hmc__1->SetBinContent(12,80.93864);
   hmc__1->SetBinContent(13,54.0702);
   hmc__1->SetBinContent(14,37.24714);
   hmc__1->SetBinContent(15,28.11162);
   hmc__1->SetBinContent(16,20.81454);
   hmc__1->SetBinContent(17,11.98385);
   hmc__1->SetBinContent(18,13.15085);
   hmc__1->SetBinContent(19,7.108247);
   hmc__1->SetBinContent(20,5.125812);
   hmc__1->SetBinContent(21,48.86523);
   hmc__1->SetBinError(1,12.74301);
   hmc__1->SetBinError(2,70.29032);
   hmc__1->SetBinError(3,230.7904);
   hmc__1->SetBinError(4,312.6181);
   hmc__1->SetBinError(5,261.5719);
   hmc__1->SetBinError(6,187.0668);
   hmc__1->SetBinError(7,135.9055);
   hmc__1->SetBinError(8,95.03509);
   hmc__1->SetBinError(9,62.78027);
   hmc__1->SetBinError(10,41.74737);
   hmc__1->SetBinError(11,31.53722);
   hmc__1->SetBinError(12,20.85035);
   hmc__1->SetBinError(13,16.15363);
   hmc__1->SetBinError(14,10.21555);
   hmc__1->SetBinError(15,9.103347);
   hmc__1->SetBinError(16,10.42931);
   hmc__1->SetBinError(17,7.023485);
   hmc__1->SetBinError(18,4.94138);
   hmc__1->SetBinError(19,2.813716);
   hmc__1->SetBinError(20,2.786696);
   hmc__1->SetBinError(21,12.87788);
   hmc__1->SetMinimum(-31.27066);
   hmc__1->SetMaximum(3283.42);
   hmc__1->SetEntries(7171.878);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,1200);
   hs1_stack_1->SetMinimum(-1.150846e-08);
   hs1_stack_1->SetMaximum(1641.71);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hbadmatch_stack_1->SetBinContent(1,4.96364);
   hbadmatch_stack_1->SetBinContent(2,21.95264);
   hbadmatch_stack_1->SetBinContent(3,37.6202);
   hbadmatch_stack_1->SetBinContent(4,45.70069);
   hbadmatch_stack_1->SetBinContent(5,29.47354);
   hbadmatch_stack_1->SetBinContent(6,11.86256);
   hbadmatch_stack_1->SetBinContent(7,11.62864);
   hbadmatch_stack_1->SetBinContent(8,3.754045);
   hbadmatch_stack_1->SetBinContent(9,4.591603);
   hbadmatch_stack_1->SetBinContent(10,4.676728);
   hbadmatch_stack_1->SetBinContent(11,1.217248);
   hbadmatch_stack_1->SetBinContent(12,0.3917402);
   hbadmatch_stack_1->SetBinContent(13,0.5901461);
   hbadmatch_stack_1->SetBinContent(14,0.7896314);
   hbadmatch_stack_1->SetBinContent(16,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.7336084);
   hbadmatch_stack_1->SetBinContent(21,0.3917402);
   hbadmatch_stack_1->SetBinError(1,1.500427);
   hbadmatch_stack_1->SetBinError(2,2.605492);
   hbadmatch_stack_1->SetBinError(3,3.12925);
   hbadmatch_stack_1->SetBinError(4,4.007367);
   hbadmatch_stack_1->SetBinError(5,3.377327);
   hbadmatch_stack_1->SetBinError(6,1.797144);
   hbadmatch_stack_1->SetBinError(7,2.398189);
   hbadmatch_stack_1->SetBinError(8,1.011571);
   hbadmatch_stack_1->SetBinError(9,1.09304);
   hbadmatch_stack_1->SetBinError(10,1.152194);
   hbadmatch_stack_1->SetBinError(11,0.6211758);
   hbadmatch_stack_1->SetBinError(12,0.2770047);
   hbadmatch_stack_1->SetBinError(13,0.340721);
   hbadmatch_stack_1->SetBinError(14,0.4841165);
   hbadmatch_stack_1->SetBinError(16,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.4394482);
   hbadmatch_stack_1->SetBinError(21,0.2770047);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hext_stack_2->SetBinContent(1,18.1049);
   hext_stack_2->SetBinContent(2,78.74597);
   hext_stack_2->SetBinContent(3,196.1875);
   hext_stack_2->SetBinContent(4,173.8958);
   hext_stack_2->SetBinContent(5,121.934);
   hext_stack_2->SetBinContent(6,64.05267);
   hext_stack_2->SetBinContent(7,35.50753);
   hext_stack_2->SetBinContent(8,26.17616);
   hext_stack_2->SetBinContent(9,16.64291);
   hext_stack_2->SetBinContent(10,8.186592);
   hext_stack_2->SetBinContent(11,3.483397);
   hext_stack_2->SetBinContent(12,1.137595);
   hext_stack_2->SetBinContent(13,1.219797);
   hext_stack_2->SetBinContent(15,0.4065989);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(19,0.3243973);
   hext_stack_2->SetBinContent(20,0.4065989);
   hext_stack_2->SetBinContent(21,6.870233);
   hext_stack_2->SetBinError(1,2.940542);
   hext_stack_2->SetBinError(2,5.908038);
   hext_stack_2->SetBinError(3,9.582394);
   hext_stack_2->SetBinError(4,9.026299);
   hext_stack_2->SetBinError(5,7.593474);
   hext_stack_2->SetBinError(6,5.450133);
   hext_stack_2->SetBinError(7,4.027185);
   hext_stack_2->SetBinError(8,3.552458);
   hext_stack_2->SetBinError(9,2.847047);
   hext_stack_2->SetBinError(10,1.834006);
   hext_stack_2->SetBinError(11,1.197416);
   hext_stack_2->SetBinError(12,0.6602113);
   hext_stack_2->SetBinError(13,0.7042499);
   hext_stack_2->SetBinError(15,0.4065989);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(19,0.3243973);
   hext_stack_2->SetBinError(20,0.4065989);
   hext_stack_2->SetBinError(21,1.791626);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hdirt_stack_3->SetBinContent(1,1.643063);
   hdirt_stack_3->SetBinContent(2,8.621565);
   hdirt_stack_3->SetBinContent(3,20.19897);
   hdirt_stack_3->SetBinContent(4,19.74645);
   hdirt_stack_3->SetBinContent(5,9.877916);
   hdirt_stack_3->SetBinContent(6,4.940606);
   hdirt_stack_3->SetBinContent(7,4.451317);
   hdirt_stack_3->SetBinContent(8,0.7028415);
   hdirt_stack_3->SetBinContent(9,1.298596);
   hdirt_stack_3->SetBinContent(10,1.330832);
   hdirt_stack_3->SetBinContent(11,0.2188956);
   hdirt_stack_3->SetBinError(1,0.6177553);
   hdirt_stack_3->SetBinError(2,1.504692);
   hdirt_stack_3->SetBinError(3,2.309353);
   hdirt_stack_3->SetBinError(4,2.444243);
   hdirt_stack_3->SetBinError(5,1.676253);
   hdirt_stack_3->SetBinError(6,1.194451);
   hdirt_stack_3->SetBinError(7,1.338235);
   hdirt_stack_3->SetBinError(8,0.4537404);
   hdirt_stack_3->SetBinError(9,0.6867118);
   hdirt_stack_3->SetBinError(10,1.107563);
   hdirt_stack_3->SetBinError(11,0.2188956);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   houtFV_stack_4->SetBinContent(1,8.183306);
   houtFV_stack_4->SetBinContent(2,56.48516);
   houtFV_stack_4->SetBinContent(3,148.5117);
   houtFV_stack_4->SetBinContent(4,179.7697);
   houtFV_stack_4->SetBinContent(5,115.9517);
   houtFV_stack_4->SetBinContent(6,71.80514);
   houtFV_stack_4->SetBinContent(7,52.54074);
   houtFV_stack_4->SetBinContent(8,31.62901);
   houtFV_stack_4->SetBinContent(9,20.33953);
   houtFV_stack_4->SetBinContent(10,10.72179);
   houtFV_stack_4->SetBinContent(11,10.64298);
   houtFV_stack_4->SetBinContent(12,5.948933);
   houtFV_stack_4->SetBinContent(13,3.035259);
   houtFV_stack_4->SetBinContent(14,1.268811);
   houtFV_stack_4->SetBinContent(15,1.907429);
   houtFV_stack_4->SetBinContent(16,1.33269);
   houtFV_stack_4->SetBinContent(17,0.3934307);
   houtFV_stack_4->SetBinContent(18,0.3934307);
   houtFV_stack_4->SetBinContent(19,0.3934307);
   houtFV_stack_4->SetBinContent(20,0.1950248);
   houtFV_stack_4->SetBinContent(21,0.7825125);
   houtFV_stack_4->SetBinError(1,1.481247);
   houtFV_stack_4->SetBinError(2,3.738426);
   houtFV_stack_4->SetBinError(3,6.178172);
   houtFV_stack_4->SetBinError(4,6.87064);
   houtFV_stack_4->SetBinError(5,5.388653);
   houtFV_stack_4->SetBinError(6,4.149278);
   houtFV_stack_4->SetBinError(7,3.632903);
   houtFV_stack_4->SetBinError(8,2.806952);
   houtFV_stack_4->SetBinError(9,2.38586);
   houtFV_stack_4->SetBinError(10,1.682067);
   houtFV_stack_4->SetBinError(11,1.609155);
   houtFV_stack_4->SetBinError(12,1.286971);
   houtFV_stack_4->SetBinError(13,0.8693744);
   houtFV_stack_4->SetBinError(14,0.5889569);
   houtFV_stack_4->SetBinError(15,0.7621321);
   houtFV_stack_4->SetBinError(16,0.5593552);
   houtFV_stack_4->SetBinError(17,0.2781975);
   houtFV_stack_4->SetBinError(18,0.2781975);
   houtFV_stack_4->SetBinError(19,0.2781975);
   houtFV_stack_4->SetBinError(20,0.1950249);
   houtFV_stack_4->SetBinError(21,0.4634077);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.308644);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,6.118926);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.61716);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,17.26104);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,13.93013);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,14.18156);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,11.30952);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,8.368217);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.966799);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.863338);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.52413);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.799226);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.589476);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.142908);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.7249039);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,2.440262);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3009254);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.8202941);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.172419);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.363715);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.204028);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.233778);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.15587);
   hNCpi0inFVcoh_stack_5->SetBinError(9,1.014594);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7545539);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.6707193);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.5176605);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4488676);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4118635);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3527294);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2578571);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4825746);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.547621);
   hNCpi0inFVqe_stack_6->SetBinContent(3,6.304096);
   hNCpi0inFVqe_stack_6->SetBinContent(4,5.549627);
   hNCpi0inFVqe_stack_6->SetBinContent(5,5.076992);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.802466);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.800058);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.283904);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.460186);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.8368403);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.3101608);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.7978039);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.7284847);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.745647);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5378189);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4698386);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3661742);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2287991);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3675891);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,8.045353);
   hNCpi0inFVres_stack_7->SetBinContent(2,111.9854);
   hNCpi0inFVres_stack_7->SetBinContent(3,443.1943);
   hNCpi0inFVres_stack_7->SetBinContent(4,634.6381);
   hNCpi0inFVres_stack_7->SetBinContent(5,494.5432);
   hNCpi0inFVres_stack_7->SetBinContent(6,353.5228);
   hNCpi0inFVres_stack_7->SetBinContent(7,255.1811);
   hNCpi0inFVres_stack_7->SetBinContent(8,171.9932);
   hNCpi0inFVres_stack_7->SetBinContent(9,106.2038);
   hNCpi0inFVres_stack_7->SetBinContent(10,63.62289);
   hNCpi0inFVres_stack_7->SetBinContent(11,38.12684);
   hNCpi0inFVres_stack_7->SetBinContent(12,24.98921);
   hNCpi0inFVres_stack_7->SetBinContent(13,16.0615);
   hNCpi0inFVres_stack_7->SetBinContent(14,10.86228);
   hNCpi0inFVres_stack_7->SetBinContent(15,6.830876);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.836102);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.912402);
   hNCpi0inFVres_stack_7->SetBinContent(18,2.816252);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.60459);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.878854);
   hNCpi0inFVres_stack_7->SetBinContent(21,3.625352);
   hNCpi0inFVres_stack_7->SetBinError(1,0.8364253);
   hNCpi0inFVres_stack_7->SetBinError(2,3.469797);
   hNCpi0inFVres_stack_7->SetBinError(3,6.865415);
   hNCpi0inFVres_stack_7->SetBinError(4,8.238479);
   hNCpi0inFVres_stack_7->SetBinError(5,7.233117);
   hNCpi0inFVres_stack_7->SetBinError(6,6.187786);
   hNCpi0inFVres_stack_7->SetBinError(7,5.254465);
   hNCpi0inFVres_stack_7->SetBinError(8,4.282377);
   hNCpi0inFVres_stack_7->SetBinError(9,3.402687);
   hNCpi0inFVres_stack_7->SetBinError(10,2.611171);
   hNCpi0inFVres_stack_7->SetBinError(11,2.058084);
   hNCpi0inFVres_stack_7->SetBinError(12,1.662896);
   hNCpi0inFVres_stack_7->SetBinError(13,1.309381);
   hNCpi0inFVres_stack_7->SetBinError(14,1.076934);
   hNCpi0inFVres_stack_7->SetBinError(15,0.847788);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6599949);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5038159);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5737105);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4272476);
   hNCpi0inFVres_stack_7->SetBinError(20,0.3111014);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5930578);
   hNCpi0inFVres_stack_7->SetEntries(50865);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.59338);
   hNCpi0inFVdis_stack_8->SetBinContent(2,20.77345);
   hNCpi0inFVdis_stack_8->SetBinContent(3,82.53248);
   hNCpi0inFVdis_stack_8->SetBinContent(4,102.7485);
   hNCpi0inFVdis_stack_8->SetBinContent(5,77.76143);
   hNCpi0inFVdis_stack_8->SetBinContent(6,58.49423);
   hNCpi0inFVdis_stack_8->SetBinContent(7,49.45411);
   hNCpi0inFVdis_stack_8->SetBinContent(8,41.3674);
   hNCpi0inFVdis_stack_8->SetBinContent(9,27.70631);
   hNCpi0inFVdis_stack_8->SetBinContent(10,19.57758);
   hNCpi0inFVdis_stack_8->SetBinContent(11,14.34897);
   hNCpi0inFVdis_stack_8->SetBinContent(12,9.665234);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.095178);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.470672);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.835438);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.275606);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.47854);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.868644);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.351826);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.36794);
   hNCpi0inFVdis_stack_8->SetBinContent(21,6.624445);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.4938683);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.445953);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.875846);
   hNCpi0inFVdis_stack_8->SetBinError(4,3.28795);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.885608);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.463319);
   hNCpi0inFVdis_stack_8->SetBinError(7,2.298668);
   hNCpi0inFVdis_stack_8->SetBinError(8,2.112956);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.735973);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.445034);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.292829);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.03554);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7898776);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8754563);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6701388);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.6018526);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3911843);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4584479);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3701385);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4493736);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.7870389);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.1952999);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.8654041);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.4042178);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.3206861);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.07381642);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.3498677);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.1342881);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2201295);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);

   ci = 1443;
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
   hs1->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hCCpi0inFV_stack_11->SetBinContent(1,3.174371);
   hCCpi0inFV_stack_11->SetBinContent(2,37.15258);
   hCCpi0inFV_stack_11->SetBinContent(3,136.2556);
   hCCpi0inFV_stack_11->SetBinContent(4,198.4451);
   hCCpi0inFV_stack_11->SetBinContent(5,195.0319);
   hCCpi0inFV_stack_11->SetBinContent(6,173.1977);
   hCCpi0inFV_stack_11->SetBinContent(7,134.2521);
   hCCpi0inFV_stack_11->SetBinContent(8,88.15103);
   hCCpi0inFV_stack_11->SetBinContent(9,59.98557);
   hCCpi0inFV_stack_11->SetBinContent(10,48.04073);
   hCCpi0inFV_stack_11->SetBinContent(11,32.6983);
   hCCpi0inFV_stack_11->SetBinContent(12,23.3432);
   hCCpi0inFV_stack_11->SetBinContent(13,16.60551);
   hCCpi0inFV_stack_11->SetBinContent(14,10.86175);
   hCCpi0inFV_stack_11->SetBinContent(15,8.020903);
   hCCpi0inFV_stack_11->SetBinContent(16,7.804155);
   hCCpi0inFV_stack_11->SetBinContent(17,2.730956);
   hCCpi0inFV_stack_11->SetBinContent(18,3.999767);
   hCCpi0inFV_stack_11->SetBinContent(19,2.055672);
   hCCpi0inFV_stack_11->SetBinContent(20,1.322064);
   hCCpi0inFV_stack_11->SetBinContent(21,10.84376);
   hCCpi0inFV_stack_11->SetBinError(1,0.9114112);
   hCCpi0inFV_stack_11->SetBinError(2,3.04875);
   hCCpi0inFV_stack_11->SetBinError(3,5.853411);
   hCCpi0inFV_stack_11->SetBinError(4,7.032499);
   hCCpi0inFV_stack_11->SetBinError(5,7.007999);
   hCCpi0inFV_stack_11->SetBinError(6,6.649172);
   hCCpi0inFV_stack_11->SetBinError(7,5.846952);
   hCCpi0inFV_stack_11->SetBinError(8,4.669108);
   hCCpi0inFV_stack_11->SetBinError(9,3.891921);
   hCCpi0inFV_stack_11->SetBinError(10,3.488653);
   hCCpi0inFV_stack_11->SetBinError(11,2.826967);
   hCCpi0inFV_stack_11->SetBinError(12,2.443945);
   hCCpi0inFV_stack_11->SetBinError(13,2.058159);
   hCCpi0inFV_stack_11->SetBinError(14,1.619176);
   hCCpi0inFV_stack_11->SetBinError(15,1.402123);
   hCCpi0inFV_stack_11->SetBinError(16,1.365759);
   hCCpi0inFV_stack_11->SetBinError(17,0.8550514);
   hCCpi0inFV_stack_11->SetBinError(18,1.03826);
   hCCpi0inFV_stack_11->SetBinError(19,0.7082781);
   hCCpi0inFV_stack_11->SetBinError(20,0.5554667);
   hCCpi0inFV_stack_11->SetBinError(21,1.677222);
   hCCpi0inFV_stack_11->SetEntries(5105);

   ci = 1444;
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
   hs1->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hNCinFV_stack_12->SetBinContent(1,7.210981);
   hNCinFV_stack_12->SetBinContent(2,25.26305);
   hNCinFV_stack_12->SetBinContent(3,49.77182);
   hNCinFV_stack_12->SetBinContent(4,63.31564);
   hNCinFV_stack_12->SetBinContent(5,47.06143);
   hNCinFV_stack_12->SetBinContent(6,28.03109);
   hNCinFV_stack_12->SetBinContent(7,21.16293);
   hNCinFV_stack_12->SetBinContent(8,16.9911);
   hNCinFV_stack_12->SetBinContent(9,8.260727);
   hNCinFV_stack_12->SetBinContent(10,8.692805);
   hNCinFV_stack_12->SetBinContent(11,10.89532);
   hNCinFV_stack_12->SetBinContent(12,4.588223);
   hNCinFV_stack_12->SetBinContent(13,2.839153);
   hNCinFV_stack_12->SetBinContent(14,1.513708);
   hNCinFV_stack_12->SetBinContent(15,2.7859);
   hNCinFV_stack_12->SetBinContent(16,1.663932);
   hNCinFV_stack_12->SetBinContent(17,0.9269427);
   hNCinFV_stack_12->SetBinContent(18,0.536893);
   hNCinFV_stack_12->SetBinContent(20,0.3401776);
   hNCinFV_stack_12->SetBinContent(21,0.9286332);
   hNCinFV_stack_12->SetBinError(1,1.414396);
   hNCinFV_stack_12->SetBinError(2,2.50541);
   hNCinFV_stack_12->SetBinError(3,3.529184);
   hNCinFV_stack_12->SetBinError(4,3.993022);
   hNCinFV_stack_12->SetBinError(5,3.516285);
   hNCinFV_stack_12->SetBinError(6,2.650289);
   hNCinFV_stack_12->SetBinError(7,2.253835);
   hNCinFV_stack_12->SetBinError(8,2.123377);
   hNCinFV_stack_12->SetBinError(9,1.400837);
   hNCinFV_stack_12->SetBinError(10,1.481242);
   hNCinFV_stack_12->SetBinError(11,1.665558);
   hNCinFV_stack_12->SetBinError(12,1.092434);
   hNCinFV_stack_12->SetBinError(13,0.8093956);
   hNCinFV_stack_12->SetBinError(14,0.5875827);
   hNCinFV_stack_12->SetBinError(15,0.8327353);
   hNCinFV_stack_12->SetBinError(16,0.6518637);
   hNCinFV_stack_12->SetBinError(17,0.4800908);
   hNCinFV_stack_12->SetBinError(18,0.3929602);
   hNCinFV_stack_12->SetBinError(20,0.3401776);
   hNCinFV_stack_12->SetBinError(21,0.48078);
   hNCinFV_stack_12->SetEntries(1286);

   ci = 1445;
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
   hs1->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hnumuCCinFV_stack_13->SetBinContent(1,9.556782);
   hnumuCCinFV_stack_13->SetBinContent(2,47.27654);
   hnumuCCinFV_stack_13->SetBinContent(3,98.87508);
   hnumuCCinFV_stack_13->SetBinContent(4,118.1777);
   hnumuCCinFV_stack_13->SetBinContent(5,94.74971);
   hnumuCCinFV_stack_13->SetBinContent(6,61.52158);
   hnumuCCinFV_stack_13->SetBinContent(7,44.14491);
   hnumuCCinFV_stack_13->SetBinContent(8,29.6027);
   hnumuCCinFV_stack_13->SetBinContent(9,12.8384);
   hnumuCCinFV_stack_13->SetBinContent(10,8.772066);
   hnumuCCinFV_stack_13->SetBinContent(11,8.728626);
   hnumuCCinFV_stack_13->SetBinContent(12,5.281466);
   hnumuCCinFV_stack_13->SetBinContent(13,4.271308);
   hnumuCCinFV_stack_13->SetBinContent(14,3.282743);
   hnumuCCinFV_stack_13->SetBinContent(15,1.351991);
   hnumuCCinFV_stack_13->SetBinContent(16,1.071804);
   hnumuCCinFV_stack_13->SetBinContent(17,0.9801958);
   hnumuCCinFV_stack_13->SetBinContent(18,0.6465525);
   hnumuCCinFV_stack_13->SetBinContent(19,0.3401776);
   hnumuCCinFV_stack_13->SetBinContent(20,0.2528504);
   hnumuCCinFV_stack_13->SetBinContent(21,3.082615);
   hnumuCCinFV_stack_13->SetBinError(1,2.051339);
   hnumuCCinFV_stack_13->SetBinError(2,4.413234);
   hnumuCCinFV_stack_13->SetBinError(3,6.119351);
   hnumuCCinFV_stack_13->SetBinError(4,6.403278);
   hnumuCCinFV_stack_13->SetBinError(5,5.885728);
   hnumuCCinFV_stack_13->SetBinError(6,4.548624);
   hnumuCCinFV_stack_13->SetBinError(7,3.692056);
   hnumuCCinFV_stack_13->SetBinError(8,3.094281);
   hnumuCCinFV_stack_13->SetBinError(9,1.797626);
   hnumuCCinFV_stack_13->SetBinError(10,1.450055);
   hnumuCCinFV_stack_13->SetBinError(11,2.775989);
   hnumuCCinFV_stack_13->SetBinError(12,1.170874);
   hnumuCCinFV_stack_13->SetBinError(13,1.114021);
   hnumuCCinFV_stack_13->SetBinError(14,0.9873531);
   hnumuCCinFV_stack_13->SetBinError(15,0.5667568);
   hnumuCCinFV_stack_13->SetBinError(16,0.4777757);
   hnumuCCinFV_stack_13->SetBinError(17,0.4383608);
   hnumuCCinFV_stack_13->SetBinError(18,0.3761177);
   hnumuCCinFV_stack_13->SetBinError(19,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(20,0.2528504);
   hnumuCCinFV_stack_13->SetBinError(21,0.9302252);
   hnumuCCinFV_stack_13->SetEntries(2136);

   ci = 1446;
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
   hs1->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hnueCCinFV_stack_14->SetBinContent(1,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(2,1.88694);
   hnueCCinFV_stack_14->SetBinContent(3,2.609444);
   hnueCCinFV_stack_14->SetBinContent(4,8.524539);
   hnueCCinFV_stack_14->SetBinContent(5,4.302524);
   hnueCCinFV_stack_14->SetBinContent(6,2.550985);
   hnueCCinFV_stack_14->SetBinContent(7,1.232242);
   hnueCCinFV_stack_14->SetBinContent(8,2.496513);
   hnueCCinFV_stack_14->SetBinContent(9,2.787962);
   hnueCCinFV_stack_14->SetBinContent(10,1.672897);
   hnueCCinFV_stack_14->SetBinContent(11,1.045954);
   hnueCCinFV_stack_14->SetBinContent(12,2.232078);
   hnueCCinFV_stack_14->SetBinContent(13,1.525226);
   hnueCCinFV_stack_14->SetBinContent(14,0.6080654);
   hnueCCinFV_stack_14->SetBinContent(15,1.63494);
   hnueCCinFV_stack_14->SetBinContent(16,0.8824278);
   hnueCCinFV_stack_14->SetBinContent(17,1.985886);
   hnueCCinFV_stack_14->SetBinContent(18,1.03394);
   hnueCCinFV_stack_14->SetBinContent(19,0.7319179);
   hnueCCinFV_stack_14->SetBinContent(20,0.0002655144);
   hnueCCinFV_stack_14->SetBinContent(21,13.27568);
   hnueCCinFV_stack_14->SetBinError(1,0.1950249);
   hnueCCinFV_stack_14->SetBinError(2,0.7676693);
   hnueCCinFV_stack_14->SetBinError(3,0.9204441);
   hnueCCinFV_stack_14->SetBinError(4,2.015845);
   hnueCCinFV_stack_14->SetBinError(5,1.186495);
   hnueCCinFV_stack_14->SetBinError(6,0.8259302);
   hnueCCinFV_stack_14->SetBinError(7,0.5052909);
   hnueCCinFV_stack_14->SetBinError(8,0.7836328);
   hnueCCinFV_stack_14->SetBinError(9,1.265814);
   hnueCCinFV_stack_14->SetBinError(10,0.7427465);
   hnueCCinFV_stack_14->SetBinError(11,0.5442761);
   hnueCCinFV_stack_14->SetBinError(12,1.616755);
   hnueCCinFV_stack_14->SetBinError(13,0.7197483);
   hnueCCinFV_stack_14->SetBinError(14,0.3515683);
   hnueCCinFV_stack_14->SetBinError(15,0.6933084);
   hnueCCinFV_stack_14->SetBinError(16,0.562594);
   hnueCCinFV_stack_14->SetBinError(17,1.229528);
   hnueCCinFV_stack_14->SetBinError(18,0.5456028);
   hnueCCinFV_stack_14->SetBinError(19,0.438694);
   hnueCCinFV_stack_14->SetBinError(20,0.0002655145);
   hnueCCinFV_stack_14->SetBinError(21,2.547998);
   hnueCCinFV_stack_14->SetEntries(187);

   ci = 1447;
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
   hs1->Add(hnueCCinFV_stack_14,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);
   hmcerror__2->SetBinContent(1,63.78239);
   hmcerror__2->SetBinContent(2,413.1949);
   hmcerror__2->SetBinContent(3,1229.046);
   hmcerror__2->SetBinContent(4,1563.533);
   hmcerror__2->SetBinContent(5,1213.109);
   hmcerror__2->SetBinContent(6,847.0326);
   hmcerror__2->SetBinContent(7,625.5372);
   hmcerror__2->SetBinContent(8,425.4853);
   hmcerror__2->SetBinContent(9,269.5117);
   hmcerror__2->SetBinContent(10,181.5688);
   hmcerror__2->SetBinContent(11,125.3815);
   hmcerror__2->SetBinContent(12,80.93864);
   hmcerror__2->SetBinContent(13,54.0702);
   hmcerror__2->SetBinContent(14,37.24714);
   hmcerror__2->SetBinContent(15,28.11162);
   hmcerror__2->SetBinContent(16,20.81454);
   hmcerror__2->SetBinContent(17,11.98385);
   hmcerror__2->SetBinContent(18,13.15085);
   hmcerror__2->SetBinContent(19,7.108247);
   hmcerror__2->SetBinContent(20,5.125812);
   hmcerror__2->SetBinContent(21,48.86523);
   hmcerror__2->SetBinError(1,12.74301);
   hmcerror__2->SetBinError(2,70.29032);
   hmcerror__2->SetBinError(3,230.7904);
   hmcerror__2->SetBinError(4,312.6181);
   hmcerror__2->SetBinError(5,261.5719);
   hmcerror__2->SetBinError(6,187.0668);
   hmcerror__2->SetBinError(7,135.9055);
   hmcerror__2->SetBinError(8,95.03509);
   hmcerror__2->SetBinError(9,62.78027);
   hmcerror__2->SetBinError(10,41.74737);
   hmcerror__2->SetBinError(11,31.53722);
   hmcerror__2->SetBinError(12,20.85035);
   hmcerror__2->SetBinError(13,16.15363);
   hmcerror__2->SetBinError(14,10.21555);
   hmcerror__2->SetBinError(15,9.103347);
   hmcerror__2->SetBinError(16,10.42931);
   hmcerror__2->SetBinError(17,7.023485);
   hmcerror__2->SetBinError(18,4.94138);
   hmcerror__2->SetBinError(19,2.813716);
   hmcerror__2->SetBinError(20,2.786696);
   hmcerror__2->SetBinError(21,12.87788);
   hmcerror__2->SetEntries(7171.878);

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
   
   Double_t _fx3001[20] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
   Double_t _fy3001[20] = {
   55,
   387,
   1213,
   1467,
   1132,
   722,
   445,
   315,
   233,
   127,
   106,
   56,
   44,
   38,
   15,
   15,
   14,
   11,
   9,
   6};
   Double_t _felx3001[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3001[20] = {
   7.546,
   19.67232,
   34.82815,
   38.30144,
   33.64521,
   26.87006,
   21.09502,
   17.74824,
   15.26434,
   11.26943,
   10.29563,
   7.6127,
   6.7671,
   6.3013,
   4.0385,
   4.0385,
   3.9102,
   3.4975,
   3.19354,
   2.67925};
   Double_t _fehx3001[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3001[20] = {
   7.3425,
   19.67232,
   34.82815,
   38.30144,
   33.64521,
   26.87006,
   21.09502,
   17.74824,
   15.26434,
   11.26943,
   10.29563,
   7.4094,
   6.5623,
   6.0955,
   3.8197,
   3.8197,
   3.6898,
   3.27,
   2.9582,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1320);
   Graph_Graph3001->SetMinimum(2.988675);
   Graph_Graph3001->SetMaximum(1655.5);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.89#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=18.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6410.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.1","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 747.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 721.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  104.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2751.8","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  532.8","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

   ci = 1442;
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

   ci = 1443;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 1183.1","F");

   ci = 1444;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 301.9","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 551.7","F");

   ci = 1446;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 39.9","F");

   ci = 1447;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_pi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3002[20] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
   Double_t _fy3002[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3002[20] = {
   0.1997889,
   0.1701142,
   0.1877802,
   0.1999434,
   0.2156211,
   0.2208496,
   0.217262,
   0.2233569,
   0.2329408,
   0.2299259,
   0.2515302,
   0.2576069,
   0.2987528,
   0.274264,
   0.3238286,
   0.5010589,
   0.5860791,
   0.3757461,
   0.3958382,
   0.5436594};
   Double_t _fehx3002[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3002[20] = {
   0.1997889,
   0.1701142,
   0.1877802,
   0.1999434,
   0.2156211,
   0.2208496,
   0.217262,
   0.2233569,
   0.2329408,
   0.2299259,
   0.2515302,
   0.2576069,
   0.2987528,
   0.274264,
   0.3238286,
   0.5010589,
   0.5860791,
   0.3757461,
   0.3958382,
   0.5436594};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1320);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Total Energy [MeV]");
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
   
   Double_t _fx3003[20] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
   Double_t _fy3003[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3003[20] = {
   0.1529292,
   0.1651164,
   0.1772283,
   0.1980707,
   0.2147058,
   0.2196212,
   0.2161047,
   0.2127105,
   0.2150203,
   0.2164664,
   0.2163616,
   0.233414,
   0.2246593,
   0.2225917,
   0.2637064,
   0.2372211,
   0.4019452,
   0.2620234,
   0.2836199,
   0.3264295};
   Double_t _fehx3003[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3003[20] = {
   0.1529292,
   0.1651164,
   0.1772283,
   0.1980707,
   0.2147058,
   0.2196212,
   0.2161047,
   0.2127105,
   0.2150203,
   0.2164664,
   0.2163616,
   0.233414,
   0.2246593,
   0.2225917,
   0.2637064,
   0.2372211,
   0.4019452,
   0.2620234,
   0.2836199,
   0.3264295};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1320);
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
   
   Double_t _fx3004[20] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170};
   Double_t _fy3004[20] = {
   0.8623069,
   0.936604,
   0.9869447,
   0.9382596,
   0.9331396,
   0.8523875,
   0.7113885,
   0.7403311,
   0.8645264,
   0.6994595,
   0.84542,
   0.6918821,
   0.8137569,
   1.020213,
   0.5335872,
   0.7206499,
   1.168239,
   0.8364478,
   1.266135,
   1.170546};
   Double_t _felx3004[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3004[20] = {
   0.1183085,
   0.04761026,
   0.02833756,
   0.02449672,
   0.02773469,
   0.03172258,
   0.03372305,
   0.04171293,
   0.05663701,
   0.06206699,
   0.08211445,
   0.0940552,
   0.125154,
   0.1691754,
   0.1436595,
   0.194023,
   0.3262891,
   0.2659524,
   0.4492725,
   0.5226977};
   Double_t _fehx3004[20] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3004[20] = {
   0.115118,
   0.04761026,
   0.02833756,
   0.02449672,
   0.02773469,
   0.03172258,
   0.03372305,
   0.04171293,
   0.05663701,
   0.06206699,
   0.08211445,
   0.09154342,
   0.1213663,
   0.1636502,
   0.1358762,
   0.1835111,
   0.3078977,
   0.2486531,
   0.4161645,
   0.4718433};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1320);
   Graph_Graph3004->SetMinimum(0.2606906);
   Graph_Graph3004->SetMaximum(1.811537);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_pi0_energy_all",20,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
