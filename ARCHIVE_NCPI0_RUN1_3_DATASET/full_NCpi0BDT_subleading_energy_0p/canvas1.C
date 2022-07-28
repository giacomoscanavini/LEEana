#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu May 26 19:06:09 2022) by ROOT version 6.26/00
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
   pad1->Range(-61.53846,-17.62,451.2821,1855.664);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmc__1->SetBinContent(1,652.2092);
   hmc__1->SetBinContent(2,858.7843);
   hmc__1->SetBinContent(3,729.6601);
   hmc__1->SetBinContent(4,551.2054);
   hmc__1->SetBinContent(5,382.013);
   hmc__1->SetBinContent(6,247.3265);
   hmc__1->SetBinContent(7,149.8058);
   hmc__1->SetBinContent(8,97.21867);
   hmc__1->SetBinContent(9,57.1938);
   hmc__1->SetBinContent(10,32.91393);
   hmc__1->SetBinContent(11,22.20019);
   hmc__1->SetBinContent(12,15.27807);
   hmc__1->SetBinContent(13,9.355085);
   hmc__1->SetBinContent(14,5.078816);
   hmc__1->SetBinContent(15,3.459889);
   hmc__1->SetBinContent(16,2.118465);
   hmc__1->SetBinContent(17,5.179899);
   hmc__1->SetBinError(1,130.0212);
   hmc__1->SetBinError(2,158.3198);
   hmc__1->SetBinError(3,145.8436);
   hmc__1->SetBinError(4,114.0452);
   hmc__1->SetBinError(5,80.02299);
   hmc__1->SetBinError(6,51.36504);
   hmc__1->SetBinError(7,31.84314);
   hmc__1->SetBinError(8,22.33553);
   hmc__1->SetBinError(9,13.84862);
   hmc__1->SetBinError(10,8.724991);
   hmc__1->SetBinError(11,6.478545);
   hmc__1->SetBinError(12,5.492218);
   hmc__1->SetBinError(13,3.439047);
   hmc__1->SetBinError(14,3.484043);
   hmc__1->SetBinError(15,3.168531);
   hmc__1->SetBinError(16,1.692559);
   hmc__1->SetBinError(17,3.15747);
   hmc__1->SetMinimum(-17.62);
   hmc__1->SetMaximum(1762);
   hmc__1->SetEntries(3775.136);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",16,0,400);
   hs1_stack_1->SetMinimum(-9.474605e-09);
   hs1_stack_1->SetMaximum(901.7235);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hext_stack_2->SetBinContent(1,103.2423);
   hext_stack_2->SetBinContent(2,146.9843);
   hext_stack_2->SetBinContent(3,97.72033);
   hext_stack_2->SetBinContent(4,54.24969);
   hext_stack_2->SetBinContent(5,38.24557);
   hext_stack_2->SetBinContent(6,12.96758);
   hext_stack_2->SetBinContent(7,11.06308);
   hext_stack_2->SetBinContent(8,6.482403);
   hext_stack_2->SetBinContent(9,2.517386);
   hext_stack_2->SetBinContent(10,0.8131978);
   hext_stack_2->SetBinContent(11,1.137595);
   hext_stack_2->SetBinContent(12,0.6487947);
   hext_stack_2->SetBinContent(13,0.6416141);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinError(1,6.782234);
   hext_stack_2->SetBinError(2,8.273357);
   hext_stack_2->SetBinError(3,6.664152);
   hext_stack_2->SetBinError(4,4.879666);
   hext_stack_2->SetBinError(5,4.217092);
   hext_stack_2->SetBinError(6,2.284364);
   hext_stack_2->SetBinError(7,2.349019);
   hext_stack_2->SetBinError(8,1.666529);
   hext_stack_2->SetBinError(9,0.9575503);
   hext_stack_2->SetBinError(10,0.5750177);
   hext_stack_2->SetBinError(11,0.6602113);
   hext_stack_2->SetBinError(12,0.4587671);
   hext_stack_2->SetBinError(13,0.6416141);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetEntries(1136);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,250.3393);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,330.4416);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,296.3762);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,238.1235);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,165.7956);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,111.2824);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,63.48004);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,43.20381);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,22.34948);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,13.42376);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,9.038649);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,5.56375);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,2.760948);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,2.18933);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,1.25534);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,0.5717859);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,0.5300997);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,5.153122);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,5.931718);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,5.641757);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,4.997027);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,4.193731);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.42182);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,2.539331);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,2.131875);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,1.511964);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,1.093075);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,1.033126);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,0.7975602);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,0.5304104);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,0.5085583);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,0.3831421);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,0.2355051);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,0.1216132);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hCCpi0inFV_stack_7->SetBinContent(1,80.21463);
   hCCpi0inFV_stack_7->SetBinContent(2,102.3163);
   hCCpi0inFV_stack_7->SetBinContent(3,101.4441);
   hCCpi0inFV_stack_7->SetBinContent(4,98.9081);
   hCCpi0inFV_stack_7->SetBinContent(5,76.57695);
   hCCpi0inFV_stack_7->SetBinContent(6,61.09714);
   hCCpi0inFV_stack_7->SetBinContent(7,32.43449);
   hCCpi0inFV_stack_7->SetBinContent(8,25.95545);
   hCCpi0inFV_stack_7->SetBinContent(9,16.944);
   hCCpi0inFV_stack_7->SetBinContent(10,10.75667);
   hCCpi0inFV_stack_7->SetBinContent(11,7.280532);
   hCCpi0inFV_stack_7->SetBinContent(12,4.21616);
   hCCpi0inFV_stack_7->SetBinContent(13,2.984305);
   hCCpi0inFV_stack_7->SetBinContent(14,1.318683);
   hCCpi0inFV_stack_7->SetBinContent(15,0.9801958);
   hCCpi0inFV_stack_7->SetBinContent(16,0.9303237);
   hCCpi0inFV_stack_7->SetBinContent(17,2.639056);
   hCCpi0inFV_stack_7->SetBinError(1,4.518306);
   hCCpi0inFV_stack_7->SetBinError(2,5.080041);
   hCCpi0inFV_stack_7->SetBinError(3,4.992882);
   hCCpi0inFV_stack_7->SetBinError(4,5.043116);
   hCCpi0inFV_stack_7->SetBinError(5,4.355558);
   hCCpi0inFV_stack_7->SetBinError(6,3.952973);
   hCCpi0inFV_stack_7->SetBinError(7,2.812281);
   hCCpi0inFV_stack_7->SetBinError(8,2.60674);
   hCCpi0inFV_stack_7->SetBinError(9,2.085923);
   hCCpi0inFV_stack_7->SetBinError(10,1.600533);
   hCCpi0inFV_stack_7->SetBinError(11,1.330483);
   hCCpi0inFV_stack_7->SetBinError(12,0.9622888);
   hCCpi0inFV_stack_7->SetBinError(13,0.8560416);
   hCCpi0inFV_stack_7->SetBinError(14,0.5542732);
   hCCpi0inFV_stack_7->SetBinError(15,0.4383608);
   hCCpi0inFV_stack_7->SetBinError(16,0.4814682);
   hCCpi0inFV_stack_7->SetBinError(17,0.784283);
   hCCpi0inFV_stack_7->SetEntries(2680);

   ci = 1440;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hNCinFV_stack_8->SetBinContent(1,32.53127);
   hNCinFV_stack_8->SetBinContent(2,27.01381);
   hNCinFV_stack_8->SetBinContent(3,25.51194);
   hNCinFV_stack_8->SetBinContent(4,18.3512);
   hNCinFV_stack_8->SetBinContent(5,14.10992);
   hNCinFV_stack_8->SetBinContent(6,8.457567);
   hNCinFV_stack_8->SetBinContent(7,7.280532);
   hNCinFV_stack_8->SetBinContent(8,4.196482);
   hNCinFV_stack_8->SetBinContent(9,1.467217);
   hNCinFV_stack_8->SetBinContent(10,1.178602);
   hNCinFV_stack_8->SetBinContent(11,1.072095);
   hNCinFV_stack_8->SetBinContent(12,1.375317);
   hNCinFV_stack_8->SetBinContent(13,1.072095);
   hNCinFV_stack_8->SetBinContent(14,0.7319179);
   hNCinFV_stack_8->SetBinContent(16,0.3934307);
   hNCinFV_stack_8->SetBinContent(17,0.3934307);
   hNCinFV_stack_8->SetBinError(1,2.905034);
   hNCinFV_stack_8->SetBinError(2,2.610753);
   hNCinFV_stack_8->SetBinError(3,2.544684);
   hNCinFV_stack_8->SetBinError(4,2.184716);
   hNCinFV_stack_8->SetBinError(5,1.923003);
   hNCinFV_stack_8->SetBinError(6,1.364992);
   hNCinFV_stack_8->SetBinError(7,1.330483);
   hNCinFV_stack_8->SetBinError(8,1.056731);
   hNCinFV_stack_8->SetBinError(9,0.6214735);
   hNCinFV_stack_8->SetBinError(10,0.4811646);
   hNCinFV_stack_8->SetBinError(11,0.5551335);
   hNCinFV_stack_8->SetBinError(12,0.5198233);
   hNCinFV_stack_8->SetBinError(13,0.5551335);
   hNCinFV_stack_8->SetBinError(14,0.438694);
   hNCinFV_stack_8->SetBinError(16,0.2781975);
   hNCinFV_stack_8->SetBinError(17,0.2781975);
   hNCinFV_stack_8->SetEntries(615);

   ci = 1441;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnumuCCinFV_stack_9->SetBinContent(1,36.43418);
   hnumuCCinFV_stack_9->SetBinContent(2,45.22876);
   hnumuCCinFV_stack_9->SetBinContent(3,44.00294);
   hnumuCCinFV_stack_9->SetBinContent(4,29.92087);
   hnumuCCinFV_stack_9->SetBinContent(5,25.23792);
   hnumuCCinFV_stack_9->SetBinContent(6,16.02046);
   hnumuCCinFV_stack_9->SetBinContent(7,11.0928);
   hnumuCCinFV_stack_9->SetBinContent(8,3.680738);
   hnumuCCinFV_stack_9->SetBinContent(9,3.526828);
   hnumuCCinFV_stack_9->SetBinContent(10,1.316992);
   hnumuCCinFV_stack_9->SetBinContent(11,0.5850745);
   hnumuCCinFV_stack_9->SetBinContent(12,0.5645722);
   hnumuCCinFV_stack_9->SetBinContent(13,0.3917402);
   hnumuCCinFV_stack_9->SetBinContent(15,0.3917402);
   hnumuCCinFV_stack_9->SetBinContent(16,0.1950248);
   hnumuCCinFV_stack_9->SetBinContent(17,0.5931345);
   hnumuCCinFV_stack_9->SetBinError(1,3.57765);
   hnumuCCinFV_stack_9->SetBinError(2,3.860177);
   hnumuCCinFV_stack_9->SetBinError(3,4.059756);
   hnumuCCinFV_stack_9->SetBinError(4,2.975555);
   hnumuCCinFV_stack_9->SetBinError(5,3.911761);
   hnumuCCinFV_stack_9->SetBinError(6,2.190571);
   hnumuCCinFV_stack_9->SetBinError(7,1.73871);
   hnumuCCinFV_stack_9->SetBinError(8,0.9457824);
   hnumuCCinFV_stack_9->SetBinError(9,0.9750283);
   hnumuCCinFV_stack_9->SetBinError(10,0.5536755);
   hnumuCCinFV_stack_9->SetBinError(11,0.337793);
   hnumuCCinFV_stack_9->SetBinError(12,0.4075215);
   hnumuCCinFV_stack_9->SetBinError(13,0.2770047);
   hnumuCCinFV_stack_9->SetBinError(15,0.2770047);
   hnumuCCinFV_stack_9->SetBinError(16,0.1950249);
   hnumuCCinFV_stack_9->SetBinError(17,0.4433125);
   hnumuCCinFV_stack_9->SetEntries(846);

   ci = 1442;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hnueCCinFV_stack_10->SetBinContent(1,10.77589);
   hnueCCinFV_stack_10->SetBinContent(2,4.682734);
   hnueCCinFV_stack_10->SetBinContent(3,4.22677);
   hnueCCinFV_stack_10->SetBinContent(4,4.761543);
   hnueCCinFV_stack_10->SetBinContent(5,1.702315);
   hnueCCinFV_stack_10->SetBinContent(6,1.164282);
   hnueCCinFV_stack_10->SetBinContent(7,0.9286332);
   hnueCCinFV_stack_10->SetBinContent(8,0.3934307);
   hnueCCinFV_stack_10->SetBinContent(9,1.32013);
   hnueCCinFV_stack_10->SetBinContent(10,0.6435757);
   hnueCCinFV_stack_10->SetBinContent(12,1.281124);
   hnueCCinFV_stack_10->SetBinContent(13,0.536893);
   hnueCCinFV_stack_10->SetBinContent(15,0.41253);
   hnueCCinFV_stack_10->SetBinError(1,2.506403);
   hnueCCinFV_stack_10->SetBinError(2,1.173423);
   hnueCCinFV_stack_10->SetBinError(3,1.178722);
   hnueCCinFV_stack_10->SetBinError(4,1.57471);
   hnueCCinFV_stack_10->SetBinError(5,0.7306767);
   hnueCCinFV_stack_10->SetBinError(6,0.5267588);
   hnueCCinFV_stack_10->SetBinError(7,0.48078);
   hnueCCinFV_stack_10->SetBinError(8,0.2781975);
   hnueCCinFV_stack_10->SetBinError(9,1.103342);
   hnueCCinFV_stack_10->SetBinError(10,0.3743698);
   hnueCCinFV_stack_10->SetBinError(12,0.6891595);
   hnueCCinFV_stack_10->SetBinError(13,0.3929602);
   hnueCCinFV_stack_10->SetBinError(15,0.2921355);
   hnueCCinFV_stack_10->SetEntries(115);

   ci = 1443;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);
   hmcerror__2->SetBinContent(1,652.2092);
   hmcerror__2->SetBinContent(2,858.7843);
   hmcerror__2->SetBinContent(3,729.6601);
   hmcerror__2->SetBinContent(4,551.2054);
   hmcerror__2->SetBinContent(5,382.013);
   hmcerror__2->SetBinContent(6,247.3265);
   hmcerror__2->SetBinContent(7,149.8058);
   hmcerror__2->SetBinContent(8,97.21867);
   hmcerror__2->SetBinContent(9,57.1938);
   hmcerror__2->SetBinContent(10,32.91393);
   hmcerror__2->SetBinContent(11,22.20019);
   hmcerror__2->SetBinContent(12,15.27807);
   hmcerror__2->SetBinContent(13,9.355085);
   hmcerror__2->SetBinContent(14,5.078816);
   hmcerror__2->SetBinContent(15,3.459889);
   hmcerror__2->SetBinContent(16,2.118465);
   hmcerror__2->SetBinContent(17,5.179899);
   hmcerror__2->SetBinError(1,130.0212);
   hmcerror__2->SetBinError(2,158.3198);
   hmcerror__2->SetBinError(3,145.8436);
   hmcerror__2->SetBinError(4,114.0452);
   hmcerror__2->SetBinError(5,80.02299);
   hmcerror__2->SetBinError(6,51.36504);
   hmcerror__2->SetBinError(7,31.84314);
   hmcerror__2->SetBinError(8,22.33553);
   hmcerror__2->SetBinError(9,13.84862);
   hmcerror__2->SetBinError(10,8.724991);
   hmcerror__2->SetBinError(11,6.478545);
   hmcerror__2->SetBinError(12,5.492218);
   hmcerror__2->SetBinError(13,3.439047);
   hmcerror__2->SetBinError(14,3.484043);
   hmcerror__2->SetBinError(15,3.168531);
   hmcerror__2->SetBinError(16,1.692559);
   hmcerror__2->SetBinError(17,3.15747);
   hmcerror__2->SetEntries(3775.136);

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
   
   Double_t _fx3001[16] = {
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
   Double_t _fy3001[16] = {
   624,
   881,
   713,
   562,
   392,
   240,
   134,
   88,
   73,
   35,
   23,
   14,
   19,
   6,
   8,
   1};
   Double_t _felx3001[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3001[16] = {
   24.97999,
   29.68164,
   26.70206,
   23.70654,
   19.79899,
   15.49193,
   11.57584,
   9.5036,
   8.6693,
   6.0548,
   4.9457,
   3.9102,
   4.5151,
   2.67925,
   3.0307,
   1};
   Double_t _fehx3001[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3001[16] = {
   24.97999,
   29.68164,
   26.70206,
   23.70654,
   19.79899,
   15.49193,
   11.57584,
   9.3021,
   8.4672,
   5.8483,
   4.7346,
   3.6898,
   4.3011,
   2.41858,
   2.7896,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(16,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,440);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1001.75);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.1/16","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3813.0","lp");
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
   entry=leg->AddEntry("hext_stack_2","EXT, 477.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1556.2","F");

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 624.4","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 144.7","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 218.6","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 32.8","F");

   ci = 1443;
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
   canvas1->cd();
  
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
   
   Double_t _fx3002[16] = {
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
   Double_t _fy3002[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3002[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3002[16] = {
   0.1993551,
   0.1843534,
   0.1998788,
   0.2069015,
   0.2094771,
   0.2076811,
   0.2125628,
   0.2297452,
   0.242135,
   0.265085,
   0.2918239,
   0.3594838,
   0.3676125,
   0.6859951,
   0.9157896,
   0.7989554};
   Double_t _fehx3002[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3002[16] = {
   0.1993551,
   0.1843534,
   0.1998788,
   0.2069015,
   0.2094771,
   0.2076811,
   0.2125628,
   0.2297452,
   0.242135,
   0.265085,
   0.2918239,
   0.3594838,
   0.3676125,
   0.6859951,
   0.9157896,
   0.7989554};
   grae = new TGraphAsymmErrors(16,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,440);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
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
   
   Double_t _fx3003[16] = {
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
   Double_t _fy3003[16] = {
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3003[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3003[16] = {
   0.1740116,
   0.1708644,
   0.1787159,
   0.1900308,
   0.1950528,
   0.2003644,
   0.2001537,
   0.2148606,
   0.2222867,
   0.2232876,
   0.2371102,
   0.2647665,
   0.2860195,
   0.3475701,
   0.3245737,
   0.4639789};
   Double_t _fehx3003[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3003[16] = {
   0.1740116,
   0.1708644,
   0.1787159,
   0.1900308,
   0.1950528,
   0.2003644,
   0.2001537,
   0.2148606,
   0.2222867,
   0.2232876,
   0.2371102,
   0.2647665,
   0.2860195,
   0.3475701,
   0.3245737,
   0.4639789};
   grae = new TGraphAsymmErrors(16,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,440);
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
   
   Double_t _fx3004[16] = {
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
   Double_t _fy3004[16] = {
   0.9567483,
   1.025869,
   0.9771673,
   1.019584,
   1.026143,
   0.9703771,
   0.8944913,
   0.9051759,
   1.276362,
   1.063379,
   1.036027,
   0.9163461,
   2.030981,
   1.181378,
   2.312213,
   0.4720399};
   Double_t _felx3004[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fely3004[16] = {
   0.03830058,
   0.0345624,
   0.0365952,
   0.04300854,
   0.05182805,
   0.06263757,
   0.07727228,
   0.09775488,
   0.1515776,
   0.1839586,
   0.2227774,
   0.2559355,
   0.4826359,
   0.5275344,
   0.8759529,
   0.4720399};
   Double_t _fehx3004[16] = {
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
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
   Double_t _fehy3004[16] = {
   0.03830058,
   0.0345624,
   0.0365952,
   0.04300854,
   0.05182805,
   0.06263757,
   0.07727228,
   0.09568224,
   0.148044,
   0.1776846,
   0.2132684,
   0.2415096,
   0.4597606,
   0.4762094,
   0.8062685,
   0.6418373};
   grae = new TGraphAsymmErrors(16,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,440);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(3.430329);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_kine_pio_energy_low_all",16,0,400);

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
