#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas2()
{
//=========Macro generated from canvas: canvas2/channel2
//=========  (Tue May 31 22:10:18 2022) by ROOT version 6.26/00
   TCanvas *canvas2 = new TCanvas("canvas2", "channel2",164,172,1200,900);
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
   pad1->Range(-40,-100.98,293.3333,10634.79);
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
   
   TH1F *hmc__4 = new TH1F("hmc__4","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmc__4->SetBinContent(0,555.0682);
   hmc__4->SetBinContent(1,2927.954);
   hmc__4->SetBinContent(2,4186.158);
   hmc__4->SetBinContent(3,4395.423);
   hmc__4->SetBinContent(4,4464.174);
   hmc__4->SetBinContent(5,4603.277);
   hmc__4->SetBinContent(6,4734.566);
   hmc__4->SetBinContent(7,4810.738);
   hmc__4->SetBinContent(8,4880.346);
   hmc__4->SetBinContent(9,4849.859);
   hmc__4->SetBinContent(10,4981.498);
   hmc__4->SetBinContent(11,4951.241);
   hmc__4->SetBinContent(12,4949.726);
   hmc__4->SetBinContent(13,4996.113);
   hmc__4->SetBinContent(14,4885.074);
   hmc__4->SetBinContent(15,4949.392);
   hmc__4->SetBinContent(16,4935.835);
   hmc__4->SetBinContent(17,5014.455);
   hmc__4->SetBinContent(18,4891.855);
   hmc__4->SetBinContent(19,5047.527);
   hmc__4->SetBinContent(20,4912.049);
   hmc__4->SetBinContent(21,4920.651);
   hmc__4->SetBinContent(22,4919.102);
   hmc__4->SetBinContent(23,4972.232);
   hmc__4->SetBinContent(24,4723.554);
   hmc__4->SetBinContent(25,4452.138);
   hmc__4->SetBinContent(26,1714.166);
   hmc__4->SetBinContent(27,28.01263);
   hmc__4->SetBinError(0,14.73564);
   hmc__4->SetBinError(1,522.5558);
   hmc__4->SetBinError(2,705.2318);
   hmc__4->SetBinError(3,765.2539);
   hmc__4->SetBinError(4,767.4083);
   hmc__4->SetBinError(5,827.208);
   hmc__4->SetBinError(6,841.5407);
   hmc__4->SetBinError(7,833.9129);
   hmc__4->SetBinError(8,863.4533);
   hmc__4->SetBinError(9,826.5448);
   hmc__4->SetBinError(10,835.7601);
   hmc__4->SetBinError(11,822.4068);
   hmc__4->SetBinError(12,812.4559);
   hmc__4->SetBinError(13,802.7843);
   hmc__4->SetBinError(14,805.6705);
   hmc__4->SetBinError(15,818.0396);
   hmc__4->SetBinError(16,802.4181);
   hmc__4->SetBinError(17,794.4948);
   hmc__4->SetBinError(18,822.1447);
   hmc__4->SetBinError(19,830.6083);
   hmc__4->SetBinError(20,760.9934);
   hmc__4->SetBinError(21,777.869);
   hmc__4->SetBinError(22,768.723);
   hmc__4->SetBinError(23,840.1053);
   hmc__4->SetBinError(24,778.9214);
   hmc__4->SetBinError(25,806.5895);
   hmc__4->SetBinError(26,396.3504);
   hmc__4->SetBinError(27,10.75309);
   hmc__4->SetMinimum(-100.98);
   hmc__4->SetMaximum(10098);
   hmc__4->SetEntries(104733.2);
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
   
   TH1F *hs2_stack_2 = new TH1F("hs2_stack_2","",26,0,260);
   hs2_stack_2->SetMinimum(0);
   hs2_stack_2->SetMaximum(5299.903);
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
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hbadmatch_stack_1->SetBinContent(0,73.29189);
   hbadmatch_stack_1->SetBinContent(1,30.01906);
   hbadmatch_stack_1->SetBinContent(2,37.98352);
   hbadmatch_stack_1->SetBinContent(3,38.93954);
   hbadmatch_stack_1->SetBinContent(4,29.32605);
   hbadmatch_stack_1->SetBinContent(5,34.91451);
   hbadmatch_stack_1->SetBinContent(6,38.44349);
   hbadmatch_stack_1->SetBinContent(7,45.94802);
   hbadmatch_stack_1->SetBinContent(8,41.7235);
   hbadmatch_stack_1->SetBinContent(9,53.84632);
   hbadmatch_stack_1->SetBinContent(10,54.78476);
   hbadmatch_stack_1->SetBinContent(11,58.07638);
   hbadmatch_stack_1->SetBinContent(12,48.04345);
   hbadmatch_stack_1->SetBinContent(13,54.74069);
   hbadmatch_stack_1->SetBinContent(14,62.36736);
   hbadmatch_stack_1->SetBinContent(15,57.72977);
   hbadmatch_stack_1->SetBinContent(16,62.28382);
   hbadmatch_stack_1->SetBinContent(17,60.20246);
   hbadmatch_stack_1->SetBinContent(18,65.1276);
   hbadmatch_stack_1->SetBinContent(19,60.93672);
   hbadmatch_stack_1->SetBinContent(20,73.07651);
   hbadmatch_stack_1->SetBinContent(21,59.95805);
   hbadmatch_stack_1->SetBinContent(22,58.07474);
   hbadmatch_stack_1->SetBinContent(23,70.66035);
   hbadmatch_stack_1->SetBinContent(24,61.90139);
   hbadmatch_stack_1->SetBinContent(25,53.21885);
   hbadmatch_stack_1->SetBinContent(26,47.85631);
   hbadmatch_stack_1->SetBinContent(27,1.380324);
   hbadmatch_stack_1->SetBinError(0,5.262825);
   hbadmatch_stack_1->SetBinError(1,4.066618);
   hbadmatch_stack_1->SetBinError(2,5.297189);
   hbadmatch_stack_1->SetBinError(3,4.331836);
   hbadmatch_stack_1->SetBinError(4,2.974758);
   hbadmatch_stack_1->SetBinError(5,4.8538);
   hbadmatch_stack_1->SetBinError(6,3.460907);
   hbadmatch_stack_1->SetBinError(7,4.555583);
   hbadmatch_stack_1->SetBinError(8,3.489005);
   hbadmatch_stack_1->SetBinError(9,4.342722);
   hbadmatch_stack_1->SetBinError(10,3.882504);
   hbadmatch_stack_1->SetBinError(11,7.319106);
   hbadmatch_stack_1->SetBinError(12,3.705949);
   hbadmatch_stack_1->SetBinError(13,4.187053);
   hbadmatch_stack_1->SetBinError(14,5.251606);
   hbadmatch_stack_1->SetBinError(15,5.291675);
   hbadmatch_stack_1->SetBinError(16,4.417519);
   hbadmatch_stack_1->SetBinError(17,4.661377);
   hbadmatch_stack_1->SetBinError(18,5.397625);
   hbadmatch_stack_1->SetBinError(19,4.483031);
   hbadmatch_stack_1->SetBinError(20,4.910936);
   hbadmatch_stack_1->SetBinError(21,4.092885);
   hbadmatch_stack_1->SetBinError(22,4.289037);
   hbadmatch_stack_1->SetBinError(23,6.965166);
   hbadmatch_stack_1->SetBinError(24,4.927393);
   hbadmatch_stack_1->SetBinError(25,4.170473);
   hbadmatch_stack_1->SetBinError(26,5.043808);
   hbadmatch_stack_1->SetBinError(27,0.5775102);
   hbadmatch_stack_1->SetEntries(5481);

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
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hext_stack_2->SetBinContent(0,217.3251);
   hext_stack_2->SetBinContent(1,137.0533);
   hext_stack_2->SetBinContent(2,162.1305);
   hext_stack_2->SetBinContent(3,168.3435);
   hext_stack_2->SetBinContent(4,164.0273);
   hext_stack_2->SetBinContent(5,220.1403);
   hext_stack_2->SetBinContent(6,200.6888);
   hext_stack_2->SetBinContent(7,212.8519);
   hext_stack_2->SetBinContent(8,211.7216);
   hext_stack_2->SetBinContent(9,210.7109);
   hext_stack_2->SetBinContent(10,246.5444);
   hext_stack_2->SetBinContent(11,270.3786);
   hext_stack_2->SetBinContent(12,238.2697);
   hext_stack_2->SetBinContent(13,260.8354);
   hext_stack_2->SetBinContent(14,238.0733);
   hext_stack_2->SetBinContent(15,247.9689);
   hext_stack_2->SetBinContent(16,268.8286);
   hext_stack_2->SetBinContent(17,299.7039);
   hext_stack_2->SetBinContent(18,274.0525);
   hext_stack_2->SetBinContent(19,270.1927);
   hext_stack_2->SetBinContent(20,290.5425);
   hext_stack_2->SetBinContent(21,318.2417);
   hext_stack_2->SetBinContent(22,323.9204);
   hext_stack_2->SetBinContent(23,341.6781);
   hext_stack_2->SetBinContent(24,306.9305);
   hext_stack_2->SetBinContent(25,295.1723);
   hext_stack_2->SetBinContent(26,182.2555);
   hext_stack_2->SetBinContent(27,10.75305);
   hext_stack_2->SetBinError(0,9.330222);
   hext_stack_2->SetBinError(1,7.91888);
   hext_stack_2->SetBinError(2,8.653371);
   hext_stack_2->SetBinError(3,9.030508);
   hext_stack_2->SetBinError(4,8.495459);
   hext_stack_2->SetBinError(5,10.2613);
   hext_stack_2->SetBinError(6,9.703939);
   hext_stack_2->SetBinError(7,10.03268);
   hext_stack_2->SetBinError(8,9.934146);
   hext_stack_2->SetBinError(9,9.878042);
   hext_stack_2->SetBinError(10,10.75644);
   hext_stack_2->SetBinError(11,11.292);
   hext_stack_2->SetBinError(12,10.44078);
   hext_stack_2->SetBinError(13,11.05451);
   hext_stack_2->SetBinError(14,10.42841);
   hext_stack_2->SetBinError(15,10.80633);
   hext_stack_2->SetBinError(16,11.0594);
   hext_stack_2->SetBinError(17,11.86023);
   hext_stack_2->SetBinError(18,11.1626);
   hext_stack_2->SetBinError(19,11.19518);
   hext_stack_2->SetBinError(20,11.62686);
   hext_stack_2->SetBinError(21,12.36724);
   hext_stack_2->SetBinError(22,12.33889);
   hext_stack_2->SetBinError(23,12.83986);
   hext_stack_2->SetBinError(24,12.00493);
   hext_stack_2->SetBinError(25,11.77515);
   hext_stack_2->SetBinError(26,9.374908);
   hext_stack_2->SetBinError(27,2.238359);
   hext_stack_2->SetEntries(15374);

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
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hdirt_stack_3->SetBinContent(0,24.8215);
   hdirt_stack_3->SetBinContent(1,46.00863);
   hdirt_stack_3->SetBinContent(2,35.55278);
   hdirt_stack_3->SetBinContent(3,34.65538);
   hdirt_stack_3->SetBinContent(4,34.02153);
   hdirt_stack_3->SetBinContent(5,33.59598);
   hdirt_stack_3->SetBinContent(6,31.89033);
   hdirt_stack_3->SetBinContent(7,27.41262);
   hdirt_stack_3->SetBinContent(8,39.72818);
   hdirt_stack_3->SetBinContent(9,32.38533);
   hdirt_stack_3->SetBinContent(10,39.34687);
   hdirt_stack_3->SetBinContent(11,35.19778);
   hdirt_stack_3->SetBinContent(12,28.3899);
   hdirt_stack_3->SetBinContent(13,30.20003);
   hdirt_stack_3->SetBinContent(14,32.96951);
   hdirt_stack_3->SetBinContent(15,40.24049);
   hdirt_stack_3->SetBinContent(16,34.17569);
   hdirt_stack_3->SetBinContent(17,38.7806);
   hdirt_stack_3->SetBinContent(18,38.95016);
   hdirt_stack_3->SetBinContent(19,40.06266);
   hdirt_stack_3->SetBinContent(20,39.23686);
   hdirt_stack_3->SetBinContent(21,47.91984);
   hdirt_stack_3->SetBinContent(22,34.61325);
   hdirt_stack_3->SetBinContent(23,52.46836);
   hdirt_stack_3->SetBinContent(24,47.44039);
   hdirt_stack_3->SetBinContent(25,47.12634);
   hdirt_stack_3->SetBinContent(26,38.60998);
   hdirt_stack_3->SetBinContent(27,2.822244);
   hdirt_stack_3->SetBinError(0,2.912814);
   hdirt_stack_3->SetBinError(1,3.516095);
   hdirt_stack_3->SetBinError(2,3.0963);
   hdirt_stack_3->SetBinError(3,3.235922);
   hdirt_stack_3->SetBinError(4,3.117814);
   hdirt_stack_3->SetBinError(5,3.20875);
   hdirt_stack_3->SetBinError(6,3.022633);
   hdirt_stack_3->SetBinError(7,2.770814);
   hdirt_stack_3->SetBinError(8,4.123439);
   hdirt_stack_3->SetBinError(9,2.992656);
   hdirt_stack_3->SetBinError(10,4.384838);
   hdirt_stack_3->SetBinError(11,3.401267);
   hdirt_stack_3->SetBinError(12,2.80612);
   hdirt_stack_3->SetBinError(13,3.26624);
   hdirt_stack_3->SetBinError(14,3.938935);
   hdirt_stack_3->SetBinError(15,4.757155);
   hdirt_stack_3->SetBinError(16,3.752441);
   hdirt_stack_3->SetBinError(17,3.56266);
   hdirt_stack_3->SetBinError(18,3.903106);
   hdirt_stack_3->SetBinError(19,4.289461);
   hdirt_stack_3->SetBinError(20,4.257107);
   hdirt_stack_3->SetBinError(21,4.475136);
   hdirt_stack_3->SetBinError(22,3.132325);
   hdirt_stack_3->SetBinError(23,3.811708);
   hdirt_stack_3->SetBinError(24,4.654531);
   hdirt_stack_3->SetBinError(25,5.288707);
   hdirt_stack_3->SetBinError(26,5.472243);
   hdirt_stack_3->SetBinError(27,0.8767328);
   hdirt_stack_3->SetEntries(4150);

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
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   houtFV_stack_4->SetBinContent(0,28.14434);
   houtFV_stack_4->SetBinContent(1,740.1976);
   houtFV_stack_4->SetBinContent(2,163.2674);
   houtFV_stack_4->SetBinContent(3,159.6001);
   houtFV_stack_4->SetBinContent(4,137.0134);
   houtFV_stack_4->SetBinContent(5,155.134);
   houtFV_stack_4->SetBinContent(6,157.1697);
   houtFV_stack_4->SetBinContent(7,145.0414);
   houtFV_stack_4->SetBinContent(8,146.1447);
   houtFV_stack_4->SetBinContent(9,137.785);
   houtFV_stack_4->SetBinContent(10,136.1406);
   houtFV_stack_4->SetBinContent(11,126.6401);
   houtFV_stack_4->SetBinContent(12,137.3292);
   houtFV_stack_4->SetBinContent(13,134.842);
   houtFV_stack_4->SetBinContent(14,133.551);
   houtFV_stack_4->SetBinContent(15,133.951);
   houtFV_stack_4->SetBinContent(16,123.3716);
   houtFV_stack_4->SetBinContent(17,134.523);
   houtFV_stack_4->SetBinContent(18,134.1072);
   houtFV_stack_4->SetBinContent(19,123.4052);
   houtFV_stack_4->SetBinContent(20,133.5481);
   houtFV_stack_4->SetBinContent(21,118.0515);
   houtFV_stack_4->SetBinContent(22,127.3532);
   houtFV_stack_4->SetBinContent(23,131.9927);
   houtFV_stack_4->SetBinContent(24,150.4655);
   houtFV_stack_4->SetBinContent(25,172.0093);
   houtFV_stack_4->SetBinContent(26,345.9788);
   houtFV_stack_4->SetBinContent(27,5.826196);
   houtFV_stack_4->SetBinError(0,2.983386);
   houtFV_stack_4->SetBinError(1,16.31179);
   houtFV_stack_4->SetBinError(2,7.283806);
   houtFV_stack_4->SetBinError(3,7.762398);
   houtFV_stack_4->SetBinError(4,6.309116);
   houtFV_stack_4->SetBinError(5,7.497803);
   houtFV_stack_4->SetBinError(6,7.883794);
   houtFV_stack_4->SetBinError(7,7.078444);
   houtFV_stack_4->SetBinError(8,6.925917);
   houtFV_stack_4->SetBinError(9,6.808668);
   houtFV_stack_4->SetBinError(10,6.268833);
   houtFV_stack_4->SetBinError(11,5.846555);
   houtFV_stack_4->SetBinError(12,7.645434);
   houtFV_stack_4->SetBinError(13,7.0939);
   houtFV_stack_4->SetBinError(14,6.29401);
   houtFV_stack_4->SetBinError(15,6.90138);
   houtFV_stack_4->SetBinError(16,6.517956);
   houtFV_stack_4->SetBinError(17,6.432578);
   houtFV_stack_4->SetBinError(18,7.775889);
   houtFV_stack_4->SetBinError(19,6.162755);
   houtFV_stack_4->SetBinError(20,6.466838);
   houtFV_stack_4->SetBinError(21,6.167022);
   houtFV_stack_4->SetBinError(22,6.626107);
   houtFV_stack_4->SetBinError(23,6.450368);
   houtFV_stack_4->SetBinError(24,6.708152);
   houtFV_stack_4->SetBinError(25,7.373371);
   houtFV_stack_4->SetBinError(26,10.76363);
   houtFV_stack_4->SetBinError(27,1.212902);
   houtFV_stack_4->SetEntries(18079);

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
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVcoh_stack_5->SetBinContent(0,0.7670858);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.432286);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.334968);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.2368179);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.4035539);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.473804);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1952999);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.7259042);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.3764861);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.3620359);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.418668);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.8350078);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.6556541);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.6682718);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.8916399);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,1.171808);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.5717859);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.5583361);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,1.10139);
   hNCpi0inFVcoh_stack_5->SetBinContent(25,0.585404);
   hNCpi0inFVcoh_stack_5->SetBinContent(26,0.2089179);
   hNCpi0inFVcoh_stack_5->SetBinError(0,0.2468026);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.2270916);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2051824);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.1121803);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1155977);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.1775557);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2438946);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.07381642);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.3442606);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.2236377);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.1536621);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2107962);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.2526469);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.3009266);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.213699);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.2909527);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.4209769);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.2355051);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2847561);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.3413269);
   hNCpi0inFVcoh_stack_5->SetBinError(25,0.2501964);
   hNCpi0inFVcoh_stack_5->SetBinError(26,0.1121803);
   hNCpi0inFVcoh_stack_5->SetEntries(244);

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
   
   TH1F *hNCpi0inFVnoncoh_stack_6 = new TH1F("hNCpi0inFVnoncoh_stack_6","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(0,24.36163);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(1,55.83295);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(2,103.5498);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(3,118.9959);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(4,119.0243);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(5,131.9406);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(6,132.8197);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(7,128.427);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(8,144.0193);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(9,138.1474);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(10,136.6848);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(11,149.1718);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(12,144.0878);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(13,147.3592);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(14,151.3304);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(15,142.8676);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(16,150.3436);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(17,146.8448);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(18,144.1318);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(19,148.8595);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(20,146.8451);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(21,153.8907);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(22,153.6736);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(23,145.1328);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(24,141.3484);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(25,123.4828);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(26,41.69106);
   hNCpi0inFVnoncoh_stack_6->SetBinContent(27,1.045422);
   hNCpi0inFVnoncoh_stack_6->SetBinError(0,1.199417);
   hNCpi0inFVnoncoh_stack_6->SetBinError(1,2.471877);
   hNCpi0inFVnoncoh_stack_6->SetBinError(2,3.332484);
   hNCpi0inFVnoncoh_stack_6->SetBinError(3,3.544863);
   hNCpi0inFVnoncoh_stack_6->SetBinError(4,3.509697);
   hNCpi0inFVnoncoh_stack_6->SetBinError(5,3.727703);
   hNCpi0inFVnoncoh_stack_6->SetBinError(6,3.793673);
   hNCpi0inFVnoncoh_stack_6->SetBinError(7,3.678386);
   hNCpi0inFVnoncoh_stack_6->SetBinError(8,3.99272);
   hNCpi0inFVnoncoh_stack_6->SetBinError(9,3.78303);
   hNCpi0inFVnoncoh_stack_6->SetBinError(10,3.779861);
   hNCpi0inFVnoncoh_stack_6->SetBinError(11,4.055969);
   hNCpi0inFVnoncoh_stack_6->SetBinError(12,3.904058);
   hNCpi0inFVnoncoh_stack_6->SetBinError(13,3.992518);
   hNCpi0inFVnoncoh_stack_6->SetBinError(14,4.054737);
   hNCpi0inFVnoncoh_stack_6->SetBinError(15,3.928568);
   hNCpi0inFVnoncoh_stack_6->SetBinError(16,4.009326);
   hNCpi0inFVnoncoh_stack_6->SetBinError(17,3.978199);
   hNCpi0inFVnoncoh_stack_6->SetBinError(18,3.89395);
   hNCpi0inFVnoncoh_stack_6->SetBinError(19,4.063099);
   hNCpi0inFVnoncoh_stack_6->SetBinError(20,3.921788);
   hNCpi0inFVnoncoh_stack_6->SetBinError(21,4.128782);
   hNCpi0inFVnoncoh_stack_6->SetBinError(22,4.105091);
   hNCpi0inFVnoncoh_stack_6->SetBinError(23,3.985132);
   hNCpi0inFVnoncoh_stack_6->SetBinError(24,3.885178);
   hNCpi0inFVnoncoh_stack_6->SetBinError(25,3.703883);
   hNCpi0inFVnoncoh_stack_6->SetBinError(26,2.092859);
   hNCpi0inFVnoncoh_stack_6->SetBinError(27,0.2866851);
   hNCpi0inFVnoncoh_stack_6->SetEntries(63901);

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
   
   TH1F *hCCpi0inFV_stack_7 = new TH1F("hCCpi0inFV_stack_7","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hCCpi0inFV_stack_7->SetBinContent(0,20.93199);
   hCCpi0inFV_stack_7->SetBinContent(1,172.6321);
   hCCpi0inFV_stack_7->SetBinContent(2,324.1154);
   hCCpi0inFV_stack_7->SetBinContent(3,362.2343);
   hCCpi0inFV_stack_7->SetBinContent(4,378.5223);
   hCCpi0inFV_stack_7->SetBinContent(5,362.5865);
   hCCpi0inFV_stack_7->SetBinContent(6,369.049);
   hCCpi0inFV_stack_7->SetBinContent(7,381.3967);
   hCCpi0inFV_stack_7->SetBinContent(8,395.8002);
   hCCpi0inFV_stack_7->SetBinContent(9,387.3233);
   hCCpi0inFV_stack_7->SetBinContent(10,405.7482);
   hCCpi0inFV_stack_7->SetBinContent(11,399.7562);
   hCCpi0inFV_stack_7->SetBinContent(12,398.1801);
   hCCpi0inFV_stack_7->SetBinContent(13,418.6642);
   hCCpi0inFV_stack_7->SetBinContent(14,405.1292);
   hCCpi0inFV_stack_7->SetBinContent(15,406.0491);
   hCCpi0inFV_stack_7->SetBinContent(16,410.152);
   hCCpi0inFV_stack_7->SetBinContent(17,412.8256);
   hCCpi0inFV_stack_7->SetBinContent(18,416.2554);
   hCCpi0inFV_stack_7->SetBinContent(19,405.0846);
   hCCpi0inFV_stack_7->SetBinContent(20,425.2647);
   hCCpi0inFV_stack_7->SetBinContent(21,406.3251);
   hCCpi0inFV_stack_7->SetBinContent(22,404.2735);
   hCCpi0inFV_stack_7->SetBinContent(23,401.5085);
   hCCpi0inFV_stack_7->SetBinContent(24,388.3145);
   hCCpi0inFV_stack_7->SetBinContent(25,345.0128);
   hCCpi0inFV_stack_7->SetBinContent(26,116.7903);
   hCCpi0inFV_stack_7->SetBinContent(27,0.5901461);
   hCCpi0inFV_stack_7->SetBinError(0,2.356715);
   hCCpi0inFV_stack_7->SetBinError(1,6.574501);
   hCCpi0inFV_stack_7->SetBinError(2,8.991866);
   hCCpi0inFV_stack_7->SetBinError(3,9.606006);
   hCCpi0inFV_stack_7->SetBinError(4,9.799067);
   hCCpi0inFV_stack_7->SetBinError(5,9.572863);
   hCCpi0inFV_stack_7->SetBinError(6,9.56386);
   hCCpi0inFV_stack_7->SetBinError(7,9.818692);
   hCCpi0inFV_stack_7->SetBinError(8,10.01147);
   hCCpi0inFV_stack_7->SetBinError(9,9.881509);
   hCCpi0inFV_stack_7->SetBinError(10,10.10615);
   hCCpi0inFV_stack_7->SetBinError(11,10.0912);
   hCCpi0inFV_stack_7->SetBinError(12,10.01895);
   hCCpi0inFV_stack_7->SetBinError(13,10.32943);
   hCCpi0inFV_stack_7->SetBinError(14,10.16374);
   hCCpi0inFV_stack_7->SetBinError(15,10.17054);
   hCCpi0inFV_stack_7->SetBinError(16,10.16487);
   hCCpi0inFV_stack_7->SetBinError(17,10.19276);
   hCCpi0inFV_stack_7->SetBinError(18,10.30481);
   hCCpi0inFV_stack_7->SetBinError(19,10.09011);
   hCCpi0inFV_stack_7->SetBinError(20,10.34429);
   hCCpi0inFV_stack_7->SetBinError(21,10.12498);
   hCCpi0inFV_stack_7->SetBinError(22,10.20322);
   hCCpi0inFV_stack_7->SetBinError(23,10.08801);
   hCCpi0inFV_stack_7->SetBinError(24,9.872562);
   hCCpi0inFV_stack_7->SetBinError(25,9.314548);
   hCCpi0inFV_stack_7->SetBinError(26,5.413509);
   hCCpi0inFV_stack_7->SetBinError(27,0.340721);
   hCCpi0inFV_stack_7->SetEntries(41502);

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
   
   TH1F *hNCinFV_stack_8 = new TH1F("hNCinFV_stack_8","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hNCinFV_stack_8->SetBinContent(0,21.48386);
   hNCinFV_stack_8->SetBinContent(1,172.511);
   hNCinFV_stack_8->SetBinContent(2,345.7935);
   hNCinFV_stack_8->SetBinContent(3,388.3781);
   hNCinFV_stack_8->SetBinContent(4,387.6279);
   hNCinFV_stack_8->SetBinContent(5,393.0142);
   hNCinFV_stack_8->SetBinContent(6,402.0063);
   hNCinFV_stack_8->SetBinContent(7,407.7769);
   hNCinFV_stack_8->SetBinContent(8,413.0746);
   hNCinFV_stack_8->SetBinContent(9,431.4478);
   hNCinFV_stack_8->SetBinContent(10,426.5268);
   hNCinFV_stack_8->SetBinContent(11,431.1365);
   hNCinFV_stack_8->SetBinContent(12,415.0193);
   hNCinFV_stack_8->SetBinContent(13,433.7648);
   hNCinFV_stack_8->SetBinContent(14,407.5776);
   hNCinFV_stack_8->SetBinContent(15,416.8694);
   hNCinFV_stack_8->SetBinContent(16,396.1134);
   hNCinFV_stack_8->SetBinContent(17,436.7256);
   hNCinFV_stack_8->SetBinContent(18,432.8643);
   hNCinFV_stack_8->SetBinContent(19,430.6604);
   hNCinFV_stack_8->SetBinContent(20,413.7909);
   hNCinFV_stack_8->SetBinContent(21,404.0706);
   hNCinFV_stack_8->SetBinContent(22,398.7432);
   hNCinFV_stack_8->SetBinContent(23,405.8884);
   hNCinFV_stack_8->SetBinContent(24,377.9262);
   hNCinFV_stack_8->SetBinContent(25,309.2171);
   hNCinFV_stack_8->SetBinContent(26,90.44344);
   hNCinFV_stack_8->SetBinContent(27,1.322064);
   hNCinFV_stack_8->SetBinError(0,2.344876);
   hNCinFV_stack_8->SetBinError(1,6.580494);
   hNCinFV_stack_8->SetBinError(2,9.336774);
   hNCinFV_stack_8->SetBinError(3,9.879294);
   hNCinFV_stack_8->SetBinError(4,9.821743);
   hNCinFV_stack_8->SetBinError(5,9.964579);
   hNCinFV_stack_8->SetBinError(6,10.05897);
   hNCinFV_stack_8->SetBinError(7,10.1717);
   hNCinFV_stack_8->SetBinError(8,10.16188);
   hNCinFV_stack_8->SetBinError(9,10.51946);
   hNCinFV_stack_8->SetBinError(10,10.37594);
   hNCinFV_stack_8->SetBinError(11,10.45911);
   hNCinFV_stack_8->SetBinError(12,10.1858);
   hNCinFV_stack_8->SetBinError(13,10.40873);
   hNCinFV_stack_8->SetBinError(14,10.2662);
   hNCinFV_stack_8->SetBinError(15,10.24844);
   hNCinFV_stack_8->SetBinError(16,9.937856);
   hNCinFV_stack_8->SetBinError(17,10.5172);
   hNCinFV_stack_8->SetBinError(18,10.45175);
   hNCinFV_stack_8->SetBinError(19,10.44366);
   hNCinFV_stack_8->SetBinError(20,10.18306);
   hNCinFV_stack_8->SetBinError(21,10.11351);
   hNCinFV_stack_8->SetBinError(22,9.927434);
   hNCinFV_stack_8->SetBinError(23,10.05607);
   hNCinFV_stack_8->SetBinError(24,9.689581);
   hNCinFV_stack_8->SetBinError(25,8.792112);
   hNCinFV_stack_8->SetBinError(26,4.706437);
   hNCinFV_stack_8->SetBinError(27,0.5554667);
   hNCinFV_stack_8->SetEntries(42689);

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
   
   TH1F *hnumuCCinFV_stack_9 = new TH1F("hnumuCCinFV_stack_9","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnumuCCinFV_stack_9->SetBinContent(0,143.1871);
   hnumuCCinFV_stack_9->SetBinContent(1,1561.489);
   hnumuCCinFV_stack_9->SetBinContent(2,2998.704);
   hnumuCCinFV_stack_9->SetBinContent(3,3099.97);
   hnumuCCinFV_stack_9->SetBinContent(4,3184.638);
   hnumuCCinFV_stack_9->SetBinContent(5,3254.168);
   hnumuCCinFV_stack_9->SetBinContent(6,3376.357);
   hnumuCCinFV_stack_9->SetBinContent(7,3441.419);
   hnumuCCinFV_stack_9->SetBinContent(8,3461.224);
   hnumuCCinFV_stack_9->SetBinContent(9,3434.47);
   hnumuCCinFV_stack_9->SetBinContent(10,3509.657);
   hnumuCCinFV_stack_9->SetBinContent(11,3453.84);
   hnumuCCinFV_stack_9->SetBinContent(12,3517.716);
   hnumuCCinFV_stack_9->SetBinContent(13,3488.146);
   hnumuCCinFV_stack_9->SetBinContent(14,3436.1);
   hnumuCCinFV_stack_9->SetBinContent(15,3475.945);
   hnumuCCinFV_stack_9->SetBinContent(16,3466.083);
   hnumuCCinFV_stack_9->SetBinContent(17,3457.451);
   hnumuCCinFV_stack_9->SetBinContent(18,3364.843);
   hnumuCCinFV_stack_9->SetBinContent(19,3538.448);
   hnumuCCinFV_stack_9->SetBinContent(20,3364.295);
   hnumuCCinFV_stack_9->SetBinContent(21,3390.215);
   hnumuCCinFV_stack_9->SetBinContent(22,3395.771);
   hnumuCCinFV_stack_9->SetBinContent(23,3394.227);
   hnumuCCinFV_stack_9->SetBinContent(24,3230.923);
   hnumuCCinFV_stack_9->SetBinContent(25,3080.397);
   hnumuCCinFV_stack_9->SetBinContent(26,841.1182);
   hnumuCCinFV_stack_9->SetBinContent(27,4.27319);
   hnumuCCinFV_stack_9->SetBinError(0,8.494987);
   hnumuCCinFV_stack_9->SetBinError(1,28.65966);
   hnumuCCinFV_stack_9->SetBinError(2,39.54187);
   hnumuCCinFV_stack_9->SetBinError(3,40.48841);
   hnumuCCinFV_stack_9->SetBinError(4,41.38954);
   hnumuCCinFV_stack_9->SetBinError(5,41.65441);
   hnumuCCinFV_stack_9->SetBinError(6,43.0723);
   hnumuCCinFV_stack_9->SetBinError(7,42.91698);
   hnumuCCinFV_stack_9->SetBinError(8,43.76074);
   hnumuCCinFV_stack_9->SetBinError(9,42.54559);
   hnumuCCinFV_stack_9->SetBinError(10,42.92472);
   hnumuCCinFV_stack_9->SetBinError(11,42.22526);
   hnumuCCinFV_stack_9->SetBinError(12,42.54437);
   hnumuCCinFV_stack_9->SetBinError(13,43.27442);
   hnumuCCinFV_stack_9->SetBinError(14,43.25057);
   hnumuCCinFV_stack_9->SetBinError(15,42.64286);
   hnumuCCinFV_stack_9->SetBinError(16,42.11761);
   hnumuCCinFV_stack_9->SetBinError(17,41.64637);
   hnumuCCinFV_stack_9->SetBinError(18,42.54434);
   hnumuCCinFV_stack_9->SetBinError(19,42.8996);
   hnumuCCinFV_stack_9->SetBinError(20,41.14701);
   hnumuCCinFV_stack_9->SetBinError(21,41.5452);
   hnumuCCinFV_stack_9->SetBinError(22,41.80335);
   hnumuCCinFV_stack_9->SetBinError(23,41.73927);
   hnumuCCinFV_stack_9->SetBinError(24,41.20056);
   hnumuCCinFV_stack_9->SetBinError(25,41.43907);
   hnumuCCinFV_stack_9->SetBinError(26,21.89863);
   hnumuCCinFV_stack_9->SetBinError(27,1.149859);
   hnumuCCinFV_stack_9->SetEntries(290947);

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
   
   TH1F *hnueCCinFV_stack_10 = new TH1F("hnueCCinFV_stack_10","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hnueCCinFV_stack_10->SetBinContent(0,0.7536536);
   hnueCCinFV_stack_10->SetBinContent(1,12.15495);
   hnueCCinFV_stack_10->SetBinContent(2,14.62906);
   hnueCCinFV_stack_10->SetBinContent(3,23.97171);
   hnueCCinFV_stack_10->SetBinContent(4,29.76349);
   hnueCCinFV_stack_10->SetBinContent(5,17.54643);
   hnueCCinFV_stack_10->SetBinContent(6,25.76526);
   hnueCCinFV_stack_10->SetBinContent(7,20.15671);
   hnueCCinFV_stack_10->SetBinContent(8,26.50651);
   hnueCCinFV_stack_10->SetBinContent(9,23.26938);
   hnueCCinFV_stack_10->SetBinContent(10,25.86906);
   hnueCCinFV_stack_10->SetBinContent(11,26.31758);
   hnueCCinFV_stack_10->SetBinContent(12,22.43912);
   hnueCCinFV_stack_10->SetBinContent(13,27.19871);
   hnueCCinFV_stack_10->SetBinContent(14,17.59886);
   hnueCCinFV_stack_10->SetBinContent(15,27.40814);
   hnueCCinFV_stack_10->SetBinContent(16,24.06547);
   hnueCCinFV_stack_10->SetBinContent(17,26.56332);
   hnueCCinFV_stack_10->SetBinContent(18,20.86749);
   hnueCCinFV_stack_10->SetBinContent(19,29.20869);
   hnueCCinFV_stack_10->SetBinContent(20,24.55787);
   hnueCCinFV_stack_10->SetBinContent(21,20.80678);
   hnueCCinFV_stack_10->SetBinContent(22,22.10761);
   hnueCCinFV_stack_10->SetBinContent(23,28.11787);
   hnueCCinFV_stack_10->SetBinContent(24,17.2033);
   hnueCCinFV_stack_10->SetBinContent(25,25.91607);
   hnueCCinFV_stack_10->SetBinContent(26,9.21297);
   hnueCCinFV_stack_10->SetBinError(0,0.535428);
   hnueCCinFV_stack_10->SetBinError(1,3.269309);
   hnueCCinFV_stack_10->SetBinError(2,2.543471);
   hnueCCinFV_stack_10->SetBinError(3,3.213557);
   hnueCCinFV_stack_10->SetBinError(4,3.59347);
   hnueCCinFV_stack_10->SetBinError(5,2.48072);
   hnueCCinFV_stack_10->SetBinError(6,4.723488);
   hnueCCinFV_stack_10->SetBinError(7,2.62334);
   hnueCCinFV_stack_10->SetBinError(8,3.469877);
   hnueCCinFV_stack_10->SetBinError(9,2.749135);
   hnueCCinFV_stack_10->SetBinError(10,4.094142);
   hnueCCinFV_stack_10->SetBinError(11,3.046605);
   hnueCCinFV_stack_10->SetBinError(12,2.846799);
   hnueCCinFV_stack_10->SetBinError(13,3.214717);
   hnueCCinFV_stack_10->SetBinError(14,2.17652);
   hnueCCinFV_stack_10->SetBinError(15,4.404261);
   hnueCCinFV_stack_10->SetBinError(16,2.954263);
   hnueCCinFV_stack_10->SetBinError(17,4.74638);
   hnueCCinFV_stack_10->SetBinError(18,2.824248);
   hnueCCinFV_stack_10->SetBinError(19,3.412981);
   hnueCCinFV_stack_10->SetBinError(20,2.752274);
   hnueCCinFV_stack_10->SetBinError(21,2.51347);
   hnueCCinFV_stack_10->SetBinError(22,3.739067);
   hnueCCinFV_stack_10->SetBinError(23,4.200473);
   hnueCCinFV_stack_10->SetBinError(24,2.105549);
   hnueCCinFV_stack_10->SetBinError(25,4.581298);
   hnueCCinFV_stack_10->SetBinError(26,2.765514);
   hnueCCinFV_stack_10->SetEntries(2156);

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
   
   TH1F *hmcerror__5 = new TH1F("hmcerror__5","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);
   hmcerror__5->SetBinContent(0,555.0682);
   hmcerror__5->SetBinContent(1,2927.954);
   hmcerror__5->SetBinContent(2,4186.158);
   hmcerror__5->SetBinContent(3,4395.423);
   hmcerror__5->SetBinContent(4,4464.174);
   hmcerror__5->SetBinContent(5,4603.277);
   hmcerror__5->SetBinContent(6,4734.566);
   hmcerror__5->SetBinContent(7,4810.738);
   hmcerror__5->SetBinContent(8,4880.346);
   hmcerror__5->SetBinContent(9,4849.859);
   hmcerror__5->SetBinContent(10,4981.498);
   hmcerror__5->SetBinContent(11,4951.241);
   hmcerror__5->SetBinContent(12,4949.726);
   hmcerror__5->SetBinContent(13,4996.113);
   hmcerror__5->SetBinContent(14,4885.074);
   hmcerror__5->SetBinContent(15,4949.392);
   hmcerror__5->SetBinContent(16,4935.835);
   hmcerror__5->SetBinContent(17,5014.455);
   hmcerror__5->SetBinContent(18,4891.855);
   hmcerror__5->SetBinContent(19,5047.527);
   hmcerror__5->SetBinContent(20,4912.049);
   hmcerror__5->SetBinContent(21,4920.651);
   hmcerror__5->SetBinContent(22,4919.102);
   hmcerror__5->SetBinContent(23,4972.232);
   hmcerror__5->SetBinContent(24,4723.554);
   hmcerror__5->SetBinContent(25,4452.138);
   hmcerror__5->SetBinContent(26,1714.166);
   hmcerror__5->SetBinContent(27,28.01263);
   hmcerror__5->SetBinError(0,14.73564);
   hmcerror__5->SetBinError(1,522.5558);
   hmcerror__5->SetBinError(2,705.2318);
   hmcerror__5->SetBinError(3,765.2539);
   hmcerror__5->SetBinError(4,767.4083);
   hmcerror__5->SetBinError(5,827.208);
   hmcerror__5->SetBinError(6,841.5407);
   hmcerror__5->SetBinError(7,833.9129);
   hmcerror__5->SetBinError(8,863.4533);
   hmcerror__5->SetBinError(9,826.5448);
   hmcerror__5->SetBinError(10,835.7601);
   hmcerror__5->SetBinError(11,822.4068);
   hmcerror__5->SetBinError(12,812.4559);
   hmcerror__5->SetBinError(13,802.7843);
   hmcerror__5->SetBinError(14,805.6705);
   hmcerror__5->SetBinError(15,818.0396);
   hmcerror__5->SetBinError(16,802.4181);
   hmcerror__5->SetBinError(17,794.4948);
   hmcerror__5->SetBinError(18,822.1447);
   hmcerror__5->SetBinError(19,830.6083);
   hmcerror__5->SetBinError(20,760.9934);
   hmcerror__5->SetBinError(21,777.869);
   hmcerror__5->SetBinError(22,768.723);
   hmcerror__5->SetBinError(23,840.1053);
   hmcerror__5->SetBinError(24,778.9214);
   hmcerror__5->SetBinError(25,806.5895);
   hmcerror__5->SetBinError(26,396.3504);
   hmcerror__5->SetBinError(27,10.75309);
   hmcerror__5->SetEntries(104733.2);

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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3005[26] = {
   2508,
   3810,
   4048,
   4230,
   4374,
   4507,
   4445,
   4636,
   4856,
   4712,
   4921,
   4805,
   4903,
   4951,
   4901,
   5015,
   5009,
   5049,
   4959,
   4986,
   4920,
   4955,
   4954,
   4571,
   4101,
   1600};
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
   50.07994,
   61.7252,
   63.62389,
   65.03845,
   66.13622,
   67.13419,
   66.67083,
   68.08818,
   69.68501,
   68.64401,
   70.14984,
   69.31811,
   70.02143,
   70.36334,
   70.00714,
   70.81666,
   70.77429,
   71.05632,
   70.42017,
   70.61161,
   70.14271,
   70.39176,
   70.38466,
   67.60917,
   64.03905,
   40};
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
   50.07994,
   61.7252,
   63.62389,
   65.03845,
   66.13622,
   67.13419,
   66.67083,
   68.08818,
   69.68501,
   68.64401,
   70.14984,
   69.31811,
   70.02143,
   70.36334,
   70.00714,
   70.81666,
   70.77429,
   71.05632,
   70.42017,
   70.61161,
   70.14271,
   70.39176,
   70.38466,
   67.60917,
   64.03905,
   40};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(26,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,286);
   Graph_Graph3005->SetMinimum(1203.994);
   Graph_Graph3005->SetMaximum(5476.062);
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
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.97#pm0.16","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=29.0/26","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 116726.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 1360.2","F");

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
   entry=leg->AddEntry("hext_stack_2","EXT, 6361.3","F");

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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 981.0","F");

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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 4438.6","F");

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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  12.8","F");

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
   entry=leg->AddEntry("hNCpi0inFVnoncoh_stack_6","NC#pi^{0} non-COH,  3440.5","F");

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
   entry=leg->AddEntry("hCCpi0inFV_stack_7","CC#pi^{0}, 9699.0","F");

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
   entry=leg->AddEntry("hNCinFV_stack_8","NC Other, 9969.0","F");

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
   entry=leg->AddEntry("hnumuCCinFV_stack_9","CC Other, 83217.6","F");

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
   entry=leg->AddEntry("hnueCCinFV_stack_10","#nu_{e}/#bar{#nu}_{e} CC, 589.2","F");

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
   TText *pt_LaTex = pt->AddText("generic_Np_bnb_12_reco_nuvtxX_all");
   pt->Draw();
   pad1->Modified();
   canvas2->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-40.04,-0.5333333,293.6267,2.133333);
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
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
   0.1784713,
   0.1684675,
   0.1741024,
   0.1719038,
   0.1796998,
   0.177744,
   0.1733441,
   0.1769246,
   0.1704265,
   0.1677729,
   0.1661011,
   0.1641416,
   0.1606818,
   0.1649249,
   0.1652808,
   0.1625699,
   0.1584409,
   0.168064,
   0.1645575,
   0.1549238,
   0.1580825,
   0.156273,
   0.1689594,
   0.1649015,
   0.181169,
   0.2312206};
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
   0.1784713,
   0.1684675,
   0.1741024,
   0.1719038,
   0.1796998,
   0.177744,
   0.1733441,
   0.1769246,
   0.1704265,
   0.1677729,
   0.1661011,
   0.1641416,
   0.1606818,
   0.1649249,
   0.1652808,
   0.1625699,
   0.1584409,
   0.168064,
   0.1645575,
   0.1549238,
   0.1580825,
   0.156273,
   0.1689594,
   0.1649015,
   0.181169,
   0.2312206};
   grae = new TGraphAsymmErrors(26,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,286);
   Graph_Graph3006->SetMinimum(0);
   Graph_Graph3006->SetMaximum(2);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineWidth(2);
   Graph_Graph3006->SetMarkerStyle(20);
   Graph_Graph3006->GetXaxis()->SetTitle("#nu Vertex X [cm]");
   Graph_Graph3006->GetXaxis()->SetRange(1,91);
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
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
   0.1495597,
   0.1501624,
   0.1491927,
   0.1502965,
   0.1497424,
   0.151537,
   0.1508979,
   0.1550987,
   0.1518821,
   0.1495796,
   0.1472415,
   0.1468,
   0.1454024,
   0.1511005,
   0.1501035,
   0.1442956,
   0.1443288,
   0.1453021,
   0.1496994,
   0.1438697,
   0.1449087,
   0.1456122,
   0.1458624,
   0.1445369,
   0.1509482,
   0.1480658};
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
   0.1495597,
   0.1501624,
   0.1491927,
   0.1502965,
   0.1497424,
   0.151537,
   0.1508979,
   0.1550987,
   0.1518821,
   0.1495796,
   0.1472415,
   0.1468,
   0.1454024,
   0.1511005,
   0.1501035,
   0.1442956,
   0.1443288,
   0.1453021,
   0.1496994,
   0.1438697,
   0.1449087,
   0.1456122,
   0.1458624,
   0.1445369,
   0.1509482,
   0.1480658};
   grae = new TGraphAsymmErrors(26,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,286);
   Graph_Graph3007->SetMinimum(0);
   Graph_Graph3007->SetMaximum(2);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineWidth(2);
   Graph_Graph3007->SetMarkerStyle(20);
   Graph_Graph3007->GetXaxis()->SetRange(1,91);
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
   125,
   135,
   145,
   155,
   165,
   175,
   185,
   195,
   205,
   215,
   225,
   235,
   245,
   255};
   Double_t _fy3008[26] = {
   0.8565708,
   0.9101424,
   0.9209579,
   0.9475437,
   0.9501926,
   0.9519351,
   0.9239747,
   0.9499327,
   1.001266,
   0.9459003,
   0.9938923,
   0.9707609,
   0.9813629,
   1.013495,
   0.9902227,
   1.016039,
   0.9989122,
   1.032124,
   0.9824613,
   1.015055,
   0.9998677,
   1.007298,
   0.9963332,
   0.9677035,
   0.9211304,
   0.9333988};
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
   0.01710407,
   0.01474507,
   0.01447503,
   0.01456898,
   0.0143672,
   0.01417959,
   0.01385875,
   0.01395151,
   0.01436846,
   0.01377979,
   0.01416813,
   0.01400443,
   0.01401518,
   0.01440374,
   0.0141446,
   0.01434745,
   0.01411406,
   0.01452543,
   0.01395142,
   0.01437519,
   0.01425476,
   0.01430988,
   0.01415555,
   0.0143132,
   0.01438389,
   0.02333497};
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
   0.01710407,
   0.01474507,
   0.01447503,
   0.01456898,
   0.0143672,
   0.01417959,
   0.01385875,
   0.01395151,
   0.01436846,
   0.01377979,
   0.01416813,
   0.01400443,
   0.01401518,
   0.01440374,
   0.0141446,
   0.01434745,
   0.01411406,
   0.01452543,
   0.01395142,
   0.01437519,
   0.01425476,
   0.01430988,
   0.01415555,
   0.0143132,
   0.01438389,
   0.02333497};
   grae = new TGraphAsymmErrors(26,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,286);
   Graph_Graph3008->SetMinimum(0.8187485);
   Graph_Graph3008->SetMaximum(1.067367);
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
   
   TH1F *hist__6 = new TH1F("hist__6","generic_Np_bnb_12_reco_nuvtxX_all",26,0,260);

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
   TLine *line = new TLine(0,1,260,1);
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
