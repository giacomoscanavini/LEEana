#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Sat Oct 22 21:57:09 2022) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-7.692308,-10.08,56.41026,1114.636);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmc__16->SetBinContent(1,458.1129);
   hmc__16->SetBinContent(2,101.7942);
   hmc__16->SetBinContent(3,114.0851);
   hmc__16->SetBinContent(4,112.8139);
   hmc__16->SetBinContent(5,115.6627);
   hmc__16->SetBinContent(6,117.3133);
   hmc__16->SetBinContent(7,116.3101);
   hmc__16->SetBinContent(8,108.2668);
   hmc__16->SetBinContent(9,110.4303);
   hmc__16->SetBinContent(10,104.3163);
   hmc__16->SetBinContent(11,93.8709);
   hmc__16->SetBinContent(12,98.623);
   hmc__16->SetBinContent(13,84.29353);
   hmc__16->SetBinContent(14,82.08085);
   hmc__16->SetBinContent(15,79.01676);
   hmc__16->SetBinContent(16,63.96918);
   hmc__16->SetBinContent(17,63.74029);
   hmc__16->SetBinContent(18,59.06413);
   hmc__16->SetBinContent(19,54.79005);
   hmc__16->SetBinContent(20,48.89071);
   hmc__16->SetBinContent(21,608.4509);
   hmc__16->SetBinError(1,109.8424);
   hmc__16->SetBinError(2,35.69994);
   hmc__16->SetBinError(3,30.31564);
   hmc__16->SetBinError(4,31.19486);
   hmc__16->SetBinError(5,32.59683);
   hmc__16->SetBinError(6,34.51607);
   hmc__16->SetBinError(7,32.69992);
   hmc__16->SetBinError(8,33.61231);
   hmc__16->SetBinError(9,30.7552);
   hmc__16->SetBinError(10,36.68989);
   hmc__16->SetBinError(11,31.8226);
   hmc__16->SetBinError(12,28.66408);
   hmc__16->SetBinError(13,26.12977);
   hmc__16->SetBinError(14,23.00495);
   hmc__16->SetBinError(15,23.59948);
   hmc__16->SetBinError(16,23.34664);
   hmc__16->SetBinError(17,19.7475);
   hmc__16->SetBinError(18,17.38077);
   hmc__16->SetBinError(19,16.07076);
   hmc__16->SetBinError(20,15.21444);
   hmc__16->SetBinError(21,135.9076);
   hmc__16->SetMinimum(-10.08);
   hmc__16->SetMaximum(1058.4);
   hmc__16->SetEntries(2916.026);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",20,0,50);
   hs6_stack_6->SetMinimum(-1.683776e-08);
   hs6_stack_6->SetMaximum(481.0186);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,11.11606);
   hbadmatch_stack_1->SetBinContent(2,1.187287);
   hbadmatch_stack_1->SetBinContent(3,0.4372683);
   hbadmatch_stack_1->SetBinContent(4,3.013223);
   hbadmatch_stack_1->SetBinContent(5,1.524652);
   hbadmatch_stack_1->SetBinContent(6,2.720633);
   hbadmatch_stack_1->SetBinContent(7,2.069019);
   hbadmatch_stack_1->SetBinContent(8,0.9249059);
   hbadmatch_stack_1->SetBinContent(9,3.094319);
   hbadmatch_stack_1->SetBinContent(10,2.691302);
   hbadmatch_stack_1->SetBinContent(11,1.164822);
   hbadmatch_stack_1->SetBinContent(12,2.905471);
   hbadmatch_stack_1->SetBinContent(13,1.098891);
   hbadmatch_stack_1->SetBinContent(14,1.152722);
   hbadmatch_stack_1->SetBinContent(15,3.833535);
   hbadmatch_stack_1->SetBinContent(16,0.6919693);
   hbadmatch_stack_1->SetBinContent(17,1.497794);
   hbadmatch_stack_1->SetBinContent(18,1.174803);
   hbadmatch_stack_1->SetBinContent(19,0.9133476);
   hbadmatch_stack_1->SetBinContent(20,0.9303237);
   hbadmatch_stack_1->SetBinContent(21,20.45835);
   hbadmatch_stack_1->SetBinError(1,1.767987);
   hbadmatch_stack_1->SetBinError(2,0.4847501);
   hbadmatch_stack_1->SetBinError(3,0.3107453);
   hbadmatch_stack_1->SetBinError(4,0.8888031);
   hbadmatch_stack_1->SetBinError(5,0.5745975);
   hbadmatch_stack_1->SetBinError(6,0.8016006);
   hbadmatch_stack_1->SetBinError(7,0.9316809);
   hbadmatch_stack_1->SetBinError(8,0.4792801);
   hbadmatch_stack_1->SetBinError(9,0.9396944);
   hbadmatch_stack_1->SetBinError(10,0.8030805);
   hbadmatch_stack_1->SetBinError(11,0.6035003);
   hbadmatch_stack_1->SetBinError(12,1.135186);
   hbadmatch_stack_1->SetBinError(13,0.6376625);
   hbadmatch_stack_1->SetBinError(14,0.5305313);
   hbadmatch_stack_1->SetBinError(15,1.828541);
   hbadmatch_stack_1->SetBinError(16,0.3534139);
   hbadmatch_stack_1->SetBinError(17,0.6319954);
   hbadmatch_stack_1->SetBinError(18,0.5989852);
   hbadmatch_stack_1->SetBinError(19,0.412709);
   hbadmatch_stack_1->SetBinError(20,0.4814682);
   hbadmatch_stack_1->SetBinError(21,2.853512);
   hbadmatch_stack_1->SetEntries(254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hext_stack_2->SetBinContent(1,49.80022);
   hext_stack_2->SetBinContent(2,6.903363);
   hext_stack_2->SetBinContent(3,8.242843);
   hext_stack_2->SetBinContent(4,12.95322);
   hext_stack_2->SetBinContent(5,8.435968);
   hext_stack_2->SetBinContent(6,13.15951);
   hext_stack_2->SetBinContent(7,11.83162);
   hext_stack_2->SetBinContent(8,8.649442);
   hext_stack_2->SetBinContent(9,11.15247);
   hext_stack_2->SetBinContent(10,5.269787);
   hext_stack_2->SetBinContent(11,6.564605);
   hext_stack_2->SetBinContent(12,14.18177);
   hext_stack_2->SetBinContent(13,10.89868);
   hext_stack_2->SetBinContent(14,9.552021);
   hext_stack_2->SetBinContent(15,10.09707);
   hext_stack_2->SetBinContent(16,3.654981);
   hext_stack_2->SetBinContent(17,7.351852);
   hext_stack_2->SetBinContent(18,6.870233);
   hext_stack_2->SetBinContent(19,5.344809);
   hext_stack_2->SetBinContent(20,6.000783);
   hext_stack_2->SetBinContent(21,61.40955);
   hext_stack_2->SetBinError(1,4.815687);
   hext_stack_2->SetBinError(2,1.593813);
   hext_stack_2->SetBinError(3,1.972853);
   hext_stack_2->SetBinError(4,2.370806);
   hext_stack_2->SetBinError(5,1.790955);
   hext_stack_2->SetBinError(6,2.582997);
   hext_stack_2->SetBinError(7,2.292135);
   hext_stack_2->SetBinError(8,2.014317);
   hext_stack_2->SetBinError(9,2.318788);
   hext_stack_2->SetBinError(10,1.442273);
   hext_stack_2->SetBinError(11,1.684461);
   hext_stack_2->SetBinError(12,2.778011);
   hext_stack_2->SetBinError(13,2.323297);
   hext_stack_2->SetBinError(14,2.060826);
   hext_stack_2->SetBinError(15,2.236289);
   hext_stack_2->SetBinError(16,1.163091);
   hext_stack_2->SetBinError(17,1.906971);
   hext_stack_2->SetBinError(18,1.791626);
   hext_stack_2->SetBinError(19,1.530177);
   hext_stack_2->SetBinError(20,1.533202);
   hext_stack_2->SetBinError(21,5.227287);
   hext_stack_2->SetEntries(657);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,6.512824);
   hdirt_stack_3->SetBinContent(2,0.2188956);
   hdirt_stack_3->SetBinContent(3,2.120821);
   hdirt_stack_3->SetBinContent(4,1.675779);
   hdirt_stack_3->SetBinContent(5,2.864389);
   hdirt_stack_3->SetBinContent(6,0.7139341);
   hdirt_stack_3->SetBinContent(7,1.832593);
   hdirt_stack_3->SetBinContent(8,1.907808);
   hdirt_stack_3->SetBinContent(9,2.187491);
   hdirt_stack_3->SetBinContent(10,1.085724);
   hdirt_stack_3->SetBinContent(11,0.6951543);
   hdirt_stack_3->SetBinContent(12,0.8760131);
   hdirt_stack_3->SetBinContent(13,1.869554);
   hdirt_stack_3->SetBinContent(14,0.4780661);
   hdirt_stack_3->SetBinContent(15,0.501847);
   hdirt_stack_3->SetBinContent(16,0.9328297);
   hdirt_stack_3->SetBinContent(17,0.3381872);
   hdirt_stack_3->SetBinContent(18,0.6143302);
   hdirt_stack_3->SetBinContent(19,0.624517);
   hdirt_stack_3->SetBinContent(20,0.4745014);
   hdirt_stack_3->SetBinContent(21,9.282612);
   hdirt_stack_3->SetBinError(1,1.300543);
   hdirt_stack_3->SetBinError(2,0.2188956);
   hdirt_stack_3->SetBinError(3,0.7758211);
   hdirt_stack_3->SetBinError(4,0.6583546);
   hdirt_stack_3->SetBinError(5,0.9018902);
   hdirt_stack_3->SetBinError(6,0.3660028);
   hdirt_stack_3->SetBinError(7,0.7368372);
   hdirt_stack_3->SetBinError(8,0.9006601);
   hdirt_stack_3->SetBinError(9,0.728541);
   hdirt_stack_3->SetBinError(10,0.5139736);
   hdirt_stack_3->SetBinError(11,0.4258516);
   hdirt_stack_3->SetBinError(12,0.5415145);
   hdirt_stack_3->SetBinError(13,1.137129);
   hdirt_stack_3->SetBinError(14,0.3392412);
   hdirt_stack_3->SetBinError(15,0.3757062);
   hdirt_stack_3->SetBinError(16,0.4264661);
   hdirt_stack_3->SetBinError(17,0.3381872);
   hdirt_stack_3->SetBinError(18,0.39051);
   hdirt_stack_3->SetBinError(19,0.3942269);
   hdirt_stack_3->SetBinError(20,0.3365258);
   hdirt_stack_3->SetBinError(21,1.638739);
   hdirt_stack_3->SetEntries(156);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,47.3178);
   houtFV_stack_4->SetBinContent(2,9.238381);
   houtFV_stack_4->SetBinContent(3,10.02358);
   houtFV_stack_4->SetBinContent(4,11.13601);
   houtFV_stack_4->SetBinContent(5,10.77639);
   houtFV_stack_4->SetBinContent(6,10.99359);
   houtFV_stack_4->SetBinContent(7,10.97542);
   houtFV_stack_4->SetBinContent(8,7.990757);
   houtFV_stack_4->SetBinContent(9,11.99597);
   houtFV_stack_4->SetBinContent(10,9.622654);
   houtFV_stack_4->SetBinContent(11,9.101118);
   houtFV_stack_4->SetBinContent(12,9.499695);
   houtFV_stack_4->SetBinContent(13,7.919826);
   houtFV_stack_4->SetBinContent(14,7.13903);
   houtFV_stack_4->SetBinContent(15,11.15479);
   houtFV_stack_4->SetBinContent(16,8.197899);
   houtFV_stack_4->SetBinContent(17,6.957554);
   houtFV_stack_4->SetBinContent(18,8.442713);
   houtFV_stack_4->SetBinContent(19,4.728489);
   houtFV_stack_4->SetBinContent(20,6.485095);
   houtFV_stack_4->SetBinContent(21,64.60547);
   houtFV_stack_4->SetBinError(1,3.503193);
   houtFV_stack_4->SetBinError(2,1.527657);
   houtFV_stack_4->SetBinError(3,1.483079);
   houtFV_stack_4->SetBinError(4,1.629825);
   houtFV_stack_4->SetBinError(5,1.701563);
   houtFV_stack_4->SetBinError(6,1.707097);
   houtFV_stack_4->SetBinError(7,1.646422);
   houtFV_stack_4->SetBinError(8,1.461925);
   houtFV_stack_4->SetBinError(9,1.665256);
   houtFV_stack_4->SetBinError(10,1.489542);
   houtFV_stack_4->SetBinError(11,1.457229);
   houtFV_stack_4->SetBinError(12,1.556305);
   houtFV_stack_4->SetBinError(13,1.4119);
   houtFV_stack_4->SetBinError(14,1.272707);
   houtFV_stack_4->SetBinError(15,1.721891);
   houtFV_stack_4->SetBinError(16,1.461883);
   houtFV_stack_4->SetBinError(17,1.311269);
   houtFV_stack_4->SetBinError(18,1.517134);
   houtFV_stack_4->SetBinError(19,1.023551);
   houtFV_stack_4->SetBinError(20,1.24939);
   houtFV_stack_4->SetBinError(21,4.04907);
   houtFV_stack_4->SetEntries(1301);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,11.12296);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.061591);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.254053);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.416019);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.317442);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.14519);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.961407);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.925161);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.201243);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.06785);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,3.065689);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,2.95115);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.323781);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.997766);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.81728);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,3.102557);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,2.445815);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,1.844328);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.8887);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.626023);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,22.8455);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.239449);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.8421841);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7645208);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.7625845);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7312699);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.739771);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6250919);
   hNCpi0inFVcoh_stack_5->SetBinError(8,1.037339);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6087386);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.5416581);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.8007816);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7406771);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.4851543);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.622368);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.412046);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.689676);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6787646);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3557717);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.4773816);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7133379);
   hNCpi0inFVcoh_stack_5->SetBinError(21,1.749424);
   hNCpi0inFVcoh_stack_5->SetEntries(1582);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.966767);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.9532599);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1555753);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2563833);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.04621657);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.387592);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1692908);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2879928);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.08195394);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.2382372);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.3720445);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1105049);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1702766);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1950615);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2061096);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.07124697);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.4582561);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.164949);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.1255435);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.05127166);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.5871896);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2392103);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.384705);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.06984828);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1352187);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03368814);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2111566);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.07248774);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.178814);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03988994);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1400147);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.263574);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.05672345);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.074405);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.106702);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1172084);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04725523);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.242294);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1151649);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.06135201);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.0392955);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1704863);
   hNCpi0inFVqe_stack_6->SetEntries(157);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,157.0643);
   hNCpi0inFVres_stack_7->SetBinContent(2,41.9229);
   hNCpi0inFVres_stack_7->SetBinContent(3,47.10112);
   hNCpi0inFVres_stack_7->SetBinContent(4,41.35239);
   hNCpi0inFVres_stack_7->SetBinContent(5,45.46892);
   hNCpi0inFVres_stack_7->SetBinContent(6,47.47752);
   hNCpi0inFVres_stack_7->SetBinContent(7,44.35527);
   hNCpi0inFVres_stack_7->SetBinContent(8,47.99329);
   hNCpi0inFVres_stack_7->SetBinContent(9,42.17868);
   hNCpi0inFVres_stack_7->SetBinContent(10,43.22546);
   hNCpi0inFVres_stack_7->SetBinContent(11,37.75787);
   hNCpi0inFVres_stack_7->SetBinContent(12,37.00275);
   hNCpi0inFVres_stack_7->SetBinContent(13,33.02901);
   hNCpi0inFVres_stack_7->SetBinContent(14,30.68954);
   hNCpi0inFVres_stack_7->SetBinContent(15,27.70296);
   hNCpi0inFVres_stack_7->SetBinContent(16,24.28216);
   hNCpi0inFVres_stack_7->SetBinContent(17,21.16994);
   hNCpi0inFVres_stack_7->SetBinContent(18,19.83135);
   hNCpi0inFVres_stack_7->SetBinContent(19,19.07426);
   hNCpi0inFVres_stack_7->SetBinContent(20,18.14966);
   hNCpi0inFVres_stack_7->SetBinContent(21,210.9702);
   hNCpi0inFVres_stack_7->SetBinError(1,4.282353);
   hNCpi0inFVres_stack_7->SetBinError(2,2.290258);
   hNCpi0inFVres_stack_7->SetBinError(3,2.370576);
   hNCpi0inFVres_stack_7->SetBinError(4,2.110836);
   hNCpi0inFVres_stack_7->SetBinError(5,2.326495);
   hNCpi0inFVres_stack_7->SetBinError(6,2.393101);
   hNCpi0inFVres_stack_7->SetBinError(7,2.205737);
   hNCpi0inFVres_stack_7->SetBinError(8,2.471621);
   hNCpi0inFVres_stack_7->SetBinError(9,2.267252);
   hNCpi0inFVres_stack_7->SetBinError(10,2.353921);
   hNCpi0inFVres_stack_7->SetBinError(11,2.055489);
   hNCpi0inFVres_stack_7->SetBinError(12,2.119124);
   hNCpi0inFVres_stack_7->SetBinError(13,1.957265);
   hNCpi0inFVres_stack_7->SetBinError(14,1.954331);
   hNCpi0inFVres_stack_7->SetBinError(15,1.841552);
   hNCpi0inFVres_stack_7->SetBinError(16,1.624821);
   hNCpi0inFVres_stack_7->SetBinError(17,1.564861);
   hNCpi0inFVres_stack_7->SetBinError(18,1.511196);
   hNCpi0inFVres_stack_7->SetBinError(19,1.502745);
   hNCpi0inFVres_stack_7->SetBinError(20,1.412667);
   hNCpi0inFVres_stack_7->SetBinError(21,5.082864);
   hNCpi0inFVres_stack_7->SetEntries(21515);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,32.15236);
   hNCpi0inFVdis_stack_8->SetBinContent(2,7.634749);
   hNCpi0inFVdis_stack_8->SetBinContent(3,9.384651);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.27705);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.990578);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.760102);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.546133);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.667397);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.398853);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.470031);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.595699);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.198317);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.178508);
   hNCpi0inFVdis_stack_8->SetBinContent(14,5.199751);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.130728);
   hNCpi0inFVdis_stack_8->SetBinContent(16,4.683152);
   hNCpi0inFVdis_stack_8->SetBinContent(17,4.828266);
   hNCpi0inFVdis_stack_8->SetBinContent(18,6.420144);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.266691);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.015184);
   hNCpi0inFVdis_stack_8->SetBinContent(21,38.9638);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.094802);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.8713984);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.9826883);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.209759);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.003421);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.013899);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7664784);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9054079);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8782198);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.052593);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.000416);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9058284);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9875371);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.7816825);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9502539);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8674172);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7823196);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.061308);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7230753);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5881005);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.061005);
   hNCpi0inFVdis_stack_8->SetEntries(4130);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.07927215);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1883562);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.06548985);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1365517);
   hNCpi0inFVmec_stack_9->SetEntries(10);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,61.86598);
   hCCpi0inFV_stack_10->SetBinContent(2,14.43988);
   hCCpi0inFV_stack_10->SetBinContent(3,15.08784);
   hCCpi0inFV_stack_10->SetBinContent(4,13.58763);
   hCCpi0inFV_stack_10->SetBinContent(5,17.72917);
   hCCpi0inFV_stack_10->SetBinContent(6,15.45335);
   hCCpi0inFV_stack_10->SetBinContent(7,19.87349);
   hCCpi0inFV_stack_10->SetBinContent(8,15.74074);
   hCCpi0inFV_stack_10->SetBinContent(9,14.22596);
   hCCpi0inFV_stack_10->SetBinContent(10,17.56941);
   hCCpi0inFV_stack_10->SetBinContent(11,16.51007);
   hCCpi0inFV_stack_10->SetBinContent(12,13.18297);
   hCCpi0inFV_stack_10->SetBinContent(13,12.60843);
   hCCpi0inFV_stack_10->SetBinContent(14,12.24535);
   hCCpi0inFV_stack_10->SetBinContent(15,10.72177);
   hCCpi0inFV_stack_10->SetBinContent(16,7.872368);
   hCCpi0inFV_stack_10->SetBinContent(17,10.1017);
   hCCpi0inFV_stack_10->SetBinContent(18,6.982552);
   hCCpi0inFV_stack_10->SetBinContent(19,6.798583);
   hCCpi0inFV_stack_10->SetBinContent(20,7.148888);
   hCCpi0inFV_stack_10->SetBinContent(21,82.39063);
   hCCpi0inFV_stack_10->SetBinError(1,3.92086);
   hCCpi0inFV_stack_10->SetBinError(2,1.879817);
   hCCpi0inFV_stack_10->SetBinError(3,1.936761);
   hCCpi0inFV_stack_10->SetBinError(4,1.830535);
   hCCpi0inFV_stack_10->SetBinError(5,2.122546);
   hCCpi0inFV_stack_10->SetBinError(6,1.953578);
   hCCpi0inFV_stack_10->SetBinError(7,2.276469);
   hCCpi0inFV_stack_10->SetBinError(8,2.008068);
   hCCpi0inFV_stack_10->SetBinError(9,1.851117);
   hCCpi0inFV_stack_10->SetBinError(10,2.149461);
   hCCpi0inFV_stack_10->SetBinError(11,1.995461);
   hCCpi0inFV_stack_10->SetBinError(12,1.86211);
   hCCpi0inFV_stack_10->SetBinError(13,1.738216);
   hCCpi0inFV_stack_10->SetBinError(14,1.782993);
   hCCpi0inFV_stack_10->SetBinError(15,1.64036);
   hCCpi0inFV_stack_10->SetBinError(16,1.373658);
   hCCpi0inFV_stack_10->SetBinError(17,1.617606);
   hCCpi0inFV_stack_10->SetBinError(18,1.293227);
   hCCpi0inFV_stack_10->SetBinError(19,1.256225);
   hCCpi0inFV_stack_10->SetBinError(20,1.333637);
   hCCpi0inFV_stack_10->SetBinError(21,4.520603);
   hCCpi0inFV_stack_10->SetEntries(1685);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,34.42479);
   hNCinFV_stack_11->SetBinContent(2,7.898848);
   hNCinFV_stack_11->SetBinContent(3,9.646107);
   hNCinFV_stack_11->SetBinContent(4,5.773372);
   hNCinFV_stack_11->SetBinContent(5,8.082791);
   hNCinFV_stack_11->SetBinContent(6,7.817381);
   hNCinFV_stack_11->SetBinContent(7,7.546404);
   hNCinFV_stack_11->SetBinContent(8,7.409777);
   hNCinFV_stack_11->SetBinContent(9,7.115314);
   hNCinFV_stack_11->SetBinContent(10,7.779081);
   hNCinFV_stack_11->SetBinContent(11,5.804155);
   hNCinFV_stack_11->SetBinContent(12,5.566209);
   hNCinFV_stack_11->SetBinContent(13,4.646848);
   hNCinFV_stack_11->SetBinContent(14,7.19919);
   hNCinFV_stack_11->SetBinContent(15,4.417389);
   hNCinFV_stack_11->SetBinContent(16,4.590839);
   hNCinFV_stack_11->SetBinContent(17,4.044177);
   hNCinFV_stack_11->SetBinContent(18,4.166624);
   hNCinFV_stack_11->SetBinContent(19,6.890638);
   hNCinFV_stack_11->SetBinContent(20,2.660413);
   hNCinFV_stack_11->SetBinContent(21,43.91649);
   hNCinFV_stack_11->SetBinError(1,3.292276);
   hNCinFV_stack_11->SetBinError(2,1.499886);
   hNCinFV_stack_11->SetBinError(3,1.761175);
   hNCinFV_stack_11->SetBinError(4,1.170749);
   hNCinFV_stack_11->SetBinError(5,1.484436);
   hNCinFV_stack_11->SetBinError(6,1.629088);
   hNCinFV_stack_11->SetBinError(7,1.491124);
   hNCinFV_stack_11->SetBinError(8,1.359515);
   hNCinFV_stack_11->SetBinError(9,1.359849);
   hNCinFV_stack_11->SetBinError(10,1.51706);
   hNCinFV_stack_11->SetBinError(11,1.14569);
   hNCinFV_stack_11->SetBinError(12,1.194089);
   hNCinFV_stack_11->SetBinError(13,1.168603);
   hNCinFV_stack_11->SetBinError(14,1.374444);
   hNCinFV_stack_11->SetBinError(15,1.01458);
   hNCinFV_stack_11->SetBinError(16,1.061562);
   hNCinFV_stack_11->SetBinError(17,0.9765415);
   hNCinFV_stack_11->SetBinError(18,1.02519);
   hNCinFV_stack_11->SetBinError(19,1.588828);
   hNCinFV_stack_11->SetBinError(20,0.8420617);
   hNCinFV_stack_11->SetBinError(21,3.395729);
   hNCinFV_stack_11->SetEntries(844);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,41.77549);
   hnumuCCinFV_stack_12->SetBinContent(2,6.924305);
   hnumuCCinFV_stack_12->SetBinContent(3,5.756974);
   hnumuCCinFV_stack_12->SetBinContent(4,6.768705);
   hnumuCCinFV_stack_12->SetBinContent(5,7.426171);
   hnumuCCinFV_stack_12->SetBinContent(6,4.930242);
   hnumuCCinFV_stack_12->SetBinContent(7,5.809225);
   hnumuCCinFV_stack_12->SetBinContent(8,3.148439);
   hnumuCCinFV_stack_12->SetBinContent(9,4.754189);
   hnumuCCinFV_stack_12->SetBinContent(10,4.153715);
   hnumuCCinFV_stack_12->SetBinContent(11,4.889896);
   hnumuCCinFV_stack_12->SetBinContent(12,5.756397);
   hnumuCCinFV_stack_12->SetBinContent(13,2.353002);
   hnumuCCinFV_stack_12->SetBinContent(14,4.554156);
   hnumuCCinFV_stack_12->SetBinContent(15,1.452133);
   hnumuCCinFV_stack_12->SetBinContent(16,4.620347);
   hnumuCCinFV_stack_12->SetBinContent(17,4.329071);
   hnumuCCinFV_stack_12->SetBinContent(18,1.915962);
   hnumuCCinFV_stack_12->SetBinContent(19,3.464564);
   hnumuCCinFV_stack_12->SetBinContent(20,2.15354);
   hnumuCCinFV_stack_12->SetBinContent(21,42.08068);
   hnumuCCinFV_stack_12->SetBinError(1,3.639458);
   hnumuCCinFV_stack_12->SetBinError(2,1.604598);
   hnumuCCinFV_stack_12->SetBinError(3,1.180638);
   hnumuCCinFV_stack_12->SetBinError(4,1.416349);
   hnumuCCinFV_stack_12->SetBinError(5,2.373288);
   hnumuCCinFV_stack_12->SetBinError(6,1.134899);
   hnumuCCinFV_stack_12->SetBinError(7,1.233216);
   hnumuCCinFV_stack_12->SetBinError(8,0.8960411);
   hnumuCCinFV_stack_12->SetBinError(9,1.105523);
   hnumuCCinFV_stack_12->SetBinError(10,1.097439);
   hnumuCCinFV_stack_12->SetBinError(11,1.130741);
   hnumuCCinFV_stack_12->SetBinError(12,1.480624);
   hnumuCCinFV_stack_12->SetBinError(13,0.765053);
   hnumuCCinFV_stack_12->SetBinError(14,1.090012);
   hnumuCCinFV_stack_12->SetBinError(15,0.5510131);
   hnumuCCinFV_stack_12->SetBinError(16,1.479729);
   hnumuCCinFV_stack_12->SetBinError(17,1.066423);
   hnumuCCinFV_stack_12->SetBinError(18,0.6516503);
   hnumuCCinFV_stack_12->SetBinError(19,0.9613675);
   hnumuCCinFV_stack_12->SetBinError(20,0.7384418);
   hnumuCCinFV_stack_12->SetBinError(21,3.723256);
   hnumuCCinFV_stack_12->SetEntries(662);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,3.914042);
   hnueCCinFV_stack_13->SetBinContent(2,0.3934356);
   hnueCCinFV_stack_13->SetBinContent(3,1.874292);
   hnueCCinFV_stack_13->SetBinContent(4,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(6,0.7542815);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(8,0.6211463);
   hnueCCinFV_stack_13->SetBinContent(9,2.028171);
   hnueCCinFV_stack_13->SetBinContent(10,1.143066);
   hnueCCinFV_stack_13->SetBinContent(11,0.3315399);
   hnueCCinFV_stack_13->SetBinContent(12,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,0.678202);
   hnueCCinFV_stack_13->SetBinContent(15,0.962329);
   hnueCCinFV_stack_13->SetBinContent(16,1.268828);
   hnueCCinFV_stack_13->SetBinContent(17,0.2176802);
   hnueCCinFV_stack_13->SetBinContent(18,0.6361428);
   hnueCCinFV_stack_13->SetBinContent(19,0.6699017);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,10.7521);
   hnueCCinFV_stack_13->SetBinError(1,1.442979);
   hnueCCinFV_stack_13->SetBinError(2,0.2781975);
   hnueCCinFV_stack_13->SetBinError(3,0.8314997);
   hnueCCinFV_stack_13->SetBinError(4,0.3397478);
   hnueCCinFV_stack_13->SetBinError(6,0.4416112);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(8,0.4678018);
   hnueCCinFV_stack_13->SetBinError(9,1.352714);
   hnueCCinFV_stack_13->SetBinError(10,0.5752823);
   hnueCCinFV_stack_13->SetBinError(11,0.3266876);
   hnueCCinFV_stack_13->SetBinError(12,0.2770047);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.5201215);
   hnueCCinFV_stack_13->SetBinError(15,0.5601026);
   hnueCCinFV_stack_13->SetBinError(16,0.743831);
   hnueCCinFV_stack_13->SetBinError(17,0.2176802);
   hnueCCinFV_stack_13->SetBinError(18,0.3692352);
   hnueCCinFV_stack_13->SetBinError(19,0.3925627);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,2.37487);
   hnueCCinFV_stack_13->SetEntries(97);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);
   hmcerror__17->SetBinContent(1,458.1129);
   hmcerror__17->SetBinContent(2,101.7942);
   hmcerror__17->SetBinContent(3,114.0851);
   hmcerror__17->SetBinContent(4,112.8139);
   hmcerror__17->SetBinContent(5,115.6627);
   hmcerror__17->SetBinContent(6,117.3133);
   hmcerror__17->SetBinContent(7,116.3101);
   hmcerror__17->SetBinContent(8,108.2668);
   hmcerror__17->SetBinContent(9,110.4303);
   hmcerror__17->SetBinContent(10,104.3163);
   hmcerror__17->SetBinContent(11,93.8709);
   hmcerror__17->SetBinContent(12,98.623);
   hmcerror__17->SetBinContent(13,84.29353);
   hmcerror__17->SetBinContent(14,82.08085);
   hmcerror__17->SetBinContent(15,79.01676);
   hmcerror__17->SetBinContent(16,63.96918);
   hmcerror__17->SetBinContent(17,63.74029);
   hmcerror__17->SetBinContent(18,59.06413);
   hmcerror__17->SetBinContent(19,54.79005);
   hmcerror__17->SetBinContent(20,48.89071);
   hmcerror__17->SetBinContent(21,608.4509);
   hmcerror__17->SetBinError(1,109.8424);
   hmcerror__17->SetBinError(2,35.69994);
   hmcerror__17->SetBinError(3,30.31564);
   hmcerror__17->SetBinError(4,31.19486);
   hmcerror__17->SetBinError(5,32.59683);
   hmcerror__17->SetBinError(6,34.51607);
   hmcerror__17->SetBinError(7,32.69992);
   hmcerror__17->SetBinError(8,33.61231);
   hmcerror__17->SetBinError(9,30.7552);
   hmcerror__17->SetBinError(10,36.68989);
   hmcerror__17->SetBinError(11,31.8226);
   hmcerror__17->SetBinError(12,28.66408);
   hmcerror__17->SetBinError(13,26.12977);
   hmcerror__17->SetBinError(14,23.00495);
   hmcerror__17->SetBinError(15,23.59948);
   hmcerror__17->SetBinError(16,23.34664);
   hmcerror__17->SetBinError(17,19.7475);
   hmcerror__17->SetBinError(18,17.38077);
   hmcerror__17->SetBinError(19,16.07076);
   hmcerror__17->SetBinError(20,15.21444);
   hmcerror__17->SetBinError(21,135.9076);
   hmcerror__17->SetEntries(2916.026);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3021[20] = {
   504,
   107,
   115,
   129,
   114,
   139,
   111,
   106,
   109,
   113,
   80,
   90,
   75,
   88,
   66,
   72,
   70,
   55,
   65,
   55};
   Double_t _felx3021[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3021[20] = {
   22.44994,
   10.34408,
   10.72381,
   11.35782,
   10.67708,
   11.78983,
   10.53565,
   10.29563,
   10.44031,
   10.63015,
   9.0683,
   9.6093,
   8.7852,
   9.5036,
   8.2509,
   8.6108,
   8.4925,
   7.546,
   8.1893,
   7.546};
   Double_t _fehx3021[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3021[20] = {
   22.44994,
   10.34408,
   10.72381,
   11.35782,
   10.67708,
   11.78983,
   10.53565,
   10.29563,
   10.44031,
   10.63015,
   8.8665,
   9.4079,
   8.5831,
   9.3021,
   8.0483,
   8.4085,
   8.2902,
   7.3425,
   7.9866,
   7.3425};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,55);
   Graph_Graph3021->SetMinimum(42.7086);
   Graph_Graph3021->SetMaximum(574.3495);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.03#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2263.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 44.1","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 216.9","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 28.5","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 219.7","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  72.5","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  5.5","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  826.8","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  165.8","F");

   ci = 1506;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 309.7","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 153.5","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 126.9","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 17.2","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3022[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3022[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3022[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3022[20] = {
   0.2397714,
   0.3507068,
   0.2657283,
   0.276516,
   0.2818266,
   0.2942212,
   0.2811444,
   0.310458,
   0.2785033,
   0.3517177,
   0.3390039,
   0.290643,
   0.3099855,
   0.2802718,
   0.2986642,
   0.364967,
   0.3098119,
   0.2942694,
   0.2933154,
   0.3111928};
   Double_t _fehx3022[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3022[20] = {
   0.2397714,
   0.3507068,
   0.2657283,
   0.276516,
   0.2818266,
   0.2942212,
   0.2811444,
   0.310458,
   0.2785033,
   0.3517177,
   0.3390039,
   0.290643,
   0.3099855,
   0.2802718,
   0.2986642,
   0.364967,
   0.3098119,
   0.2942694,
   0.2933154,
   0.3111928};
   grae = new TGraphAsymmErrors(20,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,55);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Sub-leading shower Conversion Distance [cm]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3023[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3023[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3023[20] = {
   0.2161215,
   0.2395669,
   0.2174937,
   0.2199815,
   0.222479,
   0.2304086,
   0.208167,
   0.2225479,
   0.2192241,
   0.2314121,
   0.2222812,
   0.2078449,
   0.2107312,
   0.216483,
   0.2125313,
   0.2307818,
   0.20984,
   0.2105262,
   0.2248311,
   0.213215};
   Double_t _fehx3023[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3023[20] = {
   0.2161215,
   0.2395669,
   0.2174937,
   0.2199815,
   0.222479,
   0.2304086,
   0.208167,
   0.2225479,
   0.2192241,
   0.2314121,
   0.2222812,
   0.2078449,
   0.2107312,
   0.216483,
   0.2125313,
   0.2307818,
   0.20984,
   0.2105262,
   0.2248311,
   0.213215};
   grae = new TGraphAsymmErrors(20,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,55);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3024[20] = {
   1.100166,
   1.05114,
   1.008019,
   1.143476,
   0.9856246,
   1.184861,
   0.9543457,
   0.9790624,
   0.987048,
   1.083244,
   0.8522343,
   0.912566,
   0.889748,
   1.072114,
   0.8352658,
   1.125542,
   1.098206,
   0.9311912,
   1.186347,
   1.124958};
   Double_t _felx3024[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3024[20] = {
   0.04900527,
   0.1016175,
   0.09399827,
   0.1006774,
   0.0923122,
   0.1004986,
   0.09058249,
   0.09509495,
   0.09454205,
   0.101903,
   0.09660396,
   0.09743467,
   0.1042215,
   0.1157834,
   0.1044196,
   0.1346086,
   0.133236,
   0.1277594,
   0.1494669,
   0.1543443};
   Double_t _fehx3024[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3024[20] = {
   0.04900527,
   0.1016175,
   0.09399827,
   0.1006774,
   0.0923122,
   0.1004986,
   0.09058249,
   0.09509495,
   0.09454205,
   0.101903,
   0.0944542,
   0.09539255,
   0.1018239,
   0.1133285,
   0.1018556,
   0.1314461,
   0.1300622,
   0.124314,
   0.1457674,
   0.1501819};
   grae = new TGraphAsymmErrors(20,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,55);
   Graph_Graph3024->SetMinimum(0.6707194);
   Graph_Graph3024->SetMaximum(1.392241);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_gap_low_all",20,0,50);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
   TLine *line = new TLine(0,1,50,1);
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
