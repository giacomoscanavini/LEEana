#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 02:13:36 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",164,172,1200,900);
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
   pad1->Range(0.2307692,-1.291021,6.641026,108.7855);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);
   hmc__1->SetBinContent(4,53.07124);
   hmc__1->SetBinContent(5,64.55103);
   hmc__1->SetBinContent(6,64.27664);
   hmc__1->SetBinContent(7,56.61506);
   hmc__1->SetBinContent(8,50.88547);
   hmc__1->SetBinContent(9,44.95695);
   hmc__1->SetBinContent(10,40.52733);
   hmc__1->SetBinContent(11,36.54167);
   hmc__1->SetBinContent(12,30.56635);
   hmc__1->SetBinContent(13,23.89118);
   hmc__1->SetBinContent(14,13.51895);
   hmc__1->SetBinContent(15,7.474799);
   hmc__1->SetBinContent(16,3.253904);
   hmc__1->SetBinContent(17,1.157053);
   hmc__1->SetBinContent(18,0.6851086);
   hmc__1->SetBinContent(19,0.1002069);
   hmc__1->SetBinContent(20,0.08745668);
   hmc__1->SetBinContent(21,0.06195629);
   hmc__1->SetBinError(1,0.125509);
   hmc__1->SetBinError(2,0.125509);
   hmc__1->SetBinError(3,0.125509);
   hmc__1->SetBinError(4,11.25651);
   hmc__1->SetBinError(5,13.90551);
   hmc__1->SetBinError(6,14.3521);
   hmc__1->SetBinError(7,12.56312);
   hmc__1->SetBinError(8,11.90016);
   hmc__1->SetBinError(9,11.89599);
   hmc__1->SetBinError(10,11.13603);
   hmc__1->SetBinError(11,9.78676);
   hmc__1->SetBinError(12,8.862669);
   hmc__1->SetBinError(13,7.200052);
   hmc__1->SetBinError(14,4.653975);
   hmc__1->SetBinError(15,3.316256);
   hmc__1->SetBinError(16,1.847778);
   hmc__1->SetBinError(17,1.032092);
   hmc__1->SetBinError(18,0.881154);
   hmc__1->SetBinError(19,0.3062367);
   hmc__1->SetBinError(20,0.4343888);
   hmc__1->SetBinError(21,0.142831);
   hmc__1->SetMinimum(-1.291021);
   hmc__1->SetMaximum(103.2817);
   hmc__1->SetEntries(485.9702);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,1,6);
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(67.77858);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,1.726466);
   hbadmatch_stack_1->SetBinContent(5,1.604548);
   hbadmatch_stack_1->SetBinContent(6,1.794888);
   hbadmatch_stack_1->SetBinContent(7,1.327101);
   hbadmatch_stack_1->SetBinContent(8,0.9434933);
   hbadmatch_stack_1->SetBinContent(9,0.6354562);
   hbadmatch_stack_1->SetBinContent(10,0.2992989);
   hbadmatch_stack_1->SetBinContent(11,0.1749134);
   hbadmatch_stack_1->SetBinContent(12,0.6023898);
   hbadmatch_stack_1->SetBinContent(13,0.2860757);
   hbadmatch_stack_1->SetBinError(4,0.3086393);
   hbadmatch_stack_1->SetBinError(5,0.2847644);
   hbadmatch_stack_1->SetBinError(6,0.4011222);
   hbadmatch_stack_1->SetBinError(7,0.2659172);
   hbadmatch_stack_1->SetBinError(8,0.2239791);
   hbadmatch_stack_1->SetBinError(9,0.1961203);
   hbadmatch_stack_1->SetBinError(10,0.1407641);
   hbadmatch_stack_1->SetBinError(11,0.09125478);
   hbadmatch_stack_1->SetBinError(12,0.3738034);
   hbadmatch_stack_1->SetBinError(13,0.1258651);
   hbadmatch_stack_1->SetEntries(250);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,6.034166);
   hext_stack_2->SetBinContent(5,4.972109);
   hext_stack_2->SetBinContent(6,4.655824);
   hext_stack_2->SetBinContent(7,3.308828);
   hext_stack_2->SetBinContent(8,2.928463);
   hext_stack_2->SetBinContent(9,2.906655);
   hext_stack_2->SetBinContent(10,1.71236);
   hext_stack_2->SetBinContent(11,1.528312);
   hext_stack_2->SetBinContent(12,0.1349684);
   hext_stack_2->SetBinContent(13,0.6339569);
   hext_stack_2->SetBinContent(14,0.03680956);
   hext_stack_2->SetBinContent(15,0.01226985);
   hext_stack_2->SetBinContent(16,0.02453971);
   hext_stack_2->SetBinError(4,1.020134);
   hext_stack_2->SetBinError(5,0.8760101);
   hext_stack_2->SetBinError(6,0.8948135);
   hext_stack_2->SetBinError(7,0.6976659);
   hext_stack_2->SetBinError(8,0.6943131);
   hext_stack_2->SetBinError(9,0.7204036);
   hext_stack_2->SetBinError(10,0.5303377);
   hext_stack_2->SetBinError(11,0.5282044);
   hext_stack_2->SetBinError(12,0.0406945);
   hext_stack_2->SetBinError(13,0.3454176);
   hext_stack_2->SetBinError(14,0.02125201);
   hext_stack_2->SetBinError(15,0.01226985);
   hext_stack_2->SetBinError(16,0.01735219);
   hext_stack_2->SetEntries(543);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,0.6378756);
   hdirt_stack_3->SetBinContent(5,0.6248876);
   hdirt_stack_3->SetBinContent(6,0.8774319);
   hdirt_stack_3->SetBinContent(7,0.8766026);
   hdirt_stack_3->SetBinContent(8,0.2025028);
   hdirt_stack_3->SetBinContent(9,0.2621513);
   hdirt_stack_3->SetBinContent(10,0.2388109);
   hdirt_stack_3->SetBinContent(11,0.06886792);
   hdirt_stack_3->SetBinContent(12,0.2996008);
   hdirt_stack_3->SetBinContent(13,0.1158097);
   hdirt_stack_3->SetBinContent(14,0.09053358);
   hdirt_stack_3->SetBinContent(15,0.008219617);
   hdirt_stack_3->SetBinError(4,0.1593755);
   hdirt_stack_3->SetBinError(5,0.1479152);
   hdirt_stack_3->SetBinError(6,0.1948406);
   hdirt_stack_3->SetBinError(7,0.3340929);
   hdirt_stack_3->SetBinError(8,0.08695162);
   hdirt_stack_3->SetBinError(9,0.1042578);
   hdirt_stack_3->SetBinError(10,0.1011092);
   hdirt_stack_3->SetBinError(11,0.04644489);
   hdirt_stack_3->SetBinError(12,0.2155588);
   hdirt_stack_3->SetBinError(13,0.06452876);
   hdirt_stack_3->SetBinError(14,0.06403438);
   hdirt_stack_3->SetBinError(15,0.008219618);
   hdirt_stack_3->SetEntries(153);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,5.125658);
   houtFV_stack_4->SetBinContent(5,7.303864);
   houtFV_stack_4->SetBinContent(6,6.517582);
   houtFV_stack_4->SetBinContent(7,5.304149);
   houtFV_stack_4->SetBinContent(8,4.060123);
   houtFV_stack_4->SetBinContent(9,2.873655);
   houtFV_stack_4->SetBinContent(10,1.711287);
   houtFV_stack_4->SetBinContent(11,1.197601);
   houtFV_stack_4->SetBinContent(12,0.6547473);
   houtFV_stack_4->SetBinContent(13,0.3380338);
   houtFV_stack_4->SetBinContent(14,0.1366628);
   houtFV_stack_4->SetBinError(4,0.5308537);
   houtFV_stack_4->SetBinError(5,0.6370314);
   houtFV_stack_4->SetBinError(6,0.5957353);
   houtFV_stack_4->SetBinError(7,0.5435509);
   houtFV_stack_4->SetBinError(8,0.4785373);
   houtFV_stack_4->SetBinError(9,0.3974172);
   houtFV_stack_4->SetBinError(10,0.29884);
   houtFV_stack_4->SetBinError(11,0.2624948);
   houtFV_stack_4->SetBinError(12,0.1865303);
   houtFV_stack_4->SetBinError(13,0.1349672);
   houtFV_stack_4->SetBinError(14,0.08854226);
   houtFV_stack_4->SetEntries(900);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);
   hNCpi0inFV_stack_5->SetBinContent(4,19.40376);
   hNCpi0inFV_stack_5->SetBinContent(5,25.05562);
   hNCpi0inFV_stack_5->SetBinContent(6,27.9695);
   hNCpi0inFV_stack_5->SetBinContent(7,29.61862);
   hNCpi0inFV_stack_5->SetBinContent(8,27.81452);
   hNCpi0inFV_stack_5->SetBinContent(9,27.8763);
   hNCpi0inFV_stack_5->SetBinContent(10,29.11381);
   hNCpi0inFV_stack_5->SetBinContent(11,26.70488);
   hNCpi0inFV_stack_5->SetBinContent(12,25.41494);
   hNCpi0inFV_stack_5->SetBinContent(13,19.74263);
   hNCpi0inFV_stack_5->SetBinContent(14,12.16082);
   hNCpi0inFV_stack_5->SetBinContent(15,6.96782);
   hNCpi0inFV_stack_5->SetBinContent(16,2.866724);
   hNCpi0inFV_stack_5->SetBinContent(17,1.082347);
   hNCpi0inFV_stack_5->SetBinContent(18,0.5976519);
   hNCpi0inFV_stack_5->SetBinContent(19,0.1002069);
   hNCpi0inFV_stack_5->SetBinContent(20,0.08745668);
   hNCpi0inFV_stack_5->SetBinContent(21,0.06195629);
   hNCpi0inFV_stack_5->SetBinError(4,1.025787);
   hNCpi0inFV_stack_5->SetBinError(5,1.157934);
   hNCpi0inFV_stack_5->SetBinError(6,1.229653);
   hNCpi0inFV_stack_5->SetBinError(7,1.269778);
   hNCpi0inFV_stack_5->SetBinError(8,1.221384);
   hNCpi0inFV_stack_5->SetBinError(9,1.224738);
   hNCpi0inFV_stack_5->SetBinError(10,1.255155);
   hNCpi0inFV_stack_5->SetBinError(11,1.197894);
   hNCpi0inFV_stack_5->SetBinError(12,1.174253);
   hNCpi0inFV_stack_5->SetBinError(13,1.03233);
   hNCpi0inFV_stack_5->SetBinError(14,0.811219);
   hNCpi0inFV_stack_5->SetBinError(15,0.6176644);
   hNCpi0inFV_stack_5->SetBinError(16,0.3904293);
   hNCpi0inFV_stack_5->SetBinError(17,0.2439868);
   hNCpi0inFV_stack_5->SetBinError(18,0.1789111);
   hNCpi0inFV_stack_5->SetBinError(19,0.0657745);
   hNCpi0inFV_stack_5->SetBinError(20,0.06452687);
   hNCpi0inFV_stack_5->SetBinError(21,0.06195629);
   hNCpi0inFV_stack_5->SetEntries(7412);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_6->SetBinContent(4,9.208776);
   hCCpi0inFV_stack_6->SetBinContent(5,12.47559);
   hCCpi0inFV_stack_6->SetBinContent(6,11.91129);
   hCCpi0inFV_stack_6->SetBinContent(7,9.426171);
   hCCpi0inFV_stack_6->SetBinContent(8,9.047257);
   hCCpi0inFV_stack_6->SetBinContent(9,6.687019);
   hCCpi0inFV_stack_6->SetBinContent(10,4.731231);
   hCCpi0inFV_stack_6->SetBinContent(11,4.956045);
   hCCpi0inFV_stack_6->SetBinContent(12,2.689106);
   hCCpi0inFV_stack_6->SetBinContent(13,1.826208);
   hCCpi0inFV_stack_6->SetBinContent(14,0.6121968);
   hCCpi0inFV_stack_6->SetBinContent(15,0.4482389);
   hCCpi0inFV_stack_6->SetBinContent(16,0.2733256);
   hCCpi0inFV_stack_6->SetBinContent(17,0.06195629);
   hCCpi0inFV_stack_6->SetBinContent(18,0.08745668);
   hCCpi0inFV_stack_6->SetBinError(4,0.7061511);
   hCCpi0inFV_stack_6->SetBinError(5,0.8178106);
   hCCpi0inFV_stack_6->SetBinError(6,0.8081129);
   hCCpi0inFV_stack_6->SetBinError(7,0.7109273);
   hCCpi0inFV_stack_6->SetBinError(8,0.7089574);
   hCCpi0inFV_stack_6->SetBinError(9,0.6048271);
   hCCpi0inFV_stack_6->SetBinError(10,0.5102146);
   hCCpi0inFV_stack_6->SetBinError(11,0.5218011);
   hCCpi0inFV_stack_6->SetBinError(12,0.380983);
   hCCpi0inFV_stack_6->SetBinError(13,0.3248424);
   hCCpi0inFV_stack_6->SetBinError(14,0.1707221);
   hCCpi0inFV_stack_6->SetBinError(15,0.1549416);
   hCCpi0inFV_stack_6->SetBinError(16,0.1252177);
   hCCpi0inFV_stack_6->SetBinError(17,0.06195629);
   hCCpi0inFV_stack_6->SetBinError(18,0.06452687);
   hCCpi0inFV_stack_6->SetEntries(1923);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);
   hNCinFV_stack_7->SetBinContent(4,3.104806);
   hNCinFV_stack_7->SetBinContent(5,4.404093);
   hNCinFV_stack_7->SetBinContent(6,4.405888);
   hNCinFV_stack_7->SetBinContent(7,2.492609);
   hNCinFV_stack_7->SetBinContent(8,2.427063);
   hNCinFV_stack_7->SetBinContent(9,2.179238);
   hNCinFV_stack_7->SetBinContent(10,1.594337);
   hNCinFV_stack_7->SetBinContent(11,1.142508);
   hNCinFV_stack_7->SetBinContent(12,0.5247401);
   hNCinFV_stack_7->SetBinContent(13,0.6723584);
   hNCinFV_stack_7->SetBinContent(14,0.2241195);
   hNCinFV_stack_7->SetBinContent(15,0.03825059);
   hNCinFV_stack_7->SetBinContent(16,0.0127502);
   hNCinFV_stack_7->SetBinContent(17,0.0127502);
   hNCinFV_stack_7->SetBinError(4,0.3980997);
   hNCinFV_stack_7->SetBinError(5,0.4920562);
   hNCinFV_stack_7->SetBinError(6,0.4889719);
   hNCinFV_stack_7->SetBinError(7,0.359635);
   hNCinFV_stack_7->SetBinError(8,0.3626985);
   hNCinFV_stack_7->SetBinError(9,0.3408752);
   hNCinFV_stack_7->SetBinError(10,0.2904295);
   hNCinFV_stack_7->SetBinError(11,0.2576701);
   hNCinFV_stack_7->SetBinError(12,0.1580579);
   hNCinFV_stack_7->SetBinError(13,0.1897639);
   hNCinFV_stack_7->SetBinError(14,0.1095603);
   hNCinFV_stack_7->SetBinError(15,0.02208399);
   hNCinFV_stack_7->SetBinError(16,0.0127502);
   hNCinFV_stack_7->SetBinError(17,0.0127502);
   hNCinFV_stack_7->SetEntries(626);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_8->SetBinContent(4,7.31508);
   hnumuCCinFV_stack_8->SetBinContent(5,7.587002);
   hnumuCCinFV_stack_8->SetBinContent(6,5.4271);
   hnumuCCinFV_stack_8->SetBinContent(7,4.109203);
   hnumuCCinFV_stack_8->SetBinContent(8,2.75234);
   hnumuCCinFV_stack_8->SetBinContent(9,1.439661);
   hnumuCCinFV_stack_8->SetBinContent(10,1.084523);
   hnumuCCinFV_stack_8->SetBinContent(11,0.7557991);
   hnumuCCinFV_stack_8->SetBinContent(12,0.0673793);
   hnumuCCinFV_stack_8->SetBinContent(13,0.2761038);
   hnumuCCinFV_stack_8->SetBinContent(14,0.2578081);
   hnumuCCinFV_stack_8->SetBinContent(16,0.07656492);
   hnumuCCinFV_stack_8->SetBinError(4,0.781301);
   hnumuCCinFV_stack_8->SetBinError(5,0.8496842);
   hnumuCCinFV_stack_8->SetBinError(6,0.7584259);
   hnumuCCinFV_stack_8->SetBinError(7,0.5394377);
   hnumuCCinFV_stack_8->SetBinError(8,0.5818386);
   hnumuCCinFV_stack_8->SetBinError(9,0.3515544);
   hnumuCCinFV_stack_8->SetBinError(10,0.2475628);
   hnumuCCinFV_stack_8->SetBinError(11,0.210851);
   hnumuCCinFV_stack_8->SetBinError(12,0.0302219);
   hnumuCCinFV_stack_8->SetBinError(13,0.1252485);
   hnumuCCinFV_stack_8->SetBinError(14,0.1212589);
   hnumuCCinFV_stack_8->SetBinError(16,0.07656492);
   hnumuCCinFV_stack_8->SetEntries(730);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_9->SetBinContent(4,0.5146586);
   hnueCCinFV_stack_9->SetBinContent(5,0.5233213);
   hnueCCinFV_stack_9->SetBinContent(6,0.7171441);
   hnueCCinFV_stack_9->SetBinContent(7,0.1517674);
   hnueCCinFV_stack_9->SetBinContent(8,0.709709);
   hnueCCinFV_stack_9->SetBinContent(9,0.09681876);
   hnueCCinFV_stack_9->SetBinContent(10,0.04168055);
   hnueCCinFV_stack_9->SetBinContent(11,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(12,0.1784783);
   hnueCCinFV_stack_9->SetBinError(4,0.1549184);
   hnueCCinFV_stack_9->SetBinError(5,0.1680088);
   hnueCCinFV_stack_9->SetBinError(6,0.2008429);
   hnueCCinFV_stack_9->SetBinError(7,0.09509018);
   hnueCCinFV_stack_9->SetBinError(8,0.4825529);
   hnueCCinFV_stack_9->SetBinError(9,0.08378463);
   hnueCCinFV_stack_9->SetBinError(10,0.02422669);
   hnueCCinFV_stack_9->SetBinError(11,0.0127502);
   hnueCCinFV_stack_9->SetBinError(12,0.1215308);
   hnueCCinFV_stack_9->SetEntries(70);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);
   hmcerror__2->SetBinContent(4,53.07124);
   hmcerror__2->SetBinContent(5,64.55103);
   hmcerror__2->SetBinContent(6,64.27664);
   hmcerror__2->SetBinContent(7,56.61506);
   hmcerror__2->SetBinContent(8,50.88547);
   hmcerror__2->SetBinContent(9,44.95695);
   hmcerror__2->SetBinContent(10,40.52733);
   hmcerror__2->SetBinContent(11,36.54167);
   hmcerror__2->SetBinContent(12,30.56635);
   hmcerror__2->SetBinContent(13,23.89118);
   hmcerror__2->SetBinContent(14,13.51895);
   hmcerror__2->SetBinContent(15,7.474799);
   hmcerror__2->SetBinContent(16,3.253904);
   hmcerror__2->SetBinContent(17,1.157053);
   hmcerror__2->SetBinContent(18,0.6851086);
   hmcerror__2->SetBinContent(19,0.1002069);
   hmcerror__2->SetBinContent(20,0.08745668);
   hmcerror__2->SetBinContent(21,0.06195629);
   hmcerror__2->SetBinError(1,0.125509);
   hmcerror__2->SetBinError(2,0.125509);
   hmcerror__2->SetBinError(3,0.125509);
   hmcerror__2->SetBinError(4,11.25651);
   hmcerror__2->SetBinError(5,13.90551);
   hmcerror__2->SetBinError(6,14.3521);
   hmcerror__2->SetBinError(7,12.56312);
   hmcerror__2->SetBinError(8,11.90016);
   hmcerror__2->SetBinError(9,11.89599);
   hmcerror__2->SetBinError(10,11.13603);
   hmcerror__2->SetBinError(11,9.78676);
   hmcerror__2->SetBinError(12,8.862669);
   hmcerror__2->SetBinError(13,7.200052);
   hmcerror__2->SetBinError(14,4.653975);
   hmcerror__2->SetBinError(15,3.316256);
   hmcerror__2->SetBinError(16,1.847778);
   hmcerror__2->SetBinError(17,1.032092);
   hmcerror__2->SetBinError(18,0.881154);
   hmcerror__2->SetBinError(19,0.3062367);
   hmcerror__2->SetBinError(20,0.4343888);
   hmcerror__2->SetBinError(21,0.142831);
   hmcerror__2->SetEntries(485.9702);

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
   
   Double_t _fx3001[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3001[20] = {
   0,
   0,
   0,
   57,
   36,
   58,
   51,
   40,
   37,
   45,
   26,
   14,
   20,
   4,
   4,
   2,
   0,
   1,
   0,
   0};
   Double_t _felx3001[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3001[20] = {
   0,
   0,
   0,
   7.679,
   6.1381,
   7.7446,
   7.2725,
   6.4604,
   6.2203,
   6.8416,
   5.2453,
   3.9102,
   4.6266,
   2.29683,
   2.29683,
   2,
   0,
   1,
   0,
   0};
   Double_t _fehx3001[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3001[20] = {
   1.1478,
   1.1478,
   1.1478,
   7.4757,
   5.9318,
   7.5415,
   7.0686,
   6.2549,
   6.0141,
   6.637,
   5.0358,
   3.6898,
   4.4133,
   1.98186,
   1.98186,
   1.51917,
   1.1478,
   1.35971,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0.5,6.5);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(72.09565);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.80#pm0.04(data err)#pm0.16(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.17/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 395.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.4","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 28.9","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.3","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 35.2","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  282.6","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 74.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 23.2","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 31.1","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 2.9","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_bnb_10_nc_pio_score_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(0.2046154,-0.5333333,6.666154,2.133333);
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
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
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
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3002[20] = {
   0,
   0,
   0,
   0.2121019,
   0.2154188,
   0.2232863,
   0.2219042,
   0.2338616,
   0.2646085,
   0.2747783,
   0.2678247,
   0.2899486,
   0.3013687,
   0.3442557,
   0.4436583,
   0.567865,
   0.8920007,
   1.286152,
   3.056045,
   4.966902};
   Double_t _fehx3002[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3002[20] = {
   0,
   0,
   0,
   0.2121019,
   0.2154188,
   0.2232863,
   0.2219042,
   0.2338616,
   0.2646085,
   0.2747783,
   0.2678247,
   0.2899486,
   0.3013687,
   0.3442557,
   0.4436583,
   0.567865,
   0.8920007,
   1.286152,
   3.056045,
   4.966902};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0.5,6.5);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3003[20] = {
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
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
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3003[20] = {
   0,
   0,
   0,
   0.1734929,
   0.1891983,
   0.1854933,
   0.1914981,
   0.1997699,
   0.2173507,
   0.2243,
   0.2203934,
   0.2479353,
   0.2447364,
   0.2571213,
   0.2660591,
   0.3038656,
   0.3781269,
   0.4450357,
   1.310835,
   1.587986};
   Double_t _fehx3003[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3003[20] = {
   0,
   0,
   0,
   0.1734929,
   0.1891983,
   0.1854933,
   0.1914981,
   0.1997699,
   0.2173507,
   0.2243,
   0.2203934,
   0.2479353,
   0.2447364,
   0.2571213,
   0.2660591,
   0.3038656,
   0.3781269,
   0.4450357,
   1.310835,
   1.587986};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0.5,6.5);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   1.125,
   1.375,
   1.625,
   1.875,
   2.125,
   2.375,
   2.625,
   2.875,
   3.125,
   3.375,
   3.625,
   3.875,
   4.125,
   4.375,
   4.625,
   4.875,
   5.125,
   5.375,
   5.625,
   5.875};
   Double_t _fy3004[20] = {
   10,
   10,
   10,
   1.074028,
   0.5576983,
   0.9023496,
   0.9008205,
   0.786079,
   0.8230095,
   1.110362,
   0.7115165,
   0.4580201,
   0.8371291,
   0.295881,
   0.5351315,
   0.6146463,
   0,
   1.459623,
   0,
   0};
   Double_t _felx3004[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fely3004[20] = {
   0,
   0,
   0,
   0.1446923,
   0.09508911,
   0.1204886,
   0.1284552,
   0.1269596,
   0.1383613,
   0.1688145,
   0.143543,
   0.127925,
   0.1936531,
   0.1698971,
   0.3072765,
   0.6146463,
   0,
   1.459623,
   0,
   0};
   Double_t _fehx3004[20] = {
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125,
   0.125};
   Double_t _fehy3004[20] = {
   0,
   0,
   0,
   0.1408616,
   0.09189318,
   0.1173288,
   0.1248537,
   0.1229211,
   0.1337746,
   0.163766,
   0.1378098,
   0.1207145,
   0.1847251,
   0.1465987,
   0.2651389,
   0.4668761,
   0.9920029,
   1.984663,
   11.4543,
   13.12421};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0.5,6.5);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(14.43663);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_FC_bnb_10_nc_pio_score_all",20,1,6);

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
   TLine *line = new TLine(1,1,6,1);
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
