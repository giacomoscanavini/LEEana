#ifdef __CLING__
#pragma cling optimize(0)
#endif
void canvas7()
{
//=========Macro generated from canvas: canvas7/channel7
//=========  (Sat Oct 22 21:27:23 2022) by ROOT version 6.26/00
   TCanvas *canvas7 = new TCanvas("canvas7", "channel7",164,172,1200,900);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   canvas7->SetHighLightColor(2);
   canvas7->Range(0,0,1,1);
   canvas7->SetFillColor(0);
   canvas7->SetBorderMode(0);
   canvas7->SetBorderSize(2);
   canvas7->SetLeftMargin(0.12);
   canvas7->SetRightMargin(0.12);
   canvas7->SetTopMargin(0.05);
   canvas7->SetBottomMargin(0.12);
   canvas7->SetFrameLineWidth(2);
   canvas7->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0.01,0.3,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-7.692308,-8.282195,56.41026,915.8365);
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
   
   TH1F *hmc__19 = new TH1F("hmc__19","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmc__19->SetBinContent(1,414.1098);
   hmc__19->SetBinContent(2,168.818);
   hmc__19->SetBinContent(3,166.5611);
   hmc__19->SetBinContent(4,155.3881);
   hmc__19->SetBinContent(5,145.7193);
   hmc__19->SetBinContent(6,124.8419);
   hmc__19->SetBinContent(7,123.2114);
   hmc__19->SetBinContent(8,106.003);
   hmc__19->SetBinContent(9,99.5951);
   hmc__19->SetBinContent(10,87.4974);
   hmc__19->SetBinContent(11,72.81489);
   hmc__19->SetBinContent(12,70.50356);
   hmc__19->SetBinContent(13,57.40128);
   hmc__19->SetBinContent(14,51.35605);
   hmc__19->SetBinContent(15,49.56983);
   hmc__19->SetBinContent(16,50.3984);
   hmc__19->SetBinContent(17,46.28985);
   hmc__19->SetBinContent(18,39.75604);
   hmc__19->SetBinContent(19,32.70086);
   hmc__19->SetBinContent(20,26.88254);
   hmc__19->SetBinContent(21,299.6381);
   hmc__19->SetBinError(1,112.7161);
   hmc__19->SetBinError(2,71.32833);
   hmc__19->SetBinError(3,68.05104);
   hmc__19->SetBinError(4,60.539);
   hmc__19->SetBinError(5,59.18406);
   hmc__19->SetBinError(6,53.33217);
   hmc__19->SetBinError(7,50.17455);
   hmc__19->SetBinError(8,42.55777);
   hmc__19->SetBinError(9,40.77067);
   hmc__19->SetBinError(10,35.85729);
   hmc__19->SetBinError(11,31.40347);
   hmc__19->SetBinError(12,27.94618);
   hmc__19->SetBinError(13,25.50436);
   hmc__19->SetBinError(14,21.40041);
   hmc__19->SetBinError(15,24.40093);
   hmc__19->SetBinError(16,19.01715);
   hmc__19->SetBinError(17,23.00412);
   hmc__19->SetBinError(18,16.34506);
   hmc__19->SetBinError(19,13.77157);
   hmc__19->SetBinError(20,15.4159);
   hmc__19->SetBinError(21,95.67571);
   hmc__19->SetMinimum(-8.282195);
   hmc__19->SetMaximum(869.6305);
   hmc__19->SetEntries(2811.899);
   hmc__19->SetLineWidth(5);
   hmc__19->GetXaxis()->SetLabelFont(42);
   hmc__19->GetXaxis()->SetTitleOffset(1);
   hmc__19->GetXaxis()->SetTitleFont(42);
   hmc__19->GetYaxis()->SetTitle("Event counts");
   hmc__19->GetYaxis()->SetLabelFont(132);
   hmc__19->GetYaxis()->SetLabelSize(0.04);
   hmc__19->GetYaxis()->SetTitleSize(0.05);
   hmc__19->GetYaxis()->SetTitleOffset(0.73);
   hmc__19->GetYaxis()->SetTitleFont(132);
   hmc__19->GetZaxis()->SetLabelFont(42);
   hmc__19->GetZaxis()->SetTitleOffset(1);
   hmc__19->GetZaxis()->SetTitleFont(42);
   hmc__19->Draw("hist");
   
   THStack *hs7 = new THStack();
   hs7->SetName("hs7");
   hs7->SetTitle("");
   
   TH1F *hs7_stack_7 = new TH1F("hs7_stack_7","",20,0,50);
   hs7_stack_7->SetMinimum(-6.289654e-09);
   hs7_stack_7->SetMaximum(434.8153);
   hs7_stack_7->SetDirectory(0);
   hs7_stack_7->SetStats(0);
   hs7_stack_7->SetLineWidth(2);
   hs7_stack_7->SetMarkerStyle(20);
   hs7_stack_7->GetXaxis()->SetNdivisions(509);
   hs7_stack_7->GetXaxis()->SetLabelFont(132);
   hs7_stack_7->GetXaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetXaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetXaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetXaxis()->SetTitleFont(132);
   hs7_stack_7->GetYaxis()->SetNdivisions(509);
   hs7_stack_7->GetYaxis()->SetLabelFont(132);
   hs7_stack_7->GetYaxis()->SetLabelOffset(0.01);
   hs7_stack_7->GetYaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetYaxis()->SetTitleOffset(0.95);
   hs7_stack_7->GetYaxis()->SetTitleFont(132);
   hs7_stack_7->GetZaxis()->SetLabelFont(132);
   hs7_stack_7->GetZaxis()->SetLabelSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleSize(0.08);
   hs7_stack_7->GetZaxis()->SetTitleOffset(1.2);
   hs7_stack_7->GetZaxis()->SetTitleFont(132);
   hs7->SetHistogram(hs7_stack_7);
   
   
   TH1F *hbadmatch_stack_1 = new TH1F("hbadmatch_stack_1","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hbadmatch_stack_1->SetBinContent(1,6.349503);
   hbadmatch_stack_1->SetBinContent(2,1.312963);
   hbadmatch_stack_1->SetBinContent(3,1.754924);
   hbadmatch_stack_1->SetBinContent(4,1.557567);
   hbadmatch_stack_1->SetBinContent(5,3.409768);
   hbadmatch_stack_1->SetBinContent(6,2.340804);
   hbadmatch_stack_1->SetBinContent(7,2.920604);
   hbadmatch_stack_1->SetBinContent(8,1.23115);
   hbadmatch_stack_1->SetBinContent(9,1.331547);
   hbadmatch_stack_1->SetBinContent(10,1.667333);
   hbadmatch_stack_1->SetBinContent(11,2.682169);
   hbadmatch_stack_1->SetBinContent(12,0.4638724);
   hbadmatch_stack_1->SetBinContent(13,2.1176);
   hbadmatch_stack_1->SetBinContent(14,1.184636);
   hbadmatch_stack_1->SetBinContent(15,1.88091);
   hbadmatch_stack_1->SetBinContent(16,1.044039);
   hbadmatch_stack_1->SetBinContent(17,2.306413);
   hbadmatch_stack_1->SetBinContent(18,3.084553);
   hbadmatch_stack_1->SetBinContent(20,0.9144416);
   hbadmatch_stack_1->SetBinContent(21,15.27543);
   hbadmatch_stack_1->SetBinError(1,1.357859);
   hbadmatch_stack_1->SetBinError(2,0.5791449);
   hbadmatch_stack_1->SetBinError(3,0.6564838);
   hbadmatch_stack_1->SetBinError(4,0.6149676);
   hbadmatch_stack_1->SetBinError(5,0.8845656);
   hbadmatch_stack_1->SetBinError(6,0.8623396);
   hbadmatch_stack_1->SetBinError(7,0.8531469);
   hbadmatch_stack_1->SetBinError(8,0.7280097);
   hbadmatch_stack_1->SetBinError(9,0.5101819);
   hbadmatch_stack_1->SetBinError(10,0.6779042);
   hbadmatch_stack_1->SetBinError(11,0.8663407);
   hbadmatch_stack_1->SetBinError(12,0.3619685);
   hbadmatch_stack_1->SetBinError(13,1.229562);
   hbadmatch_stack_1->SetBinError(14,0.5433107);
   hbadmatch_stack_1->SetBinError(15,0.827325);
   hbadmatch_stack_1->SetBinError(16,0.5112695);
   hbadmatch_stack_1->SetBinError(17,0.981597);
   hbadmatch_stack_1->SetBinError(18,2.025334);
   hbadmatch_stack_1->SetBinError(20,0.6674579);
   hbadmatch_stack_1->SetBinError(21,2.041581);
   hbadmatch_stack_1->SetEntries(226);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 1512;
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
   hs7->Add(hbadmatch_stack_1,"");
   
   TH1F *hext_stack_2 = new TH1F("hext_stack_2","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hext_stack_2->SetBinContent(1,54.36813);
   hext_stack_2->SetBinContent(2,4.285006);
   hext_stack_2->SetBinContent(3,6.553016);
   hext_stack_2->SetBinContent(4,10.68962);
   hext_stack_2->SetBinContent(5,5.344809);
   hext_stack_2->SetBinContent(6,5.109793);
   hext_stack_2->SetBinContent(7,5.262607);
   hext_stack_2->SetBinContent(8,6.978384);
   hext_stack_2->SetBinContent(9,6.240208);
   hext_stack_2->SetBinContent(10,9.537661);
   hext_stack_2->SetBinContent(11,3.483397);
   hext_stack_2->SetBinContent(12,5.311677);
   hext_stack_2->SetBinContent(13,4.195624);
   hext_stack_2->SetBinContent(14,5.89704);
   hext_stack_2->SetBinContent(15,1.461993);
   hext_stack_2->SetBinContent(16,5.40106);
   hext_stack_2->SetBinContent(17,6.594905);
   hext_stack_2->SetBinContent(18,5.650435);
   hext_stack_2->SetBinContent(19,7.478716);
   hext_stack_2->SetBinContent(20,2.517386);
   hext_stack_2->SetBinContent(21,26.06643);
   hext_stack_2->SetBinError(1,5.304307);
   hext_stack_2->SetBinError(2,1.35297);
   hext_stack_2->SetBinError(3,1.703963);
   hext_stack_2->SetBinError(4,2.163997);
   hext_stack_2->SetBinError(5,1.530177);
   hext_stack_2->SetBinError(6,1.447444);
   hext_stack_2->SetBinError(7,1.510415);
   hext_stack_2->SetBinError(8,1.673777);
   hext_stack_2->SetBinError(9,1.65293);
   hext_stack_2->SetBinError(10,2.156248);
   hext_stack_2->SetBinError(11,1.197416);
   hext_stack_2->SetBinError(12,1.735259);
   hext_stack_2->SetBinError(13,1.404152);
   hext_stack_2->SetBinError(14,1.701242);
   hext_stack_2->SetBinError(15,0.7356036);
   hext_stack_2->SetBinError(16,1.694111);
   hext_stack_2->SetBinError(17,1.958178);
   hext_stack_2->SetBinError(18,1.647409);
   hext_stack_2->SetBinError(19,2.071539);
   hext_stack_2->SetBinError(20,0.9575503);
   hext_stack_2->SetBinError(21,3.350596);
   hext_stack_2->SetEntries(428);

   ci = 1513;
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
   hs7->Add(hext_stack_2,"");
   
   TH1F *hdirt_stack_3 = new TH1F("hdirt_stack_3","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hdirt_stack_3->SetBinContent(1,2.685086);
   hdirt_stack_3->SetBinContent(2,0.7759784);
   hdirt_stack_3->SetBinContent(4,0.3569671);
   hdirt_stack_3->SetBinContent(5,0.3569671);
   hdirt_stack_3->SetBinContent(6,0.1651799);
   hdirt_stack_3->SetBinContent(7,0.5288571);
   hdirt_stack_3->SetBinContent(8,0.185975);
   hdirt_stack_3->SetBinContent(9,0.7759784);
   hdirt_stack_3->SetBinContent(10,0.2188956);
   hdirt_stack_3->SetBinContent(11,0.3595223);
   hdirt_stack_3->SetBinContent(13,0.2188956);
   hdirt_stack_3->SetBinContent(14,0.3381872);
   hdirt_stack_3->SetBinContent(16,0.2620342);
   hdirt_stack_3->SetBinContent(17,0.4377912);
   hdirt_stack_3->SetBinContent(18,0.5570828);
   hdirt_stack_3->SetBinContent(21,3.233392);
   hdirt_stack_3->SetBinError(1,1.177209);
   hdirt_stack_3->SetBinError(2,0.458477);
   hdirt_stack_3->SetBinError(4,0.258803);
   hdirt_stack_3->SetBinError(5,0.258803);
   hdirt_stack_3->SetBinError(6,0.1651799);
   hdirt_stack_3->SetBinError(7,0.3101058);
   hdirt_stack_3->SetBinError(8,0.185975);
   hdirt_stack_3->SetBinError(9,0.458477);
   hdirt_stack_3->SetBinError(10,0.2188956);
   hdirt_stack_3->SetBinError(11,0.2588156);
   hdirt_stack_3->SetBinError(13,0.2188956);
   hdirt_stack_3->SetBinError(14,0.3381872);
   hdirt_stack_3->SetBinError(16,0.2620342);
   hdirt_stack_3->SetBinError(17,0.3095651);
   hdirt_stack_3->SetBinError(18,0.4028472);
   hdirt_stack_3->SetBinError(21,0.8822802);
   hdirt_stack_3->SetEntries(50);

   ci = 1514;
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
   hs7->Add(hdirt_stack_3,"");
   
   TH1F *houtFV_stack_4 = new TH1F("houtFV_stack_4","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   houtFV_stack_4->SetBinContent(1,14.50924);
   houtFV_stack_4->SetBinContent(2,1.310308);
   houtFV_stack_4->SetBinContent(3,3.354685);
   houtFV_stack_4->SetBinContent(4,3.275076);
   houtFV_stack_4->SetBinContent(5,3.873779);
   houtFV_stack_4->SetBinContent(6,2.020603);
   houtFV_stack_4->SetBinContent(7,4.3977);
   houtFV_stack_4->SetBinContent(8,6.370481);
   houtFV_stack_4->SetBinContent(9,3.781431);
   houtFV_stack_4->SetBinContent(10,3.040972);
   houtFV_stack_4->SetBinContent(11,3.89202);
   houtFV_stack_4->SetBinContent(12,3.578422);
   houtFV_stack_4->SetBinContent(13,1.7054);
   houtFV_stack_4->SetBinContent(14,2.009665);
   houtFV_stack_4->SetBinContent(15,2.858071);
   houtFV_stack_4->SetBinContent(16,3.007799);
   houtFV_stack_4->SetBinContent(17,2.803234);
   houtFV_stack_4->SetBinContent(18,0.7089153);
   houtFV_stack_4->SetBinContent(19,1.942981);
   houtFV_stack_4->SetBinContent(20,0.9303237);
   houtFV_stack_4->SetBinContent(21,17.45124);
   houtFV_stack_4->SetBinError(1,1.862266);
   houtFV_stack_4->SetBinError(2,0.5539859);
   houtFV_stack_4->SetBinError(3,0.8543616);
   houtFV_stack_4->SetBinError(4,0.8281752);
   houtFV_stack_4->SetBinError(5,1.036965);
   houtFV_stack_4->SetBinError(6,0.7027278);
   houtFV_stack_4->SetBinError(7,0.9756653);
   houtFV_stack_4->SetBinError(8,1.257987);
   houtFV_stack_4->SetBinError(9,0.9125756);
   houtFV_stack_4->SetBinError(10,0.8456162);
   houtFV_stack_4->SetBinError(11,1.014715);
   houtFV_stack_4->SetBinError(12,0.9759546);
   houtFV_stack_4->SetBinError(13,0.5977437);
   houtFV_stack_4->SetBinError(14,0.702113);
   houtFV_stack_4->SetBinError(15,0.7463138);
   houtFV_stack_4->SetBinError(16,0.8507695);
   houtFV_stack_4->SetBinError(17,0.8863887);
   houtFV_stack_4->SetBinError(18,0.3601208);
   houtFV_stack_4->SetBinError(19,0.6931043);
   houtFV_stack_4->SetBinError(20,0.4814682);
   houtFV_stack_4->SetBinError(21,2.083838);
   houtFV_stack_4->SetEntries(411);

   ci = 1515;
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
   hs7->Add(houtFV_stack_4,"");
   
   TH1F *hNCpi0inFVcoh_stack_5 = new TH1F("hNCpi0inFVcoh_stack_5","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVcoh_stack_5->SetBinContent(1,1.534166);
   hNCpi0inFVcoh_stack_5->SetBinContent(2,0.08354614);
   hNCpi0inFVcoh_stack_5->SetBinContent(3,0.1035923);
   hNCpi0inFVcoh_stack_5->SetBinContent(5,0.3022023);
   hNCpi0inFVcoh_stack_5->SetBinContent(6,0.5695716);
   hNCpi0inFVcoh_stack_5->SetBinContent(7,0.05370995);
   hNCpi0inFVcoh_stack_5->SetBinContent(8,0.06437642);
   hNCpi0inFVcoh_stack_5->SetBinContent(9,0.02258423);
   hNCpi0inFVcoh_stack_5->SetBinContent(10,0.1640856);
   hNCpi0inFVcoh_stack_5->SetBinContent(11,0.263487);
   hNCpi0inFVcoh_stack_5->SetBinContent(12,0.2153073);
   hNCpi0inFVcoh_stack_5->SetBinContent(14,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinContent(15,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinContent(16,0.06839793);
   hNCpi0inFVcoh_stack_5->SetBinContent(17,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinContent(18,0.02802275);
   hNCpi0inFVcoh_stack_5->SetBinContent(19,0.2978544);
   hNCpi0inFVcoh_stack_5->SetBinContent(20,0.1263783);
   hNCpi0inFVcoh_stack_5->SetBinContent(21,0.3589201);
   hNCpi0inFVcoh_stack_5->SetBinError(1,0.3967213);
   hNCpi0inFVcoh_stack_5->SetBinError(2,0.05257109);
   hNCpi0inFVcoh_stack_5->SetBinError(3,0.06063609);
   hNCpi0inFVcoh_stack_5->SetBinError(5,0.1565366);
   hNCpi0inFVcoh_stack_5->SetBinError(6,0.2465234);
   hNCpi0inFVcoh_stack_5->SetBinError(7,0.05370994);
   hNCpi0inFVcoh_stack_5->SetBinError(8,0.04590059);
   hNCpi0inFVcoh_stack_5->SetBinError(9,0.01677252);
   hNCpi0inFVcoh_stack_5->SetBinError(10,0.1321719);
   hNCpi0inFVcoh_stack_5->SetBinError(11,0.1430668);
   hNCpi0inFVcoh_stack_5->SetBinError(12,0.1667974);
   hNCpi0inFVcoh_stack_5->SetBinError(14,0.0977462);
   hNCpi0inFVcoh_stack_5->SetBinError(15,0.04049794);
   hNCpi0inFVcoh_stack_5->SetBinError(16,0.04917817);
   hNCpi0inFVcoh_stack_5->SetBinError(17,0.03635368);
   hNCpi0inFVcoh_stack_5->SetBinError(18,0.02802274);
   hNCpi0inFVcoh_stack_5->SetBinError(19,0.2000671);
   hNCpi0inFVcoh_stack_5->SetBinError(20,0.06402);
   hNCpi0inFVcoh_stack_5->SetBinError(21,0.1893772);
   hNCpi0inFVcoh_stack_5->SetEntries(87);

   ci = 1516;
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
   hs7->Add(hNCpi0inFVcoh_stack_5,"");
   
   TH1F *hNCpi0inFVqe_stack_6 = new TH1F("hNCpi0inFVqe_stack_6","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVqe_stack_6->SetBinContent(1,1.064394);
   hNCpi0inFVqe_stack_6->SetBinContent(2,0.8339489);
   hNCpi0inFVqe_stack_6->SetBinContent(3,1.015564);
   hNCpi0inFVqe_stack_6->SetBinContent(4,0.8244421);
   hNCpi0inFVqe_stack_6->SetBinContent(5,0.5280355);
   hNCpi0inFVqe_stack_6->SetBinContent(6,0.8009741);
   hNCpi0inFVqe_stack_6->SetBinContent(7,0.5642503);
   hNCpi0inFVqe_stack_6->SetBinContent(8,0.4371509);
   hNCpi0inFVqe_stack_6->SetBinContent(9,0.4829498);
   hNCpi0inFVqe_stack_6->SetBinContent(10,0.4441414);
   hNCpi0inFVqe_stack_6->SetBinContent(11,0.5186947);
   hNCpi0inFVqe_stack_6->SetBinContent(12,0.3479243);
   hNCpi0inFVqe_stack_6->SetBinContent(13,0.1569632);
   hNCpi0inFVqe_stack_6->SetBinContent(14,0.2455393);
   hNCpi0inFVqe_stack_6->SetBinContent(15,0.3869528);
   hNCpi0inFVqe_stack_6->SetBinContent(16,0.5379033);
   hNCpi0inFVqe_stack_6->SetBinContent(17,0.250042);
   hNCpi0inFVqe_stack_6->SetBinContent(18,0.06534888);
   hNCpi0inFVqe_stack_6->SetBinContent(19,0.3350514);
   hNCpi0inFVqe_stack_6->SetBinContent(20,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinContent(21,1.087285);
   hNCpi0inFVqe_stack_6->SetBinError(1,0.257883);
   hNCpi0inFVqe_stack_6->SetBinError(2,0.2355602);
   hNCpi0inFVqe_stack_6->SetBinError(3,0.307756);
   hNCpi0inFVqe_stack_6->SetBinError(4,0.2632506);
   hNCpi0inFVqe_stack_6->SetBinError(5,0.2224676);
   hNCpi0inFVqe_stack_6->SetBinError(6,0.2206157);
   hNCpi0inFVqe_stack_6->SetBinError(7,0.2061375);
   hNCpi0inFVqe_stack_6->SetBinError(8,0.1424801);
   hNCpi0inFVqe_stack_6->SetBinError(9,0.2251796);
   hNCpi0inFVqe_stack_6->SetBinError(10,0.1814541);
   hNCpi0inFVqe_stack_6->SetBinError(11,0.2034395);
   hNCpi0inFVqe_stack_6->SetBinError(12,0.1304214);
   hNCpi0inFVqe_stack_6->SetBinError(13,0.07212551);
   hNCpi0inFVqe_stack_6->SetBinError(14,0.1365432);
   hNCpi0inFVqe_stack_6->SetBinError(15,0.1930092);
   hNCpi0inFVqe_stack_6->SetBinError(16,0.2667614);
   hNCpi0inFVqe_stack_6->SetBinError(17,0.112229);
   hNCpi0inFVqe_stack_6->SetBinError(18,0.03933638);
   hNCpi0inFVqe_stack_6->SetBinError(19,0.2852789);
   hNCpi0inFVqe_stack_6->SetBinError(20,0.01754354);
   hNCpi0inFVqe_stack_6->SetBinError(21,0.2648568);
   hNCpi0inFVqe_stack_6->SetEntries(314);

   ci = 1517;
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
   hs7->Add(hNCpi0inFVqe_stack_6,"");
   
   TH1F *hNCpi0inFVres_stack_7 = new TH1F("hNCpi0inFVres_stack_7","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVres_stack_7->SetBinContent(1,144.1402);
   hNCpi0inFVres_stack_7->SetBinContent(2,70.7518);
   hNCpi0inFVres_stack_7->SetBinContent(3,72.28375);
   hNCpi0inFVres_stack_7->SetBinContent(4,64.17081);
   hNCpi0inFVres_stack_7->SetBinContent(5,61.35396);
   hNCpi0inFVres_stack_7->SetBinContent(6,56.73462);
   hNCpi0inFVres_stack_7->SetBinContent(7,50.75548);
   hNCpi0inFVres_stack_7->SetBinContent(8,41.75911);
   hNCpi0inFVres_stack_7->SetBinContent(9,39.15082);
   hNCpi0inFVres_stack_7->SetBinContent(10,35.55927);
   hNCpi0inFVres_stack_7->SetBinContent(11,30.26346);
   hNCpi0inFVres_stack_7->SetBinContent(12,26.81694);
   hNCpi0inFVres_stack_7->SetBinContent(13,23.40123);
   hNCpi0inFVres_stack_7->SetBinContent(14,20.6816);
   hNCpi0inFVres_stack_7->SetBinContent(15,20.092);
   hNCpi0inFVres_stack_7->SetBinContent(16,17.29718);
   hNCpi0inFVres_stack_7->SetBinContent(17,14.19734);
   hNCpi0inFVres_stack_7->SetBinContent(18,14.06316);
   hNCpi0inFVres_stack_7->SetBinContent(19,10.25021);
   hNCpi0inFVres_stack_7->SetBinContent(20,9.621166);
   hNCpi0inFVres_stack_7->SetBinContent(21,90.79813);
   hNCpi0inFVres_stack_7->SetBinError(1,3.862278);
   hNCpi0inFVres_stack_7->SetBinError(2,2.477569);
   hNCpi0inFVres_stack_7->SetBinError(3,2.481808);
   hNCpi0inFVres_stack_7->SetBinError(4,2.314955);
   hNCpi0inFVres_stack_7->SetBinError(5,2.301189);
   hNCpi0inFVres_stack_7->SetBinError(6,2.372871);
   hNCpi0inFVres_stack_7->SetBinError(7,2.126504);
   hNCpi0inFVres_stack_7->SetBinError(8,1.923284);
   hNCpi0inFVres_stack_7->SetBinError(9,1.782503);
   hNCpi0inFVres_stack_7->SetBinError(10,1.881776);
   hNCpi0inFVres_stack_7->SetBinError(11,1.602903);
   hNCpi0inFVres_stack_7->SetBinError(12,1.668287);
   hNCpi0inFVres_stack_7->SetBinError(13,1.411896);
   hNCpi0inFVres_stack_7->SetBinError(14,1.487597);
   hNCpi0inFVres_stack_7->SetBinError(15,1.351965);
   hNCpi0inFVres_stack_7->SetBinError(16,1.289543);
   hNCpi0inFVres_stack_7->SetBinError(17,1.070426);
   hNCpi0inFVres_stack_7->SetBinError(18,1.235001);
   hNCpi0inFVres_stack_7->SetBinError(19,0.9244313);
   hNCpi0inFVres_stack_7->SetBinError(20,0.8761014);
   hNCpi0inFVres_stack_7->SetBinError(21,3.088846);
   hNCpi0inFVres_stack_7->SetEntries(24018);

   ci = 1518;
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
   hs7->Add(hNCpi0inFVres_stack_7,"");
   
   TH1F *hNCpi0inFVdis_stack_8 = new TH1F("hNCpi0inFVdis_stack_8","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVdis_stack_8->SetBinContent(1,37.73309);
   hNCpi0inFVdis_stack_8->SetBinContent(2,15.49326);
   hNCpi0inFVdis_stack_8->SetBinContent(3,13.13718);
   hNCpi0inFVdis_stack_8->SetBinContent(4,14.41127);
   hNCpi0inFVdis_stack_8->SetBinContent(5,13.51707);
   hNCpi0inFVdis_stack_8->SetBinContent(6,12.76962);
   hNCpi0inFVdis_stack_8->SetBinContent(7,10.40827);
   hNCpi0inFVdis_stack_8->SetBinContent(8,9.78628);
   hNCpi0inFVdis_stack_8->SetBinContent(9,8.566587);
   hNCpi0inFVdis_stack_8->SetBinContent(10,6.715954);
   hNCpi0inFVdis_stack_8->SetBinContent(11,5.324808);
   hNCpi0inFVdis_stack_8->SetBinContent(12,6.897227);
   hNCpi0inFVdis_stack_8->SetBinContent(13,4.927688);
   hNCpi0inFVdis_stack_8->SetBinContent(14,3.780078);
   hNCpi0inFVdis_stack_8->SetBinContent(15,3.944435);
   hNCpi0inFVdis_stack_8->SetBinContent(16,3.104122);
   hNCpi0inFVdis_stack_8->SetBinContent(17,3.669235);
   hNCpi0inFVdis_stack_8->SetBinContent(18,2.574158);
   hNCpi0inFVdis_stack_8->SetBinContent(19,2.888424);
   hNCpi0inFVdis_stack_8->SetBinContent(20,2.241302);
   hNCpi0inFVdis_stack_8->SetBinContent(21,19.72752);
   hNCpi0inFVdis_stack_8->SetBinError(1,2.138084);
   hNCpi0inFVdis_stack_8->SetBinError(2,1.328115);
   hNCpi0inFVdis_stack_8->SetBinError(3,1.260397);
   hNCpi0inFVdis_stack_8->SetBinError(4,1.431004);
   hNCpi0inFVdis_stack_8->SetBinError(5,1.286755);
   hNCpi0inFVdis_stack_8->SetBinError(6,1.126639);
   hNCpi0inFVdis_stack_8->SetBinError(7,1.120016);
   hNCpi0inFVdis_stack_8->SetBinError(8,0.9539187);
   hNCpi0inFVdis_stack_8->SetBinError(9,0.8619478);
   hNCpi0inFVdis_stack_8->SetBinError(10,0.7388538);
   hNCpi0inFVdis_stack_8->SetBinError(11,0.6423877);
   hNCpi0inFVdis_stack_8->SetBinError(12,0.9789358);
   hNCpi0inFVdis_stack_8->SetBinError(13,0.7666306);
   hNCpi0inFVdis_stack_8->SetBinError(14,0.5999064);
   hNCpi0inFVdis_stack_8->SetBinError(15,0.6252396);
   hNCpi0inFVdis_stack_8->SetBinError(16,0.617779);
   hNCpi0inFVdis_stack_8->SetBinError(17,0.7387941);
   hNCpi0inFVdis_stack_8->SetBinError(18,0.389556);
   hNCpi0inFVdis_stack_8->SetBinError(19,0.6269313);
   hNCpi0inFVdis_stack_8->SetBinError(20,0.3769035);
   hNCpi0inFVdis_stack_8->SetBinError(21,1.405572);
   hNCpi0inFVdis_stack_8->SetEntries(4594);

   ci = 1519;
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
   hs7->Add(hNCpi0inFVdis_stack_8,"");
   
   TH1F *hNCpi0inFVmec_stack_9 = new TH1F("hNCpi0inFVmec_stack_9","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCpi0inFVmec_stack_9->SetBinContent(1,0.03450397);
   hNCpi0inFVmec_stack_9->SetBinContent(2,0.164166);
   hNCpi0inFVmec_stack_9->SetBinContent(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinContent(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinContent(5,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinContent(7,0.05273242);
   hNCpi0inFVmec_stack_9->SetBinContent(8,0.05293922);
   hNCpi0inFVmec_stack_9->SetBinContent(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinContent(10,0.08385543);
   hNCpi0inFVmec_stack_9->SetBinContent(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinContent(14,0.150234);
   hNCpi0inFVmec_stack_9->SetBinContent(16,0.01822845);
   hNCpi0inFVmec_stack_9->SetBinContent(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinContent(18,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinContent(21,0.03645691);
   hNCpi0inFVmec_stack_9->SetBinError(1,0.02449786);
   hNCpi0inFVmec_stack_9->SetBinError(2,0.1302849);
   hNCpi0inFVmec_stack_9->SetBinError(3,0.01830775);
   hNCpi0inFVmec_stack_9->SetBinError(4,0.01568944);
   hNCpi0inFVmec_stack_9->SetBinError(5,0.01071203);
   hNCpi0inFVmec_stack_9->SetBinError(7,0.03053558);
   hNCpi0inFVmec_stack_9->SetBinError(8,0.0435647);
   hNCpi0inFVmec_stack_9->SetBinError(9,0.1099207);
   hNCpi0inFVmec_stack_9->SetBinError(10,0.0681115);
   hNCpi0inFVmec_stack_9->SetBinError(13,0.01841896);
   hNCpi0inFVmec_stack_9->SetBinError(14,0.1330957);
   hNCpi0inFVmec_stack_9->SetBinError(16,0.01822846);
   hNCpi0inFVmec_stack_9->SetBinError(17,0.01881452);
   hNCpi0inFVmec_stack_9->SetBinError(18,0.007068991);
   hNCpi0inFVmec_stack_9->SetBinError(21,0.02577893);
   hNCpi0inFVmec_stack_9->SetEntries(24);

   ci = 1520;
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
   hs7->Add(hNCpi0inFVmec_stack_9,"");
   
   TH1F *hCCpi0inFV_stack_10 = new TH1F("hCCpi0inFV_stack_10","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hCCpi0inFV_stack_10->SetBinContent(1,56.00903);
   hCCpi0inFV_stack_10->SetBinContent(2,28.95693);
   hCCpi0inFV_stack_10->SetBinContent(3,24.62097);
   hCCpi0inFV_stack_10->SetBinContent(4,28.32981);
   hCCpi0inFV_stack_10->SetBinContent(5,24.34791);
   hCCpi0inFV_stack_10->SetBinContent(6,21.69522);
   hCCpi0inFV_stack_10->SetBinContent(7,19.69288);
   hCCpi0inFV_stack_10->SetBinContent(8,18.17838);
   hCCpi0inFV_stack_10->SetBinContent(9,21.04851);
   hCCpi0inFV_stack_10->SetBinContent(10,15.73121);
   hCCpi0inFV_stack_10->SetBinContent(11,14.10699);
   hCCpi0inFV_stack_10->SetBinContent(12,10.22687);
   hCCpi0inFV_stack_10->SetBinContent(13,9.435947);
   hCCpi0inFV_stack_10->SetBinContent(14,7.320759);
   hCCpi0inFV_stack_10->SetBinContent(15,9.412069);
   hCCpi0inFV_stack_10->SetBinContent(16,8.345425);
   hCCpi0inFV_stack_10->SetBinContent(17,7.657666);
   hCCpi0inFV_stack_10->SetBinContent(18,5.034906);
   hCCpi0inFV_stack_10->SetBinContent(19,4.663433);
   hCCpi0inFV_stack_10->SetBinContent(20,4.983344);
   hCCpi0inFV_stack_10->SetBinContent(21,43.98621);
   hCCpi0inFV_stack_10->SetBinError(1,3.793795);
   hCCpi0inFV_stack_10->SetBinError(2,2.719643);
   hCCpi0inFV_stack_10->SetBinError(3,2.439323);
   hCCpi0inFV_stack_10->SetBinError(4,2.742213);
   hCCpi0inFV_stack_10->SetBinError(5,2.499958);
   hCCpi0inFV_stack_10->SetBinError(6,2.31405);
   hCCpi0inFV_stack_10->SetBinError(7,2.180138);
   hCCpi0inFV_stack_10->SetBinError(8,2.099417);
   hCCpi0inFV_stack_10->SetBinError(9,2.344944);
   hCCpi0inFV_stack_10->SetBinError(10,1.941282);
   hCCpi0inFV_stack_10->SetBinError(11,1.886514);
   hCCpi0inFV_stack_10->SetBinError(12,1.615437);
   hCCpi0inFV_stack_10->SetBinError(13,1.480723);
   hCCpi0inFV_stack_10->SetBinError(14,1.336876);
   hCCpi0inFV_stack_10->SetBinError(15,1.524746);
   hCCpi0inFV_stack_10->SetBinError(16,1.461822);
   hCCpi0inFV_stack_10->SetBinError(17,1.42814);
   hCCpi0inFV_stack_10->SetBinError(18,1.11017);
   hCCpi0inFV_stack_10->SetBinError(19,1.054725);
   hCCpi0inFV_stack_10->SetBinError(20,1.127594);
   hCCpi0inFV_stack_10->SetBinError(21,3.3522);
   hCCpi0inFV_stack_10->SetEntries(1641);

   ci = 1521;
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
   hs7->Add(hCCpi0inFV_stack_10,"");
   
   TH1F *hNCinFV_stack_11 = new TH1F("hNCinFV_stack_11","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hNCinFV_stack_11->SetBinContent(1,44.64932);
   hNCinFV_stack_11->SetBinContent(2,18.87618);
   hNCinFV_stack_11->SetBinContent(3,19.36303);
   hNCinFV_stack_11->SetBinContent(4,12.26461);
   hNCinFV_stack_11->SetBinContent(5,17.74175);
   hNCinFV_stack_11->SetBinContent(6,10.01271);
   hNCinFV_stack_11->SetBinContent(7,12.59482);
   hNCinFV_stack_11->SetBinContent(8,10.0049);
   hNCinFV_stack_11->SetBinContent(9,7.718222);
   hNCinFV_stack_11->SetBinContent(10,7.808512);
   hNCinFV_stack_11->SetBinContent(11,6.453647);
   hNCinFV_stack_11->SetBinContent(12,6.363923);
   hNCinFV_stack_11->SetBinContent(13,6.330261);
   hNCinFV_stack_11->SetBinContent(14,4.505641);
   hNCinFV_stack_11->SetBinContent(15,5.409245);
   hNCinFV_stack_11->SetBinContent(16,7.435548);
   hNCinFV_stack_11->SetBinContent(17,5.286347);
   hNCinFV_stack_11->SetBinContent(18,3.515864);
   hNCinFV_stack_11->SetBinContent(19,2.175177);
   hNCinFV_stack_11->SetBinContent(20,2.606694);
   hNCinFV_stack_11->SetBinContent(21,36.51608);
   hNCinFV_stack_11->SetBinError(1,3.571195);
   hNCinFV_stack_11->SetBinError(2,2.561566);
   hNCinFV_stack_11->SetBinError(3,2.681771);
   hNCinFV_stack_11->SetBinError(4,1.887244);
   hNCinFV_stack_11->SetBinError(5,2.402202);
   hNCinFV_stack_11->SetBinError(6,1.56712);
   hNCinFV_stack_11->SetBinError(7,1.95447);
   hNCinFV_stack_11->SetBinError(8,1.664409);
   hNCinFV_stack_11->SetBinError(9,1.390586);
   hNCinFV_stack_11->SetBinError(10,1.397781);
   hNCinFV_stack_11->SetBinError(11,1.287153);
   hNCinFV_stack_11->SetBinError(12,1.571566);
   hNCinFV_stack_11->SetBinError(13,1.417236);
   hNCinFV_stack_11->SetBinError(14,1.004842);
   hNCinFV_stack_11->SetBinError(15,1.379879);
   hNCinFV_stack_11->SetBinError(16,1.93053);
   hNCinFV_stack_11->SetBinError(17,1.159952);
   hNCinFV_stack_11->SetBinError(18,1.029205);
   hNCinFV_stack_11->SetBinError(19,0.7490832);
   hNCinFV_stack_11->SetBinError(20,0.6894974);
   hNCinFV_stack_11->SetBinError(21,3.338868);
   hNCinFV_stack_11->SetEntries(1026);

   ci = 1522;
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
   hs7->Add(hNCinFV_stack_11,"");
   
   TH1F *hnumuCCinFV_stack_12 = new TH1F("hnumuCCinFV_stack_12","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnumuCCinFV_stack_12->SetBinContent(1,43.75296);
   hnumuCCinFV_stack_12->SetBinContent(2,25.52844);
   hnumuCCinFV_stack_12->SetBinContent(3,23.17348);
   hnumuCCinFV_stack_12->SetBinContent(4,18.16282);
   hnumuCCinFV_stack_12->SetBinContent(5,14.39545);
   hnumuCCinFV_stack_12->SetBinContent(6,12.62284);
   hnumuCCinFV_stack_12->SetBinContent(7,15.53577);
   hnumuCCinFV_stack_12->SetBinContent(8,10.9539);
   hnumuCCinFV_stack_12->SetBinContent(9,10.36633);
   hnumuCCinFV_stack_12->SetBinContent(10,6.525505);
   hnumuCCinFV_stack_12->SetBinContent(11,5.052727);
   hnumuCCinFV_stack_12->SetBinContent(12,10.08468);
   hnumuCCinFV_stack_12->SetBinContent(13,4.553079);
   hnumuCCinFV_stack_12->SetBinContent(14,5.144921);
   hnumuCCinFV_stack_12->SetBinContent(15,4.083661);
   hnumuCCinFV_stack_12->SetBinContent(16,3.876655);
   hnumuCCinFV_stack_12->SetBinContent(17,2.437826);
   hnumuCCinFV_stack_12->SetBinContent(18,4.466524);
   hnumuCCinFV_stack_12->SetBinContent(19,2.473985);
   hnumuCCinFV_stack_12->SetBinContent(20,2.923961);
   hnumuCCinFV_stack_12->SetBinContent(21,44.27108);
   hnumuCCinFV_stack_12->SetBinError(1,3.951381);
   hnumuCCinFV_stack_12->SetBinError(2,2.906422);
   hnumuCCinFV_stack_12->SetBinError(3,3.096227);
   hnumuCCinFV_stack_12->SetBinError(4,3.372176);
   hnumuCCinFV_stack_12->SetBinError(5,1.94231);
   hnumuCCinFV_stack_12->SetBinError(6,1.816925);
   hnumuCCinFV_stack_12->SetBinError(7,2.609386);
   hnumuCCinFV_stack_12->SetBinError(8,1.795836);
   hnumuCCinFV_stack_12->SetBinError(9,2.194837);
   hnumuCCinFV_stack_12->SetBinError(10,1.261254);
   hnumuCCinFV_stack_12->SetBinError(11,1.267172);
   hnumuCCinFV_stack_12->SetBinError(12,1.876192);
   hnumuCCinFV_stack_12->SetBinError(13,1.043699);
   hnumuCCinFV_stack_12->SetBinError(14,1.206958);
   hnumuCCinFV_stack_12->SetBinError(15,1.034645);
   hnumuCCinFV_stack_12->SetBinError(16,0.9670684);
   hnumuCCinFV_stack_12->SetBinError(17,0.7576744);
   hnumuCCinFV_stack_12->SetBinError(18,1.13701);
   hnumuCCinFV_stack_12->SetBinError(19,0.716689);
   hnumuCCinFV_stack_12->SetBinError(20,0.9182057);
   hnumuCCinFV_stack_12->SetBinError(21,3.582122);
   hnumuCCinFV_stack_12->SetEntries(1066);

   ci = 1523;
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
   hs7->Add(hnumuCCinFV_stack_12,"");
   
   TH1F *hnueCCinFV_stack_13 = new TH1F("hnueCCinFV_stack_13","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hnueCCinFV_stack_13->SetBinContent(1,7.28017);
   hnueCCinFV_stack_13->SetBinContent(2,0.4454695);
   hnueCCinFV_stack_13->SetBinContent(3,1.182553);
   hnueCCinFV_stack_13->SetBinContent(4,1.32943);
   hnueCCinFV_stack_13->SetBinContent(5,0.536893);
   hnueCCinFV_stack_13->SetBinContent(7,0.4436897);
   hnueCCinFV_stack_13->SetBinContent(11,0.4139598);
   hnueCCinFV_stack_13->SetBinContent(12,0.1967154);
   hnueCCinFV_stack_13->SetBinContent(13,0.3401776);
   hnueCCinFV_stack_13->SetBinContent(17,0.5938826);
   hnueCCinFV_stack_13->SetBinContent(19,0.1950248);
   hnueCCinFV_stack_13->SetBinContent(21,0.8299222);
   hnueCCinFV_stack_13->SetBinError(1,1.375963);
   hnueCCinFV_stack_13->SetBinError(2,0.3174228);
   hnueCCinFV_stack_13->SetBinError(3,0.7285135);
   hnueCCinFV_stack_13->SetBinError(4,0.61171);
   hnueCCinFV_stack_13->SetBinError(5,0.3929602);
   hnueCCinFV_stack_13->SetBinError(7,0.3160204);
   hnueCCinFV_stack_13->SetBinError(11,0.4139598);
   hnueCCinFV_stack_13->SetBinError(12,0.1967154);
   hnueCCinFV_stack_13->SetBinError(13,0.3401776);
   hnueCCinFV_stack_13->SetBinError(17,0.4243666);
   hnueCCinFV_stack_13->SetBinError(19,0.1950249);
   hnueCCinFV_stack_13->SetBinError(21,0.4997377);
   hnueCCinFV_stack_13->SetEntries(54);

   ci = 1524;
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
   hs7->Add(hnueCCinFV_stack_13,"");
   hs7->Draw("hist same");
   
   TH1F *hmcerror__20 = new TH1F("hmcerror__20","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);
   hmcerror__20->SetBinContent(1,414.1098);
   hmcerror__20->SetBinContent(2,168.818);
   hmcerror__20->SetBinContent(3,166.5611);
   hmcerror__20->SetBinContent(4,155.3881);
   hmcerror__20->SetBinContent(5,145.7193);
   hmcerror__20->SetBinContent(6,124.8419);
   hmcerror__20->SetBinContent(7,123.2114);
   hmcerror__20->SetBinContent(8,106.003);
   hmcerror__20->SetBinContent(9,99.5951);
   hmcerror__20->SetBinContent(10,87.4974);
   hmcerror__20->SetBinContent(11,72.81489);
   hmcerror__20->SetBinContent(12,70.50356);
   hmcerror__20->SetBinContent(13,57.40128);
   hmcerror__20->SetBinContent(14,51.35605);
   hmcerror__20->SetBinContent(15,49.56983);
   hmcerror__20->SetBinContent(16,50.3984);
   hmcerror__20->SetBinContent(17,46.28985);
   hmcerror__20->SetBinContent(18,39.75604);
   hmcerror__20->SetBinContent(19,32.70086);
   hmcerror__20->SetBinContent(20,26.88254);
   hmcerror__20->SetBinContent(21,299.6381);
   hmcerror__20->SetBinError(1,112.7161);
   hmcerror__20->SetBinError(2,71.32833);
   hmcerror__20->SetBinError(3,68.05104);
   hmcerror__20->SetBinError(4,60.539);
   hmcerror__20->SetBinError(5,59.18406);
   hmcerror__20->SetBinError(6,53.33217);
   hmcerror__20->SetBinError(7,50.17455);
   hmcerror__20->SetBinError(8,42.55777);
   hmcerror__20->SetBinError(9,40.77067);
   hmcerror__20->SetBinError(10,35.85729);
   hmcerror__20->SetBinError(11,31.40347);
   hmcerror__20->SetBinError(12,27.94618);
   hmcerror__20->SetBinError(13,25.50436);
   hmcerror__20->SetBinError(14,21.40041);
   hmcerror__20->SetBinError(15,24.40093);
   hmcerror__20->SetBinError(16,19.01715);
   hmcerror__20->SetBinError(17,23.00412);
   hmcerror__20->SetBinError(18,16.34506);
   hmcerror__20->SetBinError(19,13.77157);
   hmcerror__20->SetBinError(20,15.4159);
   hmcerror__20->SetBinError(21,95.67571);
   hmcerror__20->SetEntries(2811.899);

   ci = TColor::GetColor("#999999");
   hmcerror__20->SetFillColor(ci);
   hmcerror__20->SetFillStyle(3002);
   hmcerror__20->SetLineColor(12);
   hmcerror__20->SetLineWidth(0);
   hmcerror__20->SetMarkerColor(0);
   hmcerror__20->SetMarkerSize(0);
   hmcerror__20->GetXaxis()->SetLabelFont(42);
   hmcerror__20->GetXaxis()->SetTitleOffset(1);
   hmcerror__20->GetXaxis()->SetTitleFont(42);
   hmcerror__20->GetYaxis()->SetLabelFont(42);
   hmcerror__20->GetYaxis()->SetTitleFont(42);
   hmcerror__20->GetZaxis()->SetLabelFont(42);
   hmcerror__20->GetZaxis()->SetTitleOffset(1);
   hmcerror__20->GetZaxis()->SetTitleFont(42);
   hmcerror__20->Draw("same E2");
   
   Double_t _fx3025[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3025[20] = {
   308,
   141,
   132,
   148,
   124,
   130,
   100,
   96,
   96,
   87,
   76,
   61,
   39,
   52,
   35,
   32,
   45,
   47,
   29,
   27};
   Double_t _felx3025[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3025[20] = {
   17.54993,
   11.87434,
   11.48913,
   12.16553,
   11.13553,
   11.40175,
   10.1212,
   9.9196,
   9.9196,
   9.4503,
   8.8425,
   7.9383,
   6.3813,
   7.3419,
   6.0548,
   5.7977,
   6.8416,
   6.9882,
   5.5285,
   5.3414};
   Double_t _fehx3025[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3025[20] = {
   17.54993,
   11.87434,
   11.48913,
   12.16553,
   11.13553,
   11.40175,
   9.92,
   9.718,
   9.718,
   9.2488,
   8.6406,
   7.7354,
   6.1757,
   7.1381,
   5.8483,
   5.5904,
   6.637,
   6.7839,
   5.3201,
   5.1322};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(20,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,55);
   Graph_Graph3025->SetMinimum(19.49274);
   Graph_Graph3025->SetMaximum(355.9391);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineWidth(2);
   Graph_Graph3025->SetMarkerStyle(20);
   Graph_Graph3025->GetXaxis()->SetNdivisions(509);
   Graph_Graph3025->GetXaxis()->SetLabelFont(132);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetXaxis()->SetTitleFont(132);
   Graph_Graph3025->GetYaxis()->SetNdivisions(509);
   Graph_Graph3025->GetYaxis()->SetLabelFont(132);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3025->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3025->GetYaxis()->SetTitleFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelFont(132);
   Graph_Graph3025->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3025->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3025->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.25,0.6,0.85,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","#SigmaData/#SigmaPrediction=0.86#pm0.30","h");
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
   entry=leg->AddEntry("NULL","#chi^{2}/ndf=9.0/20","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","BNB Data, 1805.0","lp");
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
   entry=leg->AddEntry("hbadmatch_stack_1","Cosmic, 39.6","F");

   ci = 1512;
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
   entry=leg->AddEntry("hext_stack_2","EXT, 162.4","F");

   ci = 1513;
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
   entry=leg->AddEntry("hdirt_stack_3","Dirt, 8.2","F");

   ci = 1514;
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
   entry=leg->AddEntry("houtFV_stack_4","Out FV, 69.4","F");

   ci = 1515;
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
   entry=leg->AddEntry("hNCpi0inFVcoh_stack_5","NC#pi^{0} COH,  4.1","F");

   ci = 1516;
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
   entry=leg->AddEntry("hNCpi0inFVqe_stack_6","NC#pi^{0} QE,  9.9","F");

   ci = 1517;
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
   entry=leg->AddEntry("hNCpi0inFVres_stack_7","NC#pi^{0} RES,  823.3","F");

   ci = 1518;
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
   entry=leg->AddEntry("hNCpi0inFVdis_stack_8","NC#pi^{0} DIS,  181.9","F");

   ci = 1519;
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
   entry=leg->AddEntry("hNCpi0inFVmec_stack_9","NC#pi^{0} MEC,  0.8","F");

   ci = 1520;
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
   entry=leg->AddEntry("hCCpi0inFV_stack_10","CC#pi^{0}, 339.8","F");

   ci = 1521;
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
   entry=leg->AddEntry("hNCinFV_stack_11","NC Other, 211.1","F");

   ci = 1522;
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
   entry=leg->AddEntry("hnumuCCinFV_stack_12","CC Other, 226.1","F");

   ci = 1523;
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
   entry=leg->AddEntry("hnueCCinFV_stack_13","#nu_{e}/#bar{#nu}_{e} CC, 13.0","F");

   ci = 1524;
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
   TText *pt_LaTex = pt->AddText("NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all");
   pt->Draw();
   pad1->Modified();
   canvas7->cd();
  
// ------------>Primitives in pad: pad2
   TPad *pad2 = new TPad("pad2", "",0.01,0.01,0.99,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-7.7,-0.5333333,56.46667,2.133333);
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
   
   Double_t _fx3026[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3026[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3026[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3026[20] = {
   0.272189,
   0.4225162,
   0.4085652,
   0.3895986,
   0.4061511,
   0.4271976,
   0.4072234,
   0.4014769,
   0.4093642,
   0.4098098,
   0.4312782,
   0.3963797,
   0.4443169,
   0.4167067,
   0.4922537,
   0.3773364,
   0.4969583,
   0.4111341,
   0.421138,
   0.5734539};
   Double_t _fehx3026[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3026[20] = {
   0.272189,
   0.4225162,
   0.4085652,
   0.3895986,
   0.4061511,
   0.4271976,
   0.4072234,
   0.4014769,
   0.4093642,
   0.4098098,
   0.4312782,
   0.3963797,
   0.4443169,
   0.4167067,
   0.4922537,
   0.3773364,
   0.4969583,
   0.4111341,
   0.421138,
   0.5734539};
   grae = new TGraphAsymmErrors(20,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ccccff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,55);
   Graph_Graph3026->SetMinimum(0);
   Graph_Graph3026->SetMaximum(2);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineWidth(2);
   Graph_Graph3026->SetMarkerStyle(20);
   Graph_Graph3026->GetXaxis()->SetTitle("Leading shower Conversion Distance [cm]");
   Graph_Graph3026->GetXaxis()->SetRange(1,91);
   Graph_Graph3026->GetXaxis()->SetNdivisions(509);
   Graph_Graph3026->GetXaxis()->SetLabelFont(132);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetXaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.85);
   Graph_Graph3026->GetXaxis()->SetTitleFont(132);
   Graph_Graph3026->GetYaxis()->SetTitle("Data/Prediction");
   Graph_Graph3026->GetYaxis()->SetNdivisions(210);
   Graph_Graph3026->GetYaxis()->SetLabelFont(132);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3026->GetYaxis()->SetLabelSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.1);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(0.35);
   Graph_Graph3026->GetYaxis()->SetTitleFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelFont(132);
   Graph_Graph3026->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3026->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3026->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3026);
   
   grae->Draw("a2");
   
   Double_t _fx3027[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3027[20] = {
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
   1,
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
   Double_t _felx3027[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3027[20] = {
   0.2502945,
   0.4026823,
   0.3777114,
   0.3758648,
   0.3800599,
   0.4093478,
   0.380436,
   0.3597191,
   0.3805315,
   0.3668956,
   0.3591862,
   0.367798,
   0.3716863,
   0.3509424,
   0.3872242,
   0.3212712,
   0.32297,
   0.351196,
   0.3224574,
   0.3608804};
   Double_t _fehx3027[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3027[20] = {
   0.2502945,
   0.4026823,
   0.3777114,
   0.3758648,
   0.3800599,
   0.4093478,
   0.380436,
   0.3597191,
   0.3805315,
   0.3668956,
   0.3591862,
   0.367798,
   0.3716863,
   0.3509424,
   0.3872242,
   0.3212712,
   0.32297,
   0.351196,
   0.3224574,
   0.3608804};
   grae = new TGraphAsymmErrors(20,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");

   ci = TColor::GetColor("#ffcccc");
   grae->SetFillColor(ci);
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,55);
   Graph_Graph3027->SetMinimum(0);
   Graph_Graph3027->SetMaximum(2);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineWidth(2);
   Graph_Graph3027->SetMarkerStyle(20);
   Graph_Graph3027->GetXaxis()->SetRange(1,91);
   Graph_Graph3027->GetXaxis()->SetNdivisions(509);
   Graph_Graph3027->GetXaxis()->SetLabelFont(132);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetXaxis()->SetTitleFont(132);
   Graph_Graph3027->GetYaxis()->SetNdivisions(509);
   Graph_Graph3027->GetYaxis()->SetLabelFont(132);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3027->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3027->GetYaxis()->SetTitleFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelFont(132);
   Graph_Graph3027->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3027->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3027->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("2 ");
   
   Double_t _fx3028[20] = {
   1.25,
   3.75,
   6.25,
   8.75,
   11.25,
   13.75,
   16.25,
   18.75,
   21.25,
   23.75,
   26.25,
   28.75,
   31.25,
   33.75,
   36.25,
   38.75,
   41.25,
   43.75,
   46.25,
   48.75};
   Double_t _fy3028[20] = {
   0.7437641,
   0.835219,
   0.7925022,
   0.9524537,
   0.8509511,
   1.041317,
   0.8116135,
   0.9056345,
   0.9639028,
   0.9943153,
   1.043743,
   0.8652045,
   0.6794273,
   1.012539,
   0.7060747,
   0.6349408,
   0.9721354,
   1.18221,
   0.886827,
   1.004369};
   Double_t _felx3028[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fely3028[20] = {
   0.0423799,
   0.07033813,
   0.06897846,
   0.07829122,
   0.07641767,
   0.09132952,
   0.08214502,
   0.09357846,
   0.09959928,
   0.1080066,
   0.1214381,
   0.1125943,
   0.11117,
   0.1429608,
   0.1221469,
   0.1150374,
   0.1477991,
   0.1757771,
   0.1690629,
   0.198694};
   Double_t _fehx3028[20] = {
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25,
   1.25};
   Double_t _fehy3028[20] = {
   0.0423799,
   0.07033813,
   0.06897846,
   0.07829122,
   0.07641767,
   0.09132952,
   0.08051206,
   0.09167663,
   0.09757508,
   0.1057037,
   0.1186653,
   0.1097164,
   0.1075882,
   0.1389924,
   0.117981,
   0.1109242,
   0.1433792,
   0.1706382,
   0.1626899,
   0.190912};
   grae = new TGraphAsymmErrors(20,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillStyle(1000);
   grae->SetLineWidth(2);
   grae->SetMarkerStyle(20);
   grae->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,55);
   Graph_Graph3028->SetMinimum(0.4366089);
   Graph_Graph3028->SetMaximum(1.436143);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineWidth(2);
   Graph_Graph3028->SetMarkerStyle(20);
   Graph_Graph3028->GetXaxis()->SetNdivisions(509);
   Graph_Graph3028->GetXaxis()->SetLabelFont(132);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetXaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetXaxis()->SetTitleFont(132);
   Graph_Graph3028->GetYaxis()->SetNdivisions(509);
   Graph_Graph3028->GetYaxis()->SetLabelFont(132);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3028->GetYaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3028->GetYaxis()->SetTitleFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelFont(132);
   Graph_Graph3028->GetZaxis()->SetLabelSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.08);
   Graph_Graph3028->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3028->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3028);
   
   grae->Draw("p ");
   
   TH1F *hist__21 = new TH1F("hist__21","NCpi0BDT_FC_Np_bnb_12_kine_pio_gap_high_all",20,0,50);

   ci = TColor::GetColor("#000099");
   hist__21->SetLineColor(ci);
   hist__21->GetXaxis()->SetLabelFont(42);
   hist__21->GetXaxis()->SetTitleOffset(1);
   hist__21->GetXaxis()->SetTitleFont(42);
   hist__21->GetYaxis()->SetNdivisions(405);
   hist__21->GetYaxis()->SetLabelFont(42);
   hist__21->GetYaxis()->SetTitleFont(42);
   hist__21->GetZaxis()->SetLabelFont(42);
   hist__21->GetZaxis()->SetTitleOffset(1);
   hist__21->GetZaxis()->SetTitleFont(42);
   hist__21->Draw("axis same");
   TLine *line = new TLine(0,1,50,1);
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
   canvas7->cd();
   canvas7->Modified();
   canvas7->cd();
   canvas7->SetSelected(canvas7);
}
