#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Sat Oct 22 18:31:54 2022) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",138,161,1200,900);
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
   pad1->Range(-92.30769,-2.58,676.9231,285.2937);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmc__22->SetBinContent(1,4.976961);
   hmc__22->SetBinContent(2,23.66762);
   hmc__22->SetBinContent(3,66.42877);
   hmc__22->SetBinContent(4,97.21323);
   hmc__22->SetBinContent(5,123.1833);
   hmc__22->SetBinContent(6,122.5997);
   hmc__22->SetBinContent(7,97.95702);
   hmc__22->SetBinContent(8,75.71989);
   hmc__22->SetBinContent(9,68.31456);
   hmc__22->SetBinContent(10,49.99123);
   hmc__22->SetBinContent(11,43.14701);
   hmc__22->SetBinContent(12,28.162);
   hmc__22->SetBinContent(13,21.50332);
   hmc__22->SetBinContent(14,19.29362);
   hmc__22->SetBinContent(15,13.04383);
   hmc__22->SetBinContent(16,14.41308);
   hmc__22->SetBinContent(17,9.889285);
   hmc__22->SetBinContent(18,7.549428);
   hmc__22->SetBinContent(19,6.228984);
   hmc__22->SetBinContent(20,3.713483);
   hmc__22->SetBinContent(21,36.56792);
   hmc__22->SetBinError(1,9.647779);
   hmc__22->SetBinError(2,18.43059);
   hmc__22->SetBinError(3,24.64249);
   hmc__22->SetBinError(4,28.5209);
   hmc__22->SetBinError(5,28.55565);
   hmc__22->SetBinError(6,39.83848);
   hmc__22->SetBinError(7,25.59268);
   hmc__22->SetBinError(8,23.18998);
   hmc__22->SetBinError(9,19.25295);
   hmc__22->SetBinError(10,18.47389);
   hmc__22->SetBinError(11,15.6059);
   hmc__22->SetBinError(12,11.52232);
   hmc__22->SetBinError(13,11.38738);
   hmc__22->SetBinError(14,11.28307);
   hmc__22->SetBinError(15,8.670792);
   hmc__22->SetBinError(16,10.02272);
   hmc__22->SetBinError(17,7.115975);
   hmc__22->SetBinError(18,7.258248);
   hmc__22->SetBinError(19,6.021131);
   hmc__22->SetBinError(20,3.189904);
   hmc__22->SetBinError(21,17.99275);
   hmc__22->SetMinimum(-2.58);
   hmc__22->SetMaximum(270.9);
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
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",20,0,600);
   hs8_stack_8->SetMinimum(-3.871883e-08);
   hs8_stack_8->SetMaximum(129.3425);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hbadmatch_stack_1->SetBinContent(1,1.071247);
   hbadmatch_stack_1->SetBinContent(2,2.737585);
   hbadmatch_stack_1->SetBinContent(3,3.232319);
   hbadmatch_stack_1->SetBinContent(4,3.399637);
   hbadmatch_stack_1->SetBinContent(5,4.076953);
   hbadmatch_stack_1->SetBinContent(6,5.477031);
   hbadmatch_stack_1->SetBinContent(7,4.681747);
   hbadmatch_stack_1->SetBinContent(8,2.594761);
   hbadmatch_stack_1->SetBinContent(9,1.184982);
   hbadmatch_stack_1->SetBinContent(10,1.608988);
   hbadmatch_stack_1->SetBinContent(11,0.8738592);
   hbadmatch_stack_1->SetBinContent(12,0.1975809);
   hbadmatch_stack_1->SetBinContent(14,0.3252394);
   hbadmatch_stack_1->SetBinContent(15,0.3934307);
   hbadmatch_stack_1->SetBinContent(19,0.3962007);
   hbadmatch_stack_1->SetBinContent(21,0.7330236);
   hbadmatch_stack_1->SetBinError(1,1.071247);
   hbadmatch_stack_1->SetBinError(2,0.9497691);
   hbadmatch_stack_1->SetBinError(3,0.9844916);
   hbadmatch_stack_1->SetBinError(4,0.8946087);
   hbadmatch_stack_1->SetBinError(5,1.130971);
   hbadmatch_stack_1->SetBinError(6,1.352429);
   hbadmatch_stack_1->SetBinError(7,1.269883);
   hbadmatch_stack_1->SetBinError(8,0.9034921);
   hbadmatch_stack_1->SetBinError(9,0.543629);
   hbadmatch_stack_1->SetBinError(10,0.6801404);
   hbadmatch_stack_1->SetBinError(11,0.5230522);
   hbadmatch_stack_1->SetBinError(12,0.1975809);
   hbadmatch_stack_1->SetBinError(14,0.2349795);
   hbadmatch_stack_1->SetBinError(15,0.2781975);
   hbadmatch_stack_1->SetBinError(19,0.3962007);
   hbadmatch_stack_1->SetBinError(21,0.4023043);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hext_stack_2->SetBinContent(1,1.137595);
   hext_stack_2->SetBinContent(2,7.862194);
   hext_stack_2->SetBinContent(3,24.8295);
   hext_stack_2->SetBinContent(4,25.67142);
   hext_stack_2->SetBinContent(5,29.86704);
   hext_stack_2->SetBinContent(6,25.70613);
   hext_stack_2->SetBinContent(7,21.34887);
   hext_stack_2->SetBinContent(8,14.15424);
   hext_stack_2->SetBinContent(9,16.39631);
   hext_stack_2->SetBinContent(10,7.944396);
   hext_stack_2->SetBinContent(11,7.347444);
   hext_stack_2->SetBinContent(12,4.214394);
   hext_stack_2->SetBinContent(13,1.37261);
   hext_stack_2->SetBinContent(14,2.345802);
   hext_stack_2->SetBinContent(15,2.357392);
   hext_stack_2->SetBinContent(16,1.454812);
   hext_stack_2->SetBinContent(17,0.8131978);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinContent(19,0.9660115);
   hext_stack_2->SetBinContent(20,0.3243973);
   hext_stack_2->SetBinContent(21,2.27519);
   hext_stack_2->SetBinError(1,0.6602113);
   hext_stack_2->SetBinError(2,1.805088);
   hext_stack_2->SetBinError(3,3.386629);
   hext_stack_2->SetBinError(4,3.315885);
   hext_stack_2->SetBinError(5,3.600935);
   hext_stack_2->SetBinError(6,3.482423);
   hext_stack_2->SetBinError(7,3.114342);
   hext_stack_2->SetBinError(8,2.526652);
   hext_stack_2->SetBinError(9,2.81521);
   hext_stack_2->SetBinError(10,1.821657);
   hext_stack_2->SetBinError(11,1.871207);
   hext_stack_2->SetBinError(12,1.305512);
   hext_stack_2->SetBinError(13,0.8259691);
   hext_stack_2->SetBinError(14,0.9989624);
   hext_stack_2->SetBinError(15,0.9653222);
   hext_stack_2->SetBinError(16,0.8615765);
   hext_stack_2->SetBinError(17,0.5750177);
   hext_stack_2->SetBinError(18,0.5201503);
   hext_stack_2->SetBinError(19,0.7189592);
   hext_stack_2->SetBinError(20,0.3243973);
   hext_stack_2->SetBinError(21,0.9336798);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hdirt_stack_3->SetBinContent(1,0.2188956);
   hdirt_stack_3->SetBinContent(2,0.9525174);
   hdirt_stack_3->SetBinContent(3,1.826425);
   hdirt_stack_3->SetBinContent(4,4.20079);
   hdirt_stack_3->SetBinContent(5,4.218625);
   hdirt_stack_3->SetBinContent(6,2.414855);
   hdirt_stack_3->SetBinContent(7,0.8284243);
   hdirt_stack_3->SetBinContent(8,1.287196);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.3569671);
   hdirt_stack_3->SetBinContent(12,0.6331654);
   hdirt_stack_3->SetBinContent(13,1.093596);
   hdirt_stack_3->SetBinContent(14,0.1380715);
   hdirt_stack_3->SetBinContent(15,0.399291);
   hdirt_stack_3->SetBinContent(16,0.3381872);
   hdirt_stack_3->SetBinError(1,0.2188956);
   hdirt_stack_3->SetBinError(2,0.5165933);
   hdirt_stack_3->SetBinError(3,0.645779);
   hdirt_stack_3->SetBinError(4,1.062315);
   hdirt_stack_3->SetBinError(5,1.050735);
   hdirt_stack_3->SetBinError(6,0.8343453);
   hdirt_stack_3->SetBinError(7,0.479833);
   hdirt_stack_3->SetBinError(8,0.5953083);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.258803);
   hdirt_stack_3->SetBinError(12,0.4685454);
   hdirt_stack_3->SetBinError(13,0.9427539);
   hdirt_stack_3->SetBinError(14,0.1380715);
   hdirt_stack_3->SetBinError(15,0.399291);
   hdirt_stack_3->SetBinError(16,0.3381872);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   houtFV_stack_4->SetBinContent(1,1.467217);
   houtFV_stack_4->SetBinContent(2,7.41742);
   houtFV_stack_4->SetBinContent(3,17.76688);
   houtFV_stack_4->SetBinContent(4,24.00814);
   houtFV_stack_4->SetBinContent(5,29.76713);
   houtFV_stack_4->SetBinContent(6,29.058);
   houtFV_stack_4->SetBinContent(7,19.69036);
   houtFV_stack_4->SetBinContent(8,14.36489);
   houtFV_stack_4->SetBinContent(9,9.495579);
   houtFV_stack_4->SetBinContent(10,7.890698);
   houtFV_stack_4->SetBinContent(11,9.654641);
   houtFV_stack_4->SetBinContent(12,3.686613);
   houtFV_stack_4->SetBinContent(13,4.02729);
   houtFV_stack_4->SetBinContent(14,2.233825);
   houtFV_stack_4->SetBinContent(15,1.927587);
   houtFV_stack_4->SetBinContent(16,2.522351);
   houtFV_stack_4->SetBinContent(17,1.241157);
   houtFV_stack_4->SetBinContent(18,1.847419);
   houtFV_stack_4->SetBinContent(19,0.8233424);
   houtFV_stack_4->SetBinContent(20,0.7319179);
   houtFV_stack_4->SetBinContent(21,2.817677);
   houtFV_stack_4->SetBinError(1,0.6214735);
   houtFV_stack_4->SetBinError(2,1.342582);
   houtFV_stack_4->SetBinError(3,2.267228);
   houtFV_stack_4->SetBinError(4,2.486326);
   houtFV_stack_4->SetBinError(5,2.96116);
   houtFV_stack_4->SetBinError(6,2.71555);
   houtFV_stack_4->SetBinError(7,2.204961);
   houtFV_stack_4->SetBinError(8,2.004459);
   houtFV_stack_4->SetBinError(9,1.484251);
   houtFV_stack_4->SetBinError(10,1.443678);
   houtFV_stack_4->SetBinError(11,1.549818);
   houtFV_stack_4->SetBinError(12,0.9087711);
   houtFV_stack_4->SetBinError(13,0.9532962);
   houtFV_stack_4->SetBinError(14,0.7424108);
   houtFV_stack_4->SetBinError(15,0.6152905);
   houtFV_stack_4->SetBinError(16,0.858393);
   houtFV_stack_4->SetBinError(17,0.5340831);
   houtFV_stack_4->SetBinError(18,0.7207219);
   houtFV_stack_4->SetBinError(19,0.4174921);
   houtFV_stack_4->SetBinError(20,0.438694);
   houtFV_stack_4->SetBinError(21,0.8614868);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2844251);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.5636016);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.9629949);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.050643);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5392556);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.672524);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7112172);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.092521);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.005287);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.3223209);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.8072964);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.4046128);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.05843496);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2519171);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.7074186);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.1956787);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.08084179);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.09857196);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.850772);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1821348);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2612537);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4018636);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7561784);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1858824);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.4849357);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2326126);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3826313);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2995411);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1056386);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3767177);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.1842049);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02651673);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1420112);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.3927976);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.08057856);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.05003825);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.05147541);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4077365);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.1176707);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05338793);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.07508846);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03965252);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.05618739);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.190465);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05804148);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.07946513);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03417071);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.04713398);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02370173);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04343089);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.136473);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04413456);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2936812);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.2966318);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.430088);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.490444);
   hNCpi0inFVres_stack_7->SetBinContent(4,12.0415);
   hNCpi0inFVres_stack_7->SetBinContent(5,17.72149);
   hNCpi0inFVres_stack_7->SetBinContent(6,15.03627);
   hNCpi0inFVres_stack_7->SetBinContent(7,11.91878);
   hNCpi0inFVres_stack_7->SetBinContent(8,10.54046);
   hNCpi0inFVres_stack_7->SetBinContent(9,10.02118);
   hNCpi0inFVres_stack_7->SetBinContent(10,5.805964);
   hNCpi0inFVres_stack_7->SetBinContent(11,6.086224);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.176945);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.861284);
   hNCpi0inFVres_stack_7->SetBinContent(14,2.534163);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.650459);
   hNCpi0inFVres_stack_7->SetBinContent(16,1.598176);
   hNCpi0inFVres_stack_7->SetBinContent(17,1.189989);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.49408);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.315536);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.4317389);
   hNCpi0inFVres_stack_7->SetBinContent(21,5.053523);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2728806);
   hNCpi0inFVres_stack_7->SetBinError(2,0.214546);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7757331);
   hNCpi0inFVres_stack_7->SetBinError(4,1.183751);
   hNCpi0inFVres_stack_7->SetBinError(5,1.569733);
   hNCpi0inFVres_stack_7->SetBinError(6,1.288597);
   hNCpi0inFVres_stack_7->SetBinError(7,1.055091);
   hNCpi0inFVres_stack_7->SetBinError(8,0.9981587);
   hNCpi0inFVres_stack_7->SetBinError(9,1.117545);
   hNCpi0inFVres_stack_7->SetBinError(10,0.7285218);
   hNCpi0inFVres_stack_7->SetBinError(11,0.7344961);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4311498);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4660128);
   hNCpi0inFVres_stack_7->SetBinError(14,0.5102291);
   hNCpi0inFVres_stack_7->SetBinError(15,0.3137414);
   hNCpi0inFVres_stack_7->SetBinError(16,0.3701565);
   hNCpi0inFVres_stack_7->SetBinError(17,0.3942681);
   hNCpi0inFVres_stack_7->SetBinError(18,0.5249988);
   hNCpi0inFVres_stack_7->SetBinError(19,0.3936829);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1326488);
   hNCpi0inFVres_stack_7->SetBinError(21,0.862892);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.01071203);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.6231295);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.9473184);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.876224);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.02102);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.332665);
   hNCpi0inFVdis_stack_8->SetBinContent(7,3.089803);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.284985);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.879825);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.387861);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.439479);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.422233);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.5782155);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.513591);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.9895821);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.288376);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9322423);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.9414186);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.7897851);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.2712813);
   hNCpi0inFVdis_stack_8->SetBinContent(21,4.447856);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.01071203);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.2801739);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2796286);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6993397);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6208551);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.4257255);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6357885);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.4179897);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.5251433);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3338061);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2901337);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3685945);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.134049);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.454385);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.2945005);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4992255);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4684119);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4899317);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3641342);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1723408);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.021263);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.01732447);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.5352025);
   hCCpi0inFV_stack_10->SetBinContent(2,1.125349);
   hCCpi0inFV_stack_10->SetBinContent(3,7.057619);
   hCCpi0inFV_stack_10->SetBinContent(4,13.00505);
   hCCpi0inFV_stack_10->SetBinContent(5,19.29537);
   hCCpi0inFV_stack_10->SetBinContent(6,18.06076);
   hCCpi0inFV_stack_10->SetBinContent(7,21.31271);
   hCCpi0inFV_stack_10->SetBinContent(8,18.09435);
   hCCpi0inFV_stack_10->SetBinContent(9,16.03166);
   hCCpi0inFV_stack_10->SetBinContent(10,16.67811);
   hCCpi0inFV_stack_10->SetBinContent(11,10.59255);
   hCCpi0inFV_stack_10->SetBinContent(12,10.11158);
   hCCpi0inFV_stack_10->SetBinContent(13,5.288256);
   hCCpi0inFV_stack_10->SetBinContent(14,5.058695);
   hCCpi0inFV_stack_10->SetBinContent(15,3.021261);
   hCCpi0inFV_stack_10->SetBinContent(16,5.099418);
   hCCpi0inFV_stack_10->SetBinContent(17,3.424227);
   hCCpi0inFV_stack_10->SetBinContent(18,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(19,1.465526);
   hCCpi0inFV_stack_10->SetBinContent(20,1.855576);
   hCCpi0inFV_stack_10->SetBinContent(21,9.089617);
   hCCpi0inFV_stack_10->SetBinError(1,0.3921167);
   hCCpi0inFV_stack_10->SetBinError(2,0.5194673);
   hCCpi0inFV_stack_10->SetBinError(3,1.358177);
   hCCpi0inFV_stack_10->SetBinError(4,1.812046);
   hCCpi0inFV_stack_10->SetBinError(5,2.240463);
   hCCpi0inFV_stack_10->SetBinError(6,2.169418);
   hCCpi0inFV_stack_10->SetBinError(7,2.344929);
   hCCpi0inFV_stack_10->SetBinError(8,2.158977);
   hCCpi0inFV_stack_10->SetBinError(9,1.981899);
   hCCpi0inFV_stack_10->SetBinError(10,2.071044);
   hCCpi0inFV_stack_10->SetBinError(11,1.654169);
   hCCpi0inFV_stack_10->SetBinError(12,1.575843);
   hCCpi0inFV_stack_10->SetBinError(13,1.110933);
   hCCpi0inFV_stack_10->SetBinError(14,1.114632);
   hCCpi0inFV_stack_10->SetBinError(15,0.9415334);
   hCCpi0inFV_stack_10->SetBinError(16,1.182268);
   hCCpi0inFV_stack_10->SetBinError(17,0.8770549);
   hCCpi0inFV_stack_10->SetBinError(18,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(19,0.6209405);
   hCCpi0inFV_stack_10->SetBinError(20,0.6794384);
   hCCpi0inFV_stack_10->SetBinError(21,1.50758);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hNCinFV_stack_11->SetBinContent(2,0.5901461);
   hNCinFV_stack_11->SetBinContent(3,1.249702);
   hNCinFV_stack_11->SetBinContent(4,2.6065);
   hNCinFV_stack_11->SetBinContent(5,1.999797);
   hNCinFV_stack_11->SetBinContent(6,4.043309);
   hNCinFV_stack_11->SetBinContent(7,3.405761);
   hNCinFV_stack_11->SetBinContent(8,3.361864);
   hNCinFV_stack_11->SetBinContent(9,3.948137);
   hNCinFV_stack_11->SetBinContent(10,1.405152);
   hNCinFV_stack_11->SetBinContent(11,1.630811);
   hNCinFV_stack_11->SetBinContent(12,1.031443);
   hNCinFV_stack_11->SetBinContent(13,1.277869);
   hNCinFV_stack_11->SetBinContent(14,1.774818);
   hNCinFV_stack_11->SetBinContent(15,0.8167011);
   hNCinFV_stack_11->SetBinContent(16,0.7512689);
   hNCinFV_stack_11->SetBinContent(17,0.5884556);
   hNCinFV_stack_11->SetBinContent(18,1.357949);
   hNCinFV_stack_11->SetBinContent(21,2.589264);
   hNCinFV_stack_11->SetBinError(2,0.340721);
   hNCinFV_stack_11->SetBinError(3,0.543985);
   hNCinFV_stack_11->SetBinError(4,0.8584214);
   hNCinFV_stack_11->SetBinError(5,0.672909);
   hNCinFV_stack_11->SetBinError(6,1.084104);
   hNCinFV_stack_11->SetBinError(7,0.9082208);
   hNCinFV_stack_11->SetBinError(8,0.9183395);
   hNCinFV_stack_11->SetBinError(9,1.129954);
   hNCinFV_stack_11->SetBinError(10,0.5686034);
   hNCinFV_stack_11->SetBinError(11,0.6397564);
   hNCinFV_stack_11->SetBinError(12,0.4916496);
   hNCinFV_stack_11->SetBinError(13,0.521458);
   hNCinFV_stack_11->SetBinError(14,0.7183405);
   hNCinFV_stack_11->SetBinError(15,0.4128008);
   hNCinFV_stack_11->SetBinError(16,0.5894422);
   hNCinFV_stack_11->SetBinError(17,0.3397478);
   hNCinFV_stack_11->SetBinError(18,0.7972962);
   hNCinFV_stack_11->SetBinError(21,1.047112);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,0.2394598);
   hnumuCCinFV_stack_12->SetBinContent(2,1.929187);
   hnumuCCinFV_stack_12->SetBinContent(3,3.431436);
   hnumuCCinFV_stack_12->SetBinContent(4,8.590258);
   hnumuCCinFV_stack_12->SetBinContent(5,12.17783);
   hnumuCCinFV_stack_12->SetBinContent(6,17.0778);
   hnumuCCinFV_stack_12->SetBinContent(7,11.1413);
   hnumuCCinFV_stack_12->SetBinContent(8,7.308443);
   hnumuCCinFV_stack_12->SetBinContent(9,8.645668);
   hnumuCCinFV_stack_12->SetBinContent(10,5.839362);
   hnumuCCinFV_stack_12->SetBinContent(11,4.159748);
   hnumuCCinFV_stack_12->SetBinContent(12,3.175262);
   hnumuCCinFV_stack_12->SetBinContent(13,3.745433);
   hnumuCCinFV_stack_12->SetBinContent(14,2.57137);
   hnumuCCinFV_stack_12->SetBinContent(15,1.215655);
   hnumuCCinFV_stack_12->SetBinContent(16,1.10857);
   hnumuCCinFV_stack_12->SetBinContent(17,0.7958831);
   hnumuCCinFV_stack_12->SetBinContent(18,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(19,0.3917402);
   hnumuCCinFV_stack_12->SetBinContent(21,4.297671);
   hnumuCCinFV_stack_12->SetBinError(1,0.2394598);
   hnumuCCinFV_stack_12->SetBinError(2,1.273783);
   hnumuCCinFV_stack_12->SetBinError(3,0.9134491);
   hnumuCCinFV_stack_12->SetBinError(4,1.529322);
   hnumuCCinFV_stack_12->SetBinError(5,1.831012);
   hnumuCCinFV_stack_12->SetBinError(6,3.004528);
   hnumuCCinFV_stack_12->SetBinError(7,2.557005);
   hnumuCCinFV_stack_12->SetBinError(8,1.545412);
   hnumuCCinFV_stack_12->SetBinError(9,1.525008);
   hnumuCCinFV_stack_12->SetBinError(10,1.263613);
   hnumuCCinFV_stack_12->SetBinError(11,1.012496);
   hnumuCCinFV_stack_12->SetBinError(12,0.9116529);
   hnumuCCinFV_stack_12->SetBinError(13,0.8945964);
   hnumuCCinFV_stack_12->SetBinError(14,0.7725746);
   hnumuCCinFV_stack_12->SetBinError(15,0.5562149);
   hnumuCCinFV_stack_12->SetBinError(16,0.5689733);
   hnumuCCinFV_stack_12->SetBinError(17,0.4899623);
   hnumuCCinFV_stack_12->SetBinError(18,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(19,0.2770047);
   hnumuCCinFV_stack_12->SetBinError(21,1.061298);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3025491);
   hnueCCinFV_stack_13->SetBinContent(13,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(14,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,2.998004);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.3025491);
   hnueCCinFV_stack_13->SetBinError(13,0.2781975);
   hnueCCinFV_stack_13->SetBinError(14,0.2781975);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,1.134652);
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
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);
   hmcerror__23->SetBinContent(1,4.976961);
   hmcerror__23->SetBinContent(2,23.66762);
   hmcerror__23->SetBinContent(3,66.42877);
   hmcerror__23->SetBinContent(4,97.21323);
   hmcerror__23->SetBinContent(5,123.1833);
   hmcerror__23->SetBinContent(6,122.5997);
   hmcerror__23->SetBinContent(7,97.95702);
   hmcerror__23->SetBinContent(8,75.71989);
   hmcerror__23->SetBinContent(9,68.31456);
   hmcerror__23->SetBinContent(10,49.99123);
   hmcerror__23->SetBinContent(11,43.14701);
   hmcerror__23->SetBinContent(12,28.162);
   hmcerror__23->SetBinContent(13,21.50332);
   hmcerror__23->SetBinContent(14,19.29362);
   hmcerror__23->SetBinContent(15,13.04383);
   hmcerror__23->SetBinContent(16,14.41308);
   hmcerror__23->SetBinContent(17,9.889285);
   hmcerror__23->SetBinContent(18,7.549428);
   hmcerror__23->SetBinContent(19,6.228984);
   hmcerror__23->SetBinContent(20,3.713483);
   hmcerror__23->SetBinContent(21,36.56792);
   hmcerror__23->SetBinError(1,9.647779);
   hmcerror__23->SetBinError(2,18.43059);
   hmcerror__23->SetBinError(3,24.64249);
   hmcerror__23->SetBinError(4,28.5209);
   hmcerror__23->SetBinError(5,28.55565);
   hmcerror__23->SetBinError(6,39.83848);
   hmcerror__23->SetBinError(7,25.59268);
   hmcerror__23->SetBinError(8,23.18998);
   hmcerror__23->SetBinError(9,19.25295);
   hmcerror__23->SetBinError(10,18.47389);
   hmcerror__23->SetBinError(11,15.6059);
   hmcerror__23->SetBinError(12,11.52232);
   hmcerror__23->SetBinError(13,11.38738);
   hmcerror__23->SetBinError(14,11.28307);
   hmcerror__23->SetBinError(15,8.670792);
   hmcerror__23->SetBinError(16,10.02272);
   hmcerror__23->SetBinError(17,7.115975);
   hmcerror__23->SetBinError(18,7.258248);
   hmcerror__23->SetBinError(19,6.021131);
   hmcerror__23->SetBinError(20,3.189904);
   hmcerror__23->SetBinError(21,17.99275);
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
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3029[20] = {
   2,
   22,
   79,
   111,
   129,
   113,
   82,
   75,
   55,
   49,
   38,
   20,
   20,
   19,
   16,
   9,
   6,
   5,
   2,
   6};
   Double_t _felx3029[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3029[20] = {
   2,
   4.8417,
   9.0124,
   10.53565,
   11.35782,
   10.63015,
   9.1791,
   8.7852,
   7.546,
   7.1318,
   6.3013,
   4.6266,
   4.6266,
   4.5151,
   4.1628,
   3.19354,
   2.67925,
   2.48995,
   2,
   2.67925};
   Double_t _fehx3029[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3029[20] = {
   1.51917,
   4.6299,
   8.8105,
   10.53565,
   11.35782,
   10.63015,
   8.9774,
   8.5831,
   7.3425,
   6.9277,
   6.0955,
   4.4133,
   4.4133,
   4.3011,
   3.9454,
   2.9582,
   2.41858,
   2.21064,
   1.51917,
   2.41858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,660);
   Graph_Graph3029->SetMinimum(0);
   Graph_Graph3029->SetMaximum(154.3936);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 858.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 32.3","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 196.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 189.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  111.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  28.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 177.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 31.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 93.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 1.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
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
   
   Double_t _fx3030[20] = {
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
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
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3030[20] = {
   1.938488,
   0.7787262,
   0.370961,
   0.293385,
   0.2318142,
   0.3249477,
   0.2612644,
   0.3062601,
   0.2818279,
   0.3695425,
   0.3616913,
   0.4091443,
   0.529564,
   0.5848082,
   0.6647426,
   0.6953907,
   0.7195641,
   0.9614303,
   0.9666312,
   0.859006};
   Double_t _fehx3030[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3030[20] = {
   1.938488,
   0.7787262,
   0.370961,
   0.293385,
   0.2318142,
   0.3249477,
   0.2612644,
   0.3062601,
   0.2818279,
   0.3695425,
   0.3616913,
   0.4091443,
   0.529564,
   0.5848082,
   0.6647426,
   0.6953907,
   0.7195641,
   0.9614303,
   0.9666312,
   0.859006};
   grae = new TGraphAsymmErrors(20,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,660);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
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
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
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
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3031[20] = {
   0.5534053,
   0.1988764,
   0.1576986,
   0.1636861,
   0.1652048,
   0.1676269,
   0.1902992,
   0.1949014,
   0.1776712,
   0.1885901,
   0.2111568,
   0.2273094,
   0.2806469,
   0.2504007,
   0.2679154,
   0.2514539,
   0.2808587,
   0.3572198,
   0.3091571,
   0.3552672};
   Double_t _fehx3031[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3031[20] = {
   0.5534053,
   0.1988764,
   0.1576986,
   0.1636861,
   0.1652048,
   0.1676269,
   0.1902992,
   0.1949014,
   0.1776712,
   0.1885901,
   0.2111568,
   0.2273094,
   0.2806469,
   0.2504007,
   0.2679154,
   0.2514539,
   0.2808587,
   0.3572198,
   0.3091571,
   0.3552672};
   grae = new TGraphAsymmErrors(20,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,660);
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
   15,
   45,
   75,
   105,
   135,
   165,
   195,
   225,
   255,
   285,
   315,
   345,
   375,
   405,
   435,
   465,
   495,
   525,
   555,
   585};
   Double_t _fy3032[20] = {
   0.4018517,
   0.9295401,
   1.189244,
   1.14182,
   1.04722,
   0.9216991,
   0.8371019,
   0.9904927,
   0.8050992,
   0.9801718,
   0.8807098,
   0.7101768,
   0.9300889,
   0.9847814,
   1.226633,
   0.624433,
   0.6067173,
   0.6623018,
   0.3210796,
   1.615734};
   Double_t _felx3032[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fely3032[20] = {
   0.4018517,
   0.2045707,
   0.1356701,
   0.1083768,
   0.09220254,
   0.08670615,
   0.09370539,
   0.1160223,
   0.1104596,
   0.142661,
   0.1460425,
   0.1642852,
   0.2151575,
   0.2340204,
   0.3191393,
   0.2215724,
   0.2709245,
   0.3298197,
   0.3210796,
   0.7214924};
   Double_t _fehx3032[20] = {
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15,
   15};
   Double_t _fehy3032[20] = {
   0.3052405,
   0.1956217,
   0.1326308,
   0.1083768,
   0.09220254,
   0.08670615,
   0.09164632,
   0.1133533,
   0.1074807,
   0.1385783,
   0.1412728,
   0.1567112,
   0.2052381,
   0.2229286,
   0.3024724,
   0.2052442,
   0.2445657,
   0.2928222,
   0.2438873,
   0.6512969};
   grae = new TGraphAsymmErrors(20,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,660);
   Graph_Graph3032->SetMinimum(0);
   Graph_Graph3032->SetMaximum(2.493734);
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
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_kine_pio_energy_high_all",20,0,600);

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
   TLine *line = new TLine(0,1,600,1);
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
