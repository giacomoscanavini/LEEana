#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Apr  8 13:18:46 2022) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",190,172,1200,900);
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
   pad1->Range(-230.7692,-1.22,1692.308,102.8011);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);
   hmc__1->SetBinContent(2,1.664656);
   hmc__1->SetBinContent(3,26.18232);
   hmc__1->SetBinContent(4,53.0587);
   hmc__1->SetBinContent(5,53.24078);
   hmc__1->SetBinContent(6,46.80094);
   hmc__1->SetBinContent(7,38.06687);
   hmc__1->SetBinContent(8,30.29558);
   hmc__1->SetBinContent(9,20.41058);
   hmc__1->SetBinContent(10,15.47303);
   hmc__1->SetBinContent(11,10.4504);
   hmc__1->SetBinContent(12,6.769897);
   hmc__1->SetBinContent(13,5.226408);
   hmc__1->SetBinContent(14,4.352191);
   hmc__1->SetBinContent(15,2.711076);
   hmc__1->SetBinContent(16,1.791515);
   hmc__1->SetBinContent(17,1.931541);
   hmc__1->SetBinContent(18,1.246277);
   hmc__1->SetBinContent(19,1.368776);
   hmc__1->SetBinContent(20,0.9430584);
   hmc__1->SetBinContent(21,3.528096);
   hmc__1->SetBinError(1,0.125509);
   hmc__1->SetBinError(2,2.326717);
   hmc__1->SetBinError(3,7.263509);
   hmc__1->SetBinError(4,13.73227);
   hmc__1->SetBinError(5,14.98419);
   hmc__1->SetBinError(6,12.75176);
   hmc__1->SetBinError(7,11.35925);
   hmc__1->SetBinError(8,8.415551);
   hmc__1->SetBinError(9,5.624009);
   hmc__1->SetBinError(10,4.554449);
   hmc__1->SetBinError(11,3.66775);
   hmc__1->SetBinError(12,2.489444);
   hmc__1->SetBinError(13,2.265251);
   hmc__1->SetBinError(14,2.061065);
   hmc__1->SetBinError(15,2.142683);
   hmc__1->SetBinError(16,1.159378);
   hmc__1->SetBinError(17,1.248659);
   hmc__1->SetBinError(18,1.064579);
   hmc__1->SetBinError(19,1.874543);
   hmc__1->SetBinError(20,1.03916);
   hmc__1->SetBinError(21,2.064015);
   hmc__1->SetMinimum(-1.22);
   hmc__1->SetMaximum(97.6);
   hmc__1->SetEntries(321.7148);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",20,0,1500);
   hs1_stack_1->SetMinimum(-1.084988e-09);
   hs1_stack_1->SetMaximum(55.90282);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);
   hbadmatch_stack_1->SetBinContent(2,0.1516736);
   hbadmatch_stack_1->SetBinContent(3,0.7205287);
   hbadmatch_stack_1->SetBinContent(4,2.022032);
   hbadmatch_stack_1->SetBinContent(5,1.243858);
   hbadmatch_stack_1->SetBinContent(6,0.8239169);
   hbadmatch_stack_1->SetBinContent(7,0.9892476);
   hbadmatch_stack_1->SetBinContent(8,0.5710133);
   hbadmatch_stack_1->SetBinContent(9,0.3862826);
   hbadmatch_stack_1->SetBinContent(10,0.1384575);
   hbadmatch_stack_1->SetBinContent(11,0.1821116);
   hbadmatch_stack_1->SetBinContent(12,0.08955649);
   hbadmatch_stack_1->SetBinContent(13,0.1858689);
   hbadmatch_stack_1->SetBinContent(14,0.1889028);
   hbadmatch_stack_1->SetBinContent(15,0.0127502);
   hbadmatch_stack_1->SetBinContent(17,0.06195629);
   hbadmatch_stack_1->SetBinContent(21,0.08332969);
   hbadmatch_stack_1->SetBinError(2,0.08980566);
   hbadmatch_stack_1->SetBinError(3,0.1968645);
   hbadmatch_stack_1->SetBinError(4,0.5108809);
   hbadmatch_stack_1->SetBinError(5,0.2663511);
   hbadmatch_stack_1->SetBinError(6,0.2142842);
   hbadmatch_stack_1->SetBinError(7,0.2506291);
   hbadmatch_stack_1->SetBinError(8,0.1642833);
   hbadmatch_stack_1->SetBinError(9,0.1420152);
   hbadmatch_stack_1->SetBinError(10,0.0693829);
   hbadmatch_stack_1->SetBinError(11,0.09241821);
   hbadmatch_stack_1->SetBinError(12,0.06497439);
   hbadmatch_stack_1->SetBinError(13,0.1073114);
   hbadmatch_stack_1->SetBinError(14,0.1012749);
   hbadmatch_stack_1->SetBinError(15,0.0127502);
   hbadmatch_stack_1->SetBinError(17,0.06195629);
   hbadmatch_stack_1->SetBinError(21,0.07172191);
   hbadmatch_stack_1->SetEntries(208);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);
   hext_stack_2->SetBinContent(2,0.211319);
   hext_stack_2->SetBinContent(3,4.854873);
   hext_stack_2->SetBinContent(4,5.927813);
   hext_stack_2->SetBinContent(5,6.203213);
   hext_stack_2->SetBinContent(6,4.132296);
   hext_stack_2->SetBinContent(7,1.783248);
   hext_stack_2->SetBinContent(8,1.98776);
   hext_stack_2->SetBinContent(9,1.041593);
   hext_stack_2->SetBinContent(10,0.7811952);
   hext_stack_2->SetBinContent(11,0.5085269);
   hext_stack_2->SetBinContent(12,0.06134926);
   hext_stack_2->SetBinContent(13,0.4349078);
   hext_stack_2->SetBinContent(14,0.04907941);
   hext_stack_2->SetBinContent(15,0.2235888);
   hext_stack_2->SetBinContent(16,0.03680956);
   hext_stack_2->SetBinContent(17,0.4349078);
   hext_stack_2->SetBinContent(18,0.01226985);
   hext_stack_2->SetBinContent(19,0.03680956);
   hext_stack_2->SetBinContent(21,0.07361911);
   hext_stack_2->SetBinError(2,0.1994269);
   hext_stack_2->SetBinError(3,0.9166852);
   hext_stack_2->SetBinError(4,0.9632409);
   hext_stack_2->SetBinError(5,1.00278);
   hext_stack_2->SetBinError(6,0.8262765);
   hext_stack_2->SetBinError(7,0.4949239);
   hext_stack_2->SetBinError(8,0.5991608);
   hext_stack_2->SetBinError(9,0.4018621);
   hext_stack_2->SetBinError(10,0.3480228);
   hext_stack_2->SetBinError(11,0.2838944);
   hext_stack_2->SetBinError(12,0.02743622);
   hext_stack_2->SetBinError(13,0.282299);
   hext_stack_2->SetBinError(14,0.0245397);
   hext_stack_2->SetBinError(15,0.199804);
   hext_stack_2->SetBinError(16,0.02125201);
   hext_stack_2->SetBinError(17,0.282299);
   hext_stack_2->SetBinError(18,0.01226985);
   hext_stack_2->SetBinError(19,0.02125201);
   hext_stack_2->SetBinError(21,0.03005488);
   hext_stack_2->SetEntries(581);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);
   hdirt_stack_3->SetBinContent(2,0.05109268);
   hdirt_stack_3->SetBinContent(3,0.9105189);
   hdirt_stack_3->SetBinContent(4,1.520615);
   hdirt_stack_3->SetBinContent(5,0.6858041);
   hdirt_stack_3->SetBinContent(6,0.4605681);
   hdirt_stack_3->SetBinContent(7,0.2378997);
   hdirt_stack_3->SetBinContent(8,0.2812802);
   hdirt_stack_3->SetBinContent(9,0.02465885);
   hdirt_stack_3->SetBinContent(10,0.1447809);
   hdirt_stack_3->SetBinContent(11,0.09719376);
   hdirt_stack_3->SetBinContent(12,0.1358889);
   hdirt_stack_3->SetBinError(2,0.05109268);
   hdirt_stack_3->SetBinError(3,0.2596168);
   hdirt_stack_3->SetBinError(4,0.24725);
   hdirt_stack_3->SetBinError(5,0.1643467);
   hdirt_stack_3->SetBinError(6,0.1402343);
   hdirt_stack_3->SetBinError(7,0.09237777);
   hdirt_stack_3->SetBinError(8,0.1058392);
   hdirt_stack_3->SetBinError(9,0.0142368);
   hdirt_stack_3->SetBinError(10,0.07902113);
   hdirt_stack_3->SetBinError(11,0.06900593);
   hdirt_stack_3->SetBinError(12,0.07850069);
   hdirt_stack_3->SetEntries(170);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);
   houtFV_stack_4->SetBinContent(2,0.6705637);
   houtFV_stack_4->SetBinContent(3,5.587896);
   houtFV_stack_4->SetBinContent(4,9.409589);
   houtFV_stack_4->SetBinContent(5,8.646347);
   houtFV_stack_4->SetBinContent(6,5.291357);
   houtFV_stack_4->SetBinContent(7,3.973734);
   houtFV_stack_4->SetBinContent(8,3.528833);
   houtFV_stack_4->SetBinContent(9,2.207365);
   houtFV_stack_4->SetBinContent(10,1.435155);
   houtFV_stack_4->SetBinContent(11,1.018302);
   houtFV_stack_4->SetBinContent(12,0.3880773);
   houtFV_stack_4->SetBinContent(13,0.3438883);
   houtFV_stack_4->SetBinContent(14,0.2386643);
   houtFV_stack_4->SetBinContent(15,0.1404755);
   houtFV_stack_4->SetBinContent(16,0.07470649);
   houtFV_stack_4->SetBinContent(17,0.177417);
   houtFV_stack_4->SetBinContent(18,0.0127502);
   houtFV_stack_4->SetBinContent(19,0.1986191);
   houtFV_stack_4->SetBinContent(20,0.0127502);
   houtFV_stack_4->SetBinContent(21,0.06195629);
   houtFV_stack_4->SetBinError(2,0.1975755);
   houtFV_stack_4->SetBinError(3,0.5574785);
   houtFV_stack_4->SetBinError(4,0.7170594);
   houtFV_stack_4->SetBinError(5,0.6883307);
   houtFV_stack_4->SetBinError(6,0.5362534);
   houtFV_stack_4->SetBinError(7,0.4601032);
   houtFV_stack_4->SetBinError(8,0.447308);
   houtFV_stack_4->SetBinError(9,0.3460311);
   houtFV_stack_4->SetBinError(10,0.2852054);
   houtFV_stack_4->SetBinError(11,0.2355547);
   houtFV_stack_4->SetBinError(12,0.1309296);
   houtFV_stack_4->SetBinError(13,0.1318437);
   houtFV_stack_4->SetBinError(14,0.09560477);
   houtFV_stack_4->SetBinError(15,0.08917116);
   houtFV_stack_4->SetBinError(16,0.06325464);
   houtFV_stack_4->SetBinError(17,0.09163813);
   houtFV_stack_4->SetBinError(18,0.0127502);
   houtFV_stack_4->SetBinError(19,0.1080662);
   houtFV_stack_4->SetBinError(20,0.0127502);
   houtFV_stack_4->SetBinError(21,0.06195629);
   houtFV_stack_4->SetEntries(1136);

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
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);
   hNCpi0inFV_stack_5->SetBinContent(2,0.4719446);
   hNCpi0inFV_stack_5->SetBinContent(3,10.7396);
   hNCpi0inFV_stack_5->SetBinContent(4,25.97972);
   hNCpi0inFV_stack_5->SetBinContent(5,28.68011);
   hNCpi0inFV_stack_5->SetBinContent(6,25.22965);
   hNCpi0inFV_stack_5->SetBinContent(7,20.77955);
   hNCpi0inFV_stack_5->SetBinContent(8,14.37236);
   hNCpi0inFV_stack_5->SetBinContent(9,8.824526);
   hNCpi0inFV_stack_5->SetBinContent(10,6.335506);
   hNCpi0inFV_stack_5->SetBinContent(11,3.833736);
   hNCpi0inFV_stack_5->SetBinContent(12,2.935464);
   hNCpi0inFV_stack_5->SetBinContent(13,1.904118);
   hNCpi0inFV_stack_5->SetBinContent(14,1.348306);
   hNCpi0inFV_stack_5->SetBinContent(15,0.7361094);
   hNCpi0inFV_stack_5->SetBinContent(16,0.6978588);
   hNCpi0inFV_stack_5->SetBinContent(17,0.5229454);
   hNCpi0inFV_stack_5->SetBinContent(18,0.4719446);
   hNCpi0inFV_stack_5->SetBinContent(19,0.4992397);
   hNCpi0inFV_stack_5->SetBinContent(20,0.3243263);
   hNCpi0inFV_stack_5->SetBinContent(21,0.8108159);
   hNCpi0inFV_stack_5->SetBinError(2,0.1654019);
   hNCpi0inFV_stack_5->SetBinError(3,0.7649054);
   hNCpi0inFV_stack_5->SetBinError(4,1.183771);
   hNCpi0inFV_stack_5->SetBinError(5,1.244405);
   hNCpi0inFV_stack_5->SetBinError(6,1.170661);
   hNCpi0inFV_stack_5->SetBinError(7,1.066232);
   hNCpi0inFV_stack_5->SetBinError(8,0.8824755);
   hNCpi0inFV_stack_5->SetBinError(9,0.6916283);
   hNCpi0inFV_stack_5->SetBinError(10,0.5856286);
   hNCpi0inFV_stack_5->SetBinError(11,0.4554223);
   hNCpi0inFV_stack_5->SetBinError(12,0.4030155);
   hNCpi0inFV_stack_5->SetBinError(13,0.3217797);
   hNCpi0inFV_stack_5->SetBinError(14,0.2568447);
   hNCpi0inFV_stack_5->SetBinError(15,0.1918937);
   hNCpi0inFV_stack_5->SetBinError(16,0.1906187);
   hNCpi0inFV_stack_5->SetBinError(17,0.167356);
   hNCpi0inFV_stack_5->SetBinError(18,0.1654019);
   hNCpi0inFV_stack_5->SetBinError(19,0.157026);
   hNCpi0inFV_stack_5->SetBinError(20,0.1277878);
   hNCpi0inFV_stack_5->SetBinError(21,0.2020503);
   hNCpi0inFV_stack_5->SetEntries(4048);

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
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);
   hCCpi0inFV_stack_6->SetBinContent(2,0.0127502);
   hCCpi0inFV_stack_6->SetBinContent(3,0.8732463);
   hCCpi0inFV_stack_6->SetBinContent(4,3.525257);
   hCCpi0inFV_stack_6->SetBinContent(5,3.964135);
   hCCpi0inFV_stack_6->SetBinContent(6,6.305032);
   hCCpi0inFV_stack_6->SetBinContent(7,6.65687);
   hCCpi0inFV_stack_6->SetBinContent(8,6.884128);
   hCCpi0inFV_stack_6->SetBinContent(9,5.268003);
   hCCpi0inFV_stack_6->SetBinContent(10,5.031783);
   hCCpi0inFV_stack_6->SetBinContent(11,3.30163);
   hCCpi0inFV_stack_6->SetBinContent(12,2.46983);
   hCCpi0inFV_stack_6->SetBinContent(13,1.833001);
   hCCpi0inFV_stack_6->SetBinContent(14,1.805706);
   hCCpi0inFV_stack_6->SetBinContent(15,1.256841);
   hCCpi0inFV_stack_6->SetBinContent(16,0.8327268);
   hCCpi0inFV_stack_6->SetBinContent(17,0.6596082);
   hCCpi0inFV_stack_6->SetBinContent(18,0.606943);
   hCCpi0inFV_stack_6->SetBinContent(19,0.5594013);
   hCCpi0inFV_stack_6->SetBinContent(20,0.3972381);
   hCCpi0inFV_stack_6->SetBinContent(21,1.297305);
   hCCpi0inFV_stack_6->SetBinError(2,0.0127502);
   hCCpi0inFV_stack_6->SetBinError(3,0.2185215);
   hCCpi0inFV_stack_6->SetBinError(4,0.4526042);
   hCCpi0inFV_stack_6->SetBinError(5,0.4658239);
   hCCpi0inFV_stack_6->SetBinError(6,0.5914328);
   hCCpi0inFV_stack_6->SetBinError(7,0.5932766);
   hCCpi0inFV_stack_6->SetBinError(8,0.611477);
   hCCpi0inFV_stack_6->SetBinError(9,0.5304135);
   hCCpi0inFV_stack_6->SetBinError(10,0.5194192);
   hCCpi0inFV_stack_6->SetBinError(11,0.4161579);
   hCCpi0inFV_stack_6->SetBinError(12,0.3592896);
   hCCpi0inFV_stack_6->SetBinError(13,0.3057606);
   hCCpi0inFV_stack_6->SetBinError(14,0.3101454);
   hCCpi0inFV_stack_6->SetBinError(15,0.2633903);
   hCCpi0inFV_stack_6->SetBinError(16,0.2172578);
   hCCpi0inFV_stack_6->SetBinError(17,0.1893351);
   hCCpi0inFV_stack_6->SetBinError(18,0.1823371);
   hCCpi0inFV_stack_6->SetBinError(19,0.1775429);
   hCCpi0inFV_stack_6->SetBinError(20,0.1528288);
   hCCpi0inFV_stack_6->SetBinError(21,0.2555757);
   hCCpi0inFV_stack_6->SetEntries(1411);

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
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);
   hNCinFV_stack_7->SetBinContent(3,0.8964778);
   hNCinFV_stack_7->SetBinContent(4,1.834796);
   hNCinFV_stack_7->SetBinContent(5,1.581586);
   hNCinFV_stack_7->SetBinContent(6,2.212105);
   hNCinFV_stack_7->SetBinContent(7,1.53238);
   hNCinFV_stack_7->SetBinContent(8,0.8126106);
   hNCinFV_stack_7->SetBinContent(9,0.9329337);
   hNCinFV_stack_7->SetBinContent(10,0.5119899);
   hNCinFV_stack_7->SetBinContent(11,0.6086074);
   hNCinFV_stack_7->SetBinContent(12,0.2113693);
   hNCinFV_stack_7->SetBinContent(13,0.2496199);
   hNCinFV_stack_7->SetBinContent(14,0.2733256);
   hNCinFV_stack_7->SetBinContent(15,0.06195629);
   hNCinFV_stack_7->SetBinContent(16,0.07470649);
   hNCinFV_stack_7->SetBinContent(19,0.0127502);
   hNCinFV_stack_7->SetBinContent(20,0.0127502);
   hNCinFV_stack_7->SetBinContent(21,0.1366628);
   hNCinFV_stack_7->SetBinError(3,0.2191205);
   hNCinFV_stack_7->SetBinError(4,0.300772);
   hNCinFV_stack_7->SetBinError(5,0.2901495);
   hNCinFV_stack_7->SetBinError(6,0.3546277);
   hNCinFV_stack_7->SetBinError(7,0.2837441);
   hNCinFV_stack_7->SetBinError(8,0.1944186);
   hNCinFV_stack_7->SetBinError(9,0.2269961);
   hNCinFV_stack_7->SetBinError(10,0.1575428);
   hNCinFV_stack_7->SetBinError(11,0.18761);
   hNCinFV_stack_7->SetBinError(12,0.1088158);
   hNCinFV_stack_7->SetBinError(13,0.1110342);
   hNCinFV_stack_7->SetBinError(14,0.1252177);
   hNCinFV_stack_7->SetBinError(15,0.06195629);
   hNCinFV_stack_7->SetBinError(16,0.06325464);
   hNCinFV_stack_7->SetBinError(19,0.0127502);
   hNCinFV_stack_7->SetBinError(20,0.0127502);
   hNCinFV_stack_7->SetBinError(21,0.08854226);
   hNCinFV_stack_7->SetEntries(328);

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
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);
   hnumuCCinFV_stack_8->SetBinContent(2,0.09531189);
   hnumuCCinFV_stack_8->SetBinContent(3,1.459203);
   hnumuCCinFV_stack_8->SetBinContent(4,2.701643);
   hnumuCCinFV_stack_8->SetBinContent(5,2.076824);
   hnumuCCinFV_stack_8->SetBinContent(6,2.185046);
   hnumuCCinFV_stack_8->SetBinContent(7,2.051986);
   hnumuCCinFV_stack_8->SetBinContent(8,1.623549);
   hnumuCCinFV_stack_8->SetBinContent(9,1.696344);
   hnumuCCinFV_stack_8->SetBinContent(10,1.060832);
   hnumuCCinFV_stack_8->SetBinContent(11,0.819913);
   hnumuCCinFV_stack_8->SetBinContent(12,0.478362);
   hnumuCCinFV_stack_8->SetBinContent(13,0.1666371);
   hnumuCCinFV_stack_8->SetBinContent(14,0.2261474);
   hnumuCCinFV_stack_8->SetBinContent(15,0.2640882);
   hnumuCCinFV_stack_8->SetBinContent(16,0.07470649);
   hnumuCCinFV_stack_8->SetBinContent(17,0.07470649);
   hnumuCCinFV_stack_8->SetBinContent(18,0.08041275);
   hnumuCCinFV_stack_8->SetBinContent(20,0.07470649);
   hnumuCCinFV_stack_8->SetBinContent(21,0.2754969);
   hnumuCCinFV_stack_8->SetBinError(2,0.09531189);
   hnumuCCinFV_stack_8->SetBinError(3,0.5618884);
   hnumuCCinFV_stack_8->SetBinError(4,0.507675);
   hnumuCCinFV_stack_8->SetBinError(5,0.341151);
   hnumuCCinFV_stack_8->SetBinError(6,0.3700726);
   hnumuCCinFV_stack_8->SetBinError(7,0.5137805);
   hnumuCCinFV_stack_8->SetBinError(8,0.305744);
   hnumuCCinFV_stack_8->SetBinError(9,0.3455863);
   hnumuCCinFV_stack_8->SetBinError(10,0.2534062);
   hnumuCCinFV_stack_8->SetBinError(11,0.2151945);
   hnumuCCinFV_stack_8->SetBinError(12,0.1619032);
   hnumuCCinFV_stack_8->SetBinError(13,0.07376772);
   hnumuCCinFV_stack_8->SetBinError(14,0.1098147);
   hnumuCCinFV_stack_8->SetBinError(15,0.1179788);
   hnumuCCinFV_stack_8->SetBinError(16,0.06325464);
   hnumuCCinFV_stack_8->SetBinError(17,0.06325464);
   hnumuCCinFV_stack_8->SetBinError(18,0.08041275);
   hnumuCCinFV_stack_8->SetBinError(20,0.06325464);
   hnumuCCinFV_stack_8->SetBinError(21,0.1254574);
   hnumuCCinFV_stack_8->SetEntries(413);

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
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);
   hnueCCinFV_stack_9->SetBinContent(3,0.1399791);
   hnueCCinFV_stack_9->SetBinContent(4,0.1372353);
   hnueCCinFV_stack_9->SetBinContent(5,0.1589002);
   hnueCCinFV_stack_9->SetBinContent(6,0.1609694);
   hnueCCinFV_stack_9->SetBinContent(7,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(8,0.2340455);
   hnueCCinFV_stack_9->SetBinContent(9,0.02887421);
   hnueCCinFV_stack_9->SetBinContent(10,0.03333497);
   hnueCCinFV_stack_9->SetBinContent(11,0.08037865);
   hnueCCinFV_stack_9->SetBinContent(13,0.1083666);
   hnueCCinFV_stack_9->SetBinContent(14,0.2220596);
   hnueCCinFV_stack_9->SetBinContent(15,0.01526697);
   hnueCCinFV_stack_9->SetBinContent(18,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(19,0.06195629);
   hnueCCinFV_stack_9->SetBinContent(20,0.121287);
   hnueCCinFV_stack_9->SetBinContent(21,0.7889103);
   hnueCCinFV_stack_9->SetBinError(3,0.08116254);
   hnueCCinFV_stack_9->SetBinError(4,0.1065842);
   hnueCCinFV_stack_9->SetBinError(5,0.09106417);
   hnueCCinFV_stack_9->SetBinError(6,0.1046765);
   hnueCCinFV_stack_9->SetBinError(7,0.06195629);
   hnueCCinFV_stack_9->SetBinError(8,0.110961);
   hnueCCinFV_stack_9->SetBinError(9,0.01961723);
   hnueCCinFV_stack_9->SetBinError(10,0.02365194);
   hnueCCinFV_stack_9->SetBinError(11,0.06463718);
   hnueCCinFV_stack_9->SetBinError(13,0.0676176);
   hnueCCinFV_stack_9->SetBinError(14,0.1220637);
   hnueCCinFV_stack_9->SetBinError(15,0.01526697);
   hnueCCinFV_stack_9->SetBinError(18,0.06195629);
   hnueCCinFV_stack_9->SetBinError(19,0.06195629);
   hnueCCinFV_stack_9->SetBinError(20,0.08577201);
   hnueCCinFV_stack_9->SetBinError(21,0.4890215);
   hnueCCinFV_stack_9->SetEntries(51);

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
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);
   hmcerror__2->SetBinContent(2,1.664656);
   hmcerror__2->SetBinContent(3,26.18232);
   hmcerror__2->SetBinContent(4,53.0587);
   hmcerror__2->SetBinContent(5,53.24078);
   hmcerror__2->SetBinContent(6,46.80094);
   hmcerror__2->SetBinContent(7,38.06687);
   hmcerror__2->SetBinContent(8,30.29558);
   hmcerror__2->SetBinContent(9,20.41058);
   hmcerror__2->SetBinContent(10,15.47303);
   hmcerror__2->SetBinContent(11,10.4504);
   hmcerror__2->SetBinContent(12,6.769897);
   hmcerror__2->SetBinContent(13,5.226408);
   hmcerror__2->SetBinContent(14,4.352191);
   hmcerror__2->SetBinContent(15,2.711076);
   hmcerror__2->SetBinContent(16,1.791515);
   hmcerror__2->SetBinContent(17,1.931541);
   hmcerror__2->SetBinContent(18,1.246277);
   hmcerror__2->SetBinContent(19,1.368776);
   hmcerror__2->SetBinContent(20,0.9430584);
   hmcerror__2->SetBinContent(21,3.528096);
   hmcerror__2->SetBinError(1,0.125509);
   hmcerror__2->SetBinError(2,2.326717);
   hmcerror__2->SetBinError(3,7.263509);
   hmcerror__2->SetBinError(4,13.73227);
   hmcerror__2->SetBinError(5,14.98419);
   hmcerror__2->SetBinError(6,12.75176);
   hmcerror__2->SetBinError(7,11.35925);
   hmcerror__2->SetBinError(8,8.415551);
   hmcerror__2->SetBinError(9,5.624009);
   hmcerror__2->SetBinError(10,4.554449);
   hmcerror__2->SetBinError(11,3.66775);
   hmcerror__2->SetBinError(12,2.489444);
   hmcerror__2->SetBinError(13,2.265251);
   hmcerror__2->SetBinError(14,2.061065);
   hmcerror__2->SetBinError(15,2.142683);
   hmcerror__2->SetBinError(16,1.159378);
   hmcerror__2->SetBinError(17,1.248659);
   hmcerror__2->SetBinError(18,1.064579);
   hmcerror__2->SetBinError(19,1.874543);
   hmcerror__2->SetBinError(20,1.03916);
   hmcerror__2->SetBinError(21,2.064015);
   hmcerror__2->SetEntries(321.7148);

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
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3001[20] = {
   0,
   2,
   30,
   59,
   61,
   56,
   29,
   14,
   18,
   8,
   8,
   6,
   4,
   2,
   2,
   0,
   3,
   2,
   0,
   1};
   Double_t _felx3001[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3001[20] = {
   0,
   2,
   5.6197,
   7.8097,
   7.9383,
   7.6127,
   5.5285,
   3.9102,
   4.4008,
   3.0307,
   3.0307,
   2.67925,
   2.29683,
   2,
   2,
   0,
   2.143368,
   2,
   0,
   1};
   Double_t _fehx3001[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3001[20] = {
   1.1478,
   1.51917,
   5.4117,
   7.6066,
   7.7354,
   7.4094,
   5.3201,
   3.6898,
   4.1858,
   2.7896,
   2.7896,
   2.41858,
   1.98186,
   1.51917,
   1.51917,
   1.1478,
   1.72422,
   1.51917,
   1.1478,
   1.35971};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1650);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(75.60894);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=0.95#pm0.05(data err)#pm0.20(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=12.34/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 305.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 7.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 28.7","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 4.6","F");

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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 43.4","F");

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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  154.7","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 52.2","F");

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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 11.8","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 17.2","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 1.6","F");

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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_0p_bnb_10_kine_reco_Enu_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
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
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3002[20] = {
   0,
   1.397716,
   0.2774204,
   0.2588128,
   0.2814419,
   0.2724681,
   0.2984025,
   0.2777814,
   0.2755438,
   0.2943475,
   0.3509674,
   0.3677225,
   0.4334241,
   0.4735696,
   0.7903438,
   0.6471498,
   0.6464572,
   0.854208,
   1.369503,
   1.101904};
   Double_t _fehx3002[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3002[20] = {
   0,
   1.397716,
   0.2774204,
   0.2588128,
   0.2814419,
   0.2724681,
   0.2984025,
   0.2777814,
   0.2755438,
   0.2943475,
   0.3509674,
   0.3677225,
   0.4334241,
   0.4735696,
   0.7903438,
   0.6471498,
   0.6464572,
   0.854208,
   1.369503,
   1.101904};
   grae = new TGraphAsymmErrors(20,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,1650);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("E_{#gamma} [MeV]");
   Graph_Graph3002->GetXaxis()->SetRange(1,91);
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
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
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
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3003[20] = {
   0,
   0.3185556,
   0.1750075,
   0.1869366,
   0.201251,
   0.200644,
   0.2094014,
   0.185768,
   0.197923,
   0.1947478,
   0.2066138,
   0.2236057,
   0.2383379,
   0.238134,
   0.266991,
   0.3026902,
   0.3050511,
   0.3431406,
   0.3637241,
   0.4437433};
   Double_t _fehx3003[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3003[20] = {
   0,
   0.3185556,
   0.1750075,
   0.1869366,
   0.201251,
   0.200644,
   0.2094014,
   0.185768,
   0.197923,
   0.1947478,
   0.2066138,
   0.2236057,
   0.2383379,
   0.238134,
   0.266991,
   0.3026902,
   0.3050511,
   0.3431406,
   0.3637241,
   0.4437433};
   grae = new TGraphAsymmErrors(20,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,1650);
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
   
   Double_t _fx3004[20] = {
   37.5,
   112.5,
   187.5,
   262.5,
   337.5,
   412.5,
   487.5,
   562.5,
   637.5,
   712.5,
   787.5,
   862.5,
   937.5,
   1012.5,
   1087.5,
   1162.5,
   1237.5,
   1312.5,
   1387.5,
   1462.5};
   Double_t _fy3004[20] = {
   10,
   1.20145,
   1.145811,
   1.111976,
   1.145738,
   1.196557,
   0.7618173,
   0.4621136,
   0.8818956,
   0.5170285,
   0.7655209,
   0.8862763,
   0.7653441,
   0.4595387,
   0.7377143,
   0,
   1.553164,
   1.60478,
   0,
   1.06038};
   Double_t _felx3004[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fely3004[20] = {
   0,
   1.20145,
   0.2146372,
   0.1471898,
   0.1491019,
   0.1626613,
   0.1452313,
   0.1290683,
   0.2156137,
   0.1958698,
   0.290008,
   0.3957593,
   0.4394663,
   0.4595387,
   0.7377143,
   0,
   1.109667,
   1.60478,
   0,
   1.06038};
   Double_t _fehx3004[20] = {
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5,
   37.5};
   Double_t _fehy3004[20] = {
   0,
   0.9126031,
   0.2066929,
   0.143362,
   0.1452909,
   0.1583173,
   0.1397567,
   0.1217933,
   0.2050799,
   0.1802878,
   0.2669371,
   0.357255,
   0.3792012,
   0.3490587,
   0.5603567,
   0.6406869,
   0.8926655,
   1.218967,
   0.8385594,
   1.441809};
   grae = new TGraphAsymmErrors(20,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,1650);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(11);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_0p_bnb_10_kine_reco_Enu_all",20,0,1500);

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
   TLine *line = new TLine(0,1,1500,1);
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
