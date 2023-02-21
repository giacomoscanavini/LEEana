#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Mon Jan  9 21:29:48 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",190,172,1200,900);
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
   pad1->Range(-1.307692,-18.04,1.25641,1994.844);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmc__10->SetBinContent(1,82.31023);
   hmc__10->SetBinContent(2,67.56458);
   hmc__10->SetBinContent(3,62.60251);
   hmc__10->SetBinContent(4,59.25447);
   hmc__10->SetBinContent(5,64.22186);
   hmc__10->SetBinContent(6,60.97082);
   hmc__10->SetBinContent(7,51.34666);
   hmc__10->SetBinContent(8,60.68907);
   hmc__10->SetBinContent(9,77.74127);
   hmc__10->SetBinContent(10,82.40167);
   hmc__10->SetBinContent(11,93.37064);
   hmc__10->SetBinContent(12,107.0167);
   hmc__10->SetBinContent(13,130.5004);
   hmc__10->SetBinContent(14,151.4984);
   hmc__10->SetBinContent(15,185.7202);
   hmc__10->SetBinContent(16,248.909);
   hmc__10->SetBinContent(17,309.8441);
   hmc__10->SetBinContent(18,390.5043);
   hmc__10->SetBinContent(19,554.2015);
   hmc__10->SetBinContent(20,888.7912);
   hmc__10->SetBinError(1,30.64693);
   hmc__10->SetBinError(2,19.89769);
   hmc__10->SetBinError(3,20.96484);
   hmc__10->SetBinError(4,20.04408);
   hmc__10->SetBinError(5,21.08464);
   hmc__10->SetBinError(6,22.51654);
   hmc__10->SetBinError(7,16.71188);
   hmc__10->SetBinError(8,20.70622);
   hmc__10->SetBinError(9,22.96667);
   hmc__10->SetBinError(10,26.36814);
   hmc__10->SetBinError(11,24.89207);
   hmc__10->SetBinError(12,32.28802);
   hmc__10->SetBinError(13,40.15665);
   hmc__10->SetBinError(14,41.12835);
   hmc__10->SetBinError(15,52.24024);
   hmc__10->SetBinError(16,64.6221);
   hmc__10->SetBinError(17,83.44712);
   hmc__10->SetBinError(18,101.7764);
   hmc__10->SetBinError(19,125.277);
   hmc__10->SetBinError(20,211.6782);
   hmc__10->SetBinError(21,0.3895343);
   hmc__10->SetMinimum(-18.04);
   hmc__10->SetMaximum(1894.2);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",20,-1,1);
   hs4_stack_4->SetMinimum(-1.293891e-08);
   hs4_stack_4->SetMaximum(933.2308);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,3.61859);
   hbadmatch_stack_1->SetBinContent(2,2.685642);
   hbadmatch_stack_1->SetBinContent(3,2.764927);
   hbadmatch_stack_1->SetBinContent(4,1.399302);
   hbadmatch_stack_1->SetBinContent(5,1.743189);
   hbadmatch_stack_1->SetBinContent(6,3.23761);
   hbadmatch_stack_1->SetBinContent(7,0.8207904);
   hbadmatch_stack_1->SetBinContent(8,1.712681);
   hbadmatch_stack_1->SetBinContent(9,3.683567);
   hbadmatch_stack_1->SetBinContent(10,1.678738);
   hbadmatch_stack_1->SetBinContent(11,5.082703);
   hbadmatch_stack_1->SetBinContent(12,4.774901);
   hbadmatch_stack_1->SetBinContent(13,3.281753);
   hbadmatch_stack_1->SetBinContent(14,3.632154);
   hbadmatch_stack_1->SetBinContent(15,3.753074);
   hbadmatch_stack_1->SetBinContent(16,7.1108);
   hbadmatch_stack_1->SetBinContent(17,6.249196);
   hbadmatch_stack_1->SetBinContent(18,10.55304);
   hbadmatch_stack_1->SetBinContent(19,9.386071);
   hbadmatch_stack_1->SetBinContent(20,20.41655);
   hbadmatch_stack_1->SetBinError(1,0.9918428);
   hbadmatch_stack_1->SetBinError(2,1.745105);
   hbadmatch_stack_1->SetBinError(3,0.8317228);
   hbadmatch_stack_1->SetBinError(4,0.5293657);
   hbadmatch_stack_1->SetBinError(5,0.7485437);
   hbadmatch_stack_1->SetBinError(6,1.026564);
   hbadmatch_stack_1->SetBinError(7,0.4288102);
   hbadmatch_stack_1->SetBinError(8,0.61148);
   hbadmatch_stack_1->SetBinError(9,1.096897);
   hbadmatch_stack_1->SetBinError(10,0.7088114);
   hbadmatch_stack_1->SetBinError(11,1.918912);
   hbadmatch_stack_1->SetBinError(12,1.278775);
   hbadmatch_stack_1->SetBinError(13,0.9444562);
   hbadmatch_stack_1->SetBinError(14,1.037945);
   hbadmatch_stack_1->SetBinError(15,1.088143);
   hbadmatch_stack_1->SetBinError(16,1.385145);
   hbadmatch_stack_1->SetBinError(17,1.310077);
   hbadmatch_stack_1->SetBinError(18,1.724452);
   hbadmatch_stack_1->SetBinError(19,1.613644);
   hbadmatch_stack_1->SetBinError(20,2.697102);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hext_stack_2->SetBinContent(1,12.28288);
   hext_stack_2->SetBinContent(2,10.5671);
   hext_stack_2->SetBinContent(3,8.407247);
   hext_stack_2->SetBinContent(4,10.66367);
   hext_stack_2->SetBinContent(5,10.10703);
   hext_stack_2->SetBinContent(6,12.52785);
   hext_stack_2->SetBinContent(7,6.971204);
   hext_stack_2->SetBinContent(8,12.02469);
   hext_stack_2->SetBinContent(9,18.29525);
   hext_stack_2->SetBinContent(10,16.1194);
   hext_stack_2->SetBinContent(11,23.59811);
   hext_stack_2->SetBinContent(12,22.14053);
   hext_stack_2->SetBinContent(13,22.3552);
   hext_stack_2->SetBinContent(14,31.09283);
   hext_stack_2->SetBinContent(15,31.60594);
   hext_stack_2->SetBinContent(16,31.11002);
   hext_stack_2->SetBinContent(17,36.34227);
   hext_stack_2->SetBinContent(18,35.83916);
   hext_stack_2->SetBinContent(19,58.0299);
   hext_stack_2->SetBinContent(20,67.36449);
   hext_stack_2->SetBinError(1,2.452317);
   hext_stack_2->SetBinError(2,2.34386);
   hext_stack_2->SetBinError(3,2.003079);
   hext_stack_2->SetBinError(4,2.269662);
   hext_stack_2->SetBinError(5,2.112691);
   hext_stack_2->SetBinError(6,2.392212);
   hext_stack_2->SetBinError(7,1.732839);
   hext_stack_2->SetBinError(8,2.428923);
   hext_stack_2->SetBinError(9,2.880709);
   hext_stack_2->SetBinError(10,2.597709);
   hext_stack_2->SetBinError(11,3.322554);
   hext_stack_2->SetBinError(12,3.260886);
   hext_stack_2->SetBinError(13,3.056983);
   hext_stack_2->SetBinError(14,3.924243);
   hext_stack_2->SetBinError(15,3.832123);
   hext_stack_2->SetBinError(16,3.651102);
   hext_stack_2->SetBinError(17,3.993151);
   hext_stack_2->SetBinError(18,3.846016);
   hext_stack_2->SetBinError(19,5.034602);
   hext_stack_2->SetBinError(20,5.587376);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hdirt_stack_3->SetBinContent(1,1.898887);
   hdirt_stack_3->SetBinContent(2,0.9430165);
   hdirt_stack_3->SetBinContent(3,1.961211);
   hdirt_stack_3->SetBinContent(4,3.19507);
   hdirt_stack_3->SetBinContent(5,0.6688038);
   hdirt_stack_3->SetBinContent(6,1.430615);
   hdirt_stack_3->SetBinContent(7,0.4377912);
   hdirt_stack_3->SetBinContent(8,2.134555);
   hdirt_stack_3->SetBinContent(9,1.179927);
   hdirt_stack_3->SetBinContent(10,0.4794586);
   hdirt_stack_3->SetBinContent(11,1.651058);
   hdirt_stack_3->SetBinContent(12,2.667917);
   hdirt_stack_3->SetBinContent(13,3.068294);
   hdirt_stack_3->SetBinContent(14,2.493926);
   hdirt_stack_3->SetBinContent(15,1.6785);
   hdirt_stack_3->SetBinContent(16,4.201101);
   hdirt_stack_3->SetBinContent(17,6.334413);
   hdirt_stack_3->SetBinContent(18,6.552585);
   hdirt_stack_3->SetBinContent(19,5.50254);
   hdirt_stack_3->SetBinContent(20,8.573397);
   hdirt_stack_3->SetBinError(1,0.6057332);
   hdirt_stack_3->SetBinError(2,0.4298722);
   hdirt_stack_3->SetBinError(3,0.8106537);
   hdirt_stack_3->SetBinError(4,1.232008);
   hdirt_stack_3->SetBinError(5,0.4240956);
   hdirt_stack_3->SetBinError(6,0.6095214);
   hdirt_stack_3->SetBinError(7,0.3095651);
   hdirt_stack_3->SetBinError(8,0.786332);
   hdirt_stack_3->SetBinError(9,0.4862253);
   hdirt_stack_3->SetBinError(10,0.3403063);
   hdirt_stack_3->SetBinError(11,0.6984735);
   hdirt_stack_3->SetBinError(12,0.8727352);
   hdirt_stack_3->SetBinError(13,0.9365159);
   hdirt_stack_3->SetBinError(14,0.8073456);
   hdirt_stack_3->SetBinError(15,0.6520188);
   hdirt_stack_3->SetBinError(16,0.9705757);
   hdirt_stack_3->SetBinError(17,1.599221);
   hdirt_stack_3->SetBinError(18,1.355913);
   hdirt_stack_3->SetBinError(19,1.311937);
   hdirt_stack_3->SetBinError(20,1.586924);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,11.61652);
   houtFV_stack_4->SetBinContent(2,12.26597);
   houtFV_stack_4->SetBinContent(3,10.95074);
   houtFV_stack_4->SetBinContent(4,10.61525);
   houtFV_stack_4->SetBinContent(5,12.04274);
   houtFV_stack_4->SetBinContent(6,11.5383);
   houtFV_stack_4->SetBinContent(7,10.21078);
   houtFV_stack_4->SetBinContent(8,9.210103);
   houtFV_stack_4->SetBinContent(9,9.231295);
   houtFV_stack_4->SetBinContent(10,12.23012);
   houtFV_stack_4->SetBinContent(11,13.90859);
   houtFV_stack_4->SetBinContent(12,16.25405);
   houtFV_stack_4->SetBinContent(13,14.8025);
   houtFV_stack_4->SetBinContent(14,21.52148);
   houtFV_stack_4->SetBinContent(15,27.90418);
   houtFV_stack_4->SetBinContent(16,33.45482);
   houtFV_stack_4->SetBinContent(17,44.25829);
   houtFV_stack_4->SetBinContent(18,54.24531);
   houtFV_stack_4->SetBinContent(19,64.03053);
   houtFV_stack_4->SetBinContent(20,76.45082);
   houtFV_stack_4->SetBinError(1,1.710902);
   houtFV_stack_4->SetBinError(2,1.777666);
   houtFV_stack_4->SetBinError(3,1.662034);
   houtFV_stack_4->SetBinError(4,1.618652);
   houtFV_stack_4->SetBinError(5,1.72794);
   houtFV_stack_4->SetBinError(6,2.045134);
   houtFV_stack_4->SetBinError(7,1.581617);
   houtFV_stack_4->SetBinError(8,1.509287);
   houtFV_stack_4->SetBinError(9,1.445461);
   houtFV_stack_4->SetBinError(10,1.739575);
   houtFV_stack_4->SetBinError(11,1.896769);
   houtFV_stack_4->SetBinError(12,2.067339);
   houtFV_stack_4->SetBinError(13,1.974581);
   houtFV_stack_4->SetBinError(14,2.289912);
   houtFV_stack_4->SetBinError(15,2.654061);
   houtFV_stack_4->SetBinError(16,2.986404);
   houtFV_stack_4->SetBinError(17,3.262665);
   houtFV_stack_4->SetBinError(18,3.842769);
   houtFV_stack_4->SetBinError(19,3.981593);
   houtFV_stack_4->SetBinError(20,4.37712);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.957727);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.6403206);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6391345);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4812065);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3289252);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.437433);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.3407657);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4848375);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3852539);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3634356);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2440946);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.341581);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.013025);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.9664931);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,2.155535);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.532381);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,7.884307);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,16.746);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,69.07076);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8542366);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2120885);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1895266);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.182373);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1328517);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2939829);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1712509);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2222178);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2201053);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2511433);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.02862678);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.09698112);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1842154);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.416183);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.3937955);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.5826645);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7196876);
   hNCpi0inFVcoh_stack_5->SetBinError(18,1.063527);
   hNCpi0inFVcoh_stack_5->SetBinError(19,1.449649);
   hNCpi0inFVcoh_stack_5->SetBinError(20,3.130646);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.09386332);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2463214);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1370652);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.06050988);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.0541347);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.05458213);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1703212);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3148397);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.06074714);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1704282);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.10272);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5028504);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.3258007);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.31887);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.75576);
   hNCpi0inFVqe_stack_6->SetBinContent(20,1.619388);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.07737124);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1266278);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1223856);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.01568944);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01715503);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04049794);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03076236);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03855267);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.04066776);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07498921);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.176599);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.0408864);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.08385804);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.0482942);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1614888);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.09872942);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.4054738);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4982442);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3518962);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,20.28055);
   hNCpi0inFVres_stack_7->SetBinContent(2,15.72486);
   hNCpi0inFVres_stack_7->SetBinContent(3,16.93344);
   hNCpi0inFVres_stack_7->SetBinContent(4,15.75222);
   hNCpi0inFVres_stack_7->SetBinContent(5,18.51674);
   hNCpi0inFVres_stack_7->SetBinContent(6,15.06295);
   hNCpi0inFVres_stack_7->SetBinContent(7,15.78381);
   hNCpi0inFVres_stack_7->SetBinContent(8,17.84954);
   hNCpi0inFVres_stack_7->SetBinContent(9,20.73062);
   hNCpi0inFVres_stack_7->SetBinContent(10,26.2517);
   hNCpi0inFVres_stack_7->SetBinContent(11,25.35672);
   hNCpi0inFVres_stack_7->SetBinContent(12,33.53229);
   hNCpi0inFVres_stack_7->SetBinContent(13,42.66418);
   hNCpi0inFVres_stack_7->SetBinContent(14,50.09782);
   hNCpi0inFVres_stack_7->SetBinContent(15,63.08811);
   hNCpi0inFVres_stack_7->SetBinContent(16,84.3037);
   hNCpi0inFVres_stack_7->SetBinContent(17,107.566);
   hNCpi0inFVres_stack_7->SetBinContent(18,133.986);
   hNCpi0inFVres_stack_7->SetBinContent(19,181.4033);
   hNCpi0inFVres_stack_7->SetBinContent(20,249.6094);
   hNCpi0inFVres_stack_7->SetBinError(1,1.516671);
   hNCpi0inFVres_stack_7->SetBinError(2,1.42159);
   hNCpi0inFVres_stack_7->SetBinError(3,1.421339);
   hNCpi0inFVres_stack_7->SetBinError(4,1.344183);
   hNCpi0inFVres_stack_7->SetBinError(5,1.539428);
   hNCpi0inFVres_stack_7->SetBinError(6,1.26179);
   hNCpi0inFVres_stack_7->SetBinError(7,1.385422);
   hNCpi0inFVres_stack_7->SetBinError(8,1.377265);
   hNCpi0inFVres_stack_7->SetBinError(9,1.523124);
   hNCpi0inFVres_stack_7->SetBinError(10,1.781664);
   hNCpi0inFVres_stack_7->SetBinError(11,1.634493);
   hNCpi0inFVres_stack_7->SetBinError(12,1.981256);
   hNCpi0inFVres_stack_7->SetBinError(13,2.3227);
   hNCpi0inFVres_stack_7->SetBinError(14,2.404123);
   hNCpi0inFVres_stack_7->SetBinError(15,2.757204);
   hNCpi0inFVres_stack_7->SetBinError(16,3.269689);
   hNCpi0inFVres_stack_7->SetBinError(17,3.562039);
   hNCpi0inFVres_stack_7->SetBinError(18,3.928894);
   hNCpi0inFVres_stack_7->SetBinError(19,4.569567);
   hNCpi0inFVres_stack_7->SetBinError(20,5.486943);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.147437);
   hNCpi0inFVdis_stack_8->SetBinContent(2,5.073173);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.630229);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.097694);
   hNCpi0inFVdis_stack_8->SetBinContent(5,2.519414);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.796812);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.389397);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.183405);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.075774);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.085474);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.977184);
   hNCpi0inFVdis_stack_8->SetBinContent(12,4.269388);
   hNCpi0inFVdis_stack_8->SetBinContent(13,6.652033);
   hNCpi0inFVdis_stack_8->SetBinContent(14,6.055103);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.195112);
   hNCpi0inFVdis_stack_8->SetBinContent(16,14.40886);
   hNCpi0inFVdis_stack_8->SetBinContent(17,20.34246);
   hNCpi0inFVdis_stack_8->SetBinContent(18,28.16146);
   hNCpi0inFVdis_stack_8->SetBinContent(19,40.63003);
   hNCpi0inFVdis_stack_8->SetBinContent(20,72.13927);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.7659914);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.9341247);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4959834);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8617344);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.5392981);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3335074);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7088617);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.61909);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5444775);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5260088);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.572328);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8140531);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8549291);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7734773);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9353736);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.394763);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.592031);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.861854);
   hNCpi0inFVdis_stack_8->SetBinError(19,2.144844);
   hNCpi0inFVdis_stack_8->SetBinError(20,3.064273);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.09545146);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.1463682);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.0514606);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.1302015);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,12.83794);
   hCCpi0inFV_stack_10->SetBinContent(2,9.800487);
   hCCpi0inFV_stack_10->SetBinContent(3,9.206784);
   hCCpi0inFV_stack_10->SetBinContent(4,5.621671);
   hCCpi0inFV_stack_10->SetBinContent(5,9.242165);
   hCCpi0inFV_stack_10->SetBinContent(6,7.820806);
   hCCpi0inFV_stack_10->SetBinContent(7,6.941326);
   hCCpi0inFV_stack_10->SetBinContent(8,6.666785);
   hCCpi0inFV_stack_10->SetBinContent(9,9.216168);
   hCCpi0inFV_stack_10->SetBinContent(10,12.65717);
   hCCpi0inFV_stack_10->SetBinContent(11,12.42363);
   hCCpi0inFV_stack_10->SetBinContent(12,13.29117);
   hCCpi0inFV_stack_10->SetBinContent(13,19.34323);
   hCCpi0inFV_stack_10->SetBinContent(14,16.9586);
   hCCpi0inFV_stack_10->SetBinContent(15,25.22097);
   hCCpi0inFV_stack_10->SetBinContent(16,34.39534);
   hCCpi0inFV_stack_10->SetBinContent(17,48.73746);
   hCCpi0inFV_stack_10->SetBinContent(18,60.25846);
   hCCpi0inFV_stack_10->SetBinContent(19,98.60091);
   hCCpi0inFV_stack_10->SetBinContent(20,159.8838);
   hCCpi0inFV_stack_10->SetBinError(1,1.753421);
   hCCpi0inFV_stack_10->SetBinError(2,1.542528);
   hCCpi0inFV_stack_10->SetBinError(3,1.51018);
   hCCpi0inFV_stack_10->SetBinError(4,1.160709);
   hCCpi0inFV_stack_10->SetBinError(5,1.488918);
   hCCpi0inFV_stack_10->SetBinError(6,1.387778);
   hCCpi0inFV_stack_10->SetBinError(7,1.333051);
   hCCpi0inFV_stack_10->SetBinError(8,1.337729);
   hCCpi0inFV_stack_10->SetBinError(9,1.484843);
   hCCpi0inFV_stack_10->SetBinError(10,1.783204);
   hCCpi0inFV_stack_10->SetBinError(11,1.710752);
   hCCpi0inFV_stack_10->SetBinError(12,1.841593);
   hCCpi0inFV_stack_10->SetBinError(13,2.2293);
   hCCpi0inFV_stack_10->SetBinError(14,2.039218);
   hCCpi0inFV_stack_10->SetBinError(15,2.597231);
   hCCpi0inFV_stack_10->SetBinError(16,2.893825);
   hCCpi0inFV_stack_10->SetBinError(17,3.510156);
   hCCpi0inFV_stack_10->SetBinError(18,3.894633);
   hCCpi0inFV_stack_10->SetBinError(19,5.013931);
   hCCpi0inFV_stack_10->SetBinError(20,6.341045);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,3.934601);
   hNCinFV_stack_11->SetBinContent(2,4.72033);
   hNCinFV_stack_11->SetBinContent(3,4.179634);
   hNCinFV_stack_11->SetBinContent(4,3.093837);
   hNCinFV_stack_11->SetBinContent(5,3.893152);
   hNCinFV_stack_11->SetBinContent(6,1.865901);
   hNCinFV_stack_11->SetBinContent(7,3.17374);
   hNCinFV_stack_11->SetBinContent(8,1.986864);
   hNCinFV_stack_11->SetBinContent(9,4.782016);
   hNCinFV_stack_11->SetBinContent(10,2.93599);
   hNCinFV_stack_11->SetBinContent(11,3.74966);
   hNCinFV_stack_11->SetBinContent(12,5.169136);
   hNCinFV_stack_11->SetBinContent(13,5.742703);
   hNCinFV_stack_11->SetBinContent(14,6.266923);
   hNCinFV_stack_11->SetBinContent(15,9.040731);
   hNCinFV_stack_11->SetBinContent(16,14.35559);
   hNCinFV_stack_11->SetBinContent(17,13.73395);
   hNCinFV_stack_11->SetBinContent(18,24.0153);
   hNCinFV_stack_11->SetBinContent(19,37.73161);
   hNCinFV_stack_11->SetBinContent(20,77.45412);
   hNCinFV_stack_11->SetBinError(1,0.9600194);
   hNCinFV_stack_11->SetBinError(2,1.069073);
   hNCinFV_stack_11->SetBinError(3,1.10758);
   hNCinFV_stack_11->SetBinError(4,1.024996);
   hNCinFV_stack_11->SetBinError(5,0.9762384);
   hNCinFV_stack_11->SetBinError(6,0.6302764);
   hNCinFV_stack_11->SetBinError(7,0.9241249);
   hNCinFV_stack_11->SetBinError(8,0.9043923);
   hNCinFV_stack_11->SetBinError(9,1.143831);
   hNCinFV_stack_11->SetBinError(10,0.8340896);
   hNCinFV_stack_11->SetBinError(11,0.9845044);
   hNCinFV_stack_11->SetBinError(12,1.112152);
   hNCinFV_stack_11->SetBinError(13,1.210681);
   hNCinFV_stack_11->SetBinError(14,1.205116);
   hNCinFV_stack_11->SetBinError(15,1.451996);
   hNCinFV_stack_11->SetBinError(16,2.013664);
   hNCinFV_stack_11->SetBinError(17,1.801841);
   hNCinFV_stack_11->SetBinError(18,2.639597);
   hNCinFV_stack_11->SetBinError(19,3.256857);
   hNCinFV_stack_11->SetBinError(20,4.892081);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,6.386863);
   hnumuCCinFV_stack_12->SetBinContent(2,3.69745);
   hnumuCCinFV_stack_12->SetBinContent(3,4.002568);
   hnumuCCinFV_stack_12->SetBinContent(4,2.887002);
   hnumuCCinFV_stack_12->SetBinContent(5,4.840013);
   hnumuCCinFV_stack_12->SetBinContent(6,4.820854);
   hnumuCCinFV_stack_12->SetBinContent(7,3.220858);
   hnumuCCinFV_stack_12->SetBinContent(8,5.375095);
   hnumuCCinFV_stack_12->SetBinContent(9,6.076214);
   hnumuCCinFV_stack_12->SetBinContent(10,6.350573);
   hnumuCCinFV_stack_12->SetBinContent(11,4.032285);
   hnumuCCinFV_stack_12->SetBinContent(12,4.049706);
   hnumuCCinFV_stack_12->SetBinContent(13,11.88837);
   hnumuCCinFV_stack_12->SetBinContent(14,10.98098);
   hnumuCCinFV_stack_12->SetBinContent(15,11.04162);
   hnumuCCinFV_stack_12->SetBinContent(16,21.46738);
   hnumuCCinFV_stack_12->SetBinContent(17,21.04366);
   hnumuCCinFV_stack_12->SetBinContent(18,24.96957);
   hnumuCCinFV_stack_12->SetBinContent(19,37.89784);
   hnumuCCinFV_stack_12->SetBinContent(20,72.02709);
   hnumuCCinFV_stack_12->SetBinError(1,1.226417);
   hnumuCCinFV_stack_12->SetBinError(2,1.077822);
   hnumuCCinFV_stack_12->SetBinError(3,0.9912487);
   hnumuCCinFV_stack_12->SetBinError(4,0.8680126);
   hnumuCCinFV_stack_12->SetBinError(5,1.148235);
   hnumuCCinFV_stack_12->SetBinError(6,1.404254);
   hnumuCCinFV_stack_12->SetBinError(7,1.293919);
   hnumuCCinFV_stack_12->SetBinError(8,1.943633);
   hnumuCCinFV_stack_12->SetBinError(9,1.244844);
   hnumuCCinFV_stack_12->SetBinError(10,1.456231);
   hnumuCCinFV_stack_12->SetBinError(11,1.116606);
   hnumuCCinFV_stack_12->SetBinError(12,1.023332);
   hnumuCCinFV_stack_12->SetBinError(13,1.905617);
   hnumuCCinFV_stack_12->SetBinError(14,1.892447);
   hnumuCCinFV_stack_12->SetBinError(15,1.754783);
   hnumuCCinFV_stack_12->SetBinError(16,3.415805);
   hnumuCCinFV_stack_12->SetBinError(17,2.388491);
   hnumuCCinFV_stack_12->SetBinError(18,2.60062);
   hnumuCCinFV_stack_12->SetBinError(19,3.735098);
   hnumuCCinFV_stack_12->SetBinError(20,4.8462);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,1.254362);
   hnueCCinFV_stack_13->SetBinContent(2,1.199902);
   hnueCCinFV_stack_13->SetBinContent(3,0.7895325);
   hnueCCinFV_stack_13->SetBinContent(4,1.416171);
   hnueCCinFV_stack_13->SetBinContent(5,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(6,0.4316896);
   hnueCCinFV_stack_13->SetBinContent(9,1.031049);
   hnueCCinFV_stack_13->SetBinContent(10,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(11,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(12,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(13,0.2998007);
   hnueCCinFV_stack_13->SetBinContent(14,1.196905);
   hnueCCinFV_stack_13->SetBinContent(15,2.122796);
   hnueCCinFV_stack_13->SetBinContent(16,1.427288);
   hnueCCinFV_stack_13->SetBinContent(17,1.37819);
   hnueCCinFV_stack_13->SetBinContent(18,2.720229);
   hnueCCinFV_stack_13->SetBinContent(19,2.391631);
   hnueCCinFV_stack_13->SetBinContent(20,14.03587);
   hnueCCinFV_stack_13->SetBinError(1,0.6813947);
   hnueCCinFV_stack_13->SetBinError(2,0.4902584);
   hnueCCinFV_stack_13->SetBinError(3,0.457675);
   hnueCCinFV_stack_13->SetBinError(4,1.128487);
   hnueCCinFV_stack_13->SetBinError(5,0.3025491);
   hnueCCinFV_stack_13->SetBinError(6,0.4316896);
   hnueCCinFV_stack_13->SetBinError(9,0.5334159);
   hnueCCinFV_stack_13->SetBinError(10,0.1950249);
   hnueCCinFV_stack_13->SetBinError(11,0.2770047);
   hnueCCinFV_stack_13->SetBinError(12,0.2451269);
   hnueCCinFV_stack_13->SetBinError(13,0.2998007);
   hnueCCinFV_stack_13->SetBinError(14,0.6198054);
   hnueCCinFV_stack_13->SetBinError(15,1.343642);
   hnueCCinFV_stack_13->SetBinError(16,0.6843119);
   hnueCCinFV_stack_13->SetBinError(17,0.6653251);
   hnueCCinFV_stack_13->SetBinError(18,1.014724);
   hnueCCinFV_stack_13->SetBinError(19,0.7320601);
   hnueCCinFV_stack_13->SetBinError(20,2.653185);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);
   hmcerror__11->SetBinContent(1,82.31023);
   hmcerror__11->SetBinContent(2,67.56458);
   hmcerror__11->SetBinContent(3,62.60251);
   hmcerror__11->SetBinContent(4,59.25447);
   hmcerror__11->SetBinContent(5,64.22186);
   hmcerror__11->SetBinContent(6,60.97082);
   hmcerror__11->SetBinContent(7,51.34666);
   hmcerror__11->SetBinContent(8,60.68907);
   hmcerror__11->SetBinContent(9,77.74127);
   hmcerror__11->SetBinContent(10,82.40167);
   hmcerror__11->SetBinContent(11,93.37064);
   hmcerror__11->SetBinContent(12,107.0167);
   hmcerror__11->SetBinContent(13,130.5004);
   hmcerror__11->SetBinContent(14,151.4984);
   hmcerror__11->SetBinContent(15,185.7202);
   hmcerror__11->SetBinContent(16,248.909);
   hmcerror__11->SetBinContent(17,309.8441);
   hmcerror__11->SetBinContent(18,390.5043);
   hmcerror__11->SetBinContent(19,554.2015);
   hmcerror__11->SetBinContent(20,888.7912);
   hmcerror__11->SetBinError(1,30.64693);
   hmcerror__11->SetBinError(2,19.89769);
   hmcerror__11->SetBinError(3,20.96484);
   hmcerror__11->SetBinError(4,20.04408);
   hmcerror__11->SetBinError(5,21.08464);
   hmcerror__11->SetBinError(6,22.51654);
   hmcerror__11->SetBinError(7,16.71188);
   hmcerror__11->SetBinError(8,20.70622);
   hmcerror__11->SetBinError(9,22.96667);
   hmcerror__11->SetBinError(10,26.36814);
   hmcerror__11->SetBinError(11,24.89207);
   hmcerror__11->SetBinError(12,32.28802);
   hmcerror__11->SetBinError(13,40.15665);
   hmcerror__11->SetBinError(14,41.12835);
   hmcerror__11->SetBinError(15,52.24024);
   hmcerror__11->SetBinError(16,64.6221);
   hmcerror__11->SetBinError(17,83.44712);
   hmcerror__11->SetBinError(18,101.7764);
   hmcerror__11->SetBinError(19,125.277);
   hmcerror__11->SetBinError(20,211.6782);
   hmcerror__11->SetBinError(21,0.3895343);
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
   
   Double_t _fx3013[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3013[20] = {
   94,
   67,
   61,
   57,
   57,
   68,
   73,
   87,
   72,
   81,
   81,
   96,
   132,
   172,
   162,
   259,
   297,
   413,
   592,
   902};
   Double_t _felx3013[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3013[20] = {
   9.8173,
   8.3119,
   7.9383,
   7.679,
   7.679,
   8.3726,
   8.6693,
   9.4503,
   8.6108,
   9.1239,
   9.1239,
   9.9196,
   11.48913,
   13.11488,
   12.72792,
   16.09348,
   17.23369,
   20.3224,
   24.33105,
   30.03331};
   Double_t _fehx3013[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3013[20] = {
   9.616,
   8.1094,
   7.7354,
   7.4757,
   7.4757,
   8.1701,
   8.4672,
   9.2488,
   8.4085,
   8.9221,
   8.9221,
   9.718,
   11.48913,
   13.11488,
   12.72792,
   16.09348,
   17.23369,
   20.3224,
   24.33105,
   30.03331};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-1.2,1.2);
   Graph_Graph3013->SetMinimum(44.3889);
   Graph_Graph3013->SetMaximum(1020.305);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3823.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 97.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 476.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  110.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  7.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1154.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  237.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 579.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 231.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 267.1","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3014[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3014[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3014[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3014[20] = {
   0.3723344,
   0.2944988,
   0.3348881,
   0.3382712,
   0.3283094,
   0.3693002,
   0.3254716,
   0.3411853,
   0.2954245,
   0.3199952,
   0.2665942,
   0.3017101,
   0.3077128,
   0.2714771,
   0.2812846,
   0.2596214,
   0.2693197,
   0.260628,
   0.2260495,
   0.2381641};
   Double_t _fehx3014[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3014[20] = {
   0.3723344,
   0.2944988,
   0.3348881,
   0.3382712,
   0.3283094,
   0.3693002,
   0.3254716,
   0.3411853,
   0.2954245,
   0.3199952,
   0.2665942,
   0.3017101,
   0.3077128,
   0.2714771,
   0.2812846,
   0.2596214,
   0.2693197,
   0.260628,
   0.2260495,
   0.2381641};
   grae = new TGraphAsymmErrors(20,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-1.2,1.2);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} cos #theta");
   Graph_Graph3014->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3015[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3015[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3015[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3015[20] = {
   0.2125452,
   0.1950283,
   0.2007061,
   0.2087194,
   0.2191892,
   0.2071427,
   0.2188898,
   0.203259,
   0.1898364,
   0.2098195,
   0.2003456,
   0.2147266,
   0.2268189,
   0.2216079,
   0.2414351,
   0.2302032,
   0.2360419,
   0.2141292,
   0.2068907,
   0.2114535};
   Double_t _fehx3015[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3015[20] = {
   0.2125452,
   0.1950283,
   0.2007061,
   0.2087194,
   0.2191892,
   0.2071427,
   0.2188898,
   0.203259,
   0.1898364,
   0.2098195,
   0.2003456,
   0.2147266,
   0.2268189,
   0.2216079,
   0.2414351,
   0.2302032,
   0.2360419,
   0.2141292,
   0.2068907,
   0.2114535};
   grae = new TGraphAsymmErrors(20,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-1.2,1.2);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3016[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3016[20] = {
   1.142021,
   0.9916439,
   0.9744018,
   0.9619527,
   0.8875482,
   1.115288,
   1.421709,
   1.433537,
   0.926149,
   0.9829898,
   0.8675104,
   0.8970561,
   1.011491,
   1.135325,
   0.8722797,
   1.040541,
   0.9585467,
   1.057607,
   1.068203,
   1.014862};
   Double_t _felx3016[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3016[20] = {
   0.1192719,
   0.1230216,
   0.1268048,
   0.1295936,
   0.1195699,
   0.1373214,
   0.1688386,
   0.1557167,
   0.1107623,
   0.1107247,
   0.09771702,
   0.09269205,
   0.08803901,
   0.08656775,
   0.06853277,
   0.06465608,
   0.05562052,
   0.05204143,
   0.04390289,
   0.03379119};
   Double_t _fehx3016[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3016[20] = {
   0.1168263,
   0.1200244,
   0.1235637,
   0.1261626,
   0.1164043,
   0.1340002,
   0.1649027,
   0.1523965,
   0.1081601,
   0.1082757,
   0.09555574,
   0.09080824,
   0.08803901,
   0.08656775,
   0.06853277,
   0.06465608,
   0.05562052,
   0.05204143,
   0.04390289,
   0.03379119};
   grae = new TGraphAsymmErrors(20,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-1.2,1.2);
   Graph_Graph3016->SetMinimum(0.686115);
   Graph_Graph3016->SetMaximum(1.668475);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_costheta_all",20,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
