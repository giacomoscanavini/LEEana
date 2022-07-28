#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Jun  1 13:33:34 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
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
   pad1->Range(-230.7692,-342.6324,1692.308,36084.6);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   hmc__1->SetBinContent(1,5702.771);
   hmc__1->SetBinContent(2,17131.62);
   hmc__1->SetBinContent(3,13840.9);
   hmc__1->SetBinContent(4,10891.77);
   hmc__1->SetBinContent(5,8539.801);
   hmc__1->SetBinContent(6,6755.253);
   hmc__1->SetBinContent(7,5291.074);
   hmc__1->SetBinContent(8,3988.925);
   hmc__1->SetBinContent(9,2976.373);
   hmc__1->SetBinContent(10,2241.137);
   hmc__1->SetBinContent(11,1651.362);
   hmc__1->SetBinContent(12,1308.533);
   hmc__1->SetBinContent(13,938.4107);
   hmc__1->SetBinContent(14,679.4577);
   hmc__1->SetBinContent(15,509.6197);
   hmc__1->SetBinContent(16,387.1104);
   hmc__1->SetBinContent(17,298.4056);
   hmc__1->SetBinContent(18,205.8008);
   hmc__1->SetBinContent(19,168.6914);
   hmc__1->SetBinContent(20,123.6801);
   hmc__1->SetBinContent(21,565.2731);
   hmc__1->SetBinError(1,743.52);
   hmc__1->SetBinError(2,2513.523);
   hmc__1->SetBinError(3,1948.13);
   hmc__1->SetBinError(4,1476.549);
   hmc__1->SetBinError(5,1178.962);
   hmc__1->SetBinError(6,928.6244);
   hmc__1->SetBinError(7,840.0255);
   hmc__1->SetBinError(8,681.1856);
   hmc__1->SetBinError(9,513.802);
   hmc__1->SetBinError(10,435.9812);
   hmc__1->SetBinError(11,379.2265);
   hmc__1->SetBinError(12,316.244);
   hmc__1->SetBinError(13,235.376);
   hmc__1->SetBinError(14,196.3263);
   hmc__1->SetBinError(15,137.1657);
   hmc__1->SetBinError(16,143.8463);
   hmc__1->SetBinError(17,80.20085);
   hmc__1->SetBinError(18,74.82779);
   hmc__1->SetBinError(19,55.46425);
   hmc__1->SetBinError(20,33.61253);
   hmc__1->SetBinError(21,130.5591);
   hmc__1->SetMinimum(-342.6324);
   hmc__1->SetMaximum(34263.24);
   hmc__1->SetEntries(75744.3);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,1500);
   hs1_stack_1->SetMinimum(0);
   hs1_stack_1->SetMaximum(17988.2);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(1,819.3612);
   hbadmatch_stack_1->SetBinContent(2,952.8036);
   hbadmatch_stack_1->SetBinContent(3,471.6916);
   hbadmatch_stack_1->SetBinContent(4,221.8222);
   hbadmatch_stack_1->SetBinContent(5,109.541);
   hbadmatch_stack_1->SetBinContent(6,72.12689);
   hbadmatch_stack_1->SetBinContent(7,44.69717);
   hbadmatch_stack_1->SetBinContent(8,45.95645);
   hbadmatch_stack_1->SetBinContent(9,22.14314);
   hbadmatch_stack_1->SetBinContent(10,13.67224);
   hbadmatch_stack_1->SetBinContent(11,10.62991);
   hbadmatch_stack_1->SetBinContent(12,7.670291);
   hbadmatch_stack_1->SetBinContent(13,3.606489);
   hbadmatch_stack_1->SetBinContent(14,4.049106);
   hbadmatch_stack_1->SetBinContent(15,2.68279);
   hbadmatch_stack_1->SetBinContent(16,3.169396);
   hbadmatch_stack_1->SetBinContent(17,0.6528017);
   hbadmatch_stack_1->SetBinContent(18,0.9286332);
   hbadmatch_stack_1->SetBinContent(19,0.6673293);
   hbadmatch_stack_1->SetBinContent(20,1.400803);
   hbadmatch_stack_1->SetBinContent(21,5.435462);
   hbadmatch_stack_1->SetBinError(1,17.51144);
   hbadmatch_stack_1->SetBinError(2,22.1928);
   hbadmatch_stack_1->SetBinError(3,13.5892);
   hbadmatch_stack_1->SetBinError(4,8.739991);
   hbadmatch_stack_1->SetBinError(5,7.501263);
   hbadmatch_stack_1->SetBinError(6,9.97137);
   hbadmatch_stack_1->SetBinError(7,4.22545);
   hbadmatch_stack_1->SetBinError(8,5.953288);
   hbadmatch_stack_1->SetBinError(9,2.616115);
   hbadmatch_stack_1->SetBinError(10,2.159088);
   hbadmatch_stack_1->SetBinError(11,1.706611);
   hbadmatch_stack_1->SetBinError(12,1.492974);
   hbadmatch_stack_1->SetBinError(13,1.113809);
   hbadmatch_stack_1->SetBinError(14,1.420977);
   hbadmatch_stack_1->SetBinError(15,0.8448727);
   hbadmatch_stack_1->SetBinError(16,0.9792468);
   hbadmatch_stack_1->SetBinError(17,0.3778813);
   hbadmatch_stack_1->SetBinError(18,0.48078);
   hbadmatch_stack_1->SetBinError(19,0.48794);
   hbadmatch_stack_1->SetBinError(20,0.6648352);
   hbadmatch_stack_1->SetBinError(21,1.212248);
   hbadmatch_stack_1->SetEntries(10625);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   hext_stack_2->SetBinContent(1,2219.384);
   hext_stack_2->SetBinContent(2,3401.029);
   hext_stack_2->SetBinContent(3,1716.831);
   hext_stack_2->SetBinContent(4,883.2265);
   hext_stack_2->SetBinContent(5,503.998);
   hext_stack_2->SetBinContent(6,347.0477);
   hext_stack_2->SetBinContent(7,211.8093);
   hext_stack_2->SetBinContent(8,137.6341);
   hext_stack_2->SetBinContent(9,85.20357);
   hext_stack_2->SetBinContent(10,56.89948);
   hext_stack_2->SetBinContent(11,41.63958);
   hext_stack_2->SetBinContent(12,43.8601);
   hext_stack_2->SetBinContent(13,24.32911);
   hext_stack_2->SetBinContent(14,15.7128);
   hext_stack_2->SetBinContent(15,14.33024);
   hext_stack_2->SetBinContent(16,17.35513);
   hext_stack_2->SetBinContent(17,8.332225);
   hext_stack_2->SetBinContent(18,9.857649);
   hext_stack_2->SetBinContent(19,9.119473);
   hext_stack_2->SetBinContent(20,11.12652);
   hext_stack_2->SetBinContent(21,112.1542);
   hext_stack_2->SetBinError(1,32.50595);
   hext_stack_2->SetBinError(2,39.56279);
   hext_stack_2->SetBinError(3,27.72336);
   hext_stack_2->SetBinError(4,19.84074);
   hext_stack_2->SetBinError(5,14.92909);
   hext_stack_2->SetBinError(6,12.49981);
   hext_stack_2->SetBinError(7,9.903267);
   hext_stack_2->SetBinError(8,8.069539);
   hext_stack_2->SetBinError(9,6.110888);
   hext_stack_2->SetBinError(10,4.970929);
   hext_stack_2->SetBinError(11,4.399862);
   hext_stack_2->SetBinError(12,4.637222);
   hext_stack_2->SetBinError(13,3.363023);
   hext_stack_2->SetBinError(14,2.56569);
   hext_stack_2->SetBinError(15,2.537335);
   hext_stack_2->SetBinError(16,2.939985);
   hext_stack_2->SetBinError(17,1.936759);
   hext_stack_2->SetBinError(18,2.149306);
   hext_stack_2->SetBinError(19,2.133111);
   hext_stack_2->SetBinError(20,2.417697);
   hext_stack_2->SetBinError(21,7.277795);
   hext_stack_2->SetEntries(23297);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   hdirt_stack_3->SetBinContent(1,595.9878);
   hdirt_stack_3->SetBinContent(2,828.9231);
   hdirt_stack_3->SetBinContent(3,305.0992);
   hdirt_stack_3->SetBinContent(4,132.809);
   hdirt_stack_3->SetBinContent(5,64.25117);
   hdirt_stack_3->SetBinContent(6,35.75533);
   hdirt_stack_3->SetBinContent(7,24.55114);
   hdirt_stack_3->SetBinContent(8,14.5186);
   hdirt_stack_3->SetBinContent(9,10.70454);
   hdirt_stack_3->SetBinContent(10,10.20075);
   hdirt_stack_3->SetBinContent(11,5.014107);
   hdirt_stack_3->SetBinContent(12,8.542952);
   hdirt_stack_3->SetBinContent(13,6.131079);
   hdirt_stack_3->SetBinContent(14,2.146526);
   hdirt_stack_3->SetBinContent(15,1.952112);
   hdirt_stack_3->SetBinContent(16,0.9975677);
   hdirt_stack_3->SetBinContent(17,1.127182);
   hdirt_stack_3->SetBinContent(18,1.486939);
   hdirt_stack_3->SetBinContent(19,1.452919);
   hdirt_stack_3->SetBinContent(20,0.6393987);
   hdirt_stack_3->SetBinContent(21,6.385535);
   hdirt_stack_3->SetBinError(1,15.6299);
   hdirt_stack_3->SetBinError(2,18.29269);
   hdirt_stack_3->SetBinError(3,11.10355);
   hdirt_stack_3->SetBinError(4,6.45821);
   hdirt_stack_3->SetBinError(5,5.01694);
   hdirt_stack_3->SetBinError(6,3.523512);
   hdirt_stack_3->SetBinError(7,2.840428);
   hdirt_stack_3->SetBinError(8,2.886645);
   hdirt_stack_3->SetBinError(9,1.770371);
   hdirt_stack_3->SetBinError(10,2.862539);
   hdirt_stack_3->SetBinError(11,1.149432);
   hdirt_stack_3->SetBinError(12,3.159325);
   hdirt_stack_3->SetBinError(13,1.77633);
   hdirt_stack_3->SetBinError(14,0.6747637);
   hdirt_stack_3->SetBinError(15,0.7748634);
   hdirt_stack_3->SetBinError(16,0.5299665);
   hdirt_stack_3->SetBinError(17,0.546831);
   hdirt_stack_3->SetBinError(18,0.6547436);
   hdirt_stack_3->SetBinError(19,0.531368);
   hdirt_stack_3->SetBinError(20,0.4000612);
   hdirt_stack_3->SetBinError(21,1.219732);
   hdirt_stack_3->SetEntries(8365);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   houtFV_stack_4->SetBinContent(1,506.7919);
   houtFV_stack_4->SetBinContent(2,1230.91);
   houtFV_stack_4->SetBinContent(3,515.6958);
   houtFV_stack_4->SetBinContent(4,229.2881);
   houtFV_stack_4->SetBinContent(5,108.6613);
   houtFV_stack_4->SetBinContent(6,56.53959);
   houtFV_stack_4->SetBinContent(7,35.8674);
   houtFV_stack_4->SetBinContent(8,25.6771);
   houtFV_stack_4->SetBinContent(9,9.846554);
   houtFV_stack_4->SetBinContent(10,10.74577);
   houtFV_stack_4->SetBinContent(11,7.746751);
   houtFV_stack_4->SetBinContent(12,7.985353);
   houtFV_stack_4->SetBinContent(13,4.131715);
   houtFV_stack_4->SetBinContent(14,1.502561);
   houtFV_stack_4->SetBinContent(15,1.573509);
   houtFV_stack_4->SetBinContent(16,0.66983);
   houtFV_stack_4->SetBinContent(17,0.7488653);
   houtFV_stack_4->SetBinContent(18,1.819647);
   houtFV_stack_4->SetBinContent(19,0.1967154);
   houtFV_stack_4->SetBinContent(20,0.4101585);
   houtFV_stack_4->SetBinContent(21,3.370483);
   houtFV_stack_4->SetBinError(1,11.49841);
   houtFV_stack_4->SetBinError(2,18.82832);
   houtFV_stack_4->SetBinError(3,12.05903);
   houtFV_stack_4->SetBinError(4,8.162533);
   houtFV_stack_4->SetBinError(5,5.607975);
   houtFV_stack_4->SetBinError(6,4.531248);
   houtFV_stack_4->SetBinError(7,4.029366);
   houtFV_stack_4->SetBinError(8,3.176526);
   houtFV_stack_4->SetBinError(9,1.693204);
   houtFV_stack_4->SetBinError(10,2.881355);
   houtFV_stack_4->SetBinError(11,1.461016);
   houtFV_stack_4->SetBinError(12,2.853789);
   houtFV_stack_4->SetBinError(13,0.9677898);
   houtFV_stack_4->SetBinError(14,0.7199666);
   houtFV_stack_4->SetBinError(15,0.5951968);
   houtFV_stack_4->SetBinError(16,0.3889713);
   houtFV_stack_4->SetBinError(17,0.4465505);
   houtFV_stack_4->SetBinError(18,0.7072168);
   houtFV_stack_4->SetBinError(19,0.1967154);
   houtFV_stack_4->SetBinError(20,0.2903742);
   houtFV_stack_4->SetBinError(21,1.114519);
   houtFV_stack_4->SetEntries(11501);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,7.554779);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,41.59525);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,34.81818);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,22.8952);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,12.45475);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,8.548403);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.615806);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.384462);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.964962);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.770326);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.254508);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.9768358);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.9760038);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.7249039);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.686962);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.8087721);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.561576);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.8562766);
   hNCpi0inFVcoh_stack_5->SetBinError(2,2.091976);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.923448);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.598918);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.218808);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.010911);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6720233);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4809589);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.4094145);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3855887);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3571158);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3045688);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2711014);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2578571);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4602838);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3187231);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4109174);
   hNCpi0inFVcoh_stack_5->SetEntries(2722);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,549.2974);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,1937.799);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,1245.697);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,731.1626);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,407.1403);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,249.7249);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,149.2333);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,96.55679);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,68.29433);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,42.00675);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,32.3085);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,23.17208);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,17.65413);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,14.43317);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,10.33267);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,7.697945);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,7.38938);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,4.08637);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,5.25904);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,3.514088);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,25.62476);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,7.646044);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,14.30112);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,11.57895);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,8.893517);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,6.572862);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,5.173108);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.943117);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.170486);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,2.69047);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,2.041664);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,1.859592);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,1.578411);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,1.388674);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,1.275731);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,1.04821);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,0.9379148);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,0.9124633);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.6506403);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.7235379);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.6435229);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,1.651445);
   hNCpi0inFVnoncoh_stack_6->SetEntries(104509);

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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   hCCpi0inFV_stack_7->SetBinContent(1,66.02207);
   hCCpi0inFV_stack_7->SetBinContent(2,524.2419);
   hCCpi0inFV_stack_7->SetBinContent(3,761.4298);
   hCCpi0inFV_stack_7->SetBinContent(4,834.2166);
   hCCpi0inFV_stack_7->SetBinContent(5,786.444);
   hCCpi0inFV_stack_7->SetBinContent(6,705.281);
   hCCpi0inFV_stack_7->SetBinContent(7,619.4622);
   hCCpi0inFV_stack_7->SetBinContent(8,499.6121);
   hCCpi0inFV_stack_7->SetBinContent(9,392.5223);
   hCCpi0inFV_stack_7->SetBinContent(10,301.5944);
   hCCpi0inFV_stack_7->SetBinContent(11,234.9581);
   hCCpi0inFV_stack_7->SetBinContent(12,188.6945);
   hCCpi0inFV_stack_7->SetBinContent(13,129.1168);
   hCCpi0inFV_stack_7->SetBinContent(14,94.83946);
   hCCpi0inFV_stack_7->SetBinContent(15,73.06593);
   hCCpi0inFV_stack_7->SetBinContent(16,54.20356);
   hCCpi0inFV_stack_7->SetBinContent(17,37.80333);
   hCCpi0inFV_stack_7->SetBinContent(18,33.07146);
   hCCpi0inFV_stack_7->SetBinContent(19,25.17791);
   hCCpi0inFV_stack_7->SetBinContent(20,18.42582);
   hCCpi0inFV_stack_7->SetBinContent(21,100.4567);
   hCCpi0inFV_stack_7->SetBinError(1,4.550394);
   hCCpi0inFV_stack_7->SetBinError(2,11.3866);
   hCCpi0inFV_stack_7->SetBinError(3,13.81758);
   hCCpi0inFV_stack_7->SetBinError(4,14.50747);
   hCCpi0inFV_stack_7->SetBinError(5,14.09435);
   hCCpi0inFV_stack_7->SetBinError(6,13.32646);
   hCCpi0inFV_stack_7->SetBinError(7,12.45441);
   hCCpi0inFV_stack_7->SetBinError(8,11.24066);
   hCCpi0inFV_stack_7->SetBinError(9,9.912549);
   hCCpi0inFV_stack_7->SetBinError(10,8.697653);
   hCCpi0inFV_stack_7->SetBinError(11,7.702159);
   hCCpi0inFV_stack_7->SetBinError(12,6.955042);
   hCCpi0inFV_stack_7->SetBinError(13,5.671408);
   hCCpi0inFV_stack_7->SetBinError(14,4.863932);
   hCCpi0inFV_stack_7->SetBinError(15,4.317307);
   hCCpi0inFV_stack_7->SetBinError(16,3.691794);
   hCCpi0inFV_stack_7->SetBinError(17,3.021766);
   hCCpi0inFV_stack_7->SetBinError(18,2.977669);
   hCCpi0inFV_stack_7->SetBinError(19,2.482683);
   hCCpi0inFV_stack_7->SetBinError(20,2.131816);
   hCCpi0inFV_stack_7->SetBinError(21,4.991339);
   hCCpi0inFV_stack_7->SetEntries(27759);

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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   hNCinFV_stack_8->SetBinContent(1,513.1782);
   hNCinFV_stack_8->SetBinContent(2,4327.309);
   hNCinFV_stack_8->SetBinContent(3,2771.927);
   hNCinFV_stack_8->SetBinContent(4,1389.881);
   hNCinFV_stack_8->SetBinContent(5,725.4888);
   hNCinFV_stack_8->SetBinContent(6,391.4803);
   hNCinFV_stack_8->SetBinContent(7,222.6114);
   hNCinFV_stack_8->SetBinContent(8,123.5427);
   hNCinFV_stack_8->SetBinContent(9,85.62073);
   hNCinFV_stack_8->SetBinContent(10,46.26357);
   hNCinFV_stack_8->SetBinContent(11,30.95255);
   hNCinFV_stack_8->SetBinContent(12,16.49642);
   hNCinFV_stack_8->SetBinContent(13,12.31424);
   hNCinFV_stack_8->SetBinContent(14,10.01487);
   hNCinFV_stack_8->SetBinContent(15,7.812962);
   hNCinFV_stack_8->SetBinContent(16,3.709461);
   hNCinFV_stack_8->SetBinContent(17,3.949895);
   hNCinFV_stack_8->SetBinContent(18,3.517817);
   hNCinFV_stack_8->SetBinContent(19,2.392469);
   hNCinFV_stack_8->SetBinContent(20,0.5884556);
   hNCinFV_stack_8->SetBinContent(21,7.582063);
   hNCinFV_stack_8->SetBinError(1,11.34935);
   hNCinFV_stack_8->SetBinError(2,32.96312);
   hNCinFV_stack_8->SetBinError(3,26.42189);
   hNCinFV_stack_8->SetBinError(4,18.69039);
   hNCinFV_stack_8->SetBinError(5,13.51672);
   hNCinFV_stack_8->SetBinError(6,9.98878);
   hNCinFV_stack_8->SetBinError(7,7.478896);
   hNCinFV_stack_8->SetBinError(8,5.558611);
   hNCinFV_stack_8->SetBinError(9,4.694123);
   hNCinFV_stack_8->SetBinError(10,3.424793);
   hNCinFV_stack_8->SetBinError(11,2.821755);
   hNCinFV_stack_8->SetBinError(12,2.042934);
   hNCinFV_stack_8->SetBinError(13,1.732699);
   hNCinFV_stack_8->SetBinError(14,1.581968);
   hNCinFV_stack_8->SetBinError(15,1.456449);
   hNCinFV_stack_8->SetBinError(16,0.9605263);
   hNCinFV_stack_8->SetBinError(17,1.057182);
   hNCinFV_stack_8->SetBinError(18,0.9412229);
   hNCinFV_stack_8->SetBinError(19,0.7848912);
   hNCinFV_stack_8->SetBinError(20,0.3397478);
   hNCinFV_stack_8->SetBinError(21,1.31589);
   hNCinFV_stack_8->SetEntries(45707);

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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   hnumuCCinFV_stack_9->SetBinContent(1,419.1571);
   hnumuCCinFV_stack_9->SetBinContent(2,3849.514);
   hnumuCCinFV_stack_9->SetBinContent(3,5966.421);
   hnumuCCinFV_stack_9->SetBinContent(4,6390.118);
   hnumuCCinFV_stack_9->SetBinContent(5,5775.434);
   hnumuCCinFV_stack_9->SetBinContent(6,4842.257);
   hnumuCCinFV_stack_9->SetBinContent(7,3938.574);
   hnumuCCinFV_stack_9->SetBinContent(8,3006.913);
   hnumuCCinFV_stack_9->SetBinContent(9,2266.472);
   hnumuCCinFV_stack_9->SetBinContent(10,1729.279);
   hnumuCCinFV_stack_9->SetBinContent(11,1260.655);
   hnumuCCinFV_stack_9->SetBinContent(12,987.4164);
   hnumuCCinFV_stack_9->SetBinContent(13,717.4277);
   hnumuCCinFV_stack_9->SetBinContent(14,513.7029);
   hnumuCCinFV_stack_9->SetBinContent(15,380.6694);
   hnumuCCinFV_stack_9->SetBinContent(16,285.9639);
   hnumuCCinFV_stack_9->SetBinContent(17,229.376);
   hnumuCCinFV_stack_9->SetBinContent(18,141.3635);
   hnumuCCinFV_stack_9->SetBinContent(19,115.5101);
   hnumuCCinFV_stack_9->SetBinContent(20,78.15192);
   hnumuCCinFV_stack_9->SetBinContent(21,232.5934);
   hnumuCCinFV_stack_9->SetBinError(1,19.0492);
   hnumuCCinFV_stack_9->SetBinError(2,47.9101);
   hnumuCCinFV_stack_9->SetBinError(3,53.15076);
   hnumuCCinFV_stack_9->SetBinError(4,52.15629);
   hnumuCCinFV_stack_9->SetBinError(5,49.78019);
   hnumuCCinFV_stack_9->SetBinError(6,46.47694);
   hnumuCCinFV_stack_9->SetBinError(7,44.16092);
   hnumuCCinFV_stack_9->SetBinError(8,39.16343);
   hnumuCCinFV_stack_9->SetBinError(9,34.59311);
   hnumuCCinFV_stack_9->SetBinError(10,31.19379);
   hnumuCCinFV_stack_9->SetBinError(11,26.26766);
   hnumuCCinFV_stack_9->SetBinError(12,25.34311);
   hnumuCCinFV_stack_9->SetBinError(13,22.21617);
   hnumuCCinFV_stack_9->SetBinError(14,17.01284);
   hnumuCCinFV_stack_9->SetBinError(15,15.93938);
   hnumuCCinFV_stack_9->SetBinError(16,12.8684);
   hnumuCCinFV_stack_9->SetBinError(17,13.32025);
   hnumuCCinFV_stack_9->SetBinError(18,8.721223);
   hnumuCCinFV_stack_9->SetBinError(19,10.23693);
   hnumuCCinFV_stack_9->SetBinError(20,7.897925);
   hnumuCCinFV_stack_9->SetBinError(21,11.26971);
   hnumuCCinFV_stack_9->SetEntries(151344);

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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   hnueCCinFV_stack_10->SetBinContent(1,6.035515);
   hnueCCinFV_stack_10->SetBinContent(2,37.49708);
   hnueCCinFV_stack_10->SetBinContent(3,51.29016);
   hnueCCinFV_stack_10->SetBinContent(4,56.35442);
   hnueCCinFV_stack_10->SetBinContent(5,46.38849);
   hnueCCinFV_stack_10->SetBinContent(6,46.49182);
   hnueCCinFV_stack_10->SetBinContent(7,39.6531);
   hnueCCinFV_stack_10->SetBinContent(8,36.12996);
   hnueCCinFV_stack_10->SetBinContent(9,33.60068);
   hnueCCinFV_stack_10->SetBinContent(10,28.70561);
   hnueCCinFV_stack_10->SetBinContent(11,26.20362);
   hnueCCinFV_stack_10->SetBinContent(12,23.71796);
   hnueCCinFV_stack_10->SetBinContent(13,22.72336);
   hnueCCinFV_stack_10->SetBinContent(14,22.33143);
   hnueCCinFV_stack_10->SetBinContent(15,15.51316);
   hnueCCinFV_stack_10->SetBinContent(16,12.85551);
   hnueCCinFV_stack_10->SetBinContent(17,8.217117);
   hnueCCinFV_stack_10->SetBinContent(18,9.515656);
   hnueCCinFV_stack_10->SetBinContent(19,8.762341);
   hnueCCinFV_stack_10->SetBinContent(20,9.199789);
   hnueCCinFV_stack_10->SetBinContent(21,70.1088);
   hnueCCinFV_stack_10->SetBinError(1,1.991905);
   hnueCCinFV_stack_10->SetBinError(2,4.119256);
   hnueCCinFV_stack_10->SetBinError(3,5.011113);
   hnueCCinFV_stack_10->SetBinError(4,4.656173);
   hnueCCinFV_stack_10->SetBinError(5,3.888627);
   hnueCCinFV_stack_10->SetBinError(6,4.285421);
   hnueCCinFV_stack_10->SetBinError(7,3.501184);
   hnueCCinFV_stack_10->SetBinError(8,3.723142);
   hnueCCinFV_stack_10->SetBinError(9,3.220239);
   hnueCCinFV_stack_10->SetBinError(10,3.313999);
   hnueCCinFV_stack_10->SetBinError(11,2.675157);
   hnueCCinFV_stack_10->SetBinError(12,4.271291);
   hnueCCinFV_stack_10->SetBinError(13,3.447572);
   hnueCCinFV_stack_10->SetBinError(14,3.949649);
   hnueCCinFV_stack_10->SetBinError(15,2.71634);
   hnueCCinFV_stack_10->SetBinError(16,1.896407);
   hnueCCinFV_stack_10->SetBinError(17,1.945358);
   hnueCCinFV_stack_10->SetBinError(18,1.622039);
   hnueCCinFV_stack_10->SetBinError(19,1.826433);
   hnueCCinFV_stack_10->SetBinError(20,1.574654);
   hnueCCinFV_stack_10->SetBinError(21,5.948612);
   hnueCCinFV_stack_10->SetEntries(2305);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","generic_FC_bnb_12_visible_energy_all",20,0,1500);
   hmcerror__2->SetBinContent(1,5702.771);
   hmcerror__2->SetBinContent(2,17131.62);
   hmcerror__2->SetBinContent(3,13840.9);
   hmcerror__2->SetBinContent(4,10891.77);
   hmcerror__2->SetBinContent(5,8539.801);
   hmcerror__2->SetBinContent(6,6755.253);
   hmcerror__2->SetBinContent(7,5291.074);
   hmcerror__2->SetBinContent(8,3988.925);
   hmcerror__2->SetBinContent(9,2976.373);
   hmcerror__2->SetBinContent(10,2241.137);
   hmcerror__2->SetBinContent(11,1651.362);
   hmcerror__2->SetBinContent(12,1308.533);
   hmcerror__2->SetBinContent(13,938.4107);
   hmcerror__2->SetBinContent(14,679.4577);
   hmcerror__2->SetBinContent(15,509.6197);
   hmcerror__2->SetBinContent(16,387.1104);
   hmcerror__2->SetBinContent(17,298.4056);
   hmcerror__2->SetBinContent(18,205.8008);
   hmcerror__2->SetBinContent(19,168.6914);
   hmcerror__2->SetBinContent(20,123.6801);
   hmcerror__2->SetBinContent(21,565.2731);
   hmcerror__2->SetBinError(1,743.52);
   hmcerror__2->SetBinError(2,2513.523);
   hmcerror__2->SetBinError(3,1948.13);
   hmcerror__2->SetBinError(4,1476.549);
   hmcerror__2->SetBinError(5,1178.962);
   hmcerror__2->SetBinError(6,928.6244);
   hmcerror__2->SetBinError(7,840.0255);
   hmcerror__2->SetBinError(8,681.1856);
   hmcerror__2->SetBinError(9,513.802);
   hmcerror__2->SetBinError(10,435.9812);
   hmcerror__2->SetBinError(11,379.2265);
   hmcerror__2->SetBinError(12,316.244);
   hmcerror__2->SetBinError(13,235.376);
   hmcerror__2->SetBinError(14,196.3263);
   hmcerror__2->SetBinError(15,137.1657);
   hmcerror__2->SetBinError(16,143.8463);
   hmcerror__2->SetBinError(17,80.20085);
   hmcerror__2->SetBinError(18,74.82779);
   hmcerror__2->SetBinError(19,55.46425);
   hmcerror__2->SetBinError(20,33.61253);
   hmcerror__2->SetBinError(21,130.5591);
   hmcerror__2->SetEntries(75744.3);

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
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3001[20] = {
   5001,
   16615,
   13997,
   11417,
   9442,
   7563,
   5716,
   4248,
   3126,
   2348,
   1748,
   1218,
   860,
   653,
   482,
   319,
   261,
   197,
   138,
   134};
   Double_t _felx3001[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3001[20] = {
   70.71775,
   128.8992,
   118.3089,
   106.8504,
   97.16995,
   86.96551,
   75.60423,
   65.17668,
   55.91064,
   48.45617,
   41.80909,
   34.89986,
   29.32576,
   25.55386,
   21.9545,
   17.86057,
   16.15549,
   14.03567,
   11.74734,
   11.57584};
   Double_t _fehx3001[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3001[20] = {
   70.71775,
   128.8992,
   118.3089,
   106.8504,
   97.16995,
   86.96551,
   75.60423,
   65.17668,
   55.91064,
   48.45617,
   41.80909,
   34.89986,
   29.32576,
   25.55386,
   21.9545,
   17.86057,
   16.15549,
   14.03567,
   11.74734,
   11.57584};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(110.1817);
   Graph_Graph3001->SetMaximum(18406.05);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.14","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=14.7/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 85483.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 2809.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 9758.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2052.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 2756.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  146.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  5602.8","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 6380.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 10689.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 42894.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 541.2","F");

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
   TText *pt_LaTex = pt->AddText("generic_FC_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
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
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3002[20] = {
   0.1303787,
   0.1467184,
   0.1407517,
   0.1355655,
   0.138055,
   0.137467,
   0.1587628,
   0.1707692,
   0.1726269,
   0.1945357,
   0.2296446,
   0.2416782,
   0.2508241,
   0.2889455,
   0.269153,
   0.37159,
   0.2687645,
   0.3635934,
   0.3287913,
   0.2717698};
   Double_t _fehx3002[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3002[20] = {
   0.1303787,
   0.1467184,
   0.1407517,
   0.1355655,
   0.138055,
   0.137467,
   0.1587628,
   0.1707692,
   0.1726269,
   0.1945357,
   0.2296446,
   0.2416782,
   0.2508241,
   0.2889455,
   0.269153,
   0.37159,
   0.2687645,
   0.3635934,
   0.3287913,
   0.2717698};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Visible Energy [MeV]");
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
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
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
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3003[20] = {
   0.107152,
   0.1421636,
   0.1394029,
   0.1335757,
   0.1321538,
   0.1326734,
   0.1457853,
   0.153607,
   0.1550374,
   0.1699296,
   0.1692675,
   0.1916413,
   0.1923531,
   0.1865889,
   0.2003381,
   0.2086991,
   0.2240732,
   0.1843984,
   0.2248783,
   0.2106701};
   Double_t _fehx3003[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3003[20] = {
   0.107152,
   0.1421636,
   0.1394029,
   0.1335757,
   0.1321538,
   0.1326734,
   0.1457853,
   0.153607,
   0.1550374,
   0.1699296,
   0.1692675,
   0.1916413,
   0.1923531,
   0.1865889,
   0.2003381,
   0.2086991,
   0.2240732,
   0.1843984,
   0.2248783,
   0.2106701};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
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
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3004[20] = {
   0.8769422,
   0.969844,
   1.011278,
   1.048222,
   1.105646,
   1.119573,
   1.08031,
   1.064948,
   1.050272,
   1.047682,
   1.05852,
   0.9308134,
   0.9164431,
   0.9610606,
   0.9458033,
   0.8240544,
   0.8746484,
   0.9572365,
   0.818062,
   1.08344};
   Double_t _felx3004[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3004[20] = {
   0.0124006,
   0.007524051,
   0.008547776,
   0.009810189,
   0.01137848,
   0.01287376,
   0.01428901,
   0.01633941,
   0.01878483,
   0.02162124,
   0.02531794,
   0.02667098,
   0.03125045,
   0.03760921,
   0.04308016,
   0.04613819,
   0.05413938,
   0.06820028,
   0.06963806,
   0.09359495};
   Double_t _fehx3004[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3004[20] = {
   0.0124006,
   0.007524051,
   0.008547776,
   0.009810189,
   0.01137848,
   0.01287376,
   0.01428901,
   0.01633941,
   0.01878483,
   0.02162124,
   0.02531794,
   0.02667098,
   0.03125045,
   0.03760921,
   0.04308016,
   0.04613819,
   0.05413938,
   0.06820028,
   0.06963806,
   0.09359495};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0.7055628);
   Graph_Graph3004->SetMaximum(1.219896);
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
   
   TH1F *hist__3 = new TH1F("hist__3","generic_FC_bnb_12_visible_energy_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
