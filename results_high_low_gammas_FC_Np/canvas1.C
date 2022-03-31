void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Mar 31 00:48:08 2022) by ROOT version 6.14/06
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",86,109,1200,900);
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
   pad1->Range(-92.30769,-0.610083,676.9231,51.40752);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hmc__1->SetBinContent(1,1.044763);
   hmc__1->SetBinContent(2,3.636584);
   hmc__1->SetBinContent(3,11.59959);
   hmc__1->SetBinContent(4,19.88664);
   hmc__1->SetBinContent(5,27.291);
   hmc__1->SetBinContent(6,30.50415);
   hmc__1->SetBinContent(7,28.9745);
   hmc__1->SetBinContent(8,20.86139);
   hmc__1->SetBinContent(9,16.97864);
   hmc__1->SetBinContent(10,14.62477);
   hmc__1->SetBinContent(11,11.80698);
   hmc__1->SetBinContent(12,10.28653);
   hmc__1->SetBinContent(13,8.957605);
   hmc__1->SetBinContent(14,6.817931);
   hmc__1->SetBinContent(15,5.755497);
   hmc__1->SetBinContent(16,3.965736);
   hmc__1->SetBinContent(17,3.536916);
   hmc__1->SetBinContent(18,3.118055);
   hmc__1->SetBinContent(19,2.641082);
   hmc__1->SetBinContent(20,1.858688);
   hmc__1->SetBinContent(21,1.295941);
   hmc__1->SetBinContent(22,1.020477);
   hmc__1->SetBinContent(23,0.9384642);
   hmc__1->SetBinContent(24,1.082896);
   hmc__1->SetBinContent(25,5.328308);
   hmc__1->SetBinError(1,1.051706);
   hmc__1->SetBinError(2,1.901039);
   hmc__1->SetBinError(3,4.346963);
   hmc__1->SetBinError(4,5.371951);
   hmc__1->SetBinError(5,7.310435);
   hmc__1->SetBinError(6,8.054245);
   hmc__1->SetBinError(7,8.751494);
   hmc__1->SetBinError(8,8.478194);
   hmc__1->SetBinError(9,5.435136);
   hmc__1->SetBinError(10,5.462878);
   hmc__1->SetBinError(11,4.079271);
   hmc__1->SetBinError(12,4.735833);
   hmc__1->SetBinError(13,3.482108);
   hmc__1->SetBinError(14,2.889023);
   hmc__1->SetBinError(15,2.478992);
   hmc__1->SetBinError(16,2.192494);
   hmc__1->SetBinError(17,2.089294);
   hmc__1->SetBinError(18,2.48858);
   hmc__1->SetBinError(19,1.935905);
   hmc__1->SetBinError(20,1.179352);
   hmc__1->SetBinError(21,0.8027216);
   hmc__1->SetBinError(22,1.33308);
   hmc__1->SetBinError(23,0.8995908);
   hmc__1->SetBinError(24,1.565189);
   hmc__1->SetBinError(25,2.079372);
   hmc__1->SetMinimum(-0.610083);
   hmc__1->SetMaximum(48.80664);
   hmc__1->SetEntries(240.4242);
   hmc__1->SetLineWidth(5);
   hmc__1->GetXaxis()->SetLabelFont(42);
   hmc__1->GetXaxis()->SetLabelSize(0.035);
   hmc__1->GetXaxis()->SetTitleSize(0.035);
   hmc__1->GetXaxis()->SetTitleFont(42);
   hmc__1->GetYaxis()->SetTitle("Event counts");
   hmc__1->GetYaxis()->SetLabelFont(132);
   hmc__1->GetYaxis()->SetTitleSize(0.05);
   hmc__1->GetYaxis()->SetTitleOffset(0.73);
   hmc__1->GetYaxis()->SetTitleFont(132);
   hmc__1->GetZaxis()->SetLabelFont(42);
   hmc__1->GetZaxis()->SetLabelSize(0.035);
   hmc__1->GetZaxis()->SetTitleSize(0.035);
   hmc__1->GetZaxis()->SetTitleFont(42);
   hmc__1->Draw("hist");
   
   THStack *hs1 = new THStack();
   hs1->SetName("hs1");
   hs1->SetTitle("");
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,600);
   hs1_stack_1->SetMinimum(-6.202043e-09);
   hs1_stack_1->SetMaximum(32.02936);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(2,0.2774512);
   hbadmatch_stack_1->SetBinContent(3,0.3723761);
   hbadmatch_stack_1->SetBinContent(4,0.4712904);
   hbadmatch_stack_1->SetBinContent(5,0.6496794);
   hbadmatch_stack_1->SetBinContent(6,0.7329296);
   hbadmatch_stack_1->SetBinContent(7,0.5052333);
   hbadmatch_stack_1->SetBinContent(8,0.2879792);
   hbadmatch_stack_1->SetBinContent(9,0.302111);
   hbadmatch_stack_1->SetBinContent(10,0.2649626);
   hbadmatch_stack_1->SetBinContent(11,0.02550039);
   hbadmatch_stack_1->SetBinContent(12,0.02710946);
   hbadmatch_stack_1->SetBinContent(13,0.02550039);
   hbadmatch_stack_1->SetBinContent(14,0.0127502);
   hbadmatch_stack_1->SetBinContent(15,0.06195629);
   hbadmatch_stack_1->SetBinContent(18,0.0127502);
   hbadmatch_stack_1->SetBinContent(19,0.0127502);
   hbadmatch_stack_1->SetBinContent(21,0.0127502);
   hbadmatch_stack_1->SetBinContent(25,0.07470649);
   hbadmatch_stack_1->SetBinError(2,0.1260997);
   hbadmatch_stack_1->SetBinError(3,0.1366506);
   hbadmatch_stack_1->SetBinError(4,0.1598501);
   hbadmatch_stack_1->SetBinError(5,0.1964174);
   hbadmatch_stack_1->SetBinError(6,0.3856751);
   hbadmatch_stack_1->SetBinError(7,0.1756535);
   hbadmatch_stack_1->SetBinError(8,0.1176992);
   hbadmatch_stack_1->SetBinError(9,0.1268608);
   hbadmatch_stack_1->SetBinError(10,0.1120882);
   hbadmatch_stack_1->SetBinError(11,0.0180315);
   hbadmatch_stack_1->SetBinError(12,0.01920302);
   hbadmatch_stack_1->SetBinError(13,0.0180315);
   hbadmatch_stack_1->SetBinError(14,0.0127502);
   hbadmatch_stack_1->SetBinError(15,0.06195629);
   hbadmatch_stack_1->SetBinError(18,0.0127502);
   hbadmatch_stack_1->SetBinError(19,0.0127502);
   hbadmatch_stack_1->SetBinError(21,0.0127502);
   hbadmatch_stack_1->SetBinError(25,0.06325464);
   hbadmatch_stack_1->SetEntries(113);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   hbadmatch_stack_1->SetLineColor(ci);
   hbadmatch_stack_1->GetXaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetXaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetXaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetXaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetYaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetYaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetYaxis()->SetTitleOffset(0);
   hbadmatch_stack_1->GetYaxis()->SetTitleFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelFont(42);
   hbadmatch_stack_1->GetZaxis()->SetLabelSize(0.035);
   hbadmatch_stack_1->GetZaxis()->SetTitleSize(0.035);
   hbadmatch_stack_1->GetZaxis()->SetTitleFont(42);
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,0.2235888);
   hext_stack_2->SetBinContent(2,0.1226985);
   hext_stack_2->SetBinContent(3,1.390612);
   hext_stack_2->SetBinContent(4,0.6312254);
   hext_stack_2->SetBinContent(5,1.614201);
   hext_stack_2->SetBinContent(6,2.248158);
   hext_stack_2->SetBinContent(7,1.626471);
   hext_stack_2->SetBinContent(8,1.390612);
   hext_stack_2->SetBinContent(9,0.6830363);
   hext_stack_2->SetBinContent(10,0.6707665);
   hext_stack_2->SetBinContent(11,0.2603984);
   hext_stack_2->SetBinContent(12,0.4839872);
   hext_stack_2->SetBinContent(13,0.2358586);
   hext_stack_2->SetBinContent(14,0.2481285);
   hext_stack_2->SetBinContent(15,0.02453971);
   hext_stack_2->SetBinContent(16,0.1990491);
   hext_stack_2->SetBinContent(17,0.211319);
   hext_stack_2->SetBinContent(18,0.01226985);
   hext_stack_2->SetBinContent(20,0.01226985);
   hext_stack_2->SetBinContent(21,0.1990491);
   hext_stack_2->SetBinContent(23,0.01226985);
   hext_stack_2->SetBinContent(25,0.03680956);
   hext_stack_2->SetBinError(1,0.199804);
   hext_stack_2->SetBinError(2,0.03880068);
   hext_stack_2->SetBinError(3,0.4900327);
   hext_stack_2->SetBinError(4,0.2865336);
   hext_stack_2->SetBinError(5,0.529201);
   hext_stack_2->SetBinError(6,0.6319549);
   hext_stack_2->SetBinError(7,0.5293432);
   hext_stack_2->SetBinError(8,0.4900327);
   hext_stack_2->SetBinError(9,0.3462882);
   hext_stack_2->SetBinError(10,0.3460707);
   hext_stack_2->SetBinError(11,0.2009311);
   hext_stack_2->SetBinError(12,0.2833636);
   hext_stack_2->SetBinError(13,0.2001804);
   hext_stack_2->SetBinError(14,0.2005561);
   hext_stack_2->SetBinError(15,0.01735219);
   hext_stack_2->SetBinError(16,0.1990491);
   hext_stack_2->SetBinError(17,0.1994269);
   hext_stack_2->SetBinError(18,0.01226985);
   hext_stack_2->SetBinError(20,0.01226985);
   hext_stack_2->SetBinError(21,0.1990491);
   hext_stack_2->SetBinError(23,0.01226985);
   hext_stack_2->SetBinError(25,0.02125201);
   hext_stack_2->SetEntries(215);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   hext_stack_2->SetLineColor(ci);
   hext_stack_2->GetXaxis()->SetLabelFont(42);
   hext_stack_2->GetXaxis()->SetLabelSize(0.035);
   hext_stack_2->GetXaxis()->SetTitleSize(0.035);
   hext_stack_2->GetXaxis()->SetTitleFont(42);
   hext_stack_2->GetYaxis()->SetLabelFont(42);
   hext_stack_2->GetYaxis()->SetLabelSize(0.035);
   hext_stack_2->GetYaxis()->SetTitleSize(0.035);
   hext_stack_2->GetYaxis()->SetTitleOffset(0);
   hext_stack_2->GetYaxis()->SetTitleFont(42);
   hext_stack_2->GetZaxis()->SetLabelFont(42);
   hext_stack_2->GetZaxis()->SetLabelSize(0.035);
   hext_stack_2->GetZaxis()->SetTitleSize(0.035);
   hext_stack_2->GetZaxis()->SetTitleFont(42);
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,0.1593424);
   hdirt_stack_3->SetBinContent(3,0.1268388);
   hdirt_stack_3->SetBinContent(4,0.06435481);
   hdirt_stack_3->SetBinContent(5,0.4913484);
   hdirt_stack_3->SetBinContent(6,0.113077);
   hdirt_stack_3->SetBinContent(7,0.09875319);
   hdirt_stack_3->SetBinContent(8,0.008219617);
   hdirt_stack_3->SetBinContent(9,0.01643923);
   hdirt_stack_3->SetBinContent(10,0.04420907);
   hdirt_stack_3->SetBinContent(11,0.05242869);
   hdirt_stack_3->SetBinContent(12,0.008219617);
   hdirt_stack_3->SetBinContent(25,0.008219617);
   hdirt_stack_3->SetBinError(2,0.08290286);
   hdirt_stack_3->SetBinError(3,0.07357573);
   hdirt_stack_3->SetBinError(4,0.05673378);
   hdirt_stack_3->SetBinError(5,0.3096646);
   hdirt_stack_3->SetBinError(6,0.06412153);
   hdirt_stack_3->SetBinError(7,0.06455977);
   hdirt_stack_3->SetBinError(8,0.008219618);
   hdirt_stack_3->SetBinError(9,0.01162429);
   hdirt_stack_3->SetBinError(10,0.04420907);
   hdirt_stack_3->SetBinError(11,0.0449667);
   hdirt_stack_3->SetBinError(12,0.008219618);
   hdirt_stack_3->SetBinError(25,0.008219618);
   hdirt_stack_3->SetEntries(40);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   hdirt_stack_3->SetLineColor(ci);
   hdirt_stack_3->GetXaxis()->SetLabelFont(42);
   hdirt_stack_3->GetXaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetXaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetXaxis()->SetTitleFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelFont(42);
   hdirt_stack_3->GetYaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetYaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetYaxis()->SetTitleOffset(0);
   hdirt_stack_3->GetYaxis()->SetTitleFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelFont(42);
   hdirt_stack_3->GetZaxis()->SetLabelSize(0.035);
   hdirt_stack_3->GetZaxis()->SetTitleSize(0.035);
   hdirt_stack_3->GetZaxis()->SetTitleFont(42);
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.0127502);
   houtFV_stack_4->SetBinContent(2,0.2751203);
   houtFV_stack_4->SetBinContent(3,0.654928);
   houtFV_stack_4->SetBinContent(4,0.8110029);
   houtFV_stack_4->SetBinContent(5,0.687504);
   houtFV_stack_4->SetBinContent(6,1.134022);
   houtFV_stack_4->SetBinContent(7,0.9861863);
   houtFV_stack_4->SetBinContent(8,0.6409451);
   houtFV_stack_4->SetBinContent(9,0.4846948);
   houtFV_stack_4->SetBinContent(10,0.8436823);
   houtFV_stack_4->SetBinContent(11,0.6709486);
   houtFV_stack_4->SetBinContent(12,0.4099883);
   houtFV_stack_4->SetBinContent(13,0.2113693);
   houtFV_stack_4->SetBinContent(14,0.3238924);
   houtFV_stack_4->SetBinContent(15,0.1858689);
   houtFV_stack_4->SetBinContent(16,0.149413);
   houtFV_stack_4->SetBinContent(17,0.0127502);
   houtFV_stack_4->SetBinContent(18,0.06195629);
   houtFV_stack_4->SetBinContent(19,0.06195629);
   houtFV_stack_4->SetBinContent(20,0.06195629);
   houtFV_stack_4->SetBinContent(21,0.0127502);
   houtFV_stack_4->SetBinContent(24,0.1239126);
   houtFV_stack_4->SetBinContent(25,0.07470649);
   houtFV_stack_4->SetBinError(1,0.0127502);
   houtFV_stack_4->SetBinError(2,0.1124887);
   houtFV_stack_4->SetBinError(3,0.1917037);
   houtFV_stack_4->SetBinError(4,0.2095341);
   houtFV_stack_4->SetBinError(5,0.1945112);
   houtFV_stack_4->SetBinError(6,0.2515444);
   houtFV_stack_4->SetBinError(7,0.2319991);
   houtFV_stack_4->SetBinError(8,0.1806656);
   houtFV_stack_4->SetBinError(9,0.1658926);
   houtFV_stack_4->SetBinError(10,0.2244755);
   houtFV_stack_4->SetBinError(11,0.2000442);
   houtFV_stack_4->SetBinError(12,0.1533597);
   houtFV_stack_4->SetBinError(13,0.1088158);
   houtFV_stack_4->SetBinError(14,0.1453979);
   houtFV_stack_4->SetBinError(15,0.1073114);
   houtFV_stack_4->SetBinError(16,0.08945557);
   houtFV_stack_4->SetBinError(17,0.0127502);
   houtFV_stack_4->SetBinError(18,0.06195629);
   houtFV_stack_4->SetBinError(19,0.06195629);
   houtFV_stack_4->SetBinError(20,0.06195629);
   houtFV_stack_4->SetBinError(21,0.0127502);
   houtFV_stack_4->SetBinError(24,0.08761943);
   houtFV_stack_4->SetBinError(25,0.06325464);
   houtFV_stack_4->SetEntries(218);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   houtFV_stack_4->SetLineColor(ci);
   houtFV_stack_4->GetXaxis()->SetLabelFont(42);
   houtFV_stack_4->GetXaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetXaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetXaxis()->SetTitleFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelFont(42);
   houtFV_stack_4->GetYaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetYaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetYaxis()->SetTitleOffset(0);
   houtFV_stack_4->GetYaxis()->SetTitleFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelFont(42);
   houtFV_stack_4->GetZaxis()->SetLabelSize(0.035);
   houtFV_stack_4->GetZaxis()->SetTitleSize(0.035);
   houtFV_stack_4->GetZaxis()->SetTitleFont(42);
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFV_stack_5->SetBinContent(1,0.2496199);
   hNCpi0inFV_stack_5->SetBinContent(2,1.348306);
   hNCpi0inFV_stack_5->SetBinContent(3,5.841651);
   hNCpi0inFV_stack_5->SetBinContent(4,12.00602);
   hNCpi0inFV_stack_5->SetBinContent(5,16.73463);
   hNCpi0inFV_stack_5->SetBinContent(6,17.67078);
   hNCpi0inFV_stack_5->SetBinContent(7,17.40288);
   hNCpi0inFV_stack_5->SetBinContent(8,13.19396);
   hNCpi0inFV_stack_5->SetBinContent(9,10.59737);
   hNCpi0inFV_stack_5->SetBinContent(10,8.888277);
   hNCpi0inFV_stack_5->SetBinContent(11,7.326807);
   hNCpi0inFV_stack_5->SetBinContent(12,6.047636);
   hNCpi0inFV_stack_5->SetBinContent(13,5.828901);
   hNCpi0inFV_stack_5->SetBinContent(14,4.070606);
   hNCpi0inFV_stack_5->SetBinContent(15,3.598662);
   hNCpi0inFV_stack_5->SetBinContent(16,2.427063);
   hNCpi0inFV_stack_5->SetBinContent(17,2.206533);
   hNCpi0inFV_stack_5->SetBinContent(18,2.150149);
   hNCpi0inFV_stack_5->SetBinContent(19,1.654498);
   hNCpi0inFV_stack_5->SetBinContent(20,1.441334);
   hNCpi0inFV_stack_5->SetBinContent(21,0.7980657);
   hNCpi0inFV_stack_5->SetBinContent(22,0.6341078);
   hNCpi0inFV_stack_5->SetBinContent(23,0.6231523);
   hNCpi0inFV_stack_5->SetBinContent(24,0.2988259);
   hNCpi0inFV_stack_5->SetBinContent(25,2.979099);
   hNCpi0inFV_stack_5->SetBinError(1,0.1110342);
   hNCpi0inFV_stack_5->SetBinError(2,0.2568447);
   hNCpi0inFV_stack_5->SetBinError(3,0.5560814);
   hNCpi0inFV_stack_5->SetBinError(4,0.8118813);
   hNCpi0inFV_stack_5->SetBinError(5,0.9516822);
   hNCpi0inFV_stack_5->SetBinError(6,0.9704294);
   hNCpi0inFV_stack_5->SetBinError(7,0.9718388);
   hNCpi0inFV_stack_5->SetBinError(8,0.8449437);
   hNCpi0inFV_stack_5->SetBinError(9,0.7516481);
   hNCpi0inFV_stack_5->SetBinError(10,0.6922157);
   hNCpi0inFV_stack_5->SetBinError(11,0.6359074);
   hNCpi0inFV_stack_5->SetBinError(12,0.5745821);
   hNCpi0inFV_stack_5->SetBinError(13,0.5559352);
   hNCpi0inFV_stack_5->SetBinError(14,0.4685889);
   hNCpi0inFV_stack_5->SetBinError(15,0.4384264);
   hNCpi0inFV_stack_5->SetBinError(16,0.3626985);
   hNCpi0inFV_stack_5->SetBinError(17,0.3368906);
   hNCpi0inFV_stack_5->SetBinError(18,0.3491737);
   hNCpi0inFV_stack_5->SetBinError(19,0.3020159);
   hNCpi0inFV_stack_5->SetBinError(20,0.2870513);
   hNCpi0inFV_stack_5->SetBinError(21,0.2016476);
   hNCpi0inFV_stack_5->SetBinError(22,0.1884745);
   hNCpi0inFV_stack_5->SetBinError(23,0.1798175);
   hNCpi0inFV_stack_5->SetBinError(24,0.1265093);
   hNCpi0inFV_stack_5->SetBinError(25,0.3922141);
   hNCpi0inFV_stack_5->SetEntries(3845);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleOffset(0);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelSize(0.035);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleSize(0.035);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_6->SetBinContent(1,0.07837243);
   hCCpi0inFV_stack_6->SetBinContent(2,0.1876636);
   hCCpi0inFV_stack_6->SetBinContent(3,1.144303);
   hCCpi0inFV_stack_6->SetBinContent(4,2.887216);
   hCCpi0inFV_stack_6->SetBinContent(5,4.409998);
   hCCpi0inFV_stack_6->SetBinContent(6,4.706726);
   hCCpi0inFV_stack_6->SetBinContent(7,4.578404);
   hCCpi0inFV_stack_6->SetBinContent(8,2.918738);
   hCCpi0inFV_stack_6->SetBinContent(9,2.014419);
   hCCpi0inFV_stack_6->SetBinContent(10,2.483927);
   hCCpi0inFV_stack_6->SetBinContent(11,2.058996);
   hCCpi0inFV_stack_6->SetBinContent(12,1.818456);
   hCCpi0inFV_stack_6->SetBinContent(13,1.457674);
   hCCpi0inFV_stack_6->SetBinContent(14,1.280966);
   hCCpi0inFV_stack_6->SetBinContent(15,1.13911);
   hCCpi0inFV_stack_6->SetBinContent(16,0.5247401);
   hCCpi0inFV_stack_6->SetBinContent(17,0.5356956);
   hCCpi0inFV_stack_6->SetBinContent(18,0.4640524);
   hCCpi0inFV_stack_6->SetBinContent(19,0.6723584);
   hCCpi0inFV_stack_6->SetBinContent(20,0.1876636);
   hCCpi0inFV_stack_6->SetBinContent(21,0.149413);
   hCCpi0inFV_stack_6->SetBinContent(22,0.2241195);
   hCCpi0inFV_stack_6->SetBinContent(23,0.26237);
   hCCpi0inFV_stack_6->SetBinContent(24,0.4591944);
   hCCpi0inFV_stack_6->SetBinContent(25,1.096892);
   hCCpi0inFV_stack_6->SetBinError(1,0.07837243);
   hCCpi0inFV_stack_6->SetBinError(2,0.0921412);
   hCCpi0inFV_stack_6->SetBinError(3,0.2517303);
   hCCpi0inFV_stack_6->SetBinError(4,0.3960208);
   hCCpi0inFV_stack_6->SetBinError(5,0.4940019);
   hCCpi0inFV_stack_6->SetBinError(6,0.511175);
   hCCpi0inFV_stack_6->SetBinError(7,0.511219);
   hCCpi0inFV_stack_6->SetBinError(8,0.3952096);
   hCCpi0inFV_stack_6->SetBinError(9,0.3304862);
   hCCpi0inFV_stack_6->SetBinError(10,0.3703684);
   hCCpi0inFV_stack_6->SetBinError(11,0.3295843);
   hCCpi0inFV_stack_6->SetBinError(12,0.3104074);
   hCCpi0inFV_stack_6->SetBinError(13,0.2766036);
   hCCpi0inFV_stack_6->SetBinError(14,0.266848);
   hCCpi0inFV_stack_6->SetBinError(15,0.2627786);
   hCCpi0inFV_stack_6->SetBinError(16,0.1580579);
   hCCpi0inFV_stack_6->SetBinError(17,0.167841);
   hCCpi0inFV_stack_6->SetBinError(18,0.1557465);
   hCCpi0inFV_stack_6->SetBinError(19,0.1897639);
   hCCpi0inFV_stack_6->SetBinError(20,0.0921412);
   hCCpi0inFV_stack_6->SetBinError(21,0.08945557);
   hCCpi0inFV_stack_6->SetBinError(22,0.1095603);
   hCCpi0inFV_stack_6->SetBinError(23,0.1117638);
   hCCpi0inFV_stack_6->SetBinError(24,0.1649097);
   hCCpi0inFV_stack_6->SetBinError(25,0.238047);
   hCCpi0inFV_stack_6->SetEntries(968);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleOffset(0);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelSize(0.035);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleSize(0.035);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_7->SetBinContent(1,0.1749134);
   hNCinFV_stack_7->SetBinContent(2,0.7835208);
   hNCinFV_stack_7->SetBinContent(3,1.02039);
   hNCinFV_stack_7->SetBinContent(4,0.8363162);
   hNCinFV_stack_7->SetBinContent(5,1.107847);
   hNCinFV_stack_7->SetBinContent(6,1.444924);
   hNCinFV_stack_7->SetBinContent(7,1.592542);
   hNCinFV_stack_7->SetBinContent(8,0.945684);
   hNCinFV_stack_7->SetBinContent(9,0.7215645);
   hNCinFV_stack_7->SetBinContent(10,0.1876636);
   hNCinFV_stack_7->SetBinContent(11,0.3607822);
   hNCinFV_stack_7->SetBinContent(12,0.5484458);
   hNCinFV_stack_7->SetBinContent(13,0.3607822);
   hNCinFV_stack_7->SetBinContent(14,0.4591944);
   hNCinFV_stack_7->SetBinContent(15,0.3862826);
   hNCinFV_stack_7->SetBinContent(16,0.3115761);
   hNCinFV_stack_7->SetBinContent(17,0.3097815);
   hNCinFV_stack_7->SetBinContent(18,0.1986191);
   hNCinFV_stack_7->SetBinContent(19,0.1366628);
   hNCinFV_stack_7->SetBinContent(20,0.1239126);
   hNCinFV_stack_7->SetBinContent(21,0.1239126);
   hNCinFV_stack_7->SetBinContent(22,0.0127502);
   hNCinFV_stack_7->SetBinContent(23,0.0127502);
   hNCinFV_stack_7->SetBinContent(24,0.1239126);
   hNCinFV_stack_7->SetBinContent(25,0.2386643);
   hNCinFV_stack_7->SetBinError(1,0.09125478);
   hNCinFV_stack_7->SetBinError(2,0.2086263);
   hNCinFV_stack_7->SetBinError(3,0.2359893);
   hNCinFV_stack_7->SetBinError(4,0.2028533);
   hNCinFV_stack_7->SetBinError(5,0.2446522);
   hNCinFV_stack_7->SetBinError(6,0.2763096);
   hNCinFV_stack_7->SetBinError(7,0.2955927);
   hNCinFV_stack_7->SetBinError(8,0.2273539);
   hNCinFV_stack_7->SetBinError(9,0.1992144);
   hNCinFV_stack_7->SetBinError(10,0.0921412);
   hNCinFV_stack_7->SetBinError(11,0.1408658);
   hNCinFV_stack_7->SetBinError(12,0.1683246);
   hNCinFV_stack_7->SetBinError(13,0.1408658);
   hNCinFV_stack_7->SetBinError(14,0.1649097);
   hNCinFV_stack_7->SetBinError(15,0.1420152);
   hNCinFV_stack_7->SetBinError(16,0.1271502);
   hNCinFV_stack_7->SetBinError(17,0.1385385);
   hNCinFV_stack_7->SetBinError(18,0.1080662);
   hNCinFV_stack_7->SetBinError(19,0.08854226);
   hNCinFV_stack_7->SetBinError(20,0.08761943);
   hNCinFV_stack_7->SetBinError(21,0.08761943);
   hNCinFV_stack_7->SetBinError(22,0.0127502);
   hNCinFV_stack_7->SetBinError(23,0.0127502);
   hNCinFV_stack_7->SetBinError(24,0.08761943);
   hNCinFV_stack_7->SetBinError(25,0.09560477);
   hNCinFV_stack_7->SetEntries(330);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetXaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetYaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetYaxis()->SetTitleOffset(0);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelSize(0.035);
   hNCinFV_stack_7->GetZaxis()->SetTitleSize(0.035);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_8->SetBinContent(1,0.3055184);
   hnumuCCinFV_stack_8->SetBinContent(2,0.4205246);
   hnumuCCinFV_stack_8->SetBinContent(3,1.048494);
   hnumuCCinFV_stack_8->SetBinContent(4,2.117258);
   hnumuCCinFV_stack_8->SetBinContent(5,1.583035);
   hnumuCCinFV_stack_8->SetBinContent(6,2.428038);
   hnumuCCinFV_stack_8->SetBinContent(7,2.143938);
   hnumuCCinFV_stack_8->SetBinContent(8,1.462503);
   hnumuCCinFV_stack_8->SetBinContent(9,2.097051);
   hnumuCCinFV_stack_8->SetBinContent(10,1.241278);
   hnumuCCinFV_stack_8->SetBinContent(11,1.051115);
   hnumuCCinFV_stack_8->SetBinContent(12,0.9426889);
   hnumuCCinFV_stack_8->SetBinContent(13,0.8375194);
   hnumuCCinFV_stack_8->SetBinContent(14,0.4223927);
   hnumuCCinFV_stack_8->SetBinContent(15,0.3590634);
   hnumuCCinFV_stack_8->SetBinContent(16,0.2791875);
   hnumuCCinFV_stack_8->SetBinContent(17,0.2480861);
   hnumuCCinFV_stack_8->SetBinContent(18,0.1563021);
   hnumuCCinFV_stack_8->SetBinContent(19,0.1028556);
   hnumuCCinFV_stack_8->SetBinContent(20,0.03155147);
   hnumuCCinFV_stack_8->SetBinContent(22,0.1494998);
   hnumuCCinFV_stack_8->SetBinContent(23,0.02792177);
   hnumuCCinFV_stack_8->SetBinContent(24,0.0770504);
   hnumuCCinFV_stack_8->SetBinContent(25,0.441994);
   hnumuCCinFV_stack_8->SetBinError(1,0.227373);
   hnumuCCinFV_stack_8->SetBinError(2,0.1491703);
   hnumuCCinFV_stack_8->SetBinError(3,0.2449354);
   hnumuCCinFV_stack_8->SetBinError(4,0.5390129);
   hnumuCCinFV_stack_8->SetBinError(5,0.3875845);
   hnumuCCinFV_stack_8->SetBinError(6,0.3952098);
   hnumuCCinFV_stack_8->SetBinError(7,0.5518617);
   hnumuCCinFV_stack_8->SetBinError(8,0.314497);
   hnumuCCinFV_stack_8->SetBinError(9,0.3962213);
   hnumuCCinFV_stack_8->SetBinError(10,0.2964697);
   hnumuCCinFV_stack_8->SetBinError(11,0.2488486);
   hnumuCCinFV_stack_8->SetBinError(12,0.2540548);
   hnumuCCinFV_stack_8->SetBinError(13,0.2556828);
   hnumuCCinFV_stack_8->SetBinError(14,0.1584165);
   hnumuCCinFV_stack_8->SetBinError(15,0.15086);
   hnumuCCinFV_stack_8->SetBinError(16,0.1195145);
   hnumuCCinFV_stack_8->SetBinError(17,0.1213068);
   hnumuCCinFV_stack_8->SetBinError(18,0.09773702);
   hnumuCCinFV_stack_8->SetBinError(19,0.06632066);
   hnumuCCinFV_stack_8->SetBinError(20,0.02231153);
   hnumuCCinFV_stack_8->SetBinError(22,0.08946798);
   hnumuCCinFV_stack_8->SetBinError(23,0.01981778);
   hnumuCCinFV_stack_8->SetBinError(24,0.06376844);
   hnumuCCinFV_stack_8->SetBinError(25,0.1623376);
   hnumuCCinFV_stack_8->SetEntries(468);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleOffset(0);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelSize(0.035);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleSize(0.035);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_9->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(4,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(5,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(6,0.02550039);
   hnueCCinFV_stack_9->SetBinContent(7,0.04009316);
   hnueCCinFV_stack_9->SetBinContent(8,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(9,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(15,1.378697e-05);
   hnueCCinFV_stack_9->SetBinContent(16,0.07470649);
   hnueCCinFV_stack_9->SetBinContent(17,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(18,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(25,0.3772162);
   hnueCCinFV_stack_9->SetBinError(2,0.06195629);
   hnueCCinFV_stack_9->SetBinError(4,0.06195629);
   hnueCCinFV_stack_9->SetBinError(5,0.0127502);
   hnueCCinFV_stack_9->SetBinError(6,0.0180315);
   hnueCCinFV_stack_9->SetBinError(7,0.02319664);
   hnueCCinFV_stack_9->SetBinError(8,0.0127502);
   hnueCCinFV_stack_9->SetBinError(9,0.06195629);
   hnueCCinFV_stack_9->SetBinError(15,1.378697e-05);
   hnueCCinFV_stack_9->SetBinError(16,0.06325464);
   hnueCCinFV_stack_9->SetBinError(17,0.0127502);
   hnueCCinFV_stack_9->SetBinError(18,0.06195629);
   hnueCCinFV_stack_9->SetBinError(25,0.1417995);
   hnueCCinFV_stack_9->SetEntries(25);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleOffset(0);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelSize(0.035);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleSize(0.035);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);
   hmcerror__2->SetBinContent(1,1.044763);
   hmcerror__2->SetBinContent(2,3.636584);
   hmcerror__2->SetBinContent(3,11.59959);
   hmcerror__2->SetBinContent(4,19.88664);
   hmcerror__2->SetBinContent(5,27.291);
   hmcerror__2->SetBinContent(6,30.50415);
   hmcerror__2->SetBinContent(7,28.9745);
   hmcerror__2->SetBinContent(8,20.86139);
   hmcerror__2->SetBinContent(9,16.97864);
   hmcerror__2->SetBinContent(10,14.62477);
   hmcerror__2->SetBinContent(11,11.80698);
   hmcerror__2->SetBinContent(12,10.28653);
   hmcerror__2->SetBinContent(13,8.957605);
   hmcerror__2->SetBinContent(14,6.817931);
   hmcerror__2->SetBinContent(15,5.755497);
   hmcerror__2->SetBinContent(16,3.965736);
   hmcerror__2->SetBinContent(17,3.536916);
   hmcerror__2->SetBinContent(18,3.118055);
   hmcerror__2->SetBinContent(19,2.641082);
   hmcerror__2->SetBinContent(20,1.858688);
   hmcerror__2->SetBinContent(21,1.295941);
   hmcerror__2->SetBinContent(22,1.020477);
   hmcerror__2->SetBinContent(23,0.9384642);
   hmcerror__2->SetBinContent(24,1.082896);
   hmcerror__2->SetBinContent(25,5.328308);
   hmcerror__2->SetBinError(1,1.051706);
   hmcerror__2->SetBinError(2,1.901039);
   hmcerror__2->SetBinError(3,4.346963);
   hmcerror__2->SetBinError(4,5.371951);
   hmcerror__2->SetBinError(5,7.310435);
   hmcerror__2->SetBinError(6,8.054245);
   hmcerror__2->SetBinError(7,8.751494);
   hmcerror__2->SetBinError(8,8.478194);
   hmcerror__2->SetBinError(9,5.435136);
   hmcerror__2->SetBinError(10,5.462878);
   hmcerror__2->SetBinError(11,4.079271);
   hmcerror__2->SetBinError(12,4.735833);
   hmcerror__2->SetBinError(13,3.482108);
   hmcerror__2->SetBinError(14,2.889023);
   hmcerror__2->SetBinError(15,2.478992);
   hmcerror__2->SetBinError(16,2.192494);
   hmcerror__2->SetBinError(17,2.089294);
   hmcerror__2->SetBinError(18,2.48858);
   hmcerror__2->SetBinError(19,1.935905);
   hmcerror__2->SetBinError(20,1.179352);
   hmcerror__2->SetBinError(21,0.8027216);
   hmcerror__2->SetBinError(22,1.33308);
   hmcerror__2->SetBinError(23,0.8995908);
   hmcerror__2->SetBinError(24,1.565189);
   hmcerror__2->SetBinError(25,2.079372);
   hmcerror__2->SetEntries(240.4242);

   ci = TColor::GetColor("#666666");
   hmcerror__2->SetFillColor(ci);
   hmcerror__2->SetFillStyle(3002);
   hmcerror__2->SetLineColor(12);
   hmcerror__2->SetLineWidth(0);
   hmcerror__2->SetMarkerColor(0);
   hmcerror__2->SetMarkerSize(0);
   hmcerror__2->GetXaxis()->SetLabelFont(42);
   hmcerror__2->GetXaxis()->SetLabelSize(0.035);
   hmcerror__2->GetXaxis()->SetTitleSize(0.035);
   hmcerror__2->GetXaxis()->SetTitleFont(42);
   hmcerror__2->GetYaxis()->SetLabelFont(42);
   hmcerror__2->GetYaxis()->SetLabelSize(0.035);
   hmcerror__2->GetYaxis()->SetTitleSize(0.035);
   hmcerror__2->GetYaxis()->SetTitleOffset(0);
   hmcerror__2->GetYaxis()->SetTitleFont(42);
   hmcerror__2->GetZaxis()->SetLabelFont(42);
   hmcerror__2->GetZaxis()->SetLabelSize(0.035);
   hmcerror__2->GetZaxis()->SetTitleSize(0.035);
   hmcerror__2->GetZaxis()->SetTitleFont(42);
   hmcerror__2->Draw("same E2");
   
   Double_t _fx3001[24] = {
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
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3001[24] = {
   1,
   0,
   11,
   13,
   16,
   24,
   10,
   17,
   13,
   15,
   9,
   7,
   1,
   1,
   4,
   4,
   0,
   3,
   2,
   0,
   1,
   0,
   0,
   1};
   Double_t _felx3001[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3001[24] = {
   1,
   0,
   3.4975,
   3.77763,
   4.1628,
   5.0476,
   3.34883,
   4.2835,
   3.77763,
   4.0385,
   3.19354,
   2.85954,
   1,
   1,
   2.29683,
   2.29683,
   0,
   2.143368,
   2,
   0,
   1,
   0,
   0,
   1};
   Double_t _fehx3001[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3001[24] = {
   1.35971,
   1.1478,
   3.27,
   3.5552,
   3.9454,
   4.837,
   3.1179,
   4.0673,
   3.5552,
   3.8197,
   2.9582,
   2.61053,
   1.35971,
   1.35971,
   1.98186,
   1.98186,
   1.1478,
   1.72422,
   1.51917,
   1.1478,
   1.35971,
   1.1478,
   1.1478,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,660);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(31.7207);
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
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.64#pm0.05(data err)#pm0.15(pred err)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","Data POT: 5.327e+19","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.46/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 153.0","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hmcerror","Pred. uncertainty","lf");

   ci = TColor::GetColor("#666666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3002);
   entry->SetLineColor(12);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 4.1","F");

   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hext_stack_2","EXT, 12.5","F");

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.2","F");

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("houtFV_stack_4","out FV, 8.8","F");

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  143.0","F");

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(38);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 36.6","F");

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(30);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 12.3","F");

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff9933");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 19.5","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 0.4","F");

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[24] = {
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
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3002[24] = {
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
   Double_t _felx3002[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3002[24] = {
   1.006646,
   0.5227541,
   0.3747513,
   0.2701286,
   0.2678698,
   0.2640377,
   0.3020412,
   0.4064059,
   0.3201161,
   0.3735361,
   0.3454967,
   0.4603916,
   0.388732,
   0.423739,
   0.4307173,
   0.5528594,
   0.5907108,
   0.7981194,
   0.7329969,
   0.6345078,
   0.6194123,
   1.30633,
   0.9585777,
   1.445373};
   Double_t _fehx3002[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3002[24] = {
   1.006646,
   0.5227541,
   0.3747513,
   0.2701286,
   0.2678698,
   0.2640377,
   0.3020412,
   0.4064059,
   0.3201161,
   0.3735361,
   0.3454967,
   0.4603916,
   0.388732,
   0.423739,
   0.4307173,
   0.5528594,
   0.5907108,
   0.7981194,
   0.7329969,
   0.6345078,
   0.6194123,
   1.30633,
   0.9585777,
   1.445373};
   grae = new TGraphAsymmErrors(24,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,660);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Reconstructed E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.95);
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
   
   Double_t _fx3003[24] = {
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
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3003[24] = {
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
   Double_t _felx3003[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3003[24] = {
   0.4239869,
   0.2399804,
   0.2013389,
   0.2107569,
   0.2255318,
   0.2141659,
   0.2283903,
   0.2383311,
   0.2650031,
   0.2481706,
   0.252843,
   0.2297362,
   0.2398747,
   0.2489501,
   0.2593596,
   0.2406305,
   0.3161003,
   0.3049402,
   0.3501024,
   0.3160646,
   0.3485797,
   0.3578089,
   0.4156322,
   0.4124099};
   Double_t _fehx3003[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3003[24] = {
   0.4239869,
   0.2399804,
   0.2013389,
   0.2107569,
   0.2255318,
   0.2141659,
   0.2283903,
   0.2383311,
   0.2650031,
   0.2481706,
   0.252843,
   0.2297362,
   0.2398747,
   0.2489501,
   0.2593596,
   0.2406305,
   0.3161003,
   0.3049402,
   0.3501024,
   0.3160646,
   0.3485797,
   0.3578089,
   0.4156322,
   0.4124099};
   grae = new TGraphAsymmErrors(24,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,660);
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
   
   Double_t _fx3004[24] = {
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
   387.5,
   412.5,
   437.5,
   462.5,
   487.5,
   512.5,
   537.5,
   562.5,
   587.5};
   Double_t _fy3004[24] = {
   0.9571549,
   0,
   0.948309,
   0.6537052,
   0.5862739,
   0.7867782,
   0.345131,
   0.8149024,
   0.765668,
   1.025657,
   0.7622612,
   0.6805016,
   0.111637,
   0.1466721,
   0.6949878,
   1.00864,
   0,
   0.9621382,
   0.7572655,
   0,
   0.7716403,
   0,
   0,
   0.9234497};
   Double_t _felx3004[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fely3004[24] = {
   0.9571549,
   0,
   0.3015192,
   0.1899582,
   0.1525338,
   0.1654726,
   0.1155785,
   0.2053314,
   0.2224931,
   0.2761412,
   0.2704791,
   0.2779888,
   0.111637,
   0.1466721,
   0.3990672,
   0.5791687,
   0,
   0.6874054,
   0.7572655,
   0,
   0.7716403,
   0,
   0,
   0.9234497};
   Double_t _fehx3004[24] = {
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
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5,
   12.5};
   Double_t _fehy3004[24] = {
   1.301453,
   0.3156259,
   0.2819064,
   0.1787733,
   0.1445678,
   0.1585686,
   0.1076084,
   0.1949678,
   0.2093925,
   0.2611802,
   0.2505468,
   0.2537814,
   0.1517939,
   0.1994315,
   0.3443421,
   0.4997459,
   0.32452,
   0.5529793,
   0.5752075,
   0.6175324,
   1.049207,
   1.124768,
   1.223062,
   1.255624};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,660);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2.484469);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_FC_Np_bnb_10_kine_pio_energy_high_all",24,0,600);

   ci = TColor::GetColor("#000099");
   hist__3->SetLineColor(ci);
   hist__3->GetXaxis()->SetLabelFont(42);
   hist__3->GetXaxis()->SetLabelSize(0.035);
   hist__3->GetXaxis()->SetTitleSize(0.035);
   hist__3->GetXaxis()->SetTitleFont(42);
   hist__3->GetYaxis()->SetNdivisions(405);
   hist__3->GetYaxis()->SetLabelFont(42);
   hist__3->GetYaxis()->SetLabelSize(0.035);
   hist__3->GetYaxis()->SetTitleSize(0.035);
   hist__3->GetYaxis()->SetTitleOffset(0);
   hist__3->GetYaxis()->SetTitleFont(42);
   hist__3->GetZaxis()->SetLabelFont(42);
   hist__3->GetZaxis()->SetLabelSize(0.035);
   hist__3->GetZaxis()->SetTitleSize(0.035);
   hist__3->GetZaxis()->SetTitleFont(42);
   hist__3->Draw("axis same");
   TLine *line = new TLine(0,1,600,1);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   
   leg = new TLegend(0.2,0.7,0.8,0.95,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.08);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","Pred total uncertainty","F");

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
   entry=leg->AddEntry("","Pred stat+xsec+flux uncertainty","F");

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
