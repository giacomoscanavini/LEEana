#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Wed Jun  8 11:41:05 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-342.3077,-6.050195,1260.256,669.0242);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmc__19->SetBinContent(2,0.3917402);
   hmc__19->SetBinContent(3,2.719419);
   hmc__19->SetBinContent(4,20.02861);
   hmc__19->SetBinContent(5,193.4568);
   hmc__19->SetBinContent(6,302.5098);
   hmc__19->SetBinContent(7,283.9492);
   hmc__19->SetBinContent(8,288.7056);
   hmc__19->SetBinContent(9,285.1219);
   hmc__19->SetBinContent(10,240.548);
   hmc__19->SetBinContent(11,214.7158);
   hmc__19->SetBinContent(12,197.7439);
   hmc__19->SetBinContent(13,143.8713);
   hmc__19->SetBinContent(14,117.4235);
   hmc__19->SetBinContent(15,95.29253);
   hmc__19->SetBinContent(16,76.53078);
   hmc__19->SetBinContent(17,60.11217);
   hmc__19->SetBinContent(18,46.57318);
   hmc__19->SetBinContent(19,34.73954);
   hmc__19->SetBinContent(20,27.27204);
   hmc__19->SetBinContent(21,22.08189);
   hmc__19->SetBinContent(22,18.59552);
   hmc__19->SetBinContent(23,13.42475);
   hmc__19->SetBinContent(24,10.05414);
   hmc__19->SetBinContent(25,9.048576);
   hmc__19->SetBinContent(26,38.20083);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,1.947421);
   hmc__19->SetBinError(3,1.641016);
   hmc__19->SetBinError(4,7.120636);
   hmc__19->SetBinError(5,49.99177);
   hmc__19->SetBinError(6,78.52663);
   hmc__19->SetBinError(7,69.36585);
   hmc__19->SetBinError(8,74.51993);
   hmc__19->SetBinError(9,68.30341);
   hmc__19->SetBinError(10,62.03466);
   hmc__19->SetBinError(11,51.06213);
   hmc__19->SetBinError(12,48.0218);
   hmc__19->SetBinError(13,36.74612);
   hmc__19->SetBinError(14,32.6689);
   hmc__19->SetBinError(15,26.46182);
   hmc__19->SetBinError(16,19.93976);
   hmc__19->SetBinError(17,20.08753);
   hmc__19->SetBinError(18,14.35402);
   hmc__19->SetBinError(19,10.8112);
   hmc__19->SetBinError(20,10.17196);
   hmc__19->SetBinError(21,8.801623);
   hmc__19->SetBinError(22,8.626659);
   hmc__19->SetBinError(23,6.955546);
   hmc__19->SetBinError(24,5.061224);
   hmc__19->SetBinError(25,6.508256);
   hmc__19->SetBinError(26,16.49258);
   hmc__19->SetMinimum(-6.050195);
   hmc__19->SetMaximum(635.2705);
   hmc__19->SetEntries(2712.362);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,-150,1100);
   hs7_stack_7->SetMinimum(-6.289654e-09);
   hs7_stack_7->SetMaximum(317.6352);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(5,2.06984);
   hbadmatch_stack_1->SetBinContent(6,4.672948);
   hbadmatch_stack_1->SetBinContent(7,2.827324);
   hbadmatch_stack_1->SetBinContent(8,8.015525);
   hbadmatch_stack_1->SetBinContent(9,4.777063);
   hbadmatch_stack_1->SetBinContent(10,5.543336);
   hbadmatch_stack_1->SetBinContent(11,5.928766);
   hbadmatch_stack_1->SetBinContent(12,3.49333);
   hbadmatch_stack_1->SetBinContent(13,3.140403);
   hbadmatch_stack_1->SetBinContent(14,4.540041);
   hbadmatch_stack_1->SetBinContent(15,1.268811);
   hbadmatch_stack_1->SetBinContent(16,3.320587);
   hbadmatch_stack_1->SetBinContent(17,0.9908295);
   hbadmatch_stack_1->SetBinContent(18,1.608988);
   hbadmatch_stack_1->SetBinContent(19,1.701785);
   hbadmatch_stack_1->SetBinContent(20,1.314087);
   hbadmatch_stack_1->SetBinContent(22,0.5884556);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.1950248);
   hbadmatch_stack_1->SetBinContent(26,1.57454);
   hbadmatch_stack_1->SetBinError(5,0.806046);
   hbadmatch_stack_1->SetBinError(6,1.321147);
   hbadmatch_stack_1->SetBinError(7,0.8381474);
   hbadmatch_stack_1->SetBinError(8,2.482593);
   hbadmatch_stack_1->SetBinError(9,1.185675);
   hbadmatch_stack_1->SetBinError(10,1.201925);
   hbadmatch_stack_1->SetBinError(11,1.233491);
   hbadmatch_stack_1->SetBinError(12,0.9675214);
   hbadmatch_stack_1->SetBinError(13,0.9472735);
   hbadmatch_stack_1->SetBinError(14,1.110732);
   hbadmatch_stack_1->SetBinError(15,0.5889569);
   hbadmatch_stack_1->SetBinError(16,0.9120447);
   hbadmatch_stack_1->SetBinError(17,0.5886881);
   hbadmatch_stack_1->SetBinError(18,0.6801404);
   hbadmatch_stack_1->SetBinError(19,0.7242413);
   hbadmatch_stack_1->SetBinError(20,0.6054587);
   hbadmatch_stack_1->SetBinError(22,0.3397478);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.1950249);
   hbadmatch_stack_1->SetBinError(26,0.6103129);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1518;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(3,0.8131978);
   hext_stack_2->SetBinContent(4,0.7309963);
   hext_stack_2->SetBinContent(5,11.05868);
   hext_stack_2->SetBinContent(6,18.56334);
   hext_stack_2->SetBinContent(7,13.81549);
   hext_stack_2->SetBinContent(8,14.4268);
   hext_stack_2->SetBinContent(9,25.25204);
   hext_stack_2->SetBinContent(10,12.29724);
   hext_stack_2->SetBinContent(11,19.06373);
   hext_stack_2->SetBinContent(12,19.35059);
   hext_stack_2->SetBinContent(13,10.01046);
   hext_stack_2->SetBinContent(14,6.620856);
   hext_stack_2->SetBinContent(15,5.281377);
   hext_stack_2->SetBinContent(16,8.60913);
   hext_stack_2->SetBinContent(17,3.807795);
   hext_stack_2->SetBinContent(18,3.166181);
   hext_stack_2->SetBinContent(19,3.006186);
   hext_stack_2->SetBinContent(20,1.704188);
   hext_stack_2->SetBinContent(21,1.379791);
   hext_stack_2->SetBinContent(22,1.461993);
   hext_stack_2->SetBinContent(23,0.6487947);
   hext_stack_2->SetBinContent(24,1.055394);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(26,5.89704);
   hext_stack_2->SetBinError(3,0.5750177);
   hext_stack_2->SetBinError(4,0.5201503);
   hext_stack_2->SetBinError(5,2.320079);
   hext_stack_2->SetBinError(6,3.034067);
   hext_stack_2->SetBinError(7,2.58479);
   hext_stack_2->SetBinError(8,2.468958);
   hext_stack_2->SetBinError(9,3.610268);
   hext_stack_2->SetBinError(10,2.368851);
   hext_stack_2->SetBinError(11,3.060211);
   hext_stack_2->SetBinError(12,3.163019);
   hext_stack_2->SetBinError(13,2.192208);
   hext_stack_2->SetBinError(14,1.834661);
   hext_stack_2->SetBinError(15,1.41918);
   hext_stack_2->SetBinError(16,2.21999);
   hext_stack_2->SetBinError(17,1.24058);
   hext_stack_2->SetBinError(18,1.061777);
   hext_stack_2->SetBinError(19,1.068791);
   hext_stack_2->SetBinError(20,0.7656743);
   hext_stack_2->SetBinError(21,0.6935586);
   hext_stack_2->SetBinError(22,0.7356036);
   hext_stack_2->SetBinError(23,0.4587671);
   hext_stack_2->SetBinError(24,0.6130171);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(26,1.701242);
   hext_stack_2->SetEntries(428);

   ci = 1519;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(5,0.7947583);
   hdirt_stack_3->SetBinContent(6,1.605583);
   hdirt_stack_3->SetBinContent(7,2.10393);
   hdirt_stack_3->SetBinContent(8,2.088964);
   hdirt_stack_3->SetBinContent(9,0.2516114);
   hdirt_stack_3->SetBinContent(10,2.143507);
   hdirt_stack_3->SetBinContent(11,0.7139341);
   hdirt_stack_3->SetBinContent(12,0.4403464);
   hdirt_stack_3->SetBinContent(13,0.2620342);
   hdirt_stack_3->SetBinContent(15,0.5758626);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(25,0.3381872);
   hdirt_stack_3->SetBinError(5,0.4034967);
   hdirt_stack_3->SetBinError(6,0.687824);
   hdirt_stack_3->SetBinError(7,0.7766036);
   hdirt_stack_3->SetBinError(8,1.05763);
   hdirt_stack_3->SetBinError(9,0.2516114);
   hdirt_stack_3->SetBinError(10,0.7161714);
   hdirt_stack_3->SetBinError(11,0.3660028);
   hdirt_stack_3->SetBinError(12,0.3095757);
   hdirt_stack_3->SetBinError(13,0.2620342);
   hdirt_stack_3->SetBinError(15,0.3389606);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(25,0.3381872);
   hdirt_stack_3->SetEntries(50);

   ci = 1520;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(4,3.476766);
   houtFV_stack_4->SetBinContent(5,8.593916);
   houtFV_stack_4->SetBinContent(6,16.89995);
   houtFV_stack_4->SetBinContent(7,12.1636);
   houtFV_stack_4->SetBinContent(8,11.99043);
   houtFV_stack_4->SetBinContent(9,12.06941);
   houtFV_stack_4->SetBinContent(10,6.892925);
   houtFV_stack_4->SetBinContent(11,4.983344);
   houtFV_stack_4->SetBinContent(12,4.543103);
   houtFV_stack_4->SetBinContent(13,3.383739);
   houtFV_stack_4->SetBinContent(14,2.050601);
   houtFV_stack_4->SetBinContent(15,2.197444);
   houtFV_stack_4->SetBinContent(16,0.7319179);
   houtFV_stack_4->SetBinContent(17,0.3900497);
   houtFV_stack_4->SetBinContent(18,1.268811);
   houtFV_stack_4->SetBinContent(19,0.6514121);
   houtFV_stack_4->SetBinContent(20,0.3917402);
   houtFV_stack_4->SetBinContent(21,0.7319179);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(23,0.1967154);
   houtFV_stack_4->SetBinContent(25,0.1950248);
   houtFV_stack_4->SetBinContent(26,1.072095);
   houtFV_stack_4->SetBinError(4,0.9328049);
   houtFV_stack_4->SetBinError(5,1.41361);
   houtFV_stack_4->SetBinError(6,2.074741);
   houtFV_stack_4->SetBinError(7,1.713245);
   houtFV_stack_4->SetBinError(8,1.731694);
   houtFV_stack_4->SetBinError(9,1.756667);
   houtFV_stack_4->SetBinError(10,1.32562);
   houtFV_stack_4->SetBinError(11,1.127594);
   houtFV_stack_4->SetBinError(12,1.047851);
   houtFV_stack_4->SetBinError(13,0.9446454);
   houtFV_stack_4->SetBinError(14,0.7068742);
   houtFV_stack_4->SetBinError(15,0.760276);
   houtFV_stack_4->SetBinError(16,0.438694);
   houtFV_stack_4->SetBinError(17,0.2758068);
   houtFV_stack_4->SetBinError(18,0.5889569);
   houtFV_stack_4->SetBinError(19,0.3794052);
   houtFV_stack_4->SetBinError(20,0.2770047);
   houtFV_stack_4->SetBinError(21,0.438694);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.1967154);
   houtFV_stack_4->SetBinError(25,0.1950249);
   houtFV_stack_4->SetBinError(26,0.5551335);
   houtFV_stack_4->SetEntries(411);

   ci = 1521;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.222536);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.8637398);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.8087721);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.5717859);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3899359);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.417172);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1404279);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2896119);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3187231);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2355051);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1561744);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1966255);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1522;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.864572);
   hNCpi0inFVqe_stack_6->SetBinContent(6,2.245962);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.951512);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.520058);
   hNCpi0inFVqe_stack_6->SetBinContent(9,2.52413);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.8929677);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.227272);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.9896218);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.158022);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.10139);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3485861);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3211561);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.5286346);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4395948);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4011722);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.5176605);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2401416);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3365421);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2839569);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3705767);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3413269);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2218905);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1523;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.6835541);
   hNCpi0inFVres_stack_7->SetBinContent(4,11.69845);
   hNCpi0inFVres_stack_7->SetBinContent(5,132.9386);
   hNCpi0inFVres_stack_7->SetBinContent(6,191.6671);
   hNCpi0inFVres_stack_7->SetBinContent(7,170.4239);
   hNCpi0inFVres_stack_7->SetBinContent(8,159.2411);
   hNCpi0inFVres_stack_7->SetBinContent(9,145.752);
   hNCpi0inFVres_stack_7->SetBinContent(10,114.7379);
   hNCpi0inFVres_stack_7->SetBinContent(11,96.30338);
   hNCpi0inFVres_stack_7->SetBinContent(12,75.68108);
   hNCpi0inFVres_stack_7->SetBinContent(13,52.90393);
   hNCpi0inFVres_stack_7->SetBinContent(14,41.09272);
   hNCpi0inFVres_stack_7->SetBinContent(15,34.08565);
   hNCpi0inFVres_stack_7->SetBinContent(16,21.7684);
   hNCpi0inFVres_stack_7->SetBinContent(17,18.46806);
   hNCpi0inFVres_stack_7->SetBinContent(18,11.16735);
   hNCpi0inFVres_stack_7->SetBinContent(19,7.476072);
   hNCpi0inFVres_stack_7->SetBinContent(20,6.038218);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.894974);
   hNCpi0inFVres_stack_7->SetBinContent(22,2.538244);
   hNCpi0inFVres_stack_7->SetBinContent(23,2.845816);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.451472);
   hNCpi0inFVres_stack_7->SetBinContent(25,1.408458);
   hNCpi0inFVres_stack_7->SetBinContent(26,7.152095);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3022172);
   hNCpi0inFVres_stack_7->SetBinError(4,1.143854);
   hNCpi0inFVres_stack_7->SetBinError(5,3.764182);
   hNCpi0inFVres_stack_7->SetBinError(6,4.557487);
   hNCpi0inFVres_stack_7->SetBinError(7,4.322498);
   hNCpi0inFVres_stack_7->SetBinError(8,4.080361);
   hNCpi0inFVres_stack_7->SetBinError(9,3.931485);
   hNCpi0inFVres_stack_7->SetBinError(10,3.509632);
   hNCpi0inFVres_stack_7->SetBinError(11,3.210762);
   hNCpi0inFVres_stack_7->SetBinError(12,2.889169);
   hNCpi0inFVres_stack_7->SetBinError(13,2.386029);
   hNCpi0inFVres_stack_7->SetBinError(14,2.107454);
   hNCpi0inFVres_stack_7->SetBinError(15,1.947729);
   hNCpi0inFVres_stack_7->SetBinError(16,1.541824);
   hNCpi0inFVres_stack_7->SetBinError(17,1.475926);
   hNCpi0inFVres_stack_7->SetBinError(18,1.114265);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9200389);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8258899);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7015399);
   hNCpi0inFVres_stack_7->SetBinError(22,0.4783893);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6070045);
   hNCpi0inFVres_stack_7->SetBinError(24,0.4141412);
   hNCpi0inFVres_stack_7->SetBinError(25,0.3972726);
   hNCpi0inFVres_stack_7->SetBinError(26,0.948341);
   hNCpi0inFVres_stack_7->SetEntries(24019);

   ci = 1524;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.09731799);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.227272);
   hNCpi0inFVdis_stack_8->SetBinContent(5,14.5421);
   hNCpi0inFVdis_stack_8->SetBinContent(6,25.40122);
   hNCpi0inFVdis_stack_8->SetBinContent(7,22.14322);
   hNCpi0inFVdis_stack_8->SetBinContent(8,27.93897);
   hNCpi0inFVdis_stack_8->SetBinContent(9,24.88807);
   hNCpi0inFVdis_stack_8->SetBinContent(10,21.99989);
   hNCpi0inFVdis_stack_8->SetBinContent(11,18.33369);
   hNCpi0inFVdis_stack_8->SetBinContent(12,17.35885);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.59749);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.03292);
   hNCpi0inFVdis_stack_8->SetBinContent(15,8.518166);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.959661);
   hNCpi0inFVdis_stack_8->SetBinContent(17,7.262498);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.440196);
   hNCpi0inFVdis_stack_8->SetBinContent(19,4.08637);
   hNCpi0inFVdis_stack_8->SetBinContent(20,3.485524);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.784439);
   hNCpi0inFVdis_stack_8->SetBinContent(22,2.132698);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.435694);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.8501219);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.7391858);
   hNCpi0inFVdis_stack_8->SetBinContent(26,3.541315);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.097318);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3365421);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.240986);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.629579);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.537533);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.71191);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.650739);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.478098);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.398635);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.350162);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.196923);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.119028);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9228191);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8589238);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.8853292);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.8150984);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6506403);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.6533269);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3310023);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.4876561);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4148453);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2770189);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2452205);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.5327894);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1525;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.334968);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2791681);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.2051824);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.2013529);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1526;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = 1527;
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
   hs7->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(2,0.1950248);
   hCCpi0inFV_stack_11->SetBinContent(3,0.3917402);
   hCCpi0inFV_stack_11->SetBinContent(4,0.536893);
   hCCpi0inFV_stack_11->SetBinContent(5,6.590828);
   hCCpi0inFV_stack_11->SetBinContent(6,14.6485);
   hCCpi0inFV_stack_11->SetBinContent(7,22.11452);
   hCCpi0inFV_stack_11->SetBinContent(8,25.69344);
   hCCpi0inFV_stack_11->SetBinContent(9,31.09055);
   hCCpi0inFV_stack_11->SetBinContent(10,38.11835);
   hCCpi0inFV_stack_11->SetBinContent(11,36.09431);
   hCCpi0inFV_stack_11->SetBinContent(12,40.0463);
   hCCpi0inFV_stack_11->SetBinContent(13,35.1957);
   hCCpi0inFV_stack_11->SetBinContent(14,27.99675);
   hCCpi0inFV_stack_11->SetBinContent(15,24.4639);
   hCCpi0inFV_stack_11->SetBinContent(16,19.08943);
   hCCpi0inFV_stack_11->SetBinContent(17,15.71876);
   hCCpi0inFV_stack_11->SetBinContent(18,16.48242);
   hCCpi0inFV_stack_11->SetBinContent(19,9.529776);
   hCCpi0inFV_stack_11->SetBinContent(20,10.06858);
   hCCpi0inFV_stack_11->SetBinContent(21,8.876228);
   hCCpi0inFV_stack_11->SetBinContent(22,7.327631);
   hCCpi0inFV_stack_11->SetBinContent(23,6.155046);
   hCCpi0inFV_stack_11->SetBinContent(24,3.56938);
   hCCpi0inFV_stack_11->SetBinContent(25,3.17764);
   hCCpi0inFV_stack_11->SetBinContent(26,11.53071);
   hCCpi0inFV_stack_11->SetBinError(2,0.1950249);
   hCCpi0inFV_stack_11->SetBinError(3,0.2770047);
   hCCpi0inFV_stack_11->SetBinError(4,0.3929602);
   hCCpi0inFV_stack_11->SetBinError(5,1.320961);
   hCCpi0inFV_stack_11->SetBinError(6,1.962912);
   hCCpi0inFV_stack_11->SetBinError(7,2.419896);
   hCCpi0inFV_stack_11->SetBinError(8,2.551108);
   hCCpi0inFV_stack_11->SetBinError(9,2.780001);
   hCCpi0inFV_stack_11->SetBinError(10,3.0241);
   hCCpi0inFV_stack_11->SetBinError(11,2.968119);
   hCCpi0inFV_stack_11->SetBinError(12,3.119873);
   hCCpi0inFV_stack_11->SetBinError(13,2.954412);
   hCCpi0inFV_stack_11->SetBinError(14,2.727947);
   hCCpi0inFV_stack_11->SetBinError(15,2.497931);
   hCCpi0inFV_stack_11->SetBinError(16,2.17183);
   hCCpi0inFV_stack_11->SetBinError(17,1.955562);
   hCCpi0inFV_stack_11->SetBinError(18,2.07726);
   hCCpi0inFV_stack_11->SetBinError(19,1.571587);
   hCCpi0inFV_stack_11->SetBinError(20,1.633535);
   hCCpi0inFV_stack_11->SetBinError(21,1.475271);
   hCCpi0inFV_stack_11->SetBinError(22,1.388465);
   hCCpi0inFV_stack_11->SetBinError(23,1.287054);
   hCCpi0inFV_stack_11->SetBinError(24,0.9202779);
   hCCpi0inFV_stack_11->SetBinError(25,0.8775989);
   hCCpi0inFV_stack_11->SetBinError(26,1.674478);
   hCCpi0inFV_stack_11->SetEntries(1778);

   ci = 1528;
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
   hs7->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(3,0.7336084);
   hNCinFV_stack_12->SetBinContent(4,1.070405);
   hNCinFV_stack_12->SetBinContent(5,4.639785);
   hNCinFV_stack_12->SetBinContent(6,9.618057);
   hNCinFV_stack_12->SetBinContent(7,10.84545);
   hNCinFV_stack_12->SetBinContent(8,12.56372);
   hNCinFV_stack_12->SetBinContent(9,12.99917);
   hNCinFV_stack_12->SetBinContent(10,14.99652);
   hNCinFV_stack_12->SetBinContent(11,11.67035);
   hNCinFV_stack_12->SetBinContent(12,12.07223);
   hNCinFV_stack_12->SetBinContent(13,8.36108);
   hNCinFV_stack_12->SetBinContent(14,8.492708);
   hNCinFV_stack_12->SetBinContent(15,7.960887);
   hNCinFV_stack_12->SetBinContent(16,4.643166);
   hNCinFV_stack_12->SetBinContent(17,4.003148);
   hNCinFV_stack_12->SetBinContent(18,2.502356);
   hNCinFV_stack_12->SetBinContent(19,2.587494);
   hNCinFV_stack_12->SetBinContent(20,1.320373);
   hNCinFV_stack_12->SetBinContent(21,1.608988);
   hNCinFV_stack_12->SetBinContent(22,2.876109);
   hNCinFV_stack_12->SetBinContent(23,1.518779);
   hNCinFV_stack_12->SetBinContent(24,0.6803553);
   hNCinFV_stack_12->SetBinContent(25,1.217248);
   hNCinFV_stack_12->SetBinContent(26,2.055672);
   hNCinFV_stack_12->SetBinError(3,0.4394482);
   hNCinFV_stack_12->SetBinError(4,0.5545368);
   hNCinFV_stack_12->SetBinError(5,1.074441);
   hNCinFV_stack_12->SetBinError(6,1.556889);
   hNCinFV_stack_12->SetBinError(7,1.677419);
   hNCinFV_stack_12->SetBinError(8,1.732735);
   hNCinFV_stack_12->SetBinError(9,1.79873);
   hNCinFV_stack_12->SetBinError(10,1.942531);
   hNCinFV_stack_12->SetBinError(11,1.71004);
   hNCinFV_stack_12->SetBinError(12,1.733477);
   hNCinFV_stack_12->SetBinError(13,1.442799);
   hNCinFV_stack_12->SetBinError(14,1.467671);
   hNCinFV_stack_12->SetBinError(15,1.414788);
   hNCinFV_stack_12->SetBinError(16,1.075057);
   hNCinFV_stack_12->SetBinError(17,1.038897);
   hNCinFV_stack_12->SetBinError(18,0.73534);
   hNCinFV_stack_12->SetBinError(19,0.8087577);
   hNCinFV_stack_12->SetBinError(20,0.5548703);
   hNCinFV_stack_12->SetBinError(21,0.6801404);
   hNCinFV_stack_12->SetBinError(22,0.8993325);
   hNCinFV_stack_12->SetBinError(23,0.5892709);
   hNCinFV_stack_12->SetBinError(24,0.4810838);
   hNCinFV_stack_12->SetBinError(25,0.6211758);
   hNCinFV_stack_12->SetBinError(26,0.7082781);
   hNCinFV_stack_12->SetEntries(601);

   ci = 1529;
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
   hs7->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(2,0.1967154);
   hnumuCCinFV_stack_13->SetBinContent(4,1.009484);
   hnumuCCinFV_stack_13->SetBinContent(5,9.832199);
   hnumuCCinFV_stack_13->SetBinContent(6,14.73545);
   hnumuCCinFV_stack_13->SetBinContent(7,23.89923);
   hnumuCCinFV_stack_13->SetBinContent(8,23.89719);
   hnumuCCinFV_stack_13->SetBinContent(9,23.81119);
   hnumuCCinFV_stack_13->SetBinContent(10,21.80775);
   hnumuCCinFV_stack_13->SetBinContent(11,19.617);
   hnumuCCinFV_stack_13->SetBinContent(12,20.66325);
   hnumuCCinFV_stack_13->SetBinContent(13,15.11436);
   hnumuCCinFV_stack_13->SetBinContent(14,12.33067);
   hnumuCCinFV_stack_13->SetBinContent(15,9.729222);
   hnumuCCinFV_stack_13->SetBinContent(16,9.628574);
   hnumuCCinFV_stack_13->SetBinContent(17,8.77946);
   hnumuCCinFV_stack_13->SetBinContent(18,4.1225);
   hnumuCCinFV_stack_13->SetBinContent(19,5.337583);
   hnumuCCinFV_stack_13->SetBinContent(20,2.600739);
   hnumuCCinFV_stack_13->SetBinContent(21,2.580939);
   hnumuCCinFV_stack_13->SetBinContent(22,1.473675);
   hnumuCCinFV_stack_13->SetBinContent(23,0.5960084);
   hnumuCCinFV_stack_13->SetBinContent(24,1.91221);
   hnumuCCinFV_stack_13->SetBinContent(25,0.8355629);
   hnumuCCinFV_stack_13->SetBinContent(26,4.957721);
   hnumuCCinFV_stack_13->SetBinError(2,0.1967154);
   hnumuCCinFV_stack_13->SetBinError(4,0.5780548);
   hnumuCCinFV_stack_13->SetBinError(5,1.991085);
   hnumuCCinFV_stack_13->SetBinError(6,2.054991);
   hnumuCCinFV_stack_13->SetBinError(7,3.941059);
   hnumuCCinFV_stack_13->SetBinError(8,2.945964);
   hnumuCCinFV_stack_13->SetBinError(9,3.087985);
   hnumuCCinFV_stack_13->SetBinError(10,2.53868);
   hnumuCCinFV_stack_13->SetBinError(11,2.471948);
   hnumuCCinFV_stack_13->SetBinError(12,2.592034);
   hnumuCCinFV_stack_13->SetBinError(13,2.425085);
   hnumuCCinFV_stack_13->SetBinError(14,2.011077);
   hnumuCCinFV_stack_13->SetBinError(15,1.842536);
   hnumuCCinFV_stack_13->SetBinError(16,1.719812);
   hnumuCCinFV_stack_13->SetBinError(17,1.592955);
   hnumuCCinFV_stack_13->SetBinError(18,1.048911);
   hnumuCCinFV_stack_13->SetBinError(19,1.200196);
   hnumuCCinFV_stack_13->SetBinError(20,0.8120294);
   hnumuCCinFV_stack_13->SetBinError(21,0.7980921);
   hnumuCCinFV_stack_13->SetBinError(22,0.5843523);
   hnumuCCinFV_stack_13->SetBinError(23,0.4256409);
   hnumuCCinFV_stack_13->SetBinError(24,0.6516395);
   hnumuCCinFV_stack_13->SetBinError(25,0.419905);
   hnumuCCinFV_stack_13->SetBinError(26,1.213105);
   hnumuCCinFV_stack_13->SetEntries(929);

   ci = 1530;
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
   hs7->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(5,0.6678257);
   hnueCCinFV_stack_14->SetBinContent(6,1.307865);
   hnueCCinFV_stack_14->SetBinContent(7,0.8379295);
   hnueCCinFV_stack_14->SetBinContent(8,0.8548678);
   hnueCCinFV_stack_14->SetBinContent(9,1.233047);
   hnueCCinFV_stack_14->SetBinContent(10,0.6024907);
   hnueCCinFV_stack_14->SetBinContent(11,0.3900497);
   hnueCCinFV_stack_14->SetBinContent(12,2.660097);
   hnueCCinFV_stack_14->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(14,1.164804);
   hnueCCinFV_stack_14->SetBinContent(15,0.7925366);
   hnueCCinFV_stack_14->SetBinContent(16,0.6404051);
   hnueCCinFV_stack_14->SetBinContent(17,0.441907);
   hnueCCinFV_stack_14->SetBinContent(18,0.5352025);
   hnueCCinFV_stack_14->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(24,0.1950248);
   hnueCCinFV_stack_14->SetBinContent(25,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(26,0.3917402);
   hnueCCinFV_stack_14->SetBinError(5,0.4856034);
   hnueCCinFV_stack_14->SetBinError(6,0.6000466);
   hnueCCinFV_stack_14->SetBinError(7,0.4217225);
   hnueCCinFV_stack_14->SetBinError(8,0.429236);
   hnueCCinFV_stack_14->SetBinError(9,0.5626642);
   hnueCCinFV_stack_14->SetBinError(10,0.3480623);
   hnueCCinFV_stack_14->SetBinError(11,0.2758068);
   hnueCCinFV_stack_14->SetBinError(12,1.045188);
   hnueCCinFV_stack_14->SetBinError(13,0.3921167);
   hnueCCinFV_stack_14->SetBinError(14,0.5906321);
   hnueCCinFV_stack_14->SetBinError(15,0.4687978);
   hnueCCinFV_stack_14->SetBinError(16,0.3722443);
   hnueCCinFV_stack_14->SetBinError(17,0.3143499);
   hnueCCinFV_stack_14->SetBinError(18,0.3921167);
   hnueCCinFV_stack_14->SetBinError(21,0.1967154);
   hnueCCinFV_stack_14->SetBinError(24,0.1950249);
   hnueCCinFV_stack_14->SetBinError(25,0.3401776);
   hnueCCinFV_stack_14->SetBinError(26,0.2770047);
   hnueCCinFV_stack_14->SetEntries(54);

   ci = 1531;
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
   hs7->Add(hnueCCinFV_stack_14,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmcerror__20->SetBinContent(2,0.3917402);
   hmcerror__20->SetBinContent(3,2.719419);
   hmcerror__20->SetBinContent(4,20.02861);
   hmcerror__20->SetBinContent(5,193.4568);
   hmcerror__20->SetBinContent(6,302.5098);
   hmcerror__20->SetBinContent(7,283.9492);
   hmcerror__20->SetBinContent(8,288.7056);
   hmcerror__20->SetBinContent(9,285.1219);
   hmcerror__20->SetBinContent(10,240.548);
   hmcerror__20->SetBinContent(11,214.7158);
   hmcerror__20->SetBinContent(12,197.7439);
   hmcerror__20->SetBinContent(13,143.8713);
   hmcerror__20->SetBinContent(14,117.4235);
   hmcerror__20->SetBinContent(15,95.29253);
   hmcerror__20->SetBinContent(16,76.53078);
   hmcerror__20->SetBinContent(17,60.11217);
   hmcerror__20->SetBinContent(18,46.57318);
   hmcerror__20->SetBinContent(19,34.73954);
   hmcerror__20->SetBinContent(20,27.27204);
   hmcerror__20->SetBinContent(21,22.08189);
   hmcerror__20->SetBinContent(22,18.59552);
   hmcerror__20->SetBinContent(23,13.42475);
   hmcerror__20->SetBinContent(24,10.05414);
   hmcerror__20->SetBinContent(25,9.048576);
   hmcerror__20->SetBinContent(26,38.20083);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,1.947421);
   hmcerror__20->SetBinError(3,1.641016);
   hmcerror__20->SetBinError(4,7.120636);
   hmcerror__20->SetBinError(5,49.99177);
   hmcerror__20->SetBinError(6,78.52663);
   hmcerror__20->SetBinError(7,69.36585);
   hmcerror__20->SetBinError(8,74.51993);
   hmcerror__20->SetBinError(9,68.30341);
   hmcerror__20->SetBinError(10,62.03466);
   hmcerror__20->SetBinError(11,51.06213);
   hmcerror__20->SetBinError(12,48.0218);
   hmcerror__20->SetBinError(13,36.74612);
   hmcerror__20->SetBinError(14,32.6689);
   hmcerror__20->SetBinError(15,26.46182);
   hmcerror__20->SetBinError(16,19.93976);
   hmcerror__20->SetBinError(17,20.08753);
   hmcerror__20->SetBinError(18,14.35402);
   hmcerror__20->SetBinError(19,10.8112);
   hmcerror__20->SetBinError(20,10.17196);
   hmcerror__20->SetBinError(21,8.801623);
   hmcerror__20->SetBinError(22,8.626659);
   hmcerror__20->SetBinError(23,6.955546);
   hmcerror__20->SetBinError(24,5.061224);
   hmcerror__20->SetBinError(25,6.508256);
   hmcerror__20->SetBinError(26,16.49258);
   hmcerror__20->SetEntries(2712.362);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3025[25] = {
   1,
   0,
   1,
   14,
   127,
   230,
   231,
   218,
   226,
   183,
   163,
   135,
   107,
   85,
   68,
   45,
   38,
   35,
   21,
   16,
   16,
   15,
   11,
   13,
   9};
   Double_t _felx3025[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3025[25] = {
   1,
   0,
   1,
   3.9102,
   11.26943,
   15.16575,
   15.19868,
   14.76482,
   15.0333,
   13.52775,
   12.76715,
   11.61895,
   10.34408,
   9.3428,
   8.3726,
   6.8416,
   6.3013,
   6.0548,
   4.7354,
   4.1628,
   4.1628,
   4.0385,
   3.4975,
   3.77763,
   3.19354};
   Double_t _fehx3025[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3025[25] = {
   1.35971,
   1.1478,
   1.35971,
   3.6898,
   11.26943,
   15.16575,
   15.19868,
   14.76482,
   15.0333,
   13.52775,
   12.76715,
   11.61895,
   10.34408,
   9.1411,
   8.1701,
   6.637,
   6.0955,
   5.8483,
   4.5229,
   3.9454,
   3.9454,
   3.8197,
   3.27,
   3.5552,
   2.9582};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,-275,1225);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(270.8186);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=15.2/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2008.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.3","F");

   ci = 1518;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 182.5","F");

   ci = 1519;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 11.5","F");

   ci = 1520;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 94.0","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.5","F");

   ci = 1522;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.3","F");

   ci = 1523;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1305.3","F");

   ci = 1524;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  243.3","F");

   ci = 1525;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

   ci = 1526;
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

   ci = 1527;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 403.2","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 139.0","F");

   ci = 1529;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 234.5","F");

   ci = 1530;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 13.4","F");

   ci = 1531;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-348.8462,-0.5333333,1266.538,2.133333);
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
   
   Double_t _fx3026[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3026[25] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3026[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3026[25] = {
   0,
   4.971207,
   0.6034439,
   0.3555233,
   0.2584131,
   0.2595838,
   0.2442897,
   0.2581174,
   0.2395586,
   0.2578889,
   0.2378127,
   0.2428485,
   0.2554096,
   0.2782144,
   0.2776904,
   0.2605457,
   0.3341674,
   0.3082035,
   0.3112072,
   0.3729813,
   0.39859,
   0.4639106,
   0.5181135,
   0.5033973,
   0.7192575};
   Double_t _fehx3026[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3026[25] = {
   0,
   4.971207,
   0.6034439,
   0.3555233,
   0.2584131,
   0.2595838,
   0.2442897,
   0.2581174,
   0.2395586,
   0.2578889,
   0.2378127,
   0.2428485,
   0.2554096,
   0.2782144,
   0.2776904,
   0.2605457,
   0.3341674,
   0.3082035,
   0.3112072,
   0.3729813,
   0.39859,
   0.4639106,
   0.5181135,
   0.5033973,
   0.7192575};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,-275,1225);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3026->GetXaxis()->SetRange(9,92);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3027[25] = {
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
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3027[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3027[25] = {
   0,
   1.349812,
   0.3823788,
   0.2570618,
   0.2426216,
   0.2322568,
   0.2341842,
   0.234563,
   0.2294544,
   0.240148,
   0.2265619,
   0.2183256,
   0.2374441,
   0.2418046,
   0.2330089,
   0.2263082,
   0.2317306,
   0.2301363,
   0.2271649,
   0.2354419,
   0.2400432,
   0.2548115,
   0.2790173,
   0.2476958,
   0.2653614};
   Double_t _fehx3027[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3027[25] = {
   0,
   1.349812,
   0.3823788,
   0.2570618,
   0.2426216,
   0.2322568,
   0.2341842,
   0.234563,
   0.2294544,
   0.240148,
   0.2265619,
   0.2183256,
   0.2374441,
   0.2418046,
   0.2330089,
   0.2263082,
   0.2317306,
   0.2301363,
   0.2271649,
   0.2354419,
   0.2400432,
   0.2548115,
   0.2790173,
   0.2476958,
   0.2653614};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,-275,1225);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(9,92);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[25] = {
   -125,
   -75,
   -25,
   25,
   75,
   125,
   175,
   225,
   275,
   325,
   375,
   425,
   475,
   525,
   575,
   625,
   675,
   725,
   775,
   825,
   875,
   925,
   975,
   1025,
   1075};
   Double_t _fy3028[25] = {
   10,
   0,
   0.3677257,
   0.6990002,
   0.6564773,
   0.760306,
   0.8135259,
   0.7550946,
   0.7926434,
   0.7607628,
   0.7591432,
   0.6827013,
   0.7437201,
   0.7238758,
   0.7135922,
   0.5879987,
   0.6321515,
   0.7515055,
   0.6044984,
   0.5866814,
   0.7245755,
   0.8066459,
   0.8193819,
   1.293,
   0.9946316};
   Double_t _felx3028[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fely3028[25] = {
   0,
   0,
   0.3677257,
   0.1952308,
   0.05825294,
   0.0501331,
   0.05352608,
   0.05114146,
   0.05272585,
   0.05623721,
   0.05946068,
   0.05875757,
   0.07189813,
   0.07956502,
   0.08786208,
   0.08939671,
   0.1048257,
   0.1300062,
   0.1363115,
   0.1526398,
   0.1885164,
   0.217176,
   0.2605262,
   0.375729,
   0.3529329};
   Double_t _fehx3028[25] = {
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25,
   25};
   Double_t _fehy3028[25] = {
   0,
   2.930003,
   0.5000003,
   0.1842265,
   0.05825294,
   0.0501331,
   0.05352608,
   0.05114146,
   0.05272585,
   0.05623721,
   0.05946068,
   0.05875757,
   0.07189813,
   0.07784731,
   0.08573705,
   0.08672328,
   0.1014021,
   0.1255723,
   0.1301946,
   0.1446683,
   0.1786713,
   0.2054097,
   0.2435799,
   0.3536057,
   0.3269244};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,-275,1225);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(11);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
   TLine *line = new TLine(-150,1,1100,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
