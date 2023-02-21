#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 19:43:29 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-46.15385,-2.685655,338.4615,296.9769);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmc__22->SetBinContent(1,71.50626);
   hmc__22->SetBinContent(2,134.2827);
   hmc__22->SetBinContent(3,131.1779);
   hmc__22->SetBinContent(4,125.7362);
   hmc__22->SetBinContent(5,91.20161);
   hmc__22->SetBinContent(6,95.01213);
   hmc__22->SetBinContent(7,68.51338);
   hmc__22->SetBinContent(8,45.90677);
   hmc__22->SetBinContent(9,35.6129);
   hmc__22->SetBinContent(10,42.84604);
   hmc__22->SetBinContent(11,22.03021);
   hmc__22->SetBinContent(12,19.63628);
   hmc__22->SetBinContent(13,11.09674);
   hmc__22->SetBinContent(14,8.484865);
   hmc__22->SetBinContent(15,5.705727);
   hmc__22->SetBinContent(16,5.706482);
   hmc__22->SetBinContent(17,4.713484);
   hmc__22->SetBinContent(18,2.43774);
   hmc__22->SetBinContent(19,2.542606);
   hmc__22->SetBinContent(20,2.692701);
   hmc__22->SetBinContent(21,6.721448);
   hmc__22->SetBinError(1,22.84086);
   hmc__22->SetBinError(2,31.0858);
   hmc__22->SetBinError(3,34.88769);
   hmc__22->SetBinError(4,30.03075);
   hmc__22->SetBinError(5,27.31122);
   hmc__22->SetBinError(6,29.29236);
   hmc__22->SetBinError(7,27.22534);
   hmc__22->SetBinError(8,16.2533);
   hmc__22->SetBinError(9,14.51212);
   hmc__22->SetBinError(10,20.53195);
   hmc__22->SetBinError(11,11.80192);
   hmc__22->SetBinError(12,12.13685);
   hmc__22->SetBinError(13,9.914809);
   hmc__22->SetBinError(14,7.412384);
   hmc__22->SetBinError(15,6.520109);
   hmc__22->SetBinError(16,6.709181);
   hmc__22->SetBinError(17,7.07546);
   hmc__22->SetBinError(18,3.029619);
   hmc__22->SetBinError(19,3.860353);
   hmc__22->SetBinError(20,3.251553);
   hmc__22->SetBinError(21,5.139391);
   hmc__22->SetMinimum(-2.685655);
   hmc__22->SetMaximum(281.9937);
   hmc__22->SetEntries(948.2139);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,0,300);
   hs8_stack_8->SetMinimum(-2.292092e-08);
   hs8_stack_8->SetMaximum(140.9969);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hbadmatch_stack_1->SetBinContent(1,2.582023);
   hbadmatch_stack_1->SetBinContent(2,3.128998);
   hbadmatch_stack_1->SetBinContent(3,4.550722);
   hbadmatch_stack_1->SetBinContent(4,5.51826);
   hbadmatch_stack_1->SetBinContent(5,4.533457);
   hbadmatch_stack_1->SetBinContent(6,3.166445);
   hbadmatch_stack_1->SetBinContent(7,2.100339);
   hbadmatch_stack_1->SetBinContent(8,1.957096);
   hbadmatch_stack_1->SetBinContent(9,0.7969576);
   hbadmatch_stack_1->SetBinContent(10,1.495814);
   hbadmatch_stack_1->SetBinContent(11,0.536893);
   hbadmatch_stack_1->SetBinContent(12,0.4674315);
   hbadmatch_stack_1->SetBinContent(13,0.3401776);
   hbadmatch_stack_1->SetBinContent(15,0.681852);
   hbadmatch_stack_1->SetBinContent(16,0.3917402);
   hbadmatch_stack_1->SetBinContent(18,0.3962007);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.8199845);
   hbadmatch_stack_1->SetBinError(2,1.272772);
   hbadmatch_stack_1->SetBinError(3,1.131904);
   hbadmatch_stack_1->SetBinError(4,1.310103);
   hbadmatch_stack_1->SetBinError(5,1.299594);
   hbadmatch_stack_1->SetBinError(6,1.049783);
   hbadmatch_stack_1->SetBinError(7,0.6842189);
   hbadmatch_stack_1->SetBinError(8,0.7197217);
   hbadmatch_stack_1->SetBinError(9,0.4908491);
   hbadmatch_stack_1->SetBinError(10,0.7770457);
   hbadmatch_stack_1->SetBinError(11,0.3929602);
   hbadmatch_stack_1->SetBinError(12,0.3385523);
   hbadmatch_stack_1->SetBinError(13,0.3401776);
   hbadmatch_stack_1->SetBinError(15,0.4821433);
   hbadmatch_stack_1->SetBinError(16,0.2770047);
   hbadmatch_stack_1->SetBinError(18,0.3962007);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetEntries(124);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hext_stack_2->SetBinContent(1,17.81641);
   hext_stack_2->SetBinContent(2,41.17233);
   hext_stack_2->SetBinContent(3,44.65572);
   hext_stack_2->SetBinContent(4,32.48698);
   hext_stack_2->SetBinContent(5,12.72261);
   hext_stack_2->SetBinContent(6,18.20864);
   hext_stack_2->SetBinContent(7,10.68962);
   hext_stack_2->SetBinContent(8,5.109793);
   hext_stack_2->SetBinContent(9,2.752401);
   hext_stack_2->SetBinContent(10,5.89704);
   hext_stack_2->SetBinContent(11,2.759582);
   hext_stack_2->SetBinContent(12,1.283228);
   hext_stack_2->SetBinContent(13,0.4065989);
   hext_stack_2->SetBinContent(14,0.7309963);
   hext_stack_2->SetBinContent(16,0.4065989);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(18,0.3243973);
   hext_stack_2->SetBinContent(20,0.6416141);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinError(1,2.745095);
   hext_stack_2->SetBinError(2,4.304622);
   hext_stack_2->SetBinError(3,4.468062);
   hext_stack_2->SetBinError(4,3.934248);
   hext_stack_2->SetBinError(5,2.347232);
   hext_stack_2->SetBinError(6,2.846625);
   hext_stack_2->SetBinError(7,2.163997);
   hext_stack_2->SetBinError(8,1.447444);
   hext_stack_2->SetBinError(9,1.07854);
   hext_stack_2->SetBinError(10,1.701242);
   hext_stack_2->SetBinError(11,0.98084);
   hext_stack_2->SetBinError(12,0.9073794);
   hext_stack_2->SetBinError(13,0.4065989);
   hext_stack_2->SetBinError(14,0.5201503);
   hext_stack_2->SetBinError(16,0.4065989);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(18,0.3243973);
   hext_stack_2->SetBinError(20,0.6416141);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetEntries(479);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hdirt_stack_3->SetBinContent(1,0.63311);
   hdirt_stack_3->SetBinContent(2,4.375843);
   hdirt_stack_3->SetBinContent(3,3.161236);
   hdirt_stack_3->SetBinContent(4,2.776877);
   hdirt_stack_3->SetBinContent(5,3.679023);
   hdirt_stack_3->SetBinContent(6,0.9499705);
   hdirt_stack_3->SetBinContent(7,1.417716);
   hdirt_stack_3->SetBinContent(8,1.081354);
   hdirt_stack_3->SetBinContent(9,0.1380715);
   hdirt_stack_3->SetBinContent(11,0.6177251);
   hdirt_stack_3->SetBinContent(13,0.4142698);
   hdirt_stack_3->SetBinError(1,0.3242013);
   hdirt_stack_3->SetBinError(2,1.102464);
   hdirt_stack_3->SetBinError(3,0.9220473);
   hdirt_stack_3->SetBinError(4,1.137758);
   hdirt_stack_3->SetBinError(5,1.008471);
   hdirt_stack_3->SetBinError(6,0.4962669);
   hdirt_stack_3->SetBinError(7,0.6091131);
   hdirt_stack_3->SetBinError(8,0.574891);
   hdirt_stack_3->SetBinError(9,0.1380715);
   hdirt_stack_3->SetBinError(11,0.4549508);
   hdirt_stack_3->SetBinError(13,0.4142698);
   hdirt_stack_3->SetEntries(82);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   houtFV_stack_4->SetBinContent(1,14.08862);
   houtFV_stack_4->SetBinContent(2,33.44817);
   houtFV_stack_4->SetBinContent(3,31.87175);
   houtFV_stack_4->SetBinContent(4,27.71197);
   houtFV_stack_4->SetBinContent(5,21.02031);
   houtFV_stack_4->SetBinContent(6,21.24512);
   houtFV_stack_4->SetBinContent(7,9.62201);
   houtFV_stack_4->SetBinContent(8,7.0276);
   houtFV_stack_4->SetBinContent(9,5.791793);
   houtFV_stack_4->SetBinContent(10,6.309238);
   houtFV_stack_4->SetBinContent(11,3.242064);
   houtFV_stack_4->SetBinContent(12,3.24203);
   houtFV_stack_4->SetBinContent(13,2.092294);
   houtFV_stack_4->SetBinContent(14,1.662242);
   houtFV_stack_4->SetBinContent(15,0.536893);
   houtFV_stack_4->SetBinContent(16,1.173134);
   houtFV_stack_4->SetBinContent(17,0.536893);
   houtFV_stack_4->SetBinContent(18,0.7336084);
   houtFV_stack_4->SetBinContent(19,0.3401776);
   houtFV_stack_4->SetBinContent(21,0.744234);
   houtFV_stack_4->SetBinError(1,1.841687);
   houtFV_stack_4->SetBinError(2,2.897245);
   houtFV_stack_4->SetBinError(3,2.865669);
   houtFV_stack_4->SetBinError(4,2.981786);
   houtFV_stack_4->SetBinError(5,2.325781);
   houtFV_stack_4->SetBinError(6,2.345995);
   houtFV_stack_4->SetBinError(7,1.517854);
   houtFV_stack_4->SetBinError(8,1.34446);
   houtFV_stack_4->SetBinError(9,1.216491);
   houtFV_stack_4->SetBinError(10,1.264101);
   houtFV_stack_4->SetBinError(11,0.8772771);
   houtFV_stack_4->SetBinError(12,0.8581671);
   houtFV_stack_4->SetBinError(13,0.7321888);
   houtFV_stack_4->SetBinError(14,0.6513556);
   houtFV_stack_4->SetBinError(15,0.3929602);
   houtFV_stack_4->SetBinError(16,0.514353);
   houtFV_stack_4->SetBinError(17,0.3929602);
   houtFV_stack_4->SetBinError(18,0.4394482);
   houtFV_stack_4->SetBinError(19,0.3401776);
   houtFV_stack_4->SetBinError(21,0.4443531);
   houtFV_stack_4->SetEntries(862);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.212182);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.880327);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.070718);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.838274);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.520683);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.245587);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5329314);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.7698691);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7062643);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.7086915);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3644458);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.4817998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.09658801);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3687109);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1977595);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.07441414);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.09901901);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.4844061);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3923641);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.4979162);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5115886);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.3002708);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5995363);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.4490664);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1858997);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.33904);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.320135);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3268467);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1080553);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.200592);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.08925162);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2052779);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1715382);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04466495);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.007666246);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.05740778);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.3525195);
   hNCpi0inFVcoh_stack_5->SetEntries(238);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.0589169);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05697699);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.22939);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.04756694);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.08915571);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04448979);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01071203);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.02935829);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1505552);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.04111027);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.04601758);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.03635368);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02414102);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03728024);
   hNCpi0inFVqe_stack_6->SetEntries(22);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVres_stack_7->SetBinContent(1,9.183851);
   hNCpi0inFVres_stack_7->SetBinContent(2,11.80342);
   hNCpi0inFVres_stack_7->SetBinContent(3,14.65843);
   hNCpi0inFVres_stack_7->SetBinContent(4,16.28981);
   hNCpi0inFVres_stack_7->SetBinContent(5,11.90736);
   hNCpi0inFVres_stack_7->SetBinContent(6,13.24488);
   hNCpi0inFVres_stack_7->SetBinContent(7,8.279142);
   hNCpi0inFVres_stack_7->SetBinContent(8,7.630999);
   hNCpi0inFVres_stack_7->SetBinContent(9,6.453094);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.244693);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.079329);
   hNCpi0inFVres_stack_7->SetBinContent(12,2.526674);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.917238);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.6782967);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.395162);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.8104849);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.3007065);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2884797);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.2712418);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.1111622);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.6204798);
   hNCpi0inFVres_stack_7->SetBinError(1,1.087439);
   hNCpi0inFVres_stack_7->SetBinError(2,1.076577);
   hNCpi0inFVres_stack_7->SetBinError(3,1.243203);
   hNCpi0inFVres_stack_7->SetBinError(4,1.393234);
   hNCpi0inFVres_stack_7->SetBinError(5,1.113001);
   hNCpi0inFVres_stack_7->SetBinError(6,1.174395);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9853517);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9549399);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8907633);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8329863);
   hNCpi0inFVres_stack_7->SetBinError(11,0.4964657);
   hNCpi0inFVres_stack_7->SetBinError(12,0.5300745);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4529161);
   hNCpi0inFVres_stack_7->SetBinError(14,0.1534739);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4235333);
   hNCpi0inFVres_stack_7->SetBinError(16,0.2868218);
   hNCpi0inFVres_stack_7->SetBinError(17,0.1050929);
   hNCpi0inFVres_stack_7->SetBinError(18,0.1454091);
   hNCpi0inFVres_stack_7->SetBinError(19,0.1371673);
   hNCpi0inFVres_stack_7->SetBinError(20,0.05079474);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1900448);
   hNCpi0inFVres_stack_7->SetEntries(2539);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.507858);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.785847);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.654141);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.337041);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.830242);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.454181);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.160338);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.89495);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.299099);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.191207);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.474844);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.9243997);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.8440078);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.1799222);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.04428174);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.1675951);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.09855201);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.08437905);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.2173828);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.1485998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.7687352);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6366513);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5723446);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4756895);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7173662);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8956304);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.8482426);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6270833);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3364646);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3140105);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.584773);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5468962);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3745303);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2816085);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.07689954);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.02700219);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.07790741);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.04503752);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.06006757);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1421699);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1070913);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3357113);
   hNCpi0inFVdis_stack_8->SetEntries(652);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hCCpi0inFV_stack_10->SetBinContent(1,14.5318);
   hCCpi0inFV_stack_10->SetBinContent(2,20.11311);
   hCCpi0inFV_stack_10->SetBinContent(3,15.41228);
   hCCpi0inFV_stack_10->SetBinContent(4,20.52589);
   hCCpi0inFV_stack_10->SetBinContent(5,18.12856);
   hCCpi0inFV_stack_10->SetBinContent(6,20.83797);
   hCCpi0inFV_stack_10->SetBinContent(7,16.06116);
   hCCpi0inFV_stack_10->SetBinContent(8,12.3541);
   hCCpi0inFV_stack_10->SetBinContent(9,10.29157);
   hCCpi0inFV_stack_10->SetBinContent(10,12.40287);
   hCCpi0inFV_stack_10->SetBinContent(11,5.87119);
   hCCpi0inFV_stack_10->SetBinContent(12,5.544746);
   hCCpi0inFV_stack_10->SetBinContent(13,2.931052);
   hCCpi0inFV_stack_10->SetBinContent(14,2.442341);
   hCCpi0inFV_stack_10->SetBinContent(15,2.197444);
   hCCpi0inFV_stack_10->SetBinContent(16,1.900725);
   hCCpi0inFV_stack_10->SetBinContent(17,2.105544);
   hCCpi0inFV_stack_10->SetBinContent(18,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(19,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(20,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(21,1.568651);
   hCCpi0inFV_stack_10->SetBinError(1,1.961925);
   hCCpi0inFV_stack_10->SetBinError(2,2.355755);
   hCCpi0inFV_stack_10->SetBinError(3,1.929338);
   hCCpi0inFV_stack_10->SetBinError(4,2.282377);
   hCCpi0inFV_stack_10->SetBinError(5,2.156499);
   hCCpi0inFV_stack_10->SetBinError(6,2.316926);
   hCCpi0inFV_stack_10->SetBinError(7,2.006214);
   hCCpi0inFV_stack_10->SetBinError(8,1.737525);
   hCCpi0inFV_stack_10->SetBinError(9,1.612878);
   hCCpi0inFV_stack_10->SetBinError(10,1.820801);
   hCCpi0inFV_stack_10->SetBinError(11,1.18715);
   hCCpi0inFV_stack_10->SetBinError(12,1.198462);
   hCCpi0inFV_stack_10->SetBinError(13,0.8781425);
   hCCpi0inFV_stack_10->SetBinError(14,0.759212);
   hCCpi0inFV_stack_10->SetBinError(15,0.760276);
   hCCpi0inFV_stack_10->SetBinError(16,0.6937472);
   hCCpi0inFV_stack_10->SetBinError(17,0.6797106);
   hCCpi0inFV_stack_10->SetBinError(18,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(19,0.340721);
   hCCpi0inFV_stack_10->SetBinError(20,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(21,0.5546069);
   hCCpi0inFV_stack_10->SetEntries(790);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hNCinFV_stack_11->SetBinContent(1,2.564128);
   hNCinFV_stack_11->SetBinContent(2,2.108772);
   hNCinFV_stack_11->SetBinContent(3,2.016397);
   hNCinFV_stack_11->SetBinContent(4,3.016533);
   hNCinFV_stack_11->SetBinContent(5,3.032334);
   hNCinFV_stack_11->SetBinContent(6,2.556741);
   hNCinFV_stack_11->SetBinContent(7,3.693402);
   hNCinFV_stack_11->SetBinContent(8,3.346582);
   hNCinFV_stack_11->SetBinContent(9,1.792064);
   hNCinFV_stack_11->SetBinContent(10,2.690382);
   hNCinFV_stack_11->SetBinContent(11,1.458646);
   hNCinFV_stack_11->SetBinContent(12,2.207944);
   hNCinFV_stack_11->SetBinContent(13,1.087312);
   hNCinFV_stack_11->SetBinContent(14,0.2232218);
   hNCinFV_stack_11->SetBinContent(15,0.4573095);
   hNCinFV_stack_11->SetBinContent(16,0.3917402);
   hNCinFV_stack_11->SetBinContent(17,0.556244);
   hNCinFV_stack_11->SetBinContent(18,0.1199161);
   hNCinFV_stack_11->SetBinContent(19,0.3917402);
   hNCinFV_stack_11->SetBinContent(20,0.3257984);
   hNCinFV_stack_11->SetBinContent(21,0.3917402);
   hNCinFV_stack_11->SetBinError(1,0.8395662);
   hNCinFV_stack_11->SetBinError(2,0.7296932);
   hNCinFV_stack_11->SetBinError(3,0.624093);
   hNCinFV_stack_11->SetBinError(4,1.16487);
   hNCinFV_stack_11->SetBinError(5,0.7678813);
   hNCinFV_stack_11->SetBinError(6,0.7667985);
   hNCinFV_stack_11->SetBinError(7,1.086686);
   hNCinFV_stack_11->SetBinError(8,1.056242);
   hNCinFV_stack_11->SetBinError(9,0.7337665);
   hNCinFV_stack_11->SetBinError(10,0.8243574);
   hNCinFV_stack_11->SetBinError(11,0.5686964);
   hNCinFV_stack_11->SetBinError(12,0.8716079);
   hNCinFV_stack_11->SetBinError(13,0.5699821);
   hNCinFV_stack_11->SetBinError(14,0.2232218);
   hNCinFV_stack_11->SetBinError(15,0.3265061);
   hNCinFV_stack_11->SetBinError(16,0.2770047);
   hNCinFV_stack_11->SetBinError(17,0.556244);
   hNCinFV_stack_11->SetBinError(18,0.1199161);
   hNCinFV_stack_11->SetBinError(19,0.2770047);
   hNCinFV_stack_11->SetBinError(20,0.2352857);
   hNCinFV_stack_11->SetBinError(21,0.2770047);
   hNCinFV_stack_11->SetEntries(152);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnumuCCinFV_stack_12->SetBinContent(1,5.732878);
   hnumuCCinFV_stack_12->SetBinContent(2,11.32998);
   hnumuCCinFV_stack_12->SetBinContent(3,9.901792);
   hnumuCCinFV_stack_12->SetBinContent(4,12.17761);
   hnumuCCinFV_stack_12->SetBinContent(5,9.597635);
   hnumuCCinFV_stack_12->SetBinContent(6,9.248607);
   hnumuCCinFV_stack_12->SetBinContent(7,12.56503);
   hnumuCCinFV_stack_12->SetBinContent(8,4.698074);
   hnumuCCinFV_stack_12->SetBinContent(9,5.567453);
   hnumuCCinFV_stack_12->SetBinContent(10,5.463052);
   hnumuCCinFV_stack_12->SetBinContent(11,2.42878);
   hnumuCCinFV_stack_12->SetBinContent(12,2.542699);
   hnumuCCinFV_stack_12->SetBinContent(13,0.9671977);
   hnumuCCinFV_stack_12->SetBinContent(14,2.199135);
   hnumuCCinFV_stack_12->SetBinContent(15,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(16,0.3900497);
   hnumuCCinFV_stack_12->SetBinContent(17,0.7834804);
   hnumuCCinFV_stack_12->SetBinContent(19,0.1950248);
   hnumuCCinFV_stack_12->SetBinContent(20,0.6803553);
   hnumuCCinFV_stack_12->SetBinContent(21,1.374924);
   hnumuCCinFV_stack_12->SetBinError(1,1.584423);
   hnumuCCinFV_stack_12->SetBinError(2,1.748788);
   hnumuCCinFV_stack_12->SetBinError(3,1.716037);
   hnumuCCinFV_stack_12->SetBinError(4,1.817748);
   hnumuCCinFV_stack_12->SetBinError(5,1.856658);
   hnumuCCinFV_stack_12->SetBinError(6,1.560719);
   hnumuCCinFV_stack_12->SetBinError(7,3.273767);
   hnumuCCinFV_stack_12->SetBinError(8,1.102235);
   hnumuCCinFV_stack_12->SetBinError(9,1.221819);
   hnumuCCinFV_stack_12->SetBinError(10,1.17074);
   hnumuCCinFV_stack_12->SetBinError(11,0.7876624);
   hnumuCCinFV_stack_12->SetBinError(12,0.7876764);
   hnumuCCinFV_stack_12->SetBinError(13,0.4976732);
   hnumuCCinFV_stack_12->SetBinError(14,0.7607114);
   hnumuCCinFV_stack_12->SetBinError(15,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(16,0.2758068);
   hnumuCCinFV_stack_12->SetBinError(17,0.3917439);
   hnumuCCinFV_stack_12->SetBinError(19,0.1950249);
   hnumuCCinFV_stack_12->SetBinError(20,0.4810838);
   hnumuCCinFV_stack_12->SetBinError(21,0.5910389);
   hnumuCCinFV_stack_12->SetEntries(389);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hnueCCinFV_stack_13->SetBinContent(1,0.6534058);
   hnueCCinFV_stack_13->SetBinContent(2,2.077021);
   hnueCCinFV_stack_13->SetBinContent(3,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.8064182);
   hnueCCinFV_stack_13->SetBinContent(7,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(10,0.4430457);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(19,0.1967154);
   hnueCCinFV_stack_13->SetBinError(1,0.4972556);
   hnueCCinFV_stack_13->SetBinError(2,0.9852322);
   hnueCCinFV_stack_13->SetBinError(3,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.4036537);
   hnueCCinFV_stack_13->SetBinError(7,0.3025491);
   hnueCCinFV_stack_13->SetBinError(10,0.3152389);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(19,0.1967154);
   hnueCCinFV_stack_13->SetEntries(18);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);
   hmcerror__23->SetBinContent(1,71.50626);
   hmcerror__23->SetBinContent(2,134.2827);
   hmcerror__23->SetBinContent(3,131.1779);
   hmcerror__23->SetBinContent(4,125.7362);
   hmcerror__23->SetBinContent(5,91.20161);
   hmcerror__23->SetBinContent(6,95.01213);
   hmcerror__23->SetBinContent(7,68.51338);
   hmcerror__23->SetBinContent(8,45.90677);
   hmcerror__23->SetBinContent(9,35.6129);
   hmcerror__23->SetBinContent(10,42.84604);
   hmcerror__23->SetBinContent(11,22.03021);
   hmcerror__23->SetBinContent(12,19.63628);
   hmcerror__23->SetBinContent(13,11.09674);
   hmcerror__23->SetBinContent(14,8.484865);
   hmcerror__23->SetBinContent(15,5.705727);
   hmcerror__23->SetBinContent(16,5.706482);
   hmcerror__23->SetBinContent(17,4.713484);
   hmcerror__23->SetBinContent(18,2.43774);
   hmcerror__23->SetBinContent(19,2.542606);
   hmcerror__23->SetBinContent(20,2.692701);
   hmcerror__23->SetBinContent(21,6.721448);
   hmcerror__23->SetBinError(1,22.84086);
   hmcerror__23->SetBinError(2,31.0858);
   hmcerror__23->SetBinError(3,34.88769);
   hmcerror__23->SetBinError(4,30.03075);
   hmcerror__23->SetBinError(5,27.31122);
   hmcerror__23->SetBinError(6,29.29236);
   hmcerror__23->SetBinError(7,27.22534);
   hmcerror__23->SetBinError(8,16.2533);
   hmcerror__23->SetBinError(9,14.51212);
   hmcerror__23->SetBinError(10,20.53195);
   hmcerror__23->SetBinError(11,11.80192);
   hmcerror__23->SetBinError(12,12.13685);
   hmcerror__23->SetBinError(13,9.914809);
   hmcerror__23->SetBinError(14,7.412384);
   hmcerror__23->SetBinError(15,6.520109);
   hmcerror__23->SetBinError(16,6.709181);
   hmcerror__23->SetBinError(17,7.07546);
   hmcerror__23->SetBinError(18,3.029619);
   hmcerror__23->SetBinError(19,3.860353);
   hmcerror__23->SetBinError(20,3.251553);
   hmcerror__23->SetBinError(21,5.139391);
   hmcerror__23->SetEntries(948.2139);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3029[20] = {
   64,
   128,
   124,
   112,
   118,
   75,
   70,
   48,
   34,
   27,
   17,
   17,
   7,
   16,
   10,
   4,
   6,
   1,
   0,
   2};
   Double_t _felx3029[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3029[20] = {
   8.1273,
   11.31371,
   11.13553,
   10.58301,
   10.86278,
   8.7852,
   8.4925,
   7.0604,
   5.9703,
   5.3414,
   4.2835,
   4.2835,
   2.85954,
   4.1628,
   3.34883,
   2.29683,
   2.67925,
   1,
   0,
   2};
   Double_t _fehx3029[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3029[20] = {
   7.9246,
   11.31371,
   11.13553,
   10.58301,
   10.86278,
   8.5831,
   8.2902,
   6.8561,
   5.7635,
   5.1322,
   4.0673,
   4.0673,
   2.61053,
   3.9454,
   3.1179,
   1.98186,
   2.41858,
   1.35971,
   1.1478,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,330);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(153.2451);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.4/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 880.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 33.0","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 198.4","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 19.2","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 191.7","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.2","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  116.1","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  32.3","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 185.4","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 34.0","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 96.7","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.9","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-46.2,-0.5333333,338.8,2.133333);
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
   
   Double_t _fx3030[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3030[20] = {
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
   Double_t _felx3030[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3030[20] = {
   0.3194246,
   0.2314952,
   0.265957,
   0.2388393,
   0.2994599,
   0.3083013,
   0.3973726,
   0.3540502,
   0.4074961,
   0.4792031,
   0.5357154,
   0.618083,
   0.8934888,
   0.8736006,
   1.142731,
   1.175712,
   1.50111,
   1.242798,
   1.518266,
   1.207543};
   Double_t _fehx3030[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3030[20] = {
   0.3194246,
   0.2314952,
   0.265957,
   0.2388393,
   0.2994599,
   0.3083013,
   0.3973726,
   0.3540502,
   0.4074961,
   0.4792031,
   0.5357154,
   0.618083,
   0.8934888,
   0.8736006,
   1.142731,
   1.175712,
   1.50111,
   1.242798,
   1.518266,
   1.207543};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,330);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Sub-leading shower Energy [MeV]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3031[20] = {
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
   Double_t _felx3031[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3031[20] = {
   0.1758212,
   0.1506964,
   0.149798,
   0.1506703,
   0.1830519,
   0.1762187,
   0.1904244,
   0.2172505,
   0.2235325,
   0.2131423,
   0.2114484,
   0.2258215,
   0.3037635,
   0.3228955,
   0.3596804,
   0.3655708,
   0.3496416,
   0.4322886,
   0.4703197,
   0.4646002};
   Double_t _fehx3031[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3031[20] = {
   0.1758212,
   0.1506964,
   0.149798,
   0.1506703,
   0.1830519,
   0.1762187,
   0.1904244,
   0.2172505,
   0.2235325,
   0.2131423,
   0.2114484,
   0.2258215,
   0.3037635,
   0.3228955,
   0.3596804,
   0.3655708,
   0.3496416,
   0.4322886,
   0.4703197,
   0.4646002};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,330);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[20] = {
   7.5,
   22.5,
   37.5,
   52.5,
   67.5,
   82.5,
   97.5,
   112.5,
   127.5,
   142.5,
   157.5,
   172.5,
   187.5,
   202.5,
   217.5,
   232.5,
   247.5,
   262.5,
   277.5,
   292.5};
   Double_t _fy3032[20] = {
   0.8950265,
   0.9532127,
   0.9452809,
   0.8907537,
   1.293837,
   0.7893729,
   1.021698,
   1.045597,
   0.9547102,
   0.6301633,
   0.7716675,
   0.8657444,
   0.6308161,
   1.885711,
   1.752625,
   0.7009573,
   1.272944,
   0.410216,
   0,
   0.7427487};
   Double_t _felx3032[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fely3032[20] = {
   0.1136586,
   0.08425289,
   0.08488873,
   0.08416831,
   0.1191073,
   0.09246398,
   0.1239539,
   0.1537987,
   0.1676443,
   0.124665,
   0.1944375,
   0.2181421,
   0.257692,
   0.4906147,
   0.5869244,
   0.4024949,
   0.5684224,
   0.410216,
   0,
   0.7427487};
   Double_t _fehx3032[20] = {
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5,
   7.5};
   Double_t _fehy3032[20] = {
   0.1108239,
   0.08425289,
   0.08488873,
   0.08416831,
   0.1191073,
   0.09033689,
   0.1210012,
   0.1493483,
   0.1618374,
   0.1197824,
   0.1846237,
   0.2071319,
   0.2352521,
   0.4649927,
   0.546451,
   0.3472998,
   0.5131194,
   0.5577747,
   0.4514265,
   0.5641808};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,330);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.585774);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_low_all",20,0,300);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(0,1,300,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
