#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Mon Mar 13 17:56:38 2023) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",164,172,1200,900);
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
   pad1->Range(-40,-4.34,293.3333,479.9126);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__10->SetBinContent(0,12.25335);
   hmc__10->SetBinContent(1,115.9242);
   hmc__10->SetBinContent(2,163.0793);
   hmc__10->SetBinContent(3,186.6185);
   hmc__10->SetBinContent(4,180.949);
   hmc__10->SetBinContent(5,187.1489);
   hmc__10->SetBinContent(6,185.3152);
   hmc__10->SetBinContent(7,175.721);
   hmc__10->SetBinContent(8,191.3844);
   hmc__10->SetBinContent(9,191.7551);
   hmc__10->SetBinContent(10,188.2858);
   hmc__10->SetBinContent(11,188.1781);
   hmc__10->SetBinContent(12,190.3813);
   hmc__10->SetBinContent(13,185.7844);
   hmc__10->SetBinContent(14,194.9946);
   hmc__10->SetBinContent(15,191.8234);
   hmc__10->SetBinContent(16,194.38);
   hmc__10->SetBinContent(17,210.7769);
   hmc__10->SetBinContent(18,204.254);
   hmc__10->SetBinContent(19,192.5023);
   hmc__10->SetBinContent(20,205.8916);
   hmc__10->SetBinContent(21,210.477);
   hmc__10->SetBinContent(22,207.7959);
   hmc__10->SetBinContent(23,204.4592);
   hmc__10->SetBinContent(24,206.9332);
   hmc__10->SetBinContent(25,176.9213);
   hmc__10->SetBinContent(26,83.7914);
   hmc__10->SetBinContent(27,9.48385);
   hmc__10->SetBinError(0,1.740024);
   hmc__10->SetBinError(1,31.33722);
   hmc__10->SetBinError(2,40.73736);
   hmc__10->SetBinError(3,51.18853);
   hmc__10->SetBinError(4,44.38079);
   hmc__10->SetBinError(5,55.10537);
   hmc__10->SetBinError(6,43.118);
   hmc__10->SetBinError(7,45.42843);
   hmc__10->SetBinError(8,45.47578);
   hmc__10->SetBinError(9,50.10682);
   hmc__10->SetBinError(10,47.73566);
   hmc__10->SetBinError(11,45.04898);
   hmc__10->SetBinError(12,43.01972);
   hmc__10->SetBinError(13,41.32255);
   hmc__10->SetBinError(14,55.4938);
   hmc__10->SetBinError(15,43.02456);
   hmc__10->SetBinError(16,45.2069);
   hmc__10->SetBinError(17,45.83121);
   hmc__10->SetBinError(18,53.55838);
   hmc__10->SetBinError(19,50.22335);
   hmc__10->SetBinError(20,49.18982);
   hmc__10->SetBinError(21,48.34997);
   hmc__10->SetBinError(22,44.94808);
   hmc__10->SetBinError(23,56.23429);
   hmc__10->SetBinError(24,48.30077);
   hmc__10->SetBinError(25,42.68145);
   hmc__10->SetBinError(26,30.84276);
   hmc__10->SetBinError(27,7.863734);
   hmc__10->SetMinimum(-4.34);
   hmc__10->SetMaximum(455.7);
   hmc__10->SetEntries(4778.995);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",26,0,260);
   hs4_stack_4->SetMinimum(-3.571482e-09);
   hs4_stack_4->SetMaximum(221.3157);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,0.1967154);
   hbadmatch_stack_1->SetBinContent(1,3.718874);
   hbadmatch_stack_1->SetBinContent(2,2.247316);
   hbadmatch_stack_1->SetBinContent(3,2.232211);
   hbadmatch_stack_1->SetBinContent(4,2.929362);
   hbadmatch_stack_1->SetBinContent(5,4.182686);
   hbadmatch_stack_1->SetBinContent(6,3.831352);
   hbadmatch_stack_1->SetBinContent(7,3.030797);
   hbadmatch_stack_1->SetBinContent(8,3.690039);
   hbadmatch_stack_1->SetBinContent(9,3.129515);
   hbadmatch_stack_1->SetBinContent(10,5.525462);
   hbadmatch_stack_1->SetBinContent(11,4.141282);
   hbadmatch_stack_1->SetBinContent(12,5.44576);
   hbadmatch_stack_1->SetBinContent(13,3.468674);
   hbadmatch_stack_1->SetBinContent(14,6.259489);
   hbadmatch_stack_1->SetBinContent(15,3.365391);
   hbadmatch_stack_1->SetBinContent(16,6.566803);
   hbadmatch_stack_1->SetBinContent(17,5.146043);
   hbadmatch_stack_1->SetBinContent(18,6.836083);
   hbadmatch_stack_1->SetBinContent(19,6.931028);
   hbadmatch_stack_1->SetBinContent(20,7.025941);
   hbadmatch_stack_1->SetBinContent(21,5.100061);
   hbadmatch_stack_1->SetBinContent(22,5.405719);
   hbadmatch_stack_1->SetBinContent(23,6.525636);
   hbadmatch_stack_1->SetBinContent(24,4.894154);
   hbadmatch_stack_1->SetBinContent(25,6.465146);
   hbadmatch_stack_1->SetBinContent(26,3.933665);
   hbadmatch_stack_1->SetBinContent(27,0.1967154);
   hbadmatch_stack_1->SetBinError(0,0.1967154);
   hbadmatch_stack_1->SetBinError(1,1.854644);
   hbadmatch_stack_1->SetBinError(2,0.7337357);
   hbadmatch_stack_1->SetBinError(3,0.7700045);
   hbadmatch_stack_1->SetBinError(4,0.8777653);
   hbadmatch_stack_1->SetBinError(5,2.066948);
   hbadmatch_stack_1->SetBinError(6,0.9984928);
   hbadmatch_stack_1->SetBinError(7,0.831764);
   hbadmatch_stack_1->SetBinError(8,0.9150257);
   hbadmatch_stack_1->SetBinError(9,0.8999079);
   hbadmatch_stack_1->SetBinError(10,1.918451);
   hbadmatch_stack_1->SetBinError(11,1.071738);
   hbadmatch_stack_1->SetBinError(12,1.345013);
   hbadmatch_stack_1->SetBinError(13,1.002094);
   hbadmatch_stack_1->SetBinError(14,1.415398);
   hbadmatch_stack_1->SetBinError(15,0.8887026);
   hbadmatch_stack_1->SetBinError(16,1.370812);
   hbadmatch_stack_1->SetBinError(17,1.106563);
   hbadmatch_stack_1->SetBinError(18,1.353229);
   hbadmatch_stack_1->SetBinError(19,1.734267);
   hbadmatch_stack_1->SetBinError(20,1.43146);
   hbadmatch_stack_1->SetBinError(21,1.220117);
   hbadmatch_stack_1->SetBinError(22,1.193958);
   hbadmatch_stack_1->SetBinError(23,1.365369);
   hbadmatch_stack_1->SetBinError(24,1.347633);
   hbadmatch_stack_1->SetBinError(25,1.369681);
   hbadmatch_stack_1->SetBinError(26,1.105829);
   hbadmatch_stack_1->SetBinError(27,0.1967154);
   hbadmatch_stack_1->SetEntries(466);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,0.7309963);
   hext_stack_2->SetBinContent(1,11.02119);
   hext_stack_2->SetBinContent(2,14.75397);
   hext_stack_2->SetBinContent(3,17.17202);
   hext_stack_2->SetBinContent(4,17.67795);
   hext_stack_2->SetBinContent(5,17.83518);
   hext_stack_2->SetBinContent(6,19.02902);
   hext_stack_2->SetBinContent(7,14.42957);
   hext_stack_2->SetBinContent(8,13.84144);
   hext_stack_2->SetBinContent(9,11.59497);
   hext_stack_2->SetBinContent(10,19.03343);
   hext_stack_2->SetBinContent(11,19.32747);
   hext_stack_2->SetBinContent(12,19.28999);
   hext_stack_2->SetBinContent(13,17.65918);
   hext_stack_2->SetBinContent(14,17.668);
   hext_stack_2->SetBinContent(15,20.79664);
   hext_stack_2->SetBinContent(16,19.79756);
   hext_stack_2->SetBinContent(17,23.49997);
   hext_stack_2->SetBinContent(18,23.37752);
   hext_stack_2->SetBinContent(19,13.44479);
   hext_stack_2->SetBinContent(20,20.8573);
   hext_stack_2->SetBinContent(21,23.8216);
   hext_stack_2->SetBinContent(22,26.31303);
   hext_stack_2->SetBinContent(23,23.40064);
   hext_stack_2->SetBinContent(24,25.35143);
   hext_stack_2->SetBinContent(25,23.41941);
   hext_stack_2->SetBinContent(26,7.612818);
   hext_stack_2->SetBinContent(27,1.048213);
   hext_stack_2->SetBinError(0,0.5201503);
   hext_stack_2->SetBinError(1,2.141709);
   hext_stack_2->SetBinError(2,2.421707);
   hext_stack_2->SetBinError(3,2.731337);
   hext_stack_2->SetBinError(4,2.635695);
   hext_stack_2->SetBinError(5,2.695973);
   hext_stack_2->SetBinError(6,2.869271);
   hext_stack_2->SetBinError(7,2.399881);
   hext_stack_2->SetBinError(8,2.49252);
   hext_stack_2->SetBinError(9,2.12981);
   hext_stack_2->SetBinError(10,2.892722);
   hext_stack_2->SetBinError(11,2.967564);
   hext_stack_2->SetBinError(12,2.830297);
   hext_stack_2->SetBinError(13,2.685921);
   hext_stack_2->SetBinError(14,2.735766);
   hext_stack_2->SetBinError(15,3.024292);
   hext_stack_2->SetBinError(16,2.822891);
   hext_stack_2->SetBinError(17,3.095129);
   hext_stack_2->SetBinError(18,3.010017);
   hext_stack_2->SetBinError(19,2.347298);
   hext_stack_2->SetBinError(20,3.132098);
   hext_stack_2->SetBinError(21,3.165656);
   hext_stack_2->SetBinError(22,3.37739);
   hext_stack_2->SetBinError(23,3.202883);
   hext_stack_2->SetBinError(24,3.320389);
   hext_stack_2->SetBinError(25,3.160882);
   hext_stack_2->SetBinError(26,1.84781);
   hext_stack_2->SetBinError(27,0.7595995);
   hext_stack_2->SetEntries(1214);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,0.2188956);
   hdirt_stack_3->SetBinContent(1,1.141502);
   hdirt_stack_3->SetBinContent(2,3.77934);
   hdirt_stack_3->SetBinContent(3,3.676283);
   hdirt_stack_3->SetBinContent(4,2.636689);
   hdirt_stack_3->SetBinContent(5,2.761722);
   hdirt_stack_3->SetBinContent(6,1.128149);
   hdirt_stack_3->SetBinContent(7,1.540917);
   hdirt_stack_3->SetBinContent(8,2.2524);
   hdirt_stack_3->SetBinContent(9,2.23943);
   hdirt_stack_3->SetBinContent(10,1.289059);
   hdirt_stack_3->SetBinContent(11,1.973687);
   hdirt_stack_3->SetBinContent(12,0.8329533);
   hdirt_stack_3->SetBinContent(13,0.8588142);
   hdirt_stack_3->SetBinContent(14,1.728496);
   hdirt_stack_3->SetBinContent(15,1.209201);
   hdirt_stack_3->SetBinContent(16,1.666285);
   hdirt_stack_3->SetBinContent(17,1.8142);
   hdirt_stack_3->SetBinContent(18,2.950488);
   hdirt_stack_3->SetBinContent(19,1.855411);
   hdirt_stack_3->SetBinContent(20,2.36631);
   hdirt_stack_3->SetBinContent(21,5.722688);
   hdirt_stack_3->SetBinContent(22,3.54988);
   hdirt_stack_3->SetBinContent(23,3.625101);
   hdirt_stack_3->SetBinContent(24,3.988464);
   hdirt_stack_3->SetBinContent(25,3.793925);
   hdirt_stack_3->SetBinContent(26,2.551325);
   hdirt_stack_3->SetBinContent(27,0.3381872);
   hdirt_stack_3->SetBinError(0,0.2188956);
   hdirt_stack_3->SetBinError(1,0.5421655);
   hdirt_stack_3->SetBinError(2,1.028434);
   hdirt_stack_3->SetBinError(3,0.9958769);
   hdirt_stack_3->SetBinError(4,0.7406352);
   hdirt_stack_3->SetBinError(5,1.174543);
   hdirt_stack_3->SetBinError(6,0.4372061);
   hdirt_stack_3->SetBinError(7,0.6207914);
   hdirt_stack_3->SetBinError(8,0.7463711);
   hdirt_stack_3->SetBinError(9,0.7399551);
   hdirt_stack_3->SetBinError(10,0.6570586);
   hdirt_stack_3->SetBinError(11,1.19985);
   hdirt_stack_3->SetBinError(12,0.3836916);
   hdirt_stack_3->SetBinError(13,0.4562172);
   hdirt_stack_3->SetBinError(14,0.6907024);
   hdirt_stack_3->SetBinError(15,0.5724416);
   hdirt_stack_3->SetBinError(16,0.6018289);
   hdirt_stack_3->SetBinError(17,0.6382198);
   hdirt_stack_3->SetBinError(18,0.9306905);
   hdirt_stack_3->SetBinError(19,0.7555321);
   hdirt_stack_3->SetBinError(20,0.7685293);
   hdirt_stack_3->SetBinError(21,1.6067);
   hdirt_stack_3->SetBinError(22,1.055111);
   hdirt_stack_3->SetBinError(23,0.9537848);
   hdirt_stack_3->SetBinError(24,0.9965579);
   hdirt_stack_3->SetBinError(25,1.065134);
   hdirt_stack_3->SetBinError(26,0.8619133);
   hdirt_stack_3->SetBinError(27,0.3381872);
   hdirt_stack_3->SetEntries(263);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,8.739723);
   houtFV_stack_4->SetBinContent(1,58.45012);
   houtFV_stack_4->SetBinContent(2,32.91212);
   houtFV_stack_4->SetBinContent(3,29.18635);
   houtFV_stack_4->SetBinContent(4,22.86285);
   houtFV_stack_4->SetBinContent(5,17.7117);
   houtFV_stack_4->SetBinContent(6,16.75912);
   houtFV_stack_4->SetBinContent(7,18.23974);
   houtFV_stack_4->SetBinContent(8,18.20143);
   houtFV_stack_4->SetBinContent(9,15.40299);
   houtFV_stack_4->SetBinContent(10,13.70831);
   houtFV_stack_4->SetBinContent(11,11.88728);
   houtFV_stack_4->SetBinContent(12,15.92147);
   houtFV_stack_4->SetBinContent(13,14.47862);
   houtFV_stack_4->SetBinContent(14,14.95449);
   houtFV_stack_4->SetBinContent(15,15.39692);
   houtFV_stack_4->SetBinContent(16,12.25451);
   houtFV_stack_4->SetBinContent(17,18.4539);
   houtFV_stack_4->SetBinContent(18,18.34373);
   houtFV_stack_4->SetBinContent(19,15.7374);
   houtFV_stack_4->SetBinContent(20,21.65176);
   houtFV_stack_4->SetBinContent(21,16.46516);
   houtFV_stack_4->SetBinContent(22,23.04382);
   houtFV_stack_4->SetBinContent(23,30.17622);
   houtFV_stack_4->SetBinContent(24,32.61581);
   houtFV_stack_4->SetBinContent(25,34.99625);
   houtFV_stack_4->SetBinContent(26,33.05612);
   houtFV_stack_4->SetBinContent(27,5.643718);
   houtFV_stack_4->SetBinError(0,1.488147);
   houtFV_stack_4->SetBinError(1,3.888629);
   houtFV_stack_4->SetBinError(2,2.909745);
   houtFV_stack_4->SetBinError(3,2.767473);
   houtFV_stack_4->SetBinError(4,2.408377);
   houtFV_stack_4->SetBinError(5,2.070209);
   houtFV_stack_4->SetBinError(6,2.077743);
   houtFV_stack_4->SetBinError(7,2.143766);
   houtFV_stack_4->SetBinError(8,2.283361);
   houtFV_stack_4->SetBinError(9,2.023982);
   houtFV_stack_4->SetBinError(10,1.813508);
   houtFV_stack_4->SetBinError(11,1.683751);
   houtFV_stack_4->SetBinError(12,2.00708);
   houtFV_stack_4->SetBinError(13,1.884186);
   houtFV_stack_4->SetBinError(14,1.902042);
   houtFV_stack_4->SetBinError(15,1.963656);
   houtFV_stack_4->SetBinError(16,1.702955);
   houtFV_stack_4->SetBinError(17,2.180712);
   houtFV_stack_4->SetBinError(18,2.234309);
   houtFV_stack_4->SetBinError(19,1.885992);
   houtFV_stack_4->SetBinError(20,2.427932);
   houtFV_stack_4->SetBinError(21,2.053691);
   houtFV_stack_4->SetBinError(22,2.441944);
   houtFV_stack_4->SetBinError(23,3.014751);
   houtFV_stack_4->SetBinError(24,2.781767);
   houtFV_stack_4->SetBinError(25,2.93651);
   houtFV_stack_4->SetBinError(26,2.849353);
   houtFV_stack_4->SetBinError(27,1.164586);
   houtFV_stack_4->SetEntries(2510);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.128458);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,3.695106);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,4.559678);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,3.374084);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,3.555102);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.822564);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.360297);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,3.44367);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,4.37866);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,3.625024);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,4.698346);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.280342);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,5.467601);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.754146);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,3.986724);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.128056);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,5.089946);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.399174);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,4.558678);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.9624);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,5.089778);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,4.27851);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,3.682152);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,5.118678);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,3.05407);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.5583361);
   hNCpi0inFVcoh_stack_5->SetBinContent(27,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3130755);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6526314);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.7273713);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.5585275);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5689982);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.6869636);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5215923);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5944781);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.71921);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.6562988);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7167251);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.6751052);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.8434545);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7178103);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.6235562);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.6811796);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.7593535);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7811657);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.6906836);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.7357505);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.7374678);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.6200611);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.6366314);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.7724392);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.6281175);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.2847561);
   hNCpi0inFVcoh_stack_5->SetBinError(27,0.03945654);
   hNCpi0inFVcoh_stack_5->SetEntries(1898);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.307068);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5862361);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9339901);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9771723);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.3205179);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.5438859);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.878854);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.181018);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.530268);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.9474399);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2510999);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.739354);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7800399);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.6141361);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.515986);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.4042178);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.6131358);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.9348222);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.2089179);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07381642);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2032767);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2861196);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3344153);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3978442);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1252919);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2338466);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.3111014);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.1086555);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2180566);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2936159);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.08369995);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3047819);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2855518);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2874767);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2321763);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1342881);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.1749792);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.3620771);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.1121803);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.07381642);
   hNCpi0inFVqe_stack_6->SetEntries(258);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVres_stack_7->SetBinContent(0,1.143908);
   hNCpi0inFVres_stack_7->SetBinContent(1,16.02463);
   hNCpi0inFVres_stack_7->SetBinContent(2,47.49933);
   hNCpi0inFVres_stack_7->SetBinContent(3,61.77002);
   hNCpi0inFVres_stack_7->SetBinContent(4,65.71655);
   hNCpi0inFVres_stack_7->SetBinContent(5,72.89635);
   hNCpi0inFVres_stack_7->SetBinContent(6,72.08127);
   hNCpi0inFVres_stack_7->SetBinContent(7,73.28154);
   hNCpi0inFVres_stack_7->SetBinContent(8,76.71816);
   hNCpi0inFVres_stack_7->SetBinContent(9,80.63784);
   hNCpi0inFVres_stack_7->SetBinContent(10,68.99315);
   hNCpi0inFVres_stack_7->SetBinContent(11,77.17919);
   hNCpi0inFVres_stack_7->SetBinContent(12,74.88106);
   hNCpi0inFVres_stack_7->SetBinContent(13,74.05203);
   hNCpi0inFVres_stack_7->SetBinContent(14,76.58234);
   hNCpi0inFVres_stack_7->SetBinContent(15,74.75087);
   hNCpi0inFVres_stack_7->SetBinContent(16,78.31081);
   hNCpi0inFVres_stack_7->SetBinContent(17,74.68925);
   hNCpi0inFVres_stack_7->SetBinContent(18,72.03393);
   hNCpi0inFVres_stack_7->SetBinContent(19,74.54829);
   hNCpi0inFVres_stack_7->SetBinContent(20,68.74355);
   hNCpi0inFVres_stack_7->SetBinContent(21,71.14246);
   hNCpi0inFVres_stack_7->SetBinContent(22,70.33337);
   hNCpi0inFVres_stack_7->SetBinContent(23,62.04322);
   hNCpi0inFVres_stack_7->SetBinContent(24,56.03735);
   hNCpi0inFVres_stack_7->SetBinContent(25,39.58577);
   hNCpi0inFVres_stack_7->SetBinContent(26,11.38923);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.8923038);
   hNCpi0inFVres_stack_7->SetBinError(0,0.4200514);
   hNCpi0inFVres_stack_7->SetBinError(1,1.325384);
   hNCpi0inFVres_stack_7->SetBinError(2,2.247479);
   hNCpi0inFVres_stack_7->SetBinError(3,2.570497);
   hNCpi0inFVres_stack_7->SetBinError(4,2.638442);
   hNCpi0inFVres_stack_7->SetBinError(5,2.791931);
   hNCpi0inFVres_stack_7->SetBinError(6,2.77169);
   hNCpi0inFVres_stack_7->SetBinError(7,2.793544);
   hNCpi0inFVres_stack_7->SetBinError(8,2.844697);
   hNCpi0inFVres_stack_7->SetBinError(9,3.036463);
   hNCpi0inFVres_stack_7->SetBinError(10,2.689071);
   hNCpi0inFVres_stack_7->SetBinError(11,2.882437);
   hNCpi0inFVres_stack_7->SetBinError(12,2.75534);
   hNCpi0inFVres_stack_7->SetBinError(13,2.786151);
   hNCpi0inFVres_stack_7->SetBinError(14,2.894049);
   hNCpi0inFVres_stack_7->SetBinError(15,2.81063);
   hNCpi0inFVres_stack_7->SetBinError(16,2.935982);
   hNCpi0inFVres_stack_7->SetBinError(17,2.812072);
   hNCpi0inFVres_stack_7->SetBinError(18,2.745813);
   hNCpi0inFVres_stack_7->SetBinError(19,2.849595);
   hNCpi0inFVres_stack_7->SetBinError(20,2.715584);
   hNCpi0inFVres_stack_7->SetBinError(21,2.736347);
   hNCpi0inFVres_stack_7->SetBinError(22,2.784614);
   hNCpi0inFVres_stack_7->SetBinError(23,2.588917);
   hNCpi0inFVres_stack_7->SetBinError(24,2.381565);
   hNCpi0inFVres_stack_7->SetBinError(25,2.046774);
   hNCpi0inFVres_stack_7->SetBinError(26,1.12907);
   hNCpi0inFVres_stack_7->SetBinError(27,0.2667597);
   hNCpi0inFVres_stack_7->SetEntries(31278);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.2927861);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.41901);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.955028);
   hNCpi0inFVdis_stack_8->SetBinContent(3,10.95776);
   hNCpi0inFVdis_stack_8->SetBinContent(4,15.28279);
   hNCpi0inFVdis_stack_8->SetBinContent(5,12.71814);
   hNCpi0inFVdis_stack_8->SetBinContent(6,16.09472);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.85513);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.13921);
   hNCpi0inFVdis_stack_8->SetBinContent(9,15.73881);
   hNCpi0inFVdis_stack_8->SetBinContent(10,15.0433);
   hNCpi0inFVdis_stack_8->SetBinContent(11,14.65453);
   hNCpi0inFVdis_stack_8->SetBinContent(12,13.27381);
   hNCpi0inFVdis_stack_8->SetBinContent(13,15.78698);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.46331);
   hNCpi0inFVdis_stack_8->SetBinContent(15,15.79744);
   hNCpi0inFVdis_stack_8->SetBinContent(16,13.04844);
   hNCpi0inFVdis_stack_8->SetBinContent(17,14.5421);
   hNCpi0inFVdis_stack_8->SetBinContent(18,15.78566);
   hNCpi0inFVdis_stack_8->SetBinContent(19,15.30686);
   hNCpi0inFVdis_stack_8->SetBinContent(20,15.46481);
   hNCpi0inFVdis_stack_8->SetBinContent(21,16.63727);
   hNCpi0inFVdis_stack_8->SetBinContent(22,13.2738);
   hNCpi0inFVdis_stack_8->SetBinContent(23,12.97007);
   hNCpi0inFVdis_stack_8->SetBinContent(24,12.49294);
   hNCpi0inFVdis_stack_8->SetBinContent(25,8.128061);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.937726);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2368179);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2183542);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.6636211);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.052842);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.047839);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.323058);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.175624);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.377088);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.08796);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.222713);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.249788);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.225574);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.24997);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.171589);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.313017);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.289965);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.298786);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.108866);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.240986);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.323254);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.255356);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.346964);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.354073);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.108193);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.186745);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.127747);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.8913169);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3915981);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1155977);
   hNCpi0inFVdis_stack_8->SetEntries(6389);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(26,0.1954681);
   hNCpi0inFVmec_stack_9->SetEntries(15);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_10->SetBinContent(0,0.7336084);
   hCCpi0inFV_stack_10->SetBinContent(1,11.13684);
   hCCpi0inFV_stack_10->SetBinContent(2,25.15174);
   hCCpi0inFV_stack_10->SetBinContent(3,30.78051);
   hCCpi0inFV_stack_10->SetBinContent(4,26.68576);
   hCCpi0inFV_stack_10->SetBinContent(5,27.79865);
   hCCpi0inFV_stack_10->SetBinContent(6,27.56592);
   hCCpi0inFV_stack_10->SetBinContent(7,27.73934);
   hCCpi0inFV_stack_10->SetBinContent(8,30.11267);
   hCCpi0inFV_stack_10->SetBinContent(9,34.23592);
   hCCpi0inFV_stack_10->SetBinContent(10,30.33494);
   hCCpi0inFV_stack_10->SetBinContent(11,24.53622);
   hCCpi0inFV_stack_10->SetBinContent(12,28.40197);
   hCCpi0inFV_stack_10->SetBinContent(13,25.5327);
   hCCpi0inFV_stack_10->SetBinContent(14,30.91887);
   hCCpi0inFV_stack_10->SetBinContent(15,29.68224);
   hCCpi0inFV_stack_10->SetBinContent(16,27.24253);
   hCCpi0inFV_stack_10->SetBinContent(17,32.95939);
   hCCpi0inFV_stack_10->SetBinContent(18,31.11501);
   hCCpi0inFV_stack_10->SetBinContent(19,27.39151);
   hCCpi0inFV_stack_10->SetBinContent(20,32.5006);
   hCCpi0inFV_stack_10->SetBinContent(21,32.96452);
   hCCpi0inFV_stack_10->SetBinContent(22,30.98304);
   hCCpi0inFV_stack_10->SetBinContent(23,25.6414);
   hCCpi0inFV_stack_10->SetBinContent(24,37.41109);
   hCCpi0inFV_stack_10->SetBinContent(25,28.35123);
   hCCpi0inFV_stack_10->SetBinContent(26,9.517998);
   hCCpi0inFV_stack_10->SetBinContent(27,0.536893);
   hCCpi0inFV_stack_10->SetBinError(0,0.4394482);
   hCCpi0inFV_stack_10->SetBinError(1,1.664675);
   hCCpi0inFV_stack_10->SetBinError(2,2.469157);
   hCCpi0inFV_stack_10->SetBinError(3,2.810742);
   hCCpi0inFV_stack_10->SetBinError(4,2.595819);
   hCCpi0inFV_stack_10->SetBinError(5,2.625611);
   hCCpi0inFV_stack_10->SetBinError(6,2.64129);
   hCCpi0inFV_stack_10->SetBinError(7,2.632444);
   hCCpi0inFV_stack_10->SetBinError(8,2.792408);
   hCCpi0inFV_stack_10->SetBinError(9,2.976094);
   hCCpi0inFV_stack_10->SetBinError(10,2.779331);
   hCCpi0inFV_stack_10->SetBinError(11,2.487227);
   hCCpi0inFV_stack_10->SetBinError(12,2.711509);
   hCCpi0inFV_stack_10->SetBinError(13,2.467138);
   hCCpi0inFV_stack_10->SetBinError(14,2.749978);
   hCCpi0inFV_stack_10->SetBinError(15,2.764578);
   hCCpi0inFV_stack_10->SetBinError(16,2.594387);
   hCCpi0inFV_stack_10->SetBinError(17,2.839987);
   hCCpi0inFV_stack_10->SetBinError(18,2.795599);
   hCCpi0inFV_stack_10->SetBinError(19,2.594993);
   hCCpi0inFV_stack_10->SetBinError(20,2.895586);
   hCCpi0inFV_stack_10->SetBinError(21,2.865852);
   hCCpi0inFV_stack_10->SetBinError(22,2.785448);
   hCCpi0inFV_stack_10->SetBinError(23,2.464255);
   hCCpi0inFV_stack_10->SetBinError(24,3.052636);
   hCCpi0inFV_stack_10->SetBinError(25,2.723766);
   hCCpi0inFV_stack_10->SetBinError(26,1.558247);
   hCCpi0inFV_stack_10->SetBinError(27,0.3929602);
   hCCpi0inFV_stack_10->SetEntries(3118);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_11->SetBinContent(0,0.1967154);
   hNCinFV_stack_11->SetBinContent(1,4.441379);
   hNCinFV_stack_11->SetBinContent(2,12.02067);
   hNCinFV_stack_11->SetBinContent(3,11.63001);
   hNCinFV_stack_11->SetBinContent(4,12.39442);
   hNCinFV_stack_11->SetBinContent(5,13.12308);
   hNCinFV_stack_11->SetBinContent(6,11.51904);
   hNCinFV_stack_11->SetBinContent(7,11.48547);
   hNCinFV_stack_11->SetBinContent(8,14.25615);
   hNCinFV_stack_11->SetBinContent(9,13.08661);
   hNCinFV_stack_11->SetBinContent(10,13.42787);
   hNCinFV_stack_11->SetBinContent(11,16.70248);
   hNCinFV_stack_11->SetBinContent(12,12.36592);
   hNCinFV_stack_11->SetBinContent(13,11.68556);
   hNCinFV_stack_11->SetBinContent(14,10.81634);
   hNCinFV_stack_11->SetBinContent(15,10.98553);
   hNCinFV_stack_11->SetBinContent(16,13.44586);
   hNCinFV_stack_11->SetBinContent(17,13.00255);
   hNCinFV_stack_11->SetBinContent(18,12.20939);
   hNCinFV_stack_11->SetBinContent(19,13.58763);
   hNCinFV_stack_11->SetBinContent(20,14.81948);
   hNCinFV_stack_11->SetBinContent(21,12.54742);
   hNCinFV_stack_11->SetBinContent(22,10.31194);
   hNCinFV_stack_11->SetBinContent(23,12.89544);
   hNCinFV_stack_11->SetBinContent(24,13.65042);
   hNCinFV_stack_11->SetBinContent(25,12.214);
   hNCinFV_stack_11->SetBinContent(26,3.376046);
   hNCinFV_stack_11->SetBinContent(27,0.5352025);
   hNCinFV_stack_11->SetBinError(0,0.1967154);
   hNCinFV_stack_11->SetBinError(1,1.055966);
   hNCinFV_stack_11->SetBinError(2,1.744687);
   hNCinFV_stack_11->SetBinError(3,1.664102);
   hNCinFV_stack_11->SetBinError(4,1.819892);
   hNCinFV_stack_11->SetBinError(5,1.834474);
   hNCinFV_stack_11->SetBinError(6,1.744285);
   hNCinFV_stack_11->SetBinError(7,1.700052);
   hNCinFV_stack_11->SetBinError(8,1.891471);
   hNCinFV_stack_11->SetBinError(9,1.883635);
   hNCinFV_stack_11->SetBinError(10,1.861676);
   hNCinFV_stack_11->SetBinError(11,2.086628);
   hNCinFV_stack_11->SetBinError(12,1.7781);
   hNCinFV_stack_11->SetBinError(13,1.711782);
   hNCinFV_stack_11->SetBinError(14,1.56995);
   hNCinFV_stack_11->SetBinError(15,1.699834);
   hNCinFV_stack_11->SetBinError(16,1.809557);
   hNCinFV_stack_11->SetBinError(17,1.799098);
   hNCinFV_stack_11->SetBinError(18,1.767059);
   hNCinFV_stack_11->SetBinError(19,1.830535);
   hNCinFV_stack_11->SetBinError(20,1.882565);
   hNCinFV_stack_11->SetBinError(21,1.787282);
   hNCinFV_stack_11->SetBinError(22,1.631148);
   hNCinFV_stack_11->SetBinError(23,1.764874);
   hNCinFV_stack_11->SetBinError(24,1.765751);
   hNCinFV_stack_11->SetBinError(25,1.755364);
   hNCinFV_stack_11->SetBinError(26,0.8997438);
   hNCinFV_stack_11->SetBinError(27,0.3921167);
   hNCinFV_stack_11->SetEntries(1336);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_12->SetBinContent(1,4.386438);
   hnumuCCinFV_stack_12->SetBinContent(2,10.43362);
   hnumuCCinFV_stack_12->SetBinContent(3,13.45309);
   hnumuCCinFV_stack_12->SetBinContent(4,8.979117);
   hnumuCCinFV_stack_12->SetBinContent(5,12.98636);
   hnumuCCinFV_stack_12->SetBinContent(6,9.739968);
   hnumuCCinFV_stack_12->SetBinContent(7,8.255371);
   hnumuCCinFV_stack_12->SetBinContent(8,11.14388);
   hnumuCCinFV_stack_12->SetBinContent(9,7.392096);
   hnumuCCinFV_stack_12->SetBinContent(10,14.05506);
   hnumuCCinFV_stack_12->SetBinContent(11,11.87276);
   hnumuCCinFV_stack_12->SetBinContent(12,13.63141);
   hnumuCCinFV_stack_12->SetBinContent(13,12.80688);
   hnumuCCinFV_stack_12->SetBinContent(14,14.56118);
   hnumuCCinFV_stack_12->SetBinContent(15,12.85554);
   hnumuCCinFV_stack_12->SetBinContent(16,16.28681);
   hnumuCCinFV_stack_12->SetBinContent(17,17.79309);
   hnumuCCinFV_stack_12->SetBinContent(18,14.63912);
   hnumuCCinFV_stack_12->SetBinContent(19,17.06652);
   hnumuCCinFV_stack_12->SetBinContent(20,14.60087);
   hnumuCCinFV_stack_12->SetBinContent(21,18.896);
   hnumuCCinFV_stack_12->SetBinContent(22,18.36172);
   hnumuCCinFV_stack_12->SetBinContent(23,21.47716);
   hnumuCCinFV_stack_12->SetBinContent(24,14.49989);
   hnumuCCinFV_stack_12->SetBinContent(25,15.9156);
   hnumuCCinFV_stack_12->SetBinContent(26,9.662671);
   hnumuCCinFV_stack_12->SetBinError(1,1.073652);
   hnumuCCinFV_stack_12->SetBinError(2,1.62325);
   hnumuCCinFV_stack_12->SetBinError(3,2.339268);
   hnumuCCinFV_stack_12->SetBinError(4,1.606024);
   hnumuCCinFV_stack_12->SetBinError(5,1.887091);
   hnumuCCinFV_stack_12->SetBinError(6,1.594278);
   hnumuCCinFV_stack_12->SetBinError(7,1.58412);
   hnumuCCinFV_stack_12->SetBinError(8,1.860905);
   hnumuCCinFV_stack_12->SetBinError(9,1.320665);
   hnumuCCinFV_stack_12->SetBinError(10,1.942986);
   hnumuCCinFV_stack_12->SetBinError(11,1.741985);
   hnumuCCinFV_stack_12->SetBinError(12,2.367281);
   hnumuCCinFV_stack_12->SetBinError(13,1.981434);
   hnumuCCinFV_stack_12->SetBinError(14,2.057066);
   hnumuCCinFV_stack_12->SetBinError(15,1.869103);
   hnumuCCinFV_stack_12->SetBinError(16,2.159885);
   hnumuCCinFV_stack_12->SetBinError(17,2.520233);
   hnumuCCinFV_stack_12->SetBinError(18,2.163956);
   hnumuCCinFV_stack_12->SetBinError(19,2.274054);
   hnumuCCinFV_stack_12->SetBinError(20,2.419477);
   hnumuCCinFV_stack_12->SetBinError(21,2.287347);
   hnumuCCinFV_stack_12->SetBinError(22,2.987955);
   hnumuCCinFV_stack_12->SetBinError(23,3.221474);
   hnumuCCinFV_stack_12->SetBinError(24,2.193717);
   hnumuCCinFV_stack_12->SetBinError(25,2.404939);
   hnumuCCinFV_stack_12->SetBinError(26,2.238111);
   hnumuCCinFV_stack_12->SetEntries(1360);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_13->SetBinContent(2,0.4078967);
   hnueCCinFV_stack_13->SetBinContent(3,0.8377515);
   hnueCCinFV_stack_13->SetBinContent(4,1.795259);
   hnueCCinFV_stack_13->SetBinContent(5,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(6,1.766908);
   hnueCCinFV_stack_13->SetBinContent(7,1.182312);
   hnueCCinFV_stack_13->SetBinContent(8,3.041458);
   hnueCCinFV_stack_13->SetBinContent(9,3.095208);
   hnueCCinFV_stack_13->SetBinContent(10,2.246083);
   hnueCCinFV_stack_13->SetBinContent(11,0.995903);
   hnueCCinFV_stack_13->SetBinContent(12,1.526365);
   hnueCCinFV_stack_13->SetBinContent(13,3.039896);
   hnueCCinFV_stack_13->SetBinContent(14,1.03682);
   hnueCCinFV_stack_13->SetBinContent(15,2.229643);
   hnueCCinFV_stack_13->SetBinContent(16,0.8523195);
   hnueCCinFV_stack_13->SetBinContent(17,3.395649);
   hnueCCinFV_stack_13->SetBinContent(18,1.173137);
   hnueCCinFV_stack_13->SetBinContent(19,1.460057);
   hnueCCinFV_stack_13->SetBinContent(20,2.354626);
   hnueCCinFV_stack_13->SetBinContent(21,1.68585);
   hnueCCinFV_stack_13->SetBinContent(22,1.27217);
   hnueCCinFV_stack_13->SetBinContent(23,1.059405);
   hnueCCinFV_stack_13->SetBinContent(24,0.6640827);
   hnueCCinFV_stack_13->SetBinContent(25,0.8024918);
   hnueCCinFV_stack_13->SetBinError(2,0.4078967);
   hnueCCinFV_stack_13->SetBinError(3,0.4952691);
   hnueCCinFV_stack_13->SetBinError(4,1.329192);
   hnueCCinFV_stack_13->SetBinError(5,0.340721);
   hnueCCinFV_stack_13->SetBinError(6,0.7793238);
   hnueCCinFV_stack_13->SetBinError(7,0.5074547);
   hnueCCinFV_stack_13->SetBinError(8,1.060865);
   hnueCCinFV_stack_13->SetBinError(9,1.109124);
   hnueCCinFV_stack_13->SetBinError(10,1.283497);
   hnueCCinFV_stack_13->SetBinError(11,0.4455632);
   hnueCCinFV_stack_13->SetBinError(12,0.6513743);
   hnueCCinFV_stack_13->SetBinError(13,1.371918);
   hnueCCinFV_stack_13->SetBinError(14,0.4647793);
   hnueCCinFV_stack_13->SetBinError(15,0.9759826);
   hnueCCinFV_stack_13->SetBinError(16,0.4301776);
   hnueCCinFV_stack_13->SetBinError(17,1.67899);
   hnueCCinFV_stack_13->SetBinError(18,0.6448608);
   hnueCCinFV_stack_13->SetBinError(19,0.9132918);
   hnueCCinFV_stack_13->SetBinError(20,0.8546649);
   hnueCCinFV_stack_13->SetBinError(21,0.6588701);
   hnueCCinFV_stack_13->SetBinError(22,0.525795);
   hnueCCinFV_stack_13->SetBinError(23,0.5589817);
   hnueCCinFV_stack_13->SetBinError(24,0.3881319);
   hnueCCinFV_stack_13->SetBinError(25,0.4946967);
   hnueCCinFV_stack_13->SetEntries(135);

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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__11->SetBinContent(0,12.25335);
   hmcerror__11->SetBinContent(1,115.9242);
   hmcerror__11->SetBinContent(2,163.0793);
   hmcerror__11->SetBinContent(3,186.6185);
   hmcerror__11->SetBinContent(4,180.949);
   hmcerror__11->SetBinContent(5,187.1489);
   hmcerror__11->SetBinContent(6,185.3152);
   hmcerror__11->SetBinContent(7,175.721);
   hmcerror__11->SetBinContent(8,191.3844);
   hmcerror__11->SetBinContent(9,191.7551);
   hmcerror__11->SetBinContent(10,188.2858);
   hmcerror__11->SetBinContent(11,188.1781);
   hmcerror__11->SetBinContent(12,190.3813);
   hmcerror__11->SetBinContent(13,185.7844);
   hmcerror__11->SetBinContent(14,194.9946);
   hmcerror__11->SetBinContent(15,191.8234);
   hmcerror__11->SetBinContent(16,194.38);
   hmcerror__11->SetBinContent(17,210.7769);
   hmcerror__11->SetBinContent(18,204.254);
   hmcerror__11->SetBinContent(19,192.5023);
   hmcerror__11->SetBinContent(20,205.8916);
   hmcerror__11->SetBinContent(21,210.477);
   hmcerror__11->SetBinContent(22,207.7959);
   hmcerror__11->SetBinContent(23,204.4592);
   hmcerror__11->SetBinContent(24,206.9332);
   hmcerror__11->SetBinContent(25,176.9213);
   hmcerror__11->SetBinContent(26,83.7914);
   hmcerror__11->SetBinContent(27,9.48385);
   hmcerror__11->SetBinError(0,1.740024);
   hmcerror__11->SetBinError(1,31.33722);
   hmcerror__11->SetBinError(2,40.73736);
   hmcerror__11->SetBinError(3,51.18853);
   hmcerror__11->SetBinError(4,44.38079);
   hmcerror__11->SetBinError(5,55.10537);
   hmcerror__11->SetBinError(6,43.118);
   hmcerror__11->SetBinError(7,45.42843);
   hmcerror__11->SetBinError(8,45.47578);
   hmcerror__11->SetBinError(9,50.10682);
   hmcerror__11->SetBinError(10,47.73566);
   hmcerror__11->SetBinError(11,45.04898);
   hmcerror__11->SetBinError(12,43.01972);
   hmcerror__11->SetBinError(13,41.32255);
   hmcerror__11->SetBinError(14,55.4938);
   hmcerror__11->SetBinError(15,43.02456);
   hmcerror__11->SetBinError(16,45.2069);
   hmcerror__11->SetBinError(17,45.83121);
   hmcerror__11->SetBinError(18,53.55838);
   hmcerror__11->SetBinError(19,50.22335);
   hmcerror__11->SetBinError(20,49.18982);
   hmcerror__11->SetBinError(21,48.34997);
   hmcerror__11->SetBinError(22,44.94808);
   hmcerror__11->SetBinError(23,56.23429);
   hmcerror__11->SetBinError(24,48.30077);
   hmcerror__11->SetBinError(25,42.68145);
   hmcerror__11->SetBinError(26,30.84276);
   hmcerror__11->SetBinError(27,7.863734);
   hmcerror__11->SetEntries(4778.995);

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
   
   Double_t _fx3013[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3013[26] = {
   107,
   159,
   167,
   163,
   164,
   162,
   172,
   180,
   199,
   189,
   194,
   202,
   208,
   192,
   180,
   197,
   184,
   178,
   165,
   191,
   206,
   208,
   217,
   165,
   156,
   75};
   Double_t _felx3013[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3013[26] = {
   10.34408,
   12.60952,
   12.92285,
   12.76715,
   12.80625,
   12.72792,
   13.11488,
   13.41641,
   14.10674,
   13.74773,
   13.92839,
   14.21267,
   14.42221,
   13.85641,
   13.41641,
   14.03567,
   13.56466,
   13.34166,
   12.84523,
   13.82027,
   14.3527,
   14.42221,
   14.73092,
   12.84523,
   12.49,
   8.7852};
   Double_t _fehx3013[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3013[26] = {
   10.34408,
   12.60952,
   12.92285,
   12.76715,
   12.80625,
   12.72792,
   13.11488,
   13.41641,
   14.10674,
   13.74773,
   13.92839,
   14.21267,
   14.42221,
   13.85641,
   13.41641,
   14.03567,
   13.56466,
   13.34166,
   12.84523,
   13.82027,
   14.3527,
   14.42221,
   14.73092,
   12.84523,
   12.49,
   8.5831};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,286);
   Graph_Graph3013->SetMinimum(49.66319);
   Graph_Graph3013->SetMaximum(248.2825);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.7/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 4580.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 122.0","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 482.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 62.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 572.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  105.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  13.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1691.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  341.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 726.7","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 312.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 345.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 38.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   
   Double_t _fx3014[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3014[26] = {
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
   1,
   1};
   Double_t _felx3014[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3014[26] = {
   0.270325,
   0.2498009,
   0.274295,
   0.2452669,
   0.2944467,
   0.2326738,
   0.2585259,
   0.2376149,
   0.2613063,
   0.2535277,
   0.2393955,
   0.2259661,
   0.2224221,
   0.2845915,
   0.2242925,
   0.2325697,
   0.2174395,
   0.2622146,
   0.2608974,
   0.2389113,
   0.2297161,
   0.2163088,
   0.2750392,
   0.2334123,
   0.2412455,
   0.3680898};
   Double_t _fehx3014[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3014[26] = {
   0.270325,
   0.2498009,
   0.274295,
   0.2452669,
   0.2944467,
   0.2326738,
   0.2585259,
   0.2376149,
   0.2613063,
   0.2535277,
   0.2393955,
   0.2259661,
   0.2224221,
   0.2845915,
   0.2242925,
   0.2325697,
   0.2174395,
   0.2622146,
   0.2608974,
   0.2389113,
   0.2297161,
   0.2163088,
   0.2750392,
   0.2334123,
   0.2412455,
   0.3680898};
   grae = new TGraphAsymmErrors(26,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,286);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3014->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3015[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3015[26] = {
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
   1,
   1};
   Double_t _felx3015[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3015[26] = {
   0.1887383,
   0.1891665,
   0.200986,
   0.1944625,
   0.2015984,
   0.1994783,
   0.2059204,
   0.2027482,
   0.2044209,
   0.188521,
   0.2086718,
   0.1963547,
   0.1922849,
   0.2005739,
   0.1939539,
   0.1931061,
   0.1847421,
   0.1936974,
   0.2037753,
   0.1979064,
   0.1908754,
   0.1803803,
   0.1842831,
   0.1876389,
   0.1735539,
   0.1890337};
   Double_t _fehx3015[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3015[26] = {
   0.1887383,
   0.1891665,
   0.200986,
   0.1944625,
   0.2015984,
   0.1994783,
   0.2059204,
   0.2027482,
   0.2044209,
   0.188521,
   0.2086718,
   0.1963547,
   0.1922849,
   0.2005739,
   0.1939539,
   0.1931061,
   0.1847421,
   0.1936974,
   0.2037753,
   0.1979064,
   0.1908754,
   0.1803803,
   0.1842831,
   0.1876389,
   0.1735539,
   0.1890337};
   grae = new TGraphAsymmErrors(26,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,286);
   Graph_Graph3015->SetMinimum(0);
   Graph_Graph3015->SetMaximum(2);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineWidth(2);
   Graph_Graph3015->SetMarkerStyle(20);
   Graph_Graph3015->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3016[26] = {
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3016[26] = {
   0.9230166,
   0.9749856,
   0.8948735,
   0.9008064,
   0.8763076,
   0.8741862,
   0.9788243,
   0.9405156,
   1.037782,
   1.003793,
   1.030938,
   1.061028,
   1.119577,
   0.9846428,
   0.938363,
   1.013479,
   0.8729611,
   0.8714638,
   0.8571325,
   0.9276728,
   0.9787291,
   1.000982,
   1.061337,
   0.7973586,
   0.8817482,
   0.89508};
   Double_t _felx3016[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3016[26] = {
   0.08923138,
   0.07732139,
   0.06924739,
   0.07055661,
   0.06842813,
   0.06868255,
   0.07463466,
   0.07010189,
   0.07356642,
   0.07301522,
   0.07401706,
   0.0746537,
   0.07762872,
   0.07106047,
   0.06994145,
   0.07220736,
   0.06435555,
   0.06531898,
   0.06672768,
   0.06712404,
   0.06819129,
   0.06940562,
   0.07204823,
   0.06207428,
   0.07059635,
   0.1048461};
   Double_t _fehx3016[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3016[26] = {
   0.08923138,
   0.07732139,
   0.06924739,
   0.07055661,
   0.06842813,
   0.06868255,
   0.07463466,
   0.07010189,
   0.07356642,
   0.07301522,
   0.07401706,
   0.0746537,
   0.07762872,
   0.07106047,
   0.06994145,
   0.07220736,
   0.06435555,
   0.06531898,
   0.06672768,
   0.06712404,
   0.06819129,
   0.06940562,
   0.07204823,
   0.06207428,
   0.07059635,
   0.1024341};
   grae = new TGraphAsymmErrors(26,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,286);
   Graph_Graph3016->SetMinimum(0.6890921);
   Graph_Graph3016->SetMaximum(1.243398);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_reco_nuvtxX_all",26,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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
