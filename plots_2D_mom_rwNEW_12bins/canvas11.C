#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas11()
{
//=========Macro generated from canvas: canvas11/channel11
//=========  (Sat Feb 18 20:30:59 2023) by ROOT version 6.26/00
   TCanvas *canvas11 = new TCanvas("canvas11", "channel11",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas11->SetHighLightColor(2);
   canvas11->Range(0,0,1,1);
   canvas11->SetFillColor(0);
   canvas11->SetBorderMode(0);
   canvas11->SetBorderSize(2);
   canvas11->SetLeftMargin(0.12);
   canvas11->SetRightMargin(0.12);
   canvas11->SetTopMargin(0.05);
   canvas11->SetBottomMargin(0.12);
   canvas11->SetFrameLineWidth(2);
   canvas11->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-184.6154,-1.06,1353.846,117.2137);
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
   
   TH1F *hmc__31 = new TH1F("hmc__31","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmc__31->SetBinContent(1,22.30741);
   hmc__31->SetBinContent(2,47.00446);
   hmc__31->SetBinContent(3,44.84186);
   hmc__31->SetBinContent(4,47.55726);
   hmc__31->SetBinContent(5,24.70507);
   hmc__31->SetBinContent(6,19.29389);
   hmc__31->SetBinContent(7,10.11078);
   hmc__31->SetBinContent(8,4.754237);
   hmc__31->SetBinContent(9,5.202422);
   hmc__31->SetBinContent(10,4.38637);
   hmc__31->SetBinContent(11,2.4992);
   hmc__31->SetBinContent(12,1.408798);
   hmc__31->SetBinContent(13,12.41115);
   hmc__31->SetBinError(1,18.02931);
   hmc__31->SetBinError(2,19.73768);
   hmc__31->SetBinError(3,20.12965);
   hmc__31->SetBinError(4,18.70572);
   hmc__31->SetBinError(5,14.32764);
   hmc__31->SetBinError(6,10.83482);
   hmc__31->SetBinError(7,6.37044);
   hmc__31->SetBinError(8,6.010143);
   hmc__31->SetBinError(9,4.374539);
   hmc__31->SetBinError(10,5.261651);
   hmc__31->SetBinError(11,3.510956);
   hmc__31->SetBinError(12,2.226114);
   hmc__31->SetBinError(13,8.755316);
   hmc__31->SetMinimum(-1.06);
   hmc__31->SetMaximum(111.3);
   hmc__31->SetEntries(244.1847);
   hmc__31->SetLineWidth(5);
   hmc__31->GetXaxis()->SetLabelFont(42);
   hmc__31->GetXaxis()->SetTitleOffset(1);
   hmc__31->GetXaxis()->SetTitleFont(42);
   hmc__31->GetYaxis()->SetTitle("Event counts");
   hmc__31->GetYaxis()->SetLabelFont(132);
   hmc__31->GetYaxis()->SetLabelSize(0.04);
   hmc__31->GetYaxis()->SetTitleSize(0.05);
   hmc__31->GetYaxis()->SetTitleOffset(0.73);
   hmc__31->GetYaxis()->SetTitleFont(132);
   hmc__31->GetZaxis()->SetLabelFont(42);
   hmc__31->GetZaxis()->SetTitleOffset(1);
   hmc__31->GetZaxis()->SetTitleFont(42);
   hmc__31->Draw("hist");
   
   THStack *hs11 = new THStack();
   hs11->SetName("hs11");
   hs11->SetTitle("");
   
   TH1F *hs11_stack_11 = new TH1F("hs11_stack_11","",12,0,1200);
   hs11_stack_11->SetMinimum(-1.150846e-08);
   hs11_stack_11->SetMaximum(49.93513);
   hs11_stack_11->SetDirectory(0);
   hs11_stack_11->SetStats(0);
   hs11_stack_11->SetLineWidth(2);
   hs11_stack_11->SetMarkerStyle(20);
   hs11_stack_11->GetXaxis()->SetNdivisions(509);
   hs11_stack_11->GetXaxis()->SetLabelFont(132);
   hs11_stack_11->GetXaxis()->SetLabelOffset(0.01);
   hs11_stack_11->GetXaxis()->SetLabelSize(0.08);
   hs11_stack_11->GetXaxis()->SetTitleSize(0.08);
   hs11_stack_11->GetXaxis()->SetTitleOffset(0.95);
   hs11_stack_11->GetXaxis()->SetTitleFont(132);
   hs11_stack_11->GetYaxis()->SetNdivisions(509);
   hs11_stack_11->GetYaxis()->SetLabelFont(132);
   hs11_stack_11->GetYaxis()->SetLabelOffset(0.01);
   hs11_stack_11->GetYaxis()->SetLabelSize(0.08);
   hs11_stack_11->GetYaxis()->SetTitleSize(0.08);
   hs11_stack_11->GetYaxis()->SetTitleOffset(0.95);
   hs11_stack_11->GetYaxis()->SetTitleFont(132);
   hs11_stack_11->GetZaxis()->SetLabelFont(132);
   hs11_stack_11->GetZaxis()->SetLabelSize(0.08);
   hs11_stack_11->GetZaxis()->SetTitleSize(0.08);
   hs11_stack_11->GetZaxis()->SetTitleOffset(1.2);
   hs11_stack_11->GetZaxis()->SetTitleFont(132);
   hs11->SetHistogram(hs11_stack_11);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hbadmatch_stack_1->SetBinContent(1,0.5352025);
   hbadmatch_stack_1->SetBinContent(2,1.346637);
   hbadmatch_stack_1->SetBinContent(3,1.123658);
   hbadmatch_stack_1->SetBinContent(4,0.9286332);
   hbadmatch_stack_1->SetBinContent(5,0.1950248);
   hbadmatch_stack_1->SetBinContent(6,0.7336084);
   hbadmatch_stack_1->SetBinContent(7,0.3401776);
   hbadmatch_stack_1->SetBinContent(8,0.3934307);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.3921167);
   hbadmatch_stack_1->SetBinError(2,0.6351083);
   hbadmatch_stack_1->SetBinError(3,0.5188295);
   hbadmatch_stack_1->SetBinError(4,0.48078);
   hbadmatch_stack_1->SetBinError(5,0.1950249);
   hbadmatch_stack_1->SetBinError(6,0.4394482);
   hbadmatch_stack_1->SetBinError(7,0.3401776);
   hbadmatch_stack_1->SetBinError(8,0.2781975);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.3401776);
   hbadmatch_stack_1->SetEntries(25);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1564;
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
   hs11->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hext_stack_2->SetBinContent(1,2.517386);
   hext_stack_2->SetBinContent(2,8.757593);
   hext_stack_2->SetBinContent(3,6.158006);
   hext_stack_2->SetBinContent(4,11.59655);
   hext_stack_2->SetBinContent(5,3.006186);
   hext_stack_2->SetBinContent(6,3.882816);
   hext_stack_2->SetBinContent(7,2.999006);
   hext_stack_2->SetBinContent(8,0.4065989);
   hext_stack_2->SetBinContent(9,1.78639);
   hext_stack_2->SetBinContent(10,1.861411);
   hext_stack_2->SetBinContent(11,0.3243973);
   hext_stack_2->SetBinContent(12,0.4065989);
   hext_stack_2->SetBinContent(13,3.159);
   hext_stack_2->SetBinError(1,0.9575503);
   hext_stack_2->SetBinError(2,1.910256);
   hext_stack_2->SetBinError(3,1.634652);
   hext_stack_2->SetBinError(4,2.517529);
   hext_stack_2->SetBinError(5,1.068791);
   hext_stack_2->SetBinError(6,1.341763);
   hext_stack_2->SetBinError(7,1.159101);
   hext_stack_2->SetBinError(8,0.4065989);
   hext_stack_2->SetBinError(9,0.8039566);
   hext_stack_2->SetBinError(10,0.9526997);
   hext_stack_2->SetBinError(11,0.3243973);
   hext_stack_2->SetBinError(12,0.4065989);
   hext_stack_2->SetBinError(13,1.152637);
   hext_stack_2->SetEntries(111);

   ci = 1565;
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
   hs11->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hdirt_stack_3->SetBinContent(1,1.325317);
   hdirt_stack_3->SetBinContent(2,1.290705);
   hdirt_stack_3->SetBinContent(3,0.3569671);
   hdirt_stack_3->SetBinContent(4,1.260232);
   hdirt_stack_3->SetBinContent(5,0.2188956);
   hdirt_stack_3->SetBinContent(6,0.0001205768);
   hdirt_stack_3->SetBinContent(12,0.3381872);
   hdirt_stack_3->SetBinContent(13,0.4875501);
   hdirt_stack_3->SetBinError(1,0.5768875);
   hdirt_stack_3->SetBinError(2,0.6174457);
   hdirt_stack_3->SetBinError(3,0.258803);
   hdirt_stack_3->SetBinError(4,0.6638839);
   hdirt_stack_3->SetBinError(5,0.2188956);
   hdirt_stack_3->SetBinError(6,0.0001205768);
   hdirt_stack_3->SetBinError(12,0.3381872);
   hdirt_stack_3->SetBinError(13,0.3448401);
   hdirt_stack_3->SetEntries(22);

   ci = 1566;
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
   hs11->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   houtFV_stack_4->SetBinContent(1,7.103168);
   houtFV_stack_4->SetBinContent(2,11.50806);
   houtFV_stack_4->SetBinContent(3,6.294299);
   houtFV_stack_4->SetBinContent(4,12.07678);
   houtFV_stack_4->SetBinContent(5,4.874158);
   houtFV_stack_4->SetBinContent(6,3.418741);
   houtFV_stack_4->SetBinContent(7,2.702313);
   houtFV_stack_4->SetBinContent(8,1.52047);
   houtFV_stack_4->SetBinContent(9,0.9269427);
   houtFV_stack_4->SetBinContent(10,1.12269);
   houtFV_stack_4->SetBinContent(11,0.8206016);
   houtFV_stack_4->SetBinContent(12,0.2122338);
   houtFV_stack_4->SetBinContent(13,2.80798);
   houtFV_stack_4->SetBinError(1,1.427623);
   houtFV_stack_4->SetBinError(2,1.721732);
   houtFV_stack_4->SetBinError(3,1.224414);
   houtFV_stack_4->SetBinError(4,1.997147);
   houtFV_stack_4->SetBinError(5,1.099706);
   houtFV_stack_4->SetBinError(6,0.9093565);
   houtFV_stack_4->SetBinError(7,0.8024889);
   houtFV_stack_4->SetBinError(8,0.5898325);
   houtFV_stack_4->SetBinError(9,0.4800908);
   houtFV_stack_4->SetBinError(10,0.574863);
   houtFV_stack_4->SetBinError(11,0.5105426);
   houtFV_stack_4->SetBinError(12,0.1973265);
   houtFV_stack_4->SetBinError(13,0.8741655);
   houtFV_stack_4->SetEntries(229);

   ci = 1567;
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
   hs11->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.6413721);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3113101);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1954681);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(21);

   ci = 1568;
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
   hs11->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(6);

   ci = 1569;
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
   hs11->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVres_stack_7->SetBinContent(1,2.691034);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.604268);
   hNCpi0inFVres_stack_7->SetBinContent(3,8.570637);
   hNCpi0inFVres_stack_7->SetBinContent(4,7.640976);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.450982);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.806874);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.784944);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.032636);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.488086);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.4457358);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.05579997);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.559912);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5647074);
   hNCpi0inFVres_stack_7->SetBinError(2,0.7694096);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8809581);
   hNCpi0inFVres_stack_7->SetBinError(4,0.8906983);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7404084);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6795589);
   hNCpi0inFVres_stack_7->SetBinError(7,0.4558939);
   hNCpi0inFVres_stack_7->SetBinError(8,0.3071139);
   hNCpi0inFVres_stack_7->SetBinError(9,0.2304939);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1610816);
   hNCpi0inFVres_stack_7->SetBinError(11,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(12,0.03945654);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3609996);
   hNCpi0inFVres_stack_7->SetEntries(732);

   ci = 1570;
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
   hs11->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.5996859);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.81218);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.756212);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.505776);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.895048);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.5300997);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.5438859);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.153118);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1952999);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.432286);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.237152);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4712859);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4333528);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4090187);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4529674);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1216132);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.2338466);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.1050124);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.07381642);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.2270916);
   hNCpi0inFVdis_stack_8->SetEntries(175);

   ci = 1571;
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
   hs11->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);

   ci = 1572;
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
   hs11->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hCCpi0inFV_stack_10->SetBinContent(1,3.57107);
   hCCpi0inFV_stack_10->SetBinContent(2,8.485698);
   hCCpi0inFV_stack_10->SetBinContent(3,13.50724);
   hCCpi0inFV_stack_10->SetBinContent(4,8.116956);
   hCCpi0inFV_stack_10->SetBinContent(5,6.564576);
   hCCpi0inFV_stack_10->SetBinContent(6,3.217977);
   hCCpi0inFV_stack_10->SetBinContent(7,0.785171);
   hCCpi0inFV_stack_10->SetBinContent(8,0.5901461);
   hCCpi0inFV_stack_10->SetBinContent(9,1.805704);
   hCCpi0inFV_stack_10->SetBinContent(10,0.3934307);
   hCCpi0inFV_stack_10->SetBinContent(11,1.073786);
   hCCpi0inFV_stack_10->SetBinContent(13,1.410583);
   hCCpi0inFV_stack_10->SetBinError(1,0.9206376);
   hCCpi0inFV_stack_10->SetBinError(2,1.391621);
   hCCpi0inFV_stack_10->SetBinError(3,1.877008);
   hCCpi0inFV_stack_10->SetBinError(4,1.470592);
   hCCpi0inFV_stack_10->SetBinError(5,1.291488);
   hCCpi0inFV_stack_10->SetBinError(6,0.9618638);
   hCCpi0inFV_stack_10->SetBinError(7,0.3925882);
   hCCpi0inFV_stack_10->SetBinError(8,0.340721);
   hCCpi0inFV_stack_10->SetBinError(9,0.7080169);
   hCCpi0inFV_stack_10->SetBinError(10,0.2781975);
   hCCpi0inFV_stack_10->SetBinError(11,0.5557297);
   hCCpi0inFV_stack_10->SetBinError(13,0.6505627);
   hCCpi0inFV_stack_10->SetEntries(209);

   ci = 1573;
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
   hs11->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hNCinFV_stack_11->SetBinContent(1,0.9269427);
   hNCinFV_stack_11->SetBinContent(2,2.784209);
   hNCinFV_stack_11->SetBinContent(3,2.289344);
   hNCinFV_stack_11->SetBinContent(4,1.073786);
   hNCinFV_stack_11->SetBinContent(5,0.7834804);
   hNCinFV_stack_11->SetBinContent(6,0.5352025);
   hNCinFV_stack_11->SetBinContent(7,0.1950248);
   hNCinFV_stack_11->SetBinContent(8,0.1950248);
   hNCinFV_stack_11->SetBinContent(13,0.5352025);
   hNCinFV_stack_11->SetBinError(1,0.4800908);
   hNCinFV_stack_11->SetBinError(2,0.8323376);
   hNCinFV_stack_11->SetBinError(3,0.8330862);
   hNCinFV_stack_11->SetBinError(4,0.5557297);
   hNCinFV_stack_11->SetBinError(5,0.3917439);
   hNCinFV_stack_11->SetBinError(6,0.3921167);
   hNCinFV_stack_11->SetBinError(7,0.1950249);
   hNCinFV_stack_11->SetBinError(8,0.1950249);
   hNCinFV_stack_11->SetBinError(13,0.3921167);
   hNCinFV_stack_11->SetEntries(38);

   ci = 1574;
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
   hs11->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnumuCCinFV_stack_12->SetBinContent(1,2.9818);
   hnumuCCinFV_stack_12->SetBinContent(2,4.773736);
   hnumuCCinFV_stack_12->SetBinContent(3,4.478428);
   hnumuCCinFV_stack_12->SetBinContent(4,2.967079);
   hnumuCCinFV_stack_12->SetBinContent(5,1.605122);
   hnumuCCinFV_stack_12->SetBinContent(6,2.762817);
   hnumuCCinFV_stack_12->SetBinContent(7,0.536893);
   hnumuCCinFV_stack_12->SetBinContent(8,0.4628128);
   hnumuCCinFV_stack_12->SetBinContent(10,0.5352025);
   hnumuCCinFV_stack_12->SetBinContent(13,1.990733);
   hnumuCCinFV_stack_12->SetBinError(1,0.8566195);
   hnumuCCinFV_stack_12->SetBinError(2,1.070244);
   hnumuCCinFV_stack_12->SetBinError(3,1.060858);
   hnumuCCinFV_stack_12->SetBinError(4,0.9303357);
   hnumuCCinFV_stack_12->SetBinError(5,0.5684579);
   hnumuCCinFV_stack_12->SetBinError(6,0.9074191);
   hnumuCCinFV_stack_12->SetBinError(7,0.3929602);
   hnumuCCinFV_stack_12->SetBinError(8,0.3272945);
   hnumuCCinFV_stack_12->SetBinError(10,0.3921167);
   hnumuCCinFV_stack_12->SetBinError(13,0.7379386);
   hnumuCCinFV_stack_12->SetEntries(99);

   ci = 1575;
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
   hs11->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hnueCCinFV_stack_13->SetBinContent(4,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(6,0.1967154);
   hnueCCinFV_stack_13->SetBinError(4,0.1950249);
   hnueCCinFV_stack_13->SetBinError(6,0.1967154);
   hnueCCinFV_stack_13->SetEntries(2);

   ci = 1576;
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
   hs11->Add(hnueCCinFV_stack_13,"");
   hs11->Draw("hist same");
   
   TH1F *hmcerror__32 = new TH1F("hmcerror__32","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);
   hmcerror__32->SetBinContent(1,22.30741);
   hmcerror__32->SetBinContent(2,47.00446);
   hmcerror__32->SetBinContent(3,44.84186);
   hmcerror__32->SetBinContent(4,47.55726);
   hmcerror__32->SetBinContent(5,24.70507);
   hmcerror__32->SetBinContent(6,19.29389);
   hmcerror__32->SetBinContent(7,10.11078);
   hmcerror__32->SetBinContent(8,4.754237);
   hmcerror__32->SetBinContent(9,5.202422);
   hmcerror__32->SetBinContent(10,4.38637);
   hmcerror__32->SetBinContent(11,2.4992);
   hmcerror__32->SetBinContent(12,1.408798);
   hmcerror__32->SetBinContent(13,12.41115);
   hmcerror__32->SetBinError(1,18.02931);
   hmcerror__32->SetBinError(2,19.73768);
   hmcerror__32->SetBinError(3,20.12965);
   hmcerror__32->SetBinError(4,18.70572);
   hmcerror__32->SetBinError(5,14.32764);
   hmcerror__32->SetBinError(6,10.83482);
   hmcerror__32->SetBinError(7,6.37044);
   hmcerror__32->SetBinError(8,6.010143);
   hmcerror__32->SetBinError(9,4.374539);
   hmcerror__32->SetBinError(10,5.261651);
   hmcerror__32->SetBinError(11,3.510956);
   hmcerror__32->SetBinError(12,2.226114);
   hmcerror__32->SetBinError(13,8.755316);
   hmcerror__32->SetEntries(244.1847);

   ci = TColor::GetColor("#999999");
   hmcerror__32->SetFillColor(ci);
   hmcerror__32->SetFillStyle(3002);
   hmcerror__32->SetLineColor(12);
   hmcerror__32->SetLineWidth(0);
   hmcerror__32->SetMarkerColor(0);
   hmcerror__32->SetMarkerSize(0);
   hmcerror__32->GetXaxis()->SetLabelFont(42);
   hmcerror__32->GetXaxis()->SetTitleOffset(1);
   hmcerror__32->GetXaxis()->SetTitleFont(42);
   hmcerror__32->GetYaxis()->SetLabelFont(42);
   hmcerror__32->GetYaxis()->SetTitleFont(42);
   hmcerror__32->GetZaxis()->SetLabelFont(42);
   hmcerror__32->GetZaxis()->SetTitleOffset(1);
   hmcerror__32->GetZaxis()->SetTitleFont(42);
   hmcerror__32->Draw("same E2");
   
   Double_t _fx3041[12] = {
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
   Double_t _fy3041[12] = {
   26,
   53,
   41,
   30,
   32,
   15,
   5,
   8,
   0,
   4,
   1,
   4};
   Double_t _felx3041[12] = {
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
   Double_t _fely3041[12] = {
   5.2453,
   7.4105,
   6.5384,
   5.6197,
   5.7977,
   4.0385,
   2.48995,
   3.0307,
   0,
   2.29683,
   1,
   2.29683};
   Double_t _fehx3041[12] = {
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
   Double_t _fehy3041[12] = {
   5.0358,
   7.2068,
   6.3331,
   5.4117,
   5.5904,
   3.8197,
   2.21064,
   2.7896,
   1.1478,
   1.98186,
   1.35971,
   1.98186};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(12,_fx3041,_fy3041,_felx3041,_fehx3041,_fely3041,_fehy3041);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3041 = new TH1F("Graph_Graph3041","",100,0,1320);
   Graph_Graph3041->SetMinimum(0);
   Graph_Graph3041->SetMaximum(66.22748);
   Graph_Graph3041->SetDirectory(0);
   Graph_Graph3041->SetStats(0);
   Graph_Graph3041->SetLineWidth(2);
   Graph_Graph3041->SetMarkerStyle(20);
   Graph_Graph3041->GetXaxis()->SetNdivisions(509);
   Graph_Graph3041->GetXaxis()->SetLabelFont(132);
   Graph_Graph3041->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3041->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3041->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3041->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3041->GetXaxis()->SetTitleFont(132);
   Graph_Graph3041->GetYaxis()->SetNdivisions(509);
   Graph_Graph3041->GetYaxis()->SetLabelFont(132);
   Graph_Graph3041->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3041->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3041->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3041->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3041->GetYaxis()->SetTitleFont(132);
   Graph_Graph3041->GetZaxis()->SetLabelFont(132);
   Graph_Graph3041->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3041->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3041->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3041->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3041);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.94#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.1/12","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 219.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 6.1","F");

   ci = 1564;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 43.7","F");

   ci = 1565;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.8","F");

   ci = 1566;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 52.6","F");

   ci = 1567;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  1.6","F");

   ci = 1568;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.2","F");

   ci = 1569;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  37.6","F");

   ci = 1570;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  9.1","F");

   ci = 1571;
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

   ci = 1572;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 48.1","F");

   ci = 1573;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 8.8","F");

   ci = 1574;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 21.1","F");

   ci = 1575;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 0.4","F");

   ci = 1576;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all");
   pt->Draw();
   pad1->Modified();
   canvas11->cd();
  
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
   
   Double_t _fx3042[12] = {
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
   Double_t _fy3042[12] = {
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
   Double_t _felx3042[12] = {
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
   Double_t _fely3042[12] = {
   0.808221,
   0.4199107,
   0.4489031,
   0.3933304,
   0.5799475,
   0.5615676,
   0.6300639,
   1.264165,
   0.8408658,
   1.199546,
   1.404832,
   1.580152};
   Double_t _fehx3042[12] = {
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
   Double_t _fehy3042[12] = {
   0.808221,
   0.4199107,
   0.4489031,
   0.3933304,
   0.5799475,
   0.5615676,
   0.6300639,
   1.264165,
   0.8408658,
   1.199546,
   1.404832,
   1.580152};
   grae = new TGraphAsymmErrors(12,_fx3042,_fy3042,_felx3042,_fehx3042,_fely3042,_fehy3042);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3042 = new TH1F("Graph_Graph3042","",100,0,1320);
   Graph_Graph3042->SetMinimum(0);
   Graph_Graph3042->SetMaximum(2);
   Graph_Graph3042->SetDirectory(0);
   Graph_Graph3042->SetStats(0);
   Graph_Graph3042->SetLineWidth(2);
   Graph_Graph3042->SetMarkerStyle(20);
   Graph_Graph3042->GetXaxis()->SetTitle("#pi^{0} Momentum [MeV/c]");
   Graph_Graph3042->GetXaxis()->SetRange(1,91);
   Graph_Graph3042->GetXaxis()->SetNdivisions(509);
   Graph_Graph3042->GetXaxis()->SetLabelFont(132);
   Graph_Graph3042->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3042->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3042->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3042->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3042->GetXaxis()->SetTitleFont(132);
   Graph_Graph3042->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3042->GetYaxis()->SetNdivisions(210);
   Graph_Graph3042->GetYaxis()->SetLabelFont(132);
   Graph_Graph3042->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3042->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3042->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3042->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3042->GetYaxis()->SetTitleFont(132);
   Graph_Graph3042->GetZaxis()->SetLabelFont(132);
   Graph_Graph3042->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3042->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3042->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3042->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3042);
   
   grae->Draw("a2");
   
   Double_t _fx3043[12] = {
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
   Double_t _fy3043[12] = {
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
   Double_t _felx3043[12] = {
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
   Double_t _fely3043[12] = {
   0.2056932,
   0.1724532,
   0.2205432,
   0.1931754,
   0.2397061,
   0.2215073,
   0.2418408,
   0.418715,
   0.3248124,
   0.3707677,
   0.446216,
   0.6513325};
   Double_t _fehx3043[12] = {
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
   Double_t _fehy3043[12] = {
   0.2056932,
   0.1724532,
   0.2205432,
   0.1931754,
   0.2397061,
   0.2215073,
   0.2418408,
   0.418715,
   0.3248124,
   0.3707677,
   0.446216,
   0.6513325};
   grae = new TGraphAsymmErrors(12,_fx3043,_fy3043,_felx3043,_fehx3043,_fely3043,_fehy3043);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3043 = new TH1F("Graph_Graph3043","",100,0,1320);
   Graph_Graph3043->SetMinimum(0);
   Graph_Graph3043->SetMaximum(2);
   Graph_Graph3043->SetDirectory(0);
   Graph_Graph3043->SetStats(0);
   Graph_Graph3043->SetLineWidth(2);
   Graph_Graph3043->SetMarkerStyle(20);
   Graph_Graph3043->GetXaxis()->SetRange(1,91);
   Graph_Graph3043->GetXaxis()->SetNdivisions(509);
   Graph_Graph3043->GetXaxis()->SetLabelFont(132);
   Graph_Graph3043->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3043->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3043->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3043->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3043->GetXaxis()->SetTitleFont(132);
   Graph_Graph3043->GetYaxis()->SetNdivisions(509);
   Graph_Graph3043->GetYaxis()->SetLabelFont(132);
   Graph_Graph3043->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3043->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3043->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3043->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3043->GetYaxis()->SetTitleFont(132);
   Graph_Graph3043->GetZaxis()->SetLabelFont(132);
   Graph_Graph3043->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3043->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3043->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3043->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3043);
   
   grae->Draw("2 ");
   
   Double_t _fx3044[12] = {
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
   Double_t _fy3044[12] = {
   1.165532,
   1.127553,
   0.9143243,
   0.6308185,
   1.295281,
   0.7774482,
   0.4945215,
   1.682709,
   0,
   0.9119157,
   0.400128,
   2.839301};
   Double_t _felx3044[12] = {
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
   Double_t _fely3044[12] = {
   0.2351371,
   0.1576552,
   0.1458102,
   0.118167,
   0.2346765,
   0.209315,
   0.2462667,
   0.6374735,
   0,
   0.5236289,
   0.400128,
   1.630348};
   Double_t _fehx3044[12] = {
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
   Double_t _fehy3044[12] = {
   0.2257456,
   0.1533216,
   0.1412319,
   0.1137933,
   0.2262855,
   0.1979746,
   0.2186418,
   0.5867608,
   0.220628,
   0.4518223,
   0.544058,
   1.406774};
   grae = new TGraphAsymmErrors(12,_fx3044,_fy3044,_felx3044,_fehx3044,_fely3044,_fehy3044);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3044 = new TH1F("Graph_Graph3044","",100,0,1320);
   Graph_Graph3044->SetMinimum(0);
   Graph_Graph3044->SetMaximum(4.670683);
   Graph_Graph3044->SetDirectory(0);
   Graph_Graph3044->SetStats(0);
   Graph_Graph3044->SetLineWidth(2);
   Graph_Graph3044->SetMarkerStyle(20);
   Graph_Graph3044->GetXaxis()->SetNdivisions(509);
   Graph_Graph3044->GetXaxis()->SetLabelFont(132);
   Graph_Graph3044->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3044->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3044->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3044->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3044->GetXaxis()->SetTitleFont(132);
   Graph_Graph3044->GetYaxis()->SetNdivisions(509);
   Graph_Graph3044->GetYaxis()->SetLabelFont(132);
   Graph_Graph3044->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3044->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3044->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3044->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3044->GetYaxis()->SetTitleFont(132);
   Graph_Graph3044->GetZaxis()->SetLabelFont(132);
   Graph_Graph3044->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3044->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3044->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3044->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3044);
   
   grae->Draw("p ");
   
   TH1F *hist__33 = new TH1F("hist__33","NCpi0BDT_theta2_PC_0p_bnb_12_pi0_momentum_all",12,0,1200);

   ci = TColor::GetColor("#000099");
   hist__33->SetLineColor(ci);
   hist__33->GetXaxis()->SetLabelFont(42);
   hist__33->GetXaxis()->SetTitleOffset(1);
   hist__33->GetXaxis()->SetTitleFont(42);
   hist__33->GetYaxis()->SetNdivisions(405);
   hist__33->GetYaxis()->SetLabelFont(42);
   hist__33->GetYaxis()->SetTitleFont(42);
   hist__33->GetZaxis()->SetLabelFont(42);
   hist__33->GetZaxis()->SetTitleOffset(1);
   hist__33->GetZaxis()->SetTitleFont(42);
   hist__33->Draw("axis same");
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
   canvas11->cd();
   canvas11->Modified();
   canvas11->cd();
   canvas11->SetSelected(canvas11);
}
