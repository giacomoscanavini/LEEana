#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas6()
{
//=========Macro generated from canvas: canvas6/channel6
//=========  (Thu Mar  9 15:06:05 2023) by ROOT version 6.26/00
   TCanvas *canvas6 = new TCanvas("canvas6", "channel6",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas6->SetHighLightColor(2);
   canvas6->Range(0,0,1,1);
   canvas6->SetFillColor(0);
   canvas6->SetBorderMode(0);
   canvas6->SetBorderSize(2);
   canvas6->SetLeftMargin(0.12);
   canvas6->SetRightMargin(0.12);
   canvas6->SetTopMargin(0.05);
   canvas6->SetBottomMargin(0.12);
   canvas6->SetFrameLineWidth(2);
   canvas6->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-92.30769,-8.96,676.9231,990.7874);
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
   
   TH1F *hmc__16 = new TH1F("hmc__16","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmc__16->SetBinContent(1,4.4546);
   hmc__16->SetBinContent(2,34.58483);
   hmc__16->SetBinContent(3,96.10646);
   hmc__16->SetBinContent(4,233.8917);
   hmc__16->SetBinContent(5,381.4747);
   hmc__16->SetBinContent(6,397.5198);
   hmc__16->SetBinContent(7,410.4949);
   hmc__16->SetBinContent(8,350.3976);
   hmc__16->SetBinContent(9,289.4733);
   hmc__16->SetBinContent(10,257.6313);
   hmc__16->SetBinContent(11,207.6289);
   hmc__16->SetBinContent(12,172.5557);
   hmc__16->SetBinContent(13,145.8834);
   hmc__16->SetBinContent(14,118.1019);
   hmc__16->SetBinContent(15,93.48536);
   hmc__16->SetBinContent(16,83.40084);
   hmc__16->SetBinContent(17,68.17933);
   hmc__16->SetBinContent(18,54.42466);
   hmc__16->SetBinContent(19,49.21971);
   hmc__16->SetBinContent(20,35.45741);
   hmc__16->SetBinContent(21,26.93516);
   hmc__16->SetBinContent(22,21.18319);
   hmc__16->SetBinContent(23,20.03159);
   hmc__16->SetBinContent(24,15.69471);
   hmc__16->SetBinContent(25,114.7943);
   hmc__16->SetBinError(1,4.505316);
   hmc__16->SetBinError(2,17.95604);
   hmc__16->SetBinError(3,29.04166);
   hmc__16->SetBinError(4,80.22158);
   hmc__16->SetBinError(5,89.18706);
   hmc__16->SetBinError(6,95.36504);
   hmc__16->SetBinError(7,98.95413);
   hmc__16->SetBinError(8,89.71891);
   hmc__16->SetBinError(9,77.47347);
   hmc__16->SetBinError(10,74.37495);
   hmc__16->SetBinError(11,62.27719);
   hmc__16->SetBinError(12,54.71106);
   hmc__16->SetBinError(13,49.07411);
   hmc__16->SetBinError(14,42.97421);
   hmc__16->SetBinError(15,35.75328);
   hmc__16->SetBinError(16,32.84707);
   hmc__16->SetBinError(17,26.65629);
   hmc__16->SetBinError(18,25.66743);
   hmc__16->SetBinError(19,21.7373);
   hmc__16->SetBinError(20,16.82208);
   hmc__16->SetBinError(21,16.53676);
   hmc__16->SetBinError(22,11.83447);
   hmc__16->SetBinError(23,11.76769);
   hmc__16->SetBinError(24,13.20936);
   hmc__16->SetBinError(25,39.57714);
   hmc__16->SetMinimum(-8.96);
   hmc__16->SetMaximum(940.8);
   hmc__16->SetEntries(3645.257);
   hmc__16->SetLineWidth(5);
   hmc__16->GetXaxis()->SetLabelFont(42);
   hmc__16->GetXaxis()->SetTitleOffset(1);
   hmc__16->GetXaxis()->SetTitleFont(42);
   hmc__16->GetYaxis()->SetTitle("Event counts");
   hmc__16->GetYaxis()->SetLabelFont(132);
   hmc__16->GetYaxis()->SetLabelSize(0.04);
   hmc__16->GetYaxis()->SetTitleSize(0.05);
   hmc__16->GetYaxis()->SetTitleOffset(0.73);
   hmc__16->GetYaxis()->SetTitleFont(132);
   hmc__16->GetZaxis()->SetLabelFont(42);
   hmc__16->GetZaxis()->SetTitleOffset(1);
   hmc__16->GetZaxis()->SetTitleFont(42);
   hmc__16->Draw("hist");
   
   THStack *hs6 = new THStack();
   hs6->SetName("hs6");
   hs6->SetTitle("");
   
   TH1F *hs6_stack_6 = new TH1F("hs6_stack_6","",24,0,600);
   hs6_stack_6->SetMinimum(-6.289654e-09);
   hs6_stack_6->SetMaximum(431.0196);
   hs6_stack_6->SetDirectory(0);
   hs6_stack_6->SetStats(0);
   hs6_stack_6->SetLineWidth(2);
   hs6_stack_6->SetMarkerStyle(20);
   hs6_stack_6->GetXaxis()->SetNdivisions(509);
   hs6_stack_6->GetXaxis()->SetLabelFont(132);
   hs6_stack_6->GetXaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetXaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetXaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetXaxis()->SetTitleFont(132);
   hs6_stack_6->GetYaxis()->SetNdivisions(509);
   hs6_stack_6->GetYaxis()->SetLabelFont(132);
   hs6_stack_6->GetYaxis()->SetLabelOffset(0.01);
   hs6_stack_6->GetYaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetYaxis()->SetTitleOffset(0.95);
   hs6_stack_6->GetYaxis()->SetTitleFont(132);
   hs6_stack_6->GetZaxis()->SetLabelFont(132);
   hs6_stack_6->GetZaxis()->SetLabelSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleSize(0.08);
   hs6_stack_6->GetZaxis()->SetTitleOffset(1.2);
   hs6_stack_6->GetZaxis()->SetTitleFont(132);
   hs6->SetHistogram(hs6_stack_6);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,0.1967154);
   hbadmatch_stack_1->SetBinContent(2,2.732763);
   hbadmatch_stack_1->SetBinContent(3,7.615424);
   hbadmatch_stack_1->SetBinContent(4,9.837444);
   hbadmatch_stack_1->SetBinContent(5,11.09343);
   hbadmatch_stack_1->SetBinContent(6,12.17949);
   hbadmatch_stack_1->SetBinContent(7,10.92909);
   hbadmatch_stack_1->SetBinContent(8,10.95394);
   hbadmatch_stack_1->SetBinContent(9,4.329415);
   hbadmatch_stack_1->SetBinContent(10,2.977942);
   hbadmatch_stack_1->SetBinContent(11,1.178668);
   hbadmatch_stack_1->SetBinContent(12,3.944557);
   hbadmatch_stack_1->SetBinContent(13,1.270501);
   hbadmatch_stack_1->SetBinContent(14,0.3934307);
   hbadmatch_stack_1->SetBinContent(15,0.1967154);
   hbadmatch_stack_1->SetBinContent(16,0.3934307);
   hbadmatch_stack_1->SetBinContent(17,0.1950248);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(19,0.536893);
   hbadmatch_stack_1->SetBinContent(20,0.4241887);
   hbadmatch_stack_1->SetBinContent(21,0.536893);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.3401776);
   hbadmatch_stack_1->SetBinContent(25,0.3934307);
   hbadmatch_stack_1->SetBinError(1,0.1967154);
   hbadmatch_stack_1->SetBinError(2,0.8122897);
   hbadmatch_stack_1->SetBinError(3,1.710433);
   hbadmatch_stack_1->SetBinError(4,1.641406);
   hbadmatch_stack_1->SetBinError(5,1.677767);
   hbadmatch_stack_1->SetBinError(6,1.741818);
   hbadmatch_stack_1->SetBinError(7,1.815643);
   hbadmatch_stack_1->SetBinError(8,2.969772);
   hbadmatch_stack_1->SetBinError(9,1.054398);
   hbadmatch_stack_1->SetBinError(10,0.8897312);
   hbadmatch_stack_1->SetBinError(11,0.4804791);
   hbadmatch_stack_1->SetBinError(12,1.870912);
   hbadmatch_stack_1->SetBinError(13,0.5895188);
   hbadmatch_stack_1->SetBinError(14,0.2781975);
   hbadmatch_stack_1->SetBinError(15,0.1967154);
   hbadmatch_stack_1->SetBinError(16,0.2781975);
   hbadmatch_stack_1->SetBinError(17,0.1950249);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.3007342);
   hbadmatch_stack_1->SetBinError(21,0.3929602);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.3401776);
   hbadmatch_stack_1->SetBinError(25,0.2781975);
   hbadmatch_stack_1->SetEntries(316);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1499;
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
   hs6->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,1.37261);
   hext_stack_2->SetBinContent(2,9.246394);
   hext_stack_2->SetBinContent(3,14.509);
   hext_stack_2->SetBinContent(4,28.47849);
   hext_stack_2->SetBinContent(5,48.83704);
   hext_stack_2->SetBinContent(6,41.92927);
   hext_stack_2->SetBinContent(7,40.15888);
   hext_stack_2->SetBinContent(8,29.15923);
   hext_stack_2->SetBinContent(9,15.89156);
   hext_stack_2->SetBinContent(10,15.00057);
   hext_stack_2->SetBinContent(11,11.19996);
   hext_stack_2->SetBinContent(12,8.421607);
   hext_stack_2->SetBinContent(13,4.303776);
   hext_stack_2->SetBinContent(14,3.800614);
   hext_stack_2->SetBinContent(15,1.779209);
   hext_stack_2->SetBinContent(16,3.323403);
   hext_stack_2->SetBinContent(17,0.7309963);
   hext_stack_2->SetBinContent(18,2.420823);
   hext_stack_2->SetBinContent(19,1.137595);
   hext_stack_2->SetBinContent(20,1.37261);
   hext_stack_2->SetBinContent(25,0.3243973);
   hext_stack_2->SetBinError(1,0.8259691);
   hext_stack_2->SetBinError(2,1.968372);
   hext_stack_2->SetBinError(3,2.481097);
   hext_stack_2->SetBinError(4,3.299251);
   hext_stack_2->SetBinError(5,4.583362);
   hext_stack_2->SetBinError(6,4.28157);
   hext_stack_2->SetBinError(7,4.213614);
   hext_stack_2->SetBinError(8,3.544576);
   hext_stack_2->SetBinError(9,2.510088);
   hext_stack_2->SetBinError(10,2.458644);
   hext_stack_2->SetBinError(11,2.074775);
   hext_stack_2->SetBinError(12,1.89998);
   hext_stack_2->SetBinError(13,1.250299);
   hext_stack_2->SetBinError(14,1.319182);
   hext_stack_2->SetBinError(15,0.9206235);
   hext_stack_2->SetBinError(16,1.20364);
   hext_stack_2->SetBinError(17,0.5201503);
   hext_stack_2->SetBinError(18,1.122148);
   hext_stack_2->SetBinError(19,0.6602113);
   hext_stack_2->SetBinError(20,0.8259691);
   hext_stack_2->SetBinError(25,0.3243973);
   hext_stack_2->SetEntries(711);

   ci = 1500;
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
   hs6->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(2,1.974458);
   hdirt_stack_3->SetBinContent(3,2.480012);
   hdirt_stack_3->SetBinContent(4,6.045364);
   hdirt_stack_3->SetBinContent(5,5.777548);
   hdirt_stack_3->SetBinContent(6,7.472896);
   hdirt_stack_3->SetBinContent(7,4.359011);
   hdirt_stack_3->SetBinContent(8,3.121896);
   hdirt_stack_3->SetBinContent(9,2.65869);
   hdirt_stack_3->SetBinContent(10,1.092396);
   hdirt_stack_3->SetBinContent(11,1.657859);
   hdirt_stack_3->SetBinContent(12,1.907867);
   hdirt_stack_3->SetBinContent(13,0.2261411);
   hdirt_stack_3->SetBinContent(14,0.7005532);
   hdirt_stack_3->SetBinContent(15,0.5105644);
   hdirt_stack_3->SetBinContent(16,0.1580268);
   hdirt_stack_3->SetBinContent(18,1.330832);
   hdirt_stack_3->SetBinContent(19,0.4080678);
   hdirt_stack_3->SetBinContent(25,0.2188956);
   hdirt_stack_3->SetBinError(2,0.7375802);
   hdirt_stack_3->SetBinError(3,0.7413174);
   hdirt_stack_3->SetBinError(4,1.296204);
   hdirt_stack_3->SetBinError(5,1.473878);
   hdirt_stack_3->SetBinError(6,1.42732);
   hdirt_stack_3->SetBinError(7,1.149265);
   hdirt_stack_3->SetBinError(8,0.9083469);
   hdirt_stack_3->SetBinError(9,0.8573921);
   hdirt_stack_3->SetBinError(10,0.5172839);
   hdirt_stack_3->SetBinError(11,0.6716659);
   hdirt_stack_3->SetBinError(12,0.7144176);
   hdirt_stack_3->SetBinError(13,0.2261411);
   hdirt_stack_3->SetBinError(14,0.4531529);
   hdirt_stack_3->SetBinError(15,0.3646725);
   hdirt_stack_3->SetBinError(16,0.1580268);
   hdirt_stack_3->SetBinError(18,1.107563);
   hdirt_stack_3->SetBinError(19,0.4080678);
   hdirt_stack_3->SetBinError(25,0.2188956);
   hdirt_stack_3->SetEntries(173);

   ci = 1501;
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
   hs6->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.9269427);
   houtFV_stack_4->SetBinContent(2,3.157504);
   houtFV_stack_4->SetBinContent(3,15.61578);
   houtFV_stack_4->SetBinContent(4,30.96424);
   houtFV_stack_4->SetBinContent(5,47.84367);
   houtFV_stack_4->SetBinContent(6,45.12856);
   houtFV_stack_4->SetBinContent(7,41.97779);
   houtFV_stack_4->SetBinContent(8,34.92882);
   houtFV_stack_4->SetBinContent(9,25.3517);
   houtFV_stack_4->SetBinContent(10,21.66359);
   houtFV_stack_4->SetBinContent(11,15.86666);
   houtFV_stack_4->SetBinContent(12,13.14433);
   houtFV_stack_4->SetBinContent(13,9.926015);
   houtFV_stack_4->SetBinContent(14,6.134667);
   houtFV_stack_4->SetBinContent(15,4.80807);
   houtFV_stack_4->SetBinContent(16,3.425918);
   houtFV_stack_4->SetBinContent(17,4.442193);
   houtFV_stack_4->SetBinContent(18,2.39585);
   houtFV_stack_4->SetBinContent(19,4.301298);
   houtFV_stack_4->SetBinContent(20,1.318683);
   houtFV_stack_4->SetBinContent(21,0.5884556);
   houtFV_stack_4->SetBinContent(22,0.1950248);
   houtFV_stack_4->SetBinContent(23,2.629521);
   houtFV_stack_4->SetBinContent(24,0.9785053);
   houtFV_stack_4->SetBinContent(25,3.469636);
   houtFV_stack_4->SetBinError(1,0.4800908);
   houtFV_stack_4->SetBinError(2,0.9070559);
   houtFV_stack_4->SetBinError(3,1.962334);
   houtFV_stack_4->SetBinError(4,2.756473);
   houtFV_stack_4->SetBinError(5,3.500093);
   houtFV_stack_4->SetBinError(6,3.357434);
   houtFV_stack_4->SetBinError(7,3.250139);
   houtFV_stack_4->SetBinError(8,2.940269);
   houtFV_stack_4->SetBinError(9,2.490744);
   houtFV_stack_4->SetBinError(10,2.281097);
   houtFV_stack_4->SetBinError(11,2.013536);
   houtFV_stack_4->SetBinError(12,1.820196);
   houtFV_stack_4->SetBinError(13,1.565268);
   houtFV_stack_4->SetBinError(14,1.270472);
   houtFV_stack_4->SetBinError(15,1.114268);
   houtFV_stack_4->SetBinError(16,0.8774323);
   houtFV_stack_4->SetBinError(17,1.03323);
   houtFV_stack_4->SetBinError(18,0.7857345);
   houtFV_stack_4->SetBinError(19,1.019492);
   houtFV_stack_4->SetBinError(20,0.5542732);
   houtFV_stack_4->SetBinError(21,0.3397478);
   houtFV_stack_4->SetBinError(22,0.1950249);
   houtFV_stack_4->SetBinError(23,0.899863);
   houtFV_stack_4->SetBinError(24,0.4376048);
   houtFV_stack_4->SetBinError(25,0.9624002);
   houtFV_stack_4->SetEntries(1472);

   ci = 1502;
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
   hs6->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5566719);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,2.312052);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.085042);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.687304);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,6.400254);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,6.316049);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,7.153722);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,6.258753);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.969128);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,6.501069);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,4.768428);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.9903);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,4.24132);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,4.852633);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,3.053734);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,2.120744);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.49507);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,1.771326);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.603094);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.8373359);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5581679);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.8373359);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,6.929354);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2062853);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4594367);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.6710575);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7796275);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.8400632);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.777878);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.8714827);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7731519);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7709677);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.9082955);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.7133684);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.7362793);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7110919);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.780709);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.5735973);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.51885);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5717852);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.4479997);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4204368);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2981109);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2198343);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2981109);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.8176007);
   hNCpi0inFVcoh_stack_5->SetEntries(1646);

   ci = 1503;
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
   hs6->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.390768);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.5716177);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.966962);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.9338218);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.631658);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.9195399);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.772158);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.9338218);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6139679);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.5583361);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.3206861);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2504359);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2089417);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1506776);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.5212201);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2812022);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4050343);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2922873);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.4690095);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2812022);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2233471);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2847561);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.06834073);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2201295);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1431726);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.2013529);
   hNCpi0inFVqe_stack_6->SetEntries(229);

   ci = 1504;
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
   hs6->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.9489359);
   hNCpi0inFVres_stack_7->SetBinContent(2,8.731412);
   hNCpi0inFVres_stack_7->SetBinContent(3,29.87206);
   hNCpi0inFVres_stack_7->SetBinContent(4,86.43785);
   hNCpi0inFVres_stack_7->SetBinContent(5,155.6844);
   hNCpi0inFVres_stack_7->SetBinContent(6,168.1938);
   hNCpi0inFVres_stack_7->SetBinContent(7,174.2555);
   hNCpi0inFVres_stack_7->SetBinContent(8,150.1544);
   hNCpi0inFVres_stack_7->SetBinContent(9,137.3617);
   hNCpi0inFVres_stack_7->SetBinContent(10,116.2912);
   hNCpi0inFVres_stack_7->SetBinContent(11,92.1798);
   hNCpi0inFVres_stack_7->SetBinContent(12,74.77344);
   hNCpi0inFVres_stack_7->SetBinContent(13,63.91896);
   hNCpi0inFVres_stack_7->SetBinContent(14,54.25061);
   hNCpi0inFVres_stack_7->SetBinContent(15,37.99099);
   hNCpi0inFVres_stack_7->SetBinContent(16,33.5685);
   hNCpi0inFVres_stack_7->SetBinContent(17,25.54488);
   hNCpi0inFVres_stack_7->SetBinContent(18,18.67565);
   hNCpi0inFVres_stack_7->SetBinContent(19,18.15617);
   hNCpi0inFVres_stack_7->SetBinContent(20,13.90406);
   hNCpi0inFVres_stack_7->SetBinContent(21,9.147415);
   hNCpi0inFVres_stack_7->SetBinContent(22,8.964406);
   hNCpi0inFVres_stack_7->SetBinContent(23,5.644617);
   hNCpi0inFVres_stack_7->SetBinContent(24,6.500237);
   hNCpi0inFVres_stack_7->SetBinContent(25,28.76202);
   hNCpi0inFVres_stack_7->SetBinError(1,0.3032882);
   hNCpi0inFVres_stack_7->SetBinError(2,0.996629);
   hNCpi0inFVres_stack_7->SetBinError(3,1.804444);
   hNCpi0inFVres_stack_7->SetBinError(4,2.983979);
   hNCpi0inFVres_stack_7->SetBinError(5,4.145336);
   hNCpi0inFVres_stack_7->SetBinError(6,4.225943);
   hNCpi0inFVres_stack_7->SetBinError(7,4.354048);
   hNCpi0inFVres_stack_7->SetBinError(8,3.911544);
   hNCpi0inFVres_stack_7->SetBinError(9,3.8707);
   hNCpi0inFVres_stack_7->SetBinError(10,3.54722);
   hNCpi0inFVres_stack_7->SetBinError(11,3.117335);
   hNCpi0inFVres_stack_7->SetBinError(12,2.778363);
   hNCpi0inFVres_stack_7->SetBinError(13,2.643895);
   hNCpi0inFVres_stack_7->SetBinError(14,2.443529);
   hNCpi0inFVres_stack_7->SetBinError(15,2.015105);
   hNCpi0inFVres_stack_7->SetBinError(16,1.949228);
   hNCpi0inFVres_stack_7->SetBinError(17,1.667467);
   hNCpi0inFVres_stack_7->SetBinError(18,1.43993);
   hNCpi0inFVres_stack_7->SetBinError(19,1.433247);
   hNCpi0inFVres_stack_7->SetBinError(20,1.232963);
   hNCpi0inFVres_stack_7->SetBinError(21,0.9732148);
   hNCpi0inFVres_stack_7->SetBinError(22,0.9878356);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7177194);
   hNCpi0inFVres_stack_7->SetBinError(24,0.8976271);
   hNCpi0inFVres_stack_7->SetBinError(25,1.739501);
   hNCpi0inFVres_stack_7->SetEntries(27989);

   ci = 1505;
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
   hs6->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.2512681);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.32459);
   hNCpi0inFVdis_stack_8->SetBinContent(3,5.508278);
   hNCpi0inFVdis_stack_8->SetBinContent(4,17.70494);
   hNCpi0inFVdis_stack_8->SetBinContent(5,29.91092);
   hNCpi0inFVdis_stack_8->SetBinContent(6,27.04433);
   hNCpi0inFVdis_stack_8->SetBinContent(7,26.4415);
   hNCpi0inFVdis_stack_8->SetBinContent(8,23.88565);
   hNCpi0inFVdis_stack_8->SetBinContent(9,20.39997);
   hNCpi0inFVdis_stack_8->SetBinContent(10,16.86031);
   hNCpi0inFVdis_stack_8->SetBinContent(11,17.45966);
   hNCpi0inFVdis_stack_8->SetBinContent(12,13.39586);
   hNCpi0inFVdis_stack_8->SetBinContent(13,13.17416);
   hNCpi0inFVdis_stack_8->SetBinContent(14,12.07593);
   hNCpi0inFVdis_stack_8->SetBinContent(15,9.762224);
   hNCpi0inFVdis_stack_8->SetBinContent(16,7.585839);
   hNCpi0inFVdis_stack_8->SetBinContent(17,9.410142);
   hNCpi0inFVdis_stack_8->SetBinContent(18,5.78595);
   hNCpi0inFVdis_stack_8->SetBinContent(19,5.883604);
   hNCpi0inFVdis_stack_8->SetBinContent(20,5.158364);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.472402);
   hNCpi0inFVdis_stack_8->SetBinContent(22,1.798226);
   hNCpi0inFVdis_stack_8->SetBinContent(23,2.483444);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.538748);
   hNCpi0inFVdis_stack_8->SetBinContent(25,17.19061);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.1994106);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3503303);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7453421);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.346987);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.821511);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.640093);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.676745);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.5849);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.482175);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.34424);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.39364);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.156963);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.156767);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.125127);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.077416);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8822096);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.000883);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.7683127);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.815655);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.7302636);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6111046);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3865967);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.5285117);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5719555);
   hNCpi0inFVdis_stack_8->SetBinError(25,1.286263);
   hNCpi0inFVdis_stack_8->SetEntries(5533);

   ci = 1506;
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
   hs6->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(14);

   ci = 1507;
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
   hs6->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_10->SetBinContent(1,0.1950248);
   hCCpi0inFV_stack_10->SetBinContent(2,2.535931);
   hCCpi0inFV_stack_10->SetBinContent(3,7.329321);
   hCCpi0inFV_stack_10->SetBinContent(4,24.00723);
   hCCpi0inFV_stack_10->SetBinContent(5,36.05122);
   hCCpi0inFV_stack_10->SetBinContent(6,40.79635);
   hCCpi0inFV_stack_10->SetBinContent(7,50.73828);
   hCCpi0inFV_stack_10->SetBinContent(8,43.96125);
   hCCpi0inFV_stack_10->SetBinContent(9,36.7915);
   hCCpi0inFV_stack_10->SetBinContent(10,40.89536);
   hCCpi0inFV_stack_10->SetBinContent(11,36.43153);
   hCCpi0inFV_stack_10->SetBinContent(12,25.82638);
   hCCpi0inFV_stack_10->SetBinContent(13,26.92421);
   hCCpi0inFV_stack_10->SetBinContent(14,18.76262);
   hCCpi0inFV_stack_10->SetBinContent(15,19.92035);
   hCCpi0inFV_stack_10->SetBinContent(16,16.01647);
   hCCpi0inFV_stack_10->SetBinContent(17,11.22323);
   hCCpi0inFV_stack_10->SetBinContent(18,10.44354);
   hCCpi0inFV_stack_10->SetBinContent(19,7.996033);
   hCCpi0inFV_stack_10->SetBinContent(20,5.966725);
   hCCpi0inFV_stack_10->SetBinContent(21,7.035635);
   hCCpi0inFV_stack_10->SetBinContent(22,5.076934);
   hCCpi0inFV_stack_10->SetBinContent(23,3.280765);
   hCCpi0inFV_stack_10->SetBinContent(24,2.052291);
   hCCpi0inFV_stack_10->SetBinContent(25,21.82084);
   hCCpi0inFV_stack_10->SetBinError(1,0.1950249);
   hCCpi0inFV_stack_10->SetBinError(2,0.8325131);
   hCCpi0inFV_stack_10->SetBinError(3,1.388704);
   hCCpi0inFV_stack_10->SetBinError(4,2.420745);
   hCCpi0inFV_stack_10->SetBinError(5,2.975348);
   hCCpi0inFV_stack_10->SetBinError(6,3.185625);
   hCCpi0inFV_stack_10->SetBinError(7,3.58063);
   hCCpi0inFV_stack_10->SetBinError(8,3.283291);
   hCCpi0inFV_stack_10->SetBinError(9,2.965459);
   hCCpi0inFV_stack_10->SetBinError(10,3.236641);
   hCCpi0inFV_stack_10->SetBinError(11,3.037008);
   hCCpi0inFV_stack_10->SetBinError(12,2.498693);
   hCCpi0inFV_stack_10->SetBinError(13,2.626654);
   hCCpi0inFV_stack_10->SetBinError(14,2.15848);
   hCCpi0inFV_stack_10->SetBinError(15,2.267433);
   hCCpi0inFV_stack_10->SetBinError(16,1.995543);
   hCCpi0inFV_stack_10->SetBinError(17,1.61526);
   hCCpi0inFV_stack_10->SetBinError(18,1.638071);
   hCCpi0inFV_stack_10->SetBinError(19,1.42006);
   hCCpi0inFV_stack_10->SetBinError(20,1.236103);
   hCCpi0inFV_stack_10->SetBinError(21,1.33109);
   hCCpi0inFV_stack_10->SetBinError(22,1.178195);
   hCCpi0inFV_stack_10->SetBinError(23,0.8319864);
   hCCpi0inFV_stack_10->SetBinError(24,0.7073425);
   hCCpi0inFV_stack_10->SetBinError(25,2.387299);
   hCCpi0inFV_stack_10->SetEntries(2161);

   ci = 1508;
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
   hs6->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_11->SetBinContent(1,0.1950248);
   hNCinFV_stack_11->SetBinContent(2,2.000729);
   hNCinFV_stack_11->SetBinContent(3,5.476519);
   hNCinFV_stack_11->SetBinContent(4,13.58932);
   hNCinFV_stack_11->SetBinContent(5,21.55697);
   hNCinFV_stack_11->SetBinContent(6,22.47715);
   hNCinFV_stack_11->SetBinContent(7,28.62111);
   hNCinFV_stack_11->SetBinContent(8,26.18336);
   hNCinFV_stack_11->SetBinContent(9,18.18261);
   hNCinFV_stack_11->SetBinContent(10,19.89304);
   hNCinFV_stack_11->SetBinContent(11,13.38476);
   hNCinFV_stack_11->SetBinContent(12,12.85233);
   hNCinFV_stack_11->SetBinContent(13,10.64704);
   hNCinFV_stack_11->SetBinContent(14,7.190323);
   hNCinFV_stack_11->SetBinContent(15,8.069084);
   hNCinFV_stack_11->SetBinContent(16,7.625781);
   hNCinFV_stack_11->SetBinContent(17,7.124153);
   hNCinFV_stack_11->SetBinContent(18,6.392236);
   hNCinFV_stack_11->SetBinContent(19,5.180059);
   hNCinFV_stack_11->SetBinContent(20,2.790971);
   hNCinFV_stack_11->SetBinContent(21,2.640747);
   hNCinFV_stack_11->SetBinContent(22,2.590875);
   hNCinFV_stack_11->SetBinContent(23,2.590875);
   hNCinFV_stack_11->SetBinContent(24,0.9303237);
   hNCinFV_stack_11->SetBinContent(25,14.00003);
   hNCinFV_stack_11->SetBinError(1,0.1950249);
   hNCinFV_stack_11->SetBinError(2,0.7343859);
   hNCinFV_stack_11->SetBinError(3,1.126747);
   hNCinFV_stack_11->SetBinError(4,1.830716);
   hNCinFV_stack_11->SetBinError(5,2.314259);
   hNCinFV_stack_11->SetBinError(6,2.362971);
   hNCinFV_stack_11->SetBinError(7,2.69777);
   hNCinFV_stack_11->SetBinError(8,2.523307);
   hNCinFV_stack_11->SetBinError(9,2.13235);
   hNCinFV_stack_11->SetBinError(10,2.220556);
   hNCinFV_stack_11->SetBinError(11,1.873003);
   hNCinFV_stack_11->SetBinError(12,1.776818);
   hNCinFV_stack_11->SetBinError(13,1.665646);
   hNCinFV_stack_11->SetBinError(14,1.286403);
   hNCinFV_stack_11->SetBinError(15,1.387672);
   hNCinFV_stack_11->SetBinError(16,1.374006);
   hNCinFV_stack_11->SetBinError(17,1.373495);
   hNCinFV_stack_11->SetBinError(18,1.301552);
   hNCinFV_stack_11->SetBinError(19,1.144624);
   hNCinFV_stack_11->SetBinError(20,0.8339274);
   hNCinFV_stack_11->SetBinError(21,0.784705);
   hNCinFV_stack_11->SetBinError(22,0.8095761);
   hNCinFV_stack_11->SetBinError(23,0.8095761);
   hNCinFV_stack_11->SetBinError(24,0.4814682);
   hNCinFV_stack_11->SetBinError(25,1.942491);
   hNCinFV_stack_11->SetEntries(1123);

   ci = 1509;
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
   hs6->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,2.2678);
   hnumuCCinFV_stack_12->SetBinContent(3,6.221517);
   hnumuCCinFV_stack_12->SetBinContent(4,11.51686);
   hnumuCCinFV_stack_12->SetBinContent(5,18.07903);
   hnumuCCinFV_stack_12->SetBinContent(6,23.34781);
   hnumuCCinFV_stack_12->SetBinContent(7,21.86491);
   hnumuCCinFV_stack_12->SetBinContent(8,18.13543);
   hnumuCCinFV_stack_12->SetBinContent(9,18.43241);
   hnumuCCinFV_stack_12->SetBinContent(10,14.86268);
   hnumuCCinFV_stack_12->SetBinContent(11,11.21201);
   hnumuCCinFV_stack_12->SetBinContent(12,9.791191);
   hnumuCCinFV_stack_12->SetBinContent(13,9.670353);
   hnumuCCinFV_stack_12->SetBinContent(14,9.244537);
   hnumuCCinFV_stack_12->SetBinContent(15,5.646004);
   hnumuCCinFV_stack_12->SetBinContent(16,6.195575);
   hnumuCCinFV_stack_12->SetBinContent(17,5.806454);
   hnumuCCinFV_stack_12->SetBinContent(18,4.14661);
   hnumuCCinFV_stack_12->SetBinContent(19,2.477561);
   hnumuCCinFV_stack_12->SetBinContent(20,2.332533);
   hnumuCCinFV_stack_12->SetBinContent(21,1.518779);
   hnumuCCinFV_stack_12->SetBinContent(22,1.518779);
   hnumuCCinFV_stack_12->SetBinContent(23,2.000729);
   hnumuCCinFV_stack_12->SetBinContent(24,1.517089);
   hnumuCCinFV_stack_12->SetBinContent(25,9.893766);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,0.7737884);
   hnumuCCinFV_stack_12->SetBinError(3,1.695393);
   hnumuCCinFV_stack_12->SetBinError(4,1.921902);
   hnumuCCinFV_stack_12->SetBinError(5,2.776439);
   hnumuCCinFV_stack_12->SetBinError(6,3.288733);
   hnumuCCinFV_stack_12->SetBinError(7,2.76807);
   hnumuCCinFV_stack_12->SetBinError(8,2.188177);
   hnumuCCinFV_stack_12->SetBinError(9,2.231988);
   hnumuCCinFV_stack_12->SetBinError(10,2.122872);
   hnumuCCinFV_stack_12->SetBinError(11,1.69394);
   hnumuCCinFV_stack_12->SetBinError(12,1.765501);
   hnumuCCinFV_stack_12->SetBinError(13,1.592542);
   hnumuCCinFV_stack_12->SetBinError(14,1.663466);
   hnumuCCinFV_stack_12->SetBinError(15,1.698636);
   hnumuCCinFV_stack_12->SetBinError(16,1.231856);
   hnumuCCinFV_stack_12->SetBinError(17,1.200816);
   hnumuCCinFV_stack_12->SetBinError(18,1.075328);
   hnumuCCinFV_stack_12->SetBinError(19,0.7688691);
   hnumuCCinFV_stack_12->SetBinError(20,0.7769218);
   hnumuCCinFV_stack_12->SetBinError(21,0.5892709);
   hnumuCCinFV_stack_12->SetBinError(22,0.5892709);
   hnumuCCinFV_stack_12->SetBinError(23,0.7343859);
   hnumuCCinFV_stack_12->SetBinError(24,0.5887087);
   hnumuCCinFV_stack_12->SetBinError(25,1.634383);
   hnumuCCinFV_stack_12->SetEntries(859);

   ci = 1510;
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
   hs6->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_13->SetBinContent(2,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(3,0.4753021);
   hnueCCinFV_stack_13->SetBinContent(4,2.398423);
   hnueCCinFV_stack_13->SetBinContent(5,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(6,2.245225);
   hnueCCinFV_stack_13->SetBinContent(7,2.935918);
   hnueCCinFV_stack_13->SetBinContent(8,2.650149);
   hnueCCinFV_stack_13->SetBinContent(9,1.147898);
   hnueCCinFV_stack_13->SetBinContent(10,0.8737744);
   hnueCCinFV_stack_13->SetBinContent(11,0.4748818);
   hnueCCinFV_stack_13->SetBinContent(12,1.801617);
   hnueCCinFV_stack_13->SetBinContent(13,0.9980428);
   hnueCCinFV_stack_13->SetBinContent(15,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(16,0.003996095);
   hnueCCinFV_stack_13->SetBinContent(17,0.5369257);
   hnueCCinFV_stack_13->SetBinContent(18,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(19,0.6194557);
   hnueCCinFV_stack_13->SetBinContent(20,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(21,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(22,0.00488893);
   hnueCCinFV_stack_13->SetBinContent(23,0.3963213);
   hnueCCinFV_stack_13->SetBinContent(25,11.51213);
   hnueCCinFV_stack_13->SetBinError(2,0.2758068);
   hnueCCinFV_stack_13->SetBinError(3,0.3414528);
   hnueCCinFV_stack_13->SetBinError(4,1.448642);
   hnueCCinFV_stack_13->SetBinError(5,0.3397478);
   hnueCCinFV_stack_13->SetBinError(6,0.9570168);
   hnueCCinFV_stack_13->SetBinError(7,0.928981);
   hnueCCinFV_stack_13->SetBinError(8,0.9034206);
   hnueCCinFV_stack_13->SetBinError(9,0.6270275);
   hnueCCinFV_stack_13->SetBinError(10,0.5175972);
   hnueCCinFV_stack_13->SetBinError(11,0.3406916);
   hnueCCinFV_stack_13->SetBinError(12,1.203825);
   hnueCCinFV_stack_13->SetBinError(13,0.5314795);
   hnueCCinFV_stack_13->SetBinError(15,0.2781975);
   hnueCCinFV_stack_13->SetBinError(16,0.003996095);
   hnueCCinFV_stack_13->SetBinError(17,0.3929602);
   hnueCCinFV_stack_13->SetBinError(18,0.1950249);
   hnueCCinFV_stack_13->SetBinError(19,0.4670934);
   hnueCCinFV_stack_13->SetBinError(20,0.2758068);
   hnueCCinFV_stack_13->SetBinError(21,0.2770047);
   hnueCCinFV_stack_13->SetBinError(22,0.00488893);
   hnueCCinFV_stack_13->SetBinError(23,0.3963213);
   hnueCCinFV_stack_13->SetBinError(25,2.378431);
   hnueCCinFV_stack_13->SetEntries(111);

   ci = 1511;
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
   hs6->Add(hnueCCinFV_stack_13,"");
   hs6->Draw("hist same");
   
   TH1F *hmcerror__17 = new TH1F("hmcerror__17","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);
   hmcerror__17->SetBinContent(1,4.4546);
   hmcerror__17->SetBinContent(2,34.58483);
   hmcerror__17->SetBinContent(3,96.10646);
   hmcerror__17->SetBinContent(4,233.8917);
   hmcerror__17->SetBinContent(5,381.4747);
   hmcerror__17->SetBinContent(6,397.5198);
   hmcerror__17->SetBinContent(7,410.4949);
   hmcerror__17->SetBinContent(8,350.3976);
   hmcerror__17->SetBinContent(9,289.4733);
   hmcerror__17->SetBinContent(10,257.6313);
   hmcerror__17->SetBinContent(11,207.6289);
   hmcerror__17->SetBinContent(12,172.5557);
   hmcerror__17->SetBinContent(13,145.8834);
   hmcerror__17->SetBinContent(14,118.1019);
   hmcerror__17->SetBinContent(15,93.48536);
   hmcerror__17->SetBinContent(16,83.40084);
   hmcerror__17->SetBinContent(17,68.17933);
   hmcerror__17->SetBinContent(18,54.42466);
   hmcerror__17->SetBinContent(19,49.21971);
   hmcerror__17->SetBinContent(20,35.45741);
   hmcerror__17->SetBinContent(21,26.93516);
   hmcerror__17->SetBinContent(22,21.18319);
   hmcerror__17->SetBinContent(23,20.03159);
   hmcerror__17->SetBinContent(24,15.69471);
   hmcerror__17->SetBinContent(25,114.7943);
   hmcerror__17->SetBinError(1,4.505316);
   hmcerror__17->SetBinError(2,17.95604);
   hmcerror__17->SetBinError(3,29.04166);
   hmcerror__17->SetBinError(4,80.22158);
   hmcerror__17->SetBinError(5,89.18706);
   hmcerror__17->SetBinError(6,95.36504);
   hmcerror__17->SetBinError(7,98.95413);
   hmcerror__17->SetBinError(8,89.71891);
   hmcerror__17->SetBinError(9,77.47347);
   hmcerror__17->SetBinError(10,74.37495);
   hmcerror__17->SetBinError(11,62.27719);
   hmcerror__17->SetBinError(12,54.71106);
   hmcerror__17->SetBinError(13,49.07411);
   hmcerror__17->SetBinError(14,42.97421);
   hmcerror__17->SetBinError(15,35.75328);
   hmcerror__17->SetBinError(16,32.84707);
   hmcerror__17->SetBinError(17,26.65629);
   hmcerror__17->SetBinError(18,25.66743);
   hmcerror__17->SetBinError(19,21.7373);
   hmcerror__17->SetBinError(20,16.82208);
   hmcerror__17->SetBinError(21,16.53676);
   hmcerror__17->SetBinError(22,11.83447);
   hmcerror__17->SetBinError(23,11.76769);
   hmcerror__17->SetBinError(24,13.20936);
   hmcerror__17->SetBinError(25,39.57714);
   hmcerror__17->SetEntries(3645.257);

   ci = TColor::GetColor("#999999");
   hmcerror__17->SetFillColor(ci);
   hmcerror__17->SetFillStyle(3002);
   hmcerror__17->SetLineColor(12);
   hmcerror__17->SetLineWidth(0);
   hmcerror__17->SetMarkerColor(0);
   hmcerror__17->SetMarkerSize(0);
   hmcerror__17->GetXaxis()->SetLabelFont(42);
   hmcerror__17->GetXaxis()->SetTitleOffset(1);
   hmcerror__17->GetXaxis()->SetTitleFont(42);
   hmcerror__17->GetYaxis()->SetLabelFont(42);
   hmcerror__17->GetYaxis()->SetTitleFont(42);
   hmcerror__17->GetZaxis()->SetLabelFont(42);
   hmcerror__17->GetZaxis()->SetTitleOffset(1);
   hmcerror__17->GetZaxis()->SetTitleFont(42);
   hmcerror__17->Draw("same E2");
   
   Double_t _fx3021[24] = {
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
   Double_t _fy3021[24] = {
   2,
   31,
   108,
   286,
   398,
   448,
   373,
   365,
   296,
   223,
   189,
   163,
   107,
   77,
   75,
   60,
   51,
   52,
   36,
   25,
   26,
   17,
   11,
   16};
   Double_t _felx3021[24] = {
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
   Double_t _fely3021[24] = {
   2,
   5.7094,
   10.3923,
   16.91153,
   19.94994,
   21.16601,
   19.31321,
   19.10497,
   17.20465,
   14.93318,
   13.74773,
   12.76715,
   10.34408,
   8.8995,
   8.7852,
   7.8743,
   7.2725,
   7.3419,
   6.1381,
   5.1474,
   5.2453,
   4.2835,
   3.4975,
   4.1628};
   Double_t _fehx3021[24] = {
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
   Double_t _fehy3021[24] = {
   1.51917,
   5.5017,
   10.3923,
   16.91153,
   19.94994,
   21.16601,
   19.31321,
   19.10497,
   17.20465,
   14.93318,
   13.74773,
   12.76715,
   10.34408,
   8.6976,
   8.5831,
   7.6713,
   7.0686,
   7.1381,
   5.9318,
   4.9374,
   5.0358,
   4.0673,
   3.27,
   3.9454};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,660);
   Graph_Graph3021->SetMinimum(0);
   Graph_Graph3021->SetMaximum(516.0826);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineWidth(2);
   Graph_Graph3021->SetMarkerStyle(20);
   Graph_Graph3021->GetXaxis()->SetNdivisions(509);
   Graph_Graph3021->GetXaxis()->SetLabelFont(132);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetXaxis()->SetTitleFont(132);
   Graph_Graph3021->GetYaxis()->SetNdivisions(509);
   Graph_Graph3021->GetYaxis()->SetLabelFont(132);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3021->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3021->GetYaxis()->SetTitleFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelFont(132);
   Graph_Graph3021->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3021->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3021->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.96#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.5/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3435.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 82.8","F");

   ci = 1499;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 283.1","F");

   ci = 1500;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 41.9","F");

   ci = 1501;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 337.7","F");

   ci = 1502;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  83.5","F");

   ci = 1503;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.6","F");

   ci = 1504;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1491.2","F");

   ci = 1505;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  279.3","F");

   ci = 1506;
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

   ci = 1507;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 480.3","F");

   ci = 1508;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 248.2","F");

   ci = 1509;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 208.1","F");

   ci = 1510;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 19.9","F");

   ci = 1511;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all");
   pt->Draw();
   pad1->Modified();
   canvas6->cd();
  
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
   
   Double_t _fx3022[24] = {
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
   Double_t _fy3022[24] = {
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
   Double_t _felx3022[24] = {
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
   Double_t _fely3022[24] = {
   1.011385,
   0.5191883,
   0.3021822,
   0.342986,
   0.2337955,
   0.2399001,
   0.2410606,
   0.2560489,
   0.267636,
   0.2886875,
   0.2999447,
   0.3170632,
   0.3363927,
   0.363874,
   0.3824479,
   0.3938458,
   0.3909732,
   0.4716139,
   0.4416381,
   0.4744307,
   0.613947,
   0.558673,
   0.5874564,
   0.8416442};
   Double_t _fehx3022[24] = {
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
   Double_t _fehy3022[24] = {
   1.011385,
   0.5191883,
   0.3021822,
   0.342986,
   0.2337955,
   0.2399001,
   0.2410606,
   0.2560489,
   0.267636,
   0.2886875,
   0.2999447,
   0.3170632,
   0.3363927,
   0.363874,
   0.3824479,
   0.3938458,
   0.3909732,
   0.4716139,
   0.4416381,
   0.4744307,
   0.613947,
   0.558673,
   0.5874564,
   0.8416442};
   grae = new TGraphAsymmErrors(24,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,660);
   Graph_Graph3022->SetMinimum(0);
   Graph_Graph3022->SetMaximum(2);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineWidth(2);
   Graph_Graph3022->SetMarkerStyle(20);
   Graph_Graph3022->GetXaxis()->SetTitle("Leading shower Energy [MeV]");
   Graph_Graph3022->GetXaxis()->SetRange(1,91);
   Graph_Graph3022->GetXaxis()->SetNdivisions(509);
   Graph_Graph3022->GetXaxis()->SetLabelFont(132);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3022->GetXaxis()->SetTitleFont(132);
   Graph_Graph3022->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3022->GetYaxis()->SetNdivisions(210);
   Graph_Graph3022->GetYaxis()->SetLabelFont(132);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3022->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3022->GetYaxis()->SetTitleFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelFont(132);
   Graph_Graph3022->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3022->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3022->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3022);
   
   grae->Draw("a2");
   
   Double_t _fx3023[24] = {
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
   Double_t _fy3023[24] = {
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
   Double_t _felx3023[24] = {
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
   Double_t _fely3023[24] = {
   0.3301939,
   0.1844659,
   0.1909785,
   0.2020115,
   0.2064005,
   0.2144389,
   0.220192,
   0.230712,
   0.2412143,
   0.2525219,
   0.2664388,
   0.2749561,
   0.3056638,
   0.322441,
   0.3279216,
   0.3424842,
   0.3402888,
   0.3197915,
   0.3352552,
   0.3336238,
   0.3287264,
   0.3423706,
   0.2940986,
   0.3229529};
   Double_t _fehx3023[24] = {
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
   Double_t _fehy3023[24] = {
   0.3301939,
   0.1844659,
   0.1909785,
   0.2020115,
   0.2064005,
   0.2144389,
   0.220192,
   0.230712,
   0.2412143,
   0.2525219,
   0.2664388,
   0.2749561,
   0.3056638,
   0.322441,
   0.3279216,
   0.3424842,
   0.3402888,
   0.3197915,
   0.3352552,
   0.3336238,
   0.3287264,
   0.3423706,
   0.2940986,
   0.3229529};
   grae = new TGraphAsymmErrors(24,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,660);
   Graph_Graph3023->SetMinimum(0);
   Graph_Graph3023->SetMaximum(2);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineWidth(2);
   Graph_Graph3023->SetMarkerStyle(20);
   Graph_Graph3023->GetXaxis()->SetRange(1,91);
   Graph_Graph3023->GetXaxis()->SetNdivisions(509);
   Graph_Graph3023->GetXaxis()->SetLabelFont(132);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetXaxis()->SetTitleFont(132);
   Graph_Graph3023->GetYaxis()->SetNdivisions(509);
   Graph_Graph3023->GetYaxis()->SetLabelFont(132);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3023->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3023->GetYaxis()->SetTitleFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelFont(132);
   Graph_Graph3023->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3023->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3023->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("2 ");
   
   Double_t _fx3024[24] = {
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
   Double_t _fy3024[24] = {
   0.4489741,
   0.8963468,
   1.123754,
   1.222788,
   1.04332,
   1.126988,
   0.9086593,
   1.041674,
   1.022547,
   0.865578,
   0.9102779,
   0.9446225,
   0.7334624,
   0.6519792,
   0.8022647,
   0.7194172,
   0.7480273,
   0.9554492,
   0.7314143,
   0.7050713,
   0.9652809,
   0.8025233,
   0.5491327,
   1.019452};
   Double_t _felx3024[24] = {
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
   Double_t _fely3024[24] = {
   0.4489741,
   0.165084,
   0.1081333,
   0.07230497,
   0.05229689,
   0.05324518,
   0.04704859,
   0.0545237,
   0.05943432,
   0.05796339,
   0.06621298,
   0.07398854,
   0.07090648,
   0.07535441,
   0.09397407,
   0.09441512,
   0.1066672,
   0.1349002,
   0.1247082,
   0.1451714,
   0.194738,
   0.2022123,
   0.1745992,
   0.2652359};
   Double_t _fehx3024[24] = {
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
   Double_t _fehy3024[24] = {
   0.341034,
   0.1590784,
   0.1081333,
   0.07230497,
   0.05229689,
   0.05324518,
   0.04704859,
   0.0545237,
   0.05943432,
   0.05796339,
   0.06621298,
   0.07398854,
   0.07090648,
   0.07364486,
   0.09181224,
   0.09198109,
   0.1036766,
   0.1311556,
   0.1205168,
   0.1392488,
   0.1869601,
   0.1920061,
   0.1632422,
   0.2513841};
   grae = new TGraphAsymmErrors(24,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,660);
   Graph_Graph3024->SetMinimum(0);
   Graph_Graph3024->SetMaximum(1.424602);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineWidth(2);
   Graph_Graph3024->SetMarkerStyle(20);
   Graph_Graph3024->GetXaxis()->SetNdivisions(509);
   Graph_Graph3024->GetXaxis()->SetLabelFont(132);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetXaxis()->SetTitleFont(132);
   Graph_Graph3024->GetYaxis()->SetNdivisions(509);
   Graph_Graph3024->GetYaxis()->SetLabelFont(132);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3024->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3024->GetYaxis()->SetTitleFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelFont(132);
   Graph_Graph3024->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3024->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3024->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3024);
   
   grae->Draw("p ");
   
   TH1F *hist__18 = new TH1F("hist__18","NCpi0BDT_FC_0p_bnb_12_kine_pio_energy_high_all",24,0,600);

   ci = TColor::GetColor("#000099");
   hist__18->SetLineColor(ci);
   hist__18->GetXaxis()->SetLabelFont(42);
   hist__18->GetXaxis()->SetTitleOffset(1);
   hist__18->GetXaxis()->SetTitleFont(42);
   hist__18->GetYaxis()->SetNdivisions(405);
   hist__18->GetYaxis()->SetLabelFont(42);
   hist__18->GetYaxis()->SetTitleFont(42);
   hist__18->GetZaxis()->SetLabelFont(42);
   hist__18->GetZaxis()->SetTitleOffset(1);
   hist__18->GetZaxis()->SetTitleFont(42);
   hist__18->Draw("axis same");
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
   canvas6->cd();
   canvas6->Modified();
   canvas6->cd();
   canvas6->SetSelected(canvas6);
}
