#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Mon Jan  9 23:11:09 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",190,172,1200,900);
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
   pad1->Range(-184.6154,-7.255186,1353.846,802.2708);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__7->SetBinContent(1,165.3629);
   hmc__7->SetBinContent(2,362.7593);
   hmc__7->SetBinContent(3,287.4799);
   hmc__7->SetBinContent(4,230.2368);
   hmc__7->SetBinContent(5,151.8942);
   hmc__7->SetBinContent(6,100.115);
   hmc__7->SetBinContent(7,59.27802);
   hmc__7->SetBinContent(8,38.00315);
   hmc__7->SetBinContent(9,27.19134);
   hmc__7->SetBinContent(10,22.28714);
   hmc__7->SetBinContent(11,18.18372);
   hmc__7->SetBinContent(12,13.33726);
   hmc__7->SetBinContent(13,118.0246);
   hmc__7->SetBinError(1,40.96424);
   hmc__7->SetBinError(2,90.04389);
   hmc__7->SetBinError(3,69.15);
   hmc__7->SetBinError(4,57.3854);
   hmc__7->SetBinError(5,47.94257);
   hmc__7->SetBinError(6,27.39506);
   hmc__7->SetBinError(7,19.18181);
   hmc__7->SetBinError(8,15.48884);
   hmc__7->SetBinError(9,14.57525);
   hmc__7->SetBinError(10,13.41467);
   hmc__7->SetBinError(11,10.99141);
   hmc__7->SetBinError(12,9.852697);
   hmc__7->SetBinError(13,32.74347);
   hmc__7->SetMinimum(-7.255186);
   hmc__7->SetMaximum(761.7945);
   hmc__7->SetEntries(1653.165);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",12,0,1200);
   hs3_stack_3->SetMinimum(-7.299257e-09);
   hs3_stack_3->SetMaximum(380.8973);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,9.028822);
   hbadmatch_stack_1->SetBinContent(2,12.68456);
   hbadmatch_stack_1->SetBinContent(3,9.313066);
   hbadmatch_stack_1->SetBinContent(4,5.43276);
   hbadmatch_stack_1->SetBinContent(5,6.358457);
   hbadmatch_stack_1->SetBinContent(6,2.994027);
   hbadmatch_stack_1->SetBinContent(7,1.321935);
   hbadmatch_stack_1->SetBinContent(8,1.390849);
   hbadmatch_stack_1->SetBinContent(9,0.5352025);
   hbadmatch_stack_1->SetBinContent(10,0.3917402);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.5773679);
   hbadmatch_stack_1->SetBinContent(13,3.803658);
   hbadmatch_stack_1->SetBinError(1,1.591432);
   hbadmatch_stack_1->SetBinError(2,1.914444);
   hbadmatch_stack_1->SetBinError(3,1.565877);
   hbadmatch_stack_1->SetBinError(4,1.252621);
   hbadmatch_stack_1->SetBinError(5,1.770995);
   hbadmatch_stack_1->SetBinError(6,0.8836194);
   hbadmatch_stack_1->SetBinError(7,0.5700331);
   hbadmatch_stack_1->SetBinError(8,0.5895354);
   hbadmatch_stack_1->SetBinError(9,0.3921167);
   hbadmatch_stack_1->SetBinError(10,0.2770047);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.4147048);
   hbadmatch_stack_1->SetBinError(13,1.060702);
   hbadmatch_stack_1->SetEntries(221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1460;
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,25.70172);
   hext_stack_2->SetBinContent(2,70.24374);
   hext_stack_2->SetBinContent(3,49.5608);
   hext_stack_2->SetBinContent(4,40.83514);
   hext_stack_2->SetBinContent(5,28.4254);
   hext_stack_2->SetBinContent(6,18.63678);
   hext_stack_2->SetBinContent(7,13.24171);
   hext_stack_2->SetBinContent(8,4.703194);
   hext_stack_2->SetBinContent(9,4.710375);
   hext_stack_2->SetBinContent(10,4.613812);
   hext_stack_2->SetBinContent(11,3.401196);
   hext_stack_2->SetBinContent(12,2.517386);
   hext_stack_2->SetBinContent(13,20.99417);
   hext_stack_2->SetBinError(1,3.462968);
   hext_stack_2->SetBinError(2,5.747761);
   hext_stack_2->SetBinError(3,4.775916);
   hext_stack_2->SetBinError(4,4.541894);
   hext_stack_2->SetBinError(5,3.736335);
   hext_stack_2->SetBinError(6,2.768572);
   hext_stack_2->SetBinError(7,2.594602);
   hext_stack_2->SetBinError(8,1.389163);
   hext_stack_2->SetBinError(9,1.314751);
   hext_stack_2->SetBinError(10,1.439057);
   hext_stack_2->SetBinError(11,1.172056);
   hext_stack_2->SetBinError(12,0.9575503);
   hext_stack_2->SetBinError(13,2.932037);
   hext_stack_2->SetEntries(672);

   ci = 1461;
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,3.968527);
   hdirt_stack_3->SetBinContent(2,4.958045);
   hdirt_stack_3->SetBinContent(3,3.57625);
   hdirt_stack_3->SetBinContent(4,3.974092);
   hdirt_stack_3->SetBinContent(5,1.488572);
   hdirt_stack_3->SetBinContent(6,2.030324);
   hdirt_stack_3->SetBinContent(7,0.4759863);
   hdirt_stack_3->SetBinContent(8,0.3173019);
   hdirt_stack_3->SetBinContent(9,0.6566868);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.4004149);
   hdirt_stack_3->SetBinContent(12,0.3381872);
   hdirt_stack_3->SetBinContent(13,1.3631);
   hdirt_stack_3->SetBinError(1,1.019604);
   hdirt_stack_3->SetBinError(2,1.164588);
   hdirt_stack_3->SetBinError(3,0.9477211);
   hdirt_stack_3->SetBinError(4,1.330198);
   hdirt_stack_3->SetBinError(5,0.6977662);
   hdirt_stack_3->SetBinError(6,0.8170428);
   hdirt_stack_3->SetBinError(7,0.2832671);
   hdirt_stack_3->SetBinError(8,0.2243877);
   hdirt_stack_3->SetBinError(9,0.3791383);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.2964588);
   hdirt_stack_3->SetBinError(12,0.3381872);
   hdirt_stack_3->SetBinError(13,0.6417027);
   hdirt_stack_3->SetEntries(101);

   ci = 1462;
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,40.18932);
   houtFV_stack_4->SetBinContent(2,67.10883);
   houtFV_stack_4->SetBinContent(3,49.25069);
   houtFV_stack_4->SetBinContent(4,39.4219);
   houtFV_stack_4->SetBinContent(5,26.78616);
   houtFV_stack_4->SetBinContent(6,19.95627);
   houtFV_stack_4->SetBinContent(7,12.61678);
   houtFV_stack_4->SetBinContent(8,11.06917);
   houtFV_stack_4->SetBinContent(9,5.250223);
   houtFV_stack_4->SetBinContent(10,6.749646);
   houtFV_stack_4->SetBinContent(11,4.381761);
   houtFV_stack_4->SetBinContent(12,3.080878);
   houtFV_stack_4->SetBinContent(13,22.82576);
   houtFV_stack_4->SetBinError(1,3.170981);
   houtFV_stack_4->SetBinError(2,4.249753);
   houtFV_stack_4->SetBinError(3,3.514485);
   houtFV_stack_4->SetBinError(4,3.271828);
   houtFV_stack_4->SetBinError(5,2.667661);
   houtFV_stack_4->SetBinError(6,2.323913);
   houtFV_stack_4->SetBinError(7,1.802059);
   houtFV_stack_4->SetBinError(8,1.70432);
   houtFV_stack_4->SetBinError(9,1.186948);
   houtFV_stack_4->SetBinError(10,1.483686);
   houtFV_stack_4->SetBinError(11,1.124803);
   houtFV_stack_4->SetBinError(12,0.8539606);
   houtFV_stack_4->SetBinError(13,2.363899);
   houtFV_stack_4->SetEntries(1382);

   ci = 1463;
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.9309576);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,2.449929);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,2.645979);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.88719);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,2.448074);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,1.940311);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.424873);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.3681078);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.6234653);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.205159);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1959359);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2152413);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.463564);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.369953);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.6496905);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.5717834);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4341236);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.5957414);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5803738);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1351178);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1703052);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2519971);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.111305);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1096748);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1131117);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3971599);
   hNCpi0inFVcoh_stack_5->SetEntries(255);

   ci = 1464;
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.284905);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.277738);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4287871);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.06439018);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1465105);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.04419126);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1009266);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.07832214);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1803131);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.04167103);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.07238043);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.05284983);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02718695);
   hNCpi0inFVqe_stack_6->SetEntries(55);

   ci = 1465;
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,17.63651);
   hNCpi0inFVres_stack_7->SetBinContent(2,45.86971);
   hNCpi0inFVres_stack_7->SetBinContent(3,45.23889);
   hNCpi0inFVres_stack_7->SetBinContent(4,38.30267);
   hNCpi0inFVres_stack_7->SetBinContent(5,23.95861);
   hNCpi0inFVres_stack_7->SetBinContent(6,15.13385);
   hNCpi0inFVres_stack_7->SetBinContent(7,7.875906);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.474247);
   hNCpi0inFVres_stack_7->SetBinContent(9,4.747236);
   hNCpi0inFVres_stack_7->SetBinContent(10,1.943971);
   hNCpi0inFVres_stack_7->SetBinContent(11,1.327774);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.469548);
   hNCpi0inFVres_stack_7->SetBinContent(13,12.24636);
   hNCpi0inFVres_stack_7->SetBinError(1,1.384812);
   hNCpi0inFVres_stack_7->SetBinError(2,2.147095);
   hNCpi0inFVres_stack_7->SetBinError(3,2.005952);
   hNCpi0inFVres_stack_7->SetBinError(4,1.840588);
   hNCpi0inFVres_stack_7->SetBinError(5,1.528698);
   hNCpi0inFVres_stack_7->SetBinError(6,1.282668);
   hNCpi0inFVres_stack_7->SetBinError(7,0.9216071);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8020016);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8177074);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3577879);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2826703);
   hNCpi0inFVres_stack_7->SetBinError(12,0.4776106);
   hNCpi0inFVres_stack_7->SetBinError(13,1.312461);
   hNCpi0inFVres_stack_7->SetEntries(5331);

   ci = 1466;
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.838156);
   hNCpi0inFVdis_stack_8->SetBinContent(2,11.17902);
   hNCpi0inFVdis_stack_8->SetBinContent(3,11.09998);
   hNCpi0inFVdis_stack_8->SetBinContent(4,10.38072);
   hNCpi0inFVdis_stack_8->SetBinContent(5,6.378483);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.933918);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.014285);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.995838);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.048107);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.5964559);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.231381);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.8954626);
   hNCpi0inFVdis_stack_8->SetBinContent(13,7.356873);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.814093);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.208667);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.300362);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.029673);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9190836);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6961589);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8376476);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6292145);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7134303);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.1987312);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5974326);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.3219718);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.307893);
   hNCpi0inFVdis_stack_8->SetEntries(1297);

   ci = 1467;
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02275844);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.01720841);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(6);

   ci = 1468;
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,31.86108);
   hCCpi0inFV_stack_10->SetBinContent(2,71.81544);
   hCCpi0inFV_stack_10->SetBinContent(3,63.5132);
   hCCpi0inFV_stack_10->SetBinContent(4,51.38884);
   hCCpi0inFV_stack_10->SetBinContent(5,34.32045);
   hCCpi0inFV_stack_10->SetBinContent(6,17.75377);
   hCCpi0inFV_stack_10->SetBinContent(7,8.88783);
   hCCpi0inFV_stack_10->SetBinContent(8,5.873331);
   hCCpi0inFV_stack_10->SetBinContent(9,5.455015);
   hCCpi0inFV_stack_10->SetBinContent(10,3.037559);
   hCCpi0inFV_stack_10->SetBinContent(11,3.269539);
   hCCpi0inFV_stack_10->SetBinContent(12,1.715495);
   hCCpi0inFV_stack_10->SetBinContent(13,20.20438);
   hCCpi0inFV_stack_10->SetBinError(1,2.729578);
   hCCpi0inFV_stack_10->SetBinError(2,4.293673);
   hCCpi0inFV_stack_10->SetBinError(3,4.030343);
   hCCpi0inFV_stack_10->SetBinError(4,3.679256);
   hCCpi0inFV_stack_10->SetBinError(5,2.946252);
   hCCpi0inFV_stack_10->SetBinError(6,2.121727);
   hCCpi0inFV_stack_10->SetBinError(7,1.494026);
   hCCpi0inFV_stack_10->SetBinError(8,1.161153);
   hCCpi0inFV_stack_10->SetBinError(9,1.233024);
   hCCpi0inFV_stack_10->SetBinError(10,0.8333549);
   hCCpi0inFV_stack_10->SetBinError(11,0.9413781);
   hCCpi0inFV_stack_10->SetBinError(12,0.6212384);
   hCCpi0inFV_stack_10->SetBinError(13,2.288325);
   hCCpi0inFV_stack_10->SetEntries(1354);

   ci = 1469;
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
   hs3->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,8.857424);
   hNCinFV_stack_11->SetBinContent(2,20.0609);
   hNCinFV_stack_11->SetBinContent(3,10.92915);
   hNCinFV_stack_11->SetBinContent(4,8.620804);
   hNCinFV_stack_11->SetBinContent(5,5.90581);
   hNCinFV_stack_11->SetBinContent(6,4.4535);
   hNCinFV_stack_11->SetBinContent(7,2.5496);
   hNCinFV_stack_11->SetBinContent(8,2.416967);
   hNCinFV_stack_11->SetBinContent(9,0.7128077);
   hNCinFV_stack_11->SetBinContent(10,0.5145313);
   hNCinFV_stack_11->SetBinContent(11,1.403167);
   hNCinFV_stack_11->SetBinContent(12,0.05405266);
   hNCinFV_stack_11->SetBinContent(13,3.732894);
   hNCinFV_stack_11->SetBinError(1,1.469469);
   hNCinFV_stack_11->SetBinError(2,2.600862);
   hNCinFV_stack_11->SetBinError(3,1.851435);
   hNCinFV_stack_11->SetBinError(4,1.46933);
   hNCinFV_stack_11->SetBinError(5,1.208806);
   hNCinFV_stack_11->SetBinError(6,1.150532);
   hNCinFV_stack_11->SetBinError(7,0.7390995);
   hNCinFV_stack_11->SetBinError(8,0.7380974);
   hNCinFV_stack_11->SetBinError(9,0.5045532);
   hNCinFV_stack_11->SetBinError(10,0.3034126);
   hNCinFV_stack_11->SetBinError(11,0.7140768);
   hNCinFV_stack_11->SetBinError(12,0.05405266);
   hNCinFV_stack_11->SetBinError(13,1.121942);
   hNCinFV_stack_11->SetEntries(310);

   ci = 1470;
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
   hs3->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,21.54344);
   hnumuCCinFV_stack_12->SetBinContent(2,55.69913);
   hnumuCCinFV_stack_12->SetBinContent(3,41.17246);
   hnumuCCinFV_stack_12->SetBinContent(4,26.78995);
   hnumuCCinFV_stack_12->SetBinContent(5,15.18457);
   hnumuCCinFV_stack_12->SetBinContent(6,12.03097);
   hnumuCCinFV_stack_12->SetBinContent(7,7.476076);
   hnumuCCinFV_stack_12->SetBinContent(8,5.394138);
   hnumuCCinFV_stack_12->SetBinContent(9,2.12646);
   hnumuCCinFV_stack_12->SetBinContent(10,3.797405);
   hnumuCCinFV_stack_12->SetBinContent(11,1.960509);
   hnumuCCinFV_stack_12->SetBinContent(12,2.473637);
   hnumuCCinFV_stack_12->SetBinContent(13,18.70871);
   hnumuCCinFV_stack_12->SetBinError(1,3.245678);
   hnumuCCinFV_stack_12->SetBinError(2,4.12364);
   hnumuCCinFV_stack_12->SetBinError(3,4.149862);
   hnumuCCinFV_stack_12->SetBinError(4,2.823613);
   hnumuCCinFV_stack_12->SetBinError(5,2.196954);
   hnumuCCinFV_stack_12->SetBinError(6,1.777692);
   hnumuCCinFV_stack_12->SetBinError(7,1.383451);
   hnumuCCinFV_stack_12->SetBinError(8,1.157894);
   hnumuCCinFV_stack_12->SetBinError(9,0.7188713);
   hnumuCCinFV_stack_12->SetBinError(10,1.47187);
   hnumuCCinFV_stack_12->SetBinError(11,0.7348327);
   hnumuCCinFV_stack_12->SetBinError(12,0.8921751);
   hnumuCCinFV_stack_12->SetBinError(13,2.480304);
   hnumuCCinFV_stack_12->SetEntries(833);

   ci = 1471;
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
   hs3->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.4992645);
   hnueCCinFV_stack_13->SetBinContent(2,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(3,0.7136385);
   hnueCCinFV_stack_13->SetBinContent(4,3.138337);
   hnueCCinFV_stack_13->SetBinContent(5,0.4931023);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(13,5.28095);
   hnueCCinFV_stack_13->SetBinError(1,0.3608779);
   hnueCCinFV_stack_13->SetBinError(2,0.2781975);
   hnueCCinFV_stack_13->SetBinError(3,0.4128137);
   hnueCCinFV_stack_13->SetBinError(4,1.664783);
   hnueCCinFV_stack_13->SetBinError(5,0.3729702);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.3401776);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.2179626);
   hnueCCinFV_stack_13->SetBinError(13,1.728047);
   hnueCCinFV_stack_13->SetEntries(36);

   ci = 1472;
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
   hs3->Add(hnueCCinFV_stack_13,"");
   hs3->Draw("hist same");
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__8->SetBinContent(1,165.3629);
   hmcerror__8->SetBinContent(2,362.7593);
   hmcerror__8->SetBinContent(3,287.4799);
   hmcerror__8->SetBinContent(4,230.2368);
   hmcerror__8->SetBinContent(5,151.8942);
   hmcerror__8->SetBinContent(6,100.115);
   hmcerror__8->SetBinContent(7,59.27802);
   hmcerror__8->SetBinContent(8,38.00315);
   hmcerror__8->SetBinContent(9,27.19134);
   hmcerror__8->SetBinContent(10,22.28714);
   hmcerror__8->SetBinContent(11,18.18372);
   hmcerror__8->SetBinContent(12,13.33726);
   hmcerror__8->SetBinContent(13,118.0246);
   hmcerror__8->SetBinError(1,40.96424);
   hmcerror__8->SetBinError(2,90.04389);
   hmcerror__8->SetBinError(3,69.15);
   hmcerror__8->SetBinError(4,57.3854);
   hmcerror__8->SetBinError(5,47.94257);
   hmcerror__8->SetBinError(6,27.39506);
   hmcerror__8->SetBinError(7,19.18181);
   hmcerror__8->SetBinError(8,15.48884);
   hmcerror__8->SetBinError(9,14.57525);
   hmcerror__8->SetBinError(10,13.41467);
   hmcerror__8->SetBinError(11,10.99141);
   hmcerror__8->SetBinError(12,9.852697);
   hmcerror__8->SetBinError(13,32.74347);
   hmcerror__8->SetEntries(1653.165);

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
   
   Double_t _fx3009[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3009[12] = {
   159,
   325,
   303,
   188,
   134,
   88,
   50,
   40,
   20,
   21,
   15,
   16};
   Double_t _felx3009[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3009[12] = {
   12.60952,
   18.02776,
   17.4069,
   13.71131,
   11.57584,
   9.5036,
   7.2025,
   6.4604,
   4.6266,
   4.7354,
   4.0385,
   4.1628};
   Double_t _fehx3009[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3009[12] = {
   12.60952,
   18.02776,
   17.4069,
   13.71131,
   11.57584,
   9.3021,
   6.9985,
   6.2549,
   4.4133,
   4.5229,
   3.8197,
   3.9454};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1320);
   Graph_Graph3009->SetMinimum(9.86535);
   Graph_Graph3009->SetMaximum(376.2344);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.92#pm0.18","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1359.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 50.2","F");

   ci = 1460;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 266.6","F");

   ci = 1461;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 22.4","F");

   ci = 1462;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 285.9","F");

   ci = 1463;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.3","F");

   ci = 1464;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.8","F");

   ci = 1465;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  208.0","F");

   ci = 1466;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  59.6","F");

   ci = 1467;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1468;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 298.9","F");

   ci = 1469;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 66.5","F");

   ci = 1470;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 195.6","F");

   ci = 1471;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.2","F");

   ci = 1472;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3010[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3010[12] = {
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
   Double_t _felx3010[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3010[12] = {
   0.2477233,
   0.2482194,
   0.2405385,
   0.2492451,
   0.3156314,
   0.2736359,
   0.3235907,
   0.4075671,
   0.5360256,
   0.601902,
   0.6044644,
   0.738735};
   Double_t _fehx3010[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3010[12] = {
   0.2477233,
   0.2482194,
   0.2405385,
   0.2492451,
   0.3156314,
   0.2736359,
   0.3235907,
   0.4075671,
   0.5360256,
   0.601902,
   0.6044644,
   0.738735};
   grae = new TGraphAsymmErrors(12,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1320);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
   Graph_Graph3010->GetXaxis()->SetNdivisions(509);
   Graph_Graph3010->GetXaxis()->SetLabelFont(132);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3010->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3010->GetXaxis()->SetTitleFont(132);
   Graph_Graph3010->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3011[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3011[12] = {
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
   Double_t _felx3011[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3011[12] = {
   0.1822157,
   0.1972534,
   0.2120242,
   0.216657,
   0.2029571,
   0.1918814,
   0.1867719,
   0.1966417,
   0.2129037,
   0.2082237,
   0.2034821,
   0.2201383};
   Double_t _fehx3011[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3011[12] = {
   0.1822157,
   0.1972534,
   0.2120242,
   0.216657,
   0.2029571,
   0.1918814,
   0.1867719,
   0.1966417,
   0.2129037,
   0.2082237,
   0.2034821,
   0.2201383};
   grae = new TGraphAsymmErrors(12,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1320);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3012[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3012[12] = {
   0.9615217,
   0.8959109,
   1.053987,
   0.8165507,
   0.882193,
   0.8789889,
   0.843483,
   1.052544,
   0.7355284,
   0.9422476,
   0.8249136,
   1.199647};
   Double_t _felx3012[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3012[12] = {
   0.07625363,
   0.04969619,
   0.06054995,
   0.05955308,
   0.07620987,
   0.09492681,
   0.1215037,
   0.1699964,
   0.1701498,
   0.2124723,
   0.2220943,
   0.3121182};
   Double_t _fehx3012[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3012[12] = {
   0.07625363,
   0.04969619,
   0.06054995,
   0.05955308,
   0.07620987,
   0.09291412,
   0.1180623,
   0.164589,
   0.1623054,
   0.2029377,
   0.2100615,
   0.295818};
   grae = new TGraphAsymmErrors(12,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1320);
   Graph_Graph3012->SetMinimum(0.4723699);
   Graph_Graph3012->SetMaximum(1.588474);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_pi0_momentum_all",12,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
