#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Wed May 25 15:05:53 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",86,109,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas2->SetHighLightColor(2);
   canvas2->Range(0,0,1,1);
   canvas2->SetFillColor(0);
   canvas2->SetBorderMode(0);
   canvas2->SetBorderSize(2);
   canvas2->SetLeftMargin(0.12);
   canvas2->SetRightMargin(0.12);
   canvas2->SetTopMargin(0.05);
   canvas2->SetBottomMargin(0.12);
   canvas2->SetFrameLineWidth(2);
   canvas2->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-170,-3.49936,163.3333,294.8671);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__4->SetBinContent(0,0.7407695);
   hmc__4->SetBinContent(1,0.9049706);
   hmc__4->SetBinContent(2,27.80262);
   hmc__4->SetBinContent(3,68.51542);
   hmc__4->SetBinContent(4,111.5535);
   hmc__4->SetBinContent(5,136.9693);
   hmc__4->SetBinContent(6,144.0351);
   hmc__4->SetBinContent(7,161.4358);
   hmc__4->SetBinContent(8,165.3877);
   hmc__4->SetBinContent(9,160.0393);
   hmc__4->SetBinContent(10,169.4477);
   hmc__4->SetBinContent(11,169.3644);
   hmc__4->SetBinContent(12,170.8031);
   hmc__4->SetBinContent(13,168.1774);
   hmc__4->SetBinContent(14,174.968);
   hmc__4->SetBinContent(15,168.9922);
   hmc__4->SetBinContent(16,166.1665);
   hmc__4->SetBinContent(17,167.3835);
   hmc__4->SetBinContent(18,172.121);
   hmc__4->SetBinContent(19,172.2689);
   hmc__4->SetBinContent(20,161.6448);
   hmc__4->SetBinContent(21,155.8802);
   hmc__4->SetBinContent(22,148.5608);
   hmc__4->SetBinContent(23,150.5289);
   hmc__4->SetBinContent(24,97.35656);
   hmc__4->SetBinContent(25,51.3707);
   hmc__4->SetBinContent(26,0.1967154);
   hmc__4->SetBinContent(27,0.9815497);
   hmc__4->SetBinError(0,0.3551621);
   hmc__4->SetBinError(1,4.325242);
   hmc__4->SetBinError(2,8.884346);
   hmc__4->SetBinError(3,20.81766);
   hmc__4->SetBinError(4,30.44644);
   hmc__4->SetBinError(5,34.49529);
   hmc__4->SetBinError(6,36.72177);
   hmc__4->SetBinError(7,40.00257);
   hmc__4->SetBinError(8,43.45877);
   hmc__4->SetBinError(9,39.18914);
   hmc__4->SetBinError(10,40.41112);
   hmc__4->SetBinError(11,40.82798);
   hmc__4->SetBinError(12,41.49614);
   hmc__4->SetBinError(13,39.86134);
   hmc__4->SetBinError(14,40.71455);
   hmc__4->SetBinError(15,39.03981);
   hmc__4->SetBinError(16,38.61312);
   hmc__4->SetBinError(17,40.05609);
   hmc__4->SetBinError(18,40.86796);
   hmc__4->SetBinError(19,38.43132);
   hmc__4->SetBinError(20,38.83916);
   hmc__4->SetBinError(21,33.66358);
   hmc__4->SetBinError(22,32.8183);
   hmc__4->SetBinError(23,29.03123);
   hmc__4->SetBinError(24,22.24758);
   hmc__4->SetBinError(25,11.25986);
   hmc__4->SetBinError(26,1.020214);
   hmc__4->SetBinError(27,1.426523);
   hmc__4->SetMinimum(-3.49936);
   hmc__4->SetMaximum(279.9488);
   hmc__4->SetEntries(3396.741);
   hmc__4->SetLineWidth(5);
   hmc__4->GetXaxis()->SetLabelFont(42);
   hmc__4->GetXaxis()->SetTitleOffset(1);
   hmc__4->GetXaxis()->SetTitleFont(42);
   hmc__4->GetYaxis()->SetTitle("Event counts");
   hmc__4->GetYaxis()->SetLabelFont(132);
   hmc__4->GetYaxis()->SetLabelSize(0.04);
   hmc__4->GetYaxis()->SetTitleSize(0.05);
   hmc__4->GetYaxis()->SetTitleOffset(0.73);
   hmc__4->GetYaxis()->SetTitleFont(132);
   hmc__4->GetZaxis()->SetLabelFont(42);
   hmc__4->GetZaxis()->SetTitleOffset(1);
   hmc__4->GetZaxis()->SetTitleFont(42);
   hmc__4->Draw("hist");
   
   THStack *hs2 = new THStack();
   hs2->SetName("hs2");
   hs2->SetTitle("");
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",26,-130,130);
   hs2_stack_2->SetMinimum(-1.150846e-08);
   hs2_stack_2->SetMaximum(183.7164);
   hs2_stack_2->SetDirectory(0);
   hs2_stack_2->SetStats(0);
   hs2_stack_2->SetLineWidth(2);
   hs2_stack_2->SetMarkerStyle(20);
   hs2_stack_2->GetXaxis()->SetNdivisions(509);
   hs2_stack_2->GetXaxis()->SetLabelFont(132);
   hs2_stack_2->GetXaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetXaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetXaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetXaxis()->SetTitleFont(132);
   hs2_stack_2->GetYaxis()->SetNdivisions(509);
   hs2_stack_2->GetYaxis()->SetLabelFont(132);
   hs2_stack_2->GetYaxis()->SetLabelOffset(0.01);
   hs2_stack_2->GetYaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetYaxis()->SetTitleOffset(0.95);
   hs2_stack_2->GetYaxis()->SetTitleFont(132);
   hs2_stack_2->GetZaxis()->SetLabelFont(132);
   hs2_stack_2->GetZaxis()->SetLabelSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleSize(0.08);
   hs2_stack_2->GetZaxis()->SetTitleOffset(1.2);
   hs2_stack_2->GetZaxis()->SetTitleFont(132);
   hs2->SetHistogram(hs2_stack_2);
   
   
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
   ci = 1444;
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
   hs2->Add(hbadmatch_stack_1,"");
   
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

   ci = 1445;
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
   hs2->Add(hext_stack_2,"");
   
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

   ci = 1446;
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
   hs2->Add(hdirt_stack_3,"");
   
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

   ci = 1447;
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
   hs2->Add(houtFV_stack_4,"");
   
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

   ci = 1448;
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
   hs2->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,0.5440542);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,0.02789998);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,3.736952);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,26.75604);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,59.30368);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,77.49025);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,81.34641);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,97.42988);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,94.6671);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,91.11066);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,88.46492);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,92.45315);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,96.37181);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,92.58984);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,92.47641);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,91.73808);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,85.1945);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,83.85422);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,83.78439);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,83.70332);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,88.54434);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,73.28512);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,73.66062);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,65.5482);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,37.21097);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,4.545724);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,0.6413721);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,0.2957079);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,0.02789998);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,0.5956771);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,1.674538);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,2.510092);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,2.900575);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,2.909685);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.288484);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.234424);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,3.142558);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.014023);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,3.10217);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,3.226482);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,3.141763);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,3.129899);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,3.169299);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,3.03926);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,2.951962);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,2.975316);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,2.984435);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,3.123748);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,2.781094);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,2.83223);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,2.749615);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,2.065954);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,0.6755854);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.3113101);
   hNCpi0inFVnoncoh_stack_6->SetEntries(32426);

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   hNCpi0inFVnoncoh_stack_6->SetFillColor(ci);

   ci = TColor::GetColor("#ff99ff");
   hNCpi0inFVnoncoh_stack_6->SetLineColor(ci);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetXaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetYaxis()->SetTitleFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetLabelFont(42);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleOffset(1);
   hNCpi0inFVnoncoh_stack_6->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCpi0inFVnoncoh_stack_6,"");
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_7->SetBinContent(1,0.3401776);
   hCCpi0inFV_stack_7->SetBinContent(2,1.905448);
   hCCpi0inFV_stack_7->SetBinContent(3,13.652);
   hCCpi0inFV_stack_7->SetBinContent(4,21.66343);
   hCCpi0inFV_stack_7->SetBinContent(5,22.45476);
   hCCpi0inFV_stack_7->SetBinContent(6,26.00194);
   hCCpi0inFV_stack_7->SetBinContent(7,28.14236);
   hCCpi0inFV_stack_7->SetBinContent(8,30.30494);
   hCCpi0inFV_stack_7->SetBinContent(9,24.53159);
   hCCpi0inFV_stack_7->SetBinContent(10,28.42609);
   hCCpi0inFV_stack_7->SetBinContent(11,24.99126);
   hCCpi0inFV_stack_7->SetBinContent(12,28.82914);
   hCCpi0inFV_stack_7->SetBinContent(13,32.33961);
   hCCpi0inFV_stack_7->SetBinContent(14,27.40386);
   hCCpi0inFV_stack_7->SetBinContent(15,24.59223);
   hCCpi0inFV_stack_7->SetBinContent(16,30.95811);
   hCCpi0inFV_stack_7->SetBinContent(17,26.47222);
   hCCpi0inFV_stack_7->SetBinContent(18,31.01534);
   hCCpi0inFV_stack_7->SetBinContent(19,29.85851);
   hCCpi0inFV_stack_7->SetBinContent(20,24.58777);
   hCCpi0inFV_stack_7->SetBinContent(21,22.85357);
   hCCpi0inFV_stack_7->SetBinContent(22,23.7414);
   hCCpi0inFV_stack_7->SetBinContent(23,21.61673);
   hCCpi0inFV_stack_7->SetBinContent(24,16.09847);
   hCCpi0inFV_stack_7->SetBinContent(25,3.997956);
   hCCpi0inFV_stack_7->SetBinContent(26,0.1967154);
   hCCpi0inFV_stack_7->SetBinError(1,0.3401776);
   hCCpi0inFV_stack_7->SetBinError(2,0.6496038);
   hCCpi0inFV_stack_7->SetBinError(3,1.859689);
   hCCpi0inFV_stack_7->SetBinError(4,2.374926);
   hCCpi0inFV_stack_7->SetBinError(5,2.415341);
   hCCpi0inFV_stack_7->SetBinError(6,2.584744);
   hCCpi0inFV_stack_7->SetBinError(7,2.65939);
   hCCpi0inFV_stack_7->SetBinError(8,2.759762);
   hCCpi0inFV_stack_7->SetBinError(9,2.466571);
   hCCpi0inFV_stack_7->SetBinError(10,2.650539);
   hCCpi0inFV_stack_7->SetBinError(11,2.500599);
   hCCpi0inFV_stack_7->SetBinError(12,2.720477);
   hCCpi0inFV_stack_7->SetBinError(13,2.852702);
   hCCpi0inFV_stack_7->SetBinError(14,2.602002);
   hCCpi0inFV_stack_7->SetBinError(15,2.418881);
   hCCpi0inFV_stack_7->SetBinError(16,2.818687);
   hCCpi0inFV_stack_7->SetBinError(17,2.635097);
   hCCpi0inFV_stack_7->SetBinError(18,2.787245);
   hCCpi0inFV_stack_7->SetBinError(19,2.747334);
   hCCpi0inFV_stack_7->SetBinError(20,2.459192);
   hCCpi0inFV_stack_7->SetBinError(21,2.445553);
   hCCpi0inFV_stack_7->SetBinError(22,2.487607);
   hCCpi0inFV_stack_7->SetBinError(23,2.25986);
   hCCpi0inFV_stack_7->SetBinError(24,2.028958);
   hCCpi0inFV_stack_7->SetBinError(25,0.9691486);
   hCCpi0inFV_stack_7->SetBinError(26,0.1967154);
   hCCpi0inFV_stack_7->SetEntries(2425);

   ci = 1450;
   color = new TColor(ci, 0.4, 0.8, 1, " ", 0.5);
   hCCpi0inFV_stack_7->SetFillColor(ci);

   ci = TColor::GetColor("#66ccff");
   hCCpi0inFV_stack_7->SetLineColor(ci);
   hCCpi0inFV_stack_7->GetXaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetXaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetYaxis()->SetTitleFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetLabelFont(42);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleOffset(1);
   hCCpi0inFV_stack_7->GetZaxis()->SetTitleFont(42);
   hs2->Add(hCCpi0inFV_stack_7,"");
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_8->SetBinContent(1,0.1967154);
   hNCinFV_stack_8->SetBinContent(3,3.374355);
   hNCinFV_stack_8->SetBinContent(4,4.923328);
   hNCinFV_stack_8->SetBinContent(5,5.180059);
   hNCinFV_stack_8->SetBinContent(6,7.274378);
   hNCinFV_stack_8->SetBinContent(7,8.01245);
   hNCinFV_stack_8->SetBinContent(8,6.298645);
   hNCinFV_stack_8->SetBinContent(9,7.379193);
   hNCinFV_stack_8->SetBinContent(10,8.159293);
   hNCinFV_stack_8->SetBinContent(11,7.564075);
   hNCinFV_stack_8->SetBinContent(12,9.762127);
   hNCinFV_stack_8->SetBinContent(13,6.990226);
   hNCinFV_stack_8->SetBinContent(14,7.916086);
   hNCinFV_stack_8->SetBinContent(15,8.699567);
   hNCinFV_stack_8->SetBinContent(16,6.945426);
   hNCinFV_stack_8->SetBinContent(17,11.43052);
   hNCinFV_stack_8->SetBinContent(18,10.00473);
   hNCinFV_stack_8->SetBinContent(19,8.651385);
   hNCinFV_stack_8->SetBinContent(20,6.253845);
   hNCinFV_stack_8->SetBinContent(21,7.880821);
   hNCinFV_stack_8->SetBinContent(22,5.316759);
   hNCinFV_stack_8->SetBinContent(23,4.833119);
   hNCinFV_stack_8->SetBinContent(24,3.815968);
   hNCinFV_stack_8->SetBinContent(25,0.4403816);
   hNCinFV_stack_8->SetBinContent(27,0.3401776);
   hNCinFV_stack_8->SetBinError(1,0.1967154);
   hNCinFV_stack_8->SetBinError(3,0.8993757);
   hNCinFV_stack_8->SetBinError(4,1.143305);
   hNCinFV_stack_8->SetBinError(5,1.144624);
   hNCinFV_stack_8->SetBinError(6,1.402199);
   hNCinFV_stack_8->SetBinError(7,1.400941);
   hNCinFV_stack_8->SetBinError(8,1.255931);
   hNCinFV_stack_8->SetBinError(9,1.374353);
   hNCinFV_stack_8->SetBinError(10,1.428631);
   hNCinFV_stack_8->SetBinError(11,1.386689);
   hNCinFV_stack_8->SetBinError(12,1.643032);
   hNCinFV_stack_8->SetBinError(13,1.270753);
   hNCinFV_stack_8->SetBinError(14,1.429428);
   hNCinFV_stack_8->SetBinError(15,1.482136);
   hNCinFV_stack_8->SetBinError(16,1.287032);
   hNCinFV_stack_8->SetBinError(17,1.711093);
   hNCinFV_stack_8->SetBinError(18,1.580711);
   hNCinFV_stack_8->SetBinError(19,1.495674);
   hNCinFV_stack_8->SetBinError(20,1.272399);
   hNCinFV_stack_8->SetBinError(21,1.374863);
   hNCinFV_stack_8->SetBinError(22,1.176665);
   hNCinFV_stack_8->SetBinError(23,1.091694);
   hNCinFV_stack_8->SetBinError(24,0.9197592);
   hNCinFV_stack_8->SetBinError(25,0.2821316);
   hNCinFV_stack_8->SetBinError(27,0.3401776);
   hNCinFV_stack_8->SetEntries(671);

   ci = 1451;
   color = new TColor(ci, 0.6, 0.6, 0.6, " ", 0.5);
   hNCinFV_stack_8->SetFillColor(ci);

   ci = TColor::GetColor("#999999");
   hNCinFV_stack_8->SetLineColor(ci);
   hNCinFV_stack_8->GetXaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetXaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetXaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetYaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetYaxis()->SetTitleFont(42);
   hNCinFV_stack_8->GetZaxis()->SetLabelFont(42);
   hNCinFV_stack_8->GetZaxis()->SetTitleOffset(1);
   hNCinFV_stack_8->GetZaxis()->SetTitleFont(42);
   hs2->Add(hNCinFV_stack_8,"");
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_9->SetBinContent(2,0.2496561);
   hnumuCCinFV_stack_9->SetBinContent(3,6.065101);
   hnumuCCinFV_stack_9->SetBinContent(4,8.934384);
   hnumuCCinFV_stack_9->SetBinContent(5,15.16327);
   hnumuCCinFV_stack_9->SetBinContent(6,19.62984);
   hnumuCCinFV_stack_9->SetBinContent(7,14.52261);
   hnumuCCinFV_stack_9->SetBinContent(8,16.24543);
   hnumuCCinFV_stack_9->SetBinContent(9,15.41497);
   hnumuCCinFV_stack_9->SetBinContent(10,14.31325);
   hnumuCCinFV_stack_9->SetBinContent(11,15.8782);
   hnumuCCinFV_stack_9->SetBinContent(12,15.99985);
   hnumuCCinFV_stack_9->SetBinContent(13,17.50027);
   hnumuCCinFV_stack_9->SetBinContent(14,19.68592);
   hnumuCCinFV_stack_9->SetBinContent(15,18.70312);
   hnumuCCinFV_stack_9->SetBinContent(16,17.34965);
   hnumuCCinFV_stack_9->SetBinContent(17,16.33183);
   hnumuCCinFV_stack_9->SetBinContent(18,16.01853);
   hnumuCCinFV_stack_9->SetBinContent(19,19.44232);
   hnumuCCinFV_stack_9->SetBinContent(20,14.16563);
   hnumuCCinFV_stack_9->SetBinContent(21,16.56071);
   hnumuCCinFV_stack_9->SetBinContent(22,16.20889);
   hnumuCCinFV_stack_9->SetBinContent(23,13.44439);
   hnumuCCinFV_stack_9->SetBinContent(24,6.256242);
   hnumuCCinFV_stack_9->SetBinContent(25,1.537925);
   hnumuCCinFV_stack_9->SetBinError(2,0.2496561);
   hnumuCCinFV_stack_9->SetBinError(3,1.777242);
   hnumuCCinFV_stack_9->SetBinError(4,1.591835);
   hnumuCCinFV_stack_9->SetBinError(5,2.508937);
   hnumuCCinFV_stack_9->SetBinError(6,2.880862);
   hnumuCCinFV_stack_9->SetBinError(7,2.183475);
   hnumuCCinFV_stack_9->SetBinError(8,2.391017);
   hnumuCCinFV_stack_9->SetBinError(9,2.18814);
   hnumuCCinFV_stack_9->SetBinError(10,2.064634);
   hnumuCCinFV_stack_9->SetBinError(11,2.407618);
   hnumuCCinFV_stack_9->SetBinError(12,2.383764);
   hnumuCCinFV_stack_9->SetBinError(13,2.250088);
   hnumuCCinFV_stack_9->SetBinError(14,2.583891);
   hnumuCCinFV_stack_9->SetBinError(15,2.427565);
   hnumuCCinFV_stack_9->SetBinError(16,2.223911);
   hnumuCCinFV_stack_9->SetBinError(17,2.203831);
   hnumuCCinFV_stack_9->SetBinError(18,2.433207);
   hnumuCCinFV_stack_9->SetBinError(19,3.249522);
   hnumuCCinFV_stack_9->SetBinError(20,2.425668);
   hnumuCCinFV_stack_9->SetBinError(21,2.531755);
   hnumuCCinFV_stack_9->SetBinError(22,2.356753);
   hnumuCCinFV_stack_9->SetBinError(23,2.155778);
   hnumuCCinFV_stack_9->SetBinError(24,1.410883);
   hnumuCCinFV_stack_9->SetBinError(25,0.6943809);
   hnumuCCinFV_stack_9->SetEntries(1290);

   ci = 1452;
   color = new TColor(ci, 0.8, 0.8, 0.8, " ", 0.5);
   hnumuCCinFV_stack_9->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   hnumuCCinFV_stack_9->SetLineColor(ci);
   hnumuCCinFV_stack_9->GetXaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetXaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetYaxis()->SetTitleFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetLabelFont(42);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleOffset(1);
   hnumuCCinFV_stack_9->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnumuCCinFV_stack_9,"");
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_10->SetBinContent(4,1.354146);
   hnueCCinFV_stack_10->SetBinContent(5,1.043519);
   hnueCCinFV_stack_10->SetBinContent(6,0.917109);
   hnueCCinFV_stack_10->SetBinContent(7,1.674196);
   hnueCCinFV_stack_10->SetBinContent(8,1.116924);
   hnueCCinFV_stack_10->SetBinContent(9,1.419486);
   hnueCCinFV_stack_10->SetBinContent(10,2.468563);
   hnueCCinFV_stack_10->SetBinContent(11,1.670299);
   hnueCCinFV_stack_10->SetBinContent(12,0.9808124);
   hnueCCinFV_stack_10->SetBinContent(13,0.7336084);
   hnueCCinFV_stack_10->SetBinContent(14,1.158955);
   hnueCCinFV_stack_10->SetBinContent(15,0.683696);
   hnueCCinFV_stack_10->SetBinContent(16,0.2537049);
   hnueCCinFV_stack_10->SetBinContent(17,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(18,1.206771);
   hnueCCinFV_stack_10->SetBinContent(19,0.7820846);
   hnueCCinFV_stack_10->SetBinContent(20,0.7326428);
   hnueCCinFV_stack_10->SetBinContent(21,0.8490325);
   hnueCCinFV_stack_10->SetBinContent(22,0.1967154);
   hnueCCinFV_stack_10->SetBinContent(23,0.3401776);
   hnueCCinFV_stack_10->SetBinContent(24,0.2171002);
   hnueCCinFV_stack_10->SetBinContent(25,0.3893379);
   hnueCCinFV_stack_10->SetBinError(4,1.174028);
   hnueCCinFV_stack_10->SetBinError(5,0.5489757);
   hnueCCinFV_stack_10->SetBinError(6,0.4769307);
   hnueCCinFV_stack_10->SetBinError(7,0.701106);
   hnueCCinFV_stack_10->SetBinError(8,0.5842296);
   hnueCCinFV_stack_10->SetBinError(9,0.5377431);
   hnueCCinFV_stack_10->SetBinError(10,1.638741);
   hnueCCinFV_stack_10->SetBinError(11,0.6533457);
   hnueCCinFV_stack_10->SetBinError(12,0.5785099);
   hnueCCinFV_stack_10->SetBinError(13,0.4394482);
   hnueCCinFV_stack_10->SetBinError(14,0.7264723);
   hnueCCinFV_stack_10->SetBinError(15,0.3966891);
   hnueCCinFV_stack_10->SetBinError(16,0.2537049);
   hnueCCinFV_stack_10->SetBinError(17,0.1967154);
   hnueCCinFV_stack_10->SetBinError(18,0.5530453);
   hnueCCinFV_stack_10->SetBinError(19,0.463181);
   hnueCCinFV_stack_10->SetBinError(20,0.4390196);
   hnueCCinFV_stack_10->SetBinError(21,0.5006171);
   hnueCCinFV_stack_10->SetBinError(22,0.1967154);
   hnueCCinFV_stack_10->SetBinError(23,0.3401776);
   hnueCCinFV_stack_10->SetBinError(24,0.2171002);
   hnueCCinFV_stack_10->SetBinError(25,0.3893379);
   hnueCCinFV_stack_10->SetEntries(72);

   ci = 1453;
   color = new TColor(ci, 0.4, 1, 0, " ", 0.5);
   hnueCCinFV_stack_10->SetFillColor(ci);

   ci = TColor::GetColor("#66ff00");
   hnueCCinFV_stack_10->SetLineColor(ci);
   hnueCCinFV_stack_10->GetXaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetXaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetYaxis()->SetTitleFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetLabelFont(42);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleOffset(1);
   hnueCCinFV_stack_10->GetZaxis()->SetTitleFont(42);
   hs2->Add(hnueCCinFV_stack_10,"");
   hs2->Draw("hist same");
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__5->SetBinContent(0,0.7407695);
   hmcerror__5->SetBinContent(1,0.9049706);
   hmcerror__5->SetBinContent(2,27.80262);
   hmcerror__5->SetBinContent(3,68.51542);
   hmcerror__5->SetBinContent(4,111.5535);
   hmcerror__5->SetBinContent(5,136.9693);
   hmcerror__5->SetBinContent(6,144.0351);
   hmcerror__5->SetBinContent(7,161.4358);
   hmcerror__5->SetBinContent(8,165.3877);
   hmcerror__5->SetBinContent(9,160.0393);
   hmcerror__5->SetBinContent(10,169.4477);
   hmcerror__5->SetBinContent(11,169.3644);
   hmcerror__5->SetBinContent(12,170.8031);
   hmcerror__5->SetBinContent(13,168.1774);
   hmcerror__5->SetBinContent(14,174.968);
   hmcerror__5->SetBinContent(15,168.9922);
   hmcerror__5->SetBinContent(16,166.1665);
   hmcerror__5->SetBinContent(17,167.3835);
   hmcerror__5->SetBinContent(18,172.121);
   hmcerror__5->SetBinContent(19,172.2689);
   hmcerror__5->SetBinContent(20,161.6448);
   hmcerror__5->SetBinContent(21,155.8802);
   hmcerror__5->SetBinContent(22,148.5608);
   hmcerror__5->SetBinContent(23,150.5289);
   hmcerror__5->SetBinContent(24,97.35656);
   hmcerror__5->SetBinContent(25,51.3707);
   hmcerror__5->SetBinContent(26,0.1967154);
   hmcerror__5->SetBinContent(27,0.9815497);
   hmcerror__5->SetBinError(0,0.3551621);
   hmcerror__5->SetBinError(1,4.325242);
   hmcerror__5->SetBinError(2,8.884346);
   hmcerror__5->SetBinError(3,20.81766);
   hmcerror__5->SetBinError(4,30.44644);
   hmcerror__5->SetBinError(5,34.49529);
   hmcerror__5->SetBinError(6,36.72177);
   hmcerror__5->SetBinError(7,40.00257);
   hmcerror__5->SetBinError(8,43.45877);
   hmcerror__5->SetBinError(9,39.18914);
   hmcerror__5->SetBinError(10,40.41112);
   hmcerror__5->SetBinError(11,40.82798);
   hmcerror__5->SetBinError(12,41.49614);
   hmcerror__5->SetBinError(13,39.86134);
   hmcerror__5->SetBinError(14,40.71455);
   hmcerror__5->SetBinError(15,39.03981);
   hmcerror__5->SetBinError(16,38.61312);
   hmcerror__5->SetBinError(17,40.05609);
   hmcerror__5->SetBinError(18,40.86796);
   hmcerror__5->SetBinError(19,38.43132);
   hmcerror__5->SetBinError(20,38.83916);
   hmcerror__5->SetBinError(21,33.66358);
   hmcerror__5->SetBinError(22,32.8183);
   hmcerror__5->SetBinError(23,29.03123);
   hmcerror__5->SetBinError(24,22.24758);
   hmcerror__5->SetBinError(25,11.25986);
   hmcerror__5->SetBinError(26,1.020214);
   hmcerror__5->SetBinError(27,1.426523);
   hmcerror__5->SetEntries(3396.741);

   ci = TColor::GetColor("#999999");
   hmcerror__5->SetFillColor(ci);
   hmcerror__5->SetFillStyle(3002);
   hmcerror__5->SetLineColor(12);
   hmcerror__5->SetLineWidth(0);
   hmcerror__5->SetMarkerColor(0);
   hmcerror__5->SetMarkerSize(0);
   hmcerror__5->GetXaxis()->SetLabelFont(42);
   hmcerror__5->GetXaxis()->SetTitleOffset(1);
   hmcerror__5->GetXaxis()->SetTitleFont(42);
   hmcerror__5->GetYaxis()->SetLabelFont(42);
   hmcerror__5->GetYaxis()->SetTitleFont(42);
   hmcerror__5->GetZaxis()->SetLabelFont(42);
   hmcerror__5->GetZaxis()->SetTitleOffset(1);
   hmcerror__5->GetZaxis()->SetTitleFont(42);
   hmcerror__5->Draw("same E2");
   
   Double_t _fx3005[26] = {
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
   Double_t _fy3005[26] = {
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
   Double_t _felx3005[26] = {
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
   Double_t _fely3005[26] = {
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
   Double_t _fehx3005[26] = {
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
   Double_t _fehy3005[26] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,-156,156);
   Graph_Graph3005->SetMinimum(0);
   Graph_Graph3005->SetMaximum(165.8688);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineWidth(2);
   Graph_Graph3005->SetMarkerStyle(20);
   Graph_Graph3005->GetXaxis()->SetNdivisions(509);
   Graph_Graph3005->GetXaxis()->SetLabelFont(132);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetXaxis()->SetTitleFont(132);
   Graph_Graph3005->GetYaxis()->SetNdivisions(509);
   Graph_Graph3005->GetYaxis()->SetLabelFont(132);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3005->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3005->GetYaxis()->SetTitleFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelFont(132);
   Graph_Graph3005->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3005->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.76#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=17.7/26","");
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

   ci = 1444;
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

   ci = 1445;
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

   ci = 1446;
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

   ci = 1447;
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

   ci = 1448;
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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  1765.3","F");

   ci = 1449;
   color = new TColor(ci, 1, 0.6, 1, " ", 0.5);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ff99ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 567.0","F");

   ci = 1450;
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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 157.3","F");

   ci = 1451;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 335.6","F");

   ci = 1452;
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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 20.4","F");

   ci = 1453;
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
   canvas2->cd();
  
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
   
   Double_t _fx3006[26] = {
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
   Double_t _fy3006[26] = {
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
   Double_t _felx3006[26] = {
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
   Double_t _fely3006[26] = {
   4.779428,
   0.3195507,
   0.303839,
   0.2729313,
   0.2518469,
   0.2549501,
   0.2477925,
   0.2627691,
   0.244872,
   0.2384873,
   0.2410659,
   0.2429472,
   0.2370196,
   0.2326971,
   0.2310155,
   0.2323761,
   0.2393073,
   0.2374374,
   0.2230892,
   0.2402747,
   0.215958,
   0.2209082,
   0.1928614,
   0.2285165,
   0.2191883,
   5.186243};
   Double_t _fehx3006[26] = {
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
   Double_t _fehy3006[26] = {
   4.779428,
   0.3195507,
   0.303839,
   0.2729313,
   0.2518469,
   0.2549501,
   0.2477925,
   0.2627691,
   0.244872,
   0.2384873,
   0.2410659,
   0.2429472,
   0.2370196,
   0.2326971,
   0.2310155,
   0.2323761,
   0.2393073,
   0.2374374,
   0.2230892,
   0.2402747,
   0.215958,
   0.2209082,
   0.1928614,
   0.2285165,
   0.2191883,
   5.186243};
   grae = new TGraphAsymmErrors(26,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,-156,156);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(9,92);
   Graph_Graph3006->GetXaxis()->SetNdivisions(509);
   Graph_Graph3006->GetXaxis()->SetLabelFont(132);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3006->GetXaxis()->SetTitleFont(132);
   Graph_Graph3006->GetYaxis()->SetTitle("Data/Pred");
   Graph_Graph3006->GetYaxis()->SetNdivisions(210);
   Graph_Graph3006->GetYaxis()->SetLabelFont(132);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3006->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3006->GetYaxis()->SetTitleFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelFont(132);
   Graph_Graph3006->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3006->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3006);
   
   grae->Draw("a2");
   
   Double_t _fx3007[26] = {
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
   Double_t _fy3007[26] = {
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
   Double_t _felx3007[26] = {
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
   Double_t _fely3007[26] = {
   0.8308291,
   0.2281462,
   0.2338443,
   0.2350917,
   0.2250394,
   0.2330613,
   0.2350781,
   0.2296644,
   0.2300394,
   0.2180971,
   0.2276814,
   0.2307937,
   0.223297,
   0.2246193,
   0.2158596,
   0.2220132,
   0.2135671,
   0.2100144,
   0.2151027,
   0.2213399,
   0.2057877,
   0.2068519,
   0.1773668,
   0.2099262,
   0.1882225,
   2.247871};
   Double_t _fehx3007[26] = {
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
   Double_t _fehy3007[26] = {
   0.8308291,
   0.2281462,
   0.2338443,
   0.2350917,
   0.2250394,
   0.2330613,
   0.2350781,
   0.2296644,
   0.2300394,
   0.2180971,
   0.2276814,
   0.2307937,
   0.223297,
   0.2246193,
   0.2158596,
   0.2220132,
   0.2135671,
   0.2100144,
   0.2151027,
   0.2213399,
   0.2057877,
   0.2068519,
   0.1773668,
   0.2099262,
   0.1882225,
   2.247871};
   grae = new TGraphAsymmErrors(26,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,-156,156);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(9,92);
   Graph_Graph3007->GetXaxis()->SetNdivisions(509);
   Graph_Graph3007->GetXaxis()->SetLabelFont(132);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetXaxis()->SetTitleFont(132);
   Graph_Graph3007->GetYaxis()->SetNdivisions(509);
   Graph_Graph3007->GetYaxis()->SetLabelFont(132);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3007->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3007->GetYaxis()->SetTitleFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelFont(132);
   Graph_Graph3007->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3007->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("2 ");
   
   Double_t _fx3008[26] = {
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
   Double_t _fy3008[26] = {
   1.105008,
   0.8991958,
   0.8465248,
   0.896431,
   0.7884981,
   0.83313,
   0.7309407,
   0.8283568,
   0.7998034,
   0.8144107,
   0.7262447,
   0.5854695,
   0.6065025,
   0.6629784,
   0.6035783,
   0.7101313,
   0.8184797,
   0.7494728,
   0.7662441,
   0.748555,
   0.8917103,
   0.9087187,
   0.7573294,
   0.8319932,
   0.7397212,
   0};
   Double_t _felx3008[26] = {
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
   Double_t _fely3008[26] = {
   1.105008,
   0.1851408,
   0.1130344,
   0.09072957,
   0.07587327,
   0.07605402,
   0.06728854,
   0.0707713,
   0.0706933,
   0.06932724,
   0.06548328,
   0.05925654,
   0.06005269,
   0.061556,
   0.05976316,
   0.06537288,
   0.06992744,
   0.0659874,
   0.06669299,
   0.06805045,
   0.07563388,
   0.07821006,
   0.0709304,
   0.09371634,
   0.1226633,
   0};
   Double_t _fehx3008[26] = {
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
   Double_t _fehy3008[26] = {
   1.502491,
   0.1775876,
   0.1100701,
   0.08892596,
   0.07587327,
   0.07605402,
   0.06728854,
   0.0707713,
   0.0706933,
   0.06932724,
   0.06548328,
   0.05807857,
   0.06005269,
   0.061556,
   0.05976316,
   0.06537288,
   0.06992744,
   0.0659874,
   0.06669299,
   0.06805045,
   0.07563388,
   0.07821006,
   0.0709304,
   0.09164354,
   0.1186571,
   5.834826};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,-156,156);
   Graph_Graph3008->SetMinimum(0);
   Graph_Graph3008->SetMaximum(6.418309);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineWidth(2);
   Graph_Graph3008->SetMarkerStyle(20);
   Graph_Graph3008->GetXaxis()->SetNdivisions(509);
   Graph_Graph3008->GetXaxis()->SetLabelFont(132);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetXaxis()->SetTitleFont(132);
   Graph_Graph3008->GetYaxis()->SetNdivisions(509);
   Graph_Graph3008->GetYaxis()->SetLabelFont(132);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3008->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3008->GetYaxis()->SetTitleFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelFont(132);
   Graph_Graph3008->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3008->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3008);
   
   grae->Draw("p ");
   
   TH1F *hist__6 = new TH1F("hist__6","NCpi0BDT_Np_bnb_12_reco_nuvtxY_all",26,-130,130);

   ci = TColor::GetColor("#000099");
   hist__6->SetLineColor(ci);
   hist__6->GetXaxis()->SetLabelFont(42);
   hist__6->GetXaxis()->SetTitleOffset(1);
   hist__6->GetXaxis()->SetTitleFont(42);
   hist__6->GetYaxis()->SetNdivisions(405);
   hist__6->GetYaxis()->SetLabelFont(42);
   hist__6->GetYaxis()->SetTitleFont(42);
   hist__6->GetZaxis()->SetLabelFont(42);
   hist__6->GetZaxis()->SetTitleOffset(1);
   hist__6->GetZaxis()->SetTitleFont(42);
   hist__6->Draw("axis same");
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
   canvas2->cd();
   canvas2->Modified();
   canvas2->cd();
   canvas2->SetSelected(canvas2);
}
