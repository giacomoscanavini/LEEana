#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 15:01:40 2022) by ROOT version 6.26/00
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
   pad1->Range(-92.30769,-0.82,676.9231,69.09579);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);
   hmc__1->SetBinContent(1,0.8586828);
   hmc__1->SetBinContent(2,2.962842);
   hmc__1->SetBinContent(3,9.16083);
   hmc__1->SetBinContent(4,19.9285);
   hmc__1->SetBinContent(5,33.68996);
   hmc__1->SetBinContent(6,35.51829);
   hmc__1->SetBinContent(7,35.95261);
   hmc__1->SetBinContent(8,31.50599);
   hmc__1->SetBinContent(9,25.83549);
   hmc__1->SetBinContent(10,23.05803);
   hmc__1->SetBinContent(11,18.96811);
   hmc__1->SetBinContent(12,13.93099);
   hmc__1->SetBinContent(13,13.52075);
   hmc__1->SetBinContent(14,10.49064);
   hmc__1->SetBinContent(15,8.525528);
   hmc__1->SetBinContent(16,7.181937);
   hmc__1->SetBinContent(17,5.930528);
   hmc__1->SetBinContent(18,3.76422);
   hmc__1->SetBinContent(19,4.306983);
   hmc__1->SetBinContent(20,3.471842);
   hmc__1->SetBinContent(21,2.053051);
   hmc__1->SetBinContent(22,1.594337);
   hmc__1->SetBinContent(23,1.672767);
   hmc__1->SetBinContent(24,1.443079);
   hmc__1->SetBinContent(25,10.18672);
   hmc__1->SetBinError(1,2.6347);
   hmc__1->SetBinError(2,2.435415);
   hmc__1->SetBinError(3,3.694968);
   hmc__1->SetBinError(4,9.200815);
   hmc__1->SetBinError(5,7.97293);
   hmc__1->SetBinError(6,8.773061);
   hmc__1->SetBinError(7,9.999091);
   hmc__1->SetBinError(8,8.331692);
   hmc__1->SetBinError(9,6.938395);
   hmc__1->SetBinError(10,7.335028);
   hmc__1->SetBinError(11,5.799855);
   hmc__1->SetBinError(12,4.086474);
   hmc__1->SetBinError(13,4.062591);
   hmc__1->SetBinError(14,3.710822);
   hmc__1->SetBinError(15,2.983545);
   hmc__1->SetBinError(16,2.961501);
   hmc__1->SetBinError(17,2.13315);
   hmc__1->SetBinError(18,1.872063);
   hmc__1->SetBinError(19,2.018429);
   hmc__1->SetBinError(20,1.866544);
   hmc__1->SetBinError(21,2.65958);
   hmc__1->SetBinError(22,1.096736);
   hmc__1->SetBinError(23,1.248201);
   hmc__1->SetBinError(24,1.270623);
   hmc__1->SetBinError(25,3.481525);
   hmc__1->SetMinimum(-0.82);
   hmc__1->SetMaximum(65.6);
   hmc__1->SetEntries(321.7148);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",24,0,600);
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(37.75024);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);
   hbadmatch_stack_1->SetBinContent(1,0.3403182);
   hbadmatch_stack_1->SetBinContent(2,0.1881986);
   hbadmatch_stack_1->SetBinContent(3,0.9437057);
   hbadmatch_stack_1->SetBinContent(4,0.9046567);
   hbadmatch_stack_1->SetBinContent(5,1.10853);
   hbadmatch_stack_1->SetBinContent(6,1.258814);
   hbadmatch_stack_1->SetBinContent(7,1.009237);
   hbadmatch_stack_1->SetBinContent(8,0.7121549);
   hbadmatch_stack_1->SetBinContent(9,0.662242);
   hbadmatch_stack_1->SetBinContent(10,0.1898091);
   hbadmatch_stack_1->SetBinContent(11,0.2113693);
   hbadmatch_stack_1->SetBinContent(12,0.1927164);
   hbadmatch_stack_1->SetBinContent(13,0.02742789);
   hbadmatch_stack_1->SetBinContent(17,0.06195629);
   hbadmatch_stack_1->SetBinContent(19,0.0127502);
   hbadmatch_stack_1->SetBinContent(23,0.01485);
   hbadmatch_stack_1->SetBinContent(24,0.0127502);
   hbadmatch_stack_1->SetBinError(1,0.3403182);
   hbadmatch_stack_1->SetBinError(2,0.09221676);
   hbadmatch_stack_1->SetBinError(3,0.3329928);
   hbadmatch_stack_1->SetBinError(4,0.2167103);
   hbadmatch_stack_1->SetBinError(5,0.2543229);
   hbadmatch_stack_1->SetBinError(6,0.2639225);
   hbadmatch_stack_1->SetBinError(7,0.2350301);
   hbadmatch_stack_1->SetBinError(8,0.2037855);
   hbadmatch_stack_1->SetBinError(9,0.1850236);
   hbadmatch_stack_1->SetBinError(10,0.1019563);
   hbadmatch_stack_1->SetBinError(11,0.1088158);
   hbadmatch_stack_1->SetBinError(12,0.09297517);
   hbadmatch_stack_1->SetBinError(13,0.01944228);
   hbadmatch_stack_1->SetBinError(17,0.06195629);
   hbadmatch_stack_1->SetBinError(19,0.0127502);
   hbadmatch_stack_1->SetBinError(23,0.01485);
   hbadmatch_stack_1->SetBinError(24,0.0127502);
   hbadmatch_stack_1->SetEntries(208);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
   color = new TColor(ci, 0.6, 0, 0, " ", 0.5);
   hbadmatch_stack_1->SetFillColor(ci);
   hbadmatch_stack_1->SetFillStyle(3004);

   ci = TColor::GetColor("#990000");
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);
   hext_stack_2->SetBinContent(1,0.211319);
   hext_stack_2->SetBinContent(2,0.707576);
   hext_stack_2->SetBinContent(3,1.078403);
   hext_stack_2->SetBinContent(4,1.385149);
   hext_stack_2->SetBinContent(5,4.493585);
   hext_stack_2->SetBinContent(6,3.881436);
   hext_stack_2->SetBinContent(7,4.009597);
   hext_stack_2->SetBinContent(8,3.439721);
   hext_stack_2->SetBinContent(9,2.058647);
   hext_stack_2->SetBinContent(10,1.56239);
   hext_stack_2->SetBinContent(11,1.70009);
   hext_stack_2->SetBinContent(12,0.3953667);
   hext_stack_2->SetBinContent(13,0.992514);
   hext_stack_2->SetBinContent(14,0.5576063);
   hext_stack_2->SetBinContent(15,0.707576);
   hext_stack_2->SetBinContent(16,0.2358586);
   hext_stack_2->SetBinContent(17,0.4349078);
   hext_stack_2->SetBinContent(18,0.02453971);
   hext_stack_2->SetBinContent(19,0.4226379);
   hext_stack_2->SetBinContent(20,0.211319);
   hext_stack_2->SetBinContent(21,0.01226985);
   hext_stack_2->SetBinContent(23,0.01226985);
   hext_stack_2->SetBinContent(24,0.211319);
   hext_stack_2->SetBinContent(25,0.04907941);
   hext_stack_2->SetBinError(1,0.1994269);
   hext_stack_2->SetBinError(2,0.3467226);
   hext_stack_2->SetBinError(3,0.4024237);
   hext_stack_2->SetBinError(4,0.4070732);
   hext_stack_2->SetBinError(5,0.8726524);
   hext_stack_2->SetBinError(6,0.7780092);
   hext_stack_2->SetBinError(7,0.825365);
   hext_stack_2->SetBinError(8,0.7745183);
   hext_stack_2->SetBinError(9,0.5680539);
   hext_stack_2->SetBinError(10,0.4921786);
   hext_stack_2->SetBinError(11,0.5301958);
   hext_stack_2->SetBinError(12,0.2050106);
   hext_stack_2->SetBinError(13,0.4011122);
   hext_stack_2->SetBinError(14,0.284953);
   hext_stack_2->SetBinError(15,0.3467226);
   hext_stack_2->SetBinError(16,0.2001804);
   hext_stack_2->SetBinError(17,0.282299);
   hext_stack_2->SetBinError(18,0.01735219);
   hext_stack_2->SetBinError(19,0.2820323);
   hext_stack_2->SetBinError(20,0.1994269);
   hext_stack_2->SetBinError(21,0.01226985);
   hext_stack_2->SetBinError(23,0.01226985);
   hext_stack_2->SetBinError(24,0.1994269);
   hext_stack_2->SetBinError(25,0.0245397);
   hext_stack_2->SetEntries(581);

   ci = 1435;
   color = new TColor(ci, 0.4, 0.2, 0, " ", 0.5);
   hext_stack_2->SetFillColor(ci);
   hext_stack_2->SetFillStyle(3004);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);
   hdirt_stack_3->SetBinContent(1,0.008219617);
   hdirt_stack_3->SetBinContent(2,0.2014951);
   hdirt_stack_3->SetBinContent(3,0.302887);
   hdirt_stack_3->SetBinContent(4,0.6227392);
   hdirt_stack_3->SetBinContent(5,0.602658);
   hdirt_stack_3->SetBinContent(6,0.8452242);
   hdirt_stack_3->SetBinContent(7,0.7081423);
   hdirt_stack_3->SetBinContent(8,0.2096791);
   hdirt_stack_3->SetBinContent(9,0.2389006);
   hdirt_stack_3->SetBinContent(10,0.07932473);
   hdirt_stack_3->SetBinContent(11,0.1358892);
   hdirt_stack_3->SetBinContent(12,0.1139844);
   hdirt_stack_3->SetBinContent(13,0.1248368);
   hdirt_stack_3->SetBinContent(14,0.1045323);
   hdirt_stack_3->SetBinContent(15,0.05402308);
   hdirt_stack_3->SetBinContent(16,0.1035832);
   hdirt_stack_3->SetBinContent(17,0.04420907);
   hdirt_stack_3->SetBinContent(18,0.04997326);
   hdirt_stack_3->SetBinError(1,0.008219618);
   hdirt_stack_3->SetBinError(2,0.08955699);
   hdirt_stack_3->SetBinError(3,0.1049783);
   hdirt_stack_3->SetBinError(4,0.1605849);
   hdirt_stack_3->SetBinError(5,0.156833);
   hdirt_stack_3->SetBinError(6,0.1823688);
   hdirt_stack_3->SetBinError(7,0.2480081);
   hdirt_stack_3->SetBinError(8,0.08063002);
   hdirt_stack_3->SetBinError(9,0.09569008);
   hdirt_stack_3->SetBinError(10,0.04758446);
   hdirt_stack_3->SetBinError(11,0.07850069);
   hdirt_stack_3->SetBinError(12,0.06424415);
   hdirt_stack_3->SetBinError(13,0.08523457);
   hdirt_stack_3->SetBinError(14,0.06882436);
   hdirt_stack_3->SetBinError(15,0.03744488);
   hdirt_stack_3->SetBinError(16,0.07326385);
   hdirt_stack_3->SetBinError(17,0.04420907);
   hdirt_stack_3->SetBinError(18,0.04158944);
   hdirt_stack_3->SetEntries(170);

   ci = 1436;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hdirt_stack_3->SetFillColor(ci);
   hdirt_stack_3->SetFillStyle(3224);

   ci = TColor::GetColor("#666666");
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);
   houtFV_stack_4->SetBinContent(1,0.149413);
   houtFV_stack_4->SetBinContent(2,0.4482389);
   houtFV_stack_4->SetBinContent(3,2.662363);
   houtFV_stack_4->SetBinContent(4,3.832899);
   houtFV_stack_4->SetBinContent(5,6.150077);
   houtFV_stack_4->SetBinContent(6,5.427861);
   houtFV_stack_4->SetBinContent(7,5.497726);
   houtFV_stack_4->SetBinContent(8,3.937411);
   houtFV_stack_4->SetBinContent(9,3.296708);
   houtFV_stack_4->SetBinContent(10,2.484115);
   houtFV_stack_4->SetBinContent(11,1.584599);
   houtFV_stack_4->SetBinContent(12,1.571996);
   houtFV_stack_4->SetBinContent(13,1.771958);
   houtFV_stack_4->SetBinContent(14,0.785235);
   houtFV_stack_4->SetBinContent(15,0.5355958);
   houtFV_stack_4->SetBinContent(16,0.6705637);
   houtFV_stack_4->SetBinContent(17,0.4879164);
   houtFV_stack_4->SetBinContent(18,0.2368697);
   houtFV_stack_4->SetBinContent(19,0.4509138);
   houtFV_stack_4->SetBinContent(20,0.3480321);
   houtFV_stack_4->SetBinContent(21,0.1366628);
   houtFV_stack_4->SetBinContent(22,0.2113693);
   houtFV_stack_4->SetBinContent(23,0.1384575);
   houtFV_stack_4->SetBinContent(24,0.2605754);
   houtFV_stack_4->SetBinContent(25,0.3408893);
   houtFV_stack_4->SetBinError(1,0.08945557);
   houtFV_stack_4->SetBinError(2,0.1549416);
   houtFV_stack_4->SetBinError(3,0.3921439);
   houtFV_stack_4->SetBinError(4,0.4606073);
   houtFV_stack_4->SetBinError(5,0.5800249);
   houtFV_stack_4->SetBinError(6,0.5415094);
   houtFV_stack_4->SetBinError(7,0.5485625);
   houtFV_stack_4->SetBinError(8,0.4569613);
   houtFV_stack_4->SetBinError(9,0.422284);
   houtFV_stack_4->SetBinError(10,0.3712004);
   houtFV_stack_4->SetBinError(11,0.2902975);
   houtFV_stack_4->SetBinError(12,0.2900253);
   houtFV_stack_4->SetBinError(13,0.3232267);
   houtFV_stack_4->SetBinError(14,0.2051027);
   houtFV_stack_4->SetBinError(15,0.1611972);
   houtFV_stack_4->SetBinError(16,0.1975755);
   houtFV_stack_4->SetBinError(17,0.1661712);
   houtFV_stack_4->SetBinError(18,0.1102997);
   houtFV_stack_4->SetBinError(19,0.1551846);
   houtFV_stack_4->SetBinError(20,0.1402876);
   houtFV_stack_4->SetBinError(21,0.08854226);
   houtFV_stack_4->SetBinError(22,0.1088158);
   houtFV_stack_4->SetBinError(23,0.0693829);
   houtFV_stack_4->SetBinError(24,0.1245668);
   houtFV_stack_4->SetBinError(25,0.1288568);
   houtFV_stack_4->SetEntries(1136);

   ci = 1437;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   houtFV_stack_4->SetFillColor(ci);
   houtFV_stack_4->SetFillStyle(3224);

   ci = TColor::GetColor("#ff9933");
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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);
   hNCpi0inFV_stack_5->SetBinContent(1,0.0127502);
   hNCpi0inFV_stack_5->SetBinContent(2,0.5866964);
   hNCpi0inFV_stack_5->SetBinContent(3,3.070332);
   hNCpi0inFV_stack_5->SetBinContent(4,8.602201);
   hNCpi0inFV_stack_5->SetBinContent(5,14.50042);
   hNCpi0inFV_stack_5->SetBinContent(6,16.41011);
   hNCpi0inFV_stack_5->SetBinContent(7,16.65775);
   hNCpi0inFV_stack_5->SetBinContent(8,15.47322);
   hNCpi0inFV_stack_5->SetBinContent(9,13.18319);
   hNCpi0inFV_stack_5->SetBinContent(10,12.09168);
   hNCpi0inFV_stack_5->SetBinContent(11,9.669444);
   hNCpi0inFV_stack_5->SetBinContent(12,8.064712);
   hNCpi0inFV_stack_5->SetBinContent(13,7.230772);
   hNCpi0inFV_stack_5->SetBinContent(14,5.650398);
   hNCpi0inFV_stack_5->SetBinContent(15,4.467844);
   hNCpi0inFV_stack_5->SetBinContent(16,3.30163);
   hNCpi0inFV_stack_5->SetBinContent(17,2.800596);
   hNCpi0inFV_stack_5->SetBinContent(18,2.179238);
   hNCpi0inFV_stack_5->SetBinContent(19,2.088192);
   hNCpi0inFV_stack_5->SetBinContent(20,1.384762);
   hNCpi0inFV_stack_5->SetBinContent(21,0.8727722);
   hNCpi0inFV_stack_5->SetBinContent(22,0.9584341);
   hNCpi0inFV_stack_5->SetBinContent(23,0.7835208);
   hNCpi0inFV_stack_5->SetBinContent(24,0.646858);
   hNCpi0inFV_stack_5->SetBinContent(25,4.810305);
   hNCpi0inFV_stack_5->SetBinError(1,0.0127502);
   hNCpi0inFV_stack_5->SetBinError(2,0.1697671);
   hNCpi0inFV_stack_5->SetBinError(3,0.4162775);
   hNCpi0inFV_stack_5->SetBinError(4,0.6806765);
   hNCpi0inFV_stack_5->SetBinError(5,0.8862634);
   hNCpi0inFV_stack_5->SetBinError(6,0.9493527);
   hNCpi0inFV_stack_5->SetBinError(7,0.9461935);
   hNCpi0inFV_stack_5->SetBinError(8,0.9017257);
   hNCpi0inFV_stack_5->SetBinError(9,0.8556192);
   hNCpi0inFV_stack_5->SetBinError(10,0.8162969);
   hNCpi0inFV_stack_5->SetBinError(11,0.7215532);
   hNCpi0inFV_stack_5->SetBinError(12,0.6619484);
   hNCpi0inFV_stack_5->SetBinError(13,0.6301527);
   hNCpi0inFV_stack_5->SetBinError(14,0.5538844);
   hNCpi0inFV_stack_5->SetBinError(15,0.4928815);
   hNCpi0inFV_stack_5->SetBinError(16,0.4161579);
   hNCpi0inFV_stack_5->SetBinError(17,0.3893019);
   hNCpi0inFV_stack_5->SetBinError(18,0.3408752);
   hNCpi0inFV_stack_5->SetBinError(19,0.3436331);
   hNCpi0inFV_stack_5->SetBinError(20,0.2635956);
   hNCpi0inFV_stack_5->SetBinError(21,0.211336);
   hNCpi0inFV_stack_5->SetBinError(22,0.2277112);
   hNCpi0inFV_stack_5->SetBinError(23,0.2086263);
   hNCpi0inFV_stack_5->SetBinError(24,0.1889053);
   hNCpi0inFV_stack_5->SetBinError(25,0.5003471);
   hNCpi0inFV_stack_5->SetEntries(4048);

   ci = 1438;
   color = new TColor(ci, 0.49, 0.6, 0.82, " ", 0.5);
   hNCpi0inFV_stack_5->SetFillColor(ci);
   hNCpi0inFV_stack_5->SetLineColor(38);
   hNCpi0inFV_stack_5->GetXaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetXaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetYaxis()->SetTitleFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetLabelFont(42);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFV_stack_5->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);
   hCCpi0inFV_stack_6->SetBinContent(1,0.07470649);
   hCCpi0inFV_stack_6->SetBinContent(2,0.3607822);
   hCCpi0inFV_stack_6->SetBinContent(3,0.4609891);
   hCCpi0inFV_stack_6->SetBinContent(4,2.785173);
   hCCpi0inFV_stack_6->SetBinContent(5,3.837618);
   hCCpi0inFV_stack_6->SetBinContent(6,4.055885);
   hCCpi0inFV_stack_6->SetBinContent(7,4.627213);
   hCCpi0inFV_stack_6->SetBinContent(8,4.902182);
   hCCpi0inFV_stack_6->SetBinContent(9,4.158309);
   hCCpi0inFV_stack_6->SetBinContent(10,4.641593);
   hCCpi0inFV_stack_6->SetBinContent(11,4.306274);
   hCCpi0inFV_stack_6->SetBinContent(12,2.33304);
   hCCpi0inFV_stack_6->SetBinContent(13,2.51811);
   hCCpi0inFV_stack_6->SetBinContent(14,2.46352);
   hCCpi0inFV_stack_6->SetBinContent(15,1.608881);
   hCCpi0inFV_stack_6->SetBinContent(16,1.884917);
   hCCpi0inFV_stack_6->SetBinContent(17,1.118803);
   hCCpi0inFV_stack_6->SetBinContent(18,0.7251539);
   hCCpi0inFV_stack_6->SetBinContent(19,0.945684);
   hCCpi0inFV_stack_6->SetBinContent(20,1.1773);
   hCCpi0inFV_stack_6->SetBinContent(21,0.845477);
   hCCpi0inFV_stack_6->SetBinContent(22,0.3370765);
   hCCpi0inFV_stack_6->SetBinContent(23,0.5339009);
   hCCpi0inFV_stack_6->SetBinContent(24,0.1621632);
   hCCpi0inFV_stack_6->SetBinContent(25,2.676683);
   hCCpi0inFV_stack_6->SetBinError(1,0.06325464);
   hCCpi0inFV_stack_6->SetBinError(2,0.1408658);
   hCCpi0inFV_stack_6->SetBinError(3,0.1554653);
   hCCpi0inFV_stack_6->SetBinError(4,0.3929606);
   hCCpi0inFV_stack_6->SetBinError(5,0.4629255);
   hCCpi0inFV_stack_6->SetBinError(6,0.4711543);
   hCCpi0inFV_stack_6->SetBinError(7,0.4919189);
   hCCpi0inFV_stack_6->SetBinError(8,0.5122953);
   hCCpi0inFV_stack_6->SetBinError(9,0.4795001);
   hCCpi0inFV_stack_6->SetBinError(10,0.4952482);
   hCCpi0inFV_stack_6->SetBinError(11,0.4877085);
   hCCpi0inFV_stack_6->SetBinError(12,0.348203);
   hCCpi0inFV_stack_6->SetBinError(13,0.3600867);
   hCCpi0inFV_stack_6->SetBinError(14,0.3675101);
   hCCpi0inFV_stack_6->SetBinError(15,0.2854577);
   hCCpi0inFV_stack_6->SetBinError(16,0.3275841);
   hCCpi0inFV_stack_6->SetBinError(17,0.2510836);
   hCCpi0inFV_stack_6->SetBinError(18,0.1833981);
   hCCpi0inFV_stack_6->SetBinError(19,0.2273539);
   hCCpi0inFV_stack_6->SetBinError(20,0.2606849);
   hCCpi0inFV_stack_6->SetBinError(21,0.2176316);
   hCCpi0inFV_stack_6->SetBinError(22,0.1284224);
   hCCpi0inFV_stack_6->SetBinError(23,0.1766249);
   hCCpi0inFV_stack_6->SetBinError(24,0.09035965);
   hCCpi0inFV_stack_6->SetBinError(25,0.3793136);
   hCCpi0inFV_stack_6->SetEntries(1411);

   ci = 1439;
   color = new TColor(ci, 0.52, 0.76, 0.64, " ", 0.5);
   hCCpi0inFV_stack_6->SetFillColor(ci);
   hCCpi0inFV_stack_6->SetLineColor(30);
   hCCpi0inFV_stack_6->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_6->GetZaxis()->SetTitleFont(42);
   hs1->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);
   hNCinFV_stack_7->SetBinContent(1,0.06195629);
   hNCinFV_stack_7->SetBinContent(2,0.1366628);
   hNCinFV_stack_7->SetBinContent(3,0.2860757);
   hNCinFV_stack_7->SetBinContent(4,0.945684);
   hNCinFV_stack_7->SetBinContent(5,0.9110227);
   hNCinFV_stack_7->SetBinContent(6,1.195304);
   hNCinFV_stack_7->SetBinContent(7,1.556086);
   hNCinFV_stack_7->SetBinContent(8,1.306466);
   hNCinFV_stack_7->SetBinContent(9,0.6741531);
   hNCinFV_stack_7->SetBinContent(10,0.8472717);
   hNCinFV_stack_7->SetBinContent(11,0.6121968);
   hNCinFV_stack_7->SetBinContent(12,0.3115761);
   hNCinFV_stack_7->SetBinContent(13,0.2259142);
   hNCinFV_stack_7->SetBinContent(14,0.4227385);
   hNCinFV_stack_7->SetBinContent(15,0.3607822);
   hNCinFV_stack_7->SetBinContent(16,0.3607822);
   hNCinFV_stack_7->SetBinContent(17,0.4354887);
   hNCinFV_stack_7->SetBinContent(18,0.2988259);
   hNCinFV_stack_7->SetBinContent(19,0.149413);
   hNCinFV_stack_7->SetBinContent(20,0.0127502);
   hNCinFV_stack_7->SetBinContent(21,0.1239126);
   hNCinFV_stack_7->SetBinContent(22,0.07470649);
   hNCinFV_stack_7->SetBinContent(23,0.08745668);
   hNCinFV_stack_7->SetBinContent(24,0.0127502);
   hNCinFV_stack_7->SetBinContent(25,0.5466511);
   hNCinFV_stack_7->SetBinError(1,0.06195629);
   hNCinFV_stack_7->SetBinError(2,0.08854226);
   hNCinFV_stack_7->SetBinError(3,0.1258651);
   hNCinFV_stack_7->SetBinError(4,0.2273539);
   hNCinFV_stack_7->SetBinError(5,0.2124867);
   hNCinFV_stack_7->SetBinError(6,0.2530186);
   hNCinFV_stack_7->SetBinError(7,0.2895886);
   hNCinFV_stack_7->SetBinError(8,0.2674565);
   hNCinFV_stack_7->SetBinError(9,0.1816166);
   hNCinFV_stack_7->SetBinError(10,0.2105654);
   hNCinFV_stack_7->SetBinError(11,0.1707221);
   hNCinFV_stack_7->SetBinError(12,0.1271502);
   hNCinFV_stack_7->SetBinError(13,0.09475075);
   hNCinFV_stack_7->SetBinError(14,0.1538888);
   hNCinFV_stack_7->SetBinError(15,0.1408658);
   hNCinFV_stack_7->SetBinError(16,0.1408658);
   hNCinFV_stack_7->SetBinError(17,0.1544161);
   hNCinFV_stack_7->SetBinError(18,0.1265093);
   hNCinFV_stack_7->SetBinError(19,0.08945557);
   hNCinFV_stack_7->SetBinError(20,0.0127502);
   hNCinFV_stack_7->SetBinError(21,0.08761943);
   hNCinFV_stack_7->SetBinError(22,0.06325464);
   hNCinFV_stack_7->SetBinError(23,0.06452687);
   hNCinFV_stack_7->SetBinError(24,0.0127502);
   hNCinFV_stack_7->SetBinError(25,0.1770845);
   hNCinFV_stack_7->SetEntries(328);

   ci = 1440;
   color = new TColor(ci, 1, 0.6, 0.2, " ", 0.5);
   hNCinFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#ff9933");
   hNCinFV_stack_7->SetLineColor(ci);
   hNCinFV_stack_7->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_7->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs1->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);
   hnumuCCinFV_stack_8->SetBinContent(2,0.271235);
   hnumuCCinFV_stack_8->SetBinContent(3,0.2941183);
   hnumuCCinFV_stack_8->SetBinContent(4,0.7054603);
   hnumuCCinFV_stack_8->SetBinContent(5,2.024094);
   hnumuCCinFV_stack_8->SetBinContent(6,2.30163);
   hnumuCCinFV_stack_8->SetBinContent(7,1.713166);
   hnumuCCinFV_stack_8->SetBinContent(8,1.496192);
   hnumuCCinFV_stack_8->SetBinContent(9,1.482576);
   hnumuCCinFV_stack_8->SetBinContent(10,1.149095);
   hnumuCCinFV_stack_8->SetBinContent(11,0.7482477);
   hnumuCCinFV_stack_8->SetBinContent(12,0.9295481);
   hnumuCCinFV_stack_8->SetBinContent(13,0.6139286);
   hnumuCCinFV_stack_8->SetBinContent(14,0.506608);
   hnumuCCinFV_stack_8->SetBinContent(15,0.7908254);
   hnumuCCinFV_stack_8->SetBinContent(16,0.623332);
   hnumuCCinFV_stack_8->SetBinContent(17,0.5339009);
   hnumuCCinFV_stack_8->SetBinContent(18,0.1876636);
   hnumuCCinFV_stack_8->SetBinContent(19,0.1595276);
   hnumuCCinFV_stack_8->SetBinContent(20,0.2137668);
   hnumuCCinFV_stack_8->SetBinContent(22,0.0127502);
   hnumuCCinFV_stack_8->SetBinContent(23,0.08745668);
   hnumuCCinFV_stack_8->SetBinContent(24,0.1366628);
   hnumuCCinFV_stack_8->SetBinContent(25,0.5041315);
   hnumuCCinFV_stack_8->SetBinError(2,0.1379824);
   hnumuCCinFV_stack_8->SetBinError(3,0.129004);
   hnumuCCinFV_stack_8->SetBinError(4,0.2030883);
   hnumuCCinFV_stack_8->SetBinError(5,0.5143431);
   hnumuCCinFV_stack_8->SetBinError(6,0.646907);
   hnumuCCinFV_stack_8->SetBinError(7,0.3169802);
   hnumuCCinFV_stack_8->SetBinError(8,0.29424);
   hnumuCCinFV_stack_8->SetBinError(9,0.3600186);
   hnumuCCinFV_stack_8->SetBinError(10,0.2554387);
   hnumuCCinFV_stack_8->SetBinError(11,0.2062546);
   hnumuCCinFV_stack_8->SetBinError(12,0.2413943);
   hnumuCCinFV_stack_8->SetBinError(13,0.1954138);
   hnumuCCinFV_stack_8->SetBinError(14,0.217976);
   hnumuCCinFV_stack_8->SetBinError(15,0.2223325);
   hnumuCCinFV_stack_8->SetBinError(16,0.1920342);
   hnumuCCinFV_stack_8->SetBinError(17,0.1766249);
   hnumuCCinFV_stack_8->SetBinError(18,0.0921412);
   hnumuCCinFV_stack_8->SetBinError(19,0.09673642);
   hnumuCCinFV_stack_8->SetBinError(20,0.1091227);
   hnumuCCinFV_stack_8->SetBinError(22,0.0127502);
   hnumuCCinFV_stack_8->SetBinError(23,0.06452687);
   hnumuCCinFV_stack_8->SetBinError(24,0.08854226);
   hnumuCCinFV_stack_8->SetBinError(25,0.1652298);
   hnumuCCinFV_stack_8->SetEntries(413);

   ci = 1441;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hnumuCCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hnumuCCinFV_stack_8->SetLineColor(ci);
   hnumuCCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);
   hnueCCinFV_stack_9->SetBinContent(2,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(3,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(4,0.1445418);
   hnueCCinFV_stack_9->SetBinContent(5,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(6,0.1420225);
   hnueCCinFV_stack_9->SetBinContent(7,0.1736857);
   hnueCCinFV_stack_9->SetBinContent(8,0.02896422);
   hnueCCinFV_stack_9->SetBinContent(9,0.08076376);
   hnueCCinFV_stack_9->SetBinContent(10,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(12,0.0180466);
   hnueCCinFV_stack_9->SetBinContent(13,0.01528837);
   hnueCCinFV_stack_9->SetBinContent(16,0.001269496);
   hnueCCinFV_stack_9->SetBinContent(17,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(18,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(19,0.07786438);
   hnueCCinFV_stack_9->SetBinContent(20,0.1239126);
   hnueCCinFV_stack_9->SetBinContent(21,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(23,0.01485452);
   hnueCCinFV_stack_9->SetBinContent(25,1.258981);
   hnueCCinFV_stack_9->SetBinError(2,0.06195629);
   hnueCCinFV_stack_9->SetBinError(3,0.06195629);
   hnueCCinFV_stack_9->SetBinError(4,0.08205648);
   hnueCCinFV_stack_9->SetBinError(5,0.06195629);
   hnueCCinFV_stack_9->SetBinError(6,0.1072623);
   hnueCCinFV_stack_9->SetBinError(7,0.1054449);
   hnueCCinFV_stack_9->SetBinError(8,0.02062673);
   hnueCCinFV_stack_9->SetBinError(9,0.064748);
   hnueCCinFV_stack_9->SetBinError(10,0.0127502);
   hnueCCinFV_stack_9->SetBinError(12,0.0180466);
   hnueCCinFV_stack_9->SetBinError(13,0.01528837);
   hnueCCinFV_stack_9->SetBinError(16,0.001269496);
   hnueCCinFV_stack_9->SetBinError(17,0.0127502);
   hnueCCinFV_stack_9->SetBinError(18,0.06195629);
   hnueCCinFV_stack_9->SetBinError(19,0.063966);
   hnueCCinFV_stack_9->SetBinError(20,0.08761943);
   hnueCCinFV_stack_9->SetBinError(21,0.06195629);
   hnueCCinFV_stack_9->SetBinError(23,0.01485452);
   hnueCCinFV_stack_9->SetBinError(25,0.5160504);
   hnueCCinFV_stack_9->SetEntries(51);

   ci = 1442;
   color = new TColor(ci, 0, 0.8, 0, " ", 0.5);
   hnueCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   hnueCCinFV_stack_9->SetLineColor(ci);
   hnueCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs1->Add(hnueCCinFV_stack_9,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);
   hmcerror__2->SetBinContent(1,0.8586828);
   hmcerror__2->SetBinContent(2,2.962842);
   hmcerror__2->SetBinContent(3,9.16083);
   hmcerror__2->SetBinContent(4,19.9285);
   hmcerror__2->SetBinContent(5,33.68996);
   hmcerror__2->SetBinContent(6,35.51829);
   hmcerror__2->SetBinContent(7,35.95261);
   hmcerror__2->SetBinContent(8,31.50599);
   hmcerror__2->SetBinContent(9,25.83549);
   hmcerror__2->SetBinContent(10,23.05803);
   hmcerror__2->SetBinContent(11,18.96811);
   hmcerror__2->SetBinContent(12,13.93099);
   hmcerror__2->SetBinContent(13,13.52075);
   hmcerror__2->SetBinContent(14,10.49064);
   hmcerror__2->SetBinContent(15,8.525528);
   hmcerror__2->SetBinContent(16,7.181937);
   hmcerror__2->SetBinContent(17,5.930528);
   hmcerror__2->SetBinContent(18,3.76422);
   hmcerror__2->SetBinContent(19,4.306983);
   hmcerror__2->SetBinContent(20,3.471842);
   hmcerror__2->SetBinContent(21,2.053051);
   hmcerror__2->SetBinContent(22,1.594337);
   hmcerror__2->SetBinContent(23,1.672767);
   hmcerror__2->SetBinContent(24,1.443079);
   hmcerror__2->SetBinContent(25,10.18672);
   hmcerror__2->SetBinError(1,2.6347);
   hmcerror__2->SetBinError(2,2.435415);
   hmcerror__2->SetBinError(3,3.694968);
   hmcerror__2->SetBinError(4,9.200815);
   hmcerror__2->SetBinError(5,7.97293);
   hmcerror__2->SetBinError(6,8.773061);
   hmcerror__2->SetBinError(7,9.999091);
   hmcerror__2->SetBinError(8,8.331692);
   hmcerror__2->SetBinError(9,6.938395);
   hmcerror__2->SetBinError(10,7.335028);
   hmcerror__2->SetBinError(11,5.799855);
   hmcerror__2->SetBinError(12,4.086474);
   hmcerror__2->SetBinError(13,4.062591);
   hmcerror__2->SetBinError(14,3.710822);
   hmcerror__2->SetBinError(15,2.983545);
   hmcerror__2->SetBinError(16,2.961501);
   hmcerror__2->SetBinError(17,2.13315);
   hmcerror__2->SetBinError(18,1.872063);
   hmcerror__2->SetBinError(19,2.018429);
   hmcerror__2->SetBinError(20,1.866544);
   hmcerror__2->SetBinError(21,2.65958);
   hmcerror__2->SetBinError(22,1.096736);
   hmcerror__2->SetBinError(23,1.248201);
   hmcerror__2->SetBinError(24,1.270623);
   hmcerror__2->SetBinError(25,3.481525);
   hmcerror__2->SetEntries(321.7148);

   ci = TColor::GetColor("#666666");
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
   0,
   3,
   10,
   14,
   35,
   39,
   31,
   41,
   21,
   25,
   14,
   14,
   11,
   9,
   5,
   9,
   4,
   5,
   3,
   2,
   3,
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
   0,
   2.143368,
   3.34883,
   3.9102,
   6.0548,
   6.3813,
   5.7094,
   6.5384,
   4.7354,
   5.1474,
   3.9102,
   3.9102,
   3.4975,
   3.19354,
   2.48995,
   3.19354,
   2.29683,
   2.48995,
   2.143368,
   2,
   2.143368,
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
   1.1478,
   1.72422,
   3.1179,
   3.6898,
   5.8483,
   6.1757,
   5.5017,
   6.3331,
   4.5229,
   4.9374,
   3.6898,
   3.6898,
   3.27,
   2.9582,
   2.21064,
   2.9582,
   1.98186,
   2.21064,
   1.72422,
   1.51917,
   1.72422,
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
   Graph_Graph3001->SetMaximum(52.06641);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.95#pm0.05(data err)#pm0.20(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.62/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 299.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 7.9","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 28.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 43.1","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  150.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 50.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 11.4","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 17.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.2","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all");
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
   3.068304,
   0.8219861,
   0.4033443,
   0.4616912,
   0.2366559,
   0.2470012,
   0.2781187,
   0.2644479,
   0.2685606,
   0.3181116,
   0.3057688,
   0.293337,
   0.3004708,
   0.353727,
   0.3499543,
   0.4123541,
   0.3596898,
   0.4973309,
   0.4686411,
   0.5376234,
   1.295428,
   0.6878949,
   0.7461892,
   0.8804945};
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
   3.068304,
   0.8219861,
   0.4033443,
   0.4616912,
   0.2366559,
   0.2470012,
   0.2781187,
   0.2644479,
   0.2685606,
   0.3181116,
   0.3057688,
   0.293337,
   0.3004708,
   0.353727,
   0.3499543,
   0.4123541,
   0.3596898,
   0.4973309,
   0.4686411,
   0.5376234,
   1.295428,
   0.6878949,
   0.7461892,
   0.8804945};
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
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
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
   0.9465684,
   0.2347194,
   0.1994972,
   0.1971284,
   0.1715058,
   0.1896247,
   0.1995416,
   0.2015348,
   0.2002874,
   0.2119833,
   0.2016427,
   0.2121936,
   0.2063025,
   0.2190296,
   0.2015266,
   0.2077402,
   0.2225364,
   0.2512302,
   0.2287176,
   0.2323671,
   0.2923338,
   0.3351122,
   0.3392315,
   0.3296786};
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
   0.9465684,
   0.2347194,
   0.1994972,
   0.1971284,
   0.1715058,
   0.1896247,
   0.1995416,
   0.2015348,
   0.2002874,
   0.2119833,
   0.2016427,
   0.2121936,
   0.2063025,
   0.2190296,
   0.2015266,
   0.2077402,
   0.2225364,
   0.2512302,
   0.2287176,
   0.2323671,
   0.2923338,
   0.3351122,
   0.3392315,
   0.3296786};
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
   0,
   1.012542,
   1.091604,
   0.7025114,
   1.038885,
   1.098026,
   0.8622463,
   1.30134,
   0.8128353,
   1.084221,
   0.738081,
   1.004954,
   0.8135644,
   0.8579077,
   0.5864739,
   1.253144,
   0.6744762,
   1.328296,
   0.6965433,
   0.576063,
   1.46124,
   0,
   0,
   0.692963};
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
   0,
   0.7234164,
   0.3655597,
   0.1962114,
   0.1797212,
   0.1796624,
   0.1588035,
   0.2075288,
   0.1832905,
   0.2232367,
   0.206146,
   0.2806836,
   0.2586765,
   0.3044181,
   0.2920582,
   0.4446628,
   0.3872893,
   0.6614783,
   0.4976495,
   0.576063,
   1.043992,
   0,
   0,
   0.692963};
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
   1.336699,
   0.5819481,
   0.3403513,
   0.1851519,
   0.1735918,
   0.1738738,
   0.1530265,
   0.2010126,
   0.1750654,
   0.2141293,
   0.1945265,
   0.2648628,
   0.2418505,
   0.2819847,
   0.2592966,
   0.4118944,
   0.3341793,
   0.587277,
   0.4003313,
   0.4375688,
   0.8398331,
   0.7199233,
   0.6861685,
   0.9422287};
   grae = new TGraphAsymmErrors(24,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,660);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2.53118);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_10_kine_pio_energy_high_all",24,0,600);

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
