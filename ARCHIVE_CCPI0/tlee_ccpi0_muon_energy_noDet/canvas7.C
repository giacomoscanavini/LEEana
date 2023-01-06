#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Wed Sep 28 16:54:37 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-230.7692,-6.11448,1692.308,676.1328);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   hmc__19->SetBinContent(2,16.62607);
   hmc__19->SetBinContent(3,152.1421);
   hmc__19->SetBinContent(4,300.8129);
   hmc__19->SetBinContent(5,305.724);
   hmc__19->SetBinContent(6,255.6982);
   hmc__19->SetBinContent(7,179.8063);
   hmc__19->SetBinContent(8,133.8385);
   hmc__19->SetBinContent(9,110.6683);
   hmc__19->SetBinContent(10,72.89604);
   hmc__19->SetBinContent(11,62.21498);
   hmc__19->SetBinContent(12,41.19144);
   hmc__19->SetBinContent(13,30.14936);
   hmc__19->SetBinContent(14,25.98251);
   hmc__19->SetBinContent(15,20.54444);
   hmc__19->SetBinContent(16,16.2064);
   hmc__19->SetBinContent(17,11.77626);
   hmc__19->SetBinContent(18,6.05882);
   hmc__19->SetBinContent(19,3.69087);
   hmc__19->SetBinContent(20,5.323521);
   hmc__19->SetBinContent(21,3.049808);
   hmc__19->SetBinContent(22,1.717185);
   hmc__19->SetBinContent(23,0.9785053);
   hmc__19->SetBinContent(24,1.217248);
   hmc__19->SetBinContent(25,0.5884556);
   hmc__19->SetBinContent(26,1.807394);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,4.414493);
   hmc__19->SetBinError(3,34.04436);
   hmc__19->SetBinError(4,70.53614);
   hmc__19->SetBinError(5,74.29208);
   hmc__19->SetBinError(6,65.86355);
   hmc__19->SetBinError(7,45.33855);
   hmc__19->SetBinError(8,32.50872);
   hmc__19->SetBinError(9,27.96386);
   hmc__19->SetBinError(10,19.98194);
   hmc__19->SetBinError(11,17.24749);
   hmc__19->SetBinError(12,11.05784);
   hmc__19->SetBinError(13,8.632808);
   hmc__19->SetBinError(14,7.592822);
   hmc__19->SetBinError(15,6.449686);
   hmc__19->SetBinError(16,5.798246);
   hmc__19->SetBinError(17,3.941645);
   hmc__19->SetBinError(18,2.346516);
   hmc__19->SetBinError(19,1.809964);
   hmc__19->SetBinError(20,2.296623);
   hmc__19->SetBinError(21,1.305853);
   hmc__19->SetBinError(22,1.044443);
   hmc__19->SetBinError(23,0.762488);
   hmc__19->SetBinError(24,0.9946243);
   hmc__19->SetBinError(25,0.5441755);
   hmc__19->SetBinError(26,1.114851);
   hmc__19->SetMinimum(-6.11448);
   hmc__19->SetMaximum(642.0204);
   hmc__19->SetEntries(1759.741);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",25,0,1500);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(321.0102);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(3,0.7336375);
   hbadmatch_stack_1->SetBinContent(4,2.868101);
   hbadmatch_stack_1->SetBinContent(5,3.267895);
   hbadmatch_stack_1->SetBinContent(6,1.568773);
   hbadmatch_stack_1->SetBinContent(7,0.4079483);
   hbadmatch_stack_1->SetBinContent(8,0.6803553);
   hbadmatch_stack_1->SetBinContent(9,0.536893);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(14,0.1950248);
   hbadmatch_stack_1->SetBinError(3,0.4394482);
   hbadmatch_stack_1->SetBinError(4,0.8538596);
   hbadmatch_stack_1->SetBinError(5,0.8998417);
   hbadmatch_stack_1->SetBinError(6,0.7448905);
   hbadmatch_stack_1->SetBinError(7,0.2886456);
   hbadmatch_stack_1->SetBinError(8,0.4810838);
   hbadmatch_stack_1->SetBinError(9,0.3929602);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(14,0.1950249);
   hbadmatch_stack_1->SetEntries(43);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   hext_stack_2->SetBinContent(3,2.428004);
   hext_stack_2->SetBinContent(4,2.028585);
   hext_stack_2->SetBinContent(5,1.137595);
   hext_stack_2->SetBinContent(6,3.864046);
   hext_stack_2->SetBinContent(7,0.6487947);
   hext_stack_2->SetBinContent(9,0.3243973);
   hext_stack_2->SetBinContent(11,2.566457);
   hext_stack_2->SetBinError(3,1.028599);
   hext_stack_2->SetBinError(4,0.8315593);
   hext_stack_2->SetBinError(5,0.6602113);
   hext_stack_2->SetBinError(6,1.437918);
   hext_stack_2->SetBinError(7,0.4587671);
   hext_stack_2->SetBinError(9,0.3243973);
   hext_stack_2->SetBinError(11,1.283228);
   hext_stack_2->SetEntries(30);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   houtFV_stack_4->SetBinContent(3,1.520682);
   houtFV_stack_4->SetBinContent(4,0.1950248);
   houtFV_stack_4->SetBinContent(5,0.1967154);
   houtFV_stack_4->SetBinContent(7,0.6803553);
   houtFV_stack_4->SetBinContent(8,0.1950248);
   houtFV_stack_4->SetBinContent(9,0.3401776);
   houtFV_stack_4->SetBinContent(10,0.1967154);
   houtFV_stack_4->SetBinError(3,0.6408582);
   houtFV_stack_4->SetBinError(4,0.1950249);
   houtFV_stack_4->SetBinError(5,0.1967154);
   houtFV_stack_4->SetBinError(7,0.4810838);
   houtFV_stack_4->SetBinError(8,0.1950249);
   houtFV_stack_4->SetBinError(9,0.3401776);
   houtFV_stack_4->SetBinError(10,0.1967154);
   houtFV_stack_4->SetEntries(13);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.1021583);
   hNCpi0inFVqe_stack_6->SetEntries(2);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.5244642);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.001848);
   hNCpi0inFVres_stack_7->SetBinContent(4,9.642762);
   hNCpi0inFVres_stack_7->SetBinContent(5,6.959095);
   hNCpi0inFVres_stack_7->SetBinContent(6,4.040862);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.081608);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.5645);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.882075);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.03620218);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.0470988);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.1213757);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.4978064);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.163982);
   hNCpi0inFVres_stack_7->SetBinError(3,0.962451);
   hNCpi0inFVres_stack_7->SetBinError(4,1.072571);
   hNCpi0inFVres_stack_7->SetBinError(5,0.9038291);
   hNCpi0inFVres_stack_7->SetBinError(6,0.7665229);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7337287);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4366295);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4664239);
   hNCpi0inFVres_stack_7->SetBinError(10,0.03620218);
   hNCpi0inFVres_stack_7->SetBinError(11,0.0470988);
   hNCpi0inFVres_stack_7->SetBinError(12,0.1213757);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4978064);
   hNCpi0inFVres_stack_7->SetBinError(14,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(660);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.576296);
   hNCpi0inFVdis_stack_8->SetBinContent(3,6.28907);
   hNCpi0inFVdis_stack_8->SetBinContent(4,7.248549);
   hNCpi0inFVdis_stack_8->SetBinContent(5,5.868469);
   hNCpi0inFVdis_stack_8->SetBinContent(6,3.850755);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.728315);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.027724);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.4219983);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.5504728);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.8570021);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.1917055);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.1388872);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.7759442);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.7815765);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.8484441);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.8639958);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7690391);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.35532);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3010446);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.1570577);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.347983);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.582225);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.1048608);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.09197996);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.1974492);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.03945654);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.02516554);
   hNCpi0inFVdis_stack_8->SetEntries(528);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,10.42217);
   hCCpi0inFV_stack_10->SetBinContent(3,101.0929);
   hCCpi0inFV_stack_10->SetBinContent(4,236.43);
   hCCpi0inFV_stack_10->SetBinContent(5,244.9113);
   hCCpi0inFV_stack_10->SetBinContent(6,203.7656);
   hCCpi0inFV_stack_10->SetBinContent(7,152.433);
   hCCpi0inFV_stack_10->SetBinContent(8,116.5695);
   hCCpi0inFV_stack_10->SetBinContent(9,97.8432);
   hCCpi0inFV_stack_10->SetBinContent(10,66.49321);
   hCCpi0inFV_stack_10->SetBinContent(11,54.63645);
   hCCpi0inFV_stack_10->SetBinContent(12,36.67014);
   hCCpi0inFV_stack_10->SetBinContent(13,27.40881);
   hCCpi0inFV_stack_10->SetBinContent(14,22.89401);
   hCCpi0inFV_stack_10->SetBinContent(15,18.20834);
   hCCpi0inFV_stack_10->SetBinContent(16,15.05316);
   hCCpi0inFV_stack_10->SetBinContent(17,10.55176);
   hCCpi0inFV_stack_10->SetBinContent(18,6.05882);
   hCCpi0inFV_stack_10->SetBinContent(19,3.466255);
   hCCpi0inFV_stack_10->SetBinContent(20,4.788319);
   hCCpi0inFV_stack_10->SetBinContent(21,2.48775);
   hCCpi0inFV_stack_10->SetBinContent(22,1.717185);
   hCCpi0inFV_stack_10->SetBinContent(23,0.9785053);
   hCCpi0inFV_stack_10->SetBinContent(24,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(25,0.3917402);
   hCCpi0inFV_stack_10->SetBinContent(26,1.807394);
   hCCpi0inFV_stack_10->SetBinError(2,1.668742);
   hCCpi0inFV_stack_10->SetBinError(3,5.019538);
   hCCpi0inFV_stack_10->SetBinError(4,7.664555);
   hCCpi0inFV_stack_10->SetBinError(5,7.875798);
   hCCpi0inFV_stack_10->SetBinError(6,7.199314);
   hCCpi0inFV_stack_10->SetBinError(7,6.168001);
   hCCpi0inFV_stack_10->SetBinError(8,5.401402);
   hCCpi0inFV_stack_10->SetBinError(9,5.058858);
   hCCpi0inFV_stack_10->SetBinError(10,4.029916);
   hCCpi0inFV_stack_10->SetBinError(11,3.747449);
   hCCpi0inFV_stack_10->SetBinError(12,3.009409);
   hCCpi0inFV_stack_10->SetBinError(13,2.601196);
   hCCpi0inFV_stack_10->SetBinError(14,2.410271);
   hCCpi0inFV_stack_10->SetBinError(15,2.212371);
   hCCpi0inFV_stack_10->SetBinError(16,1.932983);
   hCCpi0inFV_stack_10->SetBinError(17,1.630043);
   hCCpi0inFV_stack_10->SetBinError(18,1.257364);
   hCCpi0inFV_stack_10->SetBinError(19,0.9617119);
   hCCpi0inFV_stack_10->SetBinError(20,1.1106);
   hCCpi0inFV_stack_10->SetBinError(21,0.856383);
   hCCpi0inFV_stack_10->SetBinError(22,0.6217711);
   hCCpi0inFV_stack_10->SetBinError(23,0.4376048);
   hCCpi0inFV_stack_10->SetBinError(24,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(25,0.2770047);
   hCCpi0inFV_stack_10->SetBinError(26,0.7084844);
   hCCpi0inFV_stack_10->SetEntries(6147);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(2,1.462145);
   hNCinFV_stack_11->SetBinContent(3,4.199863);
   hNCinFV_stack_11->SetBinContent(4,4.784938);
   hNCinFV_stack_11->SetBinContent(5,2.982615);
   hNCinFV_stack_11->SetBinContent(6,2.053982);
   hNCinFV_stack_11->SetBinContent(7,0.9303237);
   hNCinFV_stack_11->SetBinContent(8,0.536893);
   hNCinFV_stack_11->SetBinContent(10,0.3401776);
   hNCinFV_stack_11->SetBinContent(11,0.3401776);
   hNCinFV_stack_11->SetBinError(2,0.6198731);
   hNCinFV_stack_11->SetBinError(3,1.057357);
   hNCinFV_stack_11->SetBinError(4,1.110004);
   hNCinFV_stack_11->SetBinError(5,0.8556548);
   hNCinFV_stack_11->SetBinError(6,0.7078105);
   hNCinFV_stack_11->SetBinError(7,0.4814682);
   hNCinFV_stack_11->SetBinError(8,0.3929602);
   hNCinFV_stack_11->SetBinError(10,0.3401776);
   hNCinFV_stack_11->SetBinError(11,0.3401776);
   hNCinFV_stack_11->SetEntries(73);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,2.64099);
   hnumuCCinFV_stack_12->SetBinContent(3,26.58102);
   hnumuCCinFV_stack_12->SetBinContent(4,36.39769);
   hnumuCCinFV_stack_12->SetBinContent(5,39.90638);
   hnumuCCinFV_stack_12->SetBinContent(6,36.01721);
   hnumuCCinFV_stack_12->SetBinContent(7,19.35903);
   hnumuCCinFV_stack_12->SetBinContent(8,13.06953);
   hnumuCCinFV_stack_12->SetBinContent(9,10.31951);
   hnumuCCinFV_stack_12->SetBinContent(10,5.279256);
   hnumuCCinFV_stack_12->SetBinContent(11,3.57107);
   hnumuCCinFV_stack_12->SetBinContent(12,4.208223);
   hnumuCCinFV_stack_12->SetBinContent(13,2.103854);
   hnumuCCinFV_stack_12->SetBinContent(14,2.642209);
   hnumuCCinFV_stack_12->SetBinContent(15,2.280298);
   hnumuCCinFV_stack_12->SetBinContent(16,1.125349);
   hnumuCCinFV_stack_12->SetBinContent(17,1.196595);
   hnumuCCinFV_stack_12->SetBinContent(19,0.1967154);
   hnumuCCinFV_stack_12->SetBinContent(20,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(21,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(25,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(2,0.7892468);
   hnumuCCinFV_stack_12->SetBinError(3,3.004073);
   hnumuCCinFV_stack_12->SetBinError(4,3.085839);
   hnumuCCinFV_stack_12->SetBinError(5,3.245427);
   hnumuCCinFV_stack_12->SetBinError(6,3.08128);
   hnumuCCinFV_stack_12->SetBinError(7,2.278425);
   hnumuCCinFV_stack_12->SetBinError(8,1.811425);
   hnumuCCinFV_stack_12->SetBinError(9,1.620703);
   hnumuCCinFV_stack_12->SetBinError(10,1.171874);
   hnumuCCinFV_stack_12->SetBinError(11,0.9206376);
   hnumuCCinFV_stack_12->SetBinError(12,0.9916824);
   hnumuCCinFV_stack_12->SetBinError(13,0.6792233);
   hnumuCCinFV_stack_12->SetBinError(14,0.8278545);
   hnumuCCinFV_stack_12->SetBinError(15,0.7431116);
   hnumuCCinFV_stack_12->SetBinError(16,0.5194673);
   hnumuCCinFV_stack_12->SetBinError(17,0.5483553);
   hnumuCCinFV_stack_12->SetBinError(19,0.1967154);
   hnumuCCinFV_stack_12->SetBinError(20,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(21,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(25,0.1967154);
   hnumuCCinFV_stack_12->SetEntries(885);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(3,1.26712);
   hnueCCinFV_stack_13->SetBinContent(4,1.217248);
   hnueCCinFV_stack_13->SetBinContent(5,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(6,0.536893);
   hnueCCinFV_stack_13->SetBinContent(7,0.536893);
   hnueCCinFV_stack_13->SetBinContent(8,0.1950248);
   hnueCCinFV_stack_13->SetBinError(3,0.5883944);
   hnueCCinFV_stack_13->SetBinError(4,0.6211758);
   hnueCCinFV_stack_13->SetBinError(5,0.2770047);
   hnueCCinFV_stack_13->SetBinError(6,0.3929602);
   hnueCCinFV_stack_13->SetBinError(7,0.3929602);
   hnueCCinFV_stack_13->SetBinError(8,0.1950249);
   hnueCCinFV_stack_13->SetEntries(16);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);
   hmcerror__20->SetBinContent(2,16.62607);
   hmcerror__20->SetBinContent(3,152.1421);
   hmcerror__20->SetBinContent(4,300.8129);
   hmcerror__20->SetBinContent(5,305.724);
   hmcerror__20->SetBinContent(6,255.6982);
   hmcerror__20->SetBinContent(7,179.8063);
   hmcerror__20->SetBinContent(8,133.8385);
   hmcerror__20->SetBinContent(9,110.6683);
   hmcerror__20->SetBinContent(10,72.89604);
   hmcerror__20->SetBinContent(11,62.21498);
   hmcerror__20->SetBinContent(12,41.19144);
   hmcerror__20->SetBinContent(13,30.14936);
   hmcerror__20->SetBinContent(14,25.98251);
   hmcerror__20->SetBinContent(15,20.54444);
   hmcerror__20->SetBinContent(16,16.2064);
   hmcerror__20->SetBinContent(17,11.77626);
   hmcerror__20->SetBinContent(18,6.05882);
   hmcerror__20->SetBinContent(19,3.69087);
   hmcerror__20->SetBinContent(20,5.323521);
   hmcerror__20->SetBinContent(21,3.049808);
   hmcerror__20->SetBinContent(22,1.717185);
   hmcerror__20->SetBinContent(23,0.9785053);
   hmcerror__20->SetBinContent(24,1.217248);
   hmcerror__20->SetBinContent(25,0.5884556);
   hmcerror__20->SetBinContent(26,1.807394);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,4.414493);
   hmcerror__20->SetBinError(3,34.04436);
   hmcerror__20->SetBinError(4,70.53614);
   hmcerror__20->SetBinError(5,74.29208);
   hmcerror__20->SetBinError(6,65.86355);
   hmcerror__20->SetBinError(7,45.33855);
   hmcerror__20->SetBinError(8,32.50872);
   hmcerror__20->SetBinError(9,27.96386);
   hmcerror__20->SetBinError(10,19.98194);
   hmcerror__20->SetBinError(11,17.24749);
   hmcerror__20->SetBinError(12,11.05784);
   hmcerror__20->SetBinError(13,8.632808);
   hmcerror__20->SetBinError(14,7.592822);
   hmcerror__20->SetBinError(15,6.449686);
   hmcerror__20->SetBinError(16,5.798246);
   hmcerror__20->SetBinError(17,3.941645);
   hmcerror__20->SetBinError(18,2.346516);
   hmcerror__20->SetBinError(19,1.809964);
   hmcerror__20->SetBinError(20,2.296623);
   hmcerror__20->SetBinError(21,1.305853);
   hmcerror__20->SetBinError(22,1.044443);
   hmcerror__20->SetBinError(23,0.762488);
   hmcerror__20->SetBinError(24,0.9946243);
   hmcerror__20->SetBinError(25,0.5441755);
   hmcerror__20->SetBinError(26,1.114851);
   hmcerror__20->SetEntries(1759.741);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[25] = {
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
   Double_t _fy3025[25] = {
   0,
   22,
   117,
   271,
   256,
   266,
   175,
   118,
   79,
   57,
   51,
   43,
   24,
   17,
   10,
   7,
   7,
   8,
   2,
   3,
   3,
   2,
   0,
   1,
   0};
   Double_t _felx3025[25] = {
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
   Double_t _fely3025[25] = {
   0,
   4.8417,
   10.81665,
   16.46208,
   16,
   16.30951,
   13.22876,
   10.86278,
   9.0124,
   7.679,
   7.2725,
   6.6917,
   5.0476,
   4.2835,
   3.34883,
   2.85954,
   2.85954,
   3.0307,
   2,
   2.143368,
   2.143368,
   2,
   0,
   1,
   0};
   Double_t _fehx3025[25] = {
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
   Double_t _fehy3025[25] = {
   1.1478,
   4.6299,
   10.81665,
   16.46208,
   16,
   16.30951,
   13.22876,
   10.86278,
   8.8105,
   7.4757,
   7.0686,
   6.4868,
   4.837,
   4.0673,
   3.1179,
   2.61053,
   2.61053,
   2.7896,
   1.51917,
   1.72422,
   1.72422,
   1.51917,
   1.1478,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1650);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(316.2083);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.0/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1539.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.5","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 13.0","F");

   ci = 1513;
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

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 3.3","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.1","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  35.4","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  30.1","F");

   ci = 1519;
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

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1436.5","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 17.6","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 208.2","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.1","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_Np_bnb_12_Emuon_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[25] = {
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
   Double_t _fy3026[25] = {
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
   Double_t _felx3026[25] = {
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
   Double_t _fely3026[25] = {
   0,
   0.2655163,
   0.2237669,
   0.2344851,
   0.2430038,
   0.2575832,
   0.2521522,
   0.2428951,
   0.2526819,
   0.2741156,
   0.2772241,
   0.2684498,
   0.2863347,
   0.2922282,
   0.3139383,
   0.357775,
   0.3347112,
   0.3872893,
   0.4903895,
   0.4314105,
   0.4281755,
   0.6082299,
   0.7792375,
   0.8171089,
   0.924752};
   Double_t _fehx3026[25] = {
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
   Double_t _fehy3026[25] = {
   0,
   0.2655163,
   0.2237669,
   0.2344851,
   0.2430038,
   0.2575832,
   0.2521522,
   0.2428951,
   0.2526819,
   0.2741156,
   0.2772241,
   0.2684498,
   0.2863347,
   0.2922282,
   0.3139383,
   0.357775,
   0.3347112,
   0.3872893,
   0.4903895,
   0.4314105,
   0.4281755,
   0.6082299,
   0.7792375,
   0.8171089,
   0.924752};
   grae = new TGraphAsymmErrors(25,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1650);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Muon Energy [MeV]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[25] = {
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
   Double_t _fy3027[25] = {
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
   Double_t _felx3027[25] = {
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
   Double_t _fely3027[25] = {
   0,
   0.2655163,
   0.2237669,
   0.2344851,
   0.2430038,
   0.2575832,
   0.2521522,
   0.2428951,
   0.2526819,
   0.2741156,
   0.2772241,
   0.2684498,
   0.2863347,
   0.2922282,
   0.3139383,
   0.357775,
   0.3347112,
   0.3872893,
   0.4903895,
   0.4314105,
   0.4281755,
   0.6082299,
   0.7792375,
   0.8171089,
   0.924752};
   Double_t _fehx3027[25] = {
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
   Double_t _fehy3027[25] = {
   0,
   0.2655163,
   0.2237669,
   0.2344851,
   0.2430038,
   0.2575832,
   0.2521522,
   0.2428951,
   0.2526819,
   0.2741156,
   0.2772241,
   0.2684498,
   0.2863347,
   0.2922282,
   0.3139383,
   0.357775,
   0.3347112,
   0.3872893,
   0.4903895,
   0.4314105,
   0.4281755,
   0.6082299,
   0.7792375,
   0.8171089,
   0.924752};
   grae = new TGraphAsymmErrors(25,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1650);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[25] = {
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
   Double_t _fy3028[25] = {
   10,
   1.323223,
   0.769018,
   0.9008922,
   0.8373566,
   1.040289,
   0.9732697,
   0.8816596,
   0.7138452,
   0.7819355,
   0.8197383,
   1.043906,
   0.7960368,
   0.6542862,
   0.4867497,
   0.431928,
   0.5944164,
   1.320389,
   0.5418777,
   0.5635368,
   0.9836685,
   1.164697,
   0,
   0.8215251,
   0};
   Double_t _felx3028[25] = {
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
   Double_t _fely3028[25] = {
   0,
   0.2912113,
   0.07109574,
   0.05472531,
   0.05233479,
   0.06378422,
   0.07357227,
   0.08116335,
   0.08143618,
   0.1053418,
   0.1168931,
   0.1624536,
   0.1674198,
   0.1648609,
   0.1630042,
   0.1764451,
   0.2428225,
   0.5002129,
   0.5418777,
   0.4026222,
   0.7027878,
   1.164697,
   0,
   0.8215251,
   0};
   Double_t _fehx3028[25] = {
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
   Double_t _fehy3028[25] = {
   0,
   0.2784723,
   0.07109574,
   0.05472531,
   0.05233479,
   0.06378422,
   0.07357227,
   0.08116335,
   0.07961181,
   0.1025529,
   0.1136157,
   0.1574793,
   0.1604346,
   0.1565399,
   0.1517637,
   0.1610802,
   0.2216774,
   0.4604197,
   0.4116021,
   0.3238871,
   0.5653536,
   0.8846861,
   1.173014,
   1.117036,
   1.95053};
   grae = new TGraphAsymmErrors(25,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1650);
   Graph_Graph3028->SetMinimum(0);
   Graph_Graph3028->SetMaximum(11);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","CCpi0_FC_Np_bnb_12_Emuon_all",25,0,1500);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
