#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Thu Mar  9 21:31:45 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
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
   pad1->Range(-184.6154,-17.42,1353.846,1926.285);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__1->SetBinContent(1,463.0005);
   hmc__1->SetBinContent(2,842.4261);
   hmc__1->SetBinContent(3,733.691);
   hmc__1->SetBinContent(4,508.4622);
   hmc__1->SetBinContent(5,339.8324);
   hmc__1->SetBinContent(6,213.8157);
   hmc__1->SetBinContent(7,127.154);
   hmc__1->SetBinContent(8,75.24523);
   hmc__1->SetBinContent(9,62.68201);
   hmc__1->SetBinContent(10,40.15513);
   hmc__1->SetBinContent(11,35.71924);
   hmc__1->SetBinContent(12,28.2751);
   hmc__1->SetBinContent(13,212.5468);
   hmc__1->SetBinError(1,103.0118);
   hmc__1->SetBinError(2,189.7321);
   hmc__1->SetBinError(3,174.4956);
   hmc__1->SetBinError(4,139.1755);
   hmc__1->SetBinError(5,97.38505);
   hmc__1->SetBinError(6,58.8443);
   hmc__1->SetBinError(7,38.40808);
   hmc__1->SetBinError(8,22.94289);
   hmc__1->SetBinError(9,23.97612);
   hmc__1->SetBinError(10,14.61845);
   hmc__1->SetBinError(11,16.08105);
   hmc__1->SetBinError(12,12.21043);
   hmc__1->SetBinError(13,59.3692);
   hmc__1->SetMinimum(-17.42);
   hmc__1->SetMaximum(1829.1);
   hmc__1->SetEntries(3645.257);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",12,0,1200);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(884.5473);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,13.36783);
   hbadmatch_stack_1->SetBinContent(2,23.16542);
   hbadmatch_stack_1->SetBinContent(3,13.65003);
   hbadmatch_stack_1->SetBinContent(4,9.78607);
   hbadmatch_stack_1->SetBinContent(5,6.752007);
   hbadmatch_stack_1->SetBinContent(6,3.25049);
   hbadmatch_stack_1->SetBinContent(7,1.527);
   hbadmatch_stack_1->SetBinContent(8,1.67671);
   hbadmatch_stack_1->SetBinContent(9,1.687835);
   hbadmatch_stack_1->SetBinContent(10,0.9286332);
   hbadmatch_stack_1->SetBinContent(11,1.295675);
   hbadmatch_stack_1->SetBinContent(12,1.547493);
   hbadmatch_stack_1->SetBinContent(13,4.604512);
   hbadmatch_stack_1->SetBinError(1,2.043751);
   hbadmatch_stack_1->SetBinError(2,3.469011);
   hbadmatch_stack_1->SetBinError(3,1.94395);
   hbadmatch_stack_1->SetBinError(4,2.206027);
   hbadmatch_stack_1->SetBinError(5,1.211377);
   hbadmatch_stack_1->SetBinError(6,0.9689793);
   hbadmatch_stack_1->SetBinError(7,0.7131133);
   hbadmatch_stack_1->SetBinError(8,0.7010152);
   hbadmatch_stack_1->SetBinError(9,0.6596062);
   hbadmatch_stack_1->SetBinError(10,0.48078);
   hbadmatch_stack_1->SetBinError(11,0.6673592);
   hbadmatch_stack_1->SetBinError(12,0.662739);
   hbadmatch_stack_1->SetBinError(13,1.17972);
   hbadmatch_stack_1->SetEntries(316);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,45.31334);
   hext_stack_2->SetBinContent(2,74.82574);
   hext_stack_2->SetBinContent(3,48.97392);
   hext_stack_2->SetBinContent(4,23.11214);
   hext_stack_2->SetBinContent(5,26.33899);
   hext_stack_2->SetBinContent(6,16.25785);
   hext_stack_2->SetBinContent(7,12.41257);
   hext_stack_2->SetBinContent(8,4.773807);
   hext_stack_2->SetBinContent(9,7.199039);
   hext_stack_2->SetBinContent(10,2.435184);
   hext_stack_2->SetBinContent(11,3.636211);
   hext_stack_2->SetBinContent(12,2.103607);
   hext_stack_2->SetBinContent(13,16.01566);
   hext_stack_2->SetBinError(1,4.521536);
   hext_stack_2->SetBinError(2,5.565817);
   hext_stack_2->SetBinError(3,4.449046);
   hext_stack_2->SetBinError(4,3.024437);
   hext_stack_2->SetBinError(5,3.307307);
   hext_stack_2->SetBinError(6,2.708644);
   hext_stack_2->SetBinError(7,2.236484);
   hext_stack_2->SetBinError(8,1.433855);
   hext_stack_2->SetBinError(9,1.857493);
   hext_stack_2->SetBinError(10,0.9256422);
   hext_stack_2->SetBinError(11,1.272817);
   hext_stack_2->SetBinError(12,0.9761052);
   hext_stack_2->SetBinError(13,2.700297);
   hext_stack_2->SetEntries(711);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,8.746099);
   hdirt_stack_3->SetBinContent(2,10.49824);
   hdirt_stack_3->SetBinContent(3,5.160548);
   hdirt_stack_3->SetBinContent(4,2.616144);
   hdirt_stack_3->SetBinContent(5,3.121633);
   hdirt_stack_3->SetBinContent(6,2.365996);
   hdirt_stack_3->SetBinContent(7,2.573912);
   hdirt_stack_3->SetBinContent(8,1.70538);
   hdirt_stack_3->SetBinContent(9,0.7819759);
   hdirt_stack_3->SetBinContent(10,0.6392631);
   hdirt_stack_3->SetBinContent(11,0.4713943);
   hdirt_stack_3->SetBinContent(12,0.9115412);
   hdirt_stack_3->SetBinContent(13,2.50895);
   hdirt_stack_3->SetBinError(1,1.519986);
   hdirt_stack_3->SetBinError(2,1.888198);
   hdirt_stack_3->SetBinError(3,1.111978);
   hdirt_stack_3->SetBinError(4,0.7665774);
   hdirt_stack_3->SetBinError(5,0.9114991);
   hdirt_stack_3->SetBinError(6,0.813463);
   hdirt_stack_3->SetBinError(7,0.8462181);
   hdirt_stack_3->SetBinError(8,1.173634);
   hdirt_stack_3->SetBinError(9,0.4844357);
   hdirt_stack_3->SetBinError(10,0.4709666);
   hdirt_stack_3->SetBinError(11,0.3341719);
   hdirt_stack_3->SetBinError(12,0.5597697);
   hdirt_stack_3->SetBinError(13,0.8841094);
   hdirt_stack_3->SetEntries(173);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,65.82663);
   houtFV_stack_4->SetBinContent(2,77.99538);
   houtFV_stack_4->SetBinContent(3,58.22307);
   houtFV_stack_4->SetBinContent(4,39.28911);
   houtFV_stack_4->SetBinContent(5,22.80878);
   houtFV_stack_4->SetBinContent(6,14.84383);
   houtFV_stack_4->SetBinContent(7,13.16009);
   houtFV_stack_4->SetBinContent(8,4.301299);
   houtFV_stack_4->SetBinContent(9,5.978224);
   houtFV_stack_4->SetBinContent(10,4.931781);
   houtFV_stack_4->SetBinContent(11,4.05133);
   houtFV_stack_4->SetBinContent(12,5.942985);
   houtFV_stack_4->SetBinContent(13,23.83093);
   houtFV_stack_4->SetBinError(1,4.051501);
   houtFV_stack_4->SetBinError(2,4.392982);
   houtFV_stack_4->SetBinError(3,3.776334);
   houtFV_stack_4->SetBinError(4,3.14065);
   houtFV_stack_4->SetBinError(5,2.354478);
   houtFV_stack_4->SetBinError(6,1.953359);
   houtFV_stack_4->SetBinError(7,1.80633);
   houtFV_stack_4->SetBinError(8,1.019492);
   houtFV_stack_4->SetBinError(9,1.272635);
   houtFV_stack_4->SetBinError(10,1.144752);
   houtFV_stack_4->SetBinError(11,1.01931);
   houtFV_stack_4->SetBinError(12,1.267338);
   houtFV_stack_4->SetBinError(13,2.474387);
   houtFV_stack_4->SetEntries(1472);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,6.680086);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,11.3492);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,16.99714);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,16.92773);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,12.89583);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,6.667132);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,3.541483);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,2.887166);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.14274);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,1.01769);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.8358399);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.9753399);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,8.520998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.856012);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.128122);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.311608);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.362407);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.208868);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8438769);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.562693);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.5861822);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3027526);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.3378888);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2882649);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2949384);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.9873761);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.687458);
   hNCpi0inFVqe_stack_6->SetBinContent(2,3.180448);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.067352);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.45064);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.6833858);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7808721);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.432286);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.334968);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1952999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.4069516);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.5873981);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5797839);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3901881);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2420254);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3174996);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2270916);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2051824);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.07381642);
   hNCpi0inFVqe_stack_6->SetEntries(229);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,157.5362);
   hNCpi0inFVres_stack_7->SetBinContent(2,346.272);
   hNCpi0inFVres_stack_7->SetBinContent(3,336.4601);
   hNCpi0inFVres_stack_7->SetBinContent(4,242.8508);
   hNCpi0inFVres_stack_7->SetBinContent(5,146.7462);
   hNCpi0inFVres_stack_7->SetBinContent(6,85.1792);
   hNCpi0inFVres_stack_7->SetBinContent(7,47.67764);
   hNCpi0inFVres_stack_7->SetBinContent(8,26.9995);
   hNCpi0inFVres_stack_7->SetBinContent(9,21.94675);
   hNCpi0inFVres_stack_7->SetBinContent(10,14.87291);
   hNCpi0inFVres_stack_7->SetBinContent(11,12.9224);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.250535);
   hNCpi0inFVres_stack_7->SetBinContent(13,73.19879);
   hNCpi0inFVres_stack_7->SetBinError(1,4.107476);
   hNCpi0inFVres_stack_7->SetBinError(2,6.081817);
   hNCpi0inFVres_stack_7->SetBinError(3,6.020809);
   hNCpi0inFVres_stack_7->SetBinError(4,5.142134);
   hNCpi0inFVres_stack_7->SetBinError(5,3.972284);
   hNCpi0inFVres_stack_7->SetBinError(6,2.994883);
   hNCpi0inFVres_stack_7->SetBinError(7,2.238839);
   hNCpi0inFVres_stack_7->SetBinError(8,1.681381);
   hNCpi0inFVres_stack_7->SetBinError(9,1.507904);
   hNCpi0inFVres_stack_7->SetBinError(10,1.21894);
   hNCpi0inFVres_stack_7->SetBinError(11,1.159568);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8189482);
   hNCpi0inFVres_stack_7->SetBinError(13,2.855304);
   hNCpi0inFVres_stack_7->SetEntries(27989);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,33.58807);
   hNCpi0inFVdis_stack_8->SetBinContent(2,68.07693);
   hNCpi0inFVdis_stack_8->SetBinContent(3,51.6647);
   hNCpi0inFVdis_stack_8->SetBinContent(4,39.68341);
   hNCpi0inFVdis_stack_8->SetBinContent(5,29.7862);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.82603);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.59341);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.444844);
   hNCpi0inFVdis_stack_8->SetBinContent(9,5.673022);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.73712);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.45388);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.536916);
   hNCpi0inFVdis_stack_8->SetBinContent(13,17.44238);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.860934);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.673041);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.368812);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.993794);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.805935);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.557362);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.151343);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.8767145);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.783694);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6225674);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.4899121);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.505808);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.338848);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.1994106);
   hNCpi0inFVmec_stack_9->SetEntries(14);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,60.33768);
   hCCpi0inFV_stack_10->SetBinContent(2,107.6577);
   hCCpi0inFV_stack_10->SetBinContent(3,106.2498);
   hCCpi0inFV_stack_10->SetBinContent(4,72.70108);
   hCCpi0inFV_stack_10->SetBinContent(5,43.29501);
   hCCpi0inFV_stack_10->SetBinContent(6,33.76373);
   hCCpi0inFV_stack_10->SetBinContent(7,18.75644);
   hCCpi0inFV_stack_10->SetBinContent(8,10.67667);
   hCCpi0inFV_stack_10->SetBinContent(9,8.260727);
   hCCpi0inFV_stack_10->SetBinContent(10,4.749672);
   hCCpi0inFV_stack_10->SetBinContent(11,4.435398);
   hCCpi0inFV_stack_10->SetBinContent(12,3.801252);
   hCCpi0inFV_stack_10->SetBinContent(13,27.39388);
   hCCpi0inFV_stack_10->SetBinError(1,3.865886);
   hCCpi0inFV_stack_10->SetBinError(2,5.184498);
   hCCpi0inFV_stack_10->SetBinError(3,5.1695);
   hCCpi0inFV_stack_10->SetBinError(4,4.277643);
   hCCpi0inFV_stack_10->SetBinError(5,3.256871);
   hCCpi0inFV_stack_10->SetBinError(6,2.938391);
   hCCpi0inFV_stack_10->SetBinError(7,2.19209);
   hCCpi0inFV_stack_10->SetBinError(8,1.628088);
   hCCpi0inFV_stack_10->SetBinError(9,1.400837);
   hCCpi0inFV_stack_10->SetBinError(10,1.038794);
   hCCpi0inFV_stack_10->SetBinError(11,1.083402);
   hCCpi0inFV_stack_10->SetBinError(12,0.9490394);
   hCCpi0inFV_stack_10->SetBinError(13,2.601771);
   hCCpi0inFV_stack_10->SetEntries(2161);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,38.39964);
   hNCinFV_stack_11->SetBinContent(2,62.83443);
   hNCinFV_stack_11->SetBinContent(3,49.62658);
   hNCinFV_stack_11->SetBinContent(4,27.80852);
   hNCinFV_stack_11->SetBinContent(5,24.37306);
   hNCinFV_stack_11->SetBinContent(6,16.41049);
   hNCinFV_stack_11->SetBinContent(7,7.484009);
   hNCinFV_stack_11->SetBinContent(8,7.23235);
   hNCinFV_stack_11->SetBinContent(9,5.02199);
   hNCinFV_stack_11->SetBinContent(10,3.857995);
   hNCinFV_stack_11->SetBinContent(11,3.074514);
   hNCinFV_stack_11->SetBinContent(12,1.17353);
   hNCinFV_stack_11->SetBinContent(13,14.88832);
   hNCinFV_stack_11->SetBinError(1,3.008519);
   hNCinFV_stack_11->SetBinError(2,3.976547);
   hNCinFV_stack_11->SetBinError(3,3.559776);
   hNCinFV_stack_11->SetBinError(4,2.60298);
   hNCinFV_stack_11->SetBinError(5,2.490034);
   hNCinFV_stack_11->SetBinError(6,2.048898);
   hNCinFV_stack_11->SetBinError(7,1.345931);
   hNCinFV_stack_11->SetBinError(8,1.345547);
   hNCinFV_stack_11->SetBinError(9,1.194072);
   hNCinFV_stack_11->SetBinError(10,1.00081);
   hNCinFV_stack_11->SetBinError(11,0.920955);
   hNCinFV_stack_11->SetBinError(12,0.4790957);
   hNCinFV_stack_11->SetBinError(13,1.961994);
   hNCinFV_stack_11->SetEntries(1123);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,26.33374);
   hnumuCCinFV_stack_12->SetBinContent(2,53.53924);
   hnumuCCinFV_stack_12->SetBinContent(3,40.2447);
   hnumuCCinFV_stack_12->SetBinContent(4,29.44326);
   hnumuCCinFV_stack_12->SetBinContent(5,21.23754);
   hnumuCCinFV_stack_12->SetBinContent(6,11.49233);
   hnumuCCinFV_stack_12->SetBinContent(7,5.89872);
   hnumuCCinFV_stack_12->SetBinContent(8,5.419647);
   hnumuCCinFV_stack_12->SetBinContent(9,4.454501);
   hnumuCCinFV_stack_12->SetBinContent(10,2.303062);
   hnumuCCinFV_stack_12->SetBinContent(11,1.470498);
   hnumuCCinFV_stack_12->SetBinContent(12,1.836879);
   hnumuCCinFV_stack_12->SetBinContent(13,14.36647);
   hnumuCCinFV_stack_12->SetBinError(1,2.654409);
   hnumuCCinFV_stack_12->SetBinError(2,4.267523);
   hnumuCCinFV_stack_12->SetBinError(3,3.818617);
   hnumuCCinFV_stack_12->SetBinError(4,2.938404);
   hnumuCCinFV_stack_12->SetBinError(5,2.60844);
   hnumuCCinFV_stack_12->SetBinError(6,1.786306);
   hnumuCCinFV_stack_12->SetBinError(7,1.323469);
   hnumuCCinFV_stack_12->SetBinError(8,1.249842);
   hnumuCCinFV_stack_12->SetBinError(9,1.67484);
   hnumuCCinFV_stack_12->SetBinError(10,0.7076045);
   hnumuCCinFV_stack_12->SetBinError(11,0.6209604);
   hnumuCCinFV_stack_12->SetBinError(12,0.7838507);
   hnumuCCinFV_stack_12->SetBinError(13,2.32267);
   hnumuCCinFV_stack_12->SetEntries(859);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,5.002749);
   hnueCCinFV_stack_13->SetBinContent(2,2.947742);
   hnueCCinFV_stack_13->SetBinContent(3,3.345182);
   hnueCCinFV_stack_13->SetBinContent(4,2.737504);
   hnueCCinFV_stack_13->SetBinContent(5,1.765773);
   hnueCCinFV_stack_13->SetBinContent(6,0.9777503);
   hnueCCinFV_stack_13->SetBinContent(7,1.096408);
   hnueCCinFV_stack_13->SetBinContent(8,1.541611);
   hnueCCinFV_stack_13->SetBinContent(9,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(10,0.6539136);
   hnueCCinFV_stack_13->SetBinContent(11,1.044205);
   hnueCCinFV_stack_13->SetBinContent(12,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(13,9.580633);
   hnueCCinFV_stack_13->SetBinError(1,1.54878);
   hnueCCinFV_stack_13->SetBinError(2,0.8906293);
   hnueCCinFV_stack_13->SetBinError(3,1.066371);
   hnueCCinFV_stack_13->SetBinError(4,1.416338);
   hnueCCinFV_stack_13->SetBinError(5,0.7090337);
   hnueCCinFV_stack_13->SetBinError(6,0.5027103);
   hnueCCinFV_stack_13->SetBinError(7,0.4944052);
   hnueCCinFV_stack_13->SetBinError(8,0.6472859);
   hnueCCinFV_stack_13->SetBinError(9,0.3921167);
   hnueCCinFV_stack_13->SetBinError(10,0.3816983);
   hnueCCinFV_stack_13->SetBinError(11,0.6283572);
   hnueCCinFV_stack_13->SetBinError(12,0.1950249);
   hnueCCinFV_stack_13->SetBinError(13,2.340749);
   hnueCCinFV_stack_13->SetEntries(111);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__2->SetBinContent(1,463.0005);
   hmcerror__2->SetBinContent(2,842.4261);
   hmcerror__2->SetBinContent(3,733.691);
   hmcerror__2->SetBinContent(4,508.4622);
   hmcerror__2->SetBinContent(5,339.8324);
   hmcerror__2->SetBinContent(6,213.8157);
   hmcerror__2->SetBinContent(7,127.154);
   hmcerror__2->SetBinContent(8,75.24523);
   hmcerror__2->SetBinContent(9,62.68201);
   hmcerror__2->SetBinContent(10,40.15513);
   hmcerror__2->SetBinContent(11,35.71924);
   hmcerror__2->SetBinContent(12,28.2751);
   hmcerror__2->SetBinContent(13,212.5468);
   hmcerror__2->SetBinError(1,103.0118);
   hmcerror__2->SetBinError(2,189.7321);
   hmcerror__2->SetBinError(3,174.4956);
   hmcerror__2->SetBinError(4,139.1755);
   hmcerror__2->SetBinError(5,97.38505);
   hmcerror__2->SetBinError(6,58.8443);
   hmcerror__2->SetBinError(7,38.40808);
   hmcerror__2->SetBinError(8,22.94289);
   hmcerror__2->SetBinError(9,23.97612);
   hmcerror__2->SetBinError(10,14.61845);
   hmcerror__2->SetBinError(11,16.08105);
   hmcerror__2->SetBinError(12,12.21043);
   hmcerror__2->SetBinError(13,59.3692);
   hmcerror__2->SetEntries(3645.257);

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
   
   Double_t _fx3001[12] = {
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
   Double_t _fy3001[12] = {
   478,
   871,
   718,
   451,
   268,
   197,
   106,
   86,
   58,
   42,
   17,
   21};
   Double_t _felx3001[12] = {
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
   Double_t _fely3001[12] = {
   21.86321,
   29.51271,
   26.79552,
   21.23676,
   16.37071,
   14.03567,
   10.29563,
   9.3967,
   7.7446,
   6.6155,
   4.2835,
   4.7354};
   Double_t _fehx3001[12] = {
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
   Double_t _fehy3001[12] = {
   21.86321,
   29.51271,
   26.79552,
   21.23676,
   16.37071,
   14.03567,
   10.29563,
   9.1951,
   7.5415,
   6.4104,
   4.0673,
   4.5229};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1320);
   Graph_Graph3001->SetMinimum(11.44485);
   Graph_Graph3001->SetMaximum(989.2923);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.3/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3313.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 78.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 267.4","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 39.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 317.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  81.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.7","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1446.7","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  279.1","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.6","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 474.7","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 247.3","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 203.7","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 21.8","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[12] = {
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
   Double_t _fy3002[12] = {
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
   Double_t _felx3002[12] = {
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
   Double_t _fely3002[12] = {
   0.2224875,
   0.2252211,
   0.2378326,
   0.2737186,
   0.2865679,
   0.2752104,
   0.3020596,
   0.3049082,
   0.382504,
   0.3640494,
   0.4502069,
   0.4318439};
   Double_t _fehx3002[12] = {
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
   Double_t _fehy3002[12] = {
   0.2224875,
   0.2252211,
   0.2378326,
   0.2737186,
   0.2865679,
   0.2752104,
   0.3020596,
   0.3049082,
   0.382504,
   0.3640494,
   0.4502069,
   0.4318439};
   grae = new TGraphAsymmErrors(12,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1320);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3003[12] = {
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
   Double_t _fy3003[12] = {
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
   Double_t _felx3003[12] = {
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
   Double_t _fely3003[12] = {
   0.1963182,
   0.214841,
   0.2255866,
   0.2531064,
   0.2604038,
   0.2472836,
   0.2288039,
   0.2304548,
   0.222135,
   0.2323892,
   0.2159396,
   0.2294743};
   Double_t _fehx3003[12] = {
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
   Double_t _fehy3003[12] = {
   0.1963182,
   0.214841,
   0.2255866,
   0.2531064,
   0.2604038,
   0.2472836,
   0.2288039,
   0.2304548,
   0.222135,
   0.2323892,
   0.2159396,
   0.2294743};
   grae = new TGraphAsymmErrors(12,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1320);
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
   
   Double_t _fx3004[12] = {
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
   Double_t _fy3004[12] = {
   1.032396,
   1.033919,
   0.9786136,
   0.8869882,
   0.7886241,
   0.9213542,
   0.833635,
   1.14293,
   0.9253053,
   1.045944,
   0.475934,
   0.7427028};
   Double_t _felx3004[12] = {
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
   Double_t _fely3004[12] = {
   0.04722071,
   0.03503299,
   0.03652154,
   0.04176664,
   0.04817289,
   0.06564377,
   0.08096979,
   0.124881,
   0.1235538,
   0.1647486,
   0.1199214,
   0.167476};
   Double_t _fehx3004[12] = {
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
   Double_t _fehy3004[12] = {
   0.04722071,
   0.03503299,
   0.03652154,
   0.04176664,
   0.04817289,
   0.06564377,
   0.08096979,
   0.1222018,
   0.1203136,
   0.1596409,
   0.1138686,
   0.1599605};
   grae = new TGraphAsymmErrors(12,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1320);
   Graph_Graph3004->SetMinimum(0.2651007);
   Graph_Graph3004->SetMaximum(1.356043);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_FC_0p_bnb_12_pi0_momentum_all",12,0,1200);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
