#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas9()
{
//=========Macro generated from canvas: canvas9/channel9
//=========  (Wed Sep 28 16:54:38 2022) by ROOT version 6.26/00
   TCanvas *canvas9 = new TCanvas("canvas9", "channel9",216,172,1200,900);
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
   pad1->Range(-230.7692,-10.0902,1692.308,1115.764);
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
   
   TH1F *hmc__25 = new TH1F("hmc__25","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hmc__25->SetBinContent(2,46.40327);
   hmc__25->SetBinContent(3,291.287);
   hmc__25->SetBinContent(4,397.2661);
   hmc__25->SetBinContent(5,504.51);
   hmc__25->SetBinContent(6,421.7065);
   hmc__25->SetBinContent(7,325.4802);
   hmc__25->SetBinContent(8,263.1615);
   hmc__25->SetBinContent(9,190.2184);
   hmc__25->SetBinContent(10,149.62);
   hmc__25->SetBinContent(11,117.815);
   hmc__25->SetBinContent(12,75.47697);
   hmc__25->SetBinContent(13,57.45792);
   hmc__25->SetBinContent(14,42.23948);
   hmc__25->SetBinContent(15,29.83706);
   hmc__25->SetBinContent(16,29.56878);
   hmc__25->SetBinContent(17,20.92215);
   hmc__25->SetBinContent(18,18.2719);
   hmc__25->SetBinContent(19,13.29187);
   hmc__25->SetBinContent(20,12.37863);
   hmc__25->SetBinContent(21,7.243576);
   hmc__25->SetBinContent(22,7.834932);
   hmc__25->SetBinContent(23,4.784938);
   hmc__25->SetBinContent(24,6.310636);
   hmc__25->SetBinContent(25,3.36313);
   hmc__25->SetBinContent(26,9.893172);
   hmc__25->SetBinError(1,0.3895343);
   hmc__25->SetBinError(2,10.33639);
   hmc__25->SetBinError(3,62.35769);
   hmc__25->SetBinError(4,95.89542);
   hmc__25->SetBinError(5,125.3538);
   hmc__25->SetBinError(6,106.7812);
   hmc__25->SetBinError(7,84.70875);
   hmc__25->SetBinError(8,65.75937);
   hmc__25->SetBinError(9,48.51225);
   hmc__25->SetBinError(10,41.24945);
   hmc__25->SetBinError(11,30.45745);
   hmc__25->SetBinError(12,19.73657);
   hmc__25->SetBinError(13,14.39342);
   hmc__25->SetBinError(14,10.72222);
   hmc__25->SetBinError(15,8.597587);
   hmc__25->SetBinError(16,7.680497);
   hmc__25->SetBinError(17,5.97821);
   hmc__25->SetBinError(18,5.613081);
   hmc__25->SetBinError(19,3.573339);
   hmc__25->SetBinError(20,3.309672);
   hmc__25->SetBinError(21,2.319043);
   hmc__25->SetBinError(22,2.575536);
   hmc__25->SetBinError(23,1.790793);
   hmc__25->SetBinError(24,4.446717);
   hmc__25->SetBinError(25,1.576149);
   hmc__25->SetBinError(26,3.013105);
   hmc__25->SetMinimum(-10.0902);
   hmc__25->SetMaximum(1059.471);
   hmc__25->SetEntries(3014.754);
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
   
   TH1F *hs9_stack_9 = new TH1F("hs9_stack_9","",25,0,1500);
   hs9_stack_9->SetMinimum(-9.474605e-09);
   hs9_stack_9->SetMaximum(529.7356);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hbadmatch_stack_1->SetBinContent(2,0.9286332);
   hbadmatch_stack_1->SetBinContent(3,1.890954);
   hbadmatch_stack_1->SetBinContent(4,2.394159);
   hbadmatch_stack_1->SetBinContent(5,0.9269427);
   hbadmatch_stack_1->SetBinContent(6,1.428909);
   hbadmatch_stack_1->SetBinContent(7,0.4510014);
   hbadmatch_stack_1->SetBinContent(8,0.3073375);
   hbadmatch_stack_1->SetBinContent(9,0.1106221);
   hbadmatch_stack_1->SetBinContent(10,1.036141);
   hbadmatch_stack_1->SetBinContent(15,0.3401776);
   hbadmatch_stack_1->SetBinError(2,0.48078);
   hbadmatch_stack_1->SetBinError(3,0.6904256);
   hbadmatch_stack_1->SetBinError(4,0.785313);
   hbadmatch_stack_1->SetBinError(5,0.4800908);
   hbadmatch_stack_1->SetBinError(6,0.7168916);
   hbadmatch_stack_1->SetBinError(7,0.4042442);
   hbadmatch_stack_1->SetBinError(8,0.225686);
   hbadmatch_stack_1->SetBinError(9,0.1106221);
   hbadmatch_stack_1->SetBinError(10,0.5504378);
   hbadmatch_stack_1->SetBinError(15,0.3401776);
   hbadmatch_stack_1->SetEntries(40);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hext_stack_2->SetBinContent(2,2.185808);
   hext_stack_2->SetBinContent(3,13.32669);
   hext_stack_2->SetBinContent(4,13.40889);
   hext_stack_2->SetBinContent(5,16.68039);
   hext_stack_2->SetBinContent(6,4.207213);
   hext_stack_2->SetBinContent(7,2.987417);
   hext_stack_2->SetBinContent(8,2.916804);
   hext_stack_2->SetBinContent(9,4.50566);
   hext_stack_2->SetBinContent(10,0.6487947);
   hext_stack_2->SetBinContent(13,0.9660115);
   hext_stack_2->SetBinContent(16,2.566457);
   hext_stack_2->SetBinContent(17,0.6416141);
   hext_stack_2->SetBinError(2,1.006415);
   hext_stack_2->SetBinError(3,2.540812);
   hext_stack_2->SetBinError(4,2.552609);
   hext_stack_2->SetBinError(5,2.983543);
   hext_stack_2->SetBinError(6,1.380421);
   hext_stack_2->SetBinError(7,1.187264);
   hext_stack_2->SetBinError(8,1.132884);
   hext_stack_2->SetBinError(9,1.574572);
   hext_stack_2->SetBinError(10,0.4587671);
   hext_stack_2->SetBinError(13,0.7189592);
   hext_stack_2->SetBinError(16,1.283228);
   hext_stack_2->SetBinError(17,0.6416141);
   hext_stack_2->SetEntries(141);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hdirt_stack_3->SetBinContent(2,0.2665913);
   hdirt_stack_3->SetBinContent(3,0.9598238);
   hdirt_stack_3->SetBinContent(6,1.167841e-06);
   hdirt_stack_3->SetBinContent(11,0.165896);
   hdirt_stack_3->SetBinError(2,0.2665913);
   hdirt_stack_3->SetBinError(3,0.4964911);
   hdirt_stack_3->SetBinError(6,1.167841e-06);
   hdirt_stack_3->SetBinError(11,0.165896);
   hdirt_stack_3->SetEntries(7);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   houtFV_stack_4->SetBinContent(2,1.12574);
   houtFV_stack_4->SetBinContent(3,6.546424);
   houtFV_stack_4->SetBinContent(4,4.159927);
   houtFV_stack_4->SetBinContent(5,4.450756);
   houtFV_stack_4->SetBinContent(6,2.81473);
   houtFV_stack_4->SetBinContent(7,2.933537);
   houtFV_stack_4->SetBinContent(8,1.037042);
   houtFV_stack_4->SetBinContent(9,0.9286332);
   houtFV_stack_4->SetBinContent(10,0.1967154);
   houtFV_stack_4->SetBinContent(11,2.124428);
   houtFV_stack_4->SetBinContent(12,0.5867651);
   houtFV_stack_4->SetBinContent(13,0.7336084);
   houtFV_stack_4->SetBinContent(14,0.3934307);
   houtFV_stack_4->SetBinError(2,0.5457763);
   houtFV_stack_4->SetBinError(3,1.258502);
   houtFV_stack_4->SetBinError(4,1.042595);
   houtFV_stack_4->SetBinError(5,1.115307);
   houtFV_stack_4->SetBinError(6,0.839955);
   houtFV_stack_4->SetBinError(7,0.9488222);
   houtFV_stack_4->SetBinError(8,0.4668561);
   houtFV_stack_4->SetBinError(9,0.48078);
   houtFV_stack_4->SetBinError(10,0.1967154);
   houtFV_stack_4->SetBinError(11,1.256119);
   houtFV_stack_4->SetBinError(12,0.3387718);
   houtFV_stack_4->SetBinError(13,0.4394482);
   houtFV_stack_4->SetBinError(14,0.2781975);
   houtFV_stack_4->SetEntries(116);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);

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
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.01841896);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.01841896);
   hNCpi0inFVqe_stack_6->SetEntries(2);

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
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVres_stack_7->SetBinContent(2,1.217172);
   hNCpi0inFVres_stack_7->SetBinContent(3,7.405546);
   hNCpi0inFVres_stack_7->SetBinContent(4,6.02529);
   hNCpi0inFVres_stack_7->SetBinContent(5,5.51616);
   hNCpi0inFVres_stack_7->SetBinContent(6,3.033308);
   hNCpi0inFVres_stack_7->SetBinContent(7,2.506301);
   hNCpi0inFVres_stack_7->SetBinContent(8,1.288913);
   hNCpi0inFVres_stack_7->SetBinContent(9,0.1142499);
   hNCpi0inFVres_stack_7->SetBinContent(10,0.3198376);
   hNCpi0inFVres_stack_7->SetBinContent(11,0.1109873);
   hNCpi0inFVres_stack_7->SetBinContent(12,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(13,0.0470988);
   hNCpi0inFVres_stack_7->SetBinContent(14,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.3236763);
   hNCpi0inFVres_stack_7->SetBinError(3,0.9853205);
   hNCpi0inFVres_stack_7->SetBinError(4,0.85326);
   hNCpi0inFVres_stack_7->SetBinError(5,1.069827);
   hNCpi0inFVres_stack_7->SetBinError(6,0.551278);
   hNCpi0inFVres_stack_7->SetBinError(7,0.7826274);
   hNCpi0inFVres_stack_7->SetBinError(8,0.6396401);
   hNCpi0inFVres_stack_7->SetBinError(9,0.08603511);
   hNCpi0inFVres_stack_7->SetBinError(10,0.1378108);
   hNCpi0inFVres_stack_7->SetBinError(11,0.08764647);
   hNCpi0inFVres_stack_7->SetBinError(12,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(13,0.0470988);
   hNCpi0inFVres_stack_7->SetBinError(14,0.02789998);
   hNCpi0inFVres_stack_7->SetEntries(536);

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
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.585788);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.795459);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.618679);
   hNCpi0inFVdis_stack_8->SetBinContent(5,4.730387);
   hNCpi0inFVdis_stack_8->SetBinContent(6,2.833286);
   hNCpi0inFVdis_stack_8->SetBinContent(7,1.478793);
   hNCpi0inFVdis_stack_8->SetBinContent(8,1.165459);
   hNCpi0inFVdis_stack_8->SetBinContent(9,0.8095526);
   hNCpi0inFVdis_stack_8->SetBinContent(10,0.1388872);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.019494);
   hNCpi0inFVdis_stack_8->SetBinContent(12,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.08369996);
   hNCpi0inFVdis_stack_8->SetBinContent(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(17,0.05579997);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1831576);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.09923);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.6265028);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.9000687);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.6269958);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.4393221);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.3567916);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.37846);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.09197996);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3982062);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.04832419);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.03945654);
   hNCpi0inFVdis_stack_8->SetEntries(436);

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
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);

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
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hCCpi0inFV_stack_10->SetBinContent(2,23.85438);
   hCCpi0inFV_stack_10->SetBinContent(3,170.1505);
   hCCpi0inFV_stack_10->SetBinContent(4,293.8488);
   hCCpi0inFV_stack_10->SetBinContent(5,381.2753);
   hCCpi0inFV_stack_10->SetBinContent(6,337.0637);
   hCCpi0inFV_stack_10->SetBinContent(7,265.8943);
   hCCpi0inFV_stack_10->SetBinContent(8,223.6934);
   hCCpi0inFV_stack_10->SetBinContent(9,155.0965);
   hCCpi0inFV_stack_10->SetBinContent(10,126.6255);
   hCCpi0inFV_stack_10->SetBinContent(11,98.63658);
   hCCpi0inFV_stack_10->SetBinContent(12,62.72066);
   hCCpi0inFV_stack_10->SetBinContent(13,48.65058);
   hCCpi0inFV_stack_10->SetBinContent(14,34.82784);
   hCCpi0inFV_stack_10->SetBinContent(15,26.18999);
   hCCpi0inFV_stack_10->SetBinContent(16,23.44981);
   hCCpi0inFV_stack_10->SetBinContent(17,16.99725);
   hCCpi0inFV_stack_10->SetBinContent(18,14.41753);
   hCCpi0inFV_stack_10->SetBinContent(19,10.6532);
   hCCpi0inFV_stack_10->SetBinContent(20,10.91479);
   hCCpi0inFV_stack_10->SetBinContent(21,6.65512);
   hCCpi0inFV_stack_10->SetBinContent(22,5.637488);
   hCCpi0inFV_stack_10->SetBinContent(23,3.516127);
   hCCpi0inFV_stack_10->SetBinContent(24,3.217977);
   hCCpi0inFV_stack_10->SetBinContent(25,3.36313);
   hCCpi0inFV_stack_10->SetBinContent(26,8.201321);
   hCCpi0inFV_stack_10->SetBinError(2,2.432246);
   hCCpi0inFV_stack_10->SetBinError(3,6.546018);
   hCCpi0inFV_stack_10->SetBinError(4,8.625767);
   hCCpi0inFV_stack_10->SetBinError(5,9.885308);
   hCCpi0inFV_stack_10->SetBinError(6,9.294356);
   hCCpi0inFV_stack_10->SetBinError(7,8.23799);
   hCCpi0inFV_stack_10->SetBinError(8,7.569129);
   hCCpi0inFV_stack_10->SetBinError(9,6.29151);
   hCCpi0inFV_stack_10->SetBinError(10,5.664967);
   hCCpi0inFV_stack_10->SetBinError(11,4.992677);
   hCCpi0inFV_stack_10->SetBinError(12,3.952374);
   hCCpi0inFV_stack_10->SetBinError(13,3.532892);
   hCCpi0inFV_stack_10->SetBinError(14,2.931843);
   hCCpi0inFV_stack_10->SetBinError(15,2.550994);
   hCCpi0inFV_stack_10->SetBinError(16,2.415316);
   hCCpi0inFV_stack_10->SetBinError(17,2.076716);
   hCCpi0inFV_stack_10->SetBinError(18,1.927241);
   hCCpi0inFV_stack_10->SetBinError(19,1.605739);
   hCCpi0inFV_stack_10->SetBinError(20,1.687102);
   hCCpi0inFV_stack_10->SetBinError(21,1.225185);
   hCCpi0inFV_stack_10->SetBinError(22,1.245975);
   hCCpi0inFV_stack_10->SetBinError(23,0.940871);
   hCCpi0inFV_stack_10->SetBinError(24,0.9618638);
   hCCpi0inFV_stack_10->SetBinError(25,1.001433);
   hCCpi0inFV_stack_10->SetBinError(26,1.48211);
   hCCpi0inFV_stack_10->SetEntries(10012);

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
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hNCinFV_stack_11->SetBinContent(3,4.541731);
   hNCinFV_stack_11->SetBinContent(4,3.574452);
   hNCinFV_stack_11->SetBinContent(5,2.342597);
   hNCinFV_stack_11->SetBinContent(6,1.322064);
   hNCinFV_stack_11->SetBinContent(7,1.607298);
   hNCinFV_stack_11->SetBinContent(8,0.3401776);
   hNCinFV_stack_11->SetBinContent(9,0.3900497);
   hNCinFV_stack_11->SetBinContent(10,0.1967154);
   hNCinFV_stack_11->SetBinContent(11,0.5901461);
   hNCinFV_stack_11->SetBinContent(13,0.1967154);
   hNCinFV_stack_11->SetBinError(3,1.11103);
   hNCinFV_stack_11->SetBinError(4,0.9213567);
   hNCinFV_stack_11->SetBinError(5,0.8097566);
   hNCinFV_stack_11->SetBinError(6,0.5554667);
   hNCinFV_stack_11->SetBinError(7,0.6796534);
   hNCinFV_stack_11->SetBinError(8,0.3401776);
   hNCinFV_stack_11->SetBinError(9,0.2758068);
   hNCinFV_stack_11->SetBinError(10,0.1967154);
   hNCinFV_stack_11->SetBinError(11,0.340721);
   hNCinFV_stack_11->SetBinError(13,0.1967154);
   hNCinFV_stack_11->SetEntries(63);

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
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hnumuCCinFV_stack_12->SetBinContent(2,15.70395);
   hnumuCCinFV_stack_12->SetBinContent(3,75.28153);
   hnumuCCinFV_stack_12->SetBinContent(4,68.16217);
   hnumuCCinFV_stack_12->SetBinContent(5,88.37236);
   hnumuCCinFV_stack_12->SetBinContent(6,68.6116);
   hnumuCCinFV_stack_12->SetBinContent(7,47.42484);
   hnumuCCinFV_stack_12->SetBinContent(8,32.41236);
   hnumuCCinFV_stack_12->SetBinContent(9,28.06643);
   hnumuCCinFV_stack_12->SetBinContent(10,20.45743);
   hnumuCCinFV_stack_12->SetBinContent(11,14.97077);
   hnumuCCinFV_stack_12->SetBinContent(12,12.11374);
   hnumuCCinFV_stack_12->SetBinContent(13,6.780203);
   hnumuCCinFV_stack_12->SetBinContent(14,6.962407);
   hnumuCCinFV_stack_12->SetBinContent(15,3.306887);
   hnumuCCinFV_stack_12->SetBinContent(16,3.524612);
   hnumuCCinFV_stack_12->SetBinContent(17,3.227482);
   hnumuCCinFV_stack_12->SetBinContent(18,3.854366);
   hnumuCCinFV_stack_12->SetBinContent(19,2.638676);
   hnumuCCinFV_stack_12->SetBinContent(20,1.463836);
   hnumuCCinFV_stack_12->SetBinContent(21,0.5884556);
   hnumuCCinFV_stack_12->SetBinContent(22,2.197444);
   hnumuCCinFV_stack_12->SetBinContent(23,1.268811);
   hnumuCCinFV_stack_12->SetBinContent(24,3.092659);
   hnumuCCinFV_stack_12->SetBinContent(26,1.691851);
   hnumuCCinFV_stack_12->SetBinError(2,2.391487);
   hnumuCCinFV_stack_12->SetBinError(3,4.660358);
   hnumuCCinFV_stack_12->SetBinError(4,4.256117);
   hnumuCCinFV_stack_12->SetBinError(5,6.712619);
   hnumuCCinFV_stack_12->SetBinError(6,4.506734);
   hnumuCCinFV_stack_12->SetBinError(7,3.967217);
   hnumuCCinFV_stack_12->SetBinError(8,3.231793);
   hnumuCCinFV_stack_12->SetBinError(9,2.745564);
   hnumuCCinFV_stack_12->SetBinError(10,2.269859);
   hnumuCCinFV_stack_12->SetBinError(11,2.216776);
   hnumuCCinFV_stack_12->SetBinError(12,1.958285);
   hnumuCCinFV_stack_12->SetBinError(13,1.222173);
   hnumuCCinFV_stack_12->SetBinError(14,1.313211);
   hnumuCCinFV_stack_12->SetBinError(15,0.8744458);
   hnumuCCinFV_stack_12->SetBinError(16,0.9842192);
   hnumuCCinFV_stack_12->SetBinError(17,0.8995809);
   hnumuCCinFV_stack_12->SetBinError(18,1.845477);
   hnumuCCinFV_stack_12->SetBinError(19,0.8600978);
   hnumuCCinFV_stack_12->SetBinError(20,0.620407);
   hnumuCCinFV_stack_12->SetBinError(21,0.3397478);
   hnumuCCinFV_stack_12->SetBinError(22,0.760276);
   hnumuCCinFV_stack_12->SetBinError(23,0.5889569);
   hnumuCCinFV_stack_12->SetBinError(24,2.275735);
   hnumuCCinFV_stack_12->SetBinError(26,0.6672974);
   hnumuCCinFV_stack_12->SetEntries(2089);

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
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hnueCCinFV_stack_13->SetBinContent(2,0.5352025);
   hnueCCinFV_stack_13->SetBinContent(3,3.37085);
   hnueCCinFV_stack_13->SetBinContent(4,1.073786);
   hnueCCinFV_stack_13->SetBinContent(5,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(6,0.3917402);
   hnueCCinFV_stack_13->SetBinContent(7,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(9,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(11,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.3921167);
   hnueCCinFV_stack_13->SetBinError(3,1.010174);
   hnueCCinFV_stack_13->SetBinError(4,0.5557297);
   hnueCCinFV_stack_13->SetBinError(5,0.1967154);
   hnueCCinFV_stack_13->SetBinError(6,0.2770047);
   hnueCCinFV_stack_13->SetBinError(7,0.1967154);
   hnueCCinFV_stack_13->SetBinError(9,0.1967154);
   hnueCCinFV_stack_13->SetBinError(11,0.1967154);
   hnueCCinFV_stack_13->SetEntries(24);

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
   
   TH1F *hmcerror__26 = new TH1F("hmcerror__26","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);
   hmcerror__26->SetBinContent(2,46.40327);
   hmcerror__26->SetBinContent(3,291.287);
   hmcerror__26->SetBinContent(4,397.2661);
   hmcerror__26->SetBinContent(5,504.51);
   hmcerror__26->SetBinContent(6,421.7065);
   hmcerror__26->SetBinContent(7,325.4802);
   hmcerror__26->SetBinContent(8,263.1615);
   hmcerror__26->SetBinContent(9,190.2184);
   hmcerror__26->SetBinContent(10,149.62);
   hmcerror__26->SetBinContent(11,117.815);
   hmcerror__26->SetBinContent(12,75.47697);
   hmcerror__26->SetBinContent(13,57.45792);
   hmcerror__26->SetBinContent(14,42.23948);
   hmcerror__26->SetBinContent(15,29.83706);
   hmcerror__26->SetBinContent(16,29.56878);
   hmcerror__26->SetBinContent(17,20.92215);
   hmcerror__26->SetBinContent(18,18.2719);
   hmcerror__26->SetBinContent(19,13.29187);
   hmcerror__26->SetBinContent(20,12.37863);
   hmcerror__26->SetBinContent(21,7.243576);
   hmcerror__26->SetBinContent(22,7.834932);
   hmcerror__26->SetBinContent(23,4.784938);
   hmcerror__26->SetBinContent(24,6.310636);
   hmcerror__26->SetBinContent(25,3.36313);
   hmcerror__26->SetBinContent(26,9.893172);
   hmcerror__26->SetBinError(1,0.3895343);
   hmcerror__26->SetBinError(2,10.33639);
   hmcerror__26->SetBinError(3,62.35769);
   hmcerror__26->SetBinError(4,95.89542);
   hmcerror__26->SetBinError(5,125.3538);
   hmcerror__26->SetBinError(6,106.7812);
   hmcerror__26->SetBinError(7,84.70875);
   hmcerror__26->SetBinError(8,65.75937);
   hmcerror__26->SetBinError(9,48.51225);
   hmcerror__26->SetBinError(10,41.24945);
   hmcerror__26->SetBinError(11,30.45745);
   hmcerror__26->SetBinError(12,19.73657);
   hmcerror__26->SetBinError(13,14.39342);
   hmcerror__26->SetBinError(14,10.72222);
   hmcerror__26->SetBinError(15,8.597587);
   hmcerror__26->SetBinError(16,7.680497);
   hmcerror__26->SetBinError(17,5.97821);
   hmcerror__26->SetBinError(18,5.613081);
   hmcerror__26->SetBinError(19,3.573339);
   hmcerror__26->SetBinError(20,3.309672);
   hmcerror__26->SetBinError(21,2.319043);
   hmcerror__26->SetBinError(22,2.575536);
   hmcerror__26->SetBinError(23,1.790793);
   hmcerror__26->SetBinError(24,4.446717);
   hmcerror__26->SetBinError(25,1.576149);
   hmcerror__26->SetBinError(26,3.013105);
   hmcerror__26->SetEntries(3014.754);

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
   
   Double_t _fx3033[25] = {
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
   Double_t _fy3033[25] = {
   0,
   39,
   273,
   369,
   437,
   410,
   312,
   194,
   138,
   117,
   99,
   73,
   55,
   34,
   23,
   19,
   13,
   12,
   13,
   4,
   6,
   4,
   2,
   4,
   5};
   Double_t _felx3033[25] = {
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
   Double_t _fely3033[25] = {
   0,
   6.3813,
   16.52271,
   19.20937,
   20.90454,
   20.24846,
   17.66352,
   13.92839,
   11.74734,
   10.81665,
   10.0712,
   8.6693,
   7.546,
   5.9703,
   4.9457,
   4.5151,
   3.77763,
   3.64022,
   3.77763,
   2.29683,
   2.67925,
   2.29683,
   2,
   2.29683,
   2.48995};
   Double_t _fehx3033[25] = {
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
   Double_t _fehy3033[25] = {
   1.1478,
   6.1757,
   16.52271,
   19.20937,
   20.90454,
   20.24846,
   17.66352,
   13.92839,
   11.74734,
   10.81665,
   9.87,
   8.4672,
   7.3425,
   5.7635,
   4.7346,
   4.3011,
   3.5552,
   3.4155,
   3.5552,
   1.98186,
   2.41858,
   1.98186,
   1.51917,
   1.98186,
   2.21064};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,_fx3033,_fy3033,_felx3033,_fehx3033,_fely3033,_fehy3033);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3033 = new TH1F("Graph_Graph3033","",100,0,1650);
   Graph_Graph3033->SetMinimum(0);
   Graph_Graph3033->SetMaximum(503.695);
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=19.5/25","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2655.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 9.8","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 65.0","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 1.4","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 28.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  0.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  27.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  25.4","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.0","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 2347.4","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 15.1","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 510.5","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 6.2","F");

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
   TText *pt_LaTex = pt->AddText("CCpi0_PC_Np_bnb_12_Emuon_all");
   pt->Draw();
   pad1->Modified();
   canvas9->cd();
  
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
   
   Double_t _fx3034[25] = {
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
   Double_t _fy3034[25] = {
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
   Double_t _felx3034[25] = {
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
   Double_t _fely3034[25] = {
   0,
   0.2227514,
   0.2140764,
   0.2413884,
   0.2484664,
   0.2532121,
   0.2602577,
   0.2498821,
   0.2550345,
   0.2756948,
   0.2585192,
   0.2614913,
   0.2505036,
   0.2538435,
   0.2881513,
   0.2597502,
   0.285736,
   0.3071975,
   0.2688364,
   0.2673698,
   0.3201517,
   0.3287247,
   0.3742563,
   0.7046385,
   0.4686556};
   Double_t _fehx3034[25] = {
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
   Double_t _fehy3034[25] = {
   0,
   0.2227514,
   0.2140764,
   0.2413884,
   0.2484664,
   0.2532121,
   0.2602577,
   0.2498821,
   0.2550345,
   0.2756948,
   0.2585192,
   0.2614913,
   0.2505036,
   0.2538435,
   0.2881513,
   0.2597502,
   0.285736,
   0.3071975,
   0.2688364,
   0.2673698,
   0.3201517,
   0.3287247,
   0.3742563,
   0.7046385,
   0.4686556};
   grae = new TGraphAsymmErrors(25,_fx3034,_fy3034,_felx3034,_fehx3034,_fely3034,_fehy3034);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3034 = new TH1F("Graph_Graph3034","",100,0,1650);
   Graph_Graph3034->SetMinimum(0);
   Graph_Graph3034->SetMaximum(2);
   Graph_Graph3034->SetDirectory(0);
   Graph_Graph3034->SetStats(0);
   Graph_Graph3034->SetLineWidth(2);
   Graph_Graph3034->SetMarkerStyle(20);
   Graph_Graph3034->GetXaxis()->SetTitle("Muon Energy [MeV]");
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
   
   Double_t _fx3035[25] = {
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
   Double_t _fy3035[25] = {
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
   Double_t _felx3035[25] = {
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
   Double_t _fely3035[25] = {
   0,
   0.2227514,
   0.2140764,
   0.2413884,
   0.2484664,
   0.2532121,
   0.2602577,
   0.2498821,
   0.2550345,
   0.2756948,
   0.2585192,
   0.2614913,
   0.2505036,
   0.2538435,
   0.2881513,
   0.2597502,
   0.285736,
   0.3071975,
   0.2688364,
   0.2673698,
   0.3201517,
   0.3287247,
   0.3742563,
   0.7046385,
   0.4686556};
   Double_t _fehx3035[25] = {
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
   Double_t _fehy3035[25] = {
   0,
   0.2227514,
   0.2140764,
   0.2413884,
   0.2484664,
   0.2532121,
   0.2602577,
   0.2498821,
   0.2550345,
   0.2756948,
   0.2585192,
   0.2614913,
   0.2505036,
   0.2538435,
   0.2881513,
   0.2597502,
   0.285736,
   0.3071975,
   0.2688364,
   0.2673698,
   0.3201517,
   0.3287247,
   0.3742563,
   0.7046385,
   0.4686556};
   grae = new TGraphAsymmErrors(25,_fx3035,_fy3035,_felx3035,_fehx3035,_fely3035,_fehy3035);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3035 = new TH1F("Graph_Graph3035","",100,0,1650);
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
   
   Double_t _fx3036[25] = {
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
   Double_t _fy3036[25] = {
   10,
   0.8404581,
   0.9372199,
   0.9288483,
   0.866187,
   0.9722401,
   0.9585836,
   0.7371898,
   0.7254819,
   0.781981,
   0.8403003,
   0.9671825,
   0.9572223,
   0.8049342,
   0.7708535,
   0.6425696,
   0.6213511,
   0.6567462,
   0.9780413,
   0.3231375,
   0.8283201,
   0.5105341,
   0.4179783,
   0.6338506,
   1.48671};
   Double_t _felx3036[25] = {
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
   Double_t _fely3036[25] = {
   0,
   0.1375183,
   0.05672313,
   0.04835391,
   0.04143534,
   0.04801552,
   0.05426911,
   0.05292714,
   0.06175712,
   0.07229417,
   0.08548315,
   0.1148602,
   0.1313309,
   0.1413441,
   0.165757,
   0.1526982,
   0.1805565,
   0.1992251,
   0.284206,
   0.185548,
   0.3698795,
   0.2931525,
   0.4179783,
   0.3639618,
   0.7403669};
   Double_t _fehx3036[25] = {
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
   Double_t _fehy3036[25] = {
   0,
   0.1330876,
   0.05672313,
   0.04835391,
   0.04143534,
   0.04801552,
   0.05426911,
   0.05292714,
   0.06175712,
   0.07229417,
   0.08377539,
   0.1121826,
   0.1277892,
   0.1364482,
   0.1586819,
   0.1454608,
   0.1699252,
   0.1869264,
   0.2674717,
   0.1601033,
   0.3338931,
   0.2529518,
   0.31749,
   0.3140508,
   0.6573163};
   grae = new TGraphAsymmErrors(25,_fx3036,_fy3036,_felx3036,_fehx3036,_fely3036,_fehy3036);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3036 = new TH1F("Graph_Graph3036","",100,0,1650);
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
   
   TH1F *hist__27 = new TH1F("hist__27","CCpi0_PC_Np_bnb_12_Emuon_all",25,0,1500);

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
   canvas9->cd();
   canvas9->Modified();
   canvas9->cd();
   canvas9->SetSelected(canvas9);
}
