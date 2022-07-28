#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Wed May 25 18:53:06 2022) by ROOT version 6.26/00
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
   pad1->Range(-230.7692,-29.5,1692.308,2485.763);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   hmc__1->SetBinContent(1,388.5587);
   hmc__1->SetBinContent(2,1377.079);
   hmc__1->SetBinContent(3,879.7173);
   hmc__1->SetBinContent(4,500.5218);
   hmc__1->SetBinContent(5,257.1761);
   hmc__1->SetBinContent(6,150.9836);
   hmc__1->SetBinContent(7,87.81764);
   hmc__1->SetBinContent(8,50.08611);
   hmc__1->SetBinContent(9,34.24602);
   hmc__1->SetBinContent(10,19.67445);
   hmc__1->SetBinContent(11,15.60337);
   hmc__1->SetBinContent(12,13.88162);
   hmc__1->SetBinContent(13,8.616982);
   hmc__1->SetBinContent(14,8.289871);
   hmc__1->SetBinContent(15,4.486778);
   hmc__1->SetBinContent(16,3.495657);
   hmc__1->SetBinContent(17,3.953964);
   hmc__1->SetBinContent(18,2.287106);
   hmc__1->SetBinContent(19,1.89169);
   hmc__1->SetBinContent(20,0.9268289);
   hmc__1->SetBinContent(21,11.70646);
   hmc__1->SetBinError(1,86.0926);
   hmc__1->SetBinError(2,285.0414);
   hmc__1->SetBinError(3,172.8966);
   hmc__1->SetBinError(4,97.73031);
   hmc__1->SetBinError(5,47.98862);
   hmc__1->SetBinError(6,29.87902);
   hmc__1->SetBinError(7,17.93565);
   hmc__1->SetBinError(8,11.73194);
   hmc__1->SetBinError(9,9.372416);
   hmc__1->SetBinError(10,5.375993);
   hmc__1->SetBinError(11,5.354631);
   hmc__1->SetBinError(12,4.546889);
   hmc__1->SetBinError(13,4.760419);
   hmc__1->SetBinError(14,4.580091);
   hmc__1->SetBinError(15,2.678631);
   hmc__1->SetBinError(16,2.661282);
   hmc__1->SetBinError(17,2.102028);
   hmc__1->SetBinError(18,1.854657);
   hmc__1->SetBinError(19,2.154581);
   hmc__1->SetBinError(20,1.018886);
   hmc__1->SetBinError(21,4.906886);
   hmc__1->SetMinimum(-29.5);
   hmc__1->SetMaximum(2360);
   hmc__1->SetEntries(3775.136);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,1500);
   hs1_stack_1->SetMinimum(-6.289654e-09);
   hs1_stack_1->SetMaximum(1445.933);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(1,20.26647);
   hbadmatch_stack_1->SetBinContent(2,29.15683);
   hbadmatch_stack_1->SetBinContent(3,21.98984);
   hbadmatch_stack_1->SetBinContent(4,11.03983);
   hbadmatch_stack_1->SetBinContent(5,3.696755);
   hbadmatch_stack_1->SetBinContent(6,3.498284);
   hbadmatch_stack_1->SetBinContent(7,2.685759);
   hbadmatch_stack_1->SetBinContent(8,2.081856);
   hbadmatch_stack_1->SetBinContent(9,1.610679);
   hbadmatch_stack_1->SetBinContent(10,0.6803553);
   hbadmatch_stack_1->SetBinContent(11,0.8123149);
   hbadmatch_stack_1->SetBinContent(12,0.4749889);
   hbadmatch_stack_1->SetBinContent(15,0.2274734);
   hbadmatch_stack_1->SetBinContent(19,0.3401776);
   hbadmatch_stack_1->SetBinContent(21,0.3917402);
   hbadmatch_stack_1->SetBinError(1,2.418802);
   hbadmatch_stack_1->SetBinError(2,3.202228);
   hbadmatch_stack_1->SetBinError(3,2.928982);
   hbadmatch_stack_1->SetBinError(4,1.731012);
   hbadmatch_stack_1->SetBinError(5,1.050558);
   hbadmatch_stack_1->SetBinError(6,1.363367);
   hbadmatch_stack_1->SetBinError(7,0.846419);
   hbadmatch_stack_1->SetBinError(8,0.8236229);
   hbadmatch_stack_1->SetBinError(9,0.6806271);
   hbadmatch_stack_1->SetBinError(10,0.4810838);
   hbadmatch_stack_1->SetBinError(11,0.4067552);
   hbadmatch_stack_1->SetBinError(12,0.4749889);
   hbadmatch_stack_1->SetBinError(15,0.2274734);
   hbadmatch_stack_1->SetBinError(19,0.3401776);
   hbadmatch_stack_1->SetBinError(21,0.2770047);
   hbadmatch_stack_1->SetEntries(378);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   hext_stack_2->SetBinContent(1,64.36989);
   hext_stack_2->SetBinContent(2,177.6817);
   hext_stack_2->SetBinContent(3,96.00291);
   hext_stack_2->SetBinContent(4,52.04669);
   hext_stack_2->SetBinContent(5,30.61121);
   hext_stack_2->SetBinContent(6,17.57421);
   hext_stack_2->SetBinContent(7,10.3724);
   hext_stack_2->SetBinContent(8,9.716425);
   hext_stack_2->SetBinContent(9,2.599588);
   hext_stack_2->SetBinContent(10,3.725593);
   hext_stack_2->SetBinContent(11,2.103607);
   hext_stack_2->SetBinContent(12,2.599588);
   hext_stack_2->SetBinContent(13,1.055394);
   hext_stack_2->SetBinContent(14,0.4065989);
   hext_stack_2->SetBinContent(15,0.7309963);
   hext_stack_2->SetBinContent(16,1.137595);
   hext_stack_2->SetBinContent(17,1.461993);
   hext_stack_2->SetBinContent(18,0.4065989);
   hext_stack_2->SetBinContent(21,2.841783);
   hext_stack_2->SetBinError(1,5.478173);
   hext_stack_2->SetBinError(2,8.92618);
   hext_stack_2->SetBinError(3,6.589332);
   hext_stack_2->SetBinError(4,4.986723);
   hext_stack_2->SetBinError(5,3.869505);
   hext_stack_2->SetBinError(6,2.73686);
   hext_stack_2->SetBinError(7,2.091996);
   hext_stack_2->SetBinError(8,2.08978);
   hext_stack_2->SetBinError(9,0.9884288);
   hext_stack_2->SetBinError(10,1.216121);
   hext_stack_2->SetBinError(11,0.9761052);
   hext_stack_2->SetBinError(12,0.9884288);
   hext_stack_2->SetBinError(13,0.6130171);
   hext_stack_2->SetBinError(14,0.4065989);
   hext_stack_2->SetBinError(15,0.5201503);
   hext_stack_2->SetBinError(16,0.6602113);
   hext_stack_2->SetBinError(17,0.7356036);
   hext_stack_2->SetBinError(18,0.4065989);
   hext_stack_2->SetBinError(21,1.011007);
   hext_stack_2->SetEntries(1136);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   hdirt_stack_3->SetBinContent(1,12.32518);
   hdirt_stack_3->SetBinContent(2,24.41999);
   hdirt_stack_3->SetBinContent(3,9.166782);
   hdirt_stack_3->SetBinContent(4,5.600076);
   hdirt_stack_3->SetBinContent(5,0.7050098);
   hdirt_stack_3->SetBinContent(6,2.498976);
   hdirt_stack_3->SetBinContent(7,1.728587);
   hdirt_stack_3->SetBinContent(8,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.3895662);
   hdirt_stack_3->SetBinError(1,1.870797);
   hdirt_stack_3->SetBinError(2,2.582739);
   hdirt_stack_3->SetBinError(3,1.55461);
   hdirt_stack_3->SetBinError(4,1.508776);
   hdirt_stack_3->SetBinError(5,0.4310004);
   hdirt_stack_3->SetBinError(6,0.8332275);
   hdirt_stack_3->SetBinError(7,1.087277);
   hdirt_stack_3->SetBinError(8,0.2188956);
   hdirt_stack_3->SetBinError(11,0.3895662);
   hdirt_stack_3->SetEntries(238);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   houtFV_stack_4->SetBinContent(1,83.02479);
   houtFV_stack_4->SetBinContent(2,226.4313);
   houtFV_stack_4->SetBinContent(3,111.9504);
   houtFV_stack_4->SetBinContent(4,41.95894);
   houtFV_stack_4->SetBinContent(5,19.84144);
   houtFV_stack_4->SetBinContent(6,9.308737);
   houtFV_stack_4->SetBinContent(7,4.831837);
   houtFV_stack_4->SetBinContent(8,2.535931);
   houtFV_stack_4->SetBinContent(9,2.227032);
   houtFV_stack_4->SetBinContent(10,1.227074);
   houtFV_stack_4->SetBinContent(11,0.1950248);
   houtFV_stack_4->SetBinContent(12,0.3934307);
   houtFV_stack_4->SetBinContent(13,0.9259748);
   houtFV_stack_4->SetBinContent(14,0.4234941);
   houtFV_stack_4->SetBinContent(15,0.1967154);
   houtFV_stack_4->SetBinContent(16,0.3917402);
   houtFV_stack_4->SetBinError(1,4.542799);
   houtFV_stack_4->SetBinError(2,7.630182);
   houtFV_stack_4->SetBinError(3,5.306425);
   houtFV_stack_4->SetBinError(4,3.351699);
   houtFV_stack_4->SetBinError(5,2.310952);
   houtFV_stack_4->SetBinError(6,1.562873);
   houtFV_stack_4->SetBinError(7,1.123291);
   houtFV_stack_4->SetBinError(8,0.8325131);
   houtFV_stack_4->SetBinError(9,0.7685322);
   houtFV_stack_4->SetBinError(10,0.5911038);
   houtFV_stack_4->SetBinError(11,0.1950249);
   houtFV_stack_4->SetBinError(12,0.2781975);
   houtFV_stack_4->SetBinError(13,0.5401579);
   houtFV_stack_4->SetBinError(14,0.3002091);
   houtFV_stack_4->SetBinError(15,0.1967154);
   houtFV_stack_4->SetBinError(16,0.2770047);
   houtFV_stack_4->SetEntries(2163);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,3.916474);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,31.66646);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,26.42341);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,17.4306);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,7.965327);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.493668);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.788848);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.7798718);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.6274177);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.5430539);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.488086);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.404386);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.6007194);
   hNCpi0inFVcoh_stack_5->SetBinError(2,1.837025);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.712175);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.414637);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9921608);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.8005639);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5311437);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.220864);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.155758);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1881969);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2304939);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2253713);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.2387875);
   hNCpi0inFVcoh_stack_5->SetEntries(1820);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,168.0124);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,638.3087);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,368.044);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,189.7686);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,82.76666);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,46.13315);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,22.64309);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,13.03616);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,8.504884);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,4.700674);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,3.096084);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,2.733552);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,1.993862);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,1.93823);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,1.18509);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,0.3205179);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,0.697004);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,0.460186);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,0.4178359);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,0.3620359);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,1.602926);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,4.306825);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,8.186597);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,6.236573);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,4.512026);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.925737);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.176785);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,1.486086);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,1.15758);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,0.9539273);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,0.7339854);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,0.5968199);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,0.6154946);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,0.469493);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,0.5016232);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,0.3447308);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,0.1252919);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,0.2563433);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,0.2287991);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,0.158647);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,0.1536621);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,0.3794841);
   hNCpi0inFVnoncoh_stack_6->SetEntries(29026);

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   hCCpi0inFV_stack_7->SetBinContent(1,15.82494);
   hCCpi0inFV_stack_7->SetBinContent(2,141.9988);
   hCCpi0inFV_stack_7->SetBinContent(3,149.6042);
   hCCpi0inFV_stack_7->SetBinContent(4,112.0671);
   hCCpi0inFV_stack_7->SetBinContent(5,72.51118);
   hCCpi0inFV_stack_7->SetBinContent(6,44.4871);
   hCCpi0inFV_stack_7->SetBinContent(7,32.4131);
   hCCpi0inFV_stack_7->SetBinContent(8,14.85644);
   hCCpi0inFV_stack_7->SetBinContent(9,11.96742);
   hCCpi0inFV_stack_7->SetBinContent(10,5.725299);
   hCCpi0inFV_stack_7->SetBinContent(11,7.120772);
   hCCpi0inFV_stack_7->SetBinContent(12,5.031525);
   hCCpi0inFV_stack_7->SetBinContent(13,2.732646);
   hCCpi0inFV_stack_7->SetBinContent(14,1.715495);
   hCCpi0inFV_stack_7->SetBinContent(15,0.9252522);
   hCCpi0inFV_stack_7->SetBinContent(16,0.7834804);
   hCCpi0inFV_stack_7->SetBinContent(17,1.375317);
   hCCpi0inFV_stack_7->SetBinContent(18,1.073786);
   hCCpi0inFV_stack_7->SetBinContent(19,0.9269427);
   hCCpi0inFV_stack_7->SetBinContent(20,0.536893);
   hCCpi0inFV_stack_7->SetBinContent(21,3.319412);
   hCCpi0inFV_stack_7->SetBinError(1,1.986458);
   hCCpi0inFV_stack_7->SetBinError(2,5.936257);
   hCCpi0inFV_stack_7->SetBinError(3,6.117592);
   hCCpi0inFV_stack_7->SetBinError(4,5.329176);
   hCCpi0inFV_stack_7->SetBinError(5,4.230278);
   hCCpi0inFV_stack_7->SetBinError(6,3.428655);
   hCCpi0inFV_stack_7->SetBinError(7,2.893708);
   hCCpi0inFV_stack_7->SetBinError(8,1.922948);
   hCCpi0inFV_stack_7->SetBinError(9,1.755636);
   hCCpi0inFV_stack_7->SetBinError(10,1.153379);
   hCCpi0inFV_stack_7->SetBinError(11,1.373013);
   hCCpi0inFV_stack_7->SetBinError(12,1.109574);
   hCCpi0inFV_stack_7->SetBinError(13,0.8554385);
   hCCpi0inFV_stack_7->SetBinError(14,0.6212384);
   hCCpi0inFV_stack_7->SetBinError(15,0.4794006);
   hCCpi0inFV_stack_7->SetBinError(16,0.3917439);
   hCCpi0inFV_stack_7->SetBinError(17,0.5198233);
   hCCpi0inFV_stack_7->SetBinError(18,0.5557297);
   hCCpi0inFV_stack_7->SetBinError(19,0.4800908);
   hCCpi0inFV_stack_7->SetBinError(20,0.3929602);
   hCCpi0inFV_stack_7->SetBinError(21,0.9200768);
   hCCpi0inFV_stack_7->SetEntries(2680);

   ci = 1440;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   hNCinFV_stack_8->SetBinContent(1,11.13068);
   hNCinFV_stack_8->SetBinContent(2,48.91941);
   hNCinFV_stack_8->SetBinContent(3,39.447);
   hNCinFV_stack_8->SetBinContent(4,21.50987);
   hNCinFV_stack_8->SetBinContent(5,9.523384);
   hNCinFV_stack_8->SetBinContent(6,8.449598);
   hNCinFV_stack_8->SetBinContent(7,1.710423);
   hNCinFV_stack_8->SetBinContent(8,1.125349);
   hNCinFV_stack_8->SetBinContent(9,1.320373);
   hNCinFV_stack_8->SetBinContent(10,0.1967154);
   hNCinFV_stack_8->SetBinContent(11,0.1950248);
   hNCinFV_stack_8->SetBinContent(13,0.3934307);
   hNCinFV_stack_8->SetBinContent(14,0.3401776);
   hNCinFV_stack_8->SetBinContent(15,0.3401776);
   hNCinFV_stack_8->SetBinContent(17,0.1950248);
   hNCinFV_stack_8->SetBinContent(21,0.3401776);
   hNCinFV_stack_8->SetBinError(1,1.722534);
   hNCinFV_stack_8->SetBinError(2,3.505832);
   hNCinFV_stack_8->SetBinError(3,3.185049);
   hNCinFV_stack_8->SetBinError(4,2.279944);
   hNCinFV_stack_8->SetBinError(5,1.58278);
   hNCinFV_stack_8->SetBinError(6,1.482011);
   hNCinFV_stack_8->SetBinError(7,0.6196373);
   hNCinFV_stack_8->SetBinError(8,0.5194673);
   hNCinFV_stack_8->SetBinError(9,0.5548703);
   hNCinFV_stack_8->SetBinError(10,0.1967154);
   hNCinFV_stack_8->SetBinError(11,0.1950249);
   hNCinFV_stack_8->SetBinError(13,0.2781975);
   hNCinFV_stack_8->SetBinError(14,0.3401776);
   hNCinFV_stack_8->SetBinError(15,0.3401776);
   hNCinFV_stack_8->SetBinError(17,0.1950249);
   hNCinFV_stack_8->SetBinError(21,0.3401776);
   hNCinFV_stack_8->SetEntries(615);

   ci = 1441;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   hnumuCCinFV_stack_9->SetBinContent(1,7.501844);
   hnumuCCinFV_stack_9->SetBinContent(2,52.17167);
   hnumuCCinFV_stack_9->SetBinContent(3,52.55242);
   hnumuCCinFV_stack_9->SetBinContent(4,45.95782);
   hnumuCCinFV_stack_9->SetBinContent(5,26.80957);
   hnumuCCinFV_stack_9->SetBinContent(6,11.95214);
   hnumuCCinFV_stack_9->SetBinContent(7,7.77002);
   hnumuCCinFV_stack_9->SetBinContent(8,4.934431);
   hnumuCCinFV_stack_9->SetBinContent(9,4.146187);
   hnumuCCinFV_stack_9->SetBinContent(10,1.590654);
   hnumuCCinFV_stack_9->SetBinContent(11,0.7898498);
   hnumuCCinFV_stack_9->SetBinContent(12,1.123658);
   hnumuCCinFV_stack_9->SetBinContent(13,0.4551731);
   hnumuCCinFV_stack_9->SetBinContent(14,0.4481466);
   hnumuCCinFV_stack_9->SetBinContent(15,0.5884556);
   hnumuCCinFV_stack_9->SetBinContent(16,0.1967154);
   hnumuCCinFV_stack_9->SetBinContent(21,0.1950248);
   hnumuCCinFV_stack_9->SetBinError(1,2.173007);
   hnumuCCinFV_stack_9->SetBinError(2,4.655152);
   hnumuCCinFV_stack_9->SetBinError(3,4.367347);
   hnumuCCinFV_stack_9->SetBinError(4,3.80766);
   hnumuCCinFV_stack_9->SetBinError(5,2.851393);
   hnumuCCinFV_stack_9->SetBinError(6,1.788483);
   hnumuCCinFV_stack_9->SetBinError(7,1.770574);
   hnumuCCinFV_stack_9->SetBinError(8,1.405954);
   hnumuCCinFV_stack_9->SetBinError(9,1.136642);
   hnumuCCinFV_stack_9->SetBinError(10,0.6151092);
   hnumuCCinFV_stack_9->SetBinError(11,0.4849978);
   hnumuCCinFV_stack_9->SetBinError(12,0.5188295);
   hnumuCCinFV_stack_9->SetBinError(13,0.3248035);
   hnumuCCinFV_stack_9->SetBinError(14,0.3195392);
   hnumuCCinFV_stack_9->SetBinError(15,0.3397478);
   hnumuCCinFV_stack_9->SetBinError(16,0.1967154);
   hnumuCCinFV_stack_9->SetBinError(21,0.1950249);
   hnumuCCinFV_stack_9->SetEntries(846);

   ci = 1442;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   hnueCCinFV_stack_10->SetBinContent(1,2.186077);
   hnueCCinFV_stack_10->SetBinContent(2,6.324437);
   hnueCCinFV_stack_10->SetBinContent(3,4.536272);
   hnueCCinFV_stack_10->SetBinContent(4,3.142334);
   hnueCCinFV_stack_10->SetBinContent(5,2.745548);
   hnueCCinFV_stack_10->SetBinContent(6,1.587692);
   hnueCCinFV_stack_10->SetBinContent(7,0.8735735);
   hnueCCinFV_stack_10->SetBinContent(8,0.8007563);
   hnueCCinFV_stack_10->SetBinContent(9,1.242441);
   hnueCCinFV_stack_10->SetBinContent(10,1.285027);
   hnueCCinFV_stack_10->SetBinContent(11,0.4130405);
   hnueCCinFV_stack_10->SetBinContent(12,1.03679);
   hnueCCinFV_stack_10->SetBinContent(13,0.6984651);
   hnueCCinFV_stack_10->SetBinContent(14,2.613343);
   hnueCCinFV_stack_10->SetBinContent(16,0.4566905);
   hnueCCinFV_stack_10->SetBinContent(17,0.1967257);
   hnueCCinFV_stack_10->SetBinContent(18,0.2213169);
   hnueCCinFV_stack_10->SetBinContent(19,0.08151597);
   hnueCCinFV_stack_10->SetBinContent(21,2.387808);
   hnueCCinFV_stack_10->SetBinError(1,1.403542);
   hnueCCinFV_stack_10->SetBinError(2,1.474872);
   hnueCCinFV_stack_10->SetBinError(3,1.471523);
   hnueCCinFV_stack_10->SetBinError(4,0.9592716);
   hnueCCinFV_stack_10->SetBinError(5,0.8133715);
   hnueCCinFV_stack_10->SetBinError(6,0.6956207);
   hnueCCinFV_stack_10->SetBinError(7,0.5269411);
   hnueCCinFV_stack_10->SetBinError(8,0.4932626);
   hnueCCinFV_stack_10->SetBinError(9,0.6637039);
   hnueCCinFV_stack_10->SetBinError(10,0.528098);
   hnueCCinFV_stack_10->SetBinError(11,0.2925159);
   hnueCCinFV_stack_10->SetBinError(12,0.8625403);
   hnueCCinFV_stack_10->SetBinError(13,0.4940554);
   hnueCCinFV_stack_10->SetBinError(14,1.677745);
   hnueCCinFV_stack_10->SetBinError(16,0.4566905);
   hnueCCinFV_stack_10->SetBinError(17,0.1967154);
   hnueCCinFV_stack_10->SetBinError(18,0.2213169);
   hnueCCinFV_stack_10->SetBinError(19,0.08151597);
   hnueCCinFV_stack_10->SetBinError(21,0.9551241);
   hnueCCinFV_stack_10->SetEntries(115);

   ci = 1443;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_10,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);
   hmcerror__2->SetBinContent(1,388.5587);
   hmcerror__2->SetBinContent(2,1377.079);
   hmcerror__2->SetBinContent(3,879.7173);
   hmcerror__2->SetBinContent(4,500.5218);
   hmcerror__2->SetBinContent(5,257.1761);
   hmcerror__2->SetBinContent(6,150.9836);
   hmcerror__2->SetBinContent(7,87.81764);
   hmcerror__2->SetBinContent(8,50.08611);
   hmcerror__2->SetBinContent(9,34.24602);
   hmcerror__2->SetBinContent(10,19.67445);
   hmcerror__2->SetBinContent(11,15.60337);
   hmcerror__2->SetBinContent(12,13.88162);
   hmcerror__2->SetBinContent(13,8.616982);
   hmcerror__2->SetBinContent(14,8.289871);
   hmcerror__2->SetBinContent(15,4.486778);
   hmcerror__2->SetBinContent(16,3.495657);
   hmcerror__2->SetBinContent(17,3.953964);
   hmcerror__2->SetBinContent(18,2.287106);
   hmcerror__2->SetBinContent(19,1.89169);
   hmcerror__2->SetBinContent(20,0.9268289);
   hmcerror__2->SetBinContent(21,11.70646);
   hmcerror__2->SetBinError(1,86.0926);
   hmcerror__2->SetBinError(2,285.0414);
   hmcerror__2->SetBinError(3,172.8966);
   hmcerror__2->SetBinError(4,97.73031);
   hmcerror__2->SetBinError(5,47.98862);
   hmcerror__2->SetBinError(6,29.87902);
   hmcerror__2->SetBinError(7,17.93565);
   hmcerror__2->SetBinError(8,11.73194);
   hmcerror__2->SetBinError(9,9.372416);
   hmcerror__2->SetBinError(10,5.375993);
   hmcerror__2->SetBinError(11,5.354631);
   hmcerror__2->SetBinError(12,4.546889);
   hmcerror__2->SetBinError(13,4.760419);
   hmcerror__2->SetBinError(14,4.580091);
   hmcerror__2->SetBinError(15,2.678631);
   hmcerror__2->SetBinError(16,2.661282);
   hmcerror__2->SetBinError(17,2.102028);
   hmcerror__2->SetBinError(18,1.854657);
   hmcerror__2->SetBinError(19,2.154581);
   hmcerror__2->SetBinError(20,1.018886);
   hmcerror__2->SetBinError(21,4.906886);
   hmcerror__2->SetEntries(3775.136);

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
   
   Double_t _fx3001[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3001[20] = {
   424,
   1475,
   864,
   433,
   250,
   130,
   74,
   54,
   28,
   22,
   18,
   11,
   8,
   7,
   7,
   3,
   1,
   1,
   2,
   2};
   Double_t _felx3001[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3001[20] = {
   20.59126,
   38.40573,
   29.39388,
   20.80865,
   15.81139,
   11.40175,
   8.7275,
   7.4785,
   5.4358,
   4.8417,
   4.4008,
   3.4975,
   3.0307,
   2.85954,
   2.85954,
   2.143368,
   1,
   1,
   2,
   2};
   Double_t _fehx3001[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3001[20] = {
   20.59126,
   38.40573,
   29.39388,
   20.80865,
   15.81139,
   11.40175,
   8.5253,
   7.275,
   5.2271,
   4.6299,
   4.1858,
   3.27,
   2.7896,
   2.61053,
   2.61053,
   1.72422,
   1.35971,
   1.35971,
   1.51917,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(1664.746);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.00#pm0.19","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3814.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 98.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 474.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 57.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 505.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  100.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1555.1","F");

   ci = 1439;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 623.7","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 144.8","F");

   ci = 1441;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 219.0","F");

   ci = 1442;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 30.4","F");

   ci = 1443;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-231,-0.5333333,1694,2.133333);
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
   
   Double_t _fx3002[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3002[20] = {
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
   Double_t _felx3002[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3002[20] = {
   0.2215691,
   0.2069898,
   0.1965366,
   0.1952569,
   0.1865983,
   0.1978958,
   0.2042375,
   0.2342354,
   0.273679,
   0.2732475,
   0.3431715,
   0.3275475,
   0.5524463,
   0.5524924,
   0.5970056,
   0.7613109,
   0.5316256,
   0.8109188,
   1.138971,
   1.099325};
   Double_t _fehx3002[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3002[20] = {
   0.2215691,
   0.2069898,
   0.1965366,
   0.1952569,
   0.1865983,
   0.1978958,
   0.2042375,
   0.2342354,
   0.273679,
   0.2732475,
   0.3431715,
   0.3275475,
   0.5524463,
   0.5524924,
   0.5970056,
   0.7613109,
   0.5316256,
   0.8109188,
   1.138971,
   1.099325};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("Visible Energy [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
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
   
   Double_t _fx3003[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3003[20] = {
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
   Double_t _felx3003[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3003[20] = {
   0.1802567,
   0.1904634,
   0.1886007,
   0.1845747,
   0.1794285,
   0.1793144,
   0.1869606,
   0.182855,
   0.2156234,
   0.2051024,
   0.2250337,
   0.2258702,
   0.2716154,
   0.3764339,
   0.3895774,
   0.365574,
   0.3302835,
   0.4653609,
   0.5192404,
   0.690443};
   Double_t _fehx3003[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3003[20] = {
   0.1802567,
   0.1904634,
   0.1886007,
   0.1845747,
   0.1794285,
   0.1793144,
   0.1869606,
   0.182855,
   0.2156234,
   0.2051024,
   0.2250337,
   0.2258702,
   0.2716154,
   0.3764339,
   0.3895774,
   0.365574,
   0.3302835,
   0.4653609,
   0.5192404,
   0.690443};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
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
   
   Double_t _fx3004[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3004[20] = {
   1.091212,
   1.071107,
   0.9821337,
   0.8650973,
   0.9720966,
   0.8610209,
   0.8426553,
   1.078143,
   0.8176132,
   1.118202,
   1.153597,
   0.7924148,
   0.9283993,
   0.844404,
   1.56014,
   0.8582077,
   0.2529108,
   0.4372339,
   1.057256,
   2.157896};
   Double_t _felx3004[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3004[20] = {
   0.05299395,
   0.02788926,
   0.03341287,
   0.04157392,
   0.06148079,
   0.07551653,
   0.09938208,
   0.1493129,
   0.1587279,
   0.2460908,
   0.2820416,
   0.2519519,
   0.3517125,
   0.3449438,
   0.637326,
   0.6131516,
   0.2529108,
   0.4372339,
   1.057256,
   2.157896};
   Double_t _fehx3004[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3004[20] = {
   0.05299395,
   0.02788926,
   0.03341287,
   0.04157392,
   0.06148079,
   0.07551653,
   0.09707958,
   0.1452499,
   0.1526338,
   0.2353256,
   0.2682626,
   0.2355633,
   0.3237329,
   0.314906,
   0.5818273,
   0.4932463,
   0.3438853,
   0.5945113,
   0.8030754,
   1.639105};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(4.176701);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_12_visible_energy_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
