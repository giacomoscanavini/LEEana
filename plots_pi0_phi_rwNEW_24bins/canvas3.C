#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Fri Feb 17 21:59:20 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",242,172,1200,900);
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
   pad1->Range(-4.119231,-1.633122,3.957692,180.5889);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmc__7->SetBinContent(1,81.65609);
   hmc__7->SetBinContent(2,71.21138);
   hmc__7->SetBinContent(3,76.24069);
   hmc__7->SetBinContent(4,66.29044);
   hmc__7->SetBinContent(5,62.28483);
   hmc__7->SetBinContent(6,67.71389);
   hmc__7->SetBinContent(7,71.01639);
   hmc__7->SetBinContent(8,62.33363);
   hmc__7->SetBinContent(9,63.1781);
   hmc__7->SetBinContent(10,63.95909);
   hmc__7->SetBinContent(11,71.10995);
   hmc__7->SetBinContent(12,68.43605);
   hmc__7->SetBinContent(13,65.4258);
   hmc__7->SetBinContent(14,76.69552);
   hmc__7->SetBinContent(15,81.12328);
   hmc__7->SetBinContent(16,71.1101);
   hmc__7->SetBinContent(17,68.27612);
   hmc__7->SetBinContent(18,75.07979);
   hmc__7->SetBinContent(19,65.94608);
   hmc__7->SetBinContent(20,67.97044);
   hmc__7->SetBinContent(21,71.37354);
   hmc__7->SetBinContent(22,73.48748);
   hmc__7->SetBinContent(23,72.06876);
   hmc__7->SetBinContent(24,71.06802);
   hmc__7->SetBinError(1,23.96275);
   hmc__7->SetBinError(2,26.96913);
   hmc__7->SetBinError(3,31.51131);
   hmc__7->SetBinError(4,24.06024);
   hmc__7->SetBinError(5,18.42606);
   hmc__7->SetBinError(6,24.31409);
   hmc__7->SetBinError(7,21.45818);
   hmc__7->SetBinError(8,18.95328);
   hmc__7->SetBinError(9,23.3753);
   hmc__7->SetBinError(10,22.01809);
   hmc__7->SetBinError(11,27.93763);
   hmc__7->SetBinError(12,23.74487);
   hmc__7->SetBinError(13,23.64174);
   hmc__7->SetBinError(14,24.70299);
   hmc__7->SetBinError(15,37.17716);
   hmc__7->SetBinError(16,21.67176);
   hmc__7->SetBinError(17,23.62139);
   hmc__7->SetBinError(18,21.80734);
   hmc__7->SetBinError(19,18.61703);
   hmc__7->SetBinError(20,19.59931);
   hmc__7->SetBinError(21,23.8787);
   hmc__7->SetBinError(22,23.24788);
   hmc__7->SetBinError(23,27.74355);
   hmc__7->SetBinError(24,30.35911);
   hmc__7->SetBinError(25,0.3895343);
   hmc__7->SetMinimum(-1.633122);
   hmc__7->SetMaximum(171.4778);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",24,-3.15,3.15);
   hs3_stack_3->SetMinimum(-3.239374e-08);
   hs3_stack_3->SetMaximum(85.73889);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hbadmatch_stack_1->SetBinContent(1,2.497284);
   hbadmatch_stack_1->SetBinContent(2,2.000729);
   hbadmatch_stack_1->SetBinContent(3,2.219989);
   hbadmatch_stack_1->SetBinContent(4,2.711698);
   hbadmatch_stack_1->SetBinContent(5,3.337067);
   hbadmatch_stack_1->SetBinContent(6,3.085723);
   hbadmatch_stack_1->SetBinContent(7,2.774003);
   hbadmatch_stack_1->SetBinContent(8,0.3934307);
   hbadmatch_stack_1->SetBinContent(9,3.71512);
   hbadmatch_stack_1->SetBinContent(10,1.322064);
   hbadmatch_stack_1->SetBinContent(11,1.607298);
   hbadmatch_stack_1->SetBinContent(12,1.884905);
   hbadmatch_stack_1->SetBinContent(13,1.778214);
   hbadmatch_stack_1->SetBinContent(14,2.784209);
   hbadmatch_stack_1->SetBinContent(15,2.956527);
   hbadmatch_stack_1->SetBinContent(16,2.947152);
   hbadmatch_stack_1->SetBinContent(17,2.801067);
   hbadmatch_stack_1->SetBinContent(18,2.399592);
   hbadmatch_stack_1->SetBinContent(19,1.111624);
   hbadmatch_stack_1->SetBinContent(20,2.417256);
   hbadmatch_stack_1->SetBinContent(21,2.778463);
   hbadmatch_stack_1->SetBinContent(22,3.407763);
   hbadmatch_stack_1->SetBinContent(23,1.123658);
   hbadmatch_stack_1->SetBinContent(24,2.403866);
   hbadmatch_stack_1->SetBinError(1,0.7339878);
   hbadmatch_stack_1->SetBinError(2,0.7343859);
   hbadmatch_stack_1->SetBinError(3,0.8149106);
   hbadmatch_stack_1->SetBinError(4,0.9340321);
   hbadmatch_stack_1->SetBinError(5,0.9261647);
   hbadmatch_stack_1->SetBinError(6,0.9311179);
   hbadmatch_stack_1->SetBinError(7,0.9775455);
   hbadmatch_stack_1->SetBinError(8,0.2781975);
   hbadmatch_stack_1->SetBinError(9,0.9544222);
   hbadmatch_stack_1->SetBinError(10,0.5554667);
   hbadmatch_stack_1->SetBinError(11,0.6796534);
   hbadmatch_stack_1->SetBinError(12,1.146174);
   hbadmatch_stack_1->SetBinError(13,0.7786924);
   hbadmatch_stack_1->SetBinError(14,0.8323376);
   hbadmatch_stack_1->SetBinError(15,0.875539);
   hbadmatch_stack_1->SetBinError(16,0.9160356);
   hbadmatch_stack_1->SetBinError(17,0.8840701);
   hbadmatch_stack_1->SetBinError(18,0.8137414);
   hbadmatch_stack_1->SetBinError(19,0.5702215);
   hbadmatch_stack_1->SetBinError(20,0.742162);
   hbadmatch_stack_1->SetBinError(21,0.9824456);
   hbadmatch_stack_1->SetBinError(22,1.013995);
   hbadmatch_stack_1->SetBinError(23,0.5188295);
   hbadmatch_stack_1->SetBinError(24,0.8634887);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hext_stack_2->SetBinContent(1,13.1551);
   hext_stack_2->SetBinContent(2,7.836244);
   hext_stack_2->SetBinContent(3,10.27143);
   hext_stack_2->SetBinContent(4,10.93181);
   hext_stack_2->SetBinContent(5,12.29724);
   hext_stack_2->SetBinContent(6,15.84407);
   hext_stack_2->SetBinContent(7,18.17274);
   hext_stack_2->SetBinContent(8,11.57343);
   hext_stack_2->SetBinContent(9,7.67625);
   hext_stack_2->SetBinContent(10,7.951576);
   hext_stack_2->SetBinContent(11,8.325045);
   hext_stack_2->SetBinContent(12,8.167822);
   hext_stack_2->SetBinContent(13,5.664797);
   hext_stack_2->SetBinContent(14,6.393022);
   hext_stack_2->SetBinContent(15,16.5723);
   hext_stack_2->SetBinContent(16,15.58311);
   hext_stack_2->SetBinContent(17,12.72261);
   hext_stack_2->SetBinContent(18,18.65272);
   hext_stack_2->SetBinContent(19,20.50695);
   hext_stack_2->SetBinContent(20,14.12394);
   hext_stack_2->SetBinContent(21,14.13988);
   hext_stack_2->SetBinContent(22,15.3365);
   hext_stack_2->SetBinContent(23,8.9882);
   hext_stack_2->SetBinContent(24,6.698648);
   hext_stack_2->SetBinError(1,2.556707);
   hext_stack_2->SetBinError(2,1.930499);
   hext_stack_2->SetBinError(3,2.140944);
   hext_stack_2->SetBinError(4,2.174403);
   hext_stack_2->SetBinError(5,2.368851);
   hext_stack_2->SetBinError(6,2.715258);
   hext_stack_2->SetBinError(7,3.018159);
   hext_stack_2->SetBinError(8,2.26709);
   hext_stack_2->SetBinError(9,1.934366);
   hext_stack_2->SetBinError(10,1.765568);
   hext_stack_2->SetBinError(11,1.988024);
   hext_stack_2->SetBinError(12,1.905481);
   hext_stack_2->SetBinError(13,1.520379);
   hext_stack_2->SetBinError(14,1.708342);
   hext_stack_2->SetBinError(15,2.824802);
   hext_stack_2->SetBinError(16,2.75586);
   hext_stack_2->SetBinError(17,2.347232);
   hext_stack_2->SetBinError(18,3.010722);
   hext_stack_2->SetBinError(19,3.189559);
   hext_stack_2->SetBinError(20,2.320973);
   hext_stack_2->SetBinError(21,2.605066);
   hext_stack_2->SetBinError(22,2.722957);
   hext_stack_2->SetBinError(23,1.93915);
   hext_stack_2->SetBinError(24,1.814097);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hdirt_stack_3->SetBinContent(1,0.5232321);
   hdirt_stack_3->SetBinContent(2,1.834949);
   hdirt_stack_3->SetBinContent(3,0.9561222);
   hdirt_stack_3->SetBinContent(4,0.4762587);
   hdirt_stack_3->SetBinContent(5,0.9525174);
   hdirt_stack_3->SetBinContent(6,1.45079);
   hdirt_stack_3->SetBinContent(8,0.3569671);
   hdirt_stack_3->SetBinContent(9,1.015534);
   hdirt_stack_3->SetBinContent(10,0.3381872);
   hdirt_stack_3->SetBinContent(11,0.5758626);
   hdirt_stack_3->SetBinContent(12,0.9509758);
   hdirt_stack_3->SetBinContent(13,0.6101288);
   hdirt_stack_3->SetBinContent(14,0.5570828);
   hdirt_stack_3->SetBinContent(15,0.8875259);
   hdirt_stack_3->SetBinContent(16,0.4049124);
   hdirt_stack_3->SetBinContent(17,0.6787259);
   hdirt_stack_3->SetBinContent(18,2.318182);
   hdirt_stack_3->SetBinContent(19,1.936584);
   hdirt_stack_3->SetBinContent(20,0.7465333);
   hdirt_stack_3->SetBinContent(21,1.636612);
   hdirt_stack_3->SetBinContent(22,1.340263);
   hdirt_stack_3->SetBinContent(23,1.743472);
   hdirt_stack_3->SetBinContent(24,1.474965);
   hdirt_stack_3->SetBinError(1,0.3149294);
   hdirt_stack_3->SetBinError(2,0.7374651);
   hdirt_stack_3->SetBinError(3,0.5623509);
   hdirt_stack_3->SetBinError(4,0.3652866);
   hdirt_stack_3->SetBinError(5,0.5165933);
   hdirt_stack_3->SetBinError(6,0.6124765);
   hdirt_stack_3->SetBinError(8,0.258803);
   hdirt_stack_3->SetBinError(9,0.4823671);
   hdirt_stack_3->SetBinError(10,0.3381872);
   hdirt_stack_3->SetBinError(11,0.3389606);
   hdirt_stack_3->SetBinError(12,0.5269156);
   hdirt_stack_3->SetBinError(13,0.3151008);
   hdirt_stack_3->SetBinError(14,0.4028472);
   hdirt_stack_3->SetBinError(15,0.4867943);
   hdirt_stack_3->SetBinError(16,0.4049124);
   hdirt_stack_3->SetBinError(17,0.4782747);
   hdirt_stack_3->SetBinError(18,0.8576991);
   hdirt_stack_3->SetBinError(19,1.019266);
   hdirt_stack_3->SetBinError(20,0.4676974);
   hdirt_stack_3->SetBinError(21,0.6472511);
   hdirt_stack_3->SetBinError(22,0.6220168);
   hdirt_stack_3->SetBinError(23,0.7613817);
   hdirt_stack_3->SetBinError(24,0.5855289);
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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   houtFV_stack_4->SetBinContent(1,15.96475);
   houtFV_stack_4->SetBinContent(2,13.90651);
   houtFV_stack_4->SetBinContent(3,13.49482);
   houtFV_stack_4->SetBinContent(4,16.86205);
   houtFV_stack_4->SetBinContent(5,12.42968);
   houtFV_stack_4->SetBinContent(6,12.30833);
   houtFV_stack_4->SetBinContent(7,14.51432);
   houtFV_stack_4->SetBinContent(8,12.74003);
   houtFV_stack_4->SetBinContent(9,10.75689);
   houtFV_stack_4->SetBinContent(10,12.82337);
   houtFV_stack_4->SetBinContent(11,14.47849);
   houtFV_stack_4->SetBinContent(12,13.7847);
   houtFV_stack_4->SetBinContent(13,13.29496);
   houtFV_stack_4->SetBinContent(14,14.93344);
   houtFV_stack_4->SetBinContent(15,16.2422);
   houtFV_stack_4->SetBinContent(16,12.2785);
   houtFV_stack_4->SetBinContent(17,13.05094);
   houtFV_stack_4->SetBinContent(18,10.41917);
   houtFV_stack_4->SetBinContent(19,9.876082);
   houtFV_stack_4->SetBinContent(20,14.58411);
   houtFV_stack_4->SetBinContent(21,14.16873);
   houtFV_stack_4->SetBinContent(22,13.64019);
   houtFV_stack_4->SetBinContent(23,14.66271);
   houtFV_stack_4->SetBinContent(24,13.79341);
   houtFV_stack_4->SetBinError(1,2.036247);
   houtFV_stack_4->SetBinError(2,1.806751);
   houtFV_stack_4->SetBinError(3,1.870984);
   houtFV_stack_4->SetBinError(4,2.05268);
   houtFV_stack_4->SetBinError(5,1.729135);
   houtFV_stack_4->SetBinError(6,1.779437);
   houtFV_stack_4->SetBinError(7,1.925256);
   houtFV_stack_4->SetBinError(8,1.780791);
   houtFV_stack_4->SetBinError(9,1.865003);
   houtFV_stack_4->SetBinError(10,1.808384);
   houtFV_stack_4->SetBinError(11,1.955406);
   houtFV_stack_4->SetBinError(12,1.928479);
   houtFV_stack_4->SetBinError(13,1.804462);
   houtFV_stack_4->SetBinError(14,2.018703);
   houtFV_stack_4->SetBinError(15,1.991532);
   houtFV_stack_4->SetBinError(16,1.780545);
   houtFV_stack_4->SetBinError(17,1.826722);
   houtFV_stack_4->SetBinError(18,1.583928);
   houtFV_stack_4->SetBinError(19,1.946186);
   houtFV_stack_4->SetBinError(20,1.923119);
   houtFV_stack_4->SetBinError(21,1.934217);
   houtFV_stack_4->SetBinError(22,1.901671);
   houtFV_stack_4->SetBinError(23,1.8951);
   houtFV_stack_4->SetBinError(24,1.883057);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,1.087108);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2231999);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.6275859);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.390768);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.9763402);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,1.004072);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.5998541);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,1.059376);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.864572);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.529604);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.9484402);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2647179);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.613304);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2926179);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.1394999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.6691039);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8358399);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3484178);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.6539899);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.515986);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.767254);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3505157);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.07891307);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2387875);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2089417);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.3728455);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3271594);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2983287);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.3934993);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3211561);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.2470656);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.3718002);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.118917);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2517472);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.122146);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.06238626);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.2548204);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2501964);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2882649);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1283607);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2280886);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2321763);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3060563);
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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.2783359);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1394999);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.2791681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.1115999);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.1673999);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1458657);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.06238626);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2013529);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.06834073);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,13.96798);
   hNCpi0inFVres_stack_7->SetBinContent(2,13.05178);
   hNCpi0inFVres_stack_7->SetBinContent(3,14.18123);
   hNCpi0inFVres_stack_7->SetBinContent(4,11.08448);
   hNCpi0inFVres_stack_7->SetBinContent(5,9.70275);
   hNCpi0inFVres_stack_7->SetBinContent(6,11.17714);
   hNCpi0inFVres_stack_7->SetBinContent(7,11.03947);
   hNCpi0inFVres_stack_7->SetBinContent(8,10.72278);
   hNCpi0inFVres_stack_7->SetBinContent(9,9.954355);
   hNCpi0inFVres_stack_7->SetBinContent(10,12.26974);
   hNCpi0inFVres_stack_7->SetBinContent(11,12.82874);
   hNCpi0inFVres_stack_7->SetBinContent(12,13.62123);
   hNCpi0inFVres_stack_7->SetBinContent(13,12.53529);
   hNCpi0inFVres_stack_7->SetBinContent(14,10.54109);
   hNCpi0inFVres_stack_7->SetBinContent(15,13.42842);
   hNCpi0inFVres_stack_7->SetBinContent(16,11.63303);
   hNCpi0inFVres_stack_7->SetBinContent(17,9.62005);
   hNCpi0inFVres_stack_7->SetBinContent(18,12.4805);
   hNCpi0inFVres_stack_7->SetBinContent(19,9.888266);
   hNCpi0inFVres_stack_7->SetBinContent(20,11.68533);
   hNCpi0inFVres_stack_7->SetBinContent(21,12.60504);
   hNCpi0inFVres_stack_7->SetBinContent(22,11.42011);
   hNCpi0inFVres_stack_7->SetBinContent(23,12.15946);
   hNCpi0inFVres_stack_7->SetBinContent(24,13.55647);
   hNCpi0inFVres_stack_7->SetBinError(1,1.146741);
   hNCpi0inFVres_stack_7->SetBinError(2,1.204648);
   hNCpi0inFVres_stack_7->SetBinError(3,1.265393);
   hNCpi0inFVres_stack_7->SetBinError(4,1.055457);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9338938);
   hNCpi0inFVres_stack_7->SetBinError(6,1.036041);
   hNCpi0inFVres_stack_7->SetBinError(7,1.068073);
   hNCpi0inFVres_stack_7->SetBinError(8,1.075125);
   hNCpi0inFVres_stack_7->SetBinError(9,0.9886557);
   hNCpi0inFVres_stack_7->SetBinError(10,1.124983);
   hNCpi0inFVres_stack_7->SetBinError(11,1.21561);
   hNCpi0inFVres_stack_7->SetBinError(12,1.21721);
   hNCpi0inFVres_stack_7->SetBinError(13,1.139734);
   hNCpi0inFVres_stack_7->SetBinError(14,1.006505);
   hNCpi0inFVres_stack_7->SetBinError(15,1.178737);
   hNCpi0inFVres_stack_7->SetBinError(16,1.167596);
   hNCpi0inFVres_stack_7->SetBinError(17,0.9601289);
   hNCpi0inFVres_stack_7->SetBinError(18,1.222289);
   hNCpi0inFVres_stack_7->SetBinError(19,1.02265);
   hNCpi0inFVres_stack_7->SetBinError(20,1.120274);
   hNCpi0inFVres_stack_7->SetBinError(21,1.171838);
   hNCpi0inFVres_stack_7->SetBinError(22,1.068923);
   hNCpi0inFVres_stack_7->SetBinError(23,1.111525);
   hNCpi0inFVres_stack_7->SetBinError(24,1.234094);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,3.346352);
   hNCpi0inFVdis_stack_8->SetBinContent(2,2.845648);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.98498);
   hNCpi0inFVdis_stack_8->SetBinContent(4,2.734048);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.486356);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.636562);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.647684);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.803298);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.007143);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.12332);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.843816);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.62652);
   hNCpi0inFVdis_stack_8->SetBinContent(13,3.110534);
   hNCpi0inFVdis_stack_8->SetBinContent(14,2.886166);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.745834);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.078642);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.34652);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.839575);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.941302);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.985148);
   hNCpi0inFVdis_stack_8->SetBinContent(21,3.348184);
   hNCpi0inFVdis_stack_8->SetBinContent(22,4.28051);
   hNCpi0inFVdis_stack_8->SetBinContent(23,3.277102);
   hNCpi0inFVdis_stack_8->SetBinContent(24,2.440262);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5864584);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.5793924);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.5539212);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.5766992);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6679089);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.5388434);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4895807);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.5554416);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4025437);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.6086585);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5142026);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6606827);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6185432);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5399856);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.5180986);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.5641323);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.6137527);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.3530044);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.5537454);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.5827415);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.6443794);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.6989464);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.60663);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.4825746);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,17.5708);
   hCCpi0inFV_stack_10->SetBinContent(2,12.37542);
   hCCpi0inFV_stack_10->SetBinContent(3,17.90354);
   hCCpi0inFV_stack_10->SetBinContent(4,12.43834);
   hCCpi0inFV_stack_10->SetBinContent(5,8.564676);
   hCCpi0inFV_stack_10->SetBinContent(6,11.19339);
   hCCpi0inFV_stack_10->SetBinContent(7,10.99676);
   hCCpi0inFV_stack_10->SetBinContent(8,13.61977);
   hCCpi0inFV_stack_10->SetBinContent(9,13.23037);
   hCCpi0inFV_stack_10->SetBinContent(10,12.20979);
   hCCpi0inFV_stack_10->SetBinContent(11,13.69025);
   hCCpi0inFV_stack_10->SetBinContent(12,11.65544);
   hCCpi0inFV_stack_10->SetBinContent(13,17.1941);
   hCCpi0inFV_stack_10->SetBinContent(14,13.98257);
   hCCpi0inFV_stack_10->SetBinContent(15,13.373);
   hCCpi0inFV_stack_10->SetBinContent(16,12.62435);
   hCCpi0inFV_stack_10->SetBinContent(17,14.3622);
   hCCpi0inFV_stack_10->SetBinContent(18,13.18431);
   hCCpi0inFV_stack_10->SetBinContent(19,11.33276);
   hCCpi0inFV_stack_10->SetBinContent(20,11.39565);
   hCCpi0inFV_stack_10->SetBinContent(21,12.39542);
   hCCpi0inFV_stack_10->SetBinContent(22,12.68072);
   hCCpi0inFV_stack_10->SetBinContent(23,14.8655);
   hCCpi0inFV_stack_10->SetBinContent(24,16.25681);
   hCCpi0inFV_stack_10->SetBinError(1,2.178065);
   hCCpi0inFV_stack_10->SetBinError(2,1.677539);
   hCCpi0inFV_stack_10->SetBinError(3,2.191386);
   hCCpi0inFV_stack_10->SetBinError(4,1.769699);
   hCCpi0inFV_stack_10->SetBinError(5,1.478094);
   hCCpi0inFV_stack_10->SetBinError(6,1.625768);
   hCCpi0inFV_stack_10->SetBinError(7,1.641781);
   hCCpi0inFV_stack_10->SetBinError(8,1.873289);
   hCCpi0inFV_stack_10->SetBinError(9,1.813561);
   hCCpi0inFV_stack_10->SetBinError(10,1.717891);
   hCCpi0inFV_stack_10->SetBinError(11,1.809918);
   hCCpi0inFV_stack_10->SetBinError(12,1.709212);
   hCCpi0inFV_stack_10->SetBinError(13,2.049091);
   hCCpi0inFV_stack_10->SetBinError(14,1.912732);
   hCCpi0inFV_stack_10->SetBinError(15,1.834568);
   hCCpi0inFV_stack_10->SetBinError(16,1.802289);
   hCCpi0inFV_stack_10->SetBinError(17,1.995671);
   hCCpi0inFV_stack_10->SetBinError(18,1.824751);
   hCCpi0inFV_stack_10->SetBinError(19,1.733925);
   hCCpi0inFV_stack_10->SetBinError(20,1.729275);
   hCCpi0inFV_stack_10->SetBinError(21,1.750063);
   hCCpi0inFV_stack_10->SetBinError(22,1.786049);
   hCCpi0inFV_stack_10->SetBinError(23,1.95606);
   hCCpi0inFV_stack_10->SetBinError(24,2.081186);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hNCinFV_stack_11->SetBinContent(1,2.879342);
   hNCinFV_stack_11->SetBinContent(2,4.733375);
   hNCinFV_stack_11->SetBinContent(3,3.462874);
   hNCinFV_stack_11->SetBinContent(4,2.931052);
   hNCinFV_stack_11->SetBinContent(5,4.152764);
   hNCinFV_stack_11->SetBinContent(6,2.39585);
   hNCinFV_stack_11->SetBinContent(7,2.929362);
   hNCinFV_stack_11->SetBinContent(8,2.053982);
   hNCinFV_stack_11->SetBinContent(9,3.129458);
   hNCinFV_stack_11->SetBinContent(10,2.107235);
   hNCinFV_stack_11->SetBinContent(11,2.979234);
   hNCinFV_stack_11->SetBinContent(12,2.590875);
   hNCinFV_stack_11->SetBinContent(13,2.344287);
   hNCinFV_stack_11->SetBinContent(14,3.854614);
   hNCinFV_stack_11->SetBinContent(15,2.394159);
   hNCinFV_stack_11->SetBinContent(16,3.17764);
   hNCinFV_stack_11->SetBinContent(17,3.269539);
   hNCinFV_stack_11->SetBinContent(18,3.519508);
   hNCinFV_stack_11->SetBinContent(19,2.486059);
   hNCinFV_stack_11->SetBinContent(20,2.197444);
   hNCinFV_stack_11->SetBinContent(21,3.516127);
   hNCinFV_stack_11->SetBinContent(22,2.931052);
   hNCinFV_stack_11->SetBinContent(23,4.638094);
   hNCinFV_stack_11->SetBinContent(24,2.78759);
   hNCinFV_stack_11->SetBinError(1,0.8091209);
   hNCinFV_stack_11->SetBinError(2,1.12743);
   hNCinFV_stack_11->SetBinError(3,0.961023);
   hNCinFV_stack_11->SetBinError(4,0.8781425);
   hNCinFV_stack_11->SetBinError(5,0.9799761);
   hNCinFV_stack_11->SetBinError(6,0.7857345);
   hNCinFV_stack_11->SetBinError(7,0.8777653);
   hNCinFV_stack_11->SetBinError(8,0.7078105);
   hNCinFV_stack_11->SetBinError(9,0.9002741);
   hNCinFV_stack_11->SetBinError(10,0.6801976);
   hNCinFV_stack_11->SetBinError(11,0.8548804);
   hNCinFV_stack_11->SetBinError(12,0.8095761);
   hNCinFV_stack_11->SetBinError(13,0.8101654);
   hNCinFV_stack_11->SetBinError(14,1.000148);
   hNCinFV_stack_11->SetBinError(15,0.785313);
   hNCinFV_stack_11->SetBinError(16,0.8775989);
   hNCinFV_stack_11->SetBinError(17,0.9413781);
   hNCinFV_stack_11->SetBinError(18,0.9415746);
   hNCinFV_stack_11->SetBinError(19,0.8559962);
   hNCinFV_stack_11->SetBinError(20,0.760276);
   hNCinFV_stack_11->SetBinError(21,0.940871);
   hNCinFV_stack_11->SetBinError(22,0.8781425);
   hNCinFV_stack_11->SetBinError(23,1.074132);
   hNCinFV_stack_11->SetBinError(24,0.8331329);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,11.19308);
   hnumuCCinFV_stack_12->SetBinContent(2,10.67213);
   hnumuCCinFV_stack_12->SetBinContent(3,9.576378);
   hnumuCCinFV_stack_12->SetBinContent(4,5.437318);
   hnumuCCinFV_stack_12->SetBinContent(5,5.122983);
   hnumuCCinFV_stack_12->SetBinContent(6,6.229502);
   hnumuCCinFV_stack_12->SetBinContent(7,6.910076);
   hnumuCCinFV_stack_12->SetBinContent(8,7.24672);
   hnumuCCinFV_stack_12->SetBinContent(9,9.7605);
   hnumuCCinFV_stack_12->SetBinContent(10,10.63297);
   hnumuCCinFV_stack_12->SetBinContent(11,12.44076);
   hnumuCCinFV_stack_12->SetBinContent(12,11.02315);
   hnumuCCinFV_stack_12->SetBinContent(13,7.524973);
   hnumuCCinFV_stack_12->SetBinContent(14,19.41263);
   hnumuCCinFV_stack_12->SetBinContent(15,11.38285);
   hnumuCCinFV_stack_12->SetBinContent(16,8.760593);
   hnumuCCinFV_stack_12->SetBinContent(17,8.18765);
   hnumuCCinFV_stack_12->SetBinContent(18,9.127877);
   hnumuCCinFV_stack_12->SetBinContent(19,5.225244);
   hnumuCCinFV_stack_12->SetBinContent(20,6.471659);
   hnumuCCinFV_stack_12->SetBinContent(21,6.184152);
   hnumuCCinFV_stack_12->SetBinContent(22,6.182833);
   hnumuCCinFV_stack_12->SetBinContent(23,9.927176);
   hnumuCCinFV_stack_12->SetBinContent(24,9.724266);
   hnumuCCinFV_stack_12->SetBinError(1,1.757372);
   hnumuCCinFV_stack_12->SetBinError(2,1.751922);
   hnumuCCinFV_stack_12->SetBinError(3,1.556522);
   hnumuCCinFV_stack_12->SetBinError(4,1.284412);
   hnumuCCinFV_stack_12->SetBinError(5,1.212002);
   hnumuCCinFV_stack_12->SetBinError(6,1.812063);
   hnumuCCinFV_stack_12->SetBinError(7,1.373219);
   hnumuCCinFV_stack_12->SetBinError(8,2.252142);
   hnumuCCinFV_stack_12->SetBinError(9,2.020841);
   hnumuCCinFV_stack_12->SetBinError(10,1.991942);
   hnumuCCinFV_stack_12->SetBinError(11,1.927953);
   hnumuCCinFV_stack_12->SetBinError(12,1.764497);
   hnumuCCinFV_stack_12->SetBinError(13,1.439138);
   hnumuCCinFV_stack_12->SetBinError(14,2.429136);
   hnumuCCinFV_stack_12->SetBinError(15,2.758262);
   hnumuCCinFV_stack_12->SetBinError(16,1.561697);
   hnumuCCinFV_stack_12->SetBinError(17,1.889773);
   hnumuCCinFV_stack_12->SetBinError(18,1.938732);
   hnumuCCinFV_stack_12->SetBinError(19,1.160763);
   hnumuCCinFV_stack_12->SetBinError(20,1.418846);
   hnumuCCinFV_stack_12->SetBinError(21,1.242903);
   hnumuCCinFV_stack_12->SetBinError(22,1.291522);
   hnumuCCinFV_stack_12->SetBinError(23,1.61254);
   hnumuCCinFV_stack_12->SetBinError(24,1.673517);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hnueCCinFV_stack_13->SetBinContent(2,0.5604295);
   hnueCCinFV_stack_13->SetBinContent(3,0.8824278);
   hnueCCinFV_stack_13->SetBinContent(5,1.569686);
   hnueCCinFV_stack_13->SetBinContent(6,0.3882911);
   hnueCCinFV_stack_13->SetBinContent(9,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(10,0.7621787);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(12,0.6008185);
   hnueCCinFV_stack_13->SetBinContent(13,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(14,1.085983);
   hnueCCinFV_stack_13->SetBinContent(15,0.4992645);
   hnueCCinFV_stack_13->SetBinContent(16,0.2179626);
   hnueCCinFV_stack_13->SetBinContent(18,0.4413551);
   hnueCCinFV_stack_13->SetBinContent(20,0.4159254);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(22,1.585639);
   hnueCCinFV_stack_13->SetBinContent(24,1.136579);
   hnueCCinFV_stack_13->SetBinError(2,0.4141923);
   hnueCCinFV_stack_13->SetBinError(3,0.562594);
   hnueCCinFV_stack_13->SetBinError(5,1.569686);
   hnueCCinFV_stack_13->SetBinError(6,0.2764757);
   hnueCCinFV_stack_13->SetBinError(9,0.4394482);
   hnueCCinFV_stack_13->SetBinError(10,0.4529585);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(12,0.4494399);
   hnueCCinFV_stack_13->SetBinError(13,0.1967154);
   hnueCCinFV_stack_13->SetBinError(14,0.5879663);
   hnueCCinFV_stack_13->SetBinError(15,0.3608779);
   hnueCCinFV_stack_13->SetBinError(16,0.2179626);
   hnueCCinFV_stack_13->SetBinError(18,0.3141867);
   hnueCCinFV_stack_13->SetBinError(20,0.2945335);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(22,1.196685);
   hnueCCinFV_stack_13->SetBinError(24,0.7935128);
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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);
   hmcerror__8->SetBinContent(1,81.65609);
   hmcerror__8->SetBinContent(2,71.21138);
   hmcerror__8->SetBinContent(3,76.24069);
   hmcerror__8->SetBinContent(4,66.29044);
   hmcerror__8->SetBinContent(5,62.28483);
   hmcerror__8->SetBinContent(6,67.71389);
   hmcerror__8->SetBinContent(7,71.01639);
   hmcerror__8->SetBinContent(8,62.33363);
   hmcerror__8->SetBinContent(9,63.1781);
   hmcerror__8->SetBinContent(10,63.95909);
   hmcerror__8->SetBinContent(11,71.10995);
   hmcerror__8->SetBinContent(12,68.43605);
   hmcerror__8->SetBinContent(13,65.4258);
   hmcerror__8->SetBinContent(14,76.69552);
   hmcerror__8->SetBinContent(15,81.12328);
   hmcerror__8->SetBinContent(16,71.1101);
   hmcerror__8->SetBinContent(17,68.27612);
   hmcerror__8->SetBinContent(18,75.07979);
   hmcerror__8->SetBinContent(19,65.94608);
   hmcerror__8->SetBinContent(20,67.97044);
   hmcerror__8->SetBinContent(21,71.37354);
   hmcerror__8->SetBinContent(22,73.48748);
   hmcerror__8->SetBinContent(23,72.06876);
   hmcerror__8->SetBinContent(24,71.06802);
   hmcerror__8->SetBinError(1,23.96275);
   hmcerror__8->SetBinError(2,26.96913);
   hmcerror__8->SetBinError(3,31.51131);
   hmcerror__8->SetBinError(4,24.06024);
   hmcerror__8->SetBinError(5,18.42606);
   hmcerror__8->SetBinError(6,24.31409);
   hmcerror__8->SetBinError(7,21.45818);
   hmcerror__8->SetBinError(8,18.95328);
   hmcerror__8->SetBinError(9,23.3753);
   hmcerror__8->SetBinError(10,22.01809);
   hmcerror__8->SetBinError(11,27.93763);
   hmcerror__8->SetBinError(12,23.74487);
   hmcerror__8->SetBinError(13,23.64174);
   hmcerror__8->SetBinError(14,24.70299);
   hmcerror__8->SetBinError(15,37.17716);
   hmcerror__8->SetBinError(16,21.67176);
   hmcerror__8->SetBinError(17,23.62139);
   hmcerror__8->SetBinError(18,21.80734);
   hmcerror__8->SetBinError(19,18.61703);
   hmcerror__8->SetBinError(20,19.59931);
   hmcerror__8->SetBinError(21,23.8787);
   hmcerror__8->SetBinError(22,23.24788);
   hmcerror__8->SetBinError(23,27.74355);
   hmcerror__8->SetBinError(24,30.35911);
   hmcerror__8->SetBinError(25,0.3895343);
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
   
   Double_t _fx3009[24] = {
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
   Double_t _fy3009[24] = {
   81,
   61,
   37,
   74,
   65,
   61,
   52,
   52,
   52,
   62,
   69,
   65,
   71,
   74,
   68,
   61,
   61,
   60,
   61,
   48,
   67,
   54,
   57,
   57};
   Double_t _felx3009[24] = {
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
   Double_t _fely3009[24] = {
   9.1239,
   7.9383,
   6.2203,
   8.7275,
   8.1893,
   7.9383,
   7.3419,
   7.3419,
   7.3419,
   8.0018,
   8.4327,
   8.1893,
   8.5518,
   8.7275,
   8.3726,
   7.9383,
   7.9383,
   7.8743,
   7.9383,
   7.0604,
   8.3119,
   7.4785,
   7.679,
   7.679};
   Double_t _fehx3009[24] = {
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
   Double_t _fehy3009[24] = {
   8.9221,
   7.7354,
   6.0141,
   8.5253,
   7.9866,
   7.7354,
   7.1381,
   7.1381,
   7.1381,
   7.7989,
   8.2304,
   7.9866,
   8.3496,
   8.5253,
   8.1701,
   7.7354,
   7.7354,
   7.6713,
   7.7354,
   6.8561,
   8.1094,
   7.275,
   7.4757,
   7.4757};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-3.78,3.78);
   Graph_Graph3009->SetMinimum(24.86546);
   Graph_Graph3009->SetMaximum(95.83634);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.5/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1470.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 56.5","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 287.6","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 23.8","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 325.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  285.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  71.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 319.1","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 73.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 214.4","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 11.5","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_12_pi0_phi_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
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
   
   Double_t _fx3010[24] = {
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
   Double_t _fy3010[24] = {
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
   Double_t _felx3010[24] = {
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
   Double_t _fely3010[24] = {
   0.2934594,
   0.3787194,
   0.4133136,
   0.3629519,
   0.2958354,
   0.3590709,
   0.3021581,
   0.304062,
   0.3699905,
   0.3442527,
   0.3928793,
   0.3469644,
   0.361352,
   0.3220917,
   0.4582798,
   0.3047635,
   0.3459686,
   0.2904556,
   0.2823068,
   0.2883505,
   0.3345595,
   0.3163516,
   0.3849595,
   0.4271839};
   Double_t _fehx3010[24] = {
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
   Double_t _fehy3010[24] = {
   0.2934594,
   0.3787194,
   0.4133136,
   0.3629519,
   0.2958354,
   0.3590709,
   0.3021581,
   0.304062,
   0.3699905,
   0.3442527,
   0.3928793,
   0.3469644,
   0.361352,
   0.3220917,
   0.4582798,
   0.3047635,
   0.3459686,
   0.2904556,
   0.2823068,
   0.2883505,
   0.3345595,
   0.3163516,
   0.3849595,
   0.4271839};
   grae = new TGraphAsymmErrors(24,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-3.78,3.78);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} Azimuthal Angle #phi [rad]");
   Graph_Graph3010->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3011[24] = {
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
   Double_t _fy3011[24] = {
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
   Double_t _felx3011[24] = {
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
   Double_t _fely3011[24] = {
   0.1866271,
   0.1977664,
   0.2102109,
   0.2155053,
   0.1832586,
   0.1746338,
   0.1729557,
   0.1990035,
   0.2034726,
   0.2007413,
   0.1919778,
   0.1953825,
   0.2080293,
   0.1884513,
   0.1969074,
   0.1910616,
   0.1938134,
   0.1830852,
   0.1769289,
   0.179758,
   0.1870864,
   0.1990132,
   0.1922363,
   0.2074626};
   Double_t _fehx3011[24] = {
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
   Double_t _fehy3011[24] = {
   0.1866271,
   0.1977664,
   0.2102109,
   0.2155053,
   0.1832586,
   0.1746338,
   0.1729557,
   0.1990035,
   0.2034726,
   0.2007413,
   0.1919778,
   0.1953825,
   0.2080293,
   0.1884513,
   0.1969074,
   0.1910616,
   0.1938134,
   0.1830852,
   0.1769289,
   0.179758,
   0.1870864,
   0.1990132,
   0.1922363,
   0.2074626};
   grae = new TGraphAsymmErrors(24,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-3.78,3.78);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3012[24] = {
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
   Double_t _fy3012[24] = {
   0.9919652,
   0.8566047,
   0.4853051,
   1.1163,
   1.043593,
   0.9008491,
   0.7322254,
   0.8342207,
   0.8230701,
   0.9693696,
   0.9703283,
   0.9497918,
   1.085199,
   0.9648543,
   0.8382304,
   0.8578247,
   0.8934309,
   0.7991498,
   0.9249982,
   0.7061894,
   0.9387232,
   0.734819,
   0.7909113,
   0.8020485};
   Double_t _felx3012[24] = {
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
   Double_t _fely3012[24] = {
   0.1117357,
   0.1114752,
   0.08158766,
   0.1316555,
   0.1314815,
   0.117233,
   0.1033832,
   0.1177839,
   0.1162096,
   0.1251081,
   0.1185868,
   0.1196635,
   0.1307099,
   0.1137941,
   0.1032083,
   0.1116339,
   0.1162676,
   0.1048791,
   0.1203756,
   0.1038746,
   0.1164563,
   0.1017656,
   0.106551,
   0.1080514};
   Double_t _fehx3012[24] = {
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
   Double_t _fehy3012[24] = {
   0.1092644,
   0.1086259,
   0.07888307,
   0.1286053,
   0.1282271,
   0.1142365,
   0.1005134,
   0.1145144,
   0.1129838,
   0.1219358,
   0.1157419,
   0.1167016,
   0.1276194,
   0.1111577,
   0.1007121,
   0.1087806,
   0.1132958,
   0.1021753,
   0.1172989,
   0.1008689,
   0.1136191,
   0.09899645,
   0.1037301,
   0.1051908};
   grae = new TGraphAsymmErrors(24,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-3.78,3.78);
   Graph_Graph3012->SetMinimum(0.3195987);
   Graph_Graph3012->SetMaximum(1.329024);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_12_pi0_phi_all",24,-3.15,3.15);

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
   canvas3->cd();
   canvas3->Modified();
   canvas3->cd();
   canvas3->SetSelected(canvas3);
}
