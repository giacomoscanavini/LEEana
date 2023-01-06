#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Sep 28 15:03:36 2022) by ROOT version 6.26/00
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
   pad1->Range(-276.9231,-19.06323,2030.769,2107.992);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmc__1->SetBinContent(0,0.7760984);
   hmc__1->SetBinContent(1,10.2204);
   hmc__1->SetBinContent(2,94.31113);
   hmc__1->SetBinContent(3,328.2454);
   hmc__1->SetBinContent(4,658.1039);
   hmc__1->SetBinContent(5,898.7798);
   hmc__1->SetBinContent(6,953.1615);
   hmc__1->SetBinContent(7,891.3148);
   hmc__1->SetBinContent(8,774.1949);
   hmc__1->SetBinContent(9,603.889);
   hmc__1->SetBinContent(10,518.7667);
   hmc__1->SetBinContent(11,416.9438);
   hmc__1->SetBinContent(12,320.5572);
   hmc__1->SetBinContent(13,247.8458);
   hmc__1->SetBinContent(14,188.6305);
   hmc__1->SetBinContent(15,140.5331);
   hmc__1->SetBinContent(16,101.5498);
   hmc__1->SetBinContent(17,75.19688);
   hmc__1->SetBinContent(18,65.9351);
   hmc__1->SetBinContent(19,48.54299);
   hmc__1->SetBinContent(20,33.37632);
   hmc__1->SetBinContent(21,156.6288);
   hmc__1->SetBinError(0,0.4405089);
   hmc__1->SetBinError(1,9.548152);
   hmc__1->SetBinError(2,38.48694);
   hmc__1->SetBinError(3,99.25844);
   hmc__1->SetBinError(4,189.5069);
   hmc__1->SetBinError(5,243.6597);
   hmc__1->SetBinError(6,260.4446);
   hmc__1->SetBinError(7,234.5737);
   hmc__1->SetBinError(8,200.013);
   hmc__1->SetBinError(9,176.4214);
   hmc__1->SetBinError(10,174.869);
   hmc__1->SetBinError(11,117.2916);
   hmc__1->SetBinError(12,98.10733);
   hmc__1->SetBinError(13,83.46447);
   hmc__1->SetBinError(14,68.51632);
   hmc__1->SetBinError(15,50.46511);
   hmc__1->SetBinError(16,43.23138);
   hmc__1->SetBinError(17,34.86527);
   hmc__1->SetBinError(18,28.51963);
   hmc__1->SetBinError(19,24.70428);
   hmc__1->SetBinError(20,21.43443);
   hmc__1->SetBinError(21,55.78778);
   hmc__1->SetMinimum(-19.06323);
   hmc__1->SetMaximum(2001.639);
   hmc__1->SetEntries(7468.322);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,1800);
   hs1_stack_1->SetMinimum(-9.474605e-09);
   hs1_stack_1->SetMaximum(1000.82);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hbadmatch_stack_1->SetBinContent(1,0.1950248);
   hbadmatch_stack_1->SetBinContent(2,1.022036);
   hbadmatch_stack_1->SetBinContent(3,1.291531);
   hbadmatch_stack_1->SetBinContent(4,1.209297);
   hbadmatch_stack_1->SetBinContent(5,3.040818);
   hbadmatch_stack_1->SetBinContent(6,2.819237);
   hbadmatch_stack_1->SetBinContent(7,3.284026);
   hbadmatch_stack_1->SetBinContent(8,2.940828);
   hbadmatch_stack_1->SetBinContent(9,1.607298);
   hbadmatch_stack_1->SetBinContent(10,3.293972);
   hbadmatch_stack_1->SetBinContent(11,3.363532);
   hbadmatch_stack_1->SetBinContent(12,1.299488);
   hbadmatch_stack_1->SetBinContent(13,2.805199);
   hbadmatch_stack_1->SetBinContent(14,2.063401);
   hbadmatch_stack_1->SetBinContent(15,1.729944);
   hbadmatch_stack_1->SetBinContent(16,1.373748);
   hbadmatch_stack_1->SetBinContent(17,1.562316);
   hbadmatch_stack_1->SetBinContent(18,0.3917402);
   hbadmatch_stack_1->SetBinContent(21,0.7336084);
   hbadmatch_stack_1->SetBinError(1,0.1950249);
   hbadmatch_stack_1->SetBinError(2,0.5365982);
   hbadmatch_stack_1->SetBinError(3,0.6313137);
   hbadmatch_stack_1->SetBinError(4,0.5773565);
   hbadmatch_stack_1->SetBinError(5,0.9163561);
   hbadmatch_stack_1->SetBinError(6,0.8411675);
   hbadmatch_stack_1->SetBinError(7,0.8685542);
   hbadmatch_stack_1->SetBinError(8,0.8049795);
   hbadmatch_stack_1->SetBinError(9,0.6796534);
   hbadmatch_stack_1->SetBinError(10,0.9195507);
   hbadmatch_stack_1->SetBinError(11,0.9566322);
   hbadmatch_stack_1->SetBinError(12,0.5998141);
   hbadmatch_stack_1->SetBinError(13,1.061936);
   hbadmatch_stack_1->SetBinError(14,0.7649792);
   hbadmatch_stack_1->SetBinError(15,0.690812);
   hbadmatch_stack_1->SetBinError(16,0.7189069);
   hbadmatch_stack_1->SetBinError(17,0.6053241);
   hbadmatch_stack_1->SetBinError(18,0.2770047);
   hbadmatch_stack_1->SetBinError(21,0.4394482);
   hbadmatch_stack_1->SetEntries(150);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hext_stack_2->SetBinContent(1,0.6416141);
   hext_stack_2->SetBinContent(2,3.643392);
   hext_stack_2->SetBinContent(3,9.347307);
   hext_stack_2->SetBinContent(4,7.504666);
   hext_stack_2->SetBinContent(5,13.63672);
   hext_stack_2->SetBinContent(6,13.79672);
   hext_stack_2->SetBinContent(7,15.51527);
   hext_stack_2->SetBinContent(8,15.46065);
   hext_stack_2->SetBinContent(9,6.724599);
   hext_stack_2->SetBinContent(10,6.73178);
   hext_stack_2->SetBinContent(11,9.906719);
   hext_stack_2->SetBinContent(12,4.785396);
   hext_stack_2->SetBinContent(13,8.195351);
   hext_stack_2->SetBinContent(14,6.318);
   hext_stack_2->SetBinContent(15,1.614806);
   hext_stack_2->SetBinContent(16,1.379791);
   hext_stack_2->SetBinContent(17,4.352847);
   hext_stack_2->SetBinContent(18,2.192989);
   hext_stack_2->SetBinContent(19,0.6416141);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,10.93616);
   hext_stack_2->SetBinError(1,0.6416141);
   hext_stack_2->SetBinError(2,1.191159);
   hext_stack_2->SetBinError(3,2.235556);
   hext_stack_2->SetBinError(4,1.955197);
   hext_stack_2->SetBinError(5,2.638818);
   hext_stack_2->SetBinError(6,2.635985);
   hext_stack_2->SetBinError(7,2.670631);
   hext_stack_2->SetBinError(8,2.659915);
   hext_stack_2->SetBinError(9,1.680019);
   hext_stack_2->SetBinError(10,1.619032);
   hext_stack_2->SetBinError(11,2.312853);
   hext_stack_2->SetBinError(12,1.410625);
   hext_stack_2->SetBinError(13,2.228056);
   hext_stack_2->SetBinError(14,1.630074);
   hext_stack_2->SetBinError(15,0.8528597);
   hext_stack_2->SetBinError(16,0.6935586);
   hext_stack_2->SetBinError(17,1.514272);
   hext_stack_2->SetBinError(18,0.9009267);
   hext_stack_2->SetBinError(19,0.6416141);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,2.488687);
   hext_stack_2->SetEntries(323);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hdirt_stack_3->SetBinContent(2,0.1661453);
   hdirt_stack_3->SetBinContent(4,1.009576);
   hdirt_stack_3->SetBinContent(5,1.252237);
   hdirt_stack_3->SetBinContent(6,0.3569671);
   hdirt_stack_3->SetBinContent(7,0.4045523);
   hdirt_stack_3->SetBinContent(8,0.853712);
   hdirt_stack_3->SetBinContent(9,0.2761429);
   hdirt_stack_3->SetBinContent(10,0.3204826);
   hdirt_stack_3->SetBinContent(11,1.167841e-06);
   hdirt_stack_3->SetBinContent(12,0.6047785);
   hdirt_stack_3->SetBinContent(13,0.6394193);
   hdirt_stack_3->SetBinContent(19,0.2441834);
   hdirt_stack_3->SetBinError(2,0.1661453);
   hdirt_stack_3->SetBinError(4,0.4601902);
   hdirt_stack_3->SetBinError(5,0.5862043);
   hdirt_stack_3->SetBinError(6,0.258803);
   hdirt_stack_3->SetBinError(7,0.3001263);
   hdirt_stack_3->SetBinError(8,0.4538079);
   hdirt_stack_3->SetBinError(9,0.1952625);
   hdirt_stack_3->SetBinError(10,0.2267565);
   hdirt_stack_3->SetBinError(11,1.167841e-06);
   hdirt_stack_3->SetBinError(12,0.4306292);
   hdirt_stack_3->SetBinError(13,0.4606419);
   hdirt_stack_3->SetBinError(19,0.2441834);
   hdirt_stack_3->SetEntries(30);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   houtFV_stack_4->SetBinContent(2,1.401308);
   houtFV_stack_4->SetBinContent(3,4.237129);
   houtFV_stack_4->SetBinContent(4,9.088995);
   houtFV_stack_4->SetBinContent(5,6.607748);
   houtFV_stack_4->SetBinContent(6,7.079654);
   houtFV_stack_4->SetBinContent(7,9.332148);
   houtFV_stack_4->SetBinContent(8,6.178529);
   houtFV_stack_4->SetBinContent(9,4.718356);
   houtFV_stack_4->SetBinContent(10,3.991676);
   houtFV_stack_4->SetBinContent(11,2.044195);
   houtFV_stack_4->SetBinContent(12,3.831825);
   houtFV_stack_4->SetBinContent(13,1.469592);
   houtFV_stack_4->SetBinContent(14,0.8575791);
   houtFV_stack_4->SetBinContent(15,1.145107);
   houtFV_stack_4->SetBinContent(16,0.5884556);
   houtFV_stack_4->SetBinContent(18,0.4519673);
   houtFV_stack_4->SetBinContent(19,0.3917402);
   houtFV_stack_4->SetBinContent(21,0.7319179);
   houtFV_stack_4->SetBinError(2,0.6577657);
   houtFV_stack_4->SetBinError(3,1.026018);
   houtFV_stack_4->SetBinError(4,2.183522);
   houtFV_stack_4->SetBinError(5,1.262553);
   houtFV_stack_4->SetBinError(6,1.288523);
   houtFV_stack_4->SetBinError(7,1.557066);
   houtFV_stack_4->SetBinError(8,1.318468);
   houtFV_stack_4->SetBinError(9,1.159167);
   houtFV_stack_4->SetBinError(10,1.192135);
   houtFV_stack_4->SetBinError(11,0.7034845);
   houtFV_stack_4->SetBinError(12,1.239523);
   houtFV_stack_4->SetBinError(13,0.5849855);
   houtFV_stack_4->SetBinError(14,0.4331411);
   houtFV_stack_4->SetBinError(15,0.5331386);
   houtFV_stack_4->SetBinError(16,0.3397478);
   houtFV_stack_4->SetBinError(18,0.3222584);
   houtFV_stack_4->SetBinError(19,0.2770047);
   houtFV_stack_4->SetBinError(21,0.438694);
   houtFV_stack_4->SetEntries(267);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05319012);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04244025);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.03086938);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.04659828);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.05967807);
   hNCpi0inFVcoh_stack_5->SetEntries(9);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01822845);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2504195);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1970327);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01822846);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1099207);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1771563);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1714184);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01754354);
   hNCpi0inFVqe_stack_6->SetEntries(9);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.8760607);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.779682);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.207319);
   hNCpi0inFVres_stack_7->SetBinContent(5,8.676137);
   hNCpi0inFVres_stack_7->SetBinContent(6,11.13075);
   hNCpi0inFVres_stack_7->SetBinContent(7,10.13443);
   hNCpi0inFVres_stack_7->SetBinContent(8,11.75657);
   hNCpi0inFVres_stack_7->SetBinContent(9,8.176381);
   hNCpi0inFVres_stack_7->SetBinContent(10,11.4322);
   hNCpi0inFVres_stack_7->SetBinContent(11,8.006973);
   hNCpi0inFVres_stack_7->SetBinContent(12,5.081133);
   hNCpi0inFVres_stack_7->SetBinContent(13,4.274284);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.563354);
   hNCpi0inFVres_stack_7->SetBinContent(15,3.251149);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.947091);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.8660885);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.4822133);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.4741507);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1780678);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.3651882);
   hNCpi0inFVres_stack_7->SetBinError(0,0.01732447);
   hNCpi0inFVres_stack_7->SetBinError(2,0.184703);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5924746);
   hNCpi0inFVres_stack_7->SetBinError(4,0.737631);
   hNCpi0inFVres_stack_7->SetBinError(5,0.8482487);
   hNCpi0inFVres_stack_7->SetBinError(6,1.060265);
   hNCpi0inFVres_stack_7->SetBinError(7,1.006564);
   hNCpi0inFVres_stack_7->SetBinError(8,1.070946);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9062819);
   hNCpi0inFVres_stack_7->SetBinError(10,1.484257);
   hNCpi0inFVres_stack_7->SetBinError(11,1.201895);
   hNCpi0inFVres_stack_7->SetBinError(12,0.9905496);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7559175);
   hNCpi0inFVres_stack_7->SetBinError(14,1.042539);
   hNCpi0inFVres_stack_7->SetBinError(15,0.9041661);
   hNCpi0inFVres_stack_7->SetBinError(16,0.8205625);
   hNCpi0inFVres_stack_7->SetBinError(17,0.29364);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1536101);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2380131);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1142029);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1294516);
   hNCpi0inFVres_stack_7->SetEntries(2070);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.8457384);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.936972);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.19885);
   hNCpi0inFVdis_stack_8->SetBinContent(5,7.039772);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.884736);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.061365);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.762137);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.562291);
   hNCpi0inFVdis_stack_8->SetBinContent(10,7.536136);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.697115);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.830669);
   hNCpi0inFVdis_stack_8->SetBinContent(13,5.366694);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.392169);
   hNCpi0inFVdis_stack_8->SetBinContent(15,4.017657);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.63743);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.098187);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.488134);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.489034);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.121422);
   hNCpi0inFVdis_stack_8->SetBinContent(21,2.846677);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2580265);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8205739);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7700919);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.889607);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7213881);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8169939);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9133169);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.217314);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9796439);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.065178);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.019818);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9901118);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.044221);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9057482);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.593028);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4643911);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.6503869);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6849639);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.396094);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.508497);
   hNCpi0inFVdis_stack_8->SetEntries(1636);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(1,1.715495);
   hCCpi0inFV_stack_10->SetBinContent(2,44.45005);
   hCCpi0inFV_stack_10->SetBinContent(3,222.399);
   hCCpi0inFV_stack_10->SetBinContent(4,505.5892);
   hCCpi0inFV_stack_10->SetBinContent(5,716.8597);
   hCCpi0inFV_stack_10->SetBinContent(6,752.8392);
   hCCpi0inFV_stack_10->SetBinContent(7,697.3512);
   hCCpi0inFV_stack_10->SetBinContent(8,597.576);
   hCCpi0inFV_stack_10->SetBinContent(9,475.1279);
   hCCpi0inFV_stack_10->SetBinContent(10,393.9601);
   hCCpi0inFV_stack_10->SetBinContent(11,322.4144);
   hCCpi0inFV_stack_10->SetBinContent(12,241.6217);
   hCCpi0inFV_stack_10->SetBinContent(13,182.2132);
   hCCpi0inFV_stack_10->SetBinContent(14,133.0912);
   hCCpi0inFV_stack_10->SetBinContent(15,105.291);
   hCCpi0inFV_stack_10->SetBinContent(16,73.41292);
   hCCpi0inFV_stack_10->SetBinContent(17,51.71614);
   hCCpi0inFV_stack_10->SetBinContent(18,46.2849);
   hCCpi0inFV_stack_10->SetBinContent(19,34.24217);
   hCCpi0inFV_stack_10->SetBinContent(20,25.06929);
   hCCpi0inFV_stack_10->SetBinContent(21,108.9996);
   hCCpi0inFV_stack_10->SetBinError(1,0.6212384);
   hCCpi0inFV_stack_10->SetBinError(2,3.353655);
   hCCpi0inFV_stack_10->SetBinError(3,7.469983);
   hCCpi0inFV_stack_10->SetBinError(4,11.35866);
   hCCpi0inFV_stack_10->SetBinError(5,13.46413);
   hCCpi0inFV_stack_10->SetBinError(6,13.76333);
   hCCpi0inFV_stack_10->SetBinError(7,13.28127);
   hCCpi0inFV_stack_10->SetBinError(8,12.28023);
   hCCpi0inFV_stack_10->SetBinError(9,11.01032);
   hCCpi0inFV_stack_10->SetBinError(10,9.923092);
   hCCpi0inFV_stack_10->SetBinError(11,9.039767);
   hCCpi0inFV_stack_10->SetBinError(12,7.806163);
   hCCpi0inFV_stack_10->SetBinError(13,6.833602);
   hCCpi0inFV_stack_10->SetBinError(14,5.851882);
   hCCpi0inFV_stack_10->SetBinError(15,5.175538);
   hCCpi0inFV_stack_10->SetBinError(16,4.315047);
   hCCpi0inFV_stack_10->SetBinError(17,3.612661);
   hCCpi0inFV_stack_10->SetBinError(18,3.435482);
   hCCpi0inFV_stack_10->SetBinError(19,2.902857);
   hCCpi0inFV_stack_10->SetBinError(20,2.54957);
   hCCpi0inFV_stack_10->SetBinError(21,5.270887);
   hCCpi0inFV_stack_10->SetEntries(24435);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.3934307);
   hNCinFV_stack_11->SetBinContent(3,2.252388);
   hNCinFV_stack_11->SetBinContent(4,4.53666);
   hNCinFV_stack_11->SetBinContent(5,2.545466);
   hNCinFV_stack_11->SetBinContent(6,5.910286);
   hNCinFV_stack_11->SetBinContent(7,6.103621);
   hNCinFV_stack_11->SetBinContent(8,7.917777);
   hNCinFV_stack_11->SetBinContent(9,3.627705);
   hNCinFV_stack_11->SetBinContent(10,4.256497);
   hNCinFV_stack_11->SetBinContent(11,1.662242);
   hNCinFV_stack_11->SetBinContent(12,3.321102);
   hNCinFV_stack_11->SetBinContent(13,1.807394);
   hNCinFV_stack_11->SetBinContent(14,2.197444);
   hNCinFV_stack_11->SetBinContent(15,1.467217);
   hNCinFV_stack_11->SetBinContent(16,1.217248);
   hNCinFV_stack_11->SetBinContent(17,0.3934307);
   hNCinFV_stack_11->SetBinContent(18,0.8753801);
   hNCinFV_stack_11->SetBinContent(19,0.1950248);
   hNCinFV_stack_11->SetBinContent(20,0.7834804);
   hNCinFV_stack_11->SetBinContent(21,1.270501);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.2781975);
   hNCinFV_stack_11->SetBinError(3,0.7350883);
   hNCinFV_stack_11->SetBinError(4,1.110135);
   hNCinFV_stack_11->SetBinError(5,0.7059918);
   hNCinFV_stack_11->SetBinError(6,1.225543);
   hNCinFV_stack_11->SetBinError(7,1.240696);
   hNCinFV_stack_11->SetBinError(8,1.42966);
   hNCinFV_stack_11->SetBinError(9,0.9003173);
   hNCinFV_stack_11->SetBinError(10,1.039712);
   hNCinFV_stack_11->SetBinError(11,0.6513556);
   hNCinFV_stack_11->SetBinError(12,0.9204367);
   hNCinFV_stack_11->SetBinError(13,0.7084844);
   hNCinFV_stack_11->SetBinError(14,0.760276);
   hNCinFV_stack_11->SetBinError(15,0.6214735);
   hNCinFV_stack_11->SetBinError(16,0.6211758);
   hNCinFV_stack_11->SetBinError(17,0.2781975);
   hNCinFV_stack_11->SetBinError(18,0.5191111);
   hNCinFV_stack_11->SetBinError(19,0.1950249);
   hNCinFV_stack_11->SetBinError(20,0.3917439);
   hNCinFV_stack_11->SetBinError(21,0.5895188);
   hNCinFV_stack_11->SetEntries(225);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(0,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(1,7.668269);
   hnumuCCinFV_stack_12->SetBinContent(2,41.49474);
   hnumuCCinFV_stack_12->SetBinContent(3,79.66846);
   hnumuCCinFV_stack_12->SetBinContent(4,117.4192);
   hnumuCCinFV_stack_12->SetBinContent(5,138.6592);
   hnumuCCinFV_stack_12->SetBinContent(6,152.3437);
   hnumuCCinFV_stack_12->SetBinContent(7,141.1168);
   hnumuCCinFV_stack_12->SetBinContent(8,121.7314);
   hnumuCCinFV_stack_12->SetBinContent(9,94.77425);
   hnumuCCinFV_stack_12->SetBinContent(10,85.49259);
   hnumuCCinFV_stack_12->SetBinContent(11,60.71693);
   hnumuCCinFV_stack_12->SetBinContent(12,52.17934);
   hnumuCCinFV_stack_12->SetBinContent(13,39.12555);
   hnumuCCinFV_stack_12->SetBinContent(14,32.93005);
   hnumuCCinFV_stack_12->SetBinContent(15,21.23103);
   hnumuCCinFV_stack_12->SetBinContent(16,18.26123);
   hnumuCCinFV_stack_12->SetBinContent(17,14.20787);
   hnumuCCinFV_stack_12->SetBinContent(18,12.1571);
   hnumuCCinFV_stack_12->SetBinContent(19,10.32818);
   hnumuCCinFV_stack_12->SetBinContent(20,4.304679);
   hnumuCCinFV_stack_12->SetBinContent(21,28.01085);
   hnumuCCinFV_stack_12->SetBinError(0,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(1,2.210293);
   hnumuCCinFV_stack_12->SetBinError(2,3.550108);
   hnumuCCinFV_stack_12->SetBinError(3,5.036889);
   hnumuCCinFV_stack_12->SetBinError(4,6.855387);
   hnumuCCinFV_stack_12->SetBinError(5,6.587716);
   hnumuCCinFV_stack_12->SetBinError(6,7.102001);
   hnumuCCinFV_stack_12->SetBinError(7,6.306866);
   hnumuCCinFV_stack_12->SetBinError(8,7.001749);
   hnumuCCinFV_stack_12->SetBinError(9,4.91861);
   hnumuCCinFV_stack_12->SetBinError(10,5.246196);
   hnumuCCinFV_stack_12->SetBinError(11,4.032215);
   hnumuCCinFV_stack_12->SetBinError(12,3.645226);
   hnumuCCinFV_stack_12->SetBinError(13,3.285303);
   hnumuCCinFV_stack_12->SetBinError(14,3.167841);
   hnumuCCinFV_stack_12->SetBinError(15,2.344266);
   hnumuCCinFV_stack_12->SetBinError(16,2.265638);
   hnumuCCinFV_stack_12->SetBinError(17,1.899598);
   hnumuCCinFV_stack_12->SetBinError(18,1.744827);
   hnumuCCinFV_stack_12->SetBinError(19,1.609849);
   hnumuCCinFV_stack_12->SetBinError(20,1.020141);
   hnumuCCinFV_stack_12->SetBinError(21,2.677509);
   hnumuCCinFV_stack_12->SetEntries(5250);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(7,0.7834804);
   hnueCCinFV_stack_13->SetBinContent(8,1.902382);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,1.687118);
   hnueCCinFV_stack_13->SetBinContent(11,1.072095);
   hnueCCinFV_stack_13->SetBinContent(12,1.001686);
   hnueCCinFV_stack_13->SetBinContent(13,1.949166);
   hnueCCinFV_stack_13->SetBinContent(14,1.217248);
   hnueCCinFV_stack_13->SetBinContent(15,0.785171);
   hnueCCinFV_stack_13->SetBinContent(16,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(18,1.610679);
   hnueCCinFV_stack_13->SetBinContent(19,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,0.7817899);
   hnueCCinFV_stack_13->SetBinContent(21,2.734337);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.3401776);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.48078);
   hnueCCinFV_stack_13->SetBinError(7,0.3917439);
   hnueCCinFV_stack_13->SetBinError(8,0.6941072);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.7234406);
   hnueCCinFV_stack_13->SetBinError(11,0.5551335);
   hnueCCinFV_stack_13->SetBinError(12,0.5147626);
   hnueCCinFV_stack_13->SetBinError(13,0.7604681);
   hnueCCinFV_stack_13->SetBinError(14,0.6211758);
   hnueCCinFV_stack_13->SetBinError(15,0.3925882);
   hnueCCinFV_stack_13->SetBinError(16,0.438694);
   hnueCCinFV_stack_13->SetBinError(18,0.6806271);
   hnueCCinFV_stack_13->SetBinError(19,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,0.3908977);
   hnueCCinFV_stack_13->SetBinError(21,0.8558255);
   hnueCCinFV_stack_13->SetEntries(75);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmcerror__2->SetBinContent(0,0.7760984);
   hmcerror__2->SetBinContent(1,10.2204);
   hmcerror__2->SetBinContent(2,94.31113);
   hmcerror__2->SetBinContent(3,328.2454);
   hmcerror__2->SetBinContent(4,658.1039);
   hmcerror__2->SetBinContent(5,898.7798);
   hmcerror__2->SetBinContent(6,953.1615);
   hmcerror__2->SetBinContent(7,891.3148);
   hmcerror__2->SetBinContent(8,774.1949);
   hmcerror__2->SetBinContent(9,603.889);
   hmcerror__2->SetBinContent(10,518.7667);
   hmcerror__2->SetBinContent(11,416.9438);
   hmcerror__2->SetBinContent(12,320.5572);
   hmcerror__2->SetBinContent(13,247.8458);
   hmcerror__2->SetBinContent(14,188.6305);
   hmcerror__2->SetBinContent(15,140.5331);
   hmcerror__2->SetBinContent(16,101.5498);
   hmcerror__2->SetBinContent(17,75.19688);
   hmcerror__2->SetBinContent(18,65.9351);
   hmcerror__2->SetBinContent(19,48.54299);
   hmcerror__2->SetBinContent(20,33.37632);
   hmcerror__2->SetBinContent(21,156.6288);
   hmcerror__2->SetBinError(0,0.4405089);
   hmcerror__2->SetBinError(1,9.548152);
   hmcerror__2->SetBinError(2,38.48694);
   hmcerror__2->SetBinError(3,99.25844);
   hmcerror__2->SetBinError(4,189.5069);
   hmcerror__2->SetBinError(5,243.6597);
   hmcerror__2->SetBinError(6,260.4446);
   hmcerror__2->SetBinError(7,234.5737);
   hmcerror__2->SetBinError(8,200.013);
   hmcerror__2->SetBinError(9,176.4214);
   hmcerror__2->SetBinError(10,174.869);
   hmcerror__2->SetBinError(11,117.2916);
   hmcerror__2->SetBinError(12,98.10733);
   hmcerror__2->SetBinError(13,83.46447);
   hmcerror__2->SetBinError(14,68.51632);
   hmcerror__2->SetBinError(15,50.46511);
   hmcerror__2->SetBinError(16,43.23138);
   hmcerror__2->SetBinError(17,34.86527);
   hmcerror__2->SetBinError(18,28.51963);
   hmcerror__2->SetBinError(19,24.70428);
   hmcerror__2->SetBinError(20,21.43443);
   hmcerror__2->SetBinError(21,55.78778);
   hmcerror__2->SetEntries(7468.322);

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
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3001[20] = {
   9,
   157,
   513,
   728,
   905,
   857,
   790,
   651,
   533,
   442,
   309,
   259,
   186,
   145,
   110,
   82,
   64,
   39,
   30,
   23};
   Double_t _felx3001[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3001[20] = {
   3.19354,
   12.52996,
   22.6495,
   26.98148,
   30.08322,
   29.27456,
   28.10694,
   25.5147,
   23.08679,
   21.0238,
   17.5784,
   16.09348,
   13.63818,
   12.04159,
   10.48809,
   9.1791,
   8.1273,
   6.3813,
   5.6197,
   4.9457};
   Double_t _fehx3001[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3001[20] = {
   2.9582,
   12.52996,
   22.6495,
   26.98148,
   30.08322,
   29.27456,
   28.10694,
   25.5147,
   23.08679,
   21.0238,
   17.5784,
   16.09348,
   13.63818,
   12.04159,
   10.48809,
   8.9774,
   7.9246,
   6.1757,
   5.4117,
   4.7346};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1980);
   Graph_Graph3001->SetMinimum(5.225814);
   Graph_Graph3001->SetMaximum(1028.011);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.3/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6832.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 35.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 133.5","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 63.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  102.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  92.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5623.2","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 51.5","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 1245.8","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 15.9","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("CCpi0_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
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
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3002[20] = {
   0.9342247,
   0.4080849,
   0.302391,
   0.2879589,
   0.2711005,
   0.2732429,
   0.2631772,
   0.2583497,
   0.2921421,
   0.3370859,
   0.2813127,
   0.3060525,
   0.3367596,
   0.3632304,
   0.3590978,
   0.4257159,
   0.4636531,
   0.4325409,
   0.5089154,
   0.6422047};
   Double_t _fehx3002[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3002[20] = {
   0.9342247,
   0.4080849,
   0.302391,
   0.2879589,
   0.2711005,
   0.2732429,
   0.2631772,
   0.2583497,
   0.2921421,
   0.3370859,
   0.2813127,
   0.3060525,
   0.3367596,
   0.3632304,
   0.3590978,
   0.4257159,
   0.4636531,
   0.4325409,
   0.5089154,
   0.6422047};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1980);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Transferred Energy [MeV]");
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
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
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
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3003[20] = {
   0.340064,
   0.196224,
   0.2195471,
   0.2450787,
   0.2438825,
   0.2508006,
   0.2458702,
   0.2362524,
   0.243451,
   0.2341359,
   0.2396165,
   0.2359894,
   0.2326786,
   0.2274549,
   0.2385026,
   0.2389428,
   0.2180335,
   0.245886,
   0.2139312,
   0.2449258};
   Double_t _fehx3003[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3003[20] = {
   0.340064,
   0.196224,
   0.2195471,
   0.2450787,
   0.2438825,
   0.2508006,
   0.2458702,
   0.2362524,
   0.243451,
   0.2341359,
   0.2396165,
   0.2359894,
   0.2326786,
   0.2274549,
   0.2385026,
   0.2389428,
   0.2180335,
   0.245886,
   0.2139312,
   0.2449258};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1980);
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
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3004[20] = {
   0.8805915,
   1.664703,
   1.562855,
   1.106208,
   1.006921,
   0.8991131,
   0.8863311,
   0.8408735,
   0.8826125,
   0.8520207,
   0.7411071,
   0.8079682,
   0.7504665,
   0.7686987,
   0.782734,
   0.8074854,
   0.8510991,
   0.5914907,
   0.6180089,
   0.6891112};
   Double_t _felx3004[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3004[20] = {
   0.3124671,
   0.1328577,
   0.06900174,
   0.0409988,
   0.03347118,
   0.03071312,
   0.03153424,
   0.03295643,
   0.03823019,
   0.04052649,
   0.04216011,
   0.0502047,
   0.05502688,
   0.06383696,
   0.07463076,
   0.09039011,
   0.1080803,
   0.09678153,
   0.1157675,
   0.1481799};
   Double_t _fehx3004[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3004[20] = {
   0.2894406,
   0.1328577,
   0.06900174,
   0.0409988,
   0.03347118,
   0.03071312,
   0.03153424,
   0.03295643,
   0.03823019,
   0.04052649,
   0.04216011,
   0.0502047,
   0.05502688,
   0.06383696,
   0.07463076,
   0.08840389,
   0.1053847,
   0.09366331,
   0.1114826,
   0.141855};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1980);
   Graph_Graph3004->SetMinimum(0.364424);
   Graph_Graph3004->SetMaximum(1.927846);
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
   
   TH1F *hist__3 = new TH1F("hist__3","CCpi0_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
