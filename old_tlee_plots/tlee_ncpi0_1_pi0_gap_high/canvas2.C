#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Sat Oct 22 21:27:21 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",34,57,1200,900);
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
   pad1->Range(-7.692308,-32.40484,56.41026,3583.293);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmc__4->SetBinContent(1,1620.242);
   hmc__4->SetBinContent(2,284.4158);
   hmc__4->SetBinContent(3,293.3567);
   hmc__4->SetBinContent(4,268.6926);
   hmc__4->SetBinContent(5,261.8898);
   hmc__4->SetBinContent(6,222.5179);
   hmc__4->SetBinContent(7,216.4707);
   hmc__4->SetBinContent(8,193.8412);
   hmc__4->SetBinContent(9,183.0733);
   hmc__4->SetBinContent(10,168.5729);
   hmc__4->SetBinContent(11,139.6);
   hmc__4->SetBinContent(12,131.8237);
   hmc__4->SetBinContent(13,110.9401);
   hmc__4->SetBinContent(14,100.1626);
   hmc__4->SetBinContent(15,84.2918);
   hmc__4->SetBinContent(16,89.40495);
   hmc__4->SetBinContent(17,82.28983);
   hmc__4->SetBinContent(18,71.93713);
   hmc__4->SetBinContent(19,61.00975);
   hmc__4->SetBinContent(20,48.9975);
   hmc__4->SetBinContent(21,551.4252);
   hmc__4->SetBinError(1,369.0712);
   hmc__4->SetBinError(2,96.0819);
   hmc__4->SetBinError(3,90.59006);
   hmc__4->SetBinError(4,83.49248);
   hmc__4->SetBinError(5,80.10778);
   hmc__4->SetBinError(6,73.03329);
   hmc__4->SetBinError(7,68.80111);
   hmc__4->SetBinError(8,61.3677);
   hmc__4->SetBinError(9,54.27115);
   hmc__4->SetBinError(10,49.30924);
   hmc__4->SetBinError(11,42.50112);
   hmc__4->SetBinError(12,40.57297);
   hmc__4->SetBinError(13,35.6221);
   hmc__4->SetBinError(14,33.04593);
   hmc__4->SetBinError(15,31.18851);
   hmc__4->SetBinError(16,27.39251);
   hmc__4->SetBinError(17,25.51694);
   hmc__4->SetBinError(18,23.57697);
   hmc__4->SetBinError(19,21.38083);
   hmc__4->SetBinError(20,19.73574);
   hmc__4->SetBinError(21,136.0135);
   hmc__4->SetMinimum(-32.40484);
   hmc__4->SetMaximum(3402.508);
   hmc__4->SetEntries(5727.925);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",20,0,50);
   hs2_stack_2->SetMinimum(-6.289654e-09);
   hs2_stack_2->SetMaximum(1701.254);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,32.47516);
   hbadmatch_stack_1->SetBinContent(2,2.669279);
   hbadmatch_stack_1->SetBinContent(3,3.741514);
   hbadmatch_stack_1->SetBinContent(4,4.384419);
   hbadmatch_stack_1->SetBinContent(5,4.461033);
   hbadmatch_stack_1->SetBinContent(6,4.090588);
   hbadmatch_stack_1->SetBinContent(7,4.023108);
   hbadmatch_stack_1->SetBinContent(8,2.478058);
   hbadmatch_stack_1->SetBinContent(9,2.951357);
   hbadmatch_stack_1->SetBinContent(10,2.794075);
   hbadmatch_stack_1->SetBinContent(11,3.700641);
   hbadmatch_stack_1->SetBinContent(12,1.597973);
   hbadmatch_stack_1->SetBinContent(13,3.334849);
   hbadmatch_stack_1->SetBinContent(14,2.256732);
   hbadmatch_stack_1->SetBinContent(15,2.807394);
   hbadmatch_stack_1->SetBinContent(16,1.240754);
   hbadmatch_stack_1->SetBinContent(17,2.646591);
   hbadmatch_stack_1->SetBinContent(18,4.658218);
   hbadmatch_stack_1->SetBinContent(19,1.123326);
   hbadmatch_stack_1->SetBinContent(20,1.868538);
   hbadmatch_stack_1->SetBinContent(21,30.12732);
   hbadmatch_stack_1->SetBinError(1,3.121236);
   hbadmatch_stack_1->SetBinError(2,0.8112507);
   hbadmatch_stack_1->SetBinError(3,1.018799);
   hbadmatch_stack_1->SetBinError(4,1.856463);
   hbadmatch_stack_1->SetBinError(5,1.014221);
   hbadmatch_stack_1->SetBinError(6,1.113441);
   hbadmatch_stack_1->SetBinError(7,0.9975586);
   hbadmatch_stack_1->SetBinError(8,0.8981459);
   hbadmatch_stack_1->SetBinError(9,0.7884773);
   hbadmatch_stack_1->SetBinError(10,0.8494075);
   hbadmatch_stack_1->SetBinError(11,0.9794721);
   hbadmatch_stack_1->SetBinError(12,0.6960817);
   hbadmatch_stack_1->SetBinError(13,1.377564);
   hbadmatch_stack_1->SetBinError(14,0.7767624);
   hbadmatch_stack_1->SetBinError(15,0.9782877);
   hbadmatch_stack_1->SetBinError(16,0.5478078);
   hbadmatch_stack_1->SetBinError(17,1.038871);
   hbadmatch_stack_1->SetBinError(18,2.131329);
   hbadmatch_stack_1->SetBinError(19,0.5752857);
   hbadmatch_stack_1->SetBinError(20,0.8267244);
   hbadmatch_stack_1->SetBinError(21,3.259951);
   hbadmatch_stack_1->SetEntries(480);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1447;
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
   hs2->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hext_stack_2->SetBinContent(1,189.5153);
   hext_stack_2->SetBinContent(2,12.69943);
   hext_stack_2->SetBinContent(3,17.07823);
   hext_stack_2->SetBinContent(4,17.59298);
   hext_stack_2->SetBinContent(5,18.01111);
   hext_stack_2->SetBinContent(6,12.17315);
   hext_stack_2->SetBinContent(7,14.09799);
   hext_stack_2->SetBinContent(8,11.60656);
   hext_stack_2->SetBinContent(9,10.14179);
   hext_stack_2->SetBinContent(10,15.69567);
   hext_stack_2->SetBinContent(11,11.23026);
   hext_stack_2->SetBinContent(12,12.58851);
   hext_stack_2->SetBinContent(13,12.90132);
   hext_stack_2->SetBinContent(14,8.407247);
   hext_stack_2->SetBinContent(15,2.110787);
   hext_stack_2->SetBinContent(16,8.235662);
   hext_stack_2->SetBinContent(17,12.80916);
   hext_stack_2->SetBinContent(18,10.4027);
   hext_stack_2->SetBinContent(19,11.12211);
   hext_stack_2->SetBinContent(20,3.897177);
   hext_stack_2->SetBinContent(21,54.43558);
   hext_stack_2->SetBinError(1,9.522209);
   hext_stack_2->SetBinError(2,2.375217);
   hext_stack_2->SetBinError(3,2.732434);
   hext_stack_2->SetBinError(4,2.687587);
   hext_stack_2->SetBinError(5,2.941561);
   hext_stack_2->SetBinError(6,2.14951);
   hext_stack_2->SetBinError(7,2.419793);
   hext_stack_2->SetBinError(8,2.114241);
   hext_stack_2->SetBinError(9,2.065242);
   hext_stack_2->SetBinError(10,2.705826);
   hext_stack_2->SetBinError(11,2.302551);
   hext_stack_2->SetBinError(12,2.527127);
   hext_stack_2->SetBinError(13,2.560797);
   hext_stack_2->SetBinError(14,2.003079);
   hext_stack_2->SetBinError(15,0.8669371);
   hext_stack_2->SetBinError(16,2.023203);
   hext_stack_2->SetBinError(17,2.65238);
   hext_stack_2->SetBinError(18,2.318081);
   hext_stack_2->SetBinError(19,2.389589);
   hext_stack_2->SetBinError(20,1.182339);
   hext_stack_2->SetBinError(21,4.965695);
   hext_stack_2->SetEntries(1085);

   ci = 1448;
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
   hs2->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,20.87901);
   hdirt_stack_3->SetBinContent(2,2.104244);
   hdirt_stack_3->SetBinContent(3,1.169553);
   hdirt_stack_3->SetBinContent(4,1.059817);
   hdirt_stack_3->SetBinContent(5,1.490091);
   hdirt_stack_3->SetBinContent(6,1.628506);
   hdirt_stack_3->SetBinContent(7,1.500154);
   hdirt_stack_3->SetBinContent(8,2.16835);
   hdirt_stack_3->SetBinContent(9,1.154444);
   hdirt_stack_3->SetBinContent(10,1.095005);
   hdirt_stack_3->SetBinContent(11,1.354396);
   hdirt_stack_3->SetBinContent(12,1.106009);
   hdirt_stack_3->SetBinContent(13,0.6371099);
   hdirt_stack_3->SetBinContent(14,0.7679276);
   hdirt_stack_3->SetBinContent(15,0.627653);
   hdirt_stack_3->SetBinContent(16,0.6002214);
   hdirt_stack_3->SetBinContent(17,1.202955);
   hdirt_stack_3->SetBinContent(18,0.7076908);
   hdirt_stack_3->SetBinContent(20,0.6390802);
   hdirt_stack_3->SetBinContent(21,7.372446);
   hdirt_stack_3->SetBinError(1,2.7088);
   hdirt_stack_3->SetBinError(2,0.7047391);
   hdirt_stack_3->SetBinError(3,0.4510443);
   hdirt_stack_3->SetBinError(4,0.4479172);
   hdirt_stack_3->SetBinError(5,0.5866508);
   hdirt_stack_3->SetBinError(6,0.706127);
   hdirt_stack_3->SetBinError(7,0.5618209);
   hdirt_stack_3->SetBinError(8,0.7171811);
   hdirt_stack_3->SetBinError(9,0.5325214);
   hdirt_stack_3->SetBinError(10,0.568305);
   hdirt_stack_3->SetBinError(11,0.5701771);
   hdirt_stack_3->SetBinError(12,0.5747343);
   hdirt_stack_3->SetBinError(13,0.4720365);
   hdirt_stack_3->SetBinError(14,0.4674452);
   hdirt_stack_3->SetBinError(15,0.4522127);
   hdirt_stack_3->SetBinError(16,0.427823);
   hdirt_stack_3->SetBinError(17,0.567508);
   hdirt_stack_3->SetBinError(18,0.4300798);
   hdirt_stack_3->SetBinError(20,0.4617611);
   hdirt_stack_3->SetBinError(21,1.433971);
   hdirt_stack_3->SetEntries(206);

   ci = 1449;
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
   hs2->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,134.7624);
   houtFV_stack_4->SetBinContent(2,7.289656);
   houtFV_stack_4->SetBinContent(3,11.31803);
   houtFV_stack_4->SetBinContent(4,11.20382);
   houtFV_stack_4->SetBinContent(5,11.42159);
   houtFV_stack_4->SetBinContent(6,9.274716);
   houtFV_stack_4->SetBinContent(7,11.37767);
   houtFV_stack_4->SetBinContent(8,16.38446);
   houtFV_stack_4->SetBinContent(9,14.42536);
   houtFV_stack_4->SetBinContent(10,14.25344);
   houtFV_stack_4->SetBinContent(11,10.84467);
   houtFV_stack_4->SetBinContent(12,11.12552);
   houtFV_stack_4->SetBinContent(13,7.025661);
   houtFV_stack_4->SetBinContent(14,6.713073);
   houtFV_stack_4->SetBinContent(15,7.276121);
   houtFV_stack_4->SetBinContent(16,8.635602);
   houtFV_stack_4->SetBinContent(17,6.895443);
   houtFV_stack_4->SetBinContent(18,4.625436);
   houtFV_stack_4->SetBinContent(19,4.709825);
   houtFV_stack_4->SetBinContent(20,4.596193);
   houtFV_stack_4->SetBinContent(21,56.96587);
   houtFV_stack_4->SetBinError(1,5.783947);
   houtFV_stack_4->SetBinError(2,1.359213);
   houtFV_stack_4->SetBinError(3,1.617232);
   houtFV_stack_4->SetBinError(4,1.612454);
   houtFV_stack_4->SetBinError(5,1.699951);
   houtFV_stack_4->SetBinError(6,1.432026);
   houtFV_stack_4->SetBinError(7,1.658155);
   houtFV_stack_4->SetBinError(8,2.023747);
   houtFV_stack_4->SetBinError(9,1.949277);
   houtFV_stack_4->SetBinError(10,1.899748);
   houtFV_stack_4->SetBinError(11,1.649751);
   houtFV_stack_4->SetBinError(12,1.677011);
   houtFV_stack_4->SetBinError(13,1.230837);
   houtFV_stack_4->SetBinError(14,1.262672);
   houtFV_stack_4->SetBinError(15,1.265808);
   houtFV_stack_4->SetBinError(16,1.478279);
   houtFV_stack_4->SetBinError(17,1.315555);
   houtFV_stack_4->SetBinError(18,1.075421);
   houtFV_stack_4->SetBinError(19,1.050577);
   houtFV_stack_4->SetBinError(20,1.07134);
   houtFV_stack_4->SetBinError(21,3.878303);
   houtFV_stack_4->SetEntries(1712);

   ci = 1450;
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
   hs2->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,45.42152);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.916784);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,5.133959);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,5.367174);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.473534);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.860668);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.434389);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.438317);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,2.244746);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.475587);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.756569);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.140029);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.510203);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,2.059279);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.8260775);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.352287);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.7510945);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.587387);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,1.007957);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.9373704);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,7.117387);
   hNCpi0inFVcoh_stack_5->SetBinError(1,2.551832);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.7646432);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.9073367);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.8176614);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6832782);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6548813);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6522022);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5727086);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5181938);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7624221);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3918825);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3398597);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6813541);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7085292);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1750016);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4688549);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2056974);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3011289);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2918353);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3469619);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.9854454);
   hNCpi0inFVcoh_stack_5->SetEntries(1669);

   ci = 1451;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,4.056311);
   hNCpi0inFVqe_stack_6->SetBinContent(2,1.255397);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.079147);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.149863);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.629483);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.05321);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.8887754);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.8363887);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.7772717);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4912071);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6586611);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4337409);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2314583);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2711693);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.4053718);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7129496);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.3468252);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08357733);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3630742);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.259398);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.6248988);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2680607);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3142554);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3462016);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2285623);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2571595);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2756822);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2328581);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2626258);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1853697);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2297137);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1407744);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.08615977);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1377728);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.193886);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2920927);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1325469);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.04335467);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2866519);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2737997);
   hNCpi0inFVqe_stack_6->SetEntries(471);

   ci = 1452;
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
   hs2->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,586.7916);
   hNCpi0inFVres_stack_7->SetBinContent(2,121.0852);
   hNCpi0inFVres_stack_7->SetBinContent(3,124.7245);
   hNCpi0inFVres_stack_7->SetBinContent(4,113.9079);
   hNCpi0inFVres_stack_7->SetBinContent(5,105.4065);
   hNCpi0inFVres_stack_7->SetBinContent(6,97.92841);
   hNCpi0inFVres_stack_7->SetBinContent(7,87.93874);
   hNCpi0inFVres_stack_7->SetBinContent(8,77.40308);
   hNCpi0inFVres_stack_7->SetBinContent(9,68.9425);
   hNCpi0inFVres_stack_7->SetBinContent(10,64.49435);
   hNCpi0inFVres_stack_7->SetBinContent(11,55.99647);
   hNCpi0inFVres_stack_7->SetBinContent(12,49.033);
   hNCpi0inFVres_stack_7->SetBinContent(13,42.43737);
   hNCpi0inFVres_stack_7->SetBinContent(14,38.7861);
   hNCpi0inFVres_stack_7->SetBinContent(15,34.01481);
   hNCpi0inFVres_stack_7->SetBinContent(16,31.91719);
   hNCpi0inFVres_stack_7->SetBinContent(17,26.65936);
   hNCpi0inFVres_stack_7->SetBinContent(18,24.61977);
   hNCpi0inFVres_stack_7->SetBinContent(19,20.58368);
   hNCpi0inFVres_stack_7->SetBinContent(20,16.25708);
   hNCpi0inFVres_stack_7->SetBinContent(21,163.0172);
   hNCpi0inFVres_stack_7->SetBinError(1,8.203486);
   hNCpi0inFVres_stack_7->SetBinError(2,3.431625);
   hNCpi0inFVres_stack_7->SetBinError(3,3.535342);
   hNCpi0inFVres_stack_7->SetBinError(4,3.38694);
   hNCpi0inFVres_stack_7->SetBinError(5,3.255768);
   hNCpi0inFVres_stack_7->SetBinError(6,3.304355);
   hNCpi0inFVres_stack_7->SetBinError(7,2.983078);
   hNCpi0inFVres_stack_7->SetBinError(8,2.847485);
   hNCpi0inFVres_stack_7->SetBinError(9,2.541986);
   hNCpi0inFVres_stack_7->SetBinError(10,2.697438);
   hNCpi0inFVres_stack_7->SetBinError(11,2.486309);
   hNCpi0inFVres_stack_7->SetBinError(12,2.292946);
   hNCpi0inFVres_stack_7->SetBinError(13,2.027505);
   hNCpi0inFVres_stack_7->SetBinError(14,2.129541);
   hNCpi0inFVres_stack_7->SetBinError(15,1.819523);
   hNCpi0inFVres_stack_7->SetBinError(16,1.75735);
   hNCpi0inFVres_stack_7->SetBinError(17,1.60283);
   hNCpi0inFVres_stack_7->SetBinError(18,1.71469);
   hNCpi0inFVres_stack_7->SetBinError(19,1.411456);
   hNCpi0inFVres_stack_7->SetBinError(20,1.183433);
   hNCpi0inFVres_stack_7->SetBinError(21,4.278286);
   hNCpi0inFVres_stack_7->SetEntries(45533);

   ci = 1453;
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
   hs2->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,121.9999);
   hNCpi0inFVdis_stack_8->SetBinContent(2,27.1975);
   hNCpi0inFVdis_stack_8->SetBinContent(3,22.25497);
   hNCpi0inFVdis_stack_8->SetBinContent(4,24.02183);
   hNCpi0inFVdis_stack_8->SetBinContent(5,23.77941);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.7868);
   hNCpi0inFVdis_stack_8->SetBinContent(7,18.1656);
   hNCpi0inFVdis_stack_8->SetBinContent(8,15.48715);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.52941);
   hNCpi0inFVdis_stack_8->SetBinContent(10,13.56573);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.41221);
   hNCpi0inFVdis_stack_8->SetBinContent(12,10.8679);
   hNCpi0inFVdis_stack_8->SetBinContent(13,8.028233);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.050587);
   hNCpi0inFVdis_stack_8->SetBinContent(15,6.303938);
   hNCpi0inFVdis_stack_8->SetBinContent(16,5.607137);
   hNCpi0inFVdis_stack_8->SetBinContent(17,6.124424);
   hNCpi0inFVdis_stack_8->SetBinContent(18,4.565687);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.834612);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.65807);
   hNCpi0inFVdis_stack_8->SetBinContent(21,34.13837);
   hNCpi0inFVdis_stack_8->SetBinError(1,3.696527);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.850426);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.675431);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.780878);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.769465);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.524108);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.432229);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.275998);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.294919);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.324684);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.058731);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.179403);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.9695416);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.9914168);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.805692);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8249948);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.88254);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.5687727);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.796642);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5265596);
   hNCpi0inFVdis_stack_8->SetBinError(21,2.013584);
   hNCpi0inFVdis_stack_8->SetEntries(8724);

   ci = 1454;
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
   hs2->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.2929171);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.164166);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.08431811);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08385543);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.150234);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1431051);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1302849);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.04888967);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.0681115);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1330957);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02577893);
   hNCpi0inFVmec_stack_9->SetEntries(34);

   ci = 1455;
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
   hs2->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,211.2497);
   hCCpi0inFV_stack_10->SetBinContent(2,43.47658);
   hCCpi0inFV_stack_10->SetBinContent(3,44.19548);
   hCCpi0inFV_stack_10->SetBinContent(4,44.16476);
   hCCpi0inFV_stack_10->SetBinContent(5,42.08723);
   hCCpi0inFV_stack_10->SetBinContent(6,34.88942);
   hCCpi0inFV_stack_10->SetBinContent(7,35.18427);
   hCCpi0inFV_stack_10->SetBinContent(8,32.00732);
   hCCpi0inFV_stack_10->SetBinContent(9,37.62213);
   hCCpi0inFV_stack_10->SetBinContent(10,26.7943);
   hCCpi0inFV_stack_10->SetBinContent(11,24.65537);
   hCCpi0inFV_stack_10->SetBinContent(12,21.09776);
   hCCpi0inFV_stack_10->SetBinContent(13,16.27946);
   hCCpi0inFV_stack_10->SetBinContent(14,15.78835);
   hCCpi0inFV_stack_10->SetBinContent(15,16.28478);
   hCCpi0inFV_stack_10->SetBinContent(16,14.21875);
   hCCpi0inFV_stack_10->SetBinContent(17,11.90571);
   hCCpi0inFV_stack_10->SetBinContent(18,8.551033);
   hCCpi0inFV_stack_10->SetBinContent(19,9.648468);
   hCCpi0inFV_stack_10->SetBinContent(20,8.981887);
   hCCpi0inFV_stack_10->SetBinContent(21,76.83849);
   hCCpi0inFV_stack_10->SetBinError(1,7.304102);
   hCCpi0inFV_stack_10->SetBinError(2,3.313577);
   hCCpi0inFV_stack_10->SetBinError(3,3.312676);
   hCCpi0inFV_stack_10->SetBinError(4,3.377715);
   hCCpi0inFV_stack_10->SetBinError(5,3.280086);
   hCCpi0inFV_stack_10->SetBinError(6,2.937395);
   hCCpi0inFV_stack_10->SetBinError(7,2.919791);
   hCCpi0inFV_stack_10->SetBinError(8,2.795724);
   hCCpi0inFV_stack_10->SetBinError(9,3.095656);
   hCCpi0inFV_stack_10->SetBinError(10,2.564597);
   hCCpi0inFV_stack_10->SetBinError(11,2.49292);
   hCCpi0inFV_stack_10->SetBinError(12,2.262747);
   hCCpi0inFV_stack_10->SetBinError(13,1.946732);
   hCCpi0inFV_stack_10->SetBinError(14,1.947371);
   hCCpi0inFV_stack_10->SetBinError(15,2.017911);
   hCCpi0inFV_stack_10->SetBinError(16,1.866869);
   hCCpi0inFV_stack_10->SetBinError(17,1.76558);
   hCCpi0inFV_stack_10->SetBinError(18,1.455238);
   hCCpi0inFV_stack_10->SetBinError(19,1.544207);
   hCCpi0inFV_stack_10->SetBinError(20,1.552613);
   hCCpi0inFV_stack_10->SetBinError(21,4.426168);
   hCCpi0inFV_stack_10->SetEntries(3326);

   ci = 1456;
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
   hs2->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,138.0417);
   hNCinFV_stack_11->SetBinContent(2,28.9208);
   hNCinFV_stack_11->SetBinContent(3,27.043);
   hNCinFV_stack_11->SetBinContent(4,19.10498);
   hNCinFV_stack_11->SetBinContent(5,25.43965);
   hNCinFV_stack_11->SetBinContent(6,16.01691);
   hNCinFV_stack_11->SetBinContent(7,18.83714);
   hNCinFV_stack_11->SetBinContent(8,14.47054);
   hNCinFV_stack_11->SetBinContent(9,12.48159);
   hNCinFV_stack_11->SetBinContent(10,13.02545);
   hNCinFV_stack_11->SetBinContent(11,9.971014);
   hNCinFV_stack_11->SetBinContent(12,9.61738);
   hNCinFV_stack_11->SetBinContent(13,9.321722);
   hNCinFV_stack_11->SetBinContent(14,8.870516);
   hNCinFV_stack_11->SetBinContent(15,7.224783);
   hNCinFV_stack_11->SetBinContent(16,11.95575);
   hNCinFV_stack_11->SetBinContent(17,7.89198);
   hNCinFV_stack_11->SetBinContent(18,6.478099);
   hNCinFV_stack_11->SetBinContent(19,3.629344);
   hNCinFV_stack_11->SetBinContent(20,3.645107);
   hNCinFV_stack_11->SetBinContent(21,53.04188);
   hNCinFV_stack_11->SetBinError(1,6.180928);
   hNCinFV_stack_11->SetBinError(2,3.261347);
   hNCinFV_stack_11->SetBinError(3,3.071243);
   hNCinFV_stack_11->SetBinError(4,2.287133);
   hNCinFV_stack_11->SetBinError(5,2.801825);
   hNCinFV_stack_11->SetBinError(6,2.048546);
   hNCinFV_stack_11->SetBinError(7,2.332408);
   hNCinFV_stack_11->SetBinError(8,1.994671);
   hNCinFV_stack_11->SetBinError(9,1.762367);
   hNCinFV_stack_11->SetBinError(10,1.8537);
   hNCinFV_stack_11->SetBinError(11,1.624853);
   hNCinFV_stack_11->SetBinError(12,1.788034);
   hNCinFV_stack_11->SetBinError(13,1.728122);
   hNCinFV_stack_11->SetBinError(14,1.710013);
   hNCinFV_stack_11->SetBinError(15,1.602833);
   hNCinFV_stack_11->SetBinError(16,2.273941);
   hNCinFV_stack_11->SetBinError(17,1.437719);
   hNCinFV_stack_11->SetBinError(18,1.36138);
   hNCinFV_stack_11->SetBinError(19,0.9880698);
   hNCinFV_stack_11->SetBinError(20,0.8389823);
   hNCinFV_stack_11->SetBinError(21,3.885591);
   hNCinFV_stack_11->SetEntries(1870);

   ci = 1457;
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
   hs2->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,109.9205);
   hnumuCCinFV_stack_12->SetBinContent(2,32.961);
   hnumuCCinFV_stack_12->SetBinContent(3,33.99348);
   hnumuCCinFV_stack_12->SetBinContent(4,25.14478);
   hnumuCCinFV_stack_12->SetBinContent(5,23.71);
   hnumuCCinFV_stack_12->SetBinContent(6,18.29761);
   hnumuCCinFV_stack_12->SetBinContent(7,19.8251);
   hnumuCCinFV_stack_12->SetBinContent(8,17.74304);
   hnumuCCinFV_stack_12->SetBinContent(9,15.14884);
   hnumuCCinFV_stack_12->SetBinContent(10,12.15016);
   hnumuCCinFV_stack_12->SetBinContent(11,8.410748);
   hnumuCCinFV_stack_12->SetBinContent(12,12.95554);
   hnumuCCinFV_stack_12->SetBinContent(13,7.673436);
   hnumuCCinFV_stack_12->SetBinContent(14,6.950625);
   hnumuCCinFV_stack_12->SetBinContent(15,5.910892);
   hnumuCCinFV_stack_12->SetBinContent(16,4.910419);
   hnumuCCinFV_stack_12->SetBinContent(17,4.246871);
   hnumuCCinFV_stack_12->SetBinContent(18,6.455435);
   hnumuCCinFV_stack_12->SetBinContent(19,3.792327);
   hnumuCCinFV_stack_12->SetBinContent(20,4.499451);
   hnumuCCinFV_stack_12->SetBinContent(21,64.70358);
   hnumuCCinFV_stack_12->SetBinError(1,6.060903);
   hnumuCCinFV_stack_12->SetBinError(2,3.23002);
   hnumuCCinFV_stack_12->SetBinError(3,3.782715);
   hnumuCCinFV_stack_12->SetBinError(4,3.645759);
   hnumuCCinFV_stack_12->SetBinError(5,2.747645);
   hnumuCCinFV_stack_12->SetBinError(6,2.350417);
   hnumuCCinFV_stack_12->SetBinError(7,2.820689);
   hnumuCCinFV_stack_12->SetBinError(8,2.317034);
   hnumuCCinFV_stack_12->SetBinError(9,2.497535);
   hnumuCCinFV_stack_12->SetBinError(10,1.745997);
   hnumuCCinFV_stack_12->SetBinError(11,1.626854);
   hnumuCCinFV_stack_12->SetBinError(12,2.045255);
   hnumuCCinFV_stack_12->SetBinError(13,1.371973);
   hnumuCCinFV_stack_12->SetBinError(14,1.399299);
   hnumuCCinFV_stack_12->SetBinError(15,1.279191);
   hnumuCCinFV_stack_12->SetBinError(16,1.072914);
   hnumuCCinFV_stack_12->SetBinError(17,0.9693305);
   hnumuCCinFV_stack_12->SetBinError(18,1.323133);
   hnumuCCinFV_stack_12->SetBinError(19,0.9393901);
   hnumuCCinFV_stack_12->SetBinError(20,1.100365);
   hnumuCCinFV_stack_12->SetBinError(21,4.593019);
   hnumuCCinFV_stack_12->SetEntries(1728);

   ci = 1458;
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
   hs2->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,24.83596);
   hnueCCinFV_stack_13->SetBinContent(2,0.6758178);
   hnueCCinFV_stack_13->SetBinContent(3,1.606543);
   hnueCCinFV_stack_13->SetBinContent(4,1.574557);
   hnueCCinFV_stack_13->SetBinContent(5,0.9694861);
   hnueCCinFV_stack_13->SetBinContent(6,1.517861);
   hnueCCinFV_stack_13->SetBinContent(7,1.145014);
   hnueCCinFV_stack_13->SetBinContent(8,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(9,1.543895);
   hnueCCinFV_stack_13->SetBinContent(10,0.6540641);
   hnueCCinFV_stack_13->SetBinContent(11,0.6089847);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.5408891);
   hnueCCinFV_stack_13->SetBinContent(14,1.090732);
   hnueCCinFV_stack_13->SetBinContent(15,0.4991921);
   hnueCCinFV_stack_13->SetBinContent(17,0.7905979);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,2.371188);
   hnueCCinFV_stack_13->SetBinError(1,3.29558);
   hnueCCinFV_stack_13->SetBinError(2,0.3921958);
   hnueCCinFV_stack_13->SetBinError(3,0.788157);
   hnueCCinFV_stack_13->SetBinError(4,0.6589965);
   hnueCCinFV_stack_13->SetBinError(5,0.5844267);
   hnueCCinFV_stack_13->SetBinError(6,0.7137061);
   hnueCCinFV_stack_13->SetBinError(7,0.5882319);
   hnueCCinFV_stack_13->SetBinError(8,0.4394482);
   hnueCCinFV_stack_13->SetBinError(9,1.173326);
   hnueCCinFV_stack_13->SetBinError(10,0.3812133);
   hnueCCinFV_stack_13->SetBinError(11,0.4575996);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.3929806);
   hnueCCinFV_stack_13->SetBinError(14,0.596548);
   hnueCCinFV_stack_13->SetBinError(15,0.3613204);
   hnueCCinFV_stack_13->SetBinError(17,0.4677435);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.9017635);
   hnueCCinFV_stack_13->SetEntries(151);

   ci = 1459;
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
   hs2->Add(hnueCCinFV_stack_13,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmcerror__5->SetBinContent(1,1620.242);
   hmcerror__5->SetBinContent(2,284.4158);
   hmcerror__5->SetBinContent(3,293.3567);
   hmcerror__5->SetBinContent(4,268.6926);
   hmcerror__5->SetBinContent(5,261.8898);
   hmcerror__5->SetBinContent(6,222.5179);
   hmcerror__5->SetBinContent(7,216.4707);
   hmcerror__5->SetBinContent(8,193.8412);
   hmcerror__5->SetBinContent(9,183.0733);
   hmcerror__5->SetBinContent(10,168.5729);
   hmcerror__5->SetBinContent(11,139.6);
   hmcerror__5->SetBinContent(12,131.8237);
   hmcerror__5->SetBinContent(13,110.9401);
   hmcerror__5->SetBinContent(14,100.1626);
   hmcerror__5->SetBinContent(15,84.2918);
   hmcerror__5->SetBinContent(16,89.40495);
   hmcerror__5->SetBinContent(17,82.28983);
   hmcerror__5->SetBinContent(18,71.93713);
   hmcerror__5->SetBinContent(19,61.00975);
   hmcerror__5->SetBinContent(20,48.9975);
   hmcerror__5->SetBinContent(21,551.4252);
   hmcerror__5->SetBinError(1,369.0712);
   hmcerror__5->SetBinError(2,96.0819);
   hmcerror__5->SetBinError(3,90.59006);
   hmcerror__5->SetBinError(4,83.49248);
   hmcerror__5->SetBinError(5,80.10778);
   hmcerror__5->SetBinError(6,73.03329);
   hmcerror__5->SetBinError(7,68.80111);
   hmcerror__5->SetBinError(8,61.3677);
   hmcerror__5->SetBinError(9,54.27115);
   hmcerror__5->SetBinError(10,49.30924);
   hmcerror__5->SetBinError(11,42.50112);
   hmcerror__5->SetBinError(12,40.57297);
   hmcerror__5->SetBinError(13,35.6221);
   hmcerror__5->SetBinError(14,33.04593);
   hmcerror__5->SetBinError(15,31.18851);
   hmcerror__5->SetBinError(16,27.39251);
   hmcerror__5->SetBinError(17,25.51694);
   hmcerror__5->SetBinError(18,23.57697);
   hmcerror__5->SetBinError(19,21.38083);
   hmcerror__5->SetBinError(20,19.73574);
   hmcerror__5->SetBinError(21,136.0135);
   hmcerror__5->SetEntries(5727.925);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3005[20] = {
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
   Double_t _fy3005[20] = {
   1576,
   276,
   248,
   270,
   243,
   255,
   181,
   198,
   204,
   161,
   148,
   113,
   90,
   107,
   84,
   72,
   74,
   78,
   55,
   45};
   Double_t _felx3005[20] = {
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
   Double_t _fely3005[20] = {
   39.69887,
   16.61325,
   15.74802,
   16.43168,
   15.58846,
   15.96872,
   13.45362,
   14.07125,
   14.28286,
   12.68858,
   12.16553,
   10.63015,
   9.6093,
   10.34408,
   9.2886,
   8.6108,
   8.7275,
   8.9562,
   7.546,
   6.8416};
   Double_t _fehx3005[20] = {
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
   Double_t _fehy3005[20] = {
   39.69887,
   16.61325,
   15.74802,
   16.43168,
   15.58846,
   15.96872,
   13.45362,
   14.07125,
   14.28286,
   12.68858,
   12.16553,
   10.63015,
   9.4079,
   10.34408,
   9.0869,
   8.4085,
   8.5253,
   8.7542,
   7.3425,
   6.637};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,55);
   Graph_Graph3005->SetMinimum(34.34256);
   Graph_Graph3005->SetMaximum(1773.453);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.97#pm0.25","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4478.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 89.3","F");

   ci = 1447;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 412.3","F");

   ci = 1448;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 41.9","F");

   ci = 1449;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 314.2","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  92.7","F");

   ci = 1451;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  15.7","F");

   ci = 1452;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1788.9","F");

   ci = 1453;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  372.2","F");

   ci = 1454;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.1","F");

   ci = 1455;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 699.1","F");

   ci = 1456;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 392.0","F");

   ci = 1457;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 374.7","F");

   ci = 1458;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 39.4","F");

   ci = 1459;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
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
   
   Double_t _fx3006[20] = {
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
   Double_t _fy3006[20] = {
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
   Double_t _felx3006[20] = {
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
   Double_t _fely3006[20] = {
   0.2277877,
   0.3378219,
   0.3088051,
   0.3107361,
   0.3058835,
   0.3282132,
   0.317831,
   0.3165875,
   0.296445,
   0.2925099,
   0.3044493,
   0.3077821,
   0.321093,
   0.329923,
   0.3700065,
   0.306387,
   0.3100862,
   0.327744,
   0.3504493,
   0.4027907};
   Double_t _fehx3006[20] = {
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
   Double_t _fehy3006[20] = {
   0.2277877,
   0.3378219,
   0.3088051,
   0.3107361,
   0.3058835,
   0.3282132,
   0.317831,
   0.3165875,
   0.296445,
   0.2925099,
   0.3044493,
   0.3077821,
   0.321093,
   0.329923,
   0.3700065,
   0.306387,
   0.3100862,
   0.327744,
   0.3504493,
   0.4027907};
   grae = new TGraphAsymmErrors(20,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,55);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3007[20] = {
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
   Double_t _fy3007[20] = {
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
   Double_t _felx3007[20] = {
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
   Double_t _fely3007[20] = {
   0.2184058,
   0.3168371,
   0.2987066,
   0.3021369,
   0.2896073,
   0.3158263,
   0.296421,
   0.2921211,
   0.2811023,
   0.2613232,
   0.2690026,
   0.2776539,
   0.2796159,
   0.2693054,
   0.299367,
   0.2581497,
   0.2500599,
   0.2784355,
   0.265726,
   0.3012943};
   Double_t _fehx3007[20] = {
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
   Double_t _fehy3007[20] = {
   0.2184058,
   0.3168371,
   0.2987066,
   0.3021369,
   0.2896073,
   0.3158263,
   0.296421,
   0.2921211,
   0.2811023,
   0.2613232,
   0.2690026,
   0.2776539,
   0.2796159,
   0.2693054,
   0.299367,
   0.2581497,
   0.2500599,
   0.2784355,
   0.265726,
   0.3012943};
   grae = new TGraphAsymmErrors(20,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,55);
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
   
   Double_t _fx3008[20] = {
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
   Double_t _fy3008[20] = {
   0.9726942,
   0.9704102,
   0.8453871,
   1.004866,
   0.9278712,
   1.145975,
   0.8361409,
   1.021455,
   1.114308,
   0.9550765,
   1.060172,
   0.8572057,
   0.8112483,
   1.068263,
   0.9965382,
   0.8053245,
   0.8992606,
   1.08428,
   0.9014953,
   0.9184143};
   Double_t _felx3008[20] = {
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
   Double_t _fely3008[20] = {
   0.02450181,
   0.05841183,
   0.05368214,
   0.06115418,
   0.05952296,
   0.07176377,
   0.06214986,
   0.07259163,
   0.07801717,
   0.07527058,
   0.0871456,
   0.08063913,
   0.08661698,
   0.1032729,
   0.1101958,
   0.09631234,
   0.1060581,
   0.1245004,
   0.1236852,
   0.1396316};
   Double_t _fehx3008[20] = {
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
   Double_t _fehy3008[20] = {
   0.02450181,
   0.05841183,
   0.05368214,
   0.06115418,
   0.05952296,
   0.07176377,
   0.06214986,
   0.07259163,
   0.07801717,
   0.07527058,
   0.0871456,
   0.08063913,
   0.08480159,
   0.1032729,
   0.1078029,
   0.0940496,
   0.1036009,
   0.1216924,
   0.1203496,
   0.1354559};
   grae = new TGraphAsymmErrors(20,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,55);
   Graph_Graph3008->SetMinimum(0.6581395);
   Graph_Graph3008->SetMaximum(1.268612);
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
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_FC_bnb_12_kine_pio_gap_high_all",20,0,50);

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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
