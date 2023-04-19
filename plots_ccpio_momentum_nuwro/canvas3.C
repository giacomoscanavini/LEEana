#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas3()
{
//=========Macro generated from canvas: canvas3/channel3
//=========  (Sun Mar 12 14:46:53 2023) by ROOT version 6.26/00
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
   pad1->Range(-184.6154,-24.71827,1353.846,2733.32);
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
   
   TH1F *hmc__7 = new TH1F("hmc__7","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hmc__7->SetBinContent(1,431.5727);
   hmc__7->SetBinContent(2,1235.914);
   hmc__7->SetBinContent(3,1021.139);
   hmc__7->SetBinContent(4,724.8397);
   hmc__7->SetBinContent(5,450.6598);
   hmc__7->SetBinContent(6,250.4306);
   hmc__7->SetBinContent(7,126.1084);
   hmc__7->SetBinContent(8,95.33218);
   hmc__7->SetBinContent(9,52.37439);
   hmc__7->SetBinContent(10,39.26755);
   hmc__7->SetBinContent(11,26.78758);
   hmc__7->SetBinContent(12,20.57359);
   hmc__7->SetBinContent(13,92.1566);
   hmc__7->SetBinError(1,100.5856);
   hmc__7->SetBinError(2,294.0037);
   hmc__7->SetBinError(3,265.4966);
   hmc__7->SetBinError(4,189.2707);
   hmc__7->SetBinError(5,107.8405);
   hmc__7->SetBinError(6,57.45794);
   hmc__7->SetBinError(7,28.3308);
   hmc__7->SetBinError(8,22.23911);
   hmc__7->SetBinError(9,12.38901);
   hmc__7->SetBinError(10,8.190661);
   hmc__7->SetBinError(11,7.002546);
   hmc__7->SetBinError(12,5.082679);
   hmc__7->SetBinError(13,17.94959);
   hmc__7->SetMinimum(-24.71827);
   hmc__7->SetMaximum(2595.419);
   hmc__7->SetEntries(4518.398);
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
   
   TH1F *hs3_stack_3 = new TH1F("hs3_stack_3","",12,0,1200);
   hs3_stack_3->SetMinimum(-4.784113e-08);
   hs3_stack_3->SetMaximum(1297.709);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.2333977);
   hbadmatch_stack_1->SetBinContent(2,3.609077);
   hbadmatch_stack_1->SetBinContent(3,3.905118);
   hbadmatch_stack_1->SetBinContent(4,2.565583);
   hbadmatch_stack_1->SetBinContent(5,2.395233);
   hbadmatch_stack_1->SetBinContent(6,2.463658);
   hbadmatch_stack_1->SetBinContent(7,1.378679);
   hbadmatch_stack_1->SetBinContent(8,0.5184094);
   hbadmatch_stack_1->SetBinContent(9,0.8918287);
   hbadmatch_stack_1->SetBinContent(10,0.5374587);
   hbadmatch_stack_1->SetBinContent(11,0.2333977);
   hbadmatch_stack_1->SetBinContent(13,0.6793121);
   hbadmatch_stack_1->SetBinError(1,0.2333977);
   hbadmatch_stack_1->SetBinError(2,1.187828);
   hbadmatch_stack_1->SetBinError(3,1.093498);
   hbadmatch_stack_1->SetBinError(4,0.8940112);
   hbadmatch_stack_1->SetBinError(5,0.9563217);
   hbadmatch_stack_1->SetBinError(6,1.002259);
   hbadmatch_stack_1->SetBinError(7,0.7186042);
   hbadmatch_stack_1->SetBinError(8,0.5184094);
   hbadmatch_stack_1->SetBinError(9,0.6306181);
   hbadmatch_stack_1->SetBinError(10,0.5374588);
   hbadmatch_stack_1->SetBinError(11,0.2333977);
   hbadmatch_stack_1->SetBinError(13,0.5033032);
   hbadmatch_stack_1->SetEntries(60);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,5.859169);
   houtFV_stack_4->SetBinContent(2,10.41876);
   houtFV_stack_4->SetBinContent(3,14.60458);
   houtFV_stack_4->SetBinContent(4,6.026923);
   houtFV_stack_4->SetBinContent(5,6.346173);
   houtFV_stack_4->SetBinContent(6,3.863356);
   houtFV_stack_4->SetBinContent(7,2.490026);
   houtFV_stack_4->SetBinContent(8,0.4459144);
   houtFV_stack_4->SetBinContent(9,0.2333977);
   houtFV_stack_4->SetBinContent(10,0.2333977);
   houtFV_stack_4->SetBinContent(11,0.9199441);
   houtFV_stack_4->SetBinContent(12,0.4459144);
   houtFV_stack_4->SetBinContent(13,1.166989);
   houtFV_stack_4->SetBinError(1,2.314893);
   houtFV_stack_4->SetBinError(2,1.764479);
   houtFV_stack_4->SetBinError(3,2.255642);
   houtFV_stack_4->SetBinError(4,1.534373);
   houtFV_stack_4->SetBinError(5,1.50093);
   houtFV_stack_4->SetBinError(6,1.172825);
   houtFV_stack_4->SetBinError(7,1.019157);
   houtFV_stack_4->SetBinError(8,0.4459143);
   houtFV_stack_4->SetBinError(9,0.2333977);
   houtFV_stack_4->SetBinError(10,0.2333977);
   houtFV_stack_4->SetBinError(11,0.6508025);
   houtFV_stack_4->SetBinError(12,0.4459143);
   houtFV_stack_4->SetBinError(13,0.5218932);
   houtFV_stack_4->SetEntries(167);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.04681417);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.03310261);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.256225);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.256225);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.256225);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2562251);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2562251);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2562251);
   hNCpi0inFVqe_stack_6->SetEntries(5);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.631411);
   hNCpi0inFVres_stack_7->SetBinContent(2,13.65382);
   hNCpi0inFVres_stack_7->SetBinContent(3,10.79236);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.649783);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.805913);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.200683);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.117286);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.042092);
   hNCpi0inFVres_stack_7->SetBinContent(9,1.033496);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.6779631);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.4217381);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.06620523);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.099701);
   hNCpi0inFVres_stack_7->SetBinError(1,0.637226);
   hNCpi0inFVres_stack_7->SetBinError(2,1.452548);
   hNCpi0inFVres_stack_7->SetBinError(3,1.293118);
   hNCpi0inFVres_stack_7->SetBinError(4,0.9519243);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7478471);
   hNCpi0inFVres_stack_7->SetBinError(6,0.4326517);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5465949);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3857915);
   hNCpi0inFVres_stack_7->SetBinError(9,0.4535638);
   hNCpi0inFVres_stack_7->SetBinError(10,0.3698398);
   hNCpi0inFVres_stack_7->SetBinError(11,0.2667025);
   hNCpi0inFVres_stack_7->SetBinError(12,0.04681417);
   hNCpi0inFVres_stack_7->SetBinError(13,0.4559733);
   hNCpi0inFVres_stack_7->SetEntries(829);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,4.870838);
   hNCpi0inFVdis_stack_8->SetBinContent(2,9.321218);
   hNCpi0inFVdis_stack_8->SetBinContent(3,8.145435);
   hNCpi0inFVdis_stack_8->SetBinContent(4,5.273683);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.523507);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.960763);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.596634);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.108297);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.2979235);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.7441684);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.1986157);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.2979235);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.389422);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.8888772);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.131565);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.164413);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.9074663);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6779784);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6640982);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.6549601);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3886215);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.09930784);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3727909);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.08108451);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.09930784);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6923027);
   hNCpi0inFVdis_stack_8->SetEntries(673);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,291.6397);
   hCCpi0inFV_stack_10->SetBinContent(2,886.7505);
   hCCpi0inFV_stack_10->SetBinContent(3,715.1057);
   hCCpi0inFV_stack_10->SetBinContent(4,542.2305);
   hCCpi0inFV_stack_10->SetBinContent(5,306.7161);
   hCCpi0inFV_stack_10->SetBinContent(6,156.4849);
   hCCpi0inFV_stack_10->SetBinContent(7,70.62723);
   hCCpi0inFV_stack_10->SetBinContent(8,57.59749);
   hCCpi0inFV_stack_10->SetBinContent(9,28.26328);
   hCCpi0inFV_stack_10->SetBinContent(10,19.86001);
   hCCpi0inFV_stack_10->SetBinContent(11,13.97967);
   hCCpi0inFV_stack_10->SetBinContent(12,12.69526);
   hCCpi0inFV_stack_10->SetBinContent(13,50.69321);
   hCCpi0inFV_stack_10->SetBinError(1,10.08402);
   hCCpi0inFV_stack_10->SetBinError(2,17.55195);
   hCCpi0inFV_stack_10->SetBinError(3,15.70733);
   hCCpi0inFV_stack_10->SetBinError(4,13.736);
   hCCpi0inFV_stack_10->SetBinError(5,10.27208);
   hCCpi0inFV_stack_10->SetBinError(6,7.299228);
   hCCpi0inFV_stack_10->SetBinError(7,4.962726);
   hCCpi0inFV_stack_10->SetBinError(8,4.526845);
   hCCpi0inFV_stack_10->SetBinError(9,3.134811);
   hCCpi0inFV_stack_10->SetBinError(10,2.699206);
   hCCpi0inFV_stack_10->SetBinError(11,2.218422);
   hCCpi0inFV_stack_10->SetBinError(12,2.160695);
   hCCpi0inFV_stack_10->SetBinError(13,4.153812);
   hCCpi0inFV_stack_10->SetEntries(10146);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,3.184044);
   hNCinFV_stack_11->SetBinContent(2,7.747592);
   hNCinFV_stack_11->SetBinContent(3,11.14415);
   hNCinFV_stack_11->SetBinContent(4,3.650839);
   hNCinFV_stack_11->SetBinContent(5,4.796947);
   hNCinFV_stack_11->SetBinContent(6,3.204925);
   hNCinFV_stack_11->SetBinContent(7,1.146108);
   hNCinFV_stack_11->SetBinContent(8,0.2333977);
   hNCinFV_stack_11->SetBinContent(9,1.146108);
   hNCinFV_stack_11->SetBinContent(10,0.4667954);
   hNCinFV_stack_11->SetBinContent(11,1.125226);
   hNCinFV_stack_11->SetBinContent(12,0.6793121);
   hNCinFV_stack_11->SetBinContent(13,2.271334);
   hNCinFV_stack_11->SetBinError(1,1.059342);
   hNCinFV_stack_11->SetBinError(2,1.631303);
   hNCinFV_stack_11->SetBinError(3,1.981847);
   hNCinFV_stack_11->SetBinError(4,1.109574);
   hNCinFV_stack_11->SetBinError(5,1.262306);
   hNCinFV_stack_11->SetBinError(6,1.016029);
   hNCinFV_stack_11->SetBinError(7,0.601883);
   hNCinFV_stack_11->SetBinError(8,0.2333977);
   hNCinFV_stack_11->SetBinError(9,0.601883);
   hNCinFV_stack_11->SetBinError(10,0.3300742);
   hNCinFV_stack_11->SetBinError(11,0.6724238);
   hNCinFV_stack_11->SetBinError(12,0.5033032);
   hNCinFV_stack_11->SetBinError(13,0.9024504);
   hNCinFV_stack_11->SetEntries(132);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,121.8877);
   hnumuCCinFV_stack_12->SetBinContent(2,302.9244);
   hnumuCCinFV_stack_12->SetBinContent(3,256.4961);
   hnumuCCinFV_stack_12->SetBinContent(4,157.2509);
   hnumuCCinFV_stack_12->SetBinContent(5,118.8691);
   hnumuCCinFV_stack_12->SetBinContent(6,77.42694);
   hnumuCCinFV_stack_12->SetBinContent(7,45.51903);
   hnumuCCinFV_stack_12->SetBinContent(8,33.70726);
   hnumuCCinFV_stack_12->SetBinContent(9,19.78533);
   hnumuCCinFV_stack_12->SetBinContent(10,16.74775);
   hnumuCCinFV_stack_12->SetBinContent(11,8.99628);
   hnumuCCinFV_stack_12->SetBinContent(12,6.388968);
   hnumuCCinFV_stack_12->SetBinContent(13,32.01899);
   hnumuCCinFV_stack_12->SetBinError(1,7.180368);
   hnumuCCinFV_stack_12->SetBinError(2,11.33297);
   hnumuCCinFV_stack_12->SetBinError(3,11.15617);
   hnumuCCinFV_stack_12->SetBinError(4,7.377336);
   hnumuCCinFV_stack_12->SetBinError(5,6.602316);
   hnumuCCinFV_stack_12->SetBinError(6,5.163528);
   hnumuCCinFV_stack_12->SetBinError(7,4.224906);
   hnumuCCinFV_stack_12->SetBinError(8,3.957537);
   hnumuCCinFV_stack_12->SetBinError(9,2.691102);
   hnumuCCinFV_stack_12->SetBinError(10,2.564981);
   hnumuCCinFV_stack_12->SetBinError(11,1.817352);
   hnumuCCinFV_stack_12->SetBinError(12,1.467828);
   hnumuCCinFV_stack_12->SetBinError(13,3.252839);
   hnumuCCinFV_stack_12->SetEntries(3767);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(2,1.232072);
   hnueCCinFV_stack_13->SetBinContent(3,0.9127098);
   hnueCCinFV_stack_13->SetBinContent(4,1.125226);
   hnueCCinFV_stack_13->SetBinContent(5,2.950646);
   hnueCCinFV_stack_13->SetBinContent(6,1.82542);
   hnueCCinFV_stack_13->SetBinContent(7,0.2333977);
   hnueCCinFV_stack_13->SetBinContent(8,0.6793121);
   hnueCCinFV_stack_13->SetBinContent(9,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(11,0.9127098);
   hnueCCinFV_stack_13->SetBinContent(13,1.804538);
   hnueCCinFV_stack_13->SetBinError(1,0.2333977);
   hnueCCinFV_stack_13->SetBinError(2,0.747568);
   hnueCCinFV_stack_13->SetBinError(3,0.554787);
   hnueCCinFV_stack_13->SetBinError(4,0.6724238);
   hnueCCinFV_stack_13->SetBinError(5,1.033311);
   hnueCCinFV_stack_13->SetBinError(6,0.7845873);
   hnueCCinFV_stack_13->SetBinError(7,0.2333977);
   hnueCCinFV_stack_13->SetBinError(8,0.5033032);
   hnueCCinFV_stack_13->SetBinError(9,0.3300742);
   hnueCCinFV_stack_13->SetBinError(11,0.554787);
   hnueCCinFV_stack_13->SetBinError(13,0.8399213);
   hnueCCinFV_stack_13->SetEntries(38);

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
   
   TH1F *hmcerror__8 = new TH1F("hmcerror__8","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);
   hmcerror__8->SetBinContent(1,431.5727);
   hmcerror__8->SetBinContent(2,1235.914);
   hmcerror__8->SetBinContent(3,1021.139);
   hmcerror__8->SetBinContent(4,724.8397);
   hmcerror__8->SetBinContent(5,450.6598);
   hmcerror__8->SetBinContent(6,250.4306);
   hmcerror__8->SetBinContent(7,126.1084);
   hmcerror__8->SetBinContent(8,95.33218);
   hmcerror__8->SetBinContent(9,52.37439);
   hmcerror__8->SetBinContent(10,39.26755);
   hmcerror__8->SetBinContent(11,26.78758);
   hmcerror__8->SetBinContent(12,20.57359);
   hmcerror__8->SetBinContent(13,92.1566);
   hmcerror__8->SetBinError(1,100.5856);
   hmcerror__8->SetBinError(2,294.0037);
   hmcerror__8->SetBinError(3,265.4966);
   hmcerror__8->SetBinError(4,189.2707);
   hmcerror__8->SetBinError(5,107.8405);
   hmcerror__8->SetBinError(6,57.45794);
   hmcerror__8->SetBinError(7,28.3308);
   hmcerror__8->SetBinError(8,22.23911);
   hmcerror__8->SetBinError(9,12.38901);
   hmcerror__8->SetBinError(10,8.190661);
   hmcerror__8->SetBinError(11,7.002546);
   hmcerror__8->SetBinError(12,5.082679);
   hmcerror__8->SetBinError(13,17.94959);
   hmcerror__8->SetEntries(4518.398);

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
   
   Double_t _fx3009[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3009[12] = {
   354,
   1159,
   828,
   542,
   360,
   240,
   131,
   73,
   53,
   39,
   23,
   18};
   Double_t _felx3009[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3009[12] = {
   18.81489,
   34.04409,
   28.77499,
   23.28089,
   18.97367,
   15.49193,
   11.44552,
   8.6693,
   7.4105,
   6.3813,
   4.9457,
   4.4008};
   Double_t _fehx3009[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3009[12] = {
   18.81489,
   34.04409,
   28.77499,
   23.28089,
   18.97367,
   15.49193,
   11.44552,
   8.4672,
   7.2068,
   6.1757,
   4.7346,
   4.1858};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,1320);
   Graph_Graph3009->SetMinimum(12.23928);
   Graph_Graph3009->SetMaximum(1310.989);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.85#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=16.2/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 3820.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 18.7","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 51.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  47.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  39.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 3102.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 38.5","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 1166.0","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 10.6","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_bnb_4_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas3->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-184.8,-0.5333333,1355.2,2.133333);
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
   
   Double_t _fx3010[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3010[12] = {
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
   Double_t _felx3010[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3010[12] = {
   0.2330676,
   0.2378837,
   0.2600004,
   0.2611208,
   0.2392948,
   0.2294365,
   0.2246544,
   0.2332802,
   0.2365471,
   0.208586,
   0.2614102,
   0.2470487};
   Double_t _fehx3010[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3010[12] = {
   0.2330676,
   0.2378837,
   0.2600004,
   0.2611208,
   0.2392948,
   0.2294365,
   0.2246544,
   0.2332802,
   0.2365471,
   0.208586,
   0.2614102,
   0.2470487};
   grae = new TGraphAsymmErrors(12,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,1320);
   Graph_Graph3010->SetMinimum(0);
   Graph_Graph3010->SetMaximum(2);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineWidth(2);
   Graph_Graph3010->SetMarkerStyle(20);
   Graph_Graph3010->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3010->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3011[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3011[12] = {
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
   Double_t _felx3011[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3011[12] = {
   0.2330676,
   0.2378837,
   0.2600004,
   0.2611208,
   0.2392948,
   0.2294365,
   0.2246544,
   0.2332802,
   0.2365471,
   0.208586,
   0.2614102,
   0.2470487};
   Double_t _fehx3011[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3011[12] = {
   0.2330676,
   0.2378837,
   0.2600004,
   0.2611208,
   0.2392948,
   0.2294365,
   0.2246544,
   0.2332802,
   0.2365471,
   0.208586,
   0.2614102,
   0.2470487};
   grae = new TGraphAsymmErrors(12,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,1320);
   Graph_Graph3011->SetMinimum(0);
   Graph_Graph3011->SetMaximum(2);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineWidth(2);
   Graph_Graph3011->SetMarkerStyle(20);
   Graph_Graph3011->GetXaxis()->SetRange(1,91);
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
   
   Double_t _fx3012[12] = {
   50,
   150,
   250,
   350,
   450,
   550,
   650,
   750,
   850,
   950,
   1050,
   1150};
   Double_t _fy3012[12] = {
   0.8202557,
   0.9377678,
   0.8108591,
   0.7477516,
   0.7988288,
   0.9583492,
   1.038789,
   0.7657436,
   1.011945,
   0.9931865,
   0.8586069,
   0.8749082};
   Double_t _felx3012[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fely3012[12] = {
   0.0435961,
   0.02754569,
   0.0281793,
   0.03211868,
   0.04210198,
   0.06186117,
   0.09075941,
   0.09093782,
   0.1414909,
   0.1625082,
   0.1846266,
   0.2139053};
   Double_t _fehx3012[12] = {
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50,
   50};
   Double_t _fehy3012[12] = {
   0.0435961,
   0.02754569,
   0.0281793,
   0.03211868,
   0.04210198,
   0.06186117,
   0.09075941,
   0.08881786,
   0.1376016,
   0.1572724,
   0.1767461,
   0.203455};
   grae = new TGraphAsymmErrors(12,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,1320);
   Graph_Graph3012->SetMinimum(0.6120572);
   Graph_Graph3012->SetMaximum(1.199405);
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
   
   TH1F *hist__9 = new TH1F("hist__9","CCpi0_PC_bnb_4_pi0_momentum_all",12,0,1200);

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
   TLine *line = new TLine(0,1,1200,1);
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
   entry=leg->AddEntry("","Stat. + XS","F");

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
