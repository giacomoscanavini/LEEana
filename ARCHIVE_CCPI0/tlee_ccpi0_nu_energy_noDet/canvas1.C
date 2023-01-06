#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed Sep 28 17:41:24 2022) by ROOT version 6.26/00
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
   pad1->Range(-384.6154,-17.53342,2820.513,1938.827);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hmc__1->SetBinContent(3,1.77103);
   hmc__1->SetBinContent(4,29.25516);
   hmc__1->SetBinContent(5,116.1738);
   hmc__1->SetBinContent(6,305.1271);
   hmc__1->SetBinContent(7,549.6656);
   hmc__1->SetBinContent(8,766.0915);
   hmc__1->SetBinContent(9,876.6711);
   hmc__1->SetBinContent(10,873.7513);
   hmc__1->SetBinContent(11,803.235);
   hmc__1->SetBinContent(12,696.97);
   hmc__1->SetBinContent(13,573.8578);
   hmc__1->SetBinContent(14,457.8208);
   hmc__1->SetBinContent(15,342.7208);
   hmc__1->SetBinContent(16,259.3461);
   hmc__1->SetBinContent(17,193.8623);
   hmc__1->SetBinContent(18,154.7048);
   hmc__1->SetBinContent(19,122.3283);
   hmc__1->SetBinContent(20,80.29698);
   hmc__1->SetBinContent(21,66.53139);
   hmc__1->SetBinContent(22,49.0086);
   hmc__1->SetBinContent(23,44.83482);
   hmc__1->SetBinContent(24,33.50434);
   hmc__1->SetBinContent(25,26.68422);
   hmc__1->SetBinContent(26,103.2914);
   hmc__1->SetBinError(1,0.3895343);
   hmc__1->SetBinError(2,0.3895343);
   hmc__1->SetBinError(3,0.9820913);
   hmc__1->SetBinError(4,6.204267);
   hmc__1->SetBinError(5,23.51952);
   hmc__1->SetBinError(6,69.99689);
   hmc__1->SetBinError(7,130.0053);
   hmc__1->SetBinError(8,177.269);
   hmc__1->SetBinError(9,206.6211);
   hmc__1->SetBinError(10,214.4305);
   hmc__1->SetBinError(11,197.1099);
   hmc__1->SetBinError(12,166.6663);
   hmc__1->SetBinError(13,137.8168);
   hmc__1->SetBinError(14,106.9068);
   hmc__1->SetBinError(15,82.00287);
   hmc__1->SetBinError(16,63.64888);
   hmc__1->SetBinError(17,46.17274);
   hmc__1->SetBinError(18,35.33845);
   hmc__1->SetBinError(19,28.62548);
   hmc__1->SetBinError(20,18.46827);
   hmc__1->SetBinError(21,14.66259);
   hmc__1->SetBinError(22,9.631595);
   hmc__1->SetBinError(23,9.042956);
   hmc__1->SetBinError(24,7.858199);
   hmc__1->SetBinError(25,5.504434);
   hmc__1->SetBinError(26,17.00906);
   hmc__1->SetMinimum(-17.53342);
   hmc__1->SetMaximum(1841.009);
   hmc__1->SetEntries(7468.322);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",25,0,2500);
   hs1_stack_1->SetMinimum(-1.150846e-08);
   hs1_stack_1->SetMaximum(920.5046);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hbadmatch_stack_1->SetBinContent(4,0.5915521);
   hbadmatch_stack_1->SetBinContent(5,1.74619);
   hbadmatch_stack_1->SetBinContent(6,1.203968);
   hbadmatch_stack_1->SetBinContent(7,2.126575);
   hbadmatch_stack_1->SetBinContent(8,3.179688);
   hbadmatch_stack_1->SetBinContent(9,2.515134);
   hbadmatch_stack_1->SetBinContent(10,3.134362);
   hbadmatch_stack_1->SetBinContent(11,3.930828);
   hbadmatch_stack_1->SetBinContent(12,2.233296);
   hbadmatch_stack_1->SetBinContent(13,2.25613);
   hbadmatch_stack_1->SetBinContent(14,1.574458);
   hbadmatch_stack_1->SetBinContent(15,3.01489);
   hbadmatch_stack_1->SetBinContent(16,2.061711);
   hbadmatch_stack_1->SetBinContent(17,2.116629);
   hbadmatch_stack_1->SetBinContent(18,0.9785053);
   hbadmatch_stack_1->SetBinContent(19,1.557426);
   hbadmatch_stack_1->SetBinContent(20,0.536893);
   hbadmatch_stack_1->SetBinContent(21,0.1950248);
   hbadmatch_stack_1->SetBinContent(22,0.3401776);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(26,0.3934307);
   hbadmatch_stack_1->SetBinError(4,0.4411269);
   hbadmatch_stack_1->SetBinError(5,0.6983969);
   hbadmatch_stack_1->SetBinError(6,0.5507458);
   hbadmatch_stack_1->SetBinError(7,0.7162618);
   hbadmatch_stack_1->SetBinError(8,0.9565549);
   hbadmatch_stack_1->SetBinError(9,0.7390164);
   hbadmatch_stack_1->SetBinError(10,0.8582018);
   hbadmatch_stack_1->SetBinError(11,1.05708);
   hbadmatch_stack_1->SetBinError(12,0.7353493);
   hbadmatch_stack_1->SetBinError(13,0.7874195);
   hbadmatch_stack_1->SetBinError(14,0.6301921);
   hbadmatch_stack_1->SetBinError(15,1.028584);
   hbadmatch_stack_1->SetBinError(16,0.7645463);
   hbadmatch_stack_1->SetBinError(17,0.8512283);
   hbadmatch_stack_1->SetBinError(18,0.4376048);
   hbadmatch_stack_1->SetBinError(19,0.7082233);
   hbadmatch_stack_1->SetBinError(20,0.3929602);
   hbadmatch_stack_1->SetBinError(21,0.1950249);
   hbadmatch_stack_1->SetBinError(22,0.3401776);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(26,0.2781975);
   hbadmatch_stack_1->SetEntries(150);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hext_stack_2->SetBinContent(3,0.6416141);
   hext_stack_2->SetBinContent(4,2.973055);
   hext_stack_2->SetBinContent(5,2.6702);
   hext_stack_2->SetBinContent(6,3.737183);
   hext_stack_2->SetBinContent(7,5.269787);
   hext_stack_2->SetBinContent(8,22.21114);
   hext_stack_2->SetBinContent(9,22.7562);
   hext_stack_2->SetBinContent(10,14.49023);
   hext_stack_2->SetBinContent(11,8.880049);
   hext_stack_2->SetBinContent(12,9.671704);
   hext_stack_2->SetBinContent(13,8.973839);
   hext_stack_2->SetBinContent(14,8.877276);
   hext_stack_2->SetBinContent(15,3.819384);
   hext_stack_2->SetBinContent(16,1.779209);
   hext_stack_2->SetBinContent(17,2.834603);
   hext_stack_2->SetBinContent(18,7.079297);
   hext_stack_2->SetBinContent(19,4.670063);
   hext_stack_2->SetBinContent(20,0.7309963);
   hext_stack_2->SetBinContent(21,0.7309963);
   hext_stack_2->SetBinContent(22,0.3243973);
   hext_stack_2->SetBinContent(23,3.856865);
   hext_stack_2->SetBinContent(24,0.3243973);
   hext_stack_2->SetBinContent(26,7.161499);
   hext_stack_2->SetBinError(3,0.6416141);
   hext_stack_2->SetBinError(4,1.346105);
   hext_stack_2->SetBinError(5,1.050314);
   hext_stack_2->SetBinError(6,1.188642);
   hext_stack_2->SetBinError(7,1.442273);
   hext_stack_2->SetBinError(8,3.280174);
   hext_stack_2->SetBinError(9,3.393159);
   hext_stack_2->SetBinError(10,2.534388);
   hext_stack_2->SetBinError(11,2.041738);
   hext_stack_2->SetBinError(12,2.25897);
   hext_stack_2->SetBinError(13,2.040271);
   hext_stack_2->SetBinError(14,2.122503);
   hext_stack_2->SetBinError(15,1.213655);
   hext_stack_2->SetBinError(16,0.9206235);
   hext_stack_2->SetBinError(17,1.106046);
   hext_stack_2->SetBinError(18,1.981099);
   hext_stack_2->SetBinError(19,1.612283);
   hext_stack_2->SetBinError(20,0.5201503);
   hext_stack_2->SetBinError(21,0.5201503);
   hext_stack_2->SetBinError(22,0.3243973);
   hext_stack_2->SetBinError(23,1.506257);
   hext_stack_2->SetBinError(24,0.3243973);
   hext_stack_2->SetBinError(26,1.996207);
   hext_stack_2->SetEntries(323);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hdirt_stack_3->SetBinContent(3,0.1661453);
   hdirt_stack_3->SetBinContent(5,0.1380715);
   hdirt_stack_3->SetBinContent(6,0.4337134);
   hdirt_stack_3->SetBinContent(7,1.132946);
   hdirt_stack_3->SetBinContent(8,0.5875239);
   hdirt_stack_3->SetBinContent(9,0.9613423);
   hdirt_stack_3->SetBinContent(11,0.4045523);
   hdirt_stack_3->SetBinContent(12,0.2665913);
   hdirt_stack_3->SetBinContent(13,0.2926592);
   hdirt_stack_3->SetBinContent(14,0.6951543);
   hdirt_stack_3->SetBinContent(15,0.5479051);
   hdirt_stack_3->SetBinContent(16,0.2574102);
   hdirt_stack_3->SetBinContent(18,2.407774e-08);
   hdirt_stack_3->SetBinContent(19,0.2441834);
   hdirt_stack_3->SetBinError(3,0.1661453);
   hdirt_stack_3->SetBinError(5,0.1380715);
   hdirt_stack_3->SetBinError(6,0.3112566);
   hdirt_stack_3->SetBinError(7,0.526479);
   hdirt_stack_3->SetBinError(8,0.3675399);
   hdirt_stack_3->SetBinError(9,0.5022008);
   hdirt_stack_3->SetBinError(11,0.3001263);
   hdirt_stack_3->SetBinError(12,0.2665913);
   hdirt_stack_3->SetBinError(13,0.2072697);
   hdirt_stack_3->SetBinError(14,0.4258516);
   hdirt_stack_3->SetBinError(15,0.4164762);
   hdirt_stack_3->SetBinError(16,0.2574102);
   hdirt_stack_3->SetBinError(18,2.407774e-08);
   hdirt_stack_3->SetBinError(19,0.2441834);
   hdirt_stack_3->SetEntries(30);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   houtFV_stack_4->SetBinContent(4,0.3401776);
   houtFV_stack_4->SetBinContent(5,3.58928);
   houtFV_stack_4->SetBinContent(6,5.714289);
   houtFV_stack_4->SetBinContent(7,6.028299);
   houtFV_stack_4->SetBinContent(8,8.926854);
   houtFV_stack_4->SetBinContent(9,7.788681);
   houtFV_stack_4->SetBinContent(10,6.387472);
   houtFV_stack_4->SetBinContent(11,6.326814);
   houtFV_stack_4->SetBinContent(12,4.929986);
   houtFV_stack_4->SetBinContent(13,3.627917);
   houtFV_stack_4->SetBinContent(14,2.589184);
   houtFV_stack_4->SetBinContent(15,2.649175);
   houtFV_stack_4->SetBinContent(16,1.072568);
   houtFV_stack_4->SetBinContent(17,2.043255);
   houtFV_stack_4->SetBinContent(19,0.1950248);
   houtFV_stack_4->SetBinContent(20,0.8135936);
   houtFV_stack_4->SetBinContent(21,0.1967154);
   houtFV_stack_4->SetBinContent(22,0.1967154);
   houtFV_stack_4->SetBinContent(23,0.3401776);
   houtFV_stack_4->SetBinContent(26,0.3917402);
   houtFV_stack_4->SetBinError(4,0.3401776);
   houtFV_stack_4->SetBinError(5,0.9757226);
   houtFV_stack_4->SetBinError(6,1.259956);
   houtFV_stack_4->SetBinError(7,1.208251);
   houtFV_stack_4->SetBinError(8,2.144184);
   houtFV_stack_4->SetBinError(9,1.467485);
   houtFV_stack_4->SetBinError(10,1.249818);
   houtFV_stack_4->SetBinError(11,1.298967);
   houtFV_stack_4->SetBinError(12,1.110285);
   houtFV_stack_4->SetBinError(13,0.9345416);
   houtFV_stack_4->SetBinError(14,0.809167);
   houtFV_stack_4->SetBinError(15,1.080735);
   houtFV_stack_4->SetBinError(16,0.4479875);
   houtFV_stack_4->SetBinError(17,0.9906609);
   houtFV_stack_4->SetBinError(19,0.1950249);
   houtFV_stack_4->SetBinError(20,0.4843801);
   houtFV_stack_4->SetBinError(21,0.1967154);
   houtFV_stack_4->SetBinError(22,0.1967154);
   houtFV_stack_4->SetBinError(23,0.3401776);
   houtFV_stack_4->SetBinError(26,0.2770047);
   houtFV_stack_4->SetEntries(267);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.04356156);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1569961);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.04659827);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.01491798);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.03337679);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.01269218);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1141589);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04659828);
   hNCpi0inFVcoh_stack_5->SetEntries(9);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1281492);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.2154516);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1197018);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1114219);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1213757);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1724051);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1036537);
   hNCpi0inFVqe_stack_6->SetEntries(9);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVres_stack_7->SetBinContent(4,0.5733781);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.083075);
   hNCpi0inFVres_stack_7->SetBinContent(6,6.732178);
   hNCpi0inFVres_stack_7->SetBinContent(7,9.975145);
   hNCpi0inFVres_stack_7->SetBinContent(8,9.313251);
   hNCpi0inFVres_stack_7->SetBinContent(9,11.2472);
   hNCpi0inFVres_stack_7->SetBinContent(10,12.08513);
   hNCpi0inFVres_stack_7->SetBinContent(11,11.36195);
   hNCpi0inFVres_stack_7->SetBinContent(12,9.214296);
   hNCpi0inFVres_stack_7->SetBinContent(13,7.934341);
   hNCpi0inFVres_stack_7->SetBinContent(14,7.429127);
   hNCpi0inFVres_stack_7->SetBinContent(15,5.722832);
   hNCpi0inFVres_stack_7->SetBinContent(16,3.455746);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.213649);
   hNCpi0inFVres_stack_7->SetBinContent(18,1.050151);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.3308564);
   hNCpi0inFVres_stack_7->SetBinContent(20,0.2404714);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.432286);
   hNCpi0inFVres_stack_7->SetBinContent(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(23,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(25,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.04467028);
   hNCpi0inFVres_stack_7->SetBinError(4,0.1448853);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4867186);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7562666);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8772939);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7895074);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9673553);
   hNCpi0inFVres_stack_7->SetBinError(10,1.22403);
   hNCpi0inFVres_stack_7->SetBinError(11,1.335646);
   hNCpi0inFVres_stack_7->SetBinError(12,1.066964);
   hNCpi0inFVres_stack_7->SetBinError(13,1.209227);
   hNCpi0inFVres_stack_7->SetBinError(14,1.294944);
   hNCpi0inFVres_stack_7->SetBinError(15,1.029606);
   hNCpi0inFVres_stack_7->SetBinError(16,1.018983);
   hNCpi0inFVres_stack_7->SetBinError(17,0.8316448);
   hNCpi0inFVres_stack_7->SetBinError(18,0.3446084);
   hNCpi0inFVres_stack_7->SetBinError(19,0.139356);
   hNCpi0inFVres_stack_7->SetBinError(20,0.1278029);
   hNCpi0inFVres_stack_7->SetBinError(21,0.2270916);
   hNCpi0inFVres_stack_7->SetBinError(22,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(23,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(25,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(26,0.03255229);
   hNCpi0inFVres_stack_7->SetEntries(2070);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.1943298);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.290033);
   hNCpi0inFVdis_stack_8->SetBinContent(6,4.74591);
   hNCpi0inFVdis_stack_8->SetBinContent(7,5.986654);
   hNCpi0inFVdis_stack_8->SetBinContent(8,7.939191);
   hNCpi0inFVdis_stack_8->SetBinContent(9,7.322657);
   hNCpi0inFVdis_stack_8->SetBinContent(10,8.661856);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.074);
   hNCpi0inFVdis_stack_8->SetBinContent(12,8.05468);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.024621);
   hNCpi0inFVdis_stack_8->SetBinContent(14,8.574786);
   hNCpi0inFVdis_stack_8->SetBinContent(15,7.001729);
   hNCpi0inFVdis_stack_8->SetBinContent(16,2.710745);
   hNCpi0inFVdis_stack_8->SetBinContent(17,2.638078);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.673881);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.198404);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.701244);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.515986);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.059208);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.3341359);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.404386);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.4314539);
   hNCpi0inFVdis_stack_8->SetBinContent(26,1.300383);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1047973);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3559381);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6979947);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6504584);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.076908);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8168032);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9556681);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.255096);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.058588);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.161282);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.243621);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.265107);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5311444);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.704016);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7779546);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.7374332);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4533256);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2321763);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3494035);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.151108);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2253713);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.1797343);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.3679457);
   hNCpi0inFVdis_stack_8->SetEntries(1636);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hCCpi0inFV_stack_10->SetBinContent(3,0.536893);
   hCCpi0inFV_stack_10->SetBinContent(4,8.49778);
   hCCpi0inFV_stack_10->SetBinContent(5,61.63412);
   hCCpi0inFV_stack_10->SetBinContent(6,207.3984);
   hCCpi0inFV_stack_10->SetBinContent(7,397.4907);
   hCCpi0inFV_stack_10->SetBinContent(8,578.425);
   hCCpi0inFV_stack_10->SetBinContent(9,660.8751);
   hCCpi0inFV_stack_10->SetBinContent(10,692.3977);
   hCCpi0inFV_stack_10->SetBinContent(11,639.0695);
   hCCpi0inFV_stack_10->SetBinContent(12,546.2921);
   hCCpi0inFV_stack_10->SetBinContent(13,446.6029);
   hCCpi0inFV_stack_10->SetBinContent(14,360.1499);
   hCCpi0inFV_stack_10->SetBinContent(15,265.249);
   hCCpi0inFV_stack_10->SetBinContent(16,206.0801);
   hCCpi0inFV_stack_10->SetBinContent(17,149.0608);
   hCCpi0inFV_stack_10->SetBinContent(18,113.8615);
   hCCpi0inFV_stack_10->SetBinContent(19,93.51729);
   hCCpi0inFV_stack_10->SetBinContent(20,62.6316);
   hCCpi0inFV_stack_10->SetBinContent(21,51.07718);
   hCCpi0inFV_stack_10->SetBinContent(22,36.73218);
   hCCpi0inFV_stack_10->SetBinContent(23,32.678);
   hCCpi0inFV_stack_10->SetBinContent(24,25.45131);
   hCCpi0inFV_stack_10->SetBinContent(25,21.83213);
   hCCpi0inFV_stack_10->SetBinContent(26,74.68338);
   hCCpi0inFV_stack_10->SetBinError(3,0.3929602);
   hCCpi0inFV_stack_10->SetBinError(4,1.468347);
   hCCpi0inFV_stack_10->SetBinError(5,3.928252);
   hCCpi0inFV_stack_10->SetBinError(6,7.319499);
   hCCpi0inFV_stack_10->SetBinError(7,10.02022);
   hCCpi0inFV_stack_10->SetBinError(8,12.09851);
   hCCpi0inFV_stack_10->SetBinError(9,12.91104);
   hCCpi0inFV_stack_10->SetBinError(10,13.20453);
   hCCpi0inFV_stack_10->SetBinError(11,12.74687);
   hCCpi0inFV_stack_10->SetBinError(12,11.77499);
   hCCpi0inFV_stack_10->SetBinError(13,10.53752);
   hCCpi0inFV_stack_10->SetBinError(14,9.534981);
   hCCpi0inFV_stack_10->SetBinError(15,8.190874);
   hCCpi0inFV_stack_10->SetBinError(16,7.30581);
   hCCpi0inFV_stack_10->SetBinError(17,6.165866);
   hCCpi0inFV_stack_10->SetBinError(18,5.348216);
   hCCpi0inFV_stack_10->SetBinError(19,4.852083);
   hCCpi0inFV_stack_10->SetBinError(20,3.996339);
   hCCpi0inFV_stack_10->SetBinError(21,3.574424);
   hCCpi0inFV_stack_10->SetBinError(22,3.051785);
   hCCpi0inFV_stack_10->SetBinError(23,2.939742);
   hCCpi0inFV_stack_10->SetBinError(24,2.512462);
   hCCpi0inFV_stack_10->SetBinError(25,2.373341);
   hCCpi0inFV_stack_10->SetBinError(26,4.370932);
   hCCpi0inFV_stack_10->SetEntries(24435);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hNCinFV_stack_11->SetBinContent(4,0.536893);
   hNCinFV_stack_11->SetBinContent(5,0.5884556);
   hNCinFV_stack_11->SetBinContent(6,3.767786);
   hNCinFV_stack_11->SetBinContent(7,5.22655);
   hNCinFV_stack_11->SetBinContent(8,6.982382);
   hNCinFV_stack_11->SetBinContent(9,7.570837);
   hNCinFV_stack_11->SetBinContent(10,4.701491);
   hNCinFV_stack_11->SetBinContent(11,4.113035);
   hNCinFV_stack_11->SetBinContent(12,3.896642);
   hNCinFV_stack_11->SetBinContent(13,4.751363);
   hNCinFV_stack_11->SetBinContent(14,1.663932);
   hNCinFV_stack_11->SetBinContent(15,1.608988);
   hNCinFV_stack_11->SetBinContent(16,0.7834804);
   hNCinFV_stack_11->SetBinContent(17,2.147572);
   hNCinFV_stack_11->SetBinContent(18,1.610679);
   hNCinFV_stack_11->SetBinContent(19,0.3917402);
   hNCinFV_stack_11->SetBinContent(20,0.7319179);
   hNCinFV_stack_11->SetBinContent(21,1.176911);
   hNCinFV_stack_11->SetBinContent(24,0.3401776);
   hNCinFV_stack_11->SetBinContent(26,0.3401776);
   hNCinFV_stack_11->SetBinError(4,0.3929602);
   hNCinFV_stack_11->SetBinError(5,0.3397478);
   hNCinFV_stack_11->SetBinError(6,0.9414194);
   hNCinFV_stack_11->SetBinError(7,1.126583);
   hNCinFV_stack_11->SetBinError(8,1.34541);
   hNCinFV_stack_11->SetBinError(9,1.387644);
   hNCinFV_stack_11->SetBinError(10,1.05802);
   hNCinFV_stack_11->SetBinError(11,1.001987);
   hNCinFV_stack_11->SetBinError(12,1.075156);
   hNCinFV_stack_11->SetBinError(13,1.039113);
   hNCinFV_stack_11->SetBinError(14,0.6518637);
   hNCinFV_stack_11->SetBinError(15,0.6801404);
   hNCinFV_stack_11->SetBinError(16,0.3917439);
   hNCinFV_stack_11->SetBinError(17,0.7859205);
   hNCinFV_stack_11->SetBinError(18,0.6806271);
   hNCinFV_stack_11->SetBinError(19,0.2770047);
   hNCinFV_stack_11->SetBinError(20,0.438694);
   hNCinFV_stack_11->SetBinError(21,0.4804759);
   hNCinFV_stack_11->SetBinError(24,0.3401776);
   hNCinFV_stack_11->SetBinError(26,0.3401776);
   hNCinFV_stack_11->SetEntries(225);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hnumuCCinFV_stack_12->SetBinContent(3,0.426378);
   hnumuCCinFV_stack_12->SetBinContent(4,15.51997);
   hnumuCCinFV_stack_12->SetBinContent(5,40.77106);
   hnumuCCinFV_stack_12->SetBinContent(6,71.03516);
   hnumuCCinFV_stack_12->SetBinContent(7,115.748);
   hnumuCCinFV_stack_12->SetBinContent(8,127.5355);
   hnumuCCinFV_stack_12->SetBinContent(9,153.8656);
   hnumuCCinFV_stack_12->SetBinContent(10,131.1833);
   hnumuCCinFV_stack_12->SetBinContent(11,117.7653);
   hnumuCCinFV_stack_12->SetBinContent(12,110.8068);
   hnumuCCinFV_stack_12->SetBinContent(13,88.66216);
   hnumuCCinFV_stack_12->SetBinContent(14,64.99812);
   hnumuCCinFV_stack_12->SetBinContent(15,52.71342);
   hnumuCCinFV_stack_12->SetBinContent(16,40.41316);
   hnumuCCinFV_stack_12->SetBinContent(17,29.68237);
   hnumuCCinFV_stack_12->SetBinContent(18,26.52044);
   hnumuCCinFV_stack_12->SetBinContent(19,17.81104);
   hnumuCCinFV_stack_12->SetBinContent(20,11.44812);
   hnumuCCinFV_stack_12->SetBinContent(21,12.20629);
   hnumuCCinFV_stack_12->SetBinContent(22,10.32802);
   hnumuCCinFV_stack_12->SetBinContent(23,7.373117);
   hnumuCCinFV_stack_12->SetBinContent(24,6.107002);
   hnumuCCinFV_stack_12->SetBinContent(25,3.927332);
   hnumuCCinFV_stack_12->SetBinContent(26,17.51057);
   hnumuCCinFV_stack_12->SetBinError(3,0.3025871);
   hnumuCCinFV_stack_12->SetBinError(4,2.097113);
   hnumuCCinFV_stack_12->SetBinError(5,4.005074);
   hnumuCCinFV_stack_12->SetBinError(6,5.142397);
   hnumuCCinFV_stack_12->SetBinError(7,6.244919);
   hnumuCCinFV_stack_12->SetBinError(8,6.11682);
   hnumuCCinFV_stack_12->SetBinError(9,6.512887);
   hnumuCCinFV_stack_12->SetBinError(10,5.900327);
   hnumuCCinFV_stack_12->SetBinError(11,6.885648);
   hnumuCCinFV_stack_12->SetBinError(12,5.962075);
   hnumuCCinFV_stack_12->SetBinError(13,5.267317);
   hnumuCCinFV_stack_12->SetBinError(14,4.306825);
   hnumuCCinFV_stack_12->SetBinError(15,3.711049);
   hnumuCCinFV_stack_12->SetBinError(16,3.608995);
   hnumuCCinFV_stack_12->SetBinError(17,3.535512);
   hnumuCCinFV_stack_12->SetBinError(18,3.421177);
   hnumuCCinFV_stack_12->SetBinError(19,2.113811);
   hnumuCCinFV_stack_12->SetBinError(20,1.650545);
   hnumuCCinFV_stack_12->SetBinError(21,1.717083);
   hnumuCCinFV_stack_12->SetBinError(22,1.635961);
   hnumuCCinFV_stack_12->SetBinError(23,1.443905);
   hnumuCCinFV_stack_12->SetBinError(24,1.24123);
   hnumuCCinFV_stack_12->SetBinError(25,1.060185);
   hnumuCCinFV_stack_12->SetBinError(26,2.092911);
   hnumuCCinFV_stack_12->SetEntries(5250);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hnueCCinFV_stack_13->SetBinContent(5,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(7,0.536893);
   hnueCCinFV_stack_13->SetBinContent(8,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(9,1.755539);
   hnueCCinFV_stack_13->SetBinContent(10,0.5901461);
   hnueCCinFV_stack_13->SetBinContent(11,1.151915);
   hnueCCinFV_stack_13->SetBinContent(12,1.557426);
   hnueCCinFV_stack_13->SetBinContent(13,1.731914);
   hnueCCinFV_stack_13->SetBinContent(14,1.268811);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,0.7319179);
   hnueCCinFV_stack_13->SetBinContent(17,1.125349);
   hnueCCinFV_stack_13->SetBinContent(18,0.9303237);
   hnueCCinFV_stack_13->SetBinContent(19,1.412273);
   hnueCCinFV_stack_13->SetBinContent(20,1.462145);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.536893);
   hnueCCinFV_stack_13->SetBinContent(25,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(26,1.465526);
   hnueCCinFV_stack_13->SetBinError(5,0.3921167);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(7,0.3929602);
   hnueCCinFV_stack_13->SetBinError(8,0.438694);
   hnueCCinFV_stack_13->SetBinError(9,0.6351665);
   hnueCCinFV_stack_13->SetBinError(10,0.340721);
   hnueCCinFV_stack_13->SetBinError(11,0.6079563);
   hnueCCinFV_stack_13->SetBinError(12,0.7082233);
   hnueCCinFV_stack_13->SetBinError(13,0.6758482);
   hnueCCinFV_stack_13->SetBinError(14,0.5889569);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,0.438694);
   hnueCCinFV_stack_13->SetBinError(17,0.5194673);
   hnueCCinFV_stack_13->SetBinError(18,0.4814682);
   hnueCCinFV_stack_13->SetBinError(19,0.6510715);
   hnueCCinFV_stack_13->SetBinError(20,0.6198731);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.3929602);
   hnueCCinFV_stack_13->SetBinError(25,0.3401776);
   hnueCCinFV_stack_13->SetBinError(26,0.6209405);
   hnueCCinFV_stack_13->SetEntries(75);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);
   hmcerror__2->SetBinContent(3,1.77103);
   hmcerror__2->SetBinContent(4,29.25516);
   hmcerror__2->SetBinContent(5,116.1738);
   hmcerror__2->SetBinContent(6,305.1271);
   hmcerror__2->SetBinContent(7,549.6656);
   hmcerror__2->SetBinContent(8,766.0915);
   hmcerror__2->SetBinContent(9,876.6711);
   hmcerror__2->SetBinContent(10,873.7513);
   hmcerror__2->SetBinContent(11,803.235);
   hmcerror__2->SetBinContent(12,696.97);
   hmcerror__2->SetBinContent(13,573.8578);
   hmcerror__2->SetBinContent(14,457.8208);
   hmcerror__2->SetBinContent(15,342.7208);
   hmcerror__2->SetBinContent(16,259.3461);
   hmcerror__2->SetBinContent(17,193.8623);
   hmcerror__2->SetBinContent(18,154.7048);
   hmcerror__2->SetBinContent(19,122.3283);
   hmcerror__2->SetBinContent(20,80.29698);
   hmcerror__2->SetBinContent(21,66.53139);
   hmcerror__2->SetBinContent(22,49.0086);
   hmcerror__2->SetBinContent(23,44.83482);
   hmcerror__2->SetBinContent(24,33.50434);
   hmcerror__2->SetBinContent(25,26.68422);
   hmcerror__2->SetBinContent(26,103.2914);
   hmcerror__2->SetBinError(1,0.3895343);
   hmcerror__2->SetBinError(2,0.3895343);
   hmcerror__2->SetBinError(3,0.9820913);
   hmcerror__2->SetBinError(4,6.204267);
   hmcerror__2->SetBinError(5,23.51952);
   hmcerror__2->SetBinError(6,69.99689);
   hmcerror__2->SetBinError(7,130.0053);
   hmcerror__2->SetBinError(8,177.269);
   hmcerror__2->SetBinError(9,206.6211);
   hmcerror__2->SetBinError(10,214.4305);
   hmcerror__2->SetBinError(11,197.1099);
   hmcerror__2->SetBinError(12,166.6663);
   hmcerror__2->SetBinError(13,137.8168);
   hmcerror__2->SetBinError(14,106.9068);
   hmcerror__2->SetBinError(15,82.00287);
   hmcerror__2->SetBinError(16,63.64888);
   hmcerror__2->SetBinError(17,46.17274);
   hmcerror__2->SetBinError(18,35.33845);
   hmcerror__2->SetBinError(19,28.62548);
   hmcerror__2->SetBinError(20,18.46827);
   hmcerror__2->SetBinError(21,14.66259);
   hmcerror__2->SetBinError(22,9.631595);
   hmcerror__2->SetBinError(23,9.042956);
   hmcerror__2->SetBinError(24,7.858199);
   hmcerror__2->SetBinError(25,5.504434);
   hmcerror__2->SetBinError(26,17.00906);
   hmcerror__2->SetEntries(7468.322);

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
   
   Double_t _fx3001[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3001[25] = {
   0,
   0,
   0,
   27,
   157,
   393,
   598,
   801,
   857,
   840,
   796,
   576,
   474,
   349,
   266,
   200,
   155,
   107,
   74,
   64,
   47,
   36,
   22,
   17,
   18};
   Double_t _felx3001[25] = {
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
   50,
   50,
   50};
   Double_t _fely3001[25] = {
   0,
   0,
   0,
   5.3414,
   12.52996,
   19.82423,
   24.45404,
   28.30194,
   29.27456,
   28.98275,
   28.21347,
   24,
   21.77154,
   18.68154,
   16.30951,
   14.14214,
   12.4499,
   10.34408,
   8.7275,
   8.1273,
   6.9882,
   6.1381,
   4.8417,
   4.2835,
   4.4008};
   Double_t _fehx3001[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3001[25] = {
   1.1478,
   1.1478,
   1.1478,
   5.1322,
   12.52996,
   19.82423,
   24.45404,
   28.30194,
   29.27456,
   28.98275,
   28.21347,
   24,
   21.77154,
   18.68154,
   16.30951,
   14.14214,
   12.4499,
   10.34408,
   8.5253,
   7.9246,
   6.7839,
   5.9318,
   4.6299,
   4.0673,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,2750);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(974.902);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=28.8/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6874.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 35.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 137.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 63.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.7","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  102.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  93.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 5657.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 52.6","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 1256.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 17.2","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_bnb_12_cc_nu_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-385,-0.5333333,2823.333,2.133333);
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
   
   Double_t _fx3002[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3002[25] = {
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
   Double_t _felx3002[25] = {
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
   50,
   50,
   50};
   Double_t _fely3002[25] = {
   0,
   0,
   0.554531,
   0.2120742,
   0.2024511,
   0.2294024,
   0.236517,
   0.2313941,
   0.2356883,
   0.2454137,
   0.245395,
   0.2391298,
   0.2401585,
   0.2335124,
   0.2392702,
   0.2454206,
   0.2381729,
   0.228425,
   0.2340054,
   0.2299996,
   0.220386,
   0.1965287,
   0.201695,
   0.2345427,
   0.2062805};
   Double_t _fehx3002[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3002[25] = {
   0,
   0,
   0.554531,
   0.2120742,
   0.2024511,
   0.2294024,
   0.236517,
   0.2313941,
   0.2356883,
   0.2454137,
   0.245395,
   0.2391298,
   0.2401585,
   0.2335124,
   0.2392702,
   0.2454206,
   0.2381729,
   0.228425,
   0.2340054,
   0.2299996,
   0.220386,
   0.1965287,
   0.201695,
   0.2345427,
   0.2062805};
   grae = new TGraphAsymmErrors(25,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,2750);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Neutrino Energy [MeV]");
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
   
   Double_t _fx3003[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3003[25] = {
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
   Double_t _felx3003[25] = {
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
   50,
   50,
   50};
   Double_t _fely3003[25] = {
   0,
   0,
   0.554531,
   0.2120742,
   0.2024511,
   0.2294024,
   0.236517,
   0.2313941,
   0.2356883,
   0.2454137,
   0.245395,
   0.2391298,
   0.2401585,
   0.2335124,
   0.2392702,
   0.2454206,
   0.2381729,
   0.228425,
   0.2340054,
   0.2299996,
   0.220386,
   0.1965287,
   0.201695,
   0.2345427,
   0.2062805};
   Double_t _fehx3003[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3003[25] = {
   0,
   0,
   0.554531,
   0.2120742,
   0.2024511,
   0.2294024,
   0.236517,
   0.2313941,
   0.2356883,
   0.2454137,
   0.245395,
   0.2391298,
   0.2401585,
   0.2335124,
   0.2392702,
   0.2454206,
   0.2381729,
   0.228425,
   0.2340054,
   0.2299996,
   0.220386,
   0.1965287,
   0.201695,
   0.2345427,
   0.2062805};
   grae = new TGraphAsymmErrors(25,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,2750);
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
   
   Double_t _fx3004[25] = {
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
   1150,
   1250,
   1350,
   1450,
   1550,
   1650,
   1750,
   1850,
   1950,
   2050,
   2150,
   2250,
   2350,
   2450};
   Double_t _fy3004[25] = {
   10,
   10,
   0,
   0.922914,
   1.351423,
   1.287988,
   1.087934,
   1.045567,
   0.9775615,
   0.9613719,
   0.9909926,
   0.8264344,
   0.8259885,
   0.762307,
   0.7761421,
   0.7711704,
   0.7995367,
   0.6916397,
   0.6049296,
   0.7970412,
   0.7064335,
   0.7345649,
   0.4906901,
   0.5073969,
   0.6745561};
   Double_t _felx3004[25] = {
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
   50,
   50,
   50};
   Double_t _fely3004[25] = {
   0,
   0,
   0,
   0.1825797,
   0.1078553,
   0.06497039,
   0.04448894,
   0.03694329,
   0.03339287,
   0.03317048,
   0.0351248,
   0.03443477,
   0.03793891,
   0.04080536,
   0.04758832,
   0.05452998,
   0.06422034,
   0.06686334,
   0.0713449,
   0.1012155,
   0.1050361,
   0.1252454,
   0.1079897,
   0.1278491,
   0.1649215};
   Double_t _fehx3004[25] = {
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
   50,
   50,
   50};
   Double_t _fehy3004[25] = {
   0,
   0,
   0.6480973,
   0.1754289,
   0.1078553,
   0.06497039,
   0.04448894,
   0.03694329,
   0.03339287,
   0.03317048,
   0.0351248,
   0.03443477,
   0.03793891,
   0.04080536,
   0.04758832,
   0.05452998,
   0.06422034,
   0.06686334,
   0.06969197,
   0.09869113,
   0.1019654,
   0.1210359,
   0.1032657,
   0.1213962,
   0.1568643};
   grae = new TGraphAsymmErrors(25,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,2750);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(11);
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
   
   TH1F *hist__3 = new TH1F("hist__3","CCpi0_bnb_12_cc_nu_energy_all",25,0,2500);

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
   TLine *line = new TLine(0,1,2500,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
