#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 15:23:25 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",34,57,1200,900);
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
   pad1->Range(-61.53846,-18.32,451.2821,2025.806);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__10->SetBinContent(1,668.5111);
   hmc__10->SetBinContent(2,873.9332);
   hmc__10->SetBinContent(3,734.1932);
   hmc__10->SetBinContent(4,559.9405);
   hmc__10->SetBinContent(5,392.5702);
   hmc__10->SetBinContent(6,259.5082);
   hmc__10->SetBinContent(7,155.7844);
   hmc__10->SetBinContent(8,103.9387);
   hmc__10->SetBinContent(9,57.6965);
   hmc__10->SetBinContent(10,35.85646);
   hmc__10->SetBinContent(11,24.10294);
   hmc__10->SetBinContent(12,16.78629);
   hmc__10->SetBinContent(13,9.851986);
   hmc__10->SetBinContent(14,4.867242);
   hmc__10->SetBinContent(15,4.33696);
   hmc__10->SetBinContent(16,2.442863);
   hmc__10->SetBinContent(17,5.784135);
   hmc__10->SetBinError(1,152.1509);
   hmc__10->SetBinError(2,176.7213);
   hmc__10->SetBinError(3,155.1878);
   hmc__10->SetBinError(4,134.0976);
   hmc__10->SetBinError(5,101.8718);
   hmc__10->SetBinError(6,66.85665);
   hmc__10->SetBinError(7,45.91351);
   hmc__10->SetBinError(8,35.73842);
   hmc__10->SetBinError(9,21.81702);
   hmc__10->SetBinError(10,16.1792);
   hmc__10->SetBinError(11,11.97339);
   hmc__10->SetBinError(12,9.457929);
   hmc__10->SetBinError(13,7.140099);
   hmc__10->SetBinError(14,5.481583);
   hmc__10->SetBinError(15,4.741876);
   hmc__10->SetBinError(16,4.852501);
   hmc__10->SetBinError(17,7.328845);
   hmc__10->SetMinimum(-18.32);
   hmc__10->SetMaximum(1923.6);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",16,0,400);
   hs4_stack_4->SetMinimum(-1.150846e-08);
   hs4_stack_4->SetMaximum(917.6299);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hbadmatch_stack_1->SetBinContent(1,15.84256);
   hbadmatch_stack_1->SetBinContent(2,25.42773);
   hbadmatch_stack_1->SetBinContent(3,20.80359);
   hbadmatch_stack_1->SetBinContent(4,17.32787);
   hbadmatch_stack_1->SetBinContent(5,8.560396);
   hbadmatch_stack_1->SetBinContent(6,4.495409);
   hbadmatch_stack_1->SetBinContent(7,2.053982);
   hbadmatch_stack_1->SetBinContent(8,1.167822);
   hbadmatch_stack_1->SetBinContent(9,1.217248);
   hbadmatch_stack_1->SetBinContent(10,0.9269427);
   hbadmatch_stack_1->SetBinContent(11,0.592916);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinContent(17,0.1967154);
   hbadmatch_stack_1->SetBinError(1,2.271782);
   hbadmatch_stack_1->SetBinError(2,3.119221);
   hbadmatch_stack_1->SetBinError(3,2.476228);
   hbadmatch_stack_1->SetBinError(4,2.162855);
   hbadmatch_stack_1->SetBinError(5,1.510753);
   hbadmatch_stack_1->SetBinError(6,1.905004);
   hbadmatch_stack_1->SetBinError(7,0.7078105);
   hbadmatch_stack_1->SetBinError(8,0.5369923);
   hbadmatch_stack_1->SetBinError(9,0.6211758);
   hbadmatch_stack_1->SetBinError(10,0.4800908);
   hbadmatch_stack_1->SetBinError(11,0.4423482);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
   hbadmatch_stack_1->SetBinError(17,0.1967154);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,114.761);
   hext_stack_2->SetBinContent(2,155.9796);
   hext_stack_2->SetBinContent(3,90.96983);
   hext_stack_2->SetBinContent(4,48.08009);
   hext_stack_2->SetBinContent(5,34.54152);
   hext_stack_2->SetBinContent(6,13.91205);
   hext_stack_2->SetBinContent(7,8.09721);
   hext_stack_2->SetBinContent(8,6.806801);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(10,1.219797);
   hext_stack_2->SetBinContent(11,1.379791);
   hext_stack_2->SetBinContent(12,0.6416141);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinError(1,7.239591);
   hext_stack_2->SetBinError(2,8.485726);
   hext_stack_2->SetBinError(3,6.381734);
   hext_stack_2->SetBinError(4,4.604903);
   hext_stack_2->SetBinError(5,3.962488);
   hext_stack_2->SetBinError(6,2.517702);
   hext_stack_2->SetBinError(7,1.872082);
   hext_stack_2->SetBinError(8,1.697809);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(10,0.7042499);
   hext_stack_2->SetBinError(11,0.6935586);
   hext_stack_2->SetBinError(12,0.6416141);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(16,0.3243973);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hdirt_stack_3->SetBinContent(1,10.65613);
   hdirt_stack_3->SetBinContent(2,19.28806);
   hdirt_stack_3->SetBinContent(3,13.99908);
   hdirt_stack_3->SetBinContent(4,6.135291);
   hdirt_stack_3->SetBinContent(5,4.666955);
   hdirt_stack_3->SetBinContent(6,1.056663);
   hdirt_stack_3->SetBinContent(7,0.8366207);
   hdirt_stack_3->SetBinContent(8,0.4142698);
   hdirt_stack_3->SetBinError(1,1.659184);
   hdirt_stack_3->SetBinError(2,2.380195);
   hdirt_stack_3->SetBinError(3,2.005288);
   hdirt_stack_3->SetBinError(4,1.346257);
   hdirt_stack_3->SetBinError(5,1.470659);
   hdirt_stack_3->SetBinError(6,0.5332475);
   hdirt_stack_3->SetBinError(7,0.5048718);
   hdirt_stack_3->SetBinError(8,0.4142698);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   houtFV_stack_4->SetBinContent(1,95.69043);
   houtFV_stack_4->SetBinContent(2,139.4723);
   houtFV_stack_4->SetBinContent(3,107.8695);
   houtFV_stack_4->SetBinContent(4,71.49316);
   houtFV_stack_4->SetBinContent(5,35.73714);
   houtFV_stack_4->SetBinContent(6,22.63989);
   houtFV_stack_4->SetBinContent(7,14.69573);
   houtFV_stack_4->SetBinContent(8,7.651175);
   houtFV_stack_4->SetBinContent(9,4.058092);
   houtFV_stack_4->SetBinContent(10,3.129458);
   houtFV_stack_4->SetBinContent(11,1.754141);
   houtFV_stack_4->SetBinContent(12,0.5352025);
   houtFV_stack_4->SetBinContent(13,0.5352025);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(17,0.4057469);
   houtFV_stack_4->SetBinError(1,4.86378);
   houtFV_stack_4->SetBinError(2,5.989959);
   houtFV_stack_4->SetBinError(3,5.380409);
   houtFV_stack_4->SetBinError(4,4.187404);
   houtFV_stack_4->SetBinError(5,3.005109);
   houtFV_stack_4->SetBinError(6,2.413335);
   houtFV_stack_4->SetBinError(7,1.968166);
   houtFV_stack_4->SetBinError(8,1.403849);
   houtFV_stack_4->SetBinError(9,1.020609);
   houtFV_stack_4->SetBinError(10,0.9002741);
   houtFV_stack_4->SetBinError(11,0.7350354);
   houtFV_stack_4->SetBinError(12,0.3921167);
   houtFV_stack_4->SetBinError(13,0.3921167);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(17,0.2870385);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,16.4825);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,17.9288);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,17.70561);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,11.93426);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,11.38026);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.145176);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,5.939899);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,4.073088);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.793424);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7247357);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7391858);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.7529721);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.388698);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.344288);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.39478);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.060759);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.14793);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9546753);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7877806);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.6940569);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6981573);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.183661);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2452205);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3162714);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.097318);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.8786857);
   hNCpi0inFVqe_stack_6->SetBinContent(2,2.008144);
   hNCpi0inFVqe_stack_6->SetBinContent(3,2.426812);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.63249);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5709538);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.362868);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2530319);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.4626733);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5084305);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4281576);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1902537);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2070706);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.02789998);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVres_stack_7->SetBinContent(1,213.2788);
   hNCpi0inFVres_stack_7->SetBinContent(2,278.5569);
   hNCpi0inFVres_stack_7->SetBinContent(3,246.0682);
   hNCpi0inFVres_stack_7->SetBinContent(4,195.4396);
   hNCpi0inFVres_stack_7->SetBinContent(5,137.934);
   hNCpi0inFVres_stack_7->SetBinContent(6,92.04425);
   hNCpi0inFVres_stack_7->SetBinContent(7,52.46449);
   hNCpi0inFVres_stack_7->SetBinContent(8,33.44559);
   hNCpi0inFVres_stack_7->SetBinContent(9,17.12153);
   hNCpi0inFVres_stack_7->SetBinContent(10,9.784122);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.500069);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.28051);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.24513);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.032804);
   hNCpi0inFVres_stack_7->SetBinContent(15,0.948272);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.2926179);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.3068998);
   hNCpi0inFVres_stack_7->SetBinError(1,4.766355);
   hNCpi0inFVres_stack_7->SetBinError(2,5.441699);
   hNCpi0inFVres_stack_7->SetBinError(3,5.141789);
   hNCpi0inFVres_stack_7->SetBinError(4,4.507854);
   hNCpi0inFVres_stack_7->SetBinError(5,3.836013);
   hNCpi0inFVres_stack_7->SetBinError(6,3.134435);
   hNCpi0inFVres_stack_7->SetBinError(7,2.321456);
   hNCpi0inFVres_stack_7->SetBinError(8,1.895301);
   hNCpi0inFVres_stack_7->SetBinError(9,1.308166);
   hNCpi0inFVres_stack_7->SetBinError(10,0.9216579);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8791903);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6989464);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5100866);
   hNCpi0inFVres_stack_7->SetBinError(14,0.3564798);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3247714);
   hNCpi0inFVres_stack_7->SetBinError(16,0.122146);
   hNCpi0inFVres_stack_7->SetBinError(17,0.09253378);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVdis_stack_8->SetBinContent(1,36.15389);
   hNCpi0inFVdis_stack_8->SetBinContent(2,49.59743);
   hNCpi0inFVdis_stack_8->SetBinContent(3,47.76965);
   hNCpi0inFVdis_stack_8->SetBinContent(4,41.02347);
   hNCpi0inFVdis_stack_8->SetBinContent(5,27.29062);
   hNCpi0inFVdis_stack_8->SetBinContent(6,18.77793);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.58327);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.396187);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.20005);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.611734);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.51068);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.28324);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.5158178);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.128626);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.307068);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.2791681);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.2231999);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.942092);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.306205);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.264909);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.113156);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.684098);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.353449);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.00373);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9639051);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7576001);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5870111);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5418448);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3841566);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1454198);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3616285);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2032767);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2013529);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.07891307);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.1115999);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.097318);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_10->SetBinContent(1,77.57389);
   hCCpi0inFV_stack_10->SetBinContent(2,97.43434);
   hCCpi0inFV_stack_10->SetBinContent(3,97.76824);
   hCCpi0inFV_stack_10->SetBinContent(4,90.76172);
   hCCpi0inFV_stack_10->SetBinContent(5,71.29207);
   hCCpi0inFV_stack_10->SetBinContent(6,55.49536);
   hCCpi0inFV_stack_10->SetBinContent(7,28.07994);
   hCCpi0inFV_stack_10->SetBinContent(8,21.61043);
   hCCpi0inFV_stack_10->SetBinContent(9,13.48112);
   hCCpi0inFV_stack_10->SetBinContent(10,9.436297);
   hCCpi0inFV_stack_10->SetBinContent(11,5.820077);
   hCCpi0inFV_stack_10->SetBinContent(12,2.697381);
   hCCpi0inFV_stack_10->SetBinContent(13,2.590875);
   hCCpi0inFV_stack_10->SetBinContent(14,1.121968);
   hCCpi0inFV_stack_10->SetBinContent(15,0.9801958);
   hCCpi0inFV_stack_10->SetBinContent(16,0.9303237);
   hCCpi0inFV_stack_10->SetBinContent(17,2.050601);
   hCCpi0inFV_stack_10->SetBinError(1,4.449644);
   hCCpi0inFV_stack_10->SetBinError(2,4.945372);
   hCCpi0inFV_stack_10->SetBinError(3,4.915141);
   hCCpi0inFV_stack_10->SetBinError(4,4.816504);
   hCCpi0inFV_stack_10->SetBinError(5,4.211655);
   hCCpi0inFV_stack_10->SetBinError(6,3.771817);
   hCCpi0inFV_stack_10->SetBinError(7,2.628286);
   hCCpi0inFV_stack_10->SetBinError(8,2.366306);
   hCCpi0inFV_stack_10->SetBinError(9,1.851354);
   hCCpi0inFV_stack_10->SetBinError(10,1.501275);
   hCCpi0inFV_stack_10->SetBinError(11,1.177542);
   hCCpi0inFV_stack_10->SetBinError(12,0.7607625);
   hCCpi0inFV_stack_10->SetBinError(13,0.8095761);
   hCCpi0inFV_stack_10->SetBinError(14,0.5181909);
   hCCpi0inFV_stack_10->SetBinError(15,0.4383608);
   hCCpi0inFV_stack_10->SetBinError(16,0.4814682);
   hCCpi0inFV_stack_10->SetBinError(17,0.7068742);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_11->SetBinContent(1,37.31452);
   hNCinFV_stack_11->SetBinContent(2,33.1673);
   hNCinFV_stack_11->SetBinContent(3,36.79562);
   hNCinFV_stack_11->SetBinContent(4,33.25582);
   hNCinFV_stack_11->SetBinContent(5,28.37114);
   hNCinFV_stack_11->SetBinContent(6,19.69476);
   hNCinFV_stack_11->SetBinContent(7,16.225);
   hNCinFV_stack_11->SetBinContent(8,10.5921);
   hNCinFV_stack_11->SetBinContent(9,4.162908);
   hNCinFV_stack_11->SetBinContent(10,3.714533);
   hNCinFV_stack_11->SetBinContent(11,2.732646);
   hNCinFV_stack_11->SetBinContent(12,2.890715);
   hNCinFV_stack_11->SetBinContent(13,1.804013);
   hNCinFV_stack_11->SetBinContent(14,0.9269427);
   hNCinFV_stack_11->SetBinContent(15,0.8770706);
   hNCinFV_stack_11->SetBinContent(16,0.3934307);
   hNCinFV_stack_11->SetBinContent(17,1.322064);
   hNCinFV_stack_11->SetBinError(1,3.10977);
   hNCinFV_stack_11->SetBinError(2,2.883697);
   hNCinFV_stack_11->SetBinError(3,3.053671);
   hNCinFV_stack_11->SetBinError(4,2.903515);
   hNCinFV_stack_11->SetBinError(5,2.697701);
   hNCinFV_stack_11->SetBinError(6,2.180291);
   hNCinFV_stack_11->SetBinError(7,1.991305);
   hNCinFV_stack_11->SetBinError(8,1.676914);
   hNCinFV_stack_11->SetBinError(9,0.9820014);
   hNCinFV_stack_11->SetBinError(10,0.9615599);
   hNCinFV_stack_11->SetBinError(11,0.8554385);
   hNCinFV_stack_11->SetBinError(12,0.7849408);
   hNCinFV_stack_11->SetBinError(13,0.7075491);
   hNCinFV_stack_11->SetBinError(14,0.4800908);
   hNCinFV_stack_11->SetBinError(15,0.5197486);
   hNCinFV_stack_11->SetBinError(16,0.2781975);
   hNCinFV_stack_11->SetBinError(17,0.5554667);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_12->SetBinContent(1,39.07492);
   hnumuCCinFV_stack_12->SetBinContent(2,50.11067);
   hnumuCCinFV_stack_12->SetBinContent(3,47.67883);
   hnumuCCinFV_stack_12->SetBinContent(4,38.06725);
   hnumuCCinFV_stack_12->SetBinContent(5,30.52279);
   hnumuCCinFV_stack_12->SetBinContent(6,21.62224);
   hnumuCCinFV_stack_12->SetBinContent(7,15.44735);
   hnumuCCinFV_stack_12->SetBinContent(8,8.025754);
   hnumuCCinFV_stack_12->SetBinContent(9,6.989701);
   hnumuCCinFV_stack_12->SetBinContent(10,2.637366);
   hnumuCCinFV_stack_12->SetBinContent(11,2.045529);
   hnumuCCinFV_stack_12->SetBinContent(12,2.083352);
   hnumuCCinFV_stack_12->SetBinContent(13,0.785171);
   hnumuCCinFV_stack_12->SetBinContent(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(15,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(16,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(17,1.18159);
   hnumuCCinFV_stack_12->SetBinError(1,3.662696);
   hnumuCCinFV_stack_12->SetBinError(2,4.031262);
   hnumuCCinFV_stack_12->SetBinError(3,4.153538);
   hnumuCCinFV_stack_12->SetBinError(4,3.329902);
   hnumuCCinFV_stack_12->SetBinError(5,4.066291);
   hnumuCCinFV_stack_12->SetBinError(6,2.489577);
   hnumuCCinFV_stack_12->SetBinError(7,2.006028);
   hnumuCCinFV_stack_12->SetBinError(8,1.445751);
   hnumuCCinFV_stack_12->SetBinError(9,1.369031);
   hnumuCCinFV_stack_12->SetBinError(10,0.7838607);
   hnumuCCinFV_stack_12->SetBinError(11,0.7054676);
   hnumuCCinFV_stack_12->SetBinError(12,0.7164593);
   hnumuCCinFV_stack_12->SetBinError(13,0.3925882);
   hnumuCCinFV_stack_12->SetBinError(14,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(15,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(16,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(17,0.5585289);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_13->SetBinContent(1,10.77589);
   hnueCCinFV_stack_13->SetBinContent(2,4.682734);
   hnueCCinFV_stack_13->SetBinContent(3,4.22677);
   hnueCCinFV_stack_13->SetBinContent(4,4.761543);
   hnueCCinFV_stack_13->SetBinContent(5,1.702315);
   hnueCCinFV_stack_13->SetBinContent(6,1.164282);
   hnueCCinFV_stack_13->SetBinContent(7,0.9286332);
   hnueCCinFV_stack_13->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(9,1.32013);
   hnueCCinFV_stack_13->SetBinContent(10,0.6435757);
   hnueCCinFV_stack_13->SetBinContent(12,1.281124);
   hnueCCinFV_stack_13->SetBinContent(13,0.536893);
   hnueCCinFV_stack_13->SetBinContent(15,0.41253);
   hnueCCinFV_stack_13->SetBinError(1,2.506403);
   hnueCCinFV_stack_13->SetBinError(2,1.173423);
   hnueCCinFV_stack_13->SetBinError(3,1.178722);
   hnueCCinFV_stack_13->SetBinError(4,1.57471);
   hnueCCinFV_stack_13->SetBinError(5,0.7306767);
   hnueCCinFV_stack_13->SetBinError(6,0.5267588);
   hnueCCinFV_stack_13->SetBinError(7,0.48078);
   hnueCCinFV_stack_13->SetBinError(8,0.2781975);
   hnueCCinFV_stack_13->SetBinError(9,1.103342);
   hnueCCinFV_stack_13->SetBinError(10,0.3743698);
   hnueCCinFV_stack_13->SetBinError(12,0.6891595);
   hnueCCinFV_stack_13->SetBinError(13,0.3929602);
   hnueCCinFV_stack_13->SetBinError(15,0.2921355);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__11->SetBinContent(1,668.5111);
   hmcerror__11->SetBinContent(2,873.9332);
   hmcerror__11->SetBinContent(3,734.1932);
   hmcerror__11->SetBinContent(4,559.9405);
   hmcerror__11->SetBinContent(5,392.5702);
   hmcerror__11->SetBinContent(6,259.5082);
   hmcerror__11->SetBinContent(7,155.7844);
   hmcerror__11->SetBinContent(8,103.9387);
   hmcerror__11->SetBinContent(9,57.6965);
   hmcerror__11->SetBinContent(10,35.85646);
   hmcerror__11->SetBinContent(11,24.10294);
   hmcerror__11->SetBinContent(12,16.78629);
   hmcerror__11->SetBinContent(13,9.851986);
   hmcerror__11->SetBinContent(14,4.867242);
   hmcerror__11->SetBinContent(15,4.33696);
   hmcerror__11->SetBinContent(16,2.442863);
   hmcerror__11->SetBinContent(17,5.784135);
   hmcerror__11->SetBinError(1,152.1509);
   hmcerror__11->SetBinError(2,176.7213);
   hmcerror__11->SetBinError(3,155.1878);
   hmcerror__11->SetBinError(4,134.0976);
   hmcerror__11->SetBinError(5,101.8718);
   hmcerror__11->SetBinError(6,66.85665);
   hmcerror__11->SetBinError(7,45.91351);
   hmcerror__11->SetBinError(8,35.73842);
   hmcerror__11->SetBinError(9,21.81702);
   hmcerror__11->SetBinError(10,16.1792);
   hmcerror__11->SetBinError(11,11.97339);
   hmcerror__11->SetBinError(12,9.457929);
   hmcerror__11->SetBinError(13,7.140099);
   hmcerror__11->SetBinError(14,5.481583);
   hmcerror__11->SetBinError(15,4.741876);
   hmcerror__11->SetBinError(16,4.852501);
   hmcerror__11->SetBinError(17,7.328845);
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
   
   Double_t _fx3013[16] = {
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
   387.5};
   Double_t _fy3013[16] = {
   660,
   916,
   745,
   565,
   361,
   216,
   132,
   71,
   59,
   32,
   18,
   19,
   10,
   7,
   1,
   3};
   Double_t _felx3013[16] = {
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
   Double_t _fely3013[16] = {
   25.69047,
   30.26549,
   27.29469,
   23.76973,
   19,
   14.69694,
   11.48913,
   8.5518,
   7.8097,
   5.7977,
   4.4008,
   4.5151,
   3.34883,
   2.85954,
   1,
   2.143368};
   Double_t _fehx3013[16] = {
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
   Double_t _fehy3013[16] = {
   25.69047,
   30.26549,
   27.29469,
   23.76973,
   19,
   14.69694,
   11.48913,
   8.3496,
   7.6066,
   5.5904,
   4.1858,
   4.3011,
   3.1179,
   2.61053,
   1.35971,
   1.72422};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,440);
   Graph_Graph3013->SetMinimum(0);
   Graph_Graph3013->SetMaximum(1040.892);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.9/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3815.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 98.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 577.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 232.9","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 265.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[16] = {
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
   387.5};
   Double_t _fy3014[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[16] = {
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
   Double_t _fely3014[16] = {
   0.2275967,
   0.2022137,
   0.2113718,
   0.2394854,
   0.2594996,
   0.2576283,
   0.2947247,
   0.3438413,
   0.3781343,
   0.4512212,
   0.4967605,
   0.5634318,
   0.724737,
   1.12622,
   1.093364,
   1.9864};
   Double_t _fehx3014[16] = {
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
   Double_t _fehy3014[16] = {
   0.2275967,
   0.2022137,
   0.2113718,
   0.2394854,
   0.2594996,
   0.2576283,
   0.2947247,
   0.3438413,
   0.3781343,
   0.4512212,
   0.4967605,
   0.5634318,
   0.724737,
   1.12622,
   1.093364,
   1.9864};
   grae = new TGraphAsymmErrors(16,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,440);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3015[16] = {
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
   387.5};
   Double_t _fy3015[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[16] = {
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
   Double_t _fely3015[16] = {
   0.1781311,
   0.1771779,
   0.1901029,
   0.2014643,
   0.2144535,
   0.2326153,
   0.2541749,
   0.289778,
   0.3093021,
   0.2962031,
   0.2690664,
   0.2887088,
   0.3213299,
   0.4092234,
   0.3238773,
   0.4248297};
   Double_t _fehx3015[16] = {
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
   Double_t _fehy3015[16] = {
   0.1781311,
   0.1771779,
   0.1901029,
   0.2014643,
   0.2144535,
   0.2326153,
   0.2541749,
   0.289778,
   0.3093021,
   0.2962031,
   0.2690664,
   0.2887088,
   0.3213299,
   0.4092234,
   0.3238773,
   0.4248297};
   grae = new TGraphAsymmErrors(16,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,440);
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
   
   Double_t _fx3016[16] = {
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
   387.5};
   Double_t _fy3016[16] = {
   0.9872686,
   1.048135,
   1.014719,
   1.009036,
   0.9195808,
   0.8323437,
   0.8473248,
   0.683095,
   1.022592,
   0.8924473,
   0.746797,
   1.131876,
   1.015024,
   1.438186,
   0.2305762,
   1.228067};
   Double_t _felx3016[16] = {
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
   Double_t _fely3016[16] = {
   0.03842938,
   0.03463136,
   0.03717644,
   0.04245046,
   0.04839899,
   0.05663382,
   0.07375015,
   0.08227735,
   0.1353583,
   0.1616919,
   0.1825836,
   0.2689755,
   0.3399142,
   0.5875073,
   0.2305762,
   0.8774002};
   Double_t _fehx3016[16] = {
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
   Double_t _fehy3016[16] = {
   0.03842938,
   0.03463136,
   0.03717644,
   0.04245046,
   0.04839899,
   0.05663382,
   0.07375015,
   0.08033197,
   0.1318382,
   0.1559105,
   0.1736635,
   0.256227,
   0.3164743,
   0.5363469,
   0.3135168,
   0.7058195};
   grae = new TGraphAsymmErrors(16,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,440);
   Graph_Graph3016->SetMinimum(0);
   Graph_Graph3016->SetMaximum(2.171986);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);

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
