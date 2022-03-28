void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sun Jan  2 12:47:03 2022) by ROOT version 6.24/02
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",34,57,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas5->SetHighLightColor(2);
   canvas5->Range(0,0,1,1);
   canvas5->SetFillColor(0);
   canvas5->SetBorderMode(0);
   canvas5->SetBorderSize(2);
   canvas5->SetLeftMargin(0.12);
   canvas5->SetRightMargin(0.12);
   canvas5->SetTopMargin(0.05);
   canvas5->SetBottomMargin(0.12);
   canvas5->SetFrameLineWidth(2);
   canvas5->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-9.461538,-1.154902,11.05128,6.035673);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(0);
   pad1->SetLogy();
   pad1->SetLeftMargin(0.12);
   pad1->SetTopMargin(0.05);
   pad1->SetBottomMargin(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameLineWidth(2);
   pad1->SetFrameBorderMode(0);
   
   TH1F *hmc__13 = new TH1F("hmc__13","generic4_bnb_14_numu_score_all",20,-7,9);
   hmc__13->SetBinContent(1,0.1896586);
   hmc__13->SetBinContent(2,2.239686);
   hmc__13->SetBinContent(3,15.09943);
   hmc__13->SetBinContent(4,77.0889);
   hmc__13->SetBinContent(5,330.8386);
   hmc__13->SetBinContent(6,616.3359);
   hmc__13->SetBinContent(7,1162.794);
   hmc__13->SetBinContent(8,1755.368);
   hmc__13->SetBinContent(9,1839.162);
   hmc__13->SetBinContent(10,1838.555);
   hmc__13->SetBinContent(11,1822.854);
   hmc__13->SetBinContent(12,1993.445);
   hmc__13->SetBinContent(13,2132.026);
   hmc__13->SetBinContent(14,2120.068);
   hmc__13->SetBinContent(15,1643.776);
   hmc__13->SetBinContent(16,735.2886);
   hmc__13->SetBinContent(17,189.669);
   hmc__13->SetBinContent(18,24.93252);
   hmc__13->SetBinContent(19,1.377699);
   hmc__13->SetBinContent(20,0.01427936);
   hmc__13->SetBinContent(21,1.29782);
   hmc__13->SetBinError(1,0.2306399);
   hmc__13->SetBinError(2,2.319621);
   hmc__13->SetBinError(3,7.778752);
   hmc__13->SetBinError(4,16.94152);
   hmc__13->SetBinError(5,38.76783);
   hmc__13->SetBinError(6,76.17426);
   hmc__13->SetBinError(7,140.1406);
   hmc__13->SetBinError(8,214.7435);
   hmc__13->SetBinError(9,226.8676);
   hmc__13->SetBinError(10,232.9219);
   hmc__13->SetBinError(11,250.443);
   hmc__13->SetBinError(12,300.0445);
   hmc__13->SetBinError(13,329.4696);
   hmc__13->SetBinError(14,343.3421);
   hmc__13->SetBinError(15,285.5839);
   hmc__13->SetBinError(16,152.5508);
   hmc__13->SetBinError(17,44.96129);
   hmc__13->SetBinError(18,6.943259);
   hmc__13->SetBinError(19,2.02522);
   hmc__13->SetBinError(20,0.07140327);
   hmc__13->SetBinError(21,1.290791);
   hmc__13->SetMinimum(0.07);
   hmc__13->SetMaximum(474400);
   hmc__13->SetEntries(16299.7);
   hmc__13->SetLineWidth(5);
   hmc__13->GetXaxis()->SetLabelFont(42);
   hmc__13->GetXaxis()->SetTitleOffset(1);
   hmc__13->GetXaxis()->SetTitleFont(42);
   hmc__13->GetYaxis()->SetTitle("Event counts");
   hmc__13->GetYaxis()->SetLabelFont(132);
   hmc__13->GetYaxis()->SetLabelSize(0.04);
   hmc__13->GetYaxis()->SetTitleSize(0.05);
   hmc__13->GetYaxis()->SetTitleOffset(0.73);
   hmc__13->GetYaxis()->SetTitleFont(132);
   hmc__13->GetZaxis()->SetLabelFont(42);
   hmc__13->GetZaxis()->SetTitleOffset(1);
   hmc__13->GetZaxis()->SetTitleFont(42);
   hmc__13->Draw("hist");
   
   THStack *hs5 = new THStack();
   hs5->SetName("hs5");
   hs5->SetTitle("");
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",20,-7,9);
   hs5_stack_5->SetMinimum(0.8528103);
   hs5_stack_5->SetMaximum(3411.241);
   hs5_stack_5->SetDirectory(0);
   hs5_stack_5->SetStats(0);
   hs5_stack_5->SetLineWidth(2);
   hs5_stack_5->SetMarkerStyle(20);
   hs5_stack_5->GetXaxis()->SetNdivisions(509);
   hs5_stack_5->GetXaxis()->SetLabelFont(132);
   hs5_stack_5->GetXaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetXaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetXaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetXaxis()->SetTitleFont(132);
   hs5_stack_5->GetYaxis()->SetNdivisions(509);
   hs5_stack_5->GetYaxis()->SetLabelFont(132);
   hs5_stack_5->GetYaxis()->SetLabelOffset(0.01);
   hs5_stack_5->GetYaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetYaxis()->SetTitleOffset(0.95);
   hs5_stack_5->GetYaxis()->SetTitleFont(132);
   hs5_stack_5->GetZaxis()->SetLabelFont(132);
   hs5_stack_5->GetZaxis()->SetLabelSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleSize(0.08);
   hs5_stack_5->GetZaxis()->SetTitleOffset(1.2);
   hs5_stack_5->GetZaxis()->SetTitleFont(132);
   hs5->SetHistogram(hs5_stack_5);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic4_bnb_14_numu_score_all",20,-7,9);
   hbadmatch_stack_1->SetBinContent(3,0.1686044);
   hbadmatch_stack_1->SetBinContent(4,1.434489);
   hbadmatch_stack_1->SetBinContent(5,11.67062);
   hbadmatch_stack_1->SetBinContent(6,37.89198);
   hbadmatch_stack_1->SetBinContent(7,93.0809);
   hbadmatch_stack_1->SetBinContent(8,126.2909);
   hbadmatch_stack_1->SetBinContent(9,93.55637);
   hbadmatch_stack_1->SetBinContent(10,65.61324);
   hbadmatch_stack_1->SetBinContent(11,32.49082);
   hbadmatch_stack_1->SetBinContent(12,17.22527);
   hbadmatch_stack_1->SetBinContent(13,8.279704);
   hbadmatch_stack_1->SetBinContent(14,3.938435);
   hbadmatch_stack_1->SetBinContent(15,2.077111);
   hbadmatch_stack_1->SetBinContent(16,0.5851761);
   hbadmatch_stack_1->SetBinContent(17,0.1240034);
   hbadmatch_stack_1->SetBinContent(21,0.0675009);
   hbadmatch_stack_1->SetBinError(3,0.0949208);
   hbadmatch_stack_1->SetBinError(4,0.2737245);
   hbadmatch_stack_1->SetBinError(5,1.200244);
   hbadmatch_stack_1->SetBinError(6,1.845732);
   hbadmatch_stack_1->SetBinError(7,2.64313);
   hbadmatch_stack_1->SetBinError(8,3.502656);
   hbadmatch_stack_1->SetBinError(9,2.684253);
   hbadmatch_stack_1->SetBinError(10,2.243066);
   hbadmatch_stack_1->SetBinError(11,1.542736);
   hbadmatch_stack_1->SetBinError(12,1.105781);
   hbadmatch_stack_1->SetBinError(13,0.7908693);
   hbadmatch_stack_1->SetBinError(14,0.4697236);
   hbadmatch_stack_1->SetBinError(15,0.3402772);
   hbadmatch_stack_1->SetBinError(16,0.1742177);
   hbadmatch_stack_1->SetBinError(17,0.0740665);
   hbadmatch_stack_1->SetBinError(21,0.06750091);
   hbadmatch_stack_1->SetEntries(12603);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1470;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic4_bnb_14_numu_score_all",20,-7,9);
   hext_stack_2->SetBinContent(2,0.6716241);
   hext_stack_2->SetBinContent(3,4.834923);
   hext_stack_2->SetBinContent(4,35.25138);
   hext_stack_2->SetBinContent(5,164.6974);
   hext_stack_2->SetBinContent(6,243.2312);
   hext_stack_2->SetBinContent(7,364.1988);
   hext_stack_2->SetBinContent(8,431.607);
   hext_stack_2->SetBinContent(9,380.618);
   hext_stack_2->SetBinContent(10,265.2041);
   hext_stack_2->SetBinContent(11,147.6471);
   hext_stack_2->SetBinContent(12,72.17145);
   hext_stack_2->SetBinContent(13,31.35223);
   hext_stack_2->SetBinContent(14,12.15675);
   hext_stack_2->SetBinContent(15,3.340648);
   hext_stack_2->SetBinContent(16,1.482134);
   hext_stack_2->SetBinContent(17,0.04856535);
   hext_stack_2->SetBinContent(21,0.4113254);
   hext_stack_2->SetBinError(2,0.3469804);
   hext_stack_2->SetBinError(3,0.9189065);
   hext_stack_2->SetBinError(4,2.450027);
   hext_stack_2->SetBinError(5,5.29877);
   hext_stack_2->SetBinError(6,6.388722);
   hext_stack_2->SetBinError(7,7.819269);
   hext_stack_2->SetBinError(8,8.45576);
   hext_stack_2->SetBinError(9,7.974029);
   hext_stack_2->SetBinError(10,6.655834);
   hext_stack_2->SetBinError(11,4.968882);
   hext_stack_2->SetBinError(12,3.473175);
   hext_stack_2->SetBinError(13,2.330558);
   hext_stack_2->SetBinError(14,1.459631);
   hext_stack_2->SetBinError(15,0.7512331);
   hext_stack_2->SetBinError(16,0.529047);
   hext_stack_2->SetBinError(17,0.02428268);
   hext_stack_2->SetBinError(21,0.2825267);
   hext_stack_2->SetEntries(39405);

   ci = 1471;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic4_bnb_14_numu_score_all",20,-7,9);
   hdirt_stack_3->SetBinContent(1,0.1301825);
   hdirt_stack_3->SetBinContent(2,1.155638);
   hdirt_stack_3->SetBinContent(3,7.289507);
   hdirt_stack_3->SetBinContent(4,22.47339);
   hdirt_stack_3->SetBinContent(5,54.32656);
   hdirt_stack_3->SetBinContent(6,88.55138);
   hdirt_stack_3->SetBinContent(7,132.4563);
   hdirt_stack_3->SetBinContent(8,118.9667);
   hdirt_stack_3->SetBinContent(9,75.64478);
   hdirt_stack_3->SetBinContent(10,47.04962);
   hdirt_stack_3->SetBinContent(11,24.21754);
   hdirt_stack_3->SetBinContent(12,15.65197);
   hdirt_stack_3->SetBinContent(13,9.752842);
   hdirt_stack_3->SetBinContent(14,4.404403);
   hdirt_stack_3->SetBinContent(15,1.844167);
   hdirt_stack_3->SetBinContent(16,0.5746371);
   hdirt_stack_3->SetBinContent(17,0.008393846);
   hdirt_stack_3->SetBinContent(18,0.008393846);
   hdirt_stack_3->SetBinError(1,0.09697554);
   hdirt_stack_3->SetBinError(2,0.2172118);
   hdirt_stack_3->SetBinError(3,0.719961);
   hdirt_stack_3->SetBinError(4,1.271257);
   hdirt_stack_3->SetBinError(5,1.945798);
   hdirt_stack_3->SetBinError(6,2.492935);
   hdirt_stack_3->SetBinError(7,2.940927);
   hdirt_stack_3->SetBinError(8,2.725471);
   hdirt_stack_3->SetBinError(9,2.120115);
   hdirt_stack_3->SetBinError(10,1.902939);
   hdirt_stack_3->SetBinError(11,1.186541);
   hdirt_stack_3->SetBinError(12,0.9657976);
   hdirt_stack_3->SetBinError(13,0.8567727);
   hdirt_stack_3->SetBinError(14,0.5732026);
   hdirt_stack_3->SetBinError(15,0.3788102);
   hdirt_stack_3->SetBinError(16,0.1560194);
   hdirt_stack_3->SetBinError(17,0.008393846);
   hdirt_stack_3->SetBinError(18,0.008393846);
   hdirt_stack_3->SetEntries(20777);

   ci = 1472;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic4_bnb_14_numu_score_all",20,-7,9);
   houtFV_stack_4->SetBinContent(1,0.05947605);
   houtFV_stack_4->SetBinContent(2,0.4124243);
   houtFV_stack_4->SetBinContent(3,2.806358);
   houtFV_stack_4->SetBinContent(4,17.27585);
   houtFV_stack_4->SetBinContent(5,57.90308);
   houtFV_stack_4->SetBinContent(6,117.1027);
   houtFV_stack_4->SetBinContent(7,237.4163);
   houtFV_stack_4->SetBinContent(8,230.7574);
   houtFV_stack_4->SetBinContent(9,138.0319);
   houtFV_stack_4->SetBinContent(10,98.47561);
   houtFV_stack_4->SetBinContent(11,60.7128);
   houtFV_stack_4->SetBinContent(12,40.16204);
   houtFV_stack_4->SetBinContent(13,22.33219);
   houtFV_stack_4->SetBinContent(14,8.056595);
   houtFV_stack_4->SetBinContent(15,3.033232);
   houtFV_stack_4->SetBinContent(16,1.595665);
   houtFV_stack_4->SetBinContent(17,0.1277776);
   houtFV_stack_4->SetBinContent(21,0.1507996);
   houtFV_stack_4->SetBinError(1,0.05947605);
   houtFV_stack_4->SetBinError(2,0.1521719);
   houtFV_stack_4->SetBinError(3,0.4165316);
   houtFV_stack_4->SetBinError(4,1.44561);
   houtFV_stack_4->SetBinError(5,2.367745);
   houtFV_stack_4->SetBinError(6,3.11048);
   houtFV_stack_4->SetBinError(7,4.336158);
   houtFV_stack_4->SetBinError(8,3.873635);
   houtFV_stack_4->SetBinError(9,3.101831);
   houtFV_stack_4->SetBinError(10,2.715412);
   houtFV_stack_4->SetBinError(11,2.132589);
   houtFV_stack_4->SetBinError(12,2.025428);
   houtFV_stack_4->SetBinError(13,1.5343);
   houtFV_stack_4->SetBinError(14,0.8105556);
   houtFV_stack_4->SetBinError(15,0.4960953);
   houtFV_stack_4->SetBinError(16,0.3672377);
   houtFV_stack_4->SetBinError(17,0.07406997);
   houtFV_stack_4->SetBinError(21,0.0886837);
   houtFV_stack_4->SetEntries(25890);

   ci = 1473;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFV_stack_5 = new TH1F("hNCpi0inFV_stack_5","generic4_bnb_14_numu_score_all",20,-7,9);
   hNCpi0inFV_stack_5->SetBinContent(4,0.1859066);
   hNCpi0inFV_stack_5->SetBinContent(5,2.015038);
   hNCpi0inFV_stack_5->SetBinContent(6,7.116639);
   hNCpi0inFV_stack_5->SetBinContent(7,59.48892);
   hNCpi0inFV_stack_5->SetBinContent(8,246.3532);
   hNCpi0inFV_stack_5->SetBinContent(9,197.4169);
   hNCpi0inFV_stack_5->SetBinContent(10,94.10981);
   hNCpi0inFV_stack_5->SetBinContent(11,35.19749);
   hNCpi0inFV_stack_5->SetBinContent(12,12.51127);
   hNCpi0inFV_stack_5->SetBinContent(13,5.096957);
   hNCpi0inFV_stack_5->SetBinContent(14,1.951163);
   hNCpi0inFV_stack_5->SetBinContent(15,0.6967217);
   hNCpi0inFV_stack_5->SetBinContent(16,0.02555015);
   hNCpi0inFV_stack_5->SetBinContent(17,0.01277507);
   hNCpi0inFV_stack_5->SetBinContent(21,0.3916438);
   hNCpi0inFV_stack_5->SetBinError(4,0.09089455);
   hNCpi0inFV_stack_5->SetBinError(5,0.3288741);
   hNCpi0inFV_stack_5->SetBinError(6,0.6087815);
   hNCpi0inFV_stack_5->SetBinError(7,1.774015);
   hNCpi0inFV_stack_5->SetBinError(8,3.620756);
   hNCpi0inFV_stack_5->SetBinError(9,3.229615);
   hNCpi0inFV_stack_5->SetBinError(10,2.242267);
   hNCpi0inFV_stack_5->SetBinError(11,1.366892);
   hNCpi0inFV_stack_5->SetBinError(12,0.8118798);
   hNCpi0inFV_stack_5->SetBinError(13,0.5150785);
   hNCpi0inFV_stack_5->SetBinError(14,0.3276311);
   hNCpi0inFV_stack_5->SetBinError(15,0.2031707);
   hNCpi0inFV_stack_5->SetBinError(16,0.01806668);
   hNCpi0inFV_stack_5->SetBinError(17,0.01277507);
   hNCpi0inFV_stack_5->SetBinError(21,0.1505451);
   hNCpi0inFV_stack_5->SetEntries(17646);

   ci = 1474;
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
   hs5->Add(hNCpi0inFV_stack_5,"");
   
   TH1F *hCCpi0inFV_stack_6 = new TH1F("hCCpi0inFV_stack_6","generic4_bnb_14_numu_score_all",20,-7,9);
   hCCpi0inFV_stack_6->SetBinContent(4,0.0610156);
   hCCpi0inFV_stack_6->SetBinContent(5,0.7180761);
   hCCpi0inFV_stack_6->SetBinContent(6,2.826736);
   hCCpi0inFV_stack_6->SetBinContent(7,12.24559);
   hCCpi0inFV_stack_6->SetBinContent(8,76.29759);
   hCCpi0inFV_stack_6->SetBinContent(9,132.1173);
   hCCpi0inFV_stack_6->SetBinContent(10,154.7602);
   hCCpi0inFV_stack_6->SetBinContent(11,196.0852);
   hCCpi0inFV_stack_6->SetBinContent(12,212.4949);
   hCCpi0inFV_stack_6->SetBinContent(13,213.8273);
   hCCpi0inFV_stack_6->SetBinContent(14,190.5577);
   hCCpi0inFV_stack_6->SetBinContent(15,125.352);
   hCCpi0inFV_stack_6->SetBinContent(16,41.08636);
   hCCpi0inFV_stack_6->SetBinContent(17,8.774612);
   hCCpi0inFV_stack_6->SetBinContent(18,1.328232);
   hCCpi0inFV_stack_6->SetBinContent(19,0.0610156);
   hCCpi0inFV_stack_6->SetBinContent(21,0.0610156);
   hCCpi0inFV_stack_6->SetBinError(4,0.0610156);
   hCCpi0inFV_stack_6->SetBinError(5,0.1808891);
   hCCpi0inFV_stack_6->SetBinError(6,0.3884654);
   hCCpi0inFV_stack_6->SetBinError(7,0.8143735);
   hCCpi0inFV_stack_6->SetBinError(8,2.033108);
   hCCpi0inFV_stack_6->SetBinError(9,2.649726);
   hCCpi0inFV_stack_6->SetBinError(10,2.866015);
   hCCpi0inFV_stack_6->SetBinError(11,3.235813);
   hCCpi0inFV_stack_6->SetBinError(12,3.372257);
   hCCpi0inFV_stack_6->SetBinError(13,3.368067);
   hCCpi0inFV_stack_6->SetBinError(14,3.172416);
   hCCpi0inFV_stack_6->SetBinError(15,2.583405);
   hCCpi0inFV_stack_6->SetBinError(16,1.473423);
   hCCpi0inFV_stack_6->SetBinError(17,0.6864586);
   hCCpi0inFV_stack_6->SetBinError(18,0.2644805);
   hCCpi0inFV_stack_6->SetBinError(19,0.0610156);
   hCCpi0inFV_stack_6->SetBinError(21,0.0610156);
   hCCpi0inFV_stack_6->SetEntries(36558);

   ci = 1475;
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
   hs5->Add(hCCpi0inFV_stack_6,"");
   
   TH1F *hNCinFV_stack_7 = new TH1F("hNCinFV_stack_7","generic4_bnb_14_numu_score_all",20,-7,9);
   hNCinFV_stack_7->SetBinContent(4,0.1475814);
   hNCinFV_stack_7->SetBinContent(5,33.9451);
   hNCinFV_stack_7->SetBinContent(6,96.43371);
   hNCinFV_stack_7->SetBinContent(7,159.3134);
   hNCinFV_stack_7->SetBinContent(8,225.2873);
   hNCinFV_stack_7->SetBinContent(9,225.7471);
   hNCinFV_stack_7->SetBinContent(10,183.4421);
   hNCinFV_stack_7->SetBinContent(11,104.8814);
   hNCinFV_stack_7->SetBinContent(12,51.60806);
   hNCinFV_stack_7->SetBinContent(13,26.42303);
   hNCinFV_stack_7->SetBinContent(14,11.84908);
   hNCinFV_stack_7->SetBinContent(15,3.683187);
   hNCinFV_stack_7->SetBinContent(16,0.3945035);
   hNCinFV_stack_7->SetBinContent(17,0.02555015);
   hNCinFV_stack_7->SetBinContent(18,0.01761663);
   hNCinFV_stack_7->SetBinError(4,0.08816015);
   hNCinFV_stack_7->SetBinError(5,1.341417);
   hNCinFV_stack_7->SetBinError(6,2.2528);
   hNCinFV_stack_7->SetBinError(7,2.901817);
   hNCinFV_stack_7->SetBinError(8,3.457693);
   hNCinFV_stack_7->SetBinError(9,3.458298);
   hNCinFV_stack_7->SetBinError(10,3.106167);
   hNCinFV_stack_7->SetBinError(11,2.349435);
   hNCinFV_stack_7->SetBinError(12,1.646984);
   hNCinFV_stack_7->SetBinError(13,1.183283);
   hNCinFV_stack_7->SetBinError(14,0.7954352);
   hNCinFV_stack_7->SetBinError(15,0.4396971);
   hNCinFV_stack_7->SetBinError(16,0.1405594);
   hNCinFV_stack_7->SetBinError(17,0.01806668);
   hNCinFV_stack_7->SetBinError(18,0.01761663);
   hNCinFV_stack_7->SetEntries(30215);

   ci = 1476;
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
   hs5->Add(hNCinFV_stack_7,"");
   
   TH1F *hnumuCCinFV_stack_8 = new TH1F("hnumuCCinFV_stack_8","generic4_bnb_14_numu_score_all",20,-7,9);
   hnumuCCinFV_stack_8->SetBinContent(3,4.039444e-05);
   hnumuCCinFV_stack_8->SetBinContent(4,0.2592883);
   hnumuCCinFV_stack_8->SetBinContent(5,5.256974);
   hnumuCCinFV_stack_8->SetBinContent(6,22.42858);
   hnumuCCinFV_stack_8->SetBinContent(7,98.56098);
   hnumuCCinFV_stack_8->SetBinContent(8,279.1043);
   hnumuCCinFV_stack_8->SetBinContent(9,570.8528);
   hnumuCCinFV_stack_8->SetBinContent(10,912.8353);
   hnumuCCinFV_stack_8->SetBinContent(11,1213.495);
   hnumuCCinFV_stack_8->SetBinContent(12,1568.83);
   hnumuCCinFV_stack_8->SetBinContent(13,1814.229);
   hnumuCCinFV_stack_8->SetBinContent(14,1886.748);
   hnumuCCinFV_stack_8->SetBinContent(15,1503.736);
   hnumuCCinFV_stack_8->SetBinContent(16,689.5446);
   hnumuCCinFV_stack_8->SetBinContent(17,180.5473);
   hnumuCCinFV_stack_8->SetBinContent(18,23.57828);
   hnumuCCinFV_stack_8->SetBinContent(19,1.316683);
   hnumuCCinFV_stack_8->SetBinContent(20,0.01427936);
   hnumuCCinFV_stack_8->SetBinContent(21,0.2155348);
   hnumuCCinFV_stack_8->SetBinError(3,4.039444e-05);
   hnumuCCinFV_stack_8->SetBinError(4,0.1259884);
   hnumuCCinFV_stack_8->SetBinError(5,0.660949);
   hnumuCCinFV_stack_8->SetBinError(6,1.566001);
   hnumuCCinFV_stack_8->SetBinError(7,3.588606);
   hnumuCCinFV_stack_8->SetBinError(8,5.034284);
   hnumuCCinFV_stack_8->SetBinError(9,7.403674);
   hnumuCCinFV_stack_8->SetBinError(10,9.103504);
   hnumuCCinFV_stack_8->SetBinError(11,10.56304);
   hnumuCCinFV_stack_8->SetBinError(12,12.39368);
   hnumuCCinFV_stack_8->SetBinError(13,13.52452);
   hnumuCCinFV_stack_8->SetBinError(14,14.27902);
   hnumuCCinFV_stack_8->SetBinError(15,13.51273);
   hnumuCCinFV_stack_8->SetBinError(16,9.406585);
   hnumuCCinFV_stack_8->SetBinError(17,4.93578);
   hnumuCCinFV_stack_8->SetBinError(18,1.621138);
   hnumuCCinFV_stack_8->SetBinError(19,0.4161313);
   hnumuCCinFV_stack_8->SetBinError(20,0.01427936);
   hnumuCCinFV_stack_8->SetBinError(21,0.1196085);
   hnumuCCinFV_stack_8->SetEntries(241430);

   ci = 1477;
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
   hs5->Add(hnumuCCinFV_stack_8,"");
   
   TH1F *hnueCCinFV_stack_9 = new TH1F("hnueCCinFV_stack_9","generic4_bnb_14_numu_score_all",20,-7,9);
   hnueCCinFV_stack_9->SetBinContent(5,0.305673);
   hnueCCinFV_stack_9->SetBinContent(6,0.7529787);
   hnueCCinFV_stack_9->SetBinContent(7,6.032497);
   hnueCCinFV_stack_9->SetBinContent(8,20.70386);
   hnueCCinFV_stack_9->SetBinContent(9,25.17715);
   hnueCCinFV_stack_9->SetBinContent(10,17.06501);
   hnueCCinFV_stack_9->SetBinContent(11,8.127108);
   hnueCCinFV_stack_9->SetBinContent(12,2.790052);
   hnueCCinFV_stack_9->SetBinContent(13,0.7327641);
   hnueCCinFV_stack_9->SetBinContent(14,0.4056578);
   hnueCCinFV_stack_9->SetBinContent(15,0.01277507);
   hnueCCinFV_stack_9->SetBinError(5,0.1306911);
   hnueCCinFV_stack_9->SetBinError(6,0.1990665);
   hnueCCinFV_stack_9->SetBinError(7,0.9912409);
   hnueCCinFV_stack_9->SetBinError(8,1.499918);
   hnueCCinFV_stack_9->SetBinError(9,1.38255);
   hnueCCinFV_stack_9->SetBinError(10,1.152881);
   hnueCCinFV_stack_9->SetBinError(11,0.7536888);
   hnueCCinFV_stack_9->SetBinError(12,0.3928097);
   hnueCCinFV_stack_9->SetBinError(13,0.2060178);
   hnueCCinFV_stack_9->SetBinError(14,0.151196);
   hnueCCinFV_stack_9->SetBinError(15,0.01277507);
   hnueCCinFV_stack_9->SetEntries(1998);

   ci = 1478;
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
   hs5->Add(hnueCCinFV_stack_9,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","generic4_bnb_14_numu_score_all",20,-7,9);
   hmcerror__14->SetBinContent(1,0.1896586);
   hmcerror__14->SetBinContent(2,2.239686);
   hmcerror__14->SetBinContent(3,15.09943);
   hmcerror__14->SetBinContent(4,77.0889);
   hmcerror__14->SetBinContent(5,330.8386);
   hmcerror__14->SetBinContent(6,616.3359);
   hmcerror__14->SetBinContent(7,1162.794);
   hmcerror__14->SetBinContent(8,1755.368);
   hmcerror__14->SetBinContent(9,1839.162);
   hmcerror__14->SetBinContent(10,1838.555);
   hmcerror__14->SetBinContent(11,1822.854);
   hmcerror__14->SetBinContent(12,1993.445);
   hmcerror__14->SetBinContent(13,2132.026);
   hmcerror__14->SetBinContent(14,2120.068);
   hmcerror__14->SetBinContent(15,1643.776);
   hmcerror__14->SetBinContent(16,735.2886);
   hmcerror__14->SetBinContent(17,189.669);
   hmcerror__14->SetBinContent(18,24.93252);
   hmcerror__14->SetBinContent(19,1.377699);
   hmcerror__14->SetBinContent(20,0.01427936);
   hmcerror__14->SetBinContent(21,1.29782);
   hmcerror__14->SetBinError(1,0.2306399);
   hmcerror__14->SetBinError(2,2.319621);
   hmcerror__14->SetBinError(3,7.778752);
   hmcerror__14->SetBinError(4,16.94152);
   hmcerror__14->SetBinError(5,38.76783);
   hmcerror__14->SetBinError(6,76.17426);
   hmcerror__14->SetBinError(7,140.1406);
   hmcerror__14->SetBinError(8,214.7435);
   hmcerror__14->SetBinError(9,226.8676);
   hmcerror__14->SetBinError(10,232.9219);
   hmcerror__14->SetBinError(11,250.443);
   hmcerror__14->SetBinError(12,300.0445);
   hmcerror__14->SetBinError(13,329.4696);
   hmcerror__14->SetBinError(14,343.3421);
   hmcerror__14->SetBinError(15,285.5839);
   hmcerror__14->SetBinError(16,152.5508);
   hmcerror__14->SetBinError(17,44.96129);
   hmcerror__14->SetBinError(18,6.943259);
   hmcerror__14->SetBinError(19,2.02522);
   hmcerror__14->SetBinError(20,0.07140327);
   hmcerror__14->SetBinError(21,1.290791);
   hmcerror__14->SetEntries(16299.7);

   ci = TColor::GetColor("#666666");
   hmcerror__14->SetFillColor(ci);
   hmcerror__14->SetFillStyle(3002);
   hmcerror__14->SetLineColor(12);
   hmcerror__14->SetLineWidth(0);
   hmcerror__14->SetMarkerColor(0);
   hmcerror__14->SetMarkerSize(0);
   hmcerror__14->GetXaxis()->SetLabelFont(42);
   hmcerror__14->GetXaxis()->SetTitleOffset(1);
   hmcerror__14->GetXaxis()->SetTitleFont(42);
   hmcerror__14->GetYaxis()->SetLabelFont(42);
   hmcerror__14->GetYaxis()->SetTitleFont(42);
   hmcerror__14->GetZaxis()->SetLabelFont(42);
   hmcerror__14->GetZaxis()->SetTitleOffset(1);
   hmcerror__14->GetZaxis()->SetTitleFont(42);
   hmcerror__14->Draw("same E2");
   
   Double_t _fx3017[20] = {
   -6.6,
   -5.8,
   -5,
   -4.2,
   -3.4,
   -2.6,
   -1.8,
   -1,
   -0.2,
   0.6,
   1.4,
   2.2,
   3,
   3.8,
   4.6,
   5.4,
   6.2,
   7,
   7.8,
   8.6};
   Double_t _fy3017[20] = {
   1,
   5,
   18,
   70,
   315,
   574,
   1136,
   1765,
   1830,
   1880,
   1947,
   2221,
   2372,
   2296,
   1673,
   657,
   168,
   14,
   1,
   0};
   Double_t _felx3017[20] = {
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4};
   Double_t _fely3017[20] = {
   1,
   2.48995,
   4.4008,
   8.4925,
   17.74824,
   23.9583,
   33.7046,
   42.0119,
   42.7785,
   43.35897,
   44.12482,
   47.12749,
   48.70318,
   47.91659,
   40.90232,
   25.63201,
   12.96148,
   3.9102,
   1,
   0};
   Double_t _fehx3017[20] = {
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4};
   Double_t _fehy3017[20] = {
   1.35971,
   2.21064,
   4.1858,
   8.2902,
   17.74824,
   23.9583,
   33.7046,
   42.0119,
   42.7785,
   43.35897,
   44.12482,
   47.12749,
   48.70318,
   47.91659,
   40.90232,
   25.63201,
   12.96148,
   3.6898,
   1.35971,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-8.6,10.6);
   Graph_Graph3017->SetMinimum(2.662774);
   Graph_Graph3017->SetMaximum(2662.774);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineWidth(2);
   Graph_Graph3017->SetMarkerStyle(20);
   Graph_Graph3017->GetXaxis()->SetNdivisions(509);
   Graph_Graph3017->GetXaxis()->SetLabelFont(132);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetXaxis()->SetTitleFont(132);
   Graph_Graph3017->GetYaxis()->SetNdivisions(509);
   Graph_Graph3017->GetYaxis()->SetLabelFont(132);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3017->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3017->GetYaxis()->SetTitleFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelFont(132);
   Graph_Graph3017->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3017->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3017->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.3,0.65,0.85,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaDATA/#Sigma(MC+EXT)=1.04#pm0.01(data err)#pm0.14(pred err)","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.93/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB data, 18943.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 494.4","F");

   ci = 1470;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 2158.5","F");

   ci = 1471;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 604.5","F");

   ci = 1472;
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
   entry=leg->AddEntry("houtFV_stack_4","out FV, 1036.3","F");

   ci = 1473;
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
   entry=leg->AddEntry("hNCpi0inFV_stack_5","NC #pi^{0} in FV,  662.2","F");

   ci = 1474;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_6","CC #pi^{0} in FV, 1368.6","F");

   ci = 1475;
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
   entry=leg->AddEntry("hNCinFV_stack_7","NC in FV, 1123.2","F");

   ci = 1476;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_8","#nu_{#mu} CC in FV, 10771.3","F");

   ci = 1477;
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
   entry=leg->AddEntry("hnueCCinFV_stack_9","#nu_{e} CC in FV, 82.1","F");

   ci = 1478;
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
   TText *pt_LaTex = pt->AddText("generic4_bnb_14_numu_score_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-9.545231,-0.5333333,11.13169,2.133333);
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
   
   Double_t _fx3018[20] = {
   -6.6,
   -5.8,
   -5,
   -4.2,
   -3.4,
   -2.6,
   -1.8,
   -1,
   -0.2,
   0.6,
   1.4,
   2.2,
   3,
   3.8,
   4.6,
   5.4,
   6.2,
   7,
   7.8,
   8.6};
   Double_t _fy3018[20] = {
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
   Double_t _felx3018[20] = {
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4};
   Double_t _fely3018[20] = {
   1.21608,
   1.03569,
   0.5151685,
   0.219766,
   0.1171805,
   0.1235921,
   0.1205206,
   0.1223353,
   0.1233538,
   0.1266875,
   0.1373906,
   0.1505156,
   0.1545336,
   0.1619486,
   0.1737365,
   0.2074706,
   0.2370513,
   0.278482,
   1.470002,
   5.000454};
   Double_t _fehx3018[20] = {
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4};
   Double_t _fehy3018[20] = {
   1.21608,
   1.03569,
   0.5151685,
   0.219766,
   0.1171805,
   0.1235921,
   0.1205206,
   0.1223353,
   0.1233538,
   0.1266875,
   0.1373906,
   0.1505156,
   0.1545336,
   0.1619486,
   0.1737365,
   0.2074706,
   0.2370513,
   0.278482,
   1.470002,
   5.000454};
   grae = new TGraphAsymmErrors(20,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-8.6,10.6);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("Reco neutrino energy [MeV]");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3018->GetYaxis()->SetNdivisions(210);
   Graph_Graph3018->GetYaxis()->SetLabelFont(132);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3018->GetYaxis()->SetTitleFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelFont(132);
   Graph_Graph3018->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3018->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3018->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3018);
   
   grae->Draw("a2");
   
   Double_t _fx3019[20] = {
   -6.6,
   -5.8,
   -5,
   -4.2,
   -3.4,
   -2.6,
   -1.8,
   -1,
   -0.2,
   0.6,
   1.4,
   2.2,
   3,
   3.8,
   4.6,
   5.4,
   6.2,
   7,
   7.8,
   8.6};
   Double_t _fy3019[20] = {
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
   Double_t _felx3019[20] = {
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4};
   Double_t _fely3019[20] = {
   1.21608,
   0.3215852,
   0.2542189,
   0.1575892,
   0.1100798,
   0.1174813,
   0.1174316,
   0.1201606,
   0.1201532,
   0.1231264,
   0.1342866,
   0.1433225,
   0.1515773,
   0.159959,
   0.17184,
   0.1842614,
   0.2008593,
   0.2056174,
   0.4019563,
   5.000454};
   Double_t _fehx3019[20] = {
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4};
   Double_t _fehy3019[20] = {
   1.21608,
   0.3215852,
   0.2542189,
   0.1575892,
   0.1100798,
   0.1174813,
   0.1174316,
   0.1201606,
   0.1201532,
   0.1231264,
   0.1342866,
   0.1433225,
   0.1515773,
   0.159959,
   0.17184,
   0.1842614,
   0.2008593,
   0.2056174,
   0.4019563,
   5.000454};
   grae = new TGraphAsymmErrors(20,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-8.6,10.6);
   Graph_Graph3019->SetMinimum(0);
   Graph_Graph3019->SetMaximum(2);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineWidth(2);
   Graph_Graph3019->SetMarkerStyle(20);
   Graph_Graph3019->GetXaxis()->SetRange(9,92);
   Graph_Graph3019->GetXaxis()->SetNdivisions(509);
   Graph_Graph3019->GetXaxis()->SetLabelFont(132);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetXaxis()->SetTitleFont(132);
   Graph_Graph3019->GetYaxis()->SetNdivisions(509);
   Graph_Graph3019->GetYaxis()->SetLabelFont(132);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3019->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3019->GetYaxis()->SetTitleFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelFont(132);
   Graph_Graph3019->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3019->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3019->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("2 ");
   
   Double_t _fx3020[20] = {
   -6.6,
   -5.8,
   -5,
   -4.2,
   -3.4,
   -2.6,
   -1.8,
   -1,
   -0.2,
   0.6,
   1.4,
   2.2,
   3,
   3.8,
   4.6,
   5.4,
   6.2,
   7,
   7.8,
   8.6};
   Double_t _fy3020[20] = {
   5.272633,
   2.232456,
   1.192098,
   0.9080426,
   0.952126,
   0.9313103,
   0.9769575,
   1.005487,
   0.9950183,
   1.022542,
   1.068105,
   1.114152,
   1.112557,
   1.082984,
   1.017779,
   0.8935267,
   0.8857536,
   0.5615156,
   0.7258481,
   0};
   Double_t _felx3020[20] = {
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4};
   Double_t _fely3020[20] = {
   5.272633,
   1.111741,
   0.2914547,
   0.110165,
   0.05364622,
   0.03887214,
   0.02898588,
   0.02393338,
   0.02325977,
   0.02358318,
   0.02420645,
   0.02364123,
   0.02284362,
   0.02260145,
   0.02488315,
   0.0348598,
   0.06833737,
   0.1568313,
   0.7258481,
   0};
   Double_t _fehx3020[20] = {
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4,
   0.4};
   Double_t _fehy3020[20] = {
   7.169252,
   0.9870312,
   0.2772157,
   0.1075408,
   0.05364622,
   0.03887214,
   0.02898588,
   0.02393338,
   0.02325977,
   0.02358318,
   0.02420645,
   0.02364123,
   0.02284362,
   0.02260145,
   0.02488315,
   0.0348598,
   0.06833737,
   0.1479914,
   0.986943,
   80.38176};
   grae = new TGraphAsymmErrors(20,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-8.6,10.6);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(88.41994);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineWidth(2);
   Graph_Graph3020->SetMarkerStyle(20);
   Graph_Graph3020->GetXaxis()->SetNdivisions(509);
   Graph_Graph3020->GetXaxis()->SetLabelFont(132);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetXaxis()->SetTitleFont(132);
   Graph_Graph3020->GetYaxis()->SetNdivisions(509);
   Graph_Graph3020->GetYaxis()->SetLabelFont(132);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3020->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3020->GetYaxis()->SetTitleFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelFont(132);
   Graph_Graph3020->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3020->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3020->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3020);
   
   grae->Draw("p ");
   
   TH1F *hist__15 = new TH1F("hist__15","generic4_bnb_14_numu_score_all",20,-7,9);

   ci = TColor::GetColor("#000099");
   hist__15->SetLineColor(ci);
   hist__15->GetXaxis()->SetLabelFont(42);
   hist__15->GetXaxis()->SetTitleOffset(1);
   hist__15->GetXaxis()->SetTitleFont(42);
   hist__15->GetYaxis()->SetNdivisions(405);
   hist__15->GetYaxis()->SetLabelFont(42);
   hist__15->GetYaxis()->SetTitleFont(42);
   hist__15->GetZaxis()->SetLabelFont(42);
   hist__15->GetZaxis()->SetTitleOffset(1);
   hist__15->GetZaxis()->SetTitleFont(42);
   hist__15->Draw("axis same");
   TLine *line = new TLine(-7,1,9,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
