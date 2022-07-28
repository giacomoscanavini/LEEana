#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Apr 16 15:28:28 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",242,172,1200,900);
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
   pad1->Range(0.2307692,-1.880106,6.641026,158.4237);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);
   hmc__1->SetBinContent(4,80.2164);
   hmc__1->SetBinContent(5,94.00529);
   hmc__1->SetBinContent(6,89.34054);
   hmc__1->SetBinContent(7,71.89449);
   hmc__1->SetBinContent(8,64.2541);
   hmc__1->SetBinContent(9,55.37227);
   hmc__1->SetBinContent(10,47.54005);
   hmc__1->SetBinContent(11,41.10938);
   hmc__1->SetBinContent(12,33.28796);
   hmc__1->SetBinContent(13,25.8208);
   hmc__1->SetBinContent(14,14.35347);
   hmc__1->SetBinContent(15,8.147588);
   hmc__1->SetBinContent(16,3.454318);
   hmc__1->SetBinContent(17,1.293716);
   hmc__1->SetBinContent(18,0.6978588);
   hmc__1->SetBinContent(19,0.1002069);
   hmc__1->SetBinContent(20,0.08745668);
   hmc__1->SetBinContent(21,0.06195629);
   hmc__1->SetBinError(1,0.125509);
   hmc__1->SetBinError(2,0.125509);
   hmc__1->SetBinError(3,0.125509);
   hmc__1->SetBinError(4,14.9083);
   hmc__1->SetBinError(5,18.47399);
   hmc__1->SetBinError(6,18.59414);
   hmc__1->SetBinError(7,15.73499);
   hmc__1->SetBinError(8,14.40738);
   hmc__1->SetBinError(9,13.81827);
   hmc__1->SetBinError(10,12.08346);
   hmc__1->SetBinError(11,10.51465);
   hmc__1->SetBinError(12,9.55073);
   hmc__1->SetBinError(13,7.611545);
   hmc__1->SetBinError(14,4.919203);
   hmc__1->SetBinError(15,3.311273);
   hmc__1->SetBinError(16,1.872531);
   hmc__1->SetBinError(17,1.109722);
   hmc__1->SetBinError(18,0.8570894);
   hmc__1->SetBinError(19,0.3037385);
   hmc__1->SetBinError(20,0.4345139);
   hmc__1->SetBinError(21,0.142831);
   hmc__1->SetMinimum(-1.880106);
   hmc__1->SetMaximum(150.4085);
   hmc__1->SetEntries(622.1566);
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
   hs1_stack_1->SetMaximum(98.70555);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);
   hbadmatch_stack_1->SetBinContent(4,2.818064);
   hbadmatch_stack_1->SetBinContent(5,2.921797);
   hbadmatch_stack_1->SetBinContent(6,2.426596);
   hbadmatch_stack_1->SetBinContent(7,1.74984);
   hbadmatch_stack_1->SetBinContent(8,1.220932);
   hbadmatch_stack_1->SetBinContent(9,0.9087818);
   hbadmatch_stack_1->SetBinContent(10,0.3375504);
   hbadmatch_stack_1->SetBinContent(11,0.26237);
   hbadmatch_stack_1->SetBinContent(12,0.61514);
   hbadmatch_stack_1->SetBinContent(13,0.2860757);
   hbadmatch_stack_1->SetBinContent(14,0.06195629);
   hbadmatch_stack_1->SetBinContent(15,0.06195629);
   hbadmatch_stack_1->SetBinContent(17,0.06195629);
   hbadmatch_stack_1->SetBinError(4,0.3880658);
   hbadmatch_stack_1->SetBinError(5,0.5004283);
   hbadmatch_stack_1->SetBinError(6,0.441985);
   hbadmatch_stack_1->SetBinError(7,0.3072356);
   hbadmatch_stack_1->SetBinError(8,0.2507685);
   hbadmatch_stack_1->SetBinError(9,0.2326857);
   hbadmatch_stack_1->SetBinError(10,0.1424859);
   hbadmatch_stack_1->SetBinError(11,0.1117638);
   hbadmatch_stack_1->SetBinError(12,0.3740208);
   hbadmatch_stack_1->SetBinError(13,0.1258651);
   hbadmatch_stack_1->SetBinError(14,0.06195629);
   hbadmatch_stack_1->SetBinError(15,0.06195629);
   hbadmatch_stack_1->SetBinError(17,0.06195629);
   hbadmatch_stack_1->SetEntries(370);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);
   hext_stack_2->SetBinContent(4,11.55707);
   hext_stack_2->SetBinContent(5,10.6968);
   hext_stack_2->SetBinContent(6,8.88901);
   hext_stack_2->SetBinContent(7,4.595819);
   hext_stack_2->SetBinContent(8,3.982326);
   hext_stack_2->SetBinContent(9,3.228402);
   hext_stack_2->SetBinContent(10,1.822788);
   hext_stack_2->SetBinContent(11,1.92641);
   hext_stack_2->SetBinContent(12,0.1472382);
   hext_stack_2->SetBinContent(13,0.6339569);
   hext_stack_2->SetBinContent(14,0.03680956);
   hext_stack_2->SetBinContent(15,0.211319);
   hext_stack_2->SetBinContent(16,0.02453971);
   hext_stack_2->SetBinError(4,1.401263);
   hext_stack_2->SetBinError(5,1.32932);
   hext_stack_2->SetBinError(6,1.233629);
   hext_stack_2->SetBinError(7,0.8069956);
   hext_stack_2->SetBinError(8,0.8023182);
   hext_stack_2->SetBinError(9,0.7484033);
   hext_stack_2->SetBinError(10,0.5316136);
   hext_stack_2->SetBinError(11,0.5985323);
   hext_stack_2->SetBinError(12,0.04250402);
   hext_stack_2->SetBinError(13,0.3454176);
   hext_stack_2->SetBinError(14,0.02125201);
   hext_stack_2->SetBinError(15,0.1994269);
   hext_stack_2->SetBinError(16,0.01735219);
   hext_stack_2->SetEntries(893);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);
   hdirt_stack_3->SetBinContent(4,1.105598);
   hdirt_stack_3->SetBinContent(5,1.140692);
   hdirt_stack_3->SetBinContent(6,1.325902);
   hdirt_stack_3->SetBinContent(7,0.937251);
   hdirt_stack_3->SetBinContent(8,0.281306);
   hdirt_stack_3->SetBinContent(9,0.3972713);
   hdirt_stack_3->SetBinContent(10,0.3064158);
   hdirt_stack_3->SetBinContent(11,0.113077);
   hdirt_stack_3->SetBinContent(12,0.2996008);
   hdirt_stack_3->SetBinContent(13,0.1158097);
   hdirt_stack_3->SetBinContent(14,0.09053358);
   hdirt_stack_3->SetBinContent(15,0.008219617);
   hdirt_stack_3->SetBinError(4,0.2105035);
   hdirt_stack_3->SetBinError(5,0.2031471);
   hdirt_stack_3->SetBinError(6,0.2376746);
   hdirt_stack_3->SetBinError(7,0.3372056);
   hdirt_stack_3->SetBinError(8,0.09907787);
   hdirt_stack_3->SetBinError(9,0.1274111);
   hdirt_stack_3->SetBinError(10,0.1146065);
   hdirt_stack_3->SetBinError(11,0.06412153);
   hdirt_stack_3->SetBinError(12,0.2155588);
   hdirt_stack_3->SetBinError(13,0.06452876);
   hdirt_stack_3->SetBinError(14,0.06403438);
   hdirt_stack_3->SetBinError(15,0.008219618);
   hdirt_stack_3->SetEntries(224);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);
   houtFV_stack_4->SetBinContent(4,12.76772);
   houtFV_stack_4->SetBinContent(5,13.29753);
   houtFV_stack_4->SetBinContent(6,11.18668);
   houtFV_stack_4->SetBinContent(7,8.462034);
   houtFV_stack_4->SetBinContent(8,6.592443);
   houtFV_stack_4->SetBinContent(9,4.617404);
   houtFV_stack_4->SetBinContent(10,3.198252);
   houtFV_stack_4->SetBinContent(11,1.521927);
   houtFV_stack_4->SetBinContent(12,0.9330382);
   houtFV_stack_4->SetBinContent(13,0.3635342);
   houtFV_stack_4->SetBinContent(14,0.149413);
   houtFV_stack_4->SetBinContent(15,0.0127502);
   houtFV_stack_4->SetBinError(4,0.8475086);
   houtFV_stack_4->SetBinError(5,0.8546751);
   houtFV_stack_4->SetBinError(6,0.7709712);
   houtFV_stack_4->SetBinError(7,0.6859978);
   houtFV_stack_4->SetBinError(8,0.6079864);
   houtFV_stack_4->SetBinError(9,0.5002919);
   houtFV_stack_4->SetBinError(10,0.4161255);
   houtFV_stack_4->SetBinError(11,0.2919473);
   houtFV_stack_4->SetBinError(12,0.2180325);
   houtFV_stack_4->SetBinError(13,0.1361664);
   houtFV_stack_4->SetBinError(14,0.08945557);
   houtFV_stack_4->SetBinError(15,0.0127502);
   houtFV_stack_4->SetEntries(1630);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);
   hNCpi0inFV_stack_5->SetBinContent(4,22.85121);
   hNCpi0inFV_stack_5->SetBinContent(5,30.38169);
   hNCpi0inFV_stack_5->SetBinContent(6,33.44499);
   hNCpi0inFV_stack_5->SetBinContent(7,34.0773);
   hNCpi0inFV_stack_5->SetBinContent(8,32.53198);
   hNCpi0inFV_stack_5->SetBinContent(9,32.55372);
   hNCpi0inFV_stack_5->SetBinContent(10,32.39173);
   hNCpi0inFV_stack_5->SetBinContent(11,29.09728);
   hNCpi0inFV_stack_5->SetBinContent(12,26.92182);
   hNCpi0inFV_stack_5->SetBinContent(13,21.1493);
   hNCpi0inFV_stack_5->SetBinContent(14,12.86963);
   hNCpi0inFV_stack_5->SetBinContent(15,7.304896);
   hNCpi0inFV_stack_5->SetBinContent(16,2.992431);
   hNCpi0inFV_stack_5->SetBinContent(17,1.157053);
   hNCpi0inFV_stack_5->SetBinContent(18,0.6104021);
   hNCpi0inFV_stack_5->SetBinContent(19,0.1002069);
   hNCpi0inFV_stack_5->SetBinContent(20,0.08745668);
   hNCpi0inFV_stack_5->SetBinContent(21,0.06195629);
   hNCpi0inFV_stack_5->SetBinError(4,1.11332);
   hNCpi0inFV_stack_5->SetBinError(5,1.277211);
   hNCpi0inFV_stack_5->SetBinError(6,1.345551);
   hNCpi0inFV_stack_5->SetBinError(7,1.3598);
   hNCpi0inFV_stack_5->SetBinError(8,1.321756);
   hNCpi0inFV_stack_5->SetBinError(9,1.325814);
   hNCpi0inFV_stack_5->SetBinError(10,1.321079);
   hNCpi0inFV_stack_5->SetBinError(11,1.248984);
   hNCpi0inFV_stack_5->SetBinError(12,1.207914);
   hNCpi0inFV_stack_5->SetBinError(13,1.068441);
   hNCpi0inFV_stack_5->SetBinError(14,0.8352246);
   hNCpi0inFV_stack_5->SetBinError(15,0.6308737);
   hNCpi0inFV_stack_5->SetBinError(16,0.3963414);
   hNCpi0inFV_stack_5->SetBinError(17,0.252053);
   hNCpi0inFV_stack_5->SetBinError(18,0.1793649);
   hNCpi0inFV_stack_5->SetBinError(19,0.0657745);
   hNCpi0inFV_stack_5->SetBinError(20,0.06452687);
   hNCpi0inFV_stack_5->SetBinError(21,0.06195629);
   hNCpi0inFV_stack_5->SetEntries(8416);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);
   hCCpi0inFV_stack_6->SetBinContent(4,14.31096);
   hCCpi0inFV_stack_6->SetBinContent(5,19.08979);
   hCCpi0inFV_stack_6->SetBinContent(6,17.34342);
   hCCpi0inFV_stack_6->SetBinContent(7,13.3502);
   hCCpi0inFV_stack_6->SetBinContent(8,12.08405);
   hCCpi0inFV_stack_6->SetBinContent(9,8.847116);
   hCCpi0inFV_stack_6->SetBinContent(10,6.188093);
   hCCpi0inFV_stack_6->SetBinContent(11,5.945204);
   hCCpi0inFV_stack_6->SetBinContent(12,3.276755);
   hCCpi0inFV_stack_6->SetBinContent(13,2.248947);
   hCCpi0inFV_stack_6->SetBinContent(14,0.6631976);
   hCCpi0inFV_stack_6->SetBinContent(15,0.5101952);
   hCCpi0inFV_stack_6->SetBinContent(16,0.3480321);
   hCCpi0inFV_stack_6->SetBinContent(17,0.06195629);
   hCCpi0inFV_stack_6->SetBinContent(18,0.08745668);
   hCCpi0inFV_stack_6->SetBinError(4,0.8783265);
   hCCpi0inFV_stack_6->SetBinError(5,1.013533);
   hCCpi0inFV_stack_6->SetBinError(6,0.9759857);
   hCCpi0inFV_stack_6->SetBinError(7,0.8438106);
   hCCpi0inFV_stack_6->SetBinError(8,0.8199826);
   hCCpi0inFV_stack_6->SetBinError(9,0.6897198);
   hCCpi0inFV_stack_6->SetBinError(10,0.5844503);
   hCCpi0inFV_stack_6->SetBinError(11,0.5697375);
   hCCpi0inFV_stack_6->SetBinError(12,0.4222895);
   hCCpi0inFV_stack_6->SetBinError(13,0.3594501);
   hCCpi0inFV_stack_6->SetBinError(14,0.172616);
   hCCpi0inFV_stack_6->SetBinError(15,0.1668696);
   hCCpi0inFV_stack_6->SetBinError(16,0.1402876);
   hCCpi0inFV_stack_6->SetBinError(17,0.06195629);
   hCCpi0inFV_stack_6->SetBinError(18,0.06452687);
   hCCpi0inFV_stack_6->SetEntries(2725);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);
   hNCinFV_stack_7->SetBinContent(4,3.531099);
   hNCinFV_stack_7->SetBinContent(5,4.704714);
   hNCinFV_stack_7->SetBinContent(6,4.74117);
   hNCinFV_stack_7->SetBinContent(7,2.940848);
   hNCinFV_stack_7->SetBinContent(8,2.762345);
   hNCinFV_stack_7->SetBinContent(9,2.465314);
   hNCinFV_stack_7->SetBinContent(10,1.780205);
   hNCinFV_stack_7->SetBinContent(11,1.180759);
   hNCinFV_stack_7->SetBinContent(12,0.6121968);
   hNCinFV_stack_7->SetBinContent(13,0.7343147);
   hNCinFV_stack_7->SetBinContent(14,0.2241195);
   hNCinFV_stack_7->SetBinContent(15,0.03825059);
   hNCinFV_stack_7->SetBinContent(16,0.0127502);
   hNCinFV_stack_7->SetBinContent(17,0.0127502);
   hNCinFV_stack_7->SetBinError(4,0.4232522);
   hNCinFV_stack_7->SetBinError(5,0.5050724);
   hNCinFV_stack_7->SetBinError(6,0.5085387);
   hNCinFV_stack_7->SetBinError(7,0.3915919);
   hNCinFV_stack_7->SetBinError(8,0.388675);
   hNCinFV_stack_7->SetBinError(9,0.3633702);
   hNCinFV_stack_7->SetBinError(10,0.3096208);
   hNCinFV_stack_7->SetBinError(11,0.2586147);
   hNCinFV_stack_7->SetBinError(12,0.1707221);
   hNCinFV_stack_7->SetBinError(13,0.199622);
   hNCinFV_stack_7->SetBinError(14,0.1095603);
   hNCinFV_stack_7->SetBinError(15,0.02208399);
   hNCinFV_stack_7->SetBinError(16,0.0127502);
   hNCinFV_stack_7->SetBinError(17,0.0127502);
   hNCinFV_stack_7->SetEntries(696);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);
   hnumuCCinFV_stack_8->SetBinContent(4,10.6853);
   hnumuCCinFV_stack_8->SetBinContent(5,10.95341);
   hnumuCCinFV_stack_8->SetBinContent(6,9.164349);
   hnumuCCinFV_stack_8->SetBinContent(7,5.539615);
   hnumuCCinFV_stack_8->SetBinContent(8,4.071879);
   hnumuCCinFV_stack_8->SetBinContent(9,2.195484);
   hnumuCCinFV_stack_8->SetBinContent(10,1.460582);
   hnumuCCinFV_stack_8->SetBinContent(11,1.049603);
   hnumuCCinFV_stack_8->SetBinContent(12,0.303696);
   hnumuCCinFV_stack_8->SetBinContent(13,0.288854);
   hnumuCCinFV_stack_8->SetBinContent(14,0.2578081);
   hnumuCCinFV_stack_8->SetBinContent(16,0.07656492);
   hnumuCCinFV_stack_8->SetBinError(4,0.8969925);
   hnumuCCinFV_stack_8->SetBinError(5,0.987735);
   hnumuCCinFV_stack_8->SetBinError(6,1.032892);
   hnumuCCinFV_stack_8->SetBinError(7,0.6407413);
   hnumuCCinFV_stack_8->SetBinError(8,0.6458415);
   hnumuCCinFV_stack_8->SetBinError(9,0.409287);
   hnumuCCinFV_stack_8->SetBinError(10,0.2866475);
   hnumuCCinFV_stack_8->SetBinError(11,0.2507698);
   hnumuCCinFV_stack_8->SetBinError(12,0.1259819);
   hnumuCCinFV_stack_8->SetBinError(13,0.1258958);
   hnumuCCinFV_stack_8->SetBinError(14,0.1212589);
   hnumuCCinFV_stack_8->SetBinError(16,0.07656492);
   hnumuCCinFV_stack_8->SetEntries(1072);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);
   hnueCCinFV_stack_9->SetBinContent(4,0.5893651);
   hnueCCinFV_stack_9->SetBinContent(5,0.8188702);
   hnueCCinFV_stack_9->SetBinContent(6,0.8184112);
   hnueCCinFV_stack_9->SetBinContent(7,0.2415777);
   hnueCCinFV_stack_9->SetBinContent(8,0.7268263);
   hnueCCinFV_stack_9->SetBinContent(9,0.158775);
   hnueCCinFV_stack_9->SetBinContent(10,0.05443075);
   hnueCCinFV_stack_9->SetBinContent(11,0.0127502);
   hnueCCinFV_stack_9->SetBinContent(12,0.1784783);
   hnueCCinFV_stack_9->SetBinError(4,0.1673346);
   hnueCCinFV_stack_9->SetBinError(5,0.2207856);
   hnueCCinFV_stack_9->SetBinError(6,0.2136726);
   hnueCCinFV_stack_9->SetBinError(7,0.1168613);
   hnueCCinFV_stack_9->SetBinError(8,0.4828564);
   hnueCCinFV_stack_9->SetBinError(9,0.1042039);
   hnueCCinFV_stack_9->SetBinError(10,0.027377);
   hnueCCinFV_stack_9->SetBinError(11,0.0127502);
   hnueCCinFV_stack_9->SetBinError(12,0.1215308);
   hnueCCinFV_stack_9->SetEntries(85);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);
   hmcerror__2->SetBinContent(4,80.2164);
   hmcerror__2->SetBinContent(5,94.00529);
   hmcerror__2->SetBinContent(6,89.34054);
   hmcerror__2->SetBinContent(7,71.89449);
   hmcerror__2->SetBinContent(8,64.2541);
   hmcerror__2->SetBinContent(9,55.37227);
   hmcerror__2->SetBinContent(10,47.54005);
   hmcerror__2->SetBinContent(11,41.10938);
   hmcerror__2->SetBinContent(12,33.28796);
   hmcerror__2->SetBinContent(13,25.8208);
   hmcerror__2->SetBinContent(14,14.35347);
   hmcerror__2->SetBinContent(15,8.147588);
   hmcerror__2->SetBinContent(16,3.454318);
   hmcerror__2->SetBinContent(17,1.293716);
   hmcerror__2->SetBinContent(18,0.6978588);
   hmcerror__2->SetBinContent(19,0.1002069);
   hmcerror__2->SetBinContent(20,0.08745668);
   hmcerror__2->SetBinContent(21,0.06195629);
   hmcerror__2->SetBinError(1,0.125509);
   hmcerror__2->SetBinError(2,0.125509);
   hmcerror__2->SetBinError(3,0.125509);
   hmcerror__2->SetBinError(4,14.9083);
   hmcerror__2->SetBinError(5,18.47399);
   hmcerror__2->SetBinError(6,18.59414);
   hmcerror__2->SetBinError(7,15.73499);
   hmcerror__2->SetBinError(8,14.40738);
   hmcerror__2->SetBinError(9,13.81827);
   hmcerror__2->SetBinError(10,12.08346);
   hmcerror__2->SetBinError(11,10.51465);
   hmcerror__2->SetBinError(12,9.55073);
   hmcerror__2->SetBinError(13,7.611545);
   hmcerror__2->SetBinError(14,4.919203);
   hmcerror__2->SetBinError(15,3.311273);
   hmcerror__2->SetBinError(16,1.872531);
   hmcerror__2->SetBinError(17,1.109722);
   hmcerror__2->SetBinError(18,0.8570894);
   hmcerror__2->SetBinError(19,0.3037385);
   hmcerror__2->SetBinError(20,0.4345139);
   hmcerror__2->SetBinError(21,0.142831);
   hmcerror__2->SetEntries(622.1566);

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
   75,
   60,
   78,
   76,
   49,
   47,
   49,
   30,
   16,
   21,
   5,
   5,
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
   8.7852,
   7.8743,
   8.9562,
   8.8425,
   7.1318,
   6.9882,
   7.1318,
   5.6197,
   4.1628,
   4.7354,
   2.48995,
   2.48995,
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
   8.5831,
   7.6713,
   8.7542,
   8.6406,
   6.9277,
   6.7839,
   6.9277,
   5.4117,
   3.9454,
   4.5229,
   2.21064,
   2.21064,
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
   Graph_Graph3001->SetMaximum(95.42962);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.81#pm0.04(data err)#pm0.16(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=10.70/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 514.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 13.7","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 47.8","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 6.1","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 63.1","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  320.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 104.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 25.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 46.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 3.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_10_nc_pio_score_all");
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
   0.1858511,
   0.1965207,
   0.2081266,
   0.2188622,
   0.224225,
   0.2495522,
   0.2541742,
   0.2557726,
   0.2869124,
   0.2947835,
   0.3427187,
   0.4064115,
   0.5420843,
   0.857779,
   1.22817,
   3.031115,
   4.968333};
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
   0.1858511,
   0.1965207,
   0.2081266,
   0.2188622,
   0.224225,
   0.2495522,
   0.2541742,
   0.2557726,
   0.2869124,
   0.2947835,
   0.3427187,
   0.4064115,
   0.5420843,
   0.857779,
   1.22817,
   3.031115,
   4.968333};
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
   Graph_Graph3002->GetXaxis()->SetTitle("BDT score");
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
   0.1612575,
   0.1739999,
   0.1764987,
   0.1873515,
   0.1964411,
   0.2144773,
   0.217314,
   0.2155884,
   0.2441831,
   0.2428436,
   0.2594545,
   0.2579408,
   0.2997043,
   0.3567177,
   0.4386706,
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
   0.1612575,
   0.1739999,
   0.1764987,
   0.1873515,
   0.1964411,
   0.2144773,
   0.217314,
   0.2155884,
   0.2441831,
   0.2428436,
   0.2594545,
   0.2579408,
   0.2997043,
   0.3567177,
   0.4386706,
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
   0.9349709,
   0.6382619,
   0.8730639,
   1.057105,
   0.7625973,
   0.8488003,
   1.03071,
   0.7297605,
   0.4806543,
   0.813298,
   0.3483478,
   0.6136786,
   0.5789855,
   0,
   1.432955,
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
   0.1095188,
   0.08376443,
   0.1002479,
   0.1229927,
   0.1109937,
   0.126204,
   0.1500167,
   0.1367012,
   0.1250542,
   0.1833948,
   0.1734737,
   0.3056058,
   0.5789855,
   0,
   1.432955,
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
   0.1069993,
   0.08160498,
   0.09798687,
   0.1201845,
   0.1078172,
   0.1225144,
   0.1457234,
   0.1316415,
   0.1185233,
   0.175165,
   0.1540143,
   0.2713245,
   0.4397887,
   0.8872118,
   1.948403,
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_10_nc_pio_score_all",20,1,6);

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
