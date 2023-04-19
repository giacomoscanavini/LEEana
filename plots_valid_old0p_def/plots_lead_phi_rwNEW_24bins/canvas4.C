#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Sat Feb 18 12:26:06 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",86,109,1200,900);
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
   pad1->Range(-4.119231,-3.84,3.957692,424.6232);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmc__10->SetBinContent(1,172.6967);
   hmc__10->SetBinContent(2,171.7468);
   hmc__10->SetBinContent(3,173.5236);
   hmc__10->SetBinContent(4,185.5547);
   hmc__10->SetBinContent(5,143.5267);
   hmc__10->SetBinContent(6,158.0282);
   hmc__10->SetBinContent(7,160.0141);
   hmc__10->SetBinContent(8,142.2748);
   hmc__10->SetBinContent(9,165.2035);
   hmc__10->SetBinContent(10,153.5658);
   hmc__10->SetBinContent(11,162.0107);
   hmc__10->SetBinContent(12,152.0066);
   hmc__10->SetBinContent(13,147.9359);
   hmc__10->SetBinContent(14,160.4286);
   hmc__10->SetBinContent(15,175.7744);
   hmc__10->SetBinContent(16,166.0697);
   hmc__10->SetBinContent(17,162.8954);
   hmc__10->SetBinContent(18,154.8938);
   hmc__10->SetBinContent(19,168.1031);
   hmc__10->SetBinContent(20,155.201);
   hmc__10->SetBinContent(21,178.0577);
   hmc__10->SetBinContent(22,174.6783);
   hmc__10->SetBinContent(23,173.7899);
   hmc__10->SetBinContent(24,152.1251);
   hmc__10->SetBinError(1,49.86678);
   hmc__10->SetBinError(2,49.80801);
   hmc__10->SetBinError(3,46.30144);
   hmc__10->SetBinError(4,44.10116);
   hmc__10->SetBinError(5,33.91485);
   hmc__10->SetBinError(6,35.99588);
   hmc__10->SetBinError(7,41.03825);
   hmc__10->SetBinError(8,35.4179);
   hmc__10->SetBinError(9,46.42048);
   hmc__10->SetBinError(10,44.62458);
   hmc__10->SetBinError(11,50.53774);
   hmc__10->SetBinError(12,41.56802);
   hmc__10->SetBinError(13,44.03031);
   hmc__10->SetBinError(14,43.03612);
   hmc__10->SetBinError(15,45.60744);
   hmc__10->SetBinError(16,40.04445);
   hmc__10->SetBinError(17,37.45686);
   hmc__10->SetBinError(18,34.3682);
   hmc__10->SetBinError(19,40.95065);
   hmc__10->SetBinError(20,43.94533);
   hmc__10->SetBinError(21,44.8603);
   hmc__10->SetBinError(22,44.32397);
   hmc__10->SetBinError(23,49.23346);
   hmc__10->SetBinError(24,41.52737);
   hmc__10->SetBinError(25,0.3895343);
   hmc__10->SetMinimum(-3.84);
   hmc__10->SetMaximum(403.2);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",24,-3.15,3.15);
   hs4_stack_4->SetMinimum(-3.646956e-09);
   hs4_stack_4->SetMaximum(194.8324);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,3.377892);
   hbadmatch_stack_1->SetBinContent(2,4.188594);
   hbadmatch_stack_1->SetBinContent(3,5.440209);
   hbadmatch_stack_1->SetBinContent(4,4.971837);
   hbadmatch_stack_1->SetBinContent(5,5.508819);
   hbadmatch_stack_1->SetBinContent(6,5.23126);
   hbadmatch_stack_1->SetBinContent(7,5.229636);
   hbadmatch_stack_1->SetBinContent(8,2.756051);
   hbadmatch_stack_1->SetBinContent(9,3.71161);
   hbadmatch_stack_1->SetBinContent(10,2.264107);
   hbadmatch_stack_1->SetBinContent(11,4.700867);
   hbadmatch_stack_1->SetBinContent(12,3.353352);
   hbadmatch_stack_1->SetBinContent(13,2.345332);
   hbadmatch_stack_1->SetBinContent(14,3.556615);
   hbadmatch_stack_1->SetBinContent(15,8.75159);
   hbadmatch_stack_1->SetBinContent(16,5.008301);
   hbadmatch_stack_1->SetBinContent(17,5.564359);
   hbadmatch_stack_1->SetBinContent(18,3.467984);
   hbadmatch_stack_1->SetBinContent(19,2.642441);
   hbadmatch_stack_1->SetBinContent(20,4.194004);
   hbadmatch_stack_1->SetBinContent(21,4.346528);
   hbadmatch_stack_1->SetBinContent(22,3.664603);
   hbadmatch_stack_1->SetBinContent(23,3.748739);
   hbadmatch_stack_1->SetBinContent(24,0.9286332);
   hbadmatch_stack_1->SetBinError(1,0.9439978);
   hbadmatch_stack_1->SetBinError(2,0.9876169);
   hbadmatch_stack_1->SetBinError(3,1.276932);
   hbadmatch_stack_1->SetBinError(4,1.152311);
   hbadmatch_stack_1->SetBinError(5,1.302603);
   hbadmatch_stack_1->SetBinError(6,1.25435);
   hbadmatch_stack_1->SetBinError(7,1.464074);
   hbadmatch_stack_1->SetBinError(8,0.8736065);
   hbadmatch_stack_1->SetBinError(9,1.074366);
   hbadmatch_stack_1->SetBinError(10,0.6869819);
   hbadmatch_stack_1->SetBinError(11,1.118617);
   hbadmatch_stack_1->SetBinError(12,0.8858835);
   hbadmatch_stack_1->SetBinError(13,0.7592417);
   hbadmatch_stack_1->SetBinError(14,1.738856);
   hbadmatch_stack_1->SetBinError(15,2.351551);
   hbadmatch_stack_1->SetBinError(16,1.227137);
   hbadmatch_stack_1->SetBinError(17,1.353789);
   hbadmatch_stack_1->SetBinError(18,0.9314823);
   hbadmatch_stack_1->SetBinError(19,0.7851269);
   hbadmatch_stack_1->SetBinError(20,1.05118);
   hbadmatch_stack_1->SetBinError(21,1.158404);
   hbadmatch_stack_1->SetBinError(22,0.9845398);
   hbadmatch_stack_1->SetBinError(23,1.050437);
   hbadmatch_stack_1->SetBinError(24,0.48078);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,14.01302);
   hext_stack_2->SetBinContent(2,10.45019);
   hext_stack_2->SetBinContent(3,13.29638);
   hext_stack_2->SetBinContent(4,25.50859);
   hext_stack_2->SetBinContent(5,18.86903);
   hext_stack_2->SetBinContent(6,31.10719);
   hext_stack_2->SetBinContent(7,26.40683);
   hext_stack_2->SetBinContent(8,16.30975);
   hext_stack_2->SetBinContent(9,20.10036);
   hext_stack_2->SetBinContent(10,14.00861);
   hext_stack_2->SetBinContent(11,13.93523);
   hext_stack_2->SetBinContent(12,9.070402);
   hext_stack_2->SetBinContent(13,9.86483);
   hext_stack_2->SetBinContent(14,10.21518);
   hext_stack_2->SetBinContent(15,20.29071);
   hext_stack_2->SetBinContent(16,25.73926);
   hext_stack_2->SetBinContent(17,29.01353);
   hext_stack_2->SetBinContent(18,35.41814);
   hext_stack_2->SetBinContent(19,35.76131);
   hext_stack_2->SetBinContent(20,26.61866);
   hext_stack_2->SetBinContent(21,21.84045);
   hext_stack_2->SetBinContent(22,21.83767);
   hext_stack_2->SetBinContent(23,18.61682);
   hext_stack_2->SetBinContent(24,9.152603);
   hext_stack_2->SetBinError(1,2.476213);
   hext_stack_2->SetBinError(2,2.073985);
   hext_stack_2->SetBinError(3,2.33638);
   hext_stack_2->SetBinError(4,3.560446);
   hext_stack_2->SetBinError(5,2.871874);
   hext_stack_2->SetBinError(6,3.872632);
   hext_stack_2->SetBinError(7,3.376503);
   hext_stack_2->SetBinError(8,2.52978);
   hext_stack_2->SetBinError(9,3.163537);
   hext_stack_2->SetBinError(10,2.448777);
   hext_stack_2->SetBinError(11,2.491318);
   hext_stack_2->SetBinError(12,1.954582);
   hext_stack_2->SetBinError(13,2.101979);
   hext_stack_2->SetBinError(14,2.01372);
   hext_stack_2->SetBinError(15,3.107999);
   hext_stack_2->SetBinError(16,3.384906);
   hext_stack_2->SetBinError(17,3.675184);
   hext_stack_2->SetBinError(18,4.044667);
   hext_stack_2->SetBinError(19,4.024585);
   hext_stack_2->SetBinError(20,3.432095);
   hext_stack_2->SetBinError(21,3.096484);
   hext_stack_2->SetBinError(22,3.150323);
   hext_stack_2->SetBinError(23,3.173398);
   hext_stack_2->SetBinError(24,1.969893);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.9141704);
   hdirt_stack_3->SetBinContent(2,2.344186);
   hdirt_stack_3->SetBinContent(3,2.356284);
   hdirt_stack_3->SetBinContent(4,3.010103);
   hdirt_stack_3->SetBinContent(5,2.499677);
   hdirt_stack_3->SetBinContent(6,1.664848);
   hdirt_stack_3->SetBinContent(7,2.506887);
   hdirt_stack_3->SetBinContent(8,1.295352);
   hdirt_stack_3->SetBinContent(9,1.859977);
   hdirt_stack_3->SetBinContent(10,0.6951543);
   hdirt_stack_3->SetBinContent(11,3.487901);
   hdirt_stack_3->SetBinContent(12,1.437021);
   hdirt_stack_3->SetBinContent(13,1.888547);
   hdirt_stack_3->SetBinContent(14,1.879468);
   hdirt_stack_3->SetBinContent(15,3.033484);
   hdirt_stack_3->SetBinContent(16,4.133663);
   hdirt_stack_3->SetBinContent(17,3.809793);
   hdirt_stack_3->SetBinContent(18,2.260689);
   hdirt_stack_3->SetBinContent(19,3.807616);
   hdirt_stack_3->SetBinContent(20,1.855902);
   hdirt_stack_3->SetBinContent(21,2.203847);
   hdirt_stack_3->SetBinContent(22,3.444004);
   hdirt_stack_3->SetBinContent(23,2.716254);
   hdirt_stack_3->SetBinContent(24,1.948237);
   hdirt_stack_3->SetBinError(1,0.4788161);
   hdirt_stack_3->SetBinError(2,0.7521541);
   hdirt_stack_3->SetBinError(3,0.77892);
   hdirt_stack_3->SetBinError(4,0.9856001);
   hdirt_stack_3->SetBinError(5,0.7753967);
   hdirt_stack_3->SetBinError(6,0.7140685);
   hdirt_stack_3->SetBinError(7,0.7538446);
   hdirt_stack_3->SetBinError(8,0.7666476);
   hdirt_stack_3->SetBinError(9,0.6605131);
   hdirt_stack_3->SetBinError(10,0.4258516);
   hdirt_stack_3->SetBinError(11,1.338764);
   hdirt_stack_3->SetBinError(12,0.5690354);
   hdirt_stack_3->SetBinError(13,0.6565942);
   hdirt_stack_3->SetBinError(14,0.794827);
   hdirt_stack_3->SetBinError(15,0.8952231);
   hdirt_stack_3->SetBinError(16,1.099735);
   hdirt_stack_3->SetBinError(17,1.057622);
   hdirt_stack_3->SetBinError(18,0.8386878);
   hdirt_stack_3->SetBinError(19,1.284122);
   hdirt_stack_3->SetBinError(20,0.676226);
   hdirt_stack_3->SetBinError(21,0.6914602);
   hdirt_stack_3->SetBinError(22,0.9751852);
   hdirt_stack_3->SetBinError(23,0.8787402);
   hdirt_stack_3->SetBinError(24,0.7404734);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,22.15539);
   houtFV_stack_4->SetBinContent(2,22.68684);
   houtFV_stack_4->SetBinContent(3,25.20594);
   houtFV_stack_4->SetBinContent(4,25.58763);
   houtFV_stack_4->SetBinContent(5,18.48898);
   houtFV_stack_4->SetBinContent(6,17.95591);
   houtFV_stack_4->SetBinContent(7,20.30283);
   houtFV_stack_4->SetBinContent(8,22.57113);
   houtFV_stack_4->SetBinContent(9,22.29665);
   houtFV_stack_4->SetBinContent(10,21.53423);
   houtFV_stack_4->SetBinContent(11,22.2446);
   houtFV_stack_4->SetBinContent(12,21.99828);
   houtFV_stack_4->SetBinContent(13,22.99601);
   houtFV_stack_4->SetBinContent(14,20.21815);
   houtFV_stack_4->SetBinContent(15,21.22752);
   houtFV_stack_4->SetBinContent(16,18.81373);
   houtFV_stack_4->SetBinContent(17,19.41251);
   houtFV_stack_4->SetBinContent(18,19.89399);
   houtFV_stack_4->SetBinContent(19,15.86922);
   houtFV_stack_4->SetBinContent(20,16.86934);
   houtFV_stack_4->SetBinContent(21,22.29372);
   houtFV_stack_4->SetBinContent(22,20.06867);
   houtFV_stack_4->SetBinContent(23,24.01514);
   houtFV_stack_4->SetBinContent(24,21.15749);
   houtFV_stack_4->SetBinError(1,2.368143);
   houtFV_stack_4->SetBinError(2,2.361301);
   houtFV_stack_4->SetBinError(3,2.457308);
   houtFV_stack_4->SetBinError(4,2.61397);
   houtFV_stack_4->SetBinError(5,2.170165);
   houtFV_stack_4->SetBinError(6,2.137055);
   houtFV_stack_4->SetBinError(7,2.208587);
   houtFV_stack_4->SetBinError(8,2.533695);
   houtFV_stack_4->SetBinError(9,2.362362);
   houtFV_stack_4->SetBinError(10,2.368);
   houtFV_stack_4->SetBinError(11,2.348301);
   houtFV_stack_4->SetBinError(12,2.369375);
   houtFV_stack_4->SetBinError(13,2.393201);
   houtFV_stack_4->SetBinError(14,2.258628);
   houtFV_stack_4->SetBinError(15,2.298896);
   houtFV_stack_4->SetBinError(16,2.200841);
   houtFV_stack_4->SetBinError(17,2.471764);
   houtFV_stack_4->SetBinError(18,2.24811);
   houtFV_stack_4->SetBinError(19,1.975888);
   houtFV_stack_4->SetBinError(20,2.026067);
   houtFV_stack_4->SetBinError(21,2.425395);
   houtFV_stack_4->SetBinError(22,2.256911);
   houtFV_stack_4->SetBinError(23,2.447542);
   houtFV_stack_4->SetBinError(24,2.344548);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.43346);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,4.114438);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.505206);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.058638);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.303833);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,3.721838);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.811946);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.733712);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.292632);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,4.839015);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.55951);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.05847);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.237823);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,3.946206);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.839342);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.546892);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.846391);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,3.999678);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,6.192009);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,3.249034);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,3.233415);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.976682);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,4.198306);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,4.114606);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6832238);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6759217);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7074792);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6747691);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5329112);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5847411);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.7879459);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5167825);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.6999201);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7761256);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7044928);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6500418);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.6291486);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6579768);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7234365);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.7356627);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.6047016);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.6398833);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.9078312);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.5783275);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4725218);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7314176);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7014016);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.699735);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2231999);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.4457358);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5304361);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3341359);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.6556541);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2926179);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.404386);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.8511223);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2789998);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.529604);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.488086);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.07891307);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1610816);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.283386);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.151108);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3009266);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.122146);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.2253713);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.3588378);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.0882275);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2470656);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.2304939);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,57.61107);
   hNCpi0inFVres_stack_7->SetBinContent(2,60.58242);
   hNCpi0inFVres_stack_7->SetBinContent(3,57.53185);
   hNCpi0inFVres_stack_7->SetBinContent(4,59.30784);
   hNCpi0inFVres_stack_7->SetBinContent(5,49.96028);
   hNCpi0inFVres_stack_7->SetBinContent(6,48.29823);
   hNCpi0inFVres_stack_7->SetBinContent(7,47.22741);
   hNCpi0inFVres_stack_7->SetBinContent(8,49.83355);
   hNCpi0inFVres_stack_7->SetBinContent(9,54.57516);
   hNCpi0inFVres_stack_7->SetBinContent(10,54.14499);
   hNCpi0inFVres_stack_7->SetBinContent(11,52.89794);
   hNCpi0inFVres_stack_7->SetBinContent(12,49.7268);
   hNCpi0inFVres_stack_7->SetBinContent(13,51.46456);
   hNCpi0inFVres_stack_7->SetBinContent(14,55.46918);
   hNCpi0inFVres_stack_7->SetBinContent(15,56.68289);
   hNCpi0inFVres_stack_7->SetBinContent(16,54.11176);
   hNCpi0inFVres_stack_7->SetBinContent(17,50.20311);
   hNCpi0inFVres_stack_7->SetBinContent(18,48.98729);
   hNCpi0inFVres_stack_7->SetBinContent(19,53.11602);
   hNCpi0inFVres_stack_7->SetBinContent(20,49.89039);
   hNCpi0inFVres_stack_7->SetBinContent(21,63.22667);
   hNCpi0inFVres_stack_7->SetBinContent(22,58.45705);
   hNCpi0inFVres_stack_7->SetBinContent(23,56.23383);
   hNCpi0inFVres_stack_7->SetBinContent(24,52.20342);
   hNCpi0inFVres_stack_7->SetBinError(1,2.476111);
   hNCpi0inFVres_stack_7->SetBinError(2,2.507247);
   hNCpi0inFVres_stack_7->SetBinError(3,2.449813);
   hNCpi0inFVres_stack_7->SetBinError(4,2.529208);
   hNCpi0inFVres_stack_7->SetBinError(5,2.252199);
   hNCpi0inFVres_stack_7->SetBinError(6,2.234793);
   hNCpi0inFVres_stack_7->SetBinError(7,2.229155);
   hNCpi0inFVres_stack_7->SetBinError(8,2.322211);
   hNCpi0inFVres_stack_7->SetBinError(9,2.408037);
   hNCpi0inFVres_stack_7->SetBinError(10,2.41791);
   hNCpi0inFVres_stack_7->SetBinError(11,2.35064);
   hNCpi0inFVres_stack_7->SetBinError(12,2.297963);
   hNCpi0inFVres_stack_7->SetBinError(13,2.287777);
   hNCpi0inFVres_stack_7->SetBinError(14,2.411098);
   hNCpi0inFVres_stack_7->SetBinError(15,2.421796);
   hNCpi0inFVres_stack_7->SetBinError(16,2.379999);
   hNCpi0inFVres_stack_7->SetBinError(17,2.35424);
   hNCpi0inFVres_stack_7->SetBinError(18,2.302066);
   hNCpi0inFVres_stack_7->SetBinError(19,2.42787);
   hNCpi0inFVres_stack_7->SetBinError(20,2.323579);
   hNCpi0inFVres_stack_7->SetBinError(21,2.686332);
   hNCpi0inFVres_stack_7->SetBinError(22,2.487794);
   hNCpi0inFVres_stack_7->SetBinError(23,2.400434);
   hNCpi0inFVres_stack_7->SetBinError(24,2.317988);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,11.50199);
   hNCpi0inFVdis_stack_8->SetBinContent(2,10.56982);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.47525);
   hNCpi0inFVdis_stack_8->SetBinContent(4,11.81071);
   hNCpi0inFVdis_stack_8->SetBinContent(5,8.870744);
   hNCpi0inFVdis_stack_8->SetBinContent(6,8.435961);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.16544);
   hNCpi0inFVdis_stack_8->SetBinContent(8,8.547393);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.02852);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.50506);
   hNCpi0inFVdis_stack_8->SetBinContent(11,11.75525);
   hNCpi0inFVdis_stack_8->SetBinContent(12,11.96284);
   hNCpi0inFVdis_stack_8->SetBinContent(13,10.48562);
   hNCpi0inFVdis_stack_8->SetBinContent(14,11.90887);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.356334);
   hNCpi0inFVdis_stack_8->SetBinContent(16,10.1945);
   hNCpi0inFVdis_stack_8->SetBinContent(17,10.51386);
   hNCpi0inFVdis_stack_8->SetBinContent(18,8.167587);
   hNCpi0inFVdis_stack_8->SetBinContent(19,11.28228);
   hNCpi0inFVdis_stack_8->SetBinContent(20,9.260184);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.41961);
   hNCpi0inFVdis_stack_8->SetBinContent(22,10.68059);
   hNCpi0inFVdis_stack_8->SetBinContent(23,13.11404);
   hNCpi0inFVdis_stack_8->SetBinContent(24,10.63957);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.103707);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.016414);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.075939);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.074008);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.98204);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.9246801);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.061524);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9085087);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.106436);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.128351);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.16704);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.121171);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.037793);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.15185);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.9796588);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.033377);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.069257);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.918062);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.14968);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.017371);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.090343);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.008437);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.162752);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.052287);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.09731799);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.097318);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,31.05009);
   hCCpi0inFV_stack_10->SetBinContent(2,28.42369);
   hCCpi0inFV_stack_10->SetBinContent(3,28.48045);
   hCCpi0inFV_stack_10->SetBinContent(4,29.79617);
   hCCpi0inFV_stack_10->SetBinContent(5,18.13214);
   hCCpi0inFV_stack_10->SetBinContent(6,22.21872);
   hCCpi0inFV_stack_10->SetBinContent(7,22.15292);
   hCCpi0inFV_stack_10->SetBinContent(8,20.13625);
   hCCpi0inFV_stack_10->SetBinContent(9,26.01849);
   hCCpi0inFV_stack_10->SetBinContent(10,19.49045);
   hCCpi0inFV_stack_10->SetBinContent(11,24.06817);
   hCCpi0inFV_stack_10->SetBinContent(12,25.32999);
   hCCpi0inFV_stack_10->SetBinContent(13,20.94971);
   hCCpi0inFV_stack_10->SetBinContent(14,25.04061);
   hCCpi0inFV_stack_10->SetBinContent(15,25.34019);
   hCCpi0inFV_stack_10->SetBinContent(16,24.30022);
   hCCpi0inFV_stack_10->SetBinContent(17,23.64563);
   hCCpi0inFV_stack_10->SetBinContent(18,14.86151);
   hCCpi0inFV_stack_10->SetBinContent(19,22.14984);
   hCCpi0inFV_stack_10->SetBinContent(20,25.97649);
   hCCpi0inFV_stack_10->SetBinContent(21,27.03195);
   hCCpi0inFV_stack_10->SetBinContent(22,25.45131);
   hCCpi0inFV_stack_10->SetBinContent(23,25.73032);
   hCCpi0inFV_stack_10->SetBinContent(24,23.34954);
   hCCpi0inFV_stack_10->SetBinError(1,2.787856);
   hCCpi0inFV_stack_10->SetBinError(2,2.699274);
   hCCpi0inFV_stack_10->SetBinError(3,2.663029);
   hCCpi0inFV_stack_10->SetBinError(4,2.714787);
   hCCpi0inFV_stack_10->SetBinError(5,2.094742);
   hCCpi0inFV_stack_10->SetBinError(6,2.374861);
   hCCpi0inFV_stack_10->SetBinError(7,2.381838);
   hCCpi0inFV_stack_10->SetBinError(8,2.265933);
   hCCpi0inFV_stack_10->SetBinError(9,2.55757);
   hCCpi0inFV_stack_10->SetBinError(10,2.218159);
   hCCpi0inFV_stack_10->SetBinError(11,2.469728);
   hCCpi0inFV_stack_10->SetBinError(12,2.471159);
   hCCpi0inFV_stack_10->SetBinError(13,2.271518);
   hCCpi0inFV_stack_10->SetBinError(14,2.42708);
   hCCpi0inFV_stack_10->SetBinError(15,2.539327);
   hCCpi0inFV_stack_10->SetBinError(16,2.498053);
   hCCpi0inFV_stack_10->SetBinError(17,2.423099);
   hCCpi0inFV_stack_10->SetBinError(18,1.923464);
   hCCpi0inFV_stack_10->SetBinError(19,2.394526);
   hCCpi0inFV_stack_10->SetBinError(20,2.671752);
   hCCpi0inFV_stack_10->SetBinError(21,2.567941);
   hCCpi0inFV_stack_10->SetBinError(22,2.512462);
   hCCpi0inFV_stack_10->SetBinError(23,2.608856);
   hCCpi0inFV_stack_10->SetBinError(24,2.379383);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,9.131037);
   hNCinFV_stack_11->SetBinContent(2,12.36423);
   hNCinFV_stack_11->SetBinContent(3,13.04905);
   hNCinFV_stack_11->SetBinContent(4,10.88579);
   hNCinFV_stack_11->SetBinContent(5,9.972841);
   hNCinFV_stack_11->SetBinContent(6,8.997718);
   hNCinFV_stack_11->SetBinContent(7,7.493545);
   hNCinFV_stack_11->SetBinContent(8,9.139489);
   hNCinFV_stack_11->SetBinContent(9,10.31363);
   hNCinFV_stack_11->SetBinContent(10,10.64366);
   hNCinFV_stack_11->SetBinContent(11,8.889521);
   hNCinFV_stack_11->SetBinContent(12,10.11522);
   hNCinFV_stack_11->SetBinContent(13,9.233079);
   hNCinFV_stack_11->SetBinContent(14,11.02756);
   hNCinFV_stack_11->SetBinContent(15,12.49586);
   hNCinFV_stack_11->SetBinContent(16,9.181517);
   hNCinFV_stack_11->SetBinContent(17,7.230659);
   hNCinFV_stack_11->SetBinContent(18,7.320868);
   hNCinFV_stack_11->SetBinContent(19,7.260979);
   hNCinFV_stack_11->SetBinContent(20,8.45467);
   hNCinFV_stack_11->SetBinContent(21,10.93228);
   hNCinFV_stack_11->SetBinContent(22,12.25711);
   hNCinFV_stack_11->SetBinContent(23,10.66165);
   hNCinFV_stack_11->SetBinContent(24,7.188632);
   hNCinFV_stack_11->SetBinError(1,1.493263);
   hNCinFV_stack_11->SetBinError(2,1.777913);
   hNCinFV_stack_11->SetBinError(3,1.787674);
   hNCinFV_stack_11->SetBinError(4,1.723003);
   hNCinFV_stack_11->SetBinError(5,1.531978);
   hNCinFV_stack_11->SetBinError(6,1.468599);
   hNCinFV_stack_11->SetBinError(7,1.271565);
   hNCinFV_stack_11->SetBinError(8,1.494371);
   hNCinFV_stack_11->SetBinError(9,1.631351);
   hNCinFV_stack_11->SetBinError(10,1.665248);
   hNCinFV_stack_11->SetBinError(11,1.494247);
   hNCinFV_stack_11->SetBinError(12,1.619242);
   hNCinFV_stack_11->SetBinError(13,1.532912);
   hNCinFV_stack_11->SetBinError(14,1.745022);
   hNCinFV_stack_11->SetBinError(15,1.798156);
   hNCinFV_stack_11->SetBinError(16,1.545578);
   hNCinFV_stack_11->SetBinError(17,1.345301);
   hNCinFV_stack_11->SetBinError(18,1.387511);
   hNCinFV_stack_11->SetBinError(19,1.350194);
   hNCinFV_stack_11->SetBinError(20,1.482681);
   hNCinFV_stack_11->SetBinError(21,1.711071);
   hNCinFV_stack_11->SetBinError(22,1.743274);
   hNCinFV_stack_11->SetBinError(23,1.60677);
   hNCinFV_stack_11->SetBinError(24,1.286146);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,16.33273);
   hnumuCCinFV_stack_12->SetBinContent(2,13.32026);
   hnumuCCinFV_stack_12->SetBinContent(3,10.01433);
   hnumuCCinFV_stack_12->SetBinContent(4,9.257103);
   hnumuCCinFV_stack_12->SetBinContent(5,6.546158);
   hnumuCCinFV_stack_12->SetBinContent(6,9.783184);
   hnumuCCinFV_stack_12->SetBinContent(7,11.56707);
   hnumuCCinFV_stack_12->SetBinContent(8,8.168723);
   hnumuCCinFV_stack_12->SetBinContent(9,9.932993);
   hnumuCCinFV_stack_12->SetBinContent(10,10.33003);
   hnumuCCinFV_stack_12->SetBinContent(11,14.49126);
   hnumuCCinFV_stack_12->SetBinContent(12,13.15403);
   hnumuCCinFV_stack_12->SetBinContent(13,13.02561);
   hnumuCCinFV_stack_12->SetBinContent(14,14.43096);
   hnumuCCinFV_stack_12->SetBinContent(15,11.96534);
   hnumuCCinFV_stack_12->SetBinContent(16,8.940969);
   hnumuCCinFV_stack_12->SetBinContent(17,8.699106);
   hnumuCCinFV_stack_12->SetBinContent(18,6.543549);
   hnumuCCinFV_stack_12->SetBinContent(19,8.841578);
   hnumuCCinFV_stack_12->SetBinContent(20,6.014771);
   hnumuCCinFV_stack_12->SetBinContent(21,9.748617);
   hnumuCCinFV_stack_12->SetBinContent(22,13.17527);
   hnumuCCinFV_stack_12->SetBinContent(23,13.37435);
   hnumuCCinFV_stack_12->SetBinContent(24,19.39802);
   hnumuCCinFV_stack_12->SetBinError(1,2.09457);
   hnumuCCinFV_stack_12->SetBinError(2,1.90288);
   hnumuCCinFV_stack_12->SetBinError(3,1.54318);
   hnumuCCinFV_stack_12->SetBinError(4,1.733313);
   hnumuCCinFV_stack_12->SetBinError(5,1.32184);
   hnumuCCinFV_stack_12->SetBinError(6,1.639635);
   hnumuCCinFV_stack_12->SetBinError(7,2.481914);
   hnumuCCinFV_stack_12->SetBinError(8,1.987255);
   hnumuCCinFV_stack_12->SetBinError(9,1.655938);
   hnumuCCinFV_stack_12->SetBinError(10,1.647523);
   hnumuCCinFV_stack_12->SetBinError(11,2.453157);
   hnumuCCinFV_stack_12->SetBinError(12,2.859363);
   hnumuCCinFV_stack_12->SetBinError(13,1.923747);
   hnumuCCinFV_stack_12->SetBinError(14,2.429693);
   hnumuCCinFV_stack_12->SetBinError(15,1.756471);
   hnumuCCinFV_stack_12->SetBinError(16,1.429969);
   hnumuCCinFV_stack_12->SetBinError(17,1.621398);
   hnumuCCinFV_stack_12->SetBinError(18,1.476689);
   hnumuCCinFV_stack_12->SetBinError(19,1.482715);
   hnumuCCinFV_stack_12->SetBinError(20,1.254081);
   hnumuCCinFV_stack_12->SetBinError(21,1.914058);
   hnumuCCinFV_stack_12->SetBinError(22,2.368188);
   hnumuCCinFV_stack_12->SetBinError(23,2.029782);
   hnumuCCinFV_stack_12->SetBinError(24,2.583963);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,2.036279);
   hnueCCinFV_stack_13->SetBinContent(2,2.47894);
   hnueCCinFV_stack_13->SetBinContent(3,1.749949);
   hnueCCinFV_stack_13->SetBinContent(4,1.137062);
   hnueCCinFV_stack_13->SetBinContent(5,0.9284594);
   hnueCCinFV_stack_13->SetBinContent(7,1.591313);
   hnueCCinFV_stack_13->SetBinContent(8,0.6439378);
   hnueCCinFV_stack_13->SetBinContent(9,0.73853);
   hnueCCinFV_stack_13->SetBinContent(10,2.650257);
   hnueCCinFV_stack_13->SetBinContent(11,0.785171);
   hnueCCinFV_stack_13->SetBinContent(12,1.466085);
   hnueCCinFV_stack_13->SetBinContent(13,0.789167);
   hnueCCinFV_stack_13->SetBinContent(14,2.443174);
   hnueCCinFV_stack_13->SetBinContent(15,1.289417);
   hnueCCinFV_stack_13->SetBinContent(16,0.9179294);
   hnueCCinFV_stack_13->SetBinContent(17,0.6358774);
   hnueCCinFV_stack_13->SetBinContent(18,3.121382);
   hnueCCinFV_stack_13->SetBinContent(19,0.788994);
   hnueCCinFV_stack_13->SetBinContent(20,2.538551);
   hnueCCinFV_stack_13->SetBinContent(21,1.027643);
   hnueCCinFV_stack_13->SetBinContent(22,0.3582875);
   hnueCCinFV_stack_13->SetBinContent(23,1.185129);
   hnueCCinFV_stack_13->SetBinContent(24,1.528319);
   hnueCCinFV_stack_13->SetBinError(1,0.8259115);
   hnueCCinFV_stack_13->SetBinError(2,1.596092);
   hnueCCinFV_stack_13->SetBinError(3,0.712192);
   hnueCCinFV_stack_13->SetBinError(4,0.5892454);
   hnueCCinFV_stack_13->SetBinError(5,0.5456539);
   hnueCCinFV_stack_13->SetBinError(7,0.8435705);
   hnueCCinFV_stack_13->SetBinError(8,0.372493);
   hnueCCinFV_stack_13->SetBinError(9,0.4394754);
   hnueCCinFV_stack_13->SetBinError(10,1.18868);
   hnueCCinFV_stack_13->SetBinError(11,0.3925882);
   hnueCCinFV_stack_13->SetBinError(12,0.5576641);
   hnueCCinFV_stack_13->SetBinError(13,0.3926085);
   hnueCCinFV_stack_13->SetBinError(14,1.04386);
   hnueCCinFV_stack_13->SetBinError(15,0.5893496);
   hnueCCinFV_stack_13->SetBinError(16,0.4629747);
   hnueCCinFV_stack_13->SetBinError(17,0.3692351);
   hnueCCinFV_stack_13->SetBinError(18,1.337679);
   hnueCCinFV_stack_13->SetBinError(19,0.4667322);
   hnueCCinFV_stack_13->SetBinError(20,1.416795);
   hnueCCinFV_stack_13->SetBinError(21,0.4941397);
   hnueCCinFV_stack_13->SetBinError(22,0.3582875);
   hnueCCinFV_stack_13->SetBinError(23,0.6176974);
   hnueCCinFV_stack_13->SetBinError(24,0.8404726);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);
   hmcerror__11->SetBinContent(1,172.6967);
   hmcerror__11->SetBinContent(2,171.7468);
   hmcerror__11->SetBinContent(3,173.5236);
   hmcerror__11->SetBinContent(4,185.5547);
   hmcerror__11->SetBinContent(5,143.5267);
   hmcerror__11->SetBinContent(6,158.0282);
   hmcerror__11->SetBinContent(7,160.0141);
   hmcerror__11->SetBinContent(8,142.2748);
   hmcerror__11->SetBinContent(9,165.2035);
   hmcerror__11->SetBinContent(10,153.5658);
   hmcerror__11->SetBinContent(11,162.0107);
   hmcerror__11->SetBinContent(12,152.0066);
   hmcerror__11->SetBinContent(13,147.9359);
   hmcerror__11->SetBinContent(14,160.4286);
   hmcerror__11->SetBinContent(15,175.7744);
   hmcerror__11->SetBinContent(16,166.0697);
   hmcerror__11->SetBinContent(17,162.8954);
   hmcerror__11->SetBinContent(18,154.8938);
   hmcerror__11->SetBinContent(19,168.1031);
   hmcerror__11->SetBinContent(20,155.201);
   hmcerror__11->SetBinContent(21,178.0577);
   hmcerror__11->SetBinContent(22,174.6783);
   hmcerror__11->SetBinContent(23,173.7899);
   hmcerror__11->SetBinContent(24,152.1251);
   hmcerror__11->SetBinError(1,49.86678);
   hmcerror__11->SetBinError(2,49.80801);
   hmcerror__11->SetBinError(3,46.30144);
   hmcerror__11->SetBinError(4,44.10116);
   hmcerror__11->SetBinError(5,33.91485);
   hmcerror__11->SetBinError(6,35.99588);
   hmcerror__11->SetBinError(7,41.03825);
   hmcerror__11->SetBinError(8,35.4179);
   hmcerror__11->SetBinError(9,46.42048);
   hmcerror__11->SetBinError(10,44.62458);
   hmcerror__11->SetBinError(11,50.53774);
   hmcerror__11->SetBinError(12,41.56802);
   hmcerror__11->SetBinError(13,44.03031);
   hmcerror__11->SetBinError(14,43.03612);
   hmcerror__11->SetBinError(15,45.60744);
   hmcerror__11->SetBinError(16,40.04445);
   hmcerror__11->SetBinError(17,37.45686);
   hmcerror__11->SetBinError(18,34.3682);
   hmcerror__11->SetBinError(19,40.95065);
   hmcerror__11->SetBinError(20,43.94533);
   hmcerror__11->SetBinError(21,44.8603);
   hmcerror__11->SetBinError(22,44.32397);
   hmcerror__11->SetBinError(23,49.23346);
   hmcerror__11->SetBinError(24,41.52737);
   hmcerror__11->SetBinError(25,0.3895343);
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
   
   Double_t _fx3013[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3013[24] = {
   162,
   183,
   175,
   171,
   174,
   169,
   138,
   145,
   139,
   144,
   149,
   145,
   152,
   157,
   192,
   168,
   145,
   155,
   147,
   153,
   172,
   177,
   151,
   160};
   Double_t _felx3013[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3013[24] = {
   12.72792,
   13.52775,
   13.22876,
   13.0767,
   13.19091,
   13,
   11.74734,
   12.04159,
   11.78983,
   12,
   12.20656,
   12.04159,
   12.32883,
   12.52996,
   13.85641,
   12.96148,
   12.04159,
   12.4499,
   12.12436,
   12.36932,
   13.11488,
   13.30413,
   12.28821,
   12.64911};
   Double_t _fehx3013[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3013[24] = {
   12.72792,
   13.52775,
   13.22876,
   13.0767,
   13.19091,
   13,
   11.74734,
   12.04159,
   11.78983,
   12,
   12.20656,
   12.04159,
   12.32883,
   12.52996,
   13.85641,
   12.96148,
   12.04159,
   12.4499,
   12.12436,
   12.36932,
   13.11488,
   13.30413,
   12.28821,
   12.64911};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,-3.78,3.78);
   Graph_Graph3013->SetMinimum(118.2923);
   Graph_Graph3013->SetMaximum(213.8168);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.98#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.8/24","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 99.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  8.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1291.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  255.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 234.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-4.152185,-0.5333333,3.989354,2.133333);
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
   
   Double_t _fx3014[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3014[24] = {
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
   Double_t _felx3014[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3014[24] = {
   0.2887536,
   0.2900084,
   0.2668308,
   0.2376721,
   0.2362965,
   0.2277815,
   0.2564664,
   0.2489401,
   0.2809897,
   0.2905894,
   0.3119407,
   0.2734619,
   0.2976309,
   0.2682572,
   0.2594658,
   0.2411303,
   0.2299443,
   0.2218824,
   0.2436044,
   0.2831512,
   0.2519425,
   0.2537463,
   0.2832931,
   0.2729818};
   Double_t _fehx3014[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3014[24] = {
   0.2887536,
   0.2900084,
   0.2668308,
   0.2376721,
   0.2362965,
   0.2277815,
   0.2564664,
   0.2489401,
   0.2809897,
   0.2905894,
   0.3119407,
   0.2734619,
   0.2976309,
   0.2682572,
   0.2594658,
   0.2411303,
   0.2299443,
   0.2218824,
   0.2436044,
   0.2831512,
   0.2519425,
   0.2537463,
   0.2832931,
   0.2729818};
   grae = new TGraphAsymmErrors(24,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,-3.78,3.78);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("Leading shower Azimuthal Angle #phi [rad]");
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
   
   Double_t _fx3015[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3015[24] = {
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
   Double_t _felx3015[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3015[24] = {
   0.2013881,
   0.2121984,
   0.2024348,
   0.1904367,
   0.1945342,
   0.1811177,
   0.1837761,
   0.2008882,
   0.1971235,
   0.2025508,
   0.2027731,
   0.2076892,
   0.2043175,
   0.2000895,
   0.191005,
   0.1923595,
   0.1842977,
   0.1733658,
   0.1775091,
   0.1895894,
   0.1953001,
   0.1956847,
   0.1949022,
   0.20851};
   Double_t _fehx3015[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3015[24] = {
   0.2013881,
   0.2121984,
   0.2024348,
   0.1904367,
   0.1945342,
   0.1811177,
   0.1837761,
   0.2008882,
   0.1971235,
   0.2025508,
   0.2027731,
   0.2076892,
   0.2043175,
   0.2000895,
   0.191005,
   0.1923595,
   0.1842977,
   0.1733658,
   0.1775091,
   0.1895894,
   0.1953001,
   0.1956847,
   0.1949022,
   0.20851};
   grae = new TGraphAsymmErrors(24,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,-3.78,3.78);
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
   
   Double_t _fx3016[24] = {
   -3.01875,
   -2.75625,
   -2.49375,
   -2.23125,
   -1.96875,
   -1.70625,
   -1.44375,
   -1.18125,
   -0.91875,
   -0.65625,
   -0.39375,
   -0.13125,
   0.13125,
   0.39375,
   0.65625,
   0.91875,
   1.18125,
   1.44375,
   1.70625,
   1.96875,
   2.23125,
   2.49375,
   2.75625,
   3.01875};
   Double_t _fy3016[24] = {
   0.938061,
   1.065522,
   1.008509,
   0.9215613,
   1.212318,
   1.06943,
   0.8624238,
   1.019154,
   0.8413865,
   0.937709,
   0.9196923,
   0.9539058,
   1.027472,
   0.9786286,
   1.092309,
   1.011623,
   0.890142,
   1.000686,
   0.8744636,
   0.9858186,
   0.965979,
   1.013291,
   0.8688654,
   1.051766};
   Double_t _felx3016[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fely3016[24] = {
   0.07370103,
   0.07876565,
   0.07623608,
   0.07047355,
   0.0919056,
   0.08226382,
   0.07341439,
   0.08463616,
   0.07136547,
   0.07814242,
   0.07534413,
   0.07921757,
   0.08333896,
   0.07810306,
   0.07883064,
   0.07804843,
   0.07392227,
   0.080377,
   0.07212454,
   0.07969871,
   0.07365521,
   0.07616364,
   0.07070726,
   0.08314942};
   Double_t _fehx3016[24] = {
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125,
   0.13125};
   Double_t _fehy3016[24] = {
   0.07370103,
   0.07876565,
   0.07623608,
   0.07047355,
   0.0919056,
   0.08226382,
   0.07341439,
   0.08463616,
   0.07136547,
   0.07814242,
   0.07534413,
   0.07921757,
   0.08333896,
   0.07810306,
   0.07883064,
   0.07804843,
   0.07392227,
   0.080377,
   0.07212454,
   0.07969871,
   0.07365521,
   0.07616364,
   0.07070726,
   0.08314942};
   grae = new TGraphAsymmErrors(24,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,-3.78,3.78);
   Graph_Graph3016->SetMinimum(0.7166008);
   Graph_Graph3016->SetMaximum(1.357644);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_kine_pio_phi_high_all",24,-3.15,3.15);

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
   TLine *line = new TLine(-3.15,1,3.15,1);
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
