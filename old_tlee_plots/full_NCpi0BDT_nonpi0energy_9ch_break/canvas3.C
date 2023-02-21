#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Wed Jun  8 11:41:04 2022) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",242,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas3->SetHighLightColor(2);
   canvas3->Range(0,0,1,1);
   canvas3->SetFillColor(0);
   canvas3->SetBorderMode(0);
   canvas3->SetBorderSize(2);
   canvas3->SetLeftMargin(0.12);
   canvas3->SetRightMargin(0.12);
   canvas3->SetTopMargin(0.05);
   canvas3->SetBottomMargin(0.12);
   canvas3->SetFrameLineWidth(2);
   canvas3->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-342.3077,-4.42,1260.256,488.7589);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmc__7->SetBinContent(0,0.2525153);
   hmc__7->SetBinContent(1,1.671059);
   hmc__7->SetBinContent(2,8.858245);
   hmc__7->SetBinContent(3,16.64731);
   hmc__7->SetBinContent(4,218.1247);
   hmc__7->SetBinContent(5,168.7065);
   hmc__7->SetBinContent(6,164.199);
   hmc__7->SetBinContent(7,150.4816);
   hmc__7->SetBinContent(8,141.0367);
   hmc__7->SetBinContent(9,125.8206);
   hmc__7->SetBinContent(10,108.3645);
   hmc__7->SetBinContent(11,93.51086);
   hmc__7->SetBinContent(12,75.21069);
   hmc__7->SetBinContent(13,71.96209);
   hmc__7->SetBinContent(14,47.63721);
   hmc__7->SetBinContent(15,44.86273);
   hmc__7->SetBinContent(16,33.53137);
   hmc__7->SetBinContent(17,32.93121);
   hmc__7->SetBinContent(18,23.71411);
   hmc__7->SetBinContent(19,19.18915);
   hmc__7->SetBinContent(20,13.08285);
   hmc__7->SetBinContent(21,9.19557);
   hmc__7->SetBinContent(22,10.29253);
   hmc__7->SetBinContent(23,9.980427);
   hmc__7->SetBinContent(24,6.091185);
   hmc__7->SetBinContent(25,5.534957);
   hmc__7->SetBinContent(26,42.22);
   hmc__7->SetBinError(0,0.2006334);
   hmc__7->SetBinError(1,1.461134);
   hmc__7->SetBinError(2,3.075953);
   hmc__7->SetBinError(3,4.381395);
   hmc__7->SetBinError(4,38.87335);
   hmc__7->SetBinError(5,30.68117);
   hmc__7->SetBinError(6,30.52052);
   hmc__7->SetBinError(7,30.83562);
   hmc__7->SetBinError(8,27.86489);
   hmc__7->SetBinError(9,25.48018);
   hmc__7->SetBinError(10,23.77024);
   hmc__7->SetBinError(11,20.16672);
   hmc__7->SetBinError(12,21.99551);
   hmc__7->SetBinError(13,18.90843);
   hmc__7->SetBinError(14,12.91649);
   hmc__7->SetBinError(15,13.08948);
   hmc__7->SetBinError(16,9.713963);
   hmc__7->SetBinError(17,10.21966);
   hmc__7->SetBinError(18,11.71542);
   hmc__7->SetBinError(19,7.00801);
   hmc__7->SetBinError(20,7.077008);
   hmc__7->SetBinError(21,9.916027);
   hmc__7->SetBinError(22,7.163378);
   hmc__7->SetBinError(23,6.558697);
   hmc__7->SetBinError(24,4.879952);
   hmc__7->SetBinError(25,5.177518);
   hmc__7->SetBinError(26,17.12379);
   hmc__7->SetMinimum(-4.42);
   hmc__7->SetMaximum(464.1);
   hmc__7->SetEntries(1611.219);
   hmc__7->SetLineWidth(5);
   hmc__7->GetXaxis()->SetLabelFont(42);
   hmc__7->GetXaxis()->SetTitleOffset(1);
   hmc__7->GetXaxis()->SetTitleFont(42);
   hmc__7->GetYaxis()->SetTitle("Event counts");
   hmc__7->GetYaxis()->SetLabelFont(132);
   hmc__7->GetYaxis()->SetLabelSize(0.04);
   hmc__7->GetYaxis()->SetTitleSize(0.05);
   hmc__7->GetYaxis()->SetTitleOffset(0.73);
   hmc__7->GetYaxis()->SetTitleFont(132);
   hmc__7->GetZaxis()->SetLabelFont(42);
   hmc__7->GetZaxis()->SetTitleOffset(1);
   hmc__7->GetZaxis()->SetTitleFont(42);
   hmc__7->Draw("hist");
   
   THStack *hs3 = new THStack();
   hs3->SetName("hs3");
   hs3->SetTitle("");
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",25,-150,1100);
   hs3_stack_3->SetMinimum(-4.830136e-08);
   hs3_stack_3->SetMaximum(229.0309);
   hs3_stack_3->SetDirectory(0);
   hs3_stack_3->SetStats(0);
   hs3_stack_3->SetLineWidth(2);
   hs3_stack_3->SetMarkerStyle(20);
   hs3_stack_3->GetXaxis()->SetNdivisions(509);
   hs3_stack_3->GetXaxis()->SetLabelFont(132);
   hs3_stack_3->GetXaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetXaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetXaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetXaxis()->SetTitleFont(132);
   hs3_stack_3->GetYaxis()->SetNdivisions(509);
   hs3_stack_3->GetYaxis()->SetLabelFont(132);
   hs3_stack_3->GetYaxis()->SetLabelOffset(0.01);
   hs3_stack_3->GetYaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetYaxis()->SetTitleOffset(0.95);
   hs3_stack_3->GetYaxis()->SetTitleFont(132);
   hs3_stack_3->GetZaxis()->SetLabelFont(132);
   hs3_stack_3->GetZaxis()->SetLabelSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleSize(0.08);
   hs3_stack_3->GetZaxis()->SetTitleOffset(1.2);
   hs3_stack_3->GetZaxis()->SetTitleFont(132);
   hs3->SetHistogram(hs3_stack_3);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hbadmatch_stack_1->SetBinContent(3,1.214546);
   hbadmatch_stack_1->SetBinContent(4,4.466649);
   hbadmatch_stack_1->SetBinContent(5,4.446449);
   hbadmatch_stack_1->SetBinContent(6,3.35664);
   hbadmatch_stack_1->SetBinContent(7,5.262922);
   hbadmatch_stack_1->SetBinContent(8,6.044622);
   hbadmatch_stack_1->SetBinContent(9,5.158705);
   hbadmatch_stack_1->SetBinContent(10,4.199863);
   hbadmatch_stack_1->SetBinContent(11,4.654414);
   hbadmatch_stack_1->SetBinContent(12,2.828065);
   hbadmatch_stack_1->SetBinContent(13,3.174344);
   hbadmatch_stack_1->SetBinContent(14,1.50393);
   hbadmatch_stack_1->SetBinContent(15,1.634664);
   hbadmatch_stack_1->SetBinContent(16,0.7868615);
   hbadmatch_stack_1->SetBinContent(17,1.908252);
   hbadmatch_stack_1->SetBinContent(18,1.318683);
   hbadmatch_stack_1->SetBinContent(19,0.9269427);
   hbadmatch_stack_1->SetBinContent(20,0.3934307);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.7607957);
   hbadmatch_stack_1->SetBinContent(24,0.5352025);
   hbadmatch_stack_1->SetBinContent(26,1.49098);
   hbadmatch_stack_1->SetBinError(3,0.6522134);
   hbadmatch_stack_1->SetBinError(4,1.136717);
   hbadmatch_stack_1->SetBinError(5,1.121103);
   hbadmatch_stack_1->SetBinError(6,0.9611904);
   hbadmatch_stack_1->SetBinError(7,1.307317);
   hbadmatch_stack_1->SetBinError(8,1.581121);
   hbadmatch_stack_1->SetBinError(9,1.276883);
   hbadmatch_stack_1->SetBinError(10,1.057357);
   hbadmatch_stack_1->SetBinError(11,1.070184);
   hbadmatch_stack_1->SetBinError(12,0.8436069);
   hbadmatch_stack_1->SetBinError(13,0.9515475);
   hbadmatch_stack_1->SetBinError(14,0.5717093);
   hbadmatch_stack_1->SetBinError(15,0.6879426);
   hbadmatch_stack_1->SetBinError(16,0.3934307);
   hbadmatch_stack_1->SetBinError(17,0.7620643);
   hbadmatch_stack_1->SetBinError(18,0.5542732);
   hbadmatch_stack_1->SetBinError(19,0.4800908);
   hbadmatch_stack_1->SetBinError(20,0.2781975);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.4522722);
   hbadmatch_stack_1->SetBinError(24,0.3921167);
   hbadmatch_stack_1->SetBinError(26,0.6294674);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1462;
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
   hs3->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hext_stack_2->SetBinContent(1,0.4065989);
   hext_stack_2->SetBinContent(2,5.86391);
   hext_stack_2->SetBinContent(3,6.705829);
   hext_stack_2->SetBinContent(4,45.33645);
   hext_stack_2->SetBinContent(5,32.01695);
   hext_stack_2->SetBinContent(6,34.07143);
   hext_stack_2->SetBinContent(7,21.87081);
   hext_stack_2->SetBinContent(8,17.39104);
   hext_stack_2->SetBinContent(9,16.2838);
   hext_stack_2->SetBinContent(10,12.62164);
   hext_stack_2->SetBinContent(11,14.97462);
   hext_stack_2->SetBinContent(12,8.675392);
   hext_stack_2->SetBinContent(13,15.64377);
   hext_stack_2->SetBinContent(14,7.67625);
   hext_stack_2->SetBinContent(15,8.407247);
   hext_stack_2->SetBinContent(16,5.516392);
   hext_stack_2->SetBinContent(17,5.020411);
   hext_stack_2->SetBinContent(18,3.565599);
   hext_stack_2->SetBinContent(19,4.028449);
   hext_stack_2->SetBinContent(20,0.6487947);
   hext_stack_2->SetBinContent(21,1.290409);
   hext_stack_2->SetBinContent(22,0.7309963);
   hext_stack_2->SetBinContent(23,2.916804);
   hext_stack_2->SetBinContent(24,1.297589);
   hext_stack_2->SetBinContent(25,0.7309963);
   hext_stack_2->SetBinContent(26,13.89328);
   hext_stack_2->SetBinError(1,0.4065989);
   hext_stack_2->SetBinError(2,1.887831);
   hext_stack_2->SetBinError(3,1.757767);
   hext_stack_2->SetBinError(4,4.652154);
   hext_stack_2->SetBinError(5,3.871126);
   hext_stack_2->SetBinError(6,4.066821);
   hext_stack_2->SetBinError(7,3.042179);
   hext_stack_2->SetBinError(8,2.763604);
   hext_stack_2->SetBinError(9,2.620738);
   hext_stack_2->SetBinError(10,2.39096);
   hext_stack_2->SetBinError(11,2.552139);
   hext_stack_2->SetBinError(12,1.894463);
   hext_stack_2->SetBinError(13,2.873753);
   hext_stack_2->SetBinError(14,1.934366);
   hext_stack_2->SetBinError(15,2.003079);
   hext_stack_2->SetBinError(16,1.503469);
   hext_stack_2->SetBinError(17,1.495396);
   hext_stack_2->SetBinError(18,1.22225);
   hext_stack_2->SetBinError(19,1.479117);
   hext_stack_2->SetBinError(20,0.4587671);
   hext_stack_2->SetBinError(21,0.788756);
   hext_stack_2->SetBinError(22,0.5201503);
   hext_stack_2->SetBinError(23,1.132884);
   hext_stack_2->SetBinError(24,0.6487947);
   hext_stack_2->SetBinError(25,0.5201503);
   hext_stack_2->SetBinError(26,2.570234);
   hext_stack_2->SetEntries(672);

   ci = 1463;
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
   hs3->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hdirt_stack_3->SetBinContent(4,5.300666);
   hdirt_stack_3->SetBinContent(5,3.942496);
   hdirt_stack_3->SetBinContent(6,4.989306);
   hdirt_stack_3->SetBinContent(7,1.850796);
   hdirt_stack_3->SetBinContent(8,1.455474);
   hdirt_stack_3->SetBinContent(9,1.220425);
   hdirt_stack_3->SetBinContent(10,0.4209923);
   hdirt_stack_3->SetBinContent(11,1.048031);
   hdirt_stack_3->SetBinContent(12,1.296161);
   hdirt_stack_3->SetBinContent(13,0.6763744);
   hdirt_stack_3->SetBinContent(14,0.4950385);
   hdirt_stack_3->SetBinContent(16,0.5429839);
   hdirt_stack_3->SetBinContent(21,0.3895662);
   hdirt_stack_3->SetBinContent(25,0.1380715);
   hdirt_stack_3->SetBinError(4,1.232761);
   hdirt_stack_3->SetBinError(5,0.9952731);
   hdirt_stack_3->SetBinError(6,1.446034);
   hdirt_stack_3->SetBinError(7,0.7171302);
   hdirt_stack_3->SetBinError(8,0.6380629);
   hdirt_stack_3->SetBinError(9,0.5109976);
   hdirt_stack_3->SetBinError(10,0.2443324);
   hdirt_stack_3->SetBinError(11,0.5265607);
   hdirt_stack_3->SetBinError(12,0.6039821);
   hdirt_stack_3->SetBinError(13,0.4782689);
   hdirt_stack_3->SetBinError(14,0.2933304);
   hdirt_stack_3->SetBinError(16,0.4278058);
   hdirt_stack_3->SetBinError(21,0.3895662);
   hdirt_stack_3->SetBinError(25,0.1380715);
   hdirt_stack_3->SetEntries(101);

   ci = 1464;
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
   hs3->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   houtFV_stack_4->SetBinContent(2,0.8770706);
   houtFV_stack_4->SetBinContent(3,2.076028);
   houtFV_stack_4->SetBinContent(4,45.61596);
   houtFV_stack_4->SetBinContent(5,45.23769);
   houtFV_stack_4->SetBinContent(6,35.95972);
   houtFV_stack_4->SetBinContent(7,31.18995);
   houtFV_stack_4->SetBinContent(8,29.34601);
   houtFV_stack_4->SetBinContent(9,23.92634);
   houtFV_stack_4->SetBinContent(10,19.90237);
   houtFV_stack_4->SetBinContent(11,18.28828);
   houtFV_stack_4->SetBinContent(12,15.06688);
   houtFV_stack_4->SetBinContent(13,14.80479);
   houtFV_stack_4->SetBinContent(14,9.036407);
   houtFV_stack_4->SetBinContent(15,6.832558);
   houtFV_stack_4->SetBinContent(16,5.376642);
   houtFV_stack_4->SetBinContent(17,4.448141);
   houtFV_stack_4->SetBinContent(18,4.393198);
   houtFV_stack_4->SetBinContent(19,2.99367);
   houtFV_stack_4->SetBinContent(20,1.270501);
   houtFV_stack_4->SetBinContent(21,1.528944);
   houtFV_stack_4->SetBinContent(22,1.752451);
   houtFV_stack_4->SetBinContent(23,1.125349);
   houtFV_stack_4->SetBinContent(24,0.7319179);
   houtFV_stack_4->SetBinContent(25,0.5901461);
   houtFV_stack_4->SetBinContent(26,2.637366);
   houtFV_stack_4->SetBinError(2,0.5197486);
   houtFV_stack_4->SetBinError(3,0.7141513);
   houtFV_stack_4->SetBinError(4,3.390358);
   houtFV_stack_4->SetBinError(5,3.405274);
   houtFV_stack_4->SetBinError(6,3.180611);
   houtFV_stack_4->SetBinError(7,2.870907);
   houtFV_stack_4->SetBinError(8,2.711598);
   houtFV_stack_4->SetBinError(9,2.584638);
   houtFV_stack_4->SetBinError(10,2.204188);
   houtFV_stack_4->SetBinError(11,2.128644);
   houtFV_stack_4->SetBinError(12,1.986738);
   houtFV_stack_4->SetBinError(13,2.025748);
   houtFV_stack_4->SetBinError(14,1.494924);
   houtFV_stack_4->SetBinError(15,1.338461);
   houtFV_stack_4->SetBinError(16,1.187186);
   houtFV_stack_4->SetBinError(17,1.057219);
   houtFV_stack_4->SetBinError(18,1.074885);
   houtFV_stack_4->SetBinError(19,0.9050237);
   houtFV_stack_4->SetBinError(20,0.5895188);
   houtFV_stack_4->SetBinError(21,0.6589018);
   houtFV_stack_4->SetBinError(22,0.7345848);
   houtFV_stack_4->SetBinError(23,0.5194673);
   houtFV_stack_4->SetBinError(24,0.438694);
   houtFV_stack_4->SetBinError(25,0.340721);
   houtFV_stack_4->SetBinError(26,0.7838607);
   houtFV_stack_4->SetEntries(1382);

   ci = 1465;
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
   hs3->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,7.946716);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.509016);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.17164);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.04559);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.4188362);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.9282512);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.505038);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3800824);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3390387);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.277838);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1466;
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
   hs3->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.3620359);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.153118);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1536621);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1050124);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1954681);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1467;
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
   hs3->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.3062359);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.6691039);
   hNCpi0inFVres_stack_7->SetBinContent(3,1.604422);
   hNCpi0inFVres_stack_7->SetBinContent(4,51.9216);
   hNCpi0inFVres_stack_7->SetBinContent(5,34.28474);
   hNCpi0inFVres_stack_7->SetBinContent(6,33.09402);
   hNCpi0inFVres_stack_7->SetBinContent(7,35.19501);
   hNCpi0inFVres_stack_7->SetBinContent(8,29.12987);
   hNCpi0inFVres_stack_7->SetBinContent(9,22.75419);
   hNCpi0inFVres_stack_7->SetBinContent(10,19.43275);
   hNCpi0inFVres_stack_7->SetBinContent(11,14.78126);
   hNCpi0inFVres_stack_7->SetBinContent(12,8.670778);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.53312);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.654659);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.78271);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.140347);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.844816);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.157854);
   hNCpi0inFVres_stack_7->SetBinContent(19,1.547294);
   hNCpi0inFVres_stack_7->SetBinContent(20,1.994862);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.4321178);
   hNCpi0inFVres_stack_7->SetBinContent(22,1.130122);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.334968);
   hNCpi0inFVres_stack_7->SetBinContent(24,0.4746361);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.307068);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.920372);
   hNCpi0inFVres_stack_7->SetBinError(0,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(1,0.14851);
   hNCpi0inFVres_stack_7->SetBinError(2,0.2548204);
   hNCpi0inFVres_stack_7->SetBinError(3,0.3870163);
   hNCpi0inFVres_stack_7->SetBinError(4,2.320883);
   hNCpi0inFVres_stack_7->SetBinError(5,1.860986);
   hNCpi0inFVres_stack_7->SetBinError(6,1.899728);
   hNCpi0inFVres_stack_7->SetBinError(7,1.989903);
   hNCpi0inFVres_stack_7->SetBinError(8,1.743505);
   hNCpi0inFVres_stack_7->SetBinError(9,1.502603);
   hNCpi0inFVres_stack_7->SetBinError(10,1.379534);
   hNCpi0inFVres_stack_7->SetBinError(11,1.312622);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8742688);
   hNCpi0inFVres_stack_7->SetBinError(13,0.9880656);
   hNCpi0inFVres_stack_7->SetBinError(14,0.6074305);
   hNCpi0inFVres_stack_7->SetBinError(15,0.7088987);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7057809);
   hNCpi0inFVres_stack_7->SetBinError(17,0.5625206);
   hNCpi0inFVres_stack_7->SetBinError(18,0.32337);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4185812);
   hNCpi0inFVres_stack_7->SetBinError(20,0.5219663);
   hNCpi0inFVres_stack_7->SetBinError(21,0.1371558);
   hNCpi0inFVres_stack_7->SetBinError(22,0.3695249);
   hNCpi0inFVres_stack_7->SetBinError(23,0.2051824);
   hNCpi0inFVres_stack_7->SetBinError(24,0.2806257);
   hNCpi0inFVres_stack_7->SetBinError(25,0.2032767);
   hNCpi0inFVres_stack_7->SetBinError(26,0.3235708);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1468;
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
   hs3->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.3899359);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.77525);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.113452);
   hNCpi0inFVdis_stack_8->SetBinContent(6,7.393205);
   hNCpi0inFVdis_stack_8->SetBinContent(7,7.126327);
   hNCpi0inFVdis_stack_8->SetBinContent(8,4.952606);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.256178);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.7735);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.918306);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.971778);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.50968);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.631658);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.966626);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.38139);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.422908);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.920372);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.5294358);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.3763178);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.1394999);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.8376724);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.3764861);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.432286);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.8501219);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1561744);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.039416);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9379837);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9291945);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.9257324);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.7516691);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7046305);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.8172839);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.657385);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6392747);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.4914984);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4050343);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.4540403);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.4198967);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.429217);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3235708);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.168174);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.1313578);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.06238626);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.3929223);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2236377);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.2270916);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2770189);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1469;
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
   hs3->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1470;
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
   hs3->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hNCpi0inFVother_stack_10 = new TH1F("hNCpi0inFVother_stack_10","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = 1471;
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
   hs3->Add(hNCpi0inFVother_stack_10,"");
   
   TH1F *hCCpi0inFV_stack_11 = new TH1F("hCCpi0inFV_stack_11","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hCCpi0inFV_stack_11->SetBinContent(0,0.1967154);
   hCCpi0inFV_stack_11->SetBinContent(1,0.3934307);
   hCCpi0inFV_stack_11->SetBinContent(2,0.9269427);
   hCCpi0inFV_stack_11->SetBinContent(3,1.855576);
   hCCpi0inFV_stack_11->SetBinContent(4,20.53271);
   hCCpi0inFV_stack_11->SetBinContent(5,19.72577);
   hCCpi0inFV_stack_11->SetBinContent(6,22.08173);
   hCCpi0inFV_stack_11->SetBinContent(7,24.97309);
   hCCpi0inFV_stack_11->SetBinContent(8,32.6095);
   hCCpi0inFV_stack_11->SetBinContent(9,30.49345);
   hCCpi0inFV_stack_11->SetBinContent(10,29.2563);
   hCCpi0inFV_stack_11->SetBinContent(11,21.80054);
   hCCpi0inFV_stack_11->SetBinContent(12,21.14104);
   hCCpi0inFV_stack_11->SetBinContent(13,17.93062);
   hCCpi0inFV_stack_11->SetBinContent(14,16.56749);
   hCCpi0inFV_stack_11->SetBinContent(15,15.55901);
   hCCpi0inFV_stack_11->SetBinContent(16,11.5508);
   hCCpi0inFV_stack_11->SetBinContent(17,13.69602);
   hCCpi0inFV_stack_11->SetBinContent(18,8.933226);
   hCCpi0inFV_stack_11->SetBinContent(19,6.172551);
   hCCpi0inFV_stack_11->SetBinContent(20,6.955327);
   hCCpi0inFV_stack_11->SetBinContent(21,3.66297);
   hCCpi0inFV_stack_11->SetBinContent(22,4.681813);
   hCCpi0inFV_stack_11->SetBinContent(23,2.931052);
   hCCpi0inFV_stack_11->SetBinContent(24,2.245626);
   hCCpi0inFV_stack_11->SetBinContent(25,2.14081);
   hCCpi0inFV_stack_11->SetBinContent(26,16.25893);
   hCCpi0inFV_stack_11->SetBinError(0,0.1967154);
   hCCpi0inFV_stack_11->SetBinError(1,0.2781975);
   hCCpi0inFV_stack_11->SetBinError(2,0.4800908);
   hCCpi0inFV_stack_11->SetBinError(3,0.6794384);
   hCCpi0inFV_stack_11->SetBinError(4,2.301415);
   hCCpi0inFV_stack_11->SetBinError(5,2.214801);
   hCCpi0inFV_stack_11->SetBinError(6,2.373433);
   hCCpi0inFV_stack_11->SetBinError(7,2.486563);
   hCCpi0inFV_stack_11->SetBinError(8,2.892639);
   hCCpi0inFV_stack_11->SetBinError(9,2.828384);
   hCCpi0inFV_stack_11->SetBinError(10,2.733774);
   hCCpi0inFV_stack_11->SetBinError(11,2.303921);
   hCCpi0inFV_stack_11->SetBinError(12,2.292188);
   hCCpi0inFV_stack_11->SetBinError(13,2.127591);
   hCCpi0inFV_stack_11->SetBinError(14,2.001274);
   hCCpi0inFV_stack_11->SetBinError(15,2.021136);
   hCCpi0inFV_stack_11->SetBinError(16,1.755585);
   hCCpi0inFV_stack_11->SetBinError(17,1.871074);
   hCCpi0inFV_stack_11->SetBinError(18,1.521167);
   hCCpi0inFV_stack_11->SetBinError(19,1.252441);
   hCCpi0inFV_stack_11->SetBinError(20,1.312215);
   hCCpi0inFV_stack_11->SetBinError(21,0.9816245);
   hCCpi0inFV_stack_11->SetBinError(22,1.14459);
   hCCpi0inFV_stack_11->SetBinError(23,0.8781425);
   hCCpi0inFV_stack_11->SetBinError(24,0.7332843);
   hCCpi0inFV_stack_11->SetBinError(25,0.7842334);
   hCCpi0inFV_stack_11->SetBinError(26,2.044403);
   hCCpi0inFV_stack_11->SetEntries(1506);

   ci = 1472;
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
   hs3->Add(hCCpi0inFV_stack_11,"");
   
   TH1F *hNCinFV_stack_12 = new TH1F("hNCinFV_stack_12","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hNCinFV_stack_12->SetBinContent(1,0.1967154);
   hNCinFV_stack_12->SetBinContent(3,0.3917402);
   hNCinFV_stack_12->SetBinContent(4,4.056401);
   hNCinFV_stack_12->SetBinContent(5,3.467945);
   hNCinFV_stack_12->SetBinContent(6,3.516127);
   hNCinFV_stack_12->SetBinContent(7,3.714533);
   hNCinFV_stack_12->SetBinContent(8,2.980925);
   hNCinFV_stack_12->SetBinContent(9,3.230893);
   hNCinFV_stack_12->SetBinContent(10,0.3900497);
   hNCinFV_stack_12->SetBinContent(11,1.413964);
   hNCinFV_stack_12->SetBinContent(12,1.858957);
   hNCinFV_stack_12->SetBinContent(13,1.176911);
   hNCinFV_stack_12->SetBinContent(14,0.9269427);
   hNCinFV_stack_12->SetBinContent(15,0.3917402);
   hNCinFV_stack_12->SetBinContent(16,0.1967154);
   hNCinFV_stack_12->SetBinContent(17,0.9269427);
   hNCinFV_stack_12->SetBinContent(18,0.1967154);
   hNCinFV_stack_12->SetBinContent(20,0.3871285);
   hNCinFV_stack_12->SetBinContent(22,1.020533);
   hNCinFV_stack_12->SetBinContent(26,1.073786);
   hNCinFV_stack_12->SetBinError(1,0.1967154);
   hNCinFV_stack_12->SetBinError(3,0.2770047);
   hNCinFV_stack_12->SetBinError(4,1.020285);
   hNCinFV_stack_12->SetBinError(5,0.9620561);
   hNCinFV_stack_12->SetBinError(6,0.940871);
   hNCinFV_stack_12->SetBinError(7,0.9615599);
   hNCinFV_stack_12->SetBinError(8,0.8552677);
   hNCinFV_stack_12->SetBinError(9,0.855484);
   hNCinFV_stack_12->SetBinError(10,0.2758068);
   hNCinFV_stack_12->SetBinError(11,0.6515799);
   hNCinFV_stack_12->SetBinError(12,0.6804124);
   hNCinFV_stack_12->SetBinError(13,0.4804759);
   hNCinFV_stack_12->SetBinError(14,0.4800908);
   hNCinFV_stack_12->SetBinError(15,0.2770047);
   hNCinFV_stack_12->SetBinError(16,0.1967154);
   hNCinFV_stack_12->SetBinError(17,0.4800908);
   hNCinFV_stack_12->SetBinError(18,0.1967154);
   hNCinFV_stack_12->SetBinError(20,0.3434024);
   hNCinFV_stack_12->SetBinError(22,0.5892049);
   hNCinFV_stack_12->SetBinError(26,0.5557297);
   hNCinFV_stack_12->SetEntries(135);

   ci = 1473;
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
   hs3->Add(hNCinFV_stack_12,"");
   
   TH1F *hnumuCCinFV_stack_13 = new TH1F("hnumuCCinFV_stack_13","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnumuCCinFV_stack_13->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_13->SetBinContent(2,0.3401995);
   hnumuCCinFV_stack_13->SetBinContent(3,2.353435);
   hnumuCCinFV_stack_13->SetBinContent(4,20.70489);
   hnumuCCinFV_stack_13->SetBinContent(5,12.44729);
   hnumuCCinFV_stack_13->SetBinContent(6,17.66478);
   hnumuCCinFV_stack_13->SetBinContent(7,17.69173);
   hnumuCCinFV_stack_13->SetBinContent(8,14.4535);
   hnumuCCinFV_stack_13->SetBinContent(9,16.43142);
   hnumuCCinFV_stack_13->SetBinContent(10,14.7369);
   hnumuCCinFV_stack_13->SetBinContent(11,11.90133);
   hnumuCCinFV_stack_13->SetBinContent(12,10.70271);
   hnumuCCinFV_stack_13->SetBinContent(13,7.036601);
   hnumuCCinFV_stack_13->SetBinContent(14,5.047522);
   hnumuCCinFV_stack_13->SetBinContent(15,5.035659);
   hnumuCCinFV_stack_13->SetBinContent(16,3.620401);
   hnumuCCinFV_stack_13->SetBinContent(17,2.482896);
   hnumuCCinFV_stack_13->SetBinContent(18,3.172665);
   hnumuCCinFV_stack_13->SetBinContent(19,2.740603);
   hnumuCCinFV_stack_13->SetBinContent(20,1.028591);
   hnumuCCinFV_stack_13->SetBinContent(21,1.36157);
   hnumuCCinFV_stack_13->SetBinContent(22,0.4436859);
   hnumuCCinFV_stack_13->SetBinContent(23,1.073786);
   hnumuCCinFV_stack_13->SetBinContent(24,0.4297273);
   hnumuCCinFV_stack_13->SetBinContent(25,1.195579);
   hnumuCCinFV_stack_13->SetBinContent(26,3.742711);
   hnumuCCinFV_stack_13->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(2,0.3401776);
   hnumuCCinFV_stack_13->SetBinError(3,1.002058);
   hnumuCCinFV_stack_13->SetBinError(4,2.989809);
   hnumuCCinFV_stack_13->SetBinError(5,1.839846);
   hnumuCCinFV_stack_13->SetBinError(6,2.626152);
   hnumuCCinFV_stack_13->SetBinError(7,3.149803);
   hnumuCCinFV_stack_13->SetBinError(8,2.038488);
   hnumuCCinFV_stack_13->SetBinError(9,2.431172);
   hnumuCCinFV_stack_13->SetBinError(10,2.133263);
   hnumuCCinFV_stack_13->SetBinError(11,1.926769);
   hnumuCCinFV_stack_13->SetBinError(12,1.940373);
   hnumuCCinFV_stack_13->SetBinError(13,1.353831);
   hnumuCCinFV_stack_13->SetBinError(14,1.446969);
   hnumuCCinFV_stack_13->SetBinError(15,1.157098);
   hnumuCCinFV_stack_13->SetBinError(16,0.9667627);
   hnumuCCinFV_stack_13->SetBinError(17,0.8276249);
   hnumuCCinFV_stack_13->SetBinError(18,0.9835512);
   hnumuCCinFV_stack_13->SetBinError(19,0.9627125);
   hnumuCCinFV_stack_13->SetBinError(20,0.5248497);
   hnumuCCinFV_stack_13->SetBinError(21,0.5706547);
   hnumuCCinFV_stack_13->SetBinError(22,0.3157394);
   hnumuCCinFV_stack_13->SetBinError(23,0.5557297);
   hnumuCCinFV_stack_13->SetBinError(24,0.4297273);
   hnumuCCinFV_stack_13->SetBinError(25,1.195579);
   hnumuCCinFV_stack_13->SetBinError(26,1.006504);
   hnumuCCinFV_stack_13->SetEntries(681);

   ci = 1474;
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
   hs3->Add(hnumuCCinFV_stack_13,"");
   
   TH1F *hnueCCinFV_stack_14 = new TH1F("hnueCCinFV_stack_14","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hnueCCinFV_stack_14->SetBinContent(4,1.077453);
   hnueCCinFV_stack_14->SetBinContent(5,2.347263);
   hnueCCinFV_stack_14->SetBinContent(6,0.8445767);
   hnueCCinFV_stack_14->SetBinContent(7,0.3934307);
   hnueCCinFV_stack_14->SetBinContent(8,1.766401);
   hnueCCinFV_stack_14->SetBinContent(9,0.4655403);
   hnueCCinFV_stack_14->SetBinContent(10,1.071798);
   hnueCCinFV_stack_14->SetBinContent(11,0.3401776);
   hnueCCinFV_stack_14->SetBinContent(12,0.8179187);
   hnueCCinFV_stack_14->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(17,0.1529246);
   hnueCCinFV_stack_14->SetBinContent(19,0.2502081);
   hnueCCinFV_stack_14->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_14->SetBinContent(26,1.352455);
   hnueCCinFV_stack_14->SetBinError(4,0.5954382);
   hnueCCinFV_stack_14->SetBinError(5,1.01571);
   hnueCCinFV_stack_14->SetBinError(6,0.42341);
   hnueCCinFV_stack_14->SetBinError(7,0.2781975);
   hnueCCinFV_stack_14->SetBinError(8,1.581964);
   hnueCCinFV_stack_14->SetBinError(9,0.3297448);
   hnueCCinFV_stack_14->SetBinError(10,0.5626565);
   hnueCCinFV_stack_14->SetBinError(11,0.3401776);
   hnueCCinFV_stack_14->SetBinError(12,0.499128);
   hnueCCinFV_stack_14->SetBinError(13,0.1967154);
   hnueCCinFV_stack_14->SetBinError(15,0.1967154);
   hnueCCinFV_stack_14->SetBinError(17,0.1529246);
   hnueCCinFV_stack_14->SetBinError(19,0.2502081);
   hnueCCinFV_stack_14->SetBinError(22,0.1967154);
   hnueCCinFV_stack_14->SetBinError(26,1.173746);
   hnueCCinFV_stack_14->SetEntries(36);

   ci = 1475;
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
   hs3->Add(hnueCCinFV_stack_14,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);
   hmcerror__8->SetBinContent(0,0.2525153);
   hmcerror__8->SetBinContent(1,1.671059);
   hmcerror__8->SetBinContent(2,8.858245);
   hmcerror__8->SetBinContent(3,16.64731);
   hmcerror__8->SetBinContent(4,218.1247);
   hmcerror__8->SetBinContent(5,168.7065);
   hmcerror__8->SetBinContent(6,164.199);
   hmcerror__8->SetBinContent(7,150.4816);
   hmcerror__8->SetBinContent(8,141.0367);
   hmcerror__8->SetBinContent(9,125.8206);
   hmcerror__8->SetBinContent(10,108.3645);
   hmcerror__8->SetBinContent(11,93.51086);
   hmcerror__8->SetBinContent(12,75.21069);
   hmcerror__8->SetBinContent(13,71.96209);
   hmcerror__8->SetBinContent(14,47.63721);
   hmcerror__8->SetBinContent(15,44.86273);
   hmcerror__8->SetBinContent(16,33.53137);
   hmcerror__8->SetBinContent(17,32.93121);
   hmcerror__8->SetBinContent(18,23.71411);
   hmcerror__8->SetBinContent(19,19.18915);
   hmcerror__8->SetBinContent(20,13.08285);
   hmcerror__8->SetBinContent(21,9.19557);
   hmcerror__8->SetBinContent(22,10.29253);
   hmcerror__8->SetBinContent(23,9.980427);
   hmcerror__8->SetBinContent(24,6.091185);
   hmcerror__8->SetBinContent(25,5.534957);
   hmcerror__8->SetBinContent(26,42.22);
   hmcerror__8->SetBinError(0,0.2006334);
   hmcerror__8->SetBinError(1,1.461134);
   hmcerror__8->SetBinError(2,3.075953);
   hmcerror__8->SetBinError(3,4.381395);
   hmcerror__8->SetBinError(4,38.87335);
   hmcerror__8->SetBinError(5,30.68117);
   hmcerror__8->SetBinError(6,30.52052);
   hmcerror__8->SetBinError(7,30.83562);
   hmcerror__8->SetBinError(8,27.86489);
   hmcerror__8->SetBinError(9,25.48018);
   hmcerror__8->SetBinError(10,23.77024);
   hmcerror__8->SetBinError(11,20.16672);
   hmcerror__8->SetBinError(12,21.99551);
   hmcerror__8->SetBinError(13,18.90843);
   hmcerror__8->SetBinError(14,12.91649);
   hmcerror__8->SetBinError(15,13.08948);
   hmcerror__8->SetBinError(16,9.713963);
   hmcerror__8->SetBinError(17,10.21966);
   hmcerror__8->SetBinError(18,11.71542);
   hmcerror__8->SetBinError(19,7.00801);
   hmcerror__8->SetBinError(20,7.077008);
   hmcerror__8->SetBinError(21,9.916027);
   hmcerror__8->SetBinError(22,7.163378);
   hmcerror__8->SetBinError(23,6.558697);
   hmcerror__8->SetBinError(24,4.879952);
   hmcerror__8->SetBinError(25,5.177518);
   hmcerror__8->SetBinError(26,17.12379);
   hmcerror__8->SetEntries(1611.219);

   ci = TColor::GetColor("#999999");
   hmcerror__8->SetFillColor(ci);
   hmcerror__8->SetFillStyle(3002);
   hmcerror__8->SetLineColor(12);
   hmcerror__8->SetLineWidth(0);
   hmcerror__8->SetMarkerColor(0);
   hmcerror__8->SetMarkerSize(0);
   hmcerror__8->GetXaxis()->SetLabelFont(42);
   hmcerror__8->GetXaxis()->SetTitleOffset(1);
   hmcerror__8->GetXaxis()->SetTitleFont(42);
   hmcerror__8->GetYaxis()->SetLabelFont(42);
   hmcerror__8->GetYaxis()->SetTitleFont(42);
   hmcerror__8->GetZaxis()->SetLabelFont(42);
   hmcerror__8->GetZaxis()->SetTitleOffset(1);
   hmcerror__8->GetZaxis()->SetTitleFont(42);
   hmcerror__8->Draw("same E2");
   
   Double_t _fx3009[25] = {
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
   Double_t _fy3009[25] = {
   2,
   1,
   15,
   221,
   143,
   137,
   143,
   137,
   113,
   101,
   86,
   75,
   61,
   40,
   32,
   28,
   23,
   21,
   16,
   9,
   14,
   5,
   9,
   5,
   2};
   Double_t _felx3009[25] = {
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
   Double_t _fely3009[25] = {
   2,
   1,
   4.0385,
   14.86607,
   11.95826,
   11.7047,
   11.95826,
   11.7047,
   10.63015,
   10.04988,
   9.3967,
   8.7852,
   7.9383,
   6.4604,
   5.7977,
   5.4358,
   4.9457,
   4.7354,
   4.1628,
   3.19354,
   3.9102,
   2.48995,
   3.19354,
   2.48995,
   2};
   Double_t _fehx3009[25] = {
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
   Double_t _fehy3009[25] = {
   1.51917,
   1.35971,
   3.8197,
   14.86607,
   11.95826,
   11.7047,
   11.95826,
   11.7047,
   10.63015,
   10.04988,
   9.1951,
   8.5831,
   7.7354,
   6.2549,
   5.5904,
   5.2271,
   4.7346,
   4.5229,
   3.9454,
   2.9582,
   3.6898,
   2.21064,
   2.9582,
   2.21064,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-275,1225);
   Graph_Graph3009->SetMinimum(0);
   Graph_Graph3009->SetMaximum(259.4527);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineWidth(2);
   Graph_Graph3009->SetMarkerStyle(20);
   Graph_Graph3009->GetXaxis()->SetNdivisions(509);
   Graph_Graph3009->GetXaxis()->SetLabelFont(132);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetXaxis()->SetTitleFont(132);
   Graph_Graph3009->GetYaxis()->SetNdivisions(509);
   Graph_Graph3009->GetYaxis()->SetLabelFont(132);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3009->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3009->GetYaxis()->SetTitleFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelFont(132);
   Graph_Graph3009->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3009->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3009->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.15","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=7.7/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1439.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 55.0","F");

   ci = 1462;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 273.7","F");

   ci = 1463;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

   ci = 1464;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 322.4","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.8","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  284.2","F");

   ci = 1468;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  70.5","F");

   ci = 1469;
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

   ci = 1470;
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

   ci = 1471;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_11","CC#pi^{0}, 338.8","F");

   ci = 1472;
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
   entry=leg->AddEntry("hNCinFV_stack_12","NC Other, 30.4","F");

   ci = 1473;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_13","CC Other, 174.4","F");

   ci = 1474;
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
   entry=leg->AddEntry("hnueCCinFV_stack_14","#nu_{e}/#bar{#nu}_{e} CC, 10.1","F");

   ci = 1475;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_nonpi0_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[25] = {
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
   Double_t _fy3010[25] = {
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
   Double_t _felx3010[25] = {
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
   Double_t _fely3010[25] = {
   0.8743764,
   0.3472418,
   0.2631893,
   0.1782162,
   0.1818613,
   0.1858752,
   0.2049129,
   0.1975719,
   0.202512,
   0.2193544,
   0.2156618,
   0.2924518,
   0.2627554,
   0.2711428,
   0.2917674,
   0.2896978,
   0.3103335,
   0.4940275,
   0.3652068,
   0.5409376,
   1.078348,
   0.6959783,
   0.6571559,
   0.8011499,
   0.9354215};
   Double_t _fehx3010[25] = {
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
   Double_t _fehy3010[25] = {
   0.8743764,
   0.3472418,
   0.2631893,
   0.1782162,
   0.1818613,
   0.1858752,
   0.2049129,
   0.1975719,
   0.202512,
   0.2193544,
   0.2156618,
   0.2924518,
   0.2627554,
   0.2711428,
   0.2917674,
   0.2896978,
   0.3103335,
   0.4940275,
   0.3652068,
   0.5409376,
   1.078348,
   0.6959783,
   0.6571559,
   0.8011499,
   0.9354215};
   grae = new TGraphAsymmErrors(25,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-275,1225);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("Non #pi^{0} Energy [MeV]");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3010->GetYaxis()->SetNdivisions(210);
   Graph_Graph3010->GetYaxis()->SetLabelFont(132);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3010->GetYaxis()->SetTitleFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelFont(132);
   Graph_Graph3010->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3010->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3010->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3010);
   
   grae->Draw("a2");
   
   Double_t _fx3011[25] = {
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
   Double_t _fy3011[25] = {
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
   Double_t _felx3011[25] = {
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
   Double_t _fely3011[25] = {
   0.6545133,
   0.2496642,
   0.1840974,
   0.1546629,
   0.1713084,
   0.1606578,
   0.1913824,
   0.1851971,
   0.1848967,
   0.1972674,
   0.1754945,
   0.190673,
   0.1722891,
   0.1942719,
   0.1936845,
   0.2107805,
   0.2213805,
   0.2016308,
   0.2333492,
   0.3013737,
   0.2667829,
   0.3721782,
   0.2534163,
   0.3049017,
   0.4725985};
   Double_t _fehx3011[25] = {
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
   Double_t _fehy3011[25] = {
   0.6545133,
   0.2496642,
   0.1840974,
   0.1546629,
   0.1713084,
   0.1606578,
   0.1913824,
   0.1851971,
   0.1848967,
   0.1972674,
   0.1754945,
   0.190673,
   0.1722891,
   0.1942719,
   0.1936845,
   0.2107805,
   0.2213805,
   0.2016308,
   0.2333492,
   0.3013737,
   0.2667829,
   0.3721782,
   0.2534163,
   0.3049017,
   0.4725985};
   grae = new TGraphAsymmErrors(25,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-275,1225);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(9,92);
   Graph_Graph3011->GetXaxis()->SetNdivisions(509);
   Graph_Graph3011->GetXaxis()->SetLabelFont(132);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetXaxis()->SetTitleFont(132);
   Graph_Graph3011->GetYaxis()->SetNdivisions(509);
   Graph_Graph3011->GetYaxis()->SetLabelFont(132);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3011->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3011->GetYaxis()->SetTitleFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelFont(132);
   Graph_Graph3011->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3011->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3011->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("2 ");
   
   Double_t _fx3012[25] = {
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
   Double_t _fy3012[25] = {
   1.196846,
   0.1128892,
   0.9010464,
   1.013182,
   0.8476261,
   0.8343536,
   0.9502823,
   0.9713783,
   0.8981039,
   0.9320394,
   0.9196792,
   0.9971986,
   0.8476685,
   0.8396797,
   0.713287,
   0.835039,
   0.6984257,
   0.8855487,
   0.8338044,
   0.6879233,
   1.522472,
   0.4857892,
   0.901765,
   0.8208583,
   0.3613398};
   Double_t _felx3012[25] = {
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
   Double_t _fely3012[25] = {
   1.196846,
   0.1128892,
   0.2425917,
   0.06815399,
   0.07088205,
   0.07128364,
   0.0794666,
   0.08299045,
   0.08448651,
   0.09274139,
   0.1004878,
   0.1168079,
   0.1103122,
   0.1356167,
   0.129232,
   0.1621109,
   0.1501828,
   0.199687,
   0.216935,
   0.2441012,
   0.4252265,
   0.2419181,
   0.3199803,
   0.4087792,
   0.3613398};
   Double_t _fehx3012[25] = {
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
   Double_t _fehy3012[25] = {
   0.9091064,
   0.1534965,
   0.2294485,
   0.06815399,
   0.07088205,
   0.07128364,
   0.0794666,
   0.08299045,
   0.08448651,
   0.09274139,
   0.09833189,
   0.1141207,
   0.1074927,
   0.1313028,
   0.1246112,
   0.1558869,
   0.1437724,
   0.1907261,
   0.2056057,
   0.2261128,
   0.4012584,
   0.214781,
   0.2964002,
   0.3629245,
   0.2744683};
   grae = new TGraphAsymmErrors(25,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-275,1225);
   Graph_Graph3012->SetMinimum(0);
   Graph_Graph3012->SetMaximum(2.316548);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineWidth(2);
   Graph_Graph3012->SetMarkerStyle(20);
   Graph_Graph3012->GetXaxis()->SetNdivisions(509);
   Graph_Graph3012->GetXaxis()->SetLabelFont(132);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetXaxis()->SetTitleFont(132);
   Graph_Graph3012->GetYaxis()->SetNdivisions(509);
   Graph_Graph3012->GetYaxis()->SetLabelFont(132);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3012->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3012->GetYaxis()->SetTitleFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelFont(132);
   Graph_Graph3012->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3012->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3012->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3012);
   
   grae->Draw("p ");
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_nonpi0_energy_all",25,-150,1100);

   ci = TColor::GetColor("#000099");
   hist__9->SetLineColor(ci);
   hist__9->GetXaxis()->SetLabelFont(42);
   hist__9->GetXaxis()->SetTitleOffset(1);
   hist__9->GetXaxis()->SetTitleFont(42);
   hist__9->GetYaxis()->SetNdivisions(405);
   hist__9->GetYaxis()->SetLabelFont(42);
   hist__9->GetYaxis()->SetTitleFont(42);
   hist__9->GetZaxis()->SetLabelFont(42);
   hist__9->GetZaxis()->SetTitleOffset(1);
   hist__9->GetZaxis()->SetTitleFont(42);
   hist__9->Draw("axis same");
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
