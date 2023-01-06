#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas5()
{
//=========Macro generated from canvas: canvas5/channel5
//=========  (Sat Oct 22 09:59:21 2022) by ROOT version 6.26/00
   TCanvas *canvas5 = new TCanvas("canvas5", "channel5",86,109,1200,900);
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
   pad1->Range(-170,-3.149156,163.3333,348.2304);
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
   hmc__13->SetBinContent(0,0.5511319);
   hmc__13->SetBinContent(1,0.9079819);
   hmc__13->SetBinContent(2,25.73953);
   hmc__13->SetBinContent(3,60.05112);
   hmc__13->SetBinContent(4,93.30107);
   hmc__13->SetBinContent(5,118.566);
   hmc__13->SetBinContent(6,123.9581);
   hmc__13->SetBinContent(7,140.5774);
   hmc__13->SetBinContent(8,145.5594);
   hmc__13->SetBinContent(9,139.9873);
   hmc__13->SetBinContent(10,153.9328);
   hmc__13->SetBinContent(11,144.8652);
   hmc__13->SetBinContent(12,149.6451);
   hmc__13->SetBinContent(13,149.8634);
   hmc__13->SetBinContent(14,157.4578);
   hmc__13->SetBinContent(15,150.4918);
   hmc__13->SetBinContent(16,148.9241);
   hmc__13->SetBinContent(17,151.0174);
   hmc__13->SetBinContent(18,154.3565);
   hmc__13->SetBinContent(19,152.7727);
   hmc__13->SetBinContent(20,143.7122);
   hmc__13->SetBinContent(21,140.7325);
   hmc__13->SetBinContent(22,132.5573);
   hmc__13->SetBinContent(23,134.65);
   hmc__13->SetBinContent(24,86.11147);
   hmc__13->SetBinContent(25,48.43766);
   hmc__13->SetBinContent(26,0.1967154);
   hmc__13->SetBinContent(27,0.7219342);
   hmc__13->SetBinError(0,0.2917282);
   hmc__13->SetBinError(1,7.341624);
   hmc__13->SetBinError(2,13.34267);
   hmc__13->SetBinError(3,31.30102);
   hmc__13->SetBinError(4,51.66533);
   hmc__13->SetBinError(5,48.41685);
   hmc__13->SetBinError(6,50.26975);
   hmc__13->SetBinError(7,54.25392);
   hmc__13->SetBinError(8,56.4021);
   hmc__13->SetBinError(9,51.20297);
   hmc__13->SetBinError(10,51.53545);
   hmc__13->SetBinError(11,54.37525);
   hmc__13->SetBinError(12,53.73335);
   hmc__13->SetBinError(13,53.85426);
   hmc__13->SetBinError(14,56.02646);
   hmc__13->SetBinError(15,50.03989);
   hmc__13->SetBinError(16,50.95358);
   hmc__13->SetBinError(17,49.30281);
   hmc__13->SetBinError(18,50.67992);
   hmc__13->SetBinError(19,52.16982);
   hmc__13->SetBinError(20,51.43398);
   hmc__13->SetBinError(21,46.25434);
   hmc__13->SetBinError(22,44.99216);
   hmc__13->SetBinError(23,41.28792);
   hmc__13->SetBinError(24,30.14394);
   hmc__13->SetBinError(25,17.13147);
   hmc__13->SetBinError(26,0.7253276);
   hmc__13->SetBinError(27,1.873564);
   hmc__13->SetMinimum(-3.149156);
   hmc__13->SetMaximum(330.6614);
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
   hs5_stack_5->SetMaximum(165.3307);
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
   hbadmatch_stack_1->SetBinContent(4,4.307742);
   hbadmatch_stack_1->SetBinContent(5,1.738497);
   hbadmatch_stack_1->SetBinContent(6,2.001596);
   hbadmatch_stack_1->SetBinContent(7,3.019155);
   hbadmatch_stack_1->SetBinContent(8,3.622299);
   hbadmatch_stack_1->SetBinContent(9,3.37481);
   hbadmatch_stack_1->SetBinContent(10,3.918137);
   hbadmatch_stack_1->SetBinContent(11,2.342702);
   hbadmatch_stack_1->SetBinContent(12,4.317305);
   hbadmatch_stack_1->SetBinContent(13,4.31523);
   hbadmatch_stack_1->SetBinContent(14,5.691183);
   hbadmatch_stack_1->SetBinContent(15,4.0118);
   hbadmatch_stack_1->SetBinContent(16,4.416291);
   hbadmatch_stack_1->SetBinContent(17,2.310398);
   hbadmatch_stack_1->SetBinContent(18,2.864663);
   hbadmatch_stack_1->SetBinContent(19,3.337173);
   hbadmatch_stack_1->SetBinContent(20,3.545218);
   hbadmatch_stack_1->SetBinContent(21,2.765146);
   hbadmatch_stack_1->SetBinContent(22,2.295468);
   hbadmatch_stack_1->SetBinContent(23,5.745906);
   hbadmatch_stack_1->SetBinContent(24,1.45533);
   hbadmatch_stack_1->SetBinContent(25,2.147067);
   hbadmatch_stack_1->SetBinError(2,0.6922431);
   hbadmatch_stack_1->SetBinError(3,0.3387718);
   hbadmatch_stack_1->SetBinError(4,2.065936);
   hbadmatch_stack_1->SetBinError(5,0.653567);
   hbadmatch_stack_1->SetBinError(6,0.6371565);
   hbadmatch_stack_1->SetBinError(7,1.010661);
   hbadmatch_stack_1->SetBinError(8,0.9821298);
   hbadmatch_stack_1->SetBinError(9,0.9251966);
   hbadmatch_stack_1->SetBinError(10,1.166326);
   hbadmatch_stack_1->SetBinError(11,0.6809013);
   hbadmatch_stack_1->SetBinError(12,1.086705);
   hbadmatch_stack_1->SetBinError(13,1.065915);
   hbadmatch_stack_1->SetBinError(14,1.28256);
   hbadmatch_stack_1->SetBinError(15,1.046511);
   hbadmatch_stack_1->SetBinError(16,1.008868);
   hbadmatch_stack_1->SetBinError(17,0.829669);
   hbadmatch_stack_1->SetBinError(18,0.889504);
   hbadmatch_stack_1->SetBinError(19,0.97979);
   hbadmatch_stack_1->SetBinError(20,1.086275);
   hbadmatch_stack_1->SetBinError(21,0.8664708);
   hbadmatch_stack_1->SetBinError(22,0.8236403);
   hbadmatch_stack_1->SetBinError(23,1.661328);
   hbadmatch_stack_1->SetBinError(24,0.5346976);
   hbadmatch_stack_1->SetBinError(25,0.8781454);
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
   houtFV_stack_4->SetBinContent(1,0.3522743);
   houtFV_stack_4->SetBinContent(2,18.59798);
   houtFV_stack_4->SetBinContent(3,17.53164);
   houtFV_stack_4->SetBinContent(4,9.178885);
   houtFV_stack_4->SetBinContent(5,5.957311);
   houtFV_stack_4->SetBinContent(6,5.099555);
   houtFV_stack_4->SetBinContent(7,5.123123);
   houtFV_stack_4->SetBinContent(8,5.032877);
   houtFV_stack_4->SetBinContent(9,7.163439);
   houtFV_stack_4->SetBinContent(10,6.885182);
   houtFV_stack_4->SetBinContent(11,7.463128);
   houtFV_stack_4->SetBinContent(12,7.522525);
   houtFV_stack_4->SetBinContent(13,3.222662);
   houtFV_stack_4->SetBinContent(14,6.580192);
   houtFV_stack_4->SetBinContent(15,4.687022);
   houtFV_stack_4->SetBinContent(16,6.131253);
   houtFV_stack_4->SetBinContent(17,6.558792);
   houtFV_stack_4->SetBinContent(18,6.64939);
   houtFV_stack_4->SetBinContent(19,5.407187);
   houtFV_stack_4->SetBinContent(20,5.471484);
   houtFV_stack_4->SetBinContent(21,8.219564);
   houtFV_stack_4->SetBinContent(22,8.147514);
   houtFV_stack_4->SetBinContent(23,5.108124);
   houtFV_stack_4->SetBinContent(24,13.0768);
   houtFV_stack_4->SetBinContent(25,27.70498);
   houtFV_stack_4->SetBinError(0,0.1967154);
   houtFV_stack_4->SetBinError(1,0.3522743);
   houtFV_stack_4->SetBinError(2,2.0958);
   houtFV_stack_4->SetBinError(3,2.248479);
   houtFV_stack_4->SetBinError(4,1.498656);
   houtFV_stack_4->SetBinError(5,1.227096);
   houtFV_stack_4->SetBinError(6,1.130175);
   houtFV_stack_4->SetBinError(7,1.079258);
   houtFV_stack_4->SetBinError(8,1.145898);
   houtFV_stack_4->SetBinError(9,1.394517);
   houtFV_stack_4->SetBinError(10,1.38123);
   houtFV_stack_4->SetBinError(11,1.427689);
   houtFV_stack_4->SetBinError(12,1.34536);
   houtFV_stack_4->SetBinError(13,0.8786154);
   houtFV_stack_4->SetBinError(14,1.348253);
   houtFV_stack_4->SetBinError(15,1.041542);
   houtFV_stack_4->SetBinError(16,1.239137);
   houtFV_stack_4->SetBinError(17,1.210385);
   houtFV_stack_4->SetBinError(18,1.274831);
   houtFV_stack_4->SetBinError(19,1.311899);
   houtFV_stack_4->SetBinError(20,1.163913);
   houtFV_stack_4->SetBinError(21,1.387608);
   houtFV_stack_4->SetBinError(22,1.480903);
   houtFV_stack_4->SetBinError(23,1.089712);
   houtFV_stack_4->SetBinError(24,1.804257);
   houtFV_stack_4->SetBinError(25,2.581847);
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
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.3277268);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.03556623);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.04131896);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.2323013);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.1266383);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.3782692);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.2376614);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.1540301);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.1244434);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.4284354);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.2050988);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.1228347);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.4058057);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.2520512);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.2081491);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.5114163);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.6370983);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.2582717);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.0681081);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.3095334);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.2103861);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.2536107);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1565291);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.02893407);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.03131428);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.1973617);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1019268);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.194581);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1244508);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1049392);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.06315886);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.2235965);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.08025527);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.07310495);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.170969);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.09366115);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.1534767);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.235457);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.3122368);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1570327);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.04498579);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.1836379);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.1960365);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.1793298);
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
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.4440309);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2268896);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5945877);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.4925772);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.8771161);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.6146055);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.6793662);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4829879);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.6556673);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.7001361);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.5473611);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.8664501);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.2974581);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.7960932);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.6543239);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.4152786);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.5305258);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.3886869);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.4051622);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.7042076);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.2356336);
   hNCpi0inFVqe_stack_6->SetBinContent(24,0.1923412);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.01881452);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1847429);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1180417);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2140544);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.1502733);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2601569);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.2102447);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2552825);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1450688);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.3229015);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.2329065);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.2475593);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.2549195);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.09658345);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.3048201);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.2085184);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.1230154);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2073136);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.1478927);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.1835172);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.2515658);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.07601458);
   hNCpi0inFVqe_stack_6->SetBinError(24,0.06120907);
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
   hNCpi0inFVres_stack_7->SetBinContent(0,0.3127579);
   hNCpi0inFVres_stack_7->SetBinContent(1,0.01881452);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.23195);
   hNCpi0inFVres_stack_7->SetBinContent(3,14.27224);
   hNCpi0inFVres_stack_7->SetBinContent(4,31.81882);
   hNCpi0inFVres_stack_7->SetBinContent(5,42.56655);
   hNCpi0inFVres_stack_7->SetBinContent(6,46.29404);
   hNCpi0inFVres_stack_7->SetBinContent(7,55.51392);
   hNCpi0inFVres_stack_7->SetBinContent(8,56.06545);
   hNCpi0inFVres_stack_7->SetBinContent(9,51.13566);
   hNCpi0inFVres_stack_7->SetBinContent(10,51.769);
   hNCpi0inFVres_stack_7->SetBinContent(11,53.8608);
   hNCpi0inFVres_stack_7->SetBinContent(12,57.06441);
   hNCpi0inFVres_stack_7->SetBinContent(13,56.19794);
   hNCpi0inFVres_stack_7->SetBinContent(14,52.06887);
   hNCpi0inFVres_stack_7->SetBinContent(15,54.22058);
   hNCpi0inFVres_stack_7->SetBinContent(16,51.27995);
   hNCpi0inFVres_stack_7->SetBinContent(17,48.33929);
   hNCpi0inFVres_stack_7->SetBinContent(18,47.06154);
   hNCpi0inFVres_stack_7->SetBinContent(19,47.9843);
   hNCpi0inFVres_stack_7->SetBinContent(20,52.96306);
   hNCpi0inFVres_stack_7->SetBinContent(21,41.16439);
   hNCpi0inFVres_stack_7->SetBinContent(22,41.97757);
   hNCpi0inFVres_stack_7->SetBinContent(23,37.84547);
   hNCpi0inFVres_stack_7->SetBinContent(24,20.62193);
   hNCpi0inFVres_stack_7->SetBinContent(25,2.641703);
   hNCpi0inFVres_stack_7->SetBinContent(27,0.3817565);
   hNCpi0inFVres_stack_7->SetBinError(0,0.2132388);
   hNCpi0inFVres_stack_7->SetBinError(1,0.01881452);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4483026);
   hNCpi0inFVres_stack_7->SetBinError(3,1.029892);
   hNCpi0inFVres_stack_7->SetBinError(4,1.546445);
   hNCpi0inFVres_stack_7->SetBinError(5,1.913442);
   hNCpi0inFVres_stack_7->SetBinError(6,2.053406);
   hNCpi0inFVres_stack_7->SetBinError(7,2.240221);
   hNCpi0inFVres_stack_7->SetBinError(8,2.371783);
   hNCpi0inFVres_stack_7->SetBinError(9,2.175347);
   hNCpi0inFVres_stack_7->SetBinError(10,2.194795);
   hNCpi0inFVres_stack_7->SetBinError(11,2.146419);
   hNCpi0inFVres_stack_7->SetBinError(12,2.367813);
   hNCpi0inFVres_stack_7->SetBinError(13,2.387114);
   hNCpi0inFVres_stack_7->SetBinError(14,2.274751);
   hNCpi0inFVres_stack_7->SetBinError(15,2.278221);
   hNCpi0inFVres_stack_7->SetBinError(16,2.328449);
   hNCpi0inFVres_stack_7->SetBinError(17,2.093);
   hNCpi0inFVres_stack_7->SetBinError(18,2.00038);
   hNCpi0inFVres_stack_7->SetBinError(19,1.994285);
   hNCpi0inFVres_stack_7->SetBinError(20,2.36862);
   hNCpi0inFVres_stack_7->SetBinError(21,1.882549);
   hNCpi0inFVres_stack_7->SetBinError(22,1.912404);
   hNCpi0inFVres_stack_7->SetBinError(23,2.005971);
   hNCpi0inFVres_stack_7->SetBinError(24,1.315765);
   hNCpi0inFVres_stack_7->SetBinError(25,0.4585968);
   hNCpi0inFVres_stack_7->SetBinError(27,0.1891334);
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
   hNCpi0inFVdis_stack_8->SetBinContent(0,0.04165863);
   hNCpi0inFVdis_stack_8->SetBinContent(2,0.3146082);
   hNCpi0inFVdis_stack_8->SetBinContent(3,2.699283);
   hNCpi0inFVdis_stack_8->SetBinContent(4,6.898851);
   hNCpi0inFVdis_stack_8->SetBinContent(5,10.5945);
   hNCpi0inFVdis_stack_8->SetBinContent(6,10.92876);
   hNCpi0inFVdis_stack_8->SetBinContent(7,12.58479);
   hNCpi0inFVdis_stack_8->SetBinContent(8,11.81926);
   hNCpi0inFVdis_stack_8->SetBinContent(9,13.50303);
   hNCpi0inFVdis_stack_8->SetBinContent(10,12.39994);
   hNCpi0inFVdis_stack_8->SetBinContent(11,10.73365);
   hNCpi0inFVdis_stack_8->SetBinContent(12,13.34249);
   hNCpi0inFVdis_stack_8->SetBinContent(13,11.78486);
   hNCpi0inFVdis_stack_8->SetBinContent(14,15.10589);
   hNCpi0inFVdis_stack_8->SetBinContent(15,12.3101);
   hNCpi0inFVdis_stack_8->SetBinContent(16,11.95762);
   hNCpi0inFVdis_stack_8->SetBinContent(17,11.6226);
   hNCpi0inFVdis_stack_8->SetBinContent(18,12.24494);
   hNCpi0inFVdis_stack_8->SetBinContent(19,10.61365);
   hNCpi0inFVdis_stack_8->SetBinContent(20,10.73143);
   hNCpi0inFVdis_stack_8->SetBinContent(21,10.17387);
   hNCpi0inFVdis_stack_8->SetBinContent(22,8.955265);
   hNCpi0inFVdis_stack_8->SetBinContent(23,9.256701);
   hNCpi0inFVdis_stack_8->SetBinContent(24,3.908399);
   hNCpi0inFVdis_stack_8->SetBinContent(25,0.9725268);
   hNCpi0inFVdis_stack_8->SetBinError(0,0.03062039);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.09836363);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4672041);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.76745);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.249903);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.071794);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.20279);
   hNCpi0inFVdis_stack_8->SetBinError(8,1.15301);
   hNCpi0inFVdis_stack_8->SetBinError(9,1.342442);
   hNCpi0inFVdis_stack_8->SetBinError(10,1.271056);
   hNCpi0inFVdis_stack_8->SetBinError(11,1.0456);
   hNCpi0inFVdis_stack_8->SetBinError(12,1.220654);
   hNCpi0inFVdis_stack_8->SetBinError(13,1.096264);
   hNCpi0inFVdis_stack_8->SetBinError(14,1.403084);
   hNCpi0inFVdis_stack_8->SetBinError(15,1.118602);
   hNCpi0inFVdis_stack_8->SetBinError(16,1.251899);
   hNCpi0inFVdis_stack_8->SetBinError(17,1.221712);
   hNCpi0inFVdis_stack_8->SetBinError(18,1.206372);
   hNCpi0inFVdis_stack_8->SetBinError(19,1.115624);
   hNCpi0inFVdis_stack_8->SetBinError(20,1.194621);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.087071);
   hNCpi0inFVdis_stack_8->SetBinError(22,1.009136);
   hNCpi0inFVdis_stack_8->SetBinError(23,1.184286);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.6487429);
   hNCpi0inFVdis_stack_8->SetBinError(25,0.329878);
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
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(6,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.08404593);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1287352);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.04222719);
   hNCpi0inFVmec_stack_9->SetBinContent(11,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(12,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.03347047);
   hNCpi0inFVmec_stack_9->SetBinContent(15,0.03704298);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.1500435);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(19,0.05468537);
   hNCpi0inFVmec_stack_9->SetBinContent(20,0.0341084);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinContent(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(23,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(24,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(6,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.06816273);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1115193);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.04222718);
   hNCpi0inFVmec_stack_9->SetBinError(11,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(12,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.0202701);
   hNCpi0inFVmec_stack_9->SetBinError(15,0.02619662);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.1330695);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(19,0.03157261);
   hNCpi0inFVmec_stack_9->SetBinError(20,0.02419538);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.1277091);
   hNCpi0inFVmec_stack_9->SetBinError(22,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(23,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(24,0.01822846);
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
   hNCinFV_stack_11->SetBinContent(2,0.3517458);
   hNCinFV_stack_11->SetBinContent(3,4.110776);
   hNCinFV_stack_11->SetBinContent(4,7.981375);
   hNCinFV_stack_11->SetBinContent(5,11.09955);
   hNCinFV_stack_11->SetBinContent(6,11.26403);
   hNCinFV_stack_11->SetBinContent(7,15.84723);
   hNCinFV_stack_11->SetBinContent(8,13.21447);
   hNCinFV_stack_11->SetBinContent(9,13.78508);
   hNCinFV_stack_11->SetBinContent(10,16.72762);
   hNCinFV_stack_11->SetBinContent(11,12.30809);
   hNCinFV_stack_11->SetBinContent(12,14.53411);
   hNCinFV_stack_11->SetBinContent(13,13.30251);
   hNCinFV_stack_11->SetBinContent(14,15.36615);
   hNCinFV_stack_11->SetBinContent(15,15.93051);
   hNCinFV_stack_11->SetBinContent(16,12.08845);
   hNCinFV_stack_11->SetBinContent(17,18.45303);
   hNCinFV_stack_11->SetBinContent(18,16.7974);
   hNCinFV_stack_11->SetBinContent(19,13.9991);
   hNCinFV_stack_11->SetBinContent(20,12.95558);
   hNCinFV_stack_11->SetBinContent(21,15.66573);
   hNCinFV_stack_11->SetBinContent(22,11.92992);
   hNCinFV_stack_11->SetBinContent(23,7.533918);
   hNCinFV_stack_11->SetBinContent(24,6.590693);
   hNCinFV_stack_11->SetBinContent(25,1.041186);
   hNCinFV_stack_11->SetBinContent(27,0.3401776);
   hNCinFV_stack_11->SetBinError(1,0.1967154);
   hNCinFV_stack_11->SetBinError(2,0.2575779);
   hNCinFV_stack_11->SetBinError(3,0.9483113);
   hNCinFV_stack_11->SetBinError(4,1.457566);
   hNCinFV_stack_11->SetBinError(5,1.763808);
   hNCinFV_stack_11->SetBinError(6,1.850547);
   hNCinFV_stack_11->SetBinError(7,2.218393);
   hNCinFV_stack_11->SetBinError(8,2.044555);
   hNCinFV_stack_11->SetBinError(9,2.048971);
   hNCinFV_stack_11->SetBinError(10,2.461189);
   hNCinFV_stack_11->SetBinError(11,1.895362);
   hNCinFV_stack_11->SetBinError(12,2.022072);
   hNCinFV_stack_11->SetBinError(13,2.121982);
   hNCinFV_stack_11->SetBinError(14,2.356322);
   hNCinFV_stack_11->SetBinError(15,2.236805);
   hNCinFV_stack_11->SetBinError(16,1.813095);
   hNCinFV_stack_11->SetBinError(17,2.395682);
   hNCinFV_stack_11->SetBinError(18,2.264187);
   hNCinFV_stack_11->SetBinError(19,2.021073);
   hNCinFV_stack_11->SetBinError(20,2.096053);
   hNCinFV_stack_11->SetBinError(21,2.176329);
   hNCinFV_stack_11->SetBinError(22,1.918695);
   hNCinFV_stack_11->SetBinError(23,1.40788);
   hNCinFV_stack_11->SetBinError(24,1.302529);
   hNCinFV_stack_11->SetBinError(25,0.4341163);
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
   hmcerror__14->SetBinContent(0,0.5511319);
   hmcerror__14->SetBinContent(1,0.9079819);
   hmcerror__14->SetBinContent(2,25.73953);
   hmcerror__14->SetBinContent(3,60.05112);
   hmcerror__14->SetBinContent(4,93.30107);
   hmcerror__14->SetBinContent(5,118.566);
   hmcerror__14->SetBinContent(6,123.9581);
   hmcerror__14->SetBinContent(7,140.5774);
   hmcerror__14->SetBinContent(8,145.5594);
   hmcerror__14->SetBinContent(9,139.9873);
   hmcerror__14->SetBinContent(10,153.9328);
   hmcerror__14->SetBinContent(11,144.8652);
   hmcerror__14->SetBinContent(12,149.6451);
   hmcerror__14->SetBinContent(13,149.8634);
   hmcerror__14->SetBinContent(14,157.4578);
   hmcerror__14->SetBinContent(15,150.4918);
   hmcerror__14->SetBinContent(16,148.9241);
   hmcerror__14->SetBinContent(17,151.0174);
   hmcerror__14->SetBinContent(18,154.3565);
   hmcerror__14->SetBinContent(19,152.7727);
   hmcerror__14->SetBinContent(20,143.7122);
   hmcerror__14->SetBinContent(21,140.7325);
   hmcerror__14->SetBinContent(22,132.5573);
   hmcerror__14->SetBinContent(23,134.65);
   hmcerror__14->SetBinContent(24,86.11147);
   hmcerror__14->SetBinContent(25,48.43766);
   hmcerror__14->SetBinContent(26,0.1967154);
   hmcerror__14->SetBinContent(27,0.7219342);
   hmcerror__14->SetBinError(0,0.2917282);
   hmcerror__14->SetBinError(1,7.341624);
   hmcerror__14->SetBinError(2,13.34267);
   hmcerror__14->SetBinError(3,31.30102);
   hmcerror__14->SetBinError(4,51.66533);
   hmcerror__14->SetBinError(5,48.41685);
   hmcerror__14->SetBinError(6,50.26975);
   hmcerror__14->SetBinError(7,54.25392);
   hmcerror__14->SetBinError(8,56.4021);
   hmcerror__14->SetBinError(9,51.20297);
   hmcerror__14->SetBinError(10,51.53545);
   hmcerror__14->SetBinError(11,54.37525);
   hmcerror__14->SetBinError(12,53.73335);
   hmcerror__14->SetBinError(13,53.85426);
   hmcerror__14->SetBinError(14,56.02646);
   hmcerror__14->SetBinError(15,50.03989);
   hmcerror__14->SetBinError(16,50.95358);
   hmcerror__14->SetBinError(17,49.30281);
   hmcerror__14->SetBinError(18,50.67992);
   hmcerror__14->SetBinError(19,52.16982);
   hmcerror__14->SetBinError(20,51.43398);
   hmcerror__14->SetBinError(21,46.25434);
   hmcerror__14->SetBinError(22,44.99216);
   hmcerror__14->SetBinError(23,41.28792);
   hmcerror__14->SetBinError(24,30.14394);
   hmcerror__14->SetBinError(25,17.13147);
   hmcerror__14->SetBinError(26,0.7253276);
   hmcerror__14->SetBinError(27,1.873564);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.28","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=11.4/26","");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 75.9","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 202.9","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  5.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  11.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  1017.0","F");

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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  235.5","F");

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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.9","F");

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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 283.1","F");

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
   8.085651,
   0.5183726,
   0.5212396,
   0.5537486,
   0.4083536,
   0.4055381,
   0.3859363,
   0.3874852,
   0.3657686,
   0.334792,
   0.3753507,
   0.3590719,
   0.3593556,
   0.3558189,
   0.332509,
   0.3421446,
   0.3264711,
   0.3283303,
   0.3414865,
   0.3578957,
   0.3286685,
   0.3394167,
   0.3066314,
   0.3500572,
   0.3536808,
   3.687194};
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
   8.085651,
   0.5183726,
   0.5212396,
   0.5537486,
   0.4083536,
   0.4055381,
   0.3859363,
   0.3874852,
   0.3657686,
   0.334792,
   0.3753507,
   0.3590719,
   0.3593556,
   0.3558189,
   0.332509,
   0.3421446,
   0.3264711,
   0.3283303,
   0.3414865,
   0.3578957,
   0.3286685,
   0.3394167,
   0.3066314,
   0.3500572,
   0.3536808,
   3.687194};
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
   0.9246413,
   0.2598941,
   0.3516409,
   0.4154222,
   0.3594614,
   0.3554284,
   0.3638246,
   0.3446274,
   0.3410902,
   0.2984533,
   0.3388662,
   0.3262938,
   0.3299609,
   0.3178292,
   0.3148525,
   0.3129617,
   0.2976555,
   0.2939607,
   0.3109262,
   0.3212993,
   0.3021478,
   0.3168527,
   0.2648236,
   0.292156,
   0.2300134,
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
   0.9246413,
   0.2598941,
   0.3516409,
   0.4154222,
   0.3594614,
   0.3554284,
   0.3638246,
   0.3446274,
   0.3410902,
   0.2984533,
   0.3388662,
   0.3262938,
   0.3299609,
   0.3178292,
   0.3148525,
   0.3129617,
   0.2976555,
   0.2939607,
   0.3109262,
   0.3212993,
   0.3021478,
   0.3168527,
   0.2648236,
   0.292156,
   0.2300134,
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
   1.101344,
   0.9712687,
   0.9658437,
   1.071799,
   0.9108849,
   0.9680689,
   0.8393953,
   0.9411966,
   0.9143685,
   0.8964954,
   0.8490654,
   0.6682478,
   0.6806197,
   0.7367053,
   0.6777777,
   0.7923499,
   0.9071802,
   0.8357275,
   0.8640286,
   0.8419605,
   0.9876892,
   1.018427,
   0.8466394,
   0.9406413,
   0.7845136,
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
   1.101344,
   0.1999803,
   0.1289668,
   0.1084789,
   0.08764994,
   0.08837219,
   0.0772726,
   0.08041185,
   0.08081952,
   0.07631475,
   0.07655764,
   0.0676347,
   0.0673914,
   0.06840137,
   0.06710999,
   0.07294172,
   0.07750563,
   0.0735817,
   0.07520404,
   0.07654186,
   0.08377471,
   0.08765228,
   0.07929504,
   0.1059545,
   0.1300909,
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
   1.497508,
   0.1918217,
   0.1255847,
   0.1063225,
   0.08764994,
   0.08837219,
   0.0772726,
   0.08041185,
   0.08081952,
   0.07631475,
   0.07655764,
   0.06629018,
   0.0673914,
   0.06840137,
   0.06710999,
   0.07294172,
   0.07750563,
   0.0735817,
   0.07520404,
   0.07654186,
   0.08377471,
   0.08765228,
   0.07929504,
   0.1036111,
   0.1258422,
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
   canvas5->cd();
   canvas5->Modified();
   canvas5->cd();
   canvas5->SetSelected(canvas5);
}
