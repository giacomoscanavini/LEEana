#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas11()
{
//=========Macro generated from canvas: canvas11/channel11
//=========  (Tue Dec  6 22:18:05 2022) by ROOT version 6.26/00
   TCanvas *canvas11 = new TCanvas("canvas11", "channel11",242,172,1200,900);
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
   hmc__31->SetBinContent(1,20.86124);
   hmc__31->SetBinContent(2,45.80024);
   hmc__31->SetBinContent(3,43.46152);
   hmc__31->SetBinContent(4,44.99751);
   hmc__31->SetBinContent(5,23.56367);
   hmc__31->SetBinContent(6,18.74272);
   hmc__31->SetBinContent(7,9.289618);
   hmc__31->SetBinContent(8,4.859934);
   hmc__31->SetBinContent(9,5.070544);
   hmc__31->SetBinContent(10,4.438094);
   hmc__31->SetBinContent(11,2.427861);
   hmc__31->SetBinContent(12,1.416867);
   hmc__31->SetBinContent(13,12.86349);
   hmc__31->SetBinError(1,15.22058);
   hmc__31->SetBinError(2,19.12537);
   hmc__31->SetBinError(3,20.44319);
   hmc__31->SetBinError(4,18.6181);
   hmc__31->SetBinError(5,13.81241);
   hmc__31->SetBinError(6,10.01206);
   hmc__31->SetBinError(7,6.114499);
   hmc__31->SetBinError(8,6.675712);
   hmc__31->SetBinError(9,3.998245);
   hmc__31->SetBinError(10,4.621204);
   hmc__31->SetBinError(11,3.4054);
   hmc__31->SetBinError(12,2.13535);
   hmc__31->SetBinError(13,9.452148);
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
   hs11_stack_11->SetMaximum(48.09025);
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
   hbadmatch_stack_1->SetBinContent(2,1.435462);
   hbadmatch_stack_1->SetBinContent(3,1.345429);
   hbadmatch_stack_1->SetBinContent(4,0.991491);
   hbadmatch_stack_1->SetBinContent(5,0.2019599);
   hbadmatch_stack_1->SetBinContent(6,0.7336084);
   hbadmatch_stack_1->SetBinContent(7,0.2294008);
   hbadmatch_stack_1->SetBinContent(8,0.3934307);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.3401776);
   hbadmatch_stack_1->SetBinError(1,0.3921167);
   hbadmatch_stack_1->SetBinError(2,0.6679811);
   hbadmatch_stack_1->SetBinError(3,0.6352001);
   hbadmatch_stack_1->SetBinError(4,0.5762708);
   hbadmatch_stack_1->SetBinError(5,0.2019599);
   hbadmatch_stack_1->SetBinError(6,0.4394482);
   hbadmatch_stack_1->SetBinError(7,0.2294008);
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
   houtFV_stack_4->SetBinContent(1,6.370226);
   houtFV_stack_4->SetBinContent(2,10.63721);
   houtFV_stack_4->SetBinContent(3,5.593446);
   houtFV_stack_4->SetBinContent(4,10.65182);
   houtFV_stack_4->SetBinContent(5,4.771869);
   houtFV_stack_4->SetBinContent(6,3.354682);
   houtFV_stack_4->SetBinContent(7,2.617172);
   houtFV_stack_4->SetBinContent(8,1.586608);
   houtFV_stack_4->SetBinContent(9,0.8657933);
   houtFV_stack_4->SetBinContent(10,1.12269);
   houtFV_stack_4->SetBinContent(11,0.7466772);
   houtFV_stack_4->SetBinContent(12,0.2122338);
   houtFV_stack_4->SetBinContent(13,2.741706);
   houtFV_stack_4->SetBinError(1,1.317441);
   houtFV_stack_4->SetBinError(2,1.628627);
   houtFV_stack_4->SetBinError(3,1.141134);
   houtFV_stack_4->SetBinError(4,1.82213);
   houtFV_stack_4->SetBinError(5,1.112056);
   houtFV_stack_4->SetBinError(6,0.8976803);
   houtFV_stack_4->SetBinError(7,0.7973329);
   houtFV_stack_4->SetBinError(8,0.6150587);
   houtFV_stack_4->SetBinError(9,0.4594254);
   houtFV_stack_4->SetBinError(10,0.574863);
   houtFV_stack_4->SetBinError(11,0.4871184);
   houtFV_stack_4->SetBinError(12,0.1973265);
   houtFV_stack_4->SetBinError(13,0.8618047);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.7437109);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1614307);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.202419);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.04401993);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.2244485);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.1175485);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.04222719);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03728024);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.3830772);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.1119981);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.2024189);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03715322);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.140447);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.09341612);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.04222718);
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
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.0587264);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.03664741);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.03728024);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.04441126);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.02591398);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.03728024);
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
   hNCpi0inFVres_stack_7->SetBinContent(1,2.124162);
   hNCpi0inFVres_stack_7->SetBinContent(2,5.279073);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.943892);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.555235);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.886123);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.353195);
   hNCpi0inFVres_stack_7->SetBinContent(7,1.361425);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.135756);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.4139127);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.4473116);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.04578736);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.05127166);
   hNCpi0inFVres_stack_7->SetBinContent(13,1.48771);
   hNCpi0inFVres_stack_7->SetBinError(1,0.5258085);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8325573);
   hNCpi0inFVres_stack_7->SetBinError(3,0.8913523);
   hNCpi0inFVres_stack_7->SetBinError(4,0.7959302);
   hNCpi0inFVres_stack_7->SetBinError(5,0.7475712);
   hNCpi0inFVres_stack_7->SetBinError(6,0.6476568);
   hNCpi0inFVres_stack_7->SetBinError(7,0.3488013);
   hNCpi0inFVres_stack_7->SetBinError(8,0.4777379);
   hNCpi0inFVres_stack_7->SetBinError(9,0.1686732);
   hNCpi0inFVres_stack_7->SetBinError(10,0.2148271);
   hNCpi0inFVres_stack_7->SetBinError(11,0.03428505);
   hNCpi0inFVres_stack_7->SetBinError(12,0.0392955);
   hNCpi0inFVres_stack_7->SetBinError(13,0.3771555);
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
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.5279239);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.68899);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.584718);
   hNCpi0inFVdis_stack_8->SetBinContent(4,1.503879);
   hNCpi0inFVdis_stack_8->SetBinContent(5,1.480163);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.4962147);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.4479783);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.08955671);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.1987447);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.0780477);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.04049794);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(13,1.008777);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2094005);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.4752774);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.3799038);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.4284963);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.4093691);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1223702);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.21243);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.06660861);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.08044141);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.0780477);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.04049794);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.5816482);
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
   hNCinFV_stack_11->SetBinContent(1,0.8533307);
   hNCinFV_stack_11->SetBinContent(2,2.708057);
   hNCinFV_stack_11->SetBinContent(3,2.27324);
   hNCinFV_stack_11->SetBinContent(4,0.9568303);
   hNCinFV_stack_11->SetBinContent(5,0.7481059);
   hNCinFV_stack_11->SetBinContent(6,0.4828492);
   hNCinFV_stack_11->SetBinContent(7,0.1950248);
   hNCinFV_stack_11->SetBinContent(8,0.1950248);
   hNCinFV_stack_11->SetBinContent(13,0.5352025);
   hNCinFV_stack_11->SetBinError(1,0.4559089);
   hNCinFV_stack_11->SetBinError(2,0.8866094);
   hNCinFV_stack_11->SetBinError(3,0.9522686);
   hNCinFV_stack_11->SetBinError(4,0.4928921);
   hNCinFV_stack_11->SetBinError(5,0.3850549);
   hNCinFV_stack_11->SetBinError(6,0.3425005);
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
   hmcerror__32->SetBinContent(1,20.86124);
   hmcerror__32->SetBinContent(2,45.80024);
   hmcerror__32->SetBinContent(3,43.46152);
   hmcerror__32->SetBinContent(4,44.99751);
   hmcerror__32->SetBinContent(5,23.56367);
   hmcerror__32->SetBinContent(6,18.74272);
   hmcerror__32->SetBinContent(7,9.289618);
   hmcerror__32->SetBinContent(8,4.859934);
   hmcerror__32->SetBinContent(9,5.070544);
   hmcerror__32->SetBinContent(10,4.438094);
   hmcerror__32->SetBinContent(11,2.427861);
   hmcerror__32->SetBinContent(12,1.416867);
   hmcerror__32->SetBinContent(13,12.86349);
   hmcerror__32->SetBinError(1,15.22058);
   hmcerror__32->SetBinError(2,19.12537);
   hmcerror__32->SetBinError(3,20.44319);
   hmcerror__32->SetBinError(4,18.6181);
   hmcerror__32->SetBinError(5,13.81241);
   hmcerror__32->SetBinError(6,10.01206);
   hmcerror__32->SetBinError(7,6.114499);
   hmcerror__32->SetBinError(8,6.675712);
   hmcerror__32->SetBinError(9,3.998245);
   hmcerror__32->SetBinError(10,4.621204);
   hmcerror__32->SetBinError(11,3.4054);
   hmcerror__32->SetBinError(12,2.13535);
   hmcerror__32->SetBinError(13,9.452148);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.97#pm0.22","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.5/12","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 6.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 48.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  33.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  8.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 8.4","F");

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
   0.7296104,
   0.4175824,
   0.4703745,
   0.4137585,
   0.5861738,
   0.534184,
   0.6582077,
   1.373622,
   0.7885239,
   1.041259,
   1.402634,
   1.507092};
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
   0.7296104,
   0.4175824,
   0.4703745,
   0.4137585,
   0.5861738,
   0.534184,
   0.6582077,
   1.373622,
   0.7885239,
   1.041259,
   1.402634,
   1.507092};
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
   0.2294281,
   0.1737805,
   0.2231439,
   0.1976831,
   0.2571738,
   0.2237663,
   0.2545026,
   0.4193573,
   0.3267493,
   0.3705443,
   0.4478226,
   0.6461149};
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
   0.2294281,
   0.1737805,
   0.2231439,
   0.1976831,
   0.2571738,
   0.2237663,
   0.2545026,
   0.4193573,
   0.3267493,
   0.3705443,
   0.4478226,
   0.6461149};
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
   1.24633,
   1.157199,
   0.9433633,
   0.6667035,
   1.358023,
   0.8003107,
   0.5382352,
   1.646113,
   0,
   0.9012879,
   0.4118852,
   2.82313};
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
   0.2514376,
   0.1618005,
   0.1504411,
   0.1248891,
   0.246044,
   0.2154703,
   0.2680358,
   0.6236093,
   0,
   0.5175263,
   0.4118852,
   1.621062};
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
   0.241395,
   0.1573529,
   0.1457174,
   0.1202666,
   0.2372466,
   0.2037964,
   0.2379689,
   0.5739996,
   0.2263662,
   0.4465566,
   0.5600444,
   1.398762};
   grae = new TGraphAsymmErrors(12,_fx3044,_fy3044,_felx3044,_fehx3044,_fely3044,_fehy3044);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3044 = new TH1F("Graph_Graph3044","",100,0,1320);
   Graph_Graph3044->SetMinimum(0);
   Graph_Graph3044->SetMaximum(4.644081);
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
   canvas11->cd();
   canvas11->Modified();
   canvas11->cd();
   canvas11->SetSelected(canvas11);
}
