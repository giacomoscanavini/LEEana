#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Mon Mar 13 20:05:51 2023) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",138,161,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas9->SetHighLightColor(2);
   canvas9->Range(0,0,1,1);
   canvas9->SetFillColor(0);
   canvas9->SetBorderMode(0);
   canvas9->SetBorderSize(2);
   canvas9->SetLeftMargin(0.12);
   canvas9->SetRightMargin(0.12);
   canvas9->SetTopMargin(0.05);
   canvas9->SetBottomMargin(0.12);
   canvas9->SetFrameLineWidth(2);
   canvas9->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-169.2308,-0.4746253,1241.026,52.48356);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmc__25->SetBinContent(1,23.73126);
   hmc__25->SetBinContent(2,20.58212);
   hmc__25->SetBinContent(3,15.75857);
   hmc__25->SetBinContent(4,16.03043);
   hmc__25->SetBinContent(5,16.38896);
   hmc__25->SetBinContent(6,15.75529);
   hmc__25->SetBinContent(7,15.95752);
   hmc__25->SetBinContent(8,18.08849);
   hmc__25->SetBinContent(9,17.64776);
   hmc__25->SetBinContent(10,14.80008);
   hmc__25->SetBinContent(11,15.38269);
   hmc__25->SetBinContent(12,13.08964);
   hmc__25->SetBinContent(13,13.32268);
   hmc__25->SetBinContent(14,14.54955);
   hmc__25->SetBinContent(15,14.54027);
   hmc__25->SetBinContent(16,14.66686);
   hmc__25->SetBinContent(17,13.68711);
   hmc__25->SetBinContent(18,15.02214);
   hmc__25->SetBinContent(19,12.69287);
   hmc__25->SetBinContent(20,16.271);
   hmc__25->SetBinContent(21,15.85621);
   hmc__25->SetBinContent(22,16.73806);
   hmc__25->SetBinContent(23,15.4303);
   hmc__25->SetBinContent(24,13.92878);
   hmc__25->SetBinContent(25,14.24642);
   hmc__25->SetBinContent(26,12.87788);
   hmc__25->SetBinContent(27,12.70218);
   hmc__25->SetBinContent(28,15.78222);
   hmc__25->SetBinContent(29,23.34683);
   hmc__25->SetBinContent(30,20.9908);
   hmc__25->SetBinContent(31,0.670465);
   hmc__25->SetBinError(1,16.67956);
   hmc__25->SetBinError(2,11.64847);
   hmc__25->SetBinError(3,13.49144);
   hmc__25->SetBinError(4,7.286008);
   hmc__25->SetBinError(5,9.642918);
   hmc__25->SetBinError(6,8.607826);
   hmc__25->SetBinError(7,8.831931);
   hmc__25->SetBinError(8,11.24129);
   hmc__25->SetBinError(9,17.3339);
   hmc__25->SetBinError(10,7.785771);
   hmc__25->SetBinError(11,11.43273);
   hmc__25->SetBinError(12,6.471582);
   hmc__25->SetBinError(13,10.68767);
   hmc__25->SetBinError(14,8.526938);
   hmc__25->SetBinError(15,7.801279);
   hmc__25->SetBinError(16,8.961804);
   hmc__25->SetBinError(17,9.569062);
   hmc__25->SetBinError(18,9.474062);
   hmc__25->SetBinError(19,8.381362);
   hmc__25->SetBinError(20,9.08261);
   hmc__25->SetBinError(21,9.799948);
   hmc__25->SetBinError(22,9.964283);
   hmc__25->SetBinError(23,8.879751);
   hmc__25->SetBinError(24,8.262694);
   hmc__25->SetBinError(25,7.721772);
   hmc__25->SetBinError(26,18.81473);
   hmc__25->SetBinError(27,6.900153);
   hmc__25->SetBinError(28,6.302111);
   hmc__25->SetBinError(29,11.93042);
   hmc__25->SetBinError(30,10.78168);
   hmc__25->SetBinError(31,2.02723);
   hmc__25->SetBinError(32,0.3895343);
   hmc__25->SetBinError(33,0.3895343);
   hmc__25->SetMinimum(-0.4746253);
   hmc__25->SetMaximum(49.83565);
   hmc__25->SetEntries(469.1651);
   hmc__25->SetLineWidth(5);
   hmc__25->GetXaxis()->SetLabelFont(42);
   hmc__25->GetXaxis()->SetTitleOffset(1);
   hmc__25->GetXaxis()->SetTitleFont(42);
   hmc__25->GetYaxis()->SetTitle("Event counts");
   hmc__25->GetYaxis()->SetLabelFont(132);
   hmc__25->GetYaxis()->SetLabelSize(0.04);
   hmc__25->GetYaxis()->SetTitleSize(0.05);
   hmc__25->GetYaxis()->SetTitleOffset(0.73);
   hmc__25->GetYaxis()->SetTitleFont(132);
   hmc__25->GetZaxis()->SetLabelFont(42);
   hmc__25->GetZaxis()->SetTitleOffset(1);
   hmc__25->GetZaxis()->SetTitleFont(42);
   hmc__25->Draw("hist");
   
   THStack *hs9 = new THStack();
   hs9->SetName("hs9");
   hs9->SetTitle("");
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",32,0,1100);
   hs9_stack_9->SetMinimum(-3.239374e-08);
   hs9_stack_9->SetMaximum(24.91783);
   hs9_stack_9->SetDirectory(0);
   hs9_stack_9->SetStats(0);
   hs9_stack_9->SetLineWidth(2);
   hs9_stack_9->SetMarkerStyle(20);
   hs9_stack_9->GetXaxis()->SetNdivisions(509);
   hs9_stack_9->GetXaxis()->SetLabelFont(132);
   hs9_stack_9->GetXaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetXaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetXaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetXaxis()->SetTitleFont(132);
   hs9_stack_9->GetYaxis()->SetNdivisions(509);
   hs9_stack_9->GetYaxis()->SetLabelFont(132);
   hs9_stack_9->GetYaxis()->SetLabelOffset(0.01);
   hs9_stack_9->GetYaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetYaxis()->SetTitleOffset(0.95);
   hs9_stack_9->GetYaxis()->SetTitleFont(132);
   hs9_stack_9->GetZaxis()->SetLabelFont(132);
   hs9_stack_9->GetZaxis()->SetLabelSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleSize(0.08);
   hs9_stack_9->GetZaxis()->SetTitleOffset(1.2);
   hs9_stack_9->GetZaxis()->SetTitleFont(132);
   hs9->SetHistogram(hs9_stack_9);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hbadmatch_stack_1->SetBinContent(2,0.5850745);
   hbadmatch_stack_1->SetBinContent(3,0.7319179);
   hbadmatch_stack_1->SetBinContent(4,0.9167709);
   hbadmatch_stack_1->SetBinContent(5,0.8552974);
   hbadmatch_stack_1->SetBinContent(6,0.4295756);
   hbadmatch_stack_1->SetBinContent(7,0.536893);
   hbadmatch_stack_1->SetBinContent(8,1.01081);
   hbadmatch_stack_1->SetBinContent(9,1.932906);
   hbadmatch_stack_1->SetBinContent(10,0.6357243);
   hbadmatch_stack_1->SetBinContent(11,0.1967154);
   hbadmatch_stack_1->SetBinContent(12,0.6428101);
   hbadmatch_stack_1->SetBinContent(13,0.8770706);
   hbadmatch_stack_1->SetBinContent(14,0.7287998);
   hbadmatch_stack_1->SetBinContent(16,0.7876176);
   hbadmatch_stack_1->SetBinContent(17,0.5901461);
   hbadmatch_stack_1->SetBinContent(18,0.536893);
   hbadmatch_stack_1->SetBinContent(19,0.536893);
   hbadmatch_stack_1->SetBinContent(20,0.8770706);
   hbadmatch_stack_1->SetBinContent(21,0.5867651);
   hbadmatch_stack_1->SetBinContent(22,0.1967154);
   hbadmatch_stack_1->SetBinContent(23,0.1967154);
   hbadmatch_stack_1->SetBinContent(24,0.610593);
   hbadmatch_stack_1->SetBinContent(25,0.3934307);
   hbadmatch_stack_1->SetBinContent(26,0.3401776);
   hbadmatch_stack_1->SetBinContent(27,0.4219173);
   hbadmatch_stack_1->SetBinContent(28,0.1950248);
   hbadmatch_stack_1->SetBinContent(29,0.3401776);
   hbadmatch_stack_1->SetBinContent(30,0.390963);
   hbadmatch_stack_1->SetBinContent(31,0.1950248);
   hbadmatch_stack_1->SetBinError(2,0.337793);
   hbadmatch_stack_1->SetBinError(3,0.438694);
   hbadmatch_stack_1->SetBinError(4,0.5360354);
   hbadmatch_stack_1->SetBinError(5,0.4291307);
   hbadmatch_stack_1->SetBinError(6,0.3050389);
   hbadmatch_stack_1->SetBinError(7,0.3929602);
   hbadmatch_stack_1->SetBinError(8,0.5420441);
   hbadmatch_stack_1->SetBinError(9,0.7689169);
   hbadmatch_stack_1->SetBinError(10,0.369134);
   hbadmatch_stack_1->SetBinError(11,0.1967154);
   hbadmatch_stack_1->SetBinError(12,0.3719207);
   hbadmatch_stack_1->SetBinError(13,0.5197486);
   hbadmatch_stack_1->SetBinError(14,0.5546409);
   hbadmatch_stack_1->SetBinError(16,0.4661336);
   hbadmatch_stack_1->SetBinError(17,0.340721);
   hbadmatch_stack_1->SetBinError(18,0.3929602);
   hbadmatch_stack_1->SetBinError(19,0.3929602);
   hbadmatch_stack_1->SetBinError(20,0.5197486);
   hbadmatch_stack_1->SetBinError(21,0.3387718);
   hbadmatch_stack_1->SetBinError(22,0.1967154);
   hbadmatch_stack_1->SetBinError(23,0.1967154);
   hbadmatch_stack_1->SetBinError(24,0.3530271);
   hbadmatch_stack_1->SetBinError(25,0.2781975);
   hbadmatch_stack_1->SetBinError(26,0.3401776);
   hbadmatch_stack_1->SetBinError(27,0.2990198);
   hbadmatch_stack_1->SetBinError(28,0.1950249);
   hbadmatch_stack_1->SetBinError(29,0.3401776);
   hbadmatch_stack_1->SetBinError(30,0.390963);
   hbadmatch_stack_1->SetBinError(31,0.1950249);
   hbadmatch_stack_1->SetEntries(71);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1538;
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
   hs9->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hext_stack_2->SetBinContent(1,0.7309963);
   hext_stack_2->SetBinContent(2,2.028585);
   hext_stack_2->SetBinContent(3,1.932023);
   hext_stack_2->SetBinContent(4,2.745221);
   hext_stack_2->SetBinContent(5,2.110787);
   hext_stack_2->SetBinContent(6,2.6702);
   hext_stack_2->SetBinContent(7,1.868591);
   hext_stack_2->SetBinContent(8,1.697008);
   hext_stack_2->SetBinContent(9,3.006186);
   hext_stack_2->SetBinContent(10,1.290409);
   hext_stack_2->SetBinContent(11,1.607626);
   hext_stack_2->SetBinContent(12,0.6487947);
   hext_stack_2->SetBinContent(13,1.137595);
   hext_stack_2->SetBinContent(14,0.6487947);
   hext_stack_2->SetBinContent(15,0.9660115);
   hext_stack_2->SetBinContent(16,0.3243973);
   hext_stack_2->SetBinContent(17,0.4065989);
   hext_stack_2->SetBinContent(18,0.8131978);
   hext_stack_2->SetBinContent(19,0.4065989);
   hext_stack_2->SetBinContent(20,1.137595);
   hext_stack_2->SetBinContent(21,1.055394);
   hext_stack_2->SetBinContent(22,0.6416141);
   hext_stack_2->SetBinContent(23,0.4065989);
   hext_stack_2->SetBinContent(24,1.048213);
   hext_stack_2->SetBinContent(25,0.4065989);
   hext_stack_2->SetBinContent(27,0.9660115);
   hext_stack_2->SetBinContent(28,2.021405);
   hext_stack_2->SetBinContent(29,1.055394);
   hext_stack_2->SetBinContent(30,1.137595);
   hext_stack_2->SetBinError(1,0.5201503);
   hext_stack_2->SetBinError(2,0.8315593);
   hext_stack_2->SetBinError(3,1.016762);
   hext_stack_2->SetBinError(4,1.168097);
   hext_stack_2->SetBinError(5,0.8669371);
   hext_stack_2->SetBinError(6,1.050314);
   hext_stack_2->SetBinError(7,0.840497);
   hext_stack_2->SetBinError(8,0.8873887);
   hext_stack_2->SetBinError(9,1.068791);
   hext_stack_2->SetBinError(10,0.788756);
   hext_stack_2->SetBinError(11,0.9636239);
   hext_stack_2->SetBinError(12,0.4587671);
   hext_stack_2->SetBinError(13,0.6602113);
   hext_stack_2->SetBinError(14,0.4587671);
   hext_stack_2->SetBinError(15,0.7189592);
   hext_stack_2->SetBinError(16,0.3243973);
   hext_stack_2->SetBinError(17,0.4065989);
   hext_stack_2->SetBinError(18,0.5750177);
   hext_stack_2->SetBinError(19,0.4065989);
   hext_stack_2->SetBinError(20,0.6602113);
   hext_stack_2->SetBinError(21,0.6130171);
   hext_stack_2->SetBinError(22,0.6416141);
   hext_stack_2->SetBinError(23,0.4065989);
   hext_stack_2->SetBinError(24,0.7595995);
   hext_stack_2->SetBinError(25,0.4065989);
   hext_stack_2->SetBinError(27,0.7189592);
   hext_stack_2->SetBinError(28,0.9448239);
   hext_stack_2->SetBinError(29,0.6130171);
   hext_stack_2->SetBinError(30,0.6602113);
   hext_stack_2->SetEntries(92);

   ci = 1539;
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
   hs9->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hdirt_stack_3->SetBinContent(1,0.6795074);
   hdirt_stack_3->SetBinContent(2,0.002351481);
   hdirt_stack_3->SetBinContent(3,0.1380715);
   hdirt_stack_3->SetBinContent(4,0.3381872);
   hdirt_stack_3->SetBinContent(5,0.4049124);
   hdirt_stack_3->SetBinContent(6,0.1380715);
   hdirt_stack_3->SetBinContent(7,0.1380715);
   hdirt_stack_3->SetBinContent(8,0.1380715);
   hdirt_stack_3->SetBinContent(17,0.1380715);
   hdirt_stack_3->SetBinContent(28,0.2623434);
   hdirt_stack_3->SetBinError(1,0.4921031);
   hdirt_stack_3->SetBinError(2,0.002351481);
   hdirt_stack_3->SetBinError(3,0.1380715);
   hdirt_stack_3->SetBinError(4,0.3381872);
   hdirt_stack_3->SetBinError(5,0.4049124);
   hdirt_stack_3->SetBinError(6,0.1380715);
   hdirt_stack_3->SetBinError(7,0.1380715);
   hdirt_stack_3->SetBinError(8,0.1380715);
   hdirt_stack_3->SetBinError(17,0.1380715);
   hdirt_stack_3->SetBinError(28,0.2623434);
   hdirt_stack_3->SetEntries(11);

   ci = 1540;
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
   hs9->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   houtFV_stack_4->SetBinContent(1,8.906823);
   houtFV_stack_4->SetBinContent(2,4.532906);
   houtFV_stack_4->SetBinContent(3,1.853885);
   houtFV_stack_4->SetBinContent(4,1.463836);
   houtFV_stack_4->SetBinContent(5,1.989393);
   houtFV_stack_4->SetBinContent(6,2.107235);
   houtFV_stack_4->SetBinContent(7,2.769121);
   houtFV_stack_4->SetBinContent(8,3.324483);
   houtFV_stack_4->SetBinContent(9,2.151357);
   houtFV_stack_4->SetBinContent(10,1.74705);
   houtFV_stack_4->SetBinContent(11,2.917356);
   houtFV_stack_4->SetBinContent(12,1.91052);
   houtFV_stack_4->SetBinContent(13,2.877799);
   houtFV_stack_4->SetBinContent(14,2.300569);
   houtFV_stack_4->SetBinContent(15,2.247316);
   houtFV_stack_4->SetBinContent(16,2.444031);
   houtFV_stack_4->SetBinContent(17,2.341268);
   houtFV_stack_4->SetBinContent(18,3.427608);
   houtFV_stack_4->SetBinContent(19,3.226391);
   houtFV_stack_4->SetBinContent(20,2.473408);
   houtFV_stack_4->SetBinContent(21,3.129458);
   houtFV_stack_4->SetBinContent(22,2.676958);
   houtFV_stack_4->SetBinContent(23,2.442036);
   houtFV_stack_4->SetBinContent(24,3.463659);
   houtFV_stack_4->SetBinContent(25,1.570342);
   houtFV_stack_4->SetBinContent(26,1.647968);
   houtFV_stack_4->SetBinContent(27,2.392469);
   houtFV_stack_4->SetBinContent(28,1.463836);
   houtFV_stack_4->SetBinContent(29,1.320373);
   houtFV_stack_4->SetBinContent(30,1.820718);
   houtFV_stack_4->SetBinError(1,1.574081);
   houtFV_stack_4->SetBinError(2,1.088539);
   houtFV_stack_4->SetBinError(3,0.6789509);
   houtFV_stack_4->SetBinError(4,0.620407);
   houtFV_stack_4->SetBinError(5,0.7718526);
   houtFV_stack_4->SetBinError(6,0.6801976);
   houtFV_stack_4->SetBinError(7,0.7633301);
   houtFV_stack_4->SetBinError(8,0.9211559);
   houtFV_stack_4->SetBinError(9,0.6944709);
   houtFV_stack_4->SetBinError(10,0.6791481);
   houtFV_stack_4->SetBinError(11,0.7921619);
   houtFV_stack_4->SetBinError(12,0.6511312);
   houtFV_stack_4->SetBinError(13,0.8997006);
   houtFV_stack_4->SetBinError(14,0.7071359);
   houtFV_stack_4->SetBinError(15,0.7337357);
   houtFV_stack_4->SetBinError(16,0.759648);
   houtFV_stack_4->SetBinError(17,0.7195206);
   houtFV_stack_4->SetBinError(18,0.8778096);
   houtFV_stack_4->SetBinError(19,0.9433917);
   houtFV_stack_4->SetBinError(20,0.8647253);
   houtFV_stack_4->SetBinError(21,0.9002741);
   houtFV_stack_4->SetBinError(22,0.7946369);
   houtFV_stack_4->SetBinError(23,0.7098616);
   houtFV_stack_4->SetBinError(24,0.8866567);
   houtFV_stack_4->SetBinError(25,0.5552036);
   houtFV_stack_4->SetBinError(26,0.7564229);
   houtFV_stack_4->SetBinError(27,0.7848912);
   houtFV_stack_4->SetBinError(28,0.620407);
   houtFV_stack_4->SetBinError(29,0.5548703);
   houtFV_stack_4->SetBinError(30,0.7235332);
   houtFV_stack_4->SetEntries(344);

   ci = 1541;
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
   hs9->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(29,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(28,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(29,0.02789998);
   hNCpi0inFVcoh_stack_5->SetEntries(3);

   ci = 1542;
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
   hs9->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVqe_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(27,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(29,0.09731799);
   hNCpi0inFVqe_stack_6->SetBinContent(30,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(27,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(29,0.097318);
   hNCpi0inFVqe_stack_6->SetBinError(30,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(26);

   ci = 1543;
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
   hs9->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVres_stack_7->SetBinContent(1,3.735792);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.026498);
   hNCpi0inFVres_stack_7->SetBinContent(3,2.733712);
   hNCpi0inFVres_stack_7->SetBinContent(4,2.537748);
   hNCpi0inFVres_stack_7->SetBinContent(5,4.029074);
   hNCpi0inFVres_stack_7->SetBinContent(6,2.690698);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.85677);
   hNCpi0inFVres_stack_7->SetBinContent(8,5.021865);
   hNCpi0inFVres_stack_7->SetBinContent(9,3.122984);
   hNCpi0inFVres_stack_7->SetBinContent(10,3.986892);
   hNCpi0inFVres_stack_7->SetBinContent(11,4.58841);
   hNCpi0inFVres_stack_7->SetBinContent(12,3.765188);
   hNCpi0inFVres_stack_7->SetBinContent(13,2.634898);
   hNCpi0inFVres_stack_7->SetBinContent(14,4.408225);
   hNCpi0inFVres_stack_7->SetBinContent(15,2.857265);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.417514);
   hNCpi0inFVres_stack_7->SetBinContent(17,2.356394);
   hNCpi0inFVres_stack_7->SetBinContent(18,3.585666);
   hNCpi0inFVres_stack_7->SetBinContent(19,2.873548);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.961488);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.99627);
   hNCpi0inFVres_stack_7->SetBinContent(22,3.401488);
   hNCpi0inFVres_stack_7->SetBinContent(23,4.115102);
   hNCpi0inFVres_stack_7->SetBinContent(24,3.234416);
   hNCpi0inFVres_stack_7->SetBinContent(25,4.351424);
   hNCpi0inFVres_stack_7->SetBinContent(26,3.416265);
   hNCpi0inFVres_stack_7->SetBinContent(27,4.36421);
   hNCpi0inFVres_stack_7->SetBinContent(28,3.555438);
   hNCpi0inFVres_stack_7->SetBinContent(29,6.558365);
   hNCpi0inFVres_stack_7->SetBinContent(30,5.842582);
   hNCpi0inFVres_stack_7->SetBinContent(31,0.08369996);
   hNCpi0inFVres_stack_7->SetBinError(1,0.6438754);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5610193);
   hNCpi0inFVres_stack_7->SetBinError(3,0.5167825);
   hNCpi0inFVres_stack_7->SetBinError(4,0.5245074);
   hNCpi0inFVres_stack_7->SetBinError(5,0.6449826);
   hNCpi0inFVres_stack_7->SetBinError(6,0.5033653);
   hNCpi0inFVres_stack_7->SetBinError(7,0.5338844);
   hNCpi0inFVres_stack_7->SetBinError(8,0.8279301);
   hNCpi0inFVres_stack_7->SetBinError(9,0.5522203);
   hNCpi0inFVres_stack_7->SetBinError(10,0.6492929);
   hNCpi0inFVres_stack_7->SetBinError(11,0.741022);
   hNCpi0inFVres_stack_7->SetBinError(12,0.6489433);
   hNCpi0inFVres_stack_7->SetBinError(13,0.5018165);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7460387);
   hNCpi0inFVres_stack_7->SetBinError(15,0.4886522);
   hNCpi0inFVres_stack_7->SetBinError(16,0.6592568);
   hNCpi0inFVres_stack_7->SetBinError(17,0.4447293);
   hNCpi0inFVres_stack_7->SetBinError(18,0.6442786);
   hNCpi0inFVres_stack_7->SetBinError(19,0.5800638);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6918102);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5375171);
   hNCpi0inFVres_stack_7->SetBinError(22,0.5991519);
   hNCpi0inFVres_stack_7->SetBinError(23,0.6658659);
   hNCpi0inFVres_stack_7->SetBinError(24,0.5246923);
   hNCpi0inFVres_stack_7->SetBinError(25,0.7092192);
   hNCpi0inFVres_stack_7->SetBinError(26,0.5535108);
   hNCpi0inFVres_stack_7->SetBinError(27,0.7006149);
   hNCpi0inFVres_stack_7->SetBinError(28,0.6239205);
   hNCpi0inFVres_stack_7->SetBinError(29,0.9123217);
   hNCpi0inFVres_stack_7->SetBinError(30,0.7817464);
   hNCpi0inFVres_stack_7->SetBinError(31,0.04832419);
   hNCpi0inFVres_stack_7->SetEntries(2042);

   ci = 1544;
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
   hs9->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVdis_stack_8->SetBinContent(1,1.08794);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.185258);
   hNCpi0inFVdis_stack_8->SetBinContent(3,0.6699361);
   hNCpi0inFVdis_stack_8->SetBinContent(4,0.9339901);
   hNCpi0inFVdis_stack_8->SetBinContent(5,0.8223901);
   hNCpi0inFVdis_stack_8->SetBinContent(6,0.3205179);
   hNCpi0inFVdis_stack_8->SetBinContent(7,0.8790222);
   hNCpi0inFVdis_stack_8->SetBinContent(8,0.3905998);
   hNCpi0inFVdis_stack_8->SetBinContent(9,1.016858);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.7538042);
   hNCpi0inFVdis_stack_8->SetBinContent(11,0.6275859);
   hNCpi0inFVdis_stack_8->SetBinContent(12,1.269126);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.9906222);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.8220537);
   hNCpi0inFVdis_stack_8->SetBinContent(15,0.697836);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.08794);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.9195399);
   hNCpi0inFVdis_stack_8->SetBinContent(18,0.5717859);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.8366721);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.8502901);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.920372);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.5015358);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.9059218);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.5862361);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.9763402);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.697004);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.613304);
   hNCpi0inFVdis_stack_8->SetBinContent(28,0.6420361);
   hNCpi0inFVdis_stack_8->SetBinContent(29,1.255004);
   hNCpi0inFVdis_stack_8->SetBinContent(30,1.743594);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.3769979);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3893562);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.2901718);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.3344153);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.3297271);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.1252919);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.3599208);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.1043922);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.3080627);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.3453893);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.2387875);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.4320791);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.3642206);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.2078513);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.29151);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3769979);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.2922873);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.2355051);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.3199419);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3309054);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.3235708);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.1658436);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2798147);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2861196);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3728455);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.2563433);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.2517472);
   hNCpi0inFVdis_stack_8->SetBinError(28,0.2888274);
   hNCpi0inFVdis_stack_8->SetBinError(29,0.2850966);
   hNCpi0inFVdis_stack_8->SetBinError(30,0.4823735);
   hNCpi0inFVdis_stack_8->SetEntries(441);

   ci = 1545;
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
   hs9->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(5);

   ci = 1546;
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
   hs9->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hCCpi0inFV_stack_10->SetBinContent(1,4.168269);
   hCCpi0inFV_stack_10->SetBinContent(2,4.244664);
   hCCpi0inFV_stack_10->SetBinContent(3,2.002419);
   hCCpi0inFV_stack_10->SetBinContent(4,2.37343);
   hCCpi0inFV_stack_10->SetBinContent(5,4.01302);
   hCCpi0inFV_stack_10->SetBinContent(6,2.817197);
   hCCpi0inFV_stack_10->SetBinContent(7,2.886785);
   hCCpi0inFV_stack_10->SetBinContent(8,2.497284);
   hCCpi0inFV_stack_10->SetBinContent(9,2.228971);
   hCCpi0inFV_stack_10->SetBinContent(10,3.855488);
   hCCpi0inFV_stack_10->SetBinContent(11,2.621881);
   hCCpi0inFV_stack_10->SetBinContent(12,2.055672);
   hCCpi0inFV_stack_10->SetBinContent(13,2.100473);
   hCCpi0inFV_stack_10->SetBinContent(14,2.715045);
   hCCpi0inFV_stack_10->SetBinContent(15,4.88202);
   hCCpi0inFV_stack_10->SetBinContent(16,2.245626);
   hCCpi0inFV_stack_10->SetBinContent(17,3.556464);
   hCCpi0inFV_stack_10->SetBinContent(18,3.755385);
   hCCpi0inFV_stack_10->SetBinContent(19,2.681084);
   hCCpi0inFV_stack_10->SetBinContent(20,2.980925);
   hCCpi0inFV_stack_10->SetBinContent(21,2.177412);
   hCCpi0inFV_stack_10->SetBinContent(22,4.500358);
   hCCpi0inFV_stack_10->SetBinContent(23,3.17933);
   hCCpi0inFV_stack_10->SetBinContent(24,1.855576);
   hCCpi0inFV_stack_10->SetBinContent(25,2.822584);
   hCCpi0inFV_stack_10->SetBinContent(26,2.34829);
   hCCpi0inFV_stack_10->SetBinContent(27,1.713804);
   hCCpi0inFV_stack_10->SetBinContent(28,3.322793);
   hCCpi0inFV_stack_10->SetBinContent(29,4.839881);
   hCCpi0inFV_stack_10->SetBinContent(30,5.769683);
   hCCpi0inFV_stack_10->SetBinError(1,0.9823454);
   hCCpi0inFV_stack_10->SetBinError(2,1.037481);
   hCCpi0inFV_stack_10->SetBinError(3,0.7348366);
   hCCpi0inFV_stack_10->SetBinError(4,0.7183754);
   hCCpi0inFV_stack_10->SetBinError(5,1.014883);
   hCCpi0inFV_stack_10->SetBinError(6,0.840616);
   hCCpi0inFV_stack_10->SetBinError(7,0.8223726);
   hCCpi0inFV_stack_10->SetBinError(8,0.7339878);
   hCCpi0inFV_stack_10->SetBinError(9,0.7689674);
   hCCpi0inFV_stack_10->SetBinError(10,0.9614966);
   hCCpi0inFV_stack_10->SetBinError(11,0.8176635);
   hCCpi0inFV_stack_10->SetBinError(12,0.7082781);
   hCCpi0inFV_stack_10->SetBinError(13,0.6782476);
   hCCpi0inFV_stack_10->SetBinError(14,0.8658627);
   hCCpi0inFV_stack_10->SetBinError(15,1.129036);
   hCCpi0inFV_stack_10->SetBinError(16,0.7332843);
   hCCpi0inFV_stack_10->SetBinError(17,1.019922);
   hCCpi0inFV_stack_10->SetBinError(18,1.042849);
   hCCpi0inFV_stack_10->SetBinError(19,0.8779318);
   hCCpi0inFV_stack_10->SetBinError(20,0.8552677);
   hCCpi0inFV_stack_10->SetBinError(21,0.718378);
   hCCpi0inFV_stack_10->SetBinError(22,1.104802);
   hCCpi0inFV_stack_10->SetBinError(23,0.8779761);
   hCCpi0inFV_stack_10->SetBinError(24,0.6794384);
   hCCpi0inFV_stack_10->SetBinError(25,0.8783936);
   hCCpi0inFV_stack_10->SetBinError(26,0.8089892);
   hCCpi0inFV_stack_10->SetBinError(27,0.6207051);
   hCCpi0inFV_stack_10->SetBinError(28,0.9207963);
   hCCpi0inFV_stack_10->SetBinError(29,1.092906);
   hCCpi0inFV_stack_10->SetBinError(30,1.251808);
   hCCpi0inFV_stack_10->SetEntries(397);

   ci = 1547;
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
   hs9->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hNCinFV_stack_11->SetBinContent(1,1.465526);
   hNCinFV_stack_11->SetBinContent(2,1.467217);
   hNCinFV_stack_11->SetBinContent(3,1.700888);
   hNCinFV_stack_11->SetBinContent(4,0.5884556);
   hNCinFV_stack_11->SetBinContent(5,0.3934307);
   hNCinFV_stack_11->SetBinContent(6,1.121968);
   hNCinFV_stack_11->SetBinContent(7,0.9303237);
   hNCinFV_stack_11->SetBinContent(8,0.3917402);
   hNCinFV_stack_11->SetBinContent(9,0.3401776);
   hNCinFV_stack_11->SetBinContent(10,0.3401776);
   hNCinFV_stack_11->SetBinContent(12,0.1950248);
   hNCinFV_stack_11->SetBinContent(13,0.1950248);
   hNCinFV_stack_11->SetBinContent(14,0.5884556);
   hNCinFV_stack_11->SetBinContent(15,0.536893);
   hNCinFV_stack_11->SetBinContent(16,0.6803553);
   hNCinFV_stack_11->SetBinContent(17,0.1950248);
   hNCinFV_stack_11->SetBinContent(18,0.5884556);
   hNCinFV_stack_11->SetBinContent(19,0.5867651);
   hNCinFV_stack_11->SetBinContent(20,0.1967154);
   hNCinFV_stack_11->SetBinContent(21,0.7336084);
   hNCinFV_stack_11->SetBinContent(22,2.000729);
   hNCinFV_stack_11->SetBinContent(23,0.536893);
   hNCinFV_stack_11->SetBinContent(24,0.785171);
   hNCinFV_stack_11->SetBinContent(25,0.3934307);
   hNCinFV_stack_11->SetBinContent(26,0.9785053);
   hNCinFV_stack_11->SetBinContent(27,0.3917402);
   hNCinFV_stack_11->SetBinContent(28,1.320373);
   hNCinFV_stack_11->SetBinContent(29,1.073786);
   hNCinFV_stack_11->SetBinContent(30,2.197444);
   hNCinFV_stack_11->SetBinError(1,0.6209405);
   hNCinFV_stack_11->SetBinError(2,0.6214735);
   hNCinFV_stack_11->SetBinError(3,0.7606603);
   hNCinFV_stack_11->SetBinError(4,0.3397478);
   hNCinFV_stack_11->SetBinError(5,0.2781975);
   hNCinFV_stack_11->SetBinError(6,0.5181909);
   hNCinFV_stack_11->SetBinError(7,0.4814682);
   hNCinFV_stack_11->SetBinError(8,0.2770047);
   hNCinFV_stack_11->SetBinError(9,0.3401776);
   hNCinFV_stack_11->SetBinError(10,0.3401776);
   hNCinFV_stack_11->SetBinError(12,0.1950249);
   hNCinFV_stack_11->SetBinError(13,0.1950249);
   hNCinFV_stack_11->SetBinError(14,0.3397478);
   hNCinFV_stack_11->SetBinError(15,0.3929602);
   hNCinFV_stack_11->SetBinError(16,0.4810838);
   hNCinFV_stack_11->SetBinError(17,0.1950249);
   hNCinFV_stack_11->SetBinError(18,0.3397478);
   hNCinFV_stack_11->SetBinError(19,0.3387718);
   hNCinFV_stack_11->SetBinError(20,0.1967154);
   hNCinFV_stack_11->SetBinError(21,0.4394482);
   hNCinFV_stack_11->SetBinError(22,0.7343859);
   hNCinFV_stack_11->SetBinError(23,0.3929602);
   hNCinFV_stack_11->SetBinError(24,0.3925882);
   hNCinFV_stack_11->SetBinError(25,0.2781975);
   hNCinFV_stack_11->SetBinError(26,0.4376048);
   hNCinFV_stack_11->SetBinError(27,0.2770047);
   hNCinFV_stack_11->SetBinError(28,0.5548703);
   hNCinFV_stack_11->SetBinError(29,0.5557297);
   hNCinFV_stack_11->SetBinError(30,0.760276);
   hNCinFV_stack_11->SetEntries(97);

   ci = 1548;
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
   hs9->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnumuCCinFV_stack_12->SetBinContent(1,2.92851);
   hnumuCCinFV_stack_12->SetBinContent(2,3.509563);
   hnumuCCinFV_stack_12->SetBinContent(3,3.74551);
   hnumuCCinFV_stack_12->SetBinContent(4,4.132789);
   hnumuCCinFV_stack_12->SetBinContent(5,1.575634);
   hnumuCCinFV_stack_12->SetBinContent(6,3.459829);
   hnumuCCinFV_stack_12->SetBinContent(7,3.091945);
   hnumuCCinFV_stack_12->SetBinContent(8,3.616625);
   hnumuCCinFV_stack_12->SetBinContent(9,3.764619);
   hnumuCCinFV_stack_12->SetBinContent(10,2.162641);
   hnumuCCinFV_stack_12->SetBinContent(11,2.82311);
   hnumuCCinFV_stack_12->SetBinContent(12,2.518806);
   hnumuCCinFV_stack_12->SetBinContent(13,2.453401);
   hnumuCCinFV_stack_12->SetBinContent(14,1.885218);
   hnumuCCinFV_stack_12->SetBinContent(15,2.297126);
   hnumuCCinFV_stack_12->SetBinContent(16,2.595675);
   hnumuCCinFV_stack_12->SetBinContent(17,3.183601);
   hnumuCCinFV_stack_12->SetBinContent(18,1.687344);
   hnumuCCinFV_stack_12->SetBinContent(19,1.489118);
   hnumuCCinFV_stack_12->SetBinContent(20,3.57014);
   hnumuCCinFV_stack_12->SetBinContent(21,3.666911);
   hnumuCCinFV_stack_12->SetBinContent(22,2.358756);
   hnumuCCinFV_stack_12->SetBinContent(23,3.619801);
   hnumuCCinFV_stack_12->SetBinContent(24,2.072021);
   hnumuCCinFV_stack_12->SetBinContent(25,2.769162);
   hnumuCCinFV_stack_12->SetBinContent(26,3.225055);
   hnumuCCinFV_stack_12->SetBinContent(27,1.810828);
   hnumuCCinFV_stack_12->SetBinContent(28,2.97107);
   hnumuCCinFV_stack_12->SetBinContent(29,5.208951);
   hnumuCCinFV_stack_12->SetBinContent(30,2.060326);
   hnumuCCinFV_stack_12->SetBinContent(31,0.3917402);
   hnumuCCinFV_stack_12->SetBinError(1,0.994495);
   hnumuCCinFV_stack_12->SetBinError(2,1.611492);
   hnumuCCinFV_stack_12->SetBinError(3,1.262768);
   hnumuCCinFV_stack_12->SetBinError(4,1.099767);
   hnumuCCinFV_stack_12->SetBinError(5,0.7228912);
   hnumuCCinFV_stack_12->SetBinError(6,1.110412);
   hnumuCCinFV_stack_12->SetBinError(7,0.9257851);
   hnumuCCinFV_stack_12->SetBinError(8,1.12656);
   hnumuCCinFV_stack_12->SetBinError(9,1.177067);
   hnumuCCinFV_stack_12->SetBinError(10,0.7378866);
   hnumuCCinFV_stack_12->SetBinError(11,0.8333818);
   hnumuCCinFV_stack_12->SetBinError(12,0.8056606);
   hnumuCCinFV_stack_12->SetBinError(13,0.8583985);
   hnumuCCinFV_stack_12->SetBinError(14,0.6781681);
   hnumuCCinFV_stack_12->SetBinError(15,0.7426682);
   hnumuCCinFV_stack_12->SetBinError(16,0.9021927);
   hnumuCCinFV_stack_12->SetBinError(17,1.089493);
   hnumuCCinFV_stack_12->SetBinError(18,0.7320714);
   hnumuCCinFV_stack_12->SetBinError(19,0.5960787);
   hnumuCCinFV_stack_12->SetBinError(20,1.404533);
   hnumuCCinFV_stack_12->SetBinError(21,1.042003);
   hnumuCCinFV_stack_12->SetBinError(22,0.7779024);
   hnumuCCinFV_stack_12->SetBinError(23,0.9719942);
   hnumuCCinFV_stack_12->SetBinError(24,0.7592995);
   hnumuCCinFV_stack_12->SetBinError(25,0.9302417);
   hnumuCCinFV_stack_12->SetBinError(26,0.9692378);
   hnumuCCinFV_stack_12->SetBinError(27,0.6655172);
   hnumuCCinFV_stack_12->SetBinError(28,0.8353657);
   hnumuCCinFV_stack_12->SetBinError(29,1.48902);
   hnumuCCinFV_stack_12->SetBinError(30,0.6534963);
   hnumuCCinFV_stack_12->SetBinError(31,0.2770047);
   hnumuCCinFV_stack_12->SetEntries(332);

   ci = 1549;
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
   hs9->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hnueCCinFV_stack_13->SetBinContent(3,0.2502081);
   hnueCCinFV_stack_13->SetBinContent(5,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(14,0.4523934);
   hnueCCinFV_stack_13->SetBinContent(21,0.56212);
   hnueCCinFV_stack_13->SetBinContent(22,0.4041031);
   hnueCCinFV_stack_13->SetBinContent(24,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(25,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(26,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(29,1.569686);
   hnueCCinFV_stack_13->SetBinError(3,0.2502081);
   hnueCCinFV_stack_13->SetBinError(5,0.1950249);
   hnueCCinFV_stack_13->SetBinError(14,0.320043);
   hnueCCinFV_stack_13->SetBinError(21,0.4149909);
   hnueCCinFV_stack_13->SetBinError(22,0.4041031);
   hnueCCinFV_stack_13->SetBinError(24,0.2171002);
   hnueCCinFV_stack_13->SetBinError(25,0.3921167);
   hnueCCinFV_stack_13->SetBinError(26,0.1967154);
   hnueCCinFV_stack_13->SetBinError(29,1.569686);
   hnueCCinFV_stack_13->SetEntries(12);

   ci = 1550;
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
   hs9->Add(hnueCCinFV_stack_13,"");
   hs9->Draw("hist same");
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);
   hmcerror__26->SetBinContent(1,23.73126);
   hmcerror__26->SetBinContent(2,20.58212);
   hmcerror__26->SetBinContent(3,15.75857);
   hmcerror__26->SetBinContent(4,16.03043);
   hmcerror__26->SetBinContent(5,16.38896);
   hmcerror__26->SetBinContent(6,15.75529);
   hmcerror__26->SetBinContent(7,15.95752);
   hmcerror__26->SetBinContent(8,18.08849);
   hmcerror__26->SetBinContent(9,17.64776);
   hmcerror__26->SetBinContent(10,14.80008);
   hmcerror__26->SetBinContent(11,15.38269);
   hmcerror__26->SetBinContent(12,13.08964);
   hmcerror__26->SetBinContent(13,13.32268);
   hmcerror__26->SetBinContent(14,14.54955);
   hmcerror__26->SetBinContent(15,14.54027);
   hmcerror__26->SetBinContent(16,14.66686);
   hmcerror__26->SetBinContent(17,13.68711);
   hmcerror__26->SetBinContent(18,15.02214);
   hmcerror__26->SetBinContent(19,12.69287);
   hmcerror__26->SetBinContent(20,16.271);
   hmcerror__26->SetBinContent(21,15.85621);
   hmcerror__26->SetBinContent(22,16.73806);
   hmcerror__26->SetBinContent(23,15.4303);
   hmcerror__26->SetBinContent(24,13.92878);
   hmcerror__26->SetBinContent(25,14.24642);
   hmcerror__26->SetBinContent(26,12.87788);
   hmcerror__26->SetBinContent(27,12.70218);
   hmcerror__26->SetBinContent(28,15.78222);
   hmcerror__26->SetBinContent(29,23.34683);
   hmcerror__26->SetBinContent(30,20.9908);
   hmcerror__26->SetBinContent(31,0.670465);
   hmcerror__26->SetBinError(1,16.67956);
   hmcerror__26->SetBinError(2,11.64847);
   hmcerror__26->SetBinError(3,13.49144);
   hmcerror__26->SetBinError(4,7.286008);
   hmcerror__26->SetBinError(5,9.642918);
   hmcerror__26->SetBinError(6,8.607826);
   hmcerror__26->SetBinError(7,8.831931);
   hmcerror__26->SetBinError(8,11.24129);
   hmcerror__26->SetBinError(9,17.3339);
   hmcerror__26->SetBinError(10,7.785771);
   hmcerror__26->SetBinError(11,11.43273);
   hmcerror__26->SetBinError(12,6.471582);
   hmcerror__26->SetBinError(13,10.68767);
   hmcerror__26->SetBinError(14,8.526938);
   hmcerror__26->SetBinError(15,7.801279);
   hmcerror__26->SetBinError(16,8.961804);
   hmcerror__26->SetBinError(17,9.569062);
   hmcerror__26->SetBinError(18,9.474062);
   hmcerror__26->SetBinError(19,8.381362);
   hmcerror__26->SetBinError(20,9.08261);
   hmcerror__26->SetBinError(21,9.799948);
   hmcerror__26->SetBinError(22,9.964283);
   hmcerror__26->SetBinError(23,8.879751);
   hmcerror__26->SetBinError(24,8.262694);
   hmcerror__26->SetBinError(25,7.721772);
   hmcerror__26->SetBinError(26,18.81473);
   hmcerror__26->SetBinError(27,6.900153);
   hmcerror__26->SetBinError(28,6.302111);
   hmcerror__26->SetBinError(29,11.93042);
   hmcerror__26->SetBinError(30,10.78168);
   hmcerror__26->SetBinError(31,2.02723);
   hmcerror__26->SetBinError(32,0.3895343);
   hmcerror__26->SetBinError(33,0.3895343);
   hmcerror__26->SetEntries(469.1651);

   ci = TColor::GetColor("#999999");
   hmcerror__26->SetFillColor(ci);
   hmcerror__26->SetFillStyle(3002);
   hmcerror__26->SetLineColor(12);
   hmcerror__26->SetLineWidth(0);
   hmcerror__26->SetMarkerColor(0);
   hmcerror__26->SetMarkerSize(0);
   hmcerror__26->GetXaxis()->SetLabelFont(42);
   hmcerror__26->GetXaxis()->SetTitleOffset(1);
   hmcerror__26->GetXaxis()->SetTitleFont(42);
   hmcerror__26->GetYaxis()->SetLabelFont(42);
   hmcerror__26->GetYaxis()->SetTitleFont(42);
   hmcerror__26->GetZaxis()->SetLabelFont(42);
   hmcerror__26->GetZaxis()->SetTitleOffset(1);
   hmcerror__26->GetZaxis()->SetTitleFont(42);
   hmcerror__26->Draw("same E2");
   
   Double_t _fx3033[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3033[32] = {
   14,
   14,
   9,
   10,
   14,
   12,
   19,
   17,
   11,
   15,
   15,
   9,
   10,
   17,
   12,
   12,
   10,
   10,
   11,
   10,
   20,
   13,
   13,
   10,
   17,
   13,
   19,
   11,
   20,
   10,
   0,
   0};
   Double_t _felx3033[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3033[32] = {
   3.9102,
   3.9102,
   3.19354,
   3.34883,
   3.9102,
   3.64022,
   4.5151,
   4.2835,
   3.4975,
   4.0385,
   4.0385,
   3.19354,
   3.34883,
   4.2835,
   3.64022,
   3.64022,
   3.34883,
   3.34883,
   3.4975,
   3.34883,
   4.6266,
   3.77763,
   3.77763,
   3.34883,
   4.2835,
   3.77763,
   4.5151,
   3.4975,
   4.6266,
   3.34883,
   0,
   0};
   Double_t _fehx3033[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3033[32] = {
   3.6898,
   3.6898,
   2.9582,
   3.1179,
   3.6898,
   3.4155,
   4.3011,
   4.0673,
   3.27,
   3.8197,
   3.8197,
   2.9582,
   3.1179,
   4.0673,
   3.4155,
   3.4155,
   3.1179,
   3.1179,
   3.27,
   3.1179,
   4.4133,
   3.5552,
   3.5552,
   3.1179,
   4.0673,
   3.5552,
   4.3011,
   3.27,
   4.4133,
   3.1179,
   1.1478,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(32,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1210);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(26.85463);
   Graph_Graph3033->SetDirectory(0);
   Graph_Graph3033->SetStats(0);
   Graph_Graph3033->SetLineWidth(2);
   Graph_Graph3033->SetMarkerStyle(20);
   Graph_Graph3033->GetXaxis()->SetNdivisions(509);
   Graph_Graph3033->GetXaxis()->SetLabelFont(132);
   Graph_Graph3033->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetXaxis()->SetTitleFont(132);
   Graph_Graph3033->GetYaxis()->SetNdivisions(509);
   Graph_Graph3033->GetYaxis()->SetLabelFont(132);
   Graph_Graph3033->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3033->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3033->GetYaxis()->SetTitleFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelFont(132);
   Graph_Graph3033->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3033->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3033->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3033);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.83#pm0.21","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=6.5/32","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 397.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 17.3","F");

   ci = 1538;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 36.9","F");

   ci = 1539;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 2.4","F");

   ci = 1540;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 78.9","F");

   ci = 1541;
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

   ci = 1542;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.0","F");

   ci = 1543;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  111.1","F");

   ci = 1544;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.6","F");

   ci = 1545;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.1","F");

   ci = 1546;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 93.2","F");

   ci = 1547;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 22.9","F");

   ci = 1548;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 86.6","F");

   ci = 1549;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 4.4","F");

   ci = 1550;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-169.4,-0.5333333,1242.267,2.133333);
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
   
   Double_t _fx3034[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3034[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3034[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3034[32] = {
   0.7028515,
   0.5659511,
   0.8561337,
   0.4545112,
   0.5883788,
   0.5463452,
   0.5534651,
   0.6214612,
   0.9822154,
   0.5260626,
   0.7432207,
   0.4944049,
   0.8022162,
   0.5860618,
   0.5365293,
   0.6110242,
   0.6991295,
   0.6306734,
   0.6603205,
   0.5582084,
   0.6180511,
   0.5953071,
   0.575475,
   0.59321,
   0.542015,
   1.461011,
   0.5432257,
   0.3993172,
   0.5110082,
   0.5136384,
   3.023618,
   0};
   Double_t _fehx3034[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3034[32] = {
   0.7028515,
   0.5659511,
   0.8561337,
   0.4545112,
   0.5883788,
   0.5463452,
   0.5534651,
   0.6214612,
   0.9822154,
   0.5260626,
   0.7432207,
   0.4944049,
   0.8022162,
   0.5860618,
   0.5365293,
   0.6110242,
   0.6991295,
   0.6306734,
   0.6603205,
   0.5582084,
   0.6180511,
   0.5953071,
   0.575475,
   0.59321,
   0.542015,
   1.461011,
   0.5432257,
   0.3993172,
   0.5110082,
   0.5136384,
   3.023618,
   0};
   grae = new TGraphAsymmErrors(32,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1210);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("#nu Vertex Z [cm]");
   Graph_Graph3034->GetXaxis()->SetRange(1,91);
   Graph_Graph3034->GetXaxis()->SetNdivisions(509);
   Graph_Graph3034->GetXaxis()->SetLabelFont(132);
   Graph_Graph3034->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3034->GetXaxis()->SetTitleFont(132);
   Graph_Graph3034->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3034->GetYaxis()->SetNdivisions(210);
   Graph_Graph3034->GetYaxis()->SetLabelFont(132);
   Graph_Graph3034->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3034->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3034->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3034->GetYaxis()->SetTitleFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelFont(132);
   Graph_Graph3034->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3034->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3034->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3034);
   
   grae->Draw("a2");
   
   Double_t _fx3035[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3035[32] = {
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
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1};
   Double_t _felx3035[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3035[32] = {
   0.2391869,
   0.2502158,
   0.2370954,
   0.2391183,
   0.2256998,
   0.2478894,
   0.2217754,
   0.250981,
   0.2072147,
   0.2559672,
   0.2407496,
   0.2526959,
   0.2675624,
   0.228877,
   0.2653432,
   0.256116,
   0.2903011,
   0.2443738,
   0.2672652,
   0.2464754,
   0.2497643,
   0.2384653,
   0.2667416,
   0.2421114,
   0.238982,
   0.2682302,
   0.2534602,
   0.220967,
   0.2392062,
   0.236034,
   0.8210722,
   0};
   Double_t _fehx3035[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3035[32] = {
   0.2391869,
   0.2502158,
   0.2370954,
   0.2391183,
   0.2256998,
   0.2478894,
   0.2217754,
   0.250981,
   0.2072147,
   0.2559672,
   0.2407496,
   0.2526959,
   0.2675624,
   0.228877,
   0.2653432,
   0.256116,
   0.2903011,
   0.2443738,
   0.2672652,
   0.2464754,
   0.2497643,
   0.2384653,
   0.2667416,
   0.2421114,
   0.238982,
   0.2682302,
   0.2534602,
   0.220967,
   0.2392062,
   0.236034,
   0.8210722,
   0};
   grae = new TGraphAsymmErrors(32,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1210);
   Graph_Graph3035->SetMinimum(0);
   Graph_Graph3035->SetMaximum(2);
   Graph_Graph3035->SetDirectory(0);
   Graph_Graph3035->SetStats(0);
   Graph_Graph3035->SetLineWidth(2);
   Graph_Graph3035->SetMarkerStyle(20);
   Graph_Graph3035->GetXaxis()->SetRange(1,91);
   Graph_Graph3035->GetXaxis()->SetNdivisions(509);
   Graph_Graph3035->GetXaxis()->SetLabelFont(132);
   Graph_Graph3035->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetXaxis()->SetTitleFont(132);
   Graph_Graph3035->GetYaxis()->SetNdivisions(509);
   Graph_Graph3035->GetYaxis()->SetLabelFont(132);
   Graph_Graph3035->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3035->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3035->GetYaxis()->SetTitleFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelFont(132);
   Graph_Graph3035->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3035->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3035->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3035);
   
   grae->Draw("2 ");
   
   Double_t _fx3036[32] = {
   17.1875,
   51.5625,
   85.9375,
   120.3125,
   154.6875,
   189.0625,
   223.4375,
   257.8125,
   292.1875,
   326.5625,
   360.9375,
   395.3125,
   429.6875,
   464.0625,
   498.4375,
   532.8125,
   567.1875,
   601.5625,
   635.9375,
   670.3125,
   704.6875,
   739.0625,
   773.4375,
   807.8125,
   842.1875,
   876.5625,
   910.9375,
   945.3125,
   979.6875,
   1014.062,
   1048.438,
   1082.812};
   Double_t _fy3036[32] = {
   0.5899391,
   0.6802022,
   0.5711178,
   0.6238137,
   0.8542335,
   0.7616489,
   1.190661,
   0.9398243,
   0.6233086,
   1.013508,
   0.9751223,
   0.6875666,
   0.7505996,
   1.168421,
   0.8252943,
   0.8181713,
   0.7306145,
   0.6656843,
   0.8666283,
   0.6145904,
   1.261335,
   0.7766732,
   0.8424983,
   0.7179377,
   1.193283,
   1.009483,
   1.495806,
   0.6969869,
   0.8566472,
   0.4763991,
   0,
   10};
   Double_t _felx3036[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fely3036[32] = {
   0.16477,
   0.1899805,
   0.2026542,
   0.2089046,
   0.2385874,
   0.2310475,
   0.2829449,
   0.2368081,
   0.1981838,
   0.2728701,
   0.2625354,
   0.2439746,
   0.251363,
   0.2944076,
   0.2503544,
   0.2481936,
   0.2446704,
   0.2229264,
   0.2755484,
   0.2058159,
   0.2917847,
   0.2256911,
   0.244819,
   0.2404251,
   0.3006721,
   0.2933426,
   0.3554585,
   0.2216102,
   0.1981682,
   0.159538,
   0,
   0};
   Double_t _fehx3036[32] = {
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875,
   17.1875};
   Double_t _fehy3036[32] = {
   0.1554827,
   0.1792721,
   0.1877201,
   0.1944989,
   0.2251393,
   0.2167843,
   0.2695343,
   0.2248557,
   0.1852927,
   0.2580864,
   0.2483116,
   0.2259955,
   0.2340294,
   0.2795481,
   0.2348994,
   0.232872,
   0.2277983,
   0.2075537,
   0.2576249,
   0.1916231,
   0.2783326,
   0.2124022,
   0.2304038,
   0.2238458,
   0.2854964,
   0.2760703,
   0.338611,
   0.2071952,
   0.1890321,
   0.1485365,
   1.711946,
   0};
   grae = new TGraphAsymmErrors(32,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1210);
   Graph_Graph3036->SetMinimum(0);
   Graph_Graph3036->SetMaximum(11);
   Graph_Graph3036->SetDirectory(0);
   Graph_Graph3036->SetStats(0);
   Graph_Graph3036->SetLineWidth(2);
   Graph_Graph3036->SetMarkerStyle(20);
   Graph_Graph3036->GetXaxis()->SetNdivisions(509);
   Graph_Graph3036->GetXaxis()->SetLabelFont(132);
   Graph_Graph3036->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetXaxis()->SetTitleFont(132);
   Graph_Graph3036->GetYaxis()->SetNdivisions(509);
   Graph_Graph3036->GetYaxis()->SetLabelFont(132);
   Graph_Graph3036->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3036->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3036->GetYaxis()->SetTitleFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelFont(132);
   Graph_Graph3036->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3036->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3036->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3036);
   
   grae->Draw("p ");
   
   TH1F *hist__27 = new TH1F("hist__27","NCpi0BDT_PC_Np_bnb_12_reco_nuvtxZ_all",32,0,1100);

   ci = TColor::GetColor("#000099");
   hist__27->SetLineColor(ci);
   hist__27->GetXaxis()->SetLabelFont(42);
   hist__27->GetXaxis()->SetTitleOffset(1);
   hist__27->GetXaxis()->SetTitleFont(42);
   hist__27->GetYaxis()->SetNdivisions(405);
   hist__27->GetYaxis()->SetLabelFont(42);
   hist__27->GetYaxis()->SetTitleFont(42);
   hist__27->GetZaxis()->SetLabelFont(42);
   hist__27->GetZaxis()->SetTitleOffset(1);
   hist__27->GetZaxis()->SetTitleFont(42);
   hist__27->Draw("axis same");
   TLine *line = new TLine(0,1,1100,1);
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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
