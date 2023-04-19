#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas1()
{
//=========Macro generated from canvas: canvas1/channel1
//=========  (Fri Feb 17 20:55:42 2023) by ROOT version 6.26/00
   TCanvas *canvas1 = new TCanvas("canvas1", "channel1",34,57,1200,900);
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
   pad1->Range(-170,-7.470013,163.3333,826.0262);
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
   
   TH1F *hmc__1 = new TH1F("hmc__1","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmc__1->SetBinContent(0,5.073423);
   hmc__1->SetBinContent(1,2.771893);
   hmc__1->SetBinContent(2,62.01906);
   hmc__1->SetBinContent(3,161.0357);
   hmc__1->SetBinContent(4,267.1994);
   hmc__1->SetBinContent(5,316.9581);
   hmc__1->SetBinContent(6,313.6458);
   hmc__1->SetBinContent(7,340.6666);
   hmc__1->SetBinContent(8,344.6188);
   hmc__1->SetBinContent(9,330.1983);
   hmc__1->SetBinContent(10,348.2054);
   hmc__1->SetBinContent(11,341.8378);
   hmc__1->SetBinContent(12,339.6246);
   hmc__1->SetBinContent(13,348.1673);
   hmc__1->SetBinContent(14,341.7401);
   hmc__1->SetBinContent(15,336.7646);
   hmc__1->SetBinContent(16,354.6716);
   hmc__1->SetBinContent(17,352.8395);
   hmc__1->SetBinContent(18,352.4108);
   hmc__1->SetBinContent(19,364.2648);
   hmc__1->SetBinContent(20,365.6952);
   hmc__1->SetBinContent(21,372.7946);
   hmc__1->SetBinContent(22,373.5006);
   hmc__1->SetBinContent(23,345.4821);
   hmc__1->SetBinContent(24,259.9502);
   hmc__1->SetBinContent(25,123.2772);
   hmc__1->SetBinContent(26,4.643096);
   hmc__1->SetBinContent(27,3.754537);
   hmc__1->SetBinError(0,1.140963);
   hmc__1->SetBinError(1,4.625303);
   hmc__1->SetBinError(2,29.26873);
   hmc__1->SetBinError(3,45.7103);
   hmc__1->SetBinError(4,72.47502);
   hmc__1->SetBinError(5,79.39583);
   hmc__1->SetBinError(6,85.33193);
   hmc__1->SetBinError(7,94.49212);
   hmc__1->SetBinError(8,92.47038);
   hmc__1->SetBinError(9,87.33897);
   hmc__1->SetBinError(10,90.26914);
   hmc__1->SetBinError(11,91.72883);
   hmc__1->SetBinError(12,93.14863);
   hmc__1->SetBinError(13,89.86936);
   hmc__1->SetBinError(14,94.8635);
   hmc__1->SetBinError(15,86.52499);
   hmc__1->SetBinError(16,89.73216);
   hmc__1->SetBinError(17,84.89598);
   hmc__1->SetBinError(18,84.79502);
   hmc__1->SetBinError(19,85.12753);
   hmc__1->SetBinError(20,86.78471);
   hmc__1->SetBinError(21,81.46831);
   hmc__1->SetBinError(22,80.31591);
   hmc__1->SetBinError(23,65.99497);
   hmc__1->SetBinError(24,52.88286);
   hmc__1->SetBinError(25,32.21094);
   hmc__1->SetBinError(26,5.870799);
   hmc__1->SetBinError(27,4.977194);
   hmc__1->SetMinimum(-7.470013);
   hmc__1->SetMaximum(784.3513);
   hmc__1->SetEntries(7381.09);
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
   
   TH1F *hs1_stack_1 = new TH1F("hs1_stack_1","",26,-130,130);
   hs1_stack_1->SetMinimum(-1.150846e-08);
   hs1_stack_1->SetMaximum(392.1756);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hbadmatch_stack_1->SetBinContent(2,3.587728);
   hbadmatch_stack_1->SetBinContent(3,2.249007);
   hbadmatch_stack_1->SetBinContent(4,10.21441);
   hbadmatch_stack_1->SetBinContent(5,7.175416);
   hbadmatch_stack_1->SetBinContent(6,5.408595);
   hbadmatch_stack_1->SetBinContent(7,6.072373);
   hbadmatch_stack_1->SetBinContent(8,7.42593);
   hbadmatch_stack_1->SetBinContent(9,6.761104);
   hbadmatch_stack_1->SetBinContent(10,8.65668);
   hbadmatch_stack_1->SetBinContent(11,7.160261);
   hbadmatch_stack_1->SetBinContent(12,9.259715);
   hbadmatch_stack_1->SetBinContent(13,11.12277);
   hbadmatch_stack_1->SetBinContent(14,6.665476);
   hbadmatch_stack_1->SetBinContent(15,8.626778);
   hbadmatch_stack_1->SetBinContent(16,9.429804);
   hbadmatch_stack_1->SetBinContent(17,7.625321);
   hbadmatch_stack_1->SetBinContent(18,9.118876);
   hbadmatch_stack_1->SetBinContent(19,7.266976);
   hbadmatch_stack_1->SetBinContent(20,8.669601);
   hbadmatch_stack_1->SetBinContent(21,8.797129);
   hbadmatch_stack_1->SetBinContent(22,5.861755);
   hbadmatch_stack_1->SetBinContent(23,10.73427);
   hbadmatch_stack_1->SetBinContent(24,8.513412);
   hbadmatch_stack_1->SetBinContent(25,4.130048);
   hbadmatch_stack_1->SetBinError(2,1.004576);
   hbadmatch_stack_1->SetBinError(3,0.7341869);
   hbadmatch_stack_1->SetBinError(4,2.857117);
   hbadmatch_stack_1->SetBinError(5,2.106922);
   hbadmatch_stack_1->SetBinError(6,1.135581);
   hbadmatch_stack_1->SetBinError(7,1.288562);
   hbadmatch_stack_1->SetBinError(8,1.641737);
   hbadmatch_stack_1->SetBinError(9,1.316916);
   hbadmatch_stack_1->SetBinError(10,1.663724);
   hbadmatch_stack_1->SetBinError(11,1.379003);
   hbadmatch_stack_1->SetBinError(12,1.635184);
   hbadmatch_stack_1->SetBinError(13,1.738568);
   hbadmatch_stack_1->SetBinError(14,1.310112);
   hbadmatch_stack_1->SetBinError(15,1.620408);
   hbadmatch_stack_1->SetBinError(16,1.569598);
   hbadmatch_stack_1->SetBinError(17,1.404908);
   hbadmatch_stack_1->SetBinError(18,1.585997);
   hbadmatch_stack_1->SetBinError(19,1.457156);
   hbadmatch_stack_1->SetBinError(20,1.566353);
   hbadmatch_stack_1->SetBinError(21,1.708386);
   hbadmatch_stack_1->SetBinError(22,1.341284);
   hbadmatch_stack_1->SetBinError(23,2.003251);
   hbadmatch_stack_1->SetBinError(24,1.520834);
   hbadmatch_stack_1->SetBinError(25,1.064738);
   hbadmatch_stack_1->SetEntries(701);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1434;
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
   hs1->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hext_stack_2->SetBinContent(2,0.3243973);
   hext_stack_2->SetBinContent(3,2.110787);
   hext_stack_2->SetBinContent(4,5.034772);
   hext_stack_2->SetBinContent(5,12.67789);
   hext_stack_2->SetBinContent(6,7.918446);
   hext_stack_2->SetBinContent(7,7.22058);
   hext_stack_2->SetBinContent(8,14.52771);
   hext_stack_2->SetBinContent(9,18.00834);
   hext_stack_2->SetBinContent(10,23.32279);
   hext_stack_2->SetBinContent(11,20.61511);
   hext_stack_2->SetBinContent(12,15.54562);
   hext_stack_2->SetBinContent(13,27.15376);
   hext_stack_2->SetBinContent(14,22.39709);
   hext_stack_2->SetBinContent(15,28.47453);
   hext_stack_2->SetBinContent(16,28.60699);
   hext_stack_2->SetBinContent(17,45.91458);
   hext_stack_2->SetBinContent(18,45.65084);
   hext_stack_2->SetBinContent(19,55.0297);
   hext_stack_2->SetBinContent(20,58.22025);
   hext_stack_2->SetBinContent(21,66.63626);
   hext_stack_2->SetBinContent(22,76.01512);
   hext_stack_2->SetBinContent(23,81.83588);
   hext_stack_2->SetBinContent(24,62.48094);
   hext_stack_2->SetBinContent(25,27.07156);
   hext_stack_2->SetBinContent(26,1.137595);
   hext_stack_2->SetBinContent(27,0.4065989);
   hext_stack_2->SetBinError(2,0.3243973);
   hext_stack_2->SetBinError(3,0.8669371);
   hext_stack_2->SetBinError(4,1.354181);
   hext_stack_2->SetBinError(5,2.499052);
   hext_stack_2->SetBinError(6,1.946);
   hext_stack_2->SetBinError(7,1.687209);
   hext_stack_2->SetBinError(8,2.686815);
   hext_stack_2->SetBinError(9,2.998183);
   hext_stack_2->SetBinError(10,3.415246);
   hext_stack_2->SetBinError(11,3.124883);
   hext_stack_2->SetBinError(12,2.607473);
   hext_stack_2->SetBinError(13,3.615354);
   hext_stack_2->SetBinError(14,3.205638);
   hext_stack_2->SetBinError(15,3.655073);
   hext_stack_2->SetBinError(16,3.465724);
   hext_stack_2->SetBinError(17,4.801797);
   hext_stack_2->SetBinError(18,4.8596);
   hext_stack_2->SetBinError(19,5.112913);
   hext_stack_2->SetBinError(20,4.999891);
   hext_stack_2->SetBinError(21,5.532802);
   hext_stack_2->SetBinError(22,5.756567);
   hext_stack_2->SetBinError(23,6.264151);
   hext_stack_2->SetBinError(24,5.269665);
   hext_stack_2->SetBinError(25,3.607034);
   hext_stack_2->SetBinError(26,0.6602113);
   hext_stack_2->SetBinError(27,0.4065989);
   hext_stack_2->SetEntries(1757);

   ci = 1435;
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
   hs1->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hdirt_stack_3->SetBinContent(0,0.1380715);
   hdirt_stack_3->SetBinContent(2,0.381623);
   hdirt_stack_3->SetBinContent(3,2.356437);
   hdirt_stack_3->SetBinContent(4,2.600331);
   hdirt_stack_3->SetBinContent(5,1.955611);
   hdirt_stack_3->SetBinContent(6,3.159688);
   hdirt_stack_3->SetBinContent(7,3.735492);
   hdirt_stack_3->SetBinContent(8,2.147753);
   hdirt_stack_3->SetBinContent(9,2.529026);
   hdirt_stack_3->SetBinContent(10,3.312352);
   hdirt_stack_3->SetBinContent(11,1.394457);
   hdirt_stack_3->SetBinContent(12,3.346879);
   hdirt_stack_3->SetBinContent(13,3.22176);
   hdirt_stack_3->SetBinContent(14,0.9687504);
   hdirt_stack_3->SetBinContent(15,2.296399);
   hdirt_stack_3->SetBinContent(16,3.589576);
   hdirt_stack_3->SetBinContent(17,2.180902);
   hdirt_stack_3->SetBinContent(18,2.467684);
   hdirt_stack_3->SetBinContent(19,2.449147);
   hdirt_stack_3->SetBinContent(20,4.922387);
   hdirt_stack_3->SetBinContent(21,5.558934);
   hdirt_stack_3->SetBinContent(22,6.504851);
   hdirt_stack_3->SetBinContent(23,5.92733);
   hdirt_stack_3->SetBinContent(24,2.39569);
   hdirt_stack_3->SetBinContent(25,2.813537);
   hdirt_stack_3->SetBinContent(27,0.6763744);
   hdirt_stack_3->SetBinError(0,0.1380715);
   hdirt_stack_3->SetBinError(2,0.2727553);
   hdirt_stack_3->SetBinError(3,0.8215658);
   hdirt_stack_3->SetBinError(4,0.804446);
   hdirt_stack_3->SetBinError(5,0.6639091);
   hdirt_stack_3->SetBinError(6,0.806278);
   hdirt_stack_3->SetBinError(7,1.249247);
   hdirt_stack_3->SetBinError(8,0.8842929);
   hdirt_stack_3->SetBinError(9,0.7881226);
   hdirt_stack_3->SetBinError(10,0.9653814);
   hdirt_stack_3->SetBinError(11,0.5605024);
   hdirt_stack_3->SetBinError(12,0.9838324);
   hdirt_stack_3->SetBinError(13,0.9325726);
   hdirt_stack_3->SetBinError(14,0.4459701);
   hdirt_stack_3->SetBinError(15,0.8310636);
   hdirt_stack_3->SetBinError(16,1.042843);
   hdirt_stack_3->SetBinError(17,0.7859453);
   hdirt_stack_3->SetBinError(18,0.7863797);
   hdirt_stack_3->SetBinError(19,0.8487544);
   hdirt_stack_3->SetBinError(20,1.126407);
   hdirt_stack_3->SetBinError(21,1.267598);
   hdirt_stack_3->SetBinError(22,1.671981);
   hdirt_stack_3->SetBinError(23,1.224396);
   hdirt_stack_3->SetBinError(24,1.111222);
   hdirt_stack_3->SetBinError(25,0.9007508);
   hdirt_stack_3->SetBinError(27,0.4782689);
   hdirt_stack_3->SetEntries(307);

   ci = 1436;
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
   hs1->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   houtFV_stack_4->SetBinContent(0,2.145881);
   houtFV_stack_4->SetBinContent(1,1.857266);
   houtFV_stack_4->SetBinContent(2,42.48518);
   houtFV_stack_4->SetBinContent(3,52.27618);
   houtFV_stack_4->SetBinContent(4,42.26428);
   houtFV_stack_4->SetBinContent(5,36.75648);
   houtFV_stack_4->SetBinContent(6,27.87472);
   houtFV_stack_4->SetBinContent(7,27.19921);
   houtFV_stack_4->SetBinContent(8,22.86402);
   houtFV_stack_4->SetBinContent(9,25.64099);
   houtFV_stack_4->SetBinContent(10,23.04967);
   houtFV_stack_4->SetBinContent(11,22.8394);
   houtFV_stack_4->SetBinContent(12,20.48663);
   houtFV_stack_4->SetBinContent(13,18.19253);
   houtFV_stack_4->SetBinContent(14,21.41382);
   houtFV_stack_4->SetBinContent(15,17.14831);
   houtFV_stack_4->SetBinContent(16,19.92215);
   houtFV_stack_4->SetBinContent(17,21.05551);
   houtFV_stack_4->SetBinContent(18,22.45463);
   houtFV_stack_4->SetBinContent(19,21.396);
   houtFV_stack_4->SetBinContent(20,22.02159);
   houtFV_stack_4->SetBinContent(21,31.18809);
   houtFV_stack_4->SetBinContent(22,36.11013);
   houtFV_stack_4->SetBinContent(23,32.25821);
   houtFV_stack_4->SetBinContent(24,47.75349);
   houtFV_stack_4->SetBinContent(25,60.25294);
   houtFV_stack_4->SetBinContent(26,2.736028);
   houtFV_stack_4->SetBinContent(27,0.5884556);
   houtFV_stack_4->SetBinError(0,0.785499);
   houtFV_stack_4->SetBinError(1,0.6799255);
   houtFV_stack_4->SetBinError(2,3.222386);
   houtFV_stack_4->SetBinError(3,3.636572);
   houtFV_stack_4->SetBinError(4,3.253507);
   houtFV_stack_4->SetBinError(5,3.075428);
   houtFV_stack_4->SetBinError(6,2.608425);
   houtFV_stack_4->SetBinError(7,2.563937);
   houtFV_stack_4->SetBinError(8,2.364351);
   houtFV_stack_4->SetBinError(9,2.624143);
   houtFV_stack_4->SetBinError(10,2.407957);
   houtFV_stack_4->SetBinError(11,2.621135);
   houtFV_stack_4->SetBinError(12,2.263593);
   houtFV_stack_4->SetBinError(13,2.118458);
   houtFV_stack_4->SetBinError(14,2.33788);
   houtFV_stack_4->SetBinError(15,2.093542);
   houtFV_stack_4->SetBinError(16,2.176497);
   houtFV_stack_4->SetBinError(17,2.296788);
   houtFV_stack_4->SetBinError(18,2.325379);
   houtFV_stack_4->SetBinError(19,2.347727);
   houtFV_stack_4->SetBinError(20,2.298447);
   houtFV_stack_4->SetBinError(21,2.927278);
   houtFV_stack_4->SetBinError(22,3.098765);
   houtFV_stack_4->SetBinError(23,2.883057);
   houtFV_stack_4->SetBinError(24,3.524864);
   houtFV_stack_4->SetBinError(25,3.929388);
   houtFV_stack_4->SetBinError(26,0.8562123);
   houtFV_stack_4->SetBinError(27,0.3397478);
   houtFV_stack_4->SetEntries(3094);

   ci = 1437;
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
   hs1->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.09731799);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2512681);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,1.559912);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,4.529778);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,4.809946);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,4.740528);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,4.76826);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,5.184599);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,5.147242);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,5.284414);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,5.509278);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,4.894646);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,3.401983);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,4.504037);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,5.410464);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,5.871482);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,7.377763);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,5.395518);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,5.6888);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,4.182192);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,4.600028);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,5.270132);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,5.006414);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,2.594717);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.3756539);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.097318);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.1994106);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.3609996);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.6513374);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.7188939);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.7128226);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.6900258);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.7039396);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.7641649);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.7502002);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.7794614);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.7557571);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.5592239);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.6447811);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.7696205);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.8148196);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.9641079);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.7824101);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.7833215);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.6534754);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.6724574);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.7544253);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.7791286);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.6012061);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.17535);
   hNCpi0inFVcoh_stack_5->SetEntries(1924);

   ci = 1438;
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
   hs1->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.823054);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.850954);
   hNCpi0inFVqe_stack_6->SetBinContent(5,1.004072);
   hNCpi0inFVqe_stack_6->SetBinContent(6,1.45064);
   hNCpi0inFVqe_stack_6->SetBinContent(7,2.440598);
   hNCpi0inFVqe_stack_6->SetBinContent(8,1.631826);
   hNCpi0inFVqe_stack_6->SetBinContent(9,1.31114);
   hNCpi0inFVqe_stack_6->SetBinContent(10,1.184922);
   hNCpi0inFVqe_stack_6->SetBinContent(11,1.310308);
   hNCpi0inFVqe_stack_6->SetBinContent(12,1.28324);
   hNCpi0inFVqe_stack_6->SetBinContent(13,1.283904);
   hNCpi0inFVqe_stack_6->SetBinContent(14,1.43619);
   hNCpi0inFVqe_stack_6->SetBinContent(15,1.241722);
   hNCpi0inFVqe_stack_6->SetBinContent(16,1.575026);
   hNCpi0inFVqe_stack_6->SetBinContent(17,1.128458);
   hNCpi0inFVqe_stack_6->SetBinContent(18,1.045422);
   hNCpi0inFVqe_stack_6->SetBinContent(19,1.35349);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.8931359);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.8652359);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.98979);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.5300997);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.7255678);
   hNCpi0inFVqe_stack_6->SetBinContent(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.3085891);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.3098478);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.3271594);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.3901881);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.5462564);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.4436346);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.3851684);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.2933946);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3592889);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.3841566);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.3661742);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.3547464);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.3737142);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3784571);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.3130755);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.2866851);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.4189688);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.3007107);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2994136);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.336735);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.1216132);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.230212);
   hNCpi0inFVqe_stack_6->SetBinError(25,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(526);

   ci = 1439;
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
   hs1->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVres_stack_7->SetBinContent(0,0.711454);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.08369996);
   hNCpi0inFVres_stack_7->SetBinContent(2,7.294886);
   hNCpi0inFVres_stack_7->SetBinContent(3,45.45758);
   hNCpi0inFVres_stack_7->SetBinContent(4,95.05917);
   hNCpi0inFVres_stack_7->SetBinContent(5,124.8434);
   hNCpi0inFVres_stack_7->SetBinContent(6,130.8483);
   hNCpi0inFVres_stack_7->SetBinContent(7,149.5342);
   hNCpi0inFVres_stack_7->SetBinContent(8,150.2312);
   hNCpi0inFVres_stack_7->SetBinContent(9,139.5045);
   hNCpi0inFVres_stack_7->SetBinContent(10,142.2332);
   hNCpi0inFVres_stack_7->SetBinContent(11,149.002);
   hNCpi0inFVres_stack_7->SetBinContent(12,140.9879);
   hNCpi0inFVres_stack_7->SetBinContent(13,139.4127);
   hNCpi0inFVres_stack_7->SetBinContent(14,134.8411);
   hNCpi0inFVres_stack_7->SetBinContent(15,137.8138);
   hNCpi0inFVres_stack_7->SetBinContent(16,135.9937);
   hNCpi0inFVres_stack_7->SetBinContent(17,133.6945);
   hNCpi0inFVres_stack_7->SetBinContent(18,125.0361);
   hNCpi0inFVres_stack_7->SetBinContent(19,128.9787);
   hNCpi0inFVres_stack_7->SetBinContent(20,134.9135);
   hNCpi0inFVres_stack_7->SetBinContent(21,121.2479);
   hNCpi0inFVres_stack_7->SetBinContent(22,117.9944);
   hNCpi0inFVres_stack_7->SetBinContent(23,98.74283);
   hNCpi0inFVres_stack_7->SetBinContent(24,60.62584);
   hNCpi0inFVres_stack_7->SetBinContent(25,8.617811);
   hNCpi0inFVres_stack_7->SetBinContent(26,0.153118);
   hNCpi0inFVres_stack_7->SetBinContent(27,1.519562);
   hNCpi0inFVres_stack_7->SetBinError(0,0.3035023);
   hNCpi0inFVres_stack_7->SetBinError(1,0.04832419);
   hNCpi0inFVres_stack_7->SetBinError(2,0.8954924);
   hNCpi0inFVres_stack_7->SetBinError(3,2.184995);
   hNCpi0inFVres_stack_7->SetBinError(4,3.192039);
   hNCpi0inFVres_stack_7->SetBinError(5,3.673009);
   hNCpi0inFVres_stack_7->SetBinError(6,3.66981);
   hNCpi0inFVres_stack_7->SetBinError(7,4.031248);
   hNCpi0inFVres_stack_7->SetBinError(8,4.03939);
   hNCpi0inFVres_stack_7->SetBinError(9,3.85239);
   hNCpi0inFVres_stack_7->SetBinError(10,3.85329);
   hNCpi0inFVres_stack_7->SetBinError(11,3.998449);
   hNCpi0inFVres_stack_7->SetBinError(12,3.854174);
   hNCpi0inFVres_stack_7->SetBinError(13,3.822529);
   hNCpi0inFVres_stack_7->SetBinError(14,3.756868);
   hNCpi0inFVres_stack_7->SetBinError(15,3.873302);
   hNCpi0inFVres_stack_7->SetBinError(16,3.851978);
   hNCpi0inFVres_stack_7->SetBinError(17,3.789218);
   hNCpi0inFVres_stack_7->SetBinError(18,3.586648);
   hNCpi0inFVres_stack_7->SetBinError(19,3.705266);
   hNCpi0inFVres_stack_7->SetBinError(20,3.835676);
   hNCpi0inFVres_stack_7->SetBinError(21,3.568324);
   hNCpi0inFVres_stack_7->SetBinError(22,3.610658);
   hNCpi0inFVres_stack_7->SetBinError(23,3.277913);
   hNCpi0inFVres_stack_7->SetBinError(24,2.676886);
   hNCpi0inFVres_stack_7->SetBinError(25,0.9413318);
   hNCpi0inFVres_stack_7->SetBinError(26,0.1050124);
   hNCpi0inFVres_stack_7->SetBinError(27,0.4551821);
   hNCpi0inFVres_stack_7->SetEntries(50864);

   ci = 1440;
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
   hs1->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.5161542);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.072658);
   hNCpi0inFVdis_stack_8->SetBinContent(3,7.876297);
   hNCpi0inFVdis_stack_8->SetBinContent(4,20.7376);
   hNCpi0inFVdis_stack_8->SetBinContent(5,24.06367);
   hNCpi0inFVdis_stack_8->SetBinContent(6,25.90991);
   hNCpi0inFVdis_stack_8->SetBinContent(7,30.06021);
   hNCpi0inFVdis_stack_8->SetBinContent(8,28.45795);
   hNCpi0inFVdis_stack_8->SetBinContent(9,27.65133);
   hNCpi0inFVdis_stack_8->SetBinContent(10,25.59651);
   hNCpi0inFVdis_stack_8->SetBinContent(11,26.61686);
   hNCpi0inFVdis_stack_8->SetBinContent(12,27.39807);
   hNCpi0inFVdis_stack_8->SetBinContent(13,27.35772);
   hNCpi0inFVdis_stack_8->SetBinContent(14,30.93241);
   hNCpi0inFVdis_stack_8->SetBinContent(15,27.44258);
   hNCpi0inFVdis_stack_8->SetBinContent(16,27.09117);
   hNCpi0inFVdis_stack_8->SetBinContent(17,25.38793);
   hNCpi0inFVdis_stack_8->SetBinContent(18,25.57061);
   hNCpi0inFVdis_stack_8->SetBinContent(19,24.33405);
   hNCpi0inFVdis_stack_8->SetBinContent(20,25.40288);
   hNCpi0inFVdis_stack_8->SetBinContent(21,24.76451);
   hNCpi0inFVdis_stack_8->SetBinContent(22,19.63187);
   hNCpi0inFVdis_stack_8->SetBinContent(23,20.97392);
   hNCpi0inFVdis_stack_8->SetBinContent(24,11.79843);
   hNCpi0inFVdis_stack_8->SetBinContent(25,2.494734);
   hNCpi0inFVdis_stack_8->SetBinContent(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinContent(27,0.2233681);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.2943888);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3105792);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.8949485);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.52627);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.538713);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.670601);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.816072);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.772178);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.699054);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.586331);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.605193);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.699264);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.721734);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.800214);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.704981);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.696743);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.602929);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.618555);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.621238);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.641359);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.659283);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.392615);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.545676);
   hNCpi0inFVdis_stack_8->SetBinError(24,1.124233);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.511293);
   hNCpi0inFVdis_stack_8->SetBinError(26,0.02789998);
   hNCpi0inFVdis_stack_8->SetBinError(27,0.1974492);
   hNCpi0inFVdis_stack_8->SetEntries(10021);

   ci = 1441;
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
   hs1->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.3485861);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.181018);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.2233681);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.08369996);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.2512681);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.05579997);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.2218905);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1086555);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1974492);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.04832419);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1994106);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.03945654);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(40);

   ci = 1442;
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
   hs1->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hCCpi0inFV_stack_10->SetBinContent(0,1.217248);
   hCCpi0inFV_stack_10->SetBinContent(2,4.35117);
   hCCpi0inFV_stack_10->SetBinContent(3,24.122);
   hCCpi0inFV_stack_10->SetBinContent(4,45.30775);
   hCCpi0inFV_stack_10->SetBinContent(5,49.75274);
   hCCpi0inFV_stack_10->SetBinContent(6,50.89481);
   hCCpi0inFV_stack_10->SetBinContent(7,48.21054);
   hCCpi0inFV_stack_10->SetBinContent(8,55.201);
   hCCpi0inFV_stack_10->SetBinContent(9,48.45494);
   hCCpi0inFV_stack_10->SetBinContent(10,55.78577);
   hCCpi0inFV_stack_10->SetBinContent(11,51.02636);
   hCCpi0inFV_stack_10->SetBinContent(12,56.22915);
   hCCpi0inFV_stack_10->SetBinContent(13,55.57158);
   hCCpi0inFV_stack_10->SetBinContent(14,54.74953);
   hCCpi0inFV_stack_10->SetBinContent(15,49.56165);
   hCCpi0inFV_stack_10->SetBinContent(16,59.22589);
   hCCpi0inFV_stack_10->SetBinContent(17,48.84348);
   hCCpi0inFV_stack_10->SetBinContent(18,55.70599);
   hCCpi0inFV_stack_10->SetBinContent(19,56.58519);
   hCCpi0inFV_stack_10->SetBinContent(20,50.90723);
   hCCpi0inFV_stack_10->SetBinContent(21,47.26471);
   hCCpi0inFV_stack_10->SetBinContent(22,45.68612);
   hCCpi0inFV_stack_10->SetBinContent(23,43.44879);
   hCCpi0inFV_stack_10->SetBinContent(24,29.76339);
   hCCpi0inFV_stack_10->SetBinContent(25,6.758391);
   hCCpi0inFV_stack_10->SetBinContent(26,0.3917402);
   hCCpi0inFV_stack_10->SetBinError(0,0.6211758);
   hCCpi0inFV_stack_10->SetBinError(2,0.9998562);
   hCCpi0inFV_stack_10->SetBinError(3,2.450193);
   hCCpi0inFV_stack_10->SetBinError(4,3.404489);
   hCCpi0inFV_stack_10->SetBinError(5,3.598372);
   hCCpi0inFV_stack_10->SetBinError(6,3.544983);
   hCCpi0inFV_stack_10->SetBinError(7,3.44661);
   hCCpi0inFV_stack_10->SetBinError(8,3.711341);
   hCCpi0inFV_stack_10->SetBinError(9,3.507868);
   hCCpi0inFV_stack_10->SetBinError(10,3.774347);
   hCCpi0inFV_stack_10->SetBinError(11,3.636202);
   hCCpi0inFV_stack_10->SetBinError(12,3.773802);
   hCCpi0inFV_stack_10->SetBinError(13,3.72122);
   hCCpi0inFV_stack_10->SetBinError(14,3.655425);
   hCCpi0inFV_stack_10->SetBinError(15,3.498788);
   hCCpi0inFV_stack_10->SetBinError(16,3.850477);
   hCCpi0inFV_stack_10->SetBinError(17,3.578079);
   hCCpi0inFV_stack_10->SetBinError(18,3.733296);
   hCCpi0inFV_stack_10->SetBinError(19,3.814814);
   hCCpi0inFV_stack_10->SetBinError(20,3.60881);
   hCCpi0inFV_stack_10->SetBinError(21,3.414962);
   hCCpi0inFV_stack_10->SetBinError(22,3.379462);
   hCCpi0inFV_stack_10->SetBinError(23,3.257633);
   hCCpi0inFV_stack_10->SetBinError(24,2.788585);
   hCCpi0inFV_stack_10->SetBinError(25,1.242992);
   hCCpi0inFV_stack_10->SetBinError(26,0.2770047);
   hCCpi0inFV_stack_10->SetEntries(4680);

   ci = 1443;
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
   hs1->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hNCinFV_stack_11->SetBinContent(1,0.3934307);
   hNCinFV_stack_11->SetBinContent(2,1.413964);
   hNCinFV_stack_11->SetBinContent(3,10.60332);
   hNCinFV_stack_11->SetBinContent(4,17.61928);
   hNCinFV_stack_11->SetBinContent(5,22.73388);
   hNCinFV_stack_11->SetBinContent(6,22.71082);
   hNCinFV_stack_11->SetBinContent(7,27.85054);
   hNCinFV_stack_11->SetBinContent(8,22.1319);
   hNCinFV_stack_11->SetBinContent(9,23.88942);
   hNCinFV_stack_11->SetBinContent(10,24.97782);
   hNCinFV_stack_11->SetBinContent(11,26.77737);
   hNCinFV_stack_11->SetBinContent(12,27.7816);
   hNCinFV_stack_11->SetBinContent(13,23.49599);
   hNCinFV_stack_11->SetBinContent(14,25.26028);
   hNCinFV_stack_11->SetBinContent(15,25.55336);
   hNCinFV_stack_11->SetBinContent(16,22.83194);
   hNCinFV_stack_11->SetBinContent(17,27.54455);
   hNCinFV_stack_11->SetBinContent(18,26.17369);
   hNCinFV_stack_11->SetBinContent(19,26.62714);
   hNCinFV_stack_11->SetBinContent(20,22.64198);
   hNCinFV_stack_11->SetBinContent(21,26.9707);
   hNCinFV_stack_11->SetBinContent(22,23.15074);
   hNCinFV_stack_11->SetBinContent(23,17.47594);
   hNCinFV_stack_11->SetBinContent(24,12.11088);
   hNCinFV_stack_11->SetBinContent(25,2.83285);
   hNCinFV_stack_11->SetBinContent(26,0.1967154);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.2781975);
   hNCinFV_stack_11->SetBinError(2,0.6515799);
   hNCinFV_stack_11->SetBinError(3,1.618039);
   hNCinFV_stack_11->SetBinError(4,2.140218);
   hNCinFV_stack_11->SetBinError(5,2.36361);
   hNCinFV_stack_11->SetBinError(6,2.403333);
   hNCinFV_stack_11->SetBinError(7,2.632712);
   hNCinFV_stack_11->SetBinError(8,2.337932);
   hNCinFV_stack_11->SetBinError(9,2.451026);
   hNCinFV_stack_11->SetBinError(10,2.47461);
   hNCinFV_stack_11->SetBinError(11,2.611697);
   hNCinFV_stack_11->SetBinError(12,2.712956);
   hNCinFV_stack_11->SetBinError(13,2.435186);
   hNCinFV_stack_11->SetBinError(14,2.544481);
   hNCinFV_stack_11->SetBinError(15,2.536228);
   hNCinFV_stack_11->SetBinError(16,2.346633);
   hNCinFV_stack_11->SetBinError(17,2.677019);
   hNCinFV_stack_11->SetBinError(18,2.588353);
   hNCinFV_stack_11->SetBinError(19,2.596399);
   hNCinFV_stack_11->SetBinError(20,2.33894);
   hNCinFV_stack_11->SetBinError(21,2.618842);
   hNCinFV_stack_11->SetBinError(22,2.410897);
   hNCinFV_stack_11->SetBinError(23,2.089418);
   hNCinFV_stack_11->SetBinError(24,1.777437);
   hNCinFV_stack_11->SetBinError(25,0.8340579);
   hNCinFV_stack_11->SetBinError(26,0.1967154);
   hNCinFV_stack_11->SetBinError(27,0.3401776);
   hNCinFV_stack_11->SetEntries(2180);

   ci = 1444;
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
   hs1->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnumuCCinFV_stack_12->SetBinContent(0,0.316714);
   hnumuCCinFV_stack_12->SetBinContent(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinContent(2,0.8282892);
   hnumuCCinFV_stack_12->SetBinContent(3,11.40613);
   hnumuCCinFV_stack_12->SetBinContent(4,20.29889);
   hnumuCCinFV_stack_12->SetBinContent(5,28.88849);
   hnumuCCinFV_stack_12->SetBinContent(6,31.2894);
   hnumuCCinFV_stack_12->SetBinContent(7,30.48063);
   hnumuCCinFV_stack_12->SetBinContent(8,31.95706);
   hnumuCCinFV_stack_12->SetBinContent(9,27.318);
   hnumuCCinFV_stack_12->SetBinContent(10,30.59964);
   hnumuCCinFV_stack_12->SetBinContent(11,26.67398);
   hnumuCCinFV_stack_12->SetBinContent(12,29.64878);
   hnumuCCinFV_stack_12->SetBinContent(13,34.89494);
   hnumuCCinFV_stack_12->SetBinContent(14,35.32025);
   hnumuCCinFV_stack_12->SetBinContent(15,31.72361);
   hnumuCCinFV_stack_12->SetBinContent(16,36.3527);
   hnumuCCinFV_stack_12->SetBinContent(17,30.90828);
   hnumuCCinFV_stack_12->SetBinContent(18,31.82309);
   hnumuCCinFV_stack_12->SetBinContent(19,32.81699);
   hnumuCCinFV_stack_12->SetBinContent(20,29.84427);
   hnumuCCinFV_stack_12->SetBinContent(21,32.41328);
   hnumuCCinFV_stack_12->SetBinContent(22,34.63768);
   hnumuCCinFV_stack_12->SetBinContent(23,26.07269);
   hnumuCCinFV_stack_12->SetBinContent(24,19.61294);
   hnumuCCinFV_stack_12->SetBinContent(25,7.294386);
   hnumuCCinFV_stack_12->SetBinError(0,0.316714);
   hnumuCCinFV_stack_12->SetBinError(1,0.3401776);
   hnumuCCinFV_stack_12->SetBinError(2,0.4846751);
   hnumuCCinFV_stack_12->SetBinError(3,2.138422);
   hnumuCCinFV_stack_12->SetBinError(4,2.377204);
   hnumuCCinFV_stack_12->SetBinError(5,3.309234);
   hnumuCCinFV_stack_12->SetBinError(6,3.35581);
   hnumuCCinFV_stack_12->SetBinError(7,3.069218);
   hnumuCCinFV_stack_12->SetBinError(8,3.310107);
   hnumuCCinFV_stack_12->SetBinError(9,2.79914);
   hnumuCCinFV_stack_12->SetBinError(10,2.959394);
   hnumuCCinFV_stack_12->SetBinError(11,2.941289);
   hnumuCCinFV_stack_12->SetBinError(12,3.140366);
   hnumuCCinFV_stack_12->SetBinError(13,3.101832);
   hnumuCCinFV_stack_12->SetBinError(14,3.468202);
   hnumuCCinFV_stack_12->SetBinError(15,3.075441);
   hnumuCCinFV_stack_12->SetBinError(16,3.289919);
   hnumuCCinFV_stack_12->SetBinError(17,3.50291);
   hnumuCCinFV_stack_12->SetBinError(18,3.222468);
   hnumuCCinFV_stack_12->SetBinError(19,3.733455);
   hnumuCCinFV_stack_12->SetBinError(20,3.624845);
   hnumuCCinFV_stack_12->SetBinError(21,3.327477);
   hnumuCCinFV_stack_12->SetBinError(22,4.055696);
   hnumuCCinFV_stack_12->SetBinError(23,2.863878);
   hnumuCCinFV_stack_12->SetBinError(24,2.353951);
   hnumuCCinFV_stack_12->SetBinError(25,1.62382);
   hnumuCCinFV_stack_12->SetEntries(2561);

   ci = 1445;
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
   hs1->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hnueCCinFV_stack_13->SetBinContent(3,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(4,2.626366);
   hnueCCinFV_stack_13->SetBinContent(5,2.26864);
   hnueCCinFV_stack_13->SetBinContent(6,1.412022);
   hnueCCinFV_stack_13->SetBinContent(7,2.745347);
   hnueCCinFV_stack_13->SetBinContent(8,2.82998);
   hnueCCinFV_stack_13->SetBinContent(9,3.75881);
   hnueCCinFV_stack_13->SetBinContent(10,4.145804);
   hnueCCinFV_stack_13->SetBinContent(11,2.856534);
   hnueCCinFV_stack_13->SetBinContent(12,2.706588);
   hnueCCinFV_stack_13->SetBinContent(13,3.057607);
   hnueCCinFV_stack_13->SetBinContent(14,3.070236);
   hnueCCinFV_stack_13->SetBinContent(15,1.387663);
   hnueCCinFV_stack_13->SetBinContent(16,4.153312);
   hnueCCinFV_stack_13->SetBinContent(17,0.9549253);
   hnueCCinFV_stack_13->SetBinContent(18,1.940396);
   hnueCCinFV_stack_13->SetBinContent(19,1.654885);
   hnueCCinFV_stack_13->SetBinContent(20,3.020362);
   hnueCCinFV_stack_13->SetBinContent(21,2.236554);
   hnueCCinFV_stack_13->SetBinContent(22,1.620112);
   hnueCCinFV_stack_13->SetBinContent(23,2.419914);
   hnueCCinFV_stack_13->SetBinContent(24,1.547013);
   hnueCCinFV_stack_13->SetBinContent(25,0.6073536);
   hnueCCinFV_stack_13->SetBinError(3,0.1950249);
   hnueCCinFV_stack_13->SetBinError(4,1.35372);
   hnueCCinFV_stack_13->SetBinError(5,0.857947);
   hnueCCinFV_stack_13->SetBinError(6,0.5901349);
   hnueCCinFV_stack_13->SetBinError(7,0.9034199);
   hnueCCinFV_stack_13->SetBinError(8,0.9477483);
   hnueCCinFV_stack_13->SetBinError(9,1.194345);
   hnueCCinFV_stack_13->SetBinError(10,1.78532);
   hnueCCinFV_stack_13->SetBinError(11,0.8507104);
   hnueCCinFV_stack_13->SetBinError(12,1.009623);
   hnueCCinFV_stack_13->SetBinError(13,1.609843);
   hnueCCinFV_stack_13->SetBinError(14,1.041461);
   hnueCCinFV_stack_13->SetBinError(15,0.8080418);
   hnueCCinFV_stack_13->SetBinError(16,1.416304);
   hnueCCinFV_stack_13->SetBinError(17,0.4920324);
   hnueCCinFV_stack_13->SetBinError(18,0.7063808);
   hnueCCinFV_stack_13->SetBinError(19,0.6382314);
   hnueCCinFV_stack_13->SetBinError(20,1.421725);
   hnueCCinFV_stack_13->SetBinError(21,0.780187);
   hnueCCinFV_stack_13->SetBinError(22,0.7152424);
   hnueCCinFV_stack_13->SetBinError(23,0.9644046);
   hnueCCinFV_stack_13->SetBinError(24,0.8450843);
   hnueCCinFV_stack_13->SetBinError(25,0.4462229);
   hnueCCinFV_stack_13->SetEntries(187);

   ci = 1446;
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
   hs1->Add(hnueCCinFV_stack_13,"");
   hs1->Draw("hist same");
   
   TH1F *hmcerror__2 = new TH1F("hmcerror__2","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);
   hmcerror__2->SetBinContent(0,5.073423);
   hmcerror__2->SetBinContent(1,2.771893);
   hmcerror__2->SetBinContent(2,62.01906);
   hmcerror__2->SetBinContent(3,161.0357);
   hmcerror__2->SetBinContent(4,267.1994);
   hmcerror__2->SetBinContent(5,316.9581);
   hmcerror__2->SetBinContent(6,313.6458);
   hmcerror__2->SetBinContent(7,340.6666);
   hmcerror__2->SetBinContent(8,344.6188);
   hmcerror__2->SetBinContent(9,330.1983);
   hmcerror__2->SetBinContent(10,348.2054);
   hmcerror__2->SetBinContent(11,341.8378);
   hmcerror__2->SetBinContent(12,339.6246);
   hmcerror__2->SetBinContent(13,348.1673);
   hmcerror__2->SetBinContent(14,341.7401);
   hmcerror__2->SetBinContent(15,336.7646);
   hmcerror__2->SetBinContent(16,354.6716);
   hmcerror__2->SetBinContent(17,352.8395);
   hmcerror__2->SetBinContent(18,352.4108);
   hmcerror__2->SetBinContent(19,364.2648);
   hmcerror__2->SetBinContent(20,365.6952);
   hmcerror__2->SetBinContent(21,372.7946);
   hmcerror__2->SetBinContent(22,373.5006);
   hmcerror__2->SetBinContent(23,345.4821);
   hmcerror__2->SetBinContent(24,259.9502);
   hmcerror__2->SetBinContent(25,123.2772);
   hmcerror__2->SetBinContent(26,4.643096);
   hmcerror__2->SetBinContent(27,3.754537);
   hmcerror__2->SetBinError(0,1.140963);
   hmcerror__2->SetBinError(1,4.625303);
   hmcerror__2->SetBinError(2,29.26873);
   hmcerror__2->SetBinError(3,45.7103);
   hmcerror__2->SetBinError(4,72.47502);
   hmcerror__2->SetBinError(5,79.39583);
   hmcerror__2->SetBinError(6,85.33193);
   hmcerror__2->SetBinError(7,94.49212);
   hmcerror__2->SetBinError(8,92.47038);
   hmcerror__2->SetBinError(9,87.33897);
   hmcerror__2->SetBinError(10,90.26914);
   hmcerror__2->SetBinError(11,91.72883);
   hmcerror__2->SetBinError(12,93.14863);
   hmcerror__2->SetBinError(13,89.86936);
   hmcerror__2->SetBinError(14,94.8635);
   hmcerror__2->SetBinError(15,86.52499);
   hmcerror__2->SetBinError(16,89.73216);
   hmcerror__2->SetBinError(17,84.89598);
   hmcerror__2->SetBinError(18,84.79502);
   hmcerror__2->SetBinError(19,85.12753);
   hmcerror__2->SetBinError(20,86.78471);
   hmcerror__2->SetBinError(21,81.46831);
   hmcerror__2->SetBinError(22,80.31591);
   hmcerror__2->SetBinError(23,65.99497);
   hmcerror__2->SetBinError(24,52.88286);
   hmcerror__2->SetBinError(25,32.21094);
   hmcerror__2->SetBinError(26,5.870799);
   hmcerror__2->SetBinError(27,4.977194);
   hmcerror__2->SetEntries(7381.09);

   ci = TColor::GetColor("#999999");
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
   
   Double_t _fx3001[26] = {
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
   Double_t _fy3001[26] = {
   4,
   46,
   143,
   258,
   280,
   283,
   307,
   317,
   302,
   304,
   305,
   270,
   273,
   272,
   269,
   306,
   296,
   292,
   304,
   301,
   327,
   352,
   302,
   239,
   82,
   2};
   Double_t _felx3001[26] = {
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
   Double_t _fely3001[26] = {
   2.29683,
   6.9153,
   11.95826,
   16.06238,
   16.7332,
   16.8226,
   17.52142,
   17.80449,
   17.37815,
   17.4356,
   17.46425,
   16.43168,
   16.52271,
   16.49242,
   16.40122,
   17.49286,
   17.20465,
   17.08801,
   17.4356,
   17.34935,
   18.08314,
   18.76166,
   17.37815,
   15.45962,
   9.1791,
   2};
   Double_t _fehx3001[26] = {
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
   Double_t _fehy3001[26] = {
   1.98186,
   6.7108,
   11.95826,
   16.06238,
   16.7332,
   16.8226,
   17.52142,
   17.80449,
   17.37815,
   17.4356,
   17.46425,
   16.43168,
   16.52271,
   16.49242,
   16.40122,
   17.49286,
   17.20465,
   17.08801,
   17.4356,
   17.34935,
   18.08314,
   18.76166,
   17.37815,
   15.45962,
   8.9774,
   1.51917};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,-156,156);
   Graph_Graph3001->SetMinimum(0);
   Graph_Graph3001->SetMaximum(407.8378);
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
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.20","h");
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
   entry=leg->AddEntry("","BNB Data, 6436.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 180.5","F");

   ci = 1434;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 753.9","F");

   ci = 1435;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 72.2","F");

   ci = 1436;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 719.5","F");

   ci = 1437;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  106.5","F");

   ci = 1438;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  26.4","F");

   ci = 1439;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  2753.1","F");

   ci = 1440;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  538.7","F");

   ci = 1441;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  1.9","F");

   ci = 1442;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 1093.8","F");

   ci = 1443;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 511.8","F");

   ci = 1444;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 653.4","F");

   ci = 1445;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 53.2","F");

   ci = 1446;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_bnb_12_reco_nuvtxY_all");
   pt->Draw();
   pad1->Modified();
   canvas1->cd();
  
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
   
   Double_t _fx3002[26] = {
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
   Double_t _fy3002[26] = {
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
   Double_t _felx3002[26] = {
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
   Double_t _fely3002[26] = {
   1.668644,
   0.4719312,
   0.2838519,
   0.2712395,
   0.2504931,
   0.2720647,
   0.2773742,
   0.2683266,
   0.2645046,
   0.259241,
   0.2683402,
   0.2742694,
   0.2581212,
   0.2775896,
   0.2569302,
   0.2530007,
   0.2406079,
   0.2406141,
   0.2336968,
   0.2373143,
   0.2185341,
   0.2150355,
   0.1910228,
   0.2034346,
   0.2612888,
   1.264415};
   Double_t _fehx3002[26] = {
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
   Double_t _fehy3002[26] = {
   1.668644,
   0.4719312,
   0.2838519,
   0.2712395,
   0.2504931,
   0.2720647,
   0.2773742,
   0.2683266,
   0.2645046,
   0.259241,
   0.2683402,
   0.2742694,
   0.2581212,
   0.2775896,
   0.2569302,
   0.2530007,
   0.2406079,
   0.2406141,
   0.2336968,
   0.2373143,
   0.2185341,
   0.2150355,
   0.1910228,
   0.2034346,
   0.2612888,
   1.264415};
   grae = new TGraphAsymmErrors(26,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,-156,156);
   Graph_Graph3002->SetMinimum(0);
   Graph_Graph3002->SetMaximum(2);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineWidth(2);
   Graph_Graph3002->SetMarkerStyle(20);
   Graph_Graph3002->GetXaxis()->SetTitle("#nu Vertex Y [cm]");
   Graph_Graph3002->GetXaxis()->SetRange(9,92);
   Graph_Graph3002->GetXaxis()->SetNdivisions(509);
   Graph_Graph3002->GetXaxis()->SetLabelFont(132);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3002->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3002->GetXaxis()->SetTitleFont(132);
   Graph_Graph3002->GetYaxis()->SetTitle("Data/Prediction");
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
   
   Double_t _fx3003[26] = {
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
   Double_t _fy3003[26] = {
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
   Double_t _felx3003[26] = {
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
   Double_t _fely3003[26] = {
   0.434355,
   0.2232524,
   0.2316708,
   0.2458009,
   0.2334714,
   0.2510318,
   0.262337,
   0.2558608,
   0.2487458,
   0.2432287,
   0.2545015,
   0.2527357,
   0.2444598,
   0.253046,
   0.2398032,
   0.2355881,
   0.2261671,
   0.2259029,
   0.2209506,
   0.2216696,
   0.197811,
   0.2018925,
   0.1789261,
   0.1810251,
   0.1783386,
   0.3594333};
   Double_t _fehx3003[26] = {
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
   Double_t _fehy3003[26] = {
   0.434355,
   0.2232524,
   0.2316708,
   0.2458009,
   0.2334714,
   0.2510318,
   0.262337,
   0.2558608,
   0.2487458,
   0.2432287,
   0.2545015,
   0.2527357,
   0.2444598,
   0.253046,
   0.2398032,
   0.2355881,
   0.2261671,
   0.2259029,
   0.2209506,
   0.2216696,
   0.197811,
   0.2018925,
   0.1789261,
   0.1810251,
   0.1783386,
   0.3594333};
   grae = new TGraphAsymmErrors(26,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,-156,156);
   Graph_Graph3003->SetMinimum(0);
   Graph_Graph3003->SetMaximum(2);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineWidth(2);
   Graph_Graph3003->SetMarkerStyle(20);
   Graph_Graph3003->GetXaxis()->SetRange(9,92);
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
   
   Double_t _fx3004[26] = {
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
   Double_t _fy3004[26] = {
   1.443057,
   0.7417075,
   0.8880017,
   0.9655711,
   0.8833974,
   0.9022918,
   0.9011744,
   0.919857,
   0.914602,
   0.8730478,
   0.8922361,
   0.7949955,
   0.7841059,
   0.7959265,
   0.7987776,
   0.86277,
   0.8389083,
   0.8285785,
   0.8345578,
   0.8230899,
   0.8771587,
   0.9424348,
   0.8741408,
   0.9194069,
   0.6651678,
   0.430747};
   Double_t _felx3004[26] = {
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
   Double_t _fely3004[26] = {
   0.8286143,
   0.1115028,
   0.07425843,
   0.06011383,
   0.05279309,
   0.05363568,
   0.05143274,
   0.05166432,
   0.05262943,
   0.05007273,
   0.05108929,
   0.04838188,
   0.04745625,
   0.04826013,
   0.04870233,
   0.04932128,
   0.04876055,
   0.04848889,
   0.04786517,
   0.04744211,
   0.04850699,
   0.05023194,
   0.05030115,
   0.05947149,
   0.07445905,
   0.430747};
   Double_t _fehx3004[26] = {
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
   Double_t _fehy3004[26] = {
   0.7149844,
   0.1082054,
   0.07425843,
   0.06011383,
   0.05279309,
   0.05363568,
   0.05143274,
   0.05166432,
   0.05262943,
   0.05007273,
   0.05108929,
   0.04838188,
   0.04745625,
   0.04826013,
   0.04870233,
   0.04932128,
   0.04876055,
   0.04848889,
   0.04786517,
   0.04744211,
   0.04850699,
   0.05023194,
   0.05030115,
   0.05947149,
   0.0728229,
   0.327189};
   grae = new TGraphAsymmErrors(26,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,-156,156);
   Graph_Graph3004->SetMinimum(0);
   Graph_Graph3004->SetMaximum(2.373846);
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
   
   TH1F *hist__3 = new TH1F("hist__3","NCpi0BDT_bnb_12_reco_nuvtxY_all",26,-130,130);

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
   canvas1->cd();
   canvas1->Modified();
   canvas1->cd();
   canvas1->SetSelected(canvas1);
}
