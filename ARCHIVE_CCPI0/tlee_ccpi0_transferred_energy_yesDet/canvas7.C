#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Wed Sep 28 15:03:38 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",86,109,1200,900);
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
   pad1->Range(-276.9231,-4.550677,2030.769,503.209);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmc__19->SetBinContent(0,0.02516554);
   hmc__19->SetBinContent(2,2.322929);
   hmc__19->SetBinContent(3,26.65764);
   hmc__19->SetBinContent(4,117.6598);
   hmc__19->SetBinContent(5,196.9253);
   hmc__19->SetBinContent(6,226.0078);
   hmc__19->SetBinContent(7,227.5338);
   hmc__19->SetBinContent(8,206.9267);
   hmc__19->SetBinContent(9,163.4264);
   hmc__19->SetBinContent(10,145.7909);
   hmc__19->SetBinContent(11,108.3474);
   hmc__19->SetBinContent(12,89.96093);
   hmc__19->SetBinContent(13,69.9609);
   hmc__19->SetBinContent(14,48.3969);
   hmc__19->SetBinContent(15,30.85963);
   hmc__19->SetBinContent(16,24.82738);
   hmc__19->SetBinContent(17,19.21116);
   hmc__19->SetBinContent(18,16.42294);
   hmc__19->SetBinContent(19,10.42444);
   hmc__19->SetBinContent(20,8.337546);
   hmc__19->SetBinContent(21,20.68379);
   hmc__19->SetBinError(0,0.02516554);
   hmc__19->SetBinError(1,0.3895343);
   hmc__19->SetBinError(2,5.667461);
   hmc__19->SetBinError(3,17.1604);
   hmc__19->SetBinError(4,47.26345);
   hmc__19->SetBinError(5,66.72724);
   hmc__19->SetBinError(6,74.51549);
   hmc__19->SetBinError(7,75.99716);
   hmc__19->SetBinError(8,68.68222);
   hmc__19->SetBinError(9,55.46889);
   hmc__19->SetBinError(10,65.2823);
   hmc__19->SetBinError(11,38.44067);
   hmc__19->SetBinError(12,34.63226);
   hmc__19->SetBinError(13,30.03818);
   hmc__19->SetBinError(14,24.93362);
   hmc__19->SetBinError(15,17.46423);
   hmc__19->SetBinError(16,17.62399);
   hmc__19->SetBinError(17,12.32878);
   hmc__19->SetBinError(18,12.91025);
   hmc__19->SetBinError(19,10.43051);
   hmc__19->SetBinError(20,12.59163);
   hmc__19->SetBinError(21,15.51243);
   hmc__19->SetMinimum(-4.550677);
   hmc__19->SetMaximum(477.821);
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
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,0,1800);
   hs7_stack_7->SetMinimum(-1.150846e-08);
   hs7_stack_7->SetMaximum(238.9105);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hbadmatch_stack_1->SetBinContent(5,1.073786);
   hbadmatch_stack_1->SetBinContent(7,1.01717);
   hbadmatch_stack_1->SetBinContent(8,1.386496);
   hbadmatch_stack_1->SetBinContent(9,0.5352025);
   hbadmatch_stack_1->SetBinContent(10,1.164028);
   hbadmatch_stack_1->SetBinContent(11,0.9303237);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinContent(13,0.3917402);
   hbadmatch_stack_1->SetBinContent(14,0.536893);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinContent(16,1.177033);
   hbadmatch_stack_1->SetBinContent(17,1.025423);
   hbadmatch_stack_1->SetBinContent(18,0.1967154);
   hbadmatch_stack_1->SetBinContent(21,0.3401776);
   hbadmatch_stack_1->SetBinError(5,0.5557297);
   hbadmatch_stack_1->SetBinError(7,0.4560143);
   hbadmatch_stack_1->SetBinError(8,0.5803184);
   hbadmatch_stack_1->SetBinError(9,0.3921167);
   hbadmatch_stack_1->SetBinError(10,0.5351781);
   hbadmatch_stack_1->SetBinError(11,0.4814682);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
   hbadmatch_stack_1->SetBinError(13,0.2770047);
   hbadmatch_stack_1->SetBinError(14,0.3929602);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
   hbadmatch_stack_1->SetBinError(16,0.6914696);
   hbadmatch_stack_1->SetBinError(17,0.460434);
   hbadmatch_stack_1->SetBinError(18,0.1967154);
   hbadmatch_stack_1->SetBinError(21,0.3401776);
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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hext_stack_2->SetBinContent(6,2.890854);
   hext_stack_2->SetBinContent(7,0.3243973);
   hext_stack_2->SetBinContent(8,1.461993);
   hext_stack_2->SetBinContent(9,1.297589);
   hext_stack_2->SetBinContent(10,0.6487947);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.7309963);
   hext_stack_2->SetBinContent(13,3.208071);
   hext_stack_2->SetBinContent(14,0.3243973);
   hext_stack_2->SetBinContent(16,0.7309963);
   hext_stack_2->SetBinContent(17,0.3243973);
   hext_stack_2->SetBinContent(18,0.7309963);
   hext_stack_2->SetBinError(6,1.323597);
   hext_stack_2->SetBinError(7,0.3243973);
   hext_stack_2->SetBinError(8,0.7356036);
   hext_stack_2->SetBinError(9,0.6487947);
   hext_stack_2->SetBinError(10,0.4587671);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.5201503);
   hext_stack_2->SetBinError(13,1.434693);
   hext_stack_2->SetBinError(14,0.3243973);
   hext_stack_2->SetBinError(16,0.5201503);
   hext_stack_2->SetBinError(17,0.3243973);
   hext_stack_2->SetBinError(18,0.5201503);
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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   houtFV_stack_4->SetBinContent(5,0.3401776);
   houtFV_stack_4->SetBinContent(6,0.536893);
   houtFV_stack_4->SetBinContent(7,0.3401776);
   houtFV_stack_4->SetBinContent(8,0.5352025);
   houtFV_stack_4->SetBinContent(9,0.5352025);
   houtFV_stack_4->SetBinContent(11,0.3900497);
   houtFV_stack_4->SetBinContent(13,0.6469922);
   houtFV_stack_4->SetBinError(5,0.3401776);
   houtFV_stack_4->SetBinError(6,0.3929602);
   houtFV_stack_4->SetBinError(7,0.3401776);
   houtFV_stack_4->SetBinError(8,0.3921167);
   houtFV_stack_4->SetBinError(9,0.3921167);
   houtFV_stack_4->SetBinError(11,0.2758068);
   houtFV_stack_4->SetBinError(13,0.3766765);
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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.1021583);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1021583);
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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVres_stack_7->SetBinContent(2,0.0750488);
   hNCpi0inFVres_stack_7->SetBinContent(3,0.3539551);
   hNCpi0inFVres_stack_7->SetBinContent(4,1.027139);
   hNCpi0inFVres_stack_7->SetBinContent(5,2.601513);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.703911);
   hNCpi0inFVres_stack_7->SetBinContent(7,3.01483);
   hNCpi0inFVres_stack_7->SetBinContent(8,4.487492);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.819704);
   hNCpi0inFVres_stack_7->SetBinContent(10,4.52009);
   hNCpi0inFVres_stack_7->SetBinContent(11,3.902381);
   hNCpi0inFVres_stack_7->SetBinContent(12,1.619591);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.402403);
   hNCpi0inFVres_stack_7->SetBinContent(14,1.21516);
   hNCpi0inFVres_stack_7->SetBinContent(15,1.510597);
   hNCpi0inFVres_stack_7->SetBinContent(16,0.9401989);
   hNCpi0inFVres_stack_7->SetBinContent(17,0.4984246);
   hNCpi0inFVres_stack_7->SetBinContent(18,0.2647452);
   hNCpi0inFVres_stack_7->SetBinContent(19,0.3867158);
   hNCpi0inFVres_stack_7->SetBinContent(21,0.08369996);
   hNCpi0inFVres_stack_7->SetBinError(2,0.0750488);
   hNCpi0inFVres_stack_7->SetBinError(3,0.1236929);
   hNCpi0inFVres_stack_7->SetBinError(4,0.2516888);
   hNCpi0inFVres_stack_7->SetBinError(5,0.4777234);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6176603);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4835747);
   hNCpi0inFVres_stack_7->SetBinError(8,0.7127326);
   hNCpi0inFVres_stack_7->SetBinError(9,0.6426259);
   hNCpi0inFVres_stack_7->SetBinError(10,0.8726836);
   hNCpi0inFVres_stack_7->SetBinError(11,0.8455595);
   hNCpi0inFVres_stack_7->SetBinError(12,0.3845745);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5838511);
   hNCpi0inFVres_stack_7->SetBinError(14,0.4063054);
   hNCpi0inFVres_stack_7->SetBinError(15,0.5387914);
   hNCpi0inFVres_stack_7->SetBinError(16,0.5691442);
   hNCpi0inFVres_stack_7->SetBinError(17,0.2384313);
   hNCpi0inFVres_stack_7->SetBinError(18,0.12858);
   hNCpi0inFVres_stack_7->SetBinError(19,0.2287519);
   hNCpi0inFVres_stack_7->SetBinError(21,0.04832419);
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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.0327757);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.5089586);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.748809);
   hNCpi0inFVdis_stack_8->SetBinContent(6,1.280981);
   hNCpi0inFVdis_stack_8->SetBinContent(7,2.066132);
   hNCpi0inFVdis_stack_8->SetBinContent(8,3.347673);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.564253);
   hNCpi0inFVdis_stack_8->SetBinContent(10,3.93264);
   hNCpi0inFVdis_stack_8->SetBinContent(11,2.565974);
   hNCpi0inFVdis_stack_8->SetBinContent(12,3.104585);
   hNCpi0inFVdis_stack_8->SetBinContent(13,2.518139);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.340458);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.058366);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.7531874);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9456657);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.1115999);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.8612798);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.7151467);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.6554859);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.02516554);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.02323348);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.1681254);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4569721);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.3025137);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4628099);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.6267959);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.7247694);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7365499);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.5030346);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.6240065);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.6224958);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3193307);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3968106);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.2682643);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.3032674);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6159523);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3702249);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.2404119);
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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hCCpi0inFV_stack_10->SetBinContent(2,0.1967154);
   hCCpi0inFV_stack_10->SetBinContent(3,20.90703);
   hCCpi0inFV_stack_10->SetBinContent(4,103.2469);
   hCCpi0inFV_stack_10->SetBinContent(5,171.6061);
   hCCpi0inFV_stack_10->SetBinContent(6,191.7038);
   hCCpi0inFV_stack_10->SetBinContent(7,195.2592);
   hCCpi0inFV_stack_10->SetBinContent(8,167.0873);
   hCCpi0inFV_stack_10->SetBinContent(9,130.7968);
   hCCpi0inFV_stack_10->SetBinContent(10,115.169);
   hCCpi0inFV_stack_10->SetBinContent(11,84.73743);
   hCCpi0inFV_stack_10->SetBinContent(12,72.05695);
   hCCpi0inFV_stack_10->SetBinContent(13,50.66777);
   hCCpi0inFV_stack_10->SetBinContent(14,36.19273);
   hCCpi0inFV_stack_10->SetBinContent(15,23.94903);
   hCCpi0inFV_stack_10->SetBinContent(16,17.33236);
   hCCpi0inFV_stack_10->SetBinContent(17,15.14844);
   hCCpi0inFV_stack_10->SetBinContent(18,12.86649);
   hCCpi0inFV_stack_10->SetBinContent(19,7.569147);
   hCCpi0inFV_stack_10->SetBinContent(20,5.96523);
   hCCpi0inFV_stack_10->SetBinContent(21,15.83833);
   hCCpi0inFV_stack_10->SetBinError(2,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(3,2.266743);
   hCCpi0inFV_stack_10->SetBinError(4,5.118322);
   hCCpi0inFV_stack_10->SetBinError(5,6.530819);
   hCCpi0inFV_stack_10->SetBinError(6,6.932641);
   hCCpi0inFV_stack_10->SetBinError(7,7.051442);
   hCCpi0inFV_stack_10->SetBinError(8,6.462543);
   hCCpi0inFV_stack_10->SetBinError(9,5.741085);
   hCCpi0inFV_stack_10->SetBinError(10,5.401362);
   hCCpi0inFV_stack_10->SetBinError(11,4.601998);
   hCCpi0inFV_stack_10->SetBinError(12,4.270143);
   hCCpi0inFV_stack_10->SetBinError(13,3.655797);
   hCCpi0inFV_stack_10->SetBinError(14,3.083494);
   hCCpi0inFV_stack_10->SetBinError(15,2.415458);
   hCCpi0inFV_stack_10->SetBinError(16,2.103921);
   hCCpi0inFV_stack_10->SetBinError(17,1.9631);
   hCCpi0inFV_stack_10->SetBinError(18,1.796053);
   hCCpi0inFV_stack_10->SetBinError(19,1.387406);
   hCCpi0inFV_stack_10->SetBinError(20,1.210079);
   hCCpi0inFV_stack_10->SetBinError(21,1.972448);
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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hNCinFV_stack_11->SetBinContent(3,0.1967154);
   hNCinFV_stack_11->SetBinContent(4,1.752451);
   hNCinFV_stack_11->SetBinContent(5,0.3900497);
   hNCinFV_stack_11->SetBinContent(6,1.660551);
   hNCinFV_stack_11->SetBinContent(7,2.442341);
   hNCinFV_stack_11->SetBinContent(8,2.982615);
   hNCinFV_stack_11->SetBinContent(10,1.270501);
   hNCinFV_stack_11->SetBinContent(11,1.072095);
   hNCinFV_stack_11->SetBinContent(12,1.467217);
   hNCinFV_stack_11->SetBinContent(13,1.073786);
   hNCinFV_stack_11->SetBinContent(14,0.7319179);
   hNCinFV_stack_11->SetBinContent(15,0.7868615);
   hNCinFV_stack_11->SetBinContent(16,0.3401776);
   hNCinFV_stack_11->SetBinContent(20,0.5867651);
   hNCinFV_stack_11->SetBinContent(21,0.8770706);
   hNCinFV_stack_11->SetBinError(3,0.1967154);
   hNCinFV_stack_11->SetBinError(4,0.7345848);
   hNCinFV_stack_11->SetBinError(5,0.2758068);
   hNCinFV_stack_11->SetBinError(6,0.650847);
   hNCinFV_stack_11->SetBinError(7,0.759212);
   hNCinFV_stack_11->SetBinError(8,0.8556548);
   hNCinFV_stack_11->SetBinError(10,0.5895188);
   hNCinFV_stack_11->SetBinError(11,0.5551335);
   hNCinFV_stack_11->SetBinError(12,0.6214735);
   hNCinFV_stack_11->SetBinError(13,0.5557297);
   hNCinFV_stack_11->SetBinError(14,0.438694);
   hNCinFV_stack_11->SetBinError(15,0.3934307);
   hNCinFV_stack_11->SetBinError(16,0.3401776);
   hNCinFV_stack_11->SetBinError(20,0.3387718);
   hNCinFV_stack_11->SetBinError(21,0.5197486);
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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnumuCCinFV_stack_12->SetBinContent(2,2.051165);
   hnumuCCinFV_stack_12->SetBinContent(3,5.167169);
   hnumuCCinFV_stack_12->SetBinContent(4,11.1244);
   hnumuCCinFV_stack_12->SetBinContent(5,19.16479);
   hnumuCCinFV_stack_12->SetBinContent(6,24.89063);
   hnumuCCinFV_stack_12->SetBinContent(7,22.84492);
   hnumuCCinFV_stack_12->SetBinContent(8,24.99893);
   hnumuCCinFV_stack_12->SetBinContent(9,23.87758);
   hnumuCCinFV_stack_12->SetBinContent(10,18.55061);
   hnumuCCinFV_stack_12->SetBinContent(11,14.42477);
   hnumuCCinFV_stack_12->SetBinContent(12,10.64142);
   hnumuCCinFV_stack_12->SetBinContent(13,8.371643);
   hnumuCCinFV_stack_12->SetBinContent(14,7.518445);
   hnumuCCinFV_stack_12->SetBinContent(15,3.214596);
   hnumuCCinFV_stack_12->SetBinContent(16,3.553432);
   hnumuCCinFV_stack_12->SetBinContent(17,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(18,1.715495);
   hnumuCCinFV_stack_12->SetBinContent(19,1.607298);
   hnumuCCinFV_stack_12->SetBinContent(20,0.6803553);
   hnumuCCinFV_stack_12->SetBinContent(21,2.497284);
   hnumuCCinFV_stack_12->SetBinError(2,0.7600651);
   hnumuCCinFV_stack_12->SetBinError(3,1.22005);
   hnumuCCinFV_stack_12->SetBinError(4,1.580229);
   hnumuCCinFV_stack_12->SetBinError(5,2.214076);
   hnumuCCinFV_stack_12->SetBinError(6,2.788533);
   hnumuCCinFV_stack_12->SetBinError(7,2.546763);
   hnumuCCinFV_stack_12->SetBinError(8,2.570151);
   hnumuCCinFV_stack_12->SetBinError(9,2.518456);
   hnumuCCinFV_stack_12->SetBinError(10,2.184515);
   hnumuCCinFV_stack_12->SetBinError(11,1.93724);
   hnumuCCinFV_stack_12->SetBinError(12,1.666352);
   hnumuCCinFV_stack_12->SetBinError(13,1.418436);
   hnumuCCinFV_stack_12->SetBinError(14,1.454941);
   hnumuCCinFV_stack_12->SetBinError(15,0.9611751);
   hnumuCCinFV_stack_12->SetBinError(16,1.077168);
   hnumuCCinFV_stack_12->SetBinError(17,0.5889569);
   hnumuCCinFV_stack_12->SetBinError(18,0.6212384);
   hnumuCCinFV_stack_12->SetBinError(19,0.6796534);
   hnumuCCinFV_stack_12->SetBinError(20,0.4810838);
   hnumuCCinFV_stack_12->SetBinError(21,0.7339878);
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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hnueCCinFV_stack_13->SetBinContent(6,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(8,0.536893);
   hnueCCinFV_stack_13->SetBinContent(10,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(13,0.6803553);
   hnueCCinFV_stack_13->SetBinContent(14,0.536893);
   hnueCCinFV_stack_13->SetBinContent(18,0.536893);
   hnueCCinFV_stack_13->SetBinContent(20,0.3900497);
   hnueCCinFV_stack_13->SetBinContent(21,0.3917402);
   hnueCCinFV_stack_13->SetBinError(6,0.3401776);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(8,0.3929602);
   hnueCCinFV_stack_13->SetBinError(10,0.3921167);
   hnueCCinFV_stack_13->SetBinError(13,0.4810838);
   hnueCCinFV_stack_13->SetBinError(14,0.3929602);
   hnueCCinFV_stack_13->SetBinError(18,0.3929602);
   hnueCCinFV_stack_13->SetBinError(20,0.2758068);
   hnueCCinFV_stack_13->SetBinError(21,0.2770047);
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
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);
   hmcerror__20->SetBinContent(0,0.02516554);
   hmcerror__20->SetBinContent(2,2.322929);
   hmcerror__20->SetBinContent(3,26.65764);
   hmcerror__20->SetBinContent(4,117.6598);
   hmcerror__20->SetBinContent(5,196.9253);
   hmcerror__20->SetBinContent(6,226.0078);
   hmcerror__20->SetBinContent(7,227.5338);
   hmcerror__20->SetBinContent(8,206.9267);
   hmcerror__20->SetBinContent(9,163.4264);
   hmcerror__20->SetBinContent(10,145.7909);
   hmcerror__20->SetBinContent(11,108.3474);
   hmcerror__20->SetBinContent(12,89.96093);
   hmcerror__20->SetBinContent(13,69.9609);
   hmcerror__20->SetBinContent(14,48.3969);
   hmcerror__20->SetBinContent(15,30.85963);
   hmcerror__20->SetBinContent(16,24.82738);
   hmcerror__20->SetBinContent(17,19.21116);
   hmcerror__20->SetBinContent(18,16.42294);
   hmcerror__20->SetBinContent(19,10.42444);
   hmcerror__20->SetBinContent(20,8.337546);
   hmcerror__20->SetBinContent(21,20.68379);
   hmcerror__20->SetBinError(0,0.02516554);
   hmcerror__20->SetBinError(1,0.3895343);
   hmcerror__20->SetBinError(2,5.667461);
   hmcerror__20->SetBinError(3,17.1604);
   hmcerror__20->SetBinError(4,47.26345);
   hmcerror__20->SetBinError(5,66.72724);
   hmcerror__20->SetBinError(6,74.51549);
   hmcerror__20->SetBinError(7,75.99716);
   hmcerror__20->SetBinError(8,68.68222);
   hmcerror__20->SetBinError(9,55.46889);
   hmcerror__20->SetBinError(10,65.2823);
   hmcerror__20->SetBinError(11,38.44067);
   hmcerror__20->SetBinError(12,34.63226);
   hmcerror__20->SetBinError(13,30.03818);
   hmcerror__20->SetBinError(14,24.93362);
   hmcerror__20->SetBinError(15,17.46423);
   hmcerror__20->SetBinError(16,17.62399);
   hmcerror__20->SetBinError(17,12.32878);
   hmcerror__20->SetBinError(18,12.91025);
   hmcerror__20->SetBinError(19,10.43051);
   hmcerror__20->SetBinError(20,12.59163);
   hmcerror__20->SetBinError(21,15.51243);
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
   
   Double_t _fx3025[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3025[20] = {
   0,
   2,
   31,
   111,
   199,
   206,
   206,
   173,
   144,
   134,
   81,
   73,
   41,
   35,
   30,
   15,
   16,
   7,
   5,
   5};
   Double_t _felx3025[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3025[20] = {
   0,
   2,
   5.7094,
   10.53565,
   14.10674,
   14.3527,
   14.3527,
   13.15295,
   12,
   11.57584,
   9.1239,
   8.6693,
   6.5384,
   6.0548,
   5.6197,
   4.0385,
   4.1628,
   2.85954,
   2.48995,
   2.48995};
   Double_t _fehx3025[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3025[20] = {
   1.1478,
   1.51917,
   5.5017,
   10.53565,
   14.10674,
   14.3527,
   14.3527,
   13.15295,
   12,
   11.57584,
   8.9221,
   8.4672,
   6.3331,
   5.8483,
   5.4117,
   3.8197,
   3.9454,
   2.61053,
   2.21064,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,1980);
   Graph_Graph3025->SetMinimum(0);
   Graph_Graph3025->SetMaximum(242.388);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.87#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=2.5/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1514.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 10.1","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  35.3","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  29.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1422.5","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 16.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 205.7","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 3.8","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_FC_Np_bnb_12_cc_transferred_energy_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-277.2,-0.5333333,2032.8,2.133333);
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
   
   Double_t _fx3026[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3026[20] = {
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
   Double_t _felx3026[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3026[20] = {
   0,
   2.439791,
   0.6437328,
   0.4016957,
   0.3388455,
   0.3297032,
   0.3340038,
   0.3319156,
   0.3394121,
   0.4477805,
   0.3547908,
   0.3849701,
   0.4293567,
   0.5151904,
   0.5659247,
   0.7098609,
   0.6417509,
   0.7861111,
   1.000583,
   1.510232};
   Double_t _fehx3026[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3026[20] = {
   0,
   2.439791,
   0.6437328,
   0.4016957,
   0.3388455,
   0.3297032,
   0.3340038,
   0.3319156,
   0.3394121,
   0.4477805,
   0.3547908,
   0.3849701,
   0.4293567,
   0.5151904,
   0.5659247,
   0.7098609,
   0.6417509,
   0.7861111,
   1.000583,
   1.510232};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,1980);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Transferred Energy [MeV]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Pred");
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
   
   Double_t _fx3027[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3027[20] = {
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
   Double_t _felx3027[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3027[20] = {
   0,
   0.4578513,
   0.2602732,
   0.2837539,
   0.2916117,
   0.2706475,
   0.2747297,
   0.2438456,
   0.25253,
   0.2393607,
   0.2536621,
   0.2427151,
   0.2392337,
   0.2535821,
   0.265384,
   0.2624903,
   0.2694049,
   0.296437,
   0.3453512,
   0.3039789};
   Double_t _fehx3027[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3027[20] = {
   0,
   0.4578513,
   0.2602732,
   0.2837539,
   0.2916117,
   0.2706475,
   0.2747297,
   0.2438456,
   0.25253,
   0.2393607,
   0.2536621,
   0.2427151,
   0.2392337,
   0.2535821,
   0.265384,
   0.2624903,
   0.2694049,
   0.296437,
   0.3453512,
   0.3039789};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,1980);
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
   
   Double_t _fx3028[20] = {
   45,
   135,
   225,
   315,
   405,
   495,
   585,
   675,
   765,
   855,
   945,
   1035,
   1125,
   1215,
   1305,
   1395,
   1485,
   1575,
   1665,
   1755};
   Double_t _fy3028[20] = {
   10,
   0.860982,
   1.162894,
   0.9433975,
   1.010536,
   0.911473,
   0.9053599,
   0.8360447,
   0.8811308,
   0.9191248,
   0.7475951,
   0.8114634,
   0.5860416,
   0.7231869,
   0.9721438,
   0.6041716,
   0.8328493,
   0.4262332,
   0.4796421,
   0.5996968};
   Double_t _felx3028[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fely3028[20] = {
   0,
   0.860982,
   0.214175,
   0.08954333,
   0.07163497,
   0.06350534,
   0.06307941,
   0.0635633,
   0.07342757,
   0.07940029,
   0.08420967,
   0.09636739,
   0.09345792,
   0.1251072,
   0.1821052,
   0.1626631,
   0.2166866,
   0.1741187,
   0.2388569,
   0.298643};
   Double_t _fehx3028[20] = {
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45,
   45};
   Double_t _fehy3028[20] = {
   0,
   0.653989,
   0.2063836,
   0.08954333,
   0.07163497,
   0.06350534,
   0.06307941,
   0.0635633,
   0.07342757,
   0.07940029,
   0.08234714,
   0.09412086,
   0.09052342,
   0.1208404,
   0.175365,
   0.1538503,
   0.2053702,
   0.1589564,
   0.2120632,
   0.2651428};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,1980);
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
   
   TH1F *hist__21 = new TH1F("hist__21","CCpi0_FC_Np_bnb_12_cc_transferred_energy_all",20,0,1800);

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
   TLine *line = new TLine(0,1,1800,1);
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
   entry=leg->AddEntry("","Stat. + Flux + Cross Sec.","F");

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
