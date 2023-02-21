#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Sat Oct 22 16:05:14 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",60,83,1200,900);
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
   pad1->Range(-153.8462,-47.66,1128.205,5270.193);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hmc__1->SetBinContent(1,793.048);
   hmc__1->SetBinContent(2,2301.175);
   hmc__1->SetBinContent(3,1474.032);
   hmc__1->SetBinContent(4,869.5423);
   hmc__1->SetBinContent(5,508.557);
   hmc__1->SetBinContent(6,289.2727);
   hmc__1->SetBinContent(7,176.5441);
   hmc__1->SetBinContent(8,114.1894);
   hmc__1->SetBinContent(9,70.17149);
   hmc__1->SetBinContent(10,42.25924);
   hmc__1->SetBinContent(11,30.02918);
   hmc__1->SetBinContent(12,23.70392);
   hmc__1->SetBinContent(13,86.58916);
   hmc__1->SetBinError(1,219.0889);
   hmc__1->SetBinError(2,631.1619);
   hmc__1->SetBinError(3,424.0513);
   hmc__1->SetBinError(4,227.4467);
   hmc__1->SetBinError(5,114.5118);
   hmc__1->SetBinError(6,70.49495);
   hmc__1->SetBinError(7,57.08513);
   hmc__1->SetBinError(8,42.22697);
   hmc__1->SetBinError(9,25.42212);
   hmc__1->SetBinError(10,22.17259);
   hmc__1->SetBinError(11,17.65083);
   hmc__1->SetBinError(12,13.92614);
   hmc__1->SetBinError(13,26.27898);
   hmc__1->SetMinimum(-47.66);
   hmc__1->SetMaximum(5004.3);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",12,0,1000);
   hs1_stack_1->SetMinimum(-3.368749e-09);
   hs1_stack_1->SetMaximum(2416.234);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hbadmatch_stack_1->SetBinContent(1,44.25094);
   hbadmatch_stack_1->SetBinContent(2,60.36268);
   hbadmatch_stack_1->SetBinContent(3,29.01583);
   hbadmatch_stack_1->SetBinContent(4,17.62327);
   hbadmatch_stack_1->SetBinContent(5,3.721501);
   hbadmatch_stack_1->SetBinContent(6,5.662657);
   hbadmatch_stack_1->SetBinContent(7,4.351709);
   hbadmatch_stack_1->SetBinContent(8,2.669616);
   hbadmatch_stack_1->SetBinContent(9,0.8077747);
   hbadmatch_stack_1->SetBinContent(10,1.089506);
   hbadmatch_stack_1->SetBinContent(11,1.434367);
   hbadmatch_stack_1->SetBinContent(12,0.56883);
   hbadmatch_stack_1->SetBinContent(13,1.901425);
   hbadmatch_stack_1->SetBinError(1,3.624982);
   hbadmatch_stack_1->SetBinError(2,4.831561);
   hbadmatch_stack_1->SetBinError(3,3.18714);
   hbadmatch_stack_1->SetBinError(4,2.260382);
   hbadmatch_stack_1->SetBinError(5,1.363202);
   hbadmatch_stack_1->SetBinError(6,1.276168);
   hbadmatch_stack_1->SetBinError(7,1.096354);
   hbadmatch_stack_1->SetBinError(8,0.8868575);
   hbadmatch_stack_1->SetBinError(9,0.4976719);
   hbadmatch_stack_1->SetBinError(10,0.6315807);
   hbadmatch_stack_1->SetBinError(11,0.6779943);
   hbadmatch_stack_1->SetBinError(12,0.4257516);
   hbadmatch_stack_1->SetBinError(13,0.7897792);
   hbadmatch_stack_1->SetEntries(701);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hext_stack_2->SetBinContent(1,123.8115);
   hext_stack_2->SetBinContent(2,265.6628);
   hext_stack_2->SetBinContent(3,136.4255);
   hext_stack_2->SetBinContent(4,80.80802);
   hext_stack_2->SetBinContent(5,57.51118);
   hext_stack_2->SetBinContent(6,20.32384);
   hext_stack_2->SetBinContent(7,24.11287);
   hext_stack_2->SetBinContent(8,12.16755);
   hext_stack_2->SetBinContent(9,6.064215);
   hext_stack_2->SetBinContent(10,4.296596);
   hext_stack_2->SetBinContent(11,2.923985);
   hext_stack_2->SetBinContent(12,4.994461);
   hext_stack_2->SetBinContent(13,15.23559);
   hext_stack_2->SetBinError(1,7.570146);
   hext_stack_2->SetBinError(2,11.12621);
   hext_stack_2->SetBinError(3,7.785588);
   hext_stack_2->SetBinError(4,6.340124);
   hext_stack_2->SetBinError(5,5.297621);
   hext_stack_2->SetBinError(6,2.998329);
   hext_stack_2->SetBinError(7,3.285772);
   hext_stack_2->SetBinError(8,2.573607);
   hext_stack_2->SetBinError(9,1.636483);
   hext_stack_2->SetBinError(10,1.328326);
   hext_stack_2->SetBinError(11,1.040301);
   hext_stack_2->SetBinError(12,1.644594);
   hext_stack_2->SetBinError(13,2.508242);
   hext_stack_2->SetEntries(1757);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hdirt_stack_3->SetBinContent(1,20.44129);
   hdirt_stack_3->SetBinContent(2,28.65018);
   hdirt_stack_3->SetBinContent(3,12.46347);
   hdirt_stack_3->SetBinContent(4,5.44002);
   hdirt_stack_3->SetBinContent(5,2.589656);
   hdirt_stack_3->SetBinContent(6,1.219425);
   hdirt_stack_3->SetBinContent(7,1.561283);
   hdirt_stack_3->SetBinContent(9,0.2761429);
   hdirt_stack_3->SetBinContent(10,0.3895662);
   hdirt_stack_3->SetBinError(1,2.487359);
   hdirt_stack_3->SetBinError(2,2.774506);
   hdirt_stack_3->SetBinError(3,1.823418);
   hdirt_stack_3->SetBinError(4,1.541109);
   hdirt_stack_3->SetBinError(5,0.8529545);
   hdirt_stack_3->SetBinError(6,0.5912388);
   hdirt_stack_3->SetBinError(7,1.039681);
   hdirt_stack_3->SetBinError(9,0.1952625);
   hdirt_stack_3->SetBinError(10,0.3895662);
   hdirt_stack_3->SetEntries(307);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   houtFV_stack_4->SetBinContent(1,137.2648);
   houtFV_stack_4->SetBinContent(2,292.5569);
   houtFV_stack_4->SetBinContent(3,130.9064);
   houtFV_stack_4->SetBinContent(4,53.22908);
   houtFV_stack_4->SetBinContent(5,31.56477);
   houtFV_stack_4->SetBinContent(6,12.62732);
   houtFV_stack_4->SetBinContent(7,9.079321);
   houtFV_stack_4->SetBinContent(8,5.011577);
   houtFV_stack_4->SetBinContent(9,1.618814);
   houtFV_stack_4->SetBinContent(10,1.451419);
   houtFV_stack_4->SetBinContent(11,0.9123797);
   houtFV_stack_4->SetBinContent(12,0.5669563);
   houtFV_stack_4->SetBinContent(13,3.022194);
   houtFV_stack_4->SetBinError(1,5.919365);
   houtFV_stack_4->SetBinError(2,8.601912);
   houtFV_stack_4->SetBinError(3,5.639856);
   houtFV_stack_4->SetBinError(4,3.754204);
   houtFV_stack_4->SetBinError(5,2.877616);
   houtFV_stack_4->SetBinError(6,1.857576);
   houtFV_stack_4->SetBinError(7,1.591986);
   houtFV_stack_4->SetBinError(8,1.150924);
   houtFV_stack_4->SetBinError(9,0.6527905);
   houtFV_stack_4->SetBinError(10,0.9298688);
   houtFV_stack_4->SetBinError(11,0.481261);
   houtFV_stack_4->SetBinError(12,0.4088391);
   houtFV_stack_4->SetBinError(13,1.068713);
   houtFV_stack_4->SetEntries(3094);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,9.192797);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,44.29771);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,28.92602);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,12.84051);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,6.272186);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,5.293599);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,2.24557);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,1.099669);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.7248104);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.6574981);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.6328344);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.053406);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,2.37449);
   hNCpi0inFVcoh_stack_5->SetBinError(1,1.007573);
   hNCpi0inFVcoh_stack_5->SetBinError(2,2.4498);
   hNCpi0inFVcoh_stack_5->SetBinError(3,2.145136);
   hNCpi0inFVcoh_stack_5->SetBinError(4,1.231068);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.9334679);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.9645861);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.5391701);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2745296);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2221232);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2554062);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.2898893);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.3934665);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5471439);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.726742);
   hNCpi0inFVqe_stack_6->SetBinContent(2,7.008006);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.87499);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.41634);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.9085722);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.5415755);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.7063167);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4926992);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.1109873);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.06042951);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.01677029);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.5083431);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.7785883);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.4895168);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.4152794);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2972504);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2013175);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.3603887);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2188691);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.08764647);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.06042951);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.01677029);
   hNCpi0inFVqe_stack_6->SetEntries(526);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVres_stack_7->SetBinContent(1,300.7297);
   hNCpi0inFVres_stack_7->SetBinContent(2,900.7307);
   hNCpi0inFVres_stack_7->SetBinContent(3,474.6266);
   hNCpi0inFVres_stack_7->SetBinContent(4,219.387);
   hNCpi0inFVres_stack_7->SetBinContent(5,111.8415);
   hNCpi0inFVres_stack_7->SetBinContent(6,67.15361);
   hNCpi0inFVres_stack_7->SetBinContent(7,37.25531);
   hNCpi0inFVres_stack_7->SetBinContent(8,22.54705);
   hNCpi0inFVres_stack_7->SetBinContent(9,13.6413);
   hNCpi0inFVres_stack_7->SetBinContent(10,8.34218);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.805453);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.04796);
   hNCpi0inFVres_stack_7->SetBinContent(13,8.067661);
   hNCpi0inFVres_stack_7->SetBinError(1,5.704426);
   hNCpi0inFVres_stack_7->SetBinError(2,9.590356);
   hNCpi0inFVres_stack_7->SetBinError(3,6.736815);
   hNCpi0inFVres_stack_7->SetBinError(4,4.671867);
   hNCpi0inFVres_stack_7->SetBinError(5,3.653167);
   hNCpi0inFVres_stack_7->SetBinError(6,3.118008);
   hNCpi0inFVres_stack_7->SetBinError(7,2.327208);
   hNCpi0inFVres_stack_7->SetBinError(8,1.865956);
   hNCpi0inFVres_stack_7->SetBinError(9,1.641948);
   hNCpi0inFVres_stack_7->SetBinError(10,1.356132);
   hNCpi0inFVres_stack_7->SetBinError(11,1.016293);
   hNCpi0inFVres_stack_7->SetBinError(12,0.7686322);
   hNCpi0inFVres_stack_7->SetBinError(13,1.17784);
   hNCpi0inFVres_stack_7->SetEntries(50864);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVdis_stack_8->SetBinContent(1,54.38666);
   hNCpi0inFVdis_stack_8->SetBinContent(2,133.1517);
   hNCpi0inFVdis_stack_8->SetBinContent(3,96.11536);
   hNCpi0inFVdis_stack_8->SetBinContent(4,63.90919);
   hNCpi0inFVdis_stack_8->SetBinContent(5,37.8919);
   hNCpi0inFVdis_stack_8->SetBinContent(6,30.59011);
   hNCpi0inFVdis_stack_8->SetBinContent(7,14.57942);
   hNCpi0inFVdis_stack_8->SetBinContent(8,12.94415);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.327402);
   hNCpi0inFVdis_stack_8->SetBinContent(10,5.100299);
   hNCpi0inFVdis_stack_8->SetBinContent(11,3.589984);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.198313);
   hNCpi0inFVdis_stack_8->SetBinContent(13,9.543344);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.446353);
   hNCpi0inFVdis_stack_8->SetBinError(2,3.651987);
   hNCpi0inFVdis_stack_8->SetBinError(3,3.154435);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.860163);
   hNCpi0inFVdis_stack_8->SetBinError(5,2.116741);
   hNCpi0inFVdis_stack_8->SetBinError(6,2.265964);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.539946);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.643434);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.335731);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.9158239);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.8988718);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.755087);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.159964);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.5379428);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.4621902);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.2055988);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.220959);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1708763);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.06834138);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01732447);
   hNCpi0inFVmec_stack_9->SetEntries(40);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hCCpi0inFV_stack_10->SetBinContent(1,46.01841);
   hCCpi0inFV_stack_10->SetBinContent(2,274.4114);
   hCCpi0inFV_stack_10->SetBinContent(3,265.5113);
   hCCpi0inFV_stack_10->SetBinContent(4,193.7251);
   hCCpi0inFV_stack_10->SetBinContent(5,119.6804);
   hCCpi0inFV_stack_10->SetBinContent(6,70.13691);
   hCCpi0inFV_stack_10->SetBinContent(7,43.0931);
   hCCpi0inFV_stack_10->SetBinContent(8,28.66138);
   hCCpi0inFV_stack_10->SetBinContent(9,14.01927);
   hCCpi0inFV_stack_10->SetBinContent(10,11.72632);
   hCCpi0inFV_stack_10->SetBinContent(11,6.348517);
   hCCpi0inFV_stack_10->SetBinContent(12,6.05192);
   hCCpi0inFV_stack_10->SetBinContent(13,15.63316);
   hCCpi0inFV_stack_10->SetBinError(1,3.384785);
   hCCpi0inFV_stack_10->SetBinError(2,8.23906);
   hCCpi0inFV_stack_10->SetBinError(3,8.178497);
   hCCpi0inFV_stack_10->SetBinError(4,7.022773);
   hCCpi0inFV_stack_10->SetBinError(5,5.519808);
   hCCpi0inFV_stack_10->SetBinError(6,4.228574);
   hCCpi0inFV_stack_10->SetBinError(7,3.299505);
   hCCpi0inFV_stack_10->SetBinError(8,2.691902);
   hCCpi0inFV_stack_10->SetBinError(9,1.879803);
   hCCpi0inFV_stack_10->SetBinError(10,1.779422);
   hCCpi0inFV_stack_10->SetBinError(11,1.240045);
   hCCpi0inFV_stack_10->SetBinError(12,1.316999);
   hCCpi0inFV_stack_10->SetBinError(13,1.96177);
   hCCpi0inFV_stack_10->SetEntries(4680);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hNCinFV_stack_11->SetBinContent(1,32.57145);
   hNCinFV_stack_11->SetBinContent(2,145.3343);
   hNCinFV_stack_11->SetBinContent(3,126.0944);
   hNCinFV_stack_11->SetBinContent(4,84.49474);
   hNCinFV_stack_11->SetBinContent(5,49.23626);
   hNCinFV_stack_11->SetBinContent(6,25.46131);
   hNCinFV_stack_11->SetBinContent(7,14.56331);
   hNCinFV_stack_11->SetBinContent(8,12.0809);
   hNCinFV_stack_11->SetBinContent(9,12.31571);
   hNCinFV_stack_11->SetBinContent(10,2.548383);
   hNCinFV_stack_11->SetBinContent(11,3.302435);
   hNCinFV_stack_11->SetBinContent(12,0.7336084);
   hNCinFV_stack_11->SetBinContent(13,6.50417);
   hNCinFV_stack_11->SetBinError(1,2.809623);
   hNCinFV_stack_11->SetBinError(2,6.059171);
   hNCinFV_stack_11->SetBinError(3,5.883319);
   hNCinFV_stack_11->SetBinError(4,4.995767);
   hNCinFV_stack_11->SetBinError(5,4.282073);
   hNCinFV_stack_11->SetBinError(6,3.138983);
   hNCinFV_stack_11->SetBinError(7,2.318916);
   hNCinFV_stack_11->SetBinError(8,2.232264);
   hNCinFV_stack_11->SetBinError(9,2.25616);
   hNCinFV_stack_11->SetBinError(10,0.835543);
   hNCinFV_stack_11->SetBinError(11,1.086028);
   hNCinFV_stack_11->SetBinError(12,0.4394482);
   hNCinFV_stack_11->SetBinError(13,1.520833);
   hNCinFV_stack_11->SetEntries(2180);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hnumuCCinFV_stack_12->SetBinContent(1,18.92966);
   hnumuCCinFV_stack_12->SetBinContent(2,139.4563);
   hnumuCCinFV_stack_12->SetBinContent(3,163.1183);
   hnumuCCinFV_stack_12->SetBinContent(4,130.2222);
   hnumuCCinFV_stack_12->SetBinContent(5,83.13236);
   hnumuCCinFV_stack_12->SetBinContent(6,47.11134);
   hnumuCCinFV_stack_12->SetBinContent(7,22.1216);
   hnumuCCinFV_stack_12->SetBinContent(8,15.02414);
   hnumuCCinFV_stack_12->SetBinContent(9,10.05068);
   hnumuCCinFV_stack_12->SetBinContent(10,5.810095);
   hnumuCCinFV_stack_12->SetBinContent(11,4.634054);
   hnumuCCinFV_stack_12->SetBinContent(12,2.227074);
   hnumuCCinFV_stack_12->SetBinContent(13,11.92336);
   hnumuCCinFV_stack_12->SetBinError(1,2.779351);
   hnumuCCinFV_stack_12->SetBinError(2,7.401201);
   hnumuCCinFV_stack_12->SetBinError(3,7.395846);
   hnumuCCinFV_stack_12->SetBinError(4,6.295703);
   hnumuCCinFV_stack_12->SetBinError(5,5.244183);
   hnumuCCinFV_stack_12->SetBinError(6,3.831937);
   hnumuCCinFV_stack_12->SetBinError(7,3.385983);
   hnumuCCinFV_stack_12->SetBinError(8,2.149063);
   hnumuCCinFV_stack_12->SetBinError(9,1.598716);
   hnumuCCinFV_stack_12->SetBinError(10,1.233994);
   hnumuCCinFV_stack_12->SetBinError(11,1.051679);
   hnumuCCinFV_stack_12->SetBinError(12,0.7188937);
   hnumuCCinFV_stack_12->SetBinError(13,1.768775);
   hnumuCCinFV_stack_12->SetEntries(2561);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hnueCCinFV_stack_13->SetBinContent(1,2.186077);
   hnueCCinFV_stack_13->SetBinContent(2,9.090391);
   hnueCCinFV_stack_13->SetBinContent(3,6.748659);
   hnueCCinFV_stack_13->SetBinContent(4,5.428391);
   hnueCCinFV_stack_13->SetBinContent(5,4.206733);
   hnueCCinFV_stack_13->SetBinContent(6,3.133721);
   hnueCCinFV_stack_13->SetBinContent(7,2.874277);
   hnueCCinFV_stack_13->SetBinContent(8,1.490719);
   hnueCCinFV_stack_13->SetBinContent(9,2.214385);
   hnueCCinFV_stack_13->SetBinContent(10,0.828966);
   hnueCCinFV_stack_13->SetBinContent(11,1.384739);
   hnueCCinFV_stack_13->SetBinContent(12,1.261396);
   hnueCCinFV_stack_13->SetBinContent(13,12.36699);
   hnueCCinFV_stack_13->SetBinError(1,1.403542);
   hnueCCinFV_stack_13->SetBinError(2,1.706986);
   hnueCCinFV_stack_13->SetBinError(3,1.687296);
   hnueCCinFV_stack_13->SetBinError(4,1.295283);
   hnueCCinFV_stack_13->SetBinError(5,1.071632);
   hnueCCinFV_stack_13->SetBinError(6,0.9784578);
   hnueCCinFV_stack_13->SetBinError(7,1.683701);
   hnueCCinFV_stack_13->SetBinError(8,0.6634837);
   hnueCCinFV_stack_13->SetBinError(9,0.7143687);
   hnueCCinFV_stack_13->SetBinError(10,0.4151091);
   hnueCCinFV_stack_13->SetBinError(11,0.8974388);
   hnueCCinFV_stack_13->SetBinError(12,0.5917167);
   hnueCCinFV_stack_13->SetBinError(13,2.620526);
   hnueCCinFV_stack_13->SetEntries(187);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);
   hmcerror__2->SetBinContent(1,793.048);
   hmcerror__2->SetBinContent(2,2301.175);
   hmcerror__2->SetBinContent(3,1474.032);
   hmcerror__2->SetBinContent(4,869.5423);
   hmcerror__2->SetBinContent(5,508.557);
   hmcerror__2->SetBinContent(6,289.2727);
   hmcerror__2->SetBinContent(7,176.5441);
   hmcerror__2->SetBinContent(8,114.1894);
   hmcerror__2->SetBinContent(9,70.17149);
   hmcerror__2->SetBinContent(10,42.25924);
   hmcerror__2->SetBinContent(11,30.02918);
   hmcerror__2->SetBinContent(12,23.70392);
   hmcerror__2->SetBinContent(13,86.58916);
   hmcerror__2->SetBinError(1,219.0889);
   hmcerror__2->SetBinError(2,631.1619);
   hmcerror__2->SetBinError(3,424.0513);
   hmcerror__2->SetBinError(4,227.4467);
   hmcerror__2->SetBinError(5,114.5118);
   hmcerror__2->SetBinError(6,70.49495);
   hmcerror__2->SetBinError(7,57.08513);
   hmcerror__2->SetBinError(8,42.22697);
   hmcerror__2->SetBinError(9,25.42212);
   hmcerror__2->SetBinError(10,22.17259);
   hmcerror__2->SetBinError(11,17.65083);
   hmcerror__2->SetBinError(12,13.92614);
   hmcerror__2->SetBinError(13,26.27898);
   hmcerror__2->SetEntries(7381.09);

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
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3001[12] = {
   895,
   2383,
   1388,
   756,
   422,
   209,
   125,
   70,
   51,
   44,
   25,
   14};
   Double_t _felx3001[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3001[12] = {
   29.91655,
   48.81598,
   37.25587,
   27.49545,
   20.54264,
   14.45683,
   11.18034,
   8.4925,
   7.2725,
   6.7671,
   5.1474,
   3.9102};
   Double_t _fehx3001[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3001[12] = {
   29.91655,
   48.81598,
   37.25587,
   27.49545,
   20.54264,
   14.45683,
   11.18034,
   8.2902,
   7.0686,
   6.5623,
   4.9374,
   3.6898};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1100);
   Graph_Graph3001->SetMinimum(9.08082);
   Graph_Graph3001->SetMaximum(2673.989);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.95#pm0.23","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=3.4/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 6382.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 171.6","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 739.1","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 73.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 676.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  113.2","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  18.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2164.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  463.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.2","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1079.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 508.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 641.8","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 40.8","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_visible_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-154,-0.5333333,1129.333,2.133333);
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
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
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
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3002[12] = {
   0.2762618,
   0.2742781,
   0.2876812,
   0.2615706,
   0.2251699,
   0.2436972,
   0.3233478,
   0.3697975,
   0.3622857,
   0.5246803,
   0.5877893,
   0.5875038};
   Double_t _fehx3002[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3002[12] = {
   0.2762618,
   0.2742781,
   0.2876812,
   0.2615706,
   0.2251699,
   0.2436972,
   0.3233478,
   0.3697975,
   0.3622857,
   0.5246803,
   0.5877893,
   0.5875038};
   grae = new TGraphAsymmErrors(12,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1100);
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
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
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
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3003[12] = {
   0.2564069,
   0.2716841,
   0.2825292,
   0.2552704,
   0.205905,
   0.2022565,
   0.2141397,
   0.2410884,
   0.2626677,
   0.2594353,
   0.2607597,
   0.227717};
   Double_t _fehx3003[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3003[12] = {
   0.2564069,
   0.2716841,
   0.2825292,
   0.2552704,
   0.205905,
   0.2022565,
   0.2141397,
   0.2410884,
   0.2626677,
   0.2594353,
   0.2607597,
   0.227717};
   grae = new TGraphAsymmErrors(12,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1100);
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
   41.66667,
   125,
   208.3333,
   291.6667,
   375,
   458.3333,
   541.6667,
   625,
   708.3333,
   791.6667,
   875,
   958.3333};
   Double_t _fy3004[12] = {
   1.128557,
   1.035558,
   0.9416347,
   0.8694229,
   0.8297988,
   0.7225016,
   0.7080385,
   0.6130164,
   0.7267909,
   1.041192,
   0.8325237,
   0.5906195};
   Double_t _felx3004[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fely3004[12] = {
   0.0377235,
   0.0212135,
   0.0252748,
   0.03162061,
   0.04039397,
   0.04997648,
   0.06332888,
   0.07437202,
   0.103639,
   0.160133,
   0.1714133,
   0.16496};
   Double_t _fehx3004[12] = {
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667,
   41.66667};
   Double_t _fehy3004[12] = {
   0.0377235,
   0.0212135,
   0.0252748,
   0.03162061,
   0.04039397,
   0.04997648,
   0.06332888,
   0.07260041,
   0.1007332,
   0.1552867,
   0.1644201,
   0.155662};
   grae = new TGraphAsymmErrors(12,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1100);
   Graph_Graph3004->SetMinimum(0.3485775);
   Graph_Graph3004->SetMaximum(1.273561);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_visible_energy_all",12,0,1000);

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
   TLine *line = new TLine(0,1,1000,1);
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
