#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sun Jan 15 16:41:43 2023) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",216,172,1200,900);
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
   pad1->Range(-184.6154,-13.50898,1353.846,1493.808);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hmc__19->SetBinContent(1,234.1115);
   hmc__19->SetBinContent(2,675.4488);
   hmc__19->SetBinContent(3,545.0175);
   hmc__19->SetBinContent(4,354.2018);
   hmc__19->SetBinContent(5,231.615);
   hmc__19->SetBinContent(6,130.0512);
   hmc__19->SetBinContent(7,70.36103);
   hmc__19->SetBinContent(8,46.07751);
   hmc__19->SetBinContent(9,28.20341);
   hmc__19->SetBinContent(10,22.5121);
   hmc__19->SetBinContent(11,21.09961);
   hmc__19->SetBinContent(12,18.43879);
   hmc__19->SetBinContent(13,167.504);
   hmc__19->SetBinError(1,56.83127);
   hmc__19->SetBinError(2,174.7005);
   hmc__19->SetBinError(3,160.3353);
   hmc__19->SetBinError(4,102.546);
   hmc__19->SetBinError(5,69.55058);
   hmc__19->SetBinError(6,39.73863);
   hmc__19->SetBinError(7,22.01861);
   hmc__19->SetBinError(8,17.5367);
   hmc__19->SetBinError(9,11.521);
   hmc__19->SetBinError(10,12.37086);
   hmc__19->SetBinError(11,14.16531);
   hmc__19->SetBinError(12,10.87163);
   hmc__19->SetBinError(13,51.6024);
   hmc__19->SetMinimum(-13.50898);
   hmc__19->SetMaximum(1418.442);
   hmc__19->SetEntries(2518.982);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",12,0,1200);
   hs7_stack_7->SetMinimum(-1.00941e-09);
   hs7_stack_7->SetMaximum(709.2212);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,10.77437);
   hbadmatch_stack_1->SetBinContent(2,14.82575);
   hbadmatch_stack_1->SetBinContent(3,11.14386);
   hbadmatch_stack_1->SetBinContent(4,7.007908);
   hbadmatch_stack_1->SetBinContent(5,2.738129);
   hbadmatch_stack_1->SetBinContent(6,2.072417);
   hbadmatch_stack_1->SetBinContent(7,1.628007);
   hbadmatch_stack_1->SetBinContent(8,1.984238);
   hbadmatch_stack_1->SetBinContent(9,0.6793165);
   hbadmatch_stack_1->SetBinContent(10,0.6793121);
   hbadmatch_stack_1->SetBinContent(11,0.7355864);
   hbadmatch_stack_1->SetBinContent(12,1.532668);
   hbadmatch_stack_1->SetBinContent(13,3.71219);
   hbadmatch_stack_1->SetBinError(1,2.068144);
   hbadmatch_stack_1->SetBinError(2,3.057045);
   hbadmatch_stack_1->SetBinError(3,2.127259);
   hbadmatch_stack_1->SetBinError(4,1.537113);
   hbadmatch_stack_1->SetBinError(5,0.9609192);
   hbadmatch_stack_1->SetBinError(6,0.9498797);
   hbadmatch_stack_1->SetBinError(7,0.7610488);
   hbadmatch_stack_1->SetBinError(8,0.9972485);
   hbadmatch_stack_1->SetBinError(9,0.5033032);
   hbadmatch_stack_1->SetBinError(10,0.5033032);
   hbadmatch_stack_1->SetBinError(11,0.5537761);
   hbadmatch_stack_1->SetBinError(12,0.7342765);
   hbadmatch_stack_1->SetBinError(13,1.183699);
   hbadmatch_stack_1->SetEntries(180);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,8.943458);
   houtFV_stack_4->SetBinContent(2,13.73695);
   houtFV_stack_4->SetBinContent(3,20.9632);
   houtFV_stack_4->SetBinContent(4,11.27687);
   houtFV_stack_4->SetBinContent(5,8.137308);
   houtFV_stack_4->SetBinContent(6,4.776066);
   houtFV_stack_4->SetBinContent(7,3.225806);
   houtFV_stack_4->SetBinContent(8,0.9656683);
   houtFV_stack_4->SetBinContent(9,1.592022);
   houtFV_stack_4->SetBinContent(10,1.846301);
   houtFV_stack_4->SetBinContent(11,0.9127098);
   houtFV_stack_4->SetBinContent(12,1.646512);
   houtFV_stack_4->SetBinContent(13,10.25447);
   houtFV_stack_4->SetBinError(1,1.746109);
   houtFV_stack_4->SetBinError(2,2.190209);
   houtFV_stack_4->SetBinError(3,2.61885);
   houtFV_stack_4->SetBinError(4,1.996975);
   houtFV_stack_4->SetBinError(5,1.662787);
   houtFV_stack_4->SetBinError(6,1.297424);
   houtFV_stack_4->SetBinError(7,0.9707853);
   houtFV_stack_4->SetBinError(8,0.5573089);
   houtFV_stack_4->SetBinError(9,0.7490679);
   houtFV_stack_4->SetBinError(10,0.7250425);
   houtFV_stack_4->SetBinError(11,0.554787);
   houtFV_stack_4->SetBinError(12,0.7827308);
   houtFV_stack_4->SetBinError(13,1.958099);
   houtFV_stack_4->SetEntries(289);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.1655131);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.1324105);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.6203538);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.4879434);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.6779631);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.1324105);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.09930784);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.09930784);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1324105);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4965392);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.0740197);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.278756);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2707799);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.3698398);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.05733541);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.05733541);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.06620523);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.03310261);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1282059);
   hNCpi0inFVcoh_stack_5->SetEntries(67);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,2.456908);
   hNCpi0inFVqe_stack_6->SetBinContent(2,5.970539);
   hNCpi0inFVqe_stack_6->SetBinContent(3,3.110365);
   hNCpi0inFVqe_stack_6->SetBinContent(4,2.720448);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.7196617);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.3555329);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.2317183);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.06620523);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.3224303);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.777271);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.5028308);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.9990067);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.5758815);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.700172);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2845914);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2625617);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.08758128);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.04681417);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2604666);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.03310261);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3742577);
   hNCpi0inFVqe_stack_6->SetEntries(285);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,96.8531);
   hNCpi0inFVres_stack_7->SetBinContent(2,361.5858);
   hNCpi0inFVres_stack_7->SetBinContent(3,303.6436);
   hNCpi0inFVres_stack_7->SetBinContent(4,190.2686);
   hNCpi0inFVres_stack_7->SetBinContent(5,126.4066);
   hNCpi0inFVres_stack_7->SetBinContent(6,57.47929);
   hNCpi0inFVres_stack_7->SetBinContent(7,28.08747);
   hNCpi0inFVres_stack_7->SetBinContent(8,16.77278);
   hNCpi0inFVres_stack_7->SetBinContent(9,11.00086);
   hNCpi0inFVres_stack_7->SetBinContent(10,7.890491);
   hNCpi0inFVres_stack_7->SetBinContent(11,9.187527);
   hNCpi0inFVres_stack_7->SetBinContent(12,4.623209);
   hNCpi0inFVres_stack_7->SetBinContent(13,58.76901);
   hNCpi0inFVres_stack_7->SetBinError(1,3.803747);
   hNCpi0inFVres_stack_7->SetBinError(2,7.332147);
   hNCpi0inFVres_stack_7->SetBinError(3,6.784571);
   hNCpi0inFVres_stack_7->SetBinError(4,5.29617);
   hNCpi0inFVres_stack_7->SetBinError(5,4.435915);
   hNCpi0inFVres_stack_7->SetBinError(6,2.901731);
   hNCpi0inFVres_stack_7->SetBinError(7,1.975496);
   hNCpi0inFVres_stack_7->SetBinError(8,1.544231);
   hNCpi0inFVres_stack_7->SetBinError(9,1.180343);
   hNCpi0inFVres_stack_7->SetBinError(10,1.030325);
   hNCpi0inFVres_stack_7->SetBinError(11,1.226659);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8170473);
   hNCpi0inFVres_stack_7->SetBinError(13,2.948121);
   hNCpi0inFVres_stack_7->SetEntries(21010);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,22.03353);
   hNCpi0inFVdis_stack_8->SetBinContent(2,58.96891);
   hNCpi0inFVdis_stack_8->SetBinContent(3,44.51331);
   hNCpi0inFVdis_stack_8->SetBinContent(4,31.93213);
   hNCpi0inFVdis_stack_8->SetBinContent(5,22.95784);
   hNCpi0inFVdis_stack_8->SetBinContent(6,14.40658);
   hNCpi0inFVdis_stack_8->SetBinContent(7,6.236641);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.986944);
   hNCpi0inFVdis_stack_8->SetBinContent(9,3.481809);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.051081);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.306913);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.563531);
   hNCpi0inFVdis_stack_8->SetBinContent(13,17.12703);
   hNCpi0inFVdis_stack_8->SetBinError(1,1.736707);
   hNCpi0inFVdis_stack_8->SetBinError(2,2.910216);
   hNCpi0inFVdis_stack_8->SetBinError(3,2.482219);
   hNCpi0inFVdis_stack_8->SetBinError(4,2.158407);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.871925);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.480535);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.8821251);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6891993);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7179442);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.5445865);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3969904);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6541231);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.637749);
   hNCpi0inFVdis_stack_8->SetEntries(3969);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.4879434);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.8103737);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.06620523);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.2707799);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.3757188);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.03310261);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.04681417);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.03310261);
   hNCpi0inFVmec_stack_9->SetEntries(23);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,36.94174);
   hCCpi0inFV_stack_10->SetBinContent(2,99.22001);
   hCCpi0inFV_stack_10->SetBinContent(3,77.90436);
   hCCpi0inFV_stack_10->SetBinContent(4,50.1264);
   hCCpi0inFV_stack_10->SetBinContent(5,24.79624);
   hCCpi0inFV_stack_10->SetBinContent(6,22.56654);
   hCCpi0inFV_stack_10->SetBinContent(7,13.0955);
   hCCpi0inFV_stack_10->SetBinContent(8,5.518021);
   hCCpi0inFV_stack_10->SetBinContent(9,3.884237);
   hCCpi0inFV_stack_10->SetBinContent(10,3.650839);
   hCCpi0inFV_stack_10->SetBinContent(11,2.950646);
   hCCpi0inFV_stack_10->SetBinContent(12,1.592022);
   hCCpi0inFV_stack_10->SetBinContent(13,18.40674);
   hCCpi0inFV_stack_10->SetBinError(1,3.566451);
   hCCpi0inFV_stack_10->SetBinError(2,5.898516);
   hCCpi0inFV_stack_10->SetBinError(3,5.211043);
   hCCpi0inFV_stack_10->SetBinError(4,4.158502);
   hCCpi0inFV_stack_10->SetBinError(5,2.808188);
   hCCpi0inFV_stack_10->SetBinError(6,2.816532);
   hCCpi0inFV_stack_10->SetBinError(7,2.2359);
   hCCpi0inFV_stack_10->SetBinError(8,1.291104);
   hCCpi0inFV_stack_10->SetBinError(9,1.133856);
   hCCpi0inFV_stack_10->SetBinError(10,1.109574);
   hCCpi0inFV_stack_10->SetBinError(11,1.033311);
   hCCpi0inFV_stack_10->SetBinError(12,0.7490679);
   hCCpi0inFV_stack_10->SetBinError(13,2.626669);
   hCCpi0inFV_stack_10->SetEntries(1155);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,30.18207);
   hNCinFV_stack_11->SetBinContent(2,64.91051);
   hNCinFV_stack_11->SetBinContent(3,40.52162);
   hNCinFV_stack_11->SetBinContent(4,25.38512);
   hNCinFV_stack_11->SetBinContent(5,17.99992);
   hNCinFV_stack_11->SetBinContent(6,13.18209);
   hNCinFV_stack_11->SetBinContent(7,7.726712);
   hNCinFV_stack_11->SetBinContent(8,5.647013);
   hNCinFV_stack_11->SetBinContent(9,1.146108);
   hNCinFV_stack_11->SetBinContent(10,2.950646);
   hNCinFV_stack_11->SetBinContent(11,2.271334);
   hNCinFV_stack_11->SetBinContent(12,1.804538);
   hNCinFV_stack_11->SetBinContent(13,19.55018);
   hNCinFV_stack_11->SetBinError(1,3.144416);
   hNCinFV_stack_11->SetBinError(2,4.737806);
   hNCinFV_stack_11->SetBinError(3,3.755143);
   hNCinFV_stack_11->SetBinError(4,2.879919);
   hNCinFV_stack_11->SetBinError(5,2.48821);
   hNCinFV_stack_11->SetBinError(6,2.165101);
   hNCinFV_stack_11->SetBinError(7,1.658626);
   hNCinFV_stack_11->SetBinError(8,1.47339);
   hNCinFV_stack_11->SetBinError(9,0.601883);
   hNCinFV_stack_11->SetBinError(10,1.033311);
   hNCinFV_stack_11->SetBinError(11,0.9024504);
   hNCinFV_stack_11->SetBinError(12,0.8399213);
   hNCinFV_stack_11->SetBinError(13,2.632883);
   hNCinFV_stack_11->SetEntries(750);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,24.0798);
   hnumuCCinFV_stack_12->SetBinContent(2,53.69548);
   hnumuCCinFV_stack_12->SetBinContent(3,40.38389);
   hnumuCCinFV_stack_12->SetBinContent(4,34.31701);
   hnumuCCinFV_stack_12->SetBinContent(5,26.35333);
   hnumuCCinFV_stack_12->SetBinContent(6,14.61351);
   hnumuCCinFV_stack_12->SetBinContent(7,9.728858);
   hnumuCCinFV_stack_12->SetBinContent(8,10.49246);
   hnumuCCinFV_stack_12->SetBinContent(9,5.94005);
   hnumuCCinFV_stack_12->SetBinContent(10,2.988586);
   hnumuCCinFV_stack_12->SetBinContent(11,3.701796);
   hnumuCCinFV_stack_12->SetBinContent(12,3.424413);
   hnumuCCinFV_stack_12->SetBinContent(13,33.07214);
   hnumuCCinFV_stack_12->SetBinError(1,3.071323);
   hnumuCCinFV_stack_12->SetBinError(2,4.978501);
   hnumuCCinFV_stack_12->SetBinError(3,3.77631);
   hnumuCCinFV_stack_12->SetBinError(4,3.840419);
   hnumuCCinFV_stack_12->SetBinError(5,3.452239);
   hnumuCCinFV_stack_12->SetBinError(6,3.865831);
   hnumuCCinFV_stack_12->SetBinError(7,1.931746);
   hnumuCCinFV_stack_12->SetBinError(8,2.247184);
   hnumuCCinFV_stack_12->SetBinError(9,1.565922);
   hnumuCCinFV_stack_12->SetBinError(10,0.8674398);
   hnumuCCinFV_stack_12->SetBinError(11,1.118788);
   hnumuCCinFV_stack_12->SetBinError(12,1.266383);
   hnumuCCinFV_stack_12->SetBinError(13,4.001538);
   hnumuCCinFV_stack_12->SetEntries(802);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(1,1.193034);
   hnueCCinFV_stack_13->SetBinContent(2,1.592022);
   hnueCCinFV_stack_13->SetBinContent(3,2.179857);
   hnueCCinFV_stack_13->SetBinContent(4,0.6793121);
   hnueCCinFV_stack_13->SetBinContent(5,0.7618299);
   hnueCCinFV_stack_13->SetBinContent(6,0.4667954);
   hnueCCinFV_stack_13->SetBinContent(7,0.3010144);
   hnueCCinFV_stack_13->SetBinContent(8,0.5117757);
   hnueCCinFV_stack_13->SetBinContent(9,0.4459144);
   hnueCCinFV_stack_13->SetBinContent(12,1.18569);
   hnueCCinFV_stack_13->SetBinContent(13,5.338424);
   hnueCCinFV_stack_13->SetBinError(1,0.698859);
   hnueCCinFV_stack_13->SetBinError(2,0.7490679);
   hnueCCinFV_stack_13->SetBinError(3,1.04135);
   hnueCCinFV_stack_13->SetBinError(4,0.5033032);
   hnueCCinFV_stack_13->SetBinError(5,0.4427125);
   hnueCCinFV_stack_13->SetBinError(6,0.3300742);
   hnueCCinFV_stack_13->SetBinError(7,0.3010144);
   hnueCCinFV_stack_13->SetBinError(8,0.3632751);
   hnueCCinFV_stack_13->SetBinError(9,0.4459143);
   hnueCCinFV_stack_13->SetBinError(12,0.6957252);
   hnueCCinFV_stack_13->SetBinError(13,1.3999);
   hnueCCinFV_stack_13->SetEntries(44);

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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);
   hmcerror__20->SetBinContent(1,234.1115);
   hmcerror__20->SetBinContent(2,675.4488);
   hmcerror__20->SetBinContent(3,545.0175);
   hmcerror__20->SetBinContent(4,354.2018);
   hmcerror__20->SetBinContent(5,231.615);
   hmcerror__20->SetBinContent(6,130.0512);
   hmcerror__20->SetBinContent(7,70.36103);
   hmcerror__20->SetBinContent(8,46.07751);
   hmcerror__20->SetBinContent(9,28.20341);
   hmcerror__20->SetBinContent(10,22.5121);
   hmcerror__20->SetBinContent(11,21.09961);
   hmcerror__20->SetBinContent(12,18.43879);
   hmcerror__20->SetBinContent(13,167.504);
   hmcerror__20->SetBinError(1,56.83127);
   hmcerror__20->SetBinError(2,174.7005);
   hmcerror__20->SetBinError(3,160.3353);
   hmcerror__20->SetBinError(4,102.546);
   hmcerror__20->SetBinError(5,69.55058);
   hmcerror__20->SetBinError(6,39.73863);
   hmcerror__20->SetBinError(7,22.01861);
   hmcerror__20->SetBinError(8,17.5367);
   hmcerror__20->SetBinError(9,11.521);
   hmcerror__20->SetBinError(10,12.37086);
   hmcerror__20->SetBinError(11,14.16531);
   hmcerror__20->SetBinError(12,10.87163);
   hmcerror__20->SetBinError(13,51.6024);
   hmcerror__20->SetEntries(2518.982);

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
   
   Double_t _fx3025[12] = {
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
   Double_t _fy3025[12] = {
   179,
   548,
   392,
   259,
   205,
   106,
   45,
   41,
   29,
   28,
   19,
   15};
   Double_t _felx3025[12] = {
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
   Double_t _fely3025[12] = {
   13.37909,
   23.4094,
   19.79899,
   16.09348,
   14.31782,
   10.29563,
   6.8416,
   6.5384,
   5.5285,
   5.4358,
   4.5151,
   4.0385};
   Double_t _fehx3025[12] = {
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
   Double_t _fehy3025[12] = {
   13.37909,
   23.4094,
   19.79899,
   16.09348,
   14.31782,
   10.29563,
   6.637,
   6.3331,
   5.3201,
   5.2271,
   4.3011,
   3.8197};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1320);
   Graph_Graph3025->SetMinimum(9.86535);
   Graph_Graph3025->SetMaximum(627.4542);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.78#pm0.20","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.0/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1866.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 55.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 0.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 78.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  2.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  16.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1213.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  214.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.4","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 342.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 213.7","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 229.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 9.3","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
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
   
   Double_t _fx3026[12] = {
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
   Double_t _fy3026[12] = {
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
   Double_t _felx3026[12] = {
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
   Double_t _fely3026[12] = {
   0.242753,
   0.2586437,
   0.2941837,
   0.2895128,
   0.3002853,
   0.3055613,
   0.3129376,
   0.3805912,
   0.4084968,
   0.5495206,
   0.6713541,
   0.5896065};
   Double_t _fehx3026[12] = {
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
   Double_t _fehy3026[12] = {
   0.242753,
   0.2586437,
   0.2941837,
   0.2895128,
   0.3002853,
   0.3055613,
   0.3129376,
   0.3805912,
   0.4084968,
   0.5495206,
   0.6713541,
   0.5896065};
   grae = new TGraphAsymmErrors(12,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1320);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
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
   
   Double_t _fx3027[12] = {
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
   Double_t _fy3027[12] = {
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
   Double_t _felx3027[12] = {
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
   Double_t _fely3027[12] = {
   0.2143445,
   0.2361281,
   0.2744769,
   0.26872,
   0.2562109,
   0.2590418,
   0.2310497,
   0.2263896,
   0.2638738,
   0.2559287,
   0.2398509,
   0.2345624};
   Double_t _fehx3027[12] = {
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
   Double_t _fehy3027[12] = {
   0.2143445,
   0.2361281,
   0.2744769,
   0.26872,
   0.2562109,
   0.2590418,
   0.2310497,
   0.2263896,
   0.2638738,
   0.2559287,
   0.2398509,
   0.2345624};
   grae = new TGraphAsymmErrors(12,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1320);
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
   
   Double_t _fx3028[12] = {
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
   Double_t _fy3028[12] = {
   0.764593,
   0.8113124,
   0.7192429,
   0.7312217,
   0.8850894,
   0.8150634,
   0.6395586,
   0.8898049,
   1.028244,
   1.243776,
   0.9004904,
   0.8135026};
   Double_t _felx3028[12] = {
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
   Double_t _fely3028[12] = {
   0.05714836,
   0.03465755,
   0.03632725,
   0.0454359,
   0.06181733,
   0.07916595,
   0.09723564,
   0.1419,
   0.1960224,
   0.2414613,
   0.2139897,
   0.219022};
   Double_t _fehx3028[12] = {
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
   Double_t _fehy3028[12] = {
   0.05714836,
   0.03465755,
   0.03632725,
   0.0454359,
   0.06181733,
   0.07916595,
   0.09432778,
   0.1374445,
   0.1886332,
   0.2321907,
   0.2038473,
   0.2071557};
   grae = new TGraphAsymmErrors(12,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1320);
   Graph_Graph3028->SetMinimum(0.4489586);
   Graph_Graph3028->SetMaximum(1.569331);
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
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_6_pi0_momentum_all",12,0,1200);

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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
