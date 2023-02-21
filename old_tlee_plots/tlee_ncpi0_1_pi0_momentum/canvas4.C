#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas4()
{
//=========Macro generated from canvas: canvas4/channel4
//=========  (Fri Oct 21 20:21:52 2022) by ROOT version 6.26/00
   TCanvas *canvas4 = new TCanvas("canvas4", "channel4",242,172,1200,900);
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
   pad1->Range(-230.7692,-11.4,1692.308,1260.6);
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
   
   TH1F *hmc__10 = new TH1F("hmc__10","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmc__10->SetBinContent(1,195.5148);
   hmc__10->SetBinContent(2,418.7289);
   hmc__10->SetBinContent(3,520.8127);
   hmc__10->SetBinContent(4,488.0636);
   hmc__10->SetBinContent(5,402.425);
   hmc__10->SetBinContent(6,335.1604);
   hmc__10->SetBinContent(7,267.8998);
   hmc__10->SetBinContent(8,184.0684);
   hmc__10->SetBinContent(9,151.5932);
   hmc__10->SetBinContent(10,123.8723);
   hmc__10->SetBinContent(11,84.73051);
   hmc__10->SetBinContent(12,66.36829);
   hmc__10->SetBinContent(13,48.13969);
   hmc__10->SetBinContent(14,48.09483);
   hmc__10->SetBinContent(15,38.06828);
   hmc__10->SetBinContent(16,24.1456);
   hmc__10->SetBinContent(17,26.45718);
   hmc__10->SetBinContent(18,19.05668);
   hmc__10->SetBinContent(19,20.65704);
   hmc__10->SetBinContent(20,17.15151);
   hmc__10->SetBinContent(21,15.74547);
   hmc__10->SetBinContent(22,19.01845);
   hmc__10->SetBinContent(23,13.8664);
   hmc__10->SetBinContent(24,8.487655);
   hmc__10->SetBinContent(25,10.66099);
   hmc__10->SetBinContent(26,180.6721);
   hmc__10->SetBinError(1,55.63612);
   hmc__10->SetBinError(2,100.1355);
   hmc__10->SetBinError(3,113.6751);
   hmc__10->SetBinError(4,108.6778);
   hmc__10->SetBinError(5,96.8534);
   hmc__10->SetBinError(6,86.80872);
   hmc__10->SetBinError(7,83.36018);
   hmc__10->SetBinError(8,60.48861);
   hmc__10->SetBinError(9,41.95769);
   hmc__10->SetBinError(10,33.86034);
   hmc__10->SetBinError(11,31.23819);
   hmc__10->SetBinError(12,32.20796);
   hmc__10->SetBinError(13,15.07189);
   hmc__10->SetBinError(14,22.09524);
   hmc__10->SetBinError(15,14.26711);
   hmc__10->SetBinError(16,12.08919);
   hmc__10->SetBinError(17,12.80479);
   hmc__10->SetBinError(18,10.62646);
   hmc__10->SetBinError(19,9.847968);
   hmc__10->SetBinError(20,8.786047);
   hmc__10->SetBinError(21,10.01507);
   hmc__10->SetBinError(22,14.20372);
   hmc__10->SetBinError(23,7.908439);
   hmc__10->SetBinError(24,7.029356);
   hmc__10->SetBinError(25,8.187458);
   hmc__10->SetBinError(26,47.35315);
   hmc__10->SetMinimum(-11.4);
   hmc__10->SetMaximum(1197);
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
   
   TH1F *hs4_stack_4 = new TH1F("hs4_stack_4","",25,0,1500);
   hs4_stack_4->SetMinimum(-1.293891e-08);
   hs4_stack_4->SetMaximum(546.8534);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(1,8.418828);
   hbadmatch_stack_1->SetBinContent(2,10.48784);
   hbadmatch_stack_1->SetBinContent(3,18.4751);
   hbadmatch_stack_1->SetBinContent(4,10.41514);
   hbadmatch_stack_1->SetBinContent(5,7.435163);
   hbadmatch_stack_1->SetBinContent(6,8.771819);
   hbadmatch_stack_1->SetBinContent(7,6.747145);
   hbadmatch_stack_1->SetBinContent(8,4.502402);
   hbadmatch_stack_1->SetBinContent(9,4.301411);
   hbadmatch_stack_1->SetBinContent(10,2.155314);
   hbadmatch_stack_1->SetBinContent(11,1.68821);
   hbadmatch_stack_1->SetBinContent(12,0.4591461);
   hbadmatch_stack_1->SetBinContent(13,1.696701);
   hbadmatch_stack_1->SetBinContent(14,0.4224982);
   hbadmatch_stack_1->SetBinContent(15,1.345851);
   hbadmatch_stack_1->SetBinContent(16,0.1967154);
   hbadmatch_stack_1->SetBinContent(17,0.4186046);
   hbadmatch_stack_1->SetBinContent(18,0.9801444);
   hbadmatch_stack_1->SetBinContent(19,0.8792875);
   hbadmatch_stack_1->SetBinContent(20,0.5955275);
   hbadmatch_stack_1->SetBinContent(21,0.7319179);
   hbadmatch_stack_1->SetBinContent(22,0.3416744);
   hbadmatch_stack_1->SetBinContent(23,0.2248688);
   hbadmatch_stack_1->SetBinContent(26,5.893978);
   hbadmatch_stack_1->SetBinError(1,1.685231);
   hbadmatch_stack_1->SetBinError(2,1.685024);
   hbadmatch_stack_1->SetBinError(3,2.80423);
   hbadmatch_stack_1->SetBinError(4,1.735029);
   hbadmatch_stack_1->SetBinError(5,1.399059);
   hbadmatch_stack_1->SetBinError(6,1.576188);
   hbadmatch_stack_1->SetBinError(7,2.10466);
   hbadmatch_stack_1->SetBinError(8,1.049832);
   hbadmatch_stack_1->SetBinError(9,1.425518);
   hbadmatch_stack_1->SetBinError(10,0.7029588);
   hbadmatch_stack_1->SetBinError(11,0.7341504);
   hbadmatch_stack_1->SetBinError(12,0.3246833);
   hbadmatch_stack_1->SetBinError(13,0.6697681);
   hbadmatch_stack_1->SetBinError(14,0.2996311);
   hbadmatch_stack_1->SetBinError(15,0.5918389);
   hbadmatch_stack_1->SetBinError(16,0.1967154);
   hbadmatch_stack_1->SetBinError(17,0.4186046);
   hbadmatch_stack_1->SetBinError(18,0.5923593);
   hbadmatch_stack_1->SetBinError(19,0.4699064);
   hbadmatch_stack_1->SetBinError(20,0.4454532);
   hbadmatch_stack_1->SetBinError(21,0.438694);
   hbadmatch_stack_1->SetBinError(22,0.3416744);
   hbadmatch_stack_1->SetBinError(23,0.2248688);
   hbadmatch_stack_1->SetBinError(26,1.380756);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hext_stack_2->SetBinContent(1,17.80204);
   hext_stack_2->SetBinContent(2,61.84809);
   hext_stack_2->SetBinContent(3,76.01234);
   hext_stack_2->SetBinContent(4,50.84409);
   hext_stack_2->SetBinContent(5,47.49751);
   hext_stack_2->SetBinContent(6,33.6836);
   hext_stack_2->SetBinContent(7,33.75585);
   hext_stack_2->SetBinContent(8,19.44998);
   hext_stack_2->SetBinContent(9,20.0916);
   hext_stack_2->SetBinContent(10,18.03706);
   hext_stack_2->SetBinContent(11,13.6136);
   hext_stack_2->SetBinContent(12,7.142787);
   hext_stack_2->SetBinContent(13,5.986423);
   hext_stack_2->SetBinContent(14,7.187449);
   hext_stack_2->SetBinContent(15,7.840653);
   hext_stack_2->SetBinContent(16,2.592407);
   hext_stack_2->SetBinContent(17,2.912395);
   hext_stack_2->SetBinContent(18,4.049991);
   hext_stack_2->SetBinContent(19,4.181263);
   hext_stack_2->SetBinContent(20,1.868591);
   hext_stack_2->SetBinContent(21,2.674609);
   hext_stack_2->SetBinContent(22,7.643119);
   hext_stack_2->SetBinContent(23,2.517386);
   hext_stack_2->SetBinContent(24,0.4065989);
   hext_stack_2->SetBinContent(25,1.37261);
   hext_stack_2->SetBinContent(26,26.43272);
   hext_stack_2->SetBinError(1,2.817437);
   hext_stack_2->SetBinError(2,5.381297);
   hext_stack_2->SetBinError(3,5.785705);
   hext_stack_2->SetBinError(4,4.722531);
   hext_stack_2->SetBinError(5,4.581016);
   hext_stack_2->SetBinError(6,4.013282);
   hext_stack_2->SetBinError(7,4.087058);
   hext_stack_2->SetBinError(8,2.827656);
   hext_stack_2->SetBinError(9,2.899536);
   hext_stack_2->SetBinError(10,2.860821);
   hext_stack_2->SetBinError(11,2.401064);
   hext_stack_2->SetBinError(12,1.709301);
   hext_stack_2->SetBinError(13,1.65925);
   hext_stack_2->SetBinError(14,1.875196);
   hext_stack_2->SetBinError(15,1.965184);
   hext_stack_2->SetBinError(16,1.085446);
   hext_stack_2->SetBinError(17,1.07159);
   hext_stack_2->SetBinError(18,1.258643);
   hext_stack_2->SetBinError(19,1.540793);
   hext_stack_2->SetBinError(20,0.840497);
   hext_stack_2->SetBinError(21,1.112781);
   hext_stack_2->SetBinError(22,2.100346);
   hext_stack_2->SetBinError(23,0.9575503);
   hext_stack_2->SetBinError(24,0.4065989);
   hext_stack_2->SetBinError(25,0.8259691);
   hext_stack_2->SetBinError(26,3.501814);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hdirt_stack_3->SetBinContent(1,6.518134);
   hdirt_stack_3->SetBinContent(2,8.893213);
   hdirt_stack_3->SetBinContent(3,6.890802);
   hdirt_stack_3->SetBinContent(4,4.641604);
   hdirt_stack_3->SetBinContent(5,4.745103);
   hdirt_stack_3->SetBinContent(6,4.785714);
   hdirt_stack_3->SetBinContent(7,2.132746);
   hdirt_stack_3->SetBinContent(8,1.881044);
   hdirt_stack_3->SetBinContent(9,2.890796);
   hdirt_stack_3->SetBinContent(10,1.44366);
   hdirt_stack_3->SetBinContent(11,1.96351);
   hdirt_stack_3->SetBinContent(12,0.591349);
   hdirt_stack_3->SetBinContent(13,1.486485);
   hdirt_stack_3->SetBinContent(14,0.8175273);
   hdirt_stack_3->SetBinContent(15,1.000872);
   hdirt_stack_3->SetBinContent(16,0.8581587);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(19,0.5906858);
   hdirt_stack_3->SetBinContent(20,0.9115412);
   hdirt_stack_3->SetBinContent(22,0.3381872);
   hdirt_stack_3->SetBinContent(23,0.3866654);
   hdirt_stack_3->SetBinContent(26,3.147197);
   hdirt_stack_3->SetBinError(1,1.38849);
   hdirt_stack_3->SetBinError(2,1.462583);
   hdirt_stack_3->SetBinError(3,1.413161);
   hdirt_stack_3->SetBinError(4,1.058378);
   hdirt_stack_3->SetBinError(5,1.113632);
   hdirt_stack_3->SetBinError(6,1.391825);
   hdirt_stack_3->SetBinError(7,0.7117346);
   hdirt_stack_3->SetBinError(8,0.6490387);
   hdirt_stack_3->SetBinError(9,1.002195);
   hdirt_stack_3->SetBinError(10,0.6050009);
   hdirt_stack_3->SetBinError(11,0.7507346);
   hdirt_stack_3->SetBinError(12,0.3829884);
   hdirt_stack_3->SetBinError(13,1.15304);
   hdirt_stack_3->SetBinError(14,0.411844);
   hdirt_stack_3->SetBinError(15,0.531595);
   hdirt_stack_3->SetBinError(16,0.5193504);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(19,0.42205);
   hdirt_stack_3->SetBinError(20,0.5597697);
   hdirt_stack_3->SetBinError(22,0.3381872);
   hdirt_stack_3->SetBinError(23,0.3866654);
   hdirt_stack_3->SetBinError(26,0.9641323);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   houtFV_stack_4->SetBinContent(1,38.53927);
   houtFV_stack_4->SetBinContent(2,73.64487);
   houtFV_stack_4->SetBinContent(3,66.06196);
   houtFV_stack_4->SetBinContent(4,51.98068);
   houtFV_stack_4->SetBinContent(5,38.92011);
   houtFV_stack_4->SetBinContent(6,38.78847);
   houtFV_stack_4->SetBinContent(7,28.01249);
   houtFV_stack_4->SetBinContent(8,19.86544);
   houtFV_stack_4->SetBinContent(9,16.0169);
   houtFV_stack_4->SetBinContent(10,14.20843);
   houtFV_stack_4->SetBinContent(11,10.87778);
   houtFV_stack_4->SetBinContent(12,10.90586);
   houtFV_stack_4->SetBinContent(13,6.373963);
   houtFV_stack_4->SetBinContent(14,5.98452);
   houtFV_stack_4->SetBinContent(15,3.778672);
   houtFV_stack_4->SetBinContent(16,3.777155);
   houtFV_stack_4->SetBinContent(17,4.647769);
   houtFV_stack_4->SetBinContent(18,2.621256);
   houtFV_stack_4->SetBinContent(19,4.008015);
   houtFV_stack_4->SetBinContent(20,3.827116);
   houtFV_stack_4->SetBinContent(21,2.250697);
   houtFV_stack_4->SetBinContent(22,1.876146);
   houtFV_stack_4->SetBinContent(23,2.146512);
   houtFV_stack_4->SetBinContent(24,1.279363);
   houtFV_stack_4->SetBinContent(25,1.781955);
   houtFV_stack_4->SetBinContent(26,24.56697);
   houtFV_stack_4->SetBinError(1,3.107696);
   houtFV_stack_4->SetBinError(2,4.474283);
   houtFV_stack_4->SetBinError(3,4.076973);
   houtFV_stack_4->SetBinError(4,3.565065);
   houtFV_stack_4->SetBinError(5,3.070956);
   houtFV_stack_4->SetBinError(6,3.106441);
   houtFV_stack_4->SetBinError(7,2.769202);
   houtFV_stack_4->SetBinError(8,2.227077);
   houtFV_stack_4->SetBinError(9,2.061499);
   houtFV_stack_4->SetBinError(10,1.945808);
   houtFV_stack_4->SetBinError(11,1.656516);
   houtFV_stack_4->SetBinError(12,1.578649);
   houtFV_stack_4->SetBinError(13,1.252817);
   houtFV_stack_4->SetBinError(14,1.216545);
   houtFV_stack_4->SetBinError(15,1.007845);
   houtFV_stack_4->SetBinError(16,0.9946669);
   houtFV_stack_4->SetBinError(17,1.111346);
   houtFV_stack_4->SetBinError(18,0.8582299);
   houtFV_stack_4->SetBinError(19,1.108985);
   houtFV_stack_4->SetBinError(20,1.016829);
   houtFV_stack_4->SetBinError(21,0.7346377);
   houtFV_stack_4->SetBinError(22,0.6855793);
   houtFV_stack_4->SetBinError(23,0.6719088);
   houtFV_stack_4->SetBinError(24,0.5946764);
   houtFV_stack_4->SetBinError(25,0.8083503);
   houtFV_stack_4->SetBinError(26,2.487186);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,4.650642);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,5.404804);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,8.464581);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,14.14607);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,13.1323);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,12.56913);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,11.93538);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,7.755548);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,3.750544);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.223281);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,2.005216);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,3.902982);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,1.666361);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,1.157468);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,1.607857);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,1.275211);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.3292873);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.3396606);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.5886608);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6624498);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.9389976);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.2224593);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2634515);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.6788783);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2759499);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,7.094653);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.7713362);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.811074);
   hNCpi0inFVcoh_stack_5->SetBinError(3,1.15066);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.40556);
   hNCpi0inFVcoh_stack_5->SetBinError(5,1.297277);
   hNCpi0inFVcoh_stack_5->SetBinError(6,1.333231);
   hNCpi0inFVcoh_stack_5->SetBinError(7,1.41497);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.933353);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.5621716);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.9623586);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.5333622);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.8633746);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5304693);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.4612532);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.4158471);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.4818584);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1288936);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1486231);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.1996552);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2562871);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4273934);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.08812424);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1211177);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2766246);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2243545);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.9316227);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.3848321);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.6860625);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.9497694);
   hNCpi0inFVqe_stack_6->SetBinContent(4,1.427667);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7555551);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.420634);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.4966905);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.214613);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.3530209);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.1251414);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.337395);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.1095528);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03507804);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4153279);
   hNCpi0inFVqe_stack_6->SetBinContent(26,0.1380737);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.1660316);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.1844998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.2775383);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4468955);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2362686);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.163665);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.1649494);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.08847891);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.1783964);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.0599571);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2273656);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.07894598);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.02482773);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1290437);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.08308727);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2936812);
   hNCpi0inFVqe_stack_6->SetBinError(26,0.06051453);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(1,49.46374);
   hNCpi0inFVres_stack_7->SetBinContent(2,110.7424);
   hNCpi0inFVres_stack_7->SetBinContent(3,158.2614);
   hNCpi0inFVres_stack_7->SetBinContent(4,177.6709);
   hNCpi0inFVres_stack_7->SetBinContent(5,148.5734);
   hNCpi0inFVres_stack_7->SetBinContent(6,123.6287);
   hNCpi0inFVres_stack_7->SetBinContent(7,87.12602);
   hNCpi0inFVres_stack_7->SetBinContent(8,59.23753);
   hNCpi0inFVres_stack_7->SetBinContent(9,39.82777);
   hNCpi0inFVres_stack_7->SetBinContent(10,34.55449);
   hNCpi0inFVres_stack_7->SetBinContent(11,25.05501);
   hNCpi0inFVres_stack_7->SetBinContent(12,17.83699);
   hNCpi0inFVres_stack_7->SetBinContent(13,13.32648);
   hNCpi0inFVres_stack_7->SetBinContent(14,13.85372);
   hNCpi0inFVres_stack_7->SetBinContent(15,10.00988);
   hNCpi0inFVres_stack_7->SetBinContent(16,5.959607);
   hNCpi0inFVres_stack_7->SetBinContent(17,6.853301);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.801591);
   hNCpi0inFVres_stack_7->SetBinContent(19,5.123377);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.533168);
   hNCpi0inFVres_stack_7->SetBinContent(21,4.469412);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.345109);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.053106);
   hNCpi0inFVres_stack_7->SetBinContent(24,2.335647);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.80995);
   hNCpi0inFVres_stack_7->SetBinContent(26,42.04119);
   hNCpi0inFVres_stack_7->SetBinError(1,2.388053);
   hNCpi0inFVres_stack_7->SetBinError(2,3.626845);
   hNCpi0inFVres_stack_7->SetBinError(3,4.259157);
   hNCpi0inFVres_stack_7->SetBinError(4,4.669034);
   hNCpi0inFVres_stack_7->SetBinError(5,4.25083);
   hNCpi0inFVres_stack_7->SetBinError(6,3.784488);
   hNCpi0inFVres_stack_7->SetBinError(7,3.196275);
   hNCpi0inFVres_stack_7->SetBinError(8,2.46123);
   hNCpi0inFVres_stack_7->SetBinError(9,2.009559);
   hNCpi0inFVres_stack_7->SetBinError(10,1.95136);
   hNCpi0inFVres_stack_7->SetBinError(11,1.731056);
   hNCpi0inFVres_stack_7->SetBinError(12,1.615169);
   hNCpi0inFVres_stack_7->SetBinError(13,1.293465);
   hNCpi0inFVres_stack_7->SetBinError(14,1.387793);
   hNCpi0inFVres_stack_7->SetBinError(15,1.161766);
   hNCpi0inFVres_stack_7->SetBinError(16,0.7471323);
   hNCpi0inFVres_stack_7->SetBinError(17,0.867497);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6951685);
   hNCpi0inFVres_stack_7->SetBinError(19,0.7309922);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6336226);
   hNCpi0inFVres_stack_7->SetBinError(21,0.7524423);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7386341);
   hNCpi0inFVres_stack_7->SetBinError(23,0.7818675);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5424407);
   hNCpi0inFVres_stack_7->SetBinError(25,0.6007323);
   hNCpi0inFVres_stack_7->SetBinError(26,2.371957);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(1,10.77374);
   hNCpi0inFVdis_stack_8->SetBinContent(2,26.0755);
   hNCpi0inFVdis_stack_8->SetBinContent(3,31.65103);
   hNCpi0inFVdis_stack_8->SetBinContent(4,28.99555);
   hNCpi0inFVdis_stack_8->SetBinContent(5,21.57667);
   hNCpi0inFVdis_stack_8->SetBinContent(6,21.27604);
   hNCpi0inFVdis_stack_8->SetBinContent(7,15.25997);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.98128);
   hNCpi0inFVdis_stack_8->SetBinContent(9,11.29239);
   hNCpi0inFVdis_stack_8->SetBinContent(10,9.460135);
   hNCpi0inFVdis_stack_8->SetBinContent(11,7.474473);
   hNCpi0inFVdis_stack_8->SetBinContent(12,5.446866);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.03348);
   hNCpi0inFVdis_stack_8->SetBinContent(14,4.398751);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.67221);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.674008);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.989065);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.238632);
   hNCpi0inFVdis_stack_8->SetBinContent(19,1.101028);
   hNCpi0inFVdis_stack_8->SetBinContent(20,1.49431);
   hNCpi0inFVdis_stack_8->SetBinContent(21,1.505545);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.9053774);
   hNCpi0inFVdis_stack_8->SetBinContent(23,1.296638);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.8628781);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.976622);
   hNCpi0inFVdis_stack_8->SetBinContent(26,11.41757);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.10198);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.84143);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.930157);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.865144);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.601313);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.534532);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.26141);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.186054);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.077496);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.074038);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.070371);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.8161799);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.8697222);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.8737599);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6743371);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3986188);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.5825277);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2760431);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3604485);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.4537571);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.4267526);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.2483896);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.4294182);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.5419998);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.5966513);
   hNCpi0inFVdis_stack_8->SetBinError(26,1.274431);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.03137889);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.03301391);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.04049794);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.06358271);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02218823);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02337297);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.1290437);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04049794);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(1,29.1809);
   hCCpi0inFV_stack_10->SetBinContent(2,58.66466);
   hCCpi0inFV_stack_10->SetBinContent(3,73.01079);
   hCCpi0inFV_stack_10->SetBinContent(4,81.29594);
   hCCpi0inFV_stack_10->SetBinContent(5,68.17954);
   hCCpi0inFV_stack_10->SetBinContent(6,56.16121);
   hCCpi0inFV_stack_10->SetBinContent(7,44.70156);
   hCCpi0inFV_stack_10->SetBinContent(8,30.7086);
   hCCpi0inFV_stack_10->SetBinContent(9,28.74996);
   hCCpi0inFV_stack_10->SetBinContent(10,20.95136);
   hCCpi0inFV_stack_10->SetBinContent(11,12.55756);
   hCCpi0inFV_stack_10->SetBinContent(12,10.1797);
   hCCpi0inFV_stack_10->SetBinContent(13,5.294823);
   hCCpi0inFV_stack_10->SetBinContent(14,6.979001);
   hCCpi0inFV_stack_10->SetBinContent(15,5.224725);
   hCCpi0inFV_stack_10->SetBinContent(16,3.17933);
   hCCpi0inFV_stack_10->SetBinContent(17,3.230893);
   hCCpi0inFV_stack_10->SetBinContent(18,2.734337);
   hCCpi0inFV_stack_10->SetBinContent(19,1.804013);
   hCCpi0inFV_stack_10->SetBinContent(20,2.108925);
   hCCpi0inFV_stack_10->SetBinContent(21,1.907138);
   hCCpi0inFV_stack_10->SetBinContent(22,1.712114);
   hCCpi0inFV_stack_10->SetBinContent(23,1.318683);
   hCCpi0inFV_stack_10->SetBinContent(24,2.14081);
   hCCpi0inFV_stack_10->SetBinContent(25,1.603336);
   hCCpi0inFV_stack_10->SetBinContent(26,25.5449);
   hCCpi0inFV_stack_10->SetBinError(1,2.665747);
   hCCpi0inFV_stack_10->SetBinError(2,3.844261);
   hCCpi0inFV_stack_10->SetBinError(3,4.271168);
   hCCpi0inFV_stack_10->SetBinError(4,4.55814);
   hCCpi0inFV_stack_10->SetBinError(5,4.118977);
   hCCpi0inFV_stack_10->SetBinError(6,3.767534);
   hCCpi0inFV_stack_10->SetBinError(7,3.371083);
   hCCpi0inFV_stack_10->SetBinError(8,2.746035);
   hCCpi0inFV_stack_10->SetBinError(9,2.747299);
   hCCpi0inFV_stack_10->SetBinError(10,2.301043);
   hCCpi0inFV_stack_10->SetBinError(11,1.788393);
   hCCpi0inFV_stack_10->SetBinError(12,1.545842);
   hCCpi0inFV_stack_10->SetBinError(13,1.140097);
   hCCpi0inFV_stack_10->SetBinError(14,1.344918);
   hCCpi0inFV_stack_10->SetBinError(15,1.152951);
   hCCpi0inFV_stack_10->SetBinError(16,0.8779761);
   hCCpi0inFV_stack_10->SetBinError(17,0.855484);
   hCCpi0inFV_stack_10->SetBinError(18,0.8558255);
   hCCpi0inFV_stack_10->SetBinError(19,0.7075491);
   hCCpi0inFV_stack_10->SetBinError(20,0.6806842);
   hCCpi0inFV_stack_10->SetBinError(21,0.6501133);
   hCCpi0inFV_stack_10->SetBinError(22,0.6201715);
   hCCpi0inFV_stack_10->SetBinError(23,0.5542732);
   hCCpi0inFV_stack_10->SetBinError(24,0.7842334);
   hCCpi0inFV_stack_10->SetBinError(25,0.6198641);
   hCCpi0inFV_stack_10->SetBinError(26,2.535575);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(1,13.39725);
   hNCinFV_stack_11->SetBinContent(2,28.6256);
   hNCinFV_stack_11->SetBinContent(3,33.8442);
   hNCinFV_stack_11->SetBinContent(4,30.07372);
   hNCinFV_stack_11->SetBinContent(5,24.61521);
   hNCinFV_stack_11->SetBinContent(6,12.39644);
   hNCinFV_stack_11->SetBinContent(7,18.37151);
   hNCinFV_stack_11->SetBinContent(8,12.98584);
   hNCinFV_stack_11->SetBinContent(9,11.42114);
   hNCinFV_stack_11->SetBinContent(10,8.43037);
   hNCinFV_stack_11->SetBinContent(11,4.480452);
   hNCinFV_stack_11->SetBinContent(12,3.343244);
   hNCinFV_stack_11->SetBinContent(13,4.240263);
   hNCinFV_stack_11->SetBinContent(14,3.227134);
   hNCinFV_stack_11->SetBinContent(15,2.856841);
   hNCinFV_stack_11->SetBinContent(16,2.51526);
   hNCinFV_stack_11->SetBinContent(17,2.166925);
   hNCinFV_stack_11->SetBinContent(18,0.7336084);
   hNCinFV_stack_11->SetBinContent(19,0.7180063);
   hNCinFV_stack_11->SetBinContent(20,0.5867651);
   hNCinFV_stack_11->SetBinContent(21,0.3900497);
   hNCinFV_stack_11->SetBinContent(22,0.9303237);
   hNCinFV_stack_11->SetBinContent(23,0.3401776);
   hNCinFV_stack_11->SetBinContent(24,0.3900497);
   hNCinFV_stack_11->SetBinContent(25,0.3292273);
   hNCinFV_stack_11->SetBinContent(26,10.41618);
   hNCinFV_stack_11->SetBinError(1,1.920727);
   hNCinFV_stack_11->SetBinError(2,2.723577);
   hNCinFV_stack_11->SetBinError(3,3.139107);
   hNCinFV_stack_11->SetBinError(4,2.931994);
   hNCinFV_stack_11->SetBinError(5,2.683681);
   hNCinFV_stack_11->SetBinError(6,1.865372);
   hNCinFV_stack_11->SetBinError(7,2.363041);
   hNCinFV_stack_11->SetBinError(8,2.046594);
   hNCinFV_stack_11->SetBinError(9,1.944266);
   hNCinFV_stack_11->SetBinError(10,1.415227);
   hNCinFV_stack_11->SetBinError(11,1.055518);
   hNCinFV_stack_11->SetBinError(12,0.8656611);
   hNCinFV_stack_11->SetBinError(13,0.9807884);
   hNCinFV_stack_11->SetBinError(14,0.9046567);
   hNCinFV_stack_11->SetBinError(15,0.8938339);
   hNCinFV_stack_11->SetBinError(16,0.7945954);
   hNCinFV_stack_11->SetBinError(17,0.7602485);
   hNCinFV_stack_11->SetBinError(18,0.4394482);
   hNCinFV_stack_11->SetBinError(19,0.416238);
   hNCinFV_stack_11->SetBinError(20,0.3387718);
   hNCinFV_stack_11->SetBinError(21,0.2758068);
   hNCinFV_stack_11->SetBinError(22,0.4814682);
   hNCinFV_stack_11->SetBinError(23,0.3401776);
   hNCinFV_stack_11->SetBinError(24,0.2758068);
   hNCinFV_stack_11->SetBinError(25,0.3292273);
   hNCinFV_stack_11->SetBinError(26,1.694964);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(1,12.56841);
   hnumuCCinFV_stack_12->SetBinContent(2,31.39946);
   hnumuCCinFV_stack_12->SetBinContent(3,44.95274);
   hnumuCCinFV_stack_12->SetBinContent(4,34.21024);
   hnumuCCinFV_stack_12->SetBinContent(5,26.14359);
   hnumuCCinFV_stack_12->SetBinContent(6,21.01157);
   hnumuCCinFV_stack_12->SetBinContent(7,17.66852);
   hnumuCCinFV_stack_12->SetBinContent(8,12.91534);
   hnumuCCinFV_stack_12->SetBinContent(9,12.31329);
   hnumuCCinFV_stack_12->SetBinContent(10,8.872259);
   hnumuCCinFV_stack_12->SetBinContent(11,4.031318);
   hnumuCCinFV_stack_12->SetBinContent(12,5.443399);
   hnumuCCinFV_stack_12->SetBinContent(13,3.335392);
   hnumuCCinFV_stack_12->SetBinContent(14,4.026263);
   hnumuCCinFV_stack_12->SetBinContent(15,1.406646);
   hnumuCCinFV_stack_12->SetBinContent(16,1.463836);
   hnumuCCinFV_stack_12->SetBinContent(17,3.194617);
   hnumuCCinFV_stack_12->SetBinContent(18,0.788452);
   hnumuCCinFV_stack_12->SetBinContent(19,1.247375);
   hnumuCCinFV_stack_12->SetBinContent(20,1.368096);
   hnumuCCinFV_stack_12->SetBinContent(21,0.8770706);
   hnumuCCinFV_stack_12->SetBinContent(22,0.9607925);
   hnumuCCinFV_stack_12->SetBinContent(23,1.073786);
   hnumuCCinFV_stack_12->SetBinContent(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(25,0.8273167);
   hnumuCCinFV_stack_12->SetBinContent(26,14.75949);
   hnumuCCinFV_stack_12->SetBinError(1,2.815737);
   hnumuCCinFV_stack_12->SetBinError(2,2.884825);
   hnumuCCinFV_stack_12->SetBinError(3,3.603822);
   hnumuCCinFV_stack_12->SetBinError(4,4.03366);
   hnumuCCinFV_stack_12->SetBinError(5,2.937442);
   hnumuCCinFV_stack_12->SetBinError(6,2.397114);
   hnumuCCinFV_stack_12->SetBinError(7,2.54549);
   hnumuCCinFV_stack_12->SetBinError(8,1.939209);
   hnumuCCinFV_stack_12->SetBinError(9,1.856514);
   hnumuCCinFV_stack_12->SetBinError(10,1.481459);
   hnumuCCinFV_stack_12->SetBinError(11,1.062581);
   hnumuCCinFV_stack_12->SetBinError(12,1.238871);
   hnumuCCinFV_stack_12->SetBinError(13,0.9935857);
   hnumuCCinFV_stack_12->SetBinError(14,1.683708);
   hnumuCCinFV_stack_12->SetBinError(15,0.5324695);
   hnumuCCinFV_stack_12->SetBinError(16,0.620407);
   hnumuCCinFV_stack_12->SetBinError(17,1.402879);
   hnumuCCinFV_stack_12->SetBinError(18,0.3917754);
   hnumuCCinFV_stack_12->SetBinError(19,0.5109124);
   hnumuCCinFV_stack_12->SetBinError(20,0.640019);
   hnumuCCinFV_stack_12->SetBinError(21,0.5197486);
   hnumuCCinFV_stack_12->SetBinError(22,0.5860093);
   hnumuCCinFV_stack_12->SetBinError(23,0.5557297);
   hnumuCCinFV_stack_12->SetBinError(24,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(25,0.4612021);
   hnumuCCinFV_stack_12->SetBinError(26,2.021821);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(1,3.753394);
   hnueCCinFV_stack_13->SetBinContent(2,2.224981);
   hnueCCinFV_stack_13->SetBinContent(3,2.219206);
   hnueCCinFV_stack_13->SetBinContent(4,2.324919);
   hnueCCinFV_stack_13->SetBinContent(5,0.8509424);
   hnueCCinFV_stack_13->SetBinContent(6,1.667014);
   hnueCCinFV_stack_13->SetBinContent(7,1.658945);
   hnueCCinFV_stack_13->SetBinContent(8,1.570749);
   hnueCCinFV_stack_13->SetBinContent(9,0.5843197);
   hnueCCinFV_stack_13->SetBinContent(10,0.3934307);
   hnueCCinFV_stack_13->SetBinContent(11,0.6459876);
   hnueCCinFV_stack_13->SetBinContent(12,1.006409);
   hnueCCinFV_stack_13->SetBinContent(13,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(15,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(16,0.6539136);
   hnueCCinFV_stack_13->SetBinContent(17,0.5762501);
   hnueCCinFV_stack_13->SetBinContent(18,0.6859174);
   hnueCCinFV_stack_13->SetBinContent(20,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,3.274e-05);
   hnueCCinFV_stack_13->SetBinContent(22,0.7431479);
   hnueCCinFV_stack_13->SetBinContent(23,0.2451269);
   hnueCCinFV_stack_13->SetBinContent(24,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(25,0.6840218);
   hnueCCinFV_stack_13->SetBinContent(26,9.219178);
   hnueCCinFV_stack_13->SetBinError(1,1.44044);
   hnueCCinFV_stack_13->SetBinError(2,0.7625143);
   hnueCCinFV_stack_13->SetBinError(3,0.7759462);
   hnueCCinFV_stack_13->SetBinError(4,0.8718064);
   hnueCCinFV_stack_13->SetBinError(5,0.5155145);
   hnueCCinFV_stack_13->SetBinError(6,1.303614);
   hnueCCinFV_stack_13->SetBinError(7,0.6496402);
   hnueCCinFV_stack_13->SetBinError(8,0.6816847);
   hnueCCinFV_stack_13->SetBinError(9,0.4187168);
   hnueCCinFV_stack_13->SetBinError(10,0.2781975);
   hnueCCinFV_stack_13->SetBinError(11,0.3759965);
   hnueCCinFV_stack_13->SetBinError(12,0.5149986);
   hnueCCinFV_stack_13->SetBinError(13,0.3921167);
   hnueCCinFV_stack_13->SetBinError(15,0.1950249);
   hnueCCinFV_stack_13->SetBinError(16,0.3816983);
   hnueCCinFV_stack_13->SetBinError(17,0.4193777);
   hnueCCinFV_stack_13->SetBinError(18,0.5162003);
   hnueCCinFV_stack_13->SetBinError(20,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,3.274e-05);
   hnueCCinFV_stack_13->SetBinError(22,0.7431478);
   hnueCCinFV_stack_13->SetBinError(23,0.2451269);
   hnueCCinFV_stack_13->SetBinError(24,0.1967154);
   hnueCCinFV_stack_13->SetBinError(25,0.526453);
   hnueCCinFV_stack_13->SetBinError(26,2.333344);
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
   
   TH1F *hmcerror__11 = new TH1F("hmcerror__11","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);
   hmcerror__11->SetBinContent(1,195.5148);
   hmcerror__11->SetBinContent(2,418.7289);
   hmcerror__11->SetBinContent(3,520.8127);
   hmcerror__11->SetBinContent(4,488.0636);
   hmcerror__11->SetBinContent(5,402.425);
   hmcerror__11->SetBinContent(6,335.1604);
   hmcerror__11->SetBinContent(7,267.8998);
   hmcerror__11->SetBinContent(8,184.0684);
   hmcerror__11->SetBinContent(9,151.5932);
   hmcerror__11->SetBinContent(10,123.8723);
   hmcerror__11->SetBinContent(11,84.73051);
   hmcerror__11->SetBinContent(12,66.36829);
   hmcerror__11->SetBinContent(13,48.13969);
   hmcerror__11->SetBinContent(14,48.09483);
   hmcerror__11->SetBinContent(15,38.06828);
   hmcerror__11->SetBinContent(16,24.1456);
   hmcerror__11->SetBinContent(17,26.45718);
   hmcerror__11->SetBinContent(18,19.05668);
   hmcerror__11->SetBinContent(19,20.65704);
   hmcerror__11->SetBinContent(20,17.15151);
   hmcerror__11->SetBinContent(21,15.74547);
   hmcerror__11->SetBinContent(22,19.01845);
   hmcerror__11->SetBinContent(23,13.8664);
   hmcerror__11->SetBinContent(24,8.487655);
   hmcerror__11->SetBinContent(25,10.66099);
   hmcerror__11->SetBinContent(26,180.6721);
   hmcerror__11->SetBinError(1,55.63612);
   hmcerror__11->SetBinError(2,100.1355);
   hmcerror__11->SetBinError(3,113.6751);
   hmcerror__11->SetBinError(4,108.6778);
   hmcerror__11->SetBinError(5,96.8534);
   hmcerror__11->SetBinError(6,86.80872);
   hmcerror__11->SetBinError(7,83.36018);
   hmcerror__11->SetBinError(8,60.48861);
   hmcerror__11->SetBinError(9,41.95769);
   hmcerror__11->SetBinError(10,33.86034);
   hmcerror__11->SetBinError(11,31.23819);
   hmcerror__11->SetBinError(12,32.20796);
   hmcerror__11->SetBinError(13,15.07189);
   hmcerror__11->SetBinError(14,22.09524);
   hmcerror__11->SetBinError(15,14.26711);
   hmcerror__11->SetBinError(16,12.08919);
   hmcerror__11->SetBinError(17,12.80479);
   hmcerror__11->SetBinError(18,10.62646);
   hmcerror__11->SetBinError(19,9.847968);
   hmcerror__11->SetBinError(20,8.786047);
   hmcerror__11->SetBinError(21,10.01507);
   hmcerror__11->SetBinError(22,14.20372);
   hmcerror__11->SetBinError(23,7.908439);
   hmcerror__11->SetBinError(24,7.029356);
   hmcerror__11->SetBinError(25,8.187458);
   hmcerror__11->SetBinError(26,47.35315);
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
   
   Double_t _fx3013[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3013[25] = {
   230,
   464,
   570,
   503,
   426,
   294,
   253,
   187,
   143,
   125,
   73,
   70,
   61,
   46,
   32,
   30,
   15,
   16,
   14,
   17,
   17,
   18,
   13,
   9,
   7};
   Double_t _felx3013[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3013[25] = {
   15.16575,
   21.54066,
   23.87467,
   22.42766,
   20.63977,
   17.14643,
   15.90597,
   13.67479,
   11.95826,
   11.18034,
   8.6693,
   8.4925,
   7.9383,
   6.9153,
   5.7977,
   5.6197,
   4.0385,
   4.1628,
   3.9102,
   4.2835,
   4.2835,
   4.4008,
   3.77763,
   3.19354,
   2.85954};
   Double_t _fehx3013[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3013[25] = {
   15.16575,
   21.54066,
   23.87467,
   22.42766,
   20.63977,
   17.14643,
   15.90597,
   13.67479,
   11.95826,
   11.18034,
   8.4672,
   8.2902,
   7.7354,
   6.7108,
   5.5904,
   5.4117,
   3.8197,
   3.9454,
   3.6898,
   4.0673,
   4.0673,
   4.1858,
   3.5552,
   2.9582,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,1650);
   Graph_Graph3013->SetMinimum(3.726414);
   Graph_Graph3013->SetMaximum(652.8481);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=1.02#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.3/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3633.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 91.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 451.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 53.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 452.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  102.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  6.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1112.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  226.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 553.6","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 221.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 252.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 23.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas4->cd();
  
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
   
   Double_t _fx3014[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3014[25] = {
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
   Double_t _felx3014[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3014[25] = {
   0.2845622,
   0.2391417,
   0.2182649,
   0.2226713,
   0.2406744,
   0.2590065,
   0.3111617,
   0.3286204,
   0.2767782,
   0.2733489,
   0.368677,
   0.4852915,
   0.3130866,
   0.4594099,
   0.3747768,
   0.500679,
   0.4839817,
   0.5576241,
   0.4767367,
   0.5122607,
   0.6360606,
   0.7468391,
   0.5703311,
   0.8281859,
   0.767983};
   Double_t _fehx3014[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3014[25] = {
   0.2845622,
   0.2391417,
   0.2182649,
   0.2226713,
   0.2406744,
   0.2590065,
   0.3111617,
   0.3286204,
   0.2767782,
   0.2733489,
   0.368677,
   0.4852915,
   0.3130866,
   0.4594099,
   0.3747768,
   0.500679,
   0.4839817,
   0.5576241,
   0.4767367,
   0.5122607,
   0.6360606,
   0.7468391,
   0.5703311,
   0.8281859,
   0.767983};
   grae = new TGraphAsymmErrors(25,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,1650);
   Graph_Graph3014->SetMinimum(0);
   Graph_Graph3014->SetMaximum(2);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineWidth(2);
   Graph_Graph3014->SetMarkerStyle(20);
   Graph_Graph3014->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3015[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3015[25] = {
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
   Double_t _felx3015[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3015[25] = {
   0.2014394,
   0.1943776,
   0.1946267,
   0.2089978,
   0.206079,
   0.2241069,
   0.2196509,
   0.2503979,
   0.2222021,
   0.2090674,
   0.1939631,
   0.2067668,
   0.2104217,
   0.2020409,
   0.1946448,
   0.2141339,
   0.231745,
   0.2102591,
   0.2073292,
   0.2419696,
   0.2399976,
   0.2053246,
   0.2294179,
   0.270814,
   0.2694697};
   Double_t _fehx3015[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3015[25] = {
   0.2014394,
   0.1943776,
   0.1946267,
   0.2089978,
   0.206079,
   0.2241069,
   0.2196509,
   0.2503979,
   0.2222021,
   0.2090674,
   0.1939631,
   0.2067668,
   0.2104217,
   0.2020409,
   0.1946448,
   0.2141339,
   0.231745,
   0.2102591,
   0.2073292,
   0.2419696,
   0.2399976,
   0.2053246,
   0.2294179,
   0.270814,
   0.2694697};
   grae = new TGraphAsymmErrors(25,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,1650);
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
   
   Double_t _fx3016[25] = {
   30,
   90,
   150,
   210,
   270,
   330,
   390,
   450,
   510,
   570,
   630,
   690,
   750,
   810,
   870,
   930,
   990,
   1050,
   1110,
   1170,
   1230,
   1290,
   1350,
   1410,
   1470};
   Double_t _fy3016[25] = {
   1.176382,
   1.108116,
   1.094443,
   1.030603,
   1.058582,
   0.8771919,
   0.9443828,
   1.015927,
   0.9433144,
   1.009104,
   0.861555,
   1.054721,
   1.267146,
   0.9564437,
   0.8405949,
   1.242462,
   0.5669539,
   0.8396007,
   0.6777351,
   0.9911661,
   1.079676,
   0.9464494,
   0.937518,
   1.060364,
   0.6565995};
   Double_t _felx3016[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fely3016[25] = {
   0.07756831,
   0.05144297,
   0.04584118,
   0.04595233,
   0.05128848,
   0.05115887,
   0.05937284,
   0.07429193,
   0.07888391,
   0.09025702,
   0.1023161,
   0.1279602,
   0.1649014,
   0.1437847,
   0.1522974,
   0.2327422,
   0.1526429,
   0.2184431,
   0.1892914,
   0.2497447,
   0.2720465,
   0.2313964,
   0.2724305,
   0.3762571,
   0.2682247};
   Double_t _fehx3016[25] = {
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30,
   30};
   Double_t _fehy3016[25] = {
   0.07756831,
   0.05144297,
   0.04584118,
   0.04595233,
   0.05128848,
   0.05115887,
   0.05937284,
   0.07429193,
   0.07888391,
   0.09025702,
   0.09993094,
   0.1249121,
   0.1606865,
   0.1395327,
   0.1468519,
   0.2241278,
   0.1443729,
   0.207035,
   0.1786219,
   0.2371394,
   0.2583156,
   0.2200915,
   0.2563895,
   0.3485297,
   0.2448675};
   grae = new TGraphAsymmErrors(25,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,1650);
   Graph_Graph3016->SetMinimum(0.2805533);
   Graph_Graph3016->SetMaximum(1.574412);
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
   
   TH1F *hist__12 = new TH1F("hist__12","NCpi0BDT_0p_bnb_12_pi0_momentum_all",25,0,1500);

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
   canvas4->cd();
   canvas4->Modified();
   canvas4->cd();
   canvas4->SetSelected(canvas4);
}
