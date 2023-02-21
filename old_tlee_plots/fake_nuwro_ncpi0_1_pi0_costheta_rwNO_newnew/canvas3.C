#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Mon Jan 16 04:37:10 2023) by ROOT version 6.26/00
   TCanvas *canvas3 = new TCanvas("canvas3", "channel3",216,172,1200,900);
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
   pad1->Range(-1.307692,-6.344553,1.25641,701.574);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hmc__7->SetBinContent(1,44.84553);
   hmc__7->SetBinContent(2,31.78951);
   hmc__7->SetBinContent(3,30.36568);
   hmc__7->SetBinContent(4,23.63742);
   hmc__7->SetBinContent(5,24.8431);
   hmc__7->SetBinContent(6,27.55974);
   hmc__7->SetBinContent(7,25.85404);
   hmc__7->SetBinContent(8,23.52059);
   hmc__7->SetBinContent(9,30.45407);
   hmc__7->SetBinContent(10,36.30653);
   hmc__7->SetBinContent(11,36.05344);
   hmc__7->SetBinContent(12,39.83209);
   hmc__7->SetBinContent(13,41.50698);
   hmc__7->SetBinContent(14,47.19878);
   hmc__7->SetBinContent(15,73.02937);
   hmc__7->SetBinContent(16,66.0314);
   hmc__7->SetBinContent(17,101.8098);
   hmc__7->SetBinContent(18,132.4891);
   hmc__7->SetBinContent(19,177.7592);
   hmc__7->SetBinContent(20,317.2276);
   hmc__7->SetBinError(1,21.6507);
   hmc__7->SetBinError(2,24.38424);
   hmc__7->SetBinError(3,15.00587);
   hmc__7->SetBinError(4,15.82685);
   hmc__7->SetBinError(5,15.22701);
   hmc__7->SetBinError(6,14.72729);
   hmc__7->SetBinError(7,18.66886);
   hmc__7->SetBinError(8,13.15339);
   hmc__7->SetBinError(9,14.73126);
   hmc__7->SetBinError(10,18.04381);
   hmc__7->SetBinError(11,15.74223);
   hmc__7->SetBinError(12,15.84927);
   hmc__7->SetBinError(13,20.05695);
   hmc__7->SetBinError(14,20.77988);
   hmc__7->SetBinError(15,27.98644);
   hmc__7->SetBinError(16,33.63337);
   hmc__7->SetBinError(17,41.18272);
   hmc__7->SetBinError(18,43.04305);
   hmc__7->SetBinError(19,45.49127);
   hmc__7->SetBinError(20,72.22368);
   hmc__7->SetBinError(21,0.4673072);
   hmc__7->SetMinimum(-6.344553);
   hmc__7->SetMaximum(666.178);
   hmc__7->SetEntries(1302.786);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",20,-1,1);
   hs3_stack_3->SetMinimum(-1.166102e-08);
   hs3_stack_3->SetMaximum(333.089);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hbadmatch_stack_1->SetBinContent(1,3.549683);
   hbadmatch_stack_1->SetBinContent(2,0.2896973);
   hbadmatch_stack_1->SetBinContent(3,2.929765);
   hbadmatch_stack_1->SetBinContent(4,1.195446);
   hbadmatch_stack_1->SetBinContent(5,1.592022);
   hbadmatch_stack_1->SetBinContent(6,1.571141);
   hbadmatch_stack_1->SetBinContent(7,1.428446);
   hbadmatch_stack_1->SetBinContent(8,0.4667954);
   hbadmatch_stack_1->SetBinContent(9,4.910588);
   hbadmatch_stack_1->SetBinContent(10,0.9979658);
   hbadmatch_stack_1->SetBinContent(11,3.329471);
   hbadmatch_stack_1->SetBinContent(12,3.870828);
   hbadmatch_stack_1->SetBinContent(13,2.094019);
   hbadmatch_stack_1->SetBinContent(14,1.63503);
   hbadmatch_stack_1->SetBinContent(15,3.137357);
   hbadmatch_stack_1->SetBinContent(16,1.8905);
   hbadmatch_stack_1->SetBinContent(17,4.551977);
   hbadmatch_stack_1->SetBinContent(18,4.704078);
   hbadmatch_stack_1->SetBinContent(19,4.288389);
   hbadmatch_stack_1->SetBinContent(20,8.792192);
   hbadmatch_stack_1->SetBinError(1,1.11577);
   hbadmatch_stack_1->SetBinError(2,0.2896973);
   hbadmatch_stack_1->SetBinError(3,1.075928);
   hbadmatch_stack_1->SetBinError(4,0.5352254);
   hbadmatch_stack_1->SetBinError(5,0.7490679);
   hbadmatch_stack_1->SetBinError(6,0.8068416);
   hbadmatch_stack_1->SetBinError(7,0.6648143);
   hbadmatch_stack_1->SetBinError(8,0.3300742);
   hbadmatch_stack_1->SetBinError(9,1.452012);
   hbadmatch_stack_1->SetBinError(10,0.6253727);
   hbadmatch_stack_1->SetBinError(11,1.096455);
   hbadmatch_stack_1->SetBinError(12,1.304455);
   hbadmatch_stack_1->SetBinError(13,0.888407);
   hbadmatch_stack_1->SetBinError(14,0.7635629);
   hbadmatch_stack_1->SetBinError(15,1.159155);
   hbadmatch_stack_1->SetBinError(16,0.8885494);
   hbadmatch_stack_1->SetBinError(17,1.315867);
   hbadmatch_stack_1->SetBinError(18,1.28668);
   hbadmatch_stack_1->SetBinError(19,1.290058);
   hbadmatch_stack_1->SetBinError(20,1.78052);
   hbadmatch_stack_1->SetEntries(171);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   houtFV_stack_4->SetBinContent(1,14.8058);
   houtFV_stack_4->SetBinContent(2,13.75914);
   houtFV_stack_4->SetBinContent(3,9.625161);
   houtFV_stack_4->SetBinContent(4,8.586506);
   houtFV_stack_4->SetBinContent(5,7.370287);
   houtFV_stack_4->SetBinContent(6,9.209328);
   houtFV_stack_4->SetBinContent(7,8.200033);
   houtFV_stack_4->SetBinContent(8,6.962584);
   houtFV_stack_4->SetBinContent(9,8.414214);
   houtFV_stack_4->SetBinContent(10,7.635641);
   houtFV_stack_4->SetBinContent(11,9.303766);
   houtFV_stack_4->SetBinContent(12,9.879321);
   houtFV_stack_4->SetBinContent(13,7.026519);
   houtFV_stack_4->SetBinContent(14,10.25232);
   houtFV_stack_4->SetBinContent(15,18.41335);
   houtFV_stack_4->SetBinContent(16,12.1998);
   houtFV_stack_4->SetBinContent(17,22.18593);
   houtFV_stack_4->SetBinContent(18,32.89726);
   houtFV_stack_4->SetBinContent(19,40.3597);
   houtFV_stack_4->SetBinContent(20,57.12539);
   houtFV_stack_4->SetBinError(1,2.294354);
   houtFV_stack_4->SetBinError(2,2.133408);
   houtFV_stack_4->SetBinError(3,1.7269);
   houtFV_stack_4->SetBinError(4,1.621276);
   houtFV_stack_4->SetBinError(5,1.548217);
   houtFV_stack_4->SetBinError(6,2.340863);
   houtFV_stack_4->SetBinError(7,1.750612);
   houtFV_stack_4->SetBinError(8,1.522841);
   houtFV_stack_4->SetBinError(9,1.677783);
   houtFV_stack_4->SetBinError(10,1.634138);
   houtFV_stack_4->SetBinError(11,1.798063);
   houtFV_stack_4->SetBinError(12,1.835182);
   houtFV_stack_4->SetBinError(13,1.608607);
   houtFV_stack_4->SetBinError(14,1.87884);
   houtFV_stack_4->SetBinError(15,2.491048);
   houtFV_stack_4->SetBinError(16,2.11354);
   houtFV_stack_4->SetBinError(17,2.805322);
   houtFV_stack_4->SetBinError(18,3.501392);
   houtFV_stack_4->SetBinError(19,3.729755);
   houtFV_stack_4->SetBinError(20,4.582711);
   houtFV_stack_4->SetEntries(1008);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.09930784);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2893277);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.256225);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.7441684);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,2.042485);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,9.957483);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.05733541);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.2583545);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2562251);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.04681417);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3727909);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.5945245);
   hNCpi0inFVcoh_stack_5->SetBinError(20,1.213676);
   hNCpi0inFVcoh_stack_5->SetEntries(215);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.2893277);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.09930784);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.1655131);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.1655131);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.4879434);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.9096814);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.2583545);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.05733541);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.0740197);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.0740197);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2707799);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3800684);
   hNCpi0inFVqe_stack_6->SetEntries(52);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVres_stack_7->SetBinContent(1,5.863916);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.632198);
   hNCpi0inFVres_stack_7->SetBinContent(3,4.680818);
   hNCpi0inFVres_stack_7->SetBinContent(4,4.689414);
   hNCpi0inFVres_stack_7->SetBinContent(5,3.622815);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.937043);
   hNCpi0inFVres_stack_7->SetBinContent(7,5.433582);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.713921);
   hNCpi0inFVres_stack_7->SetBinContent(9,5.285261);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.335455);
   hNCpi0inFVres_stack_7->SetBinContent(11,7.270137);
   hNCpi0inFVres_stack_7->SetBinContent(12,9.114006);
   hNCpi0inFVres_stack_7->SetBinContent(13,9.974674);
   hNCpi0inFVres_stack_7->SetBinContent(14,13.33998);
   hNCpi0inFVres_stack_7->SetBinContent(15,16.02861);
   hNCpi0inFVres_stack_7->SetBinContent(16,15.80549);
   hNCpi0inFVres_stack_7->SetBinContent(17,24.48788);
   hNCpi0inFVres_stack_7->SetBinContent(18,30.60802);
   hNCpi0inFVres_stack_7->SetBinContent(19,36.85454);
   hNCpi0inFVres_stack_7->SetBinContent(20,55.95053);
   hNCpi0inFVres_stack_7->SetBinError(1,0.9071803);
   hNCpi0inFVres_stack_7->SetBinError(2,0.9029428);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8524335);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8183874);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6803984);
   hNCpi0inFVres_stack_7->SetBinError(6,0.8901091);
   hNCpi0inFVres_stack_7->SetBinError(7,0.8992947);
   hNCpi0inFVres_stack_7->SetBinError(8,0.853076);
   hNCpi0inFVres_stack_7->SetBinError(9,0.8303505);
   hNCpi0inFVres_stack_7->SetBinError(10,1.191351);
   hNCpi0inFVres_stack_7->SetBinError(11,0.9918996);
   hNCpi0inFVres_stack_7->SetBinError(12,1.153581);
   hNCpi0inFVres_stack_7->SetBinError(13,1.165864);
   hNCpi0inFVres_stack_7->SetBinError(14,1.408959);
   hNCpi0inFVres_stack_7->SetBinError(15,1.498558);
   hNCpi0inFVres_stack_7->SetBinError(16,1.476862);
   hNCpi0inFVres_stack_7->SetBinError(17,1.930352);
   hNCpi0inFVres_stack_7->SetBinError(18,2.148229);
   hNCpi0inFVres_stack_7->SetBinError(19,2.25998);
   hNCpi0inFVres_stack_7->SetBinError(20,2.822986);
   hNCpi0inFVres_stack_7->SetEntries(4650);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVdis_stack_8->SetBinContent(1,2.009383);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.108297);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.4965392);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.265214);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.232112);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.8103737);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.8851747);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.042092);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.108297);
   hNCpi0inFVdis_stack_8->SetBinContent(10,1.777665);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.753158);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.6951549);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.117286);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.960369);
   hNCpi0inFVdis_stack_8->SetBinContent(15,2.92766);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.961156);
   hNCpi0inFVdis_stack_8->SetBinContent(17,5.458089);
   hNCpi0inFVdis_stack_8->SetBinContent(18,7.359568);
   hNCpi0inFVdis_stack_8->SetBinContent(19,9.875366);
   hNCpi0inFVdis_stack_8->SetBinContent(20,21.34569);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.5936023);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3886215);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.1282059);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4619422);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4607546);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3757188);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2940598);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3857915);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3886215);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5871057);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5354553);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1516952);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5465949);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.4862119);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6632726);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.8035239);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.9309736);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.128128);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.164454);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.779014);
   hNCpi0inFVdis_stack_8->SetEntries(1133);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.09930784);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.05733541);
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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hCCpi0inFV_stack_10->SetBinContent(1,11.41931);
   hCCpi0inFV_stack_10->SetBinContent(2,5.752572);
   hCCpi0inFV_stack_10->SetBinContent(3,6.935113);
   hCCpi0inFV_stack_10->SetBinContent(4,3.048927);
   hCCpi0inFV_stack_10->SetBinContent(5,4.676955);
   hCCpi0inFV_stack_10->SetBinContent(6,5.102916);
   hCCpi0inFV_stack_10->SetBinContent(7,5.030344);
   hCCpi0inFV_stack_10->SetBinContent(8,5.085948);
   hCCpi0inFV_stack_10->SetBinContent(9,5.943054);
   hCCpi0inFV_stack_10->SetBinContent(10,8.50901);
   hCCpi0inFV_stack_10->SetBinContent(11,6.718133);
   hCCpi0inFV_stack_10->SetBinContent(12,8.681183);
   hCCpi0inFV_stack_10->SetBinContent(13,8.919067);
   hCCpi0inFV_stack_10->SetBinContent(14,8.084278);
   hCCpi0inFV_stack_10->SetBinContent(15,16.80086);
   hCCpi0inFV_stack_10->SetBinContent(16,14.37717);
   hCCpi0inFV_stack_10->SetBinContent(17,22.22795);
   hCCpi0inFV_stack_10->SetBinContent(18,32.41355);
   hCCpi0inFV_stack_10->SetBinContent(19,47.40845);
   hCCpi0inFV_stack_10->SetBinContent(20,83.03734);
   hCCpi0inFV_stack_10->SetBinError(1,1.949977);
   hCCpi0inFV_stack_10->SetBinError(2,1.386752);
   hCCpi0inFV_stack_10->SetBinError(3,1.529879);
   hCCpi0inFV_stack_10->SetBinError(4,0.957876);
   hCCpi0inFV_stack_10->SetBinError(5,1.264255);
   hCCpi0inFV_stack_10->SetBinError(6,1.352723);
   hCCpi0inFV_stack_10->SetBinError(7,1.283702);
   hCCpi0inFV_stack_10->SetBinError(8,1.346048);
   hCCpi0inFV_stack_10->SetBinError(9,1.398456);
   hCCpi0inFV_stack_10->SetBinError(10,1.719369);
   hCCpi0inFV_stack_10->SetBinError(11,1.398529);
   hCCpi0inFV_stack_10->SetBinError(12,1.696775);
   hCCpi0inFV_stack_10->SetBinError(13,1.771166);
   hCCpi0inFV_stack_10->SetBinError(14,1.602606);
   hCCpi0inFV_stack_10->SetBinError(15,2.512186);
   hCCpi0inFV_stack_10->SetBinError(16,2.163607);
   hCCpi0inFV_stack_10->SetBinError(17,2.779641);
   hCCpi0inFV_stack_10->SetBinError(18,3.386188);
   hCCpi0inFV_stack_10->SetBinError(19,4.078558);
   hCCpi0inFV_stack_10->SetBinError(20,5.444159);
   hCCpi0inFV_stack_10->SetEntries(994);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hNCinFV_stack_11->SetBinContent(1,1.400386);
   hNCinFV_stack_11->SetBinContent(2,1.379505);
   hNCinFV_stack_11->SetBinContent(3,1.358624);
   hNCinFV_stack_11->SetBinContent(4,0.8918287);
   hNCinFV_stack_11->SetBinContent(5,0.4667954);
   hNCinFV_stack_11->SetBinContent(6,0.9127098);
   hNCinFV_stack_11->SetBinContent(7,1.886964);
   hNCinFV_stack_11->SetBinContent(8,0.6793121);
   hNCinFV_stack_11->SetBinContent(9,1.358624);
   hNCinFV_stack_11->SetBinContent(10,0.9127098);
   hNCinFV_stack_11->SetBinContent(11,1.146108);
   hNCinFV_stack_11->SetBinContent(12,0.9127098);
   hNCinFV_stack_11->SetBinContent(13,2.738129);
   hNCinFV_stack_11->SetBinContent(14,1.592022);
   hNCinFV_stack_11->SetBinContent(15,4.521787);
   hNCinFV_stack_11->SetBinContent(16,2.525613);
   hNCinFV_stack_11->SetBinContent(17,4.288389);
   hNCinFV_stack_11->SetBinContent(18,7.301679);
   hNCinFV_stack_11->SetBinContent(19,10.46484);
   hNCinFV_stack_11->SetBinContent(20,25.21807);
   hNCinFV_stack_11->SetBinError(1,0.5717053);
   hNCinFV_stack_11->SetBinError(2,0.6455522);
   hNCinFV_stack_11->SetBinError(3,0.7117782);
   hNCinFV_stack_11->SetBinError(4,0.6306181);
   hNCinFV_stack_11->SetBinError(5,0.3300742);
   hNCinFV_stack_11->SetBinError(6,0.554787);
   hNCinFV_stack_11->SetBinError(7,0.7869974);
   hNCinFV_stack_11->SetBinError(8,0.5033032);
   hNCinFV_stack_11->SetBinError(9,0.7117782);
   hNCinFV_stack_11->SetBinError(10,0.554787);
   hNCinFV_stack_11->SetBinError(11,0.601883);
   hNCinFV_stack_11->SetBinError(12,0.554787);
   hNCinFV_stack_11->SetBinError(13,0.9609192);
   hNCinFV_stack_11->SetBinError(14,0.7490679);
   hNCinFV_stack_11->SetBinError(15,1.311001);
   hNCinFV_stack_11->SetBinError(16,0.8826101);
   hNCinFV_stack_11->SetBinError(17,1.290058);
   hNCinFV_stack_11->SetBinError(18,1.569175);
   hNCinFV_stack_11->SetBinError(19,1.916874);
   hNCinFV_stack_11->SetBinError(20,3.002176);
   hNCinFV_stack_11->SetEntries(228);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hnumuCCinFV_stack_12->SetBinContent(1,4.941618);
   hnumuCCinFV_stack_12->SetBinContent(2,3.068604);
   hnumuCCinFV_stack_12->SetBinContent(3,4.273452);
   hnumuCCinFV_stack_12->SetBinContent(4,3.926984);
   hnumuCCinFV_stack_12->SetBinContent(5,5.23382);
   hnumuCCinFV_stack_12->SetBinContent(6,4.983129);
   hnumuCCinFV_stack_12->SetBinContent(7,2.989496);
   hnumuCCinFV_stack_12->SetBinContent(8,4.536832);
   hnumuCCinFV_stack_12->SetBinContent(9,3.367829);
   hnumuCCinFV_stack_12->SetBinContent(10,8.104976);
   hnumuCCinFV_stack_12->SetBinContent(11,6.433358);
   hnumuCCinFV_stack_12->SetBinContent(12,6.645786);
   hnumuCCinFV_stack_12->SetBinContent(13,8.571085);
   hnumuCCinFV_stack_12->SetBinContent(14,10.10306);
   hnumuCCinFV_stack_12->SetBinContent(15,10.38634);
   hnumuCCinFV_stack_12->SetBinContent(16,15.20547);
   hnumuCCinFV_stack_12->SetBinContent(17,18.24375);
   hnumuCCinFV_stack_12->SetBinContent(18,16.29531);
   hnumuCCinFV_stack_12->SetBinContent(19,25.29811);
   hnumuCCinFV_stack_12->SetBinContent(20,45.7221);
   hnumuCCinFV_stack_12->SetBinError(1,1.279629);
   hnumuCCinFV_stack_12->SetBinError(2,1.076364);
   hnumuCCinFV_stack_12->SetBinError(3,1.204061);
   hnumuCCinFV_stack_12->SetBinError(4,1.242078);
   hnumuCCinFV_stack_12->SetBinError(5,1.382727);
   hnumuCCinFV_stack_12->SetBinError(6,1.421776);
   hnumuCCinFV_stack_12->SetBinError(7,1.025804);
   hnumuCCinFV_stack_12->SetBinError(8,1.373231);
   hnumuCCinFV_stack_12->SetBinError(9,1.04109);
   hnumuCCinFV_stack_12->SetBinError(10,2.231582);
   hnumuCCinFV_stack_12->SetBinError(11,1.612601);
   hnumuCCinFV_stack_12->SetBinError(12,1.595471);
   hnumuCCinFV_stack_12->SetBinError(13,1.767281);
   hnumuCCinFV_stack_12->SetBinError(14,1.9767);
   hnumuCCinFV_stack_12->SetBinError(15,2.071392);
   hnumuCCinFV_stack_12->SetBinError(16,2.635056);
   hnumuCCinFV_stack_12->SetBinError(17,2.610154);
   hnumuCCinFV_stack_12->SetBinError(18,2.349584);
   hnumuCCinFV_stack_12->SetBinError(19,4.017894);
   hnumuCCinFV_stack_12->SetBinError(20,5.020131);
   hnumuCCinFV_stack_12->SetEntries(621);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hnueCCinFV_stack_13->SetBinContent(1,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(2,0.7001932);
   hnueCCinFV_stack_13->SetBinContent(5,0.3589667);
   hnueCCinFV_stack_13->SetBinContent(15,0.4909815);
   hnueCCinFV_stack_13->SetBinContent(17,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(19,0.6793121);
   hnueCCinFV_stack_13->SetBinContent(20,9.06985);
   hnueCCinFV_stack_13->SetBinError(1,0.3300742);
   hnueCCinFV_stack_13->SetBinError(2,0.4042567);
   hnueCCinFV_stack_13->SetBinError(5,0.3589667);
   hnueCCinFV_stack_13->SetBinError(15,0.3475973);
   hnueCCinFV_stack_13->SetBinError(17,0.2333977);
   hnueCCinFV_stack_13->SetBinError(19,0.5033032);
   hnueCCinFV_stack_13->SetBinError(20,2.882034);
   hnueCCinFV_stack_13->SetEntries(28);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);
   hmcerror__8->SetBinContent(1,44.84553);
   hmcerror__8->SetBinContent(2,31.78951);
   hmcerror__8->SetBinContent(3,30.36568);
   hmcerror__8->SetBinContent(4,23.63742);
   hmcerror__8->SetBinContent(5,24.8431);
   hmcerror__8->SetBinContent(6,27.55974);
   hmcerror__8->SetBinContent(7,25.85404);
   hmcerror__8->SetBinContent(8,23.52059);
   hmcerror__8->SetBinContent(9,30.45407);
   hmcerror__8->SetBinContent(10,36.30653);
   hmcerror__8->SetBinContent(11,36.05344);
   hmcerror__8->SetBinContent(12,39.83209);
   hmcerror__8->SetBinContent(13,41.50698);
   hmcerror__8->SetBinContent(14,47.19878);
   hmcerror__8->SetBinContent(15,73.02937);
   hmcerror__8->SetBinContent(16,66.0314);
   hmcerror__8->SetBinContent(17,101.8098);
   hmcerror__8->SetBinContent(18,132.4891);
   hmcerror__8->SetBinContent(19,177.7592);
   hmcerror__8->SetBinContent(20,317.2276);
   hmcerror__8->SetBinError(1,21.6507);
   hmcerror__8->SetBinError(2,24.38424);
   hmcerror__8->SetBinError(3,15.00587);
   hmcerror__8->SetBinError(4,15.82685);
   hmcerror__8->SetBinError(5,15.22701);
   hmcerror__8->SetBinError(6,14.72729);
   hmcerror__8->SetBinError(7,18.66886);
   hmcerror__8->SetBinError(8,13.15339);
   hmcerror__8->SetBinError(9,14.73126);
   hmcerror__8->SetBinError(10,18.04381);
   hmcerror__8->SetBinError(11,15.74223);
   hmcerror__8->SetBinError(12,15.84927);
   hmcerror__8->SetBinError(13,20.05695);
   hmcerror__8->SetBinError(14,20.77988);
   hmcerror__8->SetBinError(15,27.98644);
   hmcerror__8->SetBinError(16,33.63337);
   hmcerror__8->SetBinError(17,41.18272);
   hmcerror__8->SetBinError(18,43.04305);
   hmcerror__8->SetBinError(19,45.49127);
   hmcerror__8->SetBinError(20,72.22368);
   hmcerror__8->SetBinError(21,0.4673072);
   hmcerror__8->SetEntries(1302.786);

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
   
   Double_t _fx3009[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3009[20] = {
   44,
   25,
   26,
   23,
   20,
   28,
   21,
   20,
   22,
   19,
   22,
   33,
   29,
   55,
   52,
   62,
   84,
   143,
   184,
   293};
   Double_t _felx3009[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3009[20] = {
   6.7671,
   5.1474,
   5.2453,
   4.9457,
   4.6266,
   5.4358,
   4.7354,
   4.6266,
   4.8417,
   4.5151,
   4.8417,
   5.8847,
   5.5285,
   7.546,
   7.3419,
   8.0018,
   9.2886,
   11.95826,
   13.56466,
   17.11724};
   Double_t _fehx3009[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3009[20] = {
   6.5623,
   4.9374,
   5.0358,
   4.7346,
   4.4133,
   5.2271,
   4.5229,
   4.4133,
   4.6299,
   4.3011,
   4.6299,
   5.6776,
   5.3201,
   7.3425,
   7.1381,
   7.7989,
   9.0869,
   11.95826,
   13.56466,
   17.11724};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,-1.2,1.2);
   Graph_Graph3009->SetMinimum(13.03641);
   Graph_Graph3009->SetMaximum(339.6805);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.90#pm0.19","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(22);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","POT: 6.17e+20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=5.1/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1205.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 57.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 314.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  13.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  2.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  272.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  69.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 310.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 72.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 208.3","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 12.0","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_bnb_6_pi0_costheta_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.318154,-0.5333333,1.266462,2.133333);
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
   
   Double_t _fx3010[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3010[20] = {
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
   Double_t _felx3010[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3010[20] = {
   0.4827839,
   0.7670529,
   0.4941722,
   0.6695674,
   0.6129269,
   0.5343769,
   0.7220866,
   0.5592288,
   0.4837206,
   0.4969853,
   0.436636,
   0.3979019,
   0.4832186,
   0.4402631,
   0.3832217,
   0.5093541,
   0.4045065,
   0.3248798,
   0.2559152,
   0.2276715};
   Double_t _fehx3010[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3010[20] = {
   0.4827839,
   0.7670529,
   0.4941722,
   0.6695674,
   0.6129269,
   0.5343769,
   0.7220866,
   0.5592288,
   0.4837206,
   0.4969853,
   0.436636,
   0.3979019,
   0.4832186,
   0.4402631,
   0.3832217,
   0.5093541,
   0.4045065,
   0.3248798,
   0.2559152,
   0.2276715};
   grae = new TGraphAsymmErrors(20,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,-1.2,1.2);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} cos #theta");
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
   
   Double_t _fx3011[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3011[20] = {
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
   Double_t _felx3011[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3011[20] = {
   0.2248596,
   0.2195411,
   0.2208371,
   0.2556383,
   0.2534355,
   0.2197668,
   0.2405521,
   0.2475461,
   0.229918,
   0.2311678,
   0.230451,
   0.2279058,
   0.2374791,
   0.25748,
   0.2460774,
   0.2561682,
   0.2315563,
   0.2212569,
   0.2076541,
   0.1926255};
   Double_t _fehx3011[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3011[20] = {
   0.2248596,
   0.2195411,
   0.2208371,
   0.2556383,
   0.2534355,
   0.2197668,
   0.2405521,
   0.2475461,
   0.229918,
   0.2311678,
   0.230451,
   0.2279058,
   0.2374791,
   0.25748,
   0.2460774,
   0.2561682,
   0.2315563,
   0.2212569,
   0.2076541,
   0.1926255};
   grae = new TGraphAsymmErrors(20,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,-1.2,1.2);
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
   
   Double_t _fx3012[20] = {
   -0.95,
   -0.85,
   -0.75,
   -0.65,
   -0.55,
   -0.45,
   -0.35,
   -0.25,
   -0.15,
   -0.05,
   0.05,
   0.15,
   0.25,
   0.35,
   0.45,
   0.55,
   0.65,
   0.75,
   0.85,
   0.95};
   Double_t _fy3012[20] = {
   0.9811458,
   0.7864228,
   0.8562299,
   0.9730334,
   0.8050525,
   1.015975,
   0.8122522,
   0.8503189,
   0.7223992,
   0.5233219,
   0.6102054,
   0.8284777,
   0.6986776,
   1.165284,
   0.7120423,
   0.9389472,
   0.8250682,
   1.079334,
   1.035108,
   0.923627};
   Double_t _felx3012[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fely3012[20] = {
   0.150898,
   0.1619213,
   0.1727378,
   0.2092318,
   0.1862328,
   0.197237,
   0.183159,
   0.1967043,
   0.1589837,
   0.1243606,
   0.1342923,
   0.1477377,
   0.1331945,
   0.159877,
   0.1005335,
   0.1211817,
   0.09123486,
   0.09025843,
   0.07630921,
   0.05395886};
   Double_t _fehx3012[20] = {
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05,
   0.05};
   Double_t _fehy3012[20] = {
   0.1463312,
   0.1553154,
   0.1658386,
   0.200301,
   0.1776469,
   0.1896643,
   0.1749398,
   0.1876356,
   0.1520289,
   0.1184663,
   0.1284177,
   0.1425383,
   0.1281736,
   0.1555654,
   0.09774286,
   0.118109,
   0.08925371,
   0.09025843,
   0.07630921,
   0.05395886};
   grae = new TGraphAsymmErrors(20,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,-1.2,1.2);
   Graph_Graph3012->SetMinimum(0.3067725);
   Graph_Graph3012->SetMaximum(1.413039);
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
   
   TH1F *hist__9 = new TH1F("hist__9","NCpi0BDT_PC_bnb_6_pi0_costheta_all",20,-1,1);

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
   TLine *line = new TLine(-1,1,1,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Genie + GEANT4","F");

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
