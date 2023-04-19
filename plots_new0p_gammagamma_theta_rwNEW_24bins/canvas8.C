#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas8()
{
//=========Macro generated from canvas: canvas8/channel8
//=========  (Thu Mar  9 20:57:04 2023) by ROOT version 6.26/00
   TCanvas *canvas8 = new TCanvas("canvas8", "channel8",60,83,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas8->SetHighLightColor(2);
   canvas8->Range(0,0,1,1);
   canvas8->SetFillColor(0);
   canvas8->SetBorderMode(0);
   canvas8->SetBorderSize(2);
   canvas8->SetLeftMargin(0.12);
   canvas8->SetRightMargin(0.12);
   canvas8->SetTopMargin(0.05);
   canvas8->SetBottomMargin(0.12);
   canvas8->SetFrameLineWidth(2);
   canvas8->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-0.4846154,-2.003207,3.553846,221.5126);
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
   
   TH1F *hmc__22 = new TH1F("hmc__22","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmc__22->SetBinContent(1,24.51117);
   hmc__22->SetBinContent(2,32.71564);
   hmc__22->SetBinContent(3,41.5208);
   hmc__22->SetBinContent(4,73.42458);
   hmc__22->SetBinContent(5,99.71391);
   hmc__22->SetBinContent(6,100.1604);
   hmc__22->SetBinContent(7,90.63266);
   hmc__22->SetBinContent(8,77.07607);
   hmc__22->SetBinContent(9,71.5516);
   hmc__22->SetBinContent(10,59.04832);
   hmc__22->SetBinContent(11,67.98077);
   hmc__22->SetBinContent(12,48.14019);
   hmc__22->SetBinContent(13,45.24007);
   hmc__22->SetBinContent(14,36.06527);
   hmc__22->SetBinContent(15,36.1168);
   hmc__22->SetBinContent(16,37.16487);
   hmc__22->SetBinContent(17,32.1495);
   hmc__22->SetBinContent(18,26.2191);
   hmc__22->SetBinContent(19,27.131);
   hmc__22->SetBinContent(20,27.52275);
   hmc__22->SetBinContent(21,29.10786);
   hmc__22->SetBinContent(22,29.24771);
   hmc__22->SetBinContent(23,26.22553);
   hmc__22->SetBinContent(24,15.59131);
   hmc__22->SetBinError(1,13.15431);
   hmc__22->SetBinError(2,13.79787);
   hmc__22->SetBinError(3,17.74079);
   hmc__22->SetBinError(4,22.62716);
   hmc__22->SetBinError(5,31.91573);
   hmc__22->SetBinError(6,37.25415);
   hmc__22->SetBinError(7,29.15191);
   hmc__22->SetBinError(8,22.96855);
   hmc__22->SetBinError(9,22.62356);
   hmc__22->SetBinError(10,22.37478);
   hmc__22->SetBinError(11,23.74156);
   hmc__22->SetBinError(12,17.09906);
   hmc__22->SetBinError(13,14.84006);
   hmc__22->SetBinError(14,13.7509);
   hmc__22->SetBinError(15,13.66619);
   hmc__22->SetBinError(16,25.62096);
   hmc__22->SetBinError(17,14.74243);
   hmc__22->SetBinError(18,21.56577);
   hmc__22->SetBinError(19,22.36439);
   hmc__22->SetBinError(20,22.69834);
   hmc__22->SetBinError(21,19.69685);
   hmc__22->SetBinError(22,17.88085);
   hmc__22->SetBinError(23,20.52361);
   hmc__22->SetBinError(24,11.17732);
   hmc__22->SetBinError(25,0.3895343);
   hmc__22->SetMinimum(-2.003207);
   hmc__22->SetMaximum(210.3368);
   hmc__22->SetEntries(1133.738);
   hmc__22->SetLineWidth(5);
   hmc__22->GetXaxis()->SetLabelFont(42);
   hmc__22->GetXaxis()->SetTitleOffset(1);
   hmc__22->GetXaxis()->SetTitleFont(42);
   hmc__22->GetYaxis()->SetTitle("Event counts");
   hmc__22->GetYaxis()->SetLabelFont(132);
   hmc__22->GetYaxis()->SetLabelSize(0.04);
   hmc__22->GetYaxis()->SetTitleSize(0.05);
   hmc__22->GetYaxis()->SetTitleOffset(0.73);
   hmc__22->GetYaxis()->SetTitleFont(132);
   hmc__22->GetZaxis()->SetLabelFont(42);
   hmc__22->GetZaxis()->SetTitleOffset(1);
   hmc__22->GetZaxis()->SetTitleFont(42);
   hmc__22->Draw("hist");
   
   THStack *hs8 = new THStack();
   hs8->SetName("hs8");
   hs8->SetTitle("");
   
   TH1F *hs8_stack_8 = new TH1F("hs8_stack_8","",24,0,3.15);
   hs8_stack_8->SetMinimum(-8.530416e-09);
   hs8_stack_8->SetMaximum(105.1684);
   hs8_stack_8->SetDirectory(0);
   hs8_stack_8->SetStats(0);
   hs8_stack_8->SetLineWidth(2);
   hs8_stack_8->SetMarkerStyle(20);
   hs8_stack_8->GetXaxis()->SetNdivisions(509);
   hs8_stack_8->GetXaxis()->SetLabelFont(132);
   hs8_stack_8->GetXaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetXaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetXaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetXaxis()->SetTitleFont(132);
   hs8_stack_8->GetYaxis()->SetNdivisions(509);
   hs8_stack_8->GetYaxis()->SetLabelFont(132);
   hs8_stack_8->GetYaxis()->SetLabelOffset(0.01);
   hs8_stack_8->GetYaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetYaxis()->SetTitleOffset(0.95);
   hs8_stack_8->GetYaxis()->SetTitleFont(132);
   hs8_stack_8->GetZaxis()->SetLabelFont(132);
   hs8_stack_8->GetZaxis()->SetLabelSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleSize(0.08);
   hs8_stack_8->GetZaxis()->SetTitleOffset(1.2);
   hs8_stack_8->GetZaxis()->SetTitleFont(132);
   hs8->SetHistogram(hs8_stack_8);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hbadmatch_stack_1->SetBinContent(1,1.273271);
   hbadmatch_stack_1->SetBinContent(2,2.144392);
   hbadmatch_stack_1->SetBinContent(3,0.7336084);
   hbadmatch_stack_1->SetBinContent(4,1.563947);
   hbadmatch_stack_1->SetBinContent(5,3.562742);
   hbadmatch_stack_1->SetBinContent(6,4.585976);
   hbadmatch_stack_1->SetBinContent(7,2.465919);
   hbadmatch_stack_1->SetBinContent(8,1.517089);
   hbadmatch_stack_1->SetBinContent(9,1.548344);
   hbadmatch_stack_1->SetBinContent(10,0.7834804);
   hbadmatch_stack_1->SetBinContent(11,3.313691);
   hbadmatch_stack_1->SetBinContent(12,2.310473);
   hbadmatch_stack_1->SetBinContent(13,1.412273);
   hbadmatch_stack_1->SetBinContent(14,1.073786);
   hbadmatch_stack_1->SetBinContent(15,1.46165);
   hbadmatch_stack_1->SetBinContent(16,2.293017);
   hbadmatch_stack_1->SetBinContent(17,1.171768);
   hbadmatch_stack_1->SetBinContent(18,0.9818863);
   hbadmatch_stack_1->SetBinContent(19,0.3934307);
   hbadmatch_stack_1->SetBinContent(20,1.215558);
   hbadmatch_stack_1->SetBinContent(21,0.9286332);
   hbadmatch_stack_1->SetBinContent(22,0.9817498);
   hbadmatch_stack_1->SetBinContent(23,1.073786);
   hbadmatch_stack_1->SetBinContent(24,0.3917402);
   hbadmatch_stack_1->SetBinError(1,0.6535392);
   hbadmatch_stack_1->SetBinError(2,0.7884016);
   hbadmatch_stack_1->SetBinError(3,0.4394482);
   hbadmatch_stack_1->SetBinError(4,0.6062534);
   hbadmatch_stack_1->SetBinError(5,1.387717);
   hbadmatch_stack_1->SetBinError(6,1.205698);
   hbadmatch_stack_1->SetBinError(7,0.7656079);
   hbadmatch_stack_1->SetBinError(8,0.5887087);
   hbadmatch_stack_1->SetBinError(9,0.6494582);
   hbadmatch_stack_1->SetBinError(10,0.3917439);
   hbadmatch_stack_1->SetBinError(11,1.044726);
   hbadmatch_stack_1->SetBinError(12,0.8048955);
   hbadmatch_stack_1->SetBinError(13,0.6510715);
   hbadmatch_stack_1->SetBinError(14,0.5557297);
   hbadmatch_stack_1->SetBinError(15,0.6698755);
   hbadmatch_stack_1->SetBinError(16,0.8324556);
   hbadmatch_stack_1->SetBinError(17,0.5386156);
   hbadmatch_stack_1->SetBinError(18,0.4391155);
   hbadmatch_stack_1->SetBinError(19,0.2781975);
   hbadmatch_stack_1->SetBinError(20,0.6206425);
   hbadmatch_stack_1->SetBinError(21,0.48078);
   hbadmatch_stack_1->SetBinError(22,0.5190802);
   hbadmatch_stack_1->SetBinError(23,0.5557297);
   hbadmatch_stack_1->SetBinError(24,0.2770047);
   hbadmatch_stack_1->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1525;
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
   hs8->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hext_stack_2->SetBinContent(1,5.683567);
   hext_stack_2->SetBinContent(2,8.58601);
   hext_stack_2->SetBinContent(3,7.455595);
   hext_stack_2->SetBinContent(4,14.41521);
   hext_stack_2->SetBinContent(5,19.14158);
   hext_stack_2->SetBinContent(6,16.04879);
   hext_stack_2->SetBinContent(7,11.26339);
   hext_stack_2->SetBinContent(8,13.68862);
   hext_stack_2->SetBinContent(9,11.87905);
   hext_stack_2->SetBinContent(10,7.690611);
   hext_stack_2->SetBinContent(11,13.03542);
   hext_stack_2->SetBinContent(12,7.305553);
   hext_stack_2->SetBinContent(13,9.45105);
   hext_stack_2->SetBinContent(14,8.268793);
   hext_stack_2->SetBinContent(15,7.847833);
   hext_stack_2->SetBinContent(16,5.594185);
   hext_stack_2->SetBinContent(17,6.717419);
   hext_stack_2->SetBinContent(18,5.598593);
   hext_stack_2->SetBinContent(19,3.001777);
   hext_stack_2->SetBinContent(20,4.95257);
   hext_stack_2->SetBinContent(21,7.276832);
   hext_stack_2->SetBinContent(22,2.103607);
   hext_stack_2->SetBinContent(23,2.428004);
   hext_stack_2->SetBinContent(24,0.973192);
   hext_stack_2->SetBinError(1,1.429781);
   hext_stack_2->SetBinError(2,1.931347);
   hext_stack_2->SetBinError(3,1.758699);
   hext_stack_2->SetBinError(4,2.482304);
   hext_stack_2->SetBinError(5,2.821249);
   hext_stack_2->SetBinError(6,2.57331);
   hext_stack_2->SetBinError(7,2.152222);
   hext_stack_2->SetBinError(8,2.454872);
   hext_stack_2->SetBinError(9,2.34781);
   hext_stack_2->SetBinError(10,1.827394);
   hext_stack_2->SetBinError(11,2.383445);
   hext_stack_2->SetBinError(12,1.603259);
   hext_stack_2->SetBinError(13,2.110497);
   hext_stack_2->SetBinError(14,1.850315);
   hext_stack_2->SetBinError(15,1.913308);
   hext_stack_2->SetBinError(16,1.478305);
   hext_stack_2->SetBinError(17,1.738869);
   hext_stack_2->SetBinError(18,1.523321);
   hext_stack_2->SetBinError(19,1.003589);
   hext_stack_2->SetBinError(20,1.331809);
   hext_stack_2->SetBinError(21,1.837184);
   hext_stack_2->SetBinError(22,0.9761052);
   hext_stack_2->SetBinError(23,1.028599);
   hext_stack_2->SetBinError(24,0.5618727);
   hext_stack_2->SetEntries(503);

   ci = 1526;
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
   hs8->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hdirt_stack_3->SetBinContent(1,0.4762587);
   hdirt_stack_3->SetBinContent(2,0.8257372);
   hdirt_stack_3->SetBinContent(3,1.194049);
   hdirt_stack_3->SetBinContent(4,1.291994);
   hdirt_stack_3->SetBinContent(5,1.209663);
   hdirt_stack_3->SetBinContent(6,1.057319);
   hdirt_stack_3->SetBinContent(7,2.040102);
   hdirt_stack_3->SetBinContent(8,0.9422435);
   hdirt_stack_3->SetBinContent(9,1.876863);
   hdirt_stack_3->SetBinContent(10,1.000027);
   hdirt_stack_3->SetBinContent(11,0.3381872);
   hdirt_stack_3->SetBinContent(12,0.2188956);
   hdirt_stack_3->SetBinContent(13,0.3569671);
   hdirt_stack_3->SetBinContent(14,0.4794586);
   hdirt_stack_3->SetBinContent(15,1.165545);
   hdirt_stack_3->SetBinContent(16,0.4142144);
   hdirt_stack_3->SetBinContent(17,1.132946);
   hdirt_stack_3->SetBinContent(18,0.2761429);
   hdirt_stack_3->SetBinContent(19,1.530722);
   hdirt_stack_3->SetBinContent(20,0.5997325);
   hdirt_stack_3->SetBinContent(21,0.7352656);
   hdirt_stack_3->SetBinContent(22,0.5570828);
   hdirt_stack_3->SetBinContent(23,1.048687);
   hdirt_stack_3->SetBinContent(24,0.620618);
   hdirt_stack_3->SetBinError(1,0.3652866);
   hdirt_stack_3->SetBinError(2,0.4829962);
   hdirt_stack_3->SetBinError(3,0.5676644);
   hdirt_stack_3->SetBinError(4,0.5694815);
   hdirt_stack_3->SetBinError(5,0.6431344);
   hdirt_stack_3->SetBinError(6,0.5503785);
   hdirt_stack_3->SetBinError(7,0.7759675);
   hdirt_stack_3->SetBinError(8,0.4923441);
   hdirt_stack_3->SetBinError(9,1.084937);
   hdirt_stack_3->SetBinError(10,0.4222425);
   hdirt_stack_3->SetBinError(11,0.3381872);
   hdirt_stack_3->SetBinError(12,0.2188956);
   hdirt_stack_3->SetBinError(13,0.258803);
   hdirt_stack_3->SetBinError(14,0.3403063);
   hdirt_stack_3->SetBinError(15,0.6016336);
   hdirt_stack_3->SetBinError(16,0.2391468);
   hdirt_stack_3->SetBinError(17,0.526479);
   hdirt_stack_3->SetBinError(18,0.1952625);
   hdirt_stack_3->SetBinError(19,0.6590102);
   hdirt_stack_3->SetBinError(20,0.423494);
   hdirt_stack_3->SetBinError(21,0.4583545);
   hdirt_stack_3->SetBinError(22,0.4028472);
   hdirt_stack_3->SetBinError(23,0.5656933);
   hdirt_stack_3->SetBinError(24,0.3927772);
   hdirt_stack_3->SetEntries(90);

   ci = 1527;
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
   hs8->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   houtFV_stack_4->SetBinContent(1,5.840131);
   houtFV_stack_4->SetBinContent(2,7.152452);
   houtFV_stack_4->SetBinContent(3,11.57778);
   houtFV_stack_4->SetBinContent(4,16.22508);
   houtFV_stack_4->SetBinContent(5,20.75129);
   houtFV_stack_4->SetBinContent(6,20.0285);
   houtFV_stack_4->SetBinContent(7,17.20531);
   houtFV_stack_4->SetBinContent(8,14.56794);
   houtFV_stack_4->SetBinContent(9,12.70566);
   houtFV_stack_4->SetBinContent(10,9.363333);
   houtFV_stack_4->SetBinContent(11,12.20609);
   houtFV_stack_4->SetBinContent(12,10.54653);
   houtFV_stack_4->SetBinContent(13,8.448363);
   houtFV_stack_4->SetBinContent(14,5.88077);
   houtFV_stack_4->SetBinContent(15,7.969933);
   houtFV_stack_4->SetBinContent(16,9.964996);
   houtFV_stack_4->SetBinContent(17,4.818774);
   houtFV_stack_4->SetBinContent(18,5.509963);
   houtFV_stack_4->SetBinContent(19,7.548933);
   houtFV_stack_4->SetBinContent(20,5.623459);
   houtFV_stack_4->SetBinContent(21,10.93741);
   houtFV_stack_4->SetBinContent(22,8.932066);
   houtFV_stack_4->SetBinContent(23,7.731132);
   houtFV_stack_4->SetBinContent(24,4.532306);
   houtFV_stack_4->SetBinError(1,1.26249);
   houtFV_stack_4->SetBinError(2,1.357412);
   houtFV_stack_4->SetBinError(3,1.677442);
   houtFV_stack_4->SetBinError(4,2.081424);
   houtFV_stack_4->SetBinError(5,2.293276);
   houtFV_stack_4->SetBinError(6,2.402089);
   houtFV_stack_4->SetBinError(7,2.10463);
   houtFV_stack_4->SetBinError(8,1.968553);
   houtFV_stack_4->SetBinError(9,1.79736);
   houtFV_stack_4->SetBinError(10,1.485714);
   houtFV_stack_4->SetBinError(11,1.721636);
   houtFV_stack_4->SetBinError(12,1.624983);
   houtFV_stack_4->SetBinError(13,1.530142);
   houtFV_stack_4->SetBinError(14,1.244974);
   houtFV_stack_4->SetBinError(15,1.871657);
   houtFV_stack_4->SetBinError(16,1.594451);
   houtFV_stack_4->SetBinError(17,1.188629);
   houtFV_stack_4->SetBinError(18,1.132967);
   houtFV_stack_4->SetBinError(19,1.364575);
   houtFV_stack_4->SetBinError(20,1.225106);
   houtFV_stack_4->SetBinError(21,1.668135);
   houtFV_stack_4->SetBinError(22,1.474768);
   houtFV_stack_4->SetBinError(23,1.368494);
   houtFV_stack_4->SetBinError(24,1.081761);
   houtFV_stack_4->SetEntries(1038);

   ci = 1528;
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
   hs8->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.2510999);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.5438859);
   hNCpi0inFVcoh_stack_5->SetBinContent(4,1.562408);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,1.95068);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,2.07773);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.906754);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.9044259);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.613304);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.8086039);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,1.04659);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,1.01869);
   hNCpi0inFVcoh_stack_5->SetBinContent(13,0.181018);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.307068);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.2927861);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.153118);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.05579997);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1673999);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.08369996);
   hNCpi0inFVcoh_stack_5->SetBinContent(22,0.3062359);
   hNCpi0inFVcoh_stack_5->SetBinContent(23,0.501704);
   hNCpi0inFVcoh_stack_5->SetBinContent(24,0.3206861);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.08369995);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.2338466);
   hNCpi0inFVcoh_stack_5->SetBinError(4,0.4337272);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.4171059);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.5054877);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.3123499);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.2693006);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.2517472);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.2623461);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.4086225);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.4076689);
   hNCpi0inFVcoh_stack_5->SetBinError(13,0.1086555);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.02789998);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.2032767);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.2183542);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.1050124);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.03945654);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.06834073);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.04832419);
   hNCpi0inFVcoh_stack_5->SetBinError(22,0.14851);
   hNCpi0inFVcoh_stack_5->SetBinError(23,0.2454852);
   hNCpi0inFVcoh_stack_5->SetBinError(24,0.2201295);
   hNCpi0inFVcoh_stack_5->SetEntries(252);

   ci = 1529;
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
   hs8->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVqe_stack_6->SetBinContent(3,0.194636);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.2512681);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.2233681);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.08369996);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(21,0.05579997);
   hNCpi0inFVqe_stack_6->SetBinContent(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinContent(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.1376284);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.1994106);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1974492);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.04832419);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.1954681);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.03945654);
   hNCpi0inFVqe_stack_6->SetBinError(22,0.02789998);
   hNCpi0inFVqe_stack_6->SetBinError(23,0.02789998);
   hNCpi0inFVqe_stack_6->SetEntries(29);

   ci = 1530;
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
   hs8->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVres_stack_7->SetBinContent(1,1.101222);
   hNCpi0inFVres_stack_7->SetBinContent(2,2.452215);
   hNCpi0inFVres_stack_7->SetBinContent(3,5.907839);
   hNCpi0inFVres_stack_7->SetBinContent(4,11.55962);
   hNCpi0inFVres_stack_7->SetBinContent(5,16.79589);
   hNCpi0inFVres_stack_7->SetBinContent(6,14.98949);
   hNCpi0inFVres_stack_7->SetBinContent(7,16.82858);
   hNCpi0inFVres_stack_7->SetBinContent(8,13.70376);
   hNCpi0inFVres_stack_7->SetBinContent(9,13.95703);
   hNCpi0inFVres_stack_7->SetBinContent(10,11.16868);
   hNCpi0inFVres_stack_7->SetBinContent(11,10.74985);
   hNCpi0inFVres_stack_7->SetBinContent(12,7.334067);
   hNCpi0inFVres_stack_7->SetBinContent(13,6.118749);
   hNCpi0inFVres_stack_7->SetBinContent(14,5.826636);
   hNCpi0inFVres_stack_7->SetBinContent(15,4.698009);
   hNCpi0inFVres_stack_7->SetBinContent(16,4.37866);
   hNCpi0inFVres_stack_7->SetBinContent(17,3.430884);
   hNCpi0inFVres_stack_7->SetBinContent(18,4.337311);
   hNCpi0inFVres_stack_7->SetBinContent(19,3.203355);
   hNCpi0inFVres_stack_7->SetBinContent(20,3.622528);
   hNCpi0inFVres_stack_7->SetBinContent(21,2.913898);
   hNCpi0inFVres_stack_7->SetBinContent(22,4.461696);
   hNCpi0inFVres_stack_7->SetBinContent(23,3.180448);
   hNCpi0inFVres_stack_7->SetBinContent(24,1.324422);
   hNCpi0inFVres_stack_7->SetBinError(1,0.2893876);
   hNCpi0inFVres_stack_7->SetBinError(2,0.4488668);
   hNCpi0inFVres_stack_7->SetBinError(3,0.7235253);
   hNCpi0inFVres_stack_7->SetBinError(4,1.136229);
   hNCpi0inFVres_stack_7->SetBinError(5,1.434718);
   hNCpi0inFVres_stack_7->SetBinError(6,1.208304);
   hNCpi0inFVres_stack_7->SetBinError(7,1.332438);
   hNCpi0inFVres_stack_7->SetBinError(8,1.120099);
   hNCpi0inFVres_stack_7->SetBinError(9,1.242162);
   hNCpi0inFVres_stack_7->SetBinError(10,1.102089);
   hNCpi0inFVres_stack_7->SetBinError(11,1.066493);
   hNCpi0inFVres_stack_7->SetBinError(12,0.8001578);
   hNCpi0inFVres_stack_7->SetBinError(13,0.7039852);
   hNCpi0inFVres_stack_7->SetBinError(14,0.7608891);
   hNCpi0inFVres_stack_7->SetBinError(15,0.6694603);
   hNCpi0inFVres_stack_7->SetBinError(16,0.71921);
   hNCpi0inFVres_stack_7->SetBinError(17,0.6045948);
   hNCpi0inFVres_stack_7->SetBinError(18,0.7362798);
   hNCpi0inFVres_stack_7->SetBinError(19,0.4798101);
   hNCpi0inFVres_stack_7->SetBinError(20,0.6106796);
   hNCpi0inFVres_stack_7->SetBinError(21,0.5095134);
   hNCpi0inFVres_stack_7->SetBinError(22,0.7301308);
   hNCpi0inFVres_stack_7->SetBinError(23,0.5873981);
   hNCpi0inFVres_stack_7->SetBinError(24,0.299954);
   hNCpi0inFVres_stack_7->SetEntries(3289);

   ci = 1531;
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
   hs8->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVdis_stack_8->SetBinContent(1,0.488086);
   hNCpi0inFVdis_stack_8->SetBinContent(2,1.158022);
   hNCpi0inFVdis_stack_8->SetBinContent(3,1.868476);
   hNCpi0inFVdis_stack_8->SetBinContent(4,4.64537);
   hNCpi0inFVdis_stack_8->SetBinContent(5,3.695602);
   hNCpi0inFVdis_stack_8->SetBinContent(6,5.1577);
   hNCpi0inFVdis_stack_8->SetBinContent(7,4.893318);
   hNCpi0inFVdis_stack_8->SetBinContent(8,2.88683);
   hNCpi0inFVdis_stack_8->SetBinContent(9,2.45388);
   hNCpi0inFVdis_stack_8->SetBinContent(10,2.369348);
   hNCpi0inFVdis_stack_8->SetBinContent(11,1.630826);
   hNCpi0inFVdis_stack_8->SetBinContent(12,2.970202);
   hNCpi0inFVdis_stack_8->SetBinContent(13,0.6832176);
   hNCpi0inFVdis_stack_8->SetBinContent(14,1.338872);
   hNCpi0inFVdis_stack_8->SetBinContent(15,1.297522);
   hNCpi0inFVdis_stack_8->SetBinContent(16,1.100726);
   hNCpi0inFVdis_stack_8->SetBinContent(17,1.70058);
   hNCpi0inFVdis_stack_8->SetBinContent(18,1.618376);
   hNCpi0inFVdis_stack_8->SetBinContent(19,0.6968357);
   hNCpi0inFVdis_stack_8->SetBinContent(20,0.4744679);
   hNCpi0inFVdis_stack_8->SetBinContent(21,0.4872539);
   hNCpi0inFVdis_stack_8->SetBinContent(22,0.8087721);
   hNCpi0inFVdis_stack_8->SetBinContent(23,0.7807039);
   hNCpi0inFVdis_stack_8->SetBinContent(24,0.585404);
   hNCpi0inFVdis_stack_8->SetBinError(1,0.2304939);
   hNCpi0inFVdis_stack_8->SetBinError(2,0.3705767);
   hNCpi0inFVdis_stack_8->SetBinError(3,0.4212073);
   hNCpi0inFVdis_stack_8->SetBinError(4,0.7006612);
   hNCpi0inFVdis_stack_8->SetBinError(5,0.6161787);
   hNCpi0inFVdis_stack_8->SetBinError(6,0.7394442);
   hNCpi0inFVdis_stack_8->SetBinError(7,0.7734043);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.527344);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.4899121);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.4673461);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.3805083);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.5995311);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.1606779);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.3411366);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.3757913);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.3605507);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.4679709);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.4716302);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.1815295);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.2144572);
   hNCpi0inFVdis_stack_8->SetBinError(21,0.1840142);
   hNCpi0inFVdis_stack_8->SetBinError(22,0.3187231);
   hNCpi0inFVdis_stack_8->SetBinError(23,0.2608584);
   hNCpi0inFVdis_stack_8->SetBinError(24,0.2501964);
   hNCpi0inFVdis_stack_8->SetEntries(856);

   ci = 1532;
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
   hs8->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.02789998);
   hNCpi0inFVmec_stack_9->SetEntries(1);

   ci = 1533;
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
   hs8->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hCCpi0inFV_stack_10->SetBinContent(1,3.948204);
   hCCpi0inFV_stack_10->SetBinContent(2,4.8365);
   hCCpi0inFV_stack_10->SetBinContent(3,6.74871);
   hCCpi0inFV_stack_10->SetBinContent(4,10.49315);
   hCCpi0inFV_stack_10->SetBinContent(5,18.0307);
   hCCpi0inFV_stack_10->SetBinContent(6,24.72169);
   hCCpi0inFV_stack_10->SetBinContent(7,17.70111);
   hCCpi0inFV_stack_10->SetBinContent(8,19.58478);
   hCCpi0inFV_stack_10->SetBinContent(9,13.93529);
   hCCpi0inFV_stack_10->SetBinContent(10,16.17129);
   hCCpi0inFV_stack_10->SetBinContent(11,16.6813);
   hCCpi0inFV_stack_10->SetBinContent(12,7.758555);
   hCCpi0inFV_stack_10->SetBinContent(13,9.286332);
   hCCpi0inFV_stack_10->SetBinContent(14,5.131494);
   hCCpi0inFV_stack_10->SetBinContent(15,3.846358);
   hCCpi0inFV_stack_10->SetBinContent(16,6.48759);
   hCCpi0inFV_stack_10->SetBinContent(17,6.755808);
   hCCpi0inFV_stack_10->SetBinContent(18,3.857995);
   hCCpi0inFV_stack_10->SetBinContent(19,5.022709);
   hCCpi0inFV_stack_10->SetBinContent(20,5.231622);
   hCCpi0inFV_stack_10->SetBinContent(21,2.545466);
   hCCpi0inFV_stack_10->SetBinContent(22,8.613257);
   hCCpi0inFV_stack_10->SetBinContent(23,5.09048);
   hCCpi0inFV_stack_10->SetBinContent(24,3.403708);
   hCCpi0inFV_stack_10->SetBinError(1,1.056869);
   hCCpi0inFV_stack_10->SetBinError(2,1.0923);
   hCCpi0inFV_stack_10->SetBinError(3,1.271909);
   hCCpi0inFV_stack_10->SetBinError(4,1.617546);
   hCCpi0inFV_stack_10->SetBinError(5,2.113429);
   hCCpi0inFV_stack_10->SetBinError(6,2.513823);
   hCCpi0inFV_stack_10->SetBinError(7,2.140559);
   hCCpi0inFV_stack_10->SetBinError(8,2.260987);
   hCCpi0inFV_stack_10->SetBinError(9,1.931272);
   hCCpi0inFV_stack_10->SetBinError(10,2.051486);
   hCCpi0inFV_stack_10->SetBinError(11,2.066055);
   hCCpi0inFV_stack_10->SetBinError(12,1.430357);
   hCCpi0inFV_stack_10->SetBinError(13,1.52036);
   hCCpi0inFV_stack_10->SetBinError(14,1.101332);
   hCCpi0inFV_stack_10->SetBinError(15,0.9595996);
   hCCpi0inFV_stack_10->SetBinError(16,1.293643);
   hCCpi0inFV_stack_10->SetBinError(17,1.292296);
   hCCpi0inFV_stack_10->SetBinError(18,1.00081);
   hCCpi0inFV_stack_10->SetBinError(19,1.101274);
   hCCpi0inFV_stack_10->SetBinError(20,1.127464);
   hCCpi0inFV_stack_10->SetBinError(21,0.7059918);
   hCCpi0inFV_stack_10->SetBinError(22,1.470792);
   hCCpi0inFV_stack_10->SetBinError(23,1.158091);
   hCCpi0inFV_stack_10->SetBinError(24,0.9062487);
   hCCpi0inFV_stack_10->SetEntries(957);

   ci = 1534;
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
   hs8->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hNCinFV_stack_11->SetBinContent(1,0.5884556);
   hNCinFV_stack_11->SetBinContent(2,1.072095);
   hNCinFV_stack_11->SetBinContent(3,1.518779);
   hNCinFV_stack_11->SetBinContent(4,3.227512);
   hNCinFV_stack_11->SetBinContent(5,3.907867);
   hNCinFV_stack_11->SetBinContent(6,2.640747);
   hNCinFV_stack_11->SetBinContent(7,6.450561);
   hNCinFV_stack_11->SetBinContent(8,2.982615);
   hNCinFV_stack_11->SetBinContent(9,1.465526);
   hNCinFV_stack_11->SetBinContent(10,1.947476);
   hNCinFV_stack_11->SetBinContent(11,2.537621);
   hNCinFV_stack_11->SetBinContent(12,2.002419);
   hNCinFV_stack_11->SetBinContent(13,2.925981);
   hNCinFV_stack_11->SetBinContent(14,2.730956);
   hNCinFV_stack_11->SetBinContent(15,2.00411);
   hNCinFV_stack_11->SetBinContent(16,1.849274);
   hNCinFV_stack_11->SetBinContent(17,1.907138);
   hNCinFV_stack_11->SetBinContent(18,1.125349);
   hNCinFV_stack_11->SetBinContent(19,2.486059);
   hNCinFV_stack_11->SetBinContent(20,1.120277);
   hNCinFV_stack_11->SetBinContent(21,1.125349);
   hNCinFV_stack_11->SetBinContent(22,1.073786);
   hNCinFV_stack_11->SetBinContent(23,1.073786);
   hNCinFV_stack_11->SetBinContent(24,0.7834804);
   hNCinFV_stack_11->SetBinError(1,0.3397478);
   hNCinFV_stack_11->SetBinError(2,0.5551335);
   hNCinFV_stack_11->SetBinError(3,0.5892709);
   hNCinFV_stack_11->SetBinError(4,0.8547095);
   hNCinFV_stack_11->SetBinError(5,0.9808007);
   hNCinFV_stack_11->SetBinError(6,0.784705);
   hNCinFV_stack_11->SetBinError(7,1.287516);
   hNCinFV_stack_11->SetBinError(8,0.8556548);
   hNCinFV_stack_11->SetBinError(9,0.6209405);
   hNCinFV_stack_11->SetBinError(10,0.7600326);
   hNCinFV_stack_11->SetBinError(11,0.8329108);
   hNCinFV_stack_11->SetBinError(12,0.7348366);
   hNCinFV_stack_11->SetBinError(13,0.8770106);
   hNCinFV_stack_11->SetBinError(14,0.8550514);
   hNCinFV_stack_11->SetBinError(15,0.7352871);
   hNCinFV_stack_11->SetBinError(16,0.708638);
   hNCinFV_stack_11->SetBinError(17,0.6501133);
   hNCinFV_stack_11->SetBinError(18,0.5194673);
   hNCinFV_stack_11->SetBinError(19,0.8559962);
   hNCinFV_stack_11->SetBinError(20,0.5175515);
   hNCinFV_stack_11->SetBinError(21,0.5194673);
   hNCinFV_stack_11->SetBinError(22,0.5557297);
   hNCinFV_stack_11->SetBinError(23,0.5557297);
   hNCinFV_stack_11->SetBinError(24,0.3917439);
   hNCinFV_stack_11->SetEntries(213);

   ci = 1535;
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
   hs8->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnumuCCinFV_stack_12->SetBinContent(1,4.831565);
   hnumuCCinFV_stack_12->SetBinContent(2,3.386998);
   hnumuCCinFV_stack_12->SetBinContent(3,3.777436);
   hnumuCCinFV_stack_12->SetBinContent(4,8.189013);
   hnumuCCinFV_stack_12->SetBinContent(5,8.315125);
   hnumuCCinFV_stack_12->SetBinContent(6,8.236065);
   hnumuCCinFV_stack_12->SetBinContent(7,9.295917);
   hnumuCCinFV_stack_12->SetBinContent(8,6.073151);
   hnumuCCinFV_stack_12->SetBinContent(9,11.08875);
   hnumuCCinFV_stack_12->SetBinContent(10,7.318324);
   hnumuCCinFV_stack_12->SetBinContent(11,6.441206);
   hnumuCCinFV_stack_12->SetBinContent(12,6.451434);
   hnumuCCinFV_stack_12->SetBinContent(13,6.292423);
   hnumuCCinFV_stack_12->SetBinContent(14,5.2508);
   hnumuCCinFV_stack_12->SetBinContent(15,5.294159);
   hnumuCCinFV_stack_12->SetBinContent(16,4.397234);
   hnumuCCinFV_stack_12->SetBinContent(17,4.361063);
   hnumuCCinFV_stack_12->SetBinContent(18,2.857691);
   hnumuCCinFV_stack_12->SetBinContent(19,2.68967);
   hnumuCCinFV_stack_12->SetBinContent(20,4.515137);
   hnumuCCinFV_stack_12->SetBinContent(21,1.821543);
   hnumuCCinFV_stack_12->SetBinContent(22,1.381554);
   hnumuCCinFV_stack_12->SetBinContent(23,3.092182);
   hnumuCCinFV_stack_12->SetBinContent(24,2.353209);
   hnumuCCinFV_stack_12->SetBinError(1,1.324147);
   hnumuCCinFV_stack_12->SetBinError(2,0.9354561);
   hnumuCCinFV_stack_12->SetBinError(3,1.037259);
   hnumuCCinFV_stack_12->SetBinError(4,1.505648);
   hnumuCCinFV_stack_12->SetBinError(5,1.800038);
   hnumuCCinFV_stack_12->SetBinError(6,1.482552);
   hnumuCCinFV_stack_12->SetBinError(7,1.966905);
   hnumuCCinFV_stack_12->SetBinError(8,1.242532);
   hnumuCCinFV_stack_12->SetBinError(9,2.548103);
   hnumuCCinFV_stack_12->SetBinError(10,1.480302);
   hnumuCCinFV_stack_12->SetBinError(11,1.341751);
   hnumuCCinFV_stack_12->SetBinError(12,1.215935);
   hnumuCCinFV_stack_12->SetBinError(13,1.294516);
   hnumuCCinFV_stack_12->SetBinError(14,1.300401);
   hnumuCCinFV_stack_12->SetBinError(15,1.165111);
   hnumuCCinFV_stack_12->SetBinError(16,1.075151);
   hnumuCCinFV_stack_12->SetBinError(17,0.9759455);
   hnumuCCinFV_stack_12->SetBinError(18,0.9046538);
   hnumuCCinFV_stack_12->SetBinError(19,0.8351427);
   hnumuCCinFV_stack_12->SetBinError(20,1.100934);
   hnumuCCinFV_stack_12->SetBinError(21,0.7141512);
   hnumuCCinFV_stack_12->SetBinError(22,0.5776002);
   hnumuCCinFV_stack_12->SetBinError(23,2.288868);
   hnumuCCinFV_stack_12->SetBinError(24,0.8246514);
   hnumuCCinFV_stack_12->SetEntries(501);

   ci = 1536;
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
   hs8->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hnueCCinFV_stack_13->SetBinContent(1,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(2,0.8501212);
   hnueCCinFV_stack_13->SetBinContent(5,2.269064);
   hnueCCinFV_stack_13->SetBinContent(6,0.5884556);
   hnueCCinFV_stack_13->SetBinContent(7,1.498003);
   hnueCCinFV_stack_13->SetBinContent(8,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(10,0.3992549);
   hnueCCinFV_stack_13->SetBinContent(15,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(16,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(21,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(23,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(24,0.3025491);
   hnueCCinFV_stack_13->SetBinError(1,0.1967154);
   hnueCCinFV_stack_13->SetBinError(2,0.5347523);
   hnueCCinFV_stack_13->SetBinError(5,1.307659);
   hnueCCinFV_stack_13->SetBinError(6,0.3397478);
   hnueCCinFV_stack_13->SetBinError(7,0.8684435);
   hnueCCinFV_stack_13->SetBinError(8,0.1967154);
   hnueCCinFV_stack_13->SetBinError(10,0.2899389);
   hnueCCinFV_stack_13->SetBinError(15,0.1967154);
   hnueCCinFV_stack_13->SetBinError(16,0.1967154);
   hnueCCinFV_stack_13->SetBinError(21,0.1967154);
   hnueCCinFV_stack_13->SetBinError(23,0.1967154);
   hnueCCinFV_stack_13->SetBinError(24,0.3025491);
   hnueCCinFV_stack_13->SetEntries(24);

   ci = 1537;
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
   hs8->Add(hnueCCinFV_stack_13,"");
   hs8->Draw("hist same");
   
   TH1F *hmcerror__23 = new TH1F("hmcerror__23","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);
   hmcerror__23->SetBinContent(1,24.51117);
   hmcerror__23->SetBinContent(2,32.71564);
   hmcerror__23->SetBinContent(3,41.5208);
   hmcerror__23->SetBinContent(4,73.42458);
   hmcerror__23->SetBinContent(5,99.71391);
   hmcerror__23->SetBinContent(6,100.1604);
   hmcerror__23->SetBinContent(7,90.63266);
   hmcerror__23->SetBinContent(8,77.07607);
   hmcerror__23->SetBinContent(9,71.5516);
   hmcerror__23->SetBinContent(10,59.04832);
   hmcerror__23->SetBinContent(11,67.98077);
   hmcerror__23->SetBinContent(12,48.14019);
   hmcerror__23->SetBinContent(13,45.24007);
   hmcerror__23->SetBinContent(14,36.06527);
   hmcerror__23->SetBinContent(15,36.1168);
   hmcerror__23->SetBinContent(16,37.16487);
   hmcerror__23->SetBinContent(17,32.1495);
   hmcerror__23->SetBinContent(18,26.2191);
   hmcerror__23->SetBinContent(19,27.131);
   hmcerror__23->SetBinContent(20,27.52275);
   hmcerror__23->SetBinContent(21,29.10786);
   hmcerror__23->SetBinContent(22,29.24771);
   hmcerror__23->SetBinContent(23,26.22553);
   hmcerror__23->SetBinContent(24,15.59131);
   hmcerror__23->SetBinError(1,13.15431);
   hmcerror__23->SetBinError(2,13.79787);
   hmcerror__23->SetBinError(3,17.74079);
   hmcerror__23->SetBinError(4,22.62716);
   hmcerror__23->SetBinError(5,31.91573);
   hmcerror__23->SetBinError(6,37.25415);
   hmcerror__23->SetBinError(7,29.15191);
   hmcerror__23->SetBinError(8,22.96855);
   hmcerror__23->SetBinError(9,22.62356);
   hmcerror__23->SetBinError(10,22.37478);
   hmcerror__23->SetBinError(11,23.74156);
   hmcerror__23->SetBinError(12,17.09906);
   hmcerror__23->SetBinError(13,14.84006);
   hmcerror__23->SetBinError(14,13.7509);
   hmcerror__23->SetBinError(15,13.66619);
   hmcerror__23->SetBinError(16,25.62096);
   hmcerror__23->SetBinError(17,14.74243);
   hmcerror__23->SetBinError(18,21.56577);
   hmcerror__23->SetBinError(19,22.36439);
   hmcerror__23->SetBinError(20,22.69834);
   hmcerror__23->SetBinError(21,19.69685);
   hmcerror__23->SetBinError(22,17.88085);
   hmcerror__23->SetBinError(23,20.52361);
   hmcerror__23->SetBinError(24,11.17732);
   hmcerror__23->SetBinError(25,0.3895343);
   hmcerror__23->SetEntries(1133.738);

   ci = TColor::GetColor("#999999");
   hmcerror__23->SetFillColor(ci);
   hmcerror__23->SetFillStyle(3002);
   hmcerror__23->SetLineColor(12);
   hmcerror__23->SetLineWidth(0);
   hmcerror__23->SetMarkerColor(0);
   hmcerror__23->SetMarkerSize(0);
   hmcerror__23->GetXaxis()->SetLabelFont(42);
   hmcerror__23->GetXaxis()->SetTitleOffset(1);
   hmcerror__23->GetXaxis()->SetTitleFont(42);
   hmcerror__23->GetYaxis()->SetLabelFont(42);
   hmcerror__23->GetYaxis()->SetTitleFont(42);
   hmcerror__23->GetZaxis()->SetLabelFont(42);
   hmcerror__23->GetZaxis()->SetTitleOffset(1);
   hmcerror__23->GetZaxis()->SetTitleFont(42);
   hmcerror__23->Draw("same E2");
   
   Double_t _fx3029[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3029[24] = {
   30,
   34,
   41,
   63,
   94,
   80,
   73,
   77,
   65,
   58,
   54,
   44,
   36,
   51,
   31,
   36,
   25,
   23,
   29,
   28,
   32,
   28,
   34,
   7};
   Double_t _felx3029[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3029[24] = {
   5.6197,
   5.9703,
   6.5384,
   8.0648,
   9.8173,
   9.0683,
   8.6693,
   8.8995,
   8.1893,
   7.7446,
   7.4785,
   6.7671,
   6.1381,
   7.2725,
   5.7094,
   6.1381,
   5.1474,
   4.9457,
   5.5285,
   5.4358,
   5.7977,
   5.4358,
   5.9703,
   2.85954};
   Double_t _fehx3029[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3029[24] = {
   5.4117,
   5.7635,
   6.3331,
   7.862,
   9.616,
   8.8665,
   8.4672,
   8.6976,
   7.9866,
   7.5415,
   7.275,
   6.5623,
   5.9318,
   7.0686,
   5.5017,
   5.9318,
   4.9374,
   4.7346,
   5.3201,
   5.2271,
   5.5904,
   5.2271,
   5.7635,
   2.61053};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(24,_fx3029,_fy3029,_felx3029,_fehx3029,_fely3029,_fehy3029);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3029 = new TH1F("Graph_Graph3029","",100,0,3.465);
   Graph_Graph3029->SetMinimum(3.726414);
   Graph_Graph3029->SetMaximum(113.5636);
   Graph_Graph3029->SetDirectory(0);
   Graph_Graph3029->SetStats(0);
   Graph_Graph3029->SetLineWidth(2);
   Graph_Graph3029->SetMarkerStyle(20);
   Graph_Graph3029->GetXaxis()->SetNdivisions(509);
   Graph_Graph3029->GetXaxis()->SetLabelFont(132);
   Graph_Graph3029->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetXaxis()->SetTitleFont(132);
   Graph_Graph3029->GetYaxis()->SetNdivisions(509);
   Graph_Graph3029->GetYaxis()->SetLabelFont(132);
   Graph_Graph3029->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3029->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3029->GetYaxis()->SetTitleFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelFont(132);
   Graph_Graph3029->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3029->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3029->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3029);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.93#pm0.17","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=4.5/24","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1073.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.2","F");

   ci = 1525;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 200.4","F");

   ci = 1526;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 21.4","F");

   ci = 1527;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 246.1","F");

   ci = 1528;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  14.7","F");

   ci = 1529;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  1.5","F");

   ci = 1530;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  174.0","F");

   ci = 1531;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  45.8","F");

   ci = 1532;
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

   ci = 1533;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 225.9","F");

   ci = 1534;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 50.5","F");

   ci = 1535;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 127.7","F");

   ci = 1536;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 7.1","F");

   ci = 1537;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all");
   pt->Draw();
   pad1->Modified();
   canvas8->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-0.4851,-0.5333333,3.5574,2.133333);
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
   
   Double_t _fx3030[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3030[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3030[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3030[24] = {
   0.536666,
   0.4217515,
   0.4272748,
   0.3081688,
   0.320073,
   0.371945,
   0.3216491,
   0.2979985,
   0.3161853,
   0.3789232,
   0.3492393,
   0.355193,
   0.328029,
   0.3812782,
   0.3783887,
   0.6893865,
   0.4585585,
   0.8225211,
   0.8243113,
   0.8247119,
   0.6766847,
   0.6113592,
   0.7825814,
   0.7168938};
   Double_t _fehx3030[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3030[24] = {
   0.536666,
   0.4217515,
   0.4272748,
   0.3081688,
   0.320073,
   0.371945,
   0.3216491,
   0.2979985,
   0.3161853,
   0.3789232,
   0.3492393,
   0.355193,
   0.328029,
   0.3812782,
   0.3783887,
   0.6893865,
   0.4585585,
   0.8225211,
   0.8243113,
   0.8247119,
   0.6766847,
   0.6113592,
   0.7825814,
   0.7168938};
   grae = new TGraphAsymmErrors(24,_fx3030,_fy3030,_felx3030,_fehx3030,_fely3030,_fehy3030);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3030 = new TH1F("Graph_Graph3030","",100,0,3.465);
   Graph_Graph3030->SetMinimum(0);
   Graph_Graph3030->SetMaximum(2);
   Graph_Graph3030->SetDirectory(0);
   Graph_Graph3030->SetStats(0);
   Graph_Graph3030->SetLineWidth(2);
   Graph_Graph3030->SetMarkerStyle(20);
   Graph_Graph3030->GetXaxis()->SetTitle("Angle between photons #theta_{#gamma #gamma} [red]");
   Graph_Graph3030->GetXaxis()->SetRange(1,91);
   Graph_Graph3030->GetXaxis()->SetNdivisions(509);
   Graph_Graph3030->GetXaxis()->SetLabelFont(132);
   Graph_Graph3030->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3030->GetXaxis()->SetTitleFont(132);
   Graph_Graph3030->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3030->GetYaxis()->SetNdivisions(210);
   Graph_Graph3030->GetYaxis()->SetLabelFont(132);
   Graph_Graph3030->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3030->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3030->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3030->GetYaxis()->SetTitleFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelFont(132);
   Graph_Graph3030->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3030->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3030->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3030);
   
   grae->Draw("a2");
   
   Double_t _fx3031[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3031[24] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3031[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3031[24] = {
   0.196209,
   0.1683088,
   0.1867492,
   0.1811003,
   0.1908902,
   0.1982457,
   0.1964928,
   0.1850136,
   0.1915042,
   0.2061755,
   0.1785868,
   0.1928471,
   0.1925531,
   0.1954291,
   0.1880244,
   0.1799921,
   0.1716448,
   0.2121033,
   0.2106231,
   0.2000715,
   0.1759751,
   0.2138662,
   0.2415867,
   0.2306464};
   Double_t _fehx3031[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3031[24] = {
   0.196209,
   0.1683088,
   0.1867492,
   0.1811003,
   0.1908902,
   0.1982457,
   0.1964928,
   0.1850136,
   0.1915042,
   0.2061755,
   0.1785868,
   0.1928471,
   0.1925531,
   0.1954291,
   0.1880244,
   0.1799921,
   0.1716448,
   0.2121033,
   0.2106231,
   0.2000715,
   0.1759751,
   0.2138662,
   0.2415867,
   0.2306464};
   grae = new TGraphAsymmErrors(24,_fx3031,_fy3031,_felx3031,_fehx3031,_fely3031,_fehy3031);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3031 = new TH1F("Graph_Graph3031","",100,0,3.465);
   Graph_Graph3031->SetMinimum(0);
   Graph_Graph3031->SetMaximum(2);
   Graph_Graph3031->SetDirectory(0);
   Graph_Graph3031->SetStats(0);
   Graph_Graph3031->SetLineWidth(2);
   Graph_Graph3031->SetMarkerStyle(20);
   Graph_Graph3031->GetXaxis()->SetRange(1,91);
   Graph_Graph3031->GetXaxis()->SetNdivisions(509);
   Graph_Graph3031->GetXaxis()->SetLabelFont(132);
   Graph_Graph3031->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetXaxis()->SetTitleFont(132);
   Graph_Graph3031->GetYaxis()->SetNdivisions(509);
   Graph_Graph3031->GetYaxis()->SetLabelFont(132);
   Graph_Graph3031->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3031->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3031->GetYaxis()->SetTitleFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelFont(132);
   Graph_Graph3031->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3031->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3031->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3031);
   
   grae->Draw("2 ");
   
   Double_t _fx3032[24] = {
   0.065625,
   0.196875,
   0.328125,
   0.459375,
   0.590625,
   0.721875,
   0.853125,
   0.984375,
   1.115625,
   1.246875,
   1.378125,
   1.509375,
   1.640625,
   1.771875,
   1.903125,
   2.034375,
   2.165625,
   2.296875,
   2.428125,
   2.559375,
   2.690625,
   2.821875,
   2.953125,
   3.084375};
   Double_t _fy3032[24] = {
   1.223932,
   1.039258,
   0.9874569,
   0.8580233,
   0.9426969,
   0.7987191,
   0.8054492,
   0.999013,
   0.9084353,
   0.9822463,
   0.7943422,
   0.9139973,
   0.7957547,
   1.414103,
   0.8583263,
   0.9686568,
   0.7776171,
   0.8772229,
   1.068888,
   1.01734,
   1.099359,
   0.95734,
   1.296447,
   0.4489679};
   Double_t _felx3032[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fely3032[24] = {
   0.229271,
   0.1824907,
   0.1574729,
   0.1098379,
   0.09845467,
   0.0905378,
   0.09565316,
   0.1154638,
   0.1144531,
   0.131157,
   0.110009,
   0.1405707,
   0.1356784,
   0.2016483,
   0.1580815,
   0.1651587,
   0.1601083,
   0.1886296,
   0.2037706,
   0.1975021,
   0.1991799,
   0.1858539,
   0.2276522,
   0.183406};
   Double_t _fehx3032[24] = {
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625,
   0.065625};
   Double_t _fehy3032[24] = {
   0.220785,
   0.1761695,
   0.1525284,
   0.1070759,
   0.09643589,
   0.08852304,
   0.09342328,
   0.1128444,
   0.1116201,
   0.1277174,
   0.1070156,
   0.1363165,
   0.1311183,
   0.1959947,
   0.1523308,
   0.1596077,
   0.1535763,
   0.1805782,
   0.1960894,
   0.1899193,
   0.1920581,
   0.1787183,
   0.2197668,
   0.1674349};
   grae = new TGraphAsymmErrors(24,_fx3032,_fy3032,_felx3032,_fehx3032,_fely3032,_fehy3032);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3032 = new TH1F("Graph_Graph3032","",100,0,3.465);
   Graph_Graph3032->SetMinimum(0.1311084);
   Graph_Graph3032->SetMaximum(1.744551);
   Graph_Graph3032->SetDirectory(0);
   Graph_Graph3032->SetStats(0);
   Graph_Graph3032->SetLineWidth(2);
   Graph_Graph3032->SetMarkerStyle(20);
   Graph_Graph3032->GetXaxis()->SetNdivisions(509);
   Graph_Graph3032->GetXaxis()->SetLabelFont(132);
   Graph_Graph3032->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetXaxis()->SetTitleFont(132);
   Graph_Graph3032->GetYaxis()->SetNdivisions(509);
   Graph_Graph3032->GetYaxis()->SetLabelFont(132);
   Graph_Graph3032->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3032->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3032->GetYaxis()->SetTitleFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelFont(132);
   Graph_Graph3032->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3032->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3032->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3032);
   
   grae->Draw("p ");
   
   TH1F *hist__24 = new TH1F("hist__24","NCpi0BDT_PC_0p_bnb_12_gamma_gamma_angle_all",24,0,3.15);

   ci = TColor::GetColor("#000099");
   hist__24->SetLineColor(ci);
   hist__24->GetXaxis()->SetLabelFont(42);
   hist__24->GetXaxis()->SetTitleOffset(1);
   hist__24->GetXaxis()->SetTitleFont(42);
   hist__24->GetYaxis()->SetNdivisions(405);
   hist__24->GetYaxis()->SetLabelFont(42);
   hist__24->GetYaxis()->SetTitleFont(42);
   hist__24->GetZaxis()->SetLabelFont(42);
   hist__24->GetZaxis()->SetTitleOffset(1);
   hist__24->GetZaxis()->SetTitleFont(42);
   hist__24->Draw("axis same");
   TLine *line = new TLine(0,1,3.15,1);
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
   canvas8->cd();
   canvas8->Modified();
   canvas8->cd();
   canvas8->SetSelected(canvas8);
}
