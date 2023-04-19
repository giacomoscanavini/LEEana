#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Fri Feb 17 20:55:43 2023) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",112,135,1200,900);
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
   pad1->Range(-170,-3.613597,163.3333,399.5877);
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
   
   TH1F *hmc__13 = new TH1F("hmc__13","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__13->SetBinContent(0,0.7407695);
   hmc__13->SetBinContent(1,0.9049706);
   hmc__13->SetBinContent(2,28.33951);
   hmc__13->SetBinContent(3,69.69064);
   hmc__13->SetBinContent(4,115.5051);
   hmc__13->SetBinContent(5,143.4327);
   hmc__13->SetBinContent(6,148.5315);
   hmc__13->SetBinContent(7,168.8666);
   hmc__13->SetBinContent(8,170.8109);
   hmc__13->SetBinContent(9,166.2948);
   hmc__13->SetBinContent(10,176.5882);
   hmc__13->SetBinContent(11,173.8159);
   hmc__13->SetBinContent(12,176.6635);
   hmc__13->SetBinContent(13,173.7363);
   hmc__13->SetBinContent(14,180.6798);
   hmc__13->SetBinContent(15,175.5408);
   hmc__13->SetBinContent(16,171.4883);
   hmc__13->SetBinContent(17,173.207);
   hmc__13->SetBinContent(18,178.2263);
   hmc__13->SetBinContent(19,177.3004);
   hmc__13->SetBinContent(20,167.1247);
   hmc__13->SetBinContent(21,163.5446);
   hmc__13->SetBinContent(22,154.8645);
   hmc__13->SetBinContent(23,153.7578);
   hmc__13->SetBinContent(24,100.5745);
   hmc__13->SetBinContent(25,52.29765);
   hmc__13->SetBinContent(26,0.1967154);
   hmc__13->SetBinContent(27,0.9815497);
   hmc__13->SetBinError(0,0.3551621);
   hmc__13->SetBinError(1,4.323414);
   hmc__13->SetBinError(2,16.77895);
   hmc__13->SetBinError(3,34.38549);
   hmc__13->SetBinError(4,56.60046);
   hmc__13->SetBinError(5,52.61635);
   hmc__13->SetBinError(6,59.35787);
   hmc__13->SetBinError(7,62.71864);
   hmc__13->SetBinError(8,63.2466);
   hmc__13->SetBinError(9,59.55549);
   hmc__13->SetBinError(10,60.1679);
   hmc__13->SetBinError(11,63.46831);
   hmc__13->SetBinError(12,63.86173);
   hmc__13->SetBinError(13,61.38331);
   hmc__13->SetBinError(14,61.76357);
   hmc__13->SetBinError(15,58.30808);
   hmc__13->SetBinError(16,58.86496);
   hmc__13->SetBinError(17,56.2352);
   hmc__13->SetBinError(18,59.12981);
   hmc__13->SetBinError(19,58.95899);
   hmc__13->SetBinError(20,58.64816);
   hmc__13->SetBinError(21,51.62956);
   hmc__13->SetBinError(22,49.64449);
   hmc__13->SetBinError(23,45.67117);
   hmc__13->SetBinError(24,34.58746);
   hmc__13->SetBinError(25,18.26322);
   hmc__13->SetBinError(26,0.7111128);
   hmc__13->SetBinError(27,2.486842);
   hmc__13->SetMinimum(-3.613597);
   hmc__13->SetMaximum(379.4277);
   hmc__13->SetEntries(3516.85);
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
   
   TH1F *hs5_stack_5 = new TH1F("hs5_stack_5","",26,-130,130);
   hs5_stack_5->SetMinimum(-1.150846e-08);
   hs5_stack_5->SetMaximum(189.7138);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,1.744925);
   hbadmatch_stack_1->SetBinContent(3,0.5867651);
   hbadmatch_stack_1->SetBinContent(4,4.864732);
   hbadmatch_stack_1->SetBinContent(5,2.069688);
   hbadmatch_stack_1->SetBinContent(6,2.30395);
   hbadmatch_stack_1->SetBinContent(7,3.119135);
   hbadmatch_stack_1->SetBinContent(8,3.840572);
   hbadmatch_stack_1->SetBinContent(9,3.657385);
   hbadmatch_stack_1->SetBinContent(10,4.132955);
   hbadmatch_stack_1->SetBinContent(11,3.642444);
   hbadmatch_stack_1->SetBinContent(12,4.502552);
   hbadmatch_stack_1->SetBinContent(13,4.489311);
   hbadmatch_stack_1->SetBinContent(14,5.68528);
   hbadmatch_stack_1->SetBinContent(15,4.241502);
   hbadmatch_stack_1->SetBinContent(16,5.263243);
   hbadmatch_stack_1->SetBinContent(17,2.103854);
   hbadmatch_stack_1->SetBinContent(18,3.061513);
   hbadmatch_stack_1->SetBinContent(19,3.556544);
   hbadmatch_stack_1->SetBinContent(20,3.37519);
   hbadmatch_stack_1->SetBinContent(21,3.36313);
   hbadmatch_stack_1->SetBinContent(22,2.422489);
   hbadmatch_stack_1->SetBinContent(23,5.818926);
   hbadmatch_stack_1->SetBinContent(24,1.749821);
   hbadmatch_stack_1->SetBinContent(25,1.984167);
   hbadmatch_stack_1->SetBinError(2,0.6922431);
   hbadmatch_stack_1->SetBinError(3,0.3387718);
   hbadmatch_stack_1->SetBinError(4,2.122352);
   hbadmatch_stack_1->SetBinError(5,0.7678307);
   hbadmatch_stack_1->SetBinError(6,0.7080718);
   hbadmatch_stack_1->SetBinError(7,0.9380145);
   hbadmatch_stack_1->SetBinError(8,0.9577828);
   hbadmatch_stack_1->SetBinError(9,0.9731955);
   hbadmatch_stack_1->SetBinError(10,1.185452);
   hbadmatch_stack_1->SetBinError(11,1.007844);
   hbadmatch_stack_1->SetBinError(12,1.111314);
   hbadmatch_stack_1->SetBinError(13,1.09906);
   hbadmatch_stack_1->SetBinError(14,1.234598);
   hbadmatch_stack_1->SetBinError(15,1.080411);
   hbadmatch_stack_1->SetBinError(16,1.138344);
   hbadmatch_stack_1->SetBinError(17,0.6792233);
   hbadmatch_stack_1->SetBinError(18,0.9179987);
   hbadmatch_stack_1->SetBinError(19,1.028397);
   hbadmatch_stack_1->SetBinError(20,0.9934961);
   hbadmatch_stack_1->SetBinError(21,1.001433);
   hbadmatch_stack_1->SetBinError(22,0.8604327);
   hbadmatch_stack_1->SetBinError(23,1.668355);
   hbadmatch_stack_1->SetBinError(24,0.6329459);
   hbadmatch_stack_1->SetBinError(25,0.71879);
   hbadmatch_stack_1->SetEntries(323);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1486;
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
   hs5->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,0.6487947);
   hext_stack_2->SetBinContent(4,0.4065989);
   hext_stack_2->SetBinContent(5,6.945253);
   hext_stack_2->SetBinContent(6,1.055394);
   hext_stack_2->SetBinContent(7,2.599588);
   hext_stack_2->SetBinContent(8,7.396514);
   hext_stack_2->SetBinContent(9,7.993466);
   hext_stack_2->SetBinContent(10,15.46777);
   hext_stack_2->SetBinContent(11,14.0505);
   hext_stack_2->SetBinContent(12,5.516392);
   hext_stack_2->SetBinContent(13,8.179411);
   hext_stack_2->SetBinContent(14,13.0729);
   hext_stack_2->SetBinContent(15,14.11116);
   hext_stack_2->SetBinContent(16,12.72538);
   hext_stack_2->SetBinContent(17,18.624);
   hext_stack_2->SetBinContent(18,19.01901);
   hext_stack_2->SetBinContent(19,19.85098);
   hext_stack_2->SetBinContent(20,16.72353);
   hext_stack_2->SetBinContent(21,19.65905);
   hext_stack_2->SetBinContent(22,17.3392);
   hext_stack_2->SetBinContent(23,32.24913);
   hext_stack_2->SetBinContent(24,16.06473);
   hext_stack_2->SetBinContent(25,6.870233);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.4587671);
   hext_stack_2->SetBinError(4,0.4065989);
   hext_stack_2->SetBinError(5,1.863119);
   hext_stack_2->SetBinError(6,0.6130171);
   hext_stack_2->SetBinError(7,0.9884288);
   hext_stack_2->SetBinError(8,2.056985);
   hext_stack_2->SetBinError(9,2.012015);
   hext_stack_2->SetBinError(10,2.864325);
   hext_stack_2->SetBinError(11,2.632011);
   hext_stack_2->SetBinError(12,1.503469);
   hext_stack_2->SetBinError(13,1.888062);
   hext_stack_2->SetBinError(14,2.544928);
   hext_stack_2->SetBinError(15,2.755209);
   hext_stack_2->SetBinError(16,2.274461);
   hext_stack_2->SetBinError(17,3.141537);
   hext_stack_2->SetBinError(18,3.178153);
   hext_stack_2->SetBinError(19,3.188106);
   hext_stack_2->SetBinError(20,2.522679);
   hext_stack_2->SetBinError(21,2.95135);
   hext_stack_2->SetBinError(22,2.691479);
   hext_stack_2->SetBinError(23,4.110802);
   hext_stack_2->SetBinError(24,2.832204);
   hext_stack_2->SetBinError(25,1.791626);
   hext_stack_2->SetEntries(621);

   ci = 1487;
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
   hs5->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(4,0.1651799);
   hdirt_stack_3->SetBinContent(5,0.3569671);
   hdirt_stack_3->SetBinContent(6,0.2212471);
   hdirt_stack_3->SetBinContent(7,0.3569671);
   hdirt_stack_3->SetBinContent(9,0.4794168);
   hdirt_stack_3->SetBinContent(10,0.7943197);
   hdirt_stack_3->SetBinContent(11,0.7386022);
   hdirt_stack_3->SetBinContent(12,0.6951543);
   hdirt_stack_3->SetBinContent(13,1.311528);
   hdirt_stack_3->SetBinContent(14,0.2188956);
   hdirt_stack_3->SetBinContent(15,0.7842561);
   hdirt_stack_3->SetBinContent(16,0.5429839);
   hdirt_stack_3->SetBinContent(17,1.052121);
   hdirt_stack_3->SetBinContent(18,0.8398326);
   hdirt_stack_3->SetBinContent(19,0.4007975);
   hdirt_stack_3->SetBinContent(20,0.7759784);
   hdirt_stack_3->SetBinContent(21,2.030334);
   hdirt_stack_3->SetBinContent(22,0.9859834);
   hdirt_stack_3->SetBinContent(23,0.945467);
   hdirt_stack_3->SetBinContent(24,1.400816);
   hdirt_stack_3->SetBinContent(25,0.8811293);
   hdirt_stack_3->SetBinError(4,0.1651799);
   hdirt_stack_3->SetBinError(5,0.258803);
   hdirt_stack_3->SetBinError(6,0.2189082);
   hdirt_stack_3->SetBinError(7,0.258803);
   hdirt_stack_3->SetBinError(9,0.3402743);
   hdirt_stack_3->SetBinError(10,0.407894);
   hdirt_stack_3->SetBinError(11,0.4497315);
   hdirt_stack_3->SetBinError(12,0.4258516);
   hdirt_stack_3->SetBinError(13,0.5552101);
   hdirt_stack_3->SetBinError(14,0.2188956);
   hdirt_stack_3->SetBinError(15,0.4973774);
   hdirt_stack_3->SetBinError(16,0.4278058);
   hdirt_stack_3->SetBinError(17,0.4983258);
   hdirt_stack_3->SetBinError(18,0.4497571);
   hdirt_stack_3->SetBinError(19,0.4007975);
   hdirt_stack_3->SetBinError(20,0.458477);
   hdirt_stack_3->SetBinError(21,0.7718887);
   hdirt_stack_3->SetBinError(22,0.588423);
   hdirt_stack_3->SetBinError(23,0.4352781);
   hdirt_stack_3->SetBinError(24,0.9882803);
   hdirt_stack_3->SetBinError(25,0.4646895);
   hdirt_stack_3->SetEntries(69);

   ci = 1488;
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
   hs5->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,0.1967154);
   houtFV_stack_4->SetBinContent(1,0.3401776);
   houtFV_stack_4->SetBinContent(2,19.84124);
   houtFV_stack_4->SetBinContent(3,17.40446);
   houtFV_stack_4->SetBinContent(4,9.603876);
   houtFV_stack_4->SetBinContent(5,6.209696);
   houtFV_stack_4->SetBinContent(6,5.229078);
   houtFV_stack_4->SetBinContent(7,5.327343);
   houtFV_stack_4->SetBinContent(8,5.392333);
   houtFV_stack_4->SetBinContent(9,7.77483);
   houtFV_stack_4->SetBinContent(10,6.844038);
   houtFV_stack_4->SetBinContent(11,8.19485);
   houtFV_stack_4->SetBinContent(12,8.03366);
   houtFV_stack_4->SetBinContent(13,3.709461);
   houtFV_stack_4->SetBinContent(14,7.154359);
   houtFV_stack_4->SetBinContent(15,5.187279);
   houtFV_stack_4->SetBinContent(16,6.40387);
   houtFV_stack_4->SetBinContent(17,7.066913);
   houtFV_stack_4->SetBinContent(18,6.989844);
   houtFV_stack_4->SetBinContent(19,5.50842);
   houtFV_stack_4->SetBinContent(20,5.858104);
   houtFV_stack_4->SetBinContent(21,9.161639);
   houtFV_stack_4->SetBinContent(22,8.605053);
   houtFV_stack_4->SetBinContent(23,5.482343);
   houtFV_stack_4->SetBinContent(24,14.31908);
   houtFV_stack_4->SetBinContent(25,30.52921);
   houtFV_stack_4->SetBinError(0,0.1967154);
   houtFV_stack_4->SetBinError(1,0.3401776);
   houtFV_stack_4->SetBinError(2,2.198373);
   houtFV_stack_4->SetBinError(3,2.066036);
   houtFV_stack_4->SetBinError(4,1.505634);
   houtFV_stack_4->SetBinError(5,1.263958);
   houtFV_stack_4->SetBinError(6,1.131917);
   houtFV_stack_4->SetBinError(7,1.118531);
   houtFV_stack_4->SetBinError(8,1.191524);
   houtFV_stack_4->SetBinError(9,1.465725);
   houtFV_stack_4->SetBinError(10,1.300965);
   houtFV_stack_4->SetBinError(11,1.481216);
   houtFV_stack_4->SetBinError(12,1.425845);
   houtFV_stack_4->SetBinError(13,0.9605263);
   houtFV_stack_4->SetBinError(14,1.41778);
   houtFV_stack_4->SetBinError(15,1.137153);
   houtFV_stack_4->SetBinError(16,1.281814);
   houtFV_stack_4->SetBinError(17,1.28358);
   houtFV_stack_4->SetBinError(18,1.294507);
   houtFV_stack_4->SetBinError(19,1.214012);
   houtFV_stack_4->SetBinError(20,1.223178);
   houtFV_stack_4->SetBinError(21,1.517669);
   houtFV_stack_4->SetBinError(22,1.546577);
   houtFV_stack_4->SetBinError(23,1.155005);
   houtFV_stack_4->SetBinError(24,1.919475);
   houtFV_stack_4->SetBinError(25,2.751301);
   houtFV_stack_4->SetEntries(931);

   ci = 1489;
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
   hs5->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.125218);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.2783359);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1115999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3341359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.529604);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.51449);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6277541);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.2504359);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2233681);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.194636);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1012383);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.1458657);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.151108);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2470656);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2193909);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2996304);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1431726);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1974492);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1376284);
   hNCpi0inFVcoh_stack_5->SetEntries(104);

   ci = 1490;
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
   hs5->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.711454);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.418668);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.864572);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.7670858);
   hNCpi0inFVqe_stack_6->SetBinContent(7,1.521058);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.920372);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.046422);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.7949858);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.7112858);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.17164);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.753636);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.21299);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.4321178);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.9338218);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.9889579);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.8086039);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.795154);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.5860679);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.6420361);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.87819);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.3347998);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.3068998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3035023);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2107962);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3211561);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2468026);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.4614805);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.3235708);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3663515);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2483746);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2436282);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3800824);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2941681);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3458579);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1371558);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2812022);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3067967);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2623461);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.3073253);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.2215976);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2888274);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.3320795);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.09664838);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.09253378);
   hNCpi0inFVqe_stack_6->SetEntries(347);

   ci = 1491;
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
   hs5->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.4188362);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinContent(2,3.138098);
   hNCpi0inFVres_stack_7->SetBinContent(3,22.29451);
   hNCpi0inFVres_stack_7->SetBinContent(4,49.31943);
   hNCpi0inFVres_stack_7->SetBinContent(5,64.09106);
   hNCpi0inFVres_stack_7->SetBinContent(6,66.68872);
   hNCpi0inFVres_stack_7->SetBinContent(7,79.85794);
   hNCpi0inFVres_stack_7->SetBinContent(8,79.44061);
   hNCpi0inFVres_stack_7->SetBinContent(9,73.66544);
   hNCpi0inFVres_stack_7->SetBinContent(10,73.54767);
   hNCpi0inFVres_stack_7->SetBinContent(11,78.60656);
   hNCpi0inFVres_stack_7->SetBinContent(12,78.86017);
   hNCpi0inFVres_stack_7->SetBinContent(13,77.09697);
   hNCpi0inFVres_stack_7->SetBinContent(14,73.96253);
   hNCpi0inFVres_stack_7->SetBinContent(15,76.09209);
   hNCpi0inFVres_stack_7->SetBinContent(16,70.65507);
   hNCpi0inFVres_stack_7->SetBinContent(17,69.54993);
   hNCpi0inFVres_stack_7->SetBinContent(18,68.35015);
   hNCpi0inFVres_stack_7->SetBinContent(19,70.24533);
   hNCpi0inFVres_stack_7->SetBinContent(20,75.94315);
   hNCpi0inFVres_stack_7->SetBinContent(21,60.45754);
   hNCpi0inFVres_stack_7->SetBinContent(22,61.78481);
   hNCpi0inFVres_stack_7->SetBinContent(23,53.78049);
   hNCpi0inFVres_stack_7->SetBinContent(24,31.71415);
   hNCpi0inFVres_stack_7->SetBinContent(25,3.402816);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.6413721);
   hNCpi0inFVres_stack_7->SetBinError(0,0.277838);
   hNCpi0inFVres_stack_7->SetBinError(1,0.02789998);
   hNCpi0inFVres_stack_7->SetBinError(2,0.5637875);
   hNCpi0inFVres_stack_7->SetBinError(3,1.517809);
   hNCpi0inFVres_stack_7->SetBinError(4,2.284358);
   hNCpi0inFVres_stack_7->SetBinError(5,2.645318);
   hNCpi0inFVres_stack_7->SetBinError(6,2.619071);
   hNCpi0inFVres_stack_7->SetBinError(7,2.955967);
   hNCpi0inFVres_stack_7->SetBinError(8,2.968308);
   hNCpi0inFVres_stack_7->SetBinError(9,2.821318);
   hNCpi0inFVres_stack_7->SetBinError(10,2.758952);
   hNCpi0inFVres_stack_7->SetBinError(11,2.878867);
   hNCpi0inFVres_stack_7->SetBinError(12,2.914997);
   hNCpi0inFVres_stack_7->SetBinError(13,2.857858);
   hNCpi0inFVres_stack_7->SetBinError(14,2.801348);
   hNCpi0inFVres_stack_7->SetBinError(15,2.886193);
   hNCpi0inFVres_stack_7->SetBinError(16,2.79063);
   hNCpi0inFVres_stack_7->SetBinError(17,2.690617);
   hNCpi0inFVres_stack_7->SetBinError(18,2.697046);
   hNCpi0inFVres_stack_7->SetBinError(19,2.734616);
   hNCpi0inFVres_stack_7->SetBinError(20,2.925738);
   hNCpi0inFVres_stack_7->SetBinError(21,2.518245);
   hNCpi0inFVres_stack_7->SetBinError(22,2.616086);
   hNCpi0inFVres_stack_7->SetBinError(23,2.505204);
   hNCpi0inFVres_stack_7->SetBinError(24,1.93067);
   hNCpi0inFVres_stack_7->SetBinError(25,0.5761923);
   hNCpi0inFVres_stack_7->SetBinError(27,0.3113101);
   hNCpi0inFVres_stack_7->SetEntries(26810);

   ci = 1492;
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
   hs5->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.125218);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.5709538);
   hNCpi0inFVdis_stack_8->SetBinContent(3,3.750074);
   hNCpi0inFVdis_stack_8->SetBinContent(4,9.509788);
   hNCpi0inFVdis_stack_8->SetBinContent(5,12.50672);
   hNCpi0inFVdis_stack_8->SetBinContent(6,13.86271);
   hNCpi0inFVdis_stack_8->SetBinContent(7,15.92566);
   hNCpi0inFVdis_stack_8->SetBinContent(8,14.30612);
   hNCpi0inFVdis_stack_8->SetBinContent(9,16.17542);
   hNCpi0inFVdis_stack_8->SetBinContent(10,14.09436);
   hNCpi0inFVdis_stack_8->SetBinContent(11,13.1074);
   hNCpi0inFVdis_stack_8->SetBinContent(12,16.3121);
   hNCpi0inFVdis_stack_8->SetBinContent(13,14.73923);
   hNCpi0inFVdis_stack_8->SetBinContent(14,17.21719);
   hNCpi0inFVdis_stack_8->SetBinContent(15,15.15807);
   hNCpi0inFVdis_stack_8->SetBinContent(16,13.57771);
   hNCpi0inFVdis_stack_8->SetBinContent(17,13.09196);
   hNCpi0inFVdis_stack_8->SetBinContent(18,14.59773);
   hNCpi0inFVdis_stack_8->SetBinContent(19,12.57913);
   hNCpi0inFVdis_stack_8->SetBinContent(20,11.95934);
   hNCpi0inFVdis_stack_8->SetBinContent(21,11.99007);
   hNCpi0inFVdis_stack_8->SetBinContent(22,10.96972);
   hNCpi0inFVdis_stack_8->SetBinContent(23,11.30769);
   hNCpi0inFVdis_stack_8->SetBinContent(24,5.16202);
   hNCpi0inFVdis_stack_8->SetBinContent(25,1.142908);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.1012383);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.1902537);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.6389197);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.017977);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.145299);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.242997);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.361311);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.243362);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.320088);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.187455);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.129357);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.329562);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.271529);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.351579);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.30153);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.170314);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.158252);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.22835);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.154101);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.071075);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.127517);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.032748);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.124609);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.7289302);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.3527294);
   hNCpi0inFVdis_stack_8->SetEntries(5239);

   ci = 1493;
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
   hs5->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.125218);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.1012383);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1954681);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(29);

   ci = 1494;
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
   hs5->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(2,1.905448);
   hCCpi0inFV_stack_10->SetBinContent(3,12.04132);
   hCCpi0inFV_stack_10->SetBinContent(4,18.10527);
   hCCpi0inFV_stack_10->SetBinContent(5,19.8157);
   hCCpi0inFV_stack_10->SetBinContent(6,24.00121);
   hCCpi0inFV_stack_10->SetBinContent(7,25.55148);
   hCCpi0inFV_stack_10->SetBinContent(8,28.44936);
   hCCpi0inFV_stack_10->SetBinContent(9,22.82117);
   hCCpi0inFV_stack_10->SetBinContent(10,25.10161);
   hCCpi0inFV_stack_10->SetBinContent(11,23.47586);
   hCCpi0inFV_stack_10->SetBinContent(12,27.65223);
   hCCpi0inFV_stack_10->SetBinContent(13,28.96187);
   hCCpi0inFV_stack_10->SetBinContent(14,26.13505);
   hCCpi0inFV_stack_10->SetBinContent(15,23.46688);
   hCCpi0inFV_stack_10->SetBinContent(16,27.58037);
   hCCpi0inFV_stack_10->SetBinContent(17,25.10198);
   hCCpi0inFV_stack_10->SetBinContent(18,28.22944);
   hCCpi0inFV_stack_10->SetBinContent(19,28.14301);
   hCCpi0inFV_stack_10->SetBinContent(20,21.40844);
   hCCpi0inFV_stack_10->SetBinContent(21,20.70938);
   hCCpi0inFV_stack_10->SetBinContent(22,21.14715);
   hCCpi0inFV_stack_10->SetBinContent(23,20.2448);
   hCCpi0inFV_stack_10->SetBinContent(24,12.72242);
   hCCpi0inFV_stack_10->SetBinContent(25,2.92417);
   hCCpi0inFV_stack_10->SetBinContent(26,0.1967154);
   hCCpi0inFV_stack_10->SetBinError(2,0.6496038);
   hCCpi0inFV_stack_10->SetBinError(3,1.730662);
   hCCpi0inFV_stack_10->SetBinError(4,2.144614);
   hCCpi0inFV_stack_10->SetBinError(5,2.284463);
   hCCpi0inFV_stack_10->SetBinError(6,2.478221);
   hCCpi0inFV_stack_10->SetBinError(7,2.533168);
   hCCpi0inFV_stack_10->SetBinError(8,2.674818);
   hCCpi0inFV_stack_10->SetBinError(9,2.387472);
   hCCpi0inFV_stack_10->SetBinError(10,2.485323);
   hCCpi0inFV_stack_10->SetBinError(11,2.430448);
   hCCpi0inFV_stack_10->SetBinError(12,2.677711);
   hCCpi0inFV_stack_10->SetBinError(13,2.706974);
   hCCpi0inFV_stack_10->SetBinError(14,2.534471);
   hCCpi0inFV_stack_10->SetBinError(15,2.362444);
   hCCpi0inFV_stack_10->SetBinError(16,2.671104);
   hCCpi0inFV_stack_10->SetBinError(17,2.5837);
   hCCpi0inFV_stack_10->SetBinError(18,2.659941);
   hCCpi0inFV_stack_10->SetBinError(19,2.676174);
   hCCpi0inFV_stack_10->SetBinError(20,2.297125);
   hCCpi0inFV_stack_10->SetBinError(21,2.316114);
   hCCpi0inFV_stack_10->SetBinError(22,2.351904);
   hCCpi0inFV_stack_10->SetBinError(23,2.199563);
   hCCpi0inFV_stack_10->SetBinError(24,1.818552);
   hCCpi0inFV_stack_10->SetBinError(25,0.7939858);
   hCCpi0inFV_stack_10->SetBinError(26,0.1967154);
   hCCpi0inFV_stack_10->SetEntries(2205);

   ci = 1495;
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
   hs5->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.1967154);
   hNCinFV_stack_11->SetBinContent(2,0.536893);
   hNCinFV_stack_11->SetBinContent(3,4.549576);
   hNCinFV_stack_11->SetBinContent(4,8.874914);
   hNCinFV_stack_11->SetBinContent(5,11.64354);
   hNCinFV_stack_11->SetBinContent(6,11.7707);
   hNCinFV_stack_11->SetBinContent(7,15.44321);
   hNCinFV_stack_11->SetBinContent(8,11.72191);
   hNCinFV_stack_11->SetBinContent(9,13.63473);
   hNCinFV_stack_11->SetBinContent(10,15.29974);
   hNCinFV_stack_11->SetBinContent(11,12.0156);
   hNCinFV_stack_11->SetBinContent(12,15.62254);
   hNCinFV_stack_11->SetBinContent(13,12.54911);
   hNCinFV_stack_11->SetBinContent(14,13.62797);
   hNCinFV_stack_11->SetBinContent(15,15.24818);
   hNCinFV_stack_11->SetBinContent(16,12.26726);
   hNCinFV_stack_11->SetBinContent(17,17.25398);
   hNCinFV_stack_11->SetBinContent(18,16.11004);
   hNCinFV_stack_11->SetBinContent(19,13.68291);
   hNCinFV_stack_11->SetBinContent(20,11.73374);
   hNCinFV_stack_11->SetBinContent(21,15.54525);
   hNCinFV_stack_11->SetBinContent(22,11.62048);
   hNCinFV_stack_11->SetBinContent(23,8.159293);
   hNCinFV_stack_11->SetBinContent(24,7.033944);
   hNCinFV_stack_11->SetBinContent(25,1.367324);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.3929602);
   hNCinFV_stack_11->SetBinError(3,1.019349);
   hNCinFV_stack_11->SetBinError(4,1.557383);
   hNCinFV_stack_11->SetBinError(5,1.665693);
   hNCinFV_stack_11->SetBinError(6,1.74458);
   hNCinFV_stack_11->SetBinError(7,1.952561);
   hNCinFV_stack_11->SetBinError(8,1.698602);
   hNCinFV_stack_11->SetBinError(9,1.873101);
   hNCinFV_stack_11->SetBinError(10,1.932736);
   hNCinFV_stack_11->SetBinError(11,1.744117);
   hNCinFV_stack_11->SetBinError(12,2.059408);
   hNCinFV_stack_11->SetBinError(13,1.787467);
   hNCinFV_stack_11->SetBinError(14,1.872394);
   hNCinFV_stack_11->SetBinError(15,1.942797);
   hNCinFV_stack_11->SetBinError(16,1.744413);
   hNCinFV_stack_11->SetBinError(17,2.077443);
   hNCinFV_stack_11->SetBinError(18,2.009636);
   hNCinFV_stack_11->SetBinError(19,1.862309);
   hNCinFV_stack_11->SetBinError(20,1.699966);
   hNCinFV_stack_11->SetBinError(21,1.983048);
   hNCinFV_stack_11->SetBinError(22,1.721595);
   hNCinFV_stack_11->SetBinError(23,1.428631);
   hNCinFV_stack_11->SetBinError(24,1.330841);
   hNCinFV_stack_11->SetBinError(25,0.5568531);
   hNCinFV_stack_11->SetBinError(27,0.3401776);
   hNCinFV_stack_11->SetEntries(1184);

   ci = 1496;
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
   hs5->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,0.2496561);
   hnumuCCinFV_stack_12->SetBinContent(3,7.675779);
   hnumuCCinFV_stack_12->SetBinContent(4,12.49254);
   hnumuCCinFV_stack_12->SetBinContent(5,17.80233);
   hnumuCCinFV_stack_12->SetBinContent(6,21.63057);
   hnumuCCinFV_stack_12->SetBinContent(7,17.11349);
   hnumuCCinFV_stack_12->SetBinContent(8,18.10101);
   hnumuCCinFV_stack_12->SetBinContent(9,17.12539);
   hnumuCCinFV_stack_12->SetBinContent(10,17.63774);
   hnumuCCinFV_stack_12->SetBinContent(11,17.3936);
   hnumuCCinFV_stack_12->SetBinContent(12,17.17676);
   hnumuCCinFV_stack_12->SetBinContent(13,20.878);
   hnumuCCinFV_stack_12->SetBinContent(14,20.95473);
   hnumuCCinFV_stack_12->SetBinContent(15,19.82847);
   hnumuCCinFV_stack_12->SetBinContent(16,20.72738);
   hnumuCCinFV_stack_12->SetBinContent(17,17.70208);
   hnumuCCinFV_stack_12->SetBinContent(18,18.80443);
   hnumuCCinFV_stack_12->SetBinContent(19,21.15781);
   hnumuCCinFV_stack_12->SetBinContent(20,17.34496);
   hnumuCCinFV_stack_12->SetBinContent(21,18.7049);
   hnumuCCinFV_stack_12->SetBinContent(22,18.80315);
   hnumuCCinFV_stack_12->SetBinContent(23,14.81633);
   hnumuCCinFV_stack_12->SetBinContent(24,9.632288);
   hnumuCCinFV_stack_12->SetBinContent(25,2.611711);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,0.2496561);
   hnumuCCinFV_stack_12->SetBinError(3,1.903114);
   hnumuCCinFV_stack_12->SetBinError(4,1.890725);
   hnumuCCinFV_stack_12->SetBinError(5,2.628662);
   hnumuCCinFV_stack_12->SetBinError(6,2.972993);
   hnumuCCinFV_stack_12->SetBinError(7,2.328728);
   hnumuCCinFV_stack_12->SetBinError(8,2.485679);
   hnumuCCinFV_stack_12->SetBinError(9,2.274182);
   hnumuCCinFV_stack_12->SetBinError(10,2.260806);
   hnumuCCinFV_stack_12->SetBinError(11,2.478415);
   hnumuCCinFV_stack_12->SetBinError(12,2.431705);
   hnumuCCinFV_stack_12->SetBinError(13,2.423447);
   hnumuCCinFV_stack_12->SetBinError(14,2.650163);
   hnumuCCinFV_stack_12->SetBinError(15,2.482523);
   hnumuCCinFV_stack_12->SetBinError(16,2.399162);
   hnumuCCinFV_stack_12->SetBinError(17,2.263869);
   hnumuCCinFV_stack_12->SetBinError(18,2.571759);
   hnumuCCinFV_stack_12->SetBinError(19,3.308373);
   hnumuCCinFV_stack_12->SetBinError(20,2.579672);
   hnumuCCinFV_stack_12->SetBinError(21,2.650685);
   hnumuCCinFV_stack_12->SetBinError(22,2.492192);
   hnumuCCinFV_stack_12->SetBinError(23,2.217267);
   hnumuCCinFV_stack_12->SetBinError(24,1.673359);
   hnumuCCinFV_stack_12->SetBinError(25,0.889382);
   hnumuCCinFV_stack_12->SetEntries(1510);

   ci = 1497;
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
   hs5->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(4,1.354146);
   hnueCCinFV_stack_13->SetBinContent(5,1.043519);
   hnueCCinFV_stack_13->SetBinContent(6,0.917109);
   hnueCCinFV_stack_13->SetBinContent(7,1.674196);
   hnueCCinFV_stack_13->SetBinContent(8,1.116924);
   hnueCCinFV_stack_13->SetBinContent(9,1.419486);
   hnueCCinFV_stack_13->SetBinContent(10,2.468563);
   hnueCCinFV_stack_13->SetBinContent(11,1.670299);
   hnueCCinFV_stack_13->SetBinContent(12,0.9808124);
   hnueCCinFV_stack_13->SetBinContent(13,0.7336084);
   hnueCCinFV_stack_13->SetBinContent(14,1.158955);
   hnueCCinFV_stack_13->SetBinContent(15,0.683696);
   hnueCCinFV_stack_13->SetBinContent(16,0.2537049);
   hnueCCinFV_stack_13->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(18,1.206771);
   hnueCCinFV_stack_13->SetBinContent(19,0.7820846);
   hnueCCinFV_stack_13->SetBinContent(20,0.7326428);
   hnueCCinFV_stack_13->SetBinContent(21,0.8490325);
   hnueCCinFV_stack_13->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(24,0.2171002);
   hnueCCinFV_stack_13->SetBinContent(25,0.3893379);
   hnueCCinFV_stack_13->SetBinError(4,1.174028);
   hnueCCinFV_stack_13->SetBinError(5,0.5489757);
   hnueCCinFV_stack_13->SetBinError(6,0.4769307);
   hnueCCinFV_stack_13->SetBinError(7,0.701106);
   hnueCCinFV_stack_13->SetBinError(8,0.5842296);
   hnueCCinFV_stack_13->SetBinError(9,0.5377431);
   hnueCCinFV_stack_13->SetBinError(10,1.638741);
   hnueCCinFV_stack_13->SetBinError(11,0.6533457);
   hnueCCinFV_stack_13->SetBinError(12,0.5785099);
   hnueCCinFV_stack_13->SetBinError(13,0.4394482);
   hnueCCinFV_stack_13->SetBinError(14,0.7264723);
   hnueCCinFV_stack_13->SetBinError(15,0.3966891);
   hnueCCinFV_stack_13->SetBinError(16,0.2537049);
   hnueCCinFV_stack_13->SetBinError(17,0.1967154);
   hnueCCinFV_stack_13->SetBinError(18,0.5530453);
   hnueCCinFV_stack_13->SetBinError(19,0.463181);
   hnueCCinFV_stack_13->SetBinError(20,0.4390196);
   hnueCCinFV_stack_13->SetBinError(21,0.5006171);
   hnueCCinFV_stack_13->SetBinError(22,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.3401776);
   hnueCCinFV_stack_13->SetBinError(24,0.2171002);
   hnueCCinFV_stack_13->SetBinError(25,0.3893379);
   hnueCCinFV_stack_13->SetEntries(72);

   ci = 1498;
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
   hs5->Add(hnueCCinFV_stack_13,"");
   hs5->Draw("hist same");
   
   TH1F *hmcerror__14 = new TH1F("hmcerror__14","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__14->SetBinContent(0,0.7407695);
   hmcerror__14->SetBinContent(1,0.9049706);
   hmcerror__14->SetBinContent(2,28.33951);
   hmcerror__14->SetBinContent(3,69.69064);
   hmcerror__14->SetBinContent(4,115.5051);
   hmcerror__14->SetBinContent(5,143.4327);
   hmcerror__14->SetBinContent(6,148.5315);
   hmcerror__14->SetBinContent(7,168.8666);
   hmcerror__14->SetBinContent(8,170.8109);
   hmcerror__14->SetBinContent(9,166.2948);
   hmcerror__14->SetBinContent(10,176.5882);
   hmcerror__14->SetBinContent(11,173.8159);
   hmcerror__14->SetBinContent(12,176.6635);
   hmcerror__14->SetBinContent(13,173.7363);
   hmcerror__14->SetBinContent(14,180.6798);
   hmcerror__14->SetBinContent(15,175.5408);
   hmcerror__14->SetBinContent(16,171.4883);
   hmcerror__14->SetBinContent(17,173.207);
   hmcerror__14->SetBinContent(18,178.2263);
   hmcerror__14->SetBinContent(19,177.3004);
   hmcerror__14->SetBinContent(20,167.1247);
   hmcerror__14->SetBinContent(21,163.5446);
   hmcerror__14->SetBinContent(22,154.8645);
   hmcerror__14->SetBinContent(23,153.7578);
   hmcerror__14->SetBinContent(24,100.5745);
   hmcerror__14->SetBinContent(25,52.29765);
   hmcerror__14->SetBinContent(26,0.1967154);
   hmcerror__14->SetBinContent(27,0.9815497);
   hmcerror__14->SetBinError(0,0.3551621);
   hmcerror__14->SetBinError(1,4.323414);
   hmcerror__14->SetBinError(2,16.77895);
   hmcerror__14->SetBinError(3,34.38549);
   hmcerror__14->SetBinError(4,56.60046);
   hmcerror__14->SetBinError(5,52.61635);
   hmcerror__14->SetBinError(6,59.35787);
   hmcerror__14->SetBinError(7,62.71864);
   hmcerror__14->SetBinError(8,63.2466);
   hmcerror__14->SetBinError(9,59.55549);
   hmcerror__14->SetBinError(10,60.1679);
   hmcerror__14->SetBinError(11,63.46831);
   hmcerror__14->SetBinError(12,63.86173);
   hmcerror__14->SetBinError(13,61.38331);
   hmcerror__14->SetBinError(14,61.76357);
   hmcerror__14->SetBinError(15,58.30808);
   hmcerror__14->SetBinError(16,58.86496);
   hmcerror__14->SetBinError(17,56.2352);
   hmcerror__14->SetBinError(18,59.12981);
   hmcerror__14->SetBinError(19,58.95899);
   hmcerror__14->SetBinError(20,58.64816);
   hmcerror__14->SetBinError(21,51.62956);
   hmcerror__14->SetBinError(22,49.64449);
   hmcerror__14->SetBinError(23,45.67117);
   hmcerror__14->SetBinError(24,34.58746);
   hmcerror__14->SetBinError(25,18.26322);
   hmcerror__14->SetBinError(26,0.7111128);
   hmcerror__14->SetBinError(27,2.486842);
   hmcerror__14->SetEntries(3516.85);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3017[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3017[26] = {
   1,
   25,
   58,
   100,
   108,
   120,
   118,
   137,
   128,
   138,
   123,
   100,
   102,
   116,
   102,
   118,
   137,
   129,
   132,
   121,
   139,
   135,
   114,
   81,
   38,
   0};
   Double_t _felx3017[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3017[26] = {
   1,
   5.1474,
   7.7446,
   10.1212,
   10.3923,
   10.95445,
   10.86278,
   11.7047,
   11.31371,
   11.74734,
   11.09054,
   10.1212,
   10.0995,
   10.77033,
   10.0995,
   10.86278,
   11.7047,
   11.35782,
   11.48913,
   11,
   11.78983,
   11.61895,
   10.67708,
   9.1239,
   6.3013,
   0};
   Double_t _fehx3017[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3017[26] = {
   1.35971,
   4.9374,
   7.5415,
   9.92,
   10.3923,
   10.95445,
   10.86278,
   11.7047,
   11.31371,
   11.74734,
   11.09054,
   9.92,
   10.0995,
   10.77033,
   10.0995,
   10.86278,
   11.7047,
   11.35782,
   11.48913,
   11,
   11.78983,
   11.61895,
   10.67708,
   8.9221,
   6.0955,
   1.1478};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,-156,156);
   Graph_Graph3017->SetMinimum(0);
   Graph_Graph3017->SetMaximum(165.8688);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.74#pm0.24","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=8.1/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 2620.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 81.6","F");

   ci = 1486;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 276.9","F");

   ci = 1487;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 16.0","F");

   ci = 1488;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 216.2","F");

   ci = 1489;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.7","F");

   ci = 1490;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  17.6","F");

   ci = 1491;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1462.6","F");

   ci = 1492;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  283.6","F");

   ci = 1493;
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

   ci = 1494;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 515.9","F");

   ci = 1495;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 277.5","F");

   ci = 1496;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 386.7","F");

   ci = 1497;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1498;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_Np_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas5->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-171.36,-0.5333333,164.64,2.133333);
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
   
   Double_t _fx3018[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3018[26] = {
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
   Double_t _felx3018[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3018[26] = {
   4.777408,
   0.592069,
   0.4934018,
   0.4900258,
   0.3668364,
   0.3996316,
   0.3714095,
   0.3702725,
   0.3581319,
   0.3407244,
   0.3651467,
   0.361488,
   0.3533132,
   0.3418399,
   0.3321626,
   0.3432593,
   0.3246706,
   0.3317682,
   0.3325373,
   0.3509246,
   0.3156909,
   0.3205672,
   0.2970332,
   0.3438988,
   0.3492169,
   3.614932};
   Double_t _fehx3018[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3018[26] = {
   4.777408,
   0.592069,
   0.4934018,
   0.4900258,
   0.3668364,
   0.3996316,
   0.3714095,
   0.3702725,
   0.3581319,
   0.3407244,
   0.3651467,
   0.361488,
   0.3533132,
   0.3418399,
   0.3321626,
   0.3432593,
   0.3246706,
   0.3317682,
   0.3325373,
   0.3509246,
   0.3156909,
   0.3205672,
   0.2970332,
   0.3438988,
   0.3492169,
   3.614932};
   grae = new TGraphAsymmErrors(26,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,-156,156);
   Graph_Graph3018->SetMinimum(0);
   Graph_Graph3018->SetMaximum(2);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineWidth(2);
   Graph_Graph3018->SetMarkerStyle(20);
   Graph_Graph3018->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3018->GetXaxis()->SetRange(9,92);
   Graph_Graph3018->GetXaxis()->SetNdivisions(509);
   Graph_Graph3018->GetXaxis()->SetLabelFont(132);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3018->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3018->GetXaxis()->SetTitleFont(132);
   Graph_Graph3018->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3019[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3019[26] = {
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
   Double_t _felx3019[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3019[26] = {
   0.8275653,
   0.2475247,
   0.3089893,
   0.3490913,
   0.3253494,
   0.334181,
   0.3460236,
   0.334847,
   0.3331893,
   0.3076638,
   0.3287692,
   0.3293961,
   0.3285296,
   0.3198527,
   0.3149839,
   0.3142721,
   0.3002436,
   0.2963903,
   0.3022688,
   0.3221376,
   0.2883642,
   0.2961566,
   0.2462951,
   0.2747846,
   0.2105441,
   2.162984};
   Double_t _fehx3019[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3019[26] = {
   0.8275653,
   0.2475247,
   0.3089893,
   0.3490913,
   0.3253494,
   0.334181,
   0.3460236,
   0.334847,
   0.3331893,
   0.3076638,
   0.3287692,
   0.3293961,
   0.3285296,
   0.3198527,
   0.3149839,
   0.3142721,
   0.3002436,
   0.2963903,
   0.3022688,
   0.3221376,
   0.2883642,
   0.2961566,
   0.2462951,
   0.2747846,
   0.2105441,
   2.162984};
   grae = new TGraphAsymmErrors(26,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,-156,156);
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
   
   Double_t _fx3020[26] = {
   -125,
   -115,
   -105,
   -95,
   -85,
   -75,
   -65,
   -55,
   -45,
   -35,
   -25,
   -15,
   -5,
   5,
   15,
   25,
   35,
   45,
   55,
   65,
   75,
   85,
   95,
   105,
   115,
   125};
   Double_t _fy3020[26] = {
   1.105008,
   0.8821606,
   0.8322495,
   0.8657628,
   0.7529662,
   0.8079096,
   0.6987766,
   0.8020563,
   0.7697172,
   0.7814794,
   0.7076452,
   0.5660478,
   0.5870967,
   0.6420196,
   0.5810616,
   0.6880935,
   0.7909613,
   0.723799,
   0.7444993,
   0.7240104,
   0.8499208,
   0.8717296,
   0.7414258,
   0.8053729,
   0.7266101,
   0};
   Double_t _felx3020[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fely3020[26] = {
   1.105008,
   0.1816333,
   0.1111283,
   0.08762559,
   0.0724542,
   0.07375172,
   0.0643276,
   0.0685243,
   0.06803403,
   0.06652394,
   0.06380622,
   0.05729083,
   0.05813124,
   0.05961002,
   0.05753367,
   0.06334415,
   0.06757639,
   0.06372695,
   0.06480035,
   0.06581912,
   0.07208934,
   0.07502654,
   0.06944089,
   0.0907178,
   0.1204892,
   0};
   Double_t _fehx3020[26] = {
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5,
   5};
   Double_t _fehy3020[26] = {
   1.502491,
   0.1742232,
   0.108214,
   0.08588367,
   0.0724542,
   0.07375172,
   0.0643276,
   0.0685243,
   0.06803403,
   0.06652394,
   0.06380622,
   0.05615195,
   0.05813124,
   0.05961002,
   0.05753367,
   0.06334415,
   0.06757639,
   0.06372695,
   0.06480035,
   0.06581912,
   0.07208934,
   0.07502654,
   0.06944089,
   0.08871133,
   0.116554,
   5.834826};
   grae = new TGraphAsymmErrors(26,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,-156,156);
   Graph_Graph3020->SetMinimum(0);
   Graph_Graph3020->SetMaximum(6.418309);
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
   
   TH1F *hist__15 = new TH1F("hist__15","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   TLine *line = new TLine(-130,1,130,1);
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
